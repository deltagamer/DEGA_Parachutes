
class CfgPatches
{
	class DEGA_Parachutes
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
	cobraLight = "DEGA_Parachutes\cobraSvetlo.p3d";
	marker = "DEGA_Parachutes\obrysove svetlo.p3d";
};
class Extended_InitPost_EventHandlers
{
	class Air
	{
		class DEGA_Static_Line_Init
		{
			init="[_this select 0] execVM ""DEGA_Parachutes\Scripts\static_line_init.sqf"";";
		};
	};
};

// Include Eden Editor UI macros
// For attributes, you'll be interested in these:
// ATTRIBUTE_TITLE_W - title width
// ATTRIBUTE_CONTENT_W - content width
#include "\a3\3DEN\UI\macros.inc"
 
// Inherit base classes
class ctrlEdit;
class ctrlMenuStrip;
class display3DEN
{
	class Controls
	{
		class MenuStrip: ctrlMenuStrip
		{
			class Items
			{
				class Attributes
				{
					items[] += {"DEGA_StaticLine"};
				};
				class DEGA_StaticLine
				{
					text = "DEGA Static Line Attributes";
					action = "edit3DENMissionAttributes 'DEGA_StaticLine_Section';";
				};
			};
		};
	};
};

class Cfg3DEN
{
	class Mission
	{
		class DEGA_StaticLine_Section // Custom section class, everything inside will be opened in one window
		{
			displayName = "DEGA Attributes"; // Text visible in the window title as "Edit <displayName>"
			display = "Display3DENEditAttributesPreview"; // Optional - display for attributes window. Must have the same structure and IDCs as the default Display3DENEditAttributes
			class AttributeCategories
			{
				// The following structure is the same as the one used for entity attributes
				class DEGA_Category
				{
                    class Attributes
                    {
                        class Staticline_enable
                        {
                            displayName = "Allow Static Line";
                            tooltip = "Allow Static Line Parachuting for all supported aircraft";
                            property = "DEGA_Static_Line";
                            control = "checkbox";
                            expression = "if (_value) then {player setVariable ['DEGA_Jumping_Condition', true]};";
                            defaultValue = "false";
                        };
                    };
				};
			};
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
			file= "DEGA_Parachutes\data\anim\chute_pos";
			interpolateTo[]={KIA_Para_Pilot,1};
		};		
	};
};
