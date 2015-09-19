private ["_vehicle","_paraunit"];
_vehicle = [_this,0,objNull,[objNull]] call bis_fnc_param;
if (!isNull(_vehicle)) then {	
_paraunit = assignedcargo _vehicle;
	{
    [_vehicle,_x] call DEGA_fnc_deployStaticLine;
    sleep 0.5;//So units are not too far spread out when they land.
	} forEach _paraunit;
};

// ADD THE BELOW CODE TO MASS PARADROP ALL PLAYER/AI IN THE CARGO OF YOUR VEHICLE
//_paras = [AIRCRAFT_NAME] execVM "AI_Static_Line.sqf";