#include "config_extra.hpp"
#include "config_functions.hpp"

class CfgVehicles
{
	class B_Parachute;	
	class Steerable_Parachute_F;	
	class DEGA_T10_Parachute: Steerable_Parachute_F
	{
		scope = 1;
		scopeArsenal = 0;
        side = 1;
        faction = "BLU_F";
 		vehicleClass = "Air";       		
        crew = "B_Soldier_F";	
	    //extCameraPosition[] = {0,-20,-15};
		mapSize=20;
		camouflage=2;		
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_air_parachute_s"
				};
				speechPlural[]=
				{
					"veh_air_parachute_p"
				};
			};
		};		
		
		//Ohally Edit
		distancelevel1=20;
		distancelevel2=40;		
		deltavaluehorizontal=0.011;
		deltavaluevertical=0.001;
		airinfluence=0.99000001;
		duration=2;
		liftgravity=-40;
		liftthreshold=0.99000001;
		maxgravity=-10;
		maxliftduration=4;
		maxliftthrust=-40;
		maxrotationx=0.1;
		maxrotationz=0.40000001;
		maxsensitivityhorizontal=0.050000001;
		maxsensitivityvertical=0.0099999998;
		mingravity=-6;
		minliftduration=4;
		minliftthrust=-40;
		minrotationx=-0.1;
		minrotationz=-0.40000001;
		normalgravity=-8;
		thrustaccel=0.1;
		thrustdeccel=0.1;
		thrustnormal=0.1;
		turnforcescale=4.9999999e-005;
		unitinfotype="RscUnitInfoParachute";		
		
		textSingular="$STR_A3_nameSound_veh_air_parachute_s";
		textPlural="$STR_A3_nameSound_veh_air_parachute_p";
		nameSound="veh_air_parachute_s";
		author="Deltagamer";
		_generalMacro="T10_Parachute";
		radarType = 0;
		driverCanEject = 0;
		openingTime=5;		
		class UserActions
		{
			class cutParachute
			{
				displayName= "<t color='#FF0000'>Cut Parachute</t>"; //Red
				displayNameDefault = "";
				position="";
				radius=20;
				onlyForplayer=true;
				condition="(player == (driver this) && (alive this))";
				statement="this call DEGA_fnc_cutParachute";
				priority=15;
			}; 			
		};		
		class TransportItems {};
		animationOpen="A3\Air_F_Beta\Parachute_01\Data\Anim\para_opening.rtm";
		animationDrop="A3\Air_F_Beta\Parachute_01\Data\Anim\para_landing.rtm";		
		displayName="T10 Parachute";
		getOutAction="GetOutPara";
		audible=0;
		castDriverShadow=1;
		hideweaponsdriver=0;		
		driverAction="chute_pos";		
		model="\DEGA_Parachutes\T10.p3d";
		Icon="\DEGA_Parachutes\data\UI\icomap_Para_CA.paa";
		picture = "\DEGA_Parachutes\data\UI\Para_CA.paa";
		//simulation="parachute";		
/*	
		soundEnviron[] = {"A3\sounds_f\dummysound",0.31622776,1,80};
		soundGetIn[] = {"A3\sounds_f\dummysound",0.31622776,1,20};
		soundGetOut[] = {"A3\sounds_f\dummysound",0.31622776,1,20};
		soundCrash[] = {"A3\sounds_f\dummysound",0.031622775,1,50};
		soundLandCrash[] = {"A3\sounds_f\dummysound",0.031622775,1,50};
		soundWaterCrash[] = {"A3\sounds_f\dummysound",3.1622777,1,80};	
*/
		damageEffect="";
		class ViewPilot
		{
			initFov=0.69999999;
			minFov=0.25;
			maxFov=1.1;
			initAngleX=0;
			minAngleX=-65;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
		};
		occludeSoundsWhenIn=1;
		obstructSoundsWhenIn=1;
		class Turrets {};
		class Reflectors {};
		enableGPS=0;
		threat[]={0,0,0};		
	};
	class DEGA_T10_Parachute_backpack: B_Parachute
	{
		author="Deltagamer";
		scope=2;
		scopeArsenal = 2;
		displayName="T10 Parachute Bag";
		ParachuteClass="DEGA_T10_Parachute";
		maximumLoad=0;
		mass=10;		
	};	
	class Thing;
	class backpack_holder: Thing
	{
		scope=1;
		side=-1;
		model="DEGA_Parachutes\backpack_holder.p3d";
		icon="";
		displayName="";
		nameSound="";
		destrType="DestructNo";
		simulation="thingx";
		mapSize=0;
		accuracy=0;
		armor=5;
		weight = 200;
	};
	class T10_Landed: Thing
	{
		scope=1;
		side=-1;
		model="DEGA_Parachutes\T10_Landed.p3d";
		icon="";
		displayName="T10 Parachute";
		nameSound="";
		destrType="DestructNo";
		simulation="thingx";
		mapSize=0;
		accuracy=0;
		armor=5;
		weight = 200;
	};		
};