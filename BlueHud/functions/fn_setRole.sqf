private ["_roleList"];

_roleList = ["",
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

if (typeName (_this select 1) == "SCALAR") then {
	if ((_this select 1) < count _roleList && (_this select 1) >= 0) then {
		(_this select 0) setVariable ["BlueHud_Role", (_roleList select (_this select 1)), true];
	} else {
		(_this select 0) setVariable ["BlueHud_Role", "", true];
	};
} else {
	if ((_this select 1) in _roleList) then {
		(_this select 0) setVariable ["BlueHud_Role", (_this select 1), true];
	} else {
		(_this select 0) setVariable ["BlueHud_Role", "", true];
	};
};