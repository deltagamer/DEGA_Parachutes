
class CfgPatches
{
	class DEGA_Static_Line
	{
		units[] = 
		{
		    "DEGA_T10_Parachute",
		    "DEGA_T10_Parachute_backpack"
		};
		weapons[] = {};
		requiredVersion = 1.0.0.3;
		requiredAddons[] = 
		{
		    "A3_Air_F", 			
		    "A3_Characters_F",
			"A3_Weapons_F",
			"A3_Anims_F",
			"A3_Anims_F_Config_Sdr",
			"A3_Air_F_Beta",
			"CBA_XEH_A3"
		};
	};
};
class CfgCoreData
{
	cobraLight = "DEGA_Static_Line\data\Static_Parachute\cobraSvetlo.p3d";
	marker = "DEGA_Static_Line\data\Static_Parachute\obrysove svetlo.p3d";
};
class Extended_InitPost_EventHandlers
{
	class Air
	{
		class DEGA_Static_Line_Init
		{
			init="[_this select 0] execVM ""DEGA_Static_Line\data\Static_Parachute\scripts\static_line_init.sqf"";";
		};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		chute_pos = "chute_pos";		
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class KIA_Para_Pilot;
		class chute_pos: Crew
		{
			file= "DEGA_Static_Line\data\anim\chute_pos";
			interpolateTo[]={KIA_Para_Pilot,1};
		};		
	};
};