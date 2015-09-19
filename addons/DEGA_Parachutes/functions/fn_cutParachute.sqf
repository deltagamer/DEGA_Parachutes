_Parachute = _this select 0;
_caller = _this select 1;
	
moveOut _caller;
deleteVehicle _Parachute;
_caller allowDamage true;
	