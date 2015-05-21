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