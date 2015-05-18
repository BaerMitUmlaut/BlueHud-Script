private ["_vector", "_angle", "_return"];

_vector = _this select 0;
_angle = _this select 1;

_return = [(_vector select 0) * cos _angle - (_vector select 1) * sin _angle];
_return pushBack ((_vector select 0) * sin _angle + (_vector select 1) * cos _angle);
_return pushBack 0;

_return