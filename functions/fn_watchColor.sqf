[] spawn {
	_wasLeaderBefore = (leader player == player);
	while {alive player} do {
		if (leader player == player) then {
			if (_wasLeaderBefore) then {
				{
					if ((assignedTeam _x) != (_x getVariable ["BlueHud_TeamColor", "MAIN"])) then {
						_x setVariable ["BlueHud_TeamColor", assignedTeam _x, true];
					};
				} forEach units player;
			} else {
				//If the player just became SQL, make sure the colors from the original SQL are reassigned
				{
					_x assignTeam (_x getVariable ["BlueHud_TeamColor", "MAIN"]);
				} forEach units player;
			};
		};
		_wasLeaderBefore = (leader player == player);
		sleep 1;
	};
};