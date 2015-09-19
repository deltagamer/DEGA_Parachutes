_Parachute = _this select 0;
_caller = _this select 1;

deleteVehicle _Parachute;
_ParachuteBag = "DEGA_T10_Parachute_backpack" createVehicle position _caller; 
_ParachuteBagHold = nearestObject [_ParachuteBag, "GroundWeaponHolder"];  
_ParachuteBagHold attachTo [_caller, [0,0,0],"Head"];  
detach _ParachuteBag;
detach _ParachuteBagHold;