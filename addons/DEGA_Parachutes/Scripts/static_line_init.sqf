_target = _this select 0;



if (_target isKindOf "Helicopter") then

{

   player addAction ["<t color='#2E9AFE'>Static Line Paradrop</t>", "_this call DEGA_fnc_deployStaticLine",[],0,true,true,"","_target call DEGA_fnc_canDeployStaticLine"];

};

if (_target isKindOf "Plane") then

{

   player addAction ["<t color='#2E9AFE'>Static Line Paradrop</t>", "_this call DEGA_fnc_deployStaticLine",[],0,true,true,"","_target call DEGA_fnc_canDeployStaticLine"];

};