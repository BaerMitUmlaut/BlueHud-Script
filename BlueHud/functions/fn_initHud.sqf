//Shutdown on HC
if (!hasInterface && !isServer) exitWith {};

//Distribute settings if server
if (isServer && isMultiplayer) exitWith {
	//Set constants
	BLUEHUD_180 = 1;
	BLUEHUD_MIDWAY = 2;
	BLUEHUD_360 = 4;

	//Set default values
	BlueHUD_allowedHUDModes = BLUEHUD_360 + BLUEHUD_MIDWAY + BLUEHUD_180;
	BlueHUD_allowTeamColors = true;
	BlueHUD_allowCompass = true;

	//Read values from file
	[] call compile preprocessFile "\userconfig\BlueHud\serverDifficultySettings.hpp";

	[[BlueHUD_allowedHUDModes, BlueHUD_allowTeamColors, BlueHUD_allowCompass], "BlueHud_fnc_setServerSettings", true, true] call BIS_fnc_MP;
};

[] spawn {
	//Mission Root method by Karel Moricky via Killzonekid
	BlueHud_MissionRoot = call {
		private "_arr";
		_arr = toArray str missionConfigFile;
		_arr resize (count _arr - 15);
		toString _arr
	};

	//Load settings stored in profile, if not present use default settings
	BlueHudSettings = profileNamespace getVariable ["BlueHudSettings", [false, false, true, [0,0,0], false, 0.08]];
	//Backwards compatibility
	if (count BlueHudSettings < 4) then {
		BlueHudSettings pushBack [0,0,0];
		profileNamespace setVariable ['BlueHudSettings', BlueHudSettings];
	};
	if (count BlueHudSettings < 5) then {
		BlueHudSettings pushBack false;
		profileNamespace setVariable ['BlueHudSettings', BlueHudSettings];
	};
	if (count BlueHudSettings < 6) then {
		BlueHudSettings pushBack 0.08;
		profileNamespace setVariable ['BlueHudSettings', BlueHudSettings];
	};

	BlueHudShift = BlueHudSettings select 3;
	if (BlueHudSettings select 4) then {
		BlueHudCurrentAlpha = 0;
	} else {
		BlueHudCurrentAlpha = 0.8;	
	};
	BlueHudLastUnfade = -100;

	//Set default server settings
	BlueHUD_allowedHUDModes = 7;
	BlueHUD_allowTeamColors = true;
	BlueHUD_allowCompass = true;

	("BHUDLayer" call BIS_fnc_rscLayer) cutRsc ["BlueHud", "PLAIN"];

	//Center map on [0,0] for map zoom constant calculation
	(uiNamespace getVariable "BlueHudMap") ctrlMapAnimAdd [0, 0.001, [0, 0, 0]];
	ctrlMapAnimCommit (uiNamespace getVariable "BlueHudMap");
	waitUntil {ctrlMapAnimDone (uiNamespace getVariable "BlueHudMap")};

	//How many square meters per pixel are drawn at a certain zoom level unfortunately depends on the map,
	//thus we need to calculate the correct map zoom. This is done by checking where it draws [0,0] and [0,10]
	//on the screen and comparing said distance to the zoom level.
	_delta = (((uiNamespace getVariable "BlueHudMap") ctrlMapWorldToScreen [0,0]) select 1) - (((uiNamespace getVariable "BlueHudMap") ctrlMapWorldToScreen [0,10]) select 1);
	//Now we calculate the map's zoom factor (which is directly related to the map size):
	BlueHUDMapZoomConstant = _delta * 0.001;
	//And finally the correct zoom factor (the setting saves the distance we want between [0,0] and [0,10] on the screen):
	_zoom = BlueHUDMapZoomConstant / (BlueHudSettings select 5);

	//We center this time on a custom "zero point" to make sure we don't get any terrain markers - this can be an issue if we stay at [0, 0]
	//This way everything seen on screen is actually drawn outside of the map
	BlueHUDMapZero = [(getNumber (configFile>>"CfgWorlds">>worldName>>"Grid">>"OffsetX")), (getNumber (configFile>>"CfgWorlds">>worldName>>"Grid">>"OffsetY")), 0];
	(uiNamespace getVariable "BlueHudMap") ctrlMapAnimAdd [0, _zoom, BlueHUDMapZero];
	ctrlMapAnimCommit (uiNamespace getVariable "BlueHudMap");
	waitUntil {ctrlMapAnimDone (uiNamespace getVariable "BlueHudMap")};

	//Start team color watcher thread
	[] call BlueHud_fnc_watchColor;

	//Create EventHandler to draw HUD
	[] call BlueHud_fnc_buildEH;

	//Deactivate ST HUD if present
	if ("st_sthud" in activatedAddons) then {
		[] spawn {
			waitUntil {missionNamespace getVariable ["ST_STHud_ShownUI", -1] != -1};
			ST_STHud_ShownUI = 0;
		};
	};

	//Register settings keybind
	["BlueHUD", "showSettingsKey", "Show settings", {createDialog "dlgBlueHudSettings";}, {}, [48, [true, true, false]]] call CBA_fnc_addKeybind;
	["BlueHUD", "toggleHUDKey", "Toggle HUD", {(uiNamespace getVariable "BlueHudMap") ctrlShow !(ctrlShown (uiNamespace getVariable "BlueHudMap"))}, {}, [48, [true, false, true]]] call CBA_fnc_addKeybind;
	["BlueHUD", "unfadeHUDKey", "Unfade HUD", {[] call BlueHud_fnc_unfade; false}, {}, [15, [false, false, false]]] call CBA_fnc_addKeybind;

	BlueHud_initialized = true;
};