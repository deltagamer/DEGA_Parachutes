class CfgFunctions 
{
	class DEGA
	{
		class Static_Line_Parachute
		{
			file = "\DEGA_Static_Line\Functions";
			class cutParachute {};
			class packParachute {};
            class Cargo_Static_Line {};			
		};	
		class Deltagamer_Static_Line_Parachute
		{
			file = "\DEGA_Static_Line\Functions\Deltagamer_Aircraft";
			class Deltagamer_CH47_canDeployStaticLine {};
			class Deltagamer_CH47_deployStaticLine {};
			// Pilot Mass Paradrop			
            class Deltagamer_CH47_Pilot_canDeployStaticLine {};
            class Deltagamer_Pilot_Exec_CargoDrop {};			
		};		
		class Chairborne_Static_Line_Parachute
		{
			file = "\DEGA_Static_Line\Functions\Chairborne_Aircraft";
			class Chairborne_canDeployStaticLine_c130_left {};
			class Chairborne_canDeployStaticLine_c130_right {};
			class Chairborne_deployStaticLine_c130_left {};
			class Chairborne_deployStaticLine_c130_right {};
			// Pilot Mass Paradrop
			class Chairborne_Pilot_canDeployStaticLine_c130_left {};
			class Chairborne_Pilot_canDeployStaticLine_c130_Right {};
			class Chairborne_Pilot_canDeployStaticLine_c130_both {}; 
            class Chairborne_Pilot_Exec_CargoDrop_left {};	
            class Chairborne_Pilot_Exec_CargoDrop_right {};
            class Chairborne_Pilot_Exec_CargoDrop_both {};			
		};
	};
};