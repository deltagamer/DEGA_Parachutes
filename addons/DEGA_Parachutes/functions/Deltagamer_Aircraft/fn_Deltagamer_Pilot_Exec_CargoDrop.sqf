private ["_vehicle","_paraunit"];
_vehicle = [_this,0,objNull,[objNull]] call bis_fnc_param;
if (!isNull(_vehicle)) then {	
_paraunit = assignedcargo _vehicle;
	{
    [_vehicle,_x] call DEGA_fnc_Deltagamer_CH47_deployStaticLine;
    sleep 0.8;//So units are not too far spread out when they land.
	} forEach _paraunit;
};
