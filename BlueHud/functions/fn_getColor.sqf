private ["_color"];
if (BlueHUD_allowTeamColors) then {
	if (_this in (units player)) then {
		_color = switch (_this getVariable ["BlueHud_TeamColor", "MAIN"]) do {
			case "MAIN": {[1,1,1]};
			case "BLUE": {[0,0,0.8]};
			case "RED": {[0.8,0,0]};
			case "GREEN": {[0,0.8,0]};
			case "YELLOW": {[0.8,0.8,0]};
			default {[1,1,1]};
		};
	} else {
		_color = [0.2,0.2,0.2];
	};
} else {
	_color = [1,1,1];
};
_color pushBack (BlueHudCurrentAlpha min ((20 - (player distance _this)) / 15));
_color