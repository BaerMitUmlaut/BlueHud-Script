class CfgPatches {
	class BlueHud {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.1;
		requiredAddons[] = {"CBA_Main"};
		version = "1.11";
		versionStr = "1.11";
		versionAr[] = {1,11,0};
		author[] = {"BaerMitUmlaut"};
		authorUrl = "https://github.com/BaerMitUmlaut";
	};
};

class CfgFunctions {
	class BlueHud {
		class BlueHud {
			file = "BlueHud\functions";
			class initHud {postInit = 1;};
			class getRole {};
			class setRole {};
			class vectorRotate {};
			class getEyeDir {};
			class getColor {};
			class initSettingsDialog {};
			class unfade {};
			class watchColor {};
			class buildEH {};
			class setServerSettings {};
		};
	};
};

class RscTitles {
	class BlueHud {
		idd = -1;
		onLoad = "uiNamespace setVariable ['BlueHudMap', ((_this select 0) displayCtrl 1)]";
		duration = 10e10;
		fadein = 0;
		fadeout = 0;
		movingEnable = false;
		enableSimulation = 1;
		enableDisplay = 1;
		class controls {
			class ctrlMap {
				idc = 1;
				type = 100;
				style = 0;
				x = safeZoneX + safeZoneW / 2 - 0.3;
				y = safeZoneY + safeZoneH - (0.3 * 4/3);
				w = 0.6;
				h = 0.6 * 4/3;
				font = "PuristaMedium";
				sizeEx = 0;
				colorBackground[] = {0,0,0,0};
				colorText[] = {0,0,0,0};
				text = "";
				ptsPerSquareSea = 1000;
				ptsPerSquareTxt = 1000;
				ptsPerSquareCLn = 1000;
				ptsPerSquareExp = 1000;
				ptsPerSquareCost = 1000;
				ptsPerSquareFor = 1000;
				ptsPerSquareForEdge = 1000;
				ptsPerSquareRoad = 1000;
				ptsPerSquareObj = 1000;
				alphaFadeStartScale = 0;
				alphaFadeEndScale = 0;
				colorLevels[]={0,0,0,0};
				colorSea[]={0,0,0,0};
				colorForest[]={0,0,0,0};
				colorRocks[]={0,0,0,0};
				colorCountlines[]={0,0,0,0};
				colorMainCountlines[]={0,0,0,0};
				colorCountlinesWater[]={0,0,0,0};
				colorMainCountlinesWater[]={0,0,0,0};
				colorPowerLines[]={0,0,0,0};
				colorRailWay[]={0,0,0,0};
				colorForestBorder[]={0,0,0,0};
				colorRocksBorder[]={0,0,0,0};
				colorNames[]={0,0,0,0};
				colorInactive[]={0,0,0,0};
				colorOutside[]={0,0,0,0};
				colorGrid[]={0,0,0,0};
				colorGridMap[]={0,0,0,0};
				colorTracks[]={0,0,0,0};
				colorTracksFill[]={0,0,0,0};
				colorRoads[]={0,0,0,0};
				colorRoadsFill[]={0,0,0,0};
				colorMainRoads[]={0,0,0,0};
				colorMainRoadsFill[]={0,0,0,0};
				fontLabel = "PuristaMedium";
				sizeExLabel = 0;
				fontGrid = "PuristaMedium";
				sizeExGrid = 0;
				fontUnits = "PuristaMedium";
				sizeExUnits = 0;
				fontNames = "PuristaMedium";
				sizeExNames = 0;
				fontInfo = "PuristaMedium";
				sizeExInfo = 0;
				fontLevel = "PuristaMedium";
				sizeExLevel = 0;
				stickX[] = {0, {"Gamma", 0, 0}};
				stickY[] = {0, {"Gamma", 0, 0}};
				ptsPerSquareSea = 0;
				ptsPerSquareTxt = 0;
				ptsPerSquareCLn = 0;
				ptsPerSquareExp = 0;
				ptsPerSquareCost = 0;
				ptsPerSquareFor = 0;
				ptsPerSquareForEdge = 0;
				ptsPerSquareRoad = 0;
				ptsPerSquareObj = 0;
				showCountourInterval = 0;
				scaleMin = 0;
				scaleMax = 1;
				scaleDefault = 0.03;
				maxSatelliteAlpha = 0;
				alphaFadeStartScale = 0;
				alphaFadeEndScale = 0;
				onMouseButtonClick = "";
				onMouseButtonDblClick = "";
				class Task {icon="";color[]={0,0,0,0};iconCreated="";colorCreated[]={0,0,0,0};iconCanceled="";colorCanceled[]={0,0,0,0};iconDone="";colorDone[]={0,0,0,0};iconFailed="";colorFailed[]={0,0,0,0};size=0;importance=0;coefMin=0;coefMax=0;};
				class CustomMark {icon="";color[]={0,0,0,0};size=0;importance=0;coefMin=0;coefMax=0;};
				class Bunker {icon="";color[]={0,0,0,0};size=0;importance=0;coefMin=0;coefMax=0;};
				class Bush {icon="";color[]={0,0,0,0};size=0;importance=0;coefMin=0;coefMax=0;};
				class BusStop {icon="";color[]={0,0,0,0};size=0;importance=0;coefMin=0;coefMax=0;};
				class Command {icon="";color[]={0,0,0,0};size=0;importance=0;coefMin=0;coefMax=0;};
				class Cross {icon="";color[]={0,0,0,0};size=0;importance=0;coefMin=0;coefMax=0;};
				class Fortress {icon="";color[]={0,0,0,0};size=0;importance=0;coefMin=0;coefMax=0;};
				class Fuelstation {icon="";color[]={0,0,0,0};size=0;importance=0;coefMin=0;coefMax=0;};
				class Fountain {icon="";color[]={0,0,0,0};size=0;importance=0;coefMin=0;coefMax=0;};
				class Hospital {icon="";color[]={0,0,0,0};size=0;importance=0;coefMin=0;coefMax=0;};
				class Chapel {icon="";color[]={0,0,0,0};size=0;importance=0;coefMin=0;coefMax=0;};
				class Church {icon="";color[]={0,0,0,0};size=0;importance=0;coefMin=0;coefMax=0;};
				class Lighthouse {icon="";color[]={0,0,0,0};size=0;importance=0;coefMin=0;coefMax=0;};
				class Quay {icon="";color[]={0,0,0,0};size=0;importance=0;coefMin=0;coefMax=0;};
				class Rock {icon="";color[]={0,0,0,0};size=0;importance=0;coefMin=0;coefMax=0;};
				class Ruin {icon="";color[]={0,0,0,0};size=0;importance=0;coefMin=0;coefMax=0;};
				class SmallTree {icon="";color[]={0,0,0,0};size=0;importance=0;coefMin=0;coefMax=0;};
				class Stack {icon="";color[]={0,0,0,0};size=0;importance=0;coefMin=0;coefMax=0;};
				class Tree {icon="";color[]={0,0,0,0};size=0;importance=0;coefMin=0;coefMax=0;};
				class Tourism {icon="";color[]={0,0,0,0};size=0;importance=0;coefMin=0;coefMax=0;};
				class Transmitter {icon="";color[]={0,0,0,0};size=0;importance=0;coefMin=0;coefMax=0;};
				class ViewTower {icon="";color[]={0,0,0,0};size=0;importance=0;coefMin=0;coefMax=0;};
				class Watertower {icon="";color[]={0,0,0,0};size=0;importance=0;coefMin=0;coefMax=0;};
				class Waypoint {icon="";color[]={0,0,0,0};size=0;importance=0;coefMin=0;coefMax=0;};
				class WaypointCompleted {icon="";color[]={0,0,0,0};size=0;importance=0;coefMin=0;coefMax=0;};
				class ActiveMarker {icon="";color[]={0,0,0,0};size=0;importance=0;coefMin=0;coefMax=0;};
				class PowerSolar {icon="";color[]={0,0,0,0};size=0;importance=0;coefMin=0;coefMax=0;};
				class PowerWave {icon="";color[]={0,0,0,0};size=0;importance=0;coefMin=0;coefMax=0;};
				class PowerWind {icon="";color[]={0,0,0,0};size=0;importance=0;coefMin=0;coefMax=0;};
				class Shipwreck {icon="";color[]={0,0,0,0};size=0;importance=0;coefMin=0;coefMax=0;};
			};
		};
	};
};

