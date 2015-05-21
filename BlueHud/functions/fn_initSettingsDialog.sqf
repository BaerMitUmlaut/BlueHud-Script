private ["_dialog", "_roleList"];

_dialog = _this;

if (player getVariable ["BlueHud_Role", ""] == "") then {
	_roleList = ["Auto-Detect (" + (player call BlueHud_fnc_getRole) + ")",
		"Rifleman",
		"Medic",
		"Rifleman AT",
		"Autorifleman",
		"Grenadier",
		"Marksman",
		"Engineer",
		"Explosive Specialist",
		"Ammo Bearer",
		"JTAC"];
} else {
	_roleList = ["Auto-Detect",
		"Rifleman",
		"Medic",
		"Rifleman AT",
		"Autorifleman",
		"Grenadier",
		"Marksman",
		"Engineer",
		"Explosive Specialist",
		"Ammo Bearer",
		"JTAC"];
};

{_dialog displayCtrl 1 lbAdd _x;} foreach _roleList;

if (player getVariable ["BlueHud_Role", ""] == "") then {
	_dialog displayCtrl 1 lbSetCurSel 0;
} else {
	_dialog displayCtrl 1 lbSetCurSel (_roleList find (player getVariable ["BlueHud_Role", ""]));
};

_fovList = [];
if ((BlueHUD_allowedHUDModes mod 2) == 1) then {_fovList pushBack ["180°", [0,0,0]]};
if (floor(BlueHUD_allowedHUDModes/2) == 1 || floor(BlueHUD_allowedHUDModes/2) == 3) then {_fovList pushBack ["Midway", [0,10,0]]};
if (BlueHUD_allowedHUDModes >= 4) then {_fovList pushBack ["360°", [0,20,0]]};

{_dialog displayCtrl 7 lbAdd (_x select 0);} foreach _fovList;
_dialog displayCtrl 7 ctrlSetEventHandler ["LBSelChanged", "BlueHudShift = (" + (str _fovList) + " select (_this select 1)) select 1; BlueHudSettings set [3, BlueHudShift]; profileNamespace setVariable ['BlueHudSettings', BlueHudSettings]; [] call BlueHud_fnc_buildEH; false"];

switch (BlueHudShift) do {
	case [0,0,0]: {_dialog displayCtrl 7 lbSetCurSel (_fovList find ["180°", [0,0,0]]);};
	case [0,10,0]: {_dialog displayCtrl 7 lbSetCurSel (_fovList find ["Midway", [0,10,0]]);};
	case [0,20,0]: {_dialog displayCtrl 7 lbSetCurSel (_fovList find ["360°", [0,20,0]]);};
};

_dialog displayCtrl 8 sliderSetRange [0.04,0.1];
_dialog displayCtrl 8 sliderSetPosition 1;
_dialog displayCtrl 8 sliderSetSpeed [0.005, 0.005];
_dialog displayCtrl 8 sliderSetPosition (BlueHudSettings select 5);

if (BlueHudSettings select 0 && BlueHUD_allowCompass) then {
	_dialog displayCtrl 3 cbSetChecked true;
};
if !(BlueHUD_allowCompass) then {
	_dialog displayCtrl 3 ctrlEnable false;
};
if (BlueHudSettings select 1) then {
	_dialog displayCtrl 4 cbSetChecked true;
};
if (BlueHudSettings select 2) then {
	_dialog displayCtrl 5 cbSetChecked true;
};
if (BlueHudSettings select 4) then {
	_dialog displayCtrl 6 cbSetChecked true;
};