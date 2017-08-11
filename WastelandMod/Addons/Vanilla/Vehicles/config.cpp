class cfgPatches
{
	class BIB_Wasteland_Vehicles
	{
		author="BIB_Monkey";
		name="BIB Wasteland MOD";
		url="http://www.bibgaming.com";
		addonRootClass="BIB_Wasteland";
		requiredAddons[]=
		{
			"BIB_Wasteland"
		};
		requiredVersion=0.1;
		units[]=
		{
		};
		weapons[]={};
	};
};
class AirplaneHUD //sources - ["A3_Air_F","A3_Air_F_Beta"]
{
	topLeft = "HUD LH";
	topRight = "HUD PH";
	bottomLeft = "HUD LD";
	color[] = {0, 1, 0, 0.1};
	class Pos10Vector //sources - []
	{
		type = "vector";
		pos0[] = {0.5, 0.27};
		pos10[] = {"0.5+0.9", "0.27+0.7"};
	};
	class Bones //sources - []
	{
		class AGLMove1 //sources - []
		{
			type = "linear";
			source = "altitudeAGL";
			min = 0;
			max = 100;
			minPos[] = {0.05, 0.1};
			maxPos[] = {0.05, 0.8};
		};
		class AGLMove2 //sources - []
		{
			type = "fixed";
			pos[] = {0.05, 0.8};
		};
		class ASLMove1 //sources - []
		{
			type = "linear";
			source = "altitudeASL";
			min = 0;
			max = 500;
			minPos[] = {0.1, 0.1};
			maxPos[] = {0.1, 0.8};
		};
		class ASLMove2 //sources - []
		{
			type = "fixed";
			pos[] = {0.1, 0.8};
		};
		class VertSpeed //sources - []
		{
			type = "linear";
			source = "vSpeed";
			min = -25;
			max = 25;
			minPos[] = {0, -0.4};
			maxPos[] = {0, 0.4};
		};
		class SpdMove2 //sources - []
		{
			source = "speed";
			min = 33;
			max = 200;
			type = "linear";
			minPos[] = {0.94, 0.1};
			maxPos[] = {0.94, 0.87};
		};
		class ILS //sources - []
		{
			type = "ils";
			pos0[] = {0.5, 0.4};
			pos3[] = {0.7, 0.6};
		};
		class WeaponAim: Pos10Vector //inherits 3 parameters from bin\config.bin/AirplaneHUD/Pos10Vector, sources - []
		{
			source = "weapon";
		};
		class Target: Pos10Vector //inherits 3 parameters from bin\config.bin/AirplaneHUD/Pos10Vector, sources - []
		{
			source = "target";
		};
		class TargetDistanceMissile //sources - []
		{
			type = "rotational";
			source = "targetDist";
			center[] = {0, 0};
			min = 100;
			max = 3000;
			minAngle = -120;
			maxAngle = 120;
		};
		class TargetDistanceMGun //sources - []
		{
			type = "rotational";
			source = "targetDist";
			center[] = {0, 0};
			min = 100;
			max = 1000;
			minAngle = -180;
			maxAngle = 90;
		};
		class Level0: Pos10Vector //inherits 3 parameters from bin\config.bin/AirplaneHUD/Pos10Vector, sources - []
		{
			type = "horizon";
			angle = 0;
		};
		class LevelP5: Level0 //inherits 2 parameters from bin\config.bin/AirplaneHUD/Bones/Level0, sources - []
		{
			angle = 5;
		};
		class LevelM5: Level0 //inherits 2 parameters from bin\config.bin/AirplaneHUD/Bones/Level0, sources - []
		{
			angle = -5;
		};
		class LevelP10: Level0 //inherits 2 parameters from bin\config.bin/AirplaneHUD/Bones/Level0, sources - []
		{
			angle = 10;
		};
		class LevelM10: Level0 //inherits 2 parameters from bin\config.bin/AirplaneHUD/Bones/Level0, sources - []
		{
			angle = -10;
		};
		class LevelP15: Level0 //inherits 2 parameters from bin\config.bin/AirplaneHUD/Bones/Level0, sources - []
		{
			angle = 15;
		};
		class LevelM15: Level0 //inherits 2 parameters from bin\config.bin/AirplaneHUD/Bones/Level0, sources - []
		{
			angle = -15;
		};
		class Velocity: Pos10Vector //inherits 3 parameters from bin\config.bin/AirplaneHUD/Pos10Vector, sources - []
		{
			type = "vector";
			source = "velocity";
		};
		class PlaneW //sources - []
		{
			type = "fixed";
			pos[] = {0.5, 0.27};
		};
	};
	class Draw //sources - []
	{
		alpha = 0.8;
		color[] = {0.1, 0.5, 0.05};
		clipTL[] = {0, 0.05};
		clipBR[] = {1, 0.9};
		condition = "on";
		class Altitude //sources - []
		{
			type = "line";
			points[] = {{"AGLMove1", 1}, {"AGLMove2", 1}, {}, {"ASLMove2", 1}, {"ASLMove1", 1}, {"ASLMove1", {0.02, 0}, 1}, {"ASLMove1", {0.02, 0}, 1, "VertSpeed", 1}};
		};
		class DimmedBase //sources - []
		{
			alpha = 0.3;
			class AltitudeBase //sources - []
			{
				type = "line";
				points[] = {{"AGLMove2", 1}, {"ASLMove2", 1}};
			};
		};
		class Speed //sources - []
		{
			type = "line";
			points[] = {{{0.95, 0.87}, 1}, {{0.95, 0.1}, 1}, {}, {"SpdMove2", {-0.05, 0}, 1}, {"SpdMove2", 1}};
		};
		class SpeedNumber //sources - []
		{
			type = "text";
			align = "left";
			scale = 1;
			source = "speed";
			sourceScale = 3.6;
			pos[] = {"SpdMove2", {-0.05, -0.03}, 1};
			right[] = {"SpdMove2", {0.01, -0.03}, 1};
			down[] = {"SpdMove2", {-0.05, 0.03}, 1};
		};
		class PlaneW //sources - []
		{
			clipTL[] = {0, 0.1};
			clipBR[] = {1, 0.9};
			class LineHL //sources - []
			{
				type = "line";
				points[] = {{"PlaneW", {-0.07, 0}, 1}, {"PlaneW", {-0.02, 0}, 1}, {"PlaneW", {0, -0.02}, 1}, {"PlaneW", {0.02, 0}, 1}, {"PlaneW", {0, 0.02}, 1}, {"PlaneW", {-0.02, 0}, 1}, {}, {"PlaneW", {0.02, 0}, 1}, {"PlaneW", {0.07, 0}, 1}};
			};
			class Velocity //sources - []
			{
				type = "line";
				points[] = {{"Velocity", {0, -0.02}, 1}, {"Velocity", {0.02, 0}, 1}, {"Velocity", {0, 0.02}, 1}, {"Velocity", {-0.02, 0}, 1}, {"Velocity", {0, -0.02}, 1}};
			};
		};
		class MGun //sources - []
		{
			condition = "mgun";
			class Circle //sources - []
			{
				type = "line";
				points[] = {{"WeaponAim", {0, -0.07}, 1}, {"WeaponAim", {"+0.7*0.07", "-0.7*0.07"}, 1}, {"WeaponAim", {0.07, 0}, 1}, {"WeaponAim", {"+0.7*0.07", "+0.7*0.07"}, 1}, {"WeaponAim", {0, 0.07}, 1}, {"WeaponAim", {"-0.7*0.07", "+0.7*0.07"}, 1}, {"WeaponAim", {-0.07, 0}, 1}, {"WeaponAim", {"-0.7*0.07", "-0.7*0.07"}, 1}, {"WeaponAim", {0, -0.07}, 1}, {}, {"WeaponAim", {0, -0.01}, 1}, {"WeaponAim", {"+0.7*0.01", "-0.7*0.01"}, 1}, {"WeaponAim", {0.01, 0}, 1}, {"WeaponAim", {"+0.7*0.01", "+0.7*0.01"}, 1}, {"WeaponAim", {0, 0.01}, 1}, {"WeaponAim", {"-0.7*0.01", "+0.7*0.01"}, 1}, {"WeaponAim", {-0.01, 0}, 1}, {"WeaponAim", {"-0.7*0.01", "-0.7*0.01"}, 1}, {"WeaponAim", {0, -0.01}, 1}, {}, {"WeaponAim", {"0.03*sin(-180)", "-0.03*cos(-180)"}, 1}, {"WeaponAim", {"0.07*sin(-180)", "-0.07*cos(-180)"}, 1}, {}, {"WeaponAim", {"0.03*sin(+90)", "-0.03*cos(+90)"}, 1}, {"WeaponAim", {"0.07*sin(+90)", "-0.07*cos(+90)"}, 1}, {}, {"WeaponAim", 1, "TargetDistanceMGun", {0, 0.04}, 1}, {"WeaponAim", 1, "TargetDistanceMGun", {0, 0.07}, 1}};
			};
		};
		class Missile //sources - []
		{
			condition = "missile";
			class Circle //sources - []
			{
				type = "line";
				points[] = {{"WeaponAim", {0, -0.1}, 1}, {"WeaponAim", {"+0.7*0.1", "-0.7*0.1"}, 1}, {"WeaponAim", {0.1, 0}, 1}, {"WeaponAim", {"+0.7*0.1", "+0.7*0.1"}, 1}, {"WeaponAim", {0, 0.1}, 1}, {"WeaponAim", {"-0.7*0.1", "+0.7*0.1"}, 1}, {"WeaponAim", {-0.1, 0}, 1}, {"WeaponAim", {"-0.7*0.1", "-0.7*0.1"}, 1}, {"WeaponAim", {0, -0.1}, 1}, {}, {"WeaponAim", {"0.1*0.8*sin(-120)", "-0.1*0.8*cos(-120)"}, 1}, {"WeaponAim", {"0.1*1.2*sin(-120)", "-0.1*1.2*cos(-120)"}, 1}, {}, {"WeaponAim", {"0.1*0.8*sin(+120)", "-0.1*0.8*cos(+120)"}, 1}, {"WeaponAim", {"0.1*1.2*sin(+120)", "-0.1*1.2*cos(+120)"}, 1}, {}, {"WeaponAim", 1, "TargetDistanceMissile", {0, "0.1*0.8"}, 1}, {"WeaponAim", 1, "TargetDistanceMissile", {0, "0.1*1.2"}, 1}};
			};
			class Target //sources - []
			{
				type = "line";
				points[] = {{"Target", {-0.05, -0.05}, 1}, {"Target", {0.05, -0.05}, 1}, {"Target", {0.05, 0.05}, 1}, {"Target", {-0.05, 0.05}, 1}, {"Target", {-0.05, -0.05}, 1}};
			};
		};
		class Horizont //sources - []
		{
			clipTL[] = {0.2, 0.1};
			clipBR[] = {0.8, 0.9};
			class Dimmed //sources - []
			{
				alpha = 0.6;
				class Level0 //sources - []
				{
					type = "line";
					points[] = {{"Level0", {-0.4, 0}, 1}, {"Level0", {-0.13, 0}, 1}, {}, {"Level0", {0.13, 0}, 1}, {"Level0", {0.4, 0}, 1}};
				};
			};
			class LevelP5 //sources - []
			{
				type = "line";
				points[] = {{"LevelP5", {-0.15, 0.03}, 1}, {"LevelP5", {-0.15, 0}, 1}, {"LevelP5", {0.15, 0}, 1}, {"LevelP5", {0.15, 0.03}, 1}};
			};
			class LevelM5 //sources - []
			{
				type = "line";
				points[] = {{"LevelM5", {-0.15, -0.03}, 1}, {"LevelM5", {-0.15, 0}, 1}, {"LevelM5", {0.15, 0}, 1}, {"LevelM5", {0.15, -0.03}, 1}};
			};
			class LevelP10 //sources - []
			{
				type = "line";
				points[] = {{"LevelP10", {-0.2, 0.05}, 1}, {"LevelP10", {-0.2, 0}, 1}, {"LevelP10", {0.2, 0}, 1}, {"LevelP10", {0.2, 0.05}, 1}};
			};
			class LevelM10 //sources - []
			{
				type = "line";
				points[] = {{"LevelM10", {-0.2, -0.05}, 1}, {"LevelM10", {-0.2, 0}, 1}, {"LevelM10", {0.2, 0}, 1}, {"LevelM10", {0.2, -0.05}, 1}};
			};
			class LevelP15 //sources - []
			{
				type = "line";
				points[] = {{"LevelP15", {-0.2, 0.07}, 1}, {"LevelP15", {-0.2, 0}, 1}, {"LevelP15", {0.2, 0}, 1}, {"LevelP15", {0.2, 0.07}, 1}};
			};
			class LevelM15 //sources - []
			{
				type = "line";
				points[] = {{"LevelM15", {-0.2, -0.07}, 1}, {"LevelM15", {-0.2, 0}, 1}, {"LevelM15", {0.2, 0}, 1}, {"LevelM15", {0.2, -0.07}, 1}};
			};
		};
		class ILS //sources - []
		{
			condition = "ils";
			class Glideslope //sources - []
			{
				clipTL[] = {0.29, 0.29};
				clipBR[] = {0.71, 0.71};
				class ILS //sources - []
				{
					type = "line";
					points[] = {{"ILS", {-10, 0}, 1}, {"ILS", {10, 0}, 1}, {}, {"ILS", {0, -10}, 1}, {"ILS", {0, 10}, 1}};
				};
			};
			class AOABracket //sources - []
			{
				type = "line";
				points[] = {{{0.42, 0.78}, 1}, {{0.4, 0.78}, 1}, {{0.4, 0.88}, 1}, {{0.42, 0.88}, 1}};
			};
		};
	};
	helmetPosition[] = {-0.025, 0.025, 0.1};
	helmetRight[] = {0.05, 0, 0};
	helmetDown[] = {-0, -0.05, 0};
	borderLeft = 0.09;
	borderRight = 0.02;
	borderTop = 0.02;
	borderBottom = 0.1;
	helmetMountedDisplay = 1;
};
class SmallFire //sources - ["A3_Data_F_ParticleEffects"]
{
	class Light1 //sources - ["A3_Data_F_ParticleEffects"]
	{
		simulation = "light";
		type = "SmallFireLight";
	};
	class sound //sources - ["A3_Data_F_ParticleEffects"]
	{
		simulation = "sound";
		type = "Fire";
	};
	class Fire1 //sources - ["A3_Data_F_ParticleEffects"]
	{
		simulation = "particles";
		type = "SmallFireF";
	};
	class Refract1 //sources - ["A3_Data_F_ParticleEffects"]
	{
		simulation = "particles";
		type = "SmallFireFRefract";
	};
	class Smoke1 //sources - ["A3_Data_F_ParticleEffects"]
	{
		simulation = "particles";
		type = "SmallFireS";
	};
};
class DefaultEventHandlers //sources - ["A3_Data_F"]
{
	init = "";
	fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
	killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
};
class SensorTemplatePassiveRadar //sources - ["A3_Data_F"]
{
	componentType = "PassiveRadarSensorComponent";
	class AirTarget //sources - ["A3_Data_F"]
	{
		minRange = 16000;
		maxRange = 16000;
		objectDistanceLimitCoef = -1;
		viewDistanceLimitCoef = -1;
	};
	class GroundTarget //sources - ["A3_Data_F"]
	{
		minRange = 16000;
		maxRange = 16000;
		objectDistanceLimitCoef = -1;
		viewDistanceLimitCoef = -1;
	};
	typeRecognitionDistance = 12000;
	angleRangeHorizontal = 360;
	angleRangeVertical = 360;
	groundNoiseDistanceCoef = -1;
	maxGroundNoiseDistance = -1;
	minSpeedThreshold = 0;
	maxSpeedThreshold = 0;
	animDirection = "";
	aimDown = 0;
	color[] = {0.5, 1, 0.5, 0.5};
	minTrackableSpeed = -1e+010;
	maxTrackableSpeed = 1e+010;
	minTrackableATL = -1e+010;
	maxTrackableATL = 1e+010;
	allowsMarking = 0;
};
class SensorTemplateAntiRadiation: SensorTemplatePassiveRadar //inherits 18 parameters from bin\config.bin/SensorTemplatePassiveRadar, sources - ["A3_Data_F"]
{
	componentType = "PassiveRadarSensorComponent";
	class AirTarget //sources - ["A3_Data_F"]
	{
		minRange = 8000;
		maxRange = 8000;
		objectDistanceLimitCoef = -1;
		viewDistanceLimitCoef = -1;
	};
	class GroundTarget //sources - ["A3_Data_F"]
	{
		minRange = 8000;
		maxRange = 8000;
		objectDistanceLimitCoef = -1;
		viewDistanceLimitCoef = -1;
	};
	angleRangeHorizontal = 90;
	angleRangeVertical = 90;
	allowsMarking = 1;
};
class SensorTemplateActiveRadar: SensorTemplateAntiRadiation //inherits 6 parameters from bin\config.bin/SensorTemplateAntiRadiation, sources - ["A3_Data_F"]
{
	componentType = "ActiveRadarSensorComponent";
	class AirTarget //sources - ["A3_Data_F"]
	{
		minRange = 5000;
		maxRange = 5000;
		objectDistanceLimitCoef = -1;
		viewDistanceLimitCoef = -1;
	};
	class GroundTarget //sources - ["A3_Data_F"]
	{
		minRange = 3000;
		maxRange = 3000;
		objectDistanceLimitCoef = -1;
		viewDistanceLimitCoef = -1;
	};
	typeRecognitionDistance = 3000;
	angleRangeHorizontal = 120;
	angleRangeVertical = 120;
	groundNoiseDistanceCoef = 0.5;
	maxGroundNoiseDistance = 200;
	minSpeedThreshold = 30;
	maxSpeedThreshold = 40;
	color[] = {0, 1, 1, 1};
};
class SensorTemplateIR: SensorTemplateAntiRadiation //inherits 6 parameters from bin\config.bin/SensorTemplateAntiRadiation, sources - ["A3_Data_F"]
{
	componentType = "IRSensorComponent";
	class AirTarget //sources - ["A3_Data_F"]
	{
		minRange = 500;
		maxRange = 3000;
		objectDistanceLimitCoef = -1;
		viewDistanceLimitCoef = 1;
	};
	class GroundTarget //sources - ["A3_Data_F"]
	{
		minRange = 500;
		maxRange = 2000;
		objectDistanceLimitCoef = 1;
		viewDistanceLimitCoef = 1;
	};
	typeRecognitionDistance = 2000;
	angleRangeHorizontal = 60;
	angleRangeVertical = 60;
	maxFogSeeThrough = 0.995;
	color[] = {1, 0, 0, 1};
};
class SensorTemplateVisual: SensorTemplateIR //inherits 8 parameters from bin\config.bin/SensorTemplateIR, sources - ["A3_Data_F"]
{
	componentType = "VisualSensorComponent";
	nightRangeCoef = 0;
	maxFogSeeThrough = 0.94;
	color[] = {1, 1, 0.5, 0.8};
};
class SensorTemplateMan: SensorTemplateIR //inherits 8 parameters from bin\config.bin/SensorTemplateIR, sources - ["A3_Data_F"]
{
	componentType = "ManSensorComponent";
	class AirTarget //sources - ["A3_Data_F"]
	{
		minRange = 500;
		maxRange = 750;
		objectDistanceLimitCoef = -1;
		viewDistanceLimitCoef = 1;
	};
	class GroundTarget //sources - ["A3_Data_F"]
	{
		minRange = 500;
		maxRange = 500;
		objectDistanceLimitCoef = 1;
		viewDistanceLimitCoef = 1;
	};
	typeRecognitionDistance = 0;
	color[] = {1, 0.5, 1, 1};
};
class SensorTemplateLaser: SensorTemplateAntiRadiation //inherits 6 parameters from bin\config.bin/SensorTemplateAntiRadiation, sources - ["A3_Data_F"]
{
	componentType = "LaserSensorComponent";
	class AirTarget //sources - ["A3_Data_F"]
	{
		minRange = 6000;
		maxRange = 6000;
		objectDistanceLimitCoef = -1;
		viewDistanceLimitCoef = -1;
	};
	class GroundTarget //sources - ["A3_Data_F"]
	{
		minRange = 6000;
		maxRange = 6000;
		objectDistanceLimitCoef = -1;
		viewDistanceLimitCoef = -1;
	};
	angleRangeHorizontal = 180;
	angleRangeVertical = 180;
	typeRecognitionDistance = 0;
	color[] = {1, 1, 1, 0};
};
class SensorTemplateNV: SensorTemplateLaser //inherits 7 parameters from bin\config.bin/SensorTemplateLaser, sources - ["A3_Data_F"]
{
	componentType = "NVSensorComponent";
	color[] = {1, 1, 1, 0};
};
class SensorTemplateDataLink: SensorTemplatePassiveRadar //inherits 18 parameters from bin\config.bin/SensorTemplatePassiveRadar, sources - ["A3_Data_F"]
{
	componentType = "DataLinkSensorComponent";
	allowsMarking = 1;
	typeRecognitionDistance = 0;
	color[] = {1, 1, 1, 0};
};
class DefaultVehicleSystemsDisplayManagerLeft //sources - ["A3_Ui_F"]
{
	componentType = "VehicleSystemsDisplayManager";
	left = 1;
	defaultDisplay = "EmptyDisplay";
	class Components //sources - []
	{
		class EmptyDisplay //sources - []
		{
			componentType = "EmptyDisplayComponent";
		};
		class MinimapDisplay //sources - []
		{
			componentType = "MinimapDisplayComponent";
		};
		class CrewDisplay //sources - []
		{
			componentType = "CrewDisplayComponent";
		};
		class UAVDisplay //sources - []
		{
			componentType = "UAVFeedDisplayComponent";
		};
		class SlingLoadDisplay //sources - []
		{
			componentType = "SlingLoadDisplayComponent";
		};
	};
	x = "(profilenamespace getvariable [""""IGUI_GRID_CUSTOMINFOLEFT_X"""",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
	y = "(profilenamespace getvariable [""""IGUI_GRID_CUSTOMINFOLEFT_Y"""",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
};
class DefaultVehicleSystemsDisplayManagerRight //sources - ["A3_Ui_F"]
{
	componentType = "VehicleSystemsDisplayManager";
	right = 1;
	defaultDisplay = "EmptyDisplay";
	class Components //sources - []
	{
		class EmptyDisplay //sources - []
		{
			componentType = "EmptyDisplayComponent";
		};
		class MinimapDisplay //sources - []
		{
			componentType = "MinimapDisplayComponent";
		};
		class CrewDisplay //sources - []
		{
			componentType = "CrewDisplayComponent";
		};
		class UAVDisplay //sources - []
		{
			componentType = "UAVFeedDisplayComponent";
		};
		class SlingLoadDisplay //sources - []
		{
			componentType = "SlingLoadDisplayComponent";
		};
	};
	x = "(profilenamespace getvariable [""""IGUI_GRID_CUSTOMINFORIGHT_X"""",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
	y = "(profilenamespace getvariable [""""IGUI_GRID_CUSTOMINFORIGHT_Y"""",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
};
class DefaultVehicleSystemsDisplayManagerLeftSensors //sources - ["A3_Ui_F"]
{
	componentType = "VehicleSystemsDisplayManager";
	left = 1;
	defaultDisplay = "EmptyDisplay";
	class Components //sources - []
	{
		class EmptyDisplay //sources - []
		{
			componentType = "EmptyDisplayComponent";
		};
		class MinimapDisplay //sources - []
		{
			componentType = "MinimapDisplayComponent";
		};
		class CrewDisplay //sources - []
		{
			componentType = "CrewDisplayComponent";
		};
		class UAVDisplay //sources - []
		{
			componentType = "UAVFeedDisplayComponent";
		};
		class SlingLoadDisplay //sources - []
		{
			componentType = "SlingLoadDisplayComponent";
		};
		class SensorDisplay //sources - []
		{
			componentType = "SensorsDisplayComponent";
		};
	};
	x = "(profilenamespace getvariable [""""IGUI_GRID_CUSTOMINFOLEFT_X"""",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
	y = "(profilenamespace getvariable [""""IGUI_GRID_CUSTOMINFOLEFT_Y"""",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
};
class DefaultVehicleSystemsDisplayManagerRightSensors //sources - ["A3_Ui_F"]
{
	componentType = "VehicleSystemsDisplayManager";
	right = 1;
	defaultDisplay = "SensorDisplay";
	class Components //sources - []
	{
		class SensorDisplay //sources - []
		{
			componentType = "SensorsDisplayComponent";
		};
		class EmptyDisplay //sources - []
		{
			componentType = "EmptyDisplayComponent";
		};
		class MinimapDisplay //sources - []
		{
			componentType = "MinimapDisplayComponent";
		};
		class CrewDisplay //sources - []
		{
			componentType = "CrewDisplayComponent";
		};
		class UAVDisplay //sources - []
		{
			componentType = "UAVFeedDisplayComponent";
		};
		class SlingLoadDisplay //sources - []
		{
			componentType = "SlingLoadDisplayComponent";
		};
	};
	x = "(profilenamespace getvariable [""""IGUI_GRID_CUSTOMINFORIGHT_X"""",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
	y = "(profilenamespace getvariable [""""IGUI_GRID_CUSTOMINFORIGHT_Y"""",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
};
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft //inherits 6 parameters from bin\config.bin/DefaultVehicleSystemsDisplayManagerLeft, sources - ["A3_Data_F"]
{
	class Components: Components //inherits 5 parameters from bin\config.bin/DefaultVehicleSystemsDisplayManagerLeft/Components, sources - ["A3_Data_F"]
	{
		class VehiclePrimaryGunnerDisplay //sources - ["A3_Data_F"]
		{
			componentType = "TransportFeedDisplayComponent";
			source = "PrimaryGunner";
		};
		class VehicleCommanderDisplay //sources - ["A3_Data_F"]
		{
			componentType = "TransportFeedDisplayComponent";
			source = "Commander";
		};
	};
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight //inherits 6 parameters from bin\config.bin/DefaultVehicleSystemsDisplayManagerRight, sources - ["A3_Data_F"]
{
	class Components: Components //inherits 5 parameters from bin\config.bin/DefaultVehicleSystemsDisplayManagerRight/Components, sources - ["A3_Data_F"]
	{
		class VehiclePrimaryGunnerDisplay //sources - ["A3_Data_F"]
		{
			componentType = "TransportFeedDisplayComponent";
			source = "PrimaryGunner";
		};
		class VehicleCommanderDisplay //sources - ["A3_Data_F"]
		{
			componentType = "TransportFeedDisplayComponent";
			source = "Commander";
		};
	};
};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft //inherits 6 parameters from bin\config.bin/DefaultVehicleSystemsDisplayManagerLeft, sources - ["A3_Data_F"]
{
	class Components: Components //inherits 5 parameters from bin\config.bin/DefaultVehicleSystemsDisplayManagerLeft/Components, sources - ["A3_Data_F"]
	{
		class VehicleDriverDisplay //sources - ["A3_Data_F"]
		{
			componentType = "TransportFeedDisplayComponent";
			source = "Driver";
		};
		class VehiclePrimaryGunnerDisplay //sources - ["A3_Data_F"]
		{
			componentType = "TransportFeedDisplayComponent";
			source = "PrimaryGunner";
		};
	};
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight //inherits 6 parameters from bin\config.bin/DefaultVehicleSystemsDisplayManagerRight, sources - ["A3_Data_F"]
{
	class Components: Components //inherits 5 parameters from bin\config.bin/DefaultVehicleSystemsDisplayManagerRight/Components, sources - ["A3_Data_F"]
	{
		class VehicleDriverDisplay //sources - ["A3_Data_F"]
		{
			componentType = "TransportFeedDisplayComponent";
			source = "Driver";
		};
		class VehiclePrimaryGunnerDisplay //sources - ["A3_Data_F"]
		{
			componentType = "TransportFeedDisplayComponent";
			source = "PrimaryGunner";
		};
	};
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft //inherits 6 parameters from bin\config.bin/DefaultVehicleSystemsDisplayManagerLeft, sources - ["A3_Data_F"]
{
	class Components: Components //inherits 5 parameters from bin\config.bin/DefaultVehicleSystemsDisplayManagerLeft/Components, sources - ["A3_Data_F"]
	{
		class VehicleDriverDisplay //sources - ["A3_Data_F"]
		{
			componentType = "TransportFeedDisplayComponent";
			source = "Driver";
		};
		class VehicleCommanderDisplay //sources - ["A3_Data_F"]
		{
			componentType = "TransportFeedDisplayComponent";
			source = "Commander";
		};
	};
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight //inherits 6 parameters from bin\config.bin/DefaultVehicleSystemsDisplayManagerRight, sources - ["A3_Data_F"]
{
	class Components: Components //inherits 5 parameters from bin\config.bin/DefaultVehicleSystemsDisplayManagerRight/Components, sources - ["A3_Data_F"]
	{
		class VehicleDriverDisplay //sources - ["A3_Data_F"]
		{
			componentType = "TransportFeedDisplayComponent";
			source = "Driver";
		};
		class VehicleCommanderDisplay //sources - ["A3_Data_F"]
		{
			componentType = "TransportFeedDisplayComponent";
			source = "Commander";
		};
	};
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft //inherits 6 parameters from bin\config.bin/DefaultVehicleSystemsDisplayManagerLeft, sources - ["A3_Data_F"]
{
	class Components: Components //inherits 5 parameters from bin\config.bin/DefaultVehicleSystemsDisplayManagerLeft/Components, sources - ["A3_Data_F"]
	{
		class VehicleDriverDisplay //sources - ["A3_Data_F"]
		{
			componentType = "TransportFeedDisplayComponent";
			source = "Driver";
		};
		class SensorDisplay //sources - ["A3_Data_F"]
		{
			componentType = "SensorsDisplayComponent";
			range[] = {4000, 2000, 16000, 8000};
			resource = "RscCustomInfoSensors";
		};
	};
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight //inherits 6 parameters from bin\config.bin/DefaultVehicleSystemsDisplayManagerRight, sources - ["A3_Data_F"]
{
	defaultDisplay = "SensorDisplay";
	class Components: Components //inherits 5 parameters from bin\config.bin/DefaultVehicleSystemsDisplayManagerRight/Components, sources - ["A3_Data_F"]
	{
		class VehicleDriverDisplay //sources - ["A3_Data_F"]
		{
			componentType = "TransportFeedDisplayComponent";
			source = "Driver";
		};
		class SensorDisplay //sources - ["A3_Data_F"]
		{
			componentType = "SensorsDisplayComponent";
			range[] = {4000, 2000, 16000, 8000};
			resource = "RscCustomInfoSensors";
		};
	};
};
class WeaponFireGun //sources - []
{
	access = 0;
	cloudletDuration = 0.2;
	cloudletAnimPeriod = 1;
	cloudletSize = 1;
	cloudletAlpha = 1;
	cloudletGrowUp = 0.2;
	cloudletFadeIn = 0.01;
	cloudletFadeOut = 0.5;
	cloudletAccY = 0;
	cloudletMinYSpeed = -100;
	cloudletMaxYSpeed = 100;
	cloudletShape = "cloudletFire";
	cloudletColor[] = {1, 1, 1, 0};
	interval = 0.01;
	size = 3;
	sourceSize = 0.5;
	timeToLive = 0;
	initT = 4500;
	deltaT = -3000;
	class Table //sources - []
	{
		class T0 //sources - []
		{
			maxT = 0;
			color[] = {0.82, 0.95, 0.93, 0};
		};
		class T1 //sources - []
		{
			maxT = 200;
			color[] = {0.75, 0.77, 0.9, 0};
		};
		class T2 //sources - []
		{
			maxT = 400;
			color[] = {0.56, 0.62, 0.67, 0};
		};
		class T3 //sources - []
		{
			maxT = 600;
			color[] = {0.39, 0.46, 0.47, 0};
		};
		class T4 //sources - []
		{
			maxT = 800;
			color[] = {0.24, 0.31, 0.31, 0};
		};
		class T5 //sources - []
		{
			maxT = 1000;
			color[] = {0.23, 0.31, 0.29, 0};
		};
		class T6 //sources - []
		{
			maxT = 1500;
			color[] = {0.21, 0.29, 0.27, 0};
		};
		class T7 //sources - []
		{
			maxT = 2000;
			color[] = {0.19, 0.23, 0.21, 0};
		};
		class T8 //sources - []
		{
			maxT = 2300;
			color[] = {0.22, 0.19, 0.1, 0};
		};
		class T9 //sources - []
		{
			maxT = 2500;
			color[] = {0.35, 0.2, 0.02, 0};
		};
		class T10 //sources - []
		{
			maxT = 2600;
			color[] = {0.62, 0.29, 0.03, 0};
		};
		class T11 //sources - []
		{
			maxT = 2650;
			color[] = {0.59, 0.35, 0.05, 0};
		};
		class T12 //sources - []
		{
			maxT = 2700;
			color[] = {0.75, 0.37, 0.03, 0};
		};
		class T13 //sources - []
		{
			maxT = 2750;
			color[] = {0.88, 0.34, 0.03, 0};
		};
		class T14 //sources - []
		{
			maxT = 2800;
			color[] = {0.91, 0.5, 0.17, 0};
		};
		class T15 //sources - []
		{
			maxT = 2850;
			color[] = {1, 0.6, 0.2, 0};
		};
		class T16 //sources - []
		{
			maxT = 2900;
			color[] = {1, 0.71, 0.3, 0};
		};
		class T17 //sources - []
		{
			maxT = 2950;
			color[] = {0.98, 0.83, 0.41, 0};
		};
		class T18 //sources - []
		{
			maxT = 3000;
			color[] = {0.98, 0.91, 0.54, 0};
		};
		class T19 //sources - []
		{
			maxT = 3100;
			color[] = {0.98, 0.99, 0.6, 0};
		};
		class T20 //sources - []
		{
			maxT = 3300;
			color[] = {0.96, 0.99, 0.72, 0};
		};
		class T21 //sources - []
		{
			maxT = 3600;
			color[] = {1, 0.98, 0.91, 0};
		};
		class T22 //sources - []
		{
			maxT = 4200;
			color[] = {1, 1, 1, 0};
		};
	};
};
class WeaponFireMGun: WeaponFireGun //inherits 20 parameters from bin\config.bin/WeaponFireGun, sources - []
{
	cloudletDuration = 0;
	cloudletGrowUp = 0.06;
	cloudletFadeIn = 0;
	cloudletFadeOut = 0.12;
	interval = 0.005;
	size = 0.12;
	sourceSize = 0.01;
	initT = 3200;
	deltaT = -4000;
};
class WeaponCloudsGun //sources - []
{
	access = 0;
	cloudletDuration = 0.3;
	cloudletAnimPeriod = 1;
	cloudletSize = 1;
	cloudletAlpha = 1;
	cloudletGrowUp = 1;
	cloudletFadeIn = 0.01;
	cloudletFadeOut = 1;
	cloudletAccY = 0.4;
	cloudletMinYSpeed = 0.2;
	cloudletMaxYSpeed = 0.8;
	cloudletShape = "cloudletClouds";
	cloudletColor[] = {1, 1, 1, 0};
	interval = 0.05;
	size = 3;
	sourceSize = 0.5;
	timeToLive = 0;
	initT = 0;
	deltaT = 0;
	class Table //sources - []
	{
		class T0 //sources - []
		{
			maxT = 0;
			color[] = {1, 1, 1, 0};
		};
	};
};
class WeaponCloudsMGun: WeaponCloudsGun //inherits 20 parameters from bin\config.bin/WeaponCloudsGun, sources - ["A3_Characters_F"]
{
	access = 0;
	cloudletGrowUp = 0.05;
	cloudletFadeIn = 0;
	cloudletFadeOut = 0.1;
	cloudletDuration = 0.05;
	cloudletAnimPeriod = 1;
	cloudletSize = 1;
	cloudletAlpha = 0.3;
	cloudletAccY = 0;
	cloudletMinYSpeed = -100;
	cloudletMaxYSpeed = 100;
	cloudletShape = "cloudletClouds";
	cloudletColor[] = {1, 1, 1, 0};
	timeToLive = 0;
	interval = 0.02;
	size = 0.3;
	sourceSize = 0.02;
	initT = 0;
	deltaT = 0;
	class Table //sources - ["A3_Characters_F"]
	{
		class T0 //sources - ["A3_Characters_F"]
		{
			maxT = 0;
			color[] = {1, 1, 1, 0};
		};
	};
};
class CfgVehicleIcons //sources - ["A3_Modules_F","A3_Ui_F"]
{
	iconPaperCar = "#(argb,8,8,3)color(1,1,1,1)";
	iconModule = "\A3\modules_f\data\portraitModule_ca.paa";
	iconObject = "\A3\ui_f\data\map\vehicleicons\iconObject_ca.paa";
	iconLogic = "\A3\ui_f\data\map\vehicleicons\iconLogic_ca.paa";
	iconVirtual = "\A3\ui_f\data\map\vehicleicons\iconVirtual_ca.paa";
	iconVehicle = "\A3\ui_f\data\map\vehicleicons\iconVehicle_ca.paa";
	iconCar = "\A3\ui_f\data\map\vehicleicons\iconCar_ca.paa";
	iconMotorcycle = "\A3\ui_f\data\map\vehicleicons\iconMotorcycle_ca.paa";
	iconTank = "\A3\ui_f\data\map\vehicleicons\iconTank_ca.paa";
	iconAPC = "\A3\ui_f\data\map\vehicleicons\iconAPC_ca.paa";
	iconHelicopter = "\A3\ui_f\data\map\vehicleicons\iconHelicopter_ca.paa";
	iconPlane = "\A3\ui_f\data\map\vehicleicons\iconPlane_ca.paa";
	iconShip = "\A3\ui_f\data\map\vehicleicons\iconShip_ca.paa";
	iconParachute = "\A3\ui_f\data\map\vehicleicons\iconParachute_ca.paa";
	iconCrate = "\A3\ui_f\data\map\vehicleicons\iconCrate_ca.paa";
	iconCrateAmmo = "\A3\ui_f\data\map\vehicleicons\iconCrateAmmo_ca.paa";
	iconCrateWpns = "\A3\ui_f\data\map\vehicleicons\iconCrateWpns_ca.paa";
	iconCrateLarge = "\A3\ui_f\data\map\vehicleicons\iconCrateLarge_ca.paa";
	iconCrateLong = "\A3\ui_f\data\map\vehicleicons\iconCrateLong_ca.paa";
	iconCrateOrd = "\A3\ui_f\data\map\vehicleicons\iconCrateOrd_ca.paa";
	iconCrateGrenades = "\A3\ui_f\data\map\vehicleicons\iconCrateGrenades_ca.paa";
	iconCrateSupp = "\A3\ui_f\data\map\vehicleicons\iconCrateSupp_ca.paa";
	iconCrateVeh = "\A3\ui_f\data\map\vehicleicons\iconCrateVeh_ca.paa";
	iconBackpack = "\A3\ui_f\data\map\vehicleicons\iconBackpack_ca.paa";
	iconAnimal = "\A3\ui_f\data\map\vehicleicons\iconAnimal_ca.paa";
	iconSound = "\A3\ui_f\data\map\vehicleicons\iconSound_ca.paa";
	iconStaticAA = "\A3\ui_f\data\map\vehicleicons\iconStaticAA_ca.paa";
	iconStaticCannon = "\A3\ui_f\data\map\vehicleicons\iconStaticCannon_ca.paa";
	iconStaticMG = "\A3\ui_f\data\map\vehicleicons\iconStaticMG_ca.paa";
	iconStaticMGNest = "\A3\ui_f\data\map\vehicleicons\iconStaticMGNest_ca.paa";
	iconStaticMortar = "\A3\ui_f\data\map\vehicleicons\iconStaticMortar_ca.paa";
	iconStaticSearchlight = "\A3\ui_f\data\map\vehicleicons\iconStaticSearchlight_ca.paa";
	iconAir = "\A3\ui_f\data\map\vehicleicons\iconhelicopter_ca.paa";
	iconStaticObject = "\A3\ui_f\data\map\vehicleicons\iconobject_ca.paa";
	iconThing = "\A3\ui_f\data\map\vehicleicons\iconobject_ca.paa";
	iconLaserTarget = "\A3\ui_f\data\map\vehicleicons\iconobject_ca.paa";
	iconObject_1x1 = "\A3\ui_f\data\map\vehicleicons\iconObject_1x1_ca.paa";
	iconObject_1x2 = "\A3\ui_f\data\map\vehicleicons\iconObject_1x2_ca.paa";
	iconObject_1x3 = "\A3\ui_f\data\map\vehicleicons\iconObject_1x3_ca.paa";
	iconObject_1x4 = "\A3\ui_f\data\map\vehicleicons\iconObject_1x4_ca.paa";
	iconObject_1x5 = "\A3\ui_f\data\map\vehicleicons\iconObject_1x5_ca.paa";
	iconObject_1x7 = "\A3\ui_f\data\map\vehicleicons\iconObject_1x7_ca.paa";
	iconObject_1x10 = "\A3\ui_f\data\map\vehicleicons\iconObject_1x10_ca.paa";
	iconObject_2x3 = "\A3\ui_f\data\map\vehicleicons\iconObject_2x3_ca.paa";
	iconObject_2x5 = "\A3\ui_f\data\map\vehicleicons\iconObject_2x5_ca.paa";
	iconObject_4x5 = "\A3\ui_f\data\map\vehicleicons\iconObject_4x5_ca.paa";
	iconObject_2x1 = "\A3\ui_f\data\map\vehicleicons\iconObject_2x1_ca.paa";
	iconObject_3x1 = "\A3\ui_f\data\map\vehicleicons\iconObject_3x1_ca.paa";
	iconObject_4x1 = "\A3\ui_f\data\map\vehicleicons\iconObject_4x1_ca.paa";
	iconObject_5x1 = "\A3\ui_f\data\map\vehicleicons\iconObject_5x1_ca.paa";
	iconObject_7x1 = "\A3\ui_f\data\map\vehicleicons\iconObject_7x1_ca.paa";
	iconObject_10x1 = "\A3\ui_f\data\map\vehicleicons\iconObject_10x1_ca.paa";
	iconObject_3x2 = "\A3\ui_f\data\map\vehicleicons\iconObject_3x2_ca.paa";
	iconObject_5x2 = "\A3\ui_f\data\map\vehicleicons\iconObject_5x2_ca.paa";
	iconObject_5x4 = "\A3\ui_f\data\map\vehicleicons\iconObject_5x4_ca.paa";
	iconObject_circle = "\A3\ui_f\data\map\vehicleicons\iconObject_circle_ca.paa";
	iconObject_elipse_H = "\A3\ui_f\data\map\vehicleicons\iconObject_elipse_H_ca.paa";
	iconObject_elipse_V = "\A3\ui_f\data\map\vehicleicons\iconObject_elipse_V_ca.paa";
	iconMan = "\A3\ui_f\data\map\vehicleicons\iconMan_ca.paa";
	iconManMedic = "\A3\ui_f\data\map\vehicleicons\iconManMedic_ca.paa";
	iconManEngineer = "\A3\ui_f\data\map\vehicleicons\iconManEngineer_ca.paa";
	iconManExplosive = "\A3\ui_f\data\map\vehicleicons\iconManExplosive_ca.paa";
	iconManRecon = "\A3\ui_f\data\map\vehicleicons\iconManRecon_ca.paa";
	iconManVirtual = "\A3\ui_f\data\map\vehicleicons\iconManVirtual_ca.paa";
	iconManAT = "\A3\ui_f\data\map\vehicleicons\iconManAT_ca.paa";
	iconManLeader = "\A3\ui_f\data\map\vehicleicons\iconManLeader_ca.paa";
	iconManMG = "\A3\ui_f\data\map\vehicleicons\iconManMG_ca.paa";
	iconManOfficer = "\A3\ui_f\data\map\vehicleicons\iconManOfficer_ca.paa";
	iconExplosiveAP = "\A3\ui_f\data\map\vehicleicons\iconExplosiveAP_ca.paa";
	iconExplosiveAPDirectional = "\A3\ui_f\data\map\vehicleicons\iconExplosiveAPDirectional_ca.paa";
	iconExplosiveAT = "\A3\ui_f\data\map\vehicleicons\iconExplosiveAT_ca.paa";
	iconExplosiveUW = "\A3\ui_f\data\map\vehicleicons\iconExplosiveUW_ca.paa";
	iconExplosiveGP = "\A3\ui_f\data\map\vehicleicons\iconExplosiveGP_ca.paa";
	iconExplosiveGPDirectional = "\A3\ui_f\data\map\vehicleicons\iconExplosiveGPDirectional_ca.paa";
	pictureExplosive = "\A3\ui_f\data\map\vehicleicons\pictureExplosive_ca.paa";
	pictureHeal = "\A3\ui_f\data\map\vehicleicons\pictureHeal_ca.paa";
	pictureRepair = "\A3\ui_f\data\map\vehicleicons\pictureRepair_ca.paa";
	pictureLogic = "\A3\ui_f\data\map\vehicleicons\pictureLogic_ca.paa";
	pictureParachute = "\A3\ui_f\data\map\vehicleicons\pictureParachute_ca.paa";
	picturePaperCar = "\A3\ui_f\data\map\vehicleicons\picturePaperCar_ca.paa";
	pictureLaserTarget = "\A3\ui_f\data\map\vehicleicons\picturelogic_ca.paa";
	pictureStaticObject = "\A3\ui_f\data\map\vehicleicons\picturelogic_ca.paa";
	pictureThing = "\A3\ui_f\data\map\vehicleicons\picturelogic_ca.paa";
	uiPictureMG = "\A3\ui_f\data\map\vehicleicons\uiPictureMG_ca.paa";
	uiPictureArifle = "\A3\ui_f\data\map\vehicleicons\uiPictureArifle_ca.paa";
	uiPictureLaunch = "\A3\ui_f\data\map\vehicleicons\uiPictureLaunch_ca.paa";
	uiPictureUnarmed = "\A3\ui_f\data\map\vehicleicons\uiPictureUnarmed_ca.paa";
};
class Optics_Armored //sources - ["A3_Weapons_F"]
{
	class RCWSOptics //sources - ["A3_Weapons_F_Acc"]
	{
		initAngleX = 0;
		minAngleX = -30;
		maxAngleX = 30;
		initAngleY = 0;
		minAngleY = -100;
		maxAngleY = 100;
		initFov = 0.4375;
		minFov = 0.03482;
		maxFov = 0.4375;
		visionMode[] = {"Normal", "NVG", "Ti"};
		thermalMode[] = {0, 1};
		minMoveX = 0;
		maxMoveX = 0;
		minMoveY = 0;
		maxMoveY = 0;
		minMoveZ = 0;
		maxMoveZ = 0;
	};
	class Wide: RCWSOptics //inherits 17 parameters from bin\config.bin/RCWSOptics, sources - ["A3_Weapons_F"]
	{
		initFov = "(36 / 120)";
		minFov = "(36 / 120)";
		maxFov = "(36 / 120)";
		visionMode[] = {"Normal", "NVG", "TI"};
		thermalMode[] = {2, 3};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_01_w_F.p3d";
		gunnerOpticsEffect[] = {};
	};
	class Medium: Wide //inherits 7 parameters from bin\config.bin/Optics_Armored/Wide, sources - ["A3_Weapons_F"]
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_01_m_F.p3d";
		initFov = "(150 * 0.05625 / 120)";
		minFov = "(150 * 0.05625 / 120)";
		maxFov = "(150 * 0.05625 / 120)";
	};
	class Narrow: Medium //inherits 4 parameters from bin\config.bin/Optics_Armored/Medium, sources - ["A3_Weapons_F"]
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_01_n_F.p3d";
		initFov = "(60 * 0.05625 / 120)";
		minFov = "(60 * 0.05625 / 120)";
		maxFov = "(60 * 0.05625 / 120)";
	};
};
class Optics_Commander_01: Optics_Armored //inherits 3 parameters from bin\config.bin/Optics_Armored, sources - ["A3_Weapons_F"]
{
	class Wide: Wide //inherits 7 parameters from bin\config.bin/Optics_Armored/Wide, sources - ["A3_Weapons_F"]
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Commander_01_w_F.p3d";
	};
	class Medium: Medium //inherits 4 parameters from bin\config.bin/Optics_Armored/Medium, sources - ["A3_Weapons_F"]
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Commander_01_m_F.p3d";
	};
	class Narrow: Narrow //inherits 4 parameters from bin\config.bin/Optics_Armored/Narrow, sources - ["A3_Weapons_F"]
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Commander_01_n_F.p3d";
	};
};
class Optics_Commander_02: Optics_Armored //inherits 3 parameters from bin\config.bin/Optics_Armored, sources - ["A3_Weapons_F"]
{
	class Wide: Wide //inherits 7 parameters from bin\config.bin/Optics_Armored/Wide, sources - ["A3_Weapons_F"]
	{
		thermalMode[] = {0, 1};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Commander_02_w_F.p3d";
	};
	class Medium: Medium //inherits 4 parameters from bin\config.bin/Optics_Armored/Medium, sources - ["A3_Weapons_F"]
	{
		thermalMode[] = {0, 1};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Commander_02_m_F.p3d";
	};
	class Narrow: Narrow //inherits 4 parameters from bin\config.bin/Optics_Armored/Narrow, sources - ["A3_Weapons_F"]
	{
		thermalMode[] = {0, 1};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Commander_02_n_F.p3d";
	};
};
class Optics_Commander_03: Optics_Commander_02 //inherits 3 parameters from bin\config.bin/Optics_Commander_02, sources - ["A3_Weapons_F"]
{
	class Wide: Wide //inherits 2 parameters from bin\config.bin/Optics_Commander_02/Wide, sources - []
	{
	};
	class Medium: Medium //inherits 2 parameters from bin\config.bin/Optics_Commander_02/Medium, sources - []
	{
	};
	class Narrow: Narrow //inherits 2 parameters from bin\config.bin/Optics_Commander_02/Narrow, sources - []
	{
	};
};
class Optics_Gunner_MBT_01: Optics_Armored //inherits 3 parameters from bin\config.bin/Optics_Armored, sources - ["A3_Weapons_F"]
{
	class Wide: Wide //inherits 7 parameters from bin\config.bin/Optics_Armored/Wide, sources - ["A3_Weapons_F"]
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
	};
	class Medium: Medium //inherits 4 parameters from bin\config.bin/Optics_Armored/Medium, sources - ["A3_Weapons_F"]
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_m_F.p3d";
	};
	class Narrow: Narrow //inherits 4 parameters from bin\config.bin/Optics_Armored/Narrow, sources - ["A3_Weapons_F"]
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_n_F.p3d";
	};
};
class Optics_Gunner_MBT_02: Optics_Armored //inherits 3 parameters from bin\config.bin/Optics_Armored, sources - ["A3_Weapons_F"]
{
	class Wide: Wide //inherits 7 parameters from bin\config.bin/Optics_Armored/Wide, sources - ["A3_Weapons_F"]
	{
		thermalMode[] = {0, 1};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_w_F.p3d";
	};
	class Medium: Medium //inherits 4 parameters from bin\config.bin/Optics_Armored/Medium, sources - ["A3_Weapons_F"]
	{
		thermalMode[] = {0, 1};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
	};
	class Narrow: Narrow //inherits 4 parameters from bin\config.bin/Optics_Armored/Narrow, sources - ["A3_Weapons_F"]
	{
		thermalMode[] = {0, 1};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
	};
};
class Optics_Gunner_MBT_03: Optics_Armored //inherits 3 parameters from bin\config.bin/Optics_Armored, sources - ["A3_Weapons_F"]
{
	class Wide: Wide //inherits 7 parameters from bin\config.bin/Optics_Armored/Wide, sources - ["A3_Weapons_F"]
	{
		initFov = "(24 / 120)";
		minFov = "(24 / 120)";
		maxFov = "(24 / 120)";
		thermalMode[] = {0, 1};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
	};
	class Medium: Medium //inherits 4 parameters from bin\config.bin/Optics_Armored/Medium, sources - ["A3_Weapons_F"]
	{
		initFov = "(120 * 0.05625 / 120)";
		minFov = "(120 * 0.05625 / 120)";
		maxFov = "(120 * 0.05625 / 120)";
		thermalMode[] = {0, 1};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_m_F.p3d";
	};
	class Narrow: Narrow //inherits 4 parameters from bin\config.bin/Optics_Armored/Narrow, sources - ["A3_Weapons_F"]
	{
		thermalMode[] = {0, 1};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_n_F.p3d";
	};
};
class Optics_Gunner_APC_01: Optics_Armored //inherits 3 parameters from bin\config.bin/Optics_Armored, sources - ["A3_Weapons_F"]
{
	class Wide: Wide //inherits 7 parameters from bin\config.bin/Optics_Armored/Wide, sources - ["A3_Weapons_F"]
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_01_w_F.p3d";
	};
	class Medium: Medium //inherits 4 parameters from bin\config.bin/Optics_Armored/Medium, sources - ["A3_Weapons_F"]
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_01_m_F.p3d";
	};
	class Narrow: Narrow //inherits 4 parameters from bin\config.bin/Optics_Armored/Narrow, sources - ["A3_Weapons_F"]
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_01_n_F.p3d";
	};
};
class Optics_Gunner_APC_02: Optics_Armored //inherits 3 parameters from bin\config.bin/Optics_Armored, sources - ["A3_Weapons_F"]
{
	class Wide: Wide //inherits 7 parameters from bin\config.bin/Optics_Armored/Wide, sources - ["A3_Weapons_F"]
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_02_w_F.p3d";
	};
	class Medium: Medium //inherits 4 parameters from bin\config.bin/Optics_Armored/Medium, sources - ["A3_Weapons_F"]
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_02_m_F.p3d";
	};
	class Narrow: Narrow //inherits 4 parameters from bin\config.bin/Optics_Armored/Narrow, sources - ["A3_Weapons_F"]
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_02_n_F.p3d";
	};
};
class Optics_Gunner_APC_03: Optics_Armored //inherits 3 parameters from bin\config.bin/Optics_Armored, sources - ["A3_Weapons_F"]
{
	class Wide: Wide //inherits 7 parameters from bin\config.bin/Optics_Armored/Wide, sources - ["A3_Weapons_F"]
	{
		thermalMode[] = {0, 1};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_03_w_F.p3d";
	};
	class Medium: Medium //inherits 4 parameters from bin\config.bin/Optics_Armored/Medium, sources - ["A3_Weapons_F"]
	{
		thermalMode[] = {0, 1};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_03_m_F.p3d";
	};
	class Narrow: Narrow //inherits 4 parameters from bin\config.bin/Optics_Armored/Narrow, sources - ["A3_Weapons_F"]
	{
		thermalMode[] = {0, 1};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_03_n_F.p3d";
	};
};
class Optics_Gunner_AAA_01: Optics_Armored //inherits 3 parameters from bin\config.bin/Optics_Armored, sources - ["A3_Weapons_F"]
{
	class Wide: Wide //inherits 7 parameters from bin\config.bin/Optics_Armored/Wide, sources - ["A3_Weapons_F"]
	{
		thermalMode[] = {0, 1};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_AAA_01_w_F.p3d";
	};
	class Medium: Medium //inherits 4 parameters from bin\config.bin/Optics_Armored/Medium, sources - ["A3_Weapons_F"]
	{
		thermalMode[] = {0, 1};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_AAA_01_m_F.p3d";
	};
	class Narrow: Narrow //inherits 4 parameters from bin\config.bin/Optics_Armored/Narrow, sources - ["A3_Weapons_F"]
	{
		thermalMode[] = {0, 1};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_AAA_01_n_F.p3d";
	};
};
class UniformSlotInfo //sources - ["A3_Characters_F"]
{
	slotType = 0;
	linkProxy = "-";
};

class CfgVehicles //sources - ["A3_Data_F","A3_Data_F_ParticleEffects","A3_Misc_F_Helpers","A3_Modules_F","A3_Modules_F_Effects","A3_Modules_F_Events","A3_Modules_F_GroupModifiers","A3_Modules_F_Hc","A3_Modules_F_Intel","A3_Modules_F_LiveFeed","A3_Modules_F_Marta","A3_Modules_F_Misc","A3_Modules_F_Multiplayer","A3_Modules_F_ObjectModifiers","A3_Modules_F_Sites","A3_Modules_F_Skirmish","A3_Modules_F_StrategicMap","A3_Modules_F_Supports","A3_Modules_F_Beta_FiringDrills","A3_Modules_F_EPB_Misc","A3_Roads_F","A3_Rocks_F","A3_Rocks_F_Blunt","A3_Rocks_F_Sharp","A3_Rocks_F_Water","A3_Structures_F","A3_Structures_F_Bridges","A3_Structures_F_Civ_Accessories","A3_Structures_F_Civ_Ancient","A3_Structures_F_Civ_BellTowers","A3_Structures_F_Civ_Calvaries","A3_Structures_F_Civ_Camping","A3_Structures_F_Civ_Chapels","A3_Structures_F_Civ_Constructions","A3_Structures_F_Civ_Dead","A3_Structures_F_Civ_Garbage","A3_Structures_F_Civ_InfoBoards","A3_Structures_F_Civ_Lamps","A3_Structures_F_Civ_Market","A3_Structures_F_Civ_Offices","A3_Structures_F_Civ_Pavements","A3_Structures_F_Civ_PlayGround","A3_Structures_F_Civ_SportsGrounds","A3_Structures_F_Civ_Statues","A3_Structures_F_Dominants_Amphitheater","A3_Structures_F_Dominants_Castle","A3_Structures_F_Dominants_Church","A3_Structures_F_Dominants_Hospital","A3_Structures_F_Dominants_Lighthouse","A3_Structures_F_Dominants_WIP","A3_Structures_F_Furniture","A3_Structures_F_Households_Addons","A3_Structures_F_Households_House_Big01","A3_Structures_F_Households_House_Big02","A3_Structures_F_Households_House_Shop01","A3_Structures_F_Households_House_Shop02","A3_Structures_F_Households_House_Small01","A3_Structures_F_Households_House_Small02","A3_Structures_F_Households_House_Small03","A3_Structures_F_Households_Slum","A3_Structures_F_Households_Stone_Big","A3_Structures_F_Households_Stone_Shed","A3_Structures_F_Households_Stone_Small","A3_Structures_F_Households_WIP","A3_Structures_F_Ind_AirPort","A3_Structures_F_Ind_Cargo","A3_Structures_F_Ind_CarService","A3_Structures_F_Ind_ConcreteMixingPlant","A3_Structures_F_Ind_Crane","A3_Structures_F_Ind_DieselPowerPlant","A3_Structures_F_Ind_Factory","A3_Structures_F_Ind_FuelStation","A3_Structures_F_Ind_FuelStation_Small","A3_Structures_F_Ind_Pipes","A3_Structures_F_Ind_PowerLines","A3_Structures_F_Ind_ReservoirTank","A3_Structures_F_Ind_Shed","A3_Structures_F_Ind_SolarPowerPlant","A3_Structures_F_Ind_Tank","A3_Structures_F_Ind_Transmitter_Tower","A3_Structures_F_Ind_WavePowerPlant","A3_Structures_F_Ind_Windmill","A3_Structures_F_Ind_WindPowerPlant","A3_Structures_F_Items","A3_Structures_F_Items_Documents","A3_Structures_F_Items_Electronics","A3_Structures_F_Items_Food","A3_Structures_F_Items_Gadgets","A3_Structures_F_Items_Luggage","A3_Structures_F_Items_Stationery","A3_Structures_F_Items_Tools","A3_Structures_F_Items_Valuables","A3_Structures_F_Items_Vessels","A3_Structures_F_Mil_BagBunker","A3_Structures_F_Mil_BagFence","A3_Structures_F_Mil_Barracks","A3_Structures_F_Mil_Bunker","A3_Structures_F_Mil_Cargo","A3_Structures_F_Mil_Flags","A3_Structures_F_Mil_Fortification","A3_Structures_F_Mil_Helipads","A3_Structures_F_Mil_Offices","A3_Structures_F_Mil_Radar","A3_Structures_F_Mil_Shelters","A3_Structures_F_Mil_TentHangar","A3_Structures_F_Naval_Buoys","A3_Structures_F_Naval_Piers","A3_Structures_F_Naval_RowBoats","A3_Structures_F_Research","A3_Structures_F_System","A3_Structures_F_Training","A3_Structures_F_Training_InvisibleTarget","A3_Structures_F_Walls","A3_Structures_F_EPA_Civ_Camping","A3_Structures_F_EPA_Civ_Constructions","A3_Structures_F_EPA_Items_Electronics","A3_Structures_F_EPA_Items_Food","A3_Structures_F_EPA_Items_Medical","A3_Structures_F_EPA_Items_Tools","A3_Structures_F_EPA_Items_Vessels","A3_Structures_F_EPA_Walls","A3_Structures_F_EPB_Civ_Accessories","A3_Structures_F_EPB_Civ_Camping","A3_Structures_F_EPB_Civ_Dead","A3_Structures_F_EPB_Civ_Garbage","A3_Structures_F_EPB_Civ_Graffiti","A3_Structures_F_EPB_Civ_PlayGround","A3_Structures_F_EPB_Furniture","A3_Structures_F_EPB_Items_Documents","A3_Structures_F_EPB_Items_Luggage","A3_Structures_F_EPB_Items_Military","A3_Structures_F_EPB_Items_Vessels","A3_Structures_F_EPB_Naval_Fishing","A3_Structures_F_EPC_Civ_Accessories","A3_Structures_F_EPC_Civ_Camping","A3_Structures_F_EPC_Civ_Garbage","A3_Structures_F_EPC_Civ_InfoBoards","A3_Structures_F_EPC_Civ_Kiosks","A3_Structures_F_EPC_Civ_Playground","A3_Structures_F_EPC_Civ_Tourism","A3_Structures_F_EPC_Dominants_GhostHotel","A3_Structures_F_EPC_Dominants_Stadium","A3_Structures_F_EPC_Items_Documents","A3_Structures_F_EPC_Items_Electronics","A3_Structures_F_EPC_Walls","A3_Animals_F","A3_Animals_F_Fishes","A3_Animals_F_Rabbit","A3_Animals_F_Snakes","A3_Animals_F_Turtle","A3_Animals_F_Beta_Chicken","A3_Animals_F_Beta_Dog","A3_Animals_F_Beta_Goat","A3_Animals_F_Beta_Sheep","A3_Signs_F","A3_Signs_F_Signs_Ad","A3_Weapons_F","A3_Weapons_F_Ammoboxes","A3_Weapons_F_Explosives","A3_Weapons_F_LongRangeRifles_GM6","A3_Weapons_F_LongRangeRifles_M320","A3_Characters_F","A3_Missions_F_Beta","A3_Missions_F_Gamma","A3_Sounds_F","A3_Static_F","A3_Static_F_Mortar_01","A3_Air_F","A3_Air_F_Heli_Light_01","A3_Air_F_Heli_Light_02","A3_Air_F_Beta","A3_Air_F_Beta_Heli_Attack_01","A3_Air_F_Beta_Heli_Attack_02","A3_Air_F_Beta_Heli_Transport_01","A3_Air_F_Beta_Heli_Transport_02","A3_Air_F_Beta_Parachute_02","A3_Air_F_Gamma_Plane_Fighter_03","A3_Armor_F_Beta","A3_Armor_F_Beta_APC_Tracked_01","A3_Armor_F_Beta_APC_Tracked_02","A3_Armor_F_Gamma_MBT_01","A3_Armor_F_Gamma_MBT_02","A3_Boat_F","A3_Boat_F_Boat_Armed_01","A3_Boat_F_Boat_Transport_01","A3_Boat_F_Beta_Boat_Armed_01","A3_Boat_F_Beta_Boat_Transport_01","A3_Boat_F_Beta_SDV_01","A3_Boat_F_Gamma_Boat_Civil_01","A3_Boat_F_Gamma_Boat_Civil_04","A3_Boat_F_Gamma_Boat_Transport_01","A3_Characters_F_Common","A3_Missions_F_EPA","A3_Soft_F","A3_Soft_F_MRAP_01","A3_Soft_F_MRAP_02","A3_Soft_F_Offroad_01","A3_Soft_F_Quadbike_01","A3_Soft_F_Beta_MRAP_03","A3_Soft_F_Beta_Truck_01","A3_Soft_F_Beta_Truck_02","A3_Soft_F_Gamma_Hatchback_01","A3_Soft_F_Gamma_SUV_01","A3_Soft_F_Gamma_Truck_01","A3_Soft_F_Gamma_Truck_02","A3_Soft_F_Gamma_Van_01","A3_Static_F_AA_01","A3_Static_F_AT_01","A3_Structures_F_Wrecks","A3_Structures_F_EPA_Mil_Scrapyard","A3_Air_F_EPB_Heli_Light_03","A3_Air_F_EPC_Plane_CAS_01","A3_Air_F_EPC_Plane_CAS_02","A3_Armor_F_Beta_APC_Wheeled_01","A3_Armor_F_Beta_APC_Wheeled_02","A3_Armor_F_EPB_APC_Tracked_03","A3_Armor_F_EPB_MBT_03","A3_Armor_F_EPC_MBT_01","A3_Armor_F_Gamma_APC_Wheeled_03","A3_Boat_F_EPC_Submarine_01","A3_Drones_F_Air_F_Gamma_UAV_01","A3_Drones_F_Air_F_Gamma_UAV_02","A3_Drones_F_Soft_F_Gamma_UGV_01","A3_Drones_F_Weapons_F_Gamma_Ammoboxes","A3_Soft_F_EPC_Truck_03","A3_Data_F_Curator","A3_Data_F_Curator_Intel","A3_Data_F_Curator_Misc","A3_Data_F_Curator_Respawn","A3_Data_F_Curator_Virtual","A3_Modules_F_Curator","A3_Modules_F_Curator_Animals","A3_Modules_F_Curator_CAS","A3_Modules_F_Curator_Curator","A3_Modules_F_Curator_Effects","A3_Modules_F_Curator_Environment","A3_Modules_F_Curator_Flares","A3_Modules_F_Curator_Intel","A3_Modules_F_Curator_Lightning","A3_Modules_F_Curator_Mines","A3_Modules_F_Curator_Misc","A3_Modules_F_Curator_Multiplayer","A3_Modules_F_Curator_Objectives","A3_Modules_F_Curator_Ordnance","A3_Modules_F_Curator_Respawn","A3_Modules_F_Curator_SmokeShells","A3_Missions_F_Curator","A3_Modules_F_Curator_Chemlights","A3_Modules_F_Kart","A3_Modules_F_Kart_TimeTrials","A3_Soft_F_Kart_Kart_01","A3_Structures_F_Kart_Civ_SportsGrounds","A3_Structures_F_Kart_Mil_Flags","A3_Structures_F_Kart_Signs_Companies","A3_Weapons_F_Kart_Pistols_Pistol_Signal_F","A3_Characters_F_Kart","A3_Modules_F_Bootcamp_Misc","A3_Sounds_F_Bootcamp","A3_Structures_F_Bootcamp_Civ_Camping","A3_Structures_F_Bootcamp_Civ_SportsGrounds","A3_Structures_F_Bootcamp_Ind_Cargo","A3_Structures_F_Bootcamp_Items_Electronics","A3_Structures_F_Bootcamp_Items_Food","A3_Structures_F_Bootcamp_Items_Sport","A3_Structures_F_Bootcamp_System","A3_Structures_F_Bootcamp_Training","A3_Structures_F_Bootcamp_VR_Blocks","A3_Structures_F_Bootcamp_VR_CoverObjects","A3_Structures_F_Bootcamp_VR_Helpers","A3_Weapons_F_Bootcamp_Ammoboxes","A3_Missions_F_Heli","A3_Modules_F_Heli_Misc","A3_Structures_F_Heli_Civ_Accessories","A3_Structures_F_Heli_Civ_Constructions","A3_Structures_F_Heli_Civ_Garbage","A3_Structures_F_Heli_Civ_Market","A3_Structures_F_Heli_Furniture","A3_Structures_F_Heli_Ind_Airport","A3_Structures_F_Heli_Ind_Cargo","A3_Structures_F_Heli_Ind_Machines","A3_Structures_F_Heli_Items_Airport","A3_Structures_F_Heli_Items_Electronics","A3_Structures_F_Heli_Items_Food","A3_Structures_F_Heli_Items_Luggage","A3_Structures_F_Heli_Items_Sport","A3_Structures_F_Heli_Items_Tools","A3_Structures_F_Heli_VR_Helpers","A3_Supplies_F_Heli","A3_Supplies_F_Heli_Bladders","A3_Supplies_F_Heli_CargoNets","A3_Supplies_F_Heli_Fuel","A3_Supplies_F_Heli_Slingload","A3_Air_F_Heli_Heli_Transport_03","A3_Air_F_Heli_Heli_Transport_04","A3_Modules_F_MP_Mark","A3_Static_F_Mark_Designator_01","A3_Static_F_Mark_Designator_02","A3_Structures_F_Mark_Items_Military","A3_Structures_F_Mark_Items_Sport","A3_Structures_F_Mark_Mil_Flags","A3_Structures_F_Mark_Training","A3_Structures_F_Mark_VR_Shapes","A3_Structures_F_Mark_VR_Targets","A3_Weapons_F_Mark","A3_Characters_F_Mark","A3_Props_F_Exp_A_Military_Equipment","A3_Structures_F_Exp_A_VR_Blocks","A3_Data_F_Exp_A_Virtual","A3_3DEN","A3_Props_F_Exp_Civilian_Garbage","A3_Props_F_Exp_Commercial_Market","A3_Props_F_Exp_Industrial_HeavyEquipment","A3_Props_F_Exp_Infrastructure_Railways","A3_Props_F_Exp_Infrastructure_Traffic","A3_Props_F_Exp_Military_Camps","A3_Props_F_Exp_Military_OldPlaneWrecks","A3_Props_F_Exp_Naval_Boats","A3_Rocks_F_Exp_Cliff","A3_Rocks_F_Exp_LavaStones","A3_Soft_F_Exp_LSV_01","A3_Soft_F_Exp_LSV_02","A3_Soft_F_Exp_MRAP_01","A3_Soft_F_Exp_MRAP_02","A3_Soft_F_Exp_Offroad_01","A3_Soft_F_Exp_Offroad_02","A3_Soft_F_Exp_Quadbike_01","A3_Soft_F_Exp_Truck_01","A3_Soft_F_Exp_Truck_03","A3_Soft_F_Exp_UGV_01","A3_Soft_F_Exp_Van_01","A3_Static_F_Exp_AA_01","A3_Static_F_Exp_AT_01","A3_Static_F_Exp_GMG_01","A3_Static_F_Exp_HMG_01","A3_Static_F_Exp_Mortar_01","A3_Structures_F_Exp_Civilian_Accessories","A3_Structures_F_Exp_Civilian_Garages","A3_Structures_F_Exp_Civilian_House_Big_01","A3_Structures_F_Exp_Civilian_House_Big_02","A3_Structures_F_Exp_Civilian_House_Big_03","A3_Structures_F_Exp_Civilian_House_Big_04","A3_Structures_F_Exp_Civilian_House_Big_05","A3_Structures_F_Exp_Civilian_House_Native_01","A3_Structures_F_Exp_Civilian_House_Native_02","A3_Structures_F_Exp_Civilian_House_Small_01","A3_Structures_F_Exp_Civilian_House_Small_02","A3_Structures_F_Exp_Civilian_House_Small_03","A3_Structures_F_Exp_Civilian_House_Small_04","A3_Structures_F_Exp_Civilian_House_Small_05","A3_Structures_F_Exp_Civilian_House_Small_06","A3_Structures_F_Exp_Civilian_School_01","A3_Structures_F_Exp_Civilian_Sheds","A3_Structures_F_Exp_Civilian_Slum_01","A3_Structures_F_Exp_Civilian_Slum_02","A3_Structures_F_Exp_Civilian_Slum_03","A3_Structures_F_Exp_Civilian_Slum_04","A3_Structures_F_Exp_Civilian_Slum_05","A3_Structures_F_Exp_Civilian_SportsGrounds","A3_Structures_F_Exp_Commercial_Addons","A3_Structures_F_Exp_Commercial_Advertisements","A3_Structures_F_Exp_Commercial_FuelStation_01","A3_Structures_F_Exp_Commercial_FuelStation_02","A3_Structures_F_Exp_Commercial_Hotel_01","A3_Structures_F_Exp_Commercial_Hotel_02","A3_Structures_F_Exp_Commercial_Market","A3_Structures_F_Exp_Commercial_MultistoryBuilding_01","A3_Structures_F_Exp_Commercial_MultistoryBuilding_03","A3_Structures_F_Exp_Commercial_MultistoryBuilding_04","A3_Structures_F_Exp_Commercial_Shop_City_01","A3_Structures_F_Exp_Commercial_Shop_City_02","A3_Structures_F_Exp_Commercial_Shop_City_03","A3_Structures_F_Exp_Commercial_Shop_City_04","A3_Structures_F_Exp_Commercial_Shop_City_05","A3_Structures_F_Exp_Commercial_Shop_City_06","A3_Structures_F_Exp_Commercial_Shop_City_07","A3_Structures_F_Exp_Commercial_Shop_Town_01","A3_Structures_F_Exp_Commercial_Shop_Town_02","A3_Structures_F_Exp_Commercial_Shop_Town_03","A3_Structures_F_Exp_Commercial_Shop_Town_04","A3_Structures_F_Exp_Commercial_Shop_Town_05","A3_Structures_F_Exp_Commercial_Supermarket_01","A3_Structures_F_Exp_Commercial_Warehouses","A3_Structures_F_Exp_Cultural_AncientRelics","A3_Structures_F_Exp_Cultural_BasaltRuins","A3_Structures_F_Exp_Cultural_Cathedral_01","A3_Structures_F_Exp_Cultural_Cemeteries","A3_Structures_F_Exp_Cultural_Church_01","A3_Structures_F_Exp_Cultural_Church_02","A3_Structures_F_Exp_Cultural_Church_03","A3_Structures_F_Exp_Cultural_Fortress_01","A3_Structures_F_Exp_Cultural_Temple_Native_01","A3_Structures_F_Exp_Cultural_Totems","A3_Structures_F_Exp_Industrial","A3_Structures_F_Exp_Industrial_DieselPowerPlant_01","A3_Structures_F_Exp_Industrial_Fields","A3_Structures_F_Exp_Industrial_Materials","A3_Structures_F_Exp_Industrial_Port","A3_Structures_F_Exp_Industrial_Stockyard_01","A3_Structures_F_Exp_Industrial_SugarCaneFactory_01","A3_Structures_F_Exp_Industrial_SurfaceMine_01","A3_Structures_F_Exp_Infrastructure","A3_Structures_F_Exp_Infrastructure_Airports","A3_Structures_F_Exp_Infrastructure_Bridges","A3_Structures_F_Exp_Infrastructure_Pavements","A3_Structures_F_Exp_Infrastructure_Powerlines","A3_Structures_F_Exp_Infrastructure_Railways","A3_Structures_F_Exp_Infrastructure_Roads","A3_Structures_F_Exp_Infrastructure_Runways","A3_Structures_F_Exp_Infrastructure_WaterSupply","A3_Structures_F_Exp_Military_Barracks_01","A3_Structures_F_Exp_Military_Camonets","A3_Structures_F_Exp_Military_ContainerBases","A3_Structures_F_Exp_Military_Emplacements","A3_Structures_F_Exp_Military_Flags","A3_Structures_F_Exp_Military_Fortifications","A3_Structures_F_Exp_Military_Pillboxes","A3_Structures_F_Exp_Military_Trenches","A3_Structures_F_Exp_Naval_Canals","A3_Structures_F_Exp_Naval_Piers","A3_Structures_F_Exp_Signs","A3_Structures_F_Exp_Signs_Companies","A3_Structures_F_Exp_Signs_Traffic","A3_Structures_F_Exp_Walls_BackAlleys","A3_Structures_F_Exp_Walls_Bamboo","A3_Structures_F_Exp_Walls_Concrete","A3_Structures_F_Exp_Walls_Crashbarriers","A3_Structures_F_Exp_Walls_Hedges","A3_Structures_F_Exp_Walls_Net","A3_Structures_F_Exp_Walls_Pipe","A3_Structures_F_Exp_Walls_Polewalls","A3_Structures_F_Exp_Walls_Railings","A3_Structures_F_Exp_Walls_Slum","A3_Structures_F_Exp_Walls_Stone","A3_Structures_F_Exp_Walls_Tin","A3_Structures_F_Exp_Walls_Wired","A3_Structures_F_Exp_Walls_Wooden","A3_Supplies_F_Exp","A3_Supplies_F_Exp_Ammoboxes","A3_Weapons_F_Exp","A3_Air_F_Exp","A3_Air_F_Exp_Heli_Light_01","A3_Air_F_Exp_Heli_Transport_01","A3_Air_F_Exp_Plane_Civil_01","A3_Air_F_Exp_UAV_03","A3_Air_F_Exp_UAV_04","A3_Air_F_Exp_VTOL_01","A3_Air_F_Exp_VTOL_02","A3_Armor_F_Exp_APC_Tracked_01","A3_Armor_F_Exp_APC_Tracked_02","A3_Armor_F_Exp_APC_Wheeled_01","A3_Armor_F_Exp_APC_Wheeled_02","A3_Armor_F_Exp_MBT_01","A3_Armor_F_Exp_MBT_02","A3_Boat_F_Exp_Boat_Armed_01","A3_Boat_F_Exp_Boat_Transport_01","A3_Boat_F_Exp_Boat_Transport_02","A3_Boat_F_Exp_Scooter_Transport_01","A3_Characters_F_Exp","A3_Characters_F_Exp_Civil","A3_Characters_F_Exp_Headgear","A3_Characters_F_Exp_Vests","A3_Static_F_Jets_AAA_System_01","A3_Static_F_Jets_SAM_System_01","A3_Static_F_Jets_SAM_System_02","A3_Air_F_Jets_Plane_Fighter_01","A3_Air_F_Jets_Plane_Fighter_02","A3_Air_F_Jets_Plane_Fighter_04","A3_Air_F_Jets_UAV_05","A3_Boat_F_Jets_Carrier_01","A3_Characters_F_Jets","A3_Characters_F_Jets_Vests","A3_Props_F_Argo_Civilian_InfoBoards","A3_Props_F_Argo_Items_Documents","A3_Props_F_Argo_Items_Electronics","A3_Rocks_F_Argo_Limestone","A3_Structures_F_Argo_Civilian_Accessories","A3_Structures_F_Argo_Civilian_Addons","A3_Structures_F_Argo_Civilian_Garbage","A3_Structures_F_Argo_Civilian_House_Big01","A3_Structures_F_Argo_Civilian_House_Big02","A3_Structures_F_Argo_Civilian_House_Small01","A3_Structures_F_Argo_Civilian_House_Small02","A3_Structures_F_Argo_Civilian_Stone_House_Big_01","A3_Structures_F_Argo_Civilian_Stone_Shed_01","A3_Structures_F_Argo_Civilian_Unfinished_Building_01","A3_Structures_F_Argo_Commercial_Accessories","A3_Structures_F_Argo_Commercial_Billboards","A3_Structures_F_Argo_Commercial_FuelStation_01","A3_Structures_F_Argo_Commercial_Shop_02","A3_Structures_F_Argo_Commercial_Supermarket_01","A3_Structures_F_Argo_Cultural_Church","A3_Structures_F_Argo_Cultural_Statues","A3_Structures_F_Argo_Decals_Horizontal","A3_Structures_F_Argo_Industrial_Agriculture","A3_Structures_F_Argo_Industrial_Materials","A3_Structures_F_Argo_Infrastructure_Runways","A3_Structures_F_Argo_Infrastructure_Seaports","A3_Structures_F_Argo_Infrastructure_WaterSupply","A3_Structures_F_Argo_Military_Bunkers","A3_Structures_F_Argo_Military_ContainerBases","A3_Structures_F_Argo_Military_Domes","A3_Structures_F_Argo_Military_Fortifications","A3_Structures_F_Argo_Military_Turrets","A3_Structures_F_Argo_Signs_Warnings","A3_Structures_F_Argo_Walls_City","A3_Structures_F_Argo_Walls_Concrete","A3_Structures_F_Argo_Walls_Military","A3_Structures_F_Argo_Walls_Net","A3_Structures_F_Argo_Walls_Pipe","A3_Structures_F_Argo_Walls_Tin","A3_Structures_F_Argo_Walls_Wooden","A3_Structures_F_Argo_Wrecks","A3_Armor_F_Argo_APC_Tracked_01","A3_Armor_F_Argo_APC_Wheeled_02","A3_Modules_F_Patrol","A3_Characters_F_Patrol"]
{
	access = 1;
	class All //sources - ["A3_Data_F"]
	{
		access = 0;
		scope = 0;
		reversed = 1;
		autocenter = 1;
		animated = 1;
		shadow = 1;
		featureType = 0;
		vehicleClass = "";
		icon = "iconObject";
		side = 4;
		faction = "Default";
		displayName = "Unknown";
		speechSingular[] = {};
		speechPlural[] = {};
		maxDetectRange = 20;
		detectSkill = 20;
		mineAlertIconRange = 200;
		killFriendlyExpCoef = 1;
		weaponSlots = 0;
		camouflage = 2;
		audible = 1;
		accuracy = 0;
		spotableDarkNightLightsOff = 0.001;
		spotableNightLightsOff = 0.02;
		spotableNightLightsOn = 4;
		accuracyDarkNightLightsOff = 0.001;
		accuracyNightLightsOff = 0.006;
		accuracyNightLightsOn = 0.1;
		attenuationEffectType = "";
		insideSoundCoef = 0.5;
		outsideSoundFilter = 0;
		occludeSoundsWhenIn = 0.316228;
		obstructSoundsWhenIn = 0.562341;
		obstructSoundLFRatio = 0;
		occludeSoundLFRatio = 0.25;
		unloadInCombat = 0;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 60;
		slowSpeedForwardCoef = 0.3;
		normalSpeedForwardCoef = 0.85;
		epeImpulseDamageCoef = 30;
		gunnerHasFlares = 1;
		enableManualFire = 1;
		sensitivity = 2.5;
		sensitivityEar = 0.0075;
		picture = "";
		portrait = "";
		ghostPreview = "";
		simulation = "";
		destrType = "DestructDefault";
		armor = 100;
		armorLights = 0.4;
		armorStructural = 1;
		crewVulnerable = 1;
		damageResistance = 0.004;
		crewCrashProtection = 1;
		replaceDamaged = "";
		replaceDamagedLimit = 0.9;
		replaceDamagedHitpoints[] = {};
		keepInEPESceneAfterDeath = 0;
		fuelCapacity = 0;
		fuelConsumptionRate = 0.01;
		extCameraPosition[] = {0, 2, -20};
		groupCameraPosition[] = {0, 5, -30};
		extCameraParams[] = {1};
		steerAheadSimul = 0.3;
		steerAheadPlan = 0.4;
		cameraSmoothSpeed = 5;
		minFireTime = 20;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1;
		indirectHitEnemyCoefAI = 10;
		indirectHitFriendlyCoefAI = -20;
		indirectHitCivilianCoefAI = -20;
		indirectHitUnknownCoefAI = -0.5;
		precision = 5;
		brakeDistance = 5;
		formationX = 10;
		formationZ = 20;
		formationTime = 5;
		alwaysTarget = 0;
		irTarget = 1;
		irScanRangeMin = 0;
		irScanRangeMax = 0;
		irScanToEyeFactor = 1;
		irScanGround = 1;
		laserTarget = 0;
		laserScanner = 0;
		nvTarget = 0;
		nvScanner = 0;
		artilleryTarget = 0;
		artilleryScanner = 0;
		canUseScanners = 1;
		preferRoads = 0;
		unitInfoType = "RscUnitInfoTank";
		unitInfoTypeLite = 0;
		hideUnitInfo = 0;
		nightVision = 0;
		commanderCanSee = 31;
		gunnerCanSee = "4+8+16";
		driverCanSee = "2+8+16";
		showCrewAim = 7;
		radarType = 0;
		maxSpeed = 80;
		limitedSpeedCoef = 0.22;
		secondaryExplosion = -1;
		hasDriver = 1;
		driverForceOptics = 0;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 0;
		getInRadius = 2.5;
		selectionClan = "";
		selectionDashboard = "";
		selectionShowDamage = "";
		selectionBackLights = "";
		memoryPointSupply = "doplnovani";
		supplyRadius = -1;
		enableGPS = 0;
		enableWatch = 0;
		enableRadio = 0;
		lockDetectionSystem = 0;
		incomingMissileDetectionSystem = 0;
		headGforceLeaningFactor[] = {0.01, 0.002, 0.01};
		usePreciseGetInAction = 0;
		allowTabLock = 1;
		showAllTargets = 0;
		dustFrontLeftPos = "dustFrontLeft";
		dustFrontRightPos = "dustFrontRight";
		dustBackLeftPos = "dustBackLeft";
		dustBackRightPos = "dustBackRight";
		wheelCircumference = 1;
		waterLeakiness = 0.5;
		waterResistanceCoef = 0.5;
		waterLinearDampingCoefX = 0;
		waterLinearDampingCoefY = 0;
		waterAngularDampingCoef = 0;
		showNVGDriver = 0;
		showNVGCommander = 0;
		showNVGGunner = 0;
		showNVGCargo[] = {0};
		soundAttenuationCargo[] = {1};
		countsForScoreboard = 1;
		hullDamageCauseExplosion = 0;
		class EventHandlers //sources - []
		{
		};
		class MarkerLights //sources - []
		{
		};
		class NVGMarkers //sources - []
		{
		};
		class NVGMarker //sources - []
		{
			diffuse[] = {1, 1, 1, 1};
			ambient[] = {1, 1, 1, 1};
			brightness = 1;
			blinking = 0;
			onlyInNvg = 0;
		};
		class Turrets //sources - []
		{
		};
		class HeadLimits //sources - []
		{
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = 40;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
			minAngleZ = -45;
			maxAngleZ = 45;
			rotZRadius = 0.2;
		};
		class ViewPilot //sources - []
		{
			initAngleX = 5;
			minAngleX = -55;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			minMoveX = 0;
			maxMoveX = 0;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};
		class ViewCargo //sources - []
		{
			initAngleX = 5;
			minAngleX = -85;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			minMoveX = 0;
			maxMoveX = 0;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};
		class ViewOptics //sources - []
		{
			initAngleX = 0;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
			minMoveX = 0;
			maxMoveX = 0;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};
		class PilotSpec //sources - []
		{
			showHeadPhones = 0;
		};
		class CargoSpec //sources - []
		{
			class Cargo1 //sources - []
			{
				showHeadPhones = 0;
			};
		};
		transportSoldier = 0;
		transportAmmo = 0;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;
		isbackpack = 0;
		transportFuel = 0;
		transportRepair = 0;
		transportVehiclesCount = 0;
		transportVehiclesMass = 0;
		class TransportWeapons //sources - []
		{
		};
		class TransportMagazines //sources - []
		{
		};
		attendant = 0;
		engineer = 0;
		uavHacker = 0;
		soundEngine[] = {"", 1, 1};
		soundEnviron[] = {"", 1, 1};
		class SoundEnvironExt //sources - []
		{
		};
		class SoundEquipment //sources - []
		{
		};
		class SoundGear //sources - []
		{
		};
		class SoundBreath //sources - []
		{
		};
		class SoundBreathSwimming //sources - []
		{
		};
		class SoundBreathInjured //sources - []
		{
		};
		class SoundHitScream //sources - []
		{
		};
		class SoundInjured //sources - []
		{
		};
		class SoundBreathAutomatic //sources - []
		{
		};
		class SoundDrown //sources - []
		{
		};
		class SoundChoke //sources - []
		{
		};
		class SoundRecovered //sources - []
		{
		};
		class SoundBurning //sources - []
		{
		};
		class PulsationSound //sources - []
		{
		};
		class SoundDrowning //sources - []
		{
		};
		soundCrash[] = {"", 0.316228, 1};
		soundLandCrash[] = {"", 1, 1};
		soundWaterCrash[] = {"", 0.177828, 1};
		soundGetIn[] = {"", 0.000316228, 1};
		soundGetOut[] = {"", 0.000316228, 1};
		soundServo[] = {"", 0.00316228, 0.5};
		soundElevation[] = {"", 0.00316228, 0.5};
		sounddamage[] = {"", 1, 1};
		soundEngineOnInt[] = {"", 1, 1};
		soundEngineOffInt[] = {"", 1, 1};
		soundEngineOnExt[] = {"", 1, 1};
		soundEngineOffExt[] = {"", 1, 1};
		soundGearUp[] = {"", 1, 1};
		soundGearDown[] = {"", 1, 1};
		soundFlapsUp[] = {"", 1, 1};
		soundFlapsDown[] = {"", 1, 1};
		cabinOpenSound[] = {"", 1, 1};
		cabinCloseSound[] = {"", 1, 1};
		cabinOpenSoundInternal[] = {"", 1, 1};
		cabinCloseSoundInternal[] = {"", 1, 1};
		soundCrashes[] = {"soundCrash", 1};
		soundLandCrashes[] = {"soundLandCrash", 1};
		soundWaterCrashes[] = {"soundWaterCrash", 1};
		emptySound[] = {"", 0, 1};
		soundWoodCrash[] = {"emptySound", 0};
		soundBushCrash[] = {"emptySound", 0};
		soundBuildingCrash[] = {"emptySound", 0};
		soundArmorCrash[] = {"emptySound", 0};
		soundLocked[] = {"", 1, 1};
		soundIncommingMissile[] = {"", 1, 1};
		soundDammage[] = {"", 1, 1};
		weapons[] = {};
		magazines[] = {};
		type = 1;
		threat[] = {0.7, 0.5, 0.3};
		typicalCargo[] = {};
		class Reflectors //sources - []
		{
		};
		aggregateReflectors[] = {};
		getInAction = "";
		getOutAction = "";
		driverAction = "";
		driverInAction = "";
		cargoGetInAction[] = {};
		cargoGetOutAction[] = {};
		cargoAction[] = {};
		cargoIsCoDriver[] = {0};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};
		driverOpticsModel = "";
		driverOpticsEffect[] = {};
		driverOpticsColor[] = {1, 1, 1, 1};
		hideProxyInCombat = 0;
		forceHideDriver = 0;
		canHideDriver = -1;
		castDriverShadow = 0;
		castCargoShadow = 0;
		viewDriverShadow = 1;
		viewDriverShadowDiff = 1;
		viewDriverShadowAmb = 1;
		viewCargoShadow = 1;
		viewCargoShadowDiff = 1;
		viewCargoShadowAmb = 1;
		ejectDeadDriver = 0;
		ejectDeadCargo = 0;
		crew = "Civilian";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		hiddenUnderwaterSelections[] = {};
		shownUnderWaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		class FxExplo //sources - []
		{
			access = 1;
		};
		class AnimationSources //sources - []
		{
		};
		selectionFireAnim = "";
		class GunFire: WeaponFireGun //inherits 20 parameters from bin\config.bin/WeaponFireGun, sources - []
		{
		};
		class GunClouds: WeaponCloudsGun //inherits 20 parameters from bin\config.bin/WeaponCloudsGun, sources - []
		{
		};
		class MGunClouds: WeaponCloudsMGun //inherits 20 parameters from bin\config.bin/WeaponCloudsMGun, sources - []
		{
		};
		class Damage //sources - []
		{
			tex[] = {};
			mat[] = {};
		};
		selectionDamage = "zbytek";
		HeadAimDown = 0;
		class DestructionEffects //sources - ["A3_Data_F"]
		{
			class Light1 //sources - ["A3_Data_F"]
			{
				simulation = "light";
				type = "ObjectDestructionLight";
				position = "destructionEffect1";
				intensity = 0.001;
				interval = 1;
				lifeTime = 3;
			};
			class Smoke1 //sources - ["A3_Data_F"]
			{
				simulation = "particles";
				type = "ObjectDestructionSmoke";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3.5;
			};
			class Fire1 //sources - ["A3_Data_F"]
			{
				simulation = "particles";
				type = "ObjectDestructionFire1";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
			};
			class Sparks1 //sources - ["A3_Data_F"]
			{
				simulation = "particles";
				type = "ObjectDestructionSparks";
				position = "destructionEffect1";
				intensity = 0;
				interval = 1;
				lifeTime = 0;
			};
			class Sound //sources - ["A3_Data_F"]
			{
				simulation = "sound";
				position = "destructionEffect1";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
				type = "Fire";
			};
			class Light2 //sources - ["A3_Data_F"]
			{
				simulation = "light";
				type = "ObjectDestructionLight";
				position = "destructionEffect2";
				intensity = 0.001;
				interval = 1;
				lifeTime = 3;
			};
			class Fire2 //sources - ["A3_Data_F"]
			{
				simulation = "particles";
				type = "ObjectDestructionFire2";
				position = "destructionEffect2";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
			};
			class Smoke1_2 //sources - ["A3_Data_F"]
			{
				simulation = "particles";
				type = "ObjectDestructionSmoke1_2";
				position = "destructionEffect2";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3.5;
			};
		};
		cargoCanEject = 1;
		driverCanEject = 1;
		fireResistance = 10;
		airCapacity = 10;
		waterResistance = 10;
		waterDamageEngine = 0.2;
		maxFordingDepth = 1;
		impactEffectsSea = "ImpactEffectsSea";
		damageTexDelay = 0;
		coefInside = 2;
		coefInsideHeur = 2;
		coefSpeedInside = 2;
		windSockExist = 0;
		slingLoadCargoMemoryPoints[] = {};
		slingLoadCargoMemoryPointsDir[] = {};
		numberPhysicalWheels = 0;
		damageHalf[] = {};
		damageFull[] = {};
		class camShakeGForce //sources - []
		{
			power = 1;
			frequency = 20;
			distance = 0;
			minSpeed = 1;
			duration = 3;
		};
		minGForce = 0.2;
		maxGForce = 2;
		gForceShakeAttenuation = 0.5;
		class camShakeDamage //sources - []
		{
			power = 0.5;
			frequency = 60;
			distance = -1;
			minSpeed = 1;
			attenuation = 0.5;
			duration = 3;
		};
		weaponsGroup1 = "1 + 2";
		weaponsGroup2 = 4;
		weaponsGroup3 = "8 + 16 + 32";
		weaponsGroup4 = "64 + 128";
		soundTurnIn[] = {"", 0.000316228, 1};
		soundTurnOut[] = {"", 0.000316228, 1};
		soundTurnInInternal[] = {"", 0.000316228, 1};
		soundTurnOutInternal[] = {"", 0.000316228, 1};
		features = "";
		author = "Bohemia Interactive";
		mapSize = 0.5;
		class SpeechVariants //sources - ["A3_Data_F"]
		{
			class Default //sources - ["A3_Data_F"]
			{
				speechSingular[] = {"veh_unknown_s"};
				speechPlural[] = {"veh_unknown_p"};
			};
		};
		textSingular = "unknown";
		textPlural = "unknown";
		nameSound = "veh_unknown_s";
		class SimpleObject //sources - ["A3_Data_F"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Prop.jpg";
		_generalMacro = "All";
		model = "\A3\Weapons_F\empty.p3d";
		cost = 100;
		insideDetectCoef = 0.05;
	};
	class Logic: All //inherits 313 parameters from bin\config.bin/CfgVehicles/All, sources - ["A3_Modules_F","A3_Ui_F","A3_Weapons_F","A3_Modules_F_Curator"]
	{
		displayName = "Game Logic";
		nameSound = "unknown";
		scope = 2;
		vehicleClass = "Objects";
		simulation = "invisible";
		side = 7;
		fsmFormation = "";
		fsmDanger = "";
		author = "Bohemia Interactive";
		mapSize = 1;
		_generalMacro = "Logic";
		icon = "iconLogic";
		model = "\A3\Weapons_f\empty";
		picture = "pictureLogic";
		scopeCurator = 0;
	};
	class AllVehicles: All //inherits 313 parameters from bin\config.bin/CfgVehicles/All, sources - ["A3_Data_F","A3_Data_F_Curator","A3_Air_F_Heli"]
	{
		icon = "iconVehicle";
		nameSound = "unknown";
		class SquadTitles //sources - []
		{
			name = "clan_sign";
			color[] = {0, 0, 0, 0.75};
		};
		memoryPointDriverOptics[] = {"driverview", "pilot"};
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		memoryPointsGetInCoDriver = "pos codriver";
		memoryPointsGetInCoDriverDir = "pos codriver dir";
		memoryPointsGetInDriverPrecise = "pos driver";
		memoryPointsGetInCargoPrecise[] = {"pos cargo"};
		memoryPointsLeftWaterEffect = "waterEffectL";
		memoryPointsRightWaterEffect = "waterEffectR";
		memoryPointTaskMarker = "";
		memoryPointTaskMarkerOffset[] = {0, 0, 0};
		selectionClan = "clan";
		selectionDashboard = "podsvit pristroju";
		selectionShowDamage = "poskozeni";
		selectionBackLights = "zadni svetlo";
		class NewTurret //sources - ["A3_Data_F"]
		{
			body = "mainTurret";
			gun = "mainGun";
			animationSourceBody = "mainTurret";
			animationSourceGun = "mainGun";
			animationSourceHatch = "hatchGunner";
			animationSourceCamElev = "camElev";
			proxyType = "CPGunner";
			proxyIndex = 1;
			gunnerName = "Gunner";
			gunnerType = "";
			primaryGunner = 1;
			primaryObserver = 0;
			weapons[] = {};
			magazines[] = {};
			soundServo[] = {"", 0.00316228, 1};
			soundElevation[] = {"", 0.00316228, 1};
			minElev = -4;
			maxElev = 20;
			initElev = 0;
			minTurn = -360;
			maxTurn = 360;
			initTurn = 0;
			minOutElev = -4;
			maxOutElev = 20;
			initOutElev = 0;
			minOutTurn = -60;
			maxOutTurn = 60;
			initOutTurn = 0;
			maxHorizontalRotSpeed = 1.2;
			maxVerticalRotSpeed = 1.2;
			stabilizedInAxes = 3;
			primary = 1;
			hasGunner = 1;
			commanding = 1;
			gunnerGetInAction = "";
			gunnerGetOutAction = "";
			turretCanSee = 0;
			canUseScanners = 1;
			class ViewGunner: ViewOptics //inherits 15 parameters from bin\config.bin/CfgVehicles/AllVehicles/ViewOptics, sources - []
			{
				initAngleX = 5;
				minAngleX = -75;
				maxAngleX = 85;
				initAngleY = 0;
				minAngleY = -150;
				maxAngleY = 150;
				minFov = 0.25;
				maxFov = 1.25;
				initFov = 0.75;
				minMoveX = 0;
				maxMoveX = 0;
				minMoveY = 0;
				maxMoveY = 0;
				minMoveZ = 0;
				maxMoveZ = 0;
				continuous = 0;
			};
			class TurretSpec //sources - []
			{
				showHeadPhones = 0;
			};
			gunnerOpticsModel = "";
			gunnerOpticsColor[] = {0, 0, 0, 1};
			gunnerForceOptics = 1;
			gunnerOpticsShowCursor = 0;
			turrentInfoType = "";
			gunnerOutOpticsModel = "";
			gunnerOutOpticsColor[] = {0, 0, 0, 1};
			gunnerOpticsEffect[] = {};
			gunnerOutOpticsEffect[] = {};
			memoryPointGunnerOutOptics = "";
			gunnerOutForceOptics = 0;
			gunnerOutOpticsShowCursor = 0;
			gunnerFireAlsoInInternalCamera = 1;
			gunnerOutFireAlsoInInternalCamera = 1;
			gunnerUsesPilotView = 0;
			castGunnerShadow = 0;
			viewGunnerShadow = 1;
			viewGunnerShadowDiff = 1;
			viewGunnerShadowAmb = 1;
			ejectDeadGunner = 0;
			hideWeaponsGunner = 1;
			canHideGunner = -1;
			forceHideGunner = 0;
			outGunnerMayFire = 0;
			inGunnerMayFire = 1;
			showHMD = 0;
			viewGunnerInExternal = 0;
			lockWhenDriverOut = 0;
			lockWhenVehicleSpeed = -1;
			gunnerCompartments = "Compartment1";
			LODTurnedIn = -1;
			LODTurnedOut = -1;
			startEngine = 1;
			memoryPointsGetInGunnerPrecise = "";
			missileBeg = "spice rakety";
			missileEnd = "konec rakety";
			armorLights = 0.4;
			class Reflectors //sources - []
			{
			};
			aggregateReflectors[] = {};
			class GunFire: WeaponFireGun //inherits 20 parameters from bin\config.bin/WeaponFireGun, sources - []
			{
			};
			class GunClouds: WeaponCloudsGun //inherits 20 parameters from bin\config.bin/WeaponCloudsGun, sources - []
			{
			};
			class MGunClouds: WeaponCloudsMGun //inherits 20 parameters from bin\config.bin/WeaponCloudsMGun, sources - []
			{
			};
			class HitPoints //sources - []
			{
				class HitTurret //sources - []
				{
					armor = 0.8;
					material = 51;
					name = "turret";
					visual = "turret";
					passThrough = 1;
					explosionShielding = 1;
				};
				class HitGun //sources - []
				{
					armor = 0.6;
					material = 52;
					name = "gun";
					visual = "gun";
					passThrough = 1;
					explosionShielding = 1;
				};
			};
			class Turrets //sources - []
			{
			};
			class ViewOptics //sources - []
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.3;
				minFov = 0.07;
				maxFov = 0.35;
				minMoveX = 0;
				maxMoveX = 0;
				minMoveY = 0;
				maxMoveY = 0;
				minMoveZ = 0;
				maxMoveZ = 0;
			};
			forceNVG = 0;
			isCopilot = 0;
			canEject = 1;
			gunnerLeftHandAnimName = "";
			gunnerRightHandAnimName = "";
			gunnerLeftLegAnimName = "";
			gunnerRightLegAnimName = "";
			gunnerDoor = "";
			preciseGetInOut = 0;
			turretFollowFreeLook = 0;
			allowTabLock = 1;
			showAllTargets = 0;
			dontCreateAI = 0;
			disableSoundAttenuation = 0;
			slingLoadOperator = 0;
			playerPosition = 0;
			allowLauncherIn = 0;
			allowLauncherOut = 0;
			class TurnIn //sources - []
			{
				turnOffset = 0;
			};
			class TurnOut: TurnIn //inherits 1 parameters from bin\config.bin/CfgVehicles/AllVehicles/NewTurret/TurnIn, sources - []
			{
			};
			gunnerInAction = "ManActTestDriver";
			gunnerAction = "ManActTestDriver";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			memoryPointGunnerOptics = "gunnerview";
			memoryPointsGetInGunner = "pos gunner";
			memoryPointsGetInGunnerDir = "pos gunner dir";
			memoryPointGun = "kulas";
			selectionFireAnim = "zasleh";
			showCrewAim = 0;
		};
		class ViewPilot //sources - []
		{
			initAngleX = 5;
			minAngleX = -85;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			minMoveX = 0;
			maxMoveX = 0;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};
		class ViewCargo //sources - []
		{
			initAngleX = 5;
			minAngleX = -75;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			minMoveX = 0;
			maxMoveX = 0;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};
		class ViewOptics //sources - []
		{
			initAngleX = 0;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
			minMoveX = 0;
			maxMoveX = 0;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};
		class PilotSpec //sources - []
		{
			showHeadPhones = 0;
		};
		class CargoSpec //sources - []
		{
			class Cargo1 //sources - []
			{
				showHeadPhones = 0;
			};
		};
		class MFD //sources - []
		{
		};
		class Sounds //sources - []
		{
			class Engine //sources - []
			{
				sound = "soundEngine";
				frequency = "rpm";
				volume = "rpm + speed";
			};
			class Movement //sources - []
			{
				sound = "soundEnviron";
				frequency = "speed";
				volume = "speed";
			};
		};
		class SoundEvents //sources - []
		{
		};
		tracksSpeed = 0;
		selectionLeftOffset = "";
		selectionRightOffset = "";
		class RenderTargets //sources - []
		{
		};
		cargoProxyIndexes[] = {};
		driverLeftHandAnimName = "";
		driverRightHandAnimName = "";
		driverLeftLegAnimName = "";
		driverRightLegAnimName = "";
		driverDoor = "";
		cargoDoors[] = {};
		hasTerminal = 0;
		getInOutOnProxy = 0;
		preciseGetInOut = 0;
		cargoPreciseGetInOut[] = {0};
		availableForSupportTypes[] = {};
		waterPPInVehicle = 1;
		author = "Bohemia Interactive";
		_generalMacro = "AllVehicles";
		weaponsGroup1 = "1 + 		2";
		weaponsGroup2 = 4;
		weaponsGroup3 = "8 + 	16 + 	32";
		weaponsGroup4 = "64 + 		128";
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 0.2;
		tBody = 150;
		impactEffectsSea = "ImpactEffectsSea";
		impactEffectSpeedLimit = 8;
		showCrewAim = 0;
		class CargoTurret: NewTurret //inherits 115 parameters from bin\config.bin/CfgVehicles/AllVehicles/NewTurret, sources - ["A3_Data_F","A3_Data_F_Heli","A3_Air_F_Heli"]
		{
			class ViewGunner: ViewCargo //inherits 15 parameters from bin\config.bin/CfgVehicles/AllVehicles/ViewCargo, sources - []
			{
			};
			animationSourceBody = "";
			animationSourceGun = "";
			body = "";
			canEject = 1;
			commanding = 0;
			dontCreateAI = 1;
			gun = "";
			gunnerGetInAction = "GetInLow";
			gunnerGetOutAction = "GetOutLow";
			gunnerName = "cargo";
			hideWeaponsGunner = 0;
			isCopilot = 0;
			memoryPointsGetInGunner = "pos cargo";
			memoryPointsGetInGunnerDir = "pos cargo dir";
			primaryGunner = 0;
			proxyType = "CPCargo";
			startEngine = 0;
			turretFollowFreeLook = 0;
			viewGunnerInExternal = 1;
			disableSoundAttenuation = 1;
			outGunnerMayFire = 1;
			isPersonTurret = 1;
			showAsCargo = 1;
			maxElev = 45;
			minElev = -45;
			maxTurn = 95;
			minTurn = -95;
		};
		curatorInfoType = "RscDisplayAttributesVehicle";
		curatorInfoTypeEmpty = "RscDisplayAttributesVehicleEmpty";
	};
	class Land: AllVehicles //inherits 64 parameters from bin\config.bin/CfgVehicles/AllVehicles, sources - ["A3_Data_F"]
	{
		displayName = "Vehicle";
		nameSound = "unknown";
		accuracy = 0.0005;
		armor = 30;
		cost = 100000;
		fuelCapacity = 0;
		weapons[] = {"FakeWeapon"};
		magazines[] = {"FakeWeapon"};
		type = 1;
		threat[] = {0.8, 0.8, 0.3};
		wheelDamageThreshold = 0.2;
		wheelDestroyThreshold = 0.99;
		wheelDamageRadiusCoef = 0.9;
		wheelDestroyRadiusCoef = 0.4;
		author = "Bohemia Interactive";
		_generalMacro = "Land";
		weaponsGroup1 = 1;
		weaponsGroup2 = "2 + 		4";
		weaponsGroup3 = "8 + 	16 + 	32";
		weaponsGroup4 = "64 + 		128";
	};
	class LandVehicle: Land //inherits 20 parameters from bin\config.bin/CfgVehicles/Land, sources - ["A3_Data_F","A3_Armor_F_Beta"]
	{
		displayName = "Vehicle";
		accuracy = 0.02;
		cost = 500000;
		class Components //sources - []
		{
			class TransportCountermeasuresComponent //sources - []
			{
			};
		};
		selectionBrakeLights = "brzdove svetlo";
		memoryPointMissile[] = {"spice rakety", "usti hlavne"};
		memoryPointMissileDir[] = {"konec rakety", "konec hlavne"};
		class Exhausts //sources - []
		{
			class Exhaust1 //sources - []
			{
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustsEffect";
			};
		};
		engineStartSpeed = 1.5;
		leftDustEffect = "LDustEffects";
		rightDustEffect = "RDustEffects";
		leftWaterEffect = "LWaterEffects";
		rightWaterEffect = "RWaterEffects";
		leftFastWaterEffect = "LWaterEffects";
		rightFastWaterEffect = "RWaterEffects";
		class Reflectors //sources - []
		{
			class Left //sources - []
			{
				color[] = {0.9, 0.8, 0.8, 1};
				ambient[] = {0.1, 0.1, 0.1, 1};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 0.5;
			};
			class Right //sources - []
			{
				color[] = {0.9, 0.8, 0.8, 1};
				ambient[] = {0.1, 0.1, 0.1, 1};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 0.5;
			};
		};
		aggregateReflectors[] = {{"Left", "Right"}};
		tracksSpeed = 0;
		selectionLeftOffset = "PasOffsetL";
		selectionRightOffset = "PasOffsetP";
		explosionEffect = "FuelExplosion";
		author = "Bohemia Interactive";
		mapSize = 5.33;
		_generalMacro = "LandVehicle";
		class CommanderOptics: NewTurret //inherits 115 parameters from bin\config.bin/CfgVehicles/AllVehicles/NewTurret, sources - ["A3_Armor_F_Beta"]
		{
			proxyType = "CPCommander";
			proxyIndex = 1;
			gunnerName = "Commander";
			primaryGunner = 0;
			primaryObserver = 1;
			stabilizedInAxes = 0;
			body = "obsTurret";
			gun = "obsGun";
			animationSourceBody = "obsTurret";
			animationSourceGun = "obsGun";
			animationSourceHatch = "hatchCommander";
			animationSourceCamElev = "camElev";
			soundServo[] = {"A3\sounds_f\dummysound", 0.01, 1, 10};
			gunBeg = "";
			gunEnd = "";
			minElev = -4;
			maxElev = 20;
			initElev = 0;
			minTurn = -360;
			maxTurn = 360;
			initTurn = 0;
			commanding = 2;
			outGunnerMayFire = 1;
			inGunnerMayFire = 1;
			viewGunnerInExternal = 0;
			gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
			gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
			gunnerOutOpticsColor[] = {0, 0, 0, 1};
			gunnerOutForceOptics = 0;
			gunnerOutOpticsShowCursor = 0;
			gunnerOpticsEffect[] = {};
			gunnerOutOpticsEffect[] = {};
			memoryPointGunnerOutOptics = "commander_weapon_view";
			memoryPointGunnerOptics = "commanderview";
			memoryPointsGetInGunner = "pos commander";
			memoryPointsGetInGunnerDir = "pos commander dir";
			gunnerGetInAction = "GetInHigh";
			gunnerGetOutAction = "GetOutHigh";
			memoryPointGun = "gun_muzzle";
			selectionFireAnim = "zasleh_1";
			class ViewOptics: ViewOptics //inherits 15 parameters from bin\config.bin/CfgVehicles/AllVehicles/NewTurret/ViewOptics, sources - []
			{
			};
			class ViewGunner: ViewCargo //inherits 15 parameters from bin\config.bin/CfgVehicles/AllVehicles/ViewCargo, sources - []
			{
			};
		};
	};
	class Car: LandVehicle //inherits 25 parameters from bin\config.bin/CfgVehicles/LandVehicle, sources - ["A3_Data_F","A3_Data_F_ParticleEffects","A3_Soft_F"]
	{
		class Components: Components //inherits 1 parameters from bin\config.bin/CfgVehicles/LandVehicle/Components, sources - []
		{
			class AICarSteeringComponent //sources - []
			{
				steeringPIDWeights[] = {2.9, 0.1, 0.2};
				speedPIDWeights[] = {0.7, 0.2, 0};
				convoyPIDWeights[] = {1, 0.01, 0.01};
				doRemapSpeed = 1;
				remapSpeedRange[] = {30, 70};
				remapSpeedScalar[] = {1, 0.35};
				doPredictForward = 1;
				predictForwardRange[] = {1, 20};
				steerAheadSaturation[] = {0.01, 0.4};
				speedPredictionMethod = 2;
				wheelAngleCoef = 0.7;
				forwardAngleCoef = 0.7;
				steeringAngleCoef = 1;
				differenceAngleCoef = 0.4;
				stuckMaxTime = 3;
				allowOvertaking = 1;
				allowDrifting = 0;
				allowCollisionAvoidance = 1;
				maxWheelAngleDiff = 0.2616;
				minSpeedToKeep = 0.1;
				commandTurnFactor = 1;
			};
		};
		mapSize = 5;
		fuelExplosionPower = 100;
		icon = "iconCar";
		displayName = "Car";
		accuracy = 0.2;
		cost = 40000;
		fuelCapacity = 100;
		unloadInCombat = 1;
		canFloat = 0;
		collisionEffect = "";
		limitedSpeedCoef = 0.5;
		armor = 20;
		armorStructural = 4;
		driverCanSee = "4+8+2+32";
		gunnerCanSee = "4+2+8+32";
		holdOffroadFormation = 0;
		hullDamageCauseExplosion = 1;
		class PlateInfos //sources - []
		{
			name = "spz";
			color[] = {0, 0, 0, 0.75};
		};
		class HitPoints //sources - []
		{
			class HitEngine //sources - []
			{
				armor = 1.2;
				material = 60;
				name = "engine";
				visual = "engine";
				passThrough = 1;
				explosionShielding = 1;
			};
			class HitRGlass //sources - []
			{
				armor = 0.5;
				material = -1;
				name = "sklo predni P";
				convexComponent = "sklo predni P";
				visual = "";
				passThrough = 1;
				explosionShielding = 1;
			};
			class HitLGlass //sources - []
			{
				armor = 0.5;
				material = -1;
				name = "sklo predni L";
				convexComponent = "sklo predni L";
				visual = "";
				passThrough = 1;
				explosionShielding = 1;
			};
			class HitBody //sources - []
			{
				armor = 0.4;
				material = 50;
				name = "karoserie";
				visual = "karoserie";
				passThrough = 1;
				explosionShielding = 1;
			};
			class HitFuel //sources - []
			{
				armor = 1.4;
				material = -1;
				name = "palivo";
				visual = "palivo";
				passThrough = 1;
				explosionShielding = 1;
			};
			class HitLFWheel //sources - []
			{
				armor = 0.05;
				material = -1;
				name = "Levy predni tlumic";
				visual = "Levy predni";
				passThrough = 1;
				explosionShielding = 1;
			};
			class HitRFWheel //sources - []
			{
				armor = 0.05;
				material = -1;
				name = "Pravy predni tlumic";
				visual = "Pravy predni";
				passThrough = 1;
				explosionShielding = 1;
			};
			class HitLF2Wheel //sources - []
			{
				armor = 0.05;
				material = -1;
				name = "Levy dalsi tlumic";
				visual = "Levy dalsi";
				passThrough = 1;
				explosionShielding = 1;
			};
			class HitRF2Wheel //sources - []
			{
				armor = 0.05;
				material = -1;
				name = "Pravy dalsi tlumic";
				visual = "Pravy dalsi";
				passThrough = 1;
				explosionShielding = 1;
			};
			class HitLMWheel //sources - []
			{
				armor = 0.05;
				material = -1;
				name = "Levy prostredni tlumic";
				visual = "Levy prostredni";
				passThrough = 1;
				explosionShielding = 1;
			};
			class HitRMWheel //sources - []
			{
				armor = 0.05;
				material = -1;
				name = "Pravy prostredni tlumic";
				visual = "Pravy prostredni";
				passThrough = 1;
				explosionShielding = 1;
			};
			class HitLBWheel //sources - []
			{
				armor = 0.05;
				material = -1;
				name = "Levy zadni tlumic";
				visual = "Levy zadni";
				passThrough = 1;
				explosionShielding = 1;
			};
			class HitRBWheel //sources - []
			{
				armor = 0.05;
				material = -1;
				name = "Pravy zadni tlumic";
				visual = "Pravy zadni";
				passThrough = 1;
				explosionShielding = 1;
			};
		};
		selectionFireAnim = "zasleh";
		alphaTracks = 0.2;
		memoryPointTrackFLL = "Stopa PLL";
		memoryPointTrackFLR = "Stopa PLP";
		memoryPointTrackBLL = "Stopa ZLL";
		memoryPointTrackBLR = "Stopa ZLP";
		memoryPointTrackFRL = "Stopa PPL";
		memoryPointTrackFRR = "Stopa PPP";
		memoryPointTrackBRL = "Stopa ZPL";
		memoryPointTrackBRR = "Stopa ZPP";
		memoryPointCirculumReference = "circulumReference";
		gearBox[] = {-8, 0, 10, 6.15, 4.44, 3.33};
		Scudeffect = "ScudEffect";
		armorLights = 0.4;
		vehicleClass = "Car";
		wheelCircumference = 2.513;
		turnCoef = 2;
		terrainCoef = 2;
		waterSpeedFactor = 0.2;
		maxSpeed = 100;
		preferRoads = 1;
		unitInfoType = "RscUnitInfo";
		hideUnitInfo = 1;
		formationX = 20;
		formationZ = 20;
		precision = 10;
		brakeDistance = 7;
		steerAheadSimul = 0.4;
		steerAheadPlan = 0.2;
		predictTurnSimul = 0.4;
		predictTurnPlan = 0.8;
		soundGear[] = {"", 0.000177828, 1};
		extCameraPosition[] = {0.5, 2, -10};
		class ViewPilot: ViewPilot //inherits 15 parameters from bin\config.bin/CfgVehicles/AllVehicles/ViewPilot, sources - []
		{
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			initAngleX = 15;
			minAngleX = -85;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
		};
		simulation = "car";
		weapons[] = {};
		magazines[] = {};
		type = 0;
		threat[] = {0.5, 0.5, 0.5};
		typicalCargo[] = {"Soldier"};
		audible = 3;
		occludeSoundsWhenIn = 0.1;
		obstructSoundsWhenIn = 0.316228;
		getInAction = "";
		getOutAction = "";
		scudModel = "";
		damperSize = 0.1;
		damperForce = 1;
		damperDamping = 1;
		inputTurnCurve[] = {{0, {0, 0, 1, 1}}, {30, {0, 0, 0.2, 0.008, 0.4, 0.032, 0.6, 0.216, 0.8, 0.512, 1, 1}}};
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
		enableGPS = 0;
		soundEngine[] = {"", 1.77828, 0.9};
		soundEnviron[] = {"", 0.562341, 1};
		class Sounds: Sounds //inherits 2 parameters from bin\config.bin/CfgVehicles/AllVehicles/Sounds, sources - []
		{
			class Engine: Engine //inherits 3 parameters from bin\config.bin/CfgVehicles/AllVehicles/Sounds/Engine, sources - []
			{
				sound = "soundEngine";
				frequency = "(randomizer*0.05+0.95)*rpm*1.2";
				volume = "thrust*0.5+0.5";
			};
			class Movement: Movement //inherits 3 parameters from bin\config.bin/CfgVehicles/AllVehicles/Sounds/Movement, sources - []
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "speed*0.03334";
			};
		};
		class PlayerSteeringCoefficients //sources - []
		{
			turnIncreaseConst = 0.3;
			turnIncreaseLinear = 1;
			turnIncreaseTime = 1;
			turnDecreaseConst = 5;
			turnDecreaseLinear = 3;
			turnDecreaseTime = 0;
			maxTurnHundred = 0.7;
		};
		numberPhysicalWheels = 4;
		author = "Bohemia Interactive";
		class SpeechVariants //sources - ["A3_Data_F"]
		{
			class Default //sources - ["A3_Data_F"]
			{
				speechSingular[] = {"veh_vehicle_car_s"};
				speechPlural[] = {"veh_vehicle_car_p"};
			};
		};
		textSingular = "car";
		textPlural = "cars";
		nameSound = "veh_vehicle_car_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Car.jpg";
		_generalMacro = "Car";
		editorSubcategory = "EdSubcat_Cars";
		memoryPointTaskMarkerOffset[] = {0, 0.3, 0};
		rightDustEffects[] = {{"GdtGrassShort", "RDustEffects"}, {"GdtGrassShort", "RGrassEffects"}, {"GdtGrassTall", "RDustEffects"}, {"GdtGrassTall", "RGrassEffects"}, {"GdtRedDirt", "RDustEffectsRed"}, {"GdtField", "RDustEffects"}, {"GdtForest", "RDustEffects"}, {"GdtVolcano", "RDustEffects"}, {"GdtVolcano", "RStonesEffects"}, {"GdtCliff", "RDustEffects"}, {"GdtVolcanoBeach", "RDustEffects"}, {"SurfRoadDirt_exp", "RDustEffectsRed"}, {"SurfRoadConcrete_exp", "RDustEffects"}, {"SurfRoadTarmac_exp", "RDustEffects"}, {"GdtStratisConcrete", "RDustEffects"}, {"GdtStratisConcrete", "RDirtEffects"}, {"GdtStratisBeach", "RDustEffects"}, {"GdtStratisBeach", "RStonesEffects"}, {"GdtStratisDirt", "RDustEffects"}, {"GdtStratisDirt", "RDirtEffects"}, {"GdtStratisSeabedCluttered", "RDustEffects"}, {"GdtStratisSeabed", "RDustEffects"}, {"GdtStratisDryGrass", "RDustEffects"}, {"GdtStratisDryGrass", "RGrassDryEffects"}, {"GdtStratisDryGrass", "RDirtEffects"}, {"GdtStratisGreenGrass", "RDustEffects"}, {"GdtStratisGreenGrass", "RGrassEffects"}, {"GdtStratisGreenGrass", "RDirtEffects"}, {"GdtStratisRocky", "RDustEffects"}, {"GdtStratisRocky", "RGrassEffects"}, {"GdtStratisRocky", "RDirtEffects"}, {"GdtStratisThistles", "RDustEffects"}, {"GdtStratisThistles", "RGrassEffects"}, {"GdtStratisThistles", "RDirtEffects"}, {"GdtConcrete", "RDustEffects"}, {"GdtConcrete", "RDirtEffects"}, {"GdtAsphalt", "RDustEffects"}, {"GdtAsphalt", "RDirtEffects"}, {"GdtRubble", "RDustEffects"}, {"GdtRubble", "RDirtEffects"}, {"GdtSoil", "RDustEffects"}, {"GdtSoil", "RDirtEffects"}, {"GdtBeach", "RDustEffects"}, {"GdtBeach", "RStonesEffects"}, {"GdtRock", "RDustEffects"}, {"GdtRock", "RDirtEffects"}, {"GdtDead", "RDustEffects"}, {"GdtDead", "RDirtEffects"}, {"Default", "RDustEffects"}, {"GdtDesert", "RDustEffects"}, {"GdtDesert", "RStonesEffects"}, {"GdtDesert1", "RDustEffects"}, {"GdtDesert1", "RSandEffects"}, {"GdtDesert1", "RDirtEffects"}, {"GdtDesert1", "RStonesEffects"}, {"GdtDesert2", "RDustEffects"}, {"GdtDesert2", "RSandEffects"}, {"GdtDesert2", "RGrassEffects"}, {"GdtDesert2", "RDirtEffects"}, {"GdtDirt", "RDustEffects"}, {"GdtDirt", "RDirtEffects"}, {"GdtGrassGreen", "RDustEffects"}, {"GdtGrassGreen", "RGrassEffects"}, {"GdtGrassGreen", "RDirtEffects"}, {"GdtGrassDry", "RDustEffects"}, {"GdtGrassDry", "RGrassDryEffects"}, {"GdtGrassDry", "RDirtEffects"}, {"GdtGrassWild", "RDustEffects"}, {"GdtGrassWild", "RGrassEffects"}, {"GdtGrassWild", "RDirtEffects"}, {"GdtWildField", "RDustEffects"}, {"GdtWildField", "RGrassEffects"}, {"GdtWildField", "RDirtEffects"}, {"GdtWeed1", "RDustEffects"}, {"GdtWeed1", "RGrassEffects"}, {"GdtWeed1", "RDirtEffects"}, {"GdtWeed2", "RDustEffects"}, {"GdtWeed2", "RGrassEffects"}, {"GdtWeed2", "RDirtEffects"}, {"GdtThorn", "RDustEffects"}, {"GdtThorn", "RGrassEffects"}, {"GdtThorn", "RDirtEffects"}, {"GdtStony", "RDustEffects"}, {"GdtStony", "RGrassEffects"}, {"GdtStony", "RDirtEffects"}, {"GdtStonyGreen", "RDustEffects"}, {"GdtStonyGreen", "RGrassEffects"}, {"GdtStonyGreen", "RDirtEffects"}, {"GdtStonyThistle", "RDustEffects"}, {"GdtStonyThistle", "RGrassEffects"}, {"GdtStonyThistle", "RDirtEffects"}, {"GdtSeabedDeep", "RDustEffects"}, {"GdtSeabed", "RDustEffects"}, {"SurfRoadDirt", "RDustEffects"}, {"SurfRoadConcrete", "RDustEffects"}, {"SurfRoadTarmac", "RDustEffects"}, {"SurfWood", "RDustEffects"}, {"SurfMetal", "RDustEffects"}, {"SurfRoofTin", "RDustEffects"}, {"SurfRoofTiles", "RDustEffects"}, {"SurfIntWood", "RDustEffects"}, {"SurfIntConcrete", "RDustEffects"}, {"SurfIntTiles", "RDustEffects"}, {"SurfIntMetal", "RDustEffects"}, {"dirtrunway", "RDustEffects"}};
		leftDustEffects[] = {{"GdtGrassShort", "LDustEffects"}, {"GdtGrassShort", "LGrassEffects"}, {"GdtGrassTall", "LDustEffects"}, {"GdtGrassTall", "LGrassEffects"}, {"GdtRedDirt", "LDustEffectsRed"}, {"GdtField", "LDustEffects"}, {"GdtForest", "LDustEffects"}, {"GdtVolcano", "LDustEffects"}, {"GdtVolcano", "LStonesEffects"}, {"GdtCliff", "LDustEffects"}, {"GdtVolcanoBeach", "LDustEffects"}, {"SurfRoadDirt_exp", "LDustEffectsRed"}, {"SurfRoadConcrete_exp", "LDustEffects"}, {"SurfRoadTarmac_exp", "LDustEffects"}, {"GdtStratisConcrete", "LDustEffects"}, {"GdtStratisConcrete", "LDirtEffects"}, {"GdtStratisBeach", "LDustEffects"}, {"GdtStratisBeach", "LStonesEffects"}, {"GdtStratisDirt", "LDustEffects"}, {"GdtStratisDirt", "LDirtEffects"}, {"GdtStratisSeabedCluttered", "LDustEffects"}, {"GdtStratisSeabed", "LDustEffects"}, {"GdtStratisDryGrass", "LDustEffects"}, {"GdtStratisDryGrass", "LGrassDryEffects"}, {"GdtStratisDryGrass", "LDirtEffects"}, {"GdtStratisGreenGrass", "LDustEffects"}, {"GdtStratisGreenGrass", "LGrassEffects"}, {"GdtStratisGreenGrass", "LDirtEffects"}, {"GdtStratisRocky", "LDustEffects"}, {"GdtStratisRocky", "LGrassEffects"}, {"GdtStratisRocky", "LDirtEffects"}, {"GdtStratisThistles", "LDustEffects"}, {"GdtStratisThistles", "LGrassEffects"}, {"GdtStratisThistles", "LDirtEffects"}, {"GdtConcrete", "LDustEffects"}, {"GdtConcrete", "LDirtEffects"}, {"GdtAsphalt", "LDustEffects"}, {"GdtAsphalt", "LDirtEffects"}, {"GdtRubble", "LDustEffects"}, {"GdtRubble", "LGrassEffects"}, {"GdtRubble", "LDirtEffects"}, {"GdtSoil", "LDustEffects"}, {"GdtSoil", "LDirtEffects"}, {"GdtBeach", "LDustEffects"}, {"GdtBeach", "LStonesEffects"}, {"GdtRock", "LDustEffects"}, {"GdtRock", "LDirtEffects"}, {"GdtDead", "LDustEffects"}, {"GdtDead", "LDirtEffects"}, {"Default", "LDustEffects"}, {"GdtDesert", "LDustEffects"}, {"GdtDesert", "LStonesEffects"}, {"GdtDesert1", "LDustEffects"}, {"GdtDesert1", "LSandEffects"}, {"GdtDesert1", "LDirtEffects"}, {"GdtDesert1", "LStonesEffects"}, {"GdtDesert2", "LDustEffects"}, {"GdtDesert2", "LSandEffects"}, {"GdtDesert2", "LGrassEffects"}, {"GdtDesert2", "LDirtEffects"}, {"GdtDirt", "LDustEffects"}, {"GdtDirt", "LDirtEffects"}, {"GdtGrassGreen", "LDustEffects"}, {"GdtGrassGreen", "LGrassEffects"}, {"GdtGrassGreen", "LDirtEffects"}, {"GdtGrassDry", "LDustEffects"}, {"GdtGrassDry", "LGrassDryEffects"}, {"GdtGrassDry", "LDirtEffects"}, {"GdtGrassWild", "LDustEffects"}, {"GdtGrassWild", "LGrassEffects"}, {"GdtGrassWild", "LDirtEffects"}, {"GdtWildField", "LDustEffects"}, {"GdtWildField", "LGrassEffects"}, {"GdtWildField", "LDirtEffects"}, {"GdtWeed1", "LDustEffects"}, {"GdtWeed1", "LGrassEffects"}, {"GdtWeed1", "LDirtEffects"}, {"GdtWeed2", "LDustEffects"}, {"GdtWeed2", "LGrassEffects"}, {"GdtWeed2", "LDirtEffects"}, {"GdtThorn", "LDustEffects"}, {"GdtThorn", "LGrassEffects"}, {"GdtThorn", "LDirtEffects"}, {"GdtStony", "LDustEffects"}, {"GdtStony", "LGrassEffects"}, {"GdtStony", "LDirtEffects"}, {"GdtStonyGreen", "LDustEffects"}, {"GdtStonyGreen", "LGrassEffects"}, {"GdtStonyGreen", "LDirtEffects"}, {"GdtStonyThistle", "LDustEffects"}, {"GdtStonyThistle", "LGrassEffects"}, {"GdtStonyThistle", "LDirtEffects"}, {"GdtSeabedDeep", "LDustEffects"}, {"GdtSeabed", "LDustEffects"}, {"SurfRoadDirt", "LDustEffects"}, {"SurfRoadConcrete", "LDustEffects"}, {"SurfRoadTarmac", "LDustEffects"}, {"SurfWood", "LDustEffects"}, {"SurfMetal", "LDustEffects"}, {"SurfRoofTin", "LDustEffects"}, {"SurfRoofTiles", "LDustEffects"}, {"SurfIntWood", "LDustEffects"}, {"SurfIntConcrete", "LDustEffects"}, {"SurfIntTiles", "LDustEffects"}, {"SurfIntMetal", "LDustEffects"}, {"dirtrunway", "LDustEffects"}};
		class DestructionEffects //sources - ["A3_Data_F_ParticleEffects"]
		{
			class Light1 //sources - ["A3_Data_F_ParticleEffects"]
			{
				simulation = "light";
				type = "ObjectDestructionLight";
				position = "destructionEffect1";
				intensity = 0.001;
				interval = 1;
				lifeTime = 3;
				enabled = "distToWater";
			};
			class Sound //sources - ["A3_Data_F_ParticleEffects"]
			{
				simulation = "sound";
				position = "destructionEffect1";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
				type = "Fire";
			};
			class Fire1 //sources - ["A3_Data_F_ParticleEffects"]
			{
				simulation = "particles";
				type = "ObjectDestructionFire1Small";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
			};
			class Refract1 //sources - ["A3_Data_F_ParticleEffects"]
			{
				simulation = "particles";
				type = "ObjectDestructionRefractSmall";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
			};
			class Smoke1 //sources - ["A3_Data_F_ParticleEffects"]
			{
				simulation = "particles";
				type = "ObjectDestructionSmokeSmall";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3.5;
			};
			class Sparks1 //sources - ["A3_Data_F_ParticleEffects"]
			{
				simulation = "particles";
				type = "ObjectDestructionSparks";
				position = "destructionEffect1";
				intensity = 0;
				interval = 1;
				lifeTime = 0;
			};
			class FireSparks1 //sources - ["A3_Data_F_ParticleEffects"]
			{
				simulation = "particles";
				type = "FireSparks";
				position = "destructionEffect2";
				intensity = 1;
				interval = 1;
				lifeTime = 2.8;
			};
			class Fire2 //sources - ["A3_Data_F_ParticleEffects"]
			{
				simulation = "particles";
				type = "ObjectDestructionFire2Small";
				position = "destructionEffect2";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
			};
			class Smoke1_2 //sources - ["A3_Data_F_ParticleEffects"]
			{
				simulation = "particles";
				type = "ObjectDestructionSmoke1_2Small";
				position = "destructionEffect2";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3.5;
			};
			class Smoke2 //sources - ["A3_Data_F_ParticleEffects"]
			{
				simulation = "particles";
				type = "ObjectDestructionSmoke2";
				position = "destructionEffect2";
				intensity = 1;
				interval = 1;
				lifeTime = 3.2;
			};
		};
		sensitivityEar = 0.125;
		sensitivity = 1.75;
	};
	class Motorcycle: LandVehicle //inherits 25 parameters from bin\config.bin/CfgVehicles/LandVehicle, sources - ["A3_Data_F"]
	{
		simulation = "motorcycle";
		displayName = "Motorcycle";
		accuracy = 0.2;
		icon = "iconMotorcycle";
		nameSound = "veh_car";
		isBicycle = 0;
		unloadInCombat = 1;
		castDriverShadow = 1;
		castCargoShadow = 1;
		ejectDeadDriver = 1;
		ejectDeadCargo = 1;
		armor = 10;
		armorStructural = 4;
		cost = 500;
		fuelCapacity = 50;
		damperSize = 0.2;
		damperForce = 1;
		damperDamping = 3;
		transportSoldier = 0;
		typicalCargo[] = {};
		occludeSoundsWhenIn = 1;
		obstructSoundsWhenIn = 1;
		driverCanSee = "8+2+32";
		gunnerCanSee = "2+8+32";
		class PlateInfos //sources - []
		{
			name = "spz";
			color[] = {0, 0, 0, 0.75};
		};
		class HitPoints //sources - []
		{
			class HitEngine //sources - []
			{
				armor = 1.2;
				material = 60;
				name = "engine";
				visual = "engine";
				passThrough = 1;
				explosionShielding = 1;
			};
			class HitRGlass //sources - []
			{
				armor = 0.5;
				material = -1;
				name = "sklo predni P";
				convexComponent = "sklo predni P";
				visual = "";
				passThrough = 1;
				explosionShielding = 1;
			};
			class HitLGlass //sources - []
			{
				armor = 0.5;
				material = -1;
				name = "sklo predni L";
				convexComponent = "sklo predni L";
				visual = "";
				passThrough = 1;
				explosionShielding = 1;
			};
			class HitBody //sources - []
			{
				armor = 0.4;
				material = -1;
				name = "karoserie";
				visual = "karoserie";
				passThrough = 1;
				explosionShielding = 1;
			};
			class HitFuel //sources - []
			{
				armor = 1.4;
				material = -1;
				name = "palivo";
				visual = "palivo";
				passThrough = 1;
				explosionShielding = 1;
			};
			class HitFWheel //sources - []
			{
				armor = 0.05;
				material = -1;
				name = "Pravy predni tlumic";
				visual = "Pravy predni";
				passThrough = 1;
				explosionShielding = 1;
			};
			class HitBWheel //sources - []
			{
				armor = 0.05;
				material = -1;
				name = "Pravy zadni tlumic";
				visual = "Pravy zadni";
				passThrough = 1;
				explosionShielding = 1;
			};
		};
		selectionFireAnim = "zasleh";
		alphaTracks = 0.1;
		textureTrackWheel = 1;
		memoryPointTrack1L = "Stopa PPL";
		memoryPointTrack1R = "Stopa PPP";
		memoryPointTrack2L = "Stopa ZPL";
		memoryPointTrack2R = "Stopa ZPP";
		vehicleClass = "Car";
		wheelCircumference = 2.513;
		turnCoef = 1;
		terrainCoef = 3;
		maxSpeed = 120;
		gearBox[] = {-8, 0, 10, 6.15, 4.44, 3.33};
		preferRoads = 1;
		unitInfoType = "RscUnitInfo";
		hideUnitInfo = 1;
		formationX = 20;
		formationZ = 20;
		precision = 10;
		brakeDistance = 16.5;
		steerAheadSimul = 0.5;
		steerAheadPlan = 0.35;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1.2;
		sensitivity = 3;
		soundGear[] = {"", 1e-005, 1};
		extCameraPosition[] = {0, 1, -10};
		class ViewPilot: ViewPilot //inherits 15 parameters from bin\config.bin/CfgVehicles/AllVehicles/ViewPilot, sources - []
		{
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			initAngleX = 15;
			minAngleX = -85;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
		};
		class Reflectors //sources - []
		{
			class Right //sources - []
			{
				color[] = {0.9, 0.8, 0.8, 1};
				ambient[] = {0.1, 0.1, 0.1, 1};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 0.5;
			};
		};
		weapons[] = {};
		magazines[] = {};
		type = 0;
		threat[] = {0.5, 0.5, 0.5};
		audible = 3;
		getInAction = "";
		getOutAction = "";
		transportMaxMagazines = 5;
		transportMaxWeapons = 0;
		class AnimationSources //sources - []
		{
			class FrontDamper //sources - []
			{
				source = "damper";
				selection = "pravy predni tlumic nerot";
			};
			class BackDamper //sources - []
			{
				source = "damper";
				selection = "pravy zadni tlumic";
			};
		};
		numberPhysicalWheels = 2;
		author = "Bohemia Interactive";
		mapSize = 5.93;
		_generalMacro = "Motorcycle";
	};
	class Bicycle: Motorcycle //inherits 69 parameters from bin\config.bin/CfgVehicles/Motorcycle, sources - []
	{
		canFloat = 0;
		isBicycle = 1;
		hideWeaponsDriver = 0;
		formationX = 5;
		formationZ = 5;
		precision = 5;
		brakeDistance = 4;
		steerAheadSimul = 0.5;
		steerAheadPlan = 0.7;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1.2;
	};
	class Tank: LandVehicle //inherits 25 parameters from bin\config.bin/CfgVehicles/LandVehicle, sources - ["A3_Data_F","A3_Data_F_ParticleEffects","A3_Armor_F_Beta"]
	{
		vehicleClass = "Armored";
		icon = "iconTank";
		displayName = "Tank";
		accuracy = 0.12;
		class Components: Components //inherits 1 parameters from bin\config.bin/CfgVehicles/LandVehicle/Components, sources - []
		{
			class AITankSteeringComponent //sources - []
			{
				steeringPIDWeights[] = {2.5, 0.3, 0};
				speedPIDWeights[] = {1, 0, 0};
				convoyPIDWeights[] = {1, 0, 0};
				doRemapSpeed = 0;
				doPredictForward = 1;
				predictForwardMaxSpeed = 15;
				predictForwardRange[] = {1, 20};
				speedPredictionMethod = 3;
				wheelAngleCoef = 0.3;
				stuckMaxTime = 30;
				maxWheelAngleDiff = 0.2616;
				minSpeedToKeep = 0.1;
				allowTurnAroundInPoint = 1;
			};
		};
		getInRadius = 3.5;
		fuelCapacity = 700;
		irScanRangeMin = 500;
		irScanRangeMax = 4000;
		irScanToEyeFactor = 1;
		armor = 400;
		armorStructural = 2;
		crewVulnerable = 0;
		class HitPoints //sources - []
		{
			class HitEngine //sources - []
			{
				armor = 0.8;
				material = 60;
				name = "engine";
				visual = "engine";
				passThrough = 1;
				explosionShielding = 1;
			};
			class HitHull //sources - []
			{
				armor = 1;
				material = 50;
				name = "hull";
				visual = "hull";
				passThrough = 1;
				explosionShielding = 1;
			};
			class HitLTrack //sources - []
			{
				armor = 0.6;
				material = 53;
				name = "pasL";
				visual = "pasL";
				passThrough = 1;
				explosionShielding = 1;
			};
			class HitRTrack //sources - []
			{
				armor = 0.6;
				material = 54;
				name = "pasP";
				visual = "pasP";
				passThrough = 1;
				explosionShielding = 1;
			};
		};
		hullDamageCauseExplosion = 1;
		selectionFireAnim = "zasleh";
		memoryPointCargoLight = "cargo light";
		bounding = "usti hlavne";
		fireDustEffect = "FDustEffects";
		gearBox[] = {-7, 0, 11, 8, 5.7, 4.2};
		alphaTracks = 0.7;
		textureTrackWheel = 0;
		memoryPointTrack1L = "Stopa LL";
		memoryPointTrack1R = "Stopa LR";
		memoryPointTrack2L = "Stopa RL";
		memoryPointTrack2R = "Stopa RR";
		extCameraPosition[] = {0, 1.5, -9};
		class ViewPilot: ViewPilot //inherits 15 parameters from bin\config.bin/CfgVehicles/AllVehicles/ViewPilot, sources - ["A3_Armor_F_Beta"]
		{
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			initAngleX = 0;
			minAngleX = -65;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
		};
		class ViewOptics: ViewOptics //inherits 15 parameters from bin\config.bin/CfgVehicles/AllVehicles/ViewOptics, sources - []
		{
			initFov = 0.3;
			minFov = 0.07;
			maxFov = 0.35;
		};
		cost = 1e+006;
		steerAheadSimul = 0.5;
		steerAheadPlan = 0.4;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1;
		soundGear[] = {"", 0.000316228, 1};
		occludeSoundsWhenIn = 0.01;
		obstructSoundsWhenIn = 0.177828;
		outsideSoundFilter = 1;
		nightVision = 0;
		driverAction = "";
		driverInAction = "";
		simulation = "tank";
		formationX = 20;
		formationZ = 30;
		precision = 5;
		brakeDistance = 7;
		maxSpeed = 80;
		tracksSpeed = 1;
		turnCoef = 1;
		class Turrets //sources - []
		{
			class MainTurret: NewTurret //inherits 115 parameters from bin\config.bin/CfgVehicles/AllVehicles/NewTurret, sources - []
			{
				commanding = 1;
				class Turrets //sources - []
				{
					class CommanderOptics: NewTurret //inherits 115 parameters from bin\config.bin/CfgVehicles/AllVehicles/NewTurret, sources - []
					{
						gunnerName = "Commander";
						primaryGunner = 0;
						primaryObserver = 1;
						body = "obsTurret";
						gun = "obsGun";
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						animationSourceHatch = "hatchCommander";
						animationSourceCamElev = "camElev";
						commanding = 2;
					};
				};
			};
		};
		canFloat = 0;
		weapons[] = {"FakeWeapon"};
		magazines[] = {"FakeWeapon"};
		type = 1;
		threat[] = {0.7, 1, 0.3};
		camouflage = 8;
		audible = 18;
		sensitivityEar = "0.0075 /3";
		hideProxyInCombat = 1;
		driverOpticsModel = "optika_tank_driver";
		driverOpticsColor[] = {1, 1, 1, 1};
		class CargoLight //sources - []
		{
			color[] = {0, 0, 0, 0};
			ambient[] = {0.6, 0, 0.15, 1};
			brightness = 0.007;
		};
		transportMaxMagazines = 100;
		transportMaxWeapons = 10;
		enableGPS = 1;
		tankTurnForce = 500000;
		class Sounds: Sounds //inherits 2 parameters from bin\config.bin/CfgVehicles/AllVehicles/Sounds, sources - []
		{
			class Engine: Engine //inherits 3 parameters from bin\config.bin/CfgVehicles/AllVehicles/Sounds/Engine, sources - []
			{
				sound = "soundEngine";
				frequency = "(1-(randomizer*0.05))*rpm*1.2";
				volume = "thrust*0.5+0.5";
			};
			class Movement: Movement //inherits 3 parameters from bin\config.bin/CfgVehicles/AllVehicles/Sounds/Movement, sources - []
			{
				sound = "soundEnviron";
				frequency = "(speed+angVelocity)*0.03334";
				volume = "((speed+angVelocity)*0.03334)+(1-((speed+angVelocity)*0.03334))*0.3";
			};
		};
		numberPhysicalWheels = 16;
		author = "Bohemia Interactive";
		mapSize = 10.51;
		class SpeechVariants //sources - ["A3_Data_F"]
		{
			class Default //sources - ["A3_Data_F"]
			{
				speechSingular[] = {"veh_vehicle_tank_s"};
				speechPlural[] = {"veh_vehicle_tank_p"};
			};
		};
		textSingular = "tank";
		textPlural = "tanks";
		nameSound = "veh_vehicle_tank_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Armor.jpg";
		_generalMacro = "Tank";
		editorSubcategory = "EdSubcat_Tanks";
		memoryPointTaskMarkerOffset[] = {0, 0.3, 0};
		rightDustEffects[] = {{"GdtGrassShort", "RDustEffects"}, {"GdtGrassShort", "RGrassEffectsBig"}, {"GdtGrassTall", "RDustEffects"}, {"GdtGrassTall", "RGrassEffectsBig"}, {"GdtRedDirt", "RDustEffectsRed"}, {"GdtField", "RDustEffects"}, {"GdtForest", "RDustEffects"}, {"GdtVolcano", "RDustEffects"}, {"GdtVolcano", "RStonesEffectsBig"}, {"GdtCliff", "RDustEffects"}, {"GdtVolcanoBeach", "RDustEffects"}, {"SurfRoadDirt_exp", "RDustEffectsRed"}, {"SurfRoadConcrete_exp", "RDustEffects"}, {"SurfRoadTarmac_exp", "RDustEffects"}, {"GdtStratisConcrete", "RDustEffects"}, {"GdtStratisConcrete", "RDirtEffectsBig"}, {"GdtStratisBeach", "RDustEffects"}, {"GdtStratisBeach", "RStonesEffectsBig"}, {"GdtStratisDirt", "RDustEffects"}, {"GdtStratisDirt", "RDirtEffectsBig"}, {"GdtStratisSeabedCluttered", "RDustEffects"}, {"GdtStratisSeabed", "RDustEffects"}, {"GdtStratisDryGrass", "RDustEffects"}, {"GdtStratisDryGrass", "RGrassEffectsDryBig"}, {"GdtStratisDryGrass", "RDirtEffectsBig"}, {"GdtStratisGreenGrass", "RDustEffects"}, {"GdtStratisGreenGrass", "RGrassEffectsBig"}, {"GdtStratisGreenGrass", "RDirtEffectsBig"}, {"GdtStratisRocky", "RDustEffects"}, {"GdtStratisRocky", "RGrassEffectsBig"}, {"GdtStratisRocky", "RDirtEffectsBig"}, {"GdtStratisThistles", "RDustEffects"}, {"GdtStratisThistles", "RGrassEffectsBig"}, {"GdtStratisThistles", "RDirtEffectsBig"}, {"GdtConcrete", "RDustEffects"}, {"GdtConcrete", "RDirtEffectsBig"}, {"GdtAsphalt", "RDustEffects"}, {"GdtAsphalt", "RDirtEffectsBig"}, {"GdtRubble", "RDustEffects"}, {"GdtRubble", "RDirtEffectsBig"}, {"GdtSoil", "RDustEffects"}, {"GdtSoil", "RDirtEffectsBig"}, {"GdtBeach", "RDustEffects"}, {"GdtBeach", "RStonesEffectsBig"}, {"GdtRock", "RDustEffects"}, {"GdtRock", "RDirtEffectsBig"}, {"GdtDead", "RDustEffects"}, {"GdtDead", "RDirtEffectsBig"}, {"Default", "RDustEffects"}, {"GdtDesert1", "RDustEffects"}, {"GdtDesert1", "RDirtEffectsBig"}, {"GdtDesert1", "RStonesEffectsBig"}, {"GdtDesert2", "RDustEffects"}, {"GdtDesert2", "RGrassEffectsBig"}, {"GdtDesert2", "RDirtEffectsBig"}, {"GdtDirt", "RDustEffects"}, {"GdtDirt", "RDirtEffectsBig"}, {"GdtGrassGreen", "RDustEffects"}, {"GdtGrassGreen", "RGrassEffectsBig"}, {"GdtGrassGreen", "RDirtEffectsBig"}, {"GdtGrassDry", "RDustEffects"}, {"GdtGrassDry", "RGrassEffectsDryBig"}, {"GdtGrassDry", "RDirtEffectsBig"}, {"GdtGrassWild", "RDustEffects"}, {"GdtGrassWild", "RGrassEffectsBig"}, {"GdtGrassWild", "RDirtEffectsBig"}, {"GdtWildField", "RDustEffects"}, {"GdtWildField", "RGrassEffectsBig"}, {"GdtWildField", "RDirtEffectsBig"}, {"GdtWeed1", "RDustEffects"}, {"GdtWeed1", "RGrassEffectsBig"}, {"GdtWeed1", "RDirtEffectsBig"}, {"GdtWeed2", "RDustEffects"}, {"GdtWeed2", "RGrassEffectsBig"}, {"GdtWeed2", "RDirtEffectsBig"}, {"GdtThorn", "RDustEffects"}, {"GdtThorn", "RGrassEffectsBig"}, {"GdtThorn", "RDirtEffectsBig"}, {"GdtStony", "RDustEffects"}, {"GdtStony", "RGrassEffectsBig"}, {"GdtStony", "RDirtEffectsBig"}, {"GdtStonyGreen", "RDustEffects"}, {"GdtStonyGreen", "RGrassEffectsBig"}, {"GdtStonyGreen", "RDirtEffectsBig"}, {"GdtStonyThistle", "RDustEffects"}, {"GdtStonyThistle", "RGrassEffectsBig"}, {"GdtStonyThistle", "RDirtEffectsBig"}, {"GdtSeabedDeep", "RDustEffects"}, {"GdtSeabed", "RDustEffects"}, {"SurfRoadDirt", "RDustEffects"}, {"SurfRoadConcrete", "RDustEffects"}, {"SurfRoadTarmac", "RDustEffects"}, {"SurfWood", "RDustEffects"}, {"SurfMetal", "RDustEffects"}, {"SurfRoofTin", "RDustEffects"}, {"SurfRoofTiles", "RDustEffects"}, {"SurfIntWood", "RDustEffects"}, {"SurfIntConcrete", "RDustEffects"}, {"SurfIntTiles", "RDustEffects"}, {"SurfIntMetal", "RDustEffects"}, {"dirtrunway", "RDustEffects"}};
		leftDustEffects[] = {{"GdtGrassShort", "LDustEffects"}, {"GdtGrassShort", "LGrassEffectsBig"}, {"GdtGrassTall", "LDustEffects"}, {"GdtGrassTall", "LGrassEffectsBig"}, {"GdtRedDirt", "LDustEffectsRed"}, {"GdtField", "LDustEffects"}, {"GdtForest", "LDustEffects"}, {"GdtVolcano", "LDustEffects"}, {"GdtVolcano", "LStonesEffectsBig"}, {"GdtCliff", "LDustEffects"}, {"GdtVolcanoBeach", "LDustEffects"}, {"SurfRoadDirt_exp", "LDustEffectsRed"}, {"SurfRoadConcrete_exp", "LDustEffects"}, {"SurfRoadTarmac_exp", "LDustEffects"}, {"GdtStratisConcrete", "LDustEffects"}, {"GdtStratisConcrete", "LDirtEffectsBig"}, {"GdtStratisBeach", "LDustEffects"}, {"GdtStratisBeach", "LStonesEffectsBig"}, {"GdtStratisDirt", "LDustEffects"}, {"GdtStratisDirt", "LDirtEffectsBig"}, {"GdtStratisSeabedCluttered", "LDustEffects"}, {"GdtStratisSeabed", "LDustEffects"}, {"GdtStratisDryGrass", "LDustEffects"}, {"GdtStratisDryGrass", "LGrassEffectsDryBig"}, {"GdtStratisDryGrass", "LDirtEffectsBig"}, {"GdtStratisGreenGrass", "LDustEffects"}, {"GdtStratisGreenGrass", "LGrassEffectsBig"}, {"GdtStratisGreenGrass", "LDirtEffectsBig"}, {"GdtStratisRocky", "LDustEffects"}, {"GdtStratisRocky", "LGrassEffectsBig"}, {"GdtStratisRocky", "LDirtEffectsBig"}, {"GdtStratisThistles", "LDustEffects"}, {"GdtStratisThistles", "LGrassEffectsBig"}, {"GdtStratisThistles", "LDirtEffectsBig"}, {"GdtConcrete", "LDustEffects"}, {"GdtConcrete", "LDirtEffectsBig"}, {"GdtAsphalt", "LDustEffects"}, {"GdtAsphalt", "LDirtEffectsBig"}, {"GdtRubble", "LDustEffects"}, {"GdtRubble", "LGrassEffectsBig"}, {"GdtRubble", "LDirtEffectsBig"}, {"GdtSoil", "LDustEffects"}, {"GdtSoil", "LDirtEffectsBig"}, {"GdtBeach", "LDustEffects"}, {"GdtBeach", "LStonesEffectsBig"}, {"GdtRock", "LDustEffects"}, {"GdtRock", "LDirtEffectsBig"}, {"GdtDead", "LDustEffects"}, {"GdtDead", "LDirtEffectsBig"}, {"Default", "LDustEffects"}, {"GdtDesert1", "LDustEffects"}, {"GdtDesert1", "LDirtEffectsBig"}, {"GdtDesert1", "LStonesEffectsBig"}, {"GdtDesert2", "LDustEffects"}, {"GdtDesert2", "LGrassEffectsBig"}, {"GdtDesert2", "LDirtEffectsBig"}, {"GdtDirt", "LDustEffects"}, {"GdtDirt", "LDirtEffectsBig"}, {"GdtGrassGreen", "LDustEffects"}, {"GdtGrassGreen", "LGrassEffectsBig"}, {"GdtGrassGreen", "LDirtEffectsBig"}, {"GdtGrassDry", "LDustEffects"}, {"GdtGrassDry", "LGrassEffectsDryBig"}, {"GdtGrassDry", "LDirtEffectsBig"}, {"GdtGrassWild", "LDustEffects"}, {"GdtGrassWild", "LGrassEffectsBig"}, {"GdtGrassWild", "LDirtEffectsBig"}, {"GdtWildField", "LDustEffects"}, {"GdtWildField", "LGrassEffectsBig"}, {"GdtWildField", "LDirtEffectsBig"}, {"GdtWeed1", "LDustEffects"}, {"GdtWeed1", "LGrassEffectsBig"}, {"GdtWeed1", "LDirtEffectsBig"}, {"GdtWeed2", "LDustEffects"}, {"GdtWeed2", "LGrassEffectsBig"}, {"GdtWeed2", "LDirtEffectsBig"}, {"GdtThorn", "LDustEffects"}, {"GdtThorn", "LGrassEffectsBig"}, {"GdtThorn", "LDirtEffectsBig"}, {"GdtStony", "LDustEffects"}, {"GdtStony", "LGrassEffectsBig"}, {"GdtStony", "LDirtEffectsBig"}, {"GdtStonyGreen", "LDustEffects"}, {"GdtStonyGreen", "LGrassEffectsBig"}, {"GdtStonyGreen", "LDirtEffectsBig"}, {"GdtStonyThistle", "LDustEffects"}, {"GdtStonyThistle", "LGrassEffectsBig"}, {"GdtStonyThistle", "LDirtEffectsBig"}, {"GdtSeabedDeep", "LDustEffects"}, {"GdtSeabed", "LDustEffects"}, {"SurfRoadDirt", "LDustEffects"}, {"SurfRoadConcrete", "LDustEffects"}, {"SurfRoadTarmac", "LDustEffects"}, {"SurfWood", "LDustEffects"}, {"SurfMetal", "LDustEffects"}, {"SurfRoofTin", "LDustEffects"}, {"SurfRoofTiles", "LDustEffects"}, {"SurfIntWood", "LDustEffects"}, {"SurfIntConcrete", "LDustEffects"}, {"SurfIntTiles", "LDustEffects"}, {"SurfIntMetal", "LDustEffects"}, {"dirtrunway", "RDustEffects"}};
		class DestructionEffects //sources - ["A3_Data_F_ParticleEffects"]
		{
			class LightBig1 //sources - ["A3_Data_F_ParticleEffects"]
			{
				simulation = "light";
				type = "ObjectDestructionLight";
				position = "destructionEffect1";
				intensity = 0.001;
				interval = 1;
				lifeTime = 3;
				enabled = "distToWater";
			};
			class Sound //sources - ["A3_Data_F_ParticleEffects"]
			{
				simulation = "sound";
				position = "destructionEffect1";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
				type = "Fire";
			};
			class FireBig1 //sources - ["A3_Data_F_ParticleEffects"]
			{
				simulation = "particles";
				type = "ObjectDestructionFire1";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
			};
			class Refract1 //sources - ["A3_Data_F_ParticleEffects"]
			{
				simulation = "particles";
				type = "ObjectDestructionRefract";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
			};
			class SmokeBig1 //sources - ["A3_Data_F_ParticleEffects"]
			{
				simulation = "particles";
				type = "ObjectDestructionSmoke";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3.5;
			};
			class SparksBig1 //sources - ["A3_Data_F_ParticleEffects"]
			{
				simulation = "particles";
				type = "ObjectDestructionSparks";
				position = "destructionEffect1";
				intensity = 0;
				interval = 1;
				lifeTime = 0;
			};
			class FireSparksBig1 //sources - ["A3_Data_F_ParticleEffects"]
			{
				simulation = "particles";
				type = "FireSparks";
				position = "destructionEffect2";
				intensity = 1;
				interval = 1;
				lifeTime = 2.8;
			};
			class FireBig2 //sources - ["A3_Data_F_ParticleEffects"]
			{
				simulation = "particles";
				type = "ObjectDestructionFire2";
				position = "destructionEffect2";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
			};
			class SmokeBig1_2 //sources - ["A3_Data_F_ParticleEffects"]
			{
				simulation = "particles";
				type = "ObjectDestructionSmoke1_2";
				position = "destructionEffect2";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3.5;
			};
			class SmokeBig2 //sources - ["A3_Data_F_ParticleEffects"]
			{
				simulation = "particles";
				type = "ObjectDestructionSmoke2";
				position = "destructionEffect2";
				intensity = 1;
				interval = 1;
				lifeTime = 3.2;
			};
		};
	};
	class APC: Tank //inherits 81 parameters from bin\config.bin/CfgVehicles/Tank, sources - ["A3_Data_F"]
	{
		icon = "iconAPC";
		vehicleClass = "Armored";
		displayName = "APC";
		nameSound = "veh_apc";
		accuracy = 0.12;
		fuelCapacity = 700;
		armor = 200;
		cost = 1e+006;
		soundGear[] = {"", 0.001, 1};
		simulation = "tank";
		maxSpeed = 60;
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/Tank/Turrets, sources - []
		{
			class MainTurret: MainTurret //inherits 2 parameters from bin\config.bin/CfgVehicles/Tank/Turrets/MainTurret, sources - []
			{
				minElev = -4.5;
				maxElev = 20;
			};
		};
		canFloat = 0;
		weapons[] = {"FakeWeapon"};
		magazines[] = {"FakeWeapon"};
		type = 1;
		threat[] = {0.8, 1, 0.3};
		author = "Bohemia Interactive";
		mapSize = 1;
		_generalMacro = "APC";
	};
	class Air: AllVehicles //inherits 64 parameters from bin\config.bin/CfgVehicles/AllVehicles, sources - ["A3_Data_F","A3_Air_F"]
	{
		icon = "iconAir";
		displayName = "Helicopter";
		nameSound = "veh_aircraft";
		formationX = 50;
		formationZ = 100;
		precision = 100;
		brakeDistance = 200;
		formationTime = 10;
		gearsUpFrictionCoef = 0.5;
		airBrakeFrictionCoef = 3;
		airFrictionCoefs2[] = {0.001, 0.0005, 6e-005};
		airFrictionCoefs1[] = {0.1, 0.05, 0.006};
		airFrictionCoefs0[] = {0, 0, 0};
		class Components //sources - []
		{
			class TransportCountermeasuresComponent //sources - []
			{
			};
		};
		altFullForce = 2000;
		altNoForce = 6000;
		armor = 20;
		cost = 1e+007;
		fuelCapacity = 1000;
		maxSpeed = 400;
		attenuationEffectType = "";
		insideSoundCoef = 0.0316228;
		outsideSoundFilter = 1;
		occludeSoundsWhenIn = 0.316228;
		obstructSoundsWhenIn = 0.316228;
		weapons[] = {"FakeWeapon"};
		magazines[] = {"FakeWeapon"};
		type = 2;
		irScanRangeMin = 2000;
		irScanRangeMax = 10000;
		irScanToEyeFactor = 2;
		nightVision = 0;
		audible = 10;
		unitInfoType = "RscUnitInfoAir";
		threat[] = {0.3, 1, 0.7};
		driverAction = "";
		driverCompartments = 0;
		cargoCompartments[] = {0};
		gunnerCanSee = "31+32";
		driverCanSee = "31+32";
		typicalCargo[] = {"Soldier"};
		getInRadius = 5;
		transportMaxMagazines = 20;
		transportMaxWeapons = 3;
		enableGPS = 1;
		class MarkerLights //sources - ["A3_Air_F"]
		{
			class RedStill //sources - []
			{
				name = "cerveny pozicni";
				color[] = {0.3, 0.03, 0.03, 1};
				ambient[] = {0.03, 0.003, 0.003, 1};
				brightness = 0.01;
				blinking = 0;
			};
			class GreenStill //sources - []
			{
				name = "zeleny pozicni";
				color[] = {0.03, 0.3, 0.03, 1};
				ambient[] = {0.003, 0.03, 0.003, 1};
				brightness = 0.01;
				blinking = 0;
			};
			class WhiteStill //sources - []
			{
				name = "bily pozicni";
				color[] = {0.3, 0.3, 0.3, 1};
				ambient[] = {0.03, 0.03, 0.03, 1};
				brightness = 0.01;
				blinking = 0;
			};
			class WhiteBlinking //sources - []
			{
				name = "bily pozicni blik";
				color[] = {1, 1, 1, 1};
				ambient[] = {0.1, 0.1, 0.1, 1};
				brightness = 0.01;
				blinking = 1;
			};
			class RedBlinking //sources - []
			{
				name = "cerveny pozicni blik";
				color[] = {0.5, 0.05, 0.05, 1};
				ambient[] = {0.05, 0.005, 0.005, 1};
				brightness = 0.01;
				blinking = 1;
			};
			class PositionRed //sources - ["A3_Air_F"]
			{
				color[] = {0.8, 0, 0};
				ambient[] = {0.08, 0, 0};
				intensity = 75;
				name = "PositionLight_red_1_pos";
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
				class Attenuation //sources - ["A3_Air_F"]
				{
					start = 0;
					constant = 0;
					linear = 25;
					quadratic = 50;
					hardLimitStart = 0.75;
					hardLimitEnd = 1;
				};
			};
			class PositionGreen: PositionRed //inherits 12 parameters from bin\config.bin/CfgVehicles/Air/MarkerLights/PositionRed, sources - ["A3_Air_F"]
			{
				color[] = {0, 0.8, 0};
				ambient[] = {0, 0.08, 0};
				name = "PositionLight_green_1_pos";
			};
			class PositionWhite: PositionRed //inherits 12 parameters from bin\config.bin/CfgVehicles/Air/MarkerLights/PositionRed, sources - ["A3_Air_F"]
			{
				color[] = {1, 1, 1};
				ambient[] = {0.1, 0.1, 0.1};
				name = "PositionLight_white_1_pos";
				drawLightSize = 0.2;
			};
			class CollisionRed: PositionRed //inherits 12 parameters from bin\config.bin/CfgVehicles/Air/MarkerLights/PositionRed, sources - ["A3_Air_F"]
			{
				color[] = {0.9, 0.15, 0.1};
				ambient[] = {0.09, 0.015, 0.01};
				name = "CollisionLight_red_1_pos";
				blinking = 1;
				blinkingPattern[] = {0.2, 1.3};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.08;
			};
			class CollisionWhite: PositionRed //inherits 12 parameters from bin\config.bin/CfgVehicles/Air/MarkerLights/PositionRed, sources - ["A3_Air_F"]
			{
				color[] = {1, 1, 1};
				ambient[] = {0.1, 0.1, 0.1};
				name = "CollisionLight_white_1_pos";
				blinking = 1;
				blinkingPattern[] = {0.1, 0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
		};
		weaponsGroup1 = "1 + 		2";
		weaponsGroup2 = 4;
		weaponsGroup3 = "8 + 	16 + 	32";
		weaponsGroup4 = "64 + 		128";
		editorSubcategory = "EdSubcat_Planes";
		memoryPointTaskMarkerOffset[] = {0, 0.3, 0};
		rightDustEffects[] = {{"GdtGrassShort", "RDustEffectsAir"}, {"GdtGrassShort", "RGrassEffects"}, {"GdtGrassTall", "RDustEffectsAir"}, {"GdtGrassTall", "RGrassEffects"}, {"GdtRedDirt", "RDustEffectsAirRed"}, {"GdtField", "RDustEffectsAir"}, {"GdtForest", "RDustEffectsAir"}, {"GdtVolcano", "RDustEffectsAir"}, {"GdtVolcano", "RStonesEffects"}, {"GdtCliff", "RDustEffectsAir"}, {"GdtVolcanoBeach", "RDustEffectsAir"}, {"SurfRoadDirt_exp", "RDustEffectsAirRed"}, {"SurfRoadConcrete_exp", "RDustEffectsAir"}, {"SurfRoadTarmac_exp", "RDustEffectsAir"}, {"GdtStratisConcrete", "RDustEffectsAir"}, {"GdtStratisConcrete", "RDirtEffects"}, {"GdtStratisBeach", "RDustEffectsAir"}, {"GdtStratisBeach", "RStonesEffects"}, {"GdtStratisDirt", "RDustEffectsAir"}, {"GdtStratisDirt", "RDirtEffects"}, {"GdtStratisSeabedCluttered", "RDustEffectsAir"}, {"GdtStratisSeabed", "RDustEffectsAir"}, {"GdtStratisDryGrass", "RDustEffectsAir"}, {"GdtStratisDryGrass", "RGrassDryEffects"}, {"GdtStratisDryGrass", "RDirtEffects"}, {"GdtStratisGreenGrass", "RDustEffectsAir"}, {"GdtStratisGreenGrass", "RGrassEffects"}, {"GdtStratisGreenGrass", "RDirtEffects"}, {"GdtStratisRocky", "RDustEffectsAir"}, {"GdtStratisRocky", "RGrassEffects"}, {"GdtStratisRocky", "RDirtEffects"}, {"GdtStratisThistles", "RDustEffectsAir"}, {"GdtStratisThistles", "RGrassEffects"}, {"GdtStratisThistles", "RDirtEffects"}, {"GdtConcrete", "RDustEffectsAir"}, {"GdtConcrete", "RDirtEffects"}, {"GdtAsphalt", "RDustEffectsAir"}, {"GdtAsphalt", "RDirtEffects"}, {"GdtRubble", "RDustEffectsAir"}, {"GdtRubble", "RDirtEffects"}, {"GdtSoil", "RDustEffectsAir"}, {"GdtSoil", "RDirtEffects"}, {"GdtBeach", "RDustEffectsAir"}, {"GdtBeach", "RStonesEffects"}, {"GdtRock", "RDustEffectsAir"}, {"GdtRock", "RDirtEffects"}, {"GdtDead", "RDustEffectsAir"}, {"GdtDead", "RDirtEffects"}, {"Default", "RDustEffectsAir"}, {"GdtDesert1", "RDustEffectsAir"}, {"GdtDesert1", "RSandEffects"}, {"GdtDesert1", "RDirtEffects"}, {"GdtDesert1", "RStonesEffects"}, {"GdtDesert2", "RDustEffectsAir"}, {"GdtDesert2", "RSandEffects"}, {"GdtDesert2", "RGrassEffects"}, {"GdtDesert2", "RDirtEffects"}, {"GdtDirt", "RDustEffectsAir"}, {"GdtDirt", "RDirtEffects"}, {"GdtGrassGreen", "RDustEffectsAir"}, {"GdtGrassGreen", "RGrassEffects"}, {"GdtGrassGreen", "RDirtEffects"}, {"GdtGrassDry", "RDustEffectsAir"}, {"GdtGrassDry", "RGrassDryEffects"}, {"GdtGrassDry", "RDirtEffects"}, {"GdtGrassWild", "RDustEffectsAir"}, {"GdtGrassWild", "RGrassEffects"}, {"GdtGrassWild", "RDirtEffects"}, {"GdtWildField", "RDustEffectsAir"}, {"GdtWildField", "RGrassEffects"}, {"GdtWildField", "RDirtEffects"}, {"GdtWeed1", "RDustEffectsAir"}, {"GdtWeed1", "RGrassEffects"}, {"GdtWeed1", "RDirtEffects"}, {"GdtWeed2", "RDustEffectsAir"}, {"GdtWeed2", "RGrassEffects"}, {"GdtWeed2", "RDirtEffects"}, {"GdtThorn", "RDustEffectsAir"}, {"GdtThorn", "RGrassEffects"}, {"GdtThorn", "RDirtEffects"}, {"GdtStony", "RDustEffectsAir"}, {"GdtStony", "RGrassEffects"}, {"GdtStony", "RDirtEffects"}, {"GdtStonyGreen", "RDustEffectsAir"}, {"GdtStonyGreen", "RGrassEffects"}, {"GdtStonyGreen", "RDirtEffects"}, {"GdtStonyThistle", "RDustEffectsAir"}, {"GdtStonyThistle", "RGrassEffects"}, {"GdtStonyThistle", "RDirtEffects"}, {"GdtSeabedDeep", "RDustEffectsAir"}, {"GdtSeabed", "RDustEffectsAir"}, {"SurfRoadDirt", "RDustEffectsAir"}, {"SurfRoadConcrete", "RDustEffectsAir"}, {"SurfRoadTarmac", "RDustEffectsAir"}, {"SurfWood", "RDustEffectsAir"}, {"SurfMetal", "RDustEffectsAir"}, {"SurfRoofTin", "RDustEffectsAir"}, {"SurfRoofTiles", "RDustEffectsAir"}, {"SurfIntWood", "RDustEffectsAir"}, {"SurfIntConcrete", "RDustEffectsAir"}, {"SurfIntTiles", "RDustEffectsAir"}, {"SurfIntMetal", "RDustEffectsAir"}};
		leftDustEffects[] = {{"GdtGrassShort", "LDustEffectsAir"}, {"GdtGrassShort", "LGrassEffects"}, {"GdtGrassTall", "LDustEffectsAir"}, {"GdtGrassTall", "LGrassEffects"}, {"GdtRedDirt", "LDustEffectsAirRed"}, {"GdtField", "LDustEffectsAir"}, {"GdtForest", "LDustEffectsAir"}, {"GdtVolcano", "LDustEffectsAir"}, {"GdtVolcano", "LStonesEffects"}, {"GdtCliff", "LDustEffectsAir"}, {"GdtVolcanoBeach", "LDustEffectsAir"}, {"SurfRoadDirt_exp", "LDustEffectsAirRed"}, {"SurfRoadConcrete_exp", "LDustEffectsAir"}, {"SurfRoadTarmac_exp", "LDustEffectsAir"}, {"GdtStratisConcrete", "LDustEffectsAir"}, {"GdtStratisConcrete", "LDirtEffects"}, {"GdtStratisBeach", "LDustEffectsAir"}, {"GdtStratisBeach", "LStonesEffects"}, {"GdtStratisDirt", "LDustEffectsAir"}, {"GdtStratisDirt", "LDirtEffects"}, {"GdtStratisSeabedCluttered", "LDustEffectsAir"}, {"GdtStratisSeabed", "LDustEffectsAir"}, {"GdtStratisDryGrass", "LDustEffectsAir"}, {"GdtStratisDryGrass", "LGrassDryEffects"}, {"GdtStratisDryGrass", "LDirtEffects"}, {"GdtStratisGreenGrass", "LDustEffectsAir"}, {"GdtStratisGreenGrass", "LGrassEffects"}, {"GdtStratisGreenGrass", "LDirtEffects"}, {"GdtStratisRocky", "LDustEffectsAir"}, {"GdtStratisRocky", "LGrassEffects"}, {"GdtStratisRocky", "LDirtEffects"}, {"GdtStratisThistles", "LDustEffectsAir"}, {"GdtStratisThistles", "LGrassEffects"}, {"GdtStratisThistles", "LDirtEffects"}, {"GdtConcrete", "LDustEffectsAir"}, {"GdtConcrete", "LDirtEffects"}, {"GdtAsphalt", "LDustEffectsAir"}, {"GdtAsphalt", "LDirtEffects"}, {"GdtRubble", "LDustEffectsAir"}, {"GdtRubble", "LGrassEffects"}, {"GdtRubble", "LDirtEffects"}, {"GdtSoil", "LDustEffectsAir"}, {"GdtSoil", "LDirtEffects"}, {"GdtBeach", "LDustEffectsAir"}, {"GdtBeach", "LStonesEffects"}, {"GdtRock", "LDustEffectsAir"}, {"GdtRock", "LDirtEffects"}, {"GdtDead", "LDustEffectsAir"}, {"GdtDead", "LDirtEffects"}, {"Default", "LDustEffectsAir"}, {"GdtDesert1", "LDustEffectsAir"}, {"GdtDesert1", "LSandEffects"}, {"GdtDesert1", "LDirtEffects"}, {"GdtDesert1", "LStonesEffects"}, {"GdtDesert2", "LDustEffectsAir"}, {"GdtDesert2", "LSandEffects"}, {"GdtDesert2", "LGrassEffects"}, {"GdtDesert2", "LDirtEffects"}, {"GdtDirt", "LDustEffectsAir"}, {"GdtDirt", "LDirtEffects"}, {"GdtGrassGreen", "LDustEffectsAir"}, {"GdtGrassGreen", "LGrassEffects"}, {"GdtGrassGreen", "LDirtEffects"}, {"GdtGrassDry", "LDustEffectsAir"}, {"GdtGrassDry", "LGrassDryEffects"}, {"GdtGrassDry", "LDirtEffects"}, {"GdtGrassWild", "LDustEffectsAir"}, {"GdtGrassWild", "LGrassEffects"}, {"GdtGrassWild", "LDirtEffects"}, {"GdtWildField", "LDustEffectsAir"}, {"GdtWildField", "LGrassEffects"}, {"GdtWildField", "LDirtEffects"}, {"GdtWeed1", "LDustEffectsAir"}, {"GdtWeed1", "LGrassEffects"}, {"GdtWeed1", "LDirtEffects"}, {"GdtWeed2", "LDustEffectsAir"}, {"GdtWeed2", "LGrassEffects"}, {"GdtWeed2", "LDirtEffects"}, {"GdtThorn", "LDustEffectsAir"}, {"GdtThorn", "LGrassEffects"}, {"GdtThorn", "LDirtEffects"}, {"GdtStony", "LDustEffectsAir"}, {"GdtStony", "LGrassEffects"}, {"GdtStony", "LDirtEffects"}, {"GdtStonyGreen", "LDustEffectsAir"}, {"GdtStonyGreen", "LGrassEffects"}, {"GdtStonyGreen", "LDirtEffects"}, {"GdtStonyThistle", "LDustEffectsAir"}, {"GdtStonyThistle", "LGrassEffects"}, {"GdtStonyThistle", "LDirtEffects"}, {"GdtSeabedDeep", "LDustEffectsAir"}, {"GdtSeabed", "LDustEffectsAir"}, {"SurfRoadDirt", "LDustEffectsAir"}, {"SurfRoadConcrete", "LDustEffectsAir"}, {"SurfRoadTarmac", "LDustEffectsAir"}, {"SurfWood", "LDustEffectsAir"}, {"SurfMetal", "LDustEffectsAir"}, {"SurfRoofTin", "LDustEffectsAir"}, {"SurfRoofTiles", "LDustEffectsAir"}, {"SurfIntWood", "LDustEffectsAir"}, {"SurfIntConcrete", "LDustEffectsAir"}, {"SurfIntTiles", "LDustEffectsAir"}, {"SurfIntMetal", "LDustEffectsAir"}};
		author = "Bohemia Interactive";
		mapSize = 10.56;
		_generalMacro = "Air";
		waterLeakiness = 100;
		maxFordingDepth = 0.001;
		waterResistance = 1;
		impactEffectsSea = "ImpactEffectsAir";
		accuracy = 0;
		flareVelocity = 100;
		enableRadio = 1;
		class AnimationSources //sources - ["A3_Air_F"]
		{
			class CollisionLightRed_source //sources - ["A3_Air_F"]
			{
				source = "MarkerLight";
				markerLight = "CollisionRed";
			};
			class CollisionLightWhite_source //sources - ["A3_Air_F"]
			{
				source = "MarkerLight";
				markerLight = "CollisionWhite";
			};
		};
		memoryPointCM[] = {"flare_launcher1", "flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir", "flare_launcher2_dir"};
		radarType = 4;
		radarTarget = 1;
		radarTargetSize = 1;
		visualTarget = 1;
		visualTargetSize = 1;
		irTargetSize = 1;
		LockDetectionSystem = "8 + 4";
		incomingMissileDetectionSystem = "8 + 16";
		class TransportItems //sources - ["A3_Air_F"]
		{
			class _xx_FirstAidKit //sources - ["A3_Air_F"]
			{
				name = "FirstAidKit";
				count = 4;
			};
		};
		class Exhausts //sources - ["A3_Air_F"]
		{
			class Exhaust1 //sources - ["A3_Air_F"]
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffectPlane";
			};
			class Exhaust2 //sources - ["A3_Air_F"]
			{
				position = "exhaust2";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffectPlane";
			};
		};
		class camShakeGForce //sources - ["A3_Air_F"]
		{
			power = 0.2;
			frequency = 3;
			distance = 0;
			minSpeed = 1;
		};
		class camShakeDamage //sources - ["A3_Air_F"]
		{
			power = 0.5;
			frequency = 60;
			distance = -1;
			minSpeed = 1;
			attenuation = 0.5;
			duration = 3;
		};
		minGForce = 0.2;
		maxGForce = 2;
		gForceShakeAttenuation = 0.5;
		secondaryExplosion = -1;
		fuelExplosionPower = 1;
	};
	class Ship: AllVehicles //inherits 64 parameters from bin\config.bin/CfgVehicles/AllVehicles, sources - ["A3_Data_F"]
	{
		class Components //sources - []
		{
			class TransportCountermeasuresComponent //sources - []
			{
			};
		};
		unitInfoType = "RscUnitInfo";
		vehicleClass = "Ship";
		safeDepth = 2;
		icon = "iconShip";
		cost = 1e+007;
		armor = 1000;
		displayName = "Ship";
		accuracy = 0.005;
		maxSpeed = 30;
		waterAngularDampingCoef = 0;
		simulation = "ship";
		audible = 6;
		fuelCapacity = 100;
		formationX = 50;
		formationZ = 100;
		precision = 10;
		brakeDistance = 50;
		formationTime = 20;
		steerAheadSimul = 2;
		steerAheadPlan = 2.4;
		predictTurnSimul = 2;
		predictTurnPlan = 2.4;
		verticalTurnCoef = 0.2;
		ShipSteerCoef = 0.5;
		periscopeDepth = 2.8;
		type = 1;
		threat[] = {0.2, 0.2, 0.1};
		getInRadius = 10;
		driverAction = "";
		cargoAction[] = {""};
		getInAction = "";
		getOutAction = "";
		pointPilot = "pilot";
		pointCommander = "velitel";
		selectionFireAnim = "zasleh";
		selectionBrakeLights = "brzdove svetlo";
		memoryPointMissile[] = {"spice rakety", "usti hlavne"};
		memoryPointMissileDir[] = {"konec rakety", "konec hlavne"};
		canFloat = 1;
		soundGear[] = {"", 0.000177828, 1};
		occludeSoundsWhenIn = 0.562341;
		obstructSoundsWhenIn = 0.316228;
		class Exhausts //sources - []
		{
			class Exhaust1 //sources - []
			{
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustsEffect";
			};
		};
		leftDustEffect = "LDustEffects";
		rightDustEffect = "RDustEffects";
		leftWaterEffect = "LWaterEffects";
		rightWaterEffect = "RWaterEffects";
		leftEngineEffect = "LEngEffects";
		rightEngineEffect = "REngEffects";
		leftFastWaterEffect = "LWaterEffects";
		rightFastWaterEffect = "RWaterEffects";
		memoryPointsLeftEngineEffect = "EngineEffectL";
		memoryPointsRightEngineEffect = "EngineEffectR";
		class HitPoints //sources - []
		{
			class HitEngine //sources - []
			{
				armor = 1.2;
				material = 60;
				name = "engine";
				visual = "engine";
				passThrough = 1;
				explosionShielding = 1;
			};
		};
		class Turrets //sources - []
		{
			class MainTurret: NewTurret //inherits 115 parameters from bin\config.bin/CfgVehicles/AllVehicles/NewTurret, sources - []
			{
				commanding = -1;
				startEngine = 0;
			};
		};
		class ViewPilot: ViewPilot //inherits 15 parameters from bin\config.bin/CfgVehicles/AllVehicles/ViewPilot, sources - []
		{
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			initAngleX = 6;
			minAngleX = -85;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
		};
		class ViewOptics: ViewOptics //inherits 15 parameters from bin\config.bin/CfgVehicles/AllVehicles/ViewOptics, sources - []
		{
			initFov = 0.7;
			minFov = 0.07;
			maxFov = 0.35;
		};
		class MarkerLights //sources - []
		{
			class RedStill //sources - []
			{
				name = "cerveny pozicni";
				color[] = {0.3, 0.03, 0.03, 1};
				ambient[] = {0.03, 0.003, 0.003, 1};
				brightness = 0.01;
				blinking = 0;
			};
			class GreenStill //sources - []
			{
				name = "zeleny pozicni";
				color[] = {0.03, 0.3, 0.03, 1};
				ambient[] = {0.003, 0.03, 0.003, 1};
				brightness = 0.01;
				blinking = 0;
			};
			class WhiteStill //sources - []
			{
				name = "bily pozicni";
				color[] = {0.3, 0.3, 0.3, 1};
				ambient[] = {0.03, 0.03, 0.03, 1};
				brightness = 0.01;
				blinking = 0;
			};
		};
		class Sounds: Sounds //inherits 2 parameters from bin\config.bin/CfgVehicles/AllVehicles/Sounds, sources - []
		{
			class Engine: Engine //inherits 3 parameters from bin\config.bin/CfgVehicles/AllVehicles/Sounds/Engine, sources - []
			{
				sound = "soundEngine";
				frequency = "(1-randomizer*0.05)*1.2*(thrust*0.7+0.5)";
				volume = "(thrust*0.5)+0.5";
			};
			class Movement: Movement //inherits 3 parameters from bin\config.bin/CfgVehicles/AllVehicles/Sounds/Movement, sources - []
			{
				sound = "soundEnviron";
				frequency = "(speed*0.03334)*1.3+(1-(speed*0.03334))*0.7";
				volume = "(speed*0.03334)+(1-(speed*0.03334))*0.1";
			};
		};
		author = "Bohemia Interactive";
		mapSize = 4.9;
		class SpeechVariants //sources - ["A3_Data_F"]
		{
			class Default //sources - ["A3_Data_F"]
			{
				speechSingular[] = {"veh_ship_s"};
				speechPlural[] = {"veh_ship_p"};
			};
		};
		textSingular = "ship";
		textPlural = "ships";
		nameSound = "veh_ship_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Ship.jpg";
		_generalMacro = "Ship";
		editorSubcategory = "EdSubcat_Boats";
		memoryPointTaskMarkerOffset[] = {0, 0.3, 0};
	};
	class SmallShip: Ship //inherits 70 parameters from bin\config.bin/CfgVehicles/Ship, sources - ["A3_Data_F"]
	{
		cost = 50000;
		armor = 300;
		displayName = "Small Ship";
		accuracy = 0.2;
		fuelCapacity = 700;
		weapons[] = {"FakeWeapon"};
		magazines[] = {"FakeWeapon"};
		maxSpeed = 60;
		precision = 6;
		brakeDistance = 20;
		class Reflectors //sources - []
		{
			class Reflector //sources - []
			{
				color[] = {0.9, 0.8, 0.8, 1};
				ambient[] = {0.1, 0.1, 0.1, 1};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 2;
			};
		};
		transportMaxMagazines = 100;
		transportMaxWeapons = 20;
		author = "Bohemia Interactive";
		mapSize = 1;
		class SpeechVariants //sources - ["A3_Data_F"]
		{
			class Default //sources - ["A3_Data_F"]
			{
				speechSingular[] = {"veh_ship_attackBoat_s"};
				speechPlural[] = {"veh_ship_attackBoat_p"};
			};
		};
		textSingular = "attack boat";
		textPlural = "attack boats";
		nameSound = "veh_ship_attackBoat_s";
		_generalMacro = "SmallShip";
	};
	class BigShip: Ship //inherits 70 parameters from bin\config.bin/CfgVehicles/Ship, sources - ["A3_Data_F"]
	{
		cost = 1e+007;
		displayName = "Big Ship";
		accuracy = 0.2;
		armor = 1000;
		weapons[] = {"FakeWeapon"};
		magazines[] = {"FakeWeapon"};
		transportMaxMagazines = 500;
		transportMaxWeapons = 200;
		author = "Bohemia Interactive";
		mapSize = 1;
		class SpeechVariants //sources - ["A3_Data_F"]
		{
			class Default //sources - ["A3_Data_F"]
			{
				speechSingular[] = {"veh_ship_attackBoat_s"};
				speechPlural[] = {"veh_ship_attackBoat_p"};
			};
		};
		textSingular = "attack boat";
		textPlural = "attack boats";
		nameSound = "veh_ship_attackBoat_s";
		_generalMacro = "BigShip";
	};
	class Truck: Car //inherits 92 parameters from bin\config.bin/CfgVehicles/Car, sources - ["A3_Data_F"]
	{
		nameSound = "veh_truck";
		formationX = 20;
		formationZ = 30;
		getInAction = "";
		getOutAction = "";
		class HitPoints: HitPoints //inherits 13 parameters from bin\config.bin/CfgVehicles/Car/HitPoints, sources - []
		{
			class HitLFWheel: HitLFWheel //inherits 6 parameters from bin\config.bin/CfgVehicles/Car/HitPoints/HitLFWheel, sources - []
			{
				armor = 0.3;
			};
			class HitRFWheel: HitRFWheel //inherits 6 parameters from bin\config.bin/CfgVehicles/Car/HitPoints/HitRFWheel, sources - []
			{
				armor = 0.3;
			};
			class HitLF2Wheel: HitLF2Wheel //inherits 6 parameters from bin\config.bin/CfgVehicles/Car/HitPoints/HitLF2Wheel, sources - []
			{
				armor = 0.3;
			};
			class HitRF2Wheel: HitRF2Wheel //inherits 6 parameters from bin\config.bin/CfgVehicles/Car/HitPoints/HitRF2Wheel, sources - []
			{
				armor = 0.3;
			};
			class HitLMWheel: HitLMWheel //inherits 6 parameters from bin\config.bin/CfgVehicles/Car/HitPoints/HitLMWheel, sources - []
			{
				armor = 0.3;
			};
			class HitRMWheel: HitRMWheel //inherits 6 parameters from bin\config.bin/CfgVehicles/Car/HitPoints/HitRMWheel, sources - []
			{
				armor = 0.3;
			};
			class HitLBWheel: HitLBWheel //inherits 6 parameters from bin\config.bin/CfgVehicles/Car/HitPoints/HitLBWheel, sources - []
			{
				armor = 0.3;
			};
			class HitRBWheel: HitRBWheel //inherits 6 parameters from bin\config.bin/CfgVehicles/Car/HitPoints/HitRBWheel, sources - []
			{
				armor = 0.3;
			};
		};
		damperSize = 0.2;
		outsideSoundFilter = 1;
		minFov = 0.25;
		maxFov = 1.25;
		initFov = 0.75;
		transportMaxMagazines = 200;
		transportMaxWeapons = 50;
		steerAheadSimul = 0.2;
		steerAheadPlan = 0.3;
		author = "Bohemia Interactive";
		mapSize = 1;
		_generalMacro = "Truck";
	};
	class LaserTarget: All //inherits 313 parameters from bin\config.bin/CfgVehicles/All, sources - ["A3_Data_F","A3_Weapons_F"]
	{
		reversed = 0;
		hasDriver = 0;
		nameSound = "obj_LaserTarget";
		accuracy = 0.0001;
		picture = "pictureLaserTarget";
		weapons[] = {"M2"};
		magazines[] = {};
		type = 1;
		threat[] = {0.2, 0.5, 1};
		maxSpeed = 0;
		laserTarget = 1;
		irTarget = 0;
		artilleryTarget = 0;
		destrType = "DestructNo";
		side = 3;
		cost = 1e+015;
		armor = 500;
		author = "Bohemia Interactive";
		mapSize = 0.16;
		_generalMacro = "LaserTarget";
		scopeCurator = 0;
		icon = "iconLaserTarget";
		displayName = "Laser Target";
		model = "\A3\Weapons_f\laserTgt.p3d";
		simulation = "laserTarget";
	};
	class NVTarget: All //inherits 313 parameters from bin\config.bin/CfgVehicles/All, sources - []
	{
		reversed = 0;
		hasDriver = 0;
		icon = "iconLaserTarget";
		displayName = "Laser target";
		nameSound = "obj_LaserTarget";
		accuracy = 0.0001;
		model = "laserTgt.p3d";
		picture = "pictureLaserTarget";
		weapons[] = {"FakeWeapon"};
		magazines[] = {"FakeWeapon"};
		type = 1;
		threat[] = {0.2, 0.5, 0.1};
		maxSpeed = 0;
		simulation = "nvmarker";
		laserTarget = 0;
		irTarget = 0;
		nvTarget = 1;
		destrType = "DestructEngine";
		side = 3;
		cost = 1e+015;
		armor = 500;
	};
	class ArtilleryTarget: All //inherits 313 parameters from bin\config.bin/CfgVehicles/All, sources - []
	{
		reversed = 0;
		hasDriver = 0;
		icon = "iconLaserTarget";
		displayName = "ArtilleryTarget";
		nameSound = "";
		accuracy = 0.0001;
		model = "";
		picture = "pictureLaserTarget";
		weapons[] = {"FakeWeapon"};
		magazines[] = {"FakeWeapon"};
		type = 1;
		threat[] = {0.5, 0.5, 0.1};
		maxSpeed = 0;
		simulation = "artillerymarker";
		laserTarget = 0;
		irTarget = 0;
		nvTarget = 0;
		artilleryTarget = 1;
		destrType = "DestructNo";
		side = 3;
		cost = 1e+015;
		armor = 500;
		scope = 1;
	};
	class ArtilleryTargetW: ArtilleryTarget //inherits 23 parameters from bin\config.bin/CfgVehicles/ArtilleryTarget, sources - []
	{
		side = 1;
		scope = 1;
	};
	class ArtilleryTargetE: ArtilleryTarget //inherits 23 parameters from bin\config.bin/CfgVehicles/ArtilleryTarget, sources - []
	{
		side = 0;
		scope = 1;
	};
	class SuppressTarget: LaserTarget //inherits 25 parameters from bin\config.bin/CfgVehicles/LaserTarget, sources - []
	{
		icon = "iconLaserTarget";
		displayName = "suppressTarget";
		nameSound = "";
		accuracy = 0.0001;
		model = "";
		weapons[] = {"FakeWeapon"};
		magazines[] = {"FakeWeapon"};
		type = 1;
		threat[] = {0.5, 0.5, 0.1};
		maxSpeed = 0;
		simulation = "suppresstarget";
		laserTarget = 0;
		irTarget = 0;
		nvTarget = 0;
		artilleryTarget = 0;
		side = 3;
		cost = 1e+015;
		armor = 0;
		scope = 1;
	};
	class PaperCar: Car //inherits 92 parameters from bin\config.bin/CfgVehicles/Car, sources - []
	{
		scope = 1;
		scopeCurator = 0;
		side = 3;
		picture = "picturePaperCar";
		icon = "iconPaperCar";
		displayName = "Paper Car";
		model = "\core\default\default.p3d";
		class Reflectors //sources - []
		{
		};
	};
	class FireSectorTarget: All //inherits 313 parameters from bin\config.bin/CfgVehicles/All, sources - []
	{
		scope = 1;
		scopeCurator = 0;
		side = 3;
		picture = "";
		icon = "";
		nameSound = "";
		displayName = "Internal: Fire Sector Target";
		vehicleClass = "Objects";
		model = "\core\default\default.p3d";
		weapons[] = {};
		magazines[] = {};
		transportMaxWeapons = 0;
		transportMaxMagazines = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		supplyRadius = 0;
		type = 0;
		threat[] = {0, 0, 0};
		maxSpeed = 0;
		armor = 100;
		simulation = "house";
		accuracy = 0.005;
		cost = 100;
		destrType = 0;
		mapSize = 0.1;
		reversed = 0;
		hasDriver = 0;
		coefInside = 0;
		coefInsideHeur = 0;
		coefSpeedInside = 1;
		windSockExist = 0;
		animated = 0;
		ladders[] = {};
		typicalCargo[] = {};
	};
	class Rope: All //inherits 313 parameters from bin\config.bin/CfgVehicles/All, sources - ["A3_Data_F_Hook"]
	{
		access = 0;
		displayName = "";
		simulation = "rope";
		side = 8;
		maxRelLenght = 1.1;
		maxExtraLenght = 20;
		alwaysTarget = 0;
		irTarget = 0;
		irScanRangeMin = 0;
		irScanRangeMax = 0;
		irScanToEyeFactor = 1;
		laserTarget = 0;
		laserScanner = 0;
		nvTarget = 0;
		nvScanner = 0;
		artilleryTarget = 0;
		artilleryScanner = 0;
		author = "Bohemia Interactive";
		mapSize = 0.03;
		_generalMacro = "Rope";
		scope = 1;
		model = "\A3\Data_f\proxies\Rope\rope.p3d";
	};
	class Thing: All //inherits 313 parameters from bin\config.bin/CfgVehicles/All, sources - ["A3_Data_F"]
	{
		reversed = 0;
		animated = 0;
		icon = "iconThing";
		vehicleClass = "Objects";
		nameSound = "obj_object";
		audible = 0;
		simulation = "thing";
		side = 3;
		weight = 0;
		class InventoryPlacements //sources - []
		{
		};
		submerged = 0;
		submergeSpeed = 0;
		airFriction2[] = {0.01, 0.01, 0.01};
		airFriction1[] = {0.01, 0.01, 0.01};
		airFriction0[] = {0.01, 0.01, 0.01};
		airRotation = 0;
		gravityFactor = 1;
		timeToLive = 1e+010;
		disappearAtContact = 0;
		hasDriver = 0;
		picture = "pictureThing";
		weapons[] = {};
		magazines[] = {};
		minHeight = 0.1;
		avgHeight = 0.2;
		maxHeight = 0.4;
		type = 1;
		threat[] = {0, 0, 0};
		maxSpeed = 0;
		irTarget = 0;
		author = "Bohemia Interactive";
		mapSize = 1.47;
		_generalMacro = "Thing";
		displayName = "";
		accuracy = 0.2;
		editorCategory = "EdCat_Things";
	};
	class ThingEffect: Thing //inherits 36 parameters from bin\config.bin/CfgVehicles/Thing, sources - ["A3_Data_F"]
	{
		scope = 1;
		simulation = "thingeffect";
		irTarget = 0;
		submerged = -0.5;
		submergeSpeed = 0.25;
		timeToLive = 20;
		author = "Bohemia Interactive";
		mapSize = 0.25;
		_generalMacro = "ThingEffect";
		scopeCurator = 0;
	};
	class ThingEffectLight: ThingEffect //inherits 10 parameters from bin\config.bin/CfgVehicles/ThingEffect, sources - []
	{
		scope = 0;
		airFriction2[] = {1, 1, 8};
		airFriction1[] = {1, 1, 4};
		airFriction0[] = {0.1, 0.1, 0.1};
		airRotation = 0.1;
		submergeSpeed = 0;
		minHeight = 0.1;
		avgHeight = 0.2;
		maxHeight = 0.4;
	};
	class ThingEffectFeather: ThingEffectLight //inherits 9 parameters from bin\config.bin/CfgVehicles/ThingEffectLight, sources - []
	{
		airFriction2[] = {16, 16, 16};
		airFriction1[] = {16, 16, 16};
		airFriction0[] = {0.1, 0.1, 0.1};
		gravityFactor = 0.05;
		minHeight = 0.5;
		avgHeight = 1.8;
		maxHeight = 3;
	};
	class FxExploArmor1: ThingEffect //inherits 10 parameters from bin\config.bin/CfgVehicles/ThingEffect, sources - ["A3_Weapons_F"]
	{
		access = 0;
		displayName = "Internal: FxExploArmor1";
		author = "Bohemia Interactive";
		mapSize = 0.47;
		_generalMacro = "FxExploArmor1";
		model = "\A3\Weapons_f\metal_plate";
	};
	class FxExploArmor2: ThingEffect //inherits 10 parameters from bin\config.bin/CfgVehicles/ThingEffect, sources - ["A3_Weapons_F"]
	{
		access = 0;
		displayName = "Internal: FxExploArmor2";
		author = "Bohemia Interactive";
		mapSize = 0.51;
		_generalMacro = "FxExploArmor2";
		model = "\A3\Weapons_f\metal_plate_2";
	};
	class FxExploArmor3: ThingEffect //inherits 10 parameters from bin\config.bin/CfgVehicles/ThingEffect, sources - ["A3_Weapons_F"]
	{
		access = 0;
		displayName = "Internal: FxExploArmor3";
		author = "Bohemia Interactive";
		mapSize = 2.21;
		_generalMacro = "FxExploArmor3";
		model = "\A3\Weapons_f\debris";
	};
	class FxExploArmor4: ThingEffect //inherits 10 parameters from bin\config.bin/CfgVehicles/ThingEffect, sources - ["A3_Weapons_F"]
	{
		access = 0;
		displayName = "Internal: FxExploArmor4";
		author = "Bohemia Interactive";
		mapSize = 0.13;
		_generalMacro = "FxExploArmor4";
		model = "\A3\Weapons_f\fragment";
	};
	class FxCartridge: ThingEffect //inherits 10 parameters from bin\config.bin/CfgVehicles/ThingEffect, sources - ["A3_Weapons_F"]
	{
		access = 0;
		displayName = "Internal: FX Cartridge";
		author = "Bohemia Interactive";
		mapSize = 0.05;
		_generalMacro = "FxCartridge";
		model = "\A3\Weapons_f\ammo\cartridge";
		submerged = 0;
		submergeSpeed = 0;
		timeToLive = 5;
		disappearAtContact = 1;
		airRotation = 1.5;
	};
	class WindAnomaly: All //inherits 313 parameters from bin\config.bin/CfgVehicles/All, sources - []
	{
		displayName = "Wind anomaly";
		simulation = "windAnomaly";
		innerRadius = 1;
		outerRadius = 20;
		windStrength = -20;
		windRotation = 0;
		windWaveTimeCoef = 5;
		windWaveOuterAmplitudeCoef = 0.3;
		windWaveInnerAmplitudeCoef = 0.02;
	};
	class Tracked_APC: Tank //inherits 81 parameters from bin\config.bin/CfgVehicles/Tank, sources - ["A3_Data_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 1;
		_generalMacro = "Tracked_APC";
		displayName = "APC";
	};
	class Wheeled_APC: Car //inherits 92 parameters from bin\config.bin/CfgVehicles/Car, sources - ["A3_Data_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 1;
		_generalMacro = "Wheeled_APC";
		displayName = "APC";
		editorSubcategory = "EdSubcat_APCs";
	};
	class Bus: Car //inherits 92 parameters from bin\config.bin/CfgVehicles/Car, sources - ["A3_Data_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 1;
		_generalMacro = "Bus";
	};
	class Tractor: Car //inherits 92 parameters from bin\config.bin/CfgVehicles/Car, sources - ["A3_Data_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 1;
		_generalMacro = "Tractor";
	};
	class FloatingStructure_F: All //inherits 313 parameters from bin\config.bin/CfgVehicles/All, sources - ["A3_Data_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 0.17;
		class SpeechVariants //sources - ["A3_Data_F"]
		{
			class Default //sources - ["A3_Data_F"]
			{
				speechSingular[] = {"veh_ship_s"};
				speechPlural[] = {"veh_ship_p"};
			};
		};
		textSingular = "ship";
		textPlural = "ships";
		nameSound = "veh_ship_s";
		_generalMacro = "FloatingStructure_F";
		scope = 0;
		scopeCurator = 0;
		displayName = "";
		model = "\A3\Weapons_F\empty.p3d";
		icon = "iconObject";
		editorCategory = "EdCat_Structures";
		editorSubcategory = "EdSubcat_Seaports";
		vehicleClass = "Objects";
		simulation = "shipX";
		accuracy = 0.2;
		isLockingDisabled = 1;
		pilotLight = 1;
		collisionLight = 1;
		leftEngineEffect = "EmptyEffect";
		rightEngineEffect = "EmptyEffect";
		waterLeakiness = 0;
		waterResistanceCoef = 0.8;
		side = 3;
		soundTurnIn[] = {"", 1, 1};
		soundTurnOut[] = {"", 1, 1};
		armor = 50;
		cost = 100;
		threat[] = {0, 0, 0};
		maxSpeed = 0;
		fuelCapacity = 0;
		hasDriver = 0;
		weapons[] = {};
		magazines[] = {};
		irTarget = 0;
		camouflage = 0.001;
		audible = 0.001;
		afMax = 200;
		class Attributes //sources - ["A3_Data_F"]
		{
			class ObjectTexture //sources - ["A3_Data_F"]
			{
				control = "ObjectTexture";
				data = "ObjectTexture";
				displayName = "Skin";
				tooltip = "Texture and material set applied on the object.";
			};
		};
		availableForSupportTypes[] = {};
		brakeDistance = 50;
		canFloat = 1;
		cargoDoors[] = {};
		cargoPreciseGetInOut[] = {0};
		cargoProxyIndexes[] = {};
		curatorInfoType = "RscDisplayAttributesVehicle";
		curatorInfoTypeEmpty = "RscDisplayAttributesVehicleEmpty";
		driverDoor = "";
		driverLeftHandAnimName = "";
		driverLeftLegAnimName = "";
		driverRightHandAnimName = "";
		driverRightLegAnimName = "";
		class Exhausts //sources - ["A3_Data_F"]
		{
			class Exhaust1 //sources - ["A3_Data_F"]
			{
				direction = "exhaust_dir";
				effect = "ExhaustsEffect";
				position = "exhaust";
			};
		};
		formationTime = 20;
		formationX = 50;
		formationZ = 100;
		getInOutOnProxy = 0;
		getInRadius = 10;
		hasTerminal = 0;
		class HitPoints //sources - ["A3_Data_F"]
		{
			class HitEngine //sources - ["A3_Data_F"]
			{
				armor = 1.2;
				explosionShielding = 1;
				material = 60;
				name = "engine";
				passThrough = 1;
				visual = "engine";
			};
		};
		htMax = 1800;
		htMin = 60;
		impactEffectSpeedLimit = 8;
		leftDustEffect = "LDustEffects";
		leftFastWaterEffect = "LWaterEffects";
		leftWaterEffect = "LWaterEffects";
		memoryPointDriverOptics[] = {"driverview", "pilot"};
		memoryPointMissile[] = {"spice rakety", "usti hlavne"};
		memoryPointMissileDir[] = {"konec rakety", "konec hlavne"};
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		memoryPointsGetInCargoPrecise[] = {"pos cargo"};
		memoryPointsGetInCoDriver = "pos codriver";
		memoryPointsGetInCoDriverDir = "pos codriver dir";
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		memoryPointsGetInDriverPrecise = "pos driver";
		memoryPointsLeftEngineEffect = "EngineEffectL";
		memoryPointsLeftWaterEffect = "waterEffectL";
		memoryPointsRightEngineEffect = "EngineEffectR";
		memoryPointsRightWaterEffect = "waterEffectR";
		mFact = 0.2;
		class MFD //sources - []
		{
		};
		mfMax = 100;
		obstructSoundsWhenIn = 0.316228;
		occludeSoundsWhenIn = 0.562341;
		periscopeDepth = 2.8;
		pointCommander = "velitel";
		pointPilot = "pilot";
		preciseGetInOut = 0;
		precision = 10;
		predictTurnPlan = 2.4;
		predictTurnSimul = 2;
		class RenderTargets //sources - []
		{
		};
		rightDustEffect = "RDustEffects";
		rightFastWaterEffect = "RWaterEffects";
		rightWaterEffect = "RWaterEffects";
		safeDepth = 2;
		selectionBackLights = "zadni svetlo";
		selectionBrakeLights = "brzdove svetlo";
		selectionClan = "clan";
		selectionDashboard = "podsvit pristroju";
		selectionFireAnim = "zasleh";
		selectionLeftOffset = "";
		selectionRightOffset = "";
		selectionShowDamage = "poskozeni";
		ShipSteerCoef = 0.5;
		class SoundEvents //sources - []
		{
		};
		soundGear[] = {"", 0.000177828, 1};
		class Sounds //sources - ["A3_Data_F"]
		{
			class Engine //sources - ["A3_Data_F"]
			{
				frequency = "(1-randomizer*0.05)*1.2*(thrust*0.7+0.5)";
				sound = "soundEngine";
				volume = "(thrust*0.5)+0.5";
			};
			class Movement //sources - ["A3_Data_F"]
			{
				frequency = "(speed*0.03334)*1.3+(1-(speed*0.03334))*0.7";
				sound = "soundEnviron";
				volume = "(speed*0.03334)+(1-(speed*0.03334))*0.1";
			};
		};
		class SquadTitles //sources - ["A3_Data_F"]
		{
			color[] = {0, 0, 0, 0.75};
			name = "clan_sign";
		};
		steerAheadPlan = 2.4;
		steerAheadSimul = 2;
		tBody = 150;
		tracksSpeed = 0;
		unitInfoType = "RscUnitInfo";
		verticalTurnCoef = 0.2;
		waterPPInVehicle = 1;
		class MarkerLights //sources - []
		{
		};
		class DestructionEffects //sources - []
		{
		};
		class Turrets //sources - []
		{
		};
	};
	class Object: All //inherits 313 parameters from bin\config.bin/CfgVehicles/All, sources - ["A3_Data_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 1;
		_generalMacro = "Object";
	};
	class FxWindGrass1: ThingEffectLight //inherits 9 parameters from bin\config.bin/CfgVehicles/ThingEffectLight, sources - ["A3_Data_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "FxWindGrass1";
		scope = 1;
		model = "\A3\data_f\cl_grass1.p3d";
		displayName = "Internal: FxWindGrass1";
		airRotation = 0.45;
	};
	class FxWindGrass2: ThingEffectLight //inherits 9 parameters from bin\config.bin/CfgVehicles/ThingEffectLight, sources - ["A3_Data_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "FxWindGrass2";
		scope = 1;
		model = "\A3\data_f\cl_grass2.p3d";
		displayName = "Internal: FxWindGrass2";
		airRotation = 0.3;
	};
	class FxWindRock1: ThingEffectLight //inherits 9 parameters from bin\config.bin/CfgVehicles/ThingEffectLight, sources - ["A3_Data_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 0.22;
		_generalMacro = "FxWindRock1";
		scope = 1;
		model = "\A3\data_f\cl_rock1.p3d";
		displayName = "Internal: FxWindRock1";
		airFriction2[] = {1, 1, 1};
		airFriction1[] = {0.5, 0.5, 0.5};
		airFriction0[] = {0.05, 0.05, 0.05};
		airRotation = 0.7;
		minHeight = 0.05;
		avgHeight = 0.1;
		maxHeight = 0.15;
	};
	class FxWindLeaf1: ThingEffectLight //inherits 9 parameters from bin\config.bin/CfgVehicles/ThingEffectLight, sources - ["A3_Data_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "FxWindLeaf1";
		scope = 1;
		model = "\A3\data_f\cl_leaf.p3d";
		displayName = "Internal: FxWindLeaf1";
		airFriction2[] = {2, 2, 0.02};
		airFriction1[] = {1, 1, 0.01};
		airFriction0[] = {0.3, 0.3, 0.003};
		airRotation = 0.25;
		minHeight = 0;
		avgHeight = 0.25;
		maxHeight = 0.8;
	};
	class FxWindLeaf2: FxWindLeaf1 //inherits 12 parameters from bin\config.bin/CfgVehicles/FxWindLeaf1, sources - ["A3_Data_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "FxWindLeaf2";
		model = "\A3\data_f\cl_leaf2.p3d";
		displayName = "Internal: FxWindLeaf2";
	};
	class FxWindLeaf3: FxWindLeaf1 //inherits 12 parameters from bin\config.bin/CfgVehicles/FxWindLeaf1, sources - ["A3_Data_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "FxWindLeaf3";
		model = "\A3\data_f\cl_leaf3.p3d";
		displayName = "Internal: FxWindLeaf3";
	};
	class FxWindPollen1: ThingEffectFeather //inherits 7 parameters from bin\config.bin/CfgVehicles/ThingEffectFeather, sources - ["A3_Data_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "FxWindPollen1";
		scope = 1;
		model = "\A3\data_f\cl_feathers2.p3d";
		displayName = "Internal: FxWindPollen1";
		minHeight = 0.1;
		avgHeight = 0.75;
		maxHeight = 1.5;
	};
	class FxWindPaper1: ThingEffectLight //inherits 9 parameters from bin\config.bin/CfgVehicles/ThingEffectLight, sources - ["A3_Data_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 0.22;
		_generalMacro = "FxWindPaper1";
		scope = 1;
		model = "\A3\data_f\cl_paper1.p3d";
		displayName = "Internal: FxWindPaper1";
		airFriction2[] = {1, 1, 1};
		airFriction1[] = {0.5, 0.5, 0.5};
		airFriction0[] = {0.05, 0.05, 0.05};
		airRotation = 0.7;
		minHeight = 0.05;
		avgHeight = 0.25;
		maxHeight = 0.6;
	};
	class FxWindPlastic1: ThingEffectLight //inherits 9 parameters from bin\config.bin/CfgVehicles/ThingEffectLight, sources - ["A3_Data_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 0.22;
		_generalMacro = "FxWindPlastic1";
		scope = 1;
		model = "\A3\data_f\cl_plastic1.p3d";
		displayName = "Internal: FxWindPlastic1";
		airFriction2[] = {1, 1, 1};
		airFriction1[] = {0.5, 0.5, 0.5};
		airFriction0[] = {0.05, 0.05, 0.05};
		airRotation = 0.7;
		minHeight = 0.05;
		avgHeight = 0.25;
		maxHeight = 0.6;
	};
	class Wreck: Thing //inherits 36 parameters from bin\config.bin/CfgVehicles/Thing, sources - ["A3_Data_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 14.99;
		_generalMacro = "Wreck";
		displayName = "Wreck";
		accuracy = 0.5;
		editorCategory = "EdCat_Wrecks";
		editorSubcategory = "EdSubcat_Cars";
	};
	class TankWreck: Wreck //inherits 7 parameters from bin\config.bin/CfgVehicles/Wreck, sources - ["A3_Data_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 1;
		_generalMacro = "TankWreck";
		editorSubcategory = "EdSubcat_Tanks";
	};
	class PlaneWreck: Wreck //inherits 7 parameters from bin\config.bin/CfgVehicles/Wreck, sources - ["A3_Data_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "PlaneWreck";
		editorSubcategory = "EdSubcat_Planes";
	};
	class ShipWreck: Wreck //inherits 7 parameters from bin\config.bin/CfgVehicles/Wreck, sources - ["A3_Data_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 1;
		_generalMacro = "ShipWreck";
		editorSubcategory = "EdSubcat_Boats";
	};
	class HelicopterWreck: Wreck //inherits 7 parameters from bin\config.bin/CfgVehicles/Wreck, sources - ["A3_Data_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 1;
		_generalMacro = "HelicopterWreck";
		editorSubcategory = "EdSubcat_Helicopters";
	};
	class CarWreck: Wreck //inherits 7 parameters from bin\config.bin/CfgVehicles/Wreck, sources - ["A3_Data_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 1;
		_generalMacro = "CarWreck";
	};
	class TruckWreck: Wreck //inherits 7 parameters from bin\config.bin/CfgVehicles/Wreck, sources - ["A3_Data_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 1;
		_generalMacro = "TruckWreck";
	};
	class LocationBase_F: Logic //inherits 15 parameters from bin\config.bin/CfgVehicles/Logic, sources - ["A3_Modules_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "LocationBase_F";
		displayName = "Base";
		vehicleClass = "SystemLocations";
	};
	class LocationOutpost_F: LocationBase_F //inherits 4 parameters from bin\config.bin/CfgVehicles/LocationBase_F, sources - ["A3_Modules_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "LocationOutpost_F";
		displayName = "Outpost";
	};
	class LocationCamp_F: LocationBase_F //inherits 4 parameters from bin\config.bin/CfgVehicles/LocationBase_F, sources - ["A3_Modules_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "LocationCamp_F";
		displayName = "Camp";
	};
	class LocationResupplyPoint_F: LocationBase_F //inherits 4 parameters from bin\config.bin/CfgVehicles/LocationBase_F, sources - ["A3_Modules_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "LocationResupplyPoint_F";
		displayName = "Resupply Point";
	};
	class LocationRespawnPoint_F: LocationBase_F //inherits 4 parameters from bin\config.bin/CfgVehicles/LocationBase_F, sources - ["A3_Modules_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "LocationRespawnPoint_F";
		displayName = "Respawn Point";
	};
	class LocationEvacPoint_F: LocationBase_F //inherits 4 parameters from bin\config.bin/CfgVehicles/LocationBase_F, sources - ["A3_Modules_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "LocationEvacPoint_F";
		displayName = "Evac Point";
	};
	class LocationFOB_F: LocationBase_F //inherits 4 parameters from bin\config.bin/CfgVehicles/LocationBase_F, sources - ["A3_Modules_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "LocationFOB_F";
		displayName = "FOB";
	};
	class LocationCityCapital_F: LocationBase_F //inherits 4 parameters from bin\config.bin/CfgVehicles/LocationBase_F, sources - ["A3_Modules_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "LocationCityCapital_F";
		displayName = "City";
	};
	class LocationCity_F: LocationBase_F //inherits 4 parameters from bin\config.bin/CfgVehicles/LocationBase_F, sources - ["A3_Modules_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "LocationCity_F";
		displayName = "Town";
	};
	class LocationVillage_F: LocationBase_F //inherits 4 parameters from bin\config.bin/CfgVehicles/LocationBase_F, sources - ["A3_Modules_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "LocationVillage_F";
		displayName = "Village";
	};
	class LocationArea_F: LocationBase_F //inherits 4 parameters from bin\config.bin/CfgVehicles/LocationBase_F, sources - ["A3_Modules_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "LocationArea_F";
		displayName = "Area";
	};
	class SideBLUFOR_F: Logic //inherits 15 parameters from bin\config.bin/CfgVehicles/Logic, sources - ["A3_Modules_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "SideBLUFOR_F";
		displayName = "BLUFOR";
		vehicleClass = "SystemSides";
		icon = "\a3\Ui_f\data\Map\Markers\NATO\b_unknown.paa";
	};
	class SideOPFOR_F: SideBLUFOR_F //inherits 5 parameters from bin\config.bin/CfgVehicles/SideBLUFOR_F, sources - ["A3_Modules_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "SideOPFOR_F";
		displayName = "OPFOR";
		icon = "\a3\Ui_f\data\Map\Markers\NATO\o_unknown.paa";
	};
	class SideResistance_F: SideBLUFOR_F //inherits 5 parameters from bin\config.bin/CfgVehicles/SideBLUFOR_F, sources - ["A3_Modules_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "SideResistance_F";
		displayName = "Independent";
		icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
	};
	class MiscUnlock_F: Logic //inherits 15 parameters from bin\config.bin/CfgVehicles/Logic, sources - ["A3_Modules_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "MiscUnlock_F";
		displayName = "Unlock";
		vehicleClass = "SystemMisc";
		icon = "\a3\Modules_f\data\iconUnlock_ca.paa";
	};
	class MiscLock_F: MiscUnlock_F //inherits 5 parameters from bin\config.bin/CfgVehicles/MiscUnlock_F, sources - ["A3_Modules_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "MiscLock_F";
		displayName = "Lock";
		icon = "\a3\Modules_f\data\iconLock_ca.paa";
	};
	class Curator_F: Logic //inherits 15 parameters from bin\config.bin/CfgVehicles/Logic, sources - ["A3_Modules_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Curator_F";
		displayName = "Curator";
		vehicleClass = "SystemMisc";
	};
	class MiscAND_F: Logic //inherits 15 parameters from bin\config.bin/CfgVehicles/Logic, sources - ["A3_Modules_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "MiscAND_F";
		displayName = "Logical AND";
		vehicleClass = "SystemMisc";
	};
	class MiscOR_F: Logic //inherits 15 parameters from bin\config.bin/CfgVehicles/Logic, sources - ["A3_Modules_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "MiscOR_F";
		displayName = "Logical OR";
		vehicleClass = "SystemMisc";
	};
	class Module_F: Logic //inherits 15 parameters from bin\config.bin/CfgVehicles/Logic, sources - ["A3_Modules_F","A3_Modules_F_Curator"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Module_F";
		scope = 1;
		vehicleClass = "Modules";
		icon = "iconModule";
		picture = "";
		function = "";
		isGlobal = 0;
		isTriggerActivated = 0;
		class EventHandlers //sources - ["A3_Modules_F"]
		{
			init = "_this call bis_fnc_moduleInit;";
		};
		class ArgumentsBaseUnits //sources - ["A3_Modules_F"]
		{
			class Units //sources - ["A3_Modules_F"]
			{
				displayName = "Apply to";
				description = "";
				class values //sources - ["A3_Modules_F"]
				{
					class Objects //sources - ["A3_Modules_F"]
					{
						name = "Synchronized objects only";
						value = 0;
					};
					class ObjectsAndGroups //sources - ["A3_Modules_F"]
					{
						name = "Groups of synchronized objects";
						value = 1;
						default = 1;
					};
					class Trigger //sources - ["A3_Modules_F"]
					{
						name = "Objects in synchronized triggers";
						value = 2;
					};
				};
			};
		};
		class AttributesBase //sources - ["A3_Modules_F"]
		{
			class Default //sources - ["A3_Modules_F"]
			{
				expression = "_this setVariable ['%s',_value,true];";
			};
			class Edit: Default //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Default, sources - ["A3_Modules_F"]
			{
				control = "Edit";
				defaultValue = "''";
			};
			class Combo: Default //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Default, sources - ["A3_Modules_F"]
			{
				control = "Combo";
				defaultValue = "''";
			};
			class Checkbox: Default //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Default, sources - ["A3_Modules_F"]
			{
				control = "Checkbox";
				defaultValue = "false";
			};
			class CheckboxNumber: Default //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Default, sources - ["A3_Modules_F"]
			{
				control = "CheckboxNumber";
				defaultValue = "0";
			};
			class ModuleDescription //sources - ["A3_Modules_F"]
			{
				property = "ModuleInfo";
				control = "ModuleInfo";
			};
			class Units: Default //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Default, sources - ["A3_Modules_F"]
			{
				displayName = "Apply to";
				tooltip = "";
				defaultValue = "'1'";
				control = "ModuleObjects";
			};
		};
		class ModuleDescription //sources - ["A3_Modules_F"]
		{
			position = 0;
			positionDisabled = "Has no effect";
			positionEnabled = "Affects module function";
			direction = 0;
			directionDisabled = "Has no effect";
			directionEnabled = "Affects module function";
			duplicate = 0;
			duplicateDisabled = "Only one entity of this type can be synced.";
			duplicateEnabled = "Multiple entities of this type can be synced.";
			description = "";
			vehicle = "";
			displayName = "";
			icon = "";
			sync[] = {};
			class Anything //sources - ["A3_Modules_F"]
			{
				description = "Any object - persons, vehicles, static objects, etc.";
				displayName = "Any object";
				icon = "iconVehicle";
				duplicate = 1;
				side = 4;
			};
			class AnyPerson //sources - ["A3_Modules_F"]
			{
				description = "Any person. Not vehicles or static objects.";
				displayName = "Any person";
				icon = "iconMan";
				duplicate = 1;
				side = 1;
			};
			class AnyVehicle //sources - ["A3_Modules_F"]
			{
				description = "Any vehicle. No persons or static objects.";
				displayName = "Any vehicle";
				icon = "iconCar";
				duplicate = 1;
				side = 4;
			};
			class AnyStaticObject //sources - ["A3_Modules_F"]
			{
				description = "Any static object. Not persons or vehicles.";
				displayName = "Any static object";
				icon = "iconObject";
				duplicate = 1;
				side = 4;
			};
			class AnyBrain //sources - ["A3_Modules_F"]
			{
				description = "Any AI or player. Not empty objects";
				displayName = "Any AI or player";
				icon = "iconMan";
				duplicate = 1;
				side = 1;
			};
			class AnyAI: AnyBrain //inherits 5 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription/AnyBrain, sources - ["A3_Modules_F"]
			{
				description = "Any AI unit. Not players or empty objects";
				displayName = "Any AI";
				side = 1;
			};
			class AnyPlayer: AnyBrain //inherits 5 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription/AnyBrain, sources - ["A3_Modules_F"]
			{
				description = "Any player. Not AI units or empty objects";
				displayName = "Any player";
				side = 1;
			};
			class Curator_F //sources - ["A3_Modules_F"]
			{
				description = "System curator.";
				displayName = "Curator";
			};
			class EmptyDetector //sources - ["A3_Modules_F"]
			{
				description = "Any trigger";
				displayName = "Trigger";
				icon = "iconLogic";
				duplicate = 1;
				vehicle = "EmptyDetector";
			};
			class Condition: EmptyDetector //inherits 5 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription/EmptyDetector, sources - ["A3_Modules_F"]
			{
				description = "The module will be activated only after the trigger conditions are met.";
				optional = 1;
			};
			class AnyObject //sources - []
			{
			};
		};
		curatorInfoType = "";
		curatorInfoTypeEmpty = "";
	};
	class ModuleSmoke_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Effects"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleSmoke_F";
		scope = 2;
		icon = "\a3\Modules_F_Curator\Data\iconSmoke_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitSmoke_ca.paa";
		displayName = "Smoke Grenade";
		category = "Effects";
		function = "BIS_fnc_moduleGrenade";
		is3DEN = 1;
		isGlobal = 0;
		isTriggerActivated = 1;
		class Arguments //sources - ["A3_Modules_F_Effects"]
		{
			class Type //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Color";
				description = "Smoke color";
				class values //sources - ["A3_Modules_F_Effects"]
				{
					class White //sources - ["A3_Modules_F_Effects"]
					{
						name = "White Smoke";
						value = "SmokeShell";
						default = 1;
					};
					class Blue //sources - ["A3_Modules_F_Effects"]
					{
						name = "Blue Smoke";
						value = "SmokeShellBlue";
					};
					class Green //sources - ["A3_Modules_F_Effects"]
					{
						name = "Green Smoke";
						value = "SmokeShellGreen";
					};
					class Orange //sources - ["A3_Modules_F_Effects"]
					{
						name = "Orange Smoke";
						value = "SmokeShellOrange";
					};
					class Purple //sources - ["A3_Modules_F_Effects"]
					{
						name = "Purple Smoke";
						value = "SmokeShellPurple";
					};
					class Red //sources - ["A3_Modules_F_Effects"]
					{
						name = "Red Smoke";
						value = "SmokeShellRed";
					};
					class Yellow //sources - ["A3_Modules_F_Effects"]
					{
						name = "Yellow Smoke";
						value = "SmokeShellYellow";
					};
				};
			};
			class Repeat //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Permanent effect";
				description = "";
				typeName = "NUMBER";
				class values //sources - ["A3_Modules_F_Effects"]
				{
					class Enabled //sources - ["A3_Modules_F_Effects"]
					{
						name = "Enabled";
						value = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Effects"]
					{
						name = "Disabled";
						value = 0;
						default = 1;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Effects"]
		{
			position = 1;
			description = "Create a smoke shell.";
		};
	};
	class ModuleChemlight_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Effects"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleChemlight_F";
		scope = 2;
		icon = "\a3\Modules_F_Curator\Data\iconChemlight_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitChemlight_ca.paa";
		displayName = "Chem light";
		category = "Effects";
		function = "BIS_fnc_moduleGrenade";
		is3DEN = 1;
		isGlobal = 0;
		isTriggerActivated = 1;
		class Arguments //sources - ["A3_Modules_F_Effects"]
		{
			class Type //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Color";
				description = "Chem light color";
				class values //sources - ["A3_Modules_F_Effects"]
				{
					class Blue //sources - ["A3_Modules_F_Effects"]
					{
						name = "Blue Light";
						value = "Chemlight_Blue";
						default = 1;
					};
					class Green //sources - ["A3_Modules_F_Effects"]
					{
						name = "Green Light";
						value = "Chemlight_Green";
					};
					class Red //sources - ["A3_Modules_F_Effects"]
					{
						name = "Red Light";
						value = "Chemlight_Red";
					};
					class Yellow //sources - ["A3_Modules_F_Effects"]
					{
						name = "Yellow Light";
						value = "Chemlight_Yellow";
					};
				};
				class Repeat //sources - ["A3_Modules_F_Effects"]
				{
					displayName = "Permanent effect";
					description = "";
					typeName = "NUMBER";
					class values //sources - ["A3_Modules_F_Effects"]
					{
						class Enabled //sources - ["A3_Modules_F_Effects"]
						{
							name = "Enabled";
							value = 1;
						};
						class Disabled //sources - ["A3_Modules_F_Effects"]
						{
							name = "Disabled";
							value = 0;
							default = 1;
						};
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Effects"]
		{
			position = 1;
			description = "Create a chem light.";
		};
	};
	class ModuleTracers_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Effects"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleTracers_F";
		scope = 2;
		scopeCurator = 2;
		icon = "\a3\Modules_F_Curator\Data\iconTracers_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitTracers_ca.paa";
		displayName = "Tracers";
		category = "Effects";
		function = "BIS_fnc_moduleTracers";
		isGlobal = 2;
		isTriggerActivated = 1;
		class Arguments //sources - ["A3_Modules_F_Effects"]
		{
			class Side //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Tracer color";
				description = "";
				class values //sources - ["A3_Modules_F_Effects"]
				{
					class West //sources - ["A3_Modules_F_Effects"]
					{
						name = "Red (used by BLUFOR)";
						value = 1;
						default = 1;
					};
					class East //sources - ["A3_Modules_F_Effects"]
					{
						name = "Green (used by OPFOR)";
						value = 0;
					};
					class Guer //sources - ["A3_Modules_F_Effects"]
					{
						name = "Yellow (used by Independent)";
						value = 2;
					};
				};
			};
			class Min //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Min. delay";
				description = "";
				defaultValue = "10";
			};
			class Max //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Max. delay";
				description = "";
				defaultValue = "20";
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Effects"]
		{
			position = 1;
			description = "Shoot tracers upwards to create an illusion of battle.";
		};
	};
	class BIS_Effect_FilmGrain: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Effects"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "BIS_Effect_FilmGrain";
		scope = 1;
		displayName = "Post process: Film Grain";
		category = "effects";
		class EventHandlers //sources - ["A3_Modules_F_Effects"]
		{
			init = """""filmGrain"""" ppEffectEnable true; """"filmGrain"""" ppEffectAdjust [0.03, 1, 1, 0.1, 1, false]; """"filmGrain"""" ppEffectCommit 0;";
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Effects"]
		{
			description = "Add a film grain screen effect.";
		};
	};
	class BIS_Effect_Day: BIS_Effect_FilmGrain //inherits 7 parameters from bin\config.bin/CfgVehicles/BIS_Effect_FilmGrain, sources - ["A3_Modules_F_Effects"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "BIS_Effect_Day";
		displayName = "Post process: Movie Day";
		class EventHandlers //sources - ["A3_Modules_F_Effects"]
		{
			init = """""colorCorrections"""" ppEffectAdjust [1, 1.02, -0.005, [0.0, 0.0, 0.0, 0.0], [1, 0.8, 0.6, 0.65],  [0.199, 0.587, 0.114, 0.0]];   """"colorCorrections"""" ppEffectCommit 0;      """"colorCorrections"""" ppEffectEnable true";
		};
		class ModuleDescription: ModuleDescription //inherits 1 parameters from bin\config.bin/CfgVehicles/BIS_Effect_FilmGrain/ModuleDescription, sources - ["A3_Modules_F_Effects"]
		{
			description = "Add a movie day screen effect.";
		};
	};
	class BIS_Effect_MovieNight: BIS_Effect_FilmGrain //inherits 7 parameters from bin\config.bin/CfgVehicles/BIS_Effect_FilmGrain, sources - ["A3_Modules_F_Effects"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "BIS_Effect_MovieNight";
		displayName = "Post process: Movie Night";
		class EventHandlers //sources - ["A3_Modules_F_Effects"]
		{
			init = """""colorCorrections"""" ppEffectAdjust [1, 1.15, 0, [0.0, 0.0, 0.0, 0.0], [0.5, 0.8, 1, 0.5],  [0.199, 0.587, 0.114, 0.0]];   """"colorCorrections"""" ppEffectCommit 0; """"colorCorrections"""" ppEffectEnable true;";
		};
		class ModuleDescription: ModuleDescription //inherits 1 parameters from bin\config.bin/CfgVehicles/BIS_Effect_FilmGrain/ModuleDescription, sources - ["A3_Modules_F_Effects"]
		{
			description = "Add a movie night screen effect.";
		};
	};
	class BIS_Effect_Sepia: BIS_Effect_FilmGrain //inherits 7 parameters from bin\config.bin/CfgVehicles/BIS_Effect_FilmGrain, sources - ["A3_Modules_F_Effects"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "BIS_Effect_Sepia";
		displayName = "Post process: Sepia";
		class EventHandlers //sources - ["A3_Modules_F_Effects"]
		{
			init = """""colorCorrections"""" ppEffectAdjust [1, 1.06, -0.01, [0.0, 0.0, 0.0, 0.0], [0.44, 0.26, 0.078, 0],  [0.199, 0.587, 0.114, 0.0]];   """"colorCorrections"""" ppEffectCommit 0; """"colorCorrections"""" ppEffectEnable true;";
		};
		class ModuleDescription: ModuleDescription //inherits 1 parameters from bin\config.bin/CfgVehicles/BIS_Effect_FilmGrain/ModuleDescription, sources - ["A3_Modules_F_Effects"]
		{
			description = "Add a sepia screen effect.";
		};
	};
	class ModuleEffectsPlankton_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Effects"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleEffectsPlankton_F";
		scope = 2;
		displayName = "Plankton";
		category = "Effects";
		function = "BIS_fnc_moduleEffectsEmitterCreator";
		effectFunction[] = {"BIS_fnc_moduleEffectsPlankton"};
		isGlobal = 0;
		isTriggerActivated = 1;
		class Arguments //sources - []
		{
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Effects"]
		{
			position = 0;
			description = "Plankton module creates an underwater plankton effect around player.";
		};
	};
	class ModuleEffectsBubbles_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Effects"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleEffectsBubbles_F";
		scope = 2;
		displayName = "Bubbles";
		category = "Effects";
		function = "BIS_fnc_moduleEffectsEmitterCreator";
		effectFunction[] = {"BIS_fnc_moduleEffectsBubbles", 1};
		isGlobal = 0;
		isTriggerActivated = 1;
		class Arguments //sources - ["A3_Modules_F_Effects"]
		{
			class Period //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Effect Period";
				description = "Period of the effect.";
				typeName = "Number";
				defaultValue = 10;
			};
			class Delay //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Delay";
				description = "The delay before the start of the effect.";
				typeName = "Number";
				defaultValue = 1;
			};
			class LifeTime //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Life Time";
				description = "The duration of the effect.";
				typeName = "Number";
				defaultValue = 4;
			};
			class Density //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Density";
				description = "Amount of particles created per second.";
				typeName = "Number";
				defaultValue = 5;
			};
			class SpeedX //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Initial speed X";
				description = "Initial speed of particles in X axis (m/s).";
				typeName = "Number";
				defaultValue = 0;
			};
			class SpeedY //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Initial speed Y";
				description = "Initial speed of particles in Y axis (m/s).";
				typeName = "Number";
				defaultValue = 0;
			};
			class SpeedZ //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Initial speed Z";
				description = "Initial speed of particles in Z axis (m/s).";
				typeName = "Number";
				defaultValue = 0.5;
			};
			class Size //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Size";
				description = "Size of the particles.";
				typeName = "Number";
				defaultValue = 1;
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Effects"]
		{
			position = 1;
			description = "Creates underwater bubbles on position of the module. Unless you set the position of the module manually (via script commands), bubbles will be created at the bottom.";
		};
	};
	class ModuleEffectsShells_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Effects"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleEffectsShells_F";
		scope = 2;
		displayName = "Cartridges";
		category = "Effects";
		function = "BIS_fnc_moduleEffectsEmitterCreator";
		effectFunction[] = {"BIS_fnc_moduleEffectsShells"};
		isGlobal = 0;
		isTriggerActivated = 1;
		class Arguments //sources - ["A3_Modules_F_Effects"]
		{
			class Type //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Type";
				description = "Used model - size can be changed via Size parameter.";
				class values //sources - ["A3_Modules_F_Effects"]
				{
					class Ammo556 //sources - ["A3_Modules_F_Effects"]
					{
						name = "5.56 mm";
						value = 0;
					};
					class Ammo65 //sources - ["A3_Modules_F_Effects"]
					{
						name = "6.5 mm";
						value = 2;
					};
					class Ammo762 //sources - ["A3_Modules_F_Effects"]
					{
						name = "7.62 mm";
						value = 3;
						default = 1;
					};
					class Ammo127 //sources - ["A3_Modules_F_Effects"]
					{
						name = "12.7 mm";
						value = 1;
					};
					class AmmoSlug //sources - ["A3_Modules_F_Effects"]
					{
						name = "Slug";
						value = 4;
					};
					class AmmoSmall //sources - ["A3_Modules_F_Effects"]
					{
						name = "Small";
						value = 5;
					};
				};
			};
			class Size //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Size";
				description = "Size of particles.";
				typeName = "Number";
				defaultValue = 1;
			};
			class LifeTime //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Life Time";
				description = "How long will particles stay on the ground.";
				typeName = "Number";
				defaultValue = 60;
			};
			class Density //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Density";
				description = "Amount of created particles.";
				typeName = "Number";
				defaultValue = 20;
			};
			class Radius //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Radius";
				description = "Radius of area where particles are created.";
				typeName = "Number";
				defaultValue = 2;
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Effects"]
		{
			position = 1;
			description = "Creates empty cartridges on the position of the module.";
		};
	};
	class ModuleEffectsSmoke_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Effects"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleEffectsSmoke_F";
		scope = 2;
		displayName = "Smoke";
		category = "Effects";
		function = "BIS_fnc_moduleEffectsEmitterCreator";
		effectFunction[] = {"BIS_fnc_moduleEffectsSmoke"};
		isGlobal = 0;
		isTriggerActivated = 1;
		class Arguments //sources - ["A3_Modules_F_Effects"]
		{
			class ColorRed //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Color - Red";
				description = "Red part of color. Value can be 0-1.";
				typeName = "Number";
				defaultValue = 0.5;
			};
			class ColorGreen //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Color - Green";
				description = "Green part of a color. Value can be 0-1.";
				typeName = "Number";
				defaultValue = 0.5;
			};
			class ColorBlue //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Color - Blue";
				description = "Blue part of a color. Value can be 0-1.";
				typeName = "Number";
				defaultValue = 0.5;
			};
			class ColorAlpha //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Color - Alpha";
				description = "Alpha part of a color (transparency).";
				typeName = "Number";
				defaultValue = 0.5;
			};
			class Timeout //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Timeout";
				description = "Time in seconds after which the effect disappears. Value 0 for never ending effect.";
				typeName = "NUMBER";
				defaultValue = 0;
			};
			class EffectSize //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Effect size";
				typeName = "NUMBER";
				defaultValue = 1;
			};
			class ParticleDensity //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Particle density";
				description = "Amount of particles generated per second.";
				typeName = "NUMBER";
				defaultValue = 10;
			};
			class ParticleLifeTime //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Particle life time";
				description = "Time in seconds after which particle disappears.";
				typeName = "NUMBER";
				defaultValue = 50;
			};
			class ParticleSize //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Particle size";
				typeName = "NUMBER";
				defaultValue = 1;
			};
			class Expansion //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Effect expansion";
				description = "Variability of particles movement.";
				typeName = "NUMBER";
				defaultValue = 1;
			};
			class ParticleSpeed //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Particle speed";
				description = "Initial speed of a particle when it is created.";
				typeName = "NUMBER";
				defaultValue = 1;
			};
			class ParticleLifting //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Particle lifting";
				description = "Speed of a particle during its climbing.";
				typeName = "NUMBER";
				defaultValue = 1;
			};
			class WindEffect //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Wind Effect";
				description = "How much will particles be affected by wind.";
				typeName = "NUMBER";
				defaultValue = 1;
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Effects"]
		{
			position = 1;
			description = "Creates smoke on a position of the module.";
		};
	};
	class ModuleEffectsFire_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Effects"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleEffectsFire_F";
		scope = 2;
		displayName = "Fire";
		category = "Effects";
		function = "BIS_fnc_moduleEffectsEmitterCreator";
		effectFunction[] = {"BIS_fnc_moduleEffectsFire"};
		isGlobal = 0;
		isTriggerActivated = 1;
		class Arguments //sources - ["A3_Modules_F_Effects"]
		{
			class ColorRed //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Color - Red";
				description = "Red part of a color. Value can be 0-1.";
				typeName = "Number";
				defaultValue = 0.5;
			};
			class ColorGreen //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Color - Green";
				description = "Green part of a color. Value can be 0-1.";
				typeName = "Number";
				defaultValue = 0.5;
			};
			class ColorBlue //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Color - Blue";
				description = "Blue part of a color. Value can be 0-1.";
				typeName = "Number";
				defaultValue = 0.5;
			};
			class Timeout //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Timeout";
				description = "Time in seconds after which effect disappears. Value 0 for never ending effect.";
				typeName = "NUMBER";
				defaultValue = 0;
			};
			class FireDamage //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Fire Damage";
				description = "Damage given to unit which steps too close to the fire. Value 0 for no damage.";
				typeName = "NUMBER";
				defaultValue = 1;
			};
			class EffectSize //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Effect size";
				typeName = "NUMBER";
				defaultValue = 1;
			};
			class ParticleDensity //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Particle density";
				description = "Amount of particles generated per second.";
				typeName = "NUMBER";
				defaultValue = 25;
			};
			class ParticleLifeTime //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Particle life time";
				description = "Time in seconds after which a particle disappears.";
				typeName = "NUMBER";
				defaultValue = 0.6;
			};
			class ParticleSize //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Particle size";
				typeName = "NUMBER";
				defaultValue = 1;
			};
			class ParticleSpeed //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Particle speed";
				typeName = "NUMBER";
				defaultValue = 1;
			};
			class ParticleOrientation //sources - ["A3_Modules_F_Effects"]
			{
				displayName = "Particle orientation";
				typeName = "NUMBER";
				defaultValue = 0;
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Effects"]
		{
			position = 1;
			description = "Creates fire on a position of the module.";
		};
	};
	class ModuleDate_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Events"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleDate_F";
		scope = 2;
		displayName = "Date";
		category = "Events";
		function = "BIS_fnc_moduleDate";
		isGlobal = 1;
		isTriggerActivated = 1;
		class Arguments //sources - ["A3_Modules_F_Events"]
		{
			class Year //sources - ["A3_Modules_F_Events"]
			{
				displayName = "Year";
				description = "";
				class values //sources - ["A3_Modules_F_Events"]
				{
					class NoChange //sources - ["A3_Modules_F_Events"]
					{
						name = "No change";
						value = -1;
						default = 1;
					};
					class Number1982 //sources - ["A3_Modules_F_Events"]
					{
						name = "1982";
						value = 1982;
					};
					class Number1983 //sources - ["A3_Modules_F_Events"]
					{
						name = "1983";
						value = 1983;
					};
					class Number1984 //sources - ["A3_Modules_F_Events"]
					{
						name = "1984";
						value = 1984;
					};
					class Number1985 //sources - ["A3_Modules_F_Events"]
					{
						name = "1985";
						value = 1985;
					};
					class Number1986 //sources - ["A3_Modules_F_Events"]
					{
						name = "1986";
						value = 1986;
					};
					class Number1987 //sources - ["A3_Modules_F_Events"]
					{
						name = "1987";
						value = 1987;
					};
					class Number1988 //sources - ["A3_Modules_F_Events"]
					{
						name = "1988";
						value = 1988;
					};
					class Number1989 //sources - ["A3_Modules_F_Events"]
					{
						name = "1989";
						value = 1989;
					};
					class Number1990 //sources - ["A3_Modules_F_Events"]
					{
						name = "1990";
						value = 1990;
					};
					class Number1991 //sources - ["A3_Modules_F_Events"]
					{
						name = "1991";
						value = 1991;
					};
					class Number1992 //sources - ["A3_Modules_F_Events"]
					{
						name = "1992";
						value = 1992;
					};
					class Number1993 //sources - ["A3_Modules_F_Events"]
					{
						name = "1993";
						value = 1993;
					};
					class Number1994 //sources - ["A3_Modules_F_Events"]
					{
						name = "1994";
						value = 1994;
					};
					class Number1995 //sources - ["A3_Modules_F_Events"]
					{
						name = "1995";
						value = 1995;
					};
					class Number1996 //sources - ["A3_Modules_F_Events"]
					{
						name = "1996";
						value = 1996;
					};
					class Number1997 //sources - ["A3_Modules_F_Events"]
					{
						name = "1997";
						value = 1997;
					};
					class Number1998 //sources - ["A3_Modules_F_Events"]
					{
						name = "1998";
						value = 1998;
					};
					class Number1999 //sources - ["A3_Modules_F_Events"]
					{
						name = "1999";
						value = 1999;
					};
					class Number2000 //sources - ["A3_Modules_F_Events"]
					{
						name = "2000";
						value = 2000;
					};
					class Number2001 //sources - ["A3_Modules_F_Events"]
					{
						name = "2001";
						value = 2001;
					};
					class Number2002 //sources - ["A3_Modules_F_Events"]
					{
						name = "2002";
						value = 2002;
					};
					class Number2003 //sources - ["A3_Modules_F_Events"]
					{
						name = "2003";
						value = 2003;
					};
					class Number2004 //sources - ["A3_Modules_F_Events"]
					{
						name = "2004";
						value = 2004;
					};
					class Number2005 //sources - ["A3_Modules_F_Events"]
					{
						name = "2005";
						value = 2005;
					};
					class Number2006 //sources - ["A3_Modules_F_Events"]
					{
						name = "2006";
						value = 2006;
					};
					class Number2007 //sources - ["A3_Modules_F_Events"]
					{
						name = "2007";
						value = 2007;
					};
					class Number2008 //sources - ["A3_Modules_F_Events"]
					{
						name = "2008";
						value = 2008;
					};
					class Number2009 //sources - ["A3_Modules_F_Events"]
					{
						name = "2009";
						value = 1999;
					};
					class Number2010 //sources - ["A3_Modules_F_Events"]
					{
						name = "2010";
						value = 2010;
					};
					class Number2011 //sources - ["A3_Modules_F_Events"]
					{
						name = "2011";
						value = 2011;
					};
					class Number2012 //sources - ["A3_Modules_F_Events"]
					{
						name = "2012";
						value = 2012;
					};
					class Number2013 //sources - ["A3_Modules_F_Events"]
					{
						name = "2013";
						value = 2013;
					};
					class Number2014 //sources - ["A3_Modules_F_Events"]
					{
						name = "2014";
						value = 2014;
					};
					class Number2015 //sources - ["A3_Modules_F_Events"]
					{
						name = "2015";
						value = 2015;
					};
					class Number2016 //sources - ["A3_Modules_F_Events"]
					{
						name = "2016";
						value = 2016;
					};
					class Number2017 //sources - ["A3_Modules_F_Events"]
					{
						name = "2017";
						value = 2017;
					};
					class Number2018 //sources - ["A3_Modules_F_Events"]
					{
						name = "2018";
						value = 2018;
					};
					class Number2019 //sources - ["A3_Modules_F_Events"]
					{
						name = "2019";
						value = 2019;
					};
					class Number2020 //sources - ["A3_Modules_F_Events"]
					{
						name = "2020";
						value = 2020;
					};
					class Number2021 //sources - ["A3_Modules_F_Events"]
					{
						name = "2021";
						value = 2021;
					};
					class Number2022 //sources - ["A3_Modules_F_Events"]
					{
						name = "2022";
						value = 2022;
					};
					class Number2023 //sources - ["A3_Modules_F_Events"]
					{
						name = "2023";
						value = 2023;
					};
					class Number2024 //sources - ["A3_Modules_F_Events"]
					{
						name = "2024";
						value = 2024;
					};
					class Number2025 //sources - ["A3_Modules_F_Events"]
					{
						name = "2025";
						value = 2025;
					};
					class Number2026 //sources - ["A3_Modules_F_Events"]
					{
						name = "2026";
						value = 2026;
					};
					class Number2027 //sources - ["A3_Modules_F_Events"]
					{
						name = "2027";
						value = 2027;
					};
					class Number2028 //sources - ["A3_Modules_F_Events"]
					{
						name = "2028";
						value = 2028;
					};
					class Number2029 //sources - ["A3_Modules_F_Events"]
					{
						name = "2029";
						value = 2029;
					};
					class Number2030 //sources - ["A3_Modules_F_Events"]
					{
						name = "2030";
						value = 2030;
					};
					class Number2031 //sources - ["A3_Modules_F_Events"]
					{
						name = "2031";
						value = 2031;
					};
					class Number2032 //sources - ["A3_Modules_F_Events"]
					{
						name = "2032";
						value = 2032;
					};
					class Number2033 //sources - ["A3_Modules_F_Events"]
					{
						name = "2033";
						value = 2033;
					};
					class Number2034 //sources - ["A3_Modules_F_Events"]
					{
						name = "2034";
						value = 2034;
					};
					class Number2035 //sources - ["A3_Modules_F_Events"]
					{
						name = "2035";
						value = 2035;
					};
					class Number2036 //sources - ["A3_Modules_F_Events"]
					{
						name = "2036";
						value = 2036;
					};
					class Number2037 //sources - ["A3_Modules_F_Events"]
					{
						name = "2037";
						value = 2037;
					};
					class Number2038 //sources - ["A3_Modules_F_Events"]
					{
						name = "2038";
						value = 2038;
					};
					class Number2039 //sources - ["A3_Modules_F_Events"]
					{
						name = "2039";
						value = 2039;
					};
					class Number2040 //sources - ["A3_Modules_F_Events"]
					{
						name = "2040";
						value = 2040;
					};
					class Number2041 //sources - ["A3_Modules_F_Events"]
					{
						name = "2041";
						value = 2041;
					};
					class Number2042 //sources - ["A3_Modules_F_Events"]
					{
						name = "2042";
						value = 2042;
					};
					class Number2043 //sources - ["A3_Modules_F_Events"]
					{
						name = "2043";
						value = 2043;
					};
					class Number2044 //sources - ["A3_Modules_F_Events"]
					{
						name = "2044";
						value = 2044;
					};
					class Number2045 //sources - ["A3_Modules_F_Events"]
					{
						name = "2045";
						value = 2045;
					};
					class Number2046 //sources - ["A3_Modules_F_Events"]
					{
						name = "2046";
						value = 2046;
					};
					class Number2047 //sources - ["A3_Modules_F_Events"]
					{
						name = "2047";
						value = 2047;
					};
					class Number2048 //sources - ["A3_Modules_F_Events"]
					{
						name = "2048";
						value = 2048;
					};
					class Number2049 //sources - ["A3_Modules_F_Events"]
					{
						name = "2049";
						value = 2049;
					};
					class Number2050 //sources - ["A3_Modules_F_Events"]
					{
						name = "2050";
						value = 2050;
					};
				};
			};
			class Month //sources - ["A3_Modules_F_Events"]
			{
				displayName = "Month";
				description = "";
				class values //sources - ["A3_Modules_F_Events"]
				{
					class NoChange //sources - ["A3_Modules_F_Events"]
					{
						name = "No change";
						value = -1;
						default = 1;
					};
					class Month1 //sources - ["A3_Modules_F_Events"]
					{
						name = "Jan";
						value = 1;
					};
					class Month2 //sources - ["A3_Modules_F_Events"]
					{
						name = "Feb";
						value = 2;
					};
					class Month3 //sources - ["A3_Modules_F_Events"]
					{
						name = "Mar";
						value = 3;
					};
					class Month4 //sources - ["A3_Modules_F_Events"]
					{
						name = "Apr";
						value = 4;
					};
					class Month5 //sources - ["A3_Modules_F_Events"]
					{
						name = "May";
						value = 5;
					};
					class Month6 //sources - ["A3_Modules_F_Events"]
					{
						name = "Jun";
						value = 6;
					};
					class Month7 //sources - ["A3_Modules_F_Events"]
					{
						name = "Jul";
						value = 7;
					};
					class Month8 //sources - ["A3_Modules_F_Events"]
					{
						name = "Aug";
						value = 8;
					};
					class Month9 //sources - ["A3_Modules_F_Events"]
					{
						name = "Sep";
						value = 9;
					};
					class Month10 //sources - ["A3_Modules_F_Events"]
					{
						name = "Oct";
						value = 10;
					};
					class Month11 //sources - ["A3_Modules_F_Events"]
					{
						name = "Nov";
						value = 11;
					};
					class Month12 //sources - ["A3_Modules_F_Events"]
					{
						name = "Dec";
						value = 12;
					};
				};
			};
			class Day //sources - ["A3_Modules_F_Events"]
			{
				displayName = "Day";
				description = "";
				class values //sources - ["A3_Modules_F_Events"]
				{
					class NoChange //sources - ["A3_Modules_F_Events"]
					{
						name = "No change";
						value = -1;
						default = 1;
					};
					class Number1 //sources - ["A3_Modules_F_Events"]
					{
						name = "1";
						value = 1;
					};
					class Number2 //sources - ["A3_Modules_F_Events"]
					{
						name = "2";
						value = 2;
					};
					class Number3 //sources - ["A3_Modules_F_Events"]
					{
						name = "3";
						value = 3;
					};
					class Number4 //sources - ["A3_Modules_F_Events"]
					{
						name = "4";
						value = 4;
					};
					class Number5 //sources - ["A3_Modules_F_Events"]
					{
						name = "5";
						value = 5;
					};
					class Number6 //sources - ["A3_Modules_F_Events"]
					{
						name = "6";
						value = 6;
					};
					class Number7 //sources - ["A3_Modules_F_Events"]
					{
						name = "7";
						value = 7;
					};
					class Number8 //sources - ["A3_Modules_F_Events"]
					{
						name = "8";
						value = 8;
					};
					class Number9 //sources - ["A3_Modules_F_Events"]
					{
						name = "9";
						value = 9;
					};
					class Number10 //sources - ["A3_Modules_F_Events"]
					{
						name = "10";
						value = 10;
					};
					class Number11 //sources - ["A3_Modules_F_Events"]
					{
						name = "11";
						value = 11;
					};
					class Number12 //sources - ["A3_Modules_F_Events"]
					{
						name = "12";
						value = 12;
					};
					class Number13 //sources - ["A3_Modules_F_Events"]
					{
						name = "13";
						value = 13;
					};
					class Number14 //sources - ["A3_Modules_F_Events"]
					{
						name = "14";
						value = 14;
					};
					class Number15 //sources - ["A3_Modules_F_Events"]
					{
						name = "15";
						value = 15;
					};
					class Number16 //sources - ["A3_Modules_F_Events"]
					{
						name = "16";
						value = 16;
					};
					class Number17 //sources - ["A3_Modules_F_Events"]
					{
						name = "17";
						value = 17;
					};
					class Number18 //sources - ["A3_Modules_F_Events"]
					{
						name = "18";
						value = 18;
					};
					class Number19 //sources - ["A3_Modules_F_Events"]
					{
						name = "19";
						value = 19;
					};
					class Number20 //sources - ["A3_Modules_F_Events"]
					{
						name = "20";
						value = 20;
					};
					class Number21 //sources - ["A3_Modules_F_Events"]
					{
						name = "21";
						value = 21;
					};
					class Number22 //sources - ["A3_Modules_F_Events"]
					{
						name = "22";
						value = 22;
					};
					class Number23 //sources - ["A3_Modules_F_Events"]
					{
						name = "23";
						value = 23;
					};
					class Number24 //sources - ["A3_Modules_F_Events"]
					{
						name = "24";
						value = 24;
					};
					class Number25 //sources - ["A3_Modules_F_Events"]
					{
						name = "25";
						value = 25;
					};
					class Number26 //sources - ["A3_Modules_F_Events"]
					{
						name = "26";
						value = 26;
					};
					class Number27 //sources - ["A3_Modules_F_Events"]
					{
						name = "27";
						value = 27;
					};
					class Number28 //sources - ["A3_Modules_F_Events"]
					{
						name = "28";
						value = 28;
					};
					class Number29 //sources - ["A3_Modules_F_Events"]
					{
						name = "29";
						value = 29;
					};
					class Number30 //sources - ["A3_Modules_F_Events"]
					{
						name = "30";
						value = 30;
					};
					class Number31 //sources - ["A3_Modules_F_Events"]
					{
						name = "31";
						value = 31;
					};
				};
			};
			class Hour //sources - ["A3_Modules_F_Events"]
			{
				displayName = "Hour";
				description = "";
				class values //sources - ["A3_Modules_F_Events"]
				{
					class NoChange //sources - ["A3_Modules_F_Events"]
					{
						name = "No change";
						value = -1;
						default = 1;
					};
					class Number0 //sources - ["A3_Modules_F_Events"]
					{
						name = "0";
						value = 0;
					};
					class Number1 //sources - ["A3_Modules_F_Events"]
					{
						name = "1";
						value = 1;
					};
					class Number2 //sources - ["A3_Modules_F_Events"]
					{
						name = "2";
						value = 2;
					};
					class Number3 //sources - ["A3_Modules_F_Events"]
					{
						name = "3";
						value = 3;
					};
					class Number4 //sources - ["A3_Modules_F_Events"]
					{
						name = "4";
						value = 4;
					};
					class Number5 //sources - ["A3_Modules_F_Events"]
					{
						name = "5";
						value = 5;
					};
					class Number6 //sources - ["A3_Modules_F_Events"]
					{
						name = "6";
						value = 6;
					};
					class Number7 //sources - ["A3_Modules_F_Events"]
					{
						name = "7";
						value = 7;
					};
					class Number8 //sources - ["A3_Modules_F_Events"]
					{
						name = "8";
						value = 8;
					};
					class Number9 //sources - ["A3_Modules_F_Events"]
					{
						name = "9";
						value = 9;
					};
					class Number10 //sources - ["A3_Modules_F_Events"]
					{
						name = "10";
						value = 10;
					};
					class Number11 //sources - ["A3_Modules_F_Events"]
					{
						name = "11";
						value = 11;
					};
					class Number12 //sources - ["A3_Modules_F_Events"]
					{
						name = "12";
						value = 12;
					};
					class Number13 //sources - ["A3_Modules_F_Events"]
					{
						name = "13";
						value = 13;
					};
					class Number14 //sources - ["A3_Modules_F_Events"]
					{
						name = "14";
						value = 14;
					};
					class Number15 //sources - ["A3_Modules_F_Events"]
					{
						name = "15";
						value = 15;
					};
					class Number16 //sources - ["A3_Modules_F_Events"]
					{
						name = "16";
						value = 16;
					};
					class Number17 //sources - ["A3_Modules_F_Events"]
					{
						name = "17";
						value = 17;
					};
					class Number18 //sources - ["A3_Modules_F_Events"]
					{
						name = "18";
						value = 18;
					};
					class Number19 //sources - ["A3_Modules_F_Events"]
					{
						name = "19";
						value = 19;
					};
					class Number20 //sources - ["A3_Modules_F_Events"]
					{
						name = "20";
						value = 20;
					};
					class Number21 //sources - ["A3_Modules_F_Events"]
					{
						name = "21";
						value = 21;
					};
					class Number22 //sources - ["A3_Modules_F_Events"]
					{
						name = "22";
						value = 22;
					};
					class Number23 //sources - ["A3_Modules_F_Events"]
					{
						name = "23";
						value = 23;
					};
				};
			};
			class Minute //sources - ["A3_Modules_F_Events"]
			{
				displayName = "Minute";
				description = "";
				class values //sources - ["A3_Modules_F_Events"]
				{
					class NoChange //sources - ["A3_Modules_F_Events"]
					{
						name = "No change";
						value = -1;
						default = 1;
					};
					class Number00 //sources - ["A3_Modules_F_Events"]
					{
						name = "00";
						value = 0;
					};
					class Number01 //sources - ["A3_Modules_F_Events"]
					{
						name = "01";
						value = 1;
					};
					class Number02 //sources - ["A3_Modules_F_Events"]
					{
						name = "02";
						value = 2;
					};
					class Number03 //sources - ["A3_Modules_F_Events"]
					{
						name = "03";
						value = 3;
					};
					class Number04 //sources - ["A3_Modules_F_Events"]
					{
						name = "04";
						value = 4;
					};
					class Number05 //sources - ["A3_Modules_F_Events"]
					{
						name = "05";
						value = 5;
					};
					class Number06 //sources - ["A3_Modules_F_Events"]
					{
						name = "06";
						value = 6;
					};
					class Number07 //sources - ["A3_Modules_F_Events"]
					{
						name = "07";
						value = 7;
					};
					class Number08 //sources - ["A3_Modules_F_Events"]
					{
						name = "08";
						value = 8;
					};
					class Number09 //sources - ["A3_Modules_F_Events"]
					{
						name = "09";
						value = 9;
					};
					class Number10 //sources - ["A3_Modules_F_Events"]
					{
						name = "10";
						value = 10;
					};
					class Number11 //sources - ["A3_Modules_F_Events"]
					{
						name = "11";
						value = 11;
					};
					class Number12 //sources - ["A3_Modules_F_Events"]
					{
						name = "12";
						value = 12;
					};
					class Number13 //sources - ["A3_Modules_F_Events"]
					{
						name = "13";
						value = 13;
					};
					class Number14 //sources - ["A3_Modules_F_Events"]
					{
						name = "14";
						value = 14;
					};
					class Number15 //sources - ["A3_Modules_F_Events"]
					{
						name = "15";
						value = 15;
					};
					class Number16 //sources - ["A3_Modules_F_Events"]
					{
						name = "16";
						value = 16;
					};
					class Number17 //sources - ["A3_Modules_F_Events"]
					{
						name = "17";
						value = 17;
					};
					class Number18 //sources - ["A3_Modules_F_Events"]
					{
						name = "18";
						value = 18;
					};
					class Number19 //sources - ["A3_Modules_F_Events"]
					{
						name = "19";
						value = 19;
					};
					class Number20 //sources - ["A3_Modules_F_Events"]
					{
						name = "20";
						value = 20;
					};
					class Number21 //sources - ["A3_Modules_F_Events"]
					{
						name = "21";
						value = 21;
					};
					class Number22 //sources - ["A3_Modules_F_Events"]
					{
						name = "22";
						value = 22;
					};
					class Number23 //sources - ["A3_Modules_F_Events"]
					{
						name = "23";
						value = 23;
					};
					class Number24 //sources - ["A3_Modules_F_Events"]
					{
						name = "24";
						value = 24;
					};
					class Number25 //sources - ["A3_Modules_F_Events"]
					{
						name = "25";
						value = 25;
					};
					class Number26 //sources - ["A3_Modules_F_Events"]
					{
						name = "26";
						value = 26;
					};
					class Number27 //sources - ["A3_Modules_F_Events"]
					{
						name = "27";
						value = 27;
					};
					class Number28 //sources - ["A3_Modules_F_Events"]
					{
						name = "28";
						value = 28;
					};
					class Number29 //sources - ["A3_Modules_F_Events"]
					{
						name = "29";
						value = 29;
					};
					class Number30 //sources - ["A3_Modules_F_Events"]
					{
						name = "30";
						value = 30;
					};
					class Number31 //sources - ["A3_Modules_F_Events"]
					{
						name = "31";
						value = 31;
					};
					class Number32 //sources - ["A3_Modules_F_Events"]
					{
						name = "32";
						value = 32;
					};
					class Number33 //sources - ["A3_Modules_F_Events"]
					{
						name = "33";
						value = 33;
					};
					class Number34 //sources - ["A3_Modules_F_Events"]
					{
						name = "34";
						value = 34;
					};
					class Number35 //sources - ["A3_Modules_F_Events"]
					{
						name = "35";
						value = 35;
					};
					class Number36 //sources - ["A3_Modules_F_Events"]
					{
						name = "36";
						value = 36;
					};
					class Number37 //sources - ["A3_Modules_F_Events"]
					{
						name = "37";
						value = 37;
					};
					class Number38 //sources - ["A3_Modules_F_Events"]
					{
						name = "38";
						value = 38;
					};
					class Number39 //sources - ["A3_Modules_F_Events"]
					{
						name = "39";
						value = 39;
					};
					class Number40 //sources - ["A3_Modules_F_Events"]
					{
						name = "40";
						value = 40;
					};
					class Number41 //sources - ["A3_Modules_F_Events"]
					{
						name = "41";
						value = 41;
					};
					class Number42 //sources - ["A3_Modules_F_Events"]
					{
						name = "42";
						value = 42;
					};
					class Number43 //sources - ["A3_Modules_F_Events"]
					{
						name = "43";
						value = 43;
					};
					class Number44 //sources - ["A3_Modules_F_Events"]
					{
						name = "44";
						value = 44;
					};
					class Number45 //sources - ["A3_Modules_F_Events"]
					{
						name = "45";
						value = 45;
					};
					class Number46 //sources - ["A3_Modules_F_Events"]
					{
						name = "46";
						value = 46;
					};
					class Number47 //sources - ["A3_Modules_F_Events"]
					{
						name = "47";
						value = 47;
					};
					class Number48 //sources - ["A3_Modules_F_Events"]
					{
						name = "48";
						value = 48;
					};
					class Number49 //sources - ["A3_Modules_F_Events"]
					{
						name = "49";
						value = 49;
					};
					class Number50 //sources - ["A3_Modules_F_Events"]
					{
						name = "50";
						value = 50;
					};
					class Number51 //sources - ["A3_Modules_F_Events"]
					{
						name = "51";
						value = 51;
					};
					class Number52 //sources - ["A3_Modules_F_Events"]
					{
						name = "52";
						value = 52;
					};
					class Number53 //sources - ["A3_Modules_F_Events"]
					{
						name = "53";
						value = 53;
					};
					class Number54 //sources - ["A3_Modules_F_Events"]
					{
						name = "54";
						value = 54;
					};
					class Number55 //sources - ["A3_Modules_F_Events"]
					{
						name = "55";
						value = 55;
					};
					class Number56 //sources - ["A3_Modules_F_Events"]
					{
						name = "56";
						value = 56;
					};
					class Number57 //sources - ["A3_Modules_F_Events"]
					{
						name = "57";
						value = 57;
					};
					class Number58 //sources - ["A3_Modules_F_Events"]
					{
						name = "58";
						value = 58;
					};
					class Number59 //sources - ["A3_Modules_F_Events"]
					{
						name = "59";
						value = 59;
					};
				};
			};
			class Skiptime //sources - ["A3_Modules_F_Events"]
			{
				displayName = "Skip Time";
				description = "Adds time to date in hours";
				typeName = "NUMBER";
				defaultValue = 0;
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Events"]
		{
			description = "Set mission date.";
		};
	};
	class ModuleWeather_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Events"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleWeather_F";
		scope = 2;
		scopeCurator = 2;
		curatorInfoType = "RscDisplayAttributesModuleWeather";
		portrait = "\a3\Modules_F_Curator\Data\portraitWeather_ca.paa";
		displayName = "Weather";
		category = "Environment";
		function = "BIS_fnc_moduleWeather";
		isGlobal = 1;
		isTriggerActivated = 1;
		class Arguments //sources - ["A3_Modules_F_Events"]
		{
			class Delay //sources - ["A3_Modules_F_Events"]
			{
				displayName = "Delay";
				description = "How long it takes to change the weather in seconds. It takes at least 10 min for overcast to change.";
				typeName = "NUMBER";
				defaultValue = 0;
			};
			class Overcast //sources - ["A3_Modules_F_Events"]
			{
				displayName = "Overcast";
				description = "Values are between 0 and 1, no change = -1.";
				typeName = "NUMBER";
				defaultValue = -1;
			};
			class Rain //sources - ["A3_Modules_F_Events"]
			{
				displayName = "Rain";
				description = "Values are between 0 and 1, no change = -1.";
				typeName = "NUMBER";
				defaultValue = -1;
			};
			class Fog //sources - ["A3_Modules_F_Events"]
			{
				displayName = "Fog:";
				description = "Values are between 0 and 1, no change = -1.";
				typeName = "NUMBER";
				defaultValue = -1;
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Events"]
		{
			description = "Set mission weather. Certain changes can take some time to appear.";
		};
	};
	class ModuleSaveGame_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Events"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleSaveGame_F";
		scope = 2;
		displayName = "Save Game";
		category = "Events";
		icon = "\a3\Modules_F\Data\iconSavegame_ca.paa";
		function = "BIS_fnc_moduleSaveGame";
		isTriggerActivated = 1;
		class Arguments //sources - []
		{
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Events"]
		{
			description = "Set the mission progress. Will replace the previous automatic save. User save won't be affected.";
		};
	};
	class ModuleChat_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Events"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleChat_F";
		scope = 2;
		displayName = "Radio Chat";
		category = "Events";
		function = "BIS_fnc_moduleChat";
		isGlobal = 1;
		isTriggerActivated = 1;
		isPersistent = 1;
		class Arguments: ArgumentsBaseUnits //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits, sources - ["A3_Modules_F_Events"]
		{
			class Units: Units //inherits 3 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits/Units, sources - []
			{
			};
			class Text //sources - ["A3_Modules_F_Events"]
			{
				displayName = "Text:";
				typeName = "STRING";
				defaultValue = "";
			};
			class Channel //sources - ["A3_Modules_F_Events"]
			{
				displayName = "Channel";
				class values //sources - ["A3_Modules_F_Events"]
				{
					class Group //sources - ["A3_Modules_F_Events"]
					{
						name = "Group";
						value = 0;
						default = 1;
					};
					class Vehicle //sources - ["A3_Modules_F_Events"]
					{
						name = "Vehicle";
						value = 1;
					};
					class Side //sources - ["A3_Modules_F_Events"]
					{
						name = "Side";
						value = 2;
					};
					class Command //sources - ["A3_Modules_F_Events"]
					{
						name = "Command";
						value = 3;
					};
					class Global //sources - ["A3_Modules_F_Events"]
					{
						name = "Global";
						value = 4;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Events"]
		{
			description = "Show a chat message.";
		};
	};
	class ModuleVolume_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Events"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleVolume_F";
		scope = 2;
		displayName = "Volume";
		category = "Events";
		function = "BIS_fnc_moduleVolume";
		isGlobal = 1;
		isTriggerActivated = 1;
		isPersistent = 1;
		class Arguments: ArgumentsBaseUnits //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits, sources - ["A3_Modules_F_Events"]
		{
			class Units: Units //inherits 3 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits/Units, sources - []
			{
			};
			class Delay //sources - ["A3_Modules_F_Events"]
			{
				displayName = "Delay";
				description = "How long it takes before the volume changes in seconds.";
				typeName = "NUMBER";
				defaultValue = 0;
			};
			class Music //sources - ["A3_Modules_F_Events"]
			{
				displayName = "Music:";
				description = "Values are between 0 and 1, no change = -1.";
				typeName = "NUMBER";
				defaultValue = -1;
			};
			class Sound //sources - ["A3_Modules_F_Events"]
			{
				displayName = "Sound";
				description = "Values are between 0 and 1, no change = -1.";
				typeName = "NUMBER";
				defaultValue = -1;
			};
			class Radio //sources - ["A3_Modules_F_Events"]
			{
				displayName = "Radio:";
				description = "Values are between 0 and 1, no change = -1.";
				typeName = "NUMBER";
				defaultValue = -1;
			};
			class Speech //sources - ["A3_Modules_F_Events"]
			{
				displayName = "Speech";
				description = "Values are between 0 and 1, no change = -1.";
				typeName = "NUMBER";
				defaultValue = -1;
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Events"]
		{
			description = "Set mission sound/music volume. Changes won't affect user options.";
		};
	};
	class ModuleGenericRadio_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Events"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleGenericRadio_F";
		scope = 2;
		displayName = "Generic radio message";
		category = "Events";
		function = "BIS_fnc_moduleGenericRadio";
		isGlobal = 1;
		isTriggerActivated = 1;
		class Arguments //sources - ["A3_Modules_F_Events"]
		{
			class Side //sources - ["A3_Modules_F_Events"]
			{
				displayName = "Side";
				description = "";
				class values //sources - ["A3_Modules_F_Events"]
				{
					class BLUFOR //sources - ["A3_Modules_F_Events"]
					{
						name = "BLUFOR";
						value = 1;
						default = 1;
					};
					class OPFOR //sources - ["A3_Modules_F_Events"]
					{
						name = "OPFOR";
						value = 0;
					};
					class Resistance //sources - ["A3_Modules_F_Events"]
					{
						name = "Independent";
						value = 2;
					};
					class Civilian //sources - ["A3_Modules_F_Events"]
					{
						name = "Civilian";
						value = 3;
					};
				};
			};
			class Sentence //sources - ["A3_Modules_F_Events"]
			{
				displayName = "Sentence";
				class values //sources - ["A3_Modules_F_Events"]
				{
					class SentGenReinforcementsConfirmed //sources - ["A3_Modules_F_Events"]
					{
						name = "Reinforcements en route.";
						value = "SentGenReinforcementsConfirmed";
					};
					class SentGenReinforcementsRejected //sources - ["A3_Modules_F_Events"]
					{
						name = "Reinforcements unavailable.";
						value = "SentGenReinforcementsRejected";
					};
					class SentGenReinforcementsArrived //sources - ["A3_Modules_F_Events"]
					{
						name = "Reinforcements have arrived.";
						value = "SentGenReinforcementsArrived";
					};
					class SentGenLeavingAO //sources - ["A3_Modules_F_Events"]
					{
						name = "You are leaving the Area of Operations.";
						value = "SentGenLeavingAO";
					};
					class SentGenTime //sources - ["A3_Modules_F_Events"]
					{
						name = "Time is running out!";
						value = "SentGenTime";
					};
					class SentGenLosing //sources - ["A3_Modules_F_Events"]
					{
						name = "Stop the enemy!";
						value = "SentGenLosing";
					};
					class SentGenLost //sources - ["A3_Modules_F_Events"]
					{
						name = "Objective failed.";
						value = "SentGenLost";
					};
					class SentGenComplete //sources - ["A3_Modules_F_Events"]
					{
						name = "Objective complete.";
						value = "SentGenComplete";
					};
					class SentGenCmdSeize //sources - ["A3_Modules_F_Events"]
					{
						name = "Seize the area.";
						value = "SentGenCmdSeize";
					};
					class SentGenCmdDefend //sources - ["A3_Modules_F_Events"]
					{
						name = "Defend the location.";
						value = "SentGenCmdDefend";
					};
					class SentGenCmdRTB //sources - ["A3_Modules_F_Events"]
					{
						name = "Return back to base.";
						value = "SentGenCmdRTB";
					};
					class SentGenCmdTargetNeutralize //sources - ["A3_Modules_F_Events"]
					{
						name = "Neutralize the target.";
						value = "SentGenCmdTargetNeutralize";
					};
					class SentGenCmdTargetProtect //sources - ["A3_Modules_F_Events"]
					{
						name = "Protect the target.";
						value = "SentGenCmdTargetProtect";
					};
					class SentGenCmdTargetEscort //sources - ["A3_Modules_F_Events"]
					{
						name = "Escort the target.";
						value = "SentGenCmdTargetEscort";
					};
					class SentGenCmdTargetFind //sources - ["A3_Modules_F_Events"]
					{
						name = "Find the target.";
						value = "SentGenCmdTargetFind";
					};
					class SentGenIncoming //sources - ["A3_Modules_F_Events"]
					{
						name = "Incoming enemy fire!";
						value = "SentGenIncoming";
					};
					class SentGenBaseUnlockRespawn //sources - ["A3_Modules_F_Events"]
					{
						name = "New insertion point available.";
						value = "SentGenBaseUnlockRespawn";
					};
					class SentGenBaseUnlockVehicle //sources - ["A3_Modules_F_Events"]
					{
						name = "New vehicle deployed.";
						value = "SentGenBaseUnlockVehicle";
					};
					class SentGenBaseSideFriendlyWEST //sources - ["A3_Modules_F_Events"]
					{
						name = "BLUFOR is friendly.";
						value = "SentGenBaseSideFriendlyWEST";
					};
					class SentGenBaseSideFriendlyEAST //sources - ["A3_Modules_F_Events"]
					{
						name = "OPFOR is friendly.";
						value = "SentGenBaseSideFriendlyEAST";
					};
					class SentGenBaseSideFriendlyGUER //sources - ["A3_Modules_F_Events"]
					{
						name = "Independent forces are friendly.";
						value = "SentGenBaseSideFriendlyGUER";
					};
					class SentGenBaseSideEnemyWEST //sources - ["A3_Modules_F_Events"]
					{
						name = "BLUFOR is enemy.";
						value = "SentGenBaseSideEnemyWEST";
					};
					class SentGenBaseSideEnemyEAST //sources - ["A3_Modules_F_Events"]
					{
						name = "OPFOR is enemy.";
						value = "SentGenBaseSideEnemyEAST";
					};
					class SentGenBaseSideEnemyGUER //sources - ["A3_Modules_F_Events"]
					{
						name = "Independent forces are enemy.";
						value = "SentGenBaseSideEnemyGUER";
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Events"]
		{
			description = "Show a chat message.";
		};
	};
	class ModuleGroupID: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_GroupModifiers"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleGroupID";
		scope = 2;
		displayName = "Set Callsign";
		category = "GroupModifiers";
		function = "BIS_fnc_moduleGroupID";
		isGlobal = 0;
		isTriggerActivated = 1;
		class Arguments //sources - ["A3_Modules_F_GroupModifiers"]
		{
			class Company //sources - ["A3_Modules_F_GroupModifiers"]
			{
				displayName = "Company";
				description = "";
				class values //sources - ["A3_Modules_F_GroupModifiers"]
				{
					class CompanyAlpha //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "Alpha";
						value = "CompanyAlpha";
						default = 1;
					};
					class CompanyBravo //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "Bravo";
						value = "CompanyBravo";
					};
					class CompanyCharlie //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "Charlie";
						value = "CompanyCharlie";
					};
					class CompanyDelta //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "Delta";
						value = "CompanyDelta";
					};
					class CompanyEcho //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "Echo";
						value = "CompanyEcho";
					};
					class CompanyFoxtrot //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "Foxtrot";
						value = "CompanyFoxtrot";
					};
					class CompanyGolf //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "Golf";
						value = "CompanyGolf";
					};
					class CompanyHotel //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "Hotel";
						value = "CompanyHotel";
					};
					class CompanyIndia //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "India";
						value = "CompanyIndia";
					};
					class CompanyKilo //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "Kilo";
						value = "CompanyKilo";
					};
					class CompanyLima //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "Lima";
						value = "CompanyLima";
					};
					class CompanyMike //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "Mike";
						value = "CompanyMike";
					};
					class CompanyNovember //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "November";
						value = "CompanyNovember";
					};
					class CompanyOscar //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "Oscar";
						value = "CompanyOscar";
					};
					class CompanyPapa //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "Papa";
						value = "CompanyPapa";
					};
					class CompanyQuebec //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "Quebec";
						value = "CompanyQuebec";
					};
					class CompanyRomeo //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "Romeo";
						value = "CompanyRomeo";
					};
					class CompanySierra //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "Sierra";
						value = "CompanySierra";
					};
					class CompanyTango //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "Tango";
						value = "CompanyTango";
					};
					class CompanyUniform //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "Uniform";
						value = "CompanyUniform";
					};
					class CompanyVictor //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "Victor";
						value = "CompanyVictor";
					};
					class CompanyWhiskey //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "Whiskey";
						value = "CompanyWhiskey";
					};
					class CompanyXray //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "X-Ray";
						value = "CompanyXray";
					};
					class CompanyYankee //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "Yankee";
						value = "CompanyYankee";
					};
					class CompanyZulu //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "Zulu";
						value = "CompanyZulu";
					};
				};
			};
			class Platoon //sources - ["A3_Modules_F_GroupModifiers"]
			{
				displayName = "Platoon";
				description = "";
				class values //sources - ["A3_Modules_F_GroupModifiers"]
				{
					class Platoon1 //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "1";
						value = "Platoon1";
						default = 1;
					};
					class Platoon2 //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "2";
						value = "Platoon2";
					};
					class Platoon3 //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "3";
						value = "Platoon3";
					};
					class Platoon4 //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "4";
						value = "Platoon4";
					};
				};
			};
			class Squad //sources - ["A3_Modules_F_GroupModifiers"]
			{
				displayName = "Squad";
				description = "";
				class values //sources - ["A3_Modules_F_GroupModifiers"]
				{
					class Squad1 //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "1";
						value = "Squad1";
						default = 1;
					};
					class Squad2 //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "2";
						value = "Squad2";
					};
					class Squad3 //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "3";
						value = "Squad3";
					};
					class Squad4 //sources - ["A3_Modules_F_GroupModifiers"]
					{
						name = "4";
						value = "Squad4";
					};
				};
			};
			class Custom //sources - ["A3_Modules_F_GroupModifiers"]
			{
				displayName = "Custom callsign";
				description = "When not empty, it will replace the preset military callsign.";
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_GroupModifiers"]
		{
			description = "Assign group callsign. Each group has to have a unique callsign - assigning an existing one will remove it from the group which used it previously.";
			sync[] = {"AnyBrain"};
		};
	};
	class ModuleCombatGetIn: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_GroupModifiers"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCombatGetIn";
		scope = 2;
		displayName = "Combat Get In";
		category = "GroupModifiers";
		function = "BIS_fnc_moduleCombatGetIn";
		isGlobal = 0;
		isTriggerActivated = 1;
	};
	class HighCommand: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Hc"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "HighCommand";
		scope = 2;
		displayName = "High Command - Commander";
		icon = "\A3\modules_f\data\icon_HC_ca.paa";
		class EventHandlers //sources - ["A3_Modules_F_Hc"]
		{
			init = "if (isServer) then {if (isnil 'BIS_HC_mainscope') then {BIS_HC_mainscope = _this select 0; publicvariable 'bis_hc_mainscope'}; _ok = _this execVM '\A3\modules_f\HC\data\scripts\hc.sqf'};";
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Hc"]
		{
			description = "Set person as a high commander, giving him an ability to control whole groups.";
			sync[] = {"HighCommandSubordinate", "AnyBrain"};
			class AnyBrain: AnyBrain //inherits 5 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription/AnyBrain, sources - ["A3_Modules_F_Hc"]
			{
				description = "Commander";
			};
			class HighCommandSubordinate //sources - ["A3_Modules_F_Hc"]
			{
				duplicate = 1;
			};
		};
	};
	class HighCommandSubordinate: HighCommand //inherits 7 parameters from bin\config.bin/CfgVehicles/HighCommand, sources - ["A3_Modules_F_Hc"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "HighCommandSubordinate";
		displayName = "High Command - Subordinate";
		icon = "\A3\modules_f\data\icon_HC_sub_ca.paa";
		class EventHandlers //sources - ["A3_Modules_F_Hc"]
		{
			init = "";
		};
		class ModuleDescription: ModuleDescription //inherits 4 parameters from bin\config.bin/CfgVehicles/HighCommand/ModuleDescription, sources - ["A3_Modules_F_Hc"]
		{
			description = "Put synced groups under the high commander's control.";
			duplicate = 1;
			sync[] = {"HighCommand", "AnyBrain"};
			class AnyBrain: AnyBrain //inherits 1 parameters from bin\config.bin/CfgVehicles/HighCommand/ModuleDescription/AnyBrain, sources - ["A3_Modules_F_Hc"]
			{
				description = "Subordinate group.";
				duplicate = 1;
			};
			class HighCommand //sources - []
			{
			};
		};
	};
	class ModuleSkiptime_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Intel"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleSkiptime_F";
		scope = 2;
		scopeCurator = 2;
		icon = "\a3\Modules_F_Curator\Data\iconSkiptime_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitSkiptime_ca.paa";
		curatorInfoType = "RscDisplayAttributesModuleSkiptime";
		displayName = "Skip time";
		category = "Environment";
		isGlobal = 0;
		isTriggerActivated = 1;
		function = "BIS_fnc_moduleSkiptime";
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Intel"]
		{
			class Skiptime: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Intel"]
			{
				property = "ModuleSkiptime_F_Skiptime";
				displayName = "Skip hours";
				tooltip = "Amount of hours which will be skipped";
				control = "EditShort";
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments //sources - ["A3_Modules_F_Intel"]
		{
			class skiptime //sources - ["A3_Modules_F_Intel"]
			{
				displayName = "Skip hours";
				description = "Amount of hours which will be skipped";
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Intel"]
		{
			description = "Skip mission time.";
		};
	};
	class ModuleTaskCreate_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Intel"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleTaskCreate_F";
		scope = 2;
		displayName = "Create Task";
		category = "Intel";
		icon = "\a3\Modules_F\Data\iconTaskCreate_ca.paa";
		function = "BIS_fnc_ModuleTaskCreate";
		isTriggerActivated = 1;
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Intel"]
		{
			class Owner: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_Intel"]
			{
				property = "ModuleTaskCreate_F_Owner";
				displayName = "Owner";
				typeName = "NUMBER";
				defaultValue = 1;
				class values //sources - ["A3_Modules_F_Intel"]
				{
					class Unit //sources - ["A3_Modules_F_Intel"]
					{
						name = "Synchronized objects only";
						value = 0;
					};
					class Group //sources - ["A3_Modules_F_Intel"]
					{
						name = "Groups of synchronized objects";
						value = 1;
						default = 1;
					};
					class Side //sources - ["A3_Modules_F_Intel"]
					{
						name = "Sides of synchronized units";
						value = 2;
					};
					class All //sources - ["A3_Modules_F_Intel"]
					{
						name = "All playable units";
						value = 3;
					};
					class West //sources - ["A3_Modules_F_Intel"]
					{
						name = "BLUFOR";
						value = 4;
					};
					class East //sources - ["A3_Modules_F_Intel"]
					{
						name = "OPFOR";
						value = 5;
					};
					class Guer //sources - ["A3_Modules_F_Intel"]
					{
						name = "Independent";
						value = 6;
					};
					class Civ //sources - ["A3_Modules_F_Intel"]
					{
						name = "Civilian";
						value = 7;
					};
				};
			};
			class ID: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Intel"]
			{
				property = "ModuleTaskCreate_F_ID";
				displayName = "Task ID";
				tooltip = "Unique task ID used to refer to this task. When empty, module variable name will be used. If even that one is undefined, generic name will be used by default.";
				control = "EditShort";
			};
			class IDParent: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Intel"]
			{
				property = "ModuleTaskCreate_F_IDParent";
				displayName = "Parent Task ID";
				tooltip = "ID of the parent task. When empty, the task will have no parent and will be shown in root.";
				control = "EditShort";
			};
			class Title: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Intel"]
			{
				property = "ModuleTaskCreate_F_Title";
				displayName = "Title";
				tooltip = "";
				isLocalized = 1;
			};
			class Description: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Intel"]
			{
				property = "ModuleTaskCreate_F_Description";
				displayName = "Description";
				tooltip = "";
				control = "EditMulti5";
				isLocalized = 1;
			};
			class Marker: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Intel"]
			{
				property = "ModuleTaskCreate_F_Marker";
				displayName = "Marker";
				tooltip = "";
				isLocalized = 1;
			};
			class Destination: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_Intel"]
			{
				property = "ModuleTaskCreate_F_Destination";
				displayName = "Destination";
				tooltip = "";
				typeName = "NUMBER";
				defaultValue = 1;
				class Values //sources - ["A3_Modules_F_Intel"]
				{
					class Disabled //sources - ["A3_Modules_F_Intel"]
					{
						name = "Disabled";
						value = 0;
					};
					class Module //sources - ["A3_Modules_F_Intel"]
					{
						name = "Module position";
						value = 1;
						default = 1;
					};
					class Sync //sources - ["A3_Modules_F_Intel"]
					{
						name = "Synchronized object";
						value = 2;
					};
				};
			};
			class State: Default //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Default, sources - ["A3_Modules_F_Intel"]
			{
				property = "ModuleTaskCreate_F_State";
				displayName = "State";
				tooltip = "";
				defaultValue = "'CREATED'";
				control = "TaskStates";
			};
			class Type: Default //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Default, sources - ["A3_Modules_F_Intel"]
			{
				property = "ModuleTaskCreate_F_Type";
				displayName = "Task Type";
				tooltip = "Fill in a task type to give the task a specific icon. For the list of default task types, see the community wiki topic named 'Tasks Overhaul'.";
				control = "TaskTypes";
				defaultValue = "'Default'";
			};
			class AlwaysVisible: CheckboxNumber //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/CheckboxNumber, sources - ["A3_Modules_F_Intel"]
			{
				property = "ModuleTaskCreate_F_AlwaysVisible";
				displayName = "Always Visible";
				tooltip = "By default, the task is visible only when assigned. If this setting is enabled, the task will show even when it is not assigned.";
				typeName = "NUMBER";
				defaultValue = 0;
			};
			class ShowNotification: CheckboxNumber //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/CheckboxNumber, sources - ["A3_Modules_F_Intel"]
			{
				property = "ModuleTaskCreate_F_ShowNotification";
				displayName = "Show Notification";
				tooltip = "";
				typeName = "NUMBER";
				defaultValue = 1;
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments //sources - ["A3_Modules_F_Intel"]
		{
			class Owner //sources - ["A3_Modules_F_Intel"]
			{
				displayName = "Owner";
				description = "";
				typeName = "NUMBER";
				class values //sources - ["A3_Modules_F_Intel"]
				{
					class Unit //sources - ["A3_Modules_F_Intel"]
					{
						name = "Synchronized objects only";
						value = 0;
					};
					class Group //sources - ["A3_Modules_F_Intel"]
					{
						name = "Groups of synchronized objects";
						value = 1;
						default = 1;
					};
					class Side //sources - ["A3_Modules_F_Intel"]
					{
						name = "Sides of synchronized units";
						value = 2;
					};
					class All //sources - ["A3_Modules_F_Intel"]
					{
						name = "All playable units";
						value = 3;
					};
					class West //sources - ["A3_Modules_F_Intel"]
					{
						name = "BLUFOR";
						value = 4;
					};
					class East //sources - ["A3_Modules_F_Intel"]
					{
						name = "OPFOR";
						value = 5;
					};
					class Guer //sources - ["A3_Modules_F_Intel"]
					{
						name = "Independent";
						value = 6;
					};
					class Civ //sources - ["A3_Modules_F_Intel"]
					{
						name = "Civilian";
						value = 7;
					};
				};
			};
			class ID //sources - ["A3_Modules_F_Intel"]
			{
				displayName = "Task ID";
				description = "Unique task ID used to refer to this task. When empty, module variable name will be used. If even that one is undefined, generic name will be used by default.";
			};
			class Title //sources - ["A3_Modules_F_Intel"]
			{
				displayName = "Title";
				description = "";
			};
			class Description //sources - ["A3_Modules_F_Intel"]
			{
				displayName = "Description";
				description = "";
			};
			class Marker //sources - ["A3_Modules_F_Intel"]
			{
				displayName = "Marker";
				description = "";
			};
			class Destination //sources - ["A3_Modules_F_Intel"]
			{
				displayName = "Destination";
				description = "";
				typeName = "NUMBER";
				class Values //sources - ["A3_Modules_F_Intel"]
				{
					class Disabled //sources - ["A3_Modules_F_Intel"]
					{
						name = "Disabled";
						value = 0;
					};
					class Module //sources - ["A3_Modules_F_Intel"]
					{
						name = "Module position";
						value = 1;
						default = 1;
					};
				};
			};
			class State //sources - ["A3_Modules_F_Intel"]
			{
				displayName = "State";
				description = "";
				class Values //sources - ["A3_Modules_F_Intel"]
				{
					class Created //sources - ["A3_Modules_F_Intel"]
					{
						name = "Created";
						value = "CREATED";
						default = 1;
					};
					class Assigned //sources - ["A3_Modules_F_Intel"]
					{
						name = "Assigned";
						value = "ASSIGNED";
					};
					class Succeeded //sources - ["A3_Modules_F_Intel"]
					{
						name = "Succeeded";
						value = "SUCCEEDED";
					};
					class Failed //sources - ["A3_Modules_F_Intel"]
					{
						name = "Failed";
						value = "FAILED";
					};
					class Canceled //sources - ["A3_Modules_F_Intel"]
					{
						name = "Canceled";
						value = "CANCELED";
					};
				};
			};
			class Type //sources - ["A3_Modules_F_Intel"]
			{
				displayName = "Task Type";
				description = "Fill in a task type to give the task a specific icon. For the list of default task types, see the community wiki topic named 'Tasks Overhaul'.";
			};
			class AlwaysVisible //sources - ["A3_Modules_F_Intel"]
			{
				displayName = "Always Visible";
				description = "By default, the task is visible only when assigned. If this setting is enabled, the task will show even when it is not assigned.";
				typeName = "NUMBER";
				class Values //sources - ["A3_Modules_F_Intel"]
				{
					class Disabled //sources - ["A3_Modules_F_Intel"]
					{
						name = "Disabled";
						value = 0;
						default = 1;
					};
					class Enabled //sources - ["A3_Modules_F_Intel"]
					{
						name = "Enabled";
						value = 1;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Intel"]
		{
			description = "Add a task to synced objects or to larger pool of units.";
			sync[] = {"AnyBrain"};
			class AnyBrain: AnyBrain //inherits 5 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription/AnyBrain, sources - ["A3_Modules_F_Intel"]
			{
				optional = 1;
			};
		};
	};
	class ModuleTaskSetDescription_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Intel"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleTaskSetDescription_F";
		scope = 2;
		displayName = "Set Task Description";
		category = "Intel";
		icon = "\a3\Modules_F\Data\iconTaskSetDescription_ca.paa";
		function = "BIS_fnc_ModuleTaskSetDescription";
		functionPriority = 1;
		isTriggerActivated = 1;
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Intel"]
		{
			class Title: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Intel"]
			{
				property = "ModuleTaskSetDescription_F_Title";
				displayName = "Title";
				tooltip = "";
				isLocalized = 1;
			};
			class Description: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Intel"]
			{
				property = "ModuleTaskSetDescription_F_Description";
				displayName = "Description";
				tooltip = "";
				control = "EditMulti5";
				isLocalized = 1;
			};
			class Marker: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Intel"]
			{
				property = "ModuleTaskSetDescription_F_Marker";
				displayName = "Marker";
				tooltip = "";
				isLocalized = 1;
			};
			class ShowNotification: CheckboxNumber //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/CheckboxNumber, sources - ["A3_Modules_F_Intel"]
			{
				property = "ModuleTaskSetDescription_F_ShowNotification";
				displayName = "Show Notification";
				tooltip = "";
				typeName = "NUMBER";
				defaultValue = 1;
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments //sources - ["A3_Modules_F_Intel"]
		{
			class Title //sources - ["A3_Modules_F_Intel"]
			{
				displayName = "Title";
				description = "";
			};
			class Description //sources - ["A3_Modules_F_Intel"]
			{
				displayName = "Description";
				description = "";
			};
			class Marker //sources - ["A3_Modules_F_Intel"]
			{
				displayName = "Marker";
				description = "";
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Intel"]
		{
			description = "Set task description.";
			sync[] = {"ModuleTaskCreate_F"};
			class ModuleTaskCreate_F //sources - ["A3_Modules_F_Intel"]
			{
				description = "Affected task.";
			};
		};
	};
	class ModuleTaskSetDestination_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Intel"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleTaskSetDestination_F";
		scope = 2;
		displayName = "Set Task Destination";
		category = "Intel";
		icon = "\a3\Modules_F\Data\iconTaskSetDestination_ca.paa";
		function = "BIS_fnc_ModuleTaskSetDestination";
		functionPriority = 1;
		isTriggerActivated = 1;
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Intel"]
		{
			class Destination: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_Intel"]
			{
				property = "ModuleTaskSetDestination_F_Destination";
				displayName = "Destination";
				tooltip = "";
				defaultValue = "0";
				class Values //sources - ["A3_Modules_F_Intel"]
				{
					class Module //sources - ["A3_Modules_F_Intel"]
					{
						name = "Module position";
						value = 0;
						default = 1;
					};
					class Unit //sources - ["A3_Modules_F_Intel"]
					{
						name = "Synchronized object";
						value = 1;
					};
				};
			};
			class ShowNotification: CheckboxNumber //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/CheckboxNumber, sources - ["A3_Modules_F_Intel"]
			{
				property = "ModuleTaskSetDestination_F_ShowNotification";
				displayName = "Show Notification";
				tooltip = "";
				typeName = "NUMBER";
				defaultValue = 1;
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments //sources - ["A3_Modules_F_Intel"]
		{
			class Destination //sources - ["A3_Modules_F_Intel"]
			{
				displayName = "Destination";
				description = "";
				class Values //sources - ["A3_Modules_F_Intel"]
				{
					class Module //sources - ["A3_Modules_F_Intel"]
					{
						name = "Module position";
						value = 0;
						default = 1;
					};
					class Unit //sources - ["A3_Modules_F_Intel"]
					{
						name = "Synchronized object";
						value = 1;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Intel"]
		{
			position = 1;
			description = "Set task destination.";
			sync[] = {"ModuleTaskCreate_F", "Anything"};
			class ModuleTaskCreate_F //sources - ["A3_Modules_F_Intel"]
			{
				description = "Affected task.";
			};
			class Anything //sources - ["A3_Modules_F_Intel"]
			{
				optional = 1;
			};
		};
	};
	class ModuleTaskSetState_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Intel"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleTaskSetState_F";
		scope = 2;
		displayName = "Set Task State";
		category = "Intel";
		icon = "\a3\Modules_F\Data\iconTaskSetState_ca.paa";
		function = "BIS_fnc_ModuleTaskSetState";
		functionPriority = 1;
		isTriggerActivated = 1;
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Intel"]
		{
			class State: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_Intel"]
			{
				property = "ModuleTaskSetState_F_State";
				displayName = "State";
				tooltip = "";
				defaultValue = "'CREATED'";
				control = "TaskStates";
			};
			class ShowNotification: CheckboxNumber //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/CheckboxNumber, sources - ["A3_Modules_F_Intel"]
			{
				property = "ModuleTaskSetState_F_ShowNotification";
				displayName = "Show Notification";
				tooltip = "";
				typeName = "NUMBER";
				defaultValue = 1;
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments //sources - ["A3_Modules_F_Intel"]
		{
			class State //sources - ["A3_Modules_F_Intel"]
			{
				displayName = "State";
				description = "";
				class Values //sources - ["A3_Modules_F_Intel"]
				{
					class Created //sources - ["A3_Modules_F_Intel"]
					{
						name = "Created";
						value = "CREATED";
						default = 1;
					};
					class Assigned //sources - ["A3_Modules_F_Intel"]
					{
						name = "Assigned";
						value = "ASSIGNED";
					};
					class Succeeded //sources - ["A3_Modules_F_Intel"]
					{
						name = "Succeeded";
						value = "SUCCEEDED";
					};
					class Failed //sources - ["A3_Modules_F_Intel"]
					{
						name = "Failed";
						value = "FAILED";
					};
					class Canceled //sources - ["A3_Modules_F_Intel"]
					{
						name = "Canceled";
						value = "CANCELED";
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Intel"]
		{
			description = "Set task state.";
			sync[] = {"ModuleTaskCreate_F"};
			class ModuleTaskCreate_F //sources - ["A3_Modules_F_Intel"]
			{
				description = "Affected task.";
			};
		};
	};
	class ModuleCreateDiaryRecord_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Intel"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCreateDiaryRecord_F";
		scope = 2;
		displayName = "Create Diary Record";
		category = "Intel";
		function = "BIS_fnc_moduleCreateDiaryRecord";
		isGlobal = 1;
		isTriggerActivated = 1;
		isPersistent = 1;
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Intel"]
		{
			class Owner: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_Intel"]
			{
				property = "ModuleCreateDiaryRecord_F_Owner";
				displayName = "Owner";
				tooltip = "";
				typeName = "NUMBER";
				defaultValue = 1;
				class values //sources - ["A3_Modules_F_Intel"]
				{
					class Unit //sources - ["A3_Modules_F_Intel"]
					{
						name = "Synchronized objects only";
						value = 0;
					};
					class Group //sources - ["A3_Modules_F_Intel"]
					{
						name = "Groups of synchronized objects";
						value = 1;
						default = 1;
					};
					class Side //sources - ["A3_Modules_F_Intel"]
					{
						name = "Sides of synchronized units";
						value = 2;
					};
					class All //sources - ["A3_Modules_F_Intel"]
					{
						name = "All playable units";
						value = 3;
					};
				};
			};
			class Subject: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Intel"]
			{
				property = "ModuleCreateDiaryRecord_F_Subject";
				displayName = "Subject";
				tooltip = "When empty, record will be placed in default 'Briefing' subject";
				isLocalized = 1;
			};
			class PresetTitle: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_Intel"]
			{
				property = "ModuleCreateDiaryRecord_F_PresetTitle";
				displayName = "Preset Title";
				tooltip = "";
				defaultValue = "'Situation'";
				class values //sources - ["A3_Modules_F_Intel"]
				{
					class Situation //sources - ["A3_Modules_F_Intel"]
					{
						name = "Situation";
						value = "Situation";
						default = 1;
					};
					class Mission //sources - ["A3_Modules_F_Intel"]
					{
						name = "Mission";
						value = "Mission";
					};
					class Execution //sources - ["A3_Modules_F_Intel"]
					{
						name = "Execution";
						value = "Execution";
					};
					class Signal //sources - ["A3_Modules_F_Intel"]
					{
						name = "Signal";
						value = "Signal";
					};
				};
			};
			class Title: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Intel"]
			{
				property = "ModuleCreateDiaryRecord_F_Title";
				displayName = "Title";
				tooltip = "Custom title, will replace the preset title.";
				isLocalized = 1;
			};
			class Description: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Intel"]
			{
				property = "ModuleCreateDiaryRecord_F_Description";
				displayName = "Description";
				tooltip = "";
				control = "EditMulti5";
				isLocalized = 1;
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments //sources - ["A3_Modules_F_Intel"]
		{
			class Owner //sources - ["A3_Modules_F_Intel"]
			{
				displayName = "Owner";
				description = "";
				typeName = "NUMBER";
				class values //sources - ["A3_Modules_F_Intel"]
				{
					class Unit //sources - ["A3_Modules_F_Intel"]
					{
						name = "Synchronized objects only";
						value = 0;
					};
					class Group //sources - ["A3_Modules_F_Intel"]
					{
						name = "Groups of synchronized objects";
						value = 1;
						default = 1;
					};
					class Side //sources - ["A3_Modules_F_Intel"]
					{
						name = "Sides of synchronized units";
						value = 2;
					};
					class All //sources - ["A3_Modules_F_Intel"]
					{
						name = "All playable units";
						value = 3;
					};
				};
			};
			class Subject //sources - ["A3_Modules_F_Intel"]
			{
				displayName = "Subject";
				description = "When empty, record will be placed in default 'Briefing' subject";
			};
			class PresetTitle //sources - ["A3_Modules_F_Intel"]
			{
				displayName = "Preset Title";
				description = "";
				class values //sources - ["A3_Modules_F_Intel"]
				{
					class Situation //sources - ["A3_Modules_F_Intel"]
					{
						name = "Situation";
						value = "Situation";
						default = 1;
					};
					class Mission //sources - ["A3_Modules_F_Intel"]
					{
						name = "Mission";
						value = "Mission";
					};
					class Execution //sources - ["A3_Modules_F_Intel"]
					{
						name = "Execution";
						value = "Execution";
					};
					class Signal //sources - ["A3_Modules_F_Intel"]
					{
						name = "Signal";
						value = "Signal";
					};
				};
			};
			class Title //sources - ["A3_Modules_F_Intel"]
			{
				displayName = "Title";
				description = "Custom title, will replace the preset title.";
			};
			class Description //sources - ["A3_Modules_F_Intel"]
			{
				displayName = "Description";
				description = "";
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Intel"]
		{
			description = "Create a diary record for synced objects or for larger a pool of units.";
			sync[] = {"AnyBrain"};
			class AnyBrain: AnyBrain //inherits 5 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription/AnyBrain, sources - ["A3_Modules_F_Intel"]
			{
				optional = 1;
			};
		};
	};
	class ModuleHQ_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Intel"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleHQ_F";
		scope = 2;
		displayName = "Headquarters Entity";
		category = "Intel";
		icon = "\a3\Modules_f\data\iconHQ_ca.paa";
		portrait = "\a3\Modules_f\data\portraitHQ_ca.paa";
		function = "BIS_fnc_moduleHQ";
		isGlobal = 1;
		isTriggerActivated = 0;
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Intel"]
		{
			class Side: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_Intel"]
			{
				property = "ModuleHQ_F_Side";
				displayName = "Side";
				tooltip = "";
				defaultValue = 1;
				class values //sources - ["A3_Modules_F_Intel"]
				{
					class BLUFOR //sources - ["A3_Modules_F_Intel"]
					{
						name = "BLUFOR";
						value = 1;
						default = 1;
					};
					class OPFOR //sources - ["A3_Modules_F_Intel"]
					{
						name = "OPFOR";
						value = 0;
					};
					class Resistance //sources - ["A3_Modules_F_Intel"]
					{
						name = "Independent";
						value = 2;
					};
					class Civilian //sources - ["A3_Modules_F_Intel"]
					{
						name = "Civilian";
						value = 3;
					};
				};
			};
			class Callsign: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_Intel"]
			{
				property = "ModuleHQ_F_Callsign";
				displayName = "Callsign";
				tooltip = "";
				defaultValue = "'STR_A3_CfgHQIdentities_Base_0'";
				class values //sources - ["A3_Modules_F_Intel"]
				{
					class Base //sources - ["A3_Modules_F_Intel"]
					{
						name = "Base";
						value = "STR_A3_CfgHQIdentities_Base_0";
						default = 1;
					};
					class BLU //sources - ["A3_Modules_F_Intel"]
					{
						name = "NATO";
						value = "STR_A3_CfgHQIdentities_BLU_0";
					};
					class OPF //sources - ["A3_Modules_F_Intel"]
					{
						name = "CSAT";
						value = "STR_A3_CfgHQIdentities_OPF_0";
					};
					class IND //sources - ["A3_Modules_F_Intel"]
					{
						name = "AAF";
						value = "STR_A3_CfgHQIdentities_IND_0";
					};
					class IND_G //sources - ["A3_Modules_F_Intel"]
					{
						name = "FIA";
						value = "STR_A3_CfgHQIdentities_IND_G_0";
					};
				};
			};
			class CallsignCustom: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Intel"]
			{
				property = "ModuleHQ_F_CallsignCustom";
				displayName = "Custom callsign";
				tooltip = "When defined, it will replace the pre-set callsign.";
				isLocalized = 1;
			};
			class Identity: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_Intel"]
			{
				property = "ModuleHQ_F_Identity";
				displayName = "Speaker:";
				tooltip = "";
				typeName = "NUMBER";
				defaultValue = 0;
				class values //sources - ["A3_Modules_F_Intel"]
				{
					class Male01 //sources - ["A3_Modules_F_Intel"]
					{
						name = "Type 01";
						value = 0;
						default = 1;
					};
					class Male02 //sources - ["A3_Modules_F_Intel"]
					{
						name = "Type 02";
						value = 1;
					};
					class Male03 //sources - ["A3_Modules_F_Intel"]
					{
						name = "Type 03";
						value = 2;
					};
					class Male04 //sources - ["A3_Modules_F_Intel"]
					{
						name = "Type 04";
						value = 3;
					};
				};
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments //sources - ["A3_Modules_F_Intel"]
		{
			class Side //sources - ["A3_Modules_F_Intel"]
			{
				displayName = "Side";
				description = "";
				class values //sources - ["A3_Modules_F_Intel"]
				{
					class BLUFOR //sources - ["A3_Modules_F_Intel"]
					{
						name = "BLUFOR";
						value = 1;
						default = 1;
					};
					class OPFOR //sources - ["A3_Modules_F_Intel"]
					{
						name = "OPFOR";
						value = 0;
					};
					class Resistance //sources - ["A3_Modules_F_Intel"]
					{
						name = "Independent";
						value = 2;
					};
					class Civilian //sources - ["A3_Modules_F_Intel"]
					{
						name = "Civilian";
						value = 3;
					};
				};
			};
			class Callsign //sources - ["A3_Modules_F_Intel"]
			{
				displayName = "Callsign";
				description = "";
				class values //sources - ["A3_Modules_F_Intel"]
				{
					class Base //sources - ["A3_Modules_F_Intel"]
					{
						name = "Base";
						value = "STR_A3_CfgHQIdentities_Base_0";
						default = 1;
					};
					class BLU //sources - ["A3_Modules_F_Intel"]
					{
						name = "NATO";
						value = "STR_A3_CfgHQIdentities_BLU_0";
					};
					class OPF //sources - ["A3_Modules_F_Intel"]
					{
						name = "CSAT";
						value = "STR_A3_CfgHQIdentities_OPF_0";
					};
					class IND //sources - ["A3_Modules_F_Intel"]
					{
						name = "AAF";
						value = "STR_A3_CfgHQIdentities_IND_0";
					};
					class IND_G //sources - ["A3_Modules_F_Intel"]
					{
						name = "FIA";
						value = "STR_A3_CfgHQIdentities_IND_G_0";
					};
				};
			};
			class CallsignCustom //sources - ["A3_Modules_F_Intel"]
			{
				displayName = "Custom callsign";
				description = "When defined, it will replace the pre-set callsign.";
			};
			class Identity //sources - ["A3_Modules_F_Intel"]
			{
				displayName = "Speaker:";
				description = "";
				typeName = "NUMBER";
				class values //sources - ["A3_Modules_F_Intel"]
				{
					class Male01 //sources - ["A3_Modules_F_Intel"]
					{
						name = "Type 01";
						value = 0;
						default = 1;
					};
					class Male02 //sources - ["A3_Modules_F_Intel"]
					{
						name = "Type 02";
						value = 1;
					};
					class Male03 //sources - ["A3_Modules_F_Intel"]
					{
						name = "Type 03";
						value = 2;
					};
					class Male04 //sources - ["A3_Modules_F_Intel"]
					{
						name = "Type 04";
						value = 3;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Intel"]
		{
			description = "Virtual headquarters unit which can be used for playing radio messages.";
		};
	};
	class ModuleLiveFeedBase_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_LiveFeed"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleLiveFeedBase_F";
		scope = 1;
	};
	class ModuleLiveFeedEffects_F: ModuleLiveFeedBase_F //inherits 3 parameters from bin\config.bin/CfgVehicles/ModuleLiveFeedBase_F, sources - ["A3_Modules_F_LiveFeed"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleLiveFeedEffects_F";
		scope = 2;
		displayName = "Live Feed - Effects";
		function = "BIS_fnc_liveFeedModuleEffects";
		isGlobal = 1;
		class Arguments //sources - ["A3_Modules_F_LiveFeed"]
		{
			class EffectMode //sources - ["A3_Modules_F_LiveFeed"]
			{
				displayName = "Effect Mode:";
				class Values //sources - ["A3_Modules_F_LiveFeed"]
				{
					class None //sources - ["A3_Modules_F_LiveFeed"]
					{
						name = "None";
						value = -1;
					};
					class Normal //sources - ["A3_Modules_F_LiveFeed"]
					{
						name = "Normal";
						value = 0;
						default = 1;
					};
					class NightVision //sources - ["A3_Modules_F_LiveFeed"]
					{
						name = "Night Vision";
						value = 1;
					};
					class ThermalImaging //sources - ["A3_Modules_F_LiveFeed"]
					{
						name = "Thermal Imaging";
						value = 2;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_LiveFeed"]
		{
			description = "Add screen effects to your live feed, such as night or thermal vision.";
			duplicate = 1;
			sync[] = {"ModuleLiveFeedInit_F"};
			class ModuleLiveFeedInit_F //sources - ["A3_Modules_F_LiveFeed"]
			{
				description = "The selected screen effects will be applied to this live feed.";
			};
		};
	};
	class ModuleLiveFeedInit_F: ModuleLiveFeedBase_F //inherits 3 parameters from bin\config.bin/CfgVehicles/ModuleLiveFeedBase_F, sources - ["A3_Modules_F_LiveFeed"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleLiveFeedInit_F";
		scope = 2;
		displayName = "Live Feed - Init";
		function = "BIS_fnc_liveFeedModuleInit";
		isGlobal = 1;
		isTriggerActivated = 1;
		class Arguments: ArgumentsBaseUnits //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits, sources - ["A3_Modules_F_LiveFeed"]
		{
			class Units: Units //inherits 3 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits/Units, sources - []
			{
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_LiveFeed"]
		{
			description = "Initialize the live feed. Use the other live feed modules to adjust its parameters.";
		};
	};
	class ModuleLiveFeedSetSource_F: ModuleLiveFeedBase_F //inherits 3 parameters from bin\config.bin/CfgVehicles/ModuleLiveFeedBase_F, sources - ["A3_Modules_F_LiveFeed"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleLiveFeedSetSource_F";
		scope = 2;
		displayName = "Live Feed - Set Source";
		function = "BIS_fnc_liveFeedModuleSetSource";
		isGlobal = 1;
		isTriggerActivated = 1;
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_LiveFeed"]
		{
			description = "Set which unit is broadcasting the live feed.";
			duplicate = 1;
			sync[] = {"Anything", "ModuleLiveFeedInit_F"};
			class ModuleLiveFeedInit_F //sources - ["A3_Modules_F_LiveFeed"]
			{
				description = "The selected unit will become the broadcaster of this live feed.";
			};
		};
	};
	class ModuleLiveFeedSetTarget_F: ModuleLiveFeedBase_F //inherits 3 parameters from bin\config.bin/CfgVehicles/ModuleLiveFeedBase_F, sources - ["A3_Modules_F_LiveFeed"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleLiveFeedSetTarget_F";
		scope = 2;
		displayName = "Live Feed - Set Target";
		function = "BIS_fnc_liveFeedModuleSetTarget";
		isGlobal = 0;
		isTriggerActivated = 1;
		class Arguments //sources - ["A3_Modules_F_LiveFeed"]
		{
			class TargetType //sources - ["A3_Modules_F_LiveFeed"]
			{
				displayName = "Target Type";
				class Values //sources - ["A3_Modules_F_LiveFeed"]
				{
					class Object //sources - ["A3_Modules_F_LiveFeed"]
					{
						name = "Synchronized object";
						value = 0;
						default = 1;
					};
					class Module //sources - ["A3_Modules_F_LiveFeed"]
					{
						name = "Module position";
						value = 1;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_LiveFeed"]
		{
			description = "Set the target of the live feed.";
			position = 1;
			duplicate = 1;
			sync[] = {"Anything", "ModuleLiveFeedInit_F"};
			class ModuleLiveFeedInit_F //sources - ["A3_Modules_F_LiveFeed"]
			{
				description = "The selected vehicle or defined position will become the target of this live feed.";
			};
		};
	};
	class ModuleLiveFeedTerminate_F: ModuleLiveFeedBase_F //inherits 3 parameters from bin\config.bin/CfgVehicles/ModuleLiveFeedBase_F, sources - ["A3_Modules_F_LiveFeed"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleLiveFeedTerminate_F";
		scope = 2;
		displayName = "Live Feed - Terminate";
		function = "BIS_fnc_liveFeedTerminate";
		isGlobal = 1;
		isTriggerActivated = 1;
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_LiveFeed"]
		{
			description = "Terminate the live feed.";
			sync[] = {"ModuleLiveFeedInit_F"};
			class ModuleLiveFeedInit_F //sources - ["A3_Modules_F_LiveFeed"]
			{
				description = "This will be the live feed that is terminated.";
			};
		};
	};
	class MartaManager: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Marta"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "MartaManager";
		scope = 2;
		displayName = "Military Symbols";
		icon = "\A3\modules_f\data\icon_MARTA_ca.paa";
		class EventHandlers //sources - ["A3_Modules_F_Marta"]
		{
			init = "if (isnil 'BIS_marta_mainscope') then {BIS_marta_mainscope = _this select 0; if (isServer) then {private [""""_ok""""];_ok = _this execVM """"A3\modules_f\marta\data\scripts\main.sqf""""}};";
		};
	};
	class ModuleZoneRestriction_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Misc"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleZoneRestriction_F";
		scope = 2;
		displayName = "Zone Restriction";
		function = "BIS_fnc_moduleZoneRestriction";
		isGlobal = 2;
		class Arguments: ArgumentsBaseUnits //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits, sources - ["A3_Modules_F_Misc"]
		{
			class Units //sources - ["A3_Modules_F_Misc"]
			{
				displayName = "Apply to";
				description = "";
				class values //sources - ["A3_Modules_F_Misc"]
				{
					class Objects //sources - ["A3_Modules_F_Misc"]
					{
						name = "Synchronized objects only";
						value = 0;
					};
					class ObjectsAndGroups //sources - ["A3_Modules_F_Misc"]
					{
						name = "Groups of synchronized objects";
						value = 1;
						default = 1;
					};
				};
			};
			class Inverse //sources - ["A3_Modules_F_Misc"]
			{
				displayName = "Inverse border:";
				description = "An inverse border requires you to be outside of it.";
				typeName = "BOOL";
				class Values //sources - ["A3_Modules_F_Misc"]
				{
					class Yes //sources - ["A3_Modules_F_Misc"]
					{
						name = "Yes";
						value = 1;
					};
					class No //sources - ["A3_Modules_F_Misc"]
					{
						name = "No";
						value = 0;
						default = 1;
					};
				};
			};
			class WarningTime //sources - ["A3_Modules_F_Misc"]
			{
				displayName = "Warning time:";
				description = "Time given to vacate the restricted area.";
				typeName = "NUMBER";
				defaultValue = 10;
			};
			class CustomEffectWarning //sources - ["A3_Modules_F_Misc"]
			{
				displayName = "Custom warning:";
				description = "Piece of code that is executed (affected unit: _this).";
				typeName = "STRING";
				defaultValue = "";
			};
			class CustomEffectPunishment //sources - ["A3_Modules_F_Misc"]
			{
				displayName = "Custom punishment:";
				description = "Piece of code that is executed (affected unit: _this).";
				typeName = "STRING";
				defaultValue = "";
			};
			class AirExcluded //sources - ["A3_Modules_F_Misc"]
			{
				displayName = "Exclude air units:";
				description = "";
				typeName = "BOOL";
				class Values //sources - ["A3_Modules_F_Misc"]
				{
					class Yes //sources - ["A3_Modules_F_Misc"]
					{
						name = "Yes";
						value = 1;
						default = 1;
					};
					class No //sources - ["A3_Modules_F_Misc"]
					{
						name = "No";
						value = 0;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Misc"]
		{
			description = "Set punishment for leaving the Area of Operation.";
		};
	};
	class ModuleTrident_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Misc"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleTrident_F";
		scope = 2;
		displayName = "Trident";
		function = "BIS_fnc_moduleTrident";
		isGlobal = 0;
		isPersistent = 0;
		class Arguments //sources - ["A3_Modules_F_Misc"]
		{
			class SideA //sources - ["A3_Modules_F_Misc"]
			{
				displayName = "Side A";
				description = "";
				class values //sources - ["A3_Modules_F_Misc"]
				{
					class BLUFOR //sources - ["A3_Modules_F_Misc"]
					{
						name = "BLUFOR";
						value = 1;
						default = 1;
					};
					class OPFOR //sources - ["A3_Modules_F_Misc"]
					{
						name = "OPFOR";
						value = 0;
					};
					class Resistance //sources - ["A3_Modules_F_Misc"]
					{
						name = "Independent";
						value = 2;
					};
				};
			};
			class SideB //sources - ["A3_Modules_F_Misc"]
			{
				displayName = "Side B";
				description = "";
				class values //sources - ["A3_Modules_F_Misc"]
				{
					class BLUFOR //sources - ["A3_Modules_F_Misc"]
					{
						name = "BLUFOR";
						value = 1;
					};
					class OPFOR //sources - ["A3_Modules_F_Misc"]
					{
						name = "OPFOR";
						value = 0;
					};
					class Resistance //sources - ["A3_Modules_F_Misc"]
					{
						name = "Independent";
						value = 2;
						default = 1;
					};
				};
			};
			class Description //sources - ["A3_Modules_F_Misc"]
			{
				displayName = "Description";
				description = "Briefing description of relations between the two sides. Use %1 to insert the name of the competing side.";
				defaultValue = "";
			};
			class Decay //sources - ["A3_Modules_F_Misc"]
			{
				displayName = "Decay speed";
				description = "How fast the relationship will return back to normal.";
				defaultValue = "0.02";
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Misc"]
		{
			description = "Set diplomacy options. When involved sides start killing each other, they won't be punished by a negative rating. Once too many kills are reached, the sides will turn hostile.";
		};
	};
	class ModuleCuratorUnlockObject_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Misc"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCuratorUnlockObject_F";
		scope = 2;
		displayName = "Unlock Object";
		function = "BIS_fnc_moduleUnlockObject";
		functionPriority = 2;
		isGlobal = 0;
		isPersistent = 0;
		isTriggerActivated = 1;
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Misc"]
		{
			description = "Unlock addons of synced objects for the curator. E.g., when synced to a BLUFOR soldier, all BLUFOR soldiers will be unlocked, because they belong to the same addon.";
			synced[] = {"Anything", "Curator_F"};
		};
	};
	class ModuleCuratorUnlockArea_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Misc"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCuratorUnlockArea_F";
		scope = 2;
		displayName = "Unlock Area";
		function = "BIS_fnc_moduleUnlockArea";
		functionPriority = 2;
		isGlobal = 0;
		isPersistent = 0;
		isTriggerActivated = 1;
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Misc"]
		{
			description = "Unlock area for curator unit spawning.";
			synced[] = {"EmptyDetector", "Curator_F"};
		};
	};
	class ModuleFriendlyFire_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Misc"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleFriendlyFire_F";
		scope = 2;
		displayName = "Friendly Fire";
		function = "BIS_fnc_moduleFriendlyFire";
		isGlobal = 0;
		isPersistent = 0;
		isTriggerActivated = 1;
		class Arguments: ArgumentsBaseUnits //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits, sources - ["A3_Modules_F_Misc"]
		{
			class Units: Units //inherits 3 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits/Units, sources - []
			{
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Misc"]
		{
			description = "Set punishment for killing friendly units.";
		};
	};
	class ModuleSector_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Multiplayer"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleSector_F";
		scope = 2;
		displayName = "Sector";
		category = "Multiplayer";
		icon = "\a3\Modules_f\data\iconSector_ca.paa";
		portrait = "\a3\Modules_f\data\portraitSector_ca.paa";
		function = "BIS_fnc_moduleSector";
		isGlobal = 0;
		isTriggerActivated = 1;
		canSetArea = 1;
		class AttributeValues //sources - ["A3_Modules_F_Multiplayer"]
		{
			size3[] = {50, 50, -1};
		};
		class Arguments //sources - ["A3_Modules_F_Multiplayer"]
		{
			class Name //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Name";
				description = "Sector name visible on a map, in a task and in a notification";
				defaultValue = "";
			};
			class Designation //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Designation";
				description = "Single letter visible in the sector icon (when empty, first letter of the name will be used)";
				defaultValue = "";
			};
			class ScoreReward //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Seize Reward";
				description = "Score awarded to the side which seized the sector";
				defaultValue = "0";
			};
			class OnOwnerChange //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Expression";
				description = "Code executed when sector ownership changes. Passed arguments are [<module>,<ownerSide>,<previousOwnerSide>]";
				defaultValue = "";
			};
			class OwnerLimit //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Ownership limit";
				description = "How much a side has to be dominant in order to capture the sector. Value is in range <0,1>, where 1 is full dominance.";
				defaultValue = "0";
			};
			class DefaultOwner //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Default Owner";
				description = "Default sector owner, even if he has no units in the sector.";
				class values //sources - ["A3_Modules_F_Multiplayer"]
				{
					class None //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Nobody";
						value = -1;
						default = 1;
					};
					class BLUFOR //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "BLUFOR";
						value = 1;
					};
					class OPFOR //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "OPFOR";
						value = 0;
					};
					class Independent //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Independent";
						value = 2;
					};
					class Civilian //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Civilian";
						value = 3;
					};
				};
			};
			class TaskOwner //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Task Owners";
				description = "Sides which will receive the task";
				class values //sources - ["A3_Modules_F_Multiplayer"]
				{
					class Nobody //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "No one";
						value = 0;
						default = 1;
					};
					class Everyone //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Everyone";
						value = 1;
					};
					class DefaultSides //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Only default sector owner";
						value = 2;
					};
					class NotDefaultSides //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Everyone except the default sector owner";
						value = 3;
					};
				};
			};
			class TaskTitle //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Task title";
				description = "Title of the automatically added task. Use %1 to insert the sector name. When empty, no task will be added.";
			};
			class TaskDescription //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Task description";
				description = "Description of the automatically added task. Use %1 to insert the sector name, %2 to insert sector rewards (e.g., unlocked vehicles or respawn points), %3 to insert description of capturing costs.";
			};
			class CostInfantry //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Infantry cost";
				description = "Ratio of how fast infantry units will capture the sector.";
				defaultValue = "1";
			};
			class CostWheeled //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Wheeled vehicles cost";
				description = "Ratio of how fast wheeled vehicles will capture the sector.";
				defaultValue = "2";
			};
			class CostTracked //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Tracked vehicles cost";
				description = "Ratio of how fast tracked vehicles will capture the sector.";
				defaultValue = "4";
			};
			class CostWater //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Naval cost";
				description = "Ratio of how fast naval vehicles will capture the sector.";
				defaultValue = "0";
			};
			class CostAir //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Aircraft cost";
				description = "Ratio of how fast aircrafts will capture the sector.";
				defaultValue = "2";
			};
			class CostPlayers //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Players cost";
				description = "Ratio of how fast players will capture the sector. Combined with other costs.";
				defaultValue = "2";
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Multiplayer"]
		{
			description[] = {"Add a contested sector.", "Side with the strongest force within the area (calculated by number and type of the units) will be capturing it.", "Delete or disable the sector module to 'finalize' the sector. Once done, capturing will be disabled and the last owner will retain control forever."};
			duplicate = 1;
			sync[] = {"LocationArea_F", "MiscUnlock_F", "SideBLUFOR_F", "SideOPFOR_F", "SideResistance_F"};
			class SideBLUFOR_F //sources - ["A3_Modules_F_Multiplayer"]
			{
				description = "Mark the side as competing for the sector. At least one side has to be present.";
				sync[] = {};
			};
			class SideOPFOR_F //sources - ["A3_Modules_F_Multiplayer"]
			{
				description = "Mark the side as competing for the sector. At least one side has to be present.";
				sync[] = {};
			};
			class SideResistance_F //sources - ["A3_Modules_F_Multiplayer"]
			{
				description = "Mark the side as competing for the sector. At least one side has to be present.";
				sync[] = {};
			};
			class LocationArea_F //sources - ["A3_Modules_F_Multiplayer"]
			{
				description = "";
				duplicate = 1;
				sync[] = {"TriggerArea"};
			};
			class TriggerArea //sources - ["A3_Modules_F_Multiplayer"]
			{
				position = 1;
				area = 1;
				description = "Set the sector area. When the sector is finalized (i.e., deleted or its simulation is disabled), the trigger will be activated, potentially triggering other modules synced to it.";
				duplicate = 1;
				vehicle = "EmptyDetector";
			};
			class MiscUnlock_F //sources - ["A3_Modules_F_Multiplayer"]
			{
				description = "";
				duplicate = 1;
				optional = 1;
				sync[] = {"TriggerUnlock"};
			};
			class TriggerUnlock //sources - ["A3_Modules_F_Multiplayer"]
			{
				description = "When the sector is captured by a side defined in trigger ACTIVATION field, the trigger will be activated. When repeated activation is enabled, it will be deactivated once the side is no longer in control of the sector.<br /><br />You can synchronize other modules (e.g., Respawn Position) to this trigger to tie them to sector owner.";
				duplicate = 1;
				optional = 1;
				vehicle = "EmptyDetector";
			};
		};
	};
	class ModuleSectorDummy_F: ModuleSector_F //inherits 14 parameters from bin\config.bin/CfgVehicles/ModuleSector_F, sources - ["A3_Modules_F_Multiplayer"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleSectorDummy_F";
		displayName = "Sector (Dummy)";
		icon = "\a3\Modules_f\data\iconSectorDummy_ca.paa";
		portrait = "\a3\Modules_f\data\portraitSectorDummy_ca.paa";
		canSetArea = 0;
		class Arguments //sources - ["A3_Modules_F_Multiplayer"]
		{
			class Name //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Name";
				description = "Sector name visible on a map, in a task and in a notification";
				defaultValue = "";
			};
			class Designation //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Designation";
				description = "Single letter visible in the sector icon (when empty, first letter of the name will be used)";
				defaultValue = "";
			};
		};
		class ModuleDescription: ModuleDescription //inherits 10 parameters from bin\config.bin/CfgVehicles/ModuleSector_F/ModuleDescription, sources - ["A3_Modules_F_Multiplayer"]
		{
			description = "Add a contested sector. All its params will be copied from synced Sector module. Used when you want to keep all settings in one module.";
			sync[] = {"ModuleSector_F", "LocationArea_F", "MiscUnlock_F"};
		};
	};
	class ModuleRespawnPosition_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Multiplayer"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleRespawnPosition_F";
		scope = 2;
		displayName = "Respawn Position";
		category = "Multiplayer";
		icon = "\a3\Modules_f\data\iconRespawn_ca.paa";
		portrait = "\a3\Modules_f\data\portraitRespawn_ca.paa";
		function = "BIS_fnc_moduleRespawnPosition";
		isGlobal = 0;
		isTriggerActivated = 1;
		class Arguments //sources - ["A3_Modules_F_Multiplayer"]
		{
			class Name //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Name";
				description = "Respawn name visible in the respawn menu and on a map";
				defaultValue = "";
			};
			class Type //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Type";
				description = "What will be respawned at the position";
				class values //sources - ["A3_Modules_F_Multiplayer"]
				{
					class Inf //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Infantry";
						value = 0;
						default = 1;
					};
					class Vehicles //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Vehicles (All)";
						value = 1;
					};
					class Motor //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Vehicles (Wheeled)";
						value = 2;
					};
					class Armor //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Vehicles (Tracked)";
						value = 3;
					};
					class Air //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Vehicles (Helicopters)";
						value = 4;
					};
					class Plane //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Vehicles (Planes)";
						value = 5;
					};
					class Naval //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Vehicles (Naval)";
						value = 6;
					};
				};
			};
			class Side //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Side";
				description = "Units of which side will be respawned at the position";
				class values //sources - ["A3_Modules_F_Multiplayer"]
				{
					class Leader //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Leading Side";
						value = -1;
						default = 1;
					};
					class BLUFOR //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "BLUFOR";
						value = 1;
					};
					class OPFOR //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "OPFOR";
						value = 0;
					};
					class Independent //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Independent";
						value = 2;
					};
					class Civilian //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Civilian";
						value = 3;
					};
				};
			};
			class Marker //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Show to";
				description = "Set who will see the respawn marker";
				class values //sources - ["A3_Modules_F_Multiplayer"]
				{
					class All //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Everyone";
						value = 0;
						default = 1;
					};
					class SideAllies //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "The side and its allies";
						value = 1;
					};
					class Side //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Only the side";
						value = 2;
					};
				};
			};
			class ShowNotification //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Notification";
				description = "Show notification when the vehicle respawns.";
				class values //sources - ["A3_Modules_F_Multiplayer"]
				{
					class Enabled //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Enabled";
						value = 1;
						default = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Multiplayer"]
		{
			description = "Add a respawn position.";
			position = 1;
			direction = 1;
			sync[] = {"AnyVehicle"};
			class AnyVehicle: AnyVehicle //inherits 5 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription/AnyVehicle, sources - ["A3_Modules_F_Multiplayer"]
			{
				optional = 1;
			};
		};
	};
	class ModuleRespawnVehicle_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Multiplayer"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleRespawnVehicle_F";
		scope = 2;
		displayName = "Vehicle Respawn";
		category = "Multiplayer";
		icon = "\a3\Modules_f\data\iconRespawn_ca.paa";
		portrait = "\a3\Modules_f\data\portraitRespawn_ca.paa";
		function = "BIS_fnc_moduleRespawnVehicle";
		functionPriority = 1;
		isGlobal = 0;
		isTriggerActivated = 1;
		class Arguments //sources - ["A3_Modules_F_Multiplayer"]
		{
			class Delay //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Delay";
				description = "Delay in seconds before the vehicle is respawned (Description.ext delay used when left empty)";
				defaultValue = "";
			};
			class DesertedDistance //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Deserted Distance";
				description = "When the vehicle is abandoned, force respawn after no player is in the given distance [m]. Ignored when the field is left blank.";
				defaultValue = "";
			};
			class RespawnCount //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Tickets";
				description = "Number of respawn tickets, i.e., how many times can the vehicle respawn";
				defaultValue = "";
			};
			class Init //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Expression";
				description = "Code executed when the vehicle respawns (passed arguments are [<newVehicle>,<oldVehicle>])";
				defaultValue = "";
			};
			class Position //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Position";
				description = "Where will the vehicle respawn";
				class values //sources - ["A3_Modules_F_Multiplayer"]
				{
					class Start //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Starting position";
						value = 0;
						default = 1;
					};
					class Death //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Where it was destroyed";
						value = 1;
					};
					class MarkerDefault //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Default respawn marker";
						value = 2;
					};
					class MarkerWEST //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "BLUFOR respawn marker";
						value = 4;
					};
					class MarkerEAST //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "OPFOR respawn marker";
						value = 3;
					};
					class MarkerGUER //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Independent respawn marker";
						value = 5;
					};
					class MarkerCIV //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Civilian respawn marker";
						value = 6;
					};
					class MarkerKiller //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Side respawn marker of whoever destroyed the vehicle";
						value = 7;
					};
					class Synced //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Respawn positions synchronized to the vehicle";
						value = 8;
					};
				};
			};
			class PositionType //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Position selection";
				description = "When multiple respawn positions are available, set which one should be selected";
				class values //sources - ["A3_Modules_F_Multiplayer"]
				{
					class Random //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Random";
						value = 0;
						default = 1;
					};
					class Newest //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Newest";
						value = 1;
					};
					class Oldest //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Oldest";
						value = 2;
					};
				};
			};
			class Wreck //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Wreck";
				description = "What will happen to the destroyed vehicle";
				class values //sources - ["A3_Modules_F_Multiplayer"]
				{
					class Preserve //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Preserve";
						value = 0;
					};
					class Delete //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Delete";
						value = 1;
					};
					class DeleteEffect //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Delete with an explosion effect";
						value = 2;
						default = 1;
					};
				};
			};
			class ShowNotification //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Notification";
				description = "Show notification when the vehicle respawns.";
				class values //sources - ["A3_Modules_F_Multiplayer"]
				{
					class Enabled //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Enabled";
						value = 1;
						default = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
			class ForcedRespawn //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Forced respawn";
				description = "Respawn all synchronized vehicles when the module is activated (delay and tickets are ignored)";
				class values //sources - ["A3_Modules_F_Multiplayer"]
				{
					class Enabled //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Enabled";
						value = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Multiplayer"]
					{
						name = "Disabled";
						value = 0;
						default = 1;
					};
				};
			};
			class RespawnWhenDisabled //sources - ["A3_Modules_F_Multiplayer"]
			{
				displayName = "Respawn when disabled";
				description = "Controls whether vehicles should respawn after becoming immobilized.";
				typeName = "BOOL";
				defaultValue = 0;
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Multiplayer"]
		{
			description = "Set vehicle respawn parameters.";
			position = 1;
			sync[] = {"AnyVehicle"};
		};
	};
	class ModuleShowHide_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_ObjectModifiers"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleShowHide_F";
		scope = 2;
		displayName = "Show / Hide";
		category = "ObjectModifiers";
		function = "BIS_fnc_moduleShowHide";
		isGlobal = 0;
		isTriggerActivated = 1;
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			class Units: Units //inherits 4 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Units, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleShowHide_F_Units";
			};
			class State: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleShowHide_F_State";
				displayName = "Action";
				tooltip = "";
				defaultValue = "0";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class Show //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Show units";
						value = 1;
					};
					class Hide //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Hide units";
						value = 0;
						default = 1;
					};
				};
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments: ArgumentsBaseUnits //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			class Units: Units //inherits 3 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits/Units, sources - []
			{
			};
			class State //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Action";
				description = "";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class Show //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Show units";
						value = 1;
					};
					class Hide //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Hide units";
						value = 0;
						default = 1;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			description = "Show/hide synced objects. They will become invisible and their simulation will be disabled.";
			sync[] = {"Anything"};
		};
	};
	class ModulePositioning_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_ObjectModifiers"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModulePositioning_F";
		scope = 2;
		displayName = "Set Position / Rotation";
		category = "ObjectModifiers";
		function = "BIS_fnc_modulePositioning";
		isGlobal = 1;
		isTriggerActivated = 1;
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			class Units: Units //inherits 4 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Units, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModulePositioning_F_Units";
			};
			class Position: CheckboxNumber //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/CheckboxNumber, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModulePositioning_F_Position";
				displayName = "Position";
				tooltip = "Move to module's position";
				defaultValue = 1;
			};
			class Elevation: Default //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Default, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModulePositioning_F_Elevation";
				displayName = "Elevation";
				tooltip = "Elevation of object.";
				validate = "NUMBER";
				defaultValue = "0";
				control = "EditShort";
			};
			class Radius: Default //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Default, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModulePositioning_F_Radius";
				displayName = "Placement radius:";
				tooltip = "Object placement radius around module.";
				validate = "NUMBER";
				defaultValue = "3";
				control = "EditShort";
			};
			class Rotation: CheckboxNumber //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/CheckboxNumber, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModulePositioning_F_Rotation";
				displayName = "Rotation";
				tooltip = "Rotate in module's direction (yaw).";
				defaultValue = 0;
			};
			class Pitch: Default //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Default, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModulePositioning_F_Pitch";
				displayName = "Pitch:";
				tooltip = "Pitch rotation in degrees. 90 is pointing straight up.";
				validate = "NUMBER";
				defaultValue = "0";
				control = "EditShort";
			};
			class Bank: Default //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Default, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModulePositioning_F_Bank";
				displayName = "Bank";
				tooltip = "Bank rotation in degrees. 90 is object rolled to the right.";
				validate = "NUMBER";
				defaultValue = "0";
				control = "EditShort";
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments: ArgumentsBaseUnits //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			class Units: Units //inherits 3 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits/Units, sources - []
			{
			};
			class Position //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Position";
				description = "Move to module's position";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class Yes //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Yes";
						value = 1;
						default = 1;
					};
					class No //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No";
						value = 0;
					};
				};
			};
			class Elevation //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Elevation";
				description = "Elevation of object.";
				typeName = "NUMBER";
				defaultValue = 0;
			};
			class Radius //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Placement radius:";
				description = "Object placement radius around module.";
				typeName = "NUMBER";
				defaultValue = 3;
			};
			class Rotation //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Rotation";
				description = "Rotate in module's direction (yaw).";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class Yes //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Yes";
						value = 1;
					};
					class No //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No";
						value = 0;
						default = 1;
					};
				};
			};
			class Pitch //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Pitch:";
				description = "Pitch rotation in degrees. 90 is pointing straight up.";
				typeName = "NUMBER";
				defaultValue = 0;
			};
			class Bank //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Bank";
				description = "Bank rotation in degrees. 90 is object rolled to the right.";
				typeName = "NUMBER";
				defaultValue = 0;
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			description = "Set position and rotation of synced objects.";
			sync[] = {"Anything"};
		};
	};
	class ModuleSkill_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_ObjectModifiers"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleSkill_F";
		scope = 2;
		displayName = "Set Skill";
		category = "ObjectModifiers";
		function = "BIS_fnc_moduleSkill";
		isGlobal = 1;
		isTriggerActivated = 1;
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			class Units: Units //inherits 4 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Units, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleSkill_F_Units";
			};
			class Value: Default //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Default, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleSkill_F_Value";
				displayName = "Skill:";
				tooltip = "";
				defaultValue = "0.5";
				control = "Skill";
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments: ArgumentsBaseUnits //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			class Units: Units //inherits 3 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits/Units, sources - []
			{
			};
			class Value //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Skill:";
				description = "";
				typeName = "NUMBER";
				defaultValue = 0.5;
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			description = "Set AI skill of synced objects. Has no effect on players.";
			sync[] = {"AnyAI"};
		};
	};
	class ModuleHealth_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_ObjectModifiers"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleHealth_F";
		scope = 2;
		displayName = "Set Character Damage";
		category = "ObjectModifiers";
		function = "BIS_fnc_moduleHealth";
		isGlobal = 1;
		isTriggerActivated = 1;
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			class Units: Units //inherits 4 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Units, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleHealth_F_Units";
			};
			class Value: Default //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Default, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleHealth_F_Value";
				displayName = "Damage";
				tooltip = "Set damage between 0 and 1.";
				defaultValue = "0";
				control = "Slider";
			};
			class BodyPart: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleHealth_F_BodyPart";
				displayName = "Body part";
				tooltip = "Which body part should be affected?";
				defaultValue = "0";
				class Values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class Whole //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Whole body";
						value = 0;
						default = 1;
					};
					class Head //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Head";
						value = 1;
					};
					class Body //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Body";
						value = 2;
					};
					class Arms //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Arms";
						value = 3;
					};
					class Legs //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Legs";
						value = 4;
					};
				};
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments: ArgumentsBaseUnits //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			class Units: Units //inherits 3 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits/Units, sources - []
			{
			};
			class Value //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Damage";
				description = "Set damage between 0 and 1.";
				typeName = "NUMBER";
				defaultValue = 0;
			};
			class BodyPart //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Body part";
				description = "Which body part should be affected?";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class Whole //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Whole body";
						value = 0;
						default = 1;
					};
					class Head //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Head";
						value = 1;
					};
					class Body //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Body";
						value = 2;
					};
					class Arms //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Arms";
						value = 3;
					};
					class Legs //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Legs";
						value = 4;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			description = "Set damage of synced persons.";
			sync[] = {"AnyPerson"};
		};
	};
	class ModuleDamage_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_ObjectModifiers"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleDamage_F";
		scope = 2;
		displayName = "Set Vehicle Damage";
		category = "ObjectModifiers";
		function = "BIS_fnc_moduleDamage";
		isGlobal = 1;
		isTriggerActivated = 1;
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			class Units: Units //inherits 4 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Units, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleDamage_F_Units";
			};
			class Value: Default //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Default, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleDamage_F_Value";
				displayName = "Damage";
				tooltip = "Set damage between 0 and 1.";
				defaultValue = "0";
				control = "Slider";
			};
			class BodyPart: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleDamage_F_BodyPart";
				displayName = "Vehicle part";
				tooltip = "Which vehicle part should be affected?";
				defaultValue = "0";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class Whole //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Whole vehicle";
						value = "0";
						default = 1;
					};
					class Engine //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Engine (all)";
						value = "HitEngine";
					};
					class FuelTank //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Fuel tank (all)";
						value = "HitFuel";
					};
					class Turret //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Turret (all)";
						value = "HitTurret";
					};
					class Gun //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Gun (all)";
						value = "HitGun";
					};
					class Body //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Body (cars)";
						value = "HitBody";
					};
					class FrontLWh //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Front left wheel (cars)";
						value = "HitLFWheel";
					};
					class FrontRWh //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Front right wheel (cars)";
						value = "HitRFWheel";
					};
					class BackLWh //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Back left wheel (cars)";
						value = "HitLBWheel";
					};
					class BackRWh //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Back right wheel (cars)";
						value = "HitRBWheel";
					};
					class Hull //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Hull (tanks/helicopters)";
						value = "HitHull";
					};
					class LTrack //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Left track (tanks)";
						value = "HitLTrack";
					};
					class RTrack //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Right track (tanks)";
						value = "HitRTrack";
					};
					class Avionics //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Avionics (helicopter)";
						value = "HitAvionics";
					};
					class MainRotor //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Main rotor (helicopter)";
						value = "HitRRotor";
					};
					class TailRotor //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Tail rotor (helicopters)";
						value = "HitVRotor";
					};
				};
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments: ArgumentsBaseUnits //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			class Units: Units //inherits 3 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits/Units, sources - []
			{
			};
			class Value //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Damage";
				description = "Set damage between 0 and 1.";
				typeName = "NUMBER";
				defaultValue = 0;
			};
			class BodyPart //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Vehicle part";
				description = "Which vehicle part should be affected?";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class Whole //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Whole vehicle";
						value = "0";
						default = 1;
					};
					class Engine //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Engine (all)";
						value = "HitEngine";
					};
					class FuelTank //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Fuel tank (all)";
						value = "HitFuel";
					};
					class Turret //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Turret (all)";
						value = "HitTurret";
					};
					class Gun //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Gun (all)";
						value = "HitGun";
					};
					class Body //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Body (cars)";
						value = "HitBody";
					};
					class FrontLWh //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Front left wheel (cars)";
						value = "HitLFWheel";
					};
					class FrontRWh //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Front right wheel (cars)";
						value = "HitRFWheel";
					};
					class BackLWh //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Back left wheel (cars)";
						value = "HitLBWheel";
					};
					class BackRWh //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Back right wheel (cars)";
						value = "HitRBWheel";
					};
					class Hull //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Hull (tanks/helicopters)";
						value = "HitHull";
					};
					class LTrack //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Left track (tanks)";
						value = "HitLTrack";
					};
					class RTrack //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Right track (tanks)";
						value = "HitRTrack";
					};
					class Avionics //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Avionics (helicopter)";
						value = "HitAvionics";
					};
					class MainRotor //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Main rotor (helicopter)";
						value = "HitRRotor";
					};
					class TailRotor //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Tail rotor (helicopters)";
						value = "HitVRotor";
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			description = "Set damage of synced vehicles.";
			sync[] = {"AnyVehicle"};
		};
	};
	class ModuleFuel_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_ObjectModifiers"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleFuel_F";
		scope = 2;
		displayName = "Set Vehicle Fuel";
		category = "ObjectModifiers";
		function = "BIS_fnc_moduleFuel";
		isGlobal = 1;
		isTriggerActivated = 1;
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			class Units: Units //inherits 4 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Units, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleFuel_F_Units";
			};
			class Value: Default //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Default, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleFuel_F_Value";
				displayName = "Fuel";
				tooltip = "";
				defaultValue = "1";
				control = "Slider";
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments: ArgumentsBaseUnits //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			class Units: Units //inherits 3 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits/Units, sources - []
			{
			};
			class Value //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Fuel";
				description = "";
				typeName = "NUMBER";
				defaultValue = 1;
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			description = "Set fuel of synced vehicles.";
			sync[] = {"AnyVehicle"};
		};
	};
	class ModuleAmmo_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_ObjectModifiers"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleAmmo_F";
		scope = 2;
		displayName = "Set Ammo";
		category = "ObjectModifiers";
		function = "BIS_fnc_moduleAmmo";
		isGlobal = 1;
		isTriggerActivated = 1;
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			class Units: Units //inherits 4 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Units, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleAmmo_F_Units";
			};
			class Value: Default //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Default, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleAmmo_F_Value";
				displayName = "Ammunition";
				tooltip = "";
				defaultValue = "1";
				control = "Slider";
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments: ArgumentsBaseUnits //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			class Units: Units //inherits 3 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits/Units, sources - []
			{
			};
			class Value //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Ammunition";
				description = "";
				typeName = "NUMBER";
				defaultValue = 1;
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			description = "Set total ammo of synced objects. Affects only ammo of their weapons, not ammo carried in cargo space (e.g., ammo boxes).";
			sync[] = {"Anything"};
		};
	};
	class ModuleMode_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_ObjectModifiers"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleMode_F";
		scope = 2;
		displayName = "Set Mode";
		category = "ObjectModifiers";
		function = "BIS_fnc_moduleMode";
		isGlobal = 1;
		isTriggerActivated = 1;
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			class Units: Units //inherits 4 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Units, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleMode_F_Units";
			};
			class CombatMode: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleMode_F_CombatMode";
				displayName = "Combat mode:";
				tooltip = "";
				defaultValue = "''";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class NoChange //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No change";
						value = "";
						default = 1;
					};
					class NeverFire //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Never fire";
						value = "BLUE";
					};
					class HoldFire //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Hold fire";
						value = "GREEN";
					};
					class HolfFireEngage //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Hold fire, Engage at will";
						value = "WHITE";
					};
					class OpenFire //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Open fire";
						value = "YELLOW";
					};
					class OpenFireEngage //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Open fire, Engage at will";
						value = "RED";
					};
				};
			};
			class Formation: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleMode_F_Formation";
				displayName = "Formation:";
				tooltip = "";
				defaultValue = "''";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class NoChange //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No change";
						value = "";
						default = 1;
					};
					class Column //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Column";
						value = "COLUMN";
					};
					class StagCol //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Staggered Col.";
						value = "STAG COLUMN";
					};
					class Wedge //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Wedge";
						value = "WEDGE";
					};
					class EchelonL //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Echelon L.";
						value = "ECH LEFT";
					};
					class EchelonR //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Echelon R.";
						value = "ECH RIGHT";
					};
					class Vee //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Vee";
						value = "VEE";
					};
					class Line //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Line";
						value = "LINE";
					};
					class Delta //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Diamond";
						value = "DIAMOND";
					};
					class ColumnComp //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "File";
						value = "FILE";
					};
				};
			};
			class Speed: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleMode_F_Speed";
				displayName = "Speed:";
				tooltip = "";
				defaultValue = "''";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class NoChange //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No change";
						value = "";
						default = 1;
					};
					class Limited //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Limited";
						value = "LIMITED";
					};
					class Normal //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Normal";
						value = "NORMAL";
					};
					class Full //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Full";
						value = "FULL";
					};
				};
			};
			class Behavior: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleMode_F_Behavior";
				displayName = "Behavior:";
				tooltip = "";
				defaultValue = "''";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class NoChange //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No change";
						value = "";
						default = 1;
					};
					class Careless //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Careless";
						value = "CARELESS";
					};
					class Safe //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Safe";
						value = "SAFE";
					};
					class Aware //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Aware";
						value = "AWARE";
					};
					class Combat //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Combat";
						value = "COMBAT";
					};
					class Stealth //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Stealth";
						value = "STEALTH";
					};
				};
			};
			class Stance: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleMode_F_Stance";
				displayName = "Stance";
				tooltip = "";
				defaultValue = "''";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class NoChange //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No change";
						value = "";
						default = 1;
					};
					class StandUp //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Stand Up";
						value = "UP";
					};
					class Crouch //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Stay crouched";
						value = "MIDDLE";
					};
					class Prone //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Go prone";
						value = "DOWN";
					};
					class Auto //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Copy my stance";
						value = "AUTO";
					};
				};
			};
			class Captive: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleMode_F_Captive";
				displayName = "Captive";
				tooltip = "Captive enable means enemies do not engage";
				defaultValue = "-1";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class NoChange //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No change";
						value = -1;
						default = 1;
					};
					class Enabled //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Enabled";
						value = 1;
					};
					class Disabled //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
			class Locked: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleMode_F_Locked";
				displayName = "Vehicle lock:";
				tooltip = "Locked vehicles cannot be entered";
				defaultValue = "''";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class NoChange //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No change";
						value = "";
						default = 1;
					};
					class Unlock //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Unlocked";
						value = "UNLOCKED";
					};
					class DefaultLock //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Default";
						value = "DEFAULT";
					};
					class Lock //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Locked";
						value = "LOCKED";
					};
					class LockPlayer //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Locked (player)";
						value = "LOCKEDPLAYER";
					};
				};
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments: ArgumentsBaseUnits //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			class Units: Units //inherits 3 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits/Units, sources - []
			{
			};
			class CombatMode //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Combat mode:";
				description = "";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class NoChange //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No change";
						value = "";
						default = 1;
					};
					class NeverFire //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Never fire";
						value = "BLUE";
					};
					class HoldFire //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Hold fire";
						value = "GREEN";
					};
					class HolfFireEngage //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Hold fire, Engage at will";
						value = "WHITE";
					};
					class OpenFire //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Open fire";
						value = "YELLOW";
					};
					class OpenFireEngage //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Open fire, Engage at will";
						value = "RED";
					};
				};
			};
			class Formation //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Formation:";
				description = "";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class NoChange //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No change";
						value = "";
						default = 1;
					};
					class Column //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Column";
						value = "COLUMN";
					};
					class StagCol //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Staggered Col.";
						value = "STAG COLUMN";
					};
					class Wedge //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Wedge";
						value = "WEDGE";
					};
					class EchelonL //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Echelon L.";
						value = "ECH LEFT";
					};
					class EchelonR //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Echelon R.";
						value = "ECH RIGHT";
					};
					class Vee //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Vee";
						value = "VEE";
					};
					class Line //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Line";
						value = "LINE";
					};
					class Delta //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Diamond";
						value = "DIAMOND";
					};
					class ColumnComp //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "File";
						value = "FILE";
					};
				};
			};
			class Speed //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Speed:";
				description = "";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class NoChange //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No change";
						value = "";
						default = 1;
					};
					class Limited //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Limited";
						value = "LIMITED";
					};
					class Normal //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Normal";
						value = "NORMAL";
					};
					class Full //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Full";
						value = "FULL";
					};
				};
			};
			class Behavior //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Behavior:";
				description = "";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class NoChange //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No change";
						value = "";
						default = 1;
					};
					class Careless //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Careless";
						value = "CARELESS";
					};
					class Safe //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Safe";
						value = "SAFE";
					};
					class Aware //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Aware";
						value = "AWARE";
					};
					class Combat //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Combat";
						value = "COMBAT";
					};
					class Stealth //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Stealth";
						value = "STEALTH";
					};
				};
			};
			class Stance //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Stance";
				description = "";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class NoChange //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No change";
						value = "";
						default = 1;
					};
					class StandUp //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Stand Up";
						value = "UP";
					};
					class Crouch //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Stay crouched";
						value = "MIDDLE";
					};
					class Prone //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Go prone";
						value = "DOWN";
					};
					class Auto //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Copy my stance";
						value = "AUTO";
					};
				};
			};
			class Captive //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Captive";
				description = "Captive enable means enemies do not engage";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class NoChange //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No change";
						value = -1;
						default = 1;
					};
					class Enabled //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Enabled";
						value = 1;
					};
					class Disabled //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
			class Locked //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Vehicle lock:";
				description = "Locked vehicles cannot be entered";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class NoChange //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No change";
						value = "";
						default = 1;
					};
					class Unlock //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Unlocked";
						value = "UNLOCKED";
					};
					class DefaultLock //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Default";
						value = "DEFAULT";
					};
					class Lock //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Locked";
						value = "LOCKED";
					};
					class LockPlayer //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Locked (player)";
						value = "LOCKEDPLAYER";
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			description = "Set behavior pattern of synced objects.";
			sync[] = {"AnyBrain"};
		};
	};
	class ModuleRank_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_ObjectModifiers"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleRank_F";
		scope = 2;
		displayName = "Set Rank";
		category = "ObjectModifiers";
		function = "BIS_fnc_moduleRank";
		isGlobal = 1;
		isTriggerActivated = 1;
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			class Units: Units //inherits 4 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Units, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleRank_F_Units";
			};
			class Value: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleRank_F_Rank";
				displayName = "Rank:";
				tooltip = "";
				defaultValue = "''";
				class Values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class NoChange //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No change";
						value = "";
						default = 1;
					};
					class Private //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Private";
						value = "PRIVATE";
					};
					class Corporal //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Corporal";
						value = "CORPORAL";
					};
					class Sergeant //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Sergeant";
						value = "SERGEANT";
					};
					class Lieutenant //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Lieutenant";
						value = "LIEUTENANT";
					};
					class Captain //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Captain";
						value = "CAPTAIN";
					};
					class Major //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Major";
						value = "MAJOR";
					};
					class Colonel //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Colonel";
						value = "COLONEL";
					};
				};
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments: ArgumentsBaseUnits //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			class Units: Units //inherits 3 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits/Units, sources - []
			{
			};
			class Rank //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Rank:";
				description = "";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class NoChange //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No change";
						value = "";
						default = 1;
					};
					class Private //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Private";
						value = "PRIVATE";
					};
					class Corporal //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Corporal";
						value = "CORPORAL";
					};
					class Sergeant //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Sergeant";
						value = "SERGEANT";
					};
					class Lieutenant //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Lieutenant";
						value = "LIEUTENANT";
					};
					class Captain //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Captain";
						value = "CAPTAIN";
					};
					class Major //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Major";
						value = "MAJOR";
					};
					class Colonel //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Colonel";
						value = "COLONEL";
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			description = "Set military rank of synced objects.";
			sync[] = {"AnyBrain"};
		};
	};
	class ModuleAI_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_ObjectModifiers"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleAI_F";
		scope = 2;
		displayName = "Set AI Mode";
		category = "ObjectModifiers";
		function = "BIS_fnc_moduleAI";
		isGlobal = 1;
		isTriggerActivated = 1;
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			class Units: Units //inherits 4 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Units, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleAI_F_Units";
			};
			class Target: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleAI_F_Target";
				displayName = "Target";
				tooltip = "Unit watches assigned target.";
				defaultValue = "-1";
				class Values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class NoChange //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No change";
						value = -1;
						default = 1;
					};
					class Enabled //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Enabled";
						value = 1;
					};
					class Disabled //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
			class AutoTarget: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleAI_F_AutoTarget";
				displayName = "Autotarget";
				tooltip = "Assigning a target independently and watching unknown objects.";
				defaultValue = "-1";
				class Values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class NoChange //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No change";
						value = -1;
						default = 1;
					};
					class Enabled //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Enabled";
						value = 1;
					};
					class Disabled //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
			class Move: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleAI_F_Move";
				displayName = "Move";
				tooltip = "AI movement.";
				defaultValue = "-1";
				class Values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class NoChange //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No change";
						value = -1;
						default = 1;
					};
					class Enabled //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Enabled";
						value = 1;
					};
					class Disabled //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
			class Anim: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleAI_F_Anim";
				displayName = "Anim";
				tooltip = "Ability of AI to change animation.";
				defaultValue = "-1";
				class Values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class NoChange //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No change";
						value = -1;
						default = 1;
					};
					class Enabled //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Enabled";
						value = 1;
					};
					class Disabled //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
			class FSM: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleAI_F_FSM";
				displayName = "FSM";
				tooltip = "Execution of AI behavior scripts.";
				defaultValue = "-1";
				class Values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class NoChange //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No change";
						value = -1;
						default = 1;
					};
					class Enabled //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Enabled";
						value = 1;
					};
					class Disabled //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments: ArgumentsBaseUnits //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			class Units: Units //inherits 3 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits/Units, sources - []
			{
			};
			class Target //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Target";
				description = "Unit watches assigned target.";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class NoChange //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No change";
						value = -1;
						default = 1;
					};
					class Enabled //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Enabled";
						value = 1;
					};
					class Disabled //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
			class AutoTarget //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Autotarget";
				description = "Assigning a target independently and watching unknown objects.";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class NoChange //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No change";
						value = -1;
						default = 1;
					};
					class Enabled //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Enabled";
						value = 1;
					};
					class Disabled //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
			class Move //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Move";
				description = "AI movement.";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class NoChange //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No change";
						value = -1;
						default = 1;
					};
					class Enabled //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Enabled";
						value = 1;
					};
					class Disabled //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
			class Anim //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Anim";
				description = "Ability of AI to change animation.";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class NoChange //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No change";
						value = -1;
						default = 1;
					};
					class Enabled //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Enabled";
						value = 1;
					};
					class Disabled //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
			class FSM //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "FSM";
				description = "Execution of AI behavior scripts.";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class NoChange //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No change";
						value = -1;
						default = 1;
					};
					class Enabled //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Enabled";
						value = 1;
					};
					class Disabled //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			description = "Enable/disable AI modes.";
			sync[] = {"AnyAI"};
		};
	};
	class ModuleRating_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_ObjectModifiers"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleRating_F";
		scope = 2;
		displayName = "Add Rating / Score";
		category = "ObjectModifiers";
		function = "BIS_fnc_moduleRating";
		isGlobal = 1;
		isTriggerActivated = 1;
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			class Units: Units //inherits 4 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Units, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleRating_F_Units";
			};
			class Rating: Default //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Default, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleRating_F_Rating";
				displayName = "Add rating";
				tooltip = "Rating below -2000 switches to Enemy unit for everyone.";
				defaultValue = "0";
				control = "EditShort";
				validate = "NUMBER";
			};
			class Score: Default //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Default, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleRating_F_Score";
				displayName = "Add score";
				tooltip = "Must be positive, works only on players in MP.";
				defaultValue = "0";
				control = "EditShort";
				validate = "NUMBER";
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments: ArgumentsBaseUnits //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			class Units: Units //inherits 3 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits/Units, sources - []
			{
			};
			class Rating //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Add rating";
				description = "Rating below -2000 switches to Enemy unit for everyone.";
				typeName = "NUMBER";
				defaultValue = 0;
			};
			class Score //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Add score";
				description = "Must be positive, works only on players in MP.";
				typeName = "NUMBER";
				defaultValue = 0;
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			description = "Add rating to synced objects. Rating is automatically awarded for killed enemies and players can see it in the debriefing screen. Shooting friendlies will lead to a negative rating and turning hostile to your own units.";
			sync[] = {"AnyBrain"};
		};
	};
	class ModuleDoorOpen_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_ObjectModifiers"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleDoorOpen_F";
		scope = 2;
		displayName = "Open / Close Doors";
		category = "ObjectModifiers";
		function = "BIS_fnc_moduleDoorOpen";
		isGlobal = 1;
		isPersistent = 1;
		isTriggerActivated = 1;
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			class Radius: Default //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Default, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleDoorOpen_F_Radius";
				displayName = "Radius";
				tooltip = "Radius where all doors / hatches will open /close.";
				defaultValue = "500";
				control = "EditShort";
				validate = "NUMBER";
			};
			class Door: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleDoorOpen_F_Door";
				displayName = "Doors";
				tooltip = "Applies to all doors in radius?";
				defaultValue = "-1";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class NoChange //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No change";
						value = -1;
						default = 1;
					};
					class Open //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Open";
						value = 1;
					};
					class Close //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Close";
						value = 0;
					};
				};
			};
			class Hatch: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleDoorOpen_F_Hatch";
				displayName = "Hatches";
				tooltip = "Applies to all hatches in radius?";
				defaultValue = "-1";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class NoChange //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No change";
						value = -1;
						default = 1;
					};
					class Open //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Open";
						value = 1;
					};
					class Close //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Close";
						value = 0;
					};
				};
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments //sources - ["A3_Modules_F_ObjectModifiers"]
		{
			class Radius //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Radius";
				description = "Radius where all doors / hatches will open /close.";
				typeName = "NUMBER";
				defaultValue = 500;
			};
			class Door //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Doors";
				description = "Applies to all doors in radius?";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class NoChange //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No change";
						value = -1;
						default = 1;
					};
					class Open //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Open";
						value = 1;
					};
					class Close //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Close";
						value = 0;
					};
				};
			};
			class Hatch //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Hatches";
				description = "Applies to all hatches in radius?";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class NoChange //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No change";
						value = -1;
						default = 1;
					};
					class Open //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Open";
						value = 1;
					};
					class Close //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Close";
						value = 0;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			description = "Open/close door of synced objects.";
			sync[] = {"AnyStaticObject"};
		};
	};
	class ModuleSimulationManager_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_ObjectModifiers"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleSimulationManager_F";
		scope = 2;
		displayName = "Simulation Manager";
		category = "ObjectModifiers";
		function = "BIS_fnc_moduleSimulationManager";
		isGlobal = 0;
		isPersistent = 1;
		isTriggerActivated = 1;
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			class Radius: Default //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Default, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleSimulationManager_F_Radius";
				displayName = "Radius:";
				tooltip = "Distance from playable units at which objects will stop being simulated.";
				defaultValue = "2000";
				control = "EditShort";
				validate = "NUMBER";
			};
			class ExcludeAir: CheckboxNumber //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/CheckboxNumber, sources - ["A3_Modules_F_ObjectModifiers"]
			{
				property = "ModuleSimulationManager_F_ExcludeAir";
				displayName = "Exclude air units:";
				tooltip = "";
				defaultValue = "1";
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments //sources - ["A3_Modules_F_ObjectModifiers"]
		{
			class radius //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Radius:";
				description = "Distance from playable units at which objects will stop being simulated.";
				typeName = "NUMBER";
				defaultValue = 2000;
			};
			class excludeAir //sources - ["A3_Modules_F_ObjectModifiers"]
			{
				displayName = "Exclude air units:";
				description = "";
				typeName = "NUMBER";
				class values //sources - ["A3_Modules_F_ObjectModifiers"]
				{
					class Yes //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "Yes";
						value = 1;
						default = 1;
					};
					class No //sources - ["A3_Modules_F_ObjectModifiers"]
					{
						name = "No";
						value = 0;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_ObjectModifiers"]
		{
			description = "Keep all AI units disabled until someone from the player's group gets near.";
		};
	};
	class Site_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Sites"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Site_F";
		category = "Sites";
		isGlobal = 2;
		function = "BIS_fnc_moduleSiteInit";
		class EventHandlers //sources - ["A3_Modules_F_Sites"]
		{
			init = "				if (isNil 'BIS_initSitesRunning') then {					BIS_initSitesRunning = TRUE;					['[SITES] Modules config init'] call BIS_fnc_logFormat;					if (isServer) then {execVM '\A3\modules_f\sites\init_core.sqf'} else {execVM '\A3\modules_f\sites\init_client.sqf'};				};			";
		};
	};
	class Site_Military_Base: Site_F //inherits 6 parameters from bin\config.bin/CfgVehicles/Site_F, sources - ["A3_Modules_F_Sites"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Site_Military_Base";
		scope = 0;
		displayName = "";
		class Arguments //sources - ["A3_Modules_F_Sites"]
		{
			class faction //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Faction:";
				description = "";
			};
			class siteType //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Type:";
				description = "";
				class values //sources - ["A3_Modules_F_Sites"]
				{
					class Military_TCP //sources - ["A3_Modules_F_Sites"]
					{
						name = "Traffic Checkpoint";
						value = "Military_TCP";
						default = 0;
					};
					class Military_OP //sources - ["A3_Modules_F_Sites"]
					{
						name = "Observation Post";
						value = "Military_OP";
						default = 1;
					};
					class Military_Base //sources - ["A3_Modules_F_Sites"]
					{
						name = "Base";
						value = "Military_Base";
						default = 0;
					};
					class Military_FB //sources - ["A3_Modules_F_Sites"]
					{
						name = "Firebase";
						value = "Military_FB";
						default = 0;
					};
					class Military_site_radar //sources - ["A3_Modules_F_Sites"]
					{
						name = "Radar Site";
						value = "Military_site_radar";
						default = 0;
					};
					class Military_site_AAA //sources - ["A3_Modules_F_Sites"]
					{
						name = "Anti-Air Site";
						value = "Military_site_AAA";
						default = 0;
					};
				};
			};
			class description //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Text:";
				description = "Site name shown on the map. If left empty, Type is used.";
				type = "STRING";
			};
			class shape //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Shape:";
				description = "";
				class values //sources - ["A3_Modules_F_Sites"]
				{
					class Ellipse //sources - ["A3_Modules_F_Sites"]
					{
						name = "Ellipse";
						value = "ellipse";
						default = 1;
					};
					class Rectangle //sources - ["A3_Modules_F_Sites"]
					{
						name = "Rectangle";
						value = "rectangle";
						default = 0;
					};
				};
			};
			class axisA //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Axis a:";
				description = "";
				defaultValue = "200";
				type = "STRING";
			};
			class axisB //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Axis b:";
				description = "";
				defaultValue = "200";
				type = "STRING";
			};
			class interactive //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Interactive:";
				description = "The Site can be discovered and owned.";
				class values //sources - ["A3_Modules_F_Sites"]
				{
					class Yes_Feedback //sources - ["A3_Modules_F_Sites"]
					{
						name = "Yes, with on-screen info";
						value = "Yes_Feedback";
						default = 0;
					};
					class Yes //sources - ["A3_Modules_F_Sites"]
					{
						name = "Yes";
						value = "Yes";
						default = 0;
					};
					class No //sources - ["A3_Modules_F_Sites"]
					{
						name = "No";
						value = "No";
						default = 1;
					};
				};
			};
			class fastTravel //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Fast Travel:";
				description = "Ability to quickly move to this Site.";
				class values //sources - ["A3_Modules_F_Sites"]
				{
					class Enabled //sources - ["A3_Modules_F_Sites"]
					{
						name = "Enabled";
						value = "Enabled";
						default = 0;
					};
					class Enabled_visited //sources - ["A3_Modules_F_Sites"]
					{
						name = "Enabled when visited";
						value = "Enabled when visited";
						default = 0;
					};
					class Enabled_owned //sources - ["A3_Modules_F_Sites"]
					{
						name = "Enabled when owned";
						value = "Enabled when owned";
						default = 0;
					};
					class Disabled //sources - ["A3_Modules_F_Sites"]
					{
						name = "Disabled";
						value = "Disabled";
						default = 1;
					};
				};
			};
			class buildingOccupationIndex //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Building occupation:";
				description = "How many soldiers will occupy military buildings. Index ranging from 0 to 1.";
				defaultValue = "0.5";
				type = "STRING";
			};
			class conditionOfPresence //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Condition:";
				description = "This condition must be completed before the Site is initialized.";
				defaultValue = "TRUE";
				type = "STRING";
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Sites"]
		{
			description = "Sites are used to quickly populate places on the map with units, animals, mines etc. Military Sites will spawn soldiers in nearby military buildings.";
			position = 1;
			direction = 1;
		};
	};
	class Site_FT_Base: Site_F //inherits 6 parameters from bin\config.bin/CfgVehicles/Site_F, sources - ["A3_Modules_F_Sites"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Site_FT_Base";
		scope = 0;
		displayName = "";
		class Arguments //sources - ["A3_Modules_F_Sites"]
		{
			class faction //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Faction:";
				description = "";
			};
			class siteType //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Type:";
				description = "";
			};
			class description //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Text:";
				description = "Site name shown on the map. If left empty, Type is used.";
				type = "STRING";
			};
			class shape //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Shape:";
				description = "";
				class values //sources - ["A3_Modules_F_Sites"]
				{
					class Ellipse //sources - ["A3_Modules_F_Sites"]
					{
						name = "Ellipse";
						value = "ellipse";
						default = 1;
					};
					class Rectangle //sources - ["A3_Modules_F_Sites"]
					{
						name = "Rectangle";
						value = "rectangle";
						default = 0;
					};
				};
			};
			class axisA //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Axis a:";
				description = "";
				defaultValue = "50";
				type = "STRING";
			};
			class axisB //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Axis b:";
				description = "";
				defaultValue = "50";
				type = "STRING";
			};
			class interactive //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Interactive:";
				description = "The Site can be discovered and owned.";
				class values //sources - ["A3_Modules_F_Sites"]
				{
					class Yes_Feedback //sources - ["A3_Modules_F_Sites"]
					{
						name = "Yes, with on-screen info";
						value = "Yes_Feedback";
						default = 0;
					};
					class Yes //sources - ["A3_Modules_F_Sites"]
					{
						name = "Yes";
						value = "Yes";
						default = 0;
					};
					class No //sources - ["A3_Modules_F_Sites"]
					{
						name = "No";
						value = "No";
						default = 1;
					};
				};
			};
			class fastTravel //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Fast Travel:";
				description = "Ability to quickly move to this Site.";
				class values //sources - ["A3_Modules_F_Sites"]
				{
					class Enabled //sources - ["A3_Modules_F_Sites"]
					{
						name = "Enabled";
						value = "Enabled";
						default = 0;
					};
					class Enabled_visited //sources - ["A3_Modules_F_Sites"]
					{
						name = "Enabled when visited";
						value = "Enabled when visited";
						default = 0;
					};
					class Enabled_owned //sources - ["A3_Modules_F_Sites"]
					{
						name = "Enabled when owned";
						value = "Enabled when owned";
						default = 0;
					};
					class Disabled //sources - ["A3_Modules_F_Sites"]
					{
						name = "Disabled";
						value = "Disabled";
						default = 1;
					};
				};
			};
		};
		class conditionOfPresence //sources - ["A3_Modules_F_Sites"]
		{
			displayName = "Condition:";
			description = "This condition must be completed before the Site is initialized.";
			defaultValue = "TRUE";
			type = "STRING";
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Sites"]
		{
			description = "Sites are used to quickly populate places on the map with units, animals, mines etc. Military Sites will spawn soldiers in nearby military buildings.";
			position = 1;
			direction = 1;
		};
	};
	class Site_BLUFOR: Site_Military_Base //inherits 6 parameters from bin\config.bin/CfgVehicles/Site_Military_Base, sources - ["A3_Modules_F_Sites"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Site_BLUFOR";
		scope = 2;
		displayName = "BLUFOR Site";
		class Arguments: Arguments //inherits 10 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments, sources - ["A3_Modules_F_Sites"]
		{
			class faction: faction //inherits 2 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments/faction, sources - ["A3_Modules_F_Sites"]
			{
				class values //sources - ["A3_Modules_F_Sites"]
				{
					class NATO //sources - ["A3_Modules_F_Sites"]
					{
						name = "NATO";
						value = "Blue";
						default = 1;
					};
				};
			};
			class siteType: siteType //inherits 3 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments/siteType, sources - []
			{
			};
			class description: description //inherits 3 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments/description, sources - []
			{
			};
			class shape: shape //inherits 3 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments/shape, sources - []
			{
			};
			class axisA: axisA //inherits 4 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments/axisA, sources - []
			{
			};
			class axisB: axisB //inherits 4 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments/axisB, sources - []
			{
			};
			class interactive: interactive //inherits 3 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments/interactive, sources - []
			{
			};
			class fastTravel: fastTravel //inherits 3 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments/fastTravel, sources - []
			{
			};
			class buildingOccupationIndex: buildingOccupationIndex //inherits 4 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments/buildingOccupationIndex, sources - []
			{
			};
			class conditionOfPresence: conditionOfPresence //inherits 4 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments/conditionOfPresence, sources - []
			{
			};
		};
	};
	class Site_OPFOR: Site_Military_Base //inherits 6 parameters from bin\config.bin/CfgVehicles/Site_Military_Base, sources - ["A3_Modules_F_Sites"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Site_OPFOR";
		scope = 2;
		displayName = "OPFOR Site";
		class Arguments: Arguments //inherits 10 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments, sources - ["A3_Modules_F_Sites"]
		{
			class faction: faction //inherits 2 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments/faction, sources - ["A3_Modules_F_Sites"]
			{
				class values //sources - ["A3_Modules_F_Sites"]
				{
					class Iran //sources - ["A3_Modules_F_Sites"]
					{
						name = "CSAT";
						value = "Red";
						default = 1;
					};
				};
			};
			class siteType: siteType //inherits 3 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments/siteType, sources - []
			{
			};
			class description: description //inherits 3 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments/description, sources - []
			{
			};
			class shape: shape //inherits 3 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments/shape, sources - []
			{
			};
			class axisA: axisA //inherits 4 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments/axisA, sources - []
			{
			};
			class axisB: axisB //inherits 4 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments/axisB, sources - []
			{
			};
			class interactive: interactive //inherits 3 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments/interactive, sources - []
			{
			};
			class fastTravel: fastTravel //inherits 3 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments/fastTravel, sources - []
			{
			};
			class buildingOccupationIndex: buildingOccupationIndex //inherits 4 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments/buildingOccupationIndex, sources - []
			{
			};
			class conditionOfPresence: conditionOfPresence //inherits 4 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments/conditionOfPresence, sources - []
			{
			};
		};
	};
	class Site_Independent: Site_Military_Base //inherits 6 parameters from bin\config.bin/CfgVehicles/Site_Military_Base, sources - ["A3_Modules_F_Sites"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Site_Independent";
		scope = 2;
		displayName = "Independents Site";
		class Arguments: Arguments //inherits 10 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments, sources - ["A3_Modules_F_Sites"]
		{
			class faction: faction //inherits 2 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments/faction, sources - ["A3_Modules_F_Sites"]
			{
				class values //sources - ["A3_Modules_F_Sites"]
				{
					class Green_army //sources - ["A3_Modules_F_Sites"]
					{
						name = "AAF";
						value = "Green_army";
						default = 1;
					};
					class Green_para //sources - ["A3_Modules_F_Sites"]
					{
						name = "FIA";
						value = "Green_para";
						default = 0;
					};
				};
			};
			class siteType: siteType //inherits 3 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments/siteType, sources - []
			{
			};
			class description: description //inherits 3 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments/description, sources - []
			{
			};
			class shape: shape //inherits 3 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments/shape, sources - []
			{
			};
			class axisA: axisA //inherits 4 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments/axisA, sources - []
			{
			};
			class axisB: axisB //inherits 4 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments/axisB, sources - []
			{
			};
			class interactive: interactive //inherits 3 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments/interactive, sources - []
			{
			};
			class fastTravel: fastTravel //inherits 3 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments/fastTravel, sources - []
			{
			};
			class buildingOccupationIndex: buildingOccupationIndex //inherits 4 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments/buildingOccupationIndex, sources - []
			{
			};
			class conditionOfPresence: conditionOfPresence //inherits 4 parameters from bin\config.bin/CfgVehicles/Site_Military_Base/Arguments/conditionOfPresence, sources - []
			{
			};
		};
	};
	class Site_Ambient: Site_F //inherits 6 parameters from bin\config.bin/CfgVehicles/Site_F, sources - ["A3_Modules_F_Sites"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Site_Ambient";
		displayName = "Animals";
		category = "Sites";
		scope = 2;
		class Arguments //sources - ["A3_Modules_F_Sites"]
		{
			class siteType //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Type:";
				description = "";
				class values //sources - ["A3_Modules_F_Sites"]
				{
					class Animal_dog //sources - ["A3_Modules_F_Sites"]
					{
						name = "Dogs";
						value = "Animal_dog";
						default = 1;
					};
					class Animal_goat //sources - ["A3_Modules_F_Sites"]
					{
						name = "Goats";
						value = "Animal_goat";
						default = 0;
					};
					class Animal_poultry //sources - ["A3_Modules_F_Sites"]
					{
						name = "Poultry";
						value = "Animal_poultry";
						default = 0;
					};
					class Animal_sheep //sources - ["A3_Modules_F_Sites"]
					{
						name = "Sheep";
						value = "Animal_sheep";
						default = 0;
					};
				};
			};
			class animalCount //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Animals";
				description = "";
				typeName = "NUMBER";
				defaultValue = 5;
			};
			class radius //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Radius";
				description = "";
				typeName = "NUMBER";
				defaultValue = 10;
			};
			class animalsInRadius //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Stay in area";
				description = "Animals stay close to the site (how much close depends on radius).";
				class values //sources - ["A3_Modules_F_Sites"]
				{
					class True //sources - ["A3_Modules_F_Sites"]
					{
						name = "True";
						typeName = "NUMBER";
						value = 1;
						default = 1;
					};
					class False //sources - ["A3_Modules_F_Sites"]
					{
						name = "False";
						typeName = "NUMBER";
						value = 0;
						default = 0;
					};
				};
			};
		};
		class conditionOfPresence //sources - ["A3_Modules_F_Sites"]
		{
			displayName = "Condition:";
			description = "This condition must be completed before the Site is initialized.";
			defaultValue = "TRUE";
			type = "STRING";
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Sites"]
		{
			description = "Sites are used to quickly populate places on the map with units, animals, mines etc. Military Sites will spawn soldiers in nearby military buildings.";
			position = 1;
			direction = 1;
		};
	};
	class Site_Empty: Site_FT_Base //inherits 7 parameters from bin\config.bin/CfgVehicles/Site_FT_Base, sources - ["A3_Modules_F_Sites"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Site_Empty";
		scope = 2;
		displayName = "Empty Site";
		class Arguments: Arguments //inherits 8 parameters from bin\config.bin/CfgVehicles/Site_FT_Base/Arguments, sources - ["A3_Modules_F_Sites"]
		{
			class faction: faction //inherits 2 parameters from bin\config.bin/CfgVehicles/Site_FT_Base/Arguments/faction, sources - ["A3_Modules_F_Sites"]
			{
				class values //sources - ["A3_Modules_F_Sites"]
				{
					class None //sources - ["A3_Modules_F_Sites"]
					{
						name = "";
						value = "None";
						default = 1;
					};
				};
			};
			class siteType: siteType //inherits 2 parameters from bin\config.bin/CfgVehicles/Site_FT_Base/Arguments/siteType, sources - ["A3_Modules_F_Sites"]
			{
				class values //sources - ["A3_Modules_F_Sites"]
				{
					class Marina_Military_Range //sources - ["A3_Modules_F_Sites"]
					{
						name = "Agia Marina Military Range";
						value = "Marina_Military_Range";
						default = 1;
					};
				};
			};
			class description: description //inherits 3 parameters from bin\config.bin/CfgVehicles/Site_FT_Base/Arguments/description, sources - []
			{
			};
			class shape: shape //inherits 3 parameters from bin\config.bin/CfgVehicles/Site_FT_Base/Arguments/shape, sources - []
			{
			};
			class axisA: axisA //inherits 4 parameters from bin\config.bin/CfgVehicles/Site_FT_Base/Arguments/axisA, sources - []
			{
			};
			class axisB: axisB //inherits 4 parameters from bin\config.bin/CfgVehicles/Site_FT_Base/Arguments/axisB, sources - []
			{
			};
			class interactive: interactive //inherits 3 parameters from bin\config.bin/CfgVehicles/Site_FT_Base/Arguments/interactive, sources - []
			{
			};
			class fastTravel: fastTravel //inherits 3 parameters from bin\config.bin/CfgVehicles/Site_FT_Base/Arguments/fastTravel, sources - []
			{
			};
		};
	};
	class Site_Minefield: Site_F //inherits 6 parameters from bin\config.bin/CfgVehicles/Site_F, sources - ["A3_Modules_F_Sites"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Site_Minefield";
		scope = 2;
		displayName = "Minefield";
		class Arguments //sources - ["A3_Modules_F_Sites"]
		{
			class side //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Placed by:";
				description = "The minefield will be revealed for units friendly to this side.";
				class values //sources - ["A3_Modules_F_Sites"]
				{
					class BLUFOR //sources - ["A3_Modules_F_Sites"]
					{
						name = "BLUFOR";
						value = "BLUFOR";
						default = 0;
					};
					class OPFOR //sources - ["A3_Modules_F_Sites"]
					{
						name = "OPFOR";
						value = "OPFOR";
						default = 0;
					};
					class Independent //sources - ["A3_Modules_F_Sites"]
					{
						name = "Independent";
						value = "Independent";
						default = 0;
					};
					class SideUnknown //sources - ["A3_Modules_F_Sites"]
					{
						name = "Unknown";
						value = "Empty";
						default = 1;
					};
				};
			};
			class shape //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Shape:";
				description = "";
				class values //sources - ["A3_Modules_F_Sites"]
				{
					class Ellipse //sources - ["A3_Modules_F_Sites"]
					{
						name = "Ellipse";
						value = "ellipse";
						default = 1;
					};
					class Rectangle //sources - ["A3_Modules_F_Sites"]
					{
						name = "Rectangle";
						value = "rectangle";
						default = 0;
					};
				};
			};
			class axisA //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Axis a:";
				description = "";
				defaultValue = "50";
				type = "STRING";
			};
			class axisB //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Axis b:";
				description = "";
				defaultValue = "50";
				type = "STRING";
			};
			class minesType //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Mines used:";
				description = "";
				class values //sources - ["A3_Modules_F_Sites"]
				{
					class APERSBoundingMine //sources - ["A3_Modules_F_Sites"]
					{
						name = "APERS Bounding Mine";
						value = "APERSBoundingMine";
						default = 1;
					};
					class APERSMine //sources - ["A3_Modules_F_Sites"]
					{
						name = "APERS Mine";
						value = "APERSMine";
						default = 0;
					};
					class APERSTripMine //sources - ["A3_Modules_F_Sites"]
					{
						name = "APERS Tripwire Mine";
						value = "APERSTripMine";
						default = 0;
					};
					class ATMine //sources - ["A3_Modules_F_Sites"]
					{
						name = "AT Mine";
						value = "ATMine";
						default = 0;
					};
					class SLAMDirectionalMine //sources - ["A3_Modules_F_Sites"]
					{
						name = "M6 SLAM Mine";
						value = "SLAMDirectionalMine";
						default = 0;
					};
					class UnderwaterMineAB //sources - ["A3_Modules_F_Sites"]
					{
						name = "Naval Mine (Bottom)";
						value = "UnderwaterMineAB";
						default = 0;
					};
					class UnderwaterMine //sources - ["A3_Modules_F_Sites"]
					{
						name = "Naval Mine (Moored)";
						value = "UnderwaterMine";
						default = 0;
					};
				};
			};
			class minesCount //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Amount of mines:";
				description = "";
				defaultValue = "50";
				type = "STRING";
			};
			class marked //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Marked in map:";
				description = "";
				class values //sources - ["A3_Modules_F_Sites"]
				{
					class Friendlies //sources - ["A3_Modules_F_Sites"]
					{
						name = "For friendlies only";
						value = "Friendlies";
						default = 1;
					};
					class Everyone //sources - ["A3_Modules_F_Sites"]
					{
						name = "For everyone";
						value = "Everyone";
						default = 0;
					};
					class No //sources - ["A3_Modules_F_Sites"]
					{
						name = "No";
						value = "No";
						default = 0;
					};
				};
			};
			class conditionOfPresence //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Condition:";
				description = "This condition must be completed before the Site is initialized.";
				defaultValue = "TRUE";
				type = "STRING";
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Sites"]
		{
			description = "Sites are used to quickly populate places on the map with units, animals, mines etc. Military Sites will spawn soldiers in nearby military buildings.";
			position = 1;
			direction = 1;
		};
	};
	class Site_Patrol: Site_F //inherits 6 parameters from bin\config.bin/CfgVehicles/Site_F, sources - ["A3_Modules_F_Sites"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Site_Patrol";
		scope = 2;
		displayName = "Random Patrol";
		class Arguments //sources - ["A3_Modules_F_Sites"]
		{
			class groupsPool //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Groups pool:";
				description = "Group config entries.";
				defaultValue = "[]";
				type = "STRING";
			};
			class waypointsPool //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Waypoints pool:";
				description = "Units to copy waypoints from.";
				defaultValue = "[]";
				type = "STRING";
			};
			class conditionOfPresence //sources - ["A3_Modules_F_Sites"]
			{
				displayName = "Condition:";
				description = "This condition must be completed before the Site is initialized.";
				defaultValue = "TRUE";
				type = "STRING";
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Sites"]
		{
			description = "Synchronize any number of patrol group leaders and civilian units with some waypoints with this Site. It will pick a random group, assign it a random path (made of the civilian waypoints) and delete the rest.";
			sync[] = {"AnyAI"};
			class AnyAI: AnyAI //inherits 3 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription/AnyAI, sources - ["A3_Modules_F_Sites"]
			{
				description = "Synchronize any number of patrol group leaders and civilian units with some waypoints with this Site. It will pick a random group, assign it a random path (made of the civilian waypoints) and delete the rest.";
				duplicate = 1;
			};
		};
	};
	class ModuleSkirmishBase_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Skirmish"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleSkirmishBase_F";
		scope = 1;
		displayName = "EditorSkirmishBase";
	};
	class ModuleSkirmishTrigger_F: ModuleSkirmishBase_F //inherits 4 parameters from bin\config.bin/CfgVehicles/ModuleSkirmishBase_F, sources - ["A3_Modules_F_Skirmish"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleSkirmishTrigger_F";
		scope = 2;
		displayName = "Skirmish: Trigger";
		function = "BIS_fnc_skirmishTrigger";
		isGlobal = 0;
		class Arguments //sources - ["A3_Modules_F_Skirmish"]
		{
			class Marker //sources - ["A3_Modules_F_Skirmish"]
			{
				displayName = "Marker:";
				description = "";
			};
			class HideMarker //sources - ["A3_Modules_F_Skirmish"]
			{
				displayName = "Hide Marker:";
				description = "";
				class Values //sources - ["A3_Modules_F_Skirmish"]
				{
					class Yes //sources - ["A3_Modules_F_Skirmish"]
					{
						name = "Yes";
						value = 1;
						default = 1;
					};
					class No //sources - ["A3_Modules_F_Skirmish"]
					{
						name = "No";
						value = 0;
					};
				};
			};
			class Destination //sources - ["A3_Modules_F_Skirmish"]
			{
				displayName = "Destination:";
				description = "";
				class Values //sources - ["A3_Modules_F_Skirmish"]
				{
					class Skirmish //sources - ["A3_Modules_F_Skirmish"]
					{
						name = "Skirmish";
						value = 0;
						default = 1;
					};
					class Hub //sources - ["A3_Modules_F_Skirmish"]
					{
						name = "Hub";
						value = 1;
					};
				};
			};
			class MissionName //sources - ["A3_Modules_F_Skirmish"]
			{
				displayName = "Mission name:";
				description = "Config name of the mission.";
			};
			class DistanceLimit //sources - ["A3_Modules_F_Skirmish"]
			{
				displayName = "Distance limit:";
				description = "The distance outside or inside the marker where, upon reaching it, the mission will end.";
				defaultValue = 100;
			};
		};
	};
	class ModuleStrategicMapModuleOpen_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_StrategicMap"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleStrategicMapModuleOpen_F";
		scope = 2;
		displayName = "Open Strategic Map";
		category = "StrategicMap";
		icon = "\A3\modules_f\data\iconStrategicMapOpen_ca.paa";
		portrait = "\A3\modules_f\data\portraitStrategicMapOpen_ca.paa";
		function = "BIS_fnc_moduleStrategicMapOpen";
		isGlobal = 1;
		isTriggerActivated = 1;
		class Arguments: ArgumentsBaseUnits //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits, sources - ["A3_Modules_F_StrategicMap"]
		{
			class Units: Units //inherits 3 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits/Units, sources - []
			{
			};
			class Overcast //sources - ["A3_Modules_F_StrategicMap"]
			{
				displayName = "Overcast";
				description = "Overcast value in range 0-1";
			};
			class Daytime //sources - ["A3_Modules_F_StrategicMap"]
			{
				displayName = "Day time";
				description = "";
				class values //sources - ["A3_Modules_F_StrategicMap"]
				{
					class Day //sources - ["A3_Modules_F_StrategicMap"]
					{
						name = "Day";
						value = "0";
						default = 1;
					};
					class Night //sources - ["A3_Modules_F_StrategicMap"]
					{
						name = "Night";
						value = "1";
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_StrategicMap"]
		{
			description = "Open a strategic map.";
			sync[] = {"ModuleStrategicMapInit_F", "AnyPlayer"};
		};
	};
	class ModuleStrategicMapInit_F: ModuleStrategicMapModuleOpen_F //inherits 12 parameters from bin\config.bin/CfgVehicles/ModuleStrategicMapModuleOpen_F, sources - ["A3_Modules_F_StrategicMap"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleStrategicMapInit_F";
		scope = 2;
		displayName = "Strategic Map";
		icon = "\A3\modules_f\data\iconStrategicMapInit_ca.paa";
		portrait = "\A3\modules_f\data\portraitStrategicMapInit_ca.paa";
		function = "BIS_fnc_moduleStrategicMapInit";
		isGlobal = 1;
		class Arguments //sources - ["A3_Modules_F_StrategicMap"]
		{
			class Markers //sources - ["A3_Modules_F_StrategicMap"]
			{
				displayName = "Markers";
				description = "";
			};
		};
		class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/ModuleStrategicMapModuleOpen_F/ModuleDescription, sources - ["A3_Modules_F_StrategicMap"]
		{
			description = "Central strategic map module.";
			sync[] = {"ModuleStrategicMapModuleOpen_F", "ModuleStrategicMapMission_F", "ModuleStrategicMapORBAT_F", "ModuleStrategicMapImage_F"};
		};
	};
	class ModuleStrategicMapMission_F: ModuleStrategicMapInit_F //inherits 10 parameters from bin\config.bin/CfgVehicles/ModuleStrategicMapInit_F, sources - ["A3_Modules_F_StrategicMap"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleStrategicMapMission_F";
		displayName = "Mission";
		icon = "\A3\modules_f\data\iconStrategicMapMission_ca.paa";
		portrait = "\A3\modules_f\data\portraitStrategicMapMission_ca.paa";
		function = "BIS_fnc_moduleStrategicMapMission";
		global = 1;
		ispersistent = 1;
		class Arguments //sources - ["A3_Modules_F_StrategicMap"]
		{
			class Code //sources - ["A3_Modules_F_StrategicMap"]
			{
				displayName = "On Activation";
				description = "";
			};
			class Title //sources - ["A3_Modules_F_StrategicMap"]
			{
				displayName = "Name";
				description = "";
			};
			class Description //sources - ["A3_Modules_F_StrategicMap"]
			{
				displayName = "Description";
				description = "";
			};
			class Player //sources - ["A3_Modules_F_StrategicMap"]
			{
				displayName = "Player";
				description = "";
			};
			class Image //sources - ["A3_Modules_F_StrategicMap"]
			{
				displayName = "Image";
				description = "";
			};
			class Size //sources - ["A3_Modules_F_StrategicMap"]
			{
				displayName = "Icon Size";
				description = "";
				class values //sources - ["A3_Modules_F_StrategicMap"]
				{
					class Normal //sources - ["A3_Modules_F_StrategicMap"]
					{
						name = "Normal";
						value = "1";
						default = 1;
					};
					class Large //sources - ["A3_Modules_F_StrategicMap"]
					{
						name = "Large";
						value = "1.5";
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/ModuleStrategicMapInit_F/ModuleDescription, sources - ["A3_Modules_F_StrategicMap"]
		{
			position = 1;
			description = "Show interactive mission icon.";
			sync[] = {"ModuleStrategicMapInit_F"};
		};
	};
	class ModuleStrategicMapORBAT_F: ModuleStrategicMapMission_F //inherits 10 parameters from bin\config.bin/CfgVehicles/ModuleStrategicMapMission_F, sources - ["A3_Modules_F_StrategicMap"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleStrategicMapORBAT_F";
		displayName = "ORBAT Group";
		icon = "\A3\modules_f\data\iconStrategicMapORBAT_ca.paa";
		portrait = "\A3\modules_f\data\portraitStrategicMapORBAT_ca.paa";
		function = "BIS_fnc_moduleStrategicMapORBAT";
		global = 1;
		ispersistent = 1;
		class Arguments //sources - ["A3_Modules_F_StrategicMap"]
		{
			class Path //sources - ["A3_Modules_F_StrategicMap"]
			{
				displayName = "CfgORBAT Path";
				description = "";
				preview = "_this call BIS_fnc_ORBATConfigPreview";
			};
			class Parent //sources - ["A3_Modules_F_StrategicMap"]
			{
				displayName = "CfgORBAT Ceiling";
				description = "";
				preview = "_this call BIS_fnc_ORBATConfigPreview";
			};
			class Tags //sources - ["A3_Modules_F_StrategicMap"]
			{
				displayName = "Tags";
				description = "";
			};
			class Tiers //sources - ["A3_Modules_F_StrategicMap"]
			{
				displayName = "Max. Tiers";
				description = "";
			};
		};
		class ModuleDescription: ModuleDescription //inherits 3 parameters from bin\config.bin/CfgVehicles/ModuleStrategicMapMission_F/ModuleDescription, sources - ["A3_Modules_F_StrategicMap"]
		{
			position = 1;
			description = "Show interactive military symbol from CfgORBAT.";
			sync[] = {"ModuleStrategicMapInit_F"};
		};
	};
	class ModuleStrategicMapImage_F: ModuleStrategicMapMission_F //inherits 10 parameters from bin\config.bin/CfgVehicles/ModuleStrategicMapMission_F, sources - ["A3_Modules_F_StrategicMap"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleStrategicMapImage_F";
		displayName = "Custom Image";
		icon = "\A3\modules_f\data\iconStrategicMapImage_ca.paa";
		portrait = "\A3\modules_f\data\portraitStrategicMapImage_ca.paa";
		function = "BIS_fnc_moduleStrategicMapImage";
		global = 1;
		ispersistent = 1;
		class Arguments //sources - ["A3_Modules_F_StrategicMap"]
		{
			class Texture //sources - ["A3_Modules_F_StrategicMap"]
			{
				displayName = "Path";
				description = "";
			};
			class Color //sources - ["A3_Modules_F_StrategicMap"]
			{
				displayName = "Color";
				description = "";
				defaultValue = "[1,1,1,1]";
			};
			class Width //sources - ["A3_Modules_F_StrategicMap"]
			{
				displayName = "Width";
				description = "";
				defaultValue = "100";
			};
			class Height //sources - ["A3_Modules_F_StrategicMap"]
			{
				displayName = "Height";
				description = "";
				defaultValue = "100";
			};
			class Text //sources - ["A3_Modules_F_StrategicMap"]
			{
				displayName = "Text";
				description = "";
			};
			class Shadow //sources - ["A3_Modules_F_StrategicMap"]
			{
				displayName = "Shadow";
				description = "";
				class values //sources - ["A3_Modules_F_StrategicMap"]
				{
					class No //sources - ["A3_Modules_F_StrategicMap"]
					{
						name = "No";
						value = "false";
						default = 1;
					};
					class Yes //sources - ["A3_Modules_F_StrategicMap"]
					{
						name = "Yes";
						value = "true";
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 3 parameters from bin\config.bin/CfgVehicles/ModuleStrategicMapMission_F/ModuleDescription, sources - ["A3_Modules_F_StrategicMap"]
		{
			position = 1;
			direction = 1;
			description = "Show non-interactive static image.";
			sync[] = {"ModuleStrategicMapInit_F"};
		};
	};
	class SupportRequester: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Supports"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "SupportRequester";
		scope = 2;
		displayName = "Support Requester";
		category = "Supports";
		function = "BIS_fnc_moduleSupportsInitRequester";
		isGlobal = 2;
		class Arguments //sources - ["A3_Modules_F_Supports"]
		{
			class BIS_SUPP_custom_HQ //sources - ["A3_Modules_F_Supports"]
			{
				displayName = "Custom HQ";
				description = "Variable name of custom HQ unit (used in radio protocol).";
				defaultValue = "";
				type = "ArgTypeTEXT";
			};
			class BIS_SUPP_limit_Artillery //sources - ["A3_Modules_F_Supports"]
			{
				displayName = "Artillery limit:";
				description = "Limit of fire missions";
				defaultValue = "-1";
				type = "ArgTypeTEXT";
			};
			class BIS_SUPP_limit_CAS_Bombing //sources - ["A3_Modules_F_Supports"]
			{
				displayName = "CAS (Bombing Run) limit:";
				description = "Limit of bombing runs";
				defaultValue = "-1";
				type = "ArgTypeTEXT";
			};
			class BIS_SUPP_limit_CAS_Heli //sources - ["A3_Modules_F_Supports"]
			{
				displayName = "CAS (Helicopter Attack) limit:";
				description = "Limit of attack helicopter runs";
				defaultValue = "-1";
				type = "ArgTypeTEXT";
			};
			class BIS_SUPP_limit_Drop //sources - ["A3_Modules_F_Supports"]
			{
				displayName = "Supply Drop limit:";
				description = "Limit of supply drops";
				defaultValue = "-1";
				type = "ArgTypeTEXT";
			};
			class BIS_SUPP_limit_Transport //sources - ["A3_Modules_F_Supports"]
			{
				displayName = "Helicopter Transport limit:";
				description = "Limit of helicopter transports";
				defaultValue = "-1";
				type = "ArgTypeTEXT";
			};
			class BIS_SUPP_limit_UAV //sources - ["A3_Modules_F_Supports"]
			{
				displayName = "UAV Recon limit:";
				description = "Limit of UAV recon runs";
				defaultValue = "-1";
				type = "ArgTypeTEXT";
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Supports"]
		{
			description = "Supports framework. A support requester unit has to be synchronized with the Requester module. The Requester module has to be synchronized with Provider module(s). A Provider module has to be synchronized with a support provider unit(s), unless a Virtual Provider module is used.";
			sync[] = {"SupportProvider_Base", "SupportProvider_Virtual_Base", "AnyPlayer"};
			class AnyPlayer: AnyPlayer //inherits 3 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription/AnyPlayer, sources - ["A3_Modules_F_Supports"]
			{
				description = "Supports framework. A support requester unit has to be synchronized with the Requester module. The Requester module has to be synchronized with Provider module(s). A Provider module has to be synchronized with a support provider unit(s), unless a Virtual Provider module is used.";
				duplicate = 1;
			};
			class SupportProvider_Virtual_Base //sources - ["A3_Modules_F_Supports"]
			{
				duplicate = 1;
				position = 1;
				direction = 1;
				optional = 1;
			};
			class SupportProvider_Base //sources - ["A3_Modules_F_Supports"]
			{
				sync[] = {"AnyVehicle"};
				duplicate = 1;
				position = 1;
				optional = 1;
			};
			class AnyVehicle: AnyVehicle //inherits 5 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription/AnyVehicle, sources - ["A3_Modules_F_Supports"]
			{
				description = "Supports framework. A support requester unit has to be synchronized with the Requester module. The Requester module has to be synchronized with Provider module(s). A Provider module has to be synchronized with a support provider unit(s), unless a Virtual Provider module is used.";
			};
		};
	};
	class SupportProvider_Base: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Supports"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "SupportProvider_Base";
		scope = 0;
		displayName = "Support Provider";
		function = "BIS_fnc_moduleSupportsInitProvider";
		isGlobal = 2;
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Supports"]
		{
			description = "Supports framework. A support requester unit has to be synchronized with the Requester module. The Requester module has to be synchronized with Provider module(s). A Provider module has to be synchronized with a support provider unit(s), unless a Virtual Provider module is used.";
			position = 1;
			sync[] = {"SupportRequester", "AnyVehicle"};
			class AnyVehicle: AnyVehicle //inherits 5 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription/AnyVehicle, sources - ["A3_Modules_F_Supports"]
			{
				description = "Supports framework. A support requester unit has to be synchronized with the Requester module. The Requester module has to be synchronized with Provider module(s). A Provider module has to be synchronized with a support provider unit(s), unless a Virtual Provider module is used.";
				duplicate = 1;
			};
			class SupportRequester //sources - ["A3_Modules_F_Supports"]
			{
				description = "Supports framework. A support requester unit has to be synchronized with the Requester module. The Requester module has to be synchronized with Provider module(s). A Provider module has to be synchronized with a support provider unit(s), unless a Virtual Provider module is used.";
				duplicate = 1;
				sync[] = {"AnyPlayer"};
			};
			class AnyPlayer: AnyPlayer //inherits 3 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription/AnyPlayer, sources - ["A3_Modules_F_Supports"]
			{
				description = "Supports framework. A support requester unit has to be synchronized with the Requester module. The Requester module has to be synchronized with Provider module(s). A Provider module has to be synchronized with a support provider unit(s), unless a Virtual Provider module is used.";
				duplicate = 1;
			};
		};
	};
	class SupportProvider_Virtual_Base: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Supports"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "SupportProvider_Virtual_Base";
		scope = 0;
		displayName = "Support Provider (Virtual)";
		function = "BIS_fnc_moduleSupportsInitProviderVirtual";
		isGlobal = 2;
		class Arguments //sources - ["A3_Modules_F_Supports"]
		{
			class BIS_SUPP_cooldown //sources - ["A3_Modules_F_Supports"]
			{
				displayName = "Cooldown:";
				description = "Support availability delay in seconds.";
				typeName = "NUMBER";
				defaultValue = 0;
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Supports"]
		{
			description = "Supports framework. A support requester unit has to be synchronized with the Requester module. The Requester module has to be synchronized with Provider module(s). A Provider module has to be synchronized with a support provider unit(s), unless a Virtual Provider module is used.";
			position = 1;
			direction = 1;
			sync[] = {"SupportRequester", "AnyVehicle"};
			class AnyVehicle: AnyVehicle //inherits 5 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription/AnyVehicle, sources - ["A3_Modules_F_Supports"]
			{
				description = "Supports framework. A support requester unit has to be synchronized with the Requester module. The Requester module has to be synchronized with Provider module(s). A Provider module has to be synchronized with a support provider unit(s), unless a Virtual Provider module is used.";
				duplicate = 1;
				optional = 1;
			};
			class SupportRequester //sources - ["A3_Modules_F_Supports"]
			{
				description = "Supports framework. A support requester unit has to be synchronized with the Requester module. The Requester module has to be synchronized with Provider module(s). A Provider module has to be synchronized with a support provider unit(s), unless a Virtual Provider module is used.";
				duplicate = 1;
			};
		};
	};
	class SupportProvider_Artillery: SupportProvider_Base //inherits 7 parameters from bin\config.bin/CfgVehicles/SupportProvider_Base, sources - ["A3_Modules_F_Supports"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "SupportProvider_Artillery";
		scope = 2;
		category = "Supports";
		displayName = "Support Provider: Artillery";
	};
	class SupportProvider_Virtual_Artillery: SupportProvider_Virtual_Base //inherits 8 parameters from bin\config.bin/CfgVehicles/SupportProvider_Virtual_Base, sources - ["A3_Modules_F_Supports"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "SupportProvider_Virtual_Artillery";
		scope = 2;
		category = "Supports";
		displayName = "Support Provider: Artillery (Virtual)";
		class Arguments: Arguments //inherits 1 parameters from bin\config.bin/CfgVehicles/SupportProvider_Virtual_Base/Arguments, sources - ["A3_Modules_F_Supports"]
		{
			class BIS_SUPP_vehicles //sources - ["A3_Modules_F_Supports"]
			{
				displayName = "Vehicle types:";
				description = "Types of vehicles available (empty array = defaults loaded)";
				defaultValue = "[]";
				type = "ArgTypeTEXT";
			};
			class BIS_SUPP_vehicleInit //sources - ["A3_Modules_F_Supports"]
			{
				displayName = "Vehicle init:";
				description = "Code executed upon vehicle spawn (affected vehicle: _this)";
				defaultValue = "";
				type = "ArgTypeTEXT";
			};
			class BIS_SUPP_filter //sources - ["A3_Modules_F_Supports"]
			{
				displayName = "Filter by:";
				description = "Default pool of vehicles to use";
				class values //sources - ["A3_Modules_F_Supports"]
				{
					class Side //sources - ["A3_Modules_F_Supports"]
					{
						name = "Side";
						value = "Side";
						default = 1;
					};
					class Faction //sources - ["A3_Modules_F_Supports"]
					{
						name = "Faction";
						value = "Faction";
						default = 0;
					};
				};
			};
			class BIS_SUPP_cooldown: BIS_SUPP_cooldown //inherits 4 parameters from bin\config.bin/CfgVehicles/SupportProvider_Virtual_Base/Arguments/BIS_SUPP_cooldown, sources - []
			{
			};
		};
	};
	class SupportProvider_CAS_Heli: SupportProvider_Base //inherits 7 parameters from bin\config.bin/CfgVehicles/SupportProvider_Base, sources - ["A3_Modules_F_Supports"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "SupportProvider_CAS_Heli";
		scope = 2;
		category = "Supports";
		displayName = "Support Provider: CAS (Helicopter Attack)";
	};
	class SupportProvider_Virtual_CAS_Heli: SupportProvider_Virtual_Base //inherits 8 parameters from bin\config.bin/CfgVehicles/SupportProvider_Virtual_Base, sources - ["A3_Modules_F_Supports"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "SupportProvider_Virtual_CAS_Heli";
		scope = 2;
		category = "Supports";
		displayName = "Support Provider: CAS (Helicopter Attack, Virtual)";
		class Arguments: Arguments //inherits 1 parameters from bin\config.bin/CfgVehicles/SupportProvider_Virtual_Base/Arguments, sources - ["A3_Modules_F_Supports"]
		{
			class BIS_SUPP_vehicles //sources - ["A3_Modules_F_Supports"]
			{
				displayName = "Vehicle types:";
				description = "Types of vehicles available (empty array = defaults loaded)";
				defaultValue = "[]";
				type = "ArgTypeTEXT";
			};
			class BIS_SUPP_vehicleInit //sources - ["A3_Modules_F_Supports"]
			{
				displayName = "Vehicle init:";
				description = "Code executed upon vehicle spawn (affected vehicle: _this)";
				defaultValue = "";
				type = "ArgTypeTEXT";
			};
			class BIS_SUPP_filter //sources - ["A3_Modules_F_Supports"]
			{
				displayName = "Filter by:";
				description = "Default pool of vehicles to use";
				class values //sources - ["A3_Modules_F_Supports"]
				{
					class Side //sources - ["A3_Modules_F_Supports"]
					{
						name = "Side";
						value = "Side";
						default = 1;
					};
					class Faction //sources - ["A3_Modules_F_Supports"]
					{
						name = "Faction";
						value = "Faction";
						default = 0;
					};
				};
			};
			class BIS_SUPP_cooldown: BIS_SUPP_cooldown //inherits 4 parameters from bin\config.bin/CfgVehicles/SupportProvider_Virtual_Base/Arguments/BIS_SUPP_cooldown, sources - []
			{
			};
		};
	};
	class SupportProvider_CAS_Bombing: SupportProvider_Base //inherits 7 parameters from bin\config.bin/CfgVehicles/SupportProvider_Base, sources - ["A3_Modules_F_Supports"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "SupportProvider_CAS_Bombing";
		scope = 2;
		category = "Supports";
		displayName = "Support Provider: CAS (Bombing Run)";
	};
	class SupportProvider_Virtual_CAS_Bombing: SupportProvider_Virtual_Base //inherits 8 parameters from bin\config.bin/CfgVehicles/SupportProvider_Virtual_Base, sources - ["A3_Modules_F_Supports"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "SupportProvider_Virtual_CAS_Bombing";
		scope = 2;
		category = "Supports";
		displayName = "Support Provider: CAS (Bombing Run, Virtual)";
		class Arguments: Arguments //inherits 1 parameters from bin\config.bin/CfgVehicles/SupportProvider_Virtual_Base/Arguments, sources - ["A3_Modules_F_Supports"]
		{
			class BIS_SUPP_vehicles //sources - ["A3_Modules_F_Supports"]
			{
				displayName = "Vehicle types:";
				description = "Types of vehicles available (empty array = defaults loaded)";
				defaultValue = "[]";
				type = "ArgTypeTEXT";
			};
			class BIS_SUPP_vehicleInit //sources - ["A3_Modules_F_Supports"]
			{
				displayName = "Vehicle init:";
				description = "Code executed upon vehicle spawn (affected vehicle: _this)";
				defaultValue = "";
				type = "ArgTypeTEXT";
			};
			class BIS_SUPP_filter //sources - ["A3_Modules_F_Supports"]
			{
				displayName = "Filter by:";
				description = "Default pool of vehicles to use";
				class values //sources - ["A3_Modules_F_Supports"]
				{
					class Side //sources - ["A3_Modules_F_Supports"]
					{
						name = "Side";
						value = "Side";
						default = 1;
					};
					class Faction //sources - ["A3_Modules_F_Supports"]
					{
						name = "Faction";
						value = "Faction";
						default = 0;
					};
				};
			};
			class BIS_SUPP_cooldown: BIS_SUPP_cooldown //inherits 4 parameters from bin\config.bin/CfgVehicles/SupportProvider_Virtual_Base/Arguments/BIS_SUPP_cooldown, sources - []
			{
			};
		};
	};
	class SupportProvider_Drop: SupportProvider_Base //inherits 7 parameters from bin\config.bin/CfgVehicles/SupportProvider_Base, sources - ["A3_Modules_F_Supports"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "SupportProvider_Drop";
		scope = 2;
		category = "Supports";
		displayName = "Support Provider: Supply Drop";
		class Arguments //sources - ["A3_Modules_F_Supports"]
		{
			class BIS_SUPP_crateInit //sources - ["A3_Modules_F_Supports"]
			{
				displayName = "Crate init:";
				description = "Code executed upon crate spawn (affected crate: _this).";
				defaultValue = "";
				type = "ArgTypeTEXT";
			};
		};
	};
	class SupportProvider_Virtual_Drop: SupportProvider_Virtual_Base //inherits 8 parameters from bin\config.bin/CfgVehicles/SupportProvider_Virtual_Base, sources - ["A3_Modules_F_Supports"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "SupportProvider_Virtual_Drop";
		scope = 2;
		category = "Supports";
		displayName = "Support Provider: Supply Drop (Virtual)";
		class Arguments: Arguments //inherits 1 parameters from bin\config.bin/CfgVehicles/SupportProvider_Virtual_Base/Arguments, sources - ["A3_Modules_F_Supports"]
		{
			class BIS_SUPP_vehicles //sources - ["A3_Modules_F_Supports"]
			{
				displayName = "Vehicle types:";
				description = "Types of vehicles available (empty array = defaults loaded)";
				defaultValue = "[]";
				type = "ArgTypeTEXT";
			};
			class BIS_SUPP_vehicleInit //sources - ["A3_Modules_F_Supports"]
			{
				displayName = "Vehicle init:";
				description = "Code executed upon vehicle spawn (affected vehicle: _this)";
				defaultValue = "";
				type = "ArgTypeTEXT";
			};
			class BIS_SUPP_crateInit //sources - ["A3_Modules_F_Supports"]
			{
				displayName = "Crate init:";
				description = "Code executed upon crate spawn (affected crate: _this).";
				defaultValue = "";
				type = "ArgTypeTEXT";
			};
			class BIS_SUPP_filter //sources - ["A3_Modules_F_Supports"]
			{
				displayName = "Filter by:";
				description = "Default pool of vehicles to use";
				class values //sources - ["A3_Modules_F_Supports"]
				{
					class Side //sources - ["A3_Modules_F_Supports"]
					{
						name = "Side";
						value = "Side";
						default = 1;
					};
					class Faction //sources - ["A3_Modules_F_Supports"]
					{
						name = "Faction";
						value = "Faction";
						default = 0;
					};
				};
			};
			class BIS_SUPP_cooldown: BIS_SUPP_cooldown //inherits 4 parameters from bin\config.bin/CfgVehicles/SupportProvider_Virtual_Base/Arguments/BIS_SUPP_cooldown, sources - []
			{
			};
		};
	};
	class SupportProvider_Transport: SupportProvider_Base //inherits 7 parameters from bin\config.bin/CfgVehicles/SupportProvider_Base, sources - ["A3_Modules_F_Supports"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "SupportProvider_Transport";
		scope = 2;
		category = "Supports";
		displayName = "Support Provider: Helicopter Transport";
	};
	class SupportProvider_Virtual_Transport: SupportProvider_Virtual_Base //inherits 8 parameters from bin\config.bin/CfgVehicles/SupportProvider_Virtual_Base, sources - ["A3_Modules_F_Supports"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "SupportProvider_Virtual_Transport";
		scope = 2;
		category = "Supports";
		displayName = "Support Provider: Helicopter Transport (Virtual)";
		class Arguments: Arguments //inherits 1 parameters from bin\config.bin/CfgVehicles/SupportProvider_Virtual_Base/Arguments, sources - ["A3_Modules_F_Supports"]
		{
			class BIS_SUPP_vehicles //sources - ["A3_Modules_F_Supports"]
			{
				displayName = "Vehicle types:";
				description = "Types of vehicles available (empty array = defaults loaded)";
				defaultValue = "[]";
				type = "ArgTypeTEXT";
			};
			class BIS_SUPP_vehicleInit //sources - ["A3_Modules_F_Supports"]
			{
				displayName = "Vehicle init:";
				description = "Code executed upon vehicle spawn (affected vehicle: _this)";
				defaultValue = "";
				type = "ArgTypeTEXT";
			};
			class BIS_SUPP_filter //sources - ["A3_Modules_F_Supports"]
			{
				displayName = "Filter by:";
				description = "Default pool of vehicles to use";
				class values //sources - ["A3_Modules_F_Supports"]
				{
					class Side //sources - ["A3_Modules_F_Supports"]
					{
						name = "Side";
						value = "Side";
						default = 1;
					};
					class Faction //sources - ["A3_Modules_F_Supports"]
					{
						name = "Faction";
						value = "Faction";
						default = 0;
					};
				};
			};
			class BIS_SUPP_cooldown: BIS_SUPP_cooldown //inherits 4 parameters from bin\config.bin/CfgVehicles/SupportProvider_Virtual_Base/Arguments/BIS_SUPP_cooldown, sources - []
			{
			};
		};
	};
	class ModuleFiringDrill_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Beta_FiringDrills"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleFiringDrill_F";
		scope = 1;
		displayName = "Firing Drill";
		category = "FiringDrills";
		function = "BIS_fnc_moduleFiringDrill";
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisposable = 0;
	};
	class ModulePoster_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_EPB_Misc"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModulePoster_F";
		scope = 2;
		displayName = "Posters";
		function = "BIS_fnc_modulePoster";
		class Arguments: ArgumentsBaseUnits //inherits 1 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits, sources - ["A3_Modules_F_EPB_Misc"]
		{
			class Units: Units //inherits 3 parameters from bin\config.bin/CfgVehicles/Module_F/ArgumentsBaseUnits/Units, sources - []
			{
			};
			class Radius //sources - ["A3_Modules_F_EPB_Misc"]
			{
				displayName = "Radius";
				description = "Radius of area affected by the module (affects only buildings).";
				typeName = "NUMBER";
				defaultValue = 5;
			};
			class Probability //sources - ["A3_Modules_F_EPB_Misc"]
			{
				displayName = "Density";
				description = "Quantity of leaflets and posters in given area. Value can be 0-1 (1 for maximal density).";
				typeName = "NUMBER";
				defaultValue = 0.5;
			};
			class Rotation //sources - ["A3_Modules_F_EPB_Misc"]
			{
				displayName = "Maximal rotation";
				description = "Maximal rotation of poster. Rotation is set randomly in given borders.";
				typeName = "NUMBER";
				defaultValue = 10;
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_EPB_Misc"]
		{
			description = "Creates posters and leafets on walls of buildings. Those buildings are made indestructible.";
		};
	};
	class Land_NavigLight: House //inherits 7 parameters from bin\config.bin/CfgVehicles/House, sources - ["A3_Roads_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 0.45;
		class SimpleObject //sources - ["A3_Roads_F"]
		{
			eden = 0;
			animate[] = {{"light_1_blinking", 0}};
			hide[] = {};
			verticalOffset = 4.881;
			verticalOffsetWorld = 0;
		};
		_generalMacro = "Land_NavigLight";
		scope = 1;
		scopeCurator = 0;
		displayName = "REIL";
		model = "\A3\Roads_F\Runway\RunwayLights\NavigLight.p3d";
		icon = "iconObject_circle";
		editorCategory = "EdCat_Structures";
		editorSubcategory = "EdSubcat_Airports";
		armor = 50;
		featuresize = 50;
		isLockingDisabled = 1;
		class AnimationSources //sources - ["A3_Roads_F"]
		{
			class Light_1_source //sources - ["A3_Roads_F"]
			{
				source = "MarkerLight";
				markerLight = "Light_1";
			};
		};
		class MarkerLights //sources - ["A3_Roads_F"]
		{
			class Light_1 //sources - ["A3_Roads_F"]
			{
				color[] = {0.95, 0.85, 0.15};
				ambient[] = {0, 0, 0};
				intensity = 30;
				name = "Light_1_pos";
				drawLight = 1;
				drawLightSize = 1;
				drawLightCenterSize = 0.1;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
		};
	};
	class Land_NavigLight_3_F: Land_NavigLight //inherits 16 parameters from bin\config.bin/CfgVehicles/Land_NavigLight, sources - ["A3_Roads_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 3.81;
		class SimpleObject //sources - ["A3_Roads_F"]
		{
			eden = 0;
			animate[] = {{"light_1_blinking", 0}, {"light_2_blinking", 0}, {"light_3_blinking", 0}};
			hide[] = {};
			verticalOffset = 4.881;
			verticalOffsetWorld = 0;
		};
		_generalMacro = "Land_NavigLight_3_F";
		model = "\A3\Roads_F\Runway\RunwayLights\NavigLight_3_F.p3d";
		class AnimationSources: AnimationSources //inherits 1 parameters from bin\config.bin/CfgVehicles/Land_NavigLight/AnimationSources, sources - ["A3_Roads_F"]
		{
			class Light_2_source //sources - ["A3_Roads_F"]
			{
				source = "MarkerLight";
				markerLight = "Light_2";
			};
			class Light_3_source //sources - ["A3_Roads_F"]
			{
				source = "MarkerLight";
				markerLight = "Light_3";
			};
		};
		class MarkerLights: MarkerLights //inherits 1 parameters from bin\config.bin/CfgVehicles/Land_NavigLight/MarkerLights, sources - ["A3_Roads_F"]
		{
			class Light_1: Light_1 //inherits 11 parameters from bin\config.bin/CfgVehicles/Land_NavigLight/MarkerLights/Light_1, sources - ["A3_Roads_F"]
			{
				color[] = {0.9, 0, 0};
			};
			class Light_2: Light_1 //inherits 1 parameters from bin\config.bin/CfgVehicles/Land_NavigLight_3_F/MarkerLights/Light_1, sources - ["A3_Roads_F"]
			{
				name = "Light_2_pos";
			};
			class Light_3: Light_1 //inherits 1 parameters from bin\config.bin/CfgVehicles/Land_NavigLight_3_F/MarkerLights/Light_1, sources - ["A3_Roads_F"]
			{
				name = "Light_3_pos";
			};
		};
	};
	class Land_Flush_Light_green_F: Land_NavigLight //inherits 16 parameters from bin\config.bin/CfgVehicles/Land_NavigLight, sources - ["A3_Roads_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 0.36;
		class SimpleObject //sources - ["A3_Roads_F"]
		{
			eden = 0;
			animate[] = {{"light_1_blinking", 0}};
			hide[] = {};
			verticalOffset = 0;
			verticalOffsetWorld = 0;
		};
		_generalMacro = "Land_Flush_Light_green_F";
		displayName = "Runway Edgelight";
		model = "\A3\Roads_F\Runway\RunwayLights\Flush_Light_green_F.p3d";
		class MarkerLights: MarkerLights //inherits 1 parameters from bin\config.bin/CfgVehicles/Land_NavigLight/MarkerLights, sources - ["A3_Roads_F"]
		{
			class Light_1: Light_1 //inherits 11 parameters from bin\config.bin/CfgVehicles/Land_NavigLight/MarkerLights/Light_1, sources - ["A3_Roads_F"]
			{
				color[] = {0.05, 0.65, 0.05};
			};
		};
	};
	class Land_Flush_Light_red_F: Land_Flush_Light_green_F //inherits 7 parameters from bin\config.bin/CfgVehicles/Land_Flush_Light_green_F, sources - ["A3_Roads_F"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Roads_F"]
		{
			eden = 0;
			animate[] = {{"light_1_blinking", 0}};
			hide[] = {};
			verticalOffset = 0;
			verticalOffsetWorld = 0;
		};
		_generalMacro = "Land_Flush_Light_red_F";
		model = "\A3\Roads_F\Runway\RunwayLights\Flush_Light_red_F.p3d";
		class MarkerLights: MarkerLights //inherits 1 parameters from bin\config.bin/CfgVehicles/Land_Flush_Light_green_F/MarkerLights, sources - ["A3_Roads_F"]
		{
			class Light_1: Light_1 //inherits 1 parameters from bin\config.bin/CfgVehicles/Land_Flush_Light_green_F/MarkerLights/Light_1, sources - ["A3_Roads_F"]
			{
				color[] = {0.9, 0, 0};
			};
		};
	};
	class Land_Flush_Light_yellow_F: Land_Flush_Light_green_F //inherits 7 parameters from bin\config.bin/CfgVehicles/Land_Flush_Light_green_F, sources - ["A3_Roads_F"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Roads_F"]
		{
			eden = 0;
			animate[] = {{"light_1_blinking", 0}};
			hide[] = {};
			verticalOffset = 0;
			verticalOffsetWorld = 0;
		};
		_generalMacro = "Land_Flush_Light_yellow_F";
		model = "\A3\Roads_F\Runway\RunwayLights\Flush_Light_yellow_F.p3d";
		class MarkerLights: MarkerLights //inherits 1 parameters from bin\config.bin/CfgVehicles/Land_Flush_Light_green_F/MarkerLights, sources - ["A3_Roads_F"]
		{
			class Light_1: Light_1 //inherits 1 parameters from bin\config.bin/CfgVehicles/Land_Flush_Light_green_F/MarkerLights/Light_1, sources - ["A3_Roads_F"]
			{
				color[] = {0.85, 0.85, 0.05};
			};
		};
	};
	class Land_runway_edgelight: Land_NavigLight //inherits 16 parameters from bin\config.bin/CfgVehicles/Land_NavigLight, sources - ["A3_Roads_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 0.25;
		class SimpleObject //sources - ["A3_Roads_F"]
		{
			eden = 0;
			animate[] = {{"light_1_blinking", 0}};
			hide[] = {};
			verticalOffset = 0.044;
			verticalOffsetWorld = 0;
		};
		_generalMacro = "Land_runway_edgelight";
		displayName = "Runway Edgelight";
		model = "\A3\Roads_F\Runway\RunwayLights\runway_edgelight.p3d";
		class MarkerLights: MarkerLights //inherits 1 parameters from bin\config.bin/CfgVehicles/Land_NavigLight/MarkerLights, sources - ["A3_Roads_F"]
		{
			class Light_1: Light_1 //inherits 11 parameters from bin\config.bin/CfgVehicles/Land_NavigLight/MarkerLights/Light_1, sources - ["A3_Roads_F"]
			{
				color[] = {1, 0.95, 0.85};
			};
		};
	};
	class Land_runway_edgelight_blue_F: Land_runway_edgelight //inherits 7 parameters from bin\config.bin/CfgVehicles/Land_runway_edgelight, sources - ["A3_Roads_F"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Roads_F"]
		{
			eden = 0;
			animate[] = {{"light_1_blinking", 0}};
			hide[] = {};
			verticalOffset = 0.044;
			verticalOffsetWorld = 0;
		};
		_generalMacro = "Land_runway_edgelight_blue_F";
		model = "\A3\Roads_F\Runway\RunwayLights\runway_edgelight_blue_F.p3d";
		class MarkerLights: MarkerLights //inherits 1 parameters from bin\config.bin/CfgVehicles/Land_runway_edgelight/MarkerLights, sources - ["A3_Roads_F"]
		{
			class Light_1: Light_1 //inherits 1 parameters from bin\config.bin/CfgVehicles/Land_runway_edgelight/MarkerLights/Light_1, sources - ["A3_Roads_F"]
			{
				color[] = {0.01, 0.01, 0.65};
			};
		};
	};
	class Bridge_PathLod_base_F: Building //inherits 11 parameters from bin\config.bin/CfgVehicles/Building, sources - ["A3_Structures_F_Bridges"]
	{
		author = "Bohemia Interactive";
		mapSize = 52.96;
		_generalMacro = "Bridge_PathLod_base_F";
		scope = 0;
		scopeCurator = 0;
		displayName = "";
		model = "\A3\Weapons_F\empty.p3d";
		editorCategory = "EdCat_Structures_Altis";
		editorSubcategory = "EdSubcat_Transportation";
		vehicleClass = "Structures_Infrastructure";
		destrType = "DestructNo";
		simulation = "house";
		armor = 500;
		cost = 0;
	};
	class Land_Bridge_01_PathLod_F: Bridge_PathLod_base_F //inherits 14 parameters from bin\config.bin/CfgVehicles/Bridge_PathLod_base_F, sources - ["A3_Structures_F_Bridges"]
	{
		author = "Bohemia Interactive";
		mapSize = 43.23;
		class SimpleObject //sources - ["A3_Structures_F_Bridges"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.877;
			verticalOffsetWorld = 0;
		};
		_generalMacro = "Land_Bridge_01_PathLod_F";
		scope = 1;
		scopeCurator = 0;
		displayName = "";
		model = "\A3\Structures_F\Bridges\Bridge_01_PathLod_F.p3d";
	};
	class Land_Bridge_Asphalt_PathLod_F: Bridge_PathLod_base_F //inherits 14 parameters from bin\config.bin/CfgVehicles/Bridge_PathLod_base_F, sources - ["A3_Structures_F_Bridges"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Structures_F_Bridges"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.877;
			verticalOffsetWorld = 0;
		};
		_generalMacro = "Land_Bridge_Asphalt_PathLod_F";
		scope = 1;
		scopeCurator = 0;
		displayName = "";
		model = "\A3\Structures_F\Bridges\Bridge_Asphalt_PathLod_F.p3d";
	};
	class Land_Bridge_Concrete_PathLod_F: Bridge_PathLod_base_F //inherits 14 parameters from bin\config.bin/CfgVehicles/Bridge_PathLod_base_F, sources - ["A3_Structures_F_Bridges"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Structures_F_Bridges"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.877;
			verticalOffsetWorld = 0;
		};
		_generalMacro = "Land_Bridge_Concrete_PathLod_F";
		scope = 1;
		scopeCurator = 0;
		displayName = "";
		model = "\A3\Structures_F\Bridges\Bridge_Concrete_PathLod_F.p3d";
	};
	class Land_Bridge_HighWay_PathLod_F: Bridge_PathLod_base_F //inherits 14 parameters from bin\config.bin/CfgVehicles/Bridge_PathLod_base_F, sources - ["A3_Structures_F_Bridges"]
	{
		author = "Bohemia Interactive";
		mapSize = 53.1;
		class SimpleObject //sources - ["A3_Structures_F_Bridges"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.877;
			verticalOffsetWorld = 0;
		};
		_generalMacro = "Land_Bridge_HighWay_PathLod_F";
		scope = 1;
		scopeCurator = 0;
		displayName = "";
		model = "\A3\Structures_F\Bridges\Bridge_HighWay_PathLod_F.p3d";
	};
	class Market_base_F: Thing //inherits 36 parameters from bin\config.bin/CfgVehicles/Thing, sources - ["A3_Structures_F_Civ_Market"]
	{
		author = "Bohemia Interactive";
		mapSize = 4.55;
		_generalMacro = "Market_base_F";
		scope = 0;
		scopeCurator = 0;
		displayName = "";
		model = "\A3\Weapons_F\empty.p3d";
		icon = "iconObject";
		editorCategory = "EdCat_Things";
		editorSubcategory = "EdSubcat_Market";
		vehicleClass = "Market";
		destrType = "DestructNo";
		accuracy = 1000;
		cost = 1000;
		class DestructionEffects //sources - []
		{
		};
	};
	class Land_Basket_F: Market_base_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Market_base_F, sources - ["A3_Structures_F_Civ_Market"]
	{
		author = "Bohemia Interactive";
		mapSize = 0.72;
		class SimpleObject //sources - ["A3_Structures_F_Civ_Market"]
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.345;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Basket_F.jpg";
		_generalMacro = "Land_Basket_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "Basket";
		model = "\A3\Structures_F\Civ\Market\Basket_F.p3d";
		icon = "iconObject_circle";
		simulation = "thingX";
		cost = 100;
	};
	class Land_WoodenCart_F: Market_base_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Market_base_F, sources - ["A3_Structures_F_Civ_Market"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Structures_F_Civ_Market"]
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.679;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_WoodenCart_F.jpg";
		_generalMacro = "Land_WoodenCart_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "Cart (Wooden)";
		model = "\A3\Structures_F\Civ\Market\WoodenCart_F.p3d";
		icon = "iconObject_2x5";
		simulation = "thingX";
		cost = 100;
	};
	class Land_Rope_F: Thing //inherits 36 parameters from bin\config.bin/CfgVehicles/Thing, sources - ["A3_Structures_F_Ind_WavePowerPlant"]
	{
		author = "Bohemia Interactive";
		mapSize = 0.37;
		class SimpleObject //sources - ["A3_Structures_F_Ind_WavePowerPlant"]
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 24.913;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Rope_F.jpg";
		_generalMacro = "Land_Rope_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rope";
		model = "\A3\Structures_F\Ind\WavePowerPlant\Rope_F.p3d";
		icon = "iconObject_circle";
		editorSubcategory = "EdSubcat_Seaports";
		vehicleClass = "Submerged";
		accuracy = 1000;
		class DestructionEffects //sources - []
		{
		};
	};
	class Land_WavePowerPlant_F: FloatingStructure_F //inherits 122 parameters from bin\config.bin/CfgVehicles/FloatingStructure_F, sources - ["A3_Structures_F_Ind_WavePowerPlant"]
	{
		author = "Bohemia Interactive";
		mapSize = 6.18;
		class SimpleObject //sources - ["A3_Structures_F_Ind_WavePowerPlant"]
		{
			eden = 1;
			animate[] = {};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 11.535;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_WavePowerPlant_F.jpg";
		_generalMacro = "Land_WavePowerPlant_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "Wave Powerplant";
		model = "\A3\Structures_F\Ind\WavePowerPlant\WavePowerPlant_F.p3d";
		icon = "iconObject_circle";
		editorCategory = "EdCat_Structures_Altis";
		editorSubcategory = "EdSubcat_Utilities";
		vehicleClass = "Structures_Infrastructure";
		destrType = "DestructNo";
		cost = 100000;
	};
	class Land_WavePowerPlantBroken_F: FloatingStructure_F //inherits 122 parameters from bin\config.bin/CfgVehicles/FloatingStructure_F, sources - ["A3_Structures_F_Ind_WavePowerPlant"]
	{
		author = "Bohemia Interactive";
		mapSize = 6.31;
		class SimpleObject //sources - ["A3_Structures_F_Ind_WavePowerPlant"]
		{
			eden = 1;
			animate[] = {};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 11.535;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_WavePowerPlantBroken_F.jpg";
		_generalMacro = "Land_WavePowerPlantBroken_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "Wave Powerplant (Broken)";
		model = "\A3\Structures_F\Ind\WavePowerPlant\WavePowerPlantBroken_F.p3d";
		icon = "iconObject_circle";
		editorCategory = "EdCat_Structures_Altis";
		editorSubcategory = "EdSubcat_Utilities";
		vehicleClass = "Structures_Infrastructure";
		destrType = "DestructNo";
		cost = 20000;
	};
	class Shelter_base_F: Building //inherits 11 parameters from bin\config.bin/CfgVehicles/Building, sources - ["A3_Structures_F_Mil_Shelters"]
	{
		author = "Bohemia Interactive";
		mapSize = 19.68;
		_generalMacro = "Shelter_base_F";
		scope = 0;
		scopeCurator = 0;
		displayName = "";
		model = "\A3\Weapons_F\empty.p3d";
		icon = "\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_CA.paa";
		editorCategory = "EdCat_Structures_Altis";
		editorSubcategory = "EdSubcat_Military";
		vehicleClass = "Structures_Military";
		destrType = "DestructTent";
		cost = 1000;
		side = 3;
		hiddenSelections[] = {"camo"};
	};
	class CamoNet_BLUFOR_F: Shelter_base_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Shelter_base_F, sources - ["A3_Structures_F_Mil_Shelters"]
	{
		author = "Bohemia Interactive";
		mapSize = 14.59;
		class SimpleObject //sources - ["A3_Structures_F_Mil_Shelters"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.256;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\CamoNet_BLUFOR_F.jpg";
		_generalMacro = "CamoNet_BLUFOR_F";
		scope = 2;
		scopeCurator = 0;
		displayName = "Camouflage Net (Green)";
		model = "\A3\Structures_F\Mil\Shelters\CamoNet_F.p3d";
		faction = "BLU_F";
		hiddenSelectionsTextures[] = {"\A3\Structures_F\Mil\Shelters\Data\CamoNet_BLUFOR_CA.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F\Mil\Shelters\Data\CamoNet_BLUFOR.rvmat"};
	};
	class CamoNet_OPFOR_F: CamoNet_BLUFOR_F //inherits 12 parameters from bin\config.bin/CfgVehicles/CamoNet_BLUFOR_F, sources - ["A3_Structures_F_Mil_Shelters"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Structures_F_Mil_Shelters"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.256;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\CamoNet_OPFOR_F.jpg";
		_generalMacro = "CamoNet_OPFOR_F";
		scope = 2;
		scopeCurator = 0;
		displayName = "Camouflage Net (Hex)";
		faction = "OPF_F";
		hiddenSelectionsTextures[] = {"\A3\Structures_F\Mil\Shelters\Data\CamoNet_OPFOR_CA.paa"};
	};
	class CamoNet_INDP_F: CamoNet_BLUFOR_F //inherits 12 parameters from bin\config.bin/CfgVehicles/CamoNet_BLUFOR_F, sources - ["A3_Structures_F_Mil_Shelters"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Structures_F_Mil_Shelters"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.256;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\CamoNet_INDP_F.jpg";
		_generalMacro = "CamoNet_INDP_F";
		scope = 2;
		scopeCurator = 0;
		displayName = "Camouflage Net (Digital)";
		faction = "IND_F";
		hiddenSelectionsTextures[] = {"\A3\Structures_F\Mil\Shelters\Data\CamoNet_INDP_CA.paa"};
	};
	class CamoNet_BLUFOR_open_F: CamoNet_BLUFOR_F //inherits 12 parameters from bin\config.bin/CfgVehicles/CamoNet_BLUFOR_F, sources - ["A3_Structures_F_Mil_Shelters"]
	{
		author = "Bohemia Interactive";
		mapSize = 14.46;
		class SimpleObject //sources - ["A3_Structures_F_Mil_Shelters"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.123;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\CamoNet_BLUFOR_open_F.jpg";
		_generalMacro = "CamoNet_BLUFOR_open_F";
		displayName = "Camouflage Net (Open, Green)";
		model = "\A3\Structures_F\Mil\Shelters\CamoNet_open_F.p3d";
	};
	class CamoNet_OPFOR_open_F: CamoNet_OPFOR_F //inherits 9 parameters from bin\config.bin/CfgVehicles/CamoNet_OPFOR_F, sources - ["A3_Structures_F_Mil_Shelters"]
	{
		author = "Bohemia Interactive";
		mapSize = 14.46;
		class SimpleObject //sources - ["A3_Structures_F_Mil_Shelters"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.123;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\CamoNet_OPFOR_open_F.jpg";
		_generalMacro = "CamoNet_OPFOR_open_F";
		displayName = "Camouflage Net (Open, Hex)";
		model = "\A3\Structures_F\Mil\Shelters\CamoNet_open_F.p3d";
	};
	class CamoNet_INDP_open_F: CamoNet_INDP_F //inherits 9 parameters from bin\config.bin/CfgVehicles/CamoNet_INDP_F, sources - ["A3_Structures_F_Mil_Shelters"]
	{
		author = "Bohemia Interactive";
		mapSize = 14.46;
		class SimpleObject //sources - ["A3_Structures_F_Mil_Shelters"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.123;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\CamoNet_INDP_open_F.jpg";
		_generalMacro = "CamoNet_INDP_open_F";
		displayName = "Camouflage Net (Open, Digital)";
		model = "\A3\Structures_F\Mil\Shelters\CamoNet_open_F.p3d";
	};
	class CamoNet_BLUFOR_big_F: CamoNet_BLUFOR_F //inherits 12 parameters from bin\config.bin/CfgVehicles/CamoNet_BLUFOR_F, sources - ["A3_Structures_F_Mil_Shelters"]
	{
		author = "Bohemia Interactive";
		mapSize = 19.32;
		class SimpleObject //sources - ["A3_Structures_F_Mil_Shelters"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 2.07;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\CamoNet_BLUFOR_big_F.jpg";
		_generalMacro = "CamoNet_BLUFOR_big_F";
		displayName = "Camouflage Vehicle Cover (Green)";
		model = "\A3\Structures_F\Mil\Shelters\CamoNet_Big_F.p3d";
		icon = "\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_Big_CA.paa";
	};
	class CamoNet_OPFOR_big_F: CamoNet_OPFOR_F //inherits 9 parameters from bin\config.bin/CfgVehicles/CamoNet_OPFOR_F, sources - ["A3_Structures_F_Mil_Shelters"]
	{
		author = "Bohemia Interactive";
		mapSize = 19.32;
		class SimpleObject //sources - ["A3_Structures_F_Mil_Shelters"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 2.07;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\CamoNet_OPFOR_big_F.jpg";
		_generalMacro = "CamoNet_OPFOR_big_F";
		displayName = "Camouflage Vehicle Cover (Hex)";
		model = "\A3\Structures_F\Mil\Shelters\CamoNet_Big_F.p3d";
		icon = "\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_Big_CA.paa";
	};
	class CamoNet_INDP_big_F: CamoNet_INDP_F //inherits 9 parameters from bin\config.bin/CfgVehicles/CamoNet_INDP_F, sources - ["A3_Structures_F_Mil_Shelters"]
	{
		author = "Bohemia Interactive";
		mapSize = 19.32;
		class SimpleObject //sources - ["A3_Structures_F_Mil_Shelters"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 2.07;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\CamoNet_INDP_big_F.jpg";
		_generalMacro = "CamoNet_INDP_big_F";
		displayName = "Camouflage Vehicle Cover (Digital)";
		model = "\A3\Structures_F\Mil\Shelters\CamoNet_Big_F.p3d";
		icon = "\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_Big_CA.paa";
	};
	class CamoNet_BLUFOR_Curator_F: CamoNet_BLUFOR_F //inherits 12 parameters from bin\config.bin/CfgVehicles/CamoNet_BLUFOR_F, sources - ["A3_Structures_F_Mil_Shelters"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Structures_F_Mil_Shelters"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.256;
			verticalOffsetWorld = 0;
		};
		_generalMacro = "CamoNet_BLUFOR_Curator_F";
		scope = 1;
		scopeCurator = 2;
		faction = "Default";
	};
	class CamoNet_OPFOR_Curator_F: CamoNet_OPFOR_F //inherits 9 parameters from bin\config.bin/CfgVehicles/CamoNet_OPFOR_F, sources - ["A3_Structures_F_Mil_Shelters"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Structures_F_Mil_Shelters"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.256;
			verticalOffsetWorld = 0;
		};
		_generalMacro = "CamoNet_OPFOR_Curator_F";
		scope = 1;
		scopeCurator = 2;
		faction = "Default";
	};
	class CamoNet_INDP_Curator_F: CamoNet_INDP_F //inherits 9 parameters from bin\config.bin/CfgVehicles/CamoNet_INDP_F, sources - ["A3_Structures_F_Mil_Shelters"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Structures_F_Mil_Shelters"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.256;
			verticalOffsetWorld = 0;
		};
		_generalMacro = "CamoNet_INDP_Curator_F";
		scope = 1;
		scopeCurator = 2;
		faction = "Default";
	};
	class CamoNet_BLUFOR_open_Curator_F: CamoNet_BLUFOR_open_F //inherits 7 parameters from bin\config.bin/CfgVehicles/CamoNet_BLUFOR_open_F, sources - ["A3_Structures_F_Mil_Shelters"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Structures_F_Mil_Shelters"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.123;
			verticalOffsetWorld = 0;
		};
		_generalMacro = "CamoNet_BLUFOR_open_Curator_F";
		scope = 1;
		scopeCurator = 2;
		faction = "Default";
	};
	class CamoNet_OPFOR_open_Curator_F: CamoNet_OPFOR_open_F //inherits 7 parameters from bin\config.bin/CfgVehicles/CamoNet_OPFOR_open_F, sources - ["A3_Structures_F_Mil_Shelters"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Structures_F_Mil_Shelters"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.123;
			verticalOffsetWorld = 0;
		};
		_generalMacro = "CamoNet_OPFOR_open_Curator_F";
		scope = 1;
		scopeCurator = 2;
		faction = "Default";
	};
	class CamoNet_INDP_open_Curator_F: CamoNet_INDP_open_F //inherits 7 parameters from bin\config.bin/CfgVehicles/CamoNet_INDP_open_F, sources - ["A3_Structures_F_Mil_Shelters"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Structures_F_Mil_Shelters"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.123;
			verticalOffsetWorld = 0;
		};
		_generalMacro = "CamoNet_INDP_open_Curator_F";
		scope = 1;
		scopeCurator = 2;
		faction = "Default";
	};
	class CamoNet_BLUFOR_big_Curator_F: CamoNet_BLUFOR_big_F //inherits 8 parameters from bin\config.bin/CfgVehicles/CamoNet_BLUFOR_big_F, sources - ["A3_Structures_F_Mil_Shelters"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Structures_F_Mil_Shelters"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 2.07;
			verticalOffsetWorld = 0;
		};
		_generalMacro = "CamoNet_BLUFOR_big_Curator_F";
		scope = 1;
		scopeCurator = 2;
		faction = "Default";
	};
	class CamoNet_OPFOR_big_Curator_F: CamoNet_OPFOR_big_F //inherits 8 parameters from bin\config.bin/CfgVehicles/CamoNet_OPFOR_big_F, sources - ["A3_Structures_F_Mil_Shelters"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Structures_F_Mil_Shelters"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 2.07;
			verticalOffsetWorld = 0;
		};
		_generalMacro = "CamoNet_OPFOR_big_Curator_F";
		scope = 1;
		scopeCurator = 2;
		faction = "Default";
	};
	class CamoNet_INDP_big_Curator_F: CamoNet_INDP_big_F //inherits 8 parameters from bin\config.bin/CfgVehicles/CamoNet_INDP_big_F, sources - ["A3_Structures_F_Mil_Shelters"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Structures_F_Mil_Shelters"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 2.07;
			verticalOffsetWorld = 0;
		};
		_generalMacro = "CamoNet_INDP_big_Curator_F";
		scope = 1;
		scopeCurator = 2;
		faction = "Default";
	};
	class Buoy_base_F: FloatingStructure_F //inherits 122 parameters from bin\config.bin/CfgVehicles/FloatingStructure_F, sources - ["A3_Structures_F_Naval_Buoys"]
	{
		author = "Bohemia Interactive";
		mapSize = 2.62;
		_generalMacro = "Buoy_base_F";
		scope = 0;
		scopeCurator = 0;
		displayName = "";
		model = "\A3\Weapons_F\empty.p3d";
		icon = "iconObject_circle";
		editorSubcategory = "EdSubcat_Seaports";
		destrType = "DestructNo";
		vehicleClass = "Submerged";
		cost = 100;
		accuracy = 1000;
	};
	class Land_BuoyBig_F: Buoy_base_F //inherits 13 parameters from bin\config.bin/CfgVehicles/Buoy_base_F, sources - ["A3_Structures_F_Naval_Buoys"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Structures_F_Naval_Buoys"]
		{
			eden = 1;
			animate[] = {{"light_1_blinking", 1}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 3.599;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_BuoyBig_F.jpg";
		_generalMacro = "Land_BuoyBig_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "Buoy";
		model = "\A3\Structures_F\Naval\Buoys\BuoyBig_F.p3d";
		editorCategory = "EdCat_Structures_Altis";
		cost = 3000;
		class AnimationSources //sources - ["A3_Structures_F_Naval_Buoys"]
		{
			class Light_1_source //sources - ["A3_Structures_F_Naval_Buoys"]
			{
				source = "MarkerLight";
				markerLight = "Light_1";
			};
		};
		class MarkerLights //sources - ["A3_Structures_F_Naval_Buoys"]
		{
			class Light_1 //sources - ["A3_Structures_F_Naval_Buoys"]
			{
				color[] = {1, 1, 1};
				ambient[] = {0.01, 0.01, 0.01};
				intensity = 1000;
				name = "Light_1_pos";
				blinking = 1;
				blinkingPattern[] = {0.25, 1};
				blinkingPatternGuarantee = 1;
				useFlare = 1;
				flareSize = 1.5;
				flareMaxDistance = 1500;
				activeLight = 1;
				dayLight = 0;
				drawLight = 0;
				class Attenuation //sources - ["A3_Structures_F_Naval_Buoys"]
				{
					start = 0;
					constant = 0;
					linear = 10;
					quadratic = 60;
					hardLimitStart = 3;
					hardLimitEnd = 4;
				};
			};
		};
	};
	class Land_ClutterCutter_large_F: Thing //inherits 36 parameters from bin\config.bin/CfgVehicles/Thing, sources - ["A3_Structures_F_System"]
	{
		author = "Bohemia Interactive";
		mapSize = 10;
		class SimpleObject //sources - ["A3_Structures_F_System"]
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_ClutterCutter_large_F.jpg";
		_generalMacro = "Land_ClutterCutter_large_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "Grass Cutter (Large)";
		model = "\A3\Structures_F\System\ClutterCutter_large_F.p3d";
		icon = "iconObject_circle";
		editorCategory = "EdCat_Signs";
		editorSubcategory = "EdSubcat_Helpers";
		vehicleClass = "Helpers";
		destrType = "DestructNo";
		accuracy = 1000;
		cost = 0;
		transportFuel = 0;
		class DestructionEffects //sources - []
		{
		};
	};
	class Land_ClutterCutter_medium_F: Land_ClutterCutter_large_F //inherits 18 parameters from bin\config.bin/CfgVehicles/Land_ClutterCutter_large_F, sources - ["A3_Structures_F_System"]
	{
		author = "Bohemia Interactive";
		mapSize = 5.1;
		class SimpleObject //sources - ["A3_Structures_F_System"]
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_ClutterCutter_medium_F.jpg";
		_generalMacro = "Land_ClutterCutter_medium_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "Grass Cutter (Medium)";
		model = "\A3\Structures_F\System\ClutterCutter_medium_F.p3d";
	};
	class Land_ClutterCutter_small_F: Land_ClutterCutter_large_F //inherits 18 parameters from bin\config.bin/CfgVehicles/Land_ClutterCutter_large_F, sources - ["A3_Structures_F_System"]
	{
		author = "Bohemia Interactive";
		mapSize = 1.2;
		class SimpleObject //sources - ["A3_Structures_F_System"]
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_ClutterCutter_small_F.jpg";
		_generalMacro = "Land_ClutterCutter_small_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "Grass Cutter (Small)";
		model = "\A3\Structures_F\System\ClutterCutter_small_F.p3d";
	};
	class Land_Camping_Light_F: FloatingStructure_F //inherits 122 parameters from bin\config.bin/CfgVehicles/FloatingStructure_F, sources - ["A3_Structures_F_EPB_Civ_Camping"]
	{
		author = "Bohemia Interactive";
		mapSize = 0.13;
		class SimpleObject //sources - ["A3_Structures_F_EPB_Civ_Camping"]
		{
			eden = 1;
			animate[] = {};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.119;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Camping_Light_F.jpg";
		_generalMacro = "Land_Camping_Light_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "Camping Lantern";
		model = "\A3\Structures_F_EPB\Civ\Camping\Camping_Light_F.p3d";
		icon = "iconObject_circle";
		editorCategory = "EdCat_Things";
		editorSubcategory = "EdSubcat_Lamps";
		vehicleClass = "Tents";
		destrType = "DestructNo";
		cost = 100;
		class MarkerLights //sources - ["A3_Structures_F_EPB_Civ_Camping"]
		{
			class Light_1 //sources - ["A3_Structures_F_EPB_Civ_Camping"]
			{
				color[] = {0.6, 0.8, 1};
				ambient[] = {0.006, 0.008, 0.01};
				intensity = 2000;
				name = "Light_1_pos";
				useFlare = 1;
				flareSize = 1;
				flareMaxDistance = 150;
				activeLight = 1;
				blinking = 0;
				dayLight = 0;
				drawLight = 0;
				class Attenuation //sources - ["A3_Structures_F_EPB_Civ_Camping"]
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 0.2;
					hardLimitStart = 20;
					hardLimitEnd = 30;
				};
			};
		};
	};
	class RoadCone_L_F: FloatingStructure_F //inherits 122 parameters from bin\config.bin/CfgVehicles/FloatingStructure_F, sources - ["A3_Signs_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 0.28;
		class SimpleObject //sources - ["A3_Signs_F"]
		{
			eden = 1;
			animate[] = {{"light_1_blinking", 1}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.352;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\RoadCone_L_F.jpg";
		_generalMacro = "RoadCone_L_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "Road Cone (Light)";
		model = "\A3\Signs_F\SignT\RoadCone_L_F.p3d";
		icon = "iconObject_circle";
		editorCategory = "EdCat_Signs";
		editorSubcategory = "EdSubcat_RoadSigns";
		vehicleClass = "Cargo";
		hiddenselections[] = {"camo", "camo1"};
		hiddenselectionstextures[] = {"#(argb,8,8,3)color(1,0.5,0,1.0,co)", "#(argb,8,8,3)color(1,1,1,1.0,co)"};
		class AnimationSources //sources - ["A3_Signs_F"]
		{
			class Light_1_source //sources - ["A3_Signs_F"]
			{
				source = "MarkerLight";
				markerLight = "Light_1";
			};
		};
		class MarkerLights //sources - ["A3_Signs_F"]
		{
			class Light_1 //sources - ["A3_Signs_F"]
			{
				color[] = {1, 0.7, 0};
				ambient[] = {0.001, 0, 0};
				intensity = 1000;
				name = "Light_1_pos";
				blinking = 1;
				blinkingPattern[] = {0.3, 0.7};
				blinkingPatternGuarantee = 1;
				useFlare = 1;
				flareSize = 1;
				flareMaxDistance = 400;
				activeLight = 0;
				dayLight = 0;
				drawLight = 0;
			};
		};
	};
	class RoadBarrier_F: RoadCone_F //inherits 15 parameters from bin\config.bin/CfgVehicles/RoadCone_F, sources - ["A3_Signs_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 3.12;
		class SimpleObject //sources - ["A3_Signs_F"]
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.557;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\RoadBarrier_F.jpg";
		_generalMacro = "RoadBarrier_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "Road barrier";
		model = "\A3\Signs_F\SignT\RoadBarrier_F.p3d";
		icon = "iconObject_4x1";
		armor = 200;
	};
	class RoadBarrier_small_F: RoadCone_L_F //inherits 17 parameters from bin\config.bin/CfgVehicles/RoadCone_L_F, sources - ["A3_Signs_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 0.78;
		class SimpleObject //sources - ["A3_Signs_F"]
		{
			eden = 1;
			animate[] = {{"light_1_blinking", 1}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.639;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\RoadBarrier_small_F.jpg";
		_generalMacro = "RoadBarrier_small_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "Road Barrier (Small)";
		model = "\A3\Signs_F\SignT\RoadBarrier_small_F.p3d";
		icon = "iconObject_1x1";
		armor = 200;
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
	};
	class ArrowDesk_L_F: Thing //inherits 36 parameters from bin\config.bin/CfgVehicles/Thing, sources - ["A3_Signs_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 1.49;
		class SimpleObject //sources - ["A3_Signs_F"]
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.494;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\ArrowDesk_L_F.jpg";
		_generalMacro = "ArrowDesk_L_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "Arrow Desk (left)";
		model = "\A3\Signs_F\SignT\ArrowDesk_F.p3d";
		icon = "iconObject_7x1";
		editorCategory = "EdCat_Signs";
		editorSubcategory = "EdSubcat_RoadSigns";
		vehicleClass = "Signs";
		destrType = "DestructNo";
		accuracy = 1000;
	};
	class ArrowDesk_R_F: ArrowDesk_L_F //inherits 15 parameters from bin\config.bin/CfgVehicles/ArrowDesk_L_F, sources - ["A3_Signs_F"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Signs_F"]
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.494;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\ArrowDesk_R_F.jpg";
		_generalMacro = "ArrowDesk_R_F";
		displayName = "Arrow Desk (right)";
		model = "\A3\Signs_F\SignT\ArrowDesk_R_F.p3d";
	};
	class ArrowMarker_R_F: ArrowDesk_L_F //inherits 15 parameters from bin\config.bin/CfgVehicles/ArrowDesk_L_F, sources - ["A3_Signs_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 0.2;
		class SimpleObject //sources - ["A3_Signs_F"]
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.769;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\ArrowMarker_R_F.jpg";
		_generalMacro = "ArrowMarker_R_F";
		displayName = "Arrow Marker (right)";
		model = "\A3\Signs_F\SignT\ArrowMarker_R_F.p3d";
	};
	class ArrowMarker_L_F: ArrowMarker_R_F //inherits 7 parameters from bin\config.bin/CfgVehicles/ArrowMarker_R_F, sources - ["A3_Signs_F"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Signs_F"]
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.769;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\ArrowMarker_L_F.jpg";
		_generalMacro = "ArrowMarker_L_F";
		displayName = "Arrow Marker (left)";
		model = "\A3\Signs_F\SignT\ArrowMarker_F.p3d";
	};
	class FxExploGround1: ThingEffect //inherits 10 parameters from bin\config.bin/CfgVehicles/ThingEffect, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 0.42;
		_generalMacro = "FxExploGround1";
		model = "\A3\Weapons_f\ammo\stone_2";
	};
	class FxExploGround2: ThingEffect //inherits 10 parameters from bin\config.bin/CfgVehicles/ThingEffect, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 0.46;
		_generalMacro = "FxExploGround2";
		model = "\A3\Weapons_f\ammo\stone_3";
	};
	class FxCartridge_Small: ThingEffect //inherits 10 parameters from bin\config.bin/CfgVehicles/ThingEffect, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 0.03;
		_generalMacro = "FxCartridge_Small";
		model = "\A3\Weapons_f\ammo\cartridge_small";
		submerged = 0;
		submergeSpeed = 0;
		timeToLive = 5;
		disappearAtContact = 1;
		airRotation = 1.5;
	};
	class FxCartridge_9mm: FxCartridge_Small //inherits 9 parameters from bin\config.bin/CfgVehicles/FxCartridge_Small, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "FxCartridge_9mm";
	};
	class FxCartridge_556: FxCartridge //inherits 11 parameters from bin\config.bin/CfgVehicles/FxCartridge, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "FxCartridge_556";
	};
	class FxCartridge_65: FxCartridge //inherits 11 parameters from bin\config.bin/CfgVehicles/FxCartridge, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 0.04;
		_generalMacro = "FxCartridge_65";
		model = "\A3\weapons_f\ammo\cartridge_65";
	};
	class FxCartridge_65_caseless: FxCartridge //inherits 11 parameters from bin\config.bin/CfgVehicles/FxCartridge, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 1;
		_generalMacro = "FxCartridge_65_caseless";
		timeToLive = 0;
		model = "\A3\weapons_f\empty";
	};
	class FxCartridge_762: FxCartridge //inherits 11 parameters from bin\config.bin/CfgVehicles/FxCartridge, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "FxCartridge_762";
		model = "\A3\weapons_f\ammo\cartridge_762";
	};
	class FxCartridge_127: FxCartridge //inherits 11 parameters from bin\config.bin/CfgVehicles/FxCartridge, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 0.11;
		_generalMacro = "FxCartridge_127";
		model = "\A3\weapons_f\ammo\cartridge_127";
	};
	class FxCartridge_slug: FxCartridge //inherits 11 parameters from bin\config.bin/CfgVehicles/FxCartridge, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 0.07;
		_generalMacro = "FxCartridge_slug";
		model = "\A3\weapons_f\ammo\cartridge_slug";
	};
	class LaserTargetBase: LaserTarget //inherits 25 parameters from bin\config.bin/CfgVehicles/LaserTarget, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "LaserTargetBase";
	};
	class LaserTargetCBase: LaserTargetBase //inherits 2 parameters from bin\config.bin/CfgVehicles/LaserTargetBase, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "LaserTargetCBase";
		scope = 1;
		side = 3;
	};
	class LaserTargetWBase: LaserTargetBase //inherits 2 parameters from bin\config.bin/CfgVehicles/LaserTargetBase, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "LaserTargetWBase";
		scope = 1;
		side = 0;
	};
	class LaserTargetEBase: LaserTargetBase //inherits 2 parameters from bin\config.bin/CfgVehicles/LaserTargetBase, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "LaserTargetEBase";
		scope = 1;
		side = 1;
	};
	class LaserTargetC: LaserTargetCBase //inherits 4 parameters from bin\config.bin/CfgVehicles/LaserTargetCBase, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "LaserTargetC";
		accuracy = 1000;
		weapons[] = {};
		magazines[] = {};
	};
	class LaserTargetW: LaserTargetWBase //inherits 4 parameters from bin\config.bin/CfgVehicles/LaserTargetWBase, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "LaserTargetW";
		accuracy = 1000;
		weapons[] = {};
		magazines[] = {};
	};
	class LaserTargetE: LaserTargetEBase //inherits 4 parameters from bin\config.bin/CfgVehicles/LaserTargetEBase, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "LaserTargetE";
		accuracy = 1000;
		weapons[] = {};
		magazines[] = {};
	};
	class placed_chemlight_green: All //inherits 313 parameters from bin\config.bin/CfgVehicles/All, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 0.15;
		_generalMacro = "placed_chemlight_green";
		scope = 1;
		scopeCurator = 0;
		animated = 0;
		side = 4;
		faction = "None";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Chemlights";
		vehicleClass = "mines";
		icon = "iconExplosiveAP";
		simulation = "house";
		ammo = "chemlight_green";
		displayName = "Chemlight (Green)";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa";
		model = "\A3\Weapons_f\chemlight\chemlight_green_item";
	};
	class placed_chemlight_red: placed_chemlight_green //inherits 17 parameters from bin\config.bin/CfgVehicles/placed_chemlight_green, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "placed_chemlight_red";
		ammo = "chemlight_red";
		displayName = "Chemlight (Red)";
		model = "\A3\Weapons_f\chemlight\chemlight_red_item";
	};
	class placed_chemlight_yellow: placed_chemlight_green //inherits 17 parameters from bin\config.bin/CfgVehicles/placed_chemlight_green, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "placed_chemlight_yellow";
		ammo = "chemlight_yellow";
		displayName = "Chemlight (Yellow)";
		model = "\A3\Weapons_f\chemlight\chemlight_yellow_item";
	};
	class placed_chemlight_blue: placed_chemlight_green //inherits 17 parameters from bin\config.bin/CfgVehicles/placed_chemlight_green, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "placed_chemlight_blue";
		ammo = "chemlight_blue";
		displayName = "Chemlight (Blue)";
		model = "\A3\Weapons_f\chemlight\chemlight_blue_item";
	};
	class test_EmptyObjectForBubbles: Thing //inherits 36 parameters from bin\config.bin/CfgVehicles/Thing, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 1;
		_generalMacro = "test_EmptyObjectForBubbles";
		scope = 1;
		animated = 0;
		side = 4;
		faction = "None";
		editorCategory = "EdCat_TEST";
		editorSubcategory = "EdSubcat_TEST";
		vehicleClass = "Emitters";
		simulation = "thing";
		icon = "iconExplosiveAP";
		displayName = "Underwater Bubbles";
		picture = "\A3\weapons_f\ammoBoxes\data\ui\map_AmmoBox_F_CA.paa";
		model = "\A3\Weapons_F\empty.p3d";
		class EventHandlers //sources - ["A3_Weapons_F"]
		{
			init = "(_this select 0) call compile preprocessFile """"\A3\weapons_f\data\scripts\bubbles.sqf"""";";
			deleted = "{deleteVehicle _x} forEach (_this select 0 getVariable [""""effects"""",[]])";
		};
	};
	class test_EmptyObjectForFireBig: test_EmptyObjectForBubbles //inherits 16 parameters from bin\config.bin/CfgVehicles/test_EmptyObjectForBubbles, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "test_EmptyObjectForFireBig";
		displayName = "Fire";
		class EventHandlers //sources - ["A3_Weapons_F"]
		{
			init = "(_this select 0) call compile preprocessFile """"\A3\weapons_f\data\scripts\fire.sqf"""";";
			deleted = "{deleteVehicle _x} forEach (_this select 0 getVariable [""""effects"""",[]])";
		};
	};
	class test_EmptyObjectForSmoke: test_EmptyObjectForBubbles //inherits 16 parameters from bin\config.bin/CfgVehicles/test_EmptyObjectForBubbles, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "test_EmptyObjectForSmoke";
		displayName = "Smoke";
		class EventHandlers //sources - ["A3_Weapons_F"]
		{
			init = "(_this select 0) call compile preprocessFile """"\A3\weapons_f\data\scripts\smoke.sqf"""";";
			deleted = "{deleteVehicle _x} forEach (_this select 0 getVariable [""""effects"""",[]])";
		};
	};
	class NVG_TargetBase: All //inherits 313 parameters from bin\config.bin/CfgVehicles/All, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 1;
		_generalMacro = "NVG_TargetBase";
		displayName = "NVG target";
		model = "\A3\Weapons_F\empty.p3d";
		simulation = "nvmarker";
		class NVGMarker //sources - ["A3_Weapons_F"]
		{
			diffuse[] = {0.1, 0.1, 0.1};
			ambient[] = {0.01, 0.01, 0.01};
			brightness = 0.15;
			name = "pozicni blik";
			drawLight = 1;
			drawLightSize = 0.005;
			drawLightCenterSize = 0.005;
			activeLight = 0;
			blinking = 1;
			dayLight = 0;
			onlyInNvg = 1;
			useFlare = 0;
		};
		type = 1;
		cost = 1e+015;
		armor = 500;
		threat[] = {0.2, 0.5, 1};
		weapons[] = {};
		magazines[] = {};
		nvTarget = 1;
		irTarget = 0;
		destrType = "DestructEngine";
		brightness = 0.02;
	};
	class NVG_TargetCBase: NVG_TargetBase //inherits 17 parameters from bin\config.bin/CfgVehicles/NVG_TargetBase, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "NVG_TargetCBase";
		side = 3;
		model = "\A3\Weapons_F\empty.p3d";
	};
	class NVG_TargetWBase: NVG_TargetBase //inherits 17 parameters from bin\config.bin/CfgVehicles/NVG_TargetBase, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "NVG_TargetWBase";
		side = 0;
		model = "\A3\Weapons_F\empty.p3d";
	};
	class NVG_TargetEBase: NVG_TargetBase //inherits 17 parameters from bin\config.bin/CfgVehicles/NVG_TargetBase, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "NVG_TargetEBase";
		side = 1;
		model = "\A3\Weapons_F\empty.p3d";
	};
	class NVG_TargetGBase: NVG_TargetBase //inherits 17 parameters from bin\config.bin/CfgVehicles/NVG_TargetBase, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "NVG_TargetGBase";
		side = 2;
		model = "\A3\Weapons_F\empty.p3d";
	};
	class NVG_TargetC: NVG_TargetCBase //inherits 4 parameters from bin\config.bin/CfgVehicles/NVG_TargetCBase, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "NVG_TargetC";
		scope = 1;
		accuracy = 1000;
	};
	class NVG_TargetW: NVG_TargetWBase //inherits 4 parameters from bin\config.bin/CfgVehicles/NVG_TargetWBase, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "NVG_TargetW";
		scope = 1;
		accuracy = 1000;
	};
	class NVG_TargetE: NVG_TargetEBase //inherits 4 parameters from bin\config.bin/CfgVehicles/NVG_TargetEBase, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "NVG_TargetE";
		scope = 1;
		accuracy = 1000;
	};
	class NVG_TargetG: NVG_TargetGBase //inherits 4 parameters from bin\config.bin/CfgVehicles/NVG_TargetGBase, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "NVG_TargetG";
		scope = 1;
		accuracy = 1000;
	};
	class placed_B_IR_grenade: All //inherits 313 parameters from bin\config.bin/CfgVehicles/All, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 1;
		_generalMacro = "placed_B_IR_grenade";
		scope = 2;
		animated = 0;
		side = -1;
		faction = "None";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Explosives";
		vehicleClass = "mines";
		icon = "iconExplosiveAP";
		ammo = "B_IRStrobe";
		displayName = "IR Grenade [NATO]";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa";
		model = "\A3\Weapons_F_EPB\Ammo\B_IRstrobe_F.p3d";
	};
	class placed_O_IR_grenade: placed_B_IR_grenade //inherits 15 parameters from bin\config.bin/CfgVehicles/placed_B_IR_grenade, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "placed_O_IR_grenade";
		ammo = "O_IRStrobe";
		displayName = "IR Grenade [CSAT]";
		model = "\A3\Weapons_F_EPB\Ammo\O_IRstrobe_F.p3d";
	};
	class placed_I_IR_grenade: placed_B_IR_grenade //inherits 15 parameters from bin\config.bin/CfgVehicles/placed_B_IR_grenade, sources - ["A3_Weapons_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "placed_I_IR_grenade";
		ammo = "I_IRStrobe";
		displayName = "IR Grenade [AAF]";
		model = "\A3\Weapons_F_EPB\Ammo\I_IRstrobe_F.p3d";
	};
	class Item_U_C_Scientist: Item_Base_F //inherits 6 parameters from bin\config.bin/CfgVehicles/Item_Base_F, sources - ["A3_Characters_F"]
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Scientist Clothes";
		author = "Bohemia Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems //sources - ["A3_Characters_F"]
		{
			class U_C_Scientist //sources - ["A3_Characters_F"]
			{
				name = "U_C_Scientist";
				count = 1;
			};
		};
	};
	class Item_U_C_Journalist: Item_Base_F //inherits 6 parameters from bin\config.bin/CfgVehicles/Item_Base_F, sources - ["A3_Characters_F"]
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Journalist Clothes";
		author = "Bohemia Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems //sources - ["A3_Characters_F"]
		{
			class U_C_Journalist //sources - ["A3_Characters_F"]
			{
				name = "U_C_Journalist";
				count = 1;
			};
		};
	};
	class Item_U_IG_Guerrilla_6_1: Item_Base_F //inherits 6 parameters from bin\config.bin/CfgVehicles/Item_Base_F, sources - ["A3_Characters_F"]
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "Guerilla Apparel";
		author = "Bohemia Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems //sources - ["A3_Characters_F"]
		{
			class U_IG_Guerrilla_6_1 //sources - ["A3_Characters_F"]
			{
				name = "U_IG_Guerrilla_6_1";
				count = 1;
			};
		};
	};
	class Item_U_BG_Guerrilla_6_1: Item_Base_F //inherits 6 parameters from bin\config.bin/CfgVehicles/Item_Base_F, sources - ["A3_Characters_F"]
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Guerilla Apparel";
		author = "Bohemia Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems //sources - ["A3_Characters_F"]
		{
			class U_BG_Guerrilla_6_1 //sources - ["A3_Characters_F"]
			{
				name = "U_BG_Guerrilla_6_1";
				count = 1;
			};
		};
	};
	class Item_U_OG_Guerrilla_6_1: Item_Base_F //inherits 6 parameters from bin\config.bin/CfgVehicles/Item_Base_F, sources - ["A3_Characters_F"]
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "Guerilla Apparel";
		author = "Bohemia Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems //sources - ["A3_Characters_F"]
		{
			class U_OG_Guerrilla_6_1 //sources - ["A3_Characters_F"]
			{
				name = "U_OG_Guerrilla_6_1";
				count = 1;
			};
		};
	};
	class Vest_V_Press_F: Vest_Base_F //inherits 6 parameters from bin\config.bin/CfgVehicles/Vest_Base_F, sources - ["A3_Characters_F"]
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Vest (Press)";
		author = "Bohemia Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems //sources - ["A3_Characters_F"]
		{
			class V_Press_F //sources - ["A3_Characters_F"]
			{
				name = "V_Press_F";
				count = 1;
			};
		};
	};
	class ModuleMPType_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Missions_F_Beta","A3_Missions_F_Gamma"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleMPType_F";
		isGlobal = 0;
		isTriggerActivated = 0;
		category = "Modes";
	};
	class ModuleMPTypeDefense_F: ModuleMPType_F //inherits 5 parameters from bin\config.bin/CfgVehicles/ModuleMPType_F, sources - ["A3_Missions_F_Beta","A3_Missions_F_Curator"]
	{
		scope = 2;
		icon = "\a3\Missions_F_Beta\data\img\iconMPTypeDefense_ca.paa";
		portrait = "\a3\Missions_F_Beta\data\img\portraitMPTypeDefense_ca.paa";
		function = "BIS_fnc_ModuleMPTypeDefense";
		functionPriority = 1;
		class Arguments //sources - ["A3_Missions_F_Beta","A3_Missions_F_Curator"]
		{
			class EvacWave //sources - ["A3_Missions_F_Beta"]
			{
				displayName = "Evac heli";
				description = "Evac heli will be unlocked after this wave";
				defaultValue = "5";
			};
			class WaveEndCoef //sources - ["A3_Missions_F_Beta"]
			{
				displayName = "Enemy casualty ratio";
				description = "A wave ends when only given portion of the whole wave size remains (e.g., 0.3 means wave ends when 30% of enemy wave remains)";
				defaultValue = "0.3";
			};
			class RatioInfantry //sources - ["A3_Missions_F_Beta"]
			{
				displayName = "Infantry priority";
				description = "How much will system prioritize spawning infantry";
				defaultValue = "1";
			};
			class RatioGround //sources - ["A3_Missions_F_Beta"]
			{
				displayName = "Ground vehicles priority";
				description = "How much will system prioritize spawning ground vehicles";
				defaultValue = "1";
			};
			class RatioAir //sources - ["A3_Missions_F_Beta"]
			{
				displayName = "Aircrafts priority";
				description = "How much will system prioritize spawning aircrafts";
				defaultValue = "1";
			};
			class RatioWater //sources - ["A3_Missions_F_Beta"]
			{
				displayName = "Naval priority";
				description = "How much will system prioritize spawning seacrafts";
				defaultValue = "1";
			};
			class CheatCoef //sources - ["A3_Missions_F_Curator"]
			{
				displayName = "Auto coef";
				description = "Cost coeficient applied when no Zeus is present and system creates enemies automatically.";
				defaultValue = "1";
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Missions_F_Beta"]
		{
			description[] = {"Crate Defend mode, compatible both with single- and multiplayer.", "Players are defending their base sectors against incoming enemy waves.", "When all player sectors are captured by the enemy side, they lose.", "After few waves, they can call in an evacuate helicopter and leave, leading to their victory", "Should the enemy manage to shoot down the helicopter first, players can still repel the last wave and achieve stalemate."};
			sync[] = {"ModuleSector_F", "SideEnemy", "SidePlayers"};
			class SidePlayers //sources - ["A3_Missions_F_Beta"]
			{
				description = "Sides of defending players.";
				displayName = "Player Side";
				vehicle = "SideBLUFOR_F";
				duplicate = 1;
				sync[] = {"Land_HelipadEmpty_F", "EvacHeli"};
			};
			class SideEnemy //sources - ["A3_Missions_F_Beta"]
			{
				description = "Side of attacking forces, recognized by presence of synced curator.";
				displayName = "Enemy Side";
				vehicle = "SideOPFOR_F";
				sync[] = {"LocationArea_F", "Curator_F"};
			};
			class EvacHeli: AnyAI //inherits 3 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription/AnyAI, sources - ["A3_Missions_F_Beta"]
			{
				description = "Evacuation helicopter (or just its pilot). Valid only for player sides.";
				position = 1;
				direction = 1;
			};
			class LocationArea_F //sources - ["A3_Missions_F_Beta"]
			{
				description = "";
				duplicate = 1;
				sync[] = {"TriggerArea"};
			};
			class TriggerArea: EmptyDetector //inherits 5 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription/EmptyDetector, sources - ["A3_Missions_F_Beta"]
			{
				position = 1;
				direction = 1;
				description = "Enemy units will be spawned only in this area and sent to attack player bases. Areas are unlocked one by one after each wave. The trigger will be activated once the area is active.";
				duplicate = 1;
			};
			class Land_HelipadEmpty_F //sources - ["A3_Missions_F_Beta"]
			{
				description = "Landing spot for evacuation helicopter. Valid only for player sides.";
				optional = 1;
				position = 1;
				direction = 1;
			};
			class ModuleSector_F //sources - ["A3_Missions_F_Beta"]
			{
				description = "A base players have to defend. When all bases are under enemy side control, players lose.";
				duplicate = 1;
				sync[] = {};
			};
		};
		author = "Bohemia Interactive";
		_generalMacro = "ModuleMPTypeDefense_F";
		displayName = "Defend";
	};
	class ModuleMPTypeSeize_F: ModuleMPType_F //inherits 5 parameters from bin\config.bin/CfgVehicles/ModuleMPType_F, sources - ["A3_Missions_F_Gamma","A3_Missions_F_Curator"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleMPTypeSeize_F";
		scope = 2;
		icon = "\a3\Missions_F_Gamma\data\img\iconMPTypeSeize_ca.paa";
		portrait = "\a3\Missions_F_Gamma\data\img\portraitMPTypeSeize_ca.paa";
		function = "BIS_fnc_ModuleMPTypeSeize";
		functionPriority = 1;
		class Arguments //sources - ["A3_Missions_F_Gamma","A3_Missions_F_Curator"]
		{
			class RatioInfantry //sources - ["A3_Missions_F_Gamma"]
			{
				displayName = "Infantry priority";
				description = "How much the system will prioritize spawning infantry";
				defaultValue = "1";
			};
			class RatioGround //sources - ["A3_Missions_F_Gamma"]
			{
				displayName = "Ground vehicles priority";
				description = "How much the system will prioritize spawning ground vehicles";
				defaultValue = "1";
			};
			class RatioAir //sources - ["A3_Missions_F_Gamma"]
			{
				displayName = "Aircrafts priority";
				description = "How much the system will prioritize spawning aircraft";
				defaultValue = "1";
			};
			class RatioWater //sources - ["A3_Missions_F_Gamma"]
			{
				displayName = "Naval priority";
				description = "How much the system will prioritize spawning sea crafts";
				defaultValue = "1";
			};
			class CheatCoef //sources - ["A3_Missions_F_Curator"]
			{
				displayName = "Auto coef";
				description = "Cost coeficient applied when no Zeus is present and system creates enemies automatically.";
				defaultValue = "1";
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Missions_F_Gamma"]
		{
			description[] = {"Create Seize mission mode, compatible both with single- and multiplayer.", "", "Players are capturing AI controlled sectors.", "When they seize all of them, they win.", "If they run out of time or respawn tickets, they lose", "", "Note: Curator spawning costs and limited time or respawns have to be configured separately."};
			sync[] = {"ModuleSector_F", "SidePlayers", "SideEnemy"};
			class SidePlayers //sources - ["A3_Missions_F_Gamma"]
			{
				description = "Side of attacking players.";
				displayName = "Player Side";
				vehicle = "SideBLUFOR_F";
				duplicate = 1;
				sync[] = {};
			};
			class SideEnemy //sources - ["A3_Missions_F_Gamma"]
			{
				description = "Side of defending forces, recognized by presence of synced curator.";
				displayName = "Enemy Side";
				vehicle = "SideOPFOR_F";
				sync[] = {"Curator_F"};
			};
			class Curator_F //sources - ["A3_Missions_F_Gamma"]
			{
				description = "Mark the side as enemy, curator controlled. At least one side has to be marked this way. All other sides will remain friendly, player controlled.";
				optional = 1;
			};
			class ModuleSector_F //sources - ["A3_Missions_F_Gamma"]
			{
				description = "Add a contested sector.";
				duplicate = 1;
				sync[] = {"LocationArea_F", "MiscLock_F"};
			};
			class LocationArea_F //sources - ["A3_Missions_F_Gamma"]
			{
				description = "";
				duplicate = 1;
				sync[] = {"TriggerArea"};
			};
			class TriggerArea //sources - ["A3_Missions_F_Gamma"]
			{
				position = 1;
				direction = 1;
				description = "Set the sector area. Enemy units will be spawned only in this area. When the sector is captured by a friendly side, the trigger will be activated, potentially triggering other modules synced to it (e.g., respawn module).";
				duplicate = 1;
				vehicle = "EmptyDetector";
			};
			class MiscLock_F //sources - ["A3_Missions_F_Gamma"]
			{
				description = "";
				optional = 1;
				sync[] = {"TriggerLock"};
			};
			class TriggerLock //sources - ["A3_Missions_F_Gamma"]
			{
				position = 1;
				direction = 1;
				description = "Disable enemy unit spawning in the sector when friendly units are within this area. Re-enable it in case they are gone again.";
				duplicate = 1;
				vehicle = "EmptyDetector";
			};
		};
		displayName = "Seize";
	};
	class Sound: All //inherits 313 parameters from bin\config.bin/CfgVehicles/All, sources - ["A3_Sounds_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 10;
		_generalMacro = "Sound";
		scope = 0;
		side = -1;
		animated = 0;
		vehicleClass = "Sounds";
		icon = "iconSound";
		faction = "none";
		editorCategory = "EdCat_Sounds";
		editorSubcategory = "EdSubcat_Sounds";
	};
	class Sound_Stream: Sound //inherits 11 parameters from bin\config.bin/CfgVehicles/Sound, sources - ["A3_Sounds_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Sound_Stream";
		scope = 1;
		sound = "StreamSfx";
		displayName = "Stream";
	};
	class Sound_Alarm: Sound //inherits 11 parameters from bin\config.bin/CfgVehicles/Sound, sources - ["A3_Sounds_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Sound_Alarm";
		scope = 2;
		sound = "AlarmSfx";
		displayName = "Alarm";
	};
	class Sound_Alarm2: Sound //inherits 11 parameters from bin\config.bin/CfgVehicles/Sound, sources - ["A3_Sounds_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Sound_Alarm2";
		scope = 1;
		sound = "AirAlarmSfx";
		displayName = "Alarm2";
	};
	class Sound_Fire: Sound //inherits 11 parameters from bin\config.bin/CfgVehicles/Sound, sources - ["A3_Sounds_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Sound_Fire";
		scope = 1;
		sound = "fire";
		displayName = "Fire";
	};
	class Sound_SmokeWreck1: Sound //inherits 11 parameters from bin\config.bin/CfgVehicles/Sound, sources - ["A3_Sounds_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Sound_SmokeWreck1";
		scope = 1;
		sound = "SmokeWreck1";
		displayName = "Smoking Wreck 01";
	};
	class Sound_SparklesWreck1: Sound //inherits 11 parameters from bin\config.bin/CfgVehicles/Sound, sources - ["A3_Sounds_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Sound_SparklesWreck1";
		scope = 1;
		sound = "SparklesWreck1";
		displayName = "Electric Wreck 01";
	};
	class Sound_SparklesWreck2: Sound //inherits 11 parameters from bin\config.bin/CfgVehicles/Sound, sources - ["A3_Sounds_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Sound_SparklesWreck2";
		scope = 1;
		sound = "SparklesWreck2";
		displayName = "Electric Wreck 02";
	};
	class Sound_BattlefieldExplosions: Sound //inherits 11 parameters from bin\config.bin/CfgVehicles/Sound, sources - ["A3_Sounds_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Sound_BattlefieldExplosions";
		scope = 2;
		sound = "BattlefieldExplosions";
		displayName = "Sound: Battlefield Explosions";
	};
	class Sound_BattlefieldFirefight: Sound //inherits 11 parameters from bin\config.bin/CfgVehicles/Sound, sources - ["A3_Sounds_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Sound_BattlefieldFirefight";
		scope = 2;
		sound = "BattlefieldFirefight";
		displayName = "Sound: Battlefield Firefight";
	};
	class Ejection_Seat_Base_F: Motorcycle //inherits 69 parameters from bin\config.bin/CfgVehicles/Motorcycle, sources - ["A3_Air_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Ejection_Seat_Base_F";
		reversed = 1;
		startEngine = 0;
		hasdriver = 0;
		castCargoShadow = 1;
		transportSoldier = 1;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 1;
		cargoCanEject = 0;
		driverCanEject = 0;
		ejectDeadGunner = 0;
		ejectDeadCargo = 0;
		ejectDeadDriver = 0;
		disableInventory = 1;
		radarTargetSize = 0;
		visualTargetSize = 0;
		irTargetSize = 0;
		cargoGetInAction[] = {};
		cargoGetOutAction[] = {};
		cargoAction[] = {"Pilot_Plane_Fighter_Ejection"};
		driverAction = "Pilot_Plane_Fighter_Ejection";
		getInAction = "";
		getOutAction = "";
		driverLeftHandAnimName = "";
		driverRightHandAnimName = "";
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		usePreciseGetInAction = 0;
		scope = 0;
		vehicleClass = "Objects";
		simulation = "motorcycle";
		displayName = "Ejection Seat";
		canFloat = 0;
		driveOnComponent[] = {"contact_1", "contact_2", "contact_3", "contact_4"};
		icon = "iconParachute";
		picture = "\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";
		model = "\A3\weapons_f\empty";
		occludeSoundsWhenIn = 1;
		obstructSoundsWhenIn = 1;
		soundGetIn[] = {"", 0.000316228, 1};
		soundGetOut[] = {"", 0.000316228, 1};
		soundEngine[] = {"", 1.77828, 0.9};
		soundEnviron[] = {"", 0.562341, 1};
		unitInfoType = "RscUnitInfoSoldier";
		hideUnitInfo = 1;
		destrType = "DestructNo";
		weapons[] = {};
		magazines[] = {};
		dammageHalf[] = {};
		dammageFull[] = {};
		extCameraPosition[] = {0, 3, -10};
		threat[] = {0, 0, 0};
		class ViewPilot //sources - ["A3_Air_F"]
		{
			initFov = 1;
			minFov = 0.6;
			maxFov = 1;
			initAngleX = 0;
			minAngleX = -35;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -130;
			maxAngleY = 130;
			minMoveX = -0.2;
			maxMoveX = 0.2;
			minMoveY = -0.025;
			maxMoveY = 0.1;
			minMoveZ = -0.2;
			maxMoveZ = 0.2;
		};
		class UserActions //sources - ["A3_Air_F"]
		{
			class Ejection_Seat_Eject //sources - ["A3_Air_F"]
			{
				priority = 0.05;
				shortcut = "Eject";
				displayName = "Deploy Parachute";
				condition = "player in this";
				statement = "[this] call BIS_fnc_ejectionSeatRelease";
				position = "pilotcontrol";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
		};
		class AnimationSources //sources - ["A3_Air_F"]
		{
			class HitHull //sources - ["A3_Air_F"]
			{
				hitpoint = "HitHull";
				raw = 1;
				source = "Hit";
			};
			class Rocket_Flash_hide //sources - ["A3_Air_F"]
			{
				animPeriod = 2;
				initPhase = 0;
				source = "user";
			};
		};
		fuelCapacity = 0;
		transportAmmo = 0;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;
		transportFuel = 0;
		transportRepair = 0;
		transportVehiclesCount = 0;
		transportVehiclesMass = 0;
		class TransportWeapons //sources - []
		{
		};
		class TransportMagazines //sources - []
		{
		};
		class Turrets //sources - []
		{
		};
		class Exhausts //sources - []
		{
		};
		class Reflectors //sources - []
		{
		};
		class Sounds //sources - []
		{
		};
		armor = 15;
		crewCrashProtection = 1;
		crewVulnerable = 1;
		damageResistance = 0.004;
		class HitPoints //sources - ["A3_Air_F"]
		{
			class HitHull //sources - ["A3_Air_F"]
			{
				armor = 1;
				convexComponent = "hull";
				depends = "Total";
				explosionShielding = 5;
				material = -1;
				minimalHit = 0.02;
				name = "HitHull";
				passThrough = 0.5;
				radius = 0.5;
				visual = "";
			};
		};
		class Damage //sources - ["A3_Air_F"]
		{
			tex[] = {};
			mat[] = {};
		};
	};
	class Plane_Fighter_03_Canopy_F: Plane_Canopy_Base_F //inherits 11 parameters from bin\config.bin/CfgVehicles/Plane_Canopy_Base_F, sources - ["A3_Air_F_Gamma_Plane_Fighter_03"]
	{
		author = "Bohemia Interactive";
		mapSize = 4.51;
		class SimpleObject //sources - ["A3_Air_F_Gamma_Plane_Fighter_03"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.356;
			verticalOffsetWorld = 0;
		};
		_generalMacro = "Plane_Fighter_03_Canopy_F";
		scope = 1;
		displayName = "";
		model = "\A3\Air_F_Gamma\Plane_Fighter_03\Plane_Fighter_03_canopy_F.p3d";
	};
	class Ejection_Seat_Plane_Fighter_03_base_F: Ejection_Seat_Base_F //inherits 79 parameters from bin\config.bin/CfgVehicles/Ejection_Seat_Base_F, sources - ["A3_Air_F_Gamma_Plane_Fighter_03"]
	{
		author = "Bohemia Interactive";
		mapSize = 2.35;
		_generalMacro = "Ejection_Seat_Plane_Fighter_03_base_F";
		scope = 0;
		displayName = "Ejection Seat";
		model = "\A3\Air_F_Gamma\Plane_Fighter_03\Plane_Fighter_03_ejection_seat_F.p3d";
		icon = "iconParachute";
		picture = "\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";
		driverAction = "Pilot_Plane_Fighter_Ejection";
		cargoAction[] = {"Pilot_Plane_Fighter_Ejection"};
	};
	class I_Ejection_Seat_Plane_Fighter_03_F: Ejection_Seat_Plane_Fighter_03_base_F //inherits 10 parameters from bin\config.bin/CfgVehicles/Ejection_Seat_Plane_Fighter_03_base_F, sources - ["A3_Air_F_Gamma_Plane_Fighter_03"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Air_F_Gamma_Plane_Fighter_03"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.002;
			verticalOffsetWorld = 0;
		};
		_generalMacro = "I_Ejection_Seat_Plane_Fighter_03_F";
		scope = 1;
		side = 0;
		faction = "IND_F";
		crew = "I_Fighter_Pilot_F";
	};
	class Plane_Fighter_03_wreck_F: PlaneWreck //inherits 3 parameters from bin\config.bin/CfgVehicles/PlaneWreck, sources - ["A3_Air_F_Gamma_Plane_Fighter_03"]
	{
		author = "Bohemia Interactive";
		mapSize = 11.85;
		class SimpleObject //sources - ["A3_Air_F_Gamma_Plane_Fighter_03"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = -0.089;
			verticalOffsetWorld = 0;
		};
		_generalMacro = "Plane_Fighter_03_wreck_F";
		scope = 1;
		scopeCurator = 0;
		model = "\A3\Air_F_Gamma\Plane_Fighter_03\Plane_Fighter_03_wreck_F.p3d";
		memoryPointTaskMarker = "TaskMarker_1_pos";
		typicalCargo[] = {};
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 1;
		class EventHandlers //sources - []
		{
		};
		class Armory //sources - ["A3_Air_F_Gamma_Plane_Fighter_03"]
		{
			disabled = 1;
		};
	};
	class Ship_F: Ship //inherits 70 parameters from bin\config.bin/CfgVehicles/Ship, sources - ["A3_Boat_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Ship_F";
		unitInfoType = "UnitInfoShip";
		armor = 1000;
		armorStructural = 1;
		explosionShielding = 4;
		minTotalDamageThreshold = 0.01;
		crewCrashProtection = 0.1;
		crewExplosionProtection = 0.5;
		class HitPoints //sources - ["A3_Boat_F"]
		{
			class HitEngine //sources - ["A3_Boat_F"]
			{
				armor = 1;
				material = 60;
				name = "motor";
				visual = "motor";
				passThrough = 1;
			};
		};
		enableGPS = 0;
		getInAction = "GetInMedium";
		getOutAction = "GetOutMedium";
		cargoGetInAction[] = {"GetInMedium"};
		cargoGetOutAction[] = {"GetOutMedium"};
		memoryPointsGetInGunner[] = {"pos codriver", "pos cargo"};
		memoryPointsGetInGunnerDir[] = {"pos codriver dir", "pos cargo dir"};
		memoryPointsGetInCargo[] = {"pos codriver", "pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos codriver dir", "pos cargo dir"};
		getInRadius = 5;
		htMin = 60;
		htMax = 1800;
		afMax = 100;
		mfMax = 80;
		mFact = 1;
		tBody = 150;
		idleRpm = 200;
		redRpm = 1200;
		precision = 10;
		epeImpulseDamageCoef = 70;
		secondaryExplosion = -1;
		fuelExplosionPower = 10;
		maximumLoad = 500;
		transportMaxBackpacks = 5;
		transportMaxMagazines = 100;
		transportMaxWeapons = 10;
		supplyRadius = 3;
		ejectDeadDriver = 0;
		ejectDeadCargo = 0;
		gunnerHasFlares = 0;
		showNVGCargo[] = {1};
		showNVGDriver = 1;
		showNVGGunner = 1;
		showNVGCommander = 1;
		engineEffectSpeed = 2;
		class MarkerLights //sources - ["A3_Boat_F"]
		{
			class PositionRed //sources - ["A3_Boat_F"]
			{
				color[] = {0.8, 0, 0};
				ambient[] = {0.08, 0, 0};
				intensity = 50;
				name = "PositionLight_Red_1_pos";
				drawLight = 1;
				drawLightSize = 0.6;
				drawLightCenterSize = 0.05;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			class PositionGreen: PositionRed //inherits 11 parameters from bin\config.bin/CfgVehicles/Ship_F/MarkerLights/PositionRed, sources - ["A3_Boat_F"]
			{
				color[] = {0, 0.8, 0};
				ambient[] = {0, 0.08, 0};
				name = "PositionLight_Green_1_pos";
			};
			class PositionWhite: PositionRed //inherits 11 parameters from bin\config.bin/CfgVehicles/Ship_F/MarkerLights/PositionRed, sources - ["A3_Boat_F"]
			{
				color[] = {1, 1, 1};
				ambient[] = {0.1, 0.1, 0.1};
				name = "PositionLight_White_1_pos";
			};
		};
		class ViewPilot: ViewPilot //inherits 9 parameters from bin\config.bin/CfgVehicles/Ship/ViewPilot, sources - ["A3_Boat_F"]
		{
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			initAngleX = 0;
			minAngleX = -65;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
		};
		class EventHandlers: DefaultEventHandlers //inherits 3 parameters from bin\config.bin/DefaultEventHandlers, sources - []
		{
		};
		class DestructionEffects //sources - []
		{
		};
	};
	class Boat_F: Ship_F //inherits 49 parameters from bin\config.bin/CfgVehicles/Ship_F, sources - ["A3_Boat_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Boat_F";
		precision = 16;
		brakeDistance = 20;
		fuelExplosionPower = 5;
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
	};
	class Boat_Armed_01_base_F: Boat_F //inherits 9 parameters from bin\config.bin/CfgVehicles/Boat_F, sources - ["A3_Boat_F_Boat_Armed_01"]
	{
		features = "Randomization: No						<br />Camo selections: 3 - hull, inside, RCWS turret						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: Slingloadable						<br />Cargo proxy indexes: 1 to 8";
		author = "Bohemia Interactive";
		mapSize = 12.68;
		class SpeechVariants //sources - ["A3_Boat_F_Boat_Armed_01"]
		{
			class Default //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				speechSingular[] = {"veh_ship_attackBoat_s"};
				speechPlural[] = {"veh_ship_attackBoat_p"};
			};
		};
		textSingular = "attack boat";
		textPlural = "attack boats";
		nameSound = "veh_ship_attackBoat_s";
		_generalMacro = "Boat_Armed_01_base_F";
		displayName = "Speedboat";
		vehicleClass = "Ship";
		accuracy = 0.5;
		model = "\A3\boat_f\Boat_Armed_01\Boat_Armed_01_hmg_F.p3d";
		editorSubcategory = "EdSubcat_Boats";
		picture = "\A3\boat_f\Boat_Armed_01\data\ui\Boat_Armed_01_base.paa";
		Icon = "\A3\boat_f\Boat_Armed_01\data\ui\map_boat_armed_01.paa";
		unitInfoType = "RscUnitInfoShip";
		radarType = 8;
		memoryPointTaskMarker = "TaskMarker_1_pos";
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1", "SlingLoadCargo2", "SlingLoadCargo3", "SlingLoadCargo4", "SlingLoadCargo5", "SlingLoadCargo6"};
		attenuationEffectType = "OpenCarAttenuation";
		insideSoundCoef = 0;
		soundEngineOnInt[] = {"a3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-ext-start-02", 0.562341, 1};
		soundEngineOnExt[] = {"a3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-ext-start-02", 0.562341, 1, 200};
		soundEngineOffInt[] = {"a3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-ext-stop-02", 0.562341, 1};
		soundEngineOffExt[] = {"a3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-ext-stop-02", 0.562341, 1, 200};
		buildCrash0[] = {"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_building_01", 1.77828, 1, 200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_building_02", 1.77828, 1, 200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_building_03", 1.77828, 1, 200};
		soundBuildingCrash[] = {"buildCrash0", 0.33, "buildCrash1", 0.33, "buildCrash2", 0.34};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_wood_01", 1.77828, 1, 200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_wood_02", 1.77828, 1, 200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_wood_03", 1.77828, 1, 200};
		soundWoodCrash[] = {"woodCrash0", 0.33, "woodCrash1", 0.33, "woodCrash2", 0.34};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_armor_01", 3.16228, 1, 200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_armor_02", 3.16228, 1, 200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_armor_03", 3.16228, 1, 200};
		soundArmorCrash[] = {"ArmorCrash0", 0.33, "ArmorCrash1", 0.33, "ArmorCrash2", 0.34};
		soundGeneralCollision1[] = {"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_armor_01", 1.77828, 1, 100};
		soundGeneralCollision2[] = {"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_armor_02", 1.77828, 1, 100};
		soundGeneralCollision3[] = {"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_armor_03", 1.77828, 1, 100};
		soundCrashes[] = {"soundGeneralCollision1", 0.33, "soundGeneralCollision2", 0.33, "soundGeneralCollision3", 0.34};
		class Sounds //sources - ["A3_Boat_F_Boat_Armed_01"]
		{
			class IdleOut //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-idle-2", 0.501187, 1, 300};
				frequency = "0.95	+	((rpm/	1200) factor[(100/	1200),(300/	1200)])*0.15";
				volume = "engineOn*(((rpm/	1200) factor[(0/	1200),(30/	1200)])	*	((rpm/	1200) factor[(500/	1200),(300/	1200)]))";
			};
			class Engine //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-low-2", 0.630957, 1, 450};
				frequency = "0.95	+	((rpm/	1200) factor[(300/	1200),(600/	1200)])*0.2";
				volume = "engineOn*(((rpm/	1200) factor[(150/	1200),(250/	1200)])	*	((rpm/	1200) factor[(600/	1200),(400/	1200)]))";
			};
			class EngineMidOut //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-mid-2", 0.794328, 1, 500};
				frequency = "0.95	+		((rpm/	1200) factor[(600/	1200),(900/	1200)])*0.2";
				volume = "engineOn*(((rpm/	1200) factor[(350/	1200),(500/	1200)])	*	((rpm/	1200) factor[(1000/	1200),(700/	1200)]))";
			};
			class EngineMaxOut //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-high-2", 1, 1, 600};
				frequency = "0.95	+	((rpm/	1200) factor[(700/	1200),(1000/	1200)])*0.2";
				volume = "engineOn*((rpm/	1200) factor[(800/	1200),(1200/	1200)])";
			};
			class WaternoiseOutW0 //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1", 0.707946, 1, 150};
				frequency = "1";
				volume = "(speed factor[4, 1]) * water";
			};
			class WaternoiseOutW1 //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed", 0.794328, 1, 250};
				frequency = "1";
				volume = "((speed factor[2, 6]) min (speed factor[6, 4]))";
			};
			class WaternoiseOutW2 //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed", 1, 1, 350};
				frequency = "1";
				volume = "(speed factor[3, 9])";
			};
			class WaternoiseOutW3 //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1", 0.707946, 1, 150};
				frequency = "1";
				volume = "(speed factor[-4, -1]) * water";
			};
			class WaternoiseOutW4 //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed", 0.794328, 0.9, 250};
				frequency = "1";
				volume = "((speed factor[-2, -6]) min (speed factor[-6, -4]))";
			};
			class WaternoiseOutW5 //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed", 1, 0.9, 350};
				frequency = "1";
				volume = "(speed factor[-3, -9])";
			};
			class scrubLandExt //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\noises\boat_land_on_shallow", 1.77828, 0.9, 100};
				frequency = 1;
				volume = "(scrubLand factor[0.01, 0.20])";
			};
			class RainExt //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext", 1, 1, 100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext", 1, 1, 100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		class RenderTargets //sources - ["A3_Boat_F_Boat_Armed_01"]
		{
			class driver_display_1 //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				renderTarget = "rendertarget0";
				class CameraView1 //sources - ["A3_Boat_F_Boat_Armed_01"]
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderVisionMode = 1;
					renderQuality = 0;
					fov = 0.4;
				};
			};
			class Gunner_1 //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				renderTarget = "rendertarget3";
				class CameraView1 //sources - ["A3_Boat_F_Boat_Armed_01"]
				{
					pointPosition = "PIP3_pos";
					pointDirection = "PIP3_dir";
					renderVisionMode = 0;
					renderQuality = 0;
					fov = 0.5;
				};
			};
			class Gunner_TV //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				renderTarget = "rendertarget4";
				class CameraView1 //sources - ["A3_Boat_F_Boat_Armed_01"]
				{
					pointPosition = "PIP3_pos";
					pointDirection = "PIP3_dir";
					renderVisionMode = 2;
					renderQuality = 0;
					fov = 0.7;
				};
			};
		};
		armor = 400;
		class HitPoints //sources - ["A3_Boat_F_Boat_Armed_01"]
		{
			class HitBody //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				armor = 0.2;
				material = 50;
				name = "karoserie";
				visual = "zbytek";
				passThrough = 1;
				explosionShielding = 2;
			};
			class HitEngine //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				armor = 0.8;
				material = -1;
				name = "Engine";
				visual = "";
				passThrough = 1;
				explosionShielding = 2;
			};
		};
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "drivewheel";
		driverAction = "driver_boat01";
		cargoAction[] = {"passenger_boat_rightrear", "passenger_flatground_leanright", "passenger_boat_holdright2", "passenger_boat_holdleft2", "passenger_flatground_leanright", "passenger_flatground_leanleft", "passenger_boat_holdright", "passenger_boat_holdleft"};
		getInAction = "GetInMedium";
		getOutAction = "GetOutMedium";
		cargoGetInAction[] = {"GetInMedium"};
		cargoGetOutAction[] = {"GetOutMedium"};
		castDriverShadow = 1;
		castCargoShadow = 1;
		gunnerHasFlares = 0;
		enableGPS = 1;
		enableRadio = 1;
		transportSoldier = 8;
		cost = 400000;
		threat[] = {1, 0.8, 0.8};
		class TransportItems //sources - ["A3_Boat_F_Boat_Armed_01"]
		{
			class _xx_FirstAidKit //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_medikit //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				name = "medikit";
				count = 1;
			};
		};
		precision = 15;
		steerAheadSimul = 0.5;
		steerAheadPlan = 0.35;
		predictTurnPlan = 0.8;
		predictTurnSimul = 0.6;
		brakeDistance = 5;
		acceleration = 15;
		turnCoef = 0.75;
		maxSpeed = 75;
		simulation = "shipx";
		thrustDelay = 0.2;
		overSpeedBrakeCoef = 0.2;
		enginePower = 1085;
		engineShiftY = -0.1;
		waterLeakiness = 55.5;
		waterLinearDampingCoefY = 5;
		waterLinearDampingCoefX = 2;
		waterAngularDampingCoef = 1.2;
		waterResistanceCoef = 0.015;
		rudderForceCoef = 0.3;
		rudderForceCoefAtMaxSpeed = 0.02;
		idleRpm = 200;
		redRpm = 1200;
		class complexGearbox //sources - ["A3_Boat_F_Boat_Armed_01"]
		{
			GearboxRatios[] = {"R1", -0.782, "N", 0, "D1", 2, "D2", 1.85, "D3", 1.75};
			TransmissionRatios[] = {"High", 1};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		enableManualFire = 0;
		smokeLauncherGrenadeCount = 8;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 0;
		smokeLauncherAngle = 360;
		weapons[] = {"SmokeLauncher"};
		magazines[] = {"SmokeLauncherMag_boat"};
		class Exhausts //sources - ["A3_Boat_F_Boat_Armed_01"]
		{
			class Exhaust1 //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				position = "Exhaust1";
				direction = "Exhaust1_dir";
				effect = "";
			};
		};
		leftFastWaterEffect = "LFastWaterEffects";
		rightFastWaterEffect = "RFastWaterEffects";
		waterEffectSpeed = 5;
		engineEffectSpeed = 5;
		waterFastEffectSpeed = 28;
		class AnimationSources //sources - ["A3_Boat_F_Boat_Armed_01"]
		{
			class muzzle2_source //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				source = "reload";
				weapon = "HMG_01";
			};
			class muzzle_source //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				source = "reload";
				weapon = "GMG_40mm";
			};
			class muzzle2_source_rot //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				source = "ammorandom";
				weapon = "HMG_01";
			};
			class muzzle_source_rot //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				source = "ammorandom";
				weapon = "GMG_40mm";
			};
			class ReloadAnim //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				source = "reload";
				weapon = "HMG_01";
			};
			class ReloadMagazine //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				source = "reloadmagazine";
				weapon = "HMG_01";
			};
			class Revolving //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				source = "revolving";
				weapon = "HMG_01";
			};
			class HitTurret //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				source = "Hit";
				hitpoint = "HitTurret";
				raw = 1;
			};
			class HitGun //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				source = "Hit";
				hitpoint = "HitGun";
				raw = 1;
			};
		};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/Ship/Turrets, sources - ["A3_Boat_F_Boat_Armed_01"]
		{
			class FrontTurret: NewTurret //inherits 115 parameters from bin\config.bin/CfgVehicles/AllVehicles/NewTurret, sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				class HitPoints //sources - ["A3_Boat_F_Boat_Armed_01"]
				{
					class HitTurret //sources - ["A3_Boat_F_Boat_Armed_01"]
					{
						armor = 0.15;
						material = -1;
						name = "otochlaven";
						visual = "otochlaven";
						passThrough = 0;
						explosionShielding = 0.4;
						minimalHit = 0.01;
						radius = 0.25;
					};
					class HitGun //sources - ["A3_Boat_F_Boat_Armed_01"]
					{
						armor = 0.15;
						material = -1;
						name = "otochlaven";
						visual = "otochlaven";
						passThrough = 0;
						explosionShielding = 0.4;
						minimalHit = 0.01;
						radius = 0.25;
					};
				};
				stabilizedInAxes = 4;
				body = "MainTurret";
				gun = "MainGun";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				gunnerAction = "gunner_Mrap_01";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "";
				ejectDeadGunner = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				weapons[] = {"GMG_40mm"};
				magazines[] = {"200Rnd_40mm_G_belt"};
				soundServo[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm", 1.41254, 1, 30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm_vertical", 1.41254, 1, 30};
				discreteDistance[] = {100, 200, 300, 400, 600, 800, 1000, 1200};
				discreteDistanceInitIndex = 2;
				gunnerName = "Commander";
				memoryPointGunnerOptics = "commanderview";
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
				turretInfoType = "RscOptics_crows";
				gunnerForceOptics = 0;
				startEngine = 0;
				commanding = 2;
				primaryGunner = 0;
				primaryObserver = 1;
				LODTurnedIn = 1100;
				LODTurnedOut = 1100;
				usePip = 1;
				minElev = -15;
				maxElev = 40;
				initElev = 5;
				minTurn = -135;
				maxTurn = 135;
				initTurn = 0;
				class RCWSOptics;
				class ViewOptics: RCWSOptics //inherits 17 parameters from bin\config.bin/RCWSOptics, sources - []
				{
				};
				class ViewGunner: ViewOptics //inherits 0 parameters from bin\config.bin/CfgVehicles/Boat_Armed_01_base_F/Turrets/FrontTurret/ViewOptics, sources - ["A3_Boat_F_Boat_Armed_01"]
				{
					initAngleX = -15;
					minAngleX = -45;
					maxAngleX = 45;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					visionMode[] = {};
				};
			};
			class RearTurret: FrontTurret //inherits 40 parameters from bin\config.bin/CfgVehicles/Boat_Armed_01_base_F/Turrets/FrontTurret, sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				class HitPoints //sources - ["A3_Boat_F_Boat_Armed_01"]
				{
					class HitTurret //sources - ["A3_Boat_F_Boat_Armed_01"]
					{
						armor = 0.2;
						material = 60;
						name = "otochlaven2";
						visual = "otochlaven2";
						passThrough = 1;
						explosionShielding = 2;
						minimalHit = 0.1;
					};
					class HitGun //sources - ["A3_Boat_F_Boat_Armed_01"]
					{
						armor = 0.1;
						material = 60;
						name = "otochlaven2";
						visual = "otochlaven2";
						passThrough = 1;
						explosionShielding = 1;
						minimalHit = 0.1;
					};
				};
				stabilizedInAxes = 0;
				body = "RearTurret";
				gun = "RearGun";
				animationSourceBody = "RearTurret";
				animationSourceGun = "RearGun";
				gunnerAction = "gunner_standup01";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutMedium";
				ejectDeadGunner = 0;
				gunBeg = "usti hlavne2";
				gunEnd = "konec hlavne2";
				memoryPointGunnerOptics = "gunnerview2";
				weapons[] = {"HMG_01"};
				soundServo[] = {"", 1.41254, 1, 30};
				soundServoVertical[] = {"", 1.41254, 1, 30};
				magazines[] = {"200Rnd_127x99_mag_Tracer_Green", "200Rnd_127x99_mag_Tracer_Green", "200Rnd_127x99_mag_Tracer_Green"};
				gunnerName = "Rear gunner";
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
				gunnerForceOptics = 0;
				proxyIndex = 2;
				startEngine = 0;
				commanding = 1;
				primaryGunner = 1;
				primaryObserver = 0;
				LODTurnedIn = 1000;
				LODTurnedOut = 1000;
				usePip = 0;
				gunnerLeftHandAnimName = "OtocHlaven2_Shake";
				gunnerRightHandAnimName = "OtocHlaven2_Shake";
				minElev = -5;
				maxElev = 60;
				initElev = 5;
				minTurn = -360;
				maxTurn = 360;
				initTurn = -181;
				class ViewOptics: ViewOptics //inherits 0 parameters from bin\config.bin/CfgVehicles/Boat_Armed_01_base_F/Turrets/FrontTurret/ViewOptics, sources - ["A3_Boat_F_Boat_Armed_01"]
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
				};
				class ViewGunner: ViewOptics //inherits 9 parameters from bin\config.bin/CfgVehicles/Boat_Armed_01_base_F/Turrets/RearTurret/ViewOptics, sources - ["A3_Boat_F_Boat_Armed_01"]
				{
					initAngleX = 5;
					minAngleX = -65;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
				};
				maxHorizontalRotSpeed = 1.8;
				maxVerticalRotSpeed = 1.2;
			};
		};
		class Library //sources - ["A3_Boat_F_Boat_Armed_01"]
		{
			libTextDesc = "This V shaped boat with two powerful jet impellers excels in speed and maneuverability. It is used by both BLUFOR and OPFOR as a coastline guard boat and for special operations. The speedboat has a front-facing, remote controlled GMG turret. The OPFOR version is commonly equipped with a HMG in the rear, while BLUFOR speedboats are armed with a minigun.";
		};
		extCameraPosition[] = {0, 2, -16};
		class Damage //sources - ["A3_Boat_F_Boat_Armed_01"]
		{
			tex[] = {};
			mat[] = {"A3\boat_F\Boat_Armed_01\data\Boat_Armed_01_ext.rvmat", "A3\boat_F\Boat_Armed_01\data\Boat_Armed_01_ext_damage.rvmat", "A3\boat_F\Boat_Armed_01\data\Boat_Armed_01_ext_destruct.rvmat", "A3\boat_F\Boat_Armed_01\data\Boat_Armed_01_int.rvmat", "A3\boat_F\Boat_Armed_01\data\Boat_Armed_01_int_damage.rvmat", "A3\boat_F\Boat_Armed_01\data\Boat_Armed_01_int_destruct.rvmat", "A3\boat_F\Boat_Armed_01\data\Boat_Armed_01_ctrls.rvmat", "A3\boat_F\Boat_Armed_01\data\Boat_Armed_01_ctrls_damage.rvmat", "A3\boat_F\Boat_Armed_01\data\Boat_Armed_01_ctrls_destruct.rvmat", "A3\Static_F_Gamma\data\staticturret_01.rvmat", "A3\Static_F_Gamma\data\StaticTurret_01_damage.rvmat", "A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat", "A3\Static_F_Gamma\data\staticturret_02.rvmat", "A3\Static_F_Gamma\data\StaticTurret_02_damage.rvmat", "A3\Static_F_Gamma\data\StaticTurret_02_destruct.rvmat", "a3\boat_f\Boat_Armed_01\data\Minigun.rvmat", "A3\boat_f\Boat_Armed_01\data\Minigun_damage.rvmat", "A3\boat_f\Boat_Armed_01\data\Minigun_destruct.rvmat", "a3\boat_f\Boat_Armed_01\data\Minigun_Boat_Armed_01_add.rvmat", "A3\boat_f\Boat_Armed_01\data\Minigun_Boat_Armed_01_add_damage.rvmat", "A3\boat_f\Boat_Armed_01\data\Minigun_Boat_Armed_01_add_destruct.rvmat", "a3\Data_F\Vehicles\Turret.rvmat", "A3\Data_F\Vehicles\Turret_damage.rvmat", "A3\Data_F\Vehicles\Turret_destruct.rvmat"};
		};
		class Reflectors //sources - ["A3_Boat_F_Boat_Armed_01"]
		{
			class Right //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				color[] = {1900, 1800, 1700};
				ambient[] = {5, 5, 5};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 0;
				dayLight = 0;
				flareSize = 2;
				class Attenuation //sources - ["A3_Boat_F_Boat_Armed_01"]
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class Right2: Right //inherits 15 parameters from bin\config.bin/CfgVehicles/Boat_Armed_01_base_F/Reflectors/Right, sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				position = "PIP0_pos";
				useFlare = 1;
			};
		};
		aggregateReflectors[] = {{"Right", "Right2"}};
		hiddenSelections[] = {"Camo", "Camo2", "Camo3"};
		class TextureSources //sources - ["A3_Boat_F_Boat_Armed_01"]
		{
			class Indep //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				displayName = "AAF";
				author = "Bohemia Interactive";
				textures[] = {"\A3\boat_f_beta\Boat_Armed_01\data\Boat_Armed_01_ext_INDP_co.paa", "\A3\boat_f_beta\Boat_Armed_01\data\Boat_Armed_01_int_INDP_co.paa", "\A3\boat_f_beta\Boat_Armed_01\data\Boat_Armed_01_crows_INDP_co.paa"};
				factions[] = {"IND_F"};
			};
			class Opfor //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				displayName = "OPFOR";
				author = "Bohemia Interactive";
				textures[] = {"\A3\Boat_F\Boat_Armed_01\Data\Boat_Armed_01_ext_opfor_CO.paa", "\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_int_opfor_co.paa", "\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_crows_OPFOR_co.paa"};
				factions[] = {"OPF_F"};
			};
			class Blufor //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				displayName = "BLUFOR";
				author = "Bohemia Interactive";
				textures[] = {"\A3\Boat_F\Boat_Armed_01\Data\Boat_Armed_01_ext_CO.paa", "\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_int_co.paa", "\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_crows_blufor_co.paa"};
				factions[] = {"BLU_F"};
			};
		};
	};
	class Boat_Armed_01_minigun_base_F: Boat_Armed_01_base_F //inherits 108 parameters from bin\config.bin/CfgVehicles/Boat_Armed_01_base_F, sources - ["A3_Boat_F_Boat_Armed_01"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Boat_Armed_01_minigun_base_F";
		model = "\A3\Boat_F\Boat_Armed_01\Boat_Armed_01_minigun_F.p3d";
		picture = "\A3\boat_f\Boat_Armed_01\data\ui\Boat_Armed_01_minigun.paa";
		Icon = "\A3\boat_f\Boat_Armed_01\data\ui\map_boat_armed_01_minigun.paa";
		displayName = "Speedboat Minigun";
		class AnimationSources: AnimationSources //inherits 9 parameters from bin\config.bin/CfgVehicles/Boat_Armed_01_base_F/AnimationSources, sources - ["A3_Boat_F_Boat_Armed_01"]
		{
			class muzzle2_source //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				source = "reload";
				weapon = "LMG_Minigun";
			};
			class muzzle2_source_rot //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				source = "ammorandom";
				weapon = "LMG_Minigun";
			};
			class ReloadAnim //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				source = "reload";
				weapon = "LMG_Minigun";
			};
			class ReloadMagazine //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				source = "reloadmagazine";
				weapon = "LMG_Minigun";
			};
			class Revolving //sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				source = "revolving";
				weapon = "LMG_Minigun";
			};
		};
		class Turrets: Turrets //inherits 2 parameters from bin\config.bin/CfgVehicles/Boat_Armed_01_base_F/Turrets, sources - ["A3_Boat_F_Boat_Armed_01"]
		{
			class FrontTurret: FrontTurret //inherits 40 parameters from bin\config.bin/CfgVehicles/Boat_Armed_01_base_F/Turrets/FrontTurret, sources - []
			{
			};
			class RearTurret: RearTurret //inherits 40 parameters from bin\config.bin/CfgVehicles/Boat_Armed_01_base_F/Turrets/RearTurret, sources - ["A3_Boat_F_Boat_Armed_01"]
			{
				weapons[] = {"LMG_Minigun"};
				magazines[] = {"2000Rnd_65x39_belt_Tracer_Red"};
				LODTurnedIn = 1000;
				LODTurnedOut = 1000;
				gunBeg = "z_gunR_muzzle";
				gunEnd = "z_gunR_chamber";
				gunnerOpticsModel = "";
			};
		};
	};
	class B_Boat_Armed_01_minigun_F: Boat_Armed_01_minigun_base_F //inherits 8 parameters from bin\config.bin/CfgVehicles/Boat_Armed_01_minigun_base_F, sources - ["A3_Boat_F_Boat_Armed_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Boat_F_Boat_Armed_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"turret_shake", 0}, {"turret_shake_aside", 0}, {"magazine_hide", 0}, {"mainturret", 0}, {"damagehideotocvez", 0}, {"maingun", 0.09}, {"damagehideotochlaven", 0}, {"rearturret", -3.16}, {"reargun", 0.09}, {"muzzleflash", 0}, {"zaslehrot", 0}, {"zasleh2rot", 0}, {"fuel", 1}, {"mph", 0.04}, {"rpm", 0}, {"amps_random", 0}, {"oil_random", 0}, {"trim_random", 0.04}, {"tmp_random", 0}, {"volt_random", 0.04}, {"drivingwheel", 0}, {"ammobelt_hide", 0}, {"bullet001_2_hide", 0.33}, {"bullet002_2_hide", 0.33}, {"bullet003_2_hide", 0.33}, {"bullet004_2_hide", 0.33}, {"bullet005_2_hide", 0.33}, {"bullet006_2_hide", 0.33}, {"positionlights", 0}, {"gun_revolving", 0.33}, {"muzzleflash2", 0}};
			hide[] = {"zasleh", "p svetlo", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 3.181;
			verticalOffsetWorld = -0.433;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Boat_Armed_01_minigun_F.jpg";
		_generalMacro = "B_Boat_Armed_01_minigun_F";
		scope = 2;
		accuracy = 1.5;
		crew = "B_soldier_F";
		faction = "BLU_F";
		side = 1;
		typicalCargo[] = {"B_Soldier_F", "B_Soldier_F"};
		hiddenSelectionsTextures[] = {"\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_ext_co.paa", "\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_int_co.paa", "\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_crows_blufor_co.paa"};
		textureList[] = {"Blufor", 1};
	};
	class O_Boat_Armed_01_hmg_F: Boat_Armed_01_base_F //inherits 108 parameters from bin\config.bin/CfgVehicles/Boat_Armed_01_base_F, sources - ["A3_Boat_F_Boat_Armed_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Boat_F_Boat_Armed_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"barrel_recoil", 0}, {"bolt_recoil", 0}, {"turret_shake", 0}, {"turret_shake_aside", 0}, {"magazine_hide", 0}, {"mainturret", 0}, {"damagehideotocvez", 0}, {"maingun", 0.09}, {"damagehideotochlaven", 0}, {"rearturret", -3.16}, {"reargun", 0.09}, {"muzzleflash", 0}, {"zaslehrot", 0}, {"muzzleflash2", 0}, {"zasleh2rot", 0}, {"fuel", 1}, {"mph", 0.03}, {"rpm", 0}, {"amps_random", 0}, {"oil_random", 0}, {"trim_random", 0.03}, {"tmp_random", 0}, {"volt_random", 0.03}, {"drivingwheel", 0}, {"ammo_belt_2_rotation_prep", 0}, {"ammo_belt_2_rotation_main", 0}, {"ammobelt_hide", 0}, {"bullet001_2_hide", 1}, {"bullet002_2_hide", 1}, {"bullet003_2_hide", 1}, {"bullet004_2_hide", 1}, {"bullet005_2_hide", 1}, {"bullet006_2_hide", 1}, {"muzzle1_shake", 0}, {"muzzle1_shake_back", 0}, {"bolt_move_2", 0}, {"positionlights", 0}};
			hide[] = {"zasleh", "p svetlo", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 3.184;
			verticalOffsetWorld = -0.432;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Boat_Armed_01_hmg_F.jpg";
		_generalMacro = "O_Boat_Armed_01_hmg_F";
		displayName = "Speedboat HMG";
		scope = 2;
		accuracy = 1.5;
		crew = "O_Soldier_F";
		faction = "OPF_F";
		side = 0;
		typicalCargo[] = {"O_Soldier_F", "O_Soldier_F"};
		hiddenSelectionsTextures[] = {"\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_ext_opfor_co.paa", "\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_int_opfor_co.paa", "\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_crows_OPFOR_co.paa"};
		textureList[] = {"Opfor", 1};
	};
	class Rubber_duck_base_F: Boat_F //inherits 9 parameters from bin\config.bin/CfgVehicles/Boat_F, sources - ["A3_Boat_F_Boat_Transport_01","A3_Boat_F_Exp_Boat_Transport_01"]
	{
		features = "Randomization: No						<br />Camo selections: 1 - main body						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: Positions 1 to 4						<br />Slingload: Slingloadable						<br />Cargo proxy indexes: 1 to 4";
		author = "Bohemia Interactive";
		mapSize = 4.754;
		class SpeechVariants //sources - ["A3_Boat_F_Boat_Transport_01"]
		{
			class Default //sources - ["A3_Boat_F_Boat_Transport_01"]
			{
				speechSingular[] = {"veh_ship_boat_s"};
				speechPlural[] = {"veh_ship_boat_p"};
			};
		};
		textSingular = "boat";
		textPlural = "boats";
		nameSound = "veh_ship_boat_s";
		_generalMacro = "Rubber_duck_base_F";
		displayName = "Assault Boat";
		accuracy = 0.5;
		model = "\A3\boat_f\Boat_Transport_01\Boat_Transport_01_F.p3d";
		editorSubcategory = "EdSubcat_Boats";
		picture = "\A3\boat_F\Boat_Transport_01\data\UI\Boat_Transport_01_CA.paa";
		Icon = "\A3\boat_F\Boat_Transport_01\data\UI\map_Boat_Transport_01_CA.paa";
		cost = 50000;
		threat[] = {0.6, 0.2, 0.3};
		unitInfoType = "RscUnitInfoNoWeapon";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\A3\boat_F\Boat_Transport_01\data\boat_transport_01_co.paa"};
		memoryPointTaskMarker = "TaskMarker_1_pos";
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1", "SlingLoadCargo2", "SlingLoadCargo3", "SlingLoadCargo4"};
		leftEngineEffect = "LEngEffectsSmall";
		rightEngineEffect = "REngEffectsSmall";
		class TransportItems //sources - ["A3_Boat_F_Boat_Transport_01"]
		{
			class _xx_FirstAidKit //sources - ["A3_Boat_F_Boat_Transport_01"]
			{
				name = "FirstAidKit";
				count = 2;
			};
		};
		armor = 10;
		crewExplosionProtection = 0;
		class HitPoints //sources - ["A3_Boat_F_Boat_Transport_01"]
		{
			class HitBody //sources - ["A3_Boat_F_Boat_Transport_01"]
			{
				armor = 0.6;
				material = 50;
				name = "hull";
				visual = "zbytek";
				passThrough = 1;
			};
			class HitEngine //sources - ["A3_Boat_F_Boat_Transport_01"]
			{
				armor = 1.2;
				material = -1;
				name = "Engine";
				visual = "";
				passThrough = 1;
			};
		};
		attenuationEffectType = "OpenCarAttenuation";
		insideSoundCoef = 0.5;
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_start", 1, 1};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_start", 1, 1, 150};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_stop", 1, 1};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_stop", 1, 1, 150};
		buildCrash0[] = {"A3\sounds_f\Vehicles\boat\noises\Rubber_boat_crash_building_01", 1.77828, 1, 200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\boat\noises\Rubber_boat_crash_building_02", 1.77828, 1, 200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\boat\noises\Rubber_boat_crash_building_03", 1.77828, 1, 200};
		soundBuildingCrash[] = {"buildCrash0", 0.33, "buildCrash1", 0.33, "buildCrash2", 0.34};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\boat\noises\Rubber_boat_crash_wood_01", 1.77828, 1, 200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\boat\noises\Rubber_boat_crash_wood_02", 1.77828, 1, 200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\boat\noises\Rubber_boat_crash_wood_03", 1.77828, 1, 200};
		soundWoodCrash[] = {"woodCrash0", 0.33, "woodCrash1", 0.33, "woodCrash2", 0.34};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\boat\noises\Rubber_boat_crash_armor_01", 3.16228, 1, 200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\boat\noises\Rubber_boat_crash_armor_02", 3.16228, 1, 200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\boat\noises\Rubber_boat_crash_armor_03", 3.16228, 1, 200};
		soundArmorCrash[] = {"ArmorCrash0", 0.33, "ArmorCrash1", 0.33, "ArmorCrash2", 0.34};
		soundGeneralCollision1[] = {"A3\sounds_f\Vehicles\boat\noises\Rubber_boat_crash_armor_01", 1.77828, 1, 200};
		soundGeneralCollision2[] = {"A3\sounds_f\Vehicles\boat\noises\Rubber_boat_crash_armor_02", 1.77828, 1, 200};
		soundGeneralCollision3[] = {"A3\sounds_f\Vehicles\boat\noises\Rubber_boat_crash_armor_03", 1.77828, 1, 200};
		soundCrashes[] = {"soundGeneralCollision1", 0.33, "soundGeneralCollision2", 0.33, "soundGeneralCollision3", 0.34};
		class Sounds //sources - ["A3_Boat_F_Boat_Transport_01"]
		{
			class IdleOut //sources - ["A3_Boat_F_Boat_Transport_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_idle_1", 0.446684, 1, 150};
				frequency = "0.95	+	((rpm/	1200) factor[(100/	1200),(200/	1200)])*0.15";
				volume = "engineOn*(((rpm/	1200) factor[(0/	1200),(30/	1200)])	*	((rpm/	1200) factor[(500/	1200),(300/	1200)]))";
			};
			class Engine //sources - ["A3_Boat_F_Boat_Transport_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_low2", 0.630957, 1.2, 300};
				frequency = "0.95	+	((rpm/	1200) factor[(300/	1200),(600/	1200)])*0.2";
				volume = "engineOn*(((rpm/	1200) factor[(200/	1200),(300/	1200)])	*	((rpm/	1200) factor[(600/	1200),(400/	1200)]))";
			};
			class EngineMidOut //sources - ["A3_Boat_F_Boat_Transport_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_mid2", 0.891251, 0.6, 400};
				frequency = "0.95	+	((rpm/	1200) factor[(600/	1200),(900/	1200)])*0.2";
				volume = "engineOn*(((rpm/	1200) factor[(350/	1200),(500/	1200)])	*	((rpm/	1200) factor[(1200/	1200),(900/	1200)]))";
			};
			class EngineMaxOut //sources - ["A3_Boat_F_Boat_Transport_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_high2", 1.25893, 1, 500};
				frequency = "0.95	+	((rpm/	1200) factor[(700/	1200),(1000/	1200)])*0.3";
				volume = "engineOn*((rpm/	1200) factor[(600/	1200),(1200/	1200)])";
			};
			class WaternoiseOutW0 //sources - ["A3_Boat_F_Boat_Transport_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1", 1, 1, 100};
				frequency = "1";
				volume = "(speed factor[4, 1]) * water";
			};
			class WaternoiseOutW1 //sources - ["A3_Boat_F_Boat_Transport_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed", 1, 1, 150};
				frequency = "1";
				volume = "((speed factor[2, 6]) min (speed factor[6, 4]))";
			};
			class WaternoiseOutW2 //sources - ["A3_Boat_F_Boat_Transport_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed", 1, 1, 300};
				frequency = "1";
				volume = "(speed factor[3, 9])";
			};
			class WaternoiseOutW3 //sources - ["A3_Boat_F_Boat_Transport_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1", 1, 1, 100};
				frequency = "1";
				volume = "(speed factor[-4, -1]) * water";
			};
			class WaternoiseOutW4 //sources - ["A3_Boat_F_Boat_Transport_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed", 1, 0.9, 150};
				frequency = "1";
				volume = "((speed factor[-2, -6]) min (speed factor[-6, -4]))";
			};
			class WaternoiseOutW5 //sources - ["A3_Boat_F_Boat_Transport_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed", 1, 0.9, 300};
				frequency = "1";
				volume = "(speed factor[-3, -9])";
			};
			class scrubLandExt //sources - ["A3_Boat_F_Boat_Transport_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\noises\boat_land_on_shallow", 1.77828, 1, 100};
				frequency = 1;
				volume = "(scrubLand factor[0.01, 0.20])";
			};
			class RainExt //sources - ["A3_Boat_F_Boat_Transport_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain2_ext", 1, 1, 100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt //sources - ["A3_Boat_F_Boat_Transport_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain2_ext", 1, 1, 100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		driverLeftHandAnimName = "DrivingWheel";
		driverAction = "Zodiac_Driver";
		cargoAction[] = {"Zodiac_Cargo01", "Zodiac_Cargo02", "Zodiac_Cargo03", "Zodiac_Cargo04"};
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		castDriverShadow = 1;
		castCargoShadow = 1;
		ejectDeadDriver = 0;
		ejectDeadCargo = 0;
		maxSpeed = 45;
		simulation = "shipX";
		overSpeedBrakeCoef = 0.8;
		enginePower = 18.5;
		engineShiftY = 0;
		waterLeakiness = 0.5;
		waterResistanceCoef = 0.01;
		thrustDelay = 2;
		waterLinearDampingCoefY = 5;
		waterLinearDampingCoefX = 2;
		waterAngularDampingCoef = 1.2;
		rudderForceCoef = 0.08;
		rudderForceCoefAtMaxSpeed = 0.001;
		transportSoldier = 0;
		class Turrets //sources - ["A3_Boat_F_Boat_Transport_01"]
		{
			class CargoTurret_01: CargoTurret //inherits 28 parameters from bin\config.bin/CfgVehicles/AllVehicles/CargoTurret, sources - ["A3_Boat_F_Boat_Transport_01"]
			{
				gunnerAction = "passenger_boat_1";
				gunnerCompartments = "Compartment2";
				gunnerName = "Passenger (Right Seat)";
				memoryPointsGetInGunner = "pos cargo RR";
				memoryPointsGetInGunnerDir = "pos cargo RR dir";
				gunnerGetOutAction = "GetOutMedium";
				proxyIndex = 1;
				maxElev = 45;
				minElev = -15;
				maxTurn = 30;
				minTurn = -60;
				isPersonTurret = 1;
				class dynamicViewLimits //sources - ["A3_Boat_F_Boat_Transport_01"]
				{
					CargoTurret_03[] = {-60, 10};
				};
			};
			class CargoTurret_02: CargoTurret_01 //inherits 13 parameters from bin\config.bin/CfgVehicles/Rubber_duck_base_F/Turrets/CargoTurret_01, sources - ["A3_Boat_F_Boat_Transport_01"]
			{
				gunnerAction = "passenger_boat_2";
				gunnerName = "Passenger (Left Seat)";
				memoryPointsGetInGunner = "pos cargo LR";
				memoryPointsGetInGunnerDir = "pos cargo LR dir";
				proxyIndex = 2;
				maxTurn = 80;
				minTurn = -45;
				minElev = -7;
				class dynamicViewLimits //sources - ["A3_Boat_F_Boat_Transport_01"]
				{
					CargoTurret_03[] = {-5, 80};
					CargoTurret_04[] = {3, 80};
				};
			};
			class CargoTurret_03: CargoTurret_01 //inherits 13 parameters from bin\config.bin/CfgVehicles/Rubber_duck_base_F/Turrets/CargoTurret_01, sources - ["A3_Boat_F_Boat_Transport_01"]
			{
				gunnerAction = "passenger_boat_3";
				gunnerName = "Passenger (Front Seat)";
				memoryPointsGetInGunner = "pos cargo RF";
				memoryPointsGetInGunnerDir = "pos cargo RF dir";
				proxyIndex = 3;
				minElev = -10;
				maxTurn = 95;
				minTurn = -95;
				class dynamicViewLimits //sources - []
				{
				};
			};
			class CargoTurret_04: CargoTurret_01 //inherits 13 parameters from bin\config.bin/CfgVehicles/Rubber_duck_base_F/Turrets/CargoTurret_01, sources - ["A3_Boat_F_Boat_Transport_01"]
			{
				gunnerAction = "passenger_boat_4";
				gunnerName = "Passenger (Middle Seat)";
				memoryPointsGetInGunner = "pos cargo LF";
				memoryPointsGetInGunnerDir = "pos cargo LF dir";
				proxyIndex = 4;
				maxTurn = 80;
				minTurn = -45;
				class dynamicViewLimits //sources - ["A3_Boat_F_Boat_Transport_01"]
				{
					CargoTurret_03[] = {20, 80};
				};
			};
		};
		supplyRadius = 3;
		class Exhausts //sources - ["A3_Boat_F_Boat_Transport_01"]
		{
			class Exhaust1 //sources - ["A3_Boat_F_Boat_Transport_01"]
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffect";
			};
		};
		fuelExplosionPower = 0;
		class Library //sources - ["A3_Boat_F_Boat_Transport_01"]
		{
			libTextDesc = "An inflatable boat, often nicknamed 'Rubber Duck', is a lightweight boat constructed from tubes containing pressurized gas. Inflatables typically come in lengths between 2 to 7 meters. Due to their speed, weight and portability, inflatable boats are used in diverse roles such as lifeguard and rescue boats and even more often in the military as a landing craft.";
		};
		extCameraPosition[] = {0, 2, -7};
		class Damage //sources - ["A3_Boat_F_Boat_Transport_01"]
		{
			tex[] = {};
			mat[] = {"A3\boat_f\Boat_Transport_01\data\Boat_Transport_01.rvmat", "A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_damage.rvmat", "A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_damage.rvmat"};
		};
		class TextureSources //sources - ["A3_Boat_F_Boat_Transport_01","A3_Boat_F_Exp_Boat_Transport_01"]
		{
			class Black //sources - ["A3_Boat_F_Boat_Transport_01","A3_Boat_F_Exp_Boat_Transport_01"]
			{
				textures[] = {"\a3\boat_f\boat_transport_01\data\boat_transport_01_co.paa"};
				factions[] = {"BLU_F", "IND_C_F"};
				displayName = "Black";
				author = "Bohemia Interactive";
			};
			class Hex //sources - ["A3_Boat_F_Boat_Transport_01","A3_Boat_F_Exp_Boat_Transport_01"]
			{
				author = "Bohemia Interactive";
				textures[] = {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_OPFOR_CO.paa"};
				factions[] = {"OPF_F"};
				displayName = "Hex";
			};
			class Rescue //sources - ["A3_Boat_F_Boat_Transport_01"]
			{
				displayName = "Rescue";
				author = "Bohemia Interactive";
				textures[] = {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_rescue_CO.paa"};
				factions[] = {"BLU_F", "OPF_F", "CIV_F"};
			};
			class Civilian //sources - ["A3_Boat_F_Boat_Transport_01"]
			{
				displayName = "Civilian";
				author = "Bohemia Interactive";
				textures[] = {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_civilian_CO.paa"};
				factions[] = {"CIV_F"};
			};
			class Digital //sources - ["A3_Boat_F_Boat_Transport_01"]
			{
				displayName = "Digital";
				author = "Bohemia Interactive";
				textures[] = {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_INDP_CO.paa"};
				factions[] = {"IND_F"};
			};
		};
		textureList[] = {"Black", 0, "Hex", 0, "Rescue", 0, "Civilian", 0, "Digital", 0};
		class EventHandlers: EventHandlers //inherits 0 parameters from bin\config.bin/CfgVehicles/Ship_F/EventHandlers, sources - ["A3_Boat_F_Boat_Transport_01"]
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """""""", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class B_Boat_Transport_01_F: Rubber_duck_base_F //inherits 85 parameters from bin\config.bin/CfgVehicles/Rubber_duck_base_F, sources - ["A3_Boat_F_Boat_Transport_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Boat_F_Boat_Transport_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"damagehide_zbytek", 0}, {"damage_unhide", 0}, {"drivingwheel", 0}, {"propeller", 0}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.245;
			verticalOffsetWorld = -0.018;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Boat_Transport_01_F.jpg";
		_generalMacro = "B_Boat_Transport_01_F";
		scope = 2;
		crew = "B_Soldier_F";
		faction = "BLU_F";
		side = 1;
		typicalCargo[] = {"B_Soldier_F", "B_Soldier_F"};
		hiddenSelectionsTextures[] = {"\A3\boat_F\Boat_Transport_01\data\boat_transport_01_co.paa"};
		textureList[] = {"Black", 1};
	};
	class O_Boat_Transport_01_F: Rubber_duck_base_F //inherits 85 parameters from bin\config.bin/CfgVehicles/Rubber_duck_base_F, sources - ["A3_Boat_F_Boat_Transport_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Boat_F_Boat_Transport_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"damagehide_zbytek", 0}, {"damage_unhide", 0}, {"drivingwheel", 0}, {"propeller", 0}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.245;
			verticalOffsetWorld = -0.018;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Boat_Transport_01_F.jpg";
		_generalMacro = "O_Boat_Transport_01_F";
		scope = 2;
		crew = "O_Soldier_F";
		faction = "OPF_F";
		side = 0;
		typicalCargo[] = {"O_Soldier_F", "O_Soldier_F"};
		hiddenSelectionsTextures[] = {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_OPFOR_CO.paa"};
		textureList[] = {"Hex", 1};
	};
	class Rescue_duck_base_F: Rubber_duck_base_F //inherits 85 parameters from bin\config.bin/CfgVehicles/Rubber_duck_base_F, sources - ["A3_Boat_F_Boat_Transport_01"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Rescue_duck_base_F";
		displayName = "Rescue Boat";
		hiddenSelectionsTextures[] = {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_rescue_CO.paa"};
		textureList[] = {"Rescue", 1};
	};
	class B_Lifeboat: Rescue_duck_base_F //inherits 5 parameters from bin\config.bin/CfgVehicles/Rescue_duck_base_F, sources - ["A3_Boat_F_Boat_Transport_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Boat_F_Boat_Transport_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"damagehide_zbytek", 0}, {"damage_unhide", 0}, {"drivingwheel", 0}, {"propeller", 0}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.245;
			verticalOffsetWorld = -0.018;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Lifeboat.jpg";
		_generalMacro = "B_Lifeboat";
		scope = 2;
		crew = "B_Soldier_F";
		faction = "BLU_F";
		side = 1;
		typicalCargo[] = {"B_Soldier_F", "B_Soldier_F"};
		forceInGarage = 0;
	};
	class O_Lifeboat: Rescue_duck_base_F //inherits 5 parameters from bin\config.bin/CfgVehicles/Rescue_duck_base_F, sources - ["A3_Boat_F_Boat_Transport_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Boat_F_Boat_Transport_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"damagehide_zbytek", 0}, {"damage_unhide", 0}, {"drivingwheel", 0}, {"propeller", 0}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.245;
			verticalOffsetWorld = -0.018;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Lifeboat.jpg";
		_generalMacro = "O_Lifeboat";
		scope = 2;
		crew = "O_Soldier_F";
		faction = "OPF_F";
		side = 0;
		typicalCargo[] = {"O_Soldier_F", "O_Soldier_F"};
	};
	class C_Rubberboat: Rescue_duck_base_F //inherits 5 parameters from bin\config.bin/CfgVehicles/Rescue_duck_base_F, sources - ["A3_Boat_F_Boat_Transport_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Boat_F_Boat_Transport_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"damagehide_zbytek", 0}, {"damage_unhide", 0}, {"drivingwheel", 0}, {"propeller", 0}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.245;
			verticalOffsetWorld = -0.018;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Rubberboat.jpg";
		_generalMacro = "C_Rubberboat";
		scope = 2;
		crew = "C_man_1";
		side = 3;
		faction = "CIV_F";
		typicalCargo[] = {"C_man_2_F", "C_man_3_F"};
		hiddenSelectionsTextures[] = {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_civilian_CO.paa"};
		threat[] = {0, 0, 0};
		textureList[] = {"Civilian", 1};
	};
	class I_Boat_Armed_01_minigun_F: Boat_Armed_01_minigun_base_F //inherits 8 parameters from bin\config.bin/CfgVehicles/Boat_Armed_01_minigun_base_F, sources - ["A3_Boat_F_Beta_Boat_Armed_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Boat_F_Beta_Boat_Armed_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"turret_shake", 0}, {"turret_shake_aside", 0}, {"magazine_hide", 0}, {"mainturret", 0}, {"damagehideotocvez", 0}, {"maingun", 0.09}, {"damagehideotochlaven", 0}, {"rearturret", -3.16}, {"reargun", 0.09}, {"muzzleflash", 0}, {"zaslehrot", 0}, {"zasleh2rot", 0}, {"fuel", 1}, {"mph", 0.04}, {"rpm", 0}, {"amps_random", 0}, {"oil_random", 0}, {"trim_random", 0.04}, {"tmp_random", 0}, {"volt_random", 0.04}, {"drivingwheel", 0}, {"ammobelt_hide", 0}, {"bullet001_2_hide", 0.33}, {"bullet002_2_hide", 0.33}, {"bullet003_2_hide", 0.33}, {"bullet004_2_hide", 0.33}, {"bullet005_2_hide", 0.33}, {"bullet006_2_hide", 0.33}, {"positionlights", 0}, {"gun_revolving", 0.33}, {"muzzleflash2", 0}};
			hide[] = {"zasleh", "p svetlo", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 3.181;
			verticalOffsetWorld = -0.426;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_Boat_Armed_01_minigun_F.jpg";
		_generalMacro = "I_Boat_Armed_01_minigun_F";
		displayName = "Speedboat Minigun";
		scope = 2;
		accuracy = 1.5;
		crew = "I_soldier_F";
		faction = "IND_F";
		side = 2;
		typicalCargo[] = {"I_soldier_F", "I_soldier_F"};
		hiddenSelectionsTextures[] = {"\A3\boat_f_beta\Boat_Armed_01\data\Boat_Armed_01_ext_INDP_co.paa", "\A3\boat_f_beta\Boat_Armed_01\data\Boat_Armed_01_int_INDP_co.paa", "\A3\boat_f_beta\Boat_Armed_01\data\Boat_Armed_01_crows_INDP_co.paa"};
		textureList[] = {"Indep", 1};
		class Turrets: Turrets //inherits 2 parameters from bin\config.bin/CfgVehicles/Boat_Armed_01_minigun_base_F/Turrets, sources - ["A3_Boat_F_Beta_Boat_Armed_01"]
		{
			class FrontTurret: FrontTurret //inherits 0 parameters from bin\config.bin/CfgVehicles/Boat_Armed_01_minigun_base_F/Turrets/FrontTurret, sources - []
			{
			};
			class RearTurret: RearTurret //inherits 7 parameters from bin\config.bin/CfgVehicles/Boat_Armed_01_minigun_base_F/Turrets/RearTurret, sources - ["A3_Boat_F_Beta_Boat_Armed_01"]
			{
				magazines[] = {"2000Rnd_65x39_Belt_Tracer_Yellow"};
			};
		};
	};
	class I_Boat_Transport_01_F: Rubber_duck_base_F //inherits 85 parameters from bin\config.bin/CfgVehicles/Rubber_duck_base_F, sources - ["A3_Boat_F_Beta_Boat_Transport_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Boat_F_Beta_Boat_Transport_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"damagehide_zbytek", 0}, {"damage_unhide", 0}, {"drivingwheel", 0}, {"propeller", 0}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.245;
			verticalOffsetWorld = -0.018;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_Boat_Transport_01_F.jpg";
		_generalMacro = "I_Boat_Transport_01_F";
		scope = 2;
		crew = "I_soldier_F";
		faction = "IND_F";
		side = 2;
		typicalCargo[] = {"I_soldier_F", "I_soldier_F"};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_INDP_CO.paa"};
		textureList[] = {"Digital", 1};
	};
	class SDV_01_base_F: Boat_F //inherits 9 parameters from bin\config.bin/CfgVehicles/Boat_F, sources - ["A3_Boat_F_Beta_SDV_01"]
	{
		features = "Randomization: No						<br />Camo selections: 1 - the whole body						<br />Script door sources: None						<br />Script animations: Doors, periscope						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: Slingloadable						<br />Cargo proxy indexes: 1 and 2";
		author = "Bohemia Interactive";
		mapSize = 8.45;
		class SpeechVariants //sources - ["A3_Boat_F_Beta_SDV_01"]
		{
			class Default //sources - ["A3_Boat_F_Beta_SDV_01"]
			{
				speechSingular[] = {"veh_ship_submarine_s"};
				speechPlural[] = {"veh_ship_submarine_p"};
			};
		};
		textSingular = "SDV";
		textPlural = "SDVs";
		nameSound = "veh_ship_submarine_s";
		_generalMacro = "SDV_01_base_F";
		displayName = "SDV";
		vehicleClass = "Submarine";
		model = "\A3\boat_f_beta\SDV_01\SDV_01_F.p3d";
		editorSubcategory = "EdSubcat_Submersibles";
		picture = "\A3\boat_f_beta\SDV_01\data\ui\portrait_SDV_ca.paa";
		Icon = "\A3\boat_f_beta\SDV_01\data\ui\map_SDV_ca.paa";
		unitInfoType = "RscOptics_SDV_driver";
		radarType = 8;
		leftEngineEffect = "LEngEffectsSmall";
		rightEngineEffect = "REngEffectsSmall";
		class TransportWeapons //sources - []
		{
		};
		class TransportMagazines //sources - []
		{
		};
		class TransportItems //sources - ["A3_Boat_F_Beta_SDV_01"]
		{
			class _xx_FirstAidKit //sources - ["A3_Boat_F_Beta_SDV_01"]
			{
				name = "FirstAidKit";
				count = 2;
			};
		};
		memoryPointSupply = "door_back_axis";
		supplyRadius = 10;
		memoryPointTaskMarker = "TaskMarker_1_pos";
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1", "SlingLoadCargo2", "SlingLoadCargo3", "SlingLoadCargo4"};
		attenuationEffectType = "TankAttenuation";
		insideSoundCoef = 1;
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\boat\SDV\sdv-start2-ext", 0.1, 1};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\boat\SDV\sdv-start2-ext", 1, 1, 100};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\boat\SDV\sdv-stop2-ext", 0.1, 1};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\boat\SDV\sdv-stop2-ext", 1, 1, 100};
		buildCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_01", 1.77828, 1, 200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_02", 1.77828, 1, 200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_03", 1.77828, 1, 200};
		buildCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_04", 1.77828, 1, 200};
		soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01", 1.77828, 1, 200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02", 1.77828, 1, 200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03", 1.77828, 1, 200};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04", 1.77828, 1, 200};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05", 1.77828, 1, 200};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06", 1.77828, 1, 200};
		soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166, "woodCrash4", 0.166, "woodCrash5", 0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01", 1.77828, 1, 200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02", 1.77828, 1, 200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03", 1.77828, 1, 200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04", 1.77828, 1, 200};
		soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
		class Sounds //sources - ["A3_Boat_F_Beta_SDV_01"]
		{
			class IdleOut //sources - ["A3_Boat_F_Beta_SDV_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SDV\SDV_engine_2", 1, 2.5, 100};
				frequency = "1";
				volume = "engineOn* (thrust factor[1, 0])*0.1";
			};
			class Engine //sources - ["A3_Boat_F_Beta_SDV_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SDV\SDV_engine_2", 1, 3, 300};
				frequency = "0.70	+	(thrust *0.30)";
				volume = "engineOn* thrust*0.1";
			};
			class LodnSroub //sources - ["A3_Boat_F_Beta_SDV_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SDV\lopatky1", 1, 2, 200};
				frequency = "0.85	+	(thrust *0.15)";
				volume = "engineOn* thrust*0.3";
			};
			class WaternoiseOutW0 //sources - ["A3_Boat_F_Beta_SDV_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1", 1, 1, 100};
				frequency = "1";
				volume = "(speed factor[3, 0]) * water";
			};
			class WaternoiseOutW1 //sources - ["A3_Boat_F_Beta_SDV_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-10-speed", 1, 1, 200};
				frequency = "1";
				volume = "(speed factor[1, 4])";
			};
			class RainExt //sources - ["A3_Boat_F_Beta_SDV_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext", 1, 1, 100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt //sources - ["A3_Boat_F_Beta_SDV_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext", 1, 1, 100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		class RenderTargets //sources - ["A3_Boat_F_Beta_SDV_01"]
		{
			class MDF1 //sources - ["A3_Boat_F_Beta_SDV_01"]
			{
				renderTarget = "rendertarget0";
				class PilotCameraView1 //sources - ["A3_Boat_F_Beta_SDV_01"]
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderQuality = 0;
					renderVisionMode = 0;
					fov = 0.5;
				};
			};
			class periscope //sources - ["A3_Boat_F_Beta_SDV_01"]
			{
				renderTarget = "rendertarget1";
				class CameraView1 //sources - ["A3_Boat_F_Beta_SDV_01"]
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 0;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
		};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment2"};
		driverAction = "driver_SDV";
		cargoAction[] = {"passenger_SDV", "passenger_SDV"};
		ejectDeadDriver = 0;
		ejectDeadCargo = 0;
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		driverLeftHandAnimName = "drivingwheel";
		driverRightHandAnimName = "drivingwheel";
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		commanderCanSee = 31;
		driverOpticsModel = "\A3\weapons_f_beta\reticle\reticle_SDV_driver";
		memoryPointDriverOptics = "PIP0_dir";
		driverForceOptics = 0;
		enableGPS = 1;
		transportSoldier = 2;
		typicalCargo[] = {"B_diver_F", "B_diver_F"};
		cost = 10000;
		threat[] = {0.1, 0.1, 0.1};
		armor = 30;
		showNVGCargo[] = {0};
		showNVGDriver = 0;
		showNVGGunner = 0;
		class ViewOptics: ViewOptics //inherits 3 parameters from bin\config.bin/CfgVehicles/Ship/ViewOptics, sources - ["A3_Boat_F_Beta_SDV_01"]
		{
			visionMode[] = {"Normal", "NVG"};
		};
		precision = 5;
		verticalTurnCoef = 0.05;
		turnCoef = 0.5;
		steerAheadSimul = 0.5;
		steerAheadPlan = 0.35;
		predictTurnPlan = 0.8;
		predictTurnSimul = 0.6;
		brakeDistance = 25;
		acceleration = 15;
		maxSpeed = 30;
		waterSpeedFactor = 1;
		periscopeDepth = 1.2;
		idleRpm = 200;
		redRpm = 1200;
		thrustDelay = 2;
		formationX = 15;
		formationZ = 15;
		simulation = "submarinex";
		overSpeedBrakeCoef = 0.8;
		enginePower = 45;
		engineShiftY = 0.4;
		waterLeakiness = 0;
		waterResistanceCoef = 0.015;
		waterLinearDampingCoefX = 2;
		waterLinearDampingCoefY = 0.8;
		waterAngularDampingCoef = 1;
		rudderForceCoef = 0.2;
		rudderForceCoefAtMaxSpeed = 0.05;
		class Exhausts //sources - ["A3_Boat_F_Beta_SDV_01"]
		{
			class Exhaust1 //sources - ["A3_Boat_F_Beta_SDV_01"]
			{
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustsEffectBig";
			};
		};
		waterEffectSpeed = 25;
		engineEffectSpeed = 5;
		leftDustEffect = "DustEffectBottom";
		class AnimationSources: AnimationSources //inherits 0 parameters from bin\config.bin/CfgVehicles/All/AnimationSources, sources - ["A3_Boat_F_Beta_SDV_01"]
		{
			class Doors //sources - ["A3_Boat_F_Beta_SDV_01"]
			{
				source = "user";
				animPeriod = 0;
				initPhase = 1;
			};
			class periscope //sources - ["A3_Boat_F_Beta_SDV_01"]
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
		};
		class UserActions //sources - ["A3_Boat_F_Beta_SDV_01"]
		{
			class CloseDriverdoor //sources - ["A3_Boat_F_Beta_SDV_01"]
			{
				displayName = "Close hatch";
				displayNameDefault = "Close hatch";
				position = "drivingwheel_axis";
				radius = 4;
				onlyForplayer = 0;
				condition = "this animationPhase """"door_1_1"""" > 0.5 AND Alive(this) AND player in (crew this)";
				statement = "this animate [""""door_1_1"""",0];this animate [""""door_1_2"""",0];this animate [""""door_2_1"""",0];this animate [""""door_2_2"""",0];";
			};
			class OpenDriverdoor: CloseDriverdoor //inherits 7 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/UserActions/CloseDriverdoor, sources - ["A3_Boat_F_Beta_SDV_01"]
			{
				displayName = "Open hatch";
				displayNameDefault = "Open hatch";
				condition = "this animationPhase """"door_1_1"""" < 0.5 AND Alive(this) AND player in (crew this)";
				statement = "this animate [""""door_1_1"""",1];this animate [""""door_1_2"""",1];this animate [""""door_2_1"""",1];this animate [""""door_2_2"""",1];";
			};
			class periscope_up //sources - ["A3_Boat_F_Beta_SDV_01"]
			{
				displayName = "Periscope up";
				displayNameDefault = "Periscope up";
				position = "drivingwheel_axis";
				radius = 4;
				onlyForplayer = 0;
				condition = "this animationPhase """"periscope"""" > 0.5 AND Alive(this) AND gunner this == player";
				statement = "this animate [""""periscope"""",0];this animate [""""Antenna"""",0];this animate [""""HideScope"""",0]; this animate [""""display_on_R"""",0];";
			};
			class periscope_down: periscope_up //inherits 7 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/UserActions/periscope_up, sources - ["A3_Boat_F_Beta_SDV_01"]
			{
				displayName = "Periscope down";
				displayNameDefault = "Periscope down";
				condition = "this animationPhase """"periscope"""" < 0.5 AND Alive(this) AND gunner this == player";
				statement = "this animate [""""periscope"""",3];this animate [""""Antenna"""",3];this animate [""""HideScope"""",3]; this animate [""""display_on_R"""",1];";
			};
		};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/Ship/Turrets, sources - ["A3_Boat_F_Beta_SDV_01"]
		{
			class CommanderTurret: NewTurret //inherits 115 parameters from bin\config.bin/CfgVehicles/AllVehicles/NewTurret, sources - ["A3_Boat_F_Beta_SDV_01"]
			{
				gunnerCompartments = "Compartment1";
				gunnerName = "Gunner";
				proxyType = "CPCommander";
				commanding = -1;
				ejectDeadGunner = 0;
				body = "ObsTurret";
				gun = "ObsGun";
				animationSourceBody = "ObsTurret";
				animationSourceGun = "ObsGun";
				gunBeg = "PIP1_dir";
				gunEnd = "PIP1_pos";
				memoryPointGunnerOptics = "PIP1_dir";
				weapons[] = {"Laserdesignator_mounted"};
				magazines[] = {"Laserbatteries"};
				soundServo[] = {"A3\sounds_f\dummysound", 0.01, 1, 10};
				gunnerAction = "commander_SDV";
				gunnergetInAction = "GetInLow";
				gunnergetOutAction = "GetOutLow";
				memoryPointsGetInGunner = "pos commander";
				memoryPointsGetInGunnerDir = "pos commander dir";
				usePip = 1;
				Laser = 1;
				stabilizedInAxes = 4;
				gunnerOpticsModel = "\A3\weapons_f_beta\reticle\reticle_SDV";
				turretInfoType = "RscOptics_SDV_periscope";
				gunnerForceOptics = 0;
				LODTurnedIn = 1100;
				LODTurnedOut = 1100;
				outGunnerMayFire = 1;
				startEngine = 0;
				class ViewOptics: ViewOptics //inherits 15 parameters from bin\config.bin/CfgVehicles/AllVehicles/NewTurret/ViewOptics, sources - ["A3_Boat_F_Beta_SDV_01"]
				{
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = -180;
					maxAngleY = 180;
					initFov = 0.14;
					minFov = 0.0175;
					maxFov = 0.14;
					visionMode[] = {"Normal", "NVG", "Ti"};
					thermalMode[] = {2, 3, 4};
				};
				class ViewGunner: ViewOptics //inherits 11 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/Turrets/CommanderTurret/ViewOptics, sources - ["A3_Boat_F_Beta_SDV_01"]
				{
					initAngleX = -15;
					minAngleX = -45;
					maxAngleX = 45;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					visionMode[] = {};
				};
			};
		};
		class Library //sources - ["A3_Boat_F_Beta_SDV_01"]
		{
			libTextDesc = "The SDV is a manned submersible vehicle used to transport teams of divers over long distances under water. Its construction is based on the SEALs Delivery Vehicle from the early 21st century, but the engine and maneuverability have been increased rapidly. Divers drive the SDV while exposed to water and breathing from the vehicle's compressed air supply or using their own SCUBA gear. The SDV can take up to four passengers, but can be operated by just one person. It also contains a small compartment to store additional equipment.";
		};
		extCameraPosition[] = {0, 2, -16};
		class HitPoints //sources - ["A3_Boat_F_Beta_SDV_01"]
		{
			class HitEngine //sources - ["A3_Boat_F_Beta_SDV_01"]
			{
				armor = 0.5;
				material = 10;
				name = "engine";
				visual = "";
				passThrough = 0.2;
			};
			class HitBody //sources - ["A3_Boat_F_Beta_SDV_01"]
			{
				armor = 10;
				material = -1;
				name = "karoserie";
				visual = "zbytek";
				passThrough = 1;
			};
		};
		class MFD //sources - ["A3_Boat_F_Beta_SDV_01"]
		{
			class AirplaneHUD //sources - ["A3_Boat_F_Beta_SDV_01"]
			{
				enableParallax = 0;
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0, 0.5, 0.4, 1};
				class Bones //sources - ["A3_Boat_F_Beta_SDV_01"]
				{
					class PlaneW //sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						type = "fixed";
						pos[] = {0.4975, 0.488};
					};
					class Center //sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						type = "fixed";
						pos[] = {0.4975, 0.683};
					};
					class Limit0109 //sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						type = "limit";
						limits[] = {0.1, 0.1, 0.9, 0.9};
					};
					class Velocity //sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5, 0.683};
						pos10[] = {1.45, 1.753};
					};
					class HorizonBankRot //sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0.4975, 0.488};
						min = 0.5236;
						max = -0.5236;
						minAngle = 159.25;
						maxAngle = 200.75;
						aspectRatio = 1;
					};
					class HorizonBankRotFull //sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0, 0};
						min = -3.1416;
						max = 3.1416;
						minAngle = -180;
						maxAngle = 180;
						aspectRatio = 1;
					};
					class Level0 //sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						pos0[] = {0.4975, 0.5};
						pos10[] = {1.4475, 1.07};
						type = "horizon";
						angle = 0;
					};
					class LevelP5: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 5;
					};
					class LevelM5: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -5;
					};
					class LevelP10: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 10;
					};
					class LevelM10: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -10;
					};
					class LevelP15: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 15;
					};
					class LevelM15: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -15;
					};
					class LevelP20: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 20;
					};
					class LevelM20: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -20;
					};
					class LevelP25: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 25;
					};
					class LevelM25: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -25;
					};
					class LevelP30: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 30;
					};
					class LevelM30: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -30;
					};
					class LevelP35: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 35;
					};
					class LevelM35: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -35;
					};
					class LevelP40: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 40;
					};
					class LevelM40: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -40;
					};
					class LevelP45: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 45;
					};
					class LevelM45: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -45;
					};
					class LevelP50: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 50;
					};
					class LevelM50: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -50;
					};
					class LevelP55: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 55;
					};
					class LevelM55: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -55;
					};
					class LevelP60: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 60;
					};
					class LevelM60: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -60;
					};
					class LevelP65: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 65;
					};
					class LevelM65: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -65;
					};
					class LevelP70: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 70;
					};
					class LevelM70: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -70;
					};
					class LevelP75: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 75;
					};
					class LevelM75: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -75;
					};
					class LevelP80: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 80;
					};
					class LevelM80: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -80;
					};
					class LevelP85: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 85;
					};
					class LevelM85: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -85;
					};
					class LevelP90: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 90;
					};
					class LevelM90: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -90;
					};
				};
				class Draw //sources - ["A3_Boat_F_Beta_SDV_01"]
				{
					alpha = 1;
					color[] = {0.04, 0, 0};
					condition = "on";
					class PlaneW //sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						type = "line";
						points[] = {{"PlaneW", {-0.03, 0}, 1}, {"PlaneW", {-0.01, 0}, 1}, {"PlaneW", {0, 0.0225263}, 1}, {"PlaneW", {0.01, 0}, 1}, {"PlaneW", {0.03, 0}, 1}, {}, {"PlaneW", {-0.185, 0}, 1}, {"PlaneW", {-0.265, 0}, 1}, {}, {"PlaneW", {0.185, 0}, 1}, {"PlaneW", {0.265, 0}, 1}};
					};
					class Static //sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						type = "line";
						points[] = {};
					};
					class Horizont //sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						clipTL[] = {0, 0.15};
						clipBR[] = {1, 0.85};
						class Dimmed //sources - ["A3_Boat_F_Beta_SDV_01"]
						{
							class Level0 //sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"Level0", {0.1, 0}, 1}, {"Level0", {-0.1, 0}, 1}, {}};
							};
							class LevelM5: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM5", {-0.1, 0}, 1}, {"LevelM5", {0.1, 0}, 1}};
							};
							class LevelP5: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP5", {-0.1, 0}, 1}, {"LevelP5", {0.1, 0}, 1}};
							};
							class LevelM10: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM10", {-0.1, 0}, 1}, {"LevelM10", {0.1, 0}, 1}};
							};
							class LevelP10: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP10", {-0.1, 0}, 1}, {"LevelP10", {0.1, 0}, 1}};
							};
							class LevelM15: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM15", {-0.1, 0}, 1}, {"LevelM15", {0.1, 0}, 1}};
							};
							class LevelP15: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP15", {-0.1, 0}, 1}, {"LevelP15", {0.1, 0}, 1}};
							};
							class LevelM20: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM20", {-0.1, 0}, 1}, {"LevelM20", {0.1, 0}, 1}};
							};
							class LevelP20: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP20", {-0.1, 0}, 1}, {"LevelP20", {0.1, 0}, 1}};
							};
							class LevelM25: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM25", {-0.1, 0}, 1}, {"LevelM25", {0.1, 0}, 1}};
							};
							class LevelP25: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP25", {-0.1, 0}, 1}, {"LevelP25", {0.1, 0}, 1}};
							};
							class LevelM30: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM30", {-0.1, 0}, 1}, {"LevelM30", {0.1, 0}, 1}};
							};
							class LevelP30: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP30", {-0.1, 0}, 1}, {"LevelP30", {0.1, 0}, 1}};
							};
							class LevelM35: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM35", {-0.1, 0}, 1}, {"LevelM35", {0.1, 0}, 1}};
							};
							class LevelP35: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP35", {-0.1, 0}, 1}, {"LevelP35", {0.1, 0}, 1}};
							};
							class LevelM40: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM40", {-0.1, 0}, 1}, {"LevelM40", {0.1, 0}, 1}};
							};
							class LevelP40: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP40", {-0.1, 0}, 1}, {"LevelP40", {0.1, 0}, 1}};
							};
							class LevelM45: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM45", {-0.1, 0}, 1}, {"LevelM45", {0.1, 0}, 1}};
							};
							class LevelP45: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP45", {-0.1, 0}, 1}, {"LevelP45", {0.1, 0}, 1}};
							};
							class LevelM50: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM50", {-0.1, 0}, 1}, {"LevelM50", {0.1, 0}, 1}};
							};
							class LevelP50: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP50", {-0.1, 0}, 1}, {"LevelP50", {0.1, 0}, 1}};
							};
							class LevelM55: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM55", {-0.1, 0}, 1}, {"LevelM55", {0.1, 0}, 1}};
							};
							class LevelP55: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP55", {-0.1, 0}, 1}, {"LevelP55", {0.1, 0}, 1}};
							};
							class LevelM60: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM60", {-0.1, 0}, 1}, {"LevelM60", {0.1, 0}, 1}};
							};
							class LevelP60: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP60", {-0.1, 0}, 1}, {"LevelP60", {0.1, 0}, 1}};
							};
							class LevelM65: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM65", {-0.1, 0}, 1}, {"LevelM65", {0.1, 0}, 1}};
							};
							class LevelP65: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP65", {-0.1, 0}, 1}, {"LevelP65", {0.1, 0}, 1}};
							};
							class LevelM70: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM70", {-0.1, 0}, 1}, {"LevelM70", {0.1, 0}, 1}};
							};
							class LevelP70: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP70", {-0.1, 0}, 1}, {"LevelP70", {0.1, 0}, 1}};
							};
							class LevelM75: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM75", {-0.1, 0}, 1}, {"LevelM75", {0.1, 0}, 1}};
							};
							class LevelP75: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP75", {-0.1, 0}, 1}, {"LevelP75", {0.1, 0}, 1}};
							};
							class LevelM80: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM80", {-0.1, 0}, 1}, {"LevelM80", {0.1, 0}, 1}};
							};
							class LevelP80: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP80", {-0.1, 0}, 1}, {"LevelP80", {0.1, 0}, 1}};
							};
							class LevelM85: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM85", {-0.1, 0}, 1}, {"LevelM85", {0.1, 0}, 1}};
							};
							class LevelP85: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP85", {-0.1, 0}, 1}, {"LevelP85", {0.1, 0}, 1}};
							};
							class LevelM90: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM90", {-0.1, 0}, 1}, {"LevelM90", {0.1, 0}, 1}};
							};
							class LevelP90: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP90", {-0.1, 0}, 1}, {"LevelP90", {0.1, 0}, 1}};
							};
						};
					};
					class AltNumberASL //sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						class Box //sources - ["A3_Boat_F_Beta_SDV_01"]
						{
							type = "line";
							points[] = {{{0.76, 0.506279}, 1}, {{0.84, 0.506279}, 1}, {{0.84, 0.466858}, 1}, {{0.76, 0.466858}, 1}, {{0.76, 0.506279}, 1}};
						};
						class AltNumber //sources - ["A3_Boat_F_Beta_SDV_01"]
						{
							type = "text";
							source = "horizonDive";
							sourceScale = 10;
							sourceLength = 2;
							sourcePrecision = 1;
							align = "left";
							scale = 1;
							pos[] = {{0.83, 0.466858}, 1};
							right[] = {{0.89, 0.466858}, 1};
							down[] = {{0.83, 0.506279}, 1};
						};
					};
				};
				topLeft = "HUD_1_top_left";
				topRight = "HUD_1_top_right";
				bottomLeft = "HUD_1_bottom_left";
			};
			class HUD_Right: AirplaneHUD //inherits 11 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/AirplaneHUD, sources - ["A3_Boat_F_Beta_SDV_01"]
			{
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0, 0.5, 0.4, 1};
				class Bones //sources - ["A3_Boat_F_Beta_SDV_01"]
				{
					class PlaneW //sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						type = "fixed";
						pos[] = {0.4975, 0.488};
					};
					class Center //sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						type = "fixed";
						pos[] = {0.4975, 0.683};
					};
					class Limit0109 //sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						type = "limit";
						limits[] = {0.1, 0.1, 0.9, 0.9};
					};
					class Velocity //sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5, 0.683};
						pos10[] = {1.45, 1.753};
					};
					class HorizonBankRot //sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0.4975, 0.488};
						min = 0.5236;
						max = -0.5236;
						minAngle = 159.25;
						maxAngle = 200.75;
						aspectRatio = 1;
					};
					class HorizonBankRotFull //sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0, 0};
						min = -3.1416;
						max = 3.1416;
						minAngle = -180;
						maxAngle = 180;
						aspectRatio = 1;
					};
					class Level0 //sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						pos0[] = {0.4975, 0.5};
						pos10[] = {1.4475, 1.07};
						type = "horizon";
						angle = 0;
					};
					class LevelP5: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 5;
					};
					class LevelM5: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -5;
					};
					class LevelP10: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 10;
					};
					class LevelM10: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -10;
					};
					class LevelP15: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 15;
					};
					class LevelM15: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -15;
					};
					class LevelP20: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 20;
					};
					class LevelM20: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -20;
					};
					class LevelP25: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 25;
					};
					class LevelM25: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -25;
					};
					class LevelP30: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 30;
					};
					class LevelM30: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -30;
					};
					class LevelP35: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 35;
					};
					class LevelM35: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -35;
					};
					class LevelP40: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 40;
					};
					class LevelM40: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -40;
					};
					class LevelP45: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 45;
					};
					class LevelM45: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -45;
					};
					class LevelP50: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 50;
					};
					class LevelM50: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -50;
					};
					class LevelP55: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 55;
					};
					class LevelM55: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -55;
					};
					class LevelP60: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 60;
					};
					class LevelM60: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -60;
					};
					class LevelP65: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 65;
					};
					class LevelM65: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -65;
					};
					class LevelP70: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 70;
					};
					class LevelM70: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -70;
					};
					class LevelP75: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 75;
					};
					class LevelM75: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -75;
					};
					class LevelP80: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 80;
					};
					class LevelM80: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -80;
					};
					class LevelP85: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 85;
					};
					class LevelM85: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -85;
					};
					class LevelP90: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = 90;
					};
					class LevelM90: Level0 //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Bones/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						angle = -90;
					};
				};
				class Draw //sources - ["A3_Boat_F_Beta_SDV_01"]
				{
					alpha = 1;
					color[] = {0.04, 0, 0};
					condition = "on";
					class PlaneW //sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						type = "line";
						points[] = {{"PlaneW", {-0.03, 0}, 1}, {"PlaneW", {-0.01, 0}, 1}, {"PlaneW", {0, 0.0225263}, 1}, {"PlaneW", {0.01, 0}, 1}, {"PlaneW", {0.03, 0}, 1}, {}, {"PlaneW", {-0.185, 0}, 1}, {"PlaneW", {-0.265, 0}, 1}, {}, {"PlaneW", {0.185, 0}, 1}, {"PlaneW", {0.265, 0}, 1}};
					};
					class Static //sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						type = "line";
						points[] = {};
					};
					class Horizont //sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						clipTL[] = {0, 0.15};
						clipBR[] = {1, 0.85};
						class Dimmed //sources - ["A3_Boat_F_Beta_SDV_01"]
						{
							class Level0 //sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"Level0", {0.1, 0}, 1}, {"Level0", {-0.1, 0}, 1}, {}};
							};
							class LevelM5: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM5", {-0.1, 0}, 1}, {"LevelM5", {0.1, 0}, 1}};
							};
							class LevelP5: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP5", {-0.1, 0}, 1}, {"LevelP5", {0.1, 0}, 1}};
							};
							class LevelM10: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM10", {-0.1, 0}, 1}, {"LevelM10", {0.1, 0}, 1}};
							};
							class LevelP10: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP10", {-0.1, 0}, 1}, {"LevelP10", {0.1, 0}, 1}};
							};
							class LevelM15: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM15", {-0.1, 0}, 1}, {"LevelM15", {0.1, 0}, 1}};
							};
							class LevelP15: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP15", {-0.1, 0}, 1}, {"LevelP15", {0.1, 0}, 1}};
							};
							class LevelM20: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM20", {-0.1, 0}, 1}, {"LevelM20", {0.1, 0}, 1}};
							};
							class LevelP20: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP20", {-0.1, 0}, 1}, {"LevelP20", {0.1, 0}, 1}};
							};
							class LevelM25: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM25", {-0.1, 0}, 1}, {"LevelM25", {0.1, 0}, 1}};
							};
							class LevelP25: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP25", {-0.1, 0}, 1}, {"LevelP25", {0.1, 0}, 1}};
							};
							class LevelM30: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM30", {-0.1, 0}, 1}, {"LevelM30", {0.1, 0}, 1}};
							};
							class LevelP30: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP30", {-0.1, 0}, 1}, {"LevelP30", {0.1, 0}, 1}};
							};
							class LevelM35: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM35", {-0.1, 0}, 1}, {"LevelM35", {0.1, 0}, 1}};
							};
							class LevelP35: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP35", {-0.1, 0}, 1}, {"LevelP35", {0.1, 0}, 1}};
							};
							class LevelM40: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM40", {-0.1, 0}, 1}, {"LevelM40", {0.1, 0}, 1}};
							};
							class LevelP40: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP40", {-0.1, 0}, 1}, {"LevelP40", {0.1, 0}, 1}};
							};
							class LevelM45: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM45", {-0.1, 0}, 1}, {"LevelM45", {0.1, 0}, 1}};
							};
							class LevelP45: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP45", {-0.1, 0}, 1}, {"LevelP45", {0.1, 0}, 1}};
							};
							class LevelM50: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM50", {-0.1, 0}, 1}, {"LevelM50", {0.1, 0}, 1}};
							};
							class LevelP50: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP50", {-0.1, 0}, 1}, {"LevelP50", {0.1, 0}, 1}};
							};
							class LevelM55: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM55", {-0.1, 0}, 1}, {"LevelM55", {0.1, 0}, 1}};
							};
							class LevelP55: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP55", {-0.1, 0}, 1}, {"LevelP55", {0.1, 0}, 1}};
							};
							class LevelM60: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM60", {-0.1, 0}, 1}, {"LevelM60", {0.1, 0}, 1}};
							};
							class LevelP60: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP60", {-0.1, 0}, 1}, {"LevelP60", {0.1, 0}, 1}};
							};
							class LevelM65: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM65", {-0.1, 0}, 1}, {"LevelM65", {0.1, 0}, 1}};
							};
							class LevelP65: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP65", {-0.1, 0}, 1}, {"LevelP65", {0.1, 0}, 1}};
							};
							class LevelM70: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM70", {-0.1, 0}, 1}, {"LevelM70", {0.1, 0}, 1}};
							};
							class LevelP70: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP70", {-0.1, 0}, 1}, {"LevelP70", {0.1, 0}, 1}};
							};
							class LevelM75: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM75", {-0.1, 0}, 1}, {"LevelM75", {0.1, 0}, 1}};
							};
							class LevelP75: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP75", {-0.1, 0}, 1}, {"LevelP75", {0.1, 0}, 1}};
							};
							class LevelM80: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM80", {-0.1, 0}, 1}, {"LevelM80", {0.1, 0}, 1}};
							};
							class LevelP80: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP80", {-0.1, 0}, 1}, {"LevelP80", {0.1, 0}, 1}};
							};
							class LevelM85: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM85", {-0.1, 0}, 1}, {"LevelM85", {0.1, 0}, 1}};
							};
							class LevelP85: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP85", {-0.1, 0}, 1}, {"LevelP85", {0.1, 0}, 1}};
							};
							class LevelM90: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelM90", {-0.1, 0}, 1}, {"LevelM90", {0.1, 0}, 1}};
							};
							class LevelP90: Level0 //inherits 2 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/MFD/HUD_Right/Draw/Horizont/Dimmed/Level0, sources - ["A3_Boat_F_Beta_SDV_01"]
							{
								type = "line";
								points[] = {{"LevelP90", {-0.1, 0}, 1}, {"LevelP90", {0.1, 0}, 1}};
							};
						};
					};
					class AltNumberASL //sources - ["A3_Boat_F_Beta_SDV_01"]
					{
						class Box //sources - ["A3_Boat_F_Beta_SDV_01"]
						{
							type = "line";
							points[] = {{{0.76, 0.506279}, 1}, {{0.84, 0.506279}, 1}, {{0.84, 0.466858}, 1}, {{0.76, 0.466858}, 1}, {{0.76, 0.506279}, 1}};
						};
						class AltNumber //sources - ["A3_Boat_F_Beta_SDV_01"]
						{
							type = "text";
							source = "horizonDive";
							sourceScale = 10;
							sourceLength = 2;
							sourcePrecision = 1;
							align = "left";
							scale = 1;
							pos[] = {{0.83, 0.466858}, 1};
							right[] = {{0.89, 0.466858}, 1};
							down[] = {{0.83, 0.506279}, 1};
						};
					};
				};
				topLeft = "HUD_2_top_left";
				topRight = "HUD_2_top_right";
				bottomLeft = "HUD_2_bottom_left";
			};
		};
		class Damage //sources - ["A3_Boat_F_Beta_SDV_01"]
		{
			tex[] = {};
			mat[] = {"A3\boat_f_beta\SDV_01\data\SDV_ext.rvmat", "A3\boat_f_beta\SDV_01\data\SDV_ext_damage.rvmat", "A3\boat_f_beta\SDV_01\data\SDV_ext_destruct.rvmat", "A3\boat_f_beta\SDV_01\data\SDV_int.rvmat", "A3\boat_f_beta\SDV_01\data\SDV_int_damage.rvmat", "A3\boat_f_beta\SDV_01\data\SDV_int_destruct.rvmat"};
		};
		class Reflectors //sources - ["A3_Boat_F_Beta_SDV_01"]
		{
			class Left //sources - ["A3_Boat_F_Beta_SDV_01"]
			{
				color[] = {0.8, 0.9, 1};
				ambient[] = {1, 1, 1};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 30;
				outerAngle = 160;
				coneFadeCoef = 8;
				intensity = 500;
				useFlare = 0;
				dayLight = 0;
				flareSize = 0.9;
				flareMaxDistance = 85;
				class Attenuation //sources - ["A3_Boat_F_Beta_SDV_01"]
				{
					start = 1;
					constant = 0;
					linear = 1;
					quadratic = 0.5;
					hardLimitStart = 45;
					hardLimitEnd = 50;
				};
			};
			class Right: Left //inherits 16 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/Reflectors/Left, sources - ["A3_Boat_F_Beta_SDV_01"]
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class Right2: Right //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/Reflectors/Right, sources - ["A3_Boat_F_Beta_SDV_01"]
			{
				position = "P svetlo flare";
				useFlare = 1;
			};
			class Left2: Left //inherits 16 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/Reflectors/Left, sources - ["A3_Boat_F_Beta_SDV_01"]
			{
				position = "L svetlo flare";
				useFlare = 1;
			};
			class interior_light: Right //inherits 4 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F/Reflectors/Right, sources - ["A3_Boat_F_Beta_SDV_01"]
			{
				color[] = {0.12, 0.08, 0.04};
				ambient[] = {0, 0, 0};
				position = "interior_light";
				direction = "interior_light";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 1;
				innerAngle = 180;
				outerAngle = 360;
				coneFadeCoef = 8;
				intensity = 0.3;
				useFlare = 0;
				dayLight = 1;
				class Attenuation //sources - ["A3_Boat_F_Beta_SDV_01"]
				{
					start = 0.7;
					constant = 0;
					linear = 0;
					quadratic = 200;
					hardLimitStart = 5;
					hardLimitEnd = 10;
				};
			};
		};
		aggregateReflectors[] = {{"Left", "Right", "Left2", "Right2"}, {"interior_light"}};
		hiddenSelections[] = {"Camo1"};
	};
	class B_SDV_01_F: SDV_01_base_F //inherits 121 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F, sources - ["A3_Boat_F_Beta_SDV_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Boat_F_Beta_SDV_01"]
		{
			eden = 1;
			animate[] = {{"drivingwheel", 0}, {"hidescope", 0}, {"damagehide", 0}, {"vrtule", 0}, {"steering", 0}, {"hidedrivingwheel", 0}, {"damagehidedrivingwheel", 0}, {"elevating", 0}, {"drivingwheel_elev", 0}, {"hidedrivingwheel_elev", 0}, {"damagehidedrivingwheel_elev", 0}, {"elevatingflapfl", 0}, {"elevatingflapfr", 0}, {"obsturret", 0}, {"hideobsturret", 0}, {"obsgun", 0}, {"antenna", 0}, {"damagehideantenna", 0}, {"door_1_1", 1}, {"hidedoor_1_1", 0}, {"damagehidedoor_1_1", 0}, {"door_1_2", 1}, {"hidedoor_1_2", 0}, {"damagehidedoor_1_2", 0}, {"door_2_1", 1}, {"hidedoor_2_1", 0}, {"damagehidedoor_2_1", 0}, {"door_2_2", 1}, {"hidedoor_2_2", 0}, {"damagehidedoor_2_2", 0}, {"gauges", 0}, {"indicatorcompass_1", 0}, {"indicatorcompass_2", 0}, {"fuel", 1}, {"indicatorvertspeed", 0}, {"display_on", 0}, {"display_on_r", 0}, {"ind_alt_1_10m", -0.04}, {"ind_alt_1_100m", -0.04}, {"ind_alt_2_10m", -0.04}, {"ind_alt_2_100m", -0.04}, {"ind_horizondive_1", -0.01}, {"horizondive_1", -0.01}, {"ind_horizondive_2", -0.01}, {"ind_horizonbank_1", 0.09}, {"ind_horizonbank_2", 0.09}, {"ind_rpm", 0}};
			hide[] = {"zasleh", "l svetlo", "p svetlo", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.909;
			verticalOffsetWorld = -0.05;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_SDV_01_F.jpg";
		_generalMacro = "B_SDV_01_F";
		scope = 2;
		crew = "B_diver_F";
		faction = "BLU_F";
		side = 1;
		typicalCargo[] = {"B_Soldier_F", "B_Soldier_F"};
		hiddenSelectionsTextures[] = {"\A3\boat_f_beta\SDV_01\data\SDV_ext_CO.paa"};
	};
	class O_SDV_01_F: SDV_01_base_F //inherits 121 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F, sources - ["A3_Boat_F_Beta_SDV_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Boat_F_Beta_SDV_01"]
		{
			eden = 1;
			animate[] = {{"drivingwheel", 0}, {"hidescope", 0}, {"damagehide", 0}, {"vrtule", 0}, {"steering", 0}, {"hidedrivingwheel", 0}, {"damagehidedrivingwheel", 0}, {"elevating", 0}, {"drivingwheel_elev", 0}, {"hidedrivingwheel_elev", 0}, {"damagehidedrivingwheel_elev", 0}, {"elevatingflapfl", 0}, {"elevatingflapfr", 0}, {"obsturret", 0}, {"hideobsturret", 0}, {"obsgun", 0}, {"antenna", 0}, {"damagehideantenna", 0}, {"door_1_1", 1}, {"hidedoor_1_1", 0}, {"damagehidedoor_1_1", 0}, {"door_1_2", 1}, {"hidedoor_1_2", 0}, {"damagehidedoor_1_2", 0}, {"door_2_1", 1}, {"hidedoor_2_1", 0}, {"damagehidedoor_2_1", 0}, {"door_2_2", 1}, {"hidedoor_2_2", 0}, {"damagehidedoor_2_2", 0}, {"gauges", 0}, {"indicatorcompass_1", 0}, {"indicatorcompass_2", 0}, {"fuel", 1}, {"indicatorvertspeed", 0}, {"display_on", 0}, {"display_on_r", 0}, {"ind_alt_1_10m", -0.04}, {"ind_alt_1_100m", -0.04}, {"ind_alt_2_10m", -0.04}, {"ind_alt_2_100m", -0.04}, {"ind_horizondive_1", -0.01}, {"horizondive_1", -0.01}, {"ind_horizondive_2", -0.01}, {"ind_horizonbank_1", 0.09}, {"ind_horizonbank_2", 0.09}, {"ind_rpm", 0}};
			hide[] = {"zasleh", "l svetlo", "p svetlo", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.909;
			verticalOffsetWorld = -0.05;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_SDV_01_F.jpg";
		_generalMacro = "O_SDV_01_F";
		scope = 2;
		crew = "O_diver_F";
		faction = "OPF_F";
		side = 0;
		typicalCargo[] = {"O_Soldier_F", "O_Soldier_F"};
		hiddenSelectionsTextures[] = {"\A3\boat_f_beta\SDV_01\data\SDV_ext_opfor_CO.paa"};
	};
	class I_SDV_01_F: SDV_01_base_F //inherits 121 parameters from bin\config.bin/CfgVehicles/SDV_01_base_F, sources - ["A3_Boat_F_Beta_SDV_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Boat_F_Beta_SDV_01"]
		{
			eden = 1;
			animate[] = {{"drivingwheel", 0}, {"hidescope", 0}, {"damagehide", 0}, {"vrtule", 0}, {"steering", 0}, {"hidedrivingwheel", 0}, {"damagehidedrivingwheel", 0}, {"elevating", 0}, {"drivingwheel_elev", 0}, {"hidedrivingwheel_elev", 0}, {"damagehidedrivingwheel_elev", 0}, {"elevatingflapfl", 0}, {"elevatingflapfr", 0}, {"obsturret", 0}, {"hideobsturret", 0}, {"obsgun", 0}, {"antenna", 0}, {"damagehideantenna", 0}, {"door_1_1", 1}, {"hidedoor_1_1", 0}, {"damagehidedoor_1_1", 0}, {"door_1_2", 1}, {"hidedoor_1_2", 0}, {"damagehidedoor_1_2", 0}, {"door_2_1", 1}, {"hidedoor_2_1", 0}, {"damagehidedoor_2_1", 0}, {"door_2_2", 1}, {"hidedoor_2_2", 0}, {"damagehidedoor_2_2", 0}, {"gauges", 0}, {"indicatorcompass_1", 0}, {"indicatorcompass_2", 0}, {"fuel", 1}, {"indicatorvertspeed", 0}, {"display_on", 0}, {"display_on_r", 0}, {"ind_alt_1_10m", -0.04}, {"ind_alt_1_100m", -0.04}, {"ind_alt_2_10m", -0.04}, {"ind_alt_2_100m", -0.04}, {"ind_horizondive_1", -0.01}, {"horizondive_1", -0.01}, {"ind_horizondive_2", -0.01}, {"ind_horizonbank_1", 0.09}, {"ind_horizonbank_2", 0.09}, {"ind_rpm", 0}};
			hide[] = {"zasleh", "l svetlo", "p svetlo", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.909;
			verticalOffsetWorld = -0.05;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_SDV_01_F.jpg";
		_generalMacro = "I_SDV_01_F";
		scope = 2;
		crew = "I_diver_f";
		faction = "IND_F";
		side = 2;
		typicalCargo[] = {"I_soldier_F", "I_soldier_F"};
		hiddenSelectionsTextures[] = {"\A3\boat_f_beta\SDV_01\data\SDV_ext_INDP_CO.paa"};
	};
	class Boat_Civil_01_base_F: Ship_F //inherits 49 parameters from bin\config.bin/CfgVehicles/Ship_F, sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
	{
		features = "Randomization: No						<br />Camo selections: 2 - the body, interior and engines						<br />Script door sources: None						<br />Script animations: HidePoliceSigns, HideRescueSigns, HidePolice, BeaconsStart						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: 1 and 2";
		author = "Bohemia Interactive";
		mapSize = 7.39;
		class SpeechVariants //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
		{
			class Default //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				speechSingular[] = {"veh_ship_boat_s"};
				speechPlural[] = {"veh_ship_boat_p"};
			};
		};
		textSingular = "boat";
		textPlural = "boats";
		nameSound = "veh_ship_boat_s";
		_generalMacro = "Boat_Civil_01_base_F";
		class Library //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
		{
			libTextDesc = "A luxury motorboat is an engine powered boat used by the Police and Altis' richest. Its speed and maneuverability is almost on a par with military speedboat.";
		};
		displayName = "Motorboat";
		model = "\A3\boat_f_gamma\Boat_Civil_01\Boat_Civil_01_F";
		editorSubcategory = "EdSubcat_Boats";
		picture = "\A3\boat_f_gamma\Boat_Civil_01\data\UI\portrait_civilian_boat_CA.paa";
		Icon = "\A3\boat_f_gamma\Boat_Civil_01\data\UI\map_civilian_boat_CA.paa";
		memoryPointTaskMarker = "TaskMarker_1_pos";
		cost = 20000;
		threat[] = {0, 0, 0};
		accuracy = 0.5;
		armor = 60;
		unitInfoType = "RscUnitInfoNoWeapon";
		class HitPoints: HitPoints //inherits 1 parameters from bin\config.bin/CfgVehicles/Ship_F/HitPoints, sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
		{
			class HitHull //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				armor = 0.2;
				material = 50;
				visual = "zbytek";
				passThrough = 1;
				explosionShielding = 2;
				name = "karoserie";
			};
			class HitEngine1: HitEngine //inherits 5 parameters from bin\config.bin/CfgVehicles/Ship_F/HitPoints/HitEngine, sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				armor = 0.2;
				material = -1;
				visual = "";
				passThrough = 1;
				explosionSHielding = 2;
				name = "engine1";
				convexComponent = "engine1";
			};
			class HitEngine2: HitEngine1 //inherits 7 parameters from bin\config.bin/CfgVehicles/Boat_Civil_01_base_F/HitPoints/HitEngine1, sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				armor = 0.2;
				material = -1;
				visual = "";
				passThrough = 1;
				explosionSHielding = 2;
				name = "engine2";
				convexComponent = "engine2";
			};
			class HitEngine: HitEngine2 //inherits 7 parameters from bin\config.bin/CfgVehicles/Boat_Civil_01_base_F/HitPoints/HitEngine2, sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				armor = 999;
				material = 60;
				visual = "";
				name = "engine";
				convexComponent = "engine";
				depends = "0.5 * (HitEngine1 + HitEngine2)";
			};
		};
		leftEngineEffect = "LEngEffectsSmall";
		rightEngineEffect = "REngEffectsSmall";
		simulation = "shipx";
		maxSpeed = 80;
		overSpeedBrakeCoef = 0.8;
		enginePower = 235;
		engineShiftY = 0.1;
		waterLeakiness = 1;
		turnCoef = 0.25;
		thrustDelay = 2;
		waterLinearDampingCoefY = 2;
		waterLinearDampingCoefX = 2;
		waterAngularDampingCoef = 1.2;
		waterResistanceCoef = 0.012;
		rudderForceCoef = 0.1;
		rudderForceCoefAtMaxSpeed = 0.003;
		idleRpm = 200;
		redRpm = 1200;
		class complexGearbox //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
		{
			GearboxRatios[] = {"R1", -0.782, "N", 0, "D1", 1.9};
			TransmissionRatios[] = {"High", 1};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		brakeDistance = 3;
		getInAction = "GetInBoat";
		getOutAction = "GetOutBoat";
		cargoGetInAction[] = {"GetInBoat"};
		cargoGetOutAction[] = {"GetOutBoat"};
		driverAction = "driver_mid01";
		driverLeftHandAnimName = "drivingWheel";
		driverRightHandAnimName = "drivingWheel";
		cargoAction[] = {"passenger_low01"};
		cargoIsCoDriver[] = {0};
		ejectDeadDriver = 0;
		ejectDeadCargo = 1;
		transportSoldier = 2;
		enableRadio = 1;
		enableGPS = 1;
		class TransportItems //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
		{
			class _xx_FirstAidKit //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				name = "FirstAidKit";
				count = 6;
			};
		};
		damageResistance = 0.00882;
		class Turrets //sources - []
		{
		};
		attenuationEffectType = "OpenCarAttenuation";
		insideSoundCoef = 1;
		soundEngineOnInt[] = {"a3\Sounds_F\vehicles\boat\Motor_Boat\engine_start", 0.562341, 1};
		soundEngineOnExt[] = {"a3\Sounds_F\vehicles\boat\Motor_Boat\engine_start", 0.562341, 1, 300};
		soundEngineOffInt[] = {"a3\Sounds_F\vehicles\boat\Motor_Boat\engine_stop", 0.562341, 1};
		soundEngineOffExt[] = {"a3\Sounds_F\vehicles\boat\Motor_Boat\engine_stop", 0.562341, 1, 300};
		buildCrash0[] = {"A3\sounds_f\Vehicles\boat\noises\Light_metal_boat_crash_building_01", 1.77828, 1, 200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\boat\noises\Light_metal_boat_crash_building_02", 1.77828, 1, 200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\boat\noises\Light_metal_boat_crash_building_03", 1.77828, 1, 200};
		soundBuildingCrash[] = {"buildCrash0", 0.33, "buildCrash1", 0.33, "buildCrash2", 0.34};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\boat\noises\Light_metal_boat_crash_wood_01", 1.77828, 1, 200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\boat\noises\Light_metal_boat_crash_wood_02", 1.77828, 1, 200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\boat\noises\Light_metal_boat_crash_wood_03", 1.77828, 1, 200};
		soundWoodCrash[] = {"woodCrash0", 0.33, "woodCrash1", 0.33, "woodCrash2", 0.34};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\boat\noises\Light_metal_boat_crash_armor_01", 3.16228, 1, 200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\boat\noises\Light_metal_boat_crash_armor_02", 3.16228, 1, 200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\boat\noises\Light_metal_boat_crash_armor_03", 3.16228, 1, 200};
		soundArmorCrash[] = {"ArmorCrash0", 0.33, "ArmorCrash1", 0.33, "ArmorCrash2", 0.34};
		soundGeneralCollision1[] = {"A3\sounds_f\Vehicles\boat\noises\Light_metal_boat_crash_armor_01", 1.77828, 1, 100};
		soundGeneralCollision2[] = {"A3\sounds_f\Vehicles\boat\noises\Light_metal_boat_crash_armor_02", 1.77828, 1, 100};
		soundGeneralCollision3[] = {"A3\sounds_f\Vehicles\boat\noises\Light_metal_boat_crash_armor_03", 1.77828, 1, 100};
		soundCrashes[] = {"soundGeneralCollision1", 0.33, "soundGeneralCollision2", 0.33, "soundGeneralCollision3", 0.34};
		class Sounds //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
		{
			class IdleOut //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Motor_Boat\engine_idle", 0.446684, 1, 300};
				frequency = "0.95	+	((rpm/	1000) factor[(100/	1000),(250/	1000)])*0.15";
				volume = "engineOn*(((rpm/	1000) factor[(100/	1000),(150/	1000)])	*	((rpm/	1000) factor[(270/	1000),(200/	1000)]))";
			};
			class Engine //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Motor_Boat\engine_1", 0.630957, 1, 350};
				frequency = "0.85	+	((rpm/	1000) factor[(200/	1000),(370/	1000)])*0.2";
				volume = "engineOn*(((rpm/	1000) factor[(190/	1000),(250/	1000)])	*	((rpm/	1000) factor[(380/	1000),(280/	1000)]))";
			};
			class EngineMidOut //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Motor_Boat\engine_3", 0.794328, 1, 380};
				frequency = "0.85	+	((rpm/	1000) factor[(280/	1000),(480/	1000)])*0.2";
				volume = "engineOn*(((rpm/	1000) factor[(250/	1000),(350/	1000)])	*	((rpm/	1000) factor[(480/	1000),(390/	1000)]))";
			};
			class EngineMaxOut2 //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Motor_Boat\engine_4", 0.891251, 1, 440};
				frequency = "0.86	+	((rpm/	1000) factor[(380/	1000),(580/	1000)])*0.2";
				volume = "engineOn*(((rpm/	1000) factor[(370/	1000),(440/	1000)])	*	((rpm/	1000) factor[(585/	1000),(495/	1000)]))";
			};
			class EngineMaxOut3 //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Motor_Boat\engine_5", 1, 1, 500};
				frequency = "0.85	+	((rpm/	1000) factor[(490/	1000),(800/	1000)])*0.2";
				volume = "engineOn*(((rpm/	1000) factor[(460/	1000),(550/	1000)])	*	((rpm/	1000) factor[(780/	1000),(620/	1000)]))";
			};
			class EngineMaxOut4 //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Motor_Boat\engine_6", 1.25893, 1, 550};
				frequency = "0.85	+	((rpm/	1000) factor[(650/	1000),(1000/	1000)])*0.2";
				volume = "engineOn*((rpm/	1000) factor[(600/	1000),(800/	1000)])";
			};
			class WaternoiseOutW0 //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1", 0.707946, 1, 150};
				frequency = "1";
				volume = "(speed factor[4, 1]) * water";
			};
			class WaternoiseOutW1 //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed", 0.794328, 1, 250};
				frequency = "1";
				volume = "((speed factor[2, 6]) min (speed factor[6, 4]))";
			};
			class WaternoiseOutW2 //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed", 1, 1, 350};
				frequency = "1";
				volume = "(speed factor[3, 9])";
			};
			class WaternoiseOutW3 //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1", 0.707946, 1, 150};
				frequency = "1";
				volume = "(speed factor[-4, -1]) * water";
			};
			class WaternoiseOutW4 //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed", 0.794328, 0.9, 250};
				frequency = "1";
				volume = "((speed factor[-2, -6]) min (speed factor[-6, -4]))";
			};
			class WaternoiseOutW5 //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed", 1, 0.9, 350};
				frequency = "1";
				volume = "(speed factor[-3, -9])";
			};
			class scrubLandExt //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\noises\boat_land_on_shallow", 1.77828, 1, 100};
				frequency = 1;
				volume = "(scrubLand factor[0.01, 0.20])";
			};
			class RainExt //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain2_ext", 1, 1, 100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain2_ext", 1, 1, 100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		class Exhausts //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
		{
			class Exhaust1 //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustsEffect";
			};
		};
		class Reflectors //sources - []
		{
		};
		class Damage //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
		{
			tex[] = {};
			mat[] = {"A3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext.rvmat", "A3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_damage.rvmat", "A3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_destruct.rvmat", "A3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_chrome.rvmat", "A3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_chrome.rvmat", "A3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_destruct.rvmat", "A3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int.rvmat", "A3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_damage.rvmat", "A3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_destruct.rvmat", "A3\Boat_F_Gamma\Boat_Civil_01\data\Boat_Civil_01_ext.rvmat", "A3\Boat_F_Gamma\Boat_Civil_01\data\Boat_Civil_01_ext_damage.rvmat", "A3\Boat_F_Gamma\Boat_Civil_01\data\Boat_Civil_01_ext_destruct.rvmat", "A3\Boat_F_Gamma\Boat_Civil_01\data\Boat_Civil_01_int.rvmat", "A3\Boat_F_Gamma\Boat_Civil_01\data\Boat_Civil_01_int_damage.rvmat", "A3\Boat_F_Gamma\Boat_Civil_01\data\Boat_Civil_01_int_destruct.rvmat"};
		};
		extCameraPosition[] = {0, 1, -8};
		leftFastWaterEffect = "LFastWaterEffects";
		rightFastWaterEffect = "RFastWaterEffects";
		waterEffectSpeed = 5;
		engineEffectSpeed = 5;
		waterFastEffectSpeed = 28;
		class EventHandlers: EventHandlers //inherits 0 parameters from bin\config.bin/CfgVehicles/Ship_F/EventHandlers, sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
		{
			init = "_this select 0 animate [""""HidePoliceSigns"""",1]; _this select 0 animate [""""HideRescueSigns"""",1]; _this select 0 animate [""""HidePolice"""",1];";
			killed = "_this select 0 animate [""""HidePoliceSigns"""",1]; _this select 0 animate [""""HideRescueSigns"""",1]; _this select 0 animate [""""HidePolice"""",1];";
		};
		hiddenSelections[] = {"camo", "camo2"};
		hiddenSelectionsTextures[] = {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_co.paa", "\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};
		class AnimationSources: AnimationSources //inherits 0 parameters from bin\config.bin/CfgVehicles/All/AnimationSources, sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
		{
			class hidePolice //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				displayName = "Hide police light bar";
				source = "user";
				initPhase = 1;
				author = "Bohemia Interactive";
			};
			class HideRescueSigns //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				displayName = "Hide rescue signs";
				source = "user";
				initPhase = 1;
				author = "Bohemia Interactive";
				forceAnimatePhase = 0;
				forceAnimate[] = {"HidePoliceSigns", 1};
			};
			class HidePoliceSigns //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				displayName = "Hide police signs";
				source = "user";
				initPhase = 1;
				author = "Bohemia Interactive";
				forceAnimatePhase = 0;
				forceAnimate[] = {"HideRescueSigns", 1};
			};
		};
		class TextureSources //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
		{
			class Civilian //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				displayName = "Civilian";
				author = "Bohemia Interactive";
				textures[] = {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_co.paa", "\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};
				factions[] = {"CIV_F"};
			};
			class Rescue //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				displayName = "Rescue";
				author = "Bohemia Interactive";
				textures[] = {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_rescue_co.paa", "\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_rescue_co.paa"};
				factions[] = {"CIV_F"};
			};
			class Police //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				displayName = "Police";
				author = "Bohemia Interactive";
				textures[] = {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_police_co.paa", "\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_police_co.paa"};
				factions[] = {"CIV_F"};
			};
		};
	};
	class C_Boat_Civil_01_F: Boat_Civil_01_base_F //inherits 95 parameters from bin\config.bin/CfgVehicles/Boat_Civil_01_base_F, sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"damagehidepolice", 0}, {"drivingwheel", 0}, {"propeller1", 0}, {"propeller2", 0}, {"engine1", 0}, {"engine2", 0}, {"indicatorspeed", 0}, {"fuel", 1}, {"indicatorrpm", 0}, {"throttle", 0}, {"prop_batt", 0}, {"prop_oil", 0}, {"prop_water", 0}, {"prop_trim", -0.1}, {"beacon1", 919.55}, {"beaconsstart", 0}, {"beacon2", 919.55}, {"beacon3", 919.55}, {"beacon4", 919.55}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.311;
			verticalOffsetWorld = -0.027;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Boat_Civil_01_F.jpg";
		_generalMacro = "C_Boat_Civil_01_F";
		scope = 2;
		displayName = "Motorboat";
		side = 3;
		faction = "CIV_F";
		crew = "C_man_1";
		typicalCargo[] = {"C_man_1"};
		class AnimationSources: AnimationSources //inherits 3 parameters from bin\config.bin/CfgVehicles/Boat_Civil_01_base_F/AnimationSources, sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
		{
			class Proxy //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Beacons //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		textureList[] = {"Civilian", 1};
		animationList[] = {"hidePolice", 1, "HideRescueSigns", 1, "HidePoliceSigns", 1};
	};
	class C_Boat_Civil_01_rescue_F: Boat_Civil_01_base_F //inherits 95 parameters from bin\config.bin/CfgVehicles/Boat_Civil_01_base_F, sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"damagehidepolice", 0}, {"drivingwheel", 0}, {"propeller1", 0}, {"propeller2", 0}, {"engine1", 0}, {"engine2", 0}, {"indicatorspeed", 0}, {"fuel", 1}, {"indicatorrpm", 0}, {"throttle", 0}, {"prop_batt", 0}, {"prop_oil", 0}, {"prop_water", 0}, {"prop_trim", -0.1}, {"beacon1", 925.74}, {"beaconsstart", 0}, {"beacon2", 925.74}, {"beacon3", 925.74}, {"beacon4", 925.74}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.311;
			verticalOffsetWorld = -0.027;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Boat_Civil_01_rescue_F.jpg";
		_generalMacro = "C_Boat_Civil_01_rescue_F";
		scope = 2;
		displayName = "Motorboat (Rescue)";
		side = 3;
		faction = "CIV_F";
		crew = "C_man_1";
		typicalCargo[] = {"C_man_1"};
		class AnimationSources: AnimationSources //inherits 3 parameters from bin\config.bin/CfgVehicles/Boat_Civil_01_base_F/AnimationSources, sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
		{
			class Proxy //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class Beacons //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		class EventHandlers: EventHandlers //inherits 2 parameters from bin\config.bin/CfgVehicles/Boat_Civil_01_base_F/EventHandlers, sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
		{
			init = "_this select 0 animate [""""HidePoliceSigns"""",1]; _this select 0 animate [""""HideRescueSigns"""",0]; _this select 0 animate [""""HidePolice"""",1];";
		};
		hiddenSelectionsTextures[] = {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_rescue_co.paa", "\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_rescue_co.paa"};
		textureList[] = {"Rescue", 1};
		animationList[] = {"hidePolice", 1, "HideRescueSigns", 0, "HidePoliceSigns", 1};
	};
	class C_Boat_Civil_01_police_F: Boat_Civil_01_base_F //inherits 95 parameters from bin\config.bin/CfgVehicles/Boat_Civil_01_base_F, sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"damagehidepolice", 0}, {"drivingwheel", 0}, {"propeller1", 0}, {"propeller2", 0}, {"engine1", 0}, {"engine2", 0}, {"indicatorspeed", 0}, {"fuel", 1}, {"indicatorrpm", 0}, {"throttle", 0}, {"prop_batt", 0}, {"prop_oil", 0}, {"prop_water", 0}, {"prop_trim", -0.1}, {"beacon1", 922.65}, {"beaconsstart", 0}, {"beacon2", 922.65}, {"beacon3", 922.65}, {"beacon4", 922.65}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.311;
			verticalOffsetWorld = -0.027;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Boat_Civil_01_police_F.jpg";
		_generalMacro = "C_Boat_Civil_01_police_F";
		scope = 2;
		displayName = "Motorboat (Police)";
		side = 3;
		faction = "CIV_F";
		crew = "C_man_1";
		typicalCargo[] = {"C_man_1"};
		class AnimationSources: AnimationSources //inherits 3 parameters from bin\config.bin/CfgVehicles/Boat_Civil_01_base_F/AnimationSources, sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
		{
			class Proxy //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class Beacons //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		class EventHandlers: EventHandlers //inherits 2 parameters from bin\config.bin/CfgVehicles/Boat_Civil_01_base_F/EventHandlers, sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
		{
			init = "_this select 0 animate [""""HidePoliceSigns"""",0]; _this select 0 animate [""""HideRescueSigns"""",1]; _this select 0 animate [""""HidePolice"""",0];";
		};
		class UserActions //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
		{
			class beacons_start //sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				userActionID = 50;
				displayName = "Beacons On";
				displayNameDefault = "Beacons On";
				position = "mph_axis";
				priority = 1.5;
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 0;
				condition = "this animationPhase """"BeaconsStart"""" < 0.5 AND Alive(this) AND driver this == player";
				statement = "this animate [""""BeaconsStart"""",1];";
			};
			class beacons_stop: beacons_start //inherits 10 parameters from bin\config.bin/CfgVehicles/C_Boat_Civil_01_police_F/UserActions/beacons_start, sources - ["A3_Boat_F_Gamma_Boat_Civil_01"]
			{
				userActionID = 51;
				displayName = "Beacons Off";
				displayNameDefault = "Beacons Off";
				condition = "this animationPhase """"BeaconsStart"""" > 0.5 AND Alive(this) AND driver this == player";
				statement = "this animate [""""BeaconsStart"""",0];";
			};
		};
		hiddenSelectionsTextures[] = {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_police_co.paa", "\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_police_co.paa"};
		textureList[] = {"Police", 1};
		animationList[] = {"hidePolice", 0, "HideRescueSigns", 1, "HidePoliceSigns", 0};
	};
	class C_Boat_Civil_04_F: FloatingStructure_F //inherits 122 parameters from bin\config.bin/CfgVehicles/FloatingStructure_F, sources - ["A3_Boat_F_Gamma_Boat_Civil_04"]
	{
		features = "Randomization: No						<br />Camo selections: None						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: None";
		author = "Bohemia Interactive";
		mapSize = 45.19;
		class SimpleObject //sources - ["A3_Boat_F_Gamma_Boat_Civil_04"]
		{
			eden = 1;
			animate[] = {{"positionlightred", 1}, {"positionlightgreen", 1}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 7.683;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Boat_Civil_04_F.jpg";
		_generalMacro = "C_Boat_Civil_04_F";
		displayName = "Trawler";
		model = "\A3\boat_f_gamma\Boat_Civil_04\Boat_Civil_04_F";
		icon = "iconObject_1x4";
		memoryPointTaskMarker = "TaskMarker_1_pos";
		cost = 100000;
		scope = 2;
		scopeCurator = 2;
		accuracy = 0.5;
		editorCategory = "EdCat_Structures_Altis";
		editorSubcategory = "EdSubcat_Seaports";
		vehicleClass = "Submerged";
		class Library //sources - ["A3_Boat_F_Gamma_Boat_Civil_04"]
		{
			libTextDesc = "A fishing trawler is a vessel designed to operate fishing trawls. Fishing trawls are fishing nets that are dragged and pulled along the bottom of the sea or in midwater.";
		};
		transportSoldier = 0;
		class TransportItems //sources - ["A3_Boat_F_Gamma_Boat_Civil_04"]
		{
			class _xx_FirstAidKit //sources - ["A3_Boat_F_Gamma_Boat_Civil_04"]
			{
				name = "FirstAidKit";
				count = 8;
			};
		};
		maxSpeed = 0;
		overSpeedBrakeCoef = 0.8;
		enginePower = 1600;
		engineShiftY = -0.4;
		waterLeakiness = 2.5;
		rudderForceCoef = 10.5;
		armor = 10;
		damageResistance = 0.00318;
		class Turrets //sources - []
		{
		};
		attenuationEffectType = "OpenCarAttenuation";
		insideSoundCoef = 1;
		class SoundEvents //sources - []
		{
		};
		soundEngineOnInt[] = {"A3\sounds_f\dummysound", 0.177828, 1, 100};
		soundEngineOnExt[] = {"A3\sounds_f\dummysound", 0.177828, 1, 100};
		soundEngineOffInt[] = {"A3\sounds_f\dummysound", 0.177828, 1, 100};
		soundEngineOffExt[] = {"A3\sounds_f\dummysound", 0.177828, 1, 100};
		class Sounds //sources - ["A3_Boat_F_Gamma_Boat_Civil_04"]
		{
			class Engine //sources - ["A3_Boat_F_Gamma_Boat_Civil_04"]
			{
				sound[] = {"A3\sounds_f\dummysound", 1, 1, 250};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "engineOn*(rpm factor[0.6, 0.1])";
			};
			class EngineHighOut //sources - ["A3_Boat_F_Gamma_Boat_Civil_04"]
			{
				sound[] = {"A3\sounds_f\dummysound", 1, 1, 350};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "engineOn*(rpm factor[0.4, 1.5])";
			};
			class IdleOut //sources - ["A3_Boat_F_Gamma_Boat_Civil_04"]
			{
				sound[] = {"A3\sounds_f\dummysound", 0.1, 1, 130};
				frequency = "1";
				volume = "engineOn*(rpm factor[0.3, 0])";
			};
			class WaternoiseOutW0 //sources - ["A3_Boat_F_Gamma_Boat_Civil_04"]
			{
				sound[] = {"A3\sounds_f\dummysound", 0.251189, 1, 100};
				frequency = "1";
				volume = "((speed factor[0, 8]) min (speed factor[8, 0]))";
			};
			class WaternoiseOutW1 //sources - ["A3_Boat_F_Gamma_Boat_Civil_04"]
			{
				sound[] = {"A3\sounds_f\dummysound", 0.316228, 1, 100};
				frequency = "1";
				volume = "((speed factor[2, 12]) min (speed factor[12, 2]))";
			};
			class WaternoiseOutW2 //sources - ["A3_Boat_F_Gamma_Boat_Civil_04"]
			{
				sound[] = {"A3\sounds_f\dummysound", 0.398107, 1, 100};
				frequency = "1";
				volume = "((speed factor[9, 18.7]) min (speed factor[18.7, 9]))";
			};
			class RainExt //sources - ["A3_Boat_F_Gamma_Boat_Civil_04"]
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain2_ext", 1, 1, 100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt //sources - ["A3_Boat_F_Gamma_Boat_Civil_04"]
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain2_ext", 1, 1, 100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		supplyRadius = 3;
		class Exhausts //sources - ["A3_Boat_F_Gamma_Boat_Civil_04"]
		{
			class Exhaust1 //sources - ["A3_Boat_F_Gamma_Boat_Civil_04"]
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustsEffectFBoat";
			};
		};
		class Reflectors //sources - []
		{
		};
		class MarkerLights //sources - ["A3_Boat_F_Gamma_Boat_Civil_04"]
		{
			class PositionRed //sources - ["A3_Boat_F_Gamma_Boat_Civil_04"]
			{
				color[] = {0.8, 0, 0};
				ambient[] = {0.08, 0, 0};
				intensity = 100;
				name = "PositionLight_Red_1_pos";
				drawLight = 1;
				drawLightSize = 1.2;
				drawLightCenterSize = 0.1;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			class PositionGreen: PositionRed //inherits 11 parameters from bin\config.bin/CfgVehicles/C_Boat_Civil_04_F/MarkerLights/PositionRed, sources - ["A3_Boat_F_Gamma_Boat_Civil_04"]
			{
				color[] = {0, 0.8, 0};
				ambient[] = {0, 0.08, 0};
				name = "PositionLight_Green_1_pos";
			};
		};
		class AnimationSources //sources - ["A3_Boat_F_Gamma_Boat_Civil_04"]
		{
			class PositionLightRed_source //sources - ["A3_Boat_F_Gamma_Boat_Civil_04"]
			{
				source = "MarkerLight";
				markerLight = "PositionRed";
			};
			class PositionLightGreen_source //sources - ["A3_Boat_F_Gamma_Boat_Civil_04"]
			{
				source = "MarkerLight";
				markerLight = "PositionGreen";
			};
		};
		class Damage //sources - ["A3_Boat_F_Gamma_Boat_Civil_04"]
		{
			tex[] = {};
			mat[] = {};
		};
		extCameraPosition[] = {0, 4, -50};
		leftEngineEffect = "WaterWhirlEffect";
		rightEngineEffect = "WaterWhirlEffect";
	};
	class I_G_Boat_Transport_01_F: Rubber_duck_base_F //inherits 85 parameters from bin\config.bin/CfgVehicles/Rubber_duck_base_F, sources - ["A3_Boat_F_Gamma_Boat_Transport_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Boat_F_Gamma_Boat_Transport_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"damagehide_zbytek", 0}, {"damage_unhide", 0}, {"drivingwheel", 0}, {"propeller", 0}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.245;
			verticalOffsetWorld = -0.018;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Boat_Transport_01_F.jpg";
		_generalMacro = "I_G_Boat_Transport_01_F";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "IND_G_F";
		crew = "I_G_Soldier_F";
		typicalCargo[] = {"I_G_Soldier_F", "I_G_Soldier_F"};
		textureList[] = {"Black", 1};
	};
	class B_G_Boat_Transport_01_F: I_G_Boat_Transport_01_F //inherits 11 parameters from bin\config.bin/CfgVehicles/I_G_Boat_Transport_01_F, sources - ["A3_Boat_F_Gamma_Boat_Transport_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Boat_F_Gamma_Boat_Transport_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"damagehide_zbytek", 0}, {"damage_unhide", 0}, {"drivingwheel", 0}, {"propeller", 0}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.245;
			verticalOffsetWorld = -0.018;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_G_Boat_Transport_01_F.jpg";
		_generalMacro = "B_G_Boat_Transport_01_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_G_F";
		crew = "B_G_Soldier_F";
		typicalCargo[] = {"B_G_Soldier_F", "B_G_Soldier_F"};
		textureList[] = {"Black", 1};
	};
	class O_G_Boat_Transport_01_F: I_G_Boat_Transport_01_F //inherits 11 parameters from bin\config.bin/CfgVehicles/I_G_Boat_Transport_01_F, sources - ["A3_Boat_F_Gamma_Boat_Transport_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Boat_F_Gamma_Boat_Transport_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"damagehide_zbytek", 0}, {"damage_unhide", 0}, {"drivingwheel", 0}, {"propeller", 0}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.245;
			verticalOffsetWorld = -0.018;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_G_Boat_Transport_01_F.jpg";
		_generalMacro = "O_G_Boat_Transport_01_F";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "OPF_G_F";
		crew = "O_G_Soldier_F";
		typicalCargo[] = {"O_G_Soldier_F", "O_G_Soldier_F"};
		textureList[] = {"Black", 1};
	};
	class B_AA_01_weapon_F: Weapon_Bag_Base //inherits 7 parameters from bin\config.bin/CfgVehicles/Weapon_Bag_Base, sources - ["A3_Static_F_AA_01"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "B_AA_01_weapon_F";
		scope = 2;
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_DismantledWeapons";
		faction = "BLU_F";
		displayName = "Static Titan Launcher (AA) [NATO]";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_mcamo_co.paa"};
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_mcamo.paa";
		mass = 380;
		class assembleInfo: assembleInfo //inherits 5 parameters from bin\config.bin/CfgVehicles/Weapon_Bag_Base/assembleInfo, sources - ["A3_Static_F_AA_01"]
		{
			displayName = "Static AA Launcher";
			assembleTo = "B_static_AA_F";
			base[] = {"B_HMG_01_support_F", "O_HMG_01_support_F", "I_HMG_01_support_F"};
		};
	};
	class O_AA_01_weapon_F: Weapon_Bag_Base //inherits 7 parameters from bin\config.bin/CfgVehicles/Weapon_Bag_Base, sources - ["A3_Static_F_AA_01"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "O_AA_01_weapon_F";
		scope = 2;
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_DismantledWeapons";
		faction = "OPF_F";
		displayName = "Static Titan Launcher (AA) [CSAT]";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_co.paa"};
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_khk.paa";
		mass = 380;
		class assembleInfo: assembleInfo //inherits 5 parameters from bin\config.bin/CfgVehicles/Weapon_Bag_Base/assembleInfo, sources - ["A3_Static_F_AA_01"]
		{
			displayName = "Static AA Launcher";
			assembleTo = "O_static_AA_F";
			base[] = {"B_HMG_01_support_F", "O_HMG_01_support_F", "I_HMG_01_support_F"};
		};
	};
	class I_AA_01_weapon_F: Weapon_Bag_Base //inherits 7 parameters from bin\config.bin/CfgVehicles/Weapon_Bag_Base, sources - ["A3_Static_F_AA_01"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "I_AA_01_weapon_F";
		scope = 2;
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_DismantledWeapons";
		faction = "IND_F";
		displayName = "Static Titan Launcher (AA) [AAF]";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_oli_co.paa"};
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_oli.paa";
		mass = 380;
		class assembleInfo: assembleInfo //inherits 5 parameters from bin\config.bin/CfgVehicles/Weapon_Bag_Base/assembleInfo, sources - ["A3_Static_F_AA_01"]
		{
			displayName = "Static AA Launcher";
			assembleTo = "I_static_AA_F";
			base[] = {"B_HMG_01_support_F", "O_HMG_01_support_F", "I_HMG_01_support_F"};
		};
	};
	class B_AT_01_weapon_F: Weapon_Bag_Base //inherits 7 parameters from bin\config.bin/CfgVehicles/Weapon_Bag_Base, sources - ["A3_Static_F_AT_01"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "B_AT_01_weapon_F";
		scope = 2;
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_DismantledWeapons";
		faction = "BLU_F";
		displayName = "Static Titan Launcher (AT) [NATO]";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_mcamo_co.paa"};
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_mcamo.paa";
		mass = 380;
		class assembleInfo: assembleInfo //inherits 5 parameters from bin\config.bin/CfgVehicles/Weapon_Bag_Base/assembleInfo, sources - ["A3_Static_F_AT_01"]
		{
			displayName = "Static AT Launcher";
			assembleTo = "B_static_AT_F";
			base[] = {"B_HMG_01_support_F", "O_HMG_01_support_F", "I_HMG_01_support_F"};
		};
	};
	class O_AT_01_weapon_F: Weapon_Bag_Base //inherits 7 parameters from bin\config.bin/CfgVehicles/Weapon_Bag_Base, sources - ["A3_Static_F_AT_01"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "O_AT_01_weapon_F";
		scope = 2;
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_DismantledWeapons";
		faction = "OPF_F";
		displayName = "Static Titan Launcher (AT) [CSAT]";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_co.paa"};
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_khk.paa";
		mass = 380;
		class assembleInfo: assembleInfo //inherits 5 parameters from bin\config.bin/CfgVehicles/Weapon_Bag_Base/assembleInfo, sources - ["A3_Static_F_AT_01"]
		{
			displayName = "Static AT Launcher";
			assembleTo = "O_static_AT_F";
			base[] = {"B_HMG_01_support_F", "O_HMG_01_support_F", "I_HMG_01_support_F"};
		};
	};
	class I_AT_01_weapon_F: Weapon_Bag_Base //inherits 7 parameters from bin\config.bin/CfgVehicles/Weapon_Bag_Base, sources - ["A3_Static_F_AT_01"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "I_AT_01_weapon_F";
		scope = 2;
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_DismantledWeapons";
		faction = "IND_F";
		displayName = "Static Titan Launcher (AT) [AAF]";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_oli_co.paa"};
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_oli.paa";
		mass = 380;
		class assembleInfo: assembleInfo //inherits 5 parameters from bin\config.bin/CfgVehicles/Weapon_Bag_Base/assembleInfo, sources - ["A3_Static_F_AT_01"]
		{
			displayName = "Static AT Launcher";
			assembleTo = "I_static_AT_F";
			base[] = {"B_HMG_01_support_F", "O_HMG_01_support_F", "I_HMG_01_support_F"};
		};
	};
	class Plane_CAS_01_Canopy_F: Plane_Canopy_Base_F //inherits 11 parameters from bin\config.bin/CfgVehicles/Plane_Canopy_Base_F, sources - ["A3_Air_F_EPC_Plane_CAS_01"]
	{
		author = "Bohemia Interactive";
		mapSize = 8.55;
		class SimpleObject //sources - ["A3_Air_F_EPC_Plane_CAS_01"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.239;
			verticalOffsetWorld = 0;
		};
		_generalMacro = "Plane_CAS_01_Canopy_F";
		scope = 1;
		displayName = "";
		model = "\A3\Air_F_EPC\Plane_CAS_01\Plane_cas_01_canopy_F.p3d";
	};
	class Ejection_Seat_Plane_CAS_01_base_F: Ejection_Seat_Base_F //inherits 79 parameters from bin\config.bin/CfgVehicles/Ejection_Seat_Base_F, sources - ["A3_Air_F_EPC_Plane_CAS_01"]
	{
		author = "Bohemia Interactive";
		mapSize = 2.29;
		_generalMacro = "Ejection_Seat_Plane_CAS_01_base_F";
		scope = 0;
		displayName = "Ejection Seat";
		model = "\A3\Air_F_EPC\Plane_CAS_01\Plane_cas_01_ejection_seat_F.p3d";
		icon = "iconParachute";
		picture = "\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";
		driverAction = "Pilot_Plane_Fighter_Ejection";
		cargoAction[] = {"Pilot_Plane_Fighter_Ejection"};
	};
	class B_Ejection_Seat_Plane_CAS_01_F: Ejection_Seat_Plane_CAS_01_base_F //inherits 10 parameters from bin\config.bin/CfgVehicles/Ejection_Seat_Plane_CAS_01_base_F, sources - ["A3_Air_F_EPC_Plane_CAS_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Air_F_EPC_Plane_CAS_01"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.002;
			verticalOffsetWorld = 0;
		};
		_generalMacro = "B_Ejection_Seat_Plane_CAS_01_F";
		scope = 1;
		side = 0;
		faction = "BLU_F";
		crew = "B_Fighter_Pilot_F";
	};
	class Plane_CAS_02_Canopy_F: Plane_Canopy_Base_F //inherits 11 parameters from bin\config.bin/CfgVehicles/Plane_Canopy_Base_F, sources - ["A3_Air_F_EPC_Plane_CAS_02"]
	{
		author = "Bohemia Interactive";
		mapSize = 6.19;
		class SimpleObject //sources - ["A3_Air_F_EPC_Plane_CAS_02"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.283;
			verticalOffsetWorld = 0;
		};
		_generalMacro = "Plane_CAS_02_Canopy_F";
		scope = 1;
		displayName = "";
		model = "\A3\Air_F_EPC\Plane_CAS_02\Plane_cas_02_canopy_F.p3d";
	};
	class Ejection_Seat_Plane_CAS_02_base_F: Ejection_Seat_Base_F //inherits 79 parameters from bin\config.bin/CfgVehicles/Ejection_Seat_Base_F, sources - ["A3_Air_F_EPC_Plane_CAS_02"]
	{
		author = "Bohemia Interactive";
		mapSize = 2.42;
		_generalMacro = "Ejection_Seat_Plane_CAS_02_base_F";
		scope = 0;
		displayName = "Ejection Seat";
		model = "\A3\Air_F_EPC\Plane_CAS_02\Plane_cas_02_ejection_seat_F.p3d";
		icon = "iconParachute";
		picture = "\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";
		driverAction = "Pilot_Plane_Fighter_Ejection";
		cargoAction[] = {"Pilot_Plane_Fighter_Ejection"};
	};
	class O_Ejection_Seat_Plane_CAS_02_F: Ejection_Seat_Plane_CAS_02_base_F //inherits 10 parameters from bin\config.bin/CfgVehicles/Ejection_Seat_Plane_CAS_02_base_F, sources - ["A3_Air_F_EPC_Plane_CAS_02"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Air_F_EPC_Plane_CAS_02"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.002;
			verticalOffsetWorld = 0;
		};
		_generalMacro = "O_Ejection_Seat_Plane_CAS_02_F";
		scope = 1;
		side = 0;
		faction = "OPF_F";
		crew = "O_Fighter_Pilot_F";
	};
	class Submarine_01_F: FloatingStructure_F //inherits 122 parameters from bin\config.bin/CfgVehicles/FloatingStructure_F, sources - ["A3_Boat_F_EPC_Submarine_01"]
	{
		author = "Bohemia Interactive";
		mapSize = 98.82;
		class SimpleObject //sources - ["A3_Boat_F_EPC_Submarine_01"]
		{
			eden = 1;
			animate[] = {};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 8.055;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Submarine_01_F.jpg";
		_generalMacro = "Submarine_01_F";
		features = "Randomization: No										<br />Camo selections: None										<br />Script door sources: None										<br />Script animations: None										<br />Executed scripts: None										<br />Firing from vehicles: No										<br />Slingload: No										<br />Cargo proxy indexes: None";
		scope = 2;
		scopeCurator = 2;
		displayName = "HMS Proteus";
		model = "\A3\Boat_F_EPC\Submarine_01\Submarine_01_F.p3d";
		icon = "iconObject_1x5";
		editorCategory = "EdCat_Structures_Altis";
		editorSubcategory = "EdSubcat_Seaports";
		vehicleClass = "Submerged";
		destrType = "DestructNo";
		memoryPointTaskMarker = "TaskMarker_1_pos";
		featureSize = 98.5;
	};
	class B_UAV_01_backpack_F: Weapon_Bag_Base //inherits 7 parameters from bin\config.bin/CfgVehicles/Weapon_Bag_Base, sources - ["A3_Drones_F_Weapons_F_Gamma_Ammoboxes"]
	{
		author = "Bohemia Interactive";
		mapSize = 0.6;
		_generalMacro = "B_UAV_01_backpack_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "UAV Bag [NATO]";
		model = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\UAV_backpack_F.p3d";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Backpacks";
		faction = "BLU_F";
		picture = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\Data\UI\icon_B_C_UAV_rgr_ca";
		hiddenSelectionsTextures[] = {"\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\Data\UAV_backpack_rgr_co.paa"};
		maximumLoad = 0;
		mass = 300;
		class assembleInfo: assembleInfo //inherits 5 parameters from bin\config.bin/CfgVehicles/Weapon_Bag_Base/assembleInfo, sources - ["A3_Drones_F_Weapons_F_Gamma_Ammoboxes"]
		{
			base = "";
			displayName = "AR-2 Darter";
			assembleTo = "B_UAV_01_F";
		};
	};
	class O_UAV_01_backpack_F: B_UAV_01_backpack_F //inherits 15 parameters from bin\config.bin/CfgVehicles/B_UAV_01_backpack_F, sources - ["A3_Drones_F_Weapons_F_Gamma_Ammoboxes"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "O_UAV_01_backpack_F";
		displayName = "UAV Bag [CSAT]";
		faction = "OPF_F";
		picture = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\Data\UI\icon_B_C_UAV_cbr_ca";
		hiddenSelectionsTextures[] = {"\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\Data\UAV_backpack_cbr_co.paa"};
		class assembleInfo: assembleInfo //inherits 3 parameters from bin\config.bin/CfgVehicles/B_UAV_01_backpack_F/assembleInfo, sources - ["A3_Drones_F_Weapons_F_Gamma_Ammoboxes"]
		{
			assembleTo = "O_UAV_01_F";
			displayName = "Tayran AR-2";
		};
	};
	class I_UAV_01_backpack_F: B_UAV_01_backpack_F //inherits 15 parameters from bin\config.bin/CfgVehicles/B_UAV_01_backpack_F, sources - ["A3_Drones_F_Weapons_F_Gamma_Ammoboxes"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "I_UAV_01_backpack_F";
		displayName = "UAV Bag [AAF]";
		faction = "IND_F";
		picture = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\Data\UI\icon_B_C_UAV_oli_ca";
		hiddenSelectionsTextures[] = {"\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\Data\UAV_backpack_oli_co.paa"};
		class assembleInfo: assembleInfo //inherits 3 parameters from bin\config.bin/CfgVehicles/B_UAV_01_backpack_F/assembleInfo, sources - ["A3_Drones_F_Weapons_F_Gamma_Ammoboxes"]
		{
			assembleTo = "I_UAV_01_F";
		};
	};
	class SoundFlareLoop_F: Sound //inherits 11 parameters from bin\config.bin/CfgVehicles/Sound, sources - ["A3_Data_F_Curator"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "SoundFlareLoop_F";
		scope = 1;
		sound = "FlareLoop";
	};
	class Intel_File1_F: Land_File1_F //inherits 13 parameters from bin\config.bin/CfgVehicles/Land_File1_F, sources - ["A3_Data_F_Curator_Intel"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Data_F_Curator_Intel"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.009;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Intel_File1_F.jpg";
		_generalMacro = "Intel_File1_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "Intel";
		curatorInfoType = "";
		curatorInfoTypeEmpty = "RscDisplayAttributesIntel";
		class EventHandlers //sources - ["A3_Data_F_Curator_Intel"]
		{
			init = "_this call bis_fnc_initIntelObject;";
		};
		displayName = "Documents";
		simulation = "House";
		editorCategory = "EdCat_Things";
		editorSubcategory = "EdSubcat_Intel";
		faction = "Interactive_F";
		vehicleCategory = "Interactive_F";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		DLC = "Curator";
	};
	class Intel_File2_F: Land_File2_F //inherits 13 parameters from bin\config.bin/CfgVehicles/Land_File2_F, sources - ["A3_Data_F_Curator_Intel"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Data_F_Curator_Intel"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.007;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Intel_File2_F.jpg";
		_generalMacro = "Intel_File2_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "Intel";
		curatorInfoType = "";
		curatorInfoTypeEmpty = "RscDisplayAttributesIntel";
		class EventHandlers //sources - ["A3_Data_F_Curator_Intel"]
		{
			init = "_this call bis_fnc_initIntelObject;";
		};
		displayName = "Secret Documents";
		simulation = "House";
		editorCategory = "EdCat_Things";
		editorSubcategory = "EdSubcat_Intel";
		faction = "Interactive_F";
		vehicleCategory = "Interactive_F";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		DLC = "Curator";
	};
	class Intel_Photos_F: Land_Photos_V3_F //inherits 13 parameters from bin\config.bin/CfgVehicles/Land_Photos_V3_F, sources - ["A3_Data_F_Curator_Intel"]
	{
		author = "Bohemia Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Intel_Photos_F.jpg";
		_generalMacro = "Intel_Photos_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "Intel";
		curatorInfoType = "";
		curatorInfoTypeEmpty = "RscDisplayAttributesIntel";
		class EventHandlers //sources - ["A3_Data_F_Curator_Intel"]
		{
			init = "_this call bis_fnc_initIntelObject;";
		};
		displayName = "Photo";
		simulation = "House";
		editorCategory = "EdCat_Things";
		editorSubcategory = "EdSubcat_Intel";
		faction = "Interactive_F";
		vehicleCategory = "Interactive_F";
		DLC = "Curator";
	};
	class Respawn_TentDome_F: Land_TentDome_F //inherits 12 parameters from bin\config.bin/CfgVehicles/Land_TentDome_F, sources - ["A3_Data_F_Curator_Respawn"]
	{
		author = "Bohemia Interactive";
		scope = 1;
		displayName = "Camp (Dome Tent)";
		faction = "Interactive_F";
		vehicleCategory = "Interactive_F";
		vehicleClass = "Respawn";
		respawnType = "inf";
		respawnNearbyPlayers = 1;
		DLC = "Curator";
		class EventHandlers //sources - ["A3_Data_F_Curator_Respawn"]
		{
			init = "_this spawn bis_fnc_initRespawnBackpack;";
		};
		class assembleInfo //sources - ["A3_Data_F_Curator_Respawn"]
		{
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {"B_Respawn_TentDome_F"};
		};
	};
	class B_Respawn_TentDome_F: B_Carryall_oli //inherits 6 parameters from bin\config.bin/CfgVehicles/B_Carryall_oli, sources - ["A3_Data_F_Curator_Respawn"]
	{
		author = "Bohemia Interactive";
		displayName = "Camp (Dome Tent)";
		faction = "Interactive_F";
		vehicleCategory = "Interactive_F";
		vehicleClass = "Respawn";
		maximumLoad = 0;
		DLC = "Curator";
		class assembleInfo //sources - ["A3_Data_F_Curator_Respawn"]
		{
			primary = 1;
			base = "";
			assembleTo = "Respawn_TentDome_F";
			displayName = "Camp (Dome Tent)";
			dissasembleTo[] = {};
		};
	};
	class Respawn_TentA_F: Land_TentA_F //inherits 12 parameters from bin\config.bin/CfgVehicles/Land_TentA_F, sources - ["A3_Data_F_Curator_Respawn"]
	{
		author = "Bohemia Interactive";
		scope = 1;
		displayName = "Camp (Ridge Tent)";
		faction = "Interactive_F";
		vehicleCategory = "Interactive_F";
		vehicleClass = "Respawn";
		respawnType = "inf";
		respawnNearbyPlayers = 1;
		DLC = "Curator";
		class EventHandlers //sources - ["A3_Data_F_Curator_Respawn"]
		{
			init = "_this spawn bis_fnc_initRespawnBackpack;";
		};
		class assembleInfo //sources - ["A3_Data_F_Curator_Respawn"]
		{
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {"B_Respawn_TentA_F"};
		};
	};
	class B_Respawn_TentA_F: B_Carryall_cbr //inherits 6 parameters from bin\config.bin/CfgVehicles/B_Carryall_cbr, sources - ["A3_Data_F_Curator_Respawn"]
	{
		author = "Bohemia Interactive";
		displayName = "Camp (Ridge Tent)";
		faction = "Interactive_F";
		vehicleCategory = "Interactive_F";
		vehicleClass = "Respawn";
		maximumLoad = 0;
		DLC = "Curator";
		class assembleInfo //sources - ["A3_Data_F_Curator_Respawn"]
		{
			primary = 1;
			base = "";
			assembleTo = "Respawn_TentA_F";
			displayName = "Camp (Ridge Tent)";
			dissasembleTo[] = {};
		};
	};
	class Respawn_Sleeping_bag_F: Land_Sleeping_bag_F //inherits 13 parameters from bin\config.bin/CfgVehicles/Land_Sleeping_bag_F, sources - ["A3_Data_F_Curator_Respawn"]
	{
		author = "Bohemia Interactive";
		scope = 1;
		displayName = "Camp (Green Sleeping Bag)";
		faction = "Interactive_F";
		vehicleCategory = "Interactive_F";
		vehicleClass = "Respawn";
		respawnType = "inf";
		respawnNearbyPlayers = 0;
		DLC = "Curator";
		class EventHandlers //sources - ["A3_Data_F_Curator_Respawn"]
		{
			init = "_this spawn bis_fnc_initRespawnBackpack;";
		};
		class assembleInfo //sources - ["A3_Data_F_Curator_Respawn"]
		{
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {"B_Respawn_Sleeping_bag_F"};
		};
	};
	class B_Respawn_Sleeping_bag_F: B_FieldPack_oli //inherits 6 parameters from bin\config.bin/CfgVehicles/B_FieldPack_oli, sources - ["A3_Data_F_Curator_Respawn"]
	{
		author = "Bohemia Interactive";
		displayName = "Camp (Green Sleeping Bag)";
		faction = "Interactive_F";
		vehicleCategory = "Interactive_F";
		vehicleClass = "Respawn";
		maximumLoad = 0;
		DLC = "Curator";
		class assembleInfo //sources - ["A3_Data_F_Curator_Respawn"]
		{
			primary = 1;
			base = "";
			assembleTo = "Respawn_Sleeping_bag_F";
			displayName = "Camp (Green Sleeping Bag)";
			dissasembleTo[] = {};
		};
	};
	class Respawn_Sleeping_bag_blue_F: Land_Sleeping_bag_blue_F //inherits 8 parameters from bin\config.bin/CfgVehicles/Land_Sleeping_bag_blue_F, sources - ["A3_Data_F_Curator_Respawn"]
	{
		author = "Bohemia Interactive";
		scope = 1;
		displayName = "Camp (Blue Sleeping Bag)";
		faction = "Interactive_F";
		vehicleCategory = "Interactive_F";
		vehicleClass = "Respawn";
		respawnType = "inf";
		respawnNearbyPlayers = 0;
		DLC = "Curator";
		class EventHandlers //sources - ["A3_Data_F_Curator_Respawn"]
		{
			init = "_this spawn bis_fnc_initRespawnBackpack;";
		};
		class assembleInfo //sources - ["A3_Data_F_Curator_Respawn"]
		{
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {"B_Respawn_Sleeping_bag_blue_F"};
		};
	};
	class B_Respawn_Sleeping_bag_blue_F: B_FieldPack_blk //inherits 6 parameters from bin\config.bin/CfgVehicles/B_FieldPack_blk, sources - ["A3_Data_F_Curator_Respawn"]
	{
		author = "Bohemia Interactive";
		displayName = "Camp (Blue Sleeping Bag)";
		faction = "Interactive_F";
		vehicleCategory = "Interactive_F";
		vehicleClass = "Respawn";
		maximumLoad = 0;
		DLC = "Curator";
		class assembleInfo //sources - ["A3_Data_F_Curator_Respawn"]
		{
			primary = 1;
			base = "";
			assembleTo = "Respawn_Sleeping_bag_blue_F";
			displayName = "Camp (Blue Sleeping Bag)";
			dissasembleTo[] = {};
		};
	};
	class Respawn_Sleeping_bag_brown_F: Land_Sleeping_bag_brown_F //inherits 8 parameters from bin\config.bin/CfgVehicles/Land_Sleeping_bag_brown_F, sources - ["A3_Data_F_Curator_Respawn"]
	{
		author = "Bohemia Interactive";
		scope = 1;
		displayName = "Camp (Brown Sleeping Bag)";
		faction = "Interactive_F";
		vehicleCategory = "Interactive_F";
		vehicleClass = "Respawn";
		respawnType = "inf";
		respawnNearbyPlayers = 0;
		DLC = "Curator";
		class EventHandlers //sources - ["A3_Data_F_Curator_Respawn"]
		{
			init = "_this spawn bis_fnc_initRespawnBackpack;";
		};
		class assembleInfo //sources - ["A3_Data_F_Curator_Respawn"]
		{
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {"B_Respawn_Sleeping_bag_brown_F"};
		};
	};
	class B_Respawn_Sleeping_bag_brown_F: B_FieldPack_khk //inherits 6 parameters from bin\config.bin/CfgVehicles/B_FieldPack_khk, sources - ["A3_Data_F_Curator_Respawn"]
	{
		author = "Bohemia Interactive";
		displayName = "Camp (Brown Sleeping Bag)";
		faction = "Interactive_F";
		vehicleCategory = "Interactive_F";
		vehicleClass = "Respawn";
		maximumLoad = 0;
		DLC = "Curator";
		class assembleInfo //sources - ["A3_Data_F_Curator_Respawn"]
		{
			primary = 1;
			base = "";
			assembleTo = "Respawn_Sleeping_bag_brown_F";
			displayName = "Camp (Brown Sleeping Bag)";
			dissasembleTo[] = {};
		};
	};
	class ModuleEmpty_F: Thing //inherits 36 parameters from bin\config.bin/CfgVehicles/Thing, sources - ["A3_Modules_F_Curator"]
	{
		author = "Bohemia Interactive";
		mapSize = 1;
		_generalMacro = "ModuleEmpty_F";
		scope = 1;
		scopeCurator = 0;
		vehicleClass = "Modules";
		icon = "iconModule";
		picture = "";
		model = "\A3\Weapons_f\empty";
		function = "";
		isGlobal = 0;
		isTriggerActivated = 0;
		class EventHandlers //sources - ["A3_Modules_F_Curator"]
		{
			init = "_this call bis_fnc_moduleInit;";
		};
	};
	class ModuleAnimals_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Animals"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleAnimals_F";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		displayName = "Animals";
		function = "BIS_fnc_moduleAnimals";
		icon = "\a3\Modules_F_Curator\Data\iconAnimals_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitAnimals_ca.paa";
		class Arguments //sources - ["A3_Modules_F_Curator_Animals"]
		{
			class Type //sources - ["A3_Modules_F_Curator_Animals"]
			{
				displayName = "Species";
				class values //sources - ["A3_Modules_F_Curator_Animals"]
				{
					class Sheep //sources - ["A3_Modules_F_Curator_Animals"]
					{
						name = "Sheep";
						value = "Sheep_random_F";
						default = 1;
					};
					class Goats //sources - ["A3_Modules_F_Curator_Animals"]
					{
						name = "Goats";
						value = "Goat_random_F";
					};
					class Poultry //sources - ["A3_Modules_F_Curator_Animals"]
					{
						name = "Poultry";
						value = "Hen_random_F";
					};
					class Seagulls //sources - ["A3_Modules_F_Curator_Animals"]
					{
						name = "Seagulls";
						value = "Seagull";
					};
					class Butterflies //sources - ["A3_Modules_F_Curator_Animals"]
					{
						name = "Butterflies";
						value = "ButterFly_random";
					};
				};
			};
			class Count //sources - ["A3_Modules_F_Curator_Animals"]
			{
				displayName = "Count";
				typeName = "NUMBER";
				defaultValue = 10;
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Animals"]
		{
			description = "Creates a group of animals and handles their basic behavior. Deleting the module will delete the animals as well.";
			position = 1;
		};
	};
	class ModuleAnimalsSheep_F: ModuleAnimals_F //inherits 11 parameters from bin\config.bin/CfgVehicles/ModuleAnimals_F, sources - ["A3_Modules_F_Curator_Animals"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleAnimalsSheep_F";
		scope = 1;
		scopeCurator = 2;
		displayName = "Sheep";
		category = "Animals";
		portrait = "\a3\Modules_F_Curator\Data\portraitAnimalsSheep_ca.paa";
		animalType = "Sheep_random_F";
	};
	class ModuleAnimalsGoats_F: ModuleAnimalsSheep_F //inherits 8 parameters from bin\config.bin/CfgVehicles/ModuleAnimalsSheep_F, sources - ["A3_Modules_F_Curator_Animals"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleAnimalsGoats_F";
		displayName = "Goats";
		portrait = "\a3\Modules_F_Curator\Data\portraitAnimalsGoats_ca.paa";
		animalType = "Goat_random_F";
	};
	class ModuleAnimalsPoultry_F: ModuleAnimalsSheep_F //inherits 8 parameters from bin\config.bin/CfgVehicles/ModuleAnimalsSheep_F, sources - ["A3_Modules_F_Curator_Animals"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleAnimalsPoultry_F";
		displayName = "Poultry";
		portrait = "\a3\Modules_F_Curator\Data\portraitAnimalsPoultry_ca.paa";
		animalType = "Hen_random_F";
	};
	class ModuleAnimalsSeagulls_F: ModuleAnimalsSheep_F //inherits 8 parameters from bin\config.bin/CfgVehicles/ModuleAnimalsSheep_F, sources - ["A3_Modules_F_Curator_Animals"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleAnimalsSeagulls_F";
		displayName = "Seagulls";
		portrait = "\a3\Modules_F_Curator\Data\portraitAnimalsSeagulls_ca.paa";
		animalType = "Seagull";
		animalSound = "moduleSeagulls";
	};
	class ModuleAnimalsButterflies_F: ModuleAnimalsSheep_F //inherits 8 parameters from bin\config.bin/CfgVehicles/ModuleAnimalsSheep_F, sources - ["A3_Modules_F_Curator_Animals"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleAnimalsButterflies_F";
		displayName = "Butterflies";
		portrait = "\a3\Modules_F_Curator\Data\portraitAnimalsButterflies_ca.paa";
		animalType = "ButterFly_random";
	};
	class ModuleCAS_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_CAS"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCAS_F";
		scope = 2;
		scopeCurator = 0;
		isGlobal = 1;
		isTriggerActivated = 1;
		category = "Effects";
		displayName = "Close Air Support (CAS)";
		icon = "\a3\Modules_F_Curator\Data\iconCAS_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitCAS_ca.paa";
		function = "BIS_fnc_moduleCAS";
		curatorCost = 5;
		class Arguments //sources - ["A3_Modules_F_Curator_CAS"]
		{
			class Type //sources - ["A3_Modules_F_Curator_CAS"]
			{
				displayName = "Type";
				description = "";
				typeName = "NUMBER";
				class values //sources - ["A3_Modules_F_Curator_CAS"]
				{
					class Gun //sources - ["A3_Modules_F_Curator_CAS"]
					{
						name = "CAS - Gun Run";
						value = 0;
						default = 1;
					};
					class Missiles //sources - ["A3_Modules_F_Curator_CAS"]
					{
						name = "CAS - Missile Strike";
						value = 1;
					};
					class GunMissiles //sources - ["A3_Modules_F_Curator_CAS"]
					{
						name = "CAS - Gun and Missiles";
						value = 2;
					};
				};
			};
			class Vehicle //sources - ["A3_Modules_F_Curator_CAS"]
			{
				displayName = "Plane";
				description = "";
				class values //sources - ["A3_Modules_F_Curator_CAS"]
				{
					class B_Plane_CAS_01_F //sources - ["A3_Modules_F_Curator_CAS"]
					{
						name = "A-164 Wipeout (CAS)";
						value = "B_Plane_CAS_01_F";
						default = 1;
					};
					class O_Plane_CAS_02_F //sources - ["A3_Modules_F_Curator_CAS"]
					{
						name = "To-199 Neophron (CAS)";
						value = "O_Plane_CAS_02_F";
					};
					class I_Plane_Fighter_03_CAS_F //sources - ["A3_Modules_F_Curator_CAS"]
					{
						name = "A-143 Buzzard (CAS)";
						value = "I_Plane_Fighter_03_CAS_F";
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Curator_CAS"]
		{
			description = "Send an air strike on the module position. It will take a few seconds before the plane arrives at the module’s position. Unless it's destroyed, it will be deleted after flying away.";
			position = 1;
			direction = 1;
		};
	};
	class ModuleCASGun_F: ModuleCAS_F //inherits 14 parameters from bin\config.bin/CfgVehicles/ModuleCAS_F, sources - ["A3_Modules_F_Curator_CAS"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCASGun_F";
		scope = 1;
		scopeCurator = 2;
		simulation = "house";
		category = "Ordnance";
		displayName = "CAS - Gun Run";
		portrait = "\a3\Modules_F_Curator\Data\portraitCASGun_ca.paa";
		model = "\a3\Modules_F_Curator\CAS\surfaceGun.p3d";
		curatorInfoType = "RscDisplayAttributesModuleCAS";
		curatorCost = 1;
		moduleCAStype = 0;
	};
	class ModuleCASMissile_F: ModuleCASGun_F //inherits 12 parameters from bin\config.bin/CfgVehicles/ModuleCASGun_F, sources - ["A3_Modules_F_Curator_CAS"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCASMissile_F";
		displayName = "CAS - Missile Strike";
		portrait = "\a3\Modules_F_Curator\Data\portraitCASMissile_ca.paa";
		model = "\a3\Modules_F_Curator\CAS\surfaceMissile.p3d";
		curatorCost = 3;
		moduleCAStype = 1;
	};
	class ModuleCASGunMissile_F: ModuleCASGun_F //inherits 12 parameters from bin\config.bin/CfgVehicles/ModuleCASGun_F, sources - ["A3_Modules_F_Curator_CAS"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCASGunMissile_F";
		displayName = "CAS - Gun and Missiles";
		portrait = "\a3\Modules_F_Curator\Data\portraitCASGunMissile_ca.paa";
		model = "\a3\Modules_F_Curator\CAS\surfaceGunMissile.p3d";
		curatorCost = 4;
		moduleCAStype = 2;
	};
	class ModuleCASBomb_F: ModuleCASGun_F //inherits 12 parameters from bin\config.bin/CfgVehicles/ModuleCASGun_F, sources - ["A3_Modules_F_Curator_CAS"]
	{
		scope = 1;
		scopeCurator = 1;
		displayName = "CAS - Bomb Strike";
		portrait = "\a3\Modules_F_Curator\Data\portraitCASBomb_ca.paa";
		model = "\a3\Modules_F_Curator\CAS\surfaceMissile.p3d";
		curatorCost = 5;
		moduleCAStype = 3;
	};
	class ModuleCurator_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Curator"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCurator_F";
		scope = 2;
		simulation = "curator";
		vehicleClass = "Modules";
		category = "Curator";
		displayName = "Game Master";
		isGlobal = 2;
		isTriggerActivated = 0;
		function = "BIS_fnc_moduleCurator";
		functionPriority = 1;
		icon = "\a3\Modules_F_Curator\Data\iconCurator_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitCurator_ca.paa";
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Owner: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Owner";
				tooltip = "Unit with access to the Zeus interface. Can be an object’s variable name, player UID, or you can use #adminLogged or #adminVoted to give access to the server admin.";
				property = "ModuleCurator_F_Owner";
			};
			class Name: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Name";
				tooltip = "Custom name displayed for other players";
				property = "ModuleCurator_F_Name";
			};
			class Addons: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Default addons";
				tooltip = "Which addons (i.e., object packs) will be available at the beginning. You can unlock more using the 'Manage Addons' module.";
				property = "ModuleCurator_F_Addons";
				defaultValue = 2;
				typeName = "NUMBER";
				class Values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class All //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "All addons (including unofficial ones)";
						value = 3;
					};
					class AllActive //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "All official addons";
						value = 2;
						default = 1;
					};
					class AllMission //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Addons present in the scenario";
						value = 1;
					};
					class None //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "None";
						value = 0;
					};
				};
			};
			class Forced: CheckboxNumber //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/CheckboxNumber, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Forced interface";
				tooltip = "Open the interface by default and prevent the player from closing it.";
				property = "ModuleCurator_F_Forced";
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments //sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Owner //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Owner";
				description = "Unit with access to the Zeus interface. Can be an object’s variable name, player UID, or you can use #adminLogged or #adminVoted to give access to the server admin.";
				defaultValue = "";
			};
			class Name //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Name";
				description = "Custom name displayed for other players";
				defaultValue = "";
			};
			class Addons //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Default addons";
				description = "Which addons (i.e., object packs) will be available at the beginning. You can unlock more using the 'Manage Addons' module.";
				typeName = "NUMBER";
				class Values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class All //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "All addons (including unofficial ones)";
						value = 3;
					};
					class AllActive //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "All official addons";
						value = 2;
						default = 1;
					};
					class AllMission //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Addons present in the scenario";
						value = 1;
					};
					class None //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "None";
						value = 0;
					};
				};
			};
			class Forced //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Forced interface";
				description = "Open the interface by default and prevent the player from closing it.";
				typeName = "NUMBER";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Enabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Enabled";
						value = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Disabled";
						value = 0;
						default = 1;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Curator"]
		{
			description = "Zeus logic which provides access to the 3D real-time editor.";
			sync[] = {};
		};
	};
	class ModuleCuratorAddAddons_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Curator"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCuratorAddAddons_F";
		scope = 2;
		category = "Curator";
		displayName = "Manage Addons";
		function = "BIS_fnc_moduleCuratorAddAddons";
		functionPriority = 2;
		isTriggerActivated = 1;
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				tooltip = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				property = "ModuleCuratorAddAddons_F_Curator";
			};
			class Mode: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Mode";
				property = "ModuleCuratorAddAddons_F_Mode";
				typeName = "BOOL";
				defaultValue = "true";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Add //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Add";
						value = 1;
						default = 1;
					};
					class Remove //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Remove";
						value = 0;
					};
				};
			};
			class Text: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Notification Text";
				tooltip = "Text displayed in notifications. Calculated automatically when the field is left empty.";
				property = "ModuleCuratorAddAddons_F_Text";
			};
			class Addons: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Addon classes";
				tooltip = "Optional list of object / addon classes from CfgPatches";
				property = "ModuleCuratorAddAddons_F_Addons";
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments //sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				description = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				defaultValue = "''";
			};
			class Mode //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Mode";
				typeName = "BOOL";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Add //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Add";
						value = 1;
						default = 1;
					};
					class Remove //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Remove";
						value = 0;
					};
				};
			};
			class Text //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Notification Text";
				description = "Text displayed in notifications. Calculated automatically when the field is left empty.";
			};
			class Addons //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Addon classes";
				description = "Optional list of object / addon classes from CfgPatches";
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Curator"]
		{
			description = "Manage addons (i.e. object packs) available to Zeus.";
			sync[] = {"ModuleCurator_F", "Anything"};
			class ModuleCurator_F //sources - ["A3_Modules_F_Curator_Curator"]
			{
				optional = 1;
			};
			class Anything: Anything //inherits 5 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription/Anything, sources - ["A3_Modules_F_Curator_Curator"]
			{
				description = "The addon of every synchronized object will be used.";
				optional = 1;
			};
		};
	};
	class ModuleCuratorAddPoints_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Curator"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCuratorAddPoints_F";
		scope = 2;
		category = "Curator";
		displayName = "Manage Resources";
		function = "BIS_fnc_moduleCuratorAddPoints";
		functionPriority = 2;
		isTriggerActivated = 1;
		icon = "\a3\Modules_F_Curator\Data\iconCuratorAddPoints_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitCuratorAddPoints_ca.paa";
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				tooltip = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				property = "ModuleCuratorAddPoints_F_Curator";
			};
			class Value: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Value";
				tooltip = "Custom name displayed for other players";
				defaultValue = 0;
				typeName = "NUMBER";
				property = "ModuleCuratorAddPoints_F_Value";
			};
			class Repeat: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Perform";
				property = "ModuleCuratorAddPoints_F_Repeat";
				typeName = "NUMBER";
				defaultValue = 2;
				class Values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Once //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Once";
						value = 0;
						default = 1;
					};
					class 1 //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Every second";
						value = 1;
					};
					class 10 //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Every 10 seconds";
						value = 10;
					};
					class 60 //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Every minute";
						value = 60;
					};
				};
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments //sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				description = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				defaultValue = "''";
			};
			class Value //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Value";
				typeName = "NUMBER";
				defaultValue = 0;
			};
			class Repeat //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Perform";
				typeName = "NUMBER";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Once //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Once";
						value = 0;
						default = 1;
					};
					class 1 //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Every second";
						value = 1;
					};
					class 10 //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Every 10 seconds";
						value = 10;
					};
					class 60 //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Every minute";
						value = 60;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Curator"]
		{
			description = "Add or subtract resources available to Zeus. They are required for placing or editing objects.";
			sync[] = {"ModuleCurator_F"};
			class ModuleCurator_F //sources - ["A3_Modules_F_Curator_Curator"]
			{
				optional = 1;
			};
		};
	};
	class ModuleCuratorAddEditingArea_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Curator"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCuratorAddEditingArea_F";
		scope = 2;
		category = "Curator";
		displayName = "Add Editing Area";
		function = "BIS_fnc_moduleCuratorAddEditingArea";
		functionPriority = 2;
		isTriggerActivated = 1;
		canSetArea = 1;
		class AttributeValues //sources - ["A3_Modules_F_Curator_Curator"]
		{
			size3[] = {250, 250, -1};
		};
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				tooltip = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				property = "ModuleCuratorAddEditingArea_F_Curator";
			};
			class Name: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Name";
				tooltip = "Optional name used in notifications about the area being added";
				defaultValue = "''";
				property = "ModuleCuratorAddEditingArea_F_Name";
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments //sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				description = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				defaultValue = "''";
			};
			class Name //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Name";
				description = "Optional name used in notifications about the area being added";
				defaultValue = "";
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Curator"]
		{
			description = "Add an area inside of which Zeus is allowed to place or edit objects.";
			sync[] = {"ModuleCurator_F", "LocationArea_F"};
			class ModuleCurator_F //sources - ["A3_Modules_F_Curator_Curator"]
			{
				optional = 1;
			};
			class LocationArea_F //sources - ["A3_Modules_F_Curator_Curator"]
			{
				description = "";
				duplicate = 1;
				sync[] = {"TriggerArea"};
			};
			class TriggerArea: EmptyDetector //inherits 5 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription/EmptyDetector, sources - ["A3_Modules_F_Curator_Curator"]
			{
				position = 1;
				area = 1;
				description = "Determines area size. Only circles are supported.";
			};
		};
	};
	class ModuleCuratorAddEditingAreaPlayers_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Curator"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCuratorAddEditingAreaPlayers_F";
		scope = 2;
		category = "Curator";
		displayName = "Restrict Editing Around Players";
		function = "BIS_fnc_moduleCuratorAddEditingAreaPlayers";
		functionPriority = 2;
		isTriggerActivated = 1;
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				tooltip = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				property = "ModuleCuratorAddEditingAreaPlayers_F_Curator";
			};
			class Size: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Area radius [m]";
				typeName = "NUMBER";
				defaultValue = 100;
				property = "ModuleCuratorAddEditingAreaPlayers_F_Size";
			};
			class Type: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Show area around";
				property = "ModuleCuratorAddEditingAreaPlayers_F_Type";
				typeName = "NUMBER";
				defaultValue = 1;
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class All //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Every player";
						value = 0;
					};
					class Group //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Group leader of every player";
						value = 1;
						default = 1;
					};
				};
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments //sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				description = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				defaultValue = "''";
			};
			class Size //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Area radius [m]";
				description = "";
				typeName = "NUMBER";
				defaultValue = 100;
			};
			class Type //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Show area around";
				description = "";
				typeName = "NUMBER";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class All //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Every player";
						value = 0;
					};
					class Group //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Group leader of every player";
						value = 1;
						default = 1;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Curator"]
		{
			description = "";
			sync[] = {"ModuleCurator_F"};
			class ModuleCurator_F //sources - ["A3_Modules_F_Curator_Curator"]
			{
				optional = 1;
			};
		};
	};
	class ModuleCuratorSetEditingAreaType_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Curator"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCuratorSetEditingAreaType_F";
		scope = 2;
		category = "Curator";
		displayName = "Set Editing Area Type";
		function = "BIS_fnc_moduleCuratorSetEditingAreaType";
		functionPriority = 2;
		isTriggerActivated = 1;
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				tooltip = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				property = "ModuleCuratorSetEditingAreaType_F_Curator";
			};
			class Type: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Can create and edit";
				property = "ModuleCuratorSetEditingAreaType_F_Type";
				typeName = "BOOL";
				defaultValue = 1;
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Whitelist //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Inside areas";
						value = 1;
						default = 1;
					};
					class Blacklist //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Outside areas";
						value = 0;
					};
				};
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments //sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				description = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				defaultValue = "''";
			};
			class Type //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Can create and edit";
				description = "";
				typeName = "BOOL";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Whitelist //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Inside areas";
						value = 1;
						default = 1;
					};
					class Blacklist //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Outside areas";
						value = 0;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Curator"]
		{
			description = "Set whether editing in all editing areas is allowed or restricted.";
			sync[] = {"ModuleCurator_F"};
			class ModuleCurator_F //sources - ["A3_Modules_F_Curator_Curator"]
			{
				optional = 1;
			};
		};
	};
	class ModuleCuratorAddCameraArea_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Curator"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCuratorAddCameraArea_F";
		scope = 2;
		category = "Curator";
		displayName = "Add Camera Area";
		function = "BIS_fnc_moduleCuratorAddCameraArea";
		functionPriority = 2;
		isTriggerActivated = 1;
		canSetArea = 1;
		class AttributeValues //sources - ["A3_Modules_F_Curator_Curator"]
		{
			size3[] = {250, 250, -1};
		};
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				tooltip = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				property = "ModuleCuratorAddCameraArea_F_Curator";
			};
			class Ceiling: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Ceiling";
				tooltip = "Camera ceiling in meters. It will be applied globally, not only for this specific area. The default value is 2000 m.";
				typeName = "NUMBER";
				defaultValue = -1;
				property = "ModuleCuratorAddCameraArea_F_Ceiling";
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments //sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				description = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				defaultValue = "''";
			};
			class Ceiling //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Ceiling";
				description = "Camera ceiling in meters. It will be applied globally, not only for this specific area. The default value is 2000 m.";
				typeName = "NUMBER";
				defaultValue = -1;
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Curator"]
		{
			description = "Add an area inside of which Zeus can move with the camera.";
			sync[] = {"ModuleCurator_F", "LocationArea_F"};
			class ModuleCurator_F //sources - ["A3_Modules_F_Curator_Curator"]
			{
				optional = 1;
			};
			class LocationArea_F //sources - ["A3_Modules_F_Curator_Curator"]
			{
				description = "";
				duplicate = 1;
				sync[] = {"TriggerArea"};
			};
			class TriggerArea: EmptyDetector //inherits 5 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription/EmptyDetector, sources - ["A3_Modules_F_Curator_Curator"]
			{
				position = 1;
				area = 1;
				description = "Determines area size. Only circles are supported.";
			};
		};
	};
	class ModuleCuratorSetCamera_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Curator"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCuratorSetCamera_F";
		scope = 2;
		category = "Curator";
		displayName = "Set Camera Position";
		function = "BIS_fnc_moduleCuratorSetCamera";
		functionPriority = 2;
		isTriggerActivated = 1;
		isGlobal = 2;
		icon = "\a3\Modules_F_Curator\Data\iconCuratorSetCamera_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitCuratorSetCamera_ca.paa";
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				tooltip = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				property = "ModuleCuratorSetCamera_F_Curator";
			};
			class Pitch: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Pitch";
				tooltip = "Camera pitch (0 is horizontal level, -90 is looking straight down)";
				property = "ModuleCuratorSetCamera_F_Pitch";
				typeName = "NUMBER";
				defaultValue = 0;
			};
			class Commit: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Commit Time";
				tooltip = "Time in seconds during which the camera will move to the position.";
				property = "ModuleCuratorSetCamera_F_Commit";
				typeName = "NUMBER";
				defaultValue = 0;
			};
			class UseAsDefault: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Use as default";
				tooltip = "When enabled, the camera position will be used upon entering the Zeus interface.";
				property = "ModuleCuratorSetCamera_F_UseAsDefault";
				typeName = "BOOL";
				defaultValue = 0;
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Enabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Enabled";
						value = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Disabled";
						value = 0;
						default = 1;
					};
				};
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments //sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				description = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				defaultValue = "''";
			};
			class Pitch //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Pitch";
				description = "Camera pitch (0 is horizontal level, -90 is looking straight down)";
				typeName = "NUMBER";
				defaultValue = "0";
			};
			class Commit //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Commit Time";
				description = "Time in seconds during which the camera will move to the position.";
				typeName = "NUMBER";
				defaultValue = "0";
			};
			class UseAsDefault //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Use as default";
				description = "When enabled, the camera position will be used upon entering the Zeus interface.";
				typeName = "BOOL";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Enabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Enabled";
						value = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Disabled";
						value = 0;
						default = 1;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Curator"]
		{
			description = "Move the Zeus camera to the module position.";
			position = 1;
			direction = 1;
			sync[] = {"ModuleCurator_F"};
			class ModuleCurator_F //sources - ["A3_Modules_F_Curator_Curator"]
			{
				optional = 1;
			};
		};
	};
	class ModuleCuratorAddEditableObjects: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Curator"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCuratorAddEditableObjects";
		scope = 2;
		category = "Curator";
		displayName = "Add Editable Objects";
		function = "BIS_fnc_moduleCuratorAddEditableObjects";
		functionPriority = 2;
		isTriggerActivated = 1;
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				tooltip = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				property = "ModuleCuratorAddEditableObjects_Curator";
			};
			class AddCrew: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Add Crew";
				tooltip = "Add crewmembers inside vehicles. Without them, the vehicles won't be editable.";
				property = "ModuleCuratorAddEditableObjects_AddCrew";
				typeName = "BOOL";
				defaultValue = 1;
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Yes //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Add";
						value = 1;
						default = 1;
					};
					class No //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Do not add";
						value = 0;
					};
				};
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments //sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				description = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				defaultValue = "''";
			};
			class AddCrew //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Add Crew";
				description = "Add crewmembers inside vehicles. Without them, the vehicles won't be editable.";
				typeName = "BOOL";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Yes //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Add";
						value = 1;
						default = 1;
					};
					class No //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Do not add";
						value = 0;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Curator"]
		{
			description = "Add objects which Zeus can edit.";
			sync[] = {"ModuleCurator_F", "AnyObject"};
			class ModuleCurator_F //sources - ["A3_Modules_F_Curator_Curator"]
			{
				optional = 1;
			};
		};
	};
	class ModuleCuratorSetCoefs_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Curator"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCuratorSetCoefs_F";
		scope = 2;
		category = "Curator";
		displayName = "Set Editing Costs";
		function = "BIS_fnc_moduleCuratorSetCoefs";
		functionPriority = 2;
		isTriggerActivated = 1;
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				tooltip = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				property = "ModuleCuratorSetCoefs_F_Curator";
			};
			class Place: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Placing";
				property = "ModuleCuratorSetCoefs_F_Place";
				typeName = "NUMBER";
				defaultValue = -1;
			};
			class Edit: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Editing";
				property = "ModuleCuratorSetCoefs_F_Edit";
				typeName = "NUMBER";
				defaultValue = 0;
			};
			class Delete: Edit //inherits 4 parameters from bin\config.bin/CfgVehicles/ModuleCuratorSetCoefs_F/Attributes/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Deleting";
				property = "ModuleCuratorSetCoefs_F_Delete";
				typeName = "NUMBER";
				defaultValue = 1;
			};
			class Destroy: Edit //inherits 4 parameters from bin\config.bin/CfgVehicles/ModuleCuratorSetCoefs_F/Attributes/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Destroying";
				property = "ModuleCuratorSetCoefs_F_Destroy";
				typeName = "NUMBER";
				defaultValue = 0;
			};
			class Synchronize: Edit //inherits 4 parameters from bin\config.bin/CfgVehicles/ModuleCuratorSetCoefs_F/Attributes/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Synchronizing";
				property = "ModuleCuratorSetCoefs_F_Synchronize";
				typeName = "NUMBER";
				defaultValue = 0;
			};
			class Group: Edit //inherits 4 parameters from bin\config.bin/CfgVehicles/ModuleCuratorSetCoefs_F/Attributes/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Grouping";
				property = "ModuleCuratorSetCoefs_F_Group";
				typeName = "NUMBER";
				defaultValue = 0;
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments //sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				description = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				defaultValue = "''";
			};
			class Place //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Placing";
				typeName = "NUMBER";
				defaultValue = -1;
			};
			class Edit //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Editing";
				typeName = "NUMBER";
				defaultValue = 0;
			};
			class Delete //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Deleting";
				typeName = "NUMBER";
				defaultValue = 1;
			};
			class Destroy //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Destroying";
				typeName = "NUMBER";
				defaultValue = 0;
			};
			class Synchronize //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Synchronizing";
				typeName = "NUMBER";
				defaultValue = 0;
			};
			class Group //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Grouping";
				typeName = "NUMBER";
				defaultValue = 0;
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Curator"]
		{
			description = "Set coefficients for operations Zeus can perform. The object cost is multiplied by these. Use a large negative value (e.g. -1e10) to disable the operation.";
			sync[] = {"ModuleCurator_F"};
			class ModuleCurator_F //sources - ["A3_Modules_F_Curator_Curator"]
			{
				optional = 1;
			};
		};
	};
	class ModuleCuratorSetDefaultCosts_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Curator"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCuratorSetDefaultCosts_F";
		scope = 2;
		category = "Curator";
		displayName = "Set Costs (Default)";
		function = "BIS_fnc_moduleCuratorSetCostsDefault";
		functionPriority = 2;
		isGlobal = 2;
		icon = "\a3\Modules_F_Curator\Data\iconCuratorSetDefaultCosts_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitCuratorSetDefaultCosts_ca.paa";
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				tooltip = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				property = "ModuleCuratorSetDefaultCosts_F_Curator";
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments //sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				description = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				defaultValue = "''";
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Curator"]
		{
			description[] = {"Simplified definition of object costs. Can be combined with other """"Set Costs"""" modules (e.g., cost of a BLUFOR soldier can be defined by """"Set Costs - Sides"""" and """"Set Costs - Soldiers & Vehicles"""" module. All matching values are multiplied together).", "The object costs defined are based on the threat level - more dangerous units will be more expensive. Values can range from 1 (minimal threat: used by basic soldiers or empty objects) to 10 (maximal threat: typically airplanes and gunships).", "Module cost is tailored for each module specifically."};
			sync[] = {"ModuleCurator_F"};
			class ModuleCurator_F //sources - ["A3_Modules_F_Curator_Curator"]
			{
				optional = 1;
			};
		};
	};
	class ModuleCuratorSetSideCosts_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Curator"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCuratorSetSideCosts_F";
		scope = 2;
		category = "Curator";
		displayName = "Set Costs (Side)";
		function = "BIS_fnc_moduleCuratorSetCostsSide";
		functionPriority = 2;
		isGlobal = 2;
		icon = "\a3\Modules_F_Curator\Data\iconCuratorSetSideCosts_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitCuratorSetSideCosts_ca.paa";
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				tooltip = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				property = "ModuleCuratorSetSideCosts_F_Curator";
			};
			class costSide_West: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "BLUFOR";
				typeName = "NUMBER";
				defaultValue = 1;
				property = "ModuleCuratorSetSideCosts_F_costSide_West";
			};
			class costSide_East: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "OPFOR";
				typeName = "NUMBER";
				defaultValue = 1;
				property = "ModuleCuratorSetSideCosts_F_costSide_East";
			};
			class costSide_Guer: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Independent";
				typeName = "NUMBER";
				defaultValue = 1;
				property = "ModuleCuratorSetSideCosts_F_costSide_Guer";
			};
			class costSide_Civ: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Civilian";
				typeName = "NUMBER";
				defaultValue = 1;
				property = "ModuleCuratorSetSideCosts_F_costSide_Civ";
			};
			class costSide_Empty: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Empty";
				typeName = "NUMBER";
				defaultValue = 1;
				property = "ModuleCuratorSetSideCosts_F_costSide_Empty";
			};
			class costSide_Logic: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Modules";
				typeName = "NUMBER";
				defaultValue = 1;
				property = "ModuleCuratorSetSideCosts_F_costSide_Logic";
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments //sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				description = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				defaultValue = "''";
			};
			class costSide_West //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "BLUFOR";
				typeName = "NUMBER";
				defaultValue = 1;
			};
			class costSide_East //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "OPFOR";
				typeName = "NUMBER";
				defaultValue = 1;
			};
			class costSide_Guer //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Independent";
				typeName = "NUMBER";
				defaultValue = 1;
			};
			class costSide_Civ //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Civilian";
				typeName = "NUMBER";
				defaultValue = 1;
			};
			class costSide_Empty //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Empty";
				typeName = "NUMBER";
				defaultValue = 1;
			};
			class costSide_Logic //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Modules";
				typeName = "NUMBER";
				defaultValue = 1;
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Curator"]
		{
			description = "Simplified definition of object costs. Can be combined with other """"Set Costs"""" modules (e.g., cost of a BLUFOR soldier can be defined by """"Set Costs - Sides"""" and """"Set Costs - Soldiers & Vehicles"""" module. All matching values are multiplied together).";
			sync[] = {"ModuleCurator_F"};
			class ModuleCurator_F //sources - ["A3_Modules_F_Curator_Curator"]
			{
				optional = 1;
			};
		};
	};
	class ModuleCuratorSetCosts_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Curator"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCuratorSetCosts_F";
		scope = 2;
		category = "Curator";
		displayName = "Set Costs - Soldiers & Vehicles";
		function = "BIS_fnc_moduleCuratorSetCostsVehicleClass";
		functionPriority = 2;
		isGlobal = 2;
		icon = "\a3\Modules_F_Curator\Data\iconCuratorSetCosts_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitCuratorSetCosts_ca.paa";
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				tooltip = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				property = "ModuleCuratorSetCosts_F_Curator";
			};
			class cost_EdSubcat_Personnel: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Men";
				tooltip = "Men";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetCosts_F_EdSubcat_Personnel";
			};
			class cost_EdSubcat_Personnel_SpecialForces: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Men (Special Forces)";
				tooltip = "Men (Special Forces)";
				defaultValue = 1.2;
				typeName = "NUMBER";
				property = "ModuleCuratorSetCosts_F_EdSubcat_Personnel_SpecialForces";
			};
			class cost_EdSubcat_Personnel_Viper: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Viper";
				tooltip = "Viper";
				defaultValue = 1.2;
				typeName = "NUMBER";
				property = "ModuleCuratorSetCosts_F_EdSubcat_Personnel_Viper";
			};
			class cost_EdSubcat_Personnel_Story: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Men (Story)";
				tooltip = "Men (Story)";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetCosts_F_EdSubcat_Personnel_Story";
			};
			class cost_EdSubcat_Personnel_VR: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Men (Virtual Reality)";
				tooltip = "Men (Virtual Reality)";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetCosts_F_EdSubcat_Personnel_VR";
			};
			class cost_EdSubcat_APCs: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "APCs";
				tooltip = "APCs";
				defaultValue = 3;
				typeName = "NUMBER";
				property = "ModuleCuratorSetCosts_F_EdSubcat_APCs";
			};
			class cost_EdSubcat_Artillery: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Artillery";
				tooltip = "Artillery";
				defaultValue = 4;
				typeName = "NUMBER";
				property = "ModuleCuratorSetCosts_F_EdSubcat_Artillery";
			};
			class cost_EdSubcat_Boats: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Boats";
				tooltip = "Boats";
				defaultValue = 2;
				typeName = "NUMBER";
				property = "ModuleCuratorSetCosts_F_EdSubcat_Boats";
			};
			class cost_EdSubcat_Cars: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Cars";
				tooltip = "Cars";
				defaultValue = 2;
				typeName = "NUMBER";
				property = "ModuleCuratorSetCosts_F_EdSubcat_Cars";
			};
			class cost_EdSubcat_Drones: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Drones";
				tooltip = "Drones";
				defaultValue = 3;
				typeName = "NUMBER";
				property = "ModuleCuratorSetCosts_F_EdSubcat_Drones";
			};
			class cost_EdSubcat_Helicopters: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Helicopters";
				tooltip = "Helicopters";
				defaultValue = 6;
				typeName = "NUMBER";
				property = "ModuleCuratorSetCosts_F_EdSubcat_Helicopters";
			};
			class cost_EdSubcat_Planes: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Planes";
				tooltip = "Planes";
				defaultValue = 8;
				typeName = "NUMBER";
				property = "ModuleCuratorSetCosts_F_EdSubcat_Planes";
			};
			class cost_EdSubcat_Submersibles: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Submersibles";
				tooltip = "Submersibles";
				defaultValue = 3;
				typeName = "NUMBER";
				property = "ModuleCuratorSetCosts_F_EdSubcat_Submersibles";
			};
			class cost_EdSubcat_Tanks: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Tanks";
				tooltip = "Tanks";
				defaultValue = 4;
				typeName = "NUMBER";
				property = "ModuleCuratorSetCosts_F_EdSubcat_Tanks";
			};
			class cost_EdSubcat_Turrets: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Turrets";
				tooltip = "Turrets";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetCosts_F_EdSubcat_Turrets";
			};
		};
		class Arguments //sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				description = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				defaultValue = "''";
			};
			class cost_EdSubcat_Personnel //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Men";
				description = "Men";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_EdSubcat_Personnel_SpecialForces //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Men (Special Forces)";
				description = "Men (Special Forces)";
				defaultValue = 1.2;
				typeName = "NUMBER";
			};
			class cost_EdSubcat_Personnel_Viper //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Men (Viper)";
				description = "Men (Viper)";
				defaultValue = 1.2;
				typeName = "NUMBER";
			};
			class cost_EdSubcat_Personnel_Story //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Men (Story)";
				description = "Men (Story)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_EdSubcat_Personnel_VR //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Men (Virtual Reality)";
				description = "Men (Virtual Reality)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_EdSubcat_Personnel_Tanoan //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Men (Tanoan)";
				description = "Men (Tanoan)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_EdSubcat_Personnel_Paramilitary //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Men (Paramilitary)";
				description = "Men (Paramilitary)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_EdSubcat_Personnel_Bandits //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Men (Bandits)";
				description = "Men (Bandits)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_EdSubcat_APCs //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "APCs";
				description = "APCs";
				defaultValue = 3;
				typeName = "NUMBER";
			};
			class cost_EdSubcat_Artillery //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Artillery";
				description = "Artillery";
				defaultValue = 4;
				typeName = "NUMBER";
			};
			class cost_EdSubcat_Boats //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Boats";
				description = "Boats";
				defaultValue = 2;
				typeName = "NUMBER";
			};
			class cost_EdSubcat_Cars //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Cars";
				description = "Cars";
				defaultValue = 2;
				typeName = "NUMBER";
			};
			class cost_EdSubcat_Drones //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Drones";
				description = "Drones";
				defaultValue = 3;
				typeName = "NUMBER";
			};
			class cost_EdSubcat_Helicopters //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Helicopters";
				description = "Helicopters";
				defaultValue = 6;
				typeName = "NUMBER";
			};
			class cost_EdSubcat_Planes //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Planes";
				description = "Planes";
				defaultValue = 8;
				typeName = "NUMBER";
			};
			class cost_EdSubcat_Submersibles //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Submersibles";
				description = "Submersibles";
				defaultValue = 3;
				typeName = "NUMBER";
			};
			class cost_EdSubcat_Tanks //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Tanks";
				description = "Tanks";
				defaultValue = 4;
				typeName = "NUMBER";
			};
			class cost_EdSubcat_Turrets //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Turrets";
				description = "Turrets";
				defaultValue = 1;
				typeName = "NUMBER";
			};
		};
		class ArgumentsLegacy //sources - ["A3_Modules_F_Curator_Curator"]
		{
			class cost_Men //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Men";
				description = "Men";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_MenDiver //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Men (Diver)";
				description = "Men (Diver)";
				defaultValue = 1.2;
				typeName = "NUMBER";
			};
			class cost_MenRecon //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Men (Recon)";
				description = "Men (Recon)";
				defaultValue = 1.2;
				typeName = "NUMBER";
			};
			class cost_MenSniper //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Men (Sniper)";
				description = "Men (Sniper)";
				defaultValue = 1.4;
				typeName = "NUMBER";
			};
			class cost_MenSupport //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Men (Support)";
				description = "Men (Support)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_MenUrban //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Men (Urban)";
				description = "Men (Urban)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_MenStory //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Men (Story)";
				description = "Men (Story)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_MenVR //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Men (Virtual Reality)";
				description = "Men (Virtual Reality)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Car //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Cars";
				description = "Cars";
				defaultValue = 2;
				typeName = "NUMBER";
			};
			class cost_Armored //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Armored";
				description = "Armored";
				defaultValue = 4;
				typeName = "NUMBER";
			};
			class cost_Air //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Air";
				description = "Air";
				defaultValue = 8;
				typeName = "NUMBER";
			};
			class cost_Autonomous //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Autonomous";
				description = "Autonomous";
				defaultValue = 3;
				typeName = "NUMBER";
			};
			class cost_Static //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Static";
				description = "Static";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Ship //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Ships";
				description = "Ships";
				defaultValue = 2;
				typeName = "NUMBER";
			};
			class cost_Submarine //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Submarines";
				description = "Submarines";
				defaultValue = 3;
				typeName = "NUMBER";
			};
			class cost_Support //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Supports";
				description = "Supports";
				defaultValue = 2;
				typeName = "NUMBER";
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Curator"]
		{
			description = "Simplified definition of object costs. Can be combined with other """"Set Costs"""" modules (e.g., cost of a BLUFOR soldier can be defined by """"Set Costs - Sides"""" and """"Set Costs - Soldiers & Vehicles"""" module. All matching values are multiplied together).";
			sync[] = {"ModuleCurator_F"};
			class ModuleCurator_F //sources - ["A3_Modules_F_Curator_Curator"]
			{
				optional = 1;
			};
		};
	};
	class ModuleCuratorSetObjectCosts_F: ModuleCuratorSetCosts_F //inherits 14 parameters from bin\config.bin/CfgVehicles/ModuleCuratorSetCosts_F, sources - ["A3_Modules_F_Curator_Curator"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCuratorSetObjectCosts_F";
		displayName = "Set Costs - Objects";
		icon = "\a3\Modules_F_Curator\Data\iconCuratorSetObjectCosts_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitCuratorSetObjectCosts_ca.paa";
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				tooltip = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				property = "ModuleCuratorSetCosts_F_Curator";
			};
			class cost_Ammo: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Ammo";
				tooltip = "Ammo";
				defaultValue = 8;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Ammo";
			};
			class cost_WeaponsPrimary: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Weapons (Primary)";
				tooltip = "Weapons (Primary)";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_WeaponsPrimary";
			};
			class cost_WeaponsSecondary: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Weapons (Launchers)";
				tooltip = "Weapons (Launchers)";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_WeaponsSecondary";
			};
			class cost_WeaponsHandguns: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Weapons (Sidearms)";
				tooltip = "Weapons (Sidearms)";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_WeaponsHandguns";
			};
			class cost_Items: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Items";
				tooltip = "Items";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Items";
			};
			class cost_ItemsHeadgear: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Items (Headgear)";
				tooltip = "Items (Headgear)";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_ItemsHeadgear";
			};
			class cost_ItemsVests: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Items (Vests)";
				tooltip = "Items (Vests)";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_ItemsVests";
			};
			class cost_ItemsUniforms: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Items (Uniforms)";
				tooltip = "Items (Uniforms)";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_ItemsUniforms";
			};
			class cost_Backpacks: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Backpacks";
				tooltip = "Backpacks";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Backpacks";
			};
			class cost_Intel: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Intel";
				tooltip = "Intel";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Intel";
			};
			class cost_Mines: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Mines";
				tooltip = "Mines";
				defaultValue = 10;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Mines";
			};
			class cost_Explosives: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Explosives";
				tooltip = "Explosives";
				defaultValue = 8;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Explosives";
			};
			class cost_Objects: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects";
				tooltip = "Objects";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Objects";
			};
			class cost_Cargo: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Construction)";
				tooltip = "Objects (Construction)";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Cargo";
			};
			class cost_Container: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Containers)";
				tooltip = "Objects (Containers)";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Container";
			};
			class cost_Garbage: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Garbage)";
				tooltip = "Objects (Garbage)";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Garbage";
			};
			class cost_Flag: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Flags)";
				tooltip = "Objects (Flags)";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Flag";
			};
			class cost_Submerged: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Sea)";
				tooltip = "Objects (Sea)";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Submerged";
			};
			class cost_Lamps: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Lamps)";
				tooltip = "Objects (Lamps)";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Lamps";
			};
			class cost_Wreck: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Wrecks";
				tooltip = "Wrecks";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Wreck";
			};
			class cost_Wreck_sub: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Wrecks (Submerged)";
				tooltip = "Wrecks (Submerged)";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Wreck_sub";
			};
			class cost_Helpers: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Helpers)";
				tooltip = "Objects (Helpers)";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Helpers";
			};
			class cost_Dead_bodies: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Cemetery)";
				tooltip = "Objects (Cemetery)";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Dead_bodies";
			};
			class cost_Furniture: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Furniture)";
				tooltip = "Objects (Furniture)";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Furniture";
			};
			class cost_Military: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Military)";
				tooltip = "Objects (Military)";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Military";
			};
			class cost_Signs: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Signs)";
				tooltip = "Objects (Signs)";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Signs";
			};
			class cost_Small_items: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Small)";
				tooltip = "Objects (Small)";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Small_items";
			};
			class cost_Training: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Training)";
				tooltip = "Objects (Training)";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Training";
			};
			class cost_Fortifications: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Fortifications)";
				tooltip = "Objects (Fortifications)";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Fortifications";
			};
			class cost_Tents: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Camping)";
				tooltip = "Objects (Camping)";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Tents";
			};
			class cost_Market: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Market)";
				tooltip = "Objects (Market)";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Market";
			};
			class cost_Objects_Sports: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Structures (Sports)";
				tooltip = "Structures (Sports)";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Objects_Sports";
			};
			class cost_Structures: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Structures";
				tooltip = "Structures";
				defaultValue = 2;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Structures";
			};
			class cost_Structures_Commercial: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Structures (Commercial)";
				tooltip = "Structures (Commercial)";
				defaultValue = 2;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Structures_Commercial";
			};
			class cost_Structures_Cultural: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Structures (Cultural)";
				tooltip = "Structures (Cultural)";
				defaultValue = 2;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Structures_Cultural";
			};
			class cost_Structures_Industrial: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Structures (Industrial)";
				tooltip = "Structures (Industrial)";
				defaultValue = 2;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Structures_Industrial";
			};
			class cost_Structures_Infrastructure: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Structures (Infrastructure)";
				tooltip = "Structures (Infrastructure)";
				defaultValue = 2;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Structures_Infrastructure";
			};
			class cost_Structures_Military: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Structures (Military)";
				tooltip = "Structures (Military)";
				defaultValue = 2;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Structures_Military";
			};
			class cost_Structures_Town: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Structures (Town)";
				tooltip = "Structures (Town)";
				defaultValue = 2;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Structures_Town";
			};
			class cost_Structures_Transport: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Structures (Transport)";
				tooltip = "Structures (Transport)";
				defaultValue = 2;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Structures_Transport";
			};
			class cost_Structures_Village: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Structures (Village)";
				tooltip = "Structures (Village)";
				defaultValue = 2;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Structures_Village";
			};
			class cost_Structures_Walls: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Structures (Walls)";
				tooltip = "Structures (Walls)";
				defaultValue = 2;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Structures_Walls";
			};
			class cost_Structures_Fences: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Structures (Fences)";
				tooltip = "Structures (Fences)";
				defaultValue = 2;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Structures_Fences";
			};
			class cost_Structures_Slums: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Structures (Slums)";
				tooltip = "Structures (Slums)";
				defaultValue = 2;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Structures_Slums";
			};
			class cost_Structures_Sports: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Structures (Sports)";
				tooltip = "Structures (Sports)";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Structures_Sports";
			};
			class cost_Structures_VR: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Structures (Virtual Reality)";
				tooltip = "Structures (Virtual Reality)";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetObjectCosts_F_Structures_VR";
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments //sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				description = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				defaultValue = "''";
			};
			class cost_Ammo //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Ammo";
				description = "Ammo";
				defaultValue = 8;
				typeName = "NUMBER";
			};
			class cost_WeaponsPrimary //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Weapons (Primary)";
				description = "Weapons (Primary)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_WeaponsSecondary //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Weapons (Launchers)";
				description = "Weapons (Launchers)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_WeaponsHandguns //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Weapons (Sidearms)";
				description = "Weapons (Sidearms)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Items //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Items";
				description = "Items";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_ItemsHeadgear //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Items (Headgear)";
				description = "Items (Headgear)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_ItemsVests //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Items (Vests)";
				description = "Items (Vests)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_ItemsUniforms //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Items (Uniforms)";
				description = "Items (Uniforms)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Backpacks //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Backpacks";
				description = "Backpacks";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Intel //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Intel";
				description = "Intel";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Mines //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Mines";
				description = "Mines";
				defaultValue = 10;
				typeName = "NUMBER";
			};
			class cost_Explosives //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Explosives";
				description = "Explosives";
				defaultValue = 8;
				typeName = "NUMBER";
			};
			class cost_Objects //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects";
				description = "Objects";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Cargo //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Construction)";
				description = "Objects (Construction)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Container //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Containers)";
				description = "Objects (Containers)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Garbage //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Garbage)";
				description = "Objects (Garbage)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Flag //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Flags)";
				description = "Objects (Flags)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Submerged //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Sea)";
				description = "Objects (Sea)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Lamps //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Lamps)";
				description = "Objects (Lamps)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Wreck //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Wrecks";
				description = "Wrecks";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Wreck_sub //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Wrecks (Submerged)";
				description = "Wrecks (Submerged)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Helpers //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Helpers)";
				description = "Objects (Helpers)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Dead_bodies //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Cemetery)";
				description = "Objects (Cemetery)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Furniture //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Furniture)";
				description = "Objects (Furniture)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Military //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Military)";
				description = "Objects (Military)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Signs //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Signs)";
				description = "Objects (Signs)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Small_items //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Small)";
				description = "Objects (Small)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Training //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Training)";
				description = "Objects (Training)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Fortifications //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Fortifications)";
				description = "Objects (Fortifications)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Tents //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Camping)";
				description = "Objects (Camping)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Market //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objects (Market)";
				description = "Objects (Market)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Objects_Sports //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Structures (Sports)";
				description = "Structures (Sports)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Structures //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Structures";
				description = "Structures";
				defaultValue = 2;
				typeName = "NUMBER";
			};
			class cost_Structures_Commercial //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Structures (Commercial)";
				description = "Structures (Commercial)";
				defaultValue = 2;
				typeName = "NUMBER";
			};
			class cost_Structures_Cultural //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Structures (Cultural)";
				description = "Structures (Cultural)";
				defaultValue = 2;
				typeName = "NUMBER";
			};
			class cost_Structures_Industrial //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Structures (Industrial)";
				description = "Structures (Industrial)";
				defaultValue = 2;
				typeName = "NUMBER";
			};
			class cost_Structures_Infrastructure //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Structures (Infrastructure)";
				description = "Structures (Infrastructure)";
				defaultValue = 2;
				typeName = "NUMBER";
			};
			class cost_Structures_Military //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Structures (Military)";
				description = "Structures (Military)";
				defaultValue = 2;
				typeName = "NUMBER";
			};
			class cost_Structures_Town //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Structures (Town)";
				description = "Structures (Town)";
				defaultValue = 2;
				typeName = "NUMBER";
			};
			class cost_Structures_Transport //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Structures (Transport)";
				description = "Structures (Transport)";
				defaultValue = 2;
				typeName = "NUMBER";
			};
			class cost_Structures_Village //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Structures (Village)";
				description = "Structures (Village)";
				defaultValue = 2;
				typeName = "NUMBER";
			};
			class cost_Structures_Walls //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Structures (Walls)";
				description = "Structures (Walls)";
				defaultValue = 2;
				typeName = "NUMBER";
			};
			class cost_Structures_Fences //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Structures (Fences)";
				description = "Structures (Fences)";
				defaultValue = 2;
				typeName = "NUMBER";
			};
			class cost_Structures_Slums //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Structures (Slums)";
				description = "Structures (Slums)";
				defaultValue = 2;
				typeName = "NUMBER";
			};
			class cost_Structures_Sports //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Structures (Sports)";
				description = "Structures (Sports)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Structures_VR //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Structures (Virtual Reality)";
				description = "Structures (Virtual Reality)";
				defaultValue = 1;
				typeName = "NUMBER";
			};
		};
	};
	class ModuleCuratorSetModuleCosts_F: ModuleCuratorSetCosts_F //inherits 14 parameters from bin\config.bin/CfgVehicles/ModuleCuratorSetCosts_F, sources - ["A3_Modules_F_Curator_Curator"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCuratorSetModuleCosts_F";
		displayName = "Set Costs - Modules";
		icon = "\a3\Modules_F_Curator\Data\iconCuratorSetModuleCosts_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitCuratorSetModuleCosts_ca.paa";
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				tooltip = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				property = "ModuleCuratorSetCosts_F_Curator";
			};
			class cost_Animals: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Animals";
				tooltip = "Animals";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetModuleCosts_F_Animals";
			};
			class cost_Audio: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Audio";
				tooltip = "Audio";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetModuleCosts_F_Audio";
			};
			class cost_Chemlights: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Chem lights";
				tooltip = "Chem lights";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetModuleCosts_F_Chemlights";
			};
			class cost_Curator: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Zeus";
				tooltip = "Zeus";
				defaultValue = 7;
				typeName = "NUMBER";
				property = "ModuleCuratorSetModuleCosts_F_Curator";
			};
			class cost_Effects: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Effects";
				tooltip = "Effects";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetModuleCosts_F_Effects";
			};
			class cost_Environment: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Environment";
				tooltip = "Environment";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetModuleCosts_F_Environment";
			};
			class cost_Flares: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Flares";
				tooltip = "Flares";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetModuleCosts_F_Flares";
			};
			class cost_Modules: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Misc";
				tooltip = "Misc";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetModuleCosts_F_Modules";
			};
			class cost_MissionFlow: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Scenario Flow";
				tooltip = "Scenario Flow";
				defaultValue = 0;
				typeName = "NUMBER";
				property = "ModuleCuratorSetModuleCosts_F_MissionFlow";
			};
			class cost_Objectives: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objectives";
				tooltip = "Objectives";
				defaultValue = 0;
				typeName = "NUMBER";
				property = "ModuleCuratorSetModuleCosts_F_Objectives";
			};
			class cost_Ordnance: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Fire Support";
				tooltip = "Fire Support";
				defaultValue = 6;
				typeName = "NUMBER";
				property = "ModuleCuratorSetModuleCosts_F_Ordnance";
			};
			class cost_Respawn: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Respawn";
				tooltip = "Respawn";
				defaultValue = 0;
				typeName = "NUMBER";
				property = "ModuleCuratorSetModuleCosts_F_Respawn";
			};
			class cost_SmokeShells: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Smoke shells";
				tooltip = "Smoke shells";
				defaultValue = 1;
				typeName = "NUMBER";
				property = "ModuleCuratorSetModuleCosts_F_SmokeShells";
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments //sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				description = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				defaultValue = "''";
			};
			class cost_Animals //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Animals";
				description = "Animals";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Audio //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Audio";
				description = "Audio";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Chemlights //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Chem lights";
				description = "Chem lights";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Curator //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Zeus";
				description = "Zeus";
				defaultValue = 7;
				typeName = "NUMBER";
			};
			class cost_Effects //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Effects";
				description = "Effects";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Environment //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Environment";
				description = "Environment";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Flares //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Flares";
				description = "Flares";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_Modules //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Misc";
				description = "Misc";
				defaultValue = 1;
				typeName = "NUMBER";
			};
			class cost_MissionFlow //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Scenario Flow";
				description = "Scenario Flow";
				defaultValue = 0;
				typeName = "NUMBER";
			};
			class cost_Objectives //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Objectives";
				description = "Objectives";
				defaultValue = 0;
				typeName = "NUMBER";
			};
			class cost_Ordnance //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Fire Support";
				description = "Fire Support";
				defaultValue = 6;
				typeName = "NUMBER";
			};
			class cost_Respawn //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Respawn";
				description = "Respawn";
				defaultValue = 0;
				typeName = "NUMBER";
			};
			class cost_SmokeShells //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Smoke shells";
				description = "Smoke shells";
				defaultValue = 1;
				typeName = "NUMBER";
			};
		};
	};
	class ModuleCuratorAddIcon_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Curator"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCuratorAddIcon_F";
		scope = 2;
		category = "Curator";
		displayName = "Add Icon";
		function = "BIS_fnc_moduleCuratorAddIcon";
		functionPriority = 2;
		isTriggerActivated = 1;
		isGlobal = 1;
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				tooltip = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				property = "ModuleCuratorAddIcon_F_Curator";
			};
			class Texture: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Texture";
				tooltip = "Path to texture or CfgMarkers class";
				property = "ModuleCuratorAddIcon_F_Texture";
			};
			class Text: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Text";
				property = "ModuleCuratorAddIcon_F_Text";
			};
			class Size: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Size";
				typeName = "NUMBER";
				defaultValue = 1;
				property = "ModuleCuratorAddIcon_F_Size";
			};
			class Color: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Color";
				defaultValue = "ColorWhite";
				property = "ModuleCuratorAddIcon_F_Color";
				class Values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class ColorWhite //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "White";
						value = "ColorWhite";
						default = 1;
					};
					class ColorYellow //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Yellow";
						value = "ColorYellow";
					};
					class ColorOrange //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Orange";
						value = "ColorOrange";
					};
					class ColorRed //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Red";
						value = "ColorRed";
					};
					class ColorPink //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Pink";
						value = "ColorPink";
					};
					class ColorBlue //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Blue";
						value = "ColorBlue";
					};
					class ColorKhaki //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Khaki";
						value = "ColorKhaki";
					};
					class ColorGreen //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Green";
						value = "ColorGreen";
					};
					class ColorBrown //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Brown";
						value = "ColorBrown";
					};
					class ColorGrey //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Grey";
						value = "ColorGrey";
					};
					class ColorBlack //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Black";
						value = "ColorBlack";
					};
					class ColorWEST //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "BLUFOR";
						value = "ColorWEST";
					};
					class ColorEAST //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "OPFOR";
						value = "ColorEAST";
					};
					class ColorGUER //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Independent";
						value = "ColorGUER";
					};
					class ColorCIV //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Civilian";
						value = "ColorCIV";
					};
					class ColorUNKNOWN //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Unknown side";
						value = "ColorUNKNOWN";
					};
				};
			};
			class Show2D: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Show in map";
				typeName = "BOOL";
				defaultValue = 1;
				property = "ModuleCuratorAddIcon_F_Show2D";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Enabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Enabled";
						value = 1;
						default = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments //sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				description = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				defaultValue = "''";
			};
			class Texture //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Texture";
				description = "Path to texture or CfgMarkers class";
			};
			class Text //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Text";
			};
			class Size //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Size";
				typeName = "NUMBER";
				defaultValue = 1;
			};
			class Color //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Color";
				class Values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class ColorWhite //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "White";
						value = "ColorWhite";
						default = 1;
					};
					class ColorYellow //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Yellow";
						value = "ColorYellow";
					};
					class ColorOrange //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Orange";
						value = "ColorOrange";
					};
					class ColorRed //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Red";
						value = "ColorRed";
					};
					class ColorPink //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Pink";
						value = "ColorPink";
					};
					class ColorBlue //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Blue";
						value = "ColorBlue";
					};
					class ColorKhaki //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Khaki";
						value = "ColorKhaki";
					};
					class ColorGreen //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Green";
						value = "ColorGreen";
					};
					class ColorBrown //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Brown";
						value = "ColorBrown";
					};
					class ColorGrey //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Grey";
						value = "ColorGrey";
					};
					class ColorBlack //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Black";
						value = "ColorBlack";
					};
					class ColorWEST //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "BLUFOR";
						value = "ColorWEST";
					};
					class ColorEAST //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "OPFOR";
						value = "ColorEAST";
					};
					class ColorGUER //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Independent";
						value = "ColorGUER";
					};
					class ColorCIV //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Civilian";
						value = "ColorCIV";
					};
					class ColorUNKNOWN //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Unknown side";
						value = "ColorUNKNOWN";
					};
				};
			};
			class Show2D //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Show in map";
				description = "";
				typeName = "BOOL";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Enabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Enabled";
						value = 1;
						default = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Curator"]
		{
			description = "Show icon visible only to a specific Zeus.";
			sync[] = {"ModuleCurator_F"};
			class ModuleCurator_F //sources - ["A3_Modules_F_Curator_Curator"]
			{
				optional = 1;
			};
		};
	};
	class ModuleCuratorSetAttributesObject_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Curator"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCuratorSetAttributesObject_F";
		scope = 2;
		category = "Curator";
		displayName = "Set Attributes - Objects";
		function = "BIS_fnc_moduleCuratorSetAttributes";
		functionPriority = 2;
		isTriggerActivated = 1;
		curatorAttributeType = "object";
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				tooltip = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				property = "ModuleCuratorSetAttributesObject_F_Curator";
			};
			class Skill: Checkbox //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Checkbox, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Skill:";
				property = "ModuleCuratorSetAttributesObject_F_Skill";
				defaultValue = 1;
			};
			class UnitPos: Checkbox //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Checkbox, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Stance";
				property = "ModuleCuratorSetAttributesObject_F_UnitPos";
				defaultValue = 1;
			};
			class Rank: Checkbox //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Checkbox, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Rank:";
				property = "ModuleCuratorSetAttributesObject_F_Rank";
				defaultValue = 1;
			};
			class Damage: Checkbox //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Checkbox, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Health/armor";
				property = "ModuleCuratorSetAttributesObject_F_Damage";
				defaultValue = 1;
			};
			class Fuel: Checkbox //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Checkbox, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Fuel";
				property = "ModuleCuratorSetAttributesObject_F_Fuel";
				defaultValue = 1;
			};
			class Lock: Checkbox //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Checkbox, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Vehicle lock:";
				property = "ModuleCuratorSetAttributesObject_F_Lock";
				defaultValue = 1;
			};
			class RespawnVehicle: Checkbox //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Checkbox, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Respawn vehicle";
				property = "ModuleCuratorSetAttributesObject_F_RespawnVehicle";
				defaultValue = 1;
			};
			class RespawnPosition: Checkbox //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Checkbox, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Respawn on object for";
				property = "ModuleCuratorSetAttributesObject_F_RespawnPosition";
				defaultValue = 1;
			};
			class Exec: Checkbox //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Checkbox, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Execute";
				property = "ModuleCuratorSetAttributesObject_F_Exec";
				defaultValue = 1;
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments //sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				description = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				defaultValue = "''";
			};
			class Skill //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Skill:";
				description = "";
				typeName = "BOOL";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Enabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Enabled";
						value = 1;
						default = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
			class UnitPos //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Stance";
				description = "";
				typeName = "BOOL";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Enabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Enabled";
						value = 1;
						default = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
			class Rank //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Rank:";
				description = "";
				typeName = "BOOL";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Enabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Enabled";
						value = 1;
						default = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
			class Damage //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Health/armor";
				description = "";
				typeName = "BOOL";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Enabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Enabled";
						value = 1;
						default = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
			class Fuel //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Fuel";
				description = "";
				typeName = "BOOL";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Enabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Enabled";
						value = 1;
						default = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
			class Lock //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Vehicle lock:";
				description = "";
				typeName = "BOOL";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Enabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Enabled";
						value = 1;
						default = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
			class RespawnVehicle //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Respawn vehicle";
				description = "";
				typeName = "BOOL";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Enabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Enabled";
						value = 1;
						default = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
			class RespawnPosition //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Respawn on object for";
				description = "";
				typeName = "BOOL";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Enabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Enabled";
						value = 1;
						default = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
			class Exec //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Execute";
				description = "";
				typeName = "BOOL";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Enabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Enabled";
						value = 1;
						default = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Curator"]
		{
			description = "Set which attributes are available for objects. The attribute window is accessed when Zeus double-clicks LMB on an object.";
			sync[] = {"ModuleCurator_F"};
			class ModuleCurator_F //sources - ["A3_Modules_F_Curator_Curator"]
			{
				optional = 1;
			};
		};
	};
	class ModuleCuratorSetAttributesPlayer_F: ModuleCuratorSetAttributesObject_F //inherits 12 parameters from bin\config.bin/CfgVehicles/ModuleCuratorSetAttributesObject_F, sources - ["A3_Modules_F_Curator_Curator"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCuratorSetAttributesPlayer_F";
		displayName = "Set Attributes - Players";
		curatorAttributeType = "player";
		class ModuleDescription: ModuleDescription //inherits 3 parameters from bin\config.bin/CfgVehicles/ModuleCuratorSetAttributesObject_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Curator"]
		{
			description = "Set which attributes are available for players. The attribute window is accessed when Zeus double-clicks LMB on a player.";
		};
	};
	class ModuleCuratorSetAttributesGroup_F: ModuleCuratorSetAttributesObject_F //inherits 12 parameters from bin\config.bin/CfgVehicles/ModuleCuratorSetAttributesObject_F, sources - ["A3_Modules_F_Curator_Curator"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCuratorSetAttributesGroup_F";
		displayName = "Set Attributes - Groups";
		curatorAttributeType = "group";
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				tooltip = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				property = "ModuleCuratorSetAttributesGroup_F_Curator";
			};
			class GroupID: Checkbox //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Checkbox, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Callsign";
				property = "ModuleCuratorSetAttributesObject_F_GroupID";
				defaultValue = 1;
			};
			class Formation: Checkbox //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Checkbox, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Formation:";
				property = "ModuleCuratorSetAttributesObject_F_Formation";
				defaultValue = 1;
			};
			class Behaviour: Checkbox //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Checkbox, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Combat mode:";
				property = "ModuleCuratorSetAttributesObject_F_Behaviour";
				defaultValue = 1;
			};
			class SpeedMode: Checkbox //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Checkbox, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Speed:";
				property = "ModuleCuratorSetAttributesObject_F_SpeedMode";
				defaultValue = 1;
			};
			class UnitPos: Checkbox //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Checkbox, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Stance";
				property = "ModuleCuratorSetAttributesObject_F_UnitPos";
				defaultValue = 1;
			};
			class Skill: Checkbox //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Checkbox, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Skill:";
				property = "ModuleCuratorSetAttributesObject_F_Skill";
				defaultValue = 1;
			};
			class RespawnPosition: Checkbox //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Checkbox, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Respawn on object for";
				property = "ModuleCuratorSetAttributesObject_F_RespawnPosition";
				defaultValue = 1;
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments //sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				description = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				defaultValue = "''";
			};
			class GroupID //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Callsign";
				description = "";
				typeName = "BOOL";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Enabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Enabled";
						value = 1;
						default = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
			class Formation //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Formation:";
				description = "";
				typeName = "BOOL";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Enabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Enabled";
						value = 1;
						default = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
			class Behaviour //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Combat mode:";
				description = "";
				typeName = "BOOL";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Enabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Enabled";
						value = 1;
						default = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
			class SpeedMode //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Speed:";
				description = "";
				typeName = "BOOL";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Enabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Enabled";
						value = 1;
						default = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
			class UnitPos //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Stance";
				description = "";
				typeName = "BOOL";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Enabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Enabled";
						value = 1;
						default = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
			class Skill //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Skill:";
				description = "";
				typeName = "BOOL";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Enabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Enabled";
						value = 1;
						default = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
			class RespawnPosition //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Respawn on object for";
				description = "";
				typeName = "BOOL";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Enabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Enabled";
						value = 1;
						default = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 3 parameters from bin\config.bin/CfgVehicles/ModuleCuratorSetAttributesObject_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Curator"]
		{
			description = "Set which attributes are available for groups. The attribute window is accessed when Zeus double-clicks LMB on a group.";
		};
	};
	class ModuleCuratorSetAttributesWaypoint_F: ModuleCuratorSetAttributesObject_F //inherits 12 parameters from bin\config.bin/CfgVehicles/ModuleCuratorSetAttributesObject_F, sources - ["A3_Modules_F_Curator_Curator"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCuratorSetAttributesWaypoint_F";
		displayName = "Set Attributes - Waypoints";
		curatorAttributeType = "waypoint";
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				tooltip = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				property = "ModuleCuratorSetAttributesWaypoint_F_Curator";
			};
			class WaypointType: Checkbox //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Checkbox, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Select type:";
				property = "ModuleCuratorSetAttributesWaypoint_F_WaypointType";
				defaultValue = 1;
			};
			class Formation: Checkbox //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Checkbox, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Formation:";
				property = "ModuleCuratorSetAttributesWaypoint_F_Formation";
				defaultValue = 1;
			};
			class Behaviour: Checkbox //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Checkbox, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Combat mode:";
				property = "ModuleCuratorSetAttributesWaypoint_F_Behaviour";
				defaultValue = 1;
			};
			class SpeedMode: Checkbox //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Checkbox, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Speed:";
				property = "ModuleCuratorSetAttributesWaypoint_F_SpeedMode";
				defaultValue = 1;
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments //sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				description = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				defaultValue = "''";
			};
			class WaypointType //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Select type:";
				description = "";
				typeName = "BOOL";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Enabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Enabled";
						value = 1;
						default = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
			class Formation //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Formation:";
				description = "";
				typeName = "BOOL";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Enabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Enabled";
						value = 1;
						default = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
			class Behaviour //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Combat mode:";
				description = "";
				typeName = "BOOL";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Enabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Enabled";
						value = 1;
						default = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
			class SpeedMode //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Speed:";
				description = "";
				typeName = "BOOL";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Enabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Enabled";
						value = 1;
						default = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 3 parameters from bin\config.bin/CfgVehicles/ModuleCuratorSetAttributesObject_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Curator"]
		{
			description = "Set which attributes are available for waypoints. The attribute window is accessed when Zeus double-clicks LMB on a waypoint.";
		};
	};
	class ModuleCuratorSetAttributesMarker_F: ModuleCuratorSetAttributesObject_F //inherits 12 parameters from bin\config.bin/CfgVehicles/ModuleCuratorSetAttributesObject_F, sources - ["A3_Modules_F_Curator_Curator"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCuratorSetAttributesMarker_F";
		displayName = "Set Attributes - Markers";
		curatorAttributeType = "marker";
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				tooltip = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				property = "ModuleCuratorSetAttributesMarker_F_Curator";
			};
			class MarkerText: Checkbox //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Checkbox, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Text:";
				property = "ModuleCuratorSetAttributesMarker_F_MarkerText";
				defaultValue = 1;
			};
			class MarkerColor: Checkbox //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Checkbox, sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Color:";
				property = "ModuleCuratorSetAttributesMarker_F_MarkerColor";
				defaultValue = 1;
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class Arguments //sources - ["A3_Modules_F_Curator_Curator"]
		{
			class Curator //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Assigned Zeus";
				description = "Variable name of 'Zeus' modules. Works together with synchronized Zeus modules.";
				defaultValue = "''";
			};
			class MarkerText //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Text:";
				description = "";
				typeName = "BOOL";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Enabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Enabled";
						value = 1;
						default = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
			class MarkerColor //sources - ["A3_Modules_F_Curator_Curator"]
			{
				displayName = "Color:";
				description = "";
				typeName = "BOOL";
				class values //sources - ["A3_Modules_F_Curator_Curator"]
				{
					class Enabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Enabled";
						value = 1;
						default = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Curator_Curator"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 3 parameters from bin\config.bin/CfgVehicles/ModuleCuratorSetAttributesObject_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Curator"]
		{
			description = "Set which attributes are available for markers. The attribute window is accessed when Zeus double-clicks LMB on a marker.";
		};
	};
	class ModulePostprocess_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Effects"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModulePostprocess_F";
		scope = 2;
		scopeCurator = 2;
		isTriggerActivated = 1;
		category = "Environment";
		displayName = "Post-Process";
		function = "BIS_fnc_modulePostprocess";
		icon = "\a3\Modules_F_Curator\Data\iconPostprocess_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitPostprocess_ca.paa";
		curatorInfoType = "RscDisplayAttributesModulePostprocess";
		class Arguments //sources - ["A3_Modules_F_Curator_Effects"]
		{
			class Template //sources - ["A3_Modules_F_Curator_Effects"]
			{
				displayName = "Template";
				description = "";
				class Values //sources - ["A3_Modules_F_Curator_Effects"]
				{
					class Default //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "None";
						value = "Default";
						default = 1;
					};
					class Survive //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "The East Wind";
						value = "Survive";
						default = 0;
					};
					class RealIsBrown //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "'Real is Brown'";
						value = "RealIsBrown";
						default = 0;
					};
					class BlackAndWhite //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "Black and White";
						value = "BlackAndWhite";
						default = 0;
					};
					class Mediterranean //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "Mediterranean";
						value = "Mediterranean";
						default = 0;
					};
				};
			};
			class CommitTime //sources - ["A3_Modules_F_Curator_Effects"]
			{
				displayName = "Commit time";
				description = "";
				typeName = "NUMBER";
				defaultValue = 0;
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Effects"]
		{
			description = "Set a scene Post-Processing effect (e.g. color correction or film grain)";
		};
	};
	class ModuleSound_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Effects"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleSound_F";
		scope = 1;
		scopeCurator = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		category = "Audio";
		displayName = "Play Sound";
		function = "BIS_fnc_moduleSFX";
		icon = "\a3\Modules_F_Curator\Data\iconSound_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitSound_ca.paa";
		curatorInfoType = "RscDisplayAttributesModuleSound";
	};
	class ModuleMusic_F: ModuleSound_F //inherits 12 parameters from bin\config.bin/CfgVehicles/ModuleSound_F, sources - ["A3_Modules_F_Curator_Effects"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleMusic_F";
		displayName = "Play Music";
		portrait = "\a3\Modules_F_Curator\Data\portraitMusic_ca.paa";
		curatorInfoType = "RscDisplayAttributesModuleMusic";
		function = "BIS_fnc_moduleSound";
	};
	class ModuleRadio_F: ModuleSound_F //inherits 12 parameters from bin\config.bin/CfgVehicles/ModuleSound_F, sources - ["A3_Modules_F_Curator_Effects"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleRadio_F";
		scope = 2;
		displayName = "Play Radio Message";
		icon = "\a3\Modules_F_Curator\Data\iconRadio_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitRadio_ca.paa";
		curatorInfoType = "RscDisplayAttributesModuleRadio";
		function = "BIS_fnc_moduleSound";
		class Arguments //sources - ["A3_Modules_F_Curator_Effects"]
		{
			class Side //sources - ["A3_Modules_F_Curator_Effects"]
			{
				displayName = "Side";
				description = "";
				typeName = "NUMBER";
				class values //sources - ["A3_Modules_F_Curator_Effects"]
				{
					class BLUFOR //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "BLUFOR";
						value = 1;
						default = 1;
					};
					class OPFOR //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "OPFOR";
						value = 0;
					};
					class Resistance //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "Independent";
						value = 2;
					};
					class Civilian //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "Civilian";
						value = 3;
					};
				};
			};
			class RscAttributeRadio //sources - ["A3_Modules_F_Curator_Effects"]
			{
				displayName = "Sentence";
				class values //sources - ["A3_Modules_F_Curator_Effects"]
				{
					class SentGenReinforcementsConfirmed //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "Reinforcements en route.";
						value = "SentGenReinforcementsConfirmed";
					};
					class SentGenReinforcementsRejected //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "Reinforcements unavailable.";
						value = "SentGenReinforcementsRejected";
					};
					class SentGenReinforcementsArrived //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "Reinforcements have arrived.";
						value = "SentGenReinforcementsArrived";
					};
					class SentGenLeavingAO //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "You are leaving the Area of Operations.";
						value = "SentGenLeavingAO";
					};
					class SentGenTime //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "Time is running out!";
						value = "SentGenTime";
					};
					class SentGenLosing //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "Stop the enemy!";
						value = "SentGenLosing";
					};
					class SentGenLost //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "Objective failed.";
						value = "SentGenLost";
					};
					class SentGenComplete //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "Objective complete.";
						value = "SentGenComplete";
					};
					class SentGenCmdSeize //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "Seize the area.";
						value = "SentGenCmdSeize";
					};
					class SentGenCmdDefend //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "Defend the location.";
						value = "SentGenCmdDefend";
					};
					class SentGenCmdRTB //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "Return back to base.";
						value = "SentGenCmdRTB";
					};
					class SentGenCmdTargetNeutralize //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "Neutralize the target.";
						value = "SentGenCmdTargetNeutralize";
					};
					class SentGenCmdTargetProtect //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "Protect the target.";
						value = "SentGenCmdTargetProtect";
					};
					class SentGenCmdTargetEscort //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "Escort the target.";
						value = "SentGenCmdTargetEscort";
					};
					class SentGenCmdTargetFind //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "Find the target.";
						value = "SentGenCmdTargetFind";
					};
					class SentGenIncoming //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "Incoming enemy fire!";
						value = "SentGenIncoming";
					};
					class SentGenBaseUnlockRespawn //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "New insertion point available.";
						value = "SentGenBaseUnlockRespawn";
					};
					class SentGenBaseUnlockVehicle //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "New vehicle deployed.";
						value = "SentGenBaseUnlockVehicle";
					};
					class SentGenBaseSideFriendlyWEST //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "BLUFOR is friendly.";
						value = "SentGenBaseSideFriendlyWEST";
					};
					class SentGenBaseSideFriendlyEAST //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "OPFOR is friendly.";
						value = "SentGenBaseSideFriendlyEAST";
					};
					class SentGenBaseSideFriendlyGUER //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "Independent forces are friendly.";
						value = "SentGenBaseSideFriendlyGUER";
					};
					class SentGenBaseSideEnemyWEST //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "BLUFOR is enemy.";
						value = "SentGenBaseSideEnemyWEST";
					};
					class SentGenBaseSideEnemyEAST //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "OPFOR is enemy.";
						value = "SentGenBaseSideEnemyEAST";
					};
					class SentGenBaseSideEnemyGUER //sources - ["A3_Modules_F_Curator_Effects"]
					{
						name = "Independent forces are enemy.";
						value = "SentGenBaseSideEnemyGUER";
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Effects"]
		{
			description = "Show a chat message.";
		};
	};
	class ModuleIRGrenade_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Effects"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleIRGrenade_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "IR Grenade";
		portrait = "\a3\Modules_F_Curator\Data\portraitIRGrenade_ca.paa";
		category = "Effects";
		function = "BIS_fnc_moduleGrenade";
		is3DEN = 1;
		ammo = "O_IRStrobe";
	};
	class ModuleTimeMultiplier_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Environment"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleTimeMultiplier_F";
		scope = 2;
		scopeCurator = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		category = "Environment";
		displayName = "Time acceleration";
		icon = "\a3\Modules_F_Curator\Data\iconTimeAcceleration_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitTimeAcceleration_ca.paa";
		function = "BIS_fnc_moduleTimeMultiplier";
		curatorInfoType = "RscDisplayAttributesModuleTimeMultiplier";
		class Arguments //sources - ["A3_Modules_F_Curator_Environment"]
		{
			class TimeMultiplier //sources - ["A3_Modules_F_Curator_Environment"]
			{
				displayName = "Time acceleration";
				typeName = "NUMBER";
				defaultValue = 1;
			};
		};
	};
	class ModuleFlare_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Flares"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleFlare_F";
		scope = 2;
		category = "Effects";
		function = "BIS_fnc_moduleProjectile";
		isGlobal = 0;
		isTriggerActivated = 1;
		displayName = "Flare";
		icon = "\a3\Modules_F_Curator\Data\iconFlare_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitFlare_ca.paa";
		class Arguments //sources - ["A3_Modules_F_Curator_Flares"]
		{
			class Type //sources - ["A3_Modules_F_Curator_Flares"]
			{
				displayName = "Color";
				description = "Smoke color";
				class values //sources - ["A3_Modules_F_Curator_Flares"]
				{
					class White //sources - ["A3_Modules_F_Curator_Flares"]
					{
						name = "White Flare";
						value = "F_40mm_White";
						default = 1;
					};
					class Yellow //sources - ["A3_Modules_F_Curator_Flares"]
					{
						name = "Yellow Flare";
						value = "F_40mm_Yellow";
					};
					class Green //sources - ["A3_Modules_F_Curator_Flares"]
					{
						name = "Green Flare";
						value = "F_40mm_Green";
					};
					class Red //sources - ["A3_Modules_F_Curator_Flares"]
					{
						name = "Red Flare";
						value = "F_40mm_Red";
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Flares"]
		{
			description = "Creates a signal flare on the module position (visible only at night).";
			position = 1;
		};
	};
	class ModuleFlareWhite_F: ModuleFlare_F //inherits 12 parameters from bin\config.bin/CfgVehicles/ModuleFlare_F, sources - ["A3_Modules_F_Curator_Flares"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleFlareWhite_F";
		scope = 1;
		scopeCurator = 2;
		category = "Flares";
		displayName = "White Flare";
		portrait = "\a3\Modules_F_Curator\Data\portraitFlareWhite_ca.paa";
		ammo = "F_40mm_White";
	};
	class ModuleFlareYellow_F: ModuleFlareWhite_F //inherits 8 parameters from bin\config.bin/CfgVehicles/ModuleFlareWhite_F, sources - ["A3_Modules_F_Curator_Flares"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleFlareYellow_F";
		displayName = "Yellow Flare";
		portrait = "\a3\Modules_F_Curator\Data\portraitFlareYellow_ca.paa";
		ammo = "F_40mm_Yellow";
	};
	class ModuleFlareGreen_F: ModuleFlareWhite_F //inherits 8 parameters from bin\config.bin/CfgVehicles/ModuleFlareWhite_F, sources - ["A3_Modules_F_Curator_Flares"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleFlareGreen_F";
		displayName = "Green Flare";
		portrait = "\a3\Modules_F_Curator\Data\portraitFlareGreen_ca.paa";
		ammo = "F_40mm_Green";
	};
	class ModuleFlareRed_F: ModuleFlareWhite_F //inherits 8 parameters from bin\config.bin/CfgVehicles/ModuleFlareWhite_F, sources - ["A3_Modules_F_Curator_Flares"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleFlareRed_F";
		displayName = "Red Flare";
		portrait = "\a3\Modules_F_Curator\Data\portraitFlareRed_ca.paa";
		ammo = "F_40mm_Red";
	};
	class ModuleDiary_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Intel"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleDiary_F";
		scope = 1;
		scopeCurator = 2;
		isGlobal = 2;
		isTriggerActivated = 1;
		category = "MissionFlow";
		displayName = "Briefing";
		icon = "\a3\Modules_F_Curator\Data\iconDiary_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitDiary_ca.paa";
		function = "BIS_fnc_moduleDiary";
		curatorInfoType = "RscDisplayAttributesModuleDiary";
	};
	class ModuleEndMission_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Intel"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleEndMission_F";
		scope = 2;
		scopeCurator = 2;
		isTriggerActivated = 1;
		category = "MissionFlow";
		displayName = "End Scenario";
		icon = "\a3\Modules_F_Curator\Data\iconEndMission_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitEndMission_ca.paa";
		function = "BIS_fnc_moduleEndMission";
		curatorInfoType = "RscDisplayAttributesModuleEndMission";
		curatorCost = 0;
		class Arguments //sources - ["A3_Modules_F_Curator_Intel"]
		{
			class Type //sources - ["A3_Modules_F_Curator_Intel"]
			{
				displayName = "Type";
				class values //sources - ["A3_Modules_F_Curator_Intel"]
				{
					class Won //sources - ["A3_Modules_F_Curator_Intel"]
					{
						name = "Mission Completed";
						value = "EveryoneWon";
						default = 1;
					};
					class Lost //sources - ["A3_Modules_F_Curator_Intel"]
					{
						name = "Mission Failed";
						value = "EveryoneLost";
					};
					class SideScore //sources - ["A3_Modules_F_Curator_Intel"]
					{
						name = "Side with the best score wins";
						value = "SideScore";
					};
					class GroupScore //sources - ["A3_Modules_F_Curator_Intel"]
					{
						name = "Group with the best score wins";
						value = "GroupScore";
					};
					class PlayerScore //sources - ["A3_Modules_F_Curator_Intel"]
					{
						name = "Player with the best score wins";
						value = "PlayerScore";
					};
				};
			};
			class TypeCustom //sources - ["A3_Modules_F_Curator_Intel"]
			{
				displayName = "Custom Type";
				description = "Custom CfgDebriefing class, which will overwrite the predefined Type above";
			};
			class Win //sources - ["A3_Modules_F_Curator_Intel"]
			{
				displayName = "Custom Status";
				description = "Custom ending status. A failed scenario will be shown in orange text and will let the player load a saved game.";
				typeName = "BOOL";
				class values //sources - ["A3_Modules_F_Curator_Intel"]
				{
					class Win //sources - ["A3_Modules_F_Curator_Intel"]
					{
						name = "Completed";
						value = 1;
						default = 1;
					};
					class Lose //sources - ["A3_Modules_F_Curator_Intel"]
					{
						name = "Failed";
						value = 0;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Intel"]
		{
			description = "End the scenario for all players.";
			position = 1;
		};
	};
	class ModuleMissionName_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Intel"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleMissionName_F";
		scope = 2;
		scopeCurator = 2;
		isGlobal = 2;
		category = "MissionFlow";
		displayName = "Scenario Name";
		icon = "\a3\Modules_F_Curator\Data\iconMissionName_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitMissionName_ca.paa";
		function = "BIS_fnc_moduleMissionName";
		curatorInfoType = "RscDisplayAttributesModuleMissionName";
		curatorCost = 0;
		class Arguments //sources - ["A3_Modules_F_Curator_Intel"]
		{
			class Name //sources - ["A3_Modules_F_Curator_Intel"]
			{
				displayName = "Name";
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Intel"]
		{
			description = "Set the scenario name. It's shown to every player upon joining and after each respawn.";
		};
	};
	class ModuleLightning_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Lightning"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleLightning_F";
		scope = 2;
		scopeCurator = 2;
		category = "Curator";
		displayName = "Zeus Lightning Bolt";
		icon = "\a3\Modules_F_Curator\Data\iconLightning_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitLightning_ca.paa";
		function = "BIS_fnc_moduleLightning";
		isGlobal = 1;
		isTriggerActivated = 1;
		curatorCanAttach = 1;
		curatorCost = 10;
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Lightning"]
		{
			description = "Creates a lightning strike powerful enough to destroy an object where it impacts.";
			position = 1;
		};
	};
	class ModuleMine_F: ModuleEmpty_F //inherits 13 parameters from bin\config.bin/CfgVehicles/ModuleEmpty_F, sources - ["A3_Modules_F_Curator_Mines"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleMine_F";
		scope = 1;
		scopeCurator = 0;
		faction = "Interactive_F";
		vehicleClass = "Mines";
		function = "BIS_fnc_moduleMine";
	};
	class ModuleMine_ATMine_F: ModuleMine_F //inherits 7 parameters from bin\config.bin/CfgVehicles/ModuleMine_F, sources - ["A3_Modules_F_Curator_Mines"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleMine_ATMine_F";
		scopeCurator = 2;
		displayName = "AT Mine";
		explosive = "ATMine_Range_Ammo";
		icon = "iconExplosiveAT";
		curatorCost = 1.5;
	};
	class ModuleMine_APERSMine_F: ModuleMine_F //inherits 7 parameters from bin\config.bin/CfgVehicles/ModuleMine_F, sources - ["A3_Modules_F_Curator_Mines"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleMine_APERSMine_F";
		scopeCurator = 2;
		displayName = "APERS Mine";
		explosive = "APERSMine_Range_Ammo";
		icon = "iconExplosiveAP";
	};
	class ModuleMine_APERSBoundingMine_F: ModuleMine_F //inherits 7 parameters from bin\config.bin/CfgVehicles/ModuleMine_F, sources - ["A3_Modules_F_Curator_Mines"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleMine_APERSBoundingMine_F";
		scopeCurator = 2;
		displayName = "APERS Bounding Mine";
		explosive = "APERSBoundingMine_Range_Ammo";
		icon = "iconExplosiveAP";
	};
	class ModuleMine_SLAMDirectionalMine_F: ModuleMine_F //inherits 7 parameters from bin\config.bin/CfgVehicles/ModuleMine_F, sources - ["A3_Modules_F_Curator_Mines"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleMine_SLAMDirectionalMine_F";
		scopeCurator = 2;
		displayName = "M6 SLAM Mine";
		explosive = "SLAMDirectionalMine_Wire_Ammo";
		icon = "iconExplosiveAPDirectional";
	};
	class ModuleMine_APERSTripMine_F: ModuleMine_F //inherits 7 parameters from bin\config.bin/CfgVehicles/ModuleMine_F, sources - ["A3_Modules_F_Curator_Mines"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleMine_APERSTripMine_F";
		scopeCurator = 2;
		displayName = "APERS Tripwire Mine";
		explosive = "APERSTripMine_Wire_Ammo";
		icon = "iconExplosiveAP";
	};
	class ModuleMine_UnderwaterMine_F: ModuleMine_F //inherits 7 parameters from bin\config.bin/CfgVehicles/ModuleMine_F, sources - ["A3_Modules_F_Curator_Mines"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleMine_UnderwaterMine_F";
		scopeCurator = 2;
		displayName = "Naval Mine (Moored)";
		explosive = "UnderwaterMine_Range_Ammo";
		icon = "iconExplosiveUW";
	};
	class ModuleMine_UnderwaterMineAB_F: ModuleMine_F //inherits 7 parameters from bin\config.bin/CfgVehicles/ModuleMine_F, sources - ["A3_Modules_F_Curator_Mines"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleMine_UnderwaterMineAB_F";
		scopeCurator = 2;
		displayName = "Naval Mine (Bottom)";
		explosive = "UnderwaterMineAB_Range_Ammo";
		icon = "iconExplosiveUW";
	};
	class ModuleMine_UnderwaterMinePDM_F: ModuleMine_F //inherits 7 parameters from bin\config.bin/CfgVehicles/ModuleMine_F, sources - ["A3_Modules_F_Curator_Mines"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleMine_UnderwaterMinePDM_F";
		scopeCurator = 2;
		displayName = "PDM-7";
		explosive = "UnderwaterMinePDM_Range_Ammo";
		icon = "iconExplosiveUW";
	};
	class ModuleExplosive_F: ModuleMine_F //inherits 7 parameters from bin\config.bin/CfgVehicles/ModuleMine_F, sources - ["A3_Modules_F_Curator_Mines"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleExplosive_F";
		vehicleClass = "Explosives";
		curatorCost = 1.5;
	};
	class ModuleExplosive_SatchelCharge_F: ModuleExplosive_F //inherits 4 parameters from bin\config.bin/CfgVehicles/ModuleExplosive_F, sources - ["A3_Modules_F_Curator_Mines"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleExplosive_SatchelCharge_F";
		scopeCurator = 2;
		displayName = "Explosive Satchel";
		explosive = "SatchelCharge_Remote_Ammo_Scripted";
		icon = "iconExplosiveGP";
	};
	class ModuleExplosive_DemoCharge_F: ModuleExplosive_F //inherits 4 parameters from bin\config.bin/CfgVehicles/ModuleExplosive_F, sources - ["A3_Modules_F_Curator_Mines"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleExplosive_DemoCharge_F";
		scopeCurator = 2;
		displayName = "Explosive Charge";
		explosive = "DemoCharge_Remote_Ammo_Scripted";
		icon = "iconExplosiveGP";
	};
	class ModuleExplosive_Claymore_F: ModuleExplosive_F //inherits 4 parameters from bin\config.bin/CfgVehicles/ModuleExplosive_F, sources - ["A3_Modules_F_Curator_Mines"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleExplosive_Claymore_F";
		scopeCurator = 2;
		displayName = "Claymore Charge";
		explosive = "ClaymoreDirectionalMine_Remote_Ammo_Scripted";
		icon = "iconExplosiveAPDirectional";
	};
	class ModuleExplosive_IEDUrbanBig_F: ModuleExplosive_F //inherits 4 parameters from bin\config.bin/CfgVehicles/ModuleExplosive_F, sources - ["A3_Modules_F_Curator_Mines"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleExplosive_IEDUrbanBig_F";
		scopeCurator = 2;
		displayName = "Large IED (Urban)";
		explosive = "IEDUrbanBig_Remote_Ammo";
		icon = "iconExplosiveGP";
	};
	class ModuleExplosive_IEDLandBig_F: ModuleExplosive_F //inherits 4 parameters from bin\config.bin/CfgVehicles/ModuleExplosive_F, sources - ["A3_Modules_F_Curator_Mines"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleExplosive_IEDLandBig_F";
		scopeCurator = 2;
		displayName = "Large IED (Dug-in)";
		explosive = "IEDLandBig_Remote_Ammo";
		icon = "iconExplosiveGP";
	};
	class ModuleExplosive_IEDUrbanSmall_F: ModuleExplosive_F //inherits 4 parameters from bin\config.bin/CfgVehicles/ModuleExplosive_F, sources - ["A3_Modules_F_Curator_Mines"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleExplosive_IEDUrbanSmall_F";
		scopeCurator = 2;
		displayName = "Small IED (Urban)";
		explosive = "IEDUrbanSmall_Remote_Ammo";
		icon = "iconExplosiveGP";
	};
	class ModuleExplosive_IEDLandSmall_F: ModuleExplosive_F //inherits 4 parameters from bin\config.bin/CfgVehicles/ModuleExplosive_F, sources - ["A3_Modules_F_Curator_Mines"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleExplosive_IEDLandSmall_F";
		scopeCurator = 2;
		displayName = "Small IED (Dug-in)";
		explosive = "IEDLandSmall_Remote_Ammo";
		icon = "iconExplosiveGP";
	};
	class ModuleCoverMap_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Misc"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCoverMap_F";
		scope = 2;
		displayName = "Cover Map";
		isGlobal = 0;
		isTriggerActivated = 1;
		canSetArea = 1;
		function = "BIS_fnc_moduleCoverMap";
		class AttributeValues //sources - ["A3_Modules_F_Curator_Misc"]
		{
			size3[] = {500, 500, -1};
			IsRectangle = 1;
		};
		class Arguments //sources - []
		{
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Misc"]
		{
			description = "Highlight an Area of Operations in the map by enclosing it and covering the unused part.";
			sync[] = {"LocationArea_F"};
			class LocationArea_F //sources - ["A3_Modules_F_Curator_Misc"]
			{
				description = "";
				duplicate = 1;
				sync[] = {"TriggerArea"};
			};
			class TriggerArea: EmptyDetector //inherits 5 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription/EmptyDetector, sources - ["A3_Modules_F_Curator_Misc"]
			{
				position = 1;
				area = 1;
				description = "Determines Area of Operations.";
			};
		};
	};
	class ModuleRadioChannelCreate_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Misc"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleRadioChannelCreate_F";
		scope = 2;
		displayName = "Create Radio Channel";
		icon = "\a3\Modules_F_Curator\Data\iconRadioChannelCreate_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitRadioChannelCreate_ca.paa";
		isTriggerActivated = 1;
		isGlobal = 2;
		function = "BIS_fnc_moduleRadioChannelCreate";
		class Arguments //sources - ["A3_Modules_F_Curator_Misc"]
		{
			class Name //sources - ["A3_Modules_F_Curator_Misc"]
			{
				displayName = "Name";
				defaultValue = "";
			};
			class Callsign //sources - ["A3_Modules_F_Curator_Misc"]
			{
				displayName = "Callsign";
				defaultValue = "";
			};
			class Color //sources - ["A3_Modules_F_Curator_Misc"]
			{
				displayName = "Color (RGBA)";
				defaultValue = "[1,1,1,1]";
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Misc"]
		{
			description = "Creates a custom radio channel for the given sides / Zeus players.";
			sync[] = {"ModuleCurator_F", "SideBLUFOR_F", "SideOPFOR_F", "SideResistance_F"};
			class ModuleCurator_F //sources - ["A3_Modules_F_Curator_Misc"]
			{
				optional = 1;
			};
			class SideBLUFOR_F //sources - ["A3_Modules_F_Curator_Misc"]
			{
				optional = 1;
			};
			class SideOPFOR_F //sources - ["A3_Modules_F_Curator_Misc"]
			{
				optional = 1;
			};
			class SideResistance_F //sources - ["A3_Modules_F_Curator_Misc"]
			{
				optional = 1;
			};
		};
	};
	class ModuleRemoteControl_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Misc"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleRemoteControl_F";
		scope = 1;
		scopeCurator = 2;
		isGlobal = 1;
		category = "Curator";
		displayName = "Remote Control";
		function = "BIS_fnc_moduleRemoteControl";
		portrait = "\a3\Modules_F_Curator\Data\portraitRemoteControl_ca.paa";
		curatorCost = 3;
	};
	class ModuleZoneProtection_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Multiplayer"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleZoneProtection_F";
		scope = 2;
		category = "MissionFlow";
		displayName = "Zone Protection";
		isGlobal = 2;
		isTriggerActivated = 1;
		function = "BIS_fnc_moduleZoneProtection";
		class Arguments //sources - ["A3_Modules_F_Curator_Multiplayer"]
		{
			class Show //sources - ["A3_Modules_F_Curator_Multiplayer"]
			{
				displayName = "Show on map";
				description = "Draw a dashed line around the zone.";
				typeName = "BOOL";
				class values //sources - ["A3_Modules_F_Curator_Multiplayer"]
				{
					class Enabled //sources - ["A3_Modules_F_Curator_Multiplayer"]
					{
						name = "Enabled";
						value = 1;
						default = 1;
					};
					class Disabled //sources - ["A3_Modules_F_Curator_Multiplayer"]
					{
						name = "Disabled";
						value = 0;
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Multiplayer"]
		{
			description = "Prevents players from entering the given area.";
			sync[] = {"LocationArea_F"};
			class LocationArea_F //sources - ["A3_Modules_F_Curator_Multiplayer"]
			{
				description = "";
				duplicate = 1;
				sync[] = {"TriggerArea"};
			};
			class TriggerArea: EmptyDetector //inherits 5 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription/EmptyDetector, sources - ["A3_Modules_F_Curator_Multiplayer"]
			{
				position = 1;
				area = 1;
				description = "Determines area size. The side set in trigger activation can optionally define which side cannot enter the area (default 'None' means all sides are restricted).";
			};
		};
	};
	class ModuleCountdown_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Multiplayer"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCountdown_F";
		scope = 2;
		scopeCurator = 2;
		category = "MissionFlow";
		displayName = "Countdown";
		icon = "\a3\Modules_F_Curator\Data\iconCountdown_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitCountdown_ca.paa";
		function = "BIS_fnc_moduleCountdown";
		isTriggerActivated = 1;
		curatorInfoType = "RscDisplayAttributesModuleCountdown";
		class Arguments //sources - ["A3_Modules_F_Curator_Multiplayer"]
		{
			class Value //sources - ["A3_Modules_F_Curator_Multiplayer"]
			{
				displayName = "Remaining time";
				description = "Time until the end in seconds. Use variable '_this' to get the current value. Leave the field empty to cancel the countdown.";
				defaultValue = "";
			};
			class Type //sources - ["A3_Modules_F_Curator_Multiplayer"]
			{
				displayName = "End type after countdown gets to 0";
				class values //sources - ["A3_Modules_F_Curator_Multiplayer"]
				{
					class Won //sources - ["A3_Modules_F_Curator_Multiplayer"]
					{
						name = "Mission Completed";
						value = "EveryoneWon";
						default = 1;
					};
					class Lost //sources - ["A3_Modules_F_Curator_Multiplayer"]
					{
						name = "Mission Failed";
						value = "EveryoneLost";
					};
					class SideScore //sources - ["A3_Modules_F_Curator_Multiplayer"]
					{
						name = "Side with the best score wins";
						value = "SideScore";
					};
					class GroupScore //sources - ["A3_Modules_F_Curator_Multiplayer"]
					{
						name = "Group with the best score wins";
						value = "GroupScore";
					};
					class PlayerScore //sources - ["A3_Modules_F_Curator_Multiplayer"]
					{
						name = "Player with the best score wins";
						value = "PlayerScore";
					};
				};
			};
		};
	};
	class ModuleRespawnTickets_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Multiplayer"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleRespawnTickets_F";
		scope = 2;
		scopeCurator = 2;
		category = "MissionFlow";
		displayName = "Respawn Tickets";
		icon = "\a3\Modules_F_Curator\Data\iconRespawnTickets_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitRespawnTickets_ca.paa";
		function = "BIS_fnc_moduleRespawnTickets";
		isTriggerActivated = 1;
		curatorInfoType = "RscDisplayAttributesModuleRespawnTickets";
		class Arguments //sources - ["A3_Modules_F_Curator_Multiplayer"]
		{
			class WEST //sources - ["A3_Modules_F_Curator_Multiplayer"]
			{
				displayName = "BLUFOR";
				description = "Set the amount of respawn tickets. Use variable '_this' to get the current value.";
				defaultValue = "";
			};
			class EAST: WEST //inherits 3 parameters from bin\config.bin/CfgVehicles/ModuleRespawnTickets_F/Arguments/WEST, sources - ["A3_Modules_F_Curator_Multiplayer"]
			{
				displayName = "OPFOR";
			};
			class GUER: WEST //inherits 3 parameters from bin\config.bin/CfgVehicles/ModuleRespawnTickets_F/Arguments/WEST, sources - ["A3_Modules_F_Curator_Multiplayer"]
			{
				displayName = "Independent";
			};
			class CIV: WEST //inherits 3 parameters from bin\config.bin/CfgVehicles/ModuleRespawnTickets_F/Arguments/WEST, sources - ["A3_Modules_F_Curator_Multiplayer"]
			{
				displayName = "Civilian";
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Multiplayer"]
		{
			description = "Set the number of respawn tickets available to each side.";
		};
	};
	class ModuleBleedTickets_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Multiplayer"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleBleedTickets_F";
		scope = 2;
		category = "MissionFlow";
		displayName = "Bleed Tickets";
		function = "BIS_fnc_moduleBleedTickets";
		isTriggerActivated = 1;
		class Arguments //sources - ["A3_Modules_F_Curator_Multiplayer"]
		{
			class ticketBleedRatio //sources - ["A3_Modules_F_Curator_Multiplayer"]
			{
				displayName = "Dominance ratio";
				description = "Ratio in range 0-1, i.e. what portion of sectors must a side hold for others to start bleeding";
				defaultValue = 0.5;
				typeName = "NUMBER";
			};
			class delay //sources - ["A3_Modules_F_Curator_Multiplayer"]
			{
				displayName = "Delay";
				description = "Delay in seconds between every bleeding step";
				defaultValue = 5;
				typeName = "NUMBER";
			};
			class ticketBleedMax //sources - ["A3_Modules_F_Curator_Multiplayer"]
			{
				displayName = "Tickets";
				description = "The amount of tickets to be bled every step during full dominance";
				defaultValue = 3;
				typeName = "NUMBER";
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Multiplayer"]
		{
			description = "Allow ticket bleeding when one side is holding the majority of sectors.";
			duplicate = 0;
			sync[] = {"SideBLUFOR_F", "SideOPFOR_F", "SideResistance_F"};
			class SideBLUFOR_F //sources - ["A3_Modules_F_Curator_Multiplayer"]
			{
				description = "Mark the side as competing for the sector. At least one side has to be present.";
				sync[] = {};
			};
			class SideOPFOR_F //sources - ["A3_Modules_F_Curator_Multiplayer"]
			{
				description = "Mark the side as competing for the sector. At least one side has to be present.";
				sync[] = {};
			};
			class SideResistance_F //sources - ["A3_Modules_F_Curator_Multiplayer"]
			{
				description = "Mark the side as competing for the sector. At least one side has to be present.";
				sync[] = {};
			};
		};
	};
	class LogicSectorBase_F: Logic //inherits 15 parameters from bin\config.bin/CfgVehicles/Logic, sources - ["A3_Modules_F_Curator_Multiplayer"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "LogicSectorBase_F";
		scope = 1;
		simulation = "house";
		class EventHandlers //sources - ["A3_Modules_F_Curator_Multiplayer"]
		{
			init = "				(_this select 0) hideobject true;				_this spawn {					_logic = _this select 0;					waituntil {!isnull (attachedto _logic) || isnull _logic};					if ({local _x} count (objectcurators (attachedto _logic)) > 0 && !isnull curatorcamera) then {						_logic hideobject false;						_logic setpos position _logic;					};				};			";
		};
	};
	class LogicSectorPreview100m_F: LogicSectorBase_F //inherits 5 parameters from bin\config.bin/CfgVehicles/LogicSectorBase_F, sources - ["A3_Modules_F_Curator_Multiplayer"]
	{
		_generalMacro = "LogicSectorPreview100m_F";
		displayName = "Sector 100m Preview";
		model = "\a3\Modules_F_Curator\Multiplayer\surfaceSectorPreview100m.p3d";
	};
	class LogicSectorPreview200m_F: LogicSectorBase_F //inherits 5 parameters from bin\config.bin/CfgVehicles/LogicSectorBase_F, sources - ["A3_Modules_F_Curator_Multiplayer"]
	{
		_generalMacro = "LogicSectorPreview200m_F";
		displayName = "Sector 200m Preview";
		model = "\a3\Modules_F_Curator\Multiplayer\surfaceSectorPreview200m.p3d";
	};
	class LogicSectorPreview500m_F: LogicSectorBase_F //inherits 5 parameters from bin\config.bin/CfgVehicles/LogicSectorBase_F, sources - ["A3_Modules_F_Curator_Multiplayer"]
	{
		_generalMacro = "LogicSectorPreview500m_F";
		displayName = "Sector 500m Preview";
		model = "\a3\Modules_F_Curator\Multiplayer\surfaceSectorPreview500m.p3d";
	};
	class LogicSectorUnknown100m_F: LogicSectorBase_F //inherits 5 parameters from bin\config.bin/CfgVehicles/LogicSectorBase_F, sources - ["A3_Modules_F_Curator_Multiplayer"]
	{
		_generalMacro = "LogicSectorUnknown100m_F";
		displayName = "Sector 100m Unknown";
		model = "\a3\Modules_F_Curator\Multiplayer\surfaceSectorUnknown100m.p3d";
	};
	class LogicSectorUnknown200m_F: LogicSectorBase_F //inherits 5 parameters from bin\config.bin/CfgVehicles/LogicSectorBase_F, sources - ["A3_Modules_F_Curator_Multiplayer"]
	{
		_generalMacro = "LogicSectorUnknown200m_F";
		displayName = "Sector 200m Unknown";
		model = "\a3\Modules_F_Curator\Multiplayer\surfaceSectorUnknown200m.p3d";
	};
	class LogicSectorUnknown500m_F: LogicSectorBase_F //inherits 5 parameters from bin\config.bin/CfgVehicles/LogicSectorBase_F, sources - ["A3_Modules_F_Curator_Multiplayer"]
	{
		_generalMacro = "LogicSectorUnknown500m_F";
		displayName = "Sector 500m Unknown";
		model = "\a3\Modules_F_Curator\Multiplayer\surfaceSectorUnknown500m.p3d";
	};
	class LogicSectorEast100m_F: LogicSectorBase_F //inherits 5 parameters from bin\config.bin/CfgVehicles/LogicSectorBase_F, sources - ["A3_Modules_F_Curator_Multiplayer"]
	{
		_generalMacro = "LogicSectorEast100m_F";
		displayName = "Sector 100m East";
		model = "\a3\Modules_F_Curator\Multiplayer\surfaceSectorEast100m.p3d";
	};
	class LogicSectorEast200m_F: LogicSectorBase_F //inherits 5 parameters from bin\config.bin/CfgVehicles/LogicSectorBase_F, sources - ["A3_Modules_F_Curator_Multiplayer"]
	{
		_generalMacro = "LogicSectorEast200m_F";
		displayName = "Sector 200m East";
		model = "\a3\Modules_F_Curator\Multiplayer\surfaceSectorEast200m.p3d";
	};
	class LogicSectorEast500m_F: LogicSectorBase_F //inherits 5 parameters from bin\config.bin/CfgVehicles/LogicSectorBase_F, sources - ["A3_Modules_F_Curator_Multiplayer"]
	{
		_generalMacro = "LogicSectorEast500m_F";
		displayName = "Sector 500m East";
		model = "\a3\Modules_F_Curator\Multiplayer\surfaceSectorEast500m.p3d";
	};
	class LogicSectorWest100m_F: LogicSectorBase_F //inherits 5 parameters from bin\config.bin/CfgVehicles/LogicSectorBase_F, sources - ["A3_Modules_F_Curator_Multiplayer"]
	{
		_generalMacro = "LogicSectorWest100m_F";
		displayName = "Sector 100m West";
		model = "\a3\Modules_F_Curator\Multiplayer\surfaceSectorWest100m.p3d";
	};
	class LogicSectorWest200m_F: LogicSectorBase_F //inherits 5 parameters from bin\config.bin/CfgVehicles/LogicSectorBase_F, sources - ["A3_Modules_F_Curator_Multiplayer"]
	{
		_generalMacro = "LogicSectorWest200m_F";
		displayName = "Sector 200m West";
		model = "\a3\Modules_F_Curator\Multiplayer\surfaceSectorWest200m.p3d";
	};
	class LogicSectorWest500m_F: LogicSectorBase_F //inherits 5 parameters from bin\config.bin/CfgVehicles/LogicSectorBase_F, sources - ["A3_Modules_F_Curator_Multiplayer"]
	{
		_generalMacro = "LogicSectorWest500m_F";
		displayName = "Sector 500m West";
		model = "\a3\Modules_F_Curator\Multiplayer\surfaceSectorWest500m.p3d";
	};
	class LogicSectorGuer100m_F: LogicSectorBase_F //inherits 5 parameters from bin\config.bin/CfgVehicles/LogicSectorBase_F, sources - ["A3_Modules_F_Curator_Multiplayer"]
	{
		_generalMacro = "LogicSectorGuer100m_F";
		displayName = "Sector 100m Guer";
		model = "\a3\Modules_F_Curator\Multiplayer\surfaceSectorGuer100m.p3d";
	};
	class LogicSectorGuer200m_F: LogicSectorBase_F //inherits 5 parameters from bin\config.bin/CfgVehicles/LogicSectorBase_F, sources - ["A3_Modules_F_Curator_Multiplayer"]
	{
		_generalMacro = "LogicSectorGuer200m_F";
		displayName = "Sector 200m Guer";
		model = "\a3\Modules_F_Curator\Multiplayer\surfaceSectorGuer200m.p3d";
	};
	class LogicSectorGuer500m_F: LogicSectorBase_F //inherits 5 parameters from bin\config.bin/CfgVehicles/LogicSectorBase_F, sources - ["A3_Modules_F_Curator_Multiplayer"]
	{
		_generalMacro = "LogicSectorGuer500m_F";
		displayName = "Sector 500m Guer";
		model = "\a3\Modules_F_Curator\Multiplayer\surfaceSectorGuer500m.p3d";
	};
	class LogicSectorCiv100m_F: LogicSectorBase_F //inherits 5 parameters from bin\config.bin/CfgVehicles/LogicSectorBase_F, sources - ["A3_Modules_F_Curator_Multiplayer"]
	{
		_generalMacro = "LogicSectorCiv100m_F";
		displayName = "Sector 100m Civ";
		model = "\a3\Modules_F_Curator\Multiplayer\surfaceSectorCiv100m.p3d";
	};
	class LogicSectorCiv200m_F: LogicSectorBase_F //inherits 5 parameters from bin\config.bin/CfgVehicles/LogicSectorBase_F, sources - ["A3_Modules_F_Curator_Multiplayer"]
	{
		_generalMacro = "LogicSectorCiv200m_F";
		displayName = "Sector 200m Civ";
		model = "\a3\Modules_F_Curator\Multiplayer\surfaceSectorCiv200m.p3d";
	};
	class LogicSectorCiv500m_F: LogicSectorBase_F //inherits 5 parameters from bin\config.bin/CfgVehicles/LogicSectorBase_F, sources - ["A3_Modules_F_Curator_Multiplayer"]
	{
		_generalMacro = "LogicSectorCiv500m_F";
		displayName = "Sector 500m Civ";
		model = "\a3\Modules_F_Curator\Multiplayer\surfaceSectorCiv500m.p3d";
	};
	class ModuleObjective_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Objectives"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleObjective_F";
		scope = 1;
		scopeCurator = 2;
		isTriggerActivated = 1;
		category = "Objectives";
		displayName = "Custom Objective";
		portrait = "\a3\Modules_F_Curator\Data\portraitObjective_ca.paa";
		function = "BIS_fnc_moduleObjective";
		curatorInfoType = "RscDisplayAttributesModuleObjectiveCustom";
		curatorCanAttach = 1;
		curatorCost = 0;
	};
	class ModuleObjectiveMove_F: ModuleObjective_F //inherits 12 parameters from bin\config.bin/CfgVehicles/ModuleObjective_F, sources - ["A3_Modules_F_Curator_Objectives"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleObjectiveMove_F";
		displayName = "Move";
		portrait = "\a3\Modules_F_Curator\Data\portraitObjectiveMove_ca.paa";
		function = "BIS_fnc_moduleObjectiveMove";
		curatorInfoType = "RscDisplayAttributesModuleObjectiveMove";
		curatorCanAttach = 1;
	};
	class ModuleObjectiveSector_F: ModuleObjective_F //inherits 12 parameters from bin\config.bin/CfgVehicles/ModuleObjective_F, sources - ["A3_Modules_F_Curator_Objectives"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleObjectiveSector_F";
		displayName = "Control Sector";
		portrait = "\a3\Modules_F_Curator\Data\portraitObjectiveSector_ca.paa";
		function = "BIS_fnc_moduleObjectiveSector";
		curatorInfoType = "RscDisplayAttributesModuleObjectiveSector";
	};
	class ModuleObjectiveAttackDefend_F: ModuleObjective_F //inherits 12 parameters from bin\config.bin/CfgVehicles/ModuleObjective_F, sources - ["A3_Modules_F_Curator_Objectives"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleObjectiveAttackDefend_F";
		displayName = "Attack / Defend";
		portrait = "\a3\Modules_F_Curator\Data\portraitObjectiveAttackDefend_ca.paa";
		function = "BIS_fnc_moduleObjectiveSector";
		curatorInfoType = "RscDisplayAttributesModuleObjectiveAttackDefend";
	};
	class ModuleObjectiveNeutralize_F: ModuleObjective_F //inherits 12 parameters from bin\config.bin/CfgVehicles/ModuleObjective_F, sources - ["A3_Modules_F_Curator_Objectives"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleObjectiveNeutralize_F";
		displayName = "Neutralize";
		portrait = "\a3\Modules_F_Curator\Data\portraitObjectiveNeutralize_ca.paa";
		function = "BIS_fnc_moduleObjectiveTarget";
		curatorInfoType = "RscDisplayAttributesModuleObjectiveNeutralize";
	};
	class ModuleObjectiveProtect_F: ModuleObjective_F //inherits 12 parameters from bin\config.bin/CfgVehicles/ModuleObjective_F, sources - ["A3_Modules_F_Curator_Objectives"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleObjectiveProtect_F";
		displayName = "Protect";
		portrait = "\a3\Modules_F_Curator\Data\portraitObjectiveProtect_ca.paa";
		function = "BIS_fnc_moduleObjectiveTarget";
		curatorInfoType = "RscDisplayAttributesModuleObjectiveProtect";
	};
	class ModuleObjectiveGetIn_F: ModuleObjective_F //inherits 12 parameters from bin\config.bin/CfgVehicles/ModuleObjective_F, sources - ["A3_Modules_F_Curator_Objectives"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleObjectiveGetIn_F";
		displayName = "Get In Vehicle";
		portrait = "\a3\Modules_F_Curator\Data\portraitObjectiveGetIn_ca.paa";
		function = "BIS_fnc_moduleObjectiveGetIn";
		curatorInfoType = "RscDisplayAttributesModuleObjectiveGetIn";
	};
	class ModuleOrdnance_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Ordnance"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleOrdnance_F";
		scope = 2;
		category = "Effects";
		function = "BIS_fnc_moduleProjectile";
		isGlobal = 0;
		isTriggerActivated = 1;
		displayName = "Ordnance";
		icon = "\a3\Modules_F_Curator\Data\iconOrdnance_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitOrdnance_ca.paa";
		class Arguments //sources - ["A3_Modules_F_Curator_Ordnance"]
		{
			class Type //sources - ["A3_Modules_F_Curator_Ordnance"]
			{
				displayName = "Type";
				description = "";
				class values //sources - ["A3_Modules_F_Curator_Ordnance"]
				{
					class Mortar //sources - ["A3_Modules_F_Curator_Ordnance"]
					{
						name = "82 mm Mortar";
						value = "ModuleOrdnanceMortar_F_Ammo";
						default = 1;
					};
					class Howitzer //sources - ["A3_Modules_F_Curator_Ordnance"]
					{
						name = "155 mm Howitzer";
						value = "ModuleOrdnanceHowitzer_F_Ammo";
					};
					class Rocket //sources - ["A3_Modules_F_Curator_Ordnance"]
					{
						name = "230 mm Rocket";
						value = "ModuleOrdnanceRocket_F_Ammo";
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Curator_Ordnance"]
		{
			description = "Create an artillery shell on the module position. It will take a few seconds until it hits the ground.";
			position = 1;
		};
	};
	class ModuleOrdnanceMortar_F: ModuleOrdnance_F //inherits 12 parameters from bin\config.bin/CfgVehicles/ModuleOrdnance_F, sources - ["A3_Modules_F_Curator_Ordnance"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleOrdnanceMortar_F";
		scope = 1;
		scopeCurator = 2;
		isGlobal = 1;
		category = "Ordnance";
		displayName = "82 mm Mortar";
		portrait = "\a3\Modules_F_Curator\Data\portraitOrdnanceMortar_ca.paa";
		ammo = "ModuleOrdnanceMortar_F_Ammo";
		simulation = "house";
		model = "\a3\Modules_F_Curator\Ordnance\surfaceMortar.p3d";
		curatorCost = 1;
	};
	class ModuleOrdnanceHowitzer_F: ModuleOrdnanceMortar_F //inherits 12 parameters from bin\config.bin/CfgVehicles/ModuleOrdnanceMortar_F, sources - ["A3_Modules_F_Curator_Ordnance"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleOrdnanceHowitzer_F";
		displayName = "155 mm Howitzer";
		portrait = "\a3\Modules_F_Curator\Data\portraitOrdnanceHowitzer_ca.paa";
		ammo = "ModuleOrdnanceHowitzer_F_Ammo";
		model = "\a3\Modules_F_Curator\Ordnance\surfaceHowitzer.p3d";
		curatorCost = 3;
	};
	class ModuleOrdnanceRocket_F: ModuleOrdnanceMortar_F //inherits 12 parameters from bin\config.bin/CfgVehicles/ModuleOrdnanceMortar_F, sources - ["A3_Modules_F_Curator_Ordnance"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleOrdnanceRocket_F";
		displayName = "230 mm Rocket";
		portrait = "\a3\Modules_F_Curator\Data\portraitOrdnanceRocket_ca.paa";
		ammo = "ModuleOrdnanceRocket_F_Ammo";
		model = "\a3\Modules_F_Curator\Ordnance\surfaceRocket.p3d";
		curatorCost = 9;
	};
	class ModuleRespawnInventory_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Respawn"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleRespawnInventory_F";
		scope = 1;
		scopeCurator = 2;
		isGlobal = 0;
		category = "Respawn";
		displayName = "Loadouts";
		portrait = "\a3\Modules_F_Curator\Data\portraitRespawnInventory_ca.paa";
		function = "BIS_fnc_moduleRespawnInventory";
		curatorInfoType = "RscDisplayAttributesModuleRespawnInventory";
		curatorCost = 0;
	};
	class ModuleRespawnPositionWest_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Curator_Respawn"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleRespawnPositionWest_F";
		scope = 1;
		scopeCurator = 2;
		isGlobal = 2;
		category = "Respawn";
		displayName = "Players (BLUFOR)";
		portrait = "\a3\Modules_F_Curator\Data\portraitRespawnPositionWest_ca.paa";
		function = "BIS_fnc_moduleRespawnPosition";
		respawnSide = 1;
		respawnType = 0;
		icon = "\a3\Modules_f\data\iconRespawn_ca.paa";
		curatorCost = "[99999,0] select (playableslotsnumber west > 0)";
	};
	class ModuleRespawnPositionEast_F: ModuleRespawnPositionWest_F //inherits 13 parameters from bin\config.bin/CfgVehicles/ModuleRespawnPositionWest_F, sources - ["A3_Modules_F_Curator_Respawn"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleRespawnPositionEast_F";
		displayName = "Players (OPFOR)";
		portrait = "\a3\Modules_F_Curator\Data\portraitRespawnPositionEast_ca.paa";
		respawnSide = 0;
		curatorCost = "[99999,0] select (playableslotsnumber east > 0)";
	};
	class ModuleRespawnPositionGuer_F: ModuleRespawnPositionWest_F //inherits 13 parameters from bin\config.bin/CfgVehicles/ModuleRespawnPositionWest_F, sources - ["A3_Modules_F_Curator_Respawn"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleRespawnPositionGuer_F";
		displayName = "Players (Independent)";
		portrait = "\a3\Modules_F_Curator\Data\portraitRespawnPositionGuer_ca.paa";
		respawnSide = 2;
		curatorCost = "[99999,0] select (playableslotsnumber resistance > 0)";
	};
	class ModuleRespawnPositionCiv_F: ModuleRespawnPositionWest_F //inherits 13 parameters from bin\config.bin/CfgVehicles/ModuleRespawnPositionWest_F, sources - ["A3_Modules_F_Curator_Respawn"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleRespawnPositionCiv_F";
		displayName = "Players (Civilian)";
		portrait = "\a3\Modules_F_Curator\Data\portraitRespawnPositionCiv_ca.paa";
		respawnSide = 3;
		curatorCost = "[99999,0] select (playableslotsnumber civilian > 0)";
	};
	class ModuleVehicleRespawnPositionWest_F: ModuleRespawnPositionWest_F //inherits 13 parameters from bin\config.bin/CfgVehicles/ModuleRespawnPositionWest_F, sources - ["A3_Modules_F_Curator_Respawn"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleVehicleRespawnPositionWest_F";
		displayName = "Vehicles (BLUFOR)";
		portrait = "\a3\Modules_F_Curator\Data\portraitVehicleRespawnPositionWest_ca.paa";
		respawnType = 1;
		curatorCost = "[99999,0] select (playableslotsnumber west > 0)";
	};
	class ModuleVehicleRespawnPositionEast_F: ModuleVehicleRespawnPositionWest_F //inherits 6 parameters from bin\config.bin/CfgVehicles/ModuleVehicleRespawnPositionWest_F, sources - ["A3_Modules_F_Curator_Respawn"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleVehicleRespawnPositionEast_F";
		displayName = "Vehicles (OPFOR)";
		portrait = "\a3\Modules_F_Curator\Data\portraitVehicleRespawnPositionEast_ca.paa";
		respawnSide = 0;
		curatorCost = "[99999,0] select (playableslotsnumber east > 0)";
	};
	class ModuleVehicleRespawnPositionGuer_F: ModuleVehicleRespawnPositionWest_F //inherits 6 parameters from bin\config.bin/CfgVehicles/ModuleVehicleRespawnPositionWest_F, sources - ["A3_Modules_F_Curator_Respawn"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleVehicleRespawnPositionGuer_F";
		displayName = "Vehicles (Independent)";
		portrait = "\a3\Modules_F_Curator\Data\portraitVehicleRespawnPositionGuer_ca.paa";
		respawnSide = 2;
		curatorCost = "[99999,0] select (playableslotsnumber resistance > 0)";
	};
	class ModuleVehicleRespawnPositionCiv_F: ModuleVehicleRespawnPositionWest_F //inherits 6 parameters from bin\config.bin/CfgVehicles/ModuleVehicleRespawnPositionWest_F, sources - ["A3_Modules_F_Curator_Respawn"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleVehicleRespawnPositionCiv_F";
		displayName = "Vehicles (Civilian)";
		portrait = "\a3\Modules_F_Curator\Data\portraitVehicleRespawnPositionCiv_ca.paa";
		respawnSide = 3;
		curatorCost = "[99999,0] select (playableslotsnumber civilian > 0)";
	};
	class ModuleSmokeWhite_F: ModuleSmoke_F //inherits 13 parameters from bin\config.bin/CfgVehicles/ModuleSmoke_F, sources - ["A3_Modules_F_Curator_SmokeShells"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleSmokeWhite_F";
		scope = 1;
		scopeCurator = 2;
		category = "SmokeShells";
		displayName = "White Smoke";
		portrait = "\a3\Modules_F_Curator\Data\portraitSmokeWhite_ca.paa";
		ammo = "SmokeShell";
	};
	class ModuleSmokeBlue_F: ModuleSmokeWhite_F //inherits 8 parameters from bin\config.bin/CfgVehicles/ModuleSmokeWhite_F, sources - ["A3_Modules_F_Curator_SmokeShells"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleSmokeBlue_F";
		displayName = "Blue Smoke";
		portrait = "\a3\Modules_F_Curator\Data\portraitSmokeBlue_ca.paa";
		ammo = "SmokeShellBlue";
	};
	class ModuleSmokeGreen_F: ModuleSmokeWhite_F //inherits 8 parameters from bin\config.bin/CfgVehicles/ModuleSmokeWhite_F, sources - ["A3_Modules_F_Curator_SmokeShells"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleSmokeGreen_F";
		displayName = "Green Smoke";
		portrait = "\a3\Modules_F_Curator\Data\portraitSmokeGreen_ca.paa";
		ammo = "SmokeShellGreen";
	};
	class ModuleSmokeOrange_F: ModuleSmokeWhite_F //inherits 8 parameters from bin\config.bin/CfgVehicles/ModuleSmokeWhite_F, sources - ["A3_Modules_F_Curator_SmokeShells"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleSmokeOrange_F";
		displayName = "Orange Smoke";
		portrait = "\a3\Modules_F_Curator\Data\portraitSmokeOrange_ca.paa";
		ammo = "SmokeShellOrange";
	};
	class ModuleSmokePurple_F: ModuleSmokeWhite_F //inherits 8 parameters from bin\config.bin/CfgVehicles/ModuleSmokeWhite_F, sources - ["A3_Modules_F_Curator_SmokeShells"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleSmokePurple_F";
		displayName = "Purple Smoke";
		portrait = "\a3\Modules_F_Curator\Data\portraitSmokePurple_ca.paa";
		ammo = "SmokeShellPurple";
	};
	class ModuleSmokeRed_F: ModuleSmokeWhite_F //inherits 8 parameters from bin\config.bin/CfgVehicles/ModuleSmokeWhite_F, sources - ["A3_Modules_F_Curator_SmokeShells"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleSmokeRed_F";
		displayName = "Red Smoke";
		portrait = "\a3\Modules_F_Curator\Data\portraitSmokeRed_F_ca.paa";
		ammo = "SmokeShellRed";
	};
	class ModuleSmokeYellow_F: ModuleSmokeWhite_F //inherits 8 parameters from bin\config.bin/CfgVehicles/ModuleSmokeWhite_F, sources - ["A3_Modules_F_Curator_SmokeShells"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleSmokeYellow_F";
		displayName = "Yellow Smoke";
		portrait = "\a3\Modules_F_Curator\Data\portraitSmokeYellow_ca.paa";
		ammo = "SmokeShellYellow";
	};
	class ModuleMPTypeSectorControl_F: ModuleMPType_F //inherits 5 parameters from bin\config.bin/CfgVehicles/ModuleMPType_F, sources - ["A3_Missions_F_Curator"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleMPTypeSectorControl_F";
		scope = 2;
		displayName = "Sector Control";
		icon = "\a3\Missions_F_Curator\data\img\iconMPTypeSectorControl_ca.paa";
		portrait = "\a3\Missions_F_Curator\data\img\portraitMPTypeSectorControl_ca.paa";
		function = "BIS_fnc_ModuleMPTypeSectorControl";
		functionPriority = 1;
		class Arguments //sources - []
		{
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Missions_F_Curator"]
		{
			description = "Initialize Sector Control game mode.<br /><br />Mission will end once time is up (see estimatedTimeLeft scripting command), tickets of one side are depleeted (see 'Respawn Tickets' module or BIS_fnc_respawnTickets function) or when the module is deleted.";
			sync[] = {"SideBLUFOR_F", "SideOPFOR_F", "SideResistance_F"};
			class SideBLUFOR_F //sources - ["A3_Missions_F_Curator"]
			{
				optional = 1;
			};
			class SideOPFOR_F //sources - ["A3_Missions_F_Curator"]
			{
				optional = 1;
			};
			class SideResistance_F //sources - ["A3_Missions_F_Curator"]
			{
				optional = 1;
			};
		};
	};
	class ModuleMPTypeGameMaster_F: ModuleMPType_F //inherits 5 parameters from bin\config.bin/CfgVehicles/ModuleMPType_F, sources - ["A3_Missions_F_Curator"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleMPTypeGameMaster_F";
		scope = 2;
		displayName = "Game Master";
		icon = "\a3\Missions_F_Curator\data\img\iconMPTypeGameMaster_ca.paa";
		portrait = "\a3\Missions_F_Curator\data\img\portraitMPTypeGameMaster_ca.paa";
		function = "BIS_fnc_ModuleMPTypeGameMaster";
		functionPriority = 1;
		class Arguments //sources - []
		{
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Missions_F_Curator"]
		{
			description = "Initialize Game Master game mode. It lets Zeus first to insert respawn module for every involved side and then gives him challenges to complete. No rules are present, it's up to Zeus what he'll create.<br /><br />Mission will end once time is up (see estimatedTimeLeft scripting command), tickets of one side are depleeted (see 'Respawn Tickets' module or BIS_fnc_respawnTickets function) or when the module is deleted.";
		};
	};
	class ModuleChemlightBlue_F: ModuleChemlight_F //inherits 13 parameters from bin\config.bin/CfgVehicles/ModuleChemlight_F, sources - ["A3_Modules_F_Curator_Chemlights"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleChemlightBlue_F";
		scope = 1;
		scopeCurator = 2;
		category = "Chemlights";
		displayName = "Blue Light";
		portrait = "\a3\Modules_F_Curator\Data\portraitChemlightBlue_ca.paa";
		ammo = "Chemlight_Blue";
	};
	class ModuleChemlightGreen_F: ModuleChemlightBlue_F //inherits 8 parameters from bin\config.bin/CfgVehicles/ModuleChemlightBlue_F, sources - ["A3_Modules_F_Curator_Chemlights"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleChemlightGreen_F";
		displayName = "Green Light";
		portrait = "\a3\Modules_F_Curator\Data\portraitChemlightGreen_ca.paa";
		ammo = "Chemlight_Green";
	};
	class ModuleChemlightRed_F: ModuleChemlightBlue_F //inherits 8 parameters from bin\config.bin/CfgVehicles/ModuleChemlightBlue_F, sources - ["A3_Modules_F_Curator_Chemlights"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleChemlightRed_F";
		displayName = "Red Light";
		portrait = "\a3\Modules_F_Curator\Data\portraitChemlightRed_ca.paa";
		ammo = "Chemlight_Red";
	};
	class ModuleChemlightYellow_F: ModuleChemlightBlue_F //inherits 8 parameters from bin\config.bin/CfgVehicles/ModuleChemlightBlue_F, sources - ["A3_Modules_F_Curator_Chemlights"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleChemlightYellow_F";
		displayName = "Yellow Light";
		portrait = "\a3\Modules_F_Curator\Data\portraitChemlightYellow_ca.paa";
		ammo = "Chemlight_Yellow";
	};
	class ModuleObjectiveRaceStart_F: ModuleObjective_F //inherits 12 parameters from bin\config.bin/CfgVehicles/ModuleObjective_F, sources - ["A3_Modules_F_Kart"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleObjectiveRaceStart_F";
		displayName = "Race - Lineup";
		portrait = "\a3\Modules_F_Curator\Data\portraitObjectiveMove_ca.paa";
		function = "BIS_fnc_moduleObjectiveRaceStart";
		curatorInfoType = "RscDisplayAttributesModuleObjectiveRaceStart";
		scope = 2;
	};
	class ModuleObjectiveRaceCP_F: ModuleObjective_F //inherits 12 parameters from bin\config.bin/CfgVehicles/ModuleObjective_F, sources - ["A3_Modules_F_Kart"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleObjectiveRaceCP_F";
		displayName = "Race - Check Point";
		portrait = "\a3\Modules_F_Curator\Data\portraitObjectiveMove_ca.paa";
		function = "BIS_fnc_moduleObjectiveRaceCP";
		curatorInfoType = "RscDisplayAttributesModuleObjectiveRaceCP";
		isGlobal = 2;
		scope = 2;
	};
	class ModuleObjectiveRaceFinish_F: ModuleObjective_F //inherits 12 parameters from bin\config.bin/CfgVehicles/ModuleObjective_F, sources - ["A3_Modules_F_Kart"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleObjectiveRaceFinish_F";
		displayName = "Race - Finish";
		portrait = "\a3\Modules_F_Curator\Data\portraitObjectiveMove_ca.paa";
		function = "BIS_fnc_moduleObjectiveRaceFinish";
		curatorInfoType = "RscDisplayAttributesModuleObjectiveRaceFinish";
		isGlobal = 2;
		scope = 2;
	};
	class ModuleTimeTrial_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Kart_TimeTrials"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleTimeTrial_F";
		scope = 1;
		displayName = "Time Trial";
		category = "TimeTrials";
		function = "BIS_fnc_moduleTimeTrial";
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisposable = 0;
	};
	class ModuleBootcampStage_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Bootcamp_Misc"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleBootcampStage_F";
		scope = 1;
		scopeCurator = 2;
		category = "Training";
		displayName = "Bootcamp Stage";
		icon = "\a3\Modules_F_Bootcamp\Data\IconBootcampStage.paa";
		portrait = "\a3\Modules_F_Bootcamp\Data\PortraitBootcampStage.paa";
		function = "BIS_fnc_moduleBootcampStage";
		isGlobal = 0;
		curatorCanAttach = 0;
		curatorCost = 10;
		curatorInfoType = "RscDisplayAttributesModuleBootcampStage";
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Bootcamp_Misc"]
		{
			position = 1;
		};
	};
	class ModuleHint_F: ModuleBootcampStage_F //inherits 14 parameters from bin\config.bin/CfgVehicles/ModuleBootcampStage_F, sources - ["A3_Modules_F_Bootcamp_Misc"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleHint_F";
		displayName = "Hint";
		icon = "\a3\Modules_F_Bootcamp\Data\IconHint.paa";
		portrait = "\a3\Modules_F_Bootcamp\Data\PortraitHint.paa";
		function = "BIS_fnc_moduleHint";
		isGlobal = 1;
		curatorCanAttach = 0;
		curatorCost = 10;
		curatorInfoType = "RscDisplayAttributesModuleHint";
		class ModuleDescription: ModuleDescription //inherits 1 parameters from bin\config.bin/CfgVehicles/ModuleBootcampStage_F/ModuleDescription, sources - ["A3_Modules_F_Bootcamp_Misc"]
		{
			position = 1;
		};
	};
	class ModulePunishment_F: ModuleBootcampStage_F //inherits 14 parameters from bin\config.bin/CfgVehicles/ModuleBootcampStage_F, sources - ["A3_Modules_F_Bootcamp_Misc"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModulePunishment_F";
		displayName = "Punishment";
		icon = "\a3\Modules_F_Bootcamp\Data\IconPunishment.paa";
		portrait = "\a3\Modules_F_Bootcamp\Data\PortraitPunishment.paa";
		function = "BIS_fnc_modulePunishment";
		isGlobal = 0;
		curatorCanAttach = 1;
		curatorCost = 10;
		curatorInfoType = "RscDisplayAttributesModulePunishment";
		class ModuleDescription: ModuleDescription //inherits 1 parameters from bin\config.bin/CfgVehicles/ModuleBootcampStage_F/ModuleDescription, sources - ["A3_Modules_F_Bootcamp_Misc"]
		{
			position = 1;
		};
	};
	class ModuleArsenal_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Bootcamp_Misc"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleArsenal_F";
		scope = 1;
		scopeCurator = 2;
		category = "Curator";
		displayName = "Arsenal";
		portrait = "\A3\Ui_f\data\Logos\a_64_ca.paa";
		function = "BIS_fnc_moduleArsenal";
		isGlobal = 1;
		curatorCanAttach = 1;
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Bootcamp_Misc"]
		{
			position = 1;
		};
	};
	class Simulation_Fatal: Sound //inherits 11 parameters from bin\config.bin/CfgVehicles/Sound, sources - ["A3_Sounds_F_Bootcamp"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Simulation_Fatal";
		scope = 2;
		sound = "Simulation_Fatal_SFX";
		displayName = "Simulation Lethal Damage";
	};
	class Simulation_Restart: Sound //inherits 11 parameters from bin\config.bin/CfgVehicles/Sound, sources - ["A3_Sounds_F_Bootcamp"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Simulation_Restart";
		scope = 2;
		sound = "Simulation_Restart_SFX";
		displayName = "Simulation Restart";
	};
	class Topic_Deselection: Sound //inherits 11 parameters from bin\config.bin/CfgVehicles/Sound, sources - ["A3_Sounds_F_Bootcamp"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Topic_Deselection";
		scope = 2;
		sound = "Topic_Deselection_SFX";
		displayName = "Topic Deselection";
	};
	class Topic_Done: Sound //inherits 11 parameters from bin\config.bin/CfgVehicles/Sound, sources - ["A3_Sounds_F_Bootcamp"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Topic_Done";
		scope = 2;
		sound = "Topic_Done_SFX";
		displayName = "Topic Done";
	};
	class Topic_Selection: Sound //inherits 11 parameters from bin\config.bin/CfgVehicles/Sound, sources - ["A3_Sounds_F_Bootcamp"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Topic_Selection";
		scope = 2;
		sound = "Topic_Selection_SFX";
		displayName = "Topic Selection";
	};
	class Topic_Trigger: Sound //inherits 11 parameters from bin\config.bin/CfgVehicles/Sound, sources - ["A3_Sounds_F_Bootcamp"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Topic_Trigger";
		scope = 2;
		sound = "Topic_Trigger_SFX";
		displayName = "Topic Trigger";
	};
	class ModuleMPTypeGroundSupport_F: ModuleMPType_F //inherits 5 parameters from bin\config.bin/CfgVehicles/ModuleMPType_F, sources - ["A3_Missions_F_Heli"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleMPTypeGroundSupport_F";
		scope = 2;
		isGlobal = 2;
		isTriggerActivated = 0;
		displayName = "Support";
		icon = "\a3\Missions_F_Curator\data\img\iconMPTypeSectorControl_ca.paa";
		function = "BIS_fnc_ModuleMPTypeGroundSupport";
		functionPriority = 20;
		class Arguments //sources - ["A3_Missions_F_Heli"]
		{
			class bis_groundSupport_needTransport //sources - ["A3_Missions_F_Heli"]
			{
				displayName = "Transport Tasks";
				class Values //sources - ["A3_Missions_F_Heli"]
				{
					class Enabled //sources - ["A3_Missions_F_Heli"]
					{
						name = "Enabled";
						value = 1;
						default = 1;
					};
					class Disabled //sources - ["A3_Missions_F_Heli"]
					{
						name = "Disabled";
						value = 0;
					};
				};
				typeName = "NUMBER";
			};
			class bis_groundSupport_needEvac //sources - ["A3_Missions_F_Heli"]
			{
				displayName = "Medevac Tasks";
				class Values //sources - ["A3_Missions_F_Heli"]
				{
					class Enabled //sources - ["A3_Missions_F_Heli"]
					{
						name = "Enabled";
						value = 1;
						default = 1;
					};
					class Disabled //sources - ["A3_Missions_F_Heli"]
					{
						name = "Disabled";
						value = 0;
					};
				};
				typeName = "NUMBER";
			};
			class bis_groundSupport_needAmmo //sources - ["A3_Missions_F_Heli"]
			{
				displayName = "Resupply Tasks";
				class Values //sources - ["A3_Missions_F_Heli"]
				{
					class Enabled //sources - ["A3_Missions_F_Heli"]
					{
						name = "Enabled";
						value = 1;
						default = 1;
					};
					class Disabled //sources - ["A3_Missions_F_Heli"]
					{
						name = "Disabled";
						value = 0;
					};
				};
				typeName = "NUMBER";
			};
			class bis_groundSupport_needSupport //sources - ["A3_Missions_F_Heli"]
			{
				displayName = "CAS Tasks";
				class Values //sources - ["A3_Missions_F_Heli"]
				{
					class Enabled //sources - ["A3_Missions_F_Heli"]
					{
						name = "Enabled";
						value = 1;
						default = 1;
					};
					class Disabled //sources - ["A3_Missions_F_Heli"]
					{
						name = "Disabled";
						value = 0;
					};
				};
				typeName = "NUMBER";
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Missions_F_Heli"]
		{
			description = "Initialize the Support game mode.";
			sync[] = {"SideBLUFOR_F", "SideOPFOR_F", "SideResistance_F"};
			class SideBLUFOR_F //sources - ["A3_Missions_F_Heli"]
			{
				optional = 1;
			};
			class SideOPFOR_F //sources - ["A3_Missions_F_Heli"]
			{
				optional = 1;
			};
			class SideResistance_F //sources - ["A3_Missions_F_Heli"]
			{
				optional = 1;
			};
		};
	};
	class ModuleMPTypeGroundSupportBase_F: ModuleMPType_F //inherits 5 parameters from bin\config.bin/CfgVehicles/ModuleMPType_F, sources - ["A3_Missions_F_Heli"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleMPTypeGroundSupportBase_F";
		scope = 2;
		isGlobal = 2;
		isTriggerActivated = 1;
		displayName = "Support: Base";
		icon = "\a3\Missions_F_Curator\data\img\iconMPTypeSectorControl_ca.paa";
		function = "BIS_fnc_ModuleMPTypeGroundSupportBase";
		functionPriority = 19;
		class Arguments //sources - ["A3_Missions_F_Heli"]
		{
			class Side //sources - ["A3_Missions_F_Heli"]
			{
				displayName = "Side";
				class Values //sources - ["A3_Missions_F_Heli"]
				{
					class West //sources - ["A3_Missions_F_Heli"]
					{
						name = "BLUFOR";
						value = 1;
						default = 1;
					};
					class East //sources - ["A3_Missions_F_Heli"]
					{
						name = "OPFOR";
						value = 0;
					};
					class Guer //sources - ["A3_Missions_F_Heli"]
					{
						name = "Independent";
						value = 2;
					};
				};
				typeName = "NUMBER";
			};
			class Size //sources - ["A3_Missions_F_Heli"]
			{
				displayName = "Size";
				description = "Size of the base.";
				typeName = "NUMBER";
				defaultValue = 200;
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Missions_F_Heli"]
		{
			description = "";
			sync[] = {};
		};
	};
	class ModuleSpawnAI_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Heli_Misc"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleSpawnAI_F";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		displayName = "Spawn AI";
		function = "bis_fnc_moduleSpawnAI";
		functionPriority = 12;
		icon = "\a3\Modules_F\Data\iconStrategicMapOpen_ca.paa";
		isDisposable = 0;
		class Arguments //sources - ["A3_Modules_F_Heli_Misc"]
		{
			class Side //sources - ["A3_Modules_F_Heli_Misc"]
			{
				displayName = "Side";
				class Values //sources - ["A3_Modules_F_Heli_Misc"]
				{
					class West //sources - ["A3_Modules_F_Heli_Misc"]
					{
						name = "BLUFOR";
						value = "West";
						default = 1;
					};
					class East //sources - ["A3_Modules_F_Heli_Misc"]
					{
						name = "OPFOR";
						value = "East";
					};
					class Indep //sources - ["A3_Modules_F_Heli_Misc"]
					{
						name = "Independent";
						value = "Indep";
					};
				};
			};
			class ManpowerCap //sources - ["A3_Modules_F_Heli_Misc"]
			{
				displayName = "Manpower Cap";
				description = "Maximum manpower when groups can still be spawned. When the manpower limit is reached, spawning is paused.";
				typeName = "NUMBER";
				defaultValue = 50;
			};
			class SpawnRate //sources - ["A3_Modules_F_Heli_Misc"]
			{
				displayName = "Spawn Rate";
				description = "How often groups are spawned, if the manpower cap is not reached.";
				class Values //sources - ["A3_Modules_F_Heli_Misc"]
				{
					class High //sources - ["A3_Modules_F_Heli_Misc"]
					{
						name = "15 seconds";
						value = 1;
					};
					class Medium //sources - ["A3_Modules_F_Heli_Misc"]
					{
						name = "30 seconds";
						value = 2;
						default = 1;
					};
					class Low //sources - ["A3_Modules_F_Heli_Misc"]
					{
						name = "60 seconds";
						value = 4;
					};
					class VeryLow //sources - ["A3_Modules_F_Heli_Misc"]
					{
						name = "120 seconds";
						value = 8;
					};
				};
				typeName = "NUMBER";
			};
			class VehiclesInGroup //sources - ["A3_Modules_F_Heli_Misc"]
			{
				displayName = "Max. Vehicles per Group";
				description = "Max. number of vehicles that can be spawned in a group.";
				typeName = "NUMBER";
				defaultValue = 1;
			};
			class InfantryInGroup //sources - ["A3_Modules_F_Heli_Misc"]
			{
				displayName = "Max. Soldiers per Group";
				description = "Max. number of soldiers that can be spawned in an infantry group.";
				typeName = "NUMBER";
				defaultValue = 6;
			};
			class Expression //sources - ["A3_Modules_F_Heli_Misc"]
			{
				displayName = "Expression";
				description = "Code executed when group is spawned. Passed arguments are [<group>,<module>,<groupData>].";
				typeName = "STRING";
				defaultValue = "";
			};
			class Faction //sources - ["A3_Modules_F_Heli_Misc"]
			{
				displayName = "Faction";
				description = "Faction of groups spawned at the point.";
				class values //sources - ["A3_Modules_F_Heli_Misc"]
				{
					class NATO //sources - ["A3_Modules_F_Heli_Misc"]
					{
						name = "NATO (BLUFOR)";
						value = "BLU_F";
						default = 1;
					};
					class FIA //sources - ["A3_Modules_F_Heli_Misc"]
					{
						name = "FIA (BLUFOR)";
						value = "Guerilla";
					};
					class CSAT //sources - ["A3_Modules_F_Heli_Misc"]
					{
						name = "CSAT (OPFOR)";
						value = "OPF_F";
					};
					class AAF //sources - ["A3_Modules_F_Heli_Misc"]
					{
						name = "AAF (Independent)";
						value = "IND_F";
					};
				};
			};
			class Infantry //sources - ["A3_Modules_F_Heli_Misc"]
			{
				displayName = "Infantry Weighting";
				description = "Weighted chance to spawn an infantry group. Valid values are 0-10.";
				typeName = "NUMBER";
				defaultValue = 5;
			};
			class Motorized //sources - ["A3_Modules_F_Heli_Misc"]
			{
				displayName = "Motorized Weighting";
				description = "Weighted chance to spawn a motorized group. Valid values are 0-10.";
				typeName = "NUMBER";
				defaultValue = 0;
			};
			class Mechanized //sources - ["A3_Modules_F_Heli_Misc"]
			{
				displayName = "Mechanized Weighting";
				description = "Weighted chance to spawn a mechanized group. Valid values are 0-10.";
				typeName = "NUMBER";
				defaultValue = 0;
			};
			class Armored //sources - ["A3_Modules_F_Heli_Misc"]
			{
				displayName = "Armored Weighting";
				description = "Weighted chance to spawn an armored group. Valid values are 0-10.";
				typeName = "NUMBER";
				defaultValue = 0;
			};
			class BlacklistedGroups //sources - ["A3_Modules_F_Heli_Misc"]
			{
				displayName = "Blacklisted Groups";
				description = "Classnames of blacklisted groups.";
				typeName = "STRING";
				defaultValue = "";
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Heli_Misc"]
		{
			description[] = {"Module periodically creates groups of non-player units and vehicles until set manpower cap is reached. Module can also be synced with 1 or more [Spawn AI: Spawnpoint] modules to add more possible spawnpoints. In that case spawn position is selected at random.", "", "NOTE: If all group weights (Infantry/Motorized/Mechanized/Armored) set to 0, no groups will spawn on position of the [Spawn AI] module."};
			sync[] = {"ModuleSpawnAIPoint_F", "StartGroup"};
			position = 1;
			direction = 1;
			class StartGroup: AnyAI //inherits 3 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription/AnyAI, sources - ["A3_Modules_F_Heli_Misc"]
			{
				description[] = {"Maximum manpower when groups can still be spawned. When the manpower limit is reached, spawning is paused.", "NOTE: The code expression that is executed on spawned group will also be executed on the synced group."};
				optional = 1;
				duplicate = 1;
			};
			class ModuleSpawnAIPoint_F //sources - ["A3_Modules_F_Heli_Misc"]
			{
				optional = 1;
				duplicate = 1;
			};
		};
	};
	class ModuleSpawnAIPoint_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Heli_Misc"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleSpawnAIPoint_F";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		displayName = "Spawn AI: Spawnpoint";
		function = "bis_fnc_moduleSpawnAIPoint";
		functionPriority = 11;
		icon = "\a3\Modules_F\Data\iconStrategicMapORBAT_ca.paa";
		isDisposable = 0;
		class Arguments //sources - ["A3_Modules_F_Heli_Misc"]
		{
			class Faction //sources - ["A3_Modules_F_Heli_Misc"]
			{
				displayName = "Faction";
				description = "Faction of groups spawned at the point. It needs to match the side of the [Spawn AI] module for the point to work.";
				class values //sources - ["A3_Modules_F_Heli_Misc"]
				{
					class NATO //sources - ["A3_Modules_F_Heli_Misc"]
					{
						name = "NATO (BLUFOR)";
						value = "BLU_F";
						default = 1;
					};
					class FIA //sources - ["A3_Modules_F_Heli_Misc"]
					{
						name = "FIA (BLUFOR)";
						value = "Guerilla";
					};
					class CSAT //sources - ["A3_Modules_F_Heli_Misc"]
					{
						name = "CSAT (OPFOR)";
						value = "OPF_F";
					};
					class AAF //sources - ["A3_Modules_F_Heli_Misc"]
					{
						name = "AAF (Independent)";
						value = "IND_F";
					};
				};
			};
			class Infantry //sources - ["A3_Modules_F_Heli_Misc"]
			{
				displayName = "Infantry";
				description = "Weighted chance to spawn an infantry group. Valid values are 0-10.";
				typeName = "NUMBER";
				defaultValue = 5;
			};
			class Motorized //sources - ["A3_Modules_F_Heli_Misc"]
			{
				displayName = "Motorized Infantry";
				description = "Weighted chance to spawn a motorized infantry group. Valid values are 0-10.";
				typeName = "NUMBER";
				defaultValue = 0;
			};
			class Mechanized //sources - ["A3_Modules_F_Heli_Misc"]
			{
				displayName = "Mechanized Infantry";
				description = "Weighted chance to spawn a mechanized infantry group. Valid values are 0-10.";
				typeName = "NUMBER";
				defaultValue = 0;
			};
			class Armored //sources - ["A3_Modules_F_Heli_Misc"]
			{
				displayName = "Armored";
				description = "Weighted chance to spawn an armored group. Number of vehicles per spawn can be limited in [Spawn AI] module. Valid values are 0-10.";
				typeName = "NUMBER";
				defaultValue = 0;
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Heli_Misc"]
		{
			description[] = {"Module defines spawnpoint for AI groups, namely their faction, position, direction and type of groups that can be spawned there. Module needs to be synced to a [Spawn AI] module to work. If there are several [Spawn AI: Spawnpoint] modules synced to [Spawn AI] module, single spawnpoint is chosen at random every time a group should be spawned.", "", "NOTE: If all group weights (Infantry/Motorized/Mechanized/Armored) set to 0, the spawnpoint will be disabled."};
			sync[] = {"ModuleSpawnAI_F"};
			position = 1;
			direction = 1;
		};
	};
	class ModuleSpawnAISectorTactic_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Heli_Misc"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleSpawnAISectorTactic_F";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 0;
		displayName = "Spawn AI: Sector Tactic";
		function = "bis_fnc_moduleSpawnAISectorTactic";
		functionPriority = 10;
		isDisposable = 0;
		class Arguments //sources - []
		{
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Heli_Misc"]
		{
			description[] = {"Module controls behavior of groups spawned by [Spawn AI] module. If no [Spawn AI] modules are synced to the module, the module controls all of the spawned groups. If there are some [Spawn AI] modules synced with the module, only groups belonging to those synced modules are being controlled."};
			sync[] = {"ModuleSpawnAI_F"};
			position = 0;
			direction = 0;
			class ModuleSpawnAI_F //sources - ["A3_Modules_F_Heli_Misc"]
			{
				optional = 1;
				duplicate = 1;
			};
		};
	};
	class ModuleSpawnAIOptions_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Heli_Misc"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleSpawnAIOptions_F";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 0;
		displayName = "Spawn AI: Options";
		function = "bis_fnc_moduleSpawnAIOptions";
		functionPriority = 5;
		class Arguments //sources - ["A3_Modules_F_Heli_Misc"]
		{
			class CorpseDeleteTime //sources - ["A3_Modules_F_Heli_Misc"]
			{
				displayName = "Delete Corpses After";
				description = "Dead bodies get deleted after that amount of time.";
				typeName = "NUMBER";
				defaultValue = 15;
			};
			class WreckDeleteTime //sources - ["A3_Modules_F_Heli_Misc"]
			{
				displayName = "Delete Wrecks After";
				description = "Wrecks get deleted after that amount of time.";
				typeName = "NUMBER";
				defaultValue = 45;
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Heli_Misc"]
		{
			description = "";
			sync[] = {};
		};
	};
	class ModuleSlingload_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Heli_Misc"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleSlingload_F";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		displayName = "Sling Load";
		function = "bis_fnc_moduleSlingload";
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Heli_Misc"]
		{
			description = "";
			sync[] = {"Heli", "Cargo"};
			class Heli: AnyBrain //inherits 5 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription/AnyBrain, sources - ["A3_Modules_F_Heli_Misc"]
			{
				displayName = "Helicopter";
				icon = "iconHelicopter";
				duplicate = 0;
				position = 1;
				direction = 1;
			};
			class Cargo: Anything //inherits 5 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription/Anything, sources - ["A3_Modules_F_Heli_Misc"]
			{
				displayName = "Cargo";
				description = "";
				duplicate = 0;
			};
		};
	};
	class Land_PortableHelipadLight_01_F: FloatingStructure_F //inherits 122 parameters from bin\config.bin/CfgVehicles/FloatingStructure_F, sources - ["A3_Structures_F_Heli_Items_Airport"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Structures_F_Heli_Items_Airport"]
		{
			eden = 1;
			animate[] = {{"light_1_blinking", 1}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.111;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_PortableHelipadLight_01_F.jpg";
		_generalMacro = "Land_PortableHelipadLight_01_F";
		scope = 2;
		scopeCurator = 0;
		displayName = "Portable Helipad Light";
		model = "\A3\Structures_F_Heli\Items\Airport\PortableHelipadLight_01_F.p3d";
		DLC = "Heli";
		icon = "iconObject_1x1";
		editorCategory = "EdCat_Things";
		editorSubcategory = "EdSubcat_Airports";
		vehicleClass = "Objects_Airport";
		cost = 200;
		hiddenSelections[] = {"Camo_1", "Light_1_hide"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,0,0.5,1.0,co)", "#(argb,8,8,3)color(1,0,0.5,1.0,co)"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat", "\A3\Data_f\Lights\Building_LandingLights_white.rvmat"};
		class AnimationSources //sources - ["A3_Structures_F_Heli_Items_Airport"]
		{
			class Light_1_source //sources - ["A3_Structures_F_Heli_Items_Airport"]
			{
				source = "MarkerLight";
				markerLight = "Light_1";
			};
		};
		class MarkerLights //sources - ["A3_Structures_F_Heli_Items_Airport"]
		{
			class Light_1 //sources - ["A3_Structures_F_Heli_Items_Airport"]
			{
				color[] = {1, 0, 0.5};
				ambient[] = {0.01, 0, 0.005};
				intensity = 1000;
				name = "Light_1_pos";
				blinking = 1;
				blinkingPattern[] = {0.75, 1.25};
				blinkingPatternGuarantee = 0;
				useFlare = 1;
				flareSize = 1.5;
				flareMaxDistance = 1500;
				activeLight = 1;
				dayLight = 0;
				drawLight = 0;
				class Attenuation //sources - ["A3_Structures_F_Heli_Items_Airport"]
				{
					start = 0;
					constant = 0;
					linear = 10;
					quadratic = 60;
					hardLimitStart = 3;
					hardLimitEnd = 4;
				};
			};
		};
	};
	class PortableHelipadLight_01_blue_F: Land_PortableHelipadLight_01_F //inherits 19 parameters from bin\config.bin/CfgVehicles/Land_PortableHelipadLight_01_F, sources - ["A3_Structures_F_Heli_Items_Airport"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Structures_F_Heli_Items_Airport"]
		{
			eden = 1;
			animate[] = {{"light_1_blinking", 0}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.111;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\PortableHelipadLight_01_blue_F.jpg";
		_generalMacro = "PortableHelipadLight_01_blue_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "Portable Helipad Light (Blue)";
		DLC = "Heli";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0,0,1,1.0,co)", "#(argb,8,8,3)color(0,0,1,1.0,co)"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat", "\A3\Data_f\Lights\Car_Beacon_Blue_emit.rvmat"};
		class MarkerLights: MarkerLights //inherits 1 parameters from bin\config.bin/CfgVehicles/Land_PortableHelipadLight_01_F/MarkerLights, sources - ["A3_Structures_F_Heli_Items_Airport"]
		{
			class Light_1: Light_1 //inherits 14 parameters from bin\config.bin/CfgVehicles/Land_PortableHelipadLight_01_F/MarkerLights/Light_1, sources - ["A3_Structures_F_Heli_Items_Airport"]
			{
				color[] = {0, 0, 1};
				ambient[] = {0, 0, 0.01};
			};
		};
	};
	class PortableHelipadLight_01_red_F: Land_PortableHelipadLight_01_F //inherits 19 parameters from bin\config.bin/CfgVehicles/Land_PortableHelipadLight_01_F, sources - ["A3_Structures_F_Heli_Items_Airport"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Structures_F_Heli_Items_Airport"]
		{
			eden = 1;
			animate[] = {{"light_1_blinking", 0}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.111;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\PortableHelipadLight_01_red_F.jpg";
		_generalMacro = "PortableHelipadLight_01_red_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "Portable Helipad Light (Red)";
		DLC = "Heli";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,0,0,1.0,co)", "#(argb,8,8,3)color(1,0,0,1.0,co)"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat", "\A3\Data_f\Lights\Building_LandingLights_Red.rvmat"};
		class MarkerLights: MarkerLights //inherits 1 parameters from bin\config.bin/CfgVehicles/Land_PortableHelipadLight_01_F/MarkerLights, sources - ["A3_Structures_F_Heli_Items_Airport"]
		{
			class Light_1: Light_1 //inherits 14 parameters from bin\config.bin/CfgVehicles/Land_PortableHelipadLight_01_F/MarkerLights/Light_1, sources - ["A3_Structures_F_Heli_Items_Airport"]
			{
				color[] = {1, 0, 0};
				ambient[] = {0.01, 0, 0};
			};
		};
	};
	class PortableHelipadLight_01_white_F: Land_PortableHelipadLight_01_F //inherits 19 parameters from bin\config.bin/CfgVehicles/Land_PortableHelipadLight_01_F, sources - ["A3_Structures_F_Heli_Items_Airport"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Structures_F_Heli_Items_Airport"]
		{
			eden = 1;
			animate[] = {{"light_1_blinking", 0}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.111;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\PortableHelipadLight_01_white_F.jpg";
		_generalMacro = "PortableHelipadLight_01_white_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "Portable Helipad Light (White)";
		DLC = "Heli";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,1,1,1.0,co)", "#(argb,8,8,3)color(1,1,1,1.0,co)"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat", "\A3\Data_f\Lights\Building_LandingLights_white.rvmat"};
		class MarkerLights: MarkerLights //inherits 1 parameters from bin\config.bin/CfgVehicles/Land_PortableHelipadLight_01_F/MarkerLights, sources - ["A3_Structures_F_Heli_Items_Airport"]
		{
			class Light_1: Light_1 //inherits 14 parameters from bin\config.bin/CfgVehicles/Land_PortableHelipadLight_01_F/MarkerLights/Light_1, sources - ["A3_Structures_F_Heli_Items_Airport"]
			{
				color[] = {1, 1, 1};
				ambient[] = {0.01, 0.01, 0.01};
			};
		};
	};
	class PortableHelipadLight_01_green_F: Land_PortableHelipadLight_01_F //inherits 19 parameters from bin\config.bin/CfgVehicles/Land_PortableHelipadLight_01_F, sources - ["A3_Structures_F_Heli_Items_Airport"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Structures_F_Heli_Items_Airport"]
		{
			eden = 1;
			animate[] = {{"light_1_blinking", 0}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.111;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\PortableHelipadLight_01_green_F.jpg";
		_generalMacro = "PortableHelipadLight_01_green_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "Portable Helipad Light (Green)";
		DLC = "Heli";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0,1,0,1.0,co)", "#(argb,8,8,3)color(0,1,0,1.0,co)"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat", "\A3\Data_f\Lights\Building_LandingLights_Green.rvmat"};
		class MarkerLights: MarkerLights //inherits 1 parameters from bin\config.bin/CfgVehicles/Land_PortableHelipadLight_01_F/MarkerLights, sources - ["A3_Structures_F_Heli_Items_Airport"]
		{
			class Light_1: Light_1 //inherits 14 parameters from bin\config.bin/CfgVehicles/Land_PortableHelipadLight_01_F/MarkerLights/Light_1, sources - ["A3_Structures_F_Heli_Items_Airport"]
			{
				color[] = {0, 1, 0};
				ambient[] = {0, 0.01, 0};
			};
		};
	};
	class PortableHelipadLight_01_yellow_F: Land_PortableHelipadLight_01_F //inherits 19 parameters from bin\config.bin/CfgVehicles/Land_PortableHelipadLight_01_F, sources - ["A3_Structures_F_Heli_Items_Airport"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Structures_F_Heli_Items_Airport"]
		{
			eden = 1;
			animate[] = {{"light_1_blinking", 0}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.111;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\PortableHelipadLight_01_yellow_F.jpg";
		_generalMacro = "PortableHelipadLight_01_yellow_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "Portable Helipad Light (Yellow)";
		DLC = "Heli";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,1,0,1.0,co)", "#(argb,8,8,3)color(1,1,0,1.0,co)"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat", "\A3\Data_f\Lights\Building_LandingLights_Yellow.rvmat"};
		class MarkerLights: MarkerLights //inherits 1 parameters from bin\config.bin/CfgVehicles/Land_PortableHelipadLight_01_F/MarkerLights, sources - ["A3_Structures_F_Heli_Items_Airport"]
		{
			class Light_1: Light_1 //inherits 14 parameters from bin\config.bin/CfgVehicles/Land_PortableHelipadLight_01_F/MarkerLights/Light_1, sources - ["A3_Structures_F_Heli_Items_Airport"]
			{
				color[] = {1, 1, 0};
				ambient[] = {0.01, 0.01, 0};
			};
		};
	};
	class ModuleHvtObjectivesInstance_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_MP_Mark"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleHvtObjectivesInstance_F";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 0;
		displayName = "EndGame Objectives Instance";
		function = "bis_fnc_moduleHvtObjectives";
		functionPriority = 12;
		icon = "\a3\Modules_F\Data\iconStrategicMapImage_ca.paa";
		isDisposable = 0;
		category = "Objectives";
		class Arguments //sources - ["A3_Modules_F_MP_Mark"]
		{
			class EndGameThreshold //sources - ["A3_Modules_F_MP_Mark"]
			{
				displayName = "End Game Threshold";
				description = "The End Game Threshold defines how many objectives a side must complete for the End Game to start";
				typeName = "NUMBER";
				defaultValue = 3;
			};
			class WarmupDelay //sources - ["A3_Modules_F_MP_Mark"]
			{
				displayName = "Warmup Delay";
				description = "The amount of time in seconds players will be locked in the warmup phase at the start of the scenario";
				typeName = "NUMBER";
				defaultValue = 45;
			};
			class EndWhenSideHasNoFob //sources - ["A3_Modules_F_MP_Mark"]
			{
				displayName = "End when side has no FOB";
				description = "Whether the scenario should end if the last phase is triggered and one of the sides has not yet established their FOB, scenario will end with the leading side as winner";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class PhaseOneMusic //sources - ["A3_Modules_F_MP_Mark"]
			{
				displayName = "Phase 1 Music";
				description = "The music to play at the start of phase 1";
				typeName = "STRING";
				defaultValue = "";
			};
			class PhaseTwoMusic //sources - ["A3_Modules_F_MP_Mark"]
			{
				displayName = "Phase 2 Music";
				description = "The music to play at the start of phase 2";
				typeName = "STRING";
				defaultValue = "";
			};
			class PhaseThreeMusic //sources - ["A3_Modules_F_MP_Mark"]
			{
				displayName = "Phase 3 Music";
				description = "The music to play at the start of phase 3";
				typeName = "STRING";
				defaultValue = "";
			};
		};
	};
	class ModuleHvtSimpleObjective_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_MP_Mark"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleHvtSimpleObjective_F";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 0;
		displayName = "End Game Simple Objective";
		function = "bis_fnc_moduleHvtObjectives";
		functionPriority = 12;
		icon = "\a3\Modules_F\Data\iconSector_ca.paa";
		isDisposable = 0;
		category = "Objectives";
		class Arguments //sources - ["A3_Modules_F_MP_Mark"]
		{
			class DownloadObject //sources - ["A3_Modules_F_MP_Mark"]
			{
				displayName = "Downloadable Object";
				description = "The variable name of the object to use as the Downloadable object, with which players interact to complete the objective";
				typeName = "STRING";
				defaultValue = "objNull";
			};
			class DownloadRadius //sources - ["A3_Modules_F_MP_Mark"]
			{
				displayName = "Download Radius";
				description = "The radius limit within which a player must be located from the Downloadable object when downloading. If the player is further than this radius, the download will interrupt.";
				typeName = "NUMBER";
				defaultValue = "10";
			};
			class TaskDescription //sources - ["A3_Modules_F_MP_Mark"]
			{
				displayName = "Task Description";
				description = "The task description for this objective, usually gives a brief introduction about what this objective is about";
				typeName = "STRING";
				defaultValue = "";
			};
			class ImmediateDownload //sources - ["A3_Modules_F_MP_Mark"]
			{
				displayName = "Instant Download";
				description = "Whether the download should be instant, if so, objective is complete when player uses Retrieve Intel action instead of going through the download sequence";
				typeName = "BOOL";
				defaultValue = 0;
			};
			class LinkedLayers //sources - ["A3_Modules_F_MP_Mark"]
			{
				displayName = "Linked Layers";
				description = "Put here 3DEN layer names which are part of this objective, objects within these layers will be deleted in case layer is discarded because of randomization. Uses ARRAY format: [_layer1, _layer2].";
				typeName = "STRING";
				defaultValue = "[]";
			};
		};
	};
	class ModuleHvtStartGameObjective_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_MP_Mark"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleHvtStartGameObjective_F";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 0;
		displayName = "End Game Start Game Objective";
		function = "bis_fnc_moduleHvtObjectives";
		functionPriority = 12;
		icon = "\a3\Modules_F\Data\iconSector_ca.paa";
		isDisposable = 0;
		category = "Objectives";
		class Arguments //sources - ["A3_Modules_F_MP_Mark"]
		{
			class AttackingSide //sources - ["A3_Modules_F_MP_Mark"]
			{
				displayName = "Attacking Side";
				description = "The side that will have to attack and Establish their FOB at this objective";
				typeName = "STRING";
				class values //sources - ["A3_Modules_F_MP_Mark"]
				{
					class WEST //sources - ["A3_Modules_F_MP_Mark"]
					{
						name = "BLUFOR";
						value = "WEST";
						default = 1;
					};
					class EAST //sources - ["A3_Modules_F_MP_Mark"]
					{
						name = "OPFOR";
						value = "EAST";
					};
				};
			};
			class SucceedRadius //sources - ["A3_Modules_F_MP_Mark"]
			{
				displayName = "Succeed Radius";
				description = "The radius from the objective module that there must be no enemy for the objective to be deemed a success";
				typeName = "NUMBER";
				defaultValue = "150";
			};
			class RestrictionRadius //sources - ["A3_Modules_F_MP_Mark"]
			{
				displayName = "Restriction Radius";
				description = "The radius from which players must be from the FOB when trying to establish it, if players leave their radius, they are considered renegade and killed";
				typeName = "NUMBER";
				defaultValue = "500";
			};
			class Speaker //sources - ["A3_Modules_F_MP_Mark"]
			{
				displayName = "Speaker";
				description = "The unit or logic that should be used HQ voice acting";
				typeName = "STRING";
				defaultValue = "objNull";
			};
			class LinkedLayers //sources - ["A3_Modules_F_MP_Mark"]
			{
				displayName = "Linked Layers";
				description = "Put here 3DEN layer names which are part of this objective, objects within these layers will be deleted in case layer is discarded because of randomization. Uses ARRAY format: [_layer1, _layer2].";
				typeName = "STRING";
				defaultValue = "[]";
			};
		};
	};
	class ModuleHvtEndGameObjective_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_MP_Mark"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleHvtEndGameObjective_F";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 0;
		displayName = "End Game - End Game Objective";
		function = "bis_fnc_moduleHvtObjectives";
		functionPriority = 12;
		icon = "\a3\Modules_F\Data\iconSector_ca.paa";
		isDisposable = 0;
		category = "Objectives";
		class Arguments //sources - ["A3_Modules_F_MP_Mark"]
		{
			class TimeLimit //sources - ["A3_Modules_F_MP_Mark"]
			{
				displayName = "Time Limit";
				description = "The maximum time the match can be in the last End Game objective, after timer running out the match will end as a Draw";
				typeName = "NUMBER";
				defaultValue = "1200";
			};
			class PickupObjects //sources - ["A3_Modules_F_MP_Mark"]
			{
				displayName = "Pickup Objects";
				description = "The list of possible objects to use for initial schematics pickup, for the leading side";
				typeName = "STRING";
				defaultValue = "[]";
			};
			class UploadObjects //sources - ["A3_Modules_F_MP_Mark"]
			{
				displayName = "Upload Objects";
				description = "The list of possible objects to use for uploading schematics";
				typeName = "STRING";
				defaultValue = "[]";
			};
			class UploadRadius //sources - ["A3_Modules_F_MP_Mark"]
			{
				displayName = "Upload Radius";
				description = "The radius limit within which a player must be located from the Uploadable object when uploading. If the player is further than this radius, the upload will interrupt.";
				typeName = "NUMBER";
				defaultValue = "10";
			};
			class LinkedLayers //sources - ["A3_Modules_F_MP_Mark"]
			{
				displayName = "Linked Layers";
				description = "Put here 3DEN layer names which are part of this objective, objects within these layers will be deleted in case layer is discarded because of randomization. Uses ARRAY format: [_layer1, _layer2].";
				typeName = "STRING";
				defaultValue = "[]";
			};
		};
	};
	class ModuleHvtObjectiveRandomiser_F: Logic //inherits 15 parameters from bin\config.bin/CfgVehicles/Logic, sources - ["A3_Modules_F_MP_Mark"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleHvtObjectiveRandomiser_F";
		displayName = "End Game - Objective Randomizer";
		scope = 2;
		vehicleClass = "SystemMisc";
	};
	class Land_NavigLight_3_short_F: Land_NavigLight_3_F //inherits 7 parameters from bin\config.bin/CfgVehicles/Land_NavigLight_3_F, sources - ["A3_Structures_F_Exp_Infrastructure_Runways"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Structures_F_Exp_Infrastructure_Runways"]
		{
			eden = 0;
			animate[] = {{"light_1_blinking", 0}, {"light_2_blinking", 0}, {"light_3_blinking", 0}};
			hide[] = {};
			verticalOffset = 0.594;
			verticalOffsetWorld = 0;
		};
		_generalMacro = "Land_NavigLight_3_short_F";
		model = "\A3\Structures_F_Exp\Infrastructure\Runways\NavigLight_3_short_F.p3d";
		DLC = "Expansion";
	};
	class CamoNet_ghex_F: CamoNet_BLUFOR_F //inherits 12 parameters from bin\config.bin/CfgVehicles/CamoNet_BLUFOR_F, sources - ["A3_Structures_F_Exp_Military_Camonets"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Structures_F_Exp_Military_Camonets"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.256;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\CamoNet_ghex_F.jpg";
		_generalMacro = "CamoNet_ghex_F";
		scope = 2;
		scopeCurator = 0;
		displayName = "Camouflage Net (Green Hex)";
		DLC = "Expansion";
		editorCategory = "EdCat_Structures_Tanoa";
		faction = "OPF_T_F";
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Exp\Military\Camonets\Data\CamoNet_ghex_CA.paa"};
	};
	class CamoNet_ghex_open_F: CamoNet_ghex_F //inherits 11 parameters from bin\config.bin/CfgVehicles/CamoNet_ghex_F, sources - ["A3_Structures_F_Exp_Military_Camonets"]
	{
		author = "Bohemia Interactive";
		mapSize = 21.58;
		class SimpleObject //sources - ["A3_Structures_F_Exp_Military_Camonets"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.123;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\CamoNet_ghex_open_F.jpg";
		_generalMacro = "CamoNet_ghex_open_F";
		displayName = "Camouflage Net (Open, Green Hex)";
		model = "\A3\Structures_F\Mil\Shelters\CamoNet_open_F.p3d";
		DLC = "Expansion";
	};
	class CamoNet_ghex_big_F: CamoNet_ghex_F //inherits 11 parameters from bin\config.bin/CfgVehicles/CamoNet_ghex_F, sources - ["A3_Structures_F_Exp_Military_Camonets"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Structures_F_Exp_Military_Camonets"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 2.07;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\CamoNet_ghex_big_F.jpg";
		_generalMacro = "CamoNet_ghex_big_F";
		displayName = "Camouflage Vehicle Cover (Green Hex)";
		model = "\A3\Structures_F\Mil\Shelters\CamoNet_Big_F.p3d";
		DLC = "Expansion";
		icon = "\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_Big_CA.paa";
	};
	class CamoNet_ghex_Curator_F: CamoNet_ghex_F //inherits 11 parameters from bin\config.bin/CfgVehicles/CamoNet_ghex_F, sources - ["A3_Structures_F_Exp_Military_Camonets"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Structures_F_Exp_Military_Camonets"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.256;
			verticalOffsetWorld = 0;
		};
		_generalMacro = "CamoNet_ghex_Curator_F";
		scope = 1;
		scopeCurator = 2;
		DLC = "Expansion";
		faction = "Default";
	};
	class CamoNet_ghex_open_Curator_F: CamoNet_ghex_open_F //inherits 8 parameters from bin\config.bin/CfgVehicles/CamoNet_ghex_open_F, sources - ["A3_Structures_F_Exp_Military_Camonets"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Structures_F_Exp_Military_Camonets"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.123;
			verticalOffsetWorld = 0;
		};
		_generalMacro = "CamoNet_ghex_open_Curator_F";
		scope = 1;
		scopeCurator = 2;
		DLC = "Expansion";
		faction = "Default";
	};
	class CamoNet_ghex_big_Curator_F: CamoNet_ghex_big_F //inherits 8 parameters from bin\config.bin/CfgVehicles/CamoNet_ghex_big_F, sources - ["A3_Structures_F_Exp_Military_Camonets"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Structures_F_Exp_Military_Camonets"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 2.07;
			verticalOffsetWorld = 0;
		};
		_generalMacro = "CamoNet_ghex_big_Curator_F";
		scope = 1;
		scopeCurator = 2;
		DLC = "Expansion";
		faction = "Default";
	};
	class B_T_Boat_Armed_01_minigun_F: B_Boat_Armed_01_minigun_F //inherits 12 parameters from bin\config.bin/CfgVehicles/B_Boat_Armed_01_minigun_F, sources - ["A3_Boat_F_Exp_Boat_Armed_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Boat_F_Exp_Boat_Armed_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"turret_shake", 0}, {"turret_shake_aside", 0}, {"magazine_hide", 0}, {"mainturret", 0}, {"damagehideotocvez", 0}, {"maingun", 0.09}, {"damagehideotochlaven", 0}, {"rearturret", -3.16}, {"reargun", 0.09}, {"muzzleflash", 0}, {"zaslehrot", 0}, {"zasleh2rot", 0}, {"fuel", 1}, {"mph", 0.04}, {"rpm", 0}, {"amps_random", 0}, {"oil_random", 0}, {"trim_random", 0.04}, {"tmp_random", 0}, {"volt_random", 0.04}, {"drivingwheel", 0}, {"ammobelt_hide", 0}, {"bullet001_2_hide", 0.33}, {"bullet002_2_hide", 0.33}, {"bullet003_2_hide", 0.33}, {"bullet004_2_hide", 0.33}, {"bullet005_2_hide", 0.33}, {"bullet006_2_hide", 0.33}, {"positionlights", 0}, {"gun_revolving", 0.33}, {"muzzleflash2", 0}};
			hide[] = {"zasleh", "p svetlo", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 3.153;
			verticalOffsetWorld = -0.445;
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Boat_Armed_01_minigun_F.jpg";
		_generalMacro = "B_T_Boat_Armed_01_minigun_F";
		scope = 2;
		scopeCurator = 2;
		DLC = "Expansion";
		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_Soldier_F";
		typicalCargo[] = {"B_T_Soldier_F", "B_T_Soldier_F"};
	};
	class O_T_Boat_Armed_01_hmg_F: O_Boat_Armed_01_hmg_F //inherits 13 parameters from bin\config.bin/CfgVehicles/O_Boat_Armed_01_hmg_F, sources - ["A3_Boat_F_Exp_Boat_Armed_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Boat_F_Exp_Boat_Armed_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"barrel_recoil", 0}, {"bolt_recoil", 0}, {"turret_shake", 0}, {"turret_shake_aside", 0}, {"magazine_hide", 0}, {"mainturret", 0}, {"damagehideotocvez", 0}, {"maingun", 0.09}, {"damagehideotochlaven", 0}, {"rearturret", -3.16}, {"reargun", 0.09}, {"muzzleflash", 0}, {"zaslehrot", 0}, {"muzzleflash2", 0}, {"zasleh2rot", 0}, {"fuel", 1}, {"mph", 0.04}, {"rpm", 0}, {"amps_random", 0}, {"oil_random", 0}, {"trim_random", 0.04}, {"tmp_random", 0}, {"volt_random", 0.04}, {"drivingwheel", 0}, {"ammo_belt_2_rotation_prep", 0}, {"ammo_belt_2_rotation_main", 0}, {"ammobelt_hide", 0}, {"bullet001_2_hide", 1}, {"bullet002_2_hide", 1}, {"bullet003_2_hide", 1}, {"bullet004_2_hide", 1}, {"bullet005_2_hide", 1}, {"bullet006_2_hide", 1}, {"muzzle1_shake", 0}, {"muzzle1_shake_back", 0}, {"bolt_move_2", 0}, {"positionlights", 0}};
			hide[] = {"zasleh", "p svetlo", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 3.14;
			verticalOffsetWorld = -0.453;
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Boat_Armed_01_hmg_F.jpg";
		_generalMacro = "O_T_Boat_Armed_01_hmg_F";
		scope = 2;
		scopeCurator = 2;
		DLC = "Expansion";
		side = 0;
		faction = "OPF_T_F";
		crew = "O_T_Soldier_F";
		typicalCargo[] = {"O_T_Soldier_F", "O_T_Soldier_F"};
	};
	class O_T_Boat_Transport_01_F: Rubber_duck_base_F //inherits 85 parameters from bin\config.bin/CfgVehicles/Rubber_duck_base_F, sources - ["A3_Boat_F_Exp_Boat_Transport_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Boat_F_Exp_Boat_Transport_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"damagehide_zbytek", 0}, {"damage_unhide", 0}, {"drivingwheel", 0}, {"propeller", 0}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.245;
			verticalOffsetWorld = -0.02;
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Boat_Transport_01_F.jpg";
		_generalMacro = "O_T_Boat_Transport_01_F";
		scope = 2;
		scopeCurator = 2;
		DLC = "Expansion";
		side = 0;
		faction = "OPF_T_F";
		crew = "O_T_Soldier_F";
		typicalCargo[] = {"O_T_Soldier_F", "O_T_Soldier_F"};
		textureList[] = {"Hex", 1};
		hiddenSelectionsTextures[] = {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_OPFOR_CO.paa"};
	};
	class I_C_Boat_Transport_01_F: Rubber_duck_base_F //inherits 85 parameters from bin\config.bin/CfgVehicles/Rubber_duck_base_F, sources - ["A3_Boat_F_Exp_Boat_Transport_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Boat_F_Exp_Boat_Transport_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"damagehide_zbytek", 0}, {"damage_unhide", 0}, {"drivingwheel", 0}, {"propeller", 0}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.245;
			verticalOffsetWorld = -0.02;
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\I_C_Boat_Transport_01_F.jpg";
		_generalMacro = "I_C_Boat_Transport_01_F";
		scope = 2;
		scopeCurator = 2;
		DLC = "Expansion";
		side = 2;
		faction = "IND_C_F";
		crew = "I_C_Soldier_Bandit_5_F";
		typicalCargo[] = {"I_C_Soldier_Bandit_1_F", "I_C_Soldier_Bandit_4_F"};
		textureList[] = {"Black", 1};
		hiddenSelectionsTextures[] = {"\a3\boat_f\boat_transport_01\data\boat_transport_01_co.paa"};
	};
	class B_T_Boat_Transport_01_F: B_Boat_Transport_01_F //inherits 11 parameters from bin\config.bin/CfgVehicles/B_Boat_Transport_01_F, sources - ["A3_Boat_F_Exp_Boat_Transport_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Boat_F_Exp_Boat_Transport_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"damagehide_zbytek", 0}, {"damage_unhide", 0}, {"drivingwheel", 0}, {"propeller", 0}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.245;
			verticalOffsetWorld = -0.02;
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Boat_Transport_01_F.jpg";
		_generalMacro = "B_T_Boat_Transport_01_F";
		scope = 2;
		scopeCurator = 2;
		DLC = "Expansion";
		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_Soldier_F";
		typicalCargo[] = {"B_T_Soldier_F", "B_T_Soldier_F"};
	};
	class B_T_Lifeboat: B_Lifeboat //inherits 10 parameters from bin\config.bin/CfgVehicles/B_Lifeboat, sources - ["A3_Boat_F_Exp_Boat_Transport_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Boat_F_Exp_Boat_Transport_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"damagehide_zbytek", 0}, {"damage_unhide", 0}, {"drivingwheel", 0}, {"propeller", 0}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.245;
			verticalOffsetWorld = -0.02;
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Lifeboat.jpg";
		_generalMacro = "B_T_Lifeboat";
		scope = 2;
		scopeCurator = 2;
		DLC = "Expansion";
		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_Soldier_F";
		typicalCargo[] = {"B_T_Soldier_F", "B_T_Soldier_F"};
	};
	class O_T_Lifeboat: O_Lifeboat //inherits 9 parameters from bin\config.bin/CfgVehicles/O_Lifeboat, sources - ["A3_Boat_F_Exp_Boat_Transport_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Boat_F_Exp_Boat_Transport_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"damagehide_zbytek", 0}, {"damage_unhide", 0}, {"drivingwheel", 0}, {"propeller", 0}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.245;
			verticalOffsetWorld = -0.02;
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Lifeboat.jpg";
		_generalMacro = "O_T_Lifeboat";
		scope = 2;
		scopeCurator = 2;
		DLC = "Expansion";
		side = 0;
		faction = "OPF_T_F";
		crew = "O_T_Soldier_F";
		typicalCargo[] = {"O_T_Soldier_F", "O_T_Soldier_F"};
	};
	class Boat_Transport_02_base_F: Boat_F //inherits 9 parameters from bin\config.bin/CfgVehicles/Boat_F, sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
	{
		author = "Bohemia Interactive";
		mapSize = 8.1;
		_generalMacro = "Boat_Transport_02_base_F";
		scope = 0;
		scopeCurator = 0;
		displayName = "RHIB";
		model = "\A3\Boat_F_Exp\Boat_Transport_02\Boat_Transport_02_F.p3d";
		DLC = "Expansion";
		editorSubcategory = "EdSubcat_Boats";
		picture = "\A3\Boat_F_Exp\Boat_Transport_02\Data\UI\Boat_Transport_02_CA.paa";
		icon = "\A3\Boat_F_Exp\Boat_Transport_02\Data\UI\Map_Boat_Transport_02_CA.paa";
		overviewPicture = "\A3\Data_F_Exp\Images\VehicleRHIB_ca.paa";
		class Library //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
		{
			libTextDesc = "The rigid-hulled inflatable boat, (RHIB) is a light-weight but high-performance and high-capacity boat constructed with a solid, shaped hull and flexible tubes at the gunwale. The boat can fit 7 passengers and a driver. RHIB can be used for multiple tasks. It can be a simple transport boat with some countries deploying them for coast guarding. This is in contrast to criminals on Tanoa who uses RHIBs as a fast and small smuggling boat.";
		};
		selectionDamage = "DamT_0";
		memoryPointTaskMarker = "TaskMarker_1_pos";
		hiddenSelections[] = {"Camo_1", "Camo_2"};
		hiddenSelectionsTextures[] = {"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_CO.paa", "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_CO.paa"};
		class TextureSources //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
		{
			class Black //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
			{
				displayName = "Black";
				author = "Bohemia Interactive";
				textures[] = {"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_CO.paa", "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_CO.paa"};
				factions[] = {"BLU_F", "OPF_F", "IND_F", "BLU_G_F", "OPF_G_F", "IND_G_F", "IND_C_F"};
			};
			class Civilian //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
			{
				displayName = "Civilian";
				author = "Bohemia Interactive";
				textures[] = {"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa", "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_civilian_CO.paa"};
				factions[] = {"CIV_F"};
			};
		};
		textureList[] = {"Black", 0, "Civilian", 0};
		class EventHandlers: EventHandlers //inherits 0 parameters from bin\config.bin/CfgVehicles/Ship_F/EventHandlers, sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """""""", [], false] call bis_fnc_initVehicle;};";
		};
		accuracy = 0.5;
		armor = 50;
		crewExplosionProtection = 0;
		cost = 50000;
		threat[] = {0.6, 0.2, 0.3};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1", "SlingLoadCargo2", "SlingLoadCargo3", "SlingLoadCargo4"};
		class Exhausts //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
		{
			class Exhaust1 //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffect";
			};
		};
		class HitPoints //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
		{
			class HitHull //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
			{
				armor = 0.6;
				material = 50;
				name = "Hull_hit";
				visual = "DamT_0";
				passThrough = 1;
			};
			class HitEngine //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
			{
				armor = 1.2;
				material = -1;
				name = "Engine_hit";
				visual = "";
				passThrough = 1;
			};
		};
		engineEffectSpeed = 2;
		leftEngineEffect = "LEngEffectsSmall";
		rightEngineEffect = "REngEffectsSmall";
		memoryPointsLeftEngineEffect = "EngineEffectL";
		memoryPointsRightEngineEffect = "EngineEffectR";
		waterEffectSpeed = 2;
		leftWaterEffect = "LWaterEffects";
		rightWaterEffect = "RWaterEffects";
		memoryPointsLeftWaterEffect = "waterEffectL";
		memoryPointsRightWaterEffect = "waterEffectR";
		waterFastEffectSpeed = 18;
		leftFastWaterEffect = "LFastWaterEffects";
		rightFastWaterEffect = "RFastWaterEffects";
		class TransportItems //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
		{
			class _xx_FirstAidKit //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
			{
				name = "FirstAidKit";
				count = 2;
			};
		};
		attenuationEffectType = "OpenCarAttenuation";
		insideSoundCoef = 0.5;
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_start", 1, 1};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_start", 1, 1, 150};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_stop", 1, 1};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_stop", 1, 1, 150};
		buildCrash0[] = {"A3\sounds_f\Vehicles\boat\noises\Rubber_boat_crash_building_01", 1.77828, 1, 200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\boat\noises\Rubber_boat_crash_building_02", 1.77828, 1, 200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\boat\noises\Rubber_boat_crash_building_03", 1.77828, 1, 200};
		soundBuildingCrash[] = {"buildCrash0", 0.33, "buildCrash1", 0.33, "buildCrash2", 0.34};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\boat\noises\Rubber_boat_crash_wood_01", 1.77828, 1, 200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\boat\noises\Rubber_boat_crash_wood_02", 1.77828, 1, 200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\boat\noises\Rubber_boat_crash_wood_03", 1.77828, 1, 200};
		soundWoodCrash[] = {"woodCrash0", 0.33, "woodCrash1", 0.33, "woodCrash2", 0.34};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\boat\noises\Rubber_boat_crash_armor_01", 3.16228, 1, 200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\boat\noises\Rubber_boat_crash_armor_02", 3.16228, 1, 200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\boat\noises\Rubber_boat_crash_armor_03", 3.16228, 1, 200};
		soundArmorCrash[] = {"ArmorCrash0", 0.33, "ArmorCrash1", 0.33, "ArmorCrash2", 0.34};
		soundGeneralCollision1[] = {"A3\sounds_f\Vehicles\boat\noises\Rubber_boat_crash_armor_01", 1.77828, 1, 100};
		soundGeneralCollision2[] = {"A3\sounds_f\Vehicles\boat\noises\Rubber_boat_crash_armor_02", 1.77828, 1, 100};
		soundGeneralCollision3[] = {"A3\sounds_f\Vehicles\boat\noises\Rubber_boat_crash_armor_03", 1.77828, 1, 100};
		soundCrashes[] = {"soundGeneralCollision1", 0.33, "soundGeneralCollision2", 0.33, "soundGeneralCollision3", 0.34};
		class Sounds //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
		{
			class IdleOut //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_idle_1", 0.446684, 1, 150};
				frequency = "0.95	+	((rpm/	1200) factor[(100/	1200),(200/	1200)])*0.15";
				volume = "engineOn*(((rpm/	1200) factor[(0/	1200),(30/	1200)])	*	((rpm/	1200) factor[(500/	1200),(300/	1200)]))";
			};
			class Engine //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_low2", 0.562341, 1.2, 300};
				frequency = "0.95	+	((rpm/	1200) factor[(300/	1200),(600/	1200)])*0.2";
				volume = "engineOn*(((rpm/	1200) factor[(200/	1200),(300/	1200)])	*	((rpm/	1200) factor[(600/	1200),(400/	1200)]))";
			};
			class EngineMidOut //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_mid2", 0.707946, 0.6, 400};
				frequency = "0.95	+	((rpm/	1200) factor[(600/	1200),(900/	1200)])*0.2";
				volume = "engineOn*(((rpm/	1200) factor[(350/	1200),(500/	1200)])	*	((rpm/	1200) factor[(1200/	1200),(900/	1200)]))";
			};
			class EngineMaxOut //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_high2", 1, 1, 500};
				frequency = "0.95	+	((rpm/	1200) factor[(700/	1200),(1000/	1200)])*0.3";
				volume = "engineOn*((rpm/	1200) factor[(600/	1200),(1200/	1200)])";
			};
			class WaternoiseOutW0 //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1", 1, 1, 100};
				frequency = "1";
				volume = "(speed factor[4, 1]) * water";
			};
			class WaternoiseOutW1 //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed", 1, 1, 150};
				frequency = "1";
				volume = "((speed factor[2, 6]) min (speed factor[6, 4]))";
			};
			class WaternoiseOutW2 //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed", 1, 1, 300};
				frequency = "1";
				volume = "(speed factor[3, 9])";
			};
			class WaternoiseOutW3 //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1", 1, 1, 100};
				frequency = "1";
				volume = "(speed factor[-4, -1]) * water";
			};
			class WaternoiseOutW4 //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed", 1, 0.9, 150};
				frequency = "1";
				volume = "((speed factor[-2, -6]) min (speed factor[-6, -4]))";
			};
			class WaternoiseOutW5 //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed", 1, 0.9, 300};
				frequency = "1";
				volume = "(speed factor[-3, -9])";
			};
			class scrubLandExt //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\noises\boat_land_on_shallow", 1.77828, 0.95, 100};
				frequency = 1;
				volume = "(scrubLand factor[0.01, 0.20])";
			};
			class RainExt //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain2_ext", 1, 1, 100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain2_ext", 1, 1, 100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		supplyRadius = 3;
		fuelExplosionPower = 0;
		extCameraPosition[] = {0, 2, -12};
		enableGPS = 1;
		enableRadio = 1;
		transportSoldier = 0;
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};
		driverLeftHandAnimName = "SteeringWheel";
		driverRightHandAnimName = "GearStick";
		driverAction = "driver_boat_transport_02";
		memoryPointsGetInDriver = "Driver_pos";
		memoryPointsGetInDriverDir = "Driver_dir";
		cargoAction[] = {"passenger_bench_1"};
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		castDriverShadow = 1;
		castCargoShadow = 1;
		ejectDeadDriver = 0;
		ejectDeadCargo = 0;
		maxSpeed = 95;
		simulation = "shipX";
		overSpeedBrakeCoef = 0.5;
		thrustDelay = 0.5;
		enginePower = 150;
		engineShiftY = 1;
		waterLeakiness = 0.1;
		waterResistance = 3;
		waterResistanceCoef = 0.002;
		waterLinearDampingCoefX = 1;
		waterLinearDampingCoefY = 4;
		waterAngularDampingCoef = 1;
		rudderForceCoef = 0.1;
		rudderForceCoefAtMaxSpeed = 0.002;
		idleRpm = 200;
		redRpm = 1050;
		brakeDistance = 5;
		class ComplexGearbox //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
		{
			GearboxRatios[] = {"R1", -5.5, "N", 0, "D1", 2, "D2", 1.75, "D3", 1.6, "D4", 1.46, "D5", 1.32, "D6", 1.25};
			TransmissionRatios[] = {"High", 1};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		class Turrets //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
		{
			class CargoTurret_01: CargoTurret //inherits 28 parameters from bin\config.bin/CfgVehicles/AllVehicles/CargoTurret, sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
			{
				gunnerAction = "passenger_inside_4";
				gunnerCompartments = "Compartment1";
				gunnerName = "Passenger (Front Seat)";
				memoryPointsGetInGunner = "Cargo_R1_pos";
				memoryPointsGetInGunnerDir = "Cargo_R1_dir";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				proxyIndex = 1;
				class TurnIn //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
				{
					limitsArrayTop[] = {{45, -59.6742}, {44.9695, 71.7652}};
					limitsArrayBottom[] = {{-6.0388, -49.0694}, {-3.9569, 14.1482}, {-0.6777, 26.3771}, {4.9229, 33.6349}, {-0.654, 40.6851}, {-2.8846, 40.7948}, {-6.1008, 42.9115}, {-10.9317, 67.6853}};
				};
				class TurnOut //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
				{
					limitsArrayTop[] = {{45, -59.6742}, {44.9695, 71.7652}};
					limitsArrayBottom[] = {{-6.0388, -49.0694}, {-3.9569, 14.1482}, {-0.6777, 26.3771}, {4.9229, 33.6349}, {-0.654, 40.6851}, {-2.8846, 40.7948}, {-6.1008, 42.9115}, {-10.9317, 67.6853}};
				};
				isPersonTurret = 1;
				class DynamicViewLimits //sources - []
				{
				};
			};
			class CargoTurret_02: CargoTurret_01 //inherits 12 parameters from bin\config.bin/CfgVehicles/Boat_Transport_02_base_F/Turrets/CargoTurret_01, sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
			{
				gunnerAction = "passenger_inside_5";
				gunnerName = "Passenger (Left Seat 1)";
				memoryPointsGetInGunner = "Cargo_L1_pos";
				memoryPointsGetInGunnerDir = "Cargo_L1_dir";
				proxyIndex = 2;
				class TurnIn //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
				{
					limitsArrayTop[] = {{44.8832, -24.2533}, {44.852, 95}};
					limitsArrayBottom[] = {{-6.1384, -23.5436}, {-9.049, -13.7683}, {-23.6249, 94.8963}};
				};
				class TurnOut //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
				{
					limitsArrayTop[] = {{44.8832, -24.2533}, {44.852, 95}};
					limitsArrayBottom[] = {{-6.1384, -23.5436}, {-9.049, -13.7683}, {-23.6249, 94.8963}};
				};
			};
			class CargoTurret_03: CargoTurret_01 //inherits 12 parameters from bin\config.bin/CfgVehicles/Boat_Transport_02_base_F/Turrets/CargoTurret_01, sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
			{
				gunnerAction = "passenger_inside_6";
				gunnerName = "Passenger (Left Seat 2)";
				memoryPointsGetInGunner = "Cargo_L2_pos";
				memoryPointsGetInGunnerDir = "Cargo_L2_dir";
				proxyIndex = 3;
				class TurnIn //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
				{
					limitsArrayTop[] = {{32.5493, -65.7749}, {44.8599, 22.8671}, {19.293, 58.4913}};
					limitsArrayBottom[] = {{-21.919, -72.6337}, {-12.751, -48.6144}, {-11.6734, -44.7053}, {-9.5048, -42.8153}, {-12.0638, -41.3846}, {-13.0574, -35.2446}, {-44.9826, 94.8917}};
				};
				class TurnOut //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
				{
					limitsArrayTop[] = {{32.5493, -65.7749}, {44.8599, 22.8671}, {19.293, 58.4913}};
					limitsArrayBottom[] = {{-21.919, -72.6337}, {-12.751, -48.6144}, {-11.6734, -44.7053}, {-9.5048, -42.8153}, {-12.0638, -41.3846}, {-13.0574, -35.2446}, {-44.9826, 94.8917}};
				};
			};
			class CargoTurret_04: CargoTurret_01 //inherits 12 parameters from bin\config.bin/CfgVehicles/Boat_Transport_02_base_F/Turrets/CargoTurret_01, sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
			{
				gunnerAction = "passenger_inside_2";
				gunnerName = "Passenger (Left Seat 3)";
				memoryPointsGetInGunner = "Cargo_L3_pos";
				memoryPointsGetInGunnerDir = "Cargo_L3_dir";
				proxyIndex = 4;
				class TurnIn //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
				{
					limitsArrayTop[] = {{21.796, -45.8863}, {45, 94.8864}};
					limitsArrayBottom[] = {{-12.6797, -62.4199}, {-27.7692, 17.0141}, {-22.5081, 34.8194}, {-15.1591, 53.5865}, {-15.7145, 87.1145}};
				};
				class TurnOut //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
				{
					limitsArrayTop[] = {{21.796, -45.8863}, {45, 94.8864}};
					limitsArrayBottom[] = {{-12.6797, -62.4199}, {-27.7692, 17.0141}, {-22.5081, 34.8194}, {-15.1591, 53.5865}, {-15.7145, 87.1145}};
				};
			};
			class CargoTurret_05: CargoTurret_01 //inherits 12 parameters from bin\config.bin/CfgVehicles/Boat_Transport_02_base_F/Turrets/CargoTurret_01, sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
			{
				gunnerAction = "passenger_inside_2";
				gunnerName = "Passenger (Right Seat 3)";
				memoryPointsGetInGunner = "Cargo_R4_pos";
				memoryPointsGetInGunnerDir = "Cargo_R4_dir";
				proxyIndex = 5;
				class TurnIn //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
				{
					limitsArrayTop[] = {{44.2903, -50.6451}, {35.7843, 63.7861}};
					limitsArrayBottom[] = {{-20.2933, -47.4033}, {-6.0788, 78.3408}};
				};
				class TurnOut //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
				{
					limitsArrayTop[] = {{44.2903, -50.6451}, {35.7843, 63.7861}};
					limitsArrayBottom[] = {{-20.2933, -47.4033}, {-6.0788, 78.3408}};
				};
			};
			class CargoTurret_06: CargoTurret_01 //inherits 12 parameters from bin\config.bin/CfgVehicles/Boat_Transport_02_base_F/Turrets/CargoTurret_01, sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
			{
				gunnerAction = "passenger_inside_6";
				gunnerName = "Passenger (Right Seat 2)";
				memoryPointsGetInGunner = "Cargo_R3_pos";
				memoryPointsGetInGunnerDir = "Cargo_R3_dir";
				proxyIndex = 6;
				class TurnIn //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
				{
					limitsArrayTop[] = {{-1.339, -76.7673}, {43.1911, -32.9818}, {44.9304, -12.879}, {33.1746, 22.7103}, {31.9945, 59.9888}};
					limitsArrayBottom[] = {{-44.9789, -45.5263}, {-42.2846, 17.7026}, {-12.3181, 61.9292}};
				};
				class TurnOut //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
				{
					limitsArrayTop[] = {{-1.339, -76.7673}, {43.1911, -32.9818}, {44.9304, -12.879}, {33.1746, 22.7103}, {31.9945, 59.9888}};
					limitsArrayBottom[] = {{-44.9789, -45.5263}, {-42.2846, 17.7026}, {-12.3181, 61.9292}};
				};
			};
			class CargoTurret_07: CargoTurret_01 //inherits 12 parameters from bin\config.bin/CfgVehicles/Boat_Transport_02_base_F/Turrets/CargoTurret_01, sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
			{
				gunnerAction = "passenger_inside_5";
				gunnerName = "Passenger (Right Seat 1)";
				memoryPointsGetInGunner = "Cargo_R2_pos";
				memoryPointsGetInGunnerDir = "Cargo_R2_dir";
				proxyIndex = 7;
				class TurnIn //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
				{
					limitsArrayTop[] = {{45, -34.6533}, {43.6403, 61.8888}};
					limitsArrayBottom[] = {{-18.2701, -23.6688}, {-24.2828, -17.4823}, {-22.9042, 3.3474}, {-22.5713, 22.0557}};
				};
				class TurnOut //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
				{
					limitsArrayTop[] = {{45, -34.6533}, {43.6403, 61.8888}};
					limitsArrayBottom[] = {{-18.2701, -23.6688}, {-24.2828, -17.4823}, {-22.9042, 3.3474}, {-22.5713, 22.0557}};
				};
			};
		};
		class Damage //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
		{
			tex[] = {};
			mat[] = {"A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior.rvmat", "A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_damage.rvmat", "A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_destruct.rvmat", "A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_1.rvmat", "A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_1_damage.rvmat", "A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_1_destruct.rvmat", "A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2.rvmat", "A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_damage.rvmat", "A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_destruct.rvmat", "A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_controls.rvmat", "A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_controls_damage.rvmat", "A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_controls_destruct.rvmat"};
		};
	};
	class B_G_Boat_Transport_02_F: Boat_Transport_02_base_F //inherits 107 parameters from bin\config.bin/CfgVehicles/Boat_Transport_02_base_F, sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
		{
			eden = 0;
			animate[] = {{"compass_rot", 0.02}, {"engine_rot", 0}, {"gearstick_rot", 0}, {"propeller_rot", 0}, {"steeringwheel_rot", 0}, {"fuel_rot", 1}, {"mph_rot", 0}, {"oil_rot", 1}, {"rpm_rot", 0}, {"trim_rot", 0}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.14;
			verticalOffsetWorld = 0.157;
		};
		_generalMacro = "B_G_Boat_Transport_02_F";
		scope = 1;
		scopeCurator = 0;
		DLC = "Expansion";
		side = 1;
		faction = "BLU_G_F";
		crew = "B_G_Soldier_F";
		typicalCargo[] = {"B_G_Soldier_F", "B_G_Soldier_F"};
		textureList[] = {"Black", 1};
		hiddenSelectionsTextures[] = {"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_CO.paa", "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_CO.paa"};
	};
	class O_G_Boat_Transport_02_F: Boat_Transport_02_base_F //inherits 107 parameters from bin\config.bin/CfgVehicles/Boat_Transport_02_base_F, sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
		{
			eden = 0;
			animate[] = {{"compass_rot", 0.02}, {"engine_rot", 0}, {"gearstick_rot", 0}, {"propeller_rot", 0}, {"steeringwheel_rot", 0}, {"fuel_rot", 1}, {"mph_rot", 0}, {"oil_rot", 1}, {"rpm_rot", 0}, {"trim_rot", 0}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.14;
			verticalOffsetWorld = 0.157;
		};
		_generalMacro = "O_G_Boat_Transport_02_F";
		scope = 1;
		scopeCurator = 0;
		DLC = "Expansion";
		side = 0;
		faction = "OPF_G_F";
		crew = "O_G_Soldier_F";
		typicalCargo[] = {"O_G_Soldier_F", "O_G_Soldier_F"};
		textureList[] = {"Black", 1};
		hiddenSelectionsTextures[] = {"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_CO.paa", "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_CO.paa"};
	};
	class I_G_Boat_Transport_02_F: Boat_Transport_02_base_F //inherits 107 parameters from bin\config.bin/CfgVehicles/Boat_Transport_02_base_F, sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
		{
			eden = 0;
			animate[] = {{"compass_rot", 0.01}, {"engine_rot", 0}, {"gearstick_rot", 0}, {"propeller_rot", 0}, {"steeringwheel_rot", 0}, {"fuel_rot", 1}, {"mph_rot", 0}, {"oil_rot", 1}, {"rpm_rot", 0}, {"trim_rot", 0}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.14;
			verticalOffsetWorld = 0.156;
		};
		_generalMacro = "I_G_Boat_Transport_02_F";
		scope = 1;
		scopeCurator = 0;
		DLC = "Expansion";
		side = 2;
		faction = "IND_G_F";
		crew = "I_G_Soldier_F";
		typicalCargo[] = {"I_G_Soldier_F", "I_G_Soldier_F"};
		textureList[] = {"Black", 1};
		hiddenSelectionsTextures[] = {"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_CO.paa", "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_CO.paa"};
	};
	class I_C_Boat_Transport_02_F: Boat_Transport_02_base_F //inherits 107 parameters from bin\config.bin/CfgVehicles/Boat_Transport_02_base_F, sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
		{
			eden = 1;
			animate[] = {{"compass_rot", 0.01}, {"engine_rot", 0}, {"gearstick_rot", 0}, {"propeller_rot", 0}, {"steeringwheel_rot", 0}, {"fuel_rot", 1}, {"mph_rot", 0}, {"oil_rot", 1}, {"rpm_rot", 0}, {"trim_rot", 0}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.14;
			verticalOffsetWorld = 0.156;
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\I_C_Boat_Transport_02_F.jpg";
		_generalMacro = "I_C_Boat_Transport_02_F";
		scope = 2;
		scopeCurator = 2;
		DLC = "Expansion";
		side = 2;
		faction = "IND_C_F";
		crew = "I_C_Soldier_Para_4_F";
		typicalCargo[] = {"I_C_Soldier_Para_3_F", "I_C_Soldier_Para_3_F"};
		textureList[] = {"Black", 1};
		hiddenSelectionsTextures[] = {"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_CO.paa", "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_CO.paa"};
	};
	class C_Boat_Transport_02_F: Boat_Transport_02_base_F //inherits 107 parameters from bin\config.bin/CfgVehicles/Boat_Transport_02_base_F, sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Boat_F_Exp_Boat_Transport_02"]
		{
			eden = 1;
			animate[] = {{"compass_rot", 0}, {"engine_rot", 0}, {"gearstick_rot", 0}, {"propeller_rot", 0}, {"steeringwheel_rot", 0}, {"fuel_rot", 1}, {"mph_rot", 0}, {"oil_rot", 1}, {"rpm_rot", 0}, {"trim_rot", 0}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.14;
			verticalOffsetWorld = 0.156;
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\C_Boat_Transport_02_F.jpg";
		_generalMacro = "C_Boat_Transport_02_F";
		scope = 2;
		scopeCurator = 2;
		DLC = "Expansion";
		side = 3;
		faction = "CIV_F";
		crew = "C_man_sport_1_F_tanoan";
		typicalCargo[] = {"C_man_sport_1_F_tanoan", "C_man_sport_1_F_tanoan"};
		textureList[] = {"Civilian", 1};
		hiddenSelectionsTextures[] = {"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa", "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_civilian_CO.paa"};
	};
	class Scooter_Transport_01_base_F: Rubber_duck_base_F //inherits 85 parameters from bin\config.bin/CfgVehicles/Rubber_duck_base_F, sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
	{
		author = "Bohemia Interactive";
		mapSize = 3.45;
		_generalMacro = "Scooter_Transport_01_base_F";
		scope = 0;
		scopeCurator = 0;
		displayName = "Water Scooter";
		overviewPicture = "\A3\Data_F_Exp\Images\VehicleWaterScooter_ca.paa";
		model = "\A3\Boat_F_Exp\Scooter_Transport_01\Scooter_Transport_01_F.p3d";
		picture = "\A3\Boat_F_Exp\Scooter_Transport_01\Data\UI\Scooter_Transport_01_CA.paa";
		DLC = "Expansion";
		class Library //sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
		{
			libTextDesc = "Personal watercraft (PWC) of the sit-down type. This small-hulled craft driven by a jet-propulsion system offers seats for 3 people and is easy to mount or dismount on the water thanks to the open stern construction. The powerful engine and great maneuverability makes this craft truly fun to ride. And of course it is a small and useful water transport vehicle for military use as well.";
		};
		editorSubcategory = "EdSubcat_Boats";
		extCameraPosition[] = {0, 0.5, -7};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1", "SlingLoadCargo2", "SlingLoadCargo3", "SlingLoadCargo4"};
		memoryPointTaskMarker = "TaskMarker_1_pos";
		leftWaterEffect = "LWaterEffectsScooter";
		rightWaterEffect = "RWaterEffectsScooter";
		leftEngineEffect = "LEngEffectsScooter";
		rightEngineEffect = "REngEffectsScooter";
		leftFastWaterEffect = "LFastWaterEffectsScooter";
		rightFastWaterEffect = "RFastWaterEffectsScooter";
		waterEffectSpeed = 5;
		engineEffectSpeed = 5;
		waterFastEffectSpeed = 28;
		ejectDeadCargo = 1;
		ejectDeadDriver = 0;
		driverAction = "driver_scooter_01";
		cargoAction[] = {"passenger_scooter_01", "passenger_scooter_02"};
		driverLeftHandAnimName = "DrivingWheel";
		driverRightHandAnimName = "DrivingWheel";
		transportSoldier = 2;
		armor = 15;
		crewCrashProtection = 0.65;
		epeImpulseDamageCoef = 24;
		class Turrets //sources - []
		{
		};
		precision = 10;
		brakeDistance = 10.5;
		maxSpeed = 85;
		simulation = "shipX";
		overSpeedBrakeCoef = 0.5;
		enginePower = 68.5;
		engineShiftY = 0.005;
		waterLeakiness = 0.5;
		waterResistanceCoef = 0.0045;
		thrustDelay = 0.5;
		waterLinearDampingCoefY = 3;
		waterLinearDampingCoefX = 5;
		waterAngularDampingCoef = 2.3;
		rudderForceCoef = 0.08;
		rudderForceCoefAtMaxSpeed = 0.0002;
		torqueCurve[] = {{0, 0}, {0.265, 0.6}, {0.417, 0.8}, {0.663, 0.982}, {0.758, 1}, {0.85, 0.93}, {0.925, 0.807}, {1, 0.6}};
		class ComplexGearbox //sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
		{
			GearboxRatios[] = {"R1", -14.5, "N", 0, "D1", 1.9, "D2", 1.6, "D3", 1.4, "D4", 1.1};
			TransmissionRatios[] = {"High", 1};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		class RenderTargets //sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
		{
			class mirrorL //sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
			{
				renderTarget = "rendertarget0";
				class mirror //sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.5;
				};
			};
		};
		attenuationEffectType = "OpenCarAttenuation";
		insideSoundCoef = 0.5;
		soundEngineOnInt[] = {"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_01_start", 1, 1};
		soundEngineOnExt[] = {"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_01_start", 1, 1, 150};
		soundEngineOffInt[] = {"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_01_stop", 0.630957, 0.9};
		soundEngineOffExt[] = {"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_01_stop", 0.630957, 0.9, 150};
		buildCrash0[] = {"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_crash_building_01", 1.77828, 1, 200};
		buildCrash1[] = {"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_crash_building_02", 1.77828, 1, 200};
		buildCrash2[] = {"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_crash_building_03", 1.77828, 1, 200};
		soundBuildingCrash[] = {"buildCrash0", 0.33, "buildCrash1", 0.33, "buildCrash2", 0.34};
		WoodCrash0[] = {"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_crash_wood_01", 1.77828, 1, 200};
		WoodCrash1[] = {"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_crash_wood_02", 1.77828, 1, 200};
		WoodCrash2[] = {"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_crash_wood_03", 1.77828, 1, 200};
		soundWoodCrash[] = {"woodCrash0", 0.33, "woodCrash1", 0.33, "woodCrash2", 0.34};
		ArmorCrash0[] = {"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_crash_armor_01", 1.77828, 1, 200};
		ArmorCrash1[] = {"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_crash_armor_02", 1.77828, 1, 200};
		ArmorCrash2[] = {"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_crash_armor_03", 1.77828, 1, 200};
		soundArmorCrash[] = {"ArmorCrash0", 0.33, "ArmorCrash1", 0.33, "ArmorCrash2", 0.34};
		soundGeneralCollision1[] = {"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_crash_armor_01", 1.77828, 1, 200};
		soundGeneralCollision2[] = {"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_crash_armor_02", 1.77828, 1, 200};
		soundGeneralCollision3[] = {"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_crash_armor_03", 1.77828, 1, 200};
		soundCrashes[] = {"soundGeneralCollision1", 0.33, "soundGeneralCollision2", 0.33, "soundGeneralCollision3", 0.34};
		class Sounds //sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
		{
			class IdleOut //sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
			{
				sound[] = {"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_01_idle", 0.630957, 1, 150};
				frequency = "0.95	+	((rpm/	1200) factor[(100/	1200),(200/	1200)])*0.15";
				volume = "engineOn*(((rpm/	1200) factor[(0/	1200),(30/	1200)])	*	((rpm/	1200) factor[(500/	1200),(300/	1200)]))";
			};
			class Engine //sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
			{
				sound[] = {"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_01_low", 0.630957, 1.1, 300};
				frequency = "0.95	+	((rpm/	1200) factor[(300/	1200),(600/	1200)])*0.2";
				volume = "engineOn*(((rpm/	1200) factor[(200/	1200),(300/	1200)])	*	((rpm/	1200) factor[(600/	1200),(400/	1200)]))";
			};
			class EngineMidOut //sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
			{
				sound[] = {"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_01_mid", 0.891251, 0.6, 400};
				frequency = "0.95	+	((rpm/	1200) factor[(600/	1200),(900/	1200)])*0.2";
				volume = "engineOn*(((rpm/	1200) factor[(350/	1200),(500/	1200)])	*	((rpm/	1200) factor[(1200/	1200),(900/	1200)]))";
			};
			class EngineMaxOut //sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
			{
				sound[] = {"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_01_high", 1.25893, 1, 500};
				frequency = "0.95	+	((rpm/	1200) factor[(700/	1200),(1000/	1200)])*0.3";
				volume = "engineOn*((rpm/	1200) factor[(600/	1200),(1200/	1200)])";
			};
			class WaternoiseOutW0 //sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1", 1, 1.1, 100};
				frequency = "1";
				volume = "(speed factor[4, 1]) * water";
			};
			class WaternoiseOutW1 //sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed", 1, 1.1, 150};
				frequency = "1";
				volume = "((speed factor[2, 6]) min (speed factor[6, 4]))";
			};
			class WaternoiseOutW2 //sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed", 1, 1.1, 300};
				frequency = "1";
				volume = "(speed factor[3, 9])";
			};
			class WaternoiseOutW3 //sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1", 1, 1.1, 100};
				frequency = "1";
				volume = "(speed factor[-4, -1]) * water";
			};
			class WaternoiseOutW4 //sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed", 1, 0.9, 150};
				frequency = "1";
				volume = "((speed factor[-2, -6]) min (speed factor[-6, -4]))";
			};
			class WaternoiseOutW5 //sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed", 1, 0.9, 300};
				frequency = "1";
				volume = "(speed factor[-3, -9])";
			};
			class scrubLandExt //sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\noises\boat_land_on_shallow", 1.77828, 1.1, 100};
				frequency = 1;
				volume = "(scrubLand factor[0.01, 0.20])";
			};
			class RainExt //sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain2_ext", 1, 1, 100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt //sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain2_ext", 1, 1, 100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		class Damage //sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
		{
			tex[] = {};
			mat[] = {"A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01.rvmat", "A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_damage.rvmat", "A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_destruct.rvmat", "A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Pilot.rvmat", "A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Pilot_damage.rvmat", "A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Pilot_destruct.rvmat"};
		};
		hiddenSelections[] = {"Camo_1", "Camo_2"};
		class EventHandlers: EventHandlers //inherits 1 parameters from bin\config.bin/CfgVehicles/Rubber_duck_base_F/EventHandlers, sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """""""", [], false] call bis_fnc_initVehicle;};";
		};
		class TextureSources //sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
		{
			class White //sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
			{
				displayName = "White";
				author = "Bohemia Interactive";
				textures[] = {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa", "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"};
			};
			class Black //sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
			{
				displayName = "Black";
				author = "Bohemia Interactive";
				textures[] = {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Black_CO.paa", "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Black_CO.paa"};
			};
			class Blue //sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
			{
				displayName = "Blue";
				author = "Bohemia Interactive";
				textures[] = {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa", "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"};
			};
			class Grey //sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
			{
				displayName = "Grey";
				author = "Bohemia Interactive";
				textures[] = {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa", "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"};
			};
			class Lime //sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
			{
				displayName = "Green";
				author = "Bohemia Interactive";
				textures[] = {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa", "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"};
			};
			class Red //sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
			{
				displayName = "Red";
				author = "Bohemia Interactive";
				textures[] = {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa", "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"};
			};
			class Yellow //sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
			{
				displayName = "Yellow";
				author = "Bohemia Interactive";
				textures[] = {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa", "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"};
			};
		};
		textureList[] = {"White", 1, "Black", 1, "Blue", 1, "Grey", 1, "Lime", 1, "Red", 1, "Yellow", 1};
	};
	class C_Scooter_Transport_01_F: Scooter_Transport_01_base_F //inherits 81 parameters from bin\config.bin/CfgVehicles/Scooter_Transport_01_base_F, sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Boat_F_Exp_Scooter_Transport_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"damage_unhide", 0}, {"drivingwheel", 0}, {"nuzzle", 0}, {"rpm", 0}};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.338;
			verticalOffsetWorld = 0.048;
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\C_Scooter_Transport_01_F.jpg";
		_generalMacro = "C_Scooter_Transport_01_F";
		scope = 2;
		scopeCurator = 2;
		DLC = "Expansion";
		side = 3;
		faction = "CIV_F";
		crew = "C_man_sport_1_F_tanoan";
		typicalCargo[] = {"C_man_sport_1_F_tanoan"};
		hiddenSelectionsTextures[] = {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa", "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"};
	};
	class Plane_Fighter_01_wreck_F: PlaneWreck //inherits 3 parameters from bin\config.bin/CfgVehicles/PlaneWreck, sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
	{
		class SimpleObject //sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.855;
			verticalOffsetWorld = 0;
		};
		author = "Bravo Zero One Studios";
		scope = 1;
		class Armory //sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
		{
			disabled = 1;
		};
		model = "\A3\Air_F_Jets\Plane_Fighter_01\Plane_Fighter_01_wreck_F.p3d";
		typicalCargo[] = {};
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 0;
	};
	class Plane_Fighter_01_Canopy_F: Plane_Canopy_Base_F //inherits 11 parameters from bin\config.bin/CfgVehicles/Plane_Canopy_Base_F, sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
	{
		class SimpleObject //sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.266;
			verticalOffsetWorld = 0;
		};
		author = "Bravo Zero One Studios";
		scope = 1;
		displayName = "Canopy";
		model = "\A3\Air_F_Jets\Plane_Fighter_01\Plane_Fighter_01_Canopy_F.p3d";
	};
	class Ejection_Seat_Plane_Fighter_01_base_F: Ejection_Seat_Base_F //inherits 79 parameters from bin\config.bin/CfgVehicles/Ejection_Seat_Base_F, sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
	{
		author = "Bravo Zero One Studios";
		scope = 0;
		displayName = "Ejection Seat";
		model = "\A3\Air_F_Jets\Plane_Fighter_01\Plane_Fighter_01_Ejection_Seat_F.p3d";
		icon = "iconParachute";
		picture = "\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";
		driverAction = "Pilot_Plane_Fighter_Ejection";
		cargoAction[] = {"Pilot_Plane_Fighter_Ejection"};
	};
	class B_Ejection_Seat_Plane_Fighter_01_F: Ejection_Seat_Plane_Fighter_01_base_F //inherits 8 parameters from bin\config.bin/CfgVehicles/Ejection_Seat_Plane_Fighter_01_base_F, sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
	{
		class SimpleObject //sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.347;
			verticalOffsetWorld = 0;
		};
		author = "Bravo Zero One Studios";
		scope = 1;
		side = 1;
		faction = "BLU_F";
		crew = "B_Fighter_Pilot_F";
	};
	class Plane_Fighter_02_wreck_F: PlaneWreck //inherits 3 parameters from bin\config.bin/CfgVehicles/PlaneWreck, sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
	{
		class SimpleObject //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.5;
			verticalOffsetWorld = 0;
		};
		author = "Bravo Zero One Studios";
		scope = 1;
		displayName = "To-201 Shikra wreck";
		class Armory //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
		{
			disabled = 1;
		};
		model = "A3\Air_F_Jets\Plane_Fighter_02\Plane_Fighter_02_wreck_F.p3d";
		memoryPointTaskMarker = "TaskMarker_1_pos";
		typicalCargo[] = {};
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 0;
	};
	class Plane_Fighter_02_Canopy_F: Plane_Canopy_Base_F //inherits 11 parameters from bin\config.bin/CfgVehicles/Plane_Canopy_Base_F, sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
	{
		class SimpleObject //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.284;
			verticalOffsetWorld = 0;
		};
		author = "Bravo Zero One Studios";
		scope = 1;
		displayName = "Canopy";
		model = "\A3\Air_F_Jets\Plane_Fighter_02\Plane_Fighter_02_Canopy_F.p3d";
	};
	class Ejection_Seat_Plane_Fighter_02_base_F: Ejection_Seat_Base_F //inherits 79 parameters from bin\config.bin/CfgVehicles/Ejection_Seat_Base_F, sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
	{
		author = "Bravo Zero One Studios";
		scope = 0;
		displayName = "Ejection Seat";
		model = "\A3\Air_F_Jets\Plane_Fighter_02\Plane_Fighter_02_Ejection_Seat_F.p3d";
		icon = "iconParachute";
		picture = "\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";
		driverAction = "Pilot_Plane_Fighter_Ejection";
		cargoAction[] = {"Pilot_Plane_Fighter_Ejection"};
	};
	class O_Ejection_Seat_Plane_Fighter_02_F: Ejection_Seat_Plane_Fighter_02_base_F //inherits 8 parameters from bin\config.bin/CfgVehicles/Ejection_Seat_Plane_Fighter_02_base_F, sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
	{
		class SimpleObject //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = -0.336;
			verticalOffsetWorld = 0;
		};
		author = "Bravo Zero One Studios";
		scope = 1;
		side = 0;
		faction = "OPF_F";
		crew = "O_Fighter_Pilot_F";
	};
	class Plane_Fighter_04_wreck_F: PlaneWreck //inherits 3 parameters from bin\config.bin/CfgVehicles/PlaneWreck, sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
	{
		class SimpleObject //sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.669;
			verticalOffsetWorld = 0;
		};
		author = "Bravo Zero One Studios";
		scope = 1;
		class Armory //sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
		{
			disabled = 1;
		};
		model = "\A3\Air_F_Jets\Plane_Fighter_04\Plane_Fighter_04_wreck_F.p3d";
		typicalCargo[] = {};
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 0;
	};
	class Plane_Fighter_04_Canopy_F: Plane_Canopy_Base_F //inherits 11 parameters from bin\config.bin/CfgVehicles/Plane_Canopy_Base_F, sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
	{
		class SimpleObject //sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.283;
			verticalOffsetWorld = 0;
		};
		author = "Bravo Zero One Studios";
		scope = 1;
		displayName = "Canopy";
		model = "\A3\Air_F_Jets\Plane_Fighter_04\Plane_Fighter_04_Canopy_F.p3d";
	};
	class Ejection_Seat_Plane_Fighter_04_base_F: Ejection_Seat_Base_F //inherits 79 parameters from bin\config.bin/CfgVehicles/Ejection_Seat_Base_F, sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
	{
		author = "Bravo Zero One Studios";
		scope = 0;
		displayName = "Ejection Seat";
		model = "\A3\Air_F_Jets\Plane_Fighter_04\Plane_Fighter_04_Ejection_Seat_F.p3d";
		icon = "iconParachute";
		picture = "\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";
		driverAction = "Pilot_Plane_Fighter_Ejection";
		cargoAction[] = {"Pilot_Plane_Fighter_Ejection"};
	};
	class I_Ejection_Seat_Plane_Fighter_04_F: Ejection_Seat_Plane_Fighter_04_base_F //inherits 8 parameters from bin\config.bin/CfgVehicles/Ejection_Seat_Plane_Fighter_04_base_F, sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
	{
		class SimpleObject //sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {"zasleh", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = -1.455;
			verticalOffsetWorld = 0;
		};
		author = "Bravo Zero One Studios";
		scope = 1;
		side = 2;
		faction = "IND_F";
		crew = "I_Fighter_Pilot_F";
	};
	class ModuleCombatPatrol_Init_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Patrol"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCombatPatrol_Init_F";
		scope = 2;
		category = "CombatPatrol";
		isTriggerActivated = 0;
		isDisposable = 0;
		is3DEN = 0;
		displayName = "Combat Patrol Init";
		function = "BIS_fnc_CPInit";
		isGlobal = 2;
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Patrol"]
		{
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Patrol"]
		{
			description = "Initializes the Combat Patrol mode upon scenario start.";
		};
	};
	class ModuleCombatPatrol_LocationAdd_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Patrol"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCombatPatrol_LocationAdd_F";
		scope = 2;
		category = "CombatPatrol";
		isTriggerActivated = 0;
		isDisposable = 0;
		is3DEN = 0;
		displayName = "Combat Patrol Location Add";
		function = "";
		isGlobal = 0;
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Patrol"]
		{
			class BIS_CP_param_locationName: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Patrol"]
			{
				property = "BIS_CP_param_locationName";
				displayName = "Location name";
				description = "";
				typeName = "STRING";
				defaultValue = """""""""";
			};
			class BIS_CP_param_locationSize: Combo //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Combo, sources - ["A3_Modules_F_Patrol"]
			{
				property = "BIS_CP_param_locationSize";
				displayName = "Location size";
				description = "";
				typeName = "NUMBER";
				defaultValue = "1";
				class Values //sources - ["A3_Modules_F_Patrol"]
				{
					class Value1 //sources - ["A3_Modules_F_Patrol"]
					{
						name = "Small (tiny village)";
						value = 0.75;
					};
					class Value2 //sources - ["A3_Modules_F_Patrol"]
					{
						name = "Medium (normal village)";
						value = 1;
					};
					class Value3 //sources - ["A3_Modules_F_Patrol"]
					{
						name = "Large (city)";
						value = 1.5;
					};
				};
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Patrol"]
		{
			description = "Adds a new selectable location to the map.";
			position = 1;
		};
	};
	class ModuleCombatPatrol_LocationRemove_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Patrol"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCombatPatrol_LocationRemove_F";
		scope = 2;
		category = "CombatPatrol";
		isTriggerActivated = 0;
		isDisposable = 0;
		is3DEN = 0;
		displayName = "Combat Patrol Location Remove";
		function = "";
		isGlobal = 0;
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Patrol"]
		{
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Patrol"]
		{
			description = "Removes the nearest location in a 1000m radius from the map selection.";
			position = 1;
		};
	};
	class ModuleCombatPatrol_LocationMove_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Patrol"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "ModuleCombatPatrol_LocationMove_F";
		scope = 2;
		category = "CombatPatrol";
		isTriggerActivated = 0;
		isDisposable = 0;
		is3DEN = 0;
		displayName = "Combat Patrol Location Reposition";
		function = "";
		isGlobal = 0;
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Patrol"]
		{
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Patrol"]
		{
			description = "Moves the nearest location in a 1000m radius to this module's position.";
			position = 1;
		};
	};
	class ModuleCombatPatrol_LocationAzimuthBlacklist_F: Module_F //inherits 15 parameters from bin\config.bin/CfgVehicles/Module_F, sources - ["A3_Modules_F_Patrol"]
	{
		scope = 2;
		category = "CombatPatrol";
		isTriggerActivated = 0;
		isDisposable = 0;
		is3DEN = 0;
		displayName = "Combat Patrol Azimuth Blacklist";
		function = "";
		isGlobal = 0;
		class Attributes: AttributesBase //inherits 7 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase, sources - ["A3_Modules_F_Patrol"]
		{
			class BIS_CP_param_locationAzimuthBlacklist: Edit //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/Edit, sources - ["A3_Modules_F_Patrol"]
			{
				property = "BIS_CP_param_locationAzimuthBlacklist";
				displayName = "Azimuth arrays";
				description = "";
				typeName = "STRING";
				defaultValue = "[[0, 90], [180, 270]]";
			};
			class ModuleDescription: ModuleDescription //inherits 2 parameters from bin\config.bin/CfgVehicles/Module_F/AttributesBase/ModuleDescription, sources - []
			{
			};
		};
		class ModuleDescription: ModuleDescription //inherits 25 parameters from bin\config.bin/CfgVehicles/Module_F/ModuleDescription, sources - ["A3_Modules_F_Patrol"]
		{
			description = "Blacklists the nearest location's in a 1000m radius azimuth range so it can't be used for the starting / ending position or reinforcements spawning point.";
			position = 1;
		};
	};
};