class dlgBlueHudSettings {
	idd = -1;
	onLoad = "(_this select 0) call BlueHud_fnc_initSettingsDialog;";
	onDestroy = "systemChat str ['onDestroy',_this]; false";
	duration = 10e10;
	fadein = 0;
	fadeout = 0;
	movingEnable = false;
	enableSimulation = 1;
	enableDisplay = 0;
	class controls {

		class TitleBaer {
			type = 0;
			style = 0;
			idc = -1;
			colorBackground[] = {0,0,0.2,0.8};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = 0.04;
			text = "BLUE HUD SETTINGS";
			h = 0.05;
			w = 0.6;
			x = safeZoneX + safeZoneW/2 - 0.3;
			y = safeZoneY + safeZoneH/2 - 0.175 -0.109;
		};

		class Background {
			type = 0;
			style = 0;
			idc = -1;
			colorBackground[] = {0.16,0.16,0.16,0.5};
			colorText[] = {0.16,0.16,0.16,1};
			font = "PuristaMedium";
			sizeEx = 0;
			text = "";
			h = 0.518;
			w = 0.6;
			x = safeZoneX + safeZoneW/2 - 0.3;
			y = safeZoneY + safeZoneH/2 - 0.125 -0.109;
		};

		class BlueHudText {
			type = 0;
			style = 0;
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = 0.04;
			h = 0.04;
			w = 0.3;
			x = safeZoneX + safeZoneW/2 - 0.3 + (0.025 * 3/4);
		};

