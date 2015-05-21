private ["_unit", "_return"];

_unit = _this;

_return = switch true do {
	case (leader group _unit == _unit): {"SQL"};
	case !(_unit getVariable ["BlueHud_Role", ""] == ""): {_unit getVariable ["BlueHud_Role", ""]};
	case (getNumber(configFile >> "CfgVehicles" >> typeOf _unit >> "attendant") == 1): {"Medic"};
	case !(secondaryWeapon _unit == ""): {"Rifleman AT"};
	case (getText (configFile >> "CfgVehicles" >> typeOf _unit >> "Displayname") == "Autorifleman"
			|| getText (configFile >> "CfgVehicles" >> typeOf _unit >> "Displayname") == "Machinegunner"
			|| getNumber (configFile >> "CfgMagazines" >> currentMagazine _unit >> "count") > 99): {"Autorifleman"};
	case (getNumber(configFile >> "CfgVehicles" >> typeOf _unit >> "engineer") == 1): {"Engineer"};
	case (getText (configFile >> "CfgVehicles" >> typeOf _unit >> "Displayname") == "Explosive Specialist"): {"Explosive Specialist"};
	case (getText (configFile >> "CfgVehicles" >> typeOf _unit >> "Displayname") == "Grenadier"
			|| count getArray (configfile >> "CfgWeapons" >> primaryWeapon _unit >> "muzzles") > 1): {"Grenadier"};
	case (getText (configFile >> "CfgVehicles" >> typeOf _unit >> "Displayname") == "Ammo Bearer"): {"Ammo Bearer"};
	case (getText (configFile >> "CfgVehicles" >> typeOf _unit >> "Displayname") == "Marksman"
			|| getText (configFile >> "CfgVehicles" >> typeOf _unit >> "Displayname") == "Sniper"): {"Marksman"};
	case (getText (configFile >> "CfgVehicles" >> typeOf _unit >> "Displayname") == "JTAC"): {"JTAC"};
	default {"Rifleman"};
};

_return