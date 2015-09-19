private ["_vehicle","_paraunit"];
_vehicle = [_this,0,objNull,[objNull]] call bis_fnc_param;

if (!isNull(_vehicle)) then {  
	_cargo = assignedCargo _vehicle;
	
	for [{_x = 0},{_x <= ((count _cargo) - 2)},{_x = _x + 1}] do {
		[_vehicle, _cargo select _x] call DEGA_fnc_Chairborne_deployStaticLine_c130_left;
		_x = _x + 1;
		[_vehicle, _cargo select _x] call DEGA_fnc_Chairborne_deployStaticLine_c130_right;
		sleep 0.7;
	};
};