		class txtRole : BlueHudText {
			idc = -1;
			text = "Select role:";
			y = safeZoneY + safeZoneH/2 - 0.095 -0.109;
		};

		class BlueHudCmb {

			text = "";
			access = 0;
			type = 4;
			style = 0;
			blinkingPeriod = 0;

			colorBackground[] = {0.2,0.2,0.2,0.9};
			colorSelectBackground[] = {0.7,0.7,0.7,0.9};

			sizeEx = 0.04;
			font = "PuristaMedium";
			shadow = 0;
			colorText[] = {1,1,1,1};
			colorDisabled[] = {1,1,1,0.5};
			colorSelect[] = {0,0,0,1};

			pictureColor[] = {1,0.5,0,1};
			pictureColorSelect[] = {1,1,1,1};
			pictureColorDisabled[] = {1,1,1,0.5};

			tooltip = "";
			tooltipColorShade[] = {0,0,0,0};
			tooltipColorText[] = {1,1,1,0};
			tooltipColorBox[] = {1,1,1,0};

			arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa";
			arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa";

			wholeHeight = 0.6;
			maxHistoryDelay = 1;

			soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1};
			soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1};
			soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1};

			class ComboScrollBar
			{
				width = 0;
				height = 0;
				scrollSpeed = 0.01;

				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";

				color[] = {1,1,1,1};
			};
		};

		class cmbRole : BlueHudCmb {
			idc = 1;
			x = safeZoneX + safeZoneW/2 - 0.1 - (0.025 * 3/4);
			y = safeZoneY + safeZoneH/2 - 0.10 -0.109;
			w = 0.4;
			h = 0.05;
			onLBSelChanged = "[player, (_this select 1)] call BlueHud_fnc_setRole; false";
		};

		class BlueHudCheckbox {
			type = 77;
			style = 0;
			checked = 0;
			x = safeZoneX + safeZoneW / 2 + (0.3 - 0.05 * 3/4) - (0.025 * 3/4);
			color[] = {1,1,1,0.69999999};
			colorFocused[] = {1,1,1,1};
			colorHover[] = {1,1,1,1};
			colorPressed[] = {1,1,1,1};
			colorDisabled[] = {1,1,1,0.2};
			colorBackground[] = {0,0,0,0};
			colorBackgroundFocused[] = {0,0,0,0};
			colorBackgroundHover[] = {0,0,0,0};
			colorBackgroundPressed[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			textureChecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
			textureUnchecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
			textureFocusedChecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
			textureFocusedUnchecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
			textureHoverChecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
			textureHoverUnchecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
			texturePressedChecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
			texturePressedUnchecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
			textureDisabledChecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
			textureDisabledUnchecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";

			tooltip = "";
			tooltipColorShade[] = {0,0,0,0};
			tooltipColorText[] = {1,1,1,0};
			tooltipColorBox[] = {1,1,1,0};

			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.1,1};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.1,1};
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.1,1};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.1,1};
		};

		class txtCompass : BlueHudText {
			idc = -1;
			text = "Show compass";
			y = safeZoneY + safeZoneH/2 - 0.027 -0.109;
		};

		class cbCompass : BlueHudCheckbox {
			idc = 3;
			y = safeZoneY + safeZoneH/2 - 0.029 -0.109;
			w = 0.05 * 3/4;
			h = 0.05;
			onCheckedChanged = "if (_this select 1 == 1) then {BlueHudSettings set [0, true]} else {BlueHudSettings set [0, false]}; profileNamespace setVariable ['BlueHudSettings', BlueHudSettings]; [] call BlueHud_fnc_buildEH; false";
		};

		class txtSquad : BlueHudText {
			idc = -1;
			text = "Only show squad members";
			y = safeZoneY + safeZoneH/2 + 0.043 -0.109;
		};

		class cbSquad : BlueHudCheckbox	{
			idc = 4;
			y = safeZoneY + safeZoneH/2 + 0.041 -0.109;
			w = 0.05 * 3/4;
			h = 0.05;
			onCheckedChanged = "if (_this select 1 == 1) then {BlueHudSettings set [1, true]} else {BlueHudSettings set [1, false]}; profileNamespace setVariable ['BlueHudSettings', BlueHudSettings]; [] call BlueHud_fnc_buildEH; false";
		};

		class txtDot : BlueHudText {
			idc = -1;
			text = "Show player position";
			y = safeZoneY + safeZoneH/2 + 0.113 -0.109;
		};

		class cbDot : BlueHudCheckbox	{
			idc = 5;
			y = safeZoneY + safeZoneH/2 + 0.111 -0.109;
			w = 0.05 * 3/4;
			h = 0.05;
			onCheckedChanged = "if (_this select 1 == 1) then {BlueHudSettings set [2, true]} else {BlueHudSettings set [2, false]}; profileNamespace setVariable ['BlueHudSettings', BlueHudSettings]; [] call BlueHud_fnc_buildEH; false";
		};

		class txtFade : BlueHudText {
			idc = -1;
			text = "Automatically fade out";
			y = safeZoneY + safeZoneH/2 + 0.183 -0.109;
		};

		class cbFade : BlueHudCheckbox	{
			idc = 6;
			y = safeZoneY + safeZoneH/2 + 0.181 -0.109;
			w = 0.05 * 3/4;
			h = 0.05;
			onCheckedChanged = "if (_this select 1 == 1) then {BlueHudSettings set [4, true]; BlueHudCurrentAlpha = 0.8; BlueHudLastUnfade = time;} else {BlueHudSettings set [4, false]; BlueHudCurrentAlpha = 0.8;}; profileNamespace setVariable ['BlueHudSettings', BlueHudSettings]; [] call BlueHud_fnc_buildEH; false";
		};

		class txtFOV : BlueHudText {
			idc = -1;
			text = "HUD mode:";
			y = safeZoneY + safeZoneH/2 + 0.253 -0.109;
		};

		class cmbFOV : BlueHudCmb {
			idc = 7;
			x = safeZoneX + safeZoneW/2 - 0.1 - (0.025 * 3/4);
			y = safeZoneY + safeZoneH/2 + 0.248 -0.109;
			w = 0.4;
			h = 0.05;
			onLBSelChanged = "";
		};

		class txtSize : BlueHudText {
			idc = -1;
			text = "HUD size:";
			y = safeZoneY + safeZoneH/2 + 0.323 -0.109;
		};

		class sldSize {
			idc = 8;
			type = 43;
			style = 1024;
			arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
			arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
			border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
			thumb = "\A3\ui_f\data\gui\cfg\slider\thumb_ca.paa";
			color[] = {1,1,1,0.7};
			colorActive[] = {1,1,1,0.7};
			colorDisabled[] = {0,0,0,0.7};
			x = safeZoneX + safeZoneW/2 - 0.1 - (0.025 * 3/4);
			y = safeZoneY + safeZoneH/2 + 0.318 -0.109;
			w = 0.4;
			h = 0.05;
			onSliderPosChanged = "(uiNamespace getVariable 'BlueHudMap') ctrlMapAnimAdd [0, (BlueHUDMapZoomConstant / (_this select 1)), BlueHUDMapZero]; ctrlMapAnimCommit (uiNamespace getVariable 'BlueHudMap'); BlueHudSettings set [5, (_this select 1)]; profileNamespace setVariable ['BlueHudSettings', BlueHudSettings]; [] call BlueHud_fnc_buildEH; false";
		};
	};
};