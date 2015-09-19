/*
	Author: Deltagamer, Alexander (ImperialAlex), Lifetap

	Description:
	Checks if caller is player and in cargo position with ramp lowered or open. Whilst making sure vehicle is above defined height.

*/

// For Deploying Static Line
private ["_vehicle","_canDeploy","_heightAboveGround"];
_vehicle = _this;
   
_canDeploy = false;
if ((player == (driver _vehicle)) && (_vehicle animationPhase 'door_2_1' < 0.8) && (_vehicle animationPhase 'door_2_2' > 0.8)) then {
   _heightAboveGround = (getPosATL _vehicle) select 2;
   if (_heightAboveGround > 140) then {
      _canDeploy = true;
   };
};
_canDeploy