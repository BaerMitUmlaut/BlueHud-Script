_this spawn {
	waitUntil{!isNil "BlueHud_initialized"};
	waitUntil{BlueHud_initialized};

	BlueHUD_allowedHUDModes = _this select 0;
	BlueHUD_allowTeamColors = _this select 1;
	BlueHUD_allowCompass = _this select 2;

	[] call BlueHud_fnc_buildEH;
};