private ["_camPos1", "_camPos2", "_return"];

_camPos1 = positionCameraToWorld [0,0,0];
_camPos2 = positionCameraToWorld [0,0,1];
_return = (((_camPos1 select 0) - (_camPos2 select 0)) atan2 ((_camPos1 select 1) - (_camPos2 select 1)));
_return