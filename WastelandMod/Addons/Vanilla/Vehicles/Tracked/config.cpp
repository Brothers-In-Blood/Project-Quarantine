class cfgPatches
{
	class BIB_Wasteland_Vehicles_Tracked
	{
		author="BIB_Monkey";
		name="BIB Wasteland MOD";
		url="http://www.bibgaming.com";
		addonRootClass="BIB_Wasteland_Vehicles";
		requiredAddons[]=
		{
			"BIB_Wasteland_Vehicles"
		};
		requiredVersion=0.1;
		units[]=
		{
		};
		weapons[]={};
	};
};

class CfgVehicle
{
	class Tank;
	class Tank_F: Tank //inherits 81 parameters from bin\config.bin/CfgVehicles/Tank, sources - ["A3_Armor_F_Beta","A3_Armor_F_Beta_APC_Tracked_01","A3_Armor_F_Beta_APC_Tracked_02","A3_Armor_F_Gamma_MBT_01","A3_Armor_F_Gamma_MBT_02","A3_Armor_F_EPB_APC_Tracked_03","A3_Armor_F_EPB_MBT_03"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "Tank_F";
		occludeSoundsWhenIn = 0;
		obstructSoundsWhenIn = 0;
		class EventHandlers: DefaultEventHandlers //inherits 3 parameters from bin\config.bin/DefaultEventHandlers, sources - []
		{
		};
		class Sounds: Sounds //inherits 2 parameters from bin\config.bin/CfgVehicles/Tank/Sounds, sources - []
		{
		};
		commanderCanSee = "31+32";
		gunnerCanSee = "31+32";
		driverCanSee = 31;
		getInAction = "GetInMedium";
		getOutAction = "GetOutMedium";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		audible = 18;
		sensitivityEar = "0.0075 /3";
		destrType = "DestructWreck";
		turnCoef = 5;
		steerAheadSimul = 0.5;
		steerAheadPlan = 0.35;
		predictTurnPlan = 0.8;
		predictTurnSimul = 0.6;
		brakeDistance = 1;
		hideProxyInCombat = 1;
		radarTarget = 1;
		radarTargetSize = 1.2;
		visualTarget = 1;
		visualTargetSize = 1;
		irTargetSize = 1.2;
		irScanGround = 2;
		irScanRangeMax = 0;
		irScanRangeMin = 0;
		irScanToEyeFactor = 1;
		radarType = 8;
		enableRadio = 1;
		LockDetectionSystem = 4;
		incomingMissileDetectionSystem = 16;
		memoryPointCargoLight = "cargo light";
		dampersBumpCoef = 4.5;
		driveOnComponent[] = {"Track_L", "Track_R", "Slide"};
		armor = 500;
		armorStructural = 6;
		explosionShielding = 1;
		minTotalDamageThreshold = 0.005;
		crewCrashProtection = 0.25;
		crewExplosionProtection = 0.9995;
		secondaryExplosion = -1;
		fuelExplosionPower = 1;
		class HitPoints: HitPoints //inherits 4 parameters from bin\config.bin/CfgVehicles/Tank/HitPoints, sources - ["A3_Armor_F_Beta"]
		{
			class HitHull //sources - ["A3_Armor_F_Beta"]
			{
				armor = 1;
				material = -1;
				name = "NEtelo";
				visual = "telo";
				passThrough = 0.5;
				minimalHit = 0.15;
				explosionShielding = 0.2;
			};
			class HitFuel //sources - ["A3_Armor_F_Beta"]
			{
				armor = 0.6;
				material = -1;
				name = "NEtelo";
				visual = "motor";
				passThrough = 0;
				minimalHit = 0.1;
				explosionShielding = 0.3;
			};
			class HitEngine //sources - ["A3_Armor_F_Beta"]
			{
				armor = 0.8;
				material = -1;
				name = "motor";
				visual = "motor";
				passThrough = 0.5;
				minimalHit = 0.15;
				explosionShielding = 0.2;
			};
			class HitLTrack //sources - ["A3_Armor_F_Beta"]
			{
				armor = 0.4;
				material = -1;
				name = "pas_L";
				visual = "pas_L";
				passThrough = 0;
				minimalHit = 0.15;
				explosionShielding = 0.4;
			};
			class HitRTrack //sources - ["A3_Armor_F_Beta"]
			{
				armor = 0.4;
				material = -1;
				name = "pas_P";
				visual = "pas_P";
				passThrough = 0;
				minimalHit = 0.15;
				explosionShielding = 0.4;
			};
		};
		weapons[] = {};
		magazines[] = {};
		transportMaxWeapons = 12;
		transportMaxMagazines = 128;
		transportMaxBackpacks = 12;
		maximumLoad = 3000;
		supplyRadius = -1;
		memoryPointSupply = "doplnovani";
		class TransportBackpacks //sources - []
		{
		};
		class TransportMagazines //sources - []
		{
		};
		class TransportWeapons //sources - []
		{
		};
		class TransportItems //sources - []
		{
		};
		class CamShake //sources - ["A3_Armor_F_Beta"]
		{
			power = 5;
			frequency = 20;
			distance = 20;
			minSpeed = 5;
		};
		camShakeCoef = 0;
		accuracy = 0.25;
		viewCargoShadow = 1;
		viewCargoShadowDiff = 0.05;
		viewCargoShadowAmb = 0.5;
		class Turrets //sources - ["A3_Armor_F_Beta"]
		{
			class MainTurret: NewTurret //inherits 115 parameters from bin\config.bin/CfgVehicles/AllVehicles/NewTurret, sources - ["A3_Armor_F_Beta"]
			{
				commanding = 1;
				gunnerAction = "ManActTestDriverOut";
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				viewGunnerInExternal = 0;
				primaryGunner = 1;
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {"TankGunnerOptics2", "OpticsBlur1", "OpticsCHAbera1"};
				class HitPoints //sources - ["A3_Armor_F_Beta"]
				{
					class HitTurret //sources - ["A3_Armor_F_Beta"]
					{
						armor = 1;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 1;
					};
					class HitGun //sources - ["A3_Armor_F_Beta"]
					{
						armor = 0.3;
						material = -1;
						name = "zbran";
						visual = "zbran";
						passThrough = 0;
					};
				};
				class Components //sources - ["A3_Armor_F_Beta"]
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner //inherits 1 parameters from bin\config.bin/VehicleSystemsTemplateLeftGunner, sources - []
					{
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner //inherits 1 parameters from bin\config.bin/VehicleSystemsTemplateRightGunner, sources - []
					{
					};
				};
				class Turrets //sources - ["A3_Armor_F_Beta"]
				{
					class CommanderOptics: CommanderOptics //inherits 42 parameters from bin\config.bin/CfgVehicles/LandVehicle/CommanderOptics, sources - ["A3_Armor_F_Beta"]
					{
						class Components //sources - ["A3_Armor_F_Beta"]
						{
							class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander //inherits 1 parameters from bin\config.bin/VehicleSystemsTemplateLeftCommander, sources - []
							{
							};
							class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander //inherits 1 parameters from bin\config.bin/VehicleSystemsTemplateRightCommander, sources - []
							{
							};
						};
						class ViewGunner: ViewCargo //inherits 15 parameters from bin\config.bin/CfgVehicles/AllVehicles/ViewCargo, sources - []
						{
						};
					};
				};
			};
		};
		class Components: Components //inherits 1 parameters from bin\config.bin/CfgVehicles/Tank/Components, sources - ["A3_Armor_F_Beta"]
		{
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftDriver //inherits 1 parameters from bin\config.bin/VehicleSystemsTemplateLeftDriver, sources - []
			{
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightDriver //inherits 1 parameters from bin\config.bin/VehicleSystemsTemplateRightDriver, sources - []
			{
			};
		};
		waterLeakiness = 10;
		maxFordingDepth = 3;
		class NVGMarkers //sources - ["A3_Armor_F_Beta"]
		{
			class NVGMarker01 //sources - ["A3_Armor_F_Beta"]
			{
				name = "nvg_marker";
				color[] = {0.03, 0.003, 0.003, 1};
				ambient[] = {0.003, 0.0003, 0.0003, 1};
				brightness = 0.001;
				blinking = 1;
			};
		};
		driverForceOptics = 1;
		driverOpticsModel = "\a3\weapons_f\reticle\Optics_Driver_01_F";
		memoryPointDriverOptics = "driverview";
		engineStartSpeed = 5;
		explosionEffect = "FuelExplosionBig";
		htMin = 60;
		htMax = 1800;
		afMax = 100;
		mfMax = 80;
		mFact = 1;
		tBody = 250;
		numberPhysicalWheels = 16;
	};
	class APC_Tracked_01_base_F: Tank_F //inherits 83 parameters from bin\config.bin/CfgVehicles/Tank_F, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
	{
		author = "Bohemia Interactive";
		mapSize = 9.96;
		_generalMacro = "APC_Tracked_01_base_F";
		attenuationEffectType = "TankAttenuation";
		soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out", 0.562341, 1};
		soundGetOut[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out", 0.562341, 1, 20};
		soundTurnIn[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out", 1.77828, 1, 20};
		soundTurnOut[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out", 1.77828, 1, 20};
		soundTurnInInternal[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out", 1.77828, 1, 20};
		soundTurnOutInternal[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out", 1.77828, 1, 20};
		soundDammage[] = {"", 0.562341, 1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_start", 0.707946, 1};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_start", 1, 1, 200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_stop", 0.707946, 1};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_stop", 1, 1, 200};
		soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1", 0.177828, 1, 100};
		soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2", 0.177828, 1, 100};
		soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3", 0.177828, 1, 100};
		soundBushCrash[] = {"soundBushCollision1", 0.33, "soundBushCollision2", 0.33, "soundBushCollision3", 0.33};
		soundGeneralCollision1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_1", 1, 1, 100};
		soundGeneralCollision2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_2", 1, 1, 100};
		soundGeneralCollision3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_3", 1, 1, 100};
		soundGeneralCollision4[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_4", 1, 1, 100};
		soundCrashes[] = {"soundGeneralCollision1", 0.25, "soundGeneralCollision2", 0.25, "soundGeneralCollision3", 0.25, "soundGeneralCollision4", 0.25};
		buildCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_1", 1, 1, 200};
		buildCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_2", 1, 1, 200};
		buildCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_3", 1, 1, 200};
		buildCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_4", 1, 1, 200};
		soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
		WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_1", 1, 1, 200};
		WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_2", 1, 1, 200};
		WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_3", 1, 1, 200};
		WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_4", 1, 1, 200};
		soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166};
		ArmorCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_1", 1, 1, 200};
		ArmorCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_2", 1, 1, 200};
		ArmorCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_3", 1, 1, 200};
		ArmorCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_4", 1, 1, 200};
		soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
		class Sounds //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
		{
			class Idle_ext //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_01", 0.398107, 1, 200};
				frequency = "0.95	+	((rpm/	2640) factor[(400/	2640),(500/	2640)])*0.15";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(750/	2640),(600/	2640)]))";
			};
			class Engine //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_02", 0.501187, 1, 200};
				frequency = "0.8	+	((rpm/	2640) factor[(500/	2640),(730/	2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(550/	2640),(730/	2640)])	*	((rpm/	2640) factor[(800/	2640),(780/	2640)]))";
			};
			class Engine1_ext //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_03", 0.562341, 1, 200};
				frequency = "0.8	+	((rpm/	2640) factor[(630/	2640),(1000/	2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(600/	2640),(720/	2640)])	*	((rpm/	2640) factor[(1100/	2640),(840/	2640)]))";
			};
			class Engine2_ext //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_06", 0.630957, 1, 250};
				frequency = "0.8	+	((rpm/	2640) factor[(850/	2640),(1300/	2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(800/	2640),(1000/	2640)])	*	((rpm/	2640) factor[(1300/	2640),(1100/	2640)]))";
			};
			class Engine3_ext //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_07", 0.630957, 1, 300};
				frequency = "0.8	+	((rpm/	2640) factor[(1100/	2640),(1600/	2640)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(1100/	2640),(1270/	2640)])	*	((rpm/	2640) factor[(1550/	2640),(1380/	2640)]))";
			};
			class Engine4_ext //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_08", 0.707946, 1, 300};
				frequency = "0.8	+	((rpm/	2640) factor[(1400/	2640),(2000/	2640)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(1380/	2640),(1500/	2640)])	*	((rpm/	2640) factor[(2000/	2640),(1700/	2640)]))";
			};
			class Engine5_ext //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_10", 1, 1, 300};
				frequency = "0.8	+	((rpm/	2640) factor[(1700/	2640),(2640/	2640)])*0.1";
				volume = "engineOn*camPos*((rpm/	2640) factor[(1600/	2640),(2500/	2640)])";
			};
			class IdleThrust //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_exhaust_01", 0.630957, 1, 200};
				frequency = "0.8	+	((rpm/	2640) factor[(400/	2640),(500/	2640)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(750/	2640),(600/	2640)]))";
			};
			class EngineThrust //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_exhaust_02", 0.630957, 1, 200};
				frequency = "0.8	+	((rpm/	2640) factor[(500/	2640),(730/	2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(550/	2640),(730/	2640)])	*	((rpm/	2640) factor[(800/	2640),(780/	2640)]))";
			};
			class Engine1_Thrust_ext //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_exhaust_03", 0.707946, 1, 200};
				frequency = "0.8	+	((rpm/	2640) factor[(630/	2640),(1000/	2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(600/	2640),(720/	2640)])	*	((rpm/	2640) factor[(1100/	2640),(840/	2640)]))";
			};
			class Engine2_Thrust_ext //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_exhaust_06", 0.707946, 1, 250};
				frequency = "0.8	+	((rpm/	2640) factor[(850/	2640),(1300/	2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(800/	2640),(1000/	2640)])	*	((rpm/	2640) factor[(1300/	2640),(1100/	2640)]))";
			};
			class Engine3_Thrust_ext //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_exhaust_07", 1, 1, 350};
				frequency = "0.8	+	((rpm/	2640) factor[(1100/	2640),(1600/	2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1100/	2640),(1270/	2640)])	*	((rpm/	2640) factor[(1550/	2640),(1380/	2640)]))";
			};
			class Engine4_Thrust_ext //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_exhaust_08", 1.12202, 1, 350};
				frequency = "0.8	+	((rpm/	2640) factor[(1400/	2640),(2000/	2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1380/	2640),(1500/	2640)])	*	((rpm/	2640) factor[(2000/	2640),(1700/	2640)]))";
			};
			class Engine5_Thrust_ext //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_exhaust_10", 1.25893, 1, 400};
				frequency = "0.8	+	((rpm/	2640) factor[(1700/	2640),(2640/	2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2640) factor[(1600/	2640),(2500/	2640)])";
			};
			class Idle_int //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_01", 0.316228, 1};
				frequency = "0.8	+	((rpm/	2640) factor[(400/	2640),(500/	2640)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(750/	2640),(600/	2640)]))";
			};
			class Engine_int //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_02", 0.354813, 1};
				frequency = "0.8	+	((rpm/	2640) factor[(500/	2640),(730/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(550/	2640),(730/	2640)])	*	((rpm/	2640) factor[(800/	2640),(780/	2640)]))";
			};
			class Engine1_int //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_03", 0.398107, 1};
				frequency = "0.8	+	((rpm/	2640) factor[(630/	2640),(1000/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(600/	2640),(720/	2640)])	*	((rpm/	2640) factor[(1100/	2640),(840/	2640)]))";
			};
			class Engine2_int //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_06", 0.446684, 1};
				frequency = "0.8	+	((rpm/	2640) factor[(850/	2640),(1300/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(800/	2640),(1000/	2640)])	*	((rpm/	2640) factor[(1300/	2640),(1100/	2640)]))";
			};
			class Engine3_int //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_07", 0.501187, 1};
				frequency = "0.8	+	((rpm/	2640) factor[(1100/	2640),(1600/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(1100/	2640),(1270/	2640)])	*	((rpm/	2640) factor[(1550/	2640),(1380/	2640)]))";
			};
			class Engine4_int //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_08", 0.562341, 1};
				frequency = "0.8	+	((rpm/	2640) factor[(1400/	2640),(2000/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(1380/	2640),(1500/	2640)])	*	((rpm/	2640) factor[(2000/	2640),(1700/	2640)]))";
			};
			class Engine5_int //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_10", 0.630957, 1};
				frequency = "0.8	+	((rpm/	2640) factor[(1700/	2640),(2640/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	2640) factor[(1600/	2640),(2500/	2640)])";
			};
			class IdleThrust_int //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_exhaust_01", 0.354813, 1};
				frequency = "0.8	+	((rpm/	2640) factor[(400/	2640),(500/	2640)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(750/	2640),(600/	2640)]))";
			};
			class EngineThrust_int //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_exhaust_02", 0.398107, 1};
				frequency = "0.8	+	((rpm/	2640) factor[(500/	2640),(730/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(550/	2640),(730/	2640)])	*	((rpm/	2640) factor[(800/	2640),(780/	2640)]))";
			};
			class Engine1_Thrust_int //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_exhaust_03", 0.446684, 1};
				frequency = "0.8	+	((rpm/	2640) factor[(630/	2640),(1000/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(600/	2640),(720/	2640)])	*	((rpm/	2640) factor[(1100/	2640),(840/	2640)]))";
			};
			class Engine2_Thrust_int //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_exhaust_06", 0.446684, 1};
				frequency = "0.8	+	((rpm/	2640) factor[(850/	2640),(1300/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(800/	2640),(1000/	2640)])	*	((rpm/	2640) factor[(1300/	2640),(1100/	2640)]))";
			};
			class Engine3_Thrust_int //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_exhaust_07", 0.501187, 1};
				frequency = "0.8	+	((rpm/	2640) factor[(1100/	2640),(1600/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1100/	2640),(1270/	2640)])	*	((rpm/	2640) factor[(1550/	2640),(1380/	2640)]))";
			};
			class Engine4_Thrust_int //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_exhaust_08", 0.562341, 1};
				frequency = "0.8	+	((rpm/	2640) factor[(1400/	2640),(2000/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1380/	2640),(1500/	2640)])	*	((rpm/	2640) factor[(2000/	2640),(1700/	2640)]))";
			};
			class Engine5_Thrust_int //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_exhaust_10", 0.630957, 1};
				frequency = "0.8	+	((rpm/	2640) factor[(1700/	2640),(2640/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2640) factor[(1600/	2640),(2500/	2640)])";
			};
			class NoiseInt //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1", 0.501187, 1};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1", 0.630957, 1, 150};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0 //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_01", 0.398107, 1, 140};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsOutH1 //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_02", 0.446684, 1, 160};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsOutH2 //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_03", 0.501187, 1, 180};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsOutH3 //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_04", 0.562341, 1, 200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsOutH4 //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_05", 0.562341, 1, 220};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsOutS0 //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_01", 0.316228, 1, 120};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsOutS1 //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_02", 0.354813, 1, 140};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsOutS2 //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_03", 0.398107, 1, 160};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsOutS3 //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_04", 0.446684, 1, 180};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsOutS4 //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_05", 0.501187, 1, 200};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsInH0 //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_01", 0.251189, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsInH1 //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_02", 0.281838, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsInH2 //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_03", 0.316228, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsInH3 //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_04", 0.354813, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsInH4 //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_05", 0.398107, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsInS0 //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_01", 0.316228, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsInS1 //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_02", 0.316228, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsInS2 //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_03", 0.354813, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsInS3 //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_04", 0.354813, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsInS4 //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_05", 0.398107, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class RainExt //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext", 1, 1, 100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int", 1, 1, 100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		simulation = "tankX";
		enginePower = 895;
		maxOmega = 276;
		peakTorque = 3865;
		torqueCurve[] = {{"(700/2640)", 0}, {"(1600/2640)", "(2650/2850)"}, {"(1800/2640)", "(2800/2850)"}, {"(1900/2640)", "(2850/2850)"}, {"(2000/2640)", "(2800/2850)"}, {"(2200/2640)", "(2750/2850)"}, {"(2400/2640)", "(2600/2850)"}, {"(4900/2640)", "(0/2850)"}};
		thrustDelay = 0.5;
		clutchStrength = 90;
		fuelCapacity = 1885;
		brakeIdleSpeed = 1.78;
		latency = 0.1;
		tankTurnForce = 1.5e+006;
		normalSpeedForwardCoef = 0.52;
		idleRpm = 700;
		redRpm = 2640;
		engineLosses = 25;
		transmissionLosses = 15;
		changeGearMinEffectivity[] = {0.5, 0.15, 0.95, 0.95, 0.95, 0.95, 0.95, 0.95, 0.95, 0.95, 0.95, 0.95, 0.9, 0.9, 0.9, 0.9, 0.9};
		class complexGearbox //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
		{
			GearboxRatios[] = {"R1", -2.235, "N", 0, "CD0", "2*(0.75^(-10))", "CD1", "2*(0.75^(-9))", "CD2", "2*(0.75^(-8))", "CD3", "2*(0.75^(-7))", "CD4", "2*(0.75^(-6))", "CD5", "2*(0.75^(-5))", "CD6", "2*(0.75^(-4))", "CD7", "2*(0.75^(-3))", "CD8", "2*(0.75^(-2))", "CD9", "2*(0.75^(-1))", "D1", "2*(0.75^0)", "D2", "2*(0.75^1)", "D3", "2*(0.75^2)", "D4", "2*(0.75^3)"};
			TransmissionRatios[] = {"High", 8};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0;
		};
		class Wheels //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
		{
			class L2 //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				boneName = "wheel_podkoloL1";
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				damping = 75;
				steering = 0;
				side = "left";
				weight = 150;
				mass = 150;
				MOI = 25;
				latStiffX = 25;
				latStiffY = 280;
				longitudinalStiffnessPerUnitGravity = 100000;
				maxBrakeTorque = 10000;
				sprungMass = 5250;
				springStrength = 324000;
				springDamperRate = 32000;
				dampingRate = 1;
				dampingRateInAir = 2140;
				dampingRateDamaged = 10;
				dampingRateDestroyed = 10000;
				maxDroop = 0.18;
				maxCompression = 0.18;
				frictionVsSlipGraph[] = {{0, 5}, {0.5, 5}, {1, 5}};
			};
			class L3: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/APC_Tracked_01_base_F/Wheels/L2, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				boneName = "wheel_podkolol2";
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
			};
			class L4: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/APC_Tracked_01_base_F/Wheels/L2, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				boneName = "wheel_podkolol3";
				center = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
			};
			class L5: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/APC_Tracked_01_base_F/Wheels/L2, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				boneName = "wheel_podkolol4";
				center = "wheel_1_5_axis";
				boundary = "wheel_1_5_bound";
			};
			class L6: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/APC_Tracked_01_base_F/Wheels/L2, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				boneName = "wheel_podkolol5";
				center = "wheel_1_6_axis";
				boundary = "wheel_1_6_bound";
			};
			class L7: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/APC_Tracked_01_base_F/Wheels/L2, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				boneName = "wheel_podkolol6";
				center = "wheel_1_7_axis";
				boundary = "wheel_1_7_bound";
			};
			class L9: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/APC_Tracked_01_base_F/Wheels/L2, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				boneName = "wheel_podkolol9";
				center = "wheel_1_9_axis";
				boundary = "wheel_1_9_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class L1: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/APC_Tracked_01_base_F/Wheels/L2, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				boneName = "";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class R2: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/APC_Tracked_01_base_F/Wheels/L2, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				boneName = "wheel_podkolop1";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				side = "right";
			};
			class R3: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/APC_Tracked_01_base_F/Wheels/R2, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				boneName = "wheel_podkolop2";
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
			};
			class R4: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/APC_Tracked_01_base_F/Wheels/R2, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				boneName = "wheel_podkolop3";
				center = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
			};
			class R5: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/APC_Tracked_01_base_F/Wheels/R2, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				boneName = "wheel_podkolop4";
				center = "wheel_2_5_axis";
				boundary = "wheel_2_5_bound";
			};
			class R6: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/APC_Tracked_01_base_F/Wheels/R2, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				boneName = "wheel_podkolop5";
				center = "wheel_2_6_axis";
				boundary = "wheel_2_6_bound";
			};
			class R7: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/APC_Tracked_01_base_F/Wheels/R2, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				boneName = "wheel_podkolop6";
				center = "wheel_2_7_axis";
				boundary = "wheel_2_7_bound";
			};
			class R9: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/APC_Tracked_01_base_F/Wheels/R2, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				boneName = "wheel_podkolop9";
				center = "wheel_2_9_axis";
				boundary = "wheel_2_9_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class R1: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/APC_Tracked_01_base_F/Wheels/R2, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				boneName = "";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
			};
		};
		scope = 0;
		class Library //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
		{
			libTextDesc = "While both IFV-6c Panther and IFV-6a Cheetah are based on the Israeli armored personnel carrier chassis, they serve different roles in combat. The Panther is an APC that boasts strong armor to achieve maximal protection for the transported crew. The standard Panther is armed with an RCWS HMG, 40 mm GMG and smoke grenades and it can take up to 8 soldiers in its cargo area. The Cheetah is a dedicated AA vehicle. The cargo space is taken up by ammunition storage and vehicle is armed with two 35 mm autocannons, four long range surface-to-air missiles and smoke grenades. The CRV (Combat Recovery Vehicle) variant of the IFV-6 also exists and is used by BLUFOR, designation CRV-6e Bobcat. It is fitted with a Remotely Controlled Weapons System turret and armed with a 6.5 mm light machine gun.";
		};
		model = "\A3\armor_f_beta\APC_Tracked_01\APC_Tracked_01_rcws_F";
		editorSubcategory = "EdSubcat_APCs";
		picture = "\A3\armor_f_beta\APC_Tracked_01\Data\UI\APC_Tracked_01_base_ca.paa";
		icon = "\A3\armor_f_beta\APC_Tracked_01\Data\UI\map_APC_Tracked_01_CA.paa";
		memoryPointTaskMarker = "TaskMarker_1_pos";
		transportSoldier = 0;
		getInAction = "GetInAMV_cargo";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInAMV_cargo"};
		cargoGetOutAction[] = {"GetOutLow"};
		cargoAction[] = {"passenger_generic01_leanleft", "passenger_apc_narrow_generic01", "passenger_apc_narrow_generic01", "passenger_apc_narrow_generic03", "passenger_apc_generic03", "passenger_apc_narrow_generic02", "passenger_generic01_foldhands", "passenger_generic01_leanright"};
		driverAction = "crew_tank01_in";
		driverInAction = "crew_tank01_in";
		forceHideDriver = 1;
		hideProxyInCombat = 1;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 1;
		class ViewOptics: ViewOptics //inherits 3 parameters from bin\config.bin/CfgVehicles/Tank/ViewOptics, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
		{
			visionMode[] = {"Normal", "NVG"};
		};
		maxSpeed = 60;
		armor = 500;
		armorStructural = 6;
		armorLights = 0.08;
		crewExplosionProtection = 0.9999;
		damageResistance = 0.00547;
		cost = 1e+006;
		threat[] = {1, 0.6, 0.6};
		crewVulnerable = 0;
		maxFordingDepth = -0.55;
		waterResistance = 0;
		waterDamageEngine = 0.2;
		waterPPInVehicle = 0;
		fireDustEffect = "emptyEffect";
		wheelCircumference = 2.15;
		tracksSpeed = 1.4;
		class HitPoints: HitPoints //inherits 5 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
		{
			class HitHull: HitHull //inherits 7 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints/HitHull, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				armor = 2;
				material = -1;
				name = "hull_hit";
				visual = "zbytek";
				passThrough = 0;
				minimalHit = 0.1;
				explosionShielding = 0.6;
				radius = 0.3;
			};
			class HitFuel: HitFuel //inherits 7 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints/HitFuel, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				armor = 0.5;
				material = -1;
				name = "engine_hit";
				visual = "motor";
				passThrough = 0;
				minimalHit = 0.1;
				explosionShielding = 0.4;
				radius = 0.3;
			};
			class HitEngine: HitEngine //inherits 7 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints/HitEngine, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				armor = 1;
				material = -1;
				name = "engine_hit";
				passThrough = 0;
				minimalHit = 0.1;
				explosionShielding = 0.2;
				radius = 0.3;
			};
			class HitLTrack: HitLTrack //inherits 7 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints/HitLTrack, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				armor = 0.5;
				material = -1;
				name = "track_l_hit";
				visual = "pas_L";
				passThrough = 0;
				minimalHit = 0.2;
				explosionShielding = 0.4;
				radius = 0.3;
			};
			class HitRTrack: HitRTrack //inherits 7 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints/HitRTrack, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				armor = 0.5;
				material = -1;
				name = "track_r_hit";
				visual = "pas_R";
				passThrough = 0;
				minimalHit = 0.2;
				explosionShielding = 0.4;
				radius = 0.3;
			};
		};
		animationSourceHatch = "";
		class Exhausts //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
		{
			class Exhaust1 //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustsEffectBig";
			};
		};
		insideSoundCoef = 0.9;
		smokeLauncherGrenadeCount = 8;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 0;
		smokeLauncherAngle = 120;
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/Tank_F/Turrets, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
		{
			class MainTurret: MainTurret //inherits 17 parameters from bin\config.bin/CfgVehicles/Tank_F/Turrets/MainTurret, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				class Turrets //sources - []
				{
				};
				body = "mainTurret";
				gun = "mainGun";
				weapons[] = {"LMG_RCWS"};
				magazines[] = {"2000Rnd_65x39_belt", "2000Rnd_65x39_belt"};
				soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner", 0.316228, 1, 30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical", 0.316228, 1, 30};
				commanding = 1;
				minElev = -25;
				initElev = 0;
				maxElev = 30;
				gunnerAction = "crew_tank01_out";
				gunnerInAction = "crew_tank01_in";
				gunnerGetInAction = "GetInAMV_cargo";
				gunnerGetOutAction = "GetOutLow";
				viewGunnerInExternal = 1;
				castGunnerShadow = 1;
				forceHideGunner = 1;
				startEngine = 0;
				stabilizedInAxes = 3;
				gunnerForceOptics = 1;
				inGunnerMayFire = 1;
				outGunnerMayFire = 0;
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
				gunnerOutOpticsModel = "";
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				discreteDistanceInitIndex = 2;
				turretInfoType = "RscOptics_crows";
				memoryPointGunnerOptics = "gunnerview";
				selectionFireAnim = "zasleh2";
				showCrewAim = 2;
				class RCWSOptics;
				class ViewOptics: RCWSOptics //inherits 17 parameters from bin\config.bin/RCWSOptics, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
				{
					visionMode[] = {"Normal", "NVG", "TI"};
				};
				class HitPoints //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
				{
					class HitTurret //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
					{
						armor = 0.15;
						material = -1;
						name = "otochlaven";
						visual = "otochlaven";
						passThrough = 0;
						minimalHit = 0.01;
						explosionShielding = 0.4;
						radius = 0.25;
					};
					class HitGun //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
					{
						armor = 0.15;
						material = -1;
						name = "otochlaven";
						visual = "otochlaven";
						passThrough = 0;
						minimalHit = 0.01;
						explosionShielding = 0.4;
						radius = 0.25;
					};
				};
			};
			class CommanderOptics: CommanderOptics //inherits 42 parameters from bin\config.bin/CfgVehicles/LandVehicle/CommanderOptics, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				memoryPointGunnerOutOptics = "commanderview";
				memoryPointGunnerOptics = "commanderview";
				minElev = -10;
				maxElev = 30;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				weapons[] = {"SmokeLauncher"};
				magazines[] = {"SmokeLauncherMag"};
				soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm", 0.562341, 1, 30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm", 0.562341, 1, 30};
				outGunnerMayFire = 0;
				inGunnerMayFire = 1;
				gunnerAction = "commander_apctracked1rcws_out";
				gunnerInAction = "commander_apctracked1_in";
				gunnerGetInAction = "GetInAMV_cargo";
				gunnerGetOutAction = "GetOutLow";
				turretInfoType = "RscWeaponRangeFinder";
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
				gunnerOutOpticsModel = "";
				gunnerOpticsEffect[] = {};
				class ViewGunner: ViewCargo //inherits 15 parameters from bin\config.bin/CfgVehicles/AllVehicles/ViewCargo, sources - []
				{
				};
				class ViewOptics: ViewOptics //inherits 0 parameters from bin\config.bin/CfgVehicles/LandVehicle/CommanderOptics/ViewOptics, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.31;
					minFov = 0.034;
					maxFov = 0.31;
					visionMode[] = {"Normal", "NVG", "TI"};
					thermalMode[] = {2, 3};
				};
				startEngine = 0;
				stabilizedInAxes = 3;
				maxHorizontalRotSpeed = 1.8;
				maxVerticalRotSpeed = 1.8;
				viewGunnerInExternal = 1;
				showCrewAim = 1;
				class HitPoints //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
				{
					class HitTurret //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
					{
						armor = 10;
						material = -1;
						name = "commander_turret_hit";
						visual = "";
						passThrough = 0;
						minimalHit = 1;
						explosionShielding = 0;
						radius = 0;
					};
					class HitGun //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
					{
						armor = 10;
						material = -1;
						name = "commander_gun_hit";
						visual = "";
						passThrough = 0;
						minimalHit = 1;
						explosionShielding = 0;
						radius = 0;
					};
				};
				class Components //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander //inherits 1 parameters from bin\config.bin/VehicleSystemsTemplateLeftCommander, sources - []
					{
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander //inherits 1 parameters from bin\config.bin/VehicleSystemsTemplateRightCommander, sources - []
					{
					};
				};
			};
		};
		selectionFireAnim = "";
		class Reflectors //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
		{
			class Left //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				color[] = {1900, 1800, 1700};
				ambient[] = {5, 5, 5};
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1;
				class Attenuation //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class Right: Left //inherits 15 parameters from bin\config.bin/CfgVehicles/APC_Tracked_01_base_F/Reflectors/Left, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
			class Right2: Right //inherits 4 parameters from bin\config.bin/CfgVehicles/APC_Tracked_01_base_F/Reflectors/Right, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				position = "light_R_flare";
				useFlare = 1;
			};
			class Left2: Left //inherits 15 parameters from bin\config.bin/CfgVehicles/APC_Tracked_01_base_F/Reflectors/Left, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				position = "light_L_flare";
				useFlare = 1;
			};
		};
		aggregateReflectors[] = {{"Left", "Left2", "Right", "Right2"}};
		class Damage //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
		{
			tex[] = {};
			mat[] = {"A3\armor_f_beta\APC_Tracked_01\Data\APC_Tracked_01_AA_body.rvmat", "A3\armor_f_beta\APC_Tracked_01\Data\APC_Tracked_01_AA_body_damage.rvmat", "A3\armor_f_beta\APC_Tracked_01\Data\APC_Tracked_01_AA_body_destruct.rvmat", "A3\armor_f_beta\APC_Tracked_01\Data\APC_Tracked_01_AA_Tower.rvmat", "A3\armor_f_beta\APC_Tracked_01\Data\APC_Tracked_01_AA_Tower_damage.rvmat", "A3\armor_f_beta\APC_Tracked_01\Data\APC_Tracked_01_AA_Tower_destruct.rvmat", "A3\armor_f_beta\APC_Tracked_01\Data\APC_Tracked_01_body.rvmat", "A3\armor_f_beta\APC_Tracked_01\Data\APC_Tracked_01_body_damage.rvmat", "A3\armor_f_beta\APC_Tracked_01\Data\APC_Tracked_01_body_destruct.rvmat", "A3\armor_f_beta\APC_Tracked_01\Data\APC_Tracked_01_CRV.rvmat", "A3\armor_f_beta\APC_Tracked_01\Data\APC_Tracked_01_CRV_damage.rvmat", "A3\armor_f_beta\APC_Tracked_01\Data\APC_Tracked_01_CRV_destruct.rvmat", "a3\armor_f_beta\apc_tracked_01\data\MBT_01_body.rvmat", "a3\armor_f_beta\apc_tracked_01\data\MBT_01_body_damage.rvmat", "a3\armor_f_beta\apc_tracked_01\data\MBT_01_body_destruct.rvmat", "a3\armor_f_beta\apc_tracked_01\data\MBT_01_body_CRV_noTI.rvmat", "a3\armor_f_beta\apc_tracked_01\data\MBT_01_body_damage.rvmat", "a3\armor_f_beta\apc_tracked_01\data\MBT_01_body_destruct.rvmat", "A3\armor_f_beta\APC_Tracked_01\Data\APC_Tracked_01_Interier.rvmat", "A3\armor_f_beta\APC_Tracked_01\Data\APC_Tracked_01_Interier_damage.rvmat", "A3\armor_f_beta\APC_Tracked_01\Data\APC_Tracked_01_Interier_destruct.rvmat"};
		};
		class TransportMagazines //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
		{
			class _xx_30Rnd_65x39_caseless_mag //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 24;
			};
			class _xx_100Rnd_65x39_caseless_mag //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				magazine = "100Rnd_65x39_caseless_mag";
				count = 12;
			};
			class _xx_HandGrenade //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				magazine = "HandGrenade";
				count = 6;
			};
			class _xx_MiniGrenade //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				magazine = "MiniGrenade";
				count = 6;
			};
			class _xx_1Rnd_HE_Grenade_shell //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 3;
			};
			class _xx_SmokeShell //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				magazine = "SmokeShell";
				count = 8;
			};
			class _xx_SmokeShellGreen //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				magazine = "SmokeShellGreen";
				count = 8;
			};
			class _xx_SmokeShellOrange //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				magazine = "SmokeShellOrange";
				count = 8;
			};
			class _xx_SmokeShellBlue //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				magazine = "SmokeShellBlue";
				count = 8;
			};
			class _xx_NLAW_F //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				magazine = "NLAW_F";
				count = 5;
			};
			class _xx_Titan_AT //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				magazine = "Titan_AT";
				count = 2;
			};
			class _xx_Titan_AP //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				magazine = "Titan_AP";
				count = 2;
			};
			class _xx_Titan_AA //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				magazine = "Titan_AA";
				count = 2;
			};
		};
		class TransportItems //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
		{
			class _xx_FirstAidKit //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
		class TransportWeapons //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
		{
			class _xx_arifle_MX_F //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				weapon = "arifle_MX_F";
				count = 2;
			};
			class _xx_arifle_MX_SW_F //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				weapon = "arifle_MX_SW_F";
				count = 1;
			};
			class _xx_launch_NLAW_F //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				weapon = "launch_NLAW_F";
				count = 1;
			};
		};
		class AnimationSources: AnimationSources //inherits 0 parameters from bin\config.bin/CfgVehicles/All/AnimationSources, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
		{
			class HideTurret //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.001;
			};
		};
	};
	class B_APC_Tracked_01_base_F: APC_Tracked_01_base_F //inherits 112 parameters from bin\config.bin/CfgVehicles/APC_Tracked_01_base_F, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "B_APC_Tracked_01_base_F";
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = {"B_Soldier_F"};
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"A3\Armor_F_Beta\APC_Tracked_01\Data\apc_tracked_01_body_crv_co.paa", "A3\Armor_F_Beta\APC_Tracked_01\Data\mbt_01_body_co.paa", "a3\data_f\vehicles\turret_co.paa"};
		class Turrets: Turrets //inherits 2 parameters from bin\config.bin/CfgVehicles/APC_Tracked_01_base_F/Turrets, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
		{
			class MainTurret: MainTurret //inherits 33 parameters from bin\config.bin/CfgVehicles/APC_Tracked_01_base_F/Turrets/MainTurret, sources - []
			{
			};
			class CommanderOptics: CommanderOptics //inherits 32 parameters from bin\config.bin/CfgVehicles/APC_Tracked_01_base_F/Turrets/CommanderOptics, sources - []
			{
			};
		};
	};
	class B_APC_Tracked_01_rcws_F: B_APC_Tracked_01_base_F //inherits 9 parameters from bin\config.bin/CfgVehicles/B_APC_Tracked_01_base_F, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
	{
		features = "Randomization: No						<br />Camo selections: 3 - top of hull, bottom of hull, turret						<br />Script door sources: No						<br />Script animations: HideTurret						<br />Executed scripts: None 						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: 1 to 8";
		author = "Bohemia Interactive";
		mapSize = 9.95;
		class SpeechVariants //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
		{
			class Default //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				speechSingular[] = {"veh_vehicle_APC_s"};
				speechPlural[] = {"veh_vehicle_APC_p"};
			};
		};
		textSingular = "APC";
		textPlural = "APCs";
		nameSound = "veh_vehicle_APC_s";
		class SimpleObject //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"wheel_koll1", 0}, {"wheel_kolol1", 0}, {"wheel_podkolol1", 0.56}, {"wheel_kolp1", 0}, {"wheel_kolop1", 0}, {"wheel_podkolop1", 0.56}, {"wheel_koll2", 0}, {"wheel_kolp2", 0}, {"wheel_kolol2", 0}, {"wheel_kolol3", 0}, {"wheel_kolol4", 0}, {"wheel_kolol5", 0}, {"wheel_kolol6", 0}, {"wheel_kolop2", 0}, {"wheel_kolop3", 0}, {"wheel_kolop4", 0}, {"wheel_kolop5", 0}, {"wheel_kolop6", 0}, {"wheel_podkolol2", 0.55}, {"wheel_podkolol3", 0.53}, {"wheel_podkolol4", 0.49}, {"wheel_podkolol5", 0.46}, {"wheel_podkolol6", 0.43}, {"wheel_podkolop2", 0.54}, {"wheel_podkolop3", 0.51}, {"wheel_podkolop4", 0.49}, {"wheel_podkolop5", 0.46}, {"wheel_podkolop6", 0.43}, {"podkolol1_hide_damage", 0}, {"podkolol2_hide_damage", 0}, {"podkolol3_hide_damage", 0}, {"podkolol4_hide_damage", 0}, {"podkolol5_hide_damage", 0}, {"podkolol6_hide_damage", 0}, {"podkolol7_hide_damage", 0}, {"podkolol8_hide_damage", 0}, {"podkolop1_hide_damage", 0}, {"podkolop2_hide_damage", 0}, {"podkolop3_hide_damage", 0}, {"podkolop4_hide_damage", 0}, {"podkolop5_hide_damage", 0}, {"podkolop6_hide_damage", 0}, {"podkolop7_hide_damage", 0}, {"podkolop8_hide_damage", 0}, {"damagevez", 0}, {"mainturret", 0}, {"maingun", 0}, {"obsturret", 0}, {"obsgun", 0}, {"reverse_light", 0}, {"plates_1_y", 0}, {"plates_2_y", 0}, {"plates_1_x", 0}, {"plates_2_x", 0}, {"plates_1_bank", 0}, {"plates_2_bank", 0}, {"hatchcommander", 0}, {"zasleh_rot", 0}, {"zasleh2_rot", 477.96}, {"zasleh_hide", 0}, {"maingunoptics", 0}};
			hide[] = {"clan", "zasleh2", "zasleh_1", "light_l", "light_r", "zadni svetlo", "brzdove svetlo", "podsvit pristroju", "poskozeni"};
			verticalOffset = 2.465;
			verticalOffsetWorld = -0.012;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_APC_Tracked_01_rcws_F.jpg";
		_generalMacro = "B_APC_Tracked_01_rcws_F";
		weaponsGroup1 = 2;
		weaponsGroup2 = "1 + 		4";
		weaponsGroup3 = "8 + 	16 + 	32";
		weaponsGroup4 = "64 + 		128";
		scope = 2;
		displayName = "IFV-6c Panther";
		picture = "\A3\armor_f_beta\APC_Tracked_01\Data\UI\APC_Tracked_01_Base_ca.paa";
		icon = "\A3\armor_f_beta\APC_Tracked_01\Data\UI\map_APC_Tracked_01_ca.paa";
		class Turrets: Turrets //inherits 2 parameters from bin\config.bin/CfgVehicles/B_APC_Tracked_01_base_F/Turrets, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
		{
			class MainTurret: MainTurret //inherits 0 parameters from bin\config.bin/CfgVehicles/B_APC_Tracked_01_base_F/Turrets/MainTurret, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				weapons[] = {"HMG_127_APC", "GMG_40mm"};
				magazines[] = {"96Rnd_40mm_G_belt", "500Rnd_127x99_mag_Tracer_Red"};
				gunnerGetInAction = "GetInAMV_cargo";
				gunnerGetOutAction = "GetOutLow";
			};
			class CommanderOptics: CommanderOptics //inherits 0 parameters from bin\config.bin/CfgVehicles/B_APC_Tracked_01_base_F/Turrets/CommanderOptics, sources - []
			{
			};
		};
		threat[] = {1, 0.6, 0.6};
		transportSoldier = 8;
		class AnimationSources: AnimationSources //inherits 1 parameters from bin\config.bin/CfgVehicles/APC_Tracked_01_base_F/AnimationSources, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
		{
			class muzzle_rot //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				source = "ammorandom";
				weapon = "GMG_40mm";
			};
			class muzzle_hide //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				source = "reload";
				weapon = "GMG_40mm";
			};
		};
	};
	class B_APC_Tracked_01_CRV_F: B_APC_Tracked_01_base_F //inherits 9 parameters from bin\config.bin/CfgVehicles/B_APC_Tracked_01_base_F, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
	{
		features = "Randomization: No						<br />Camo selections: 4 - top of hull, bottom of hull, turret, CRV accessories						<br />Script door sources: No						<br />Script animations: HideTurret						<br />Executed scripts: None 						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: None";
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"wheel_koll1", 0}, {"wheel_kolol1", 0}, {"wheel_podkolol1", 0.59}, {"wheel_kolp1", 0}, {"wheel_kolop1", 0}, {"wheel_podkolop1", 0.58}, {"wheel_koll2", 0}, {"wheel_kolp2", 0}, {"wheel_kolol2", 0}, {"wheel_kolol3", 0}, {"wheel_kolol4", 0}, {"wheel_kolol5", 0}, {"wheel_kolol6", 0}, {"wheel_kolop2", 0}, {"wheel_kolop3", 0}, {"wheel_kolop4", 0}, {"wheel_kolop5", 0}, {"wheel_kolop6", 0}, {"wheel_podkolol2", 0.57}, {"wheel_podkolol3", 0.55}, {"wheel_podkolol4", 0.51}, {"wheel_podkolol5", 0.47}, {"wheel_podkolol6", 0.45}, {"wheel_podkolop2", 0.56}, {"wheel_podkolop3", 0.53}, {"wheel_podkolop4", 0.51}, {"wheel_podkolop5", 0.48}, {"wheel_podkolop6", 0.44}, {"podkolol1_hide_damage", 0}, {"podkolol2_hide_damage", 0}, {"podkolol3_hide_damage", 0}, {"podkolol4_hide_damage", 0}, {"podkolol5_hide_damage", 0}, {"podkolol6_hide_damage", 0}, {"podkolol7_hide_damage", 0}, {"podkolol8_hide_damage", 0}, {"podkolop1_hide_damage", 0}, {"podkolop2_hide_damage", 0}, {"podkolop3_hide_damage", 0}, {"podkolop4_hide_damage", 0}, {"podkolop5_hide_damage", 0}, {"podkolop6_hide_damage", 0}, {"podkolop7_hide_damage", 0}, {"podkolop8_hide_damage", 0}, {"damagevez", 0}, {"mainturret", 0}, {"maingun", 0}, {"obsturret", 0}, {"obsgun", 0}, {"reverse_light", 0}, {"plates_1_y", 0}, {"plates_2_y", 0}, {"plates_1_x", 0}, {"plates_2_x", 0}, {"plates_1_bank", 0}, {"plates_2_bank", 0}, {"hatchcommander", 0}, {"zasleh2_rot", 474.82}, {"maingunoptics", 0}, {"zasleh_hide", 0}, {"zasleh_rot", 0}};
			hide[] = {"clan", "zasleh2", "zasleh_1", "light_l", "light_r", "zadni svetlo", "brzdove svetlo", "podsvit pristroju", "poskozeni"};
			verticalOffset = 2.469;
			verticalOffsetWorld = -0.02;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_APC_Tracked_01_CRV_F.jpg";
		_generalMacro = "B_APC_Tracked_01_CRV_F";
		scope = 2;
		typicalCargo[] = {"B_Engineer_F"};
		displayName = "CRV-6e Bobcat";
		model = "\A3\armor_f_beta\APC_Tracked_01\APC_Tracked_01_crv_F";
		picture = "\A3\armor_f_beta\APC_Tracked_01\Data\UI\APC_Tracked_01_CRV_ca.paa";
		Icon = "\A3\armor_f_beta\APC_Tracked_01\Data\ui\map_APC_Tracked_01_crv_ca.paa";
		cost = 1.5e+006;
		accuracy = 0.5;
		transportRepair = 1e+012;
		transportFuel = 1e+012;
		transportAmmo = 1e+012;
		supplyRadius = 10;
		class AnimationSources: AnimationSources //inherits 1 parameters from bin\config.bin/CfgVehicles/APC_Tracked_01_base_F/AnimationSources, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
		{
			class muzzle_rot //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				source = "ammorandom";
				weapon = "LMG_RCWS";
			};
			class muzzle_hide //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				source = "reload";
				weapon = "LMG_RCWS";
			};
		};
		vehicleClass = "Support";
		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"A3\Armor_F_Beta\APC_Tracked_01\Data\apc_tracked_01_body_crv_co.paa", "A3\Armor_F_Beta\APC_Tracked_01\Data\mbt_01_body_co.paa", "a3\data_f\vehicles\turret_co.paa", "A3\Armor_F_Beta\APC_Tracked_01\Data\apc_tracked_01_crv_co.paa"};
	};
	class B_APC_Tracked_01_AA_F: B_APC_Tracked_01_base_F //inherits 9 parameters from bin\config.bin/CfgVehicles/B_APC_Tracked_01_base_F, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
	{
		features = "Randomization: No						<br />Camo selections: 3 - top of hull, bottom of hull, turret						<br />Script door sources: None						<br />Script animations: HideTurret						<br />Executed scripts: None 						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: None";
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"wheel_koll1", 0}, {"wheel_kolol1", 0}, {"wheel_podkolol1", 0.57}, {"wheel_kolp1", 0}, {"wheel_kolop1", 0}, {"wheel_podkolop1", 0.57}, {"wheel_koll2", 0}, {"wheel_kolp2", 0}, {"wheel_kolol2", 0}, {"wheel_kolol3", 0}, {"wheel_kolol4", 0}, {"wheel_kolol5", 0}, {"wheel_kolol6", 0}, {"wheel_kolop2", 0}, {"wheel_kolop3", 0}, {"wheel_kolop4", 0}, {"wheel_kolop5", 0}, {"wheel_kolop6", 0}, {"wheel_podkolol2", 0.56}, {"wheel_podkolol3", 0.53}, {"wheel_podkolol4", 0.5}, {"wheel_podkolol5", 0.46}, {"wheel_podkolol6", 0.44}, {"wheel_podkolop2", 0.54}, {"wheel_podkolop3", 0.52}, {"wheel_podkolop4", 0.5}, {"wheel_podkolop5", 0.47}, {"wheel_podkolop6", 0.44}, {"podkolol1_hide_damage", 0}, {"podkolol2_hide_damage", 0}, {"podkolol3_hide_damage", 0}, {"podkolol4_hide_damage", 0}, {"podkolol5_hide_damage", 0}, {"podkolol6_hide_damage", 0}, {"podkolol7_hide_damage", 0}, {"podkolol8_hide_damage", 0}, {"podkolop1_hide_damage", 0}, {"podkolop2_hide_damage", 0}, {"podkolop3_hide_damage", 0}, {"podkolop4_hide_damage", 0}, {"podkolop5_hide_damage", 0}, {"podkolop6_hide_damage", 0}, {"podkolop7_hide_damage", 0}, {"podkolop8_hide_damage", 0}, {"damagevez", 0}, {"mainturret", 0}, {"maingun", 0.09}, {"obsturret", 0}, {"obsgun", 0}, {"hatchcommander", 0}, {"hatchgunner", 0}, {"reverse_light", 0}, {"plates_1_y", 0}, {"plates_2_y", 0}, {"plates_1_x", 0}, {"plates_2_x", 0}, {"plates_1_bank", 0}, {"plates_2_bank", 0}, {"hidetitan_1", 1}, {"hidetitan_2", 1}, {"hidetitan_3", 1}, {"hidetitan_4", 1}, {"missile_move_1", 1}, {"missile_move_2", 1}, {"missile_move_3", 1}, {"zaslehrot", 0}, {"zaslehrot_2", 0}, {"maingunoptics", 0.09}, {"satellite_rot", 0}};
			hide[] = {"clan", "zasleh", "zasleh_1", "light_l", "light_r", "zadni svetlo", "brzdove svetlo", "podsvit pristroju", "poskozeni"};
			verticalOffset = 2.821;
			verticalOffsetWorld = -0.016;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_APC_Tracked_01_AA_F.jpg";
		_generalMacro = "B_APC_Tracked_01_AA_F";
		scope = 2;
		displayName = "IFV-6a Cheetah";
		model = "\A3\armor_f_beta\APC_Tracked_01\APC_Tracked_01_aa_F";
		editorSubcategory = "EdSubcat_AAs";
		picture = "\A3\armor_f_beta\APC_Tracked_01\Data\UI\APC_Tracked_01_AA_ca.paa";
		Icon = "\A3\armor_f_beta\APC_Tracked_01\Data\ui\map_APC_Tracked_01_aa_ca.paa";
		memoryPointLMissile = "Rocket_1";
		memoryPointRMissile = "Rocket_2";
		cost = 2e+006;
		artilleryScanner = 0;
		irScanGround = 0;
		irScanRangeMax = 10000;
		irScanRangeMin = 2000;
		irScanToEyeFactor = 2;
		radarType = 2;
		reportRemoteTargets = 1;
		receiveRemoteTargets = 1;
		class AnimationSources: AnimationSources //inherits 1 parameters from bin\config.bin/CfgVehicles/APC_Tracked_01_base_F/AnimationSources, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
		{
			class Missiles_revolving //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				source = "revolving";
				weapon = "missiles_titan";
			};
			class muzzle_rot //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				source = "ammorandom";
				weapon = "autocannon_35mm";
			};
		};
		class Components: Components //inherits 2 parameters from bin\config.bin/CfgVehicles/Tank_F/Components, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
		{
			class SensorsManagerComponent //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				class Components //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar //inherits 11 parameters from bin\config.bin/SensorTemplateActiveRadar, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
					{
						class AirTarget //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
						{
							minRange = 9000;
							maxRange = 9000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
						{
							minRange = 6000;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 5000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 100;
						aimDown = -45;
						minSpeedThreshold = 30;
						maxSpeedThreshold = 90;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink //inherits 4 parameters from bin\config.bin/SensorTemplateDataLink, sources - []
					{
					};
				};
			};
		};
		class Turrets: Turrets //inherits 2 parameters from bin\config.bin/CfgVehicles/B_APC_Tracked_01_base_F/Turrets, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
		{
			class MainTurret: MainTurret //inherits 0 parameters from bin\config.bin/CfgVehicles/B_APC_Tracked_01_base_F/Turrets/MainTurret, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
			{
				memoryPointGun[] = {"usti hlavne 1", "usti hlavne 2"};
				minElev = -10;
				maxElev = 80;
				initElev = 5;
				weapons[] = {"autocannon_35mm", "missiles_titan"};
				soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner", 0.316228, 1, 30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical", 0.316228, 1, 30};
				magazines[] = {"680Rnd_35mm_AA_shells_Tracer_Red", "4Rnd_Titan_long_missiles"};
				selectionFireAnim = "zasleh";
				forceHideGunner = 0;
				gunnerAction = "gunner_apctracked1aa_out";
				gunnerInAction = "gunner_apctracked1aa_in";
				class HitPoints: HitPoints //inherits 2 parameters from bin\config.bin/CfgVehicles/APC_Tracked_01_base_F/Turrets/MainTurret/HitPoints, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
				{
					class HitTurret //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
					{
						armor = 0.4;
						material = -1;
						name = "main_turret_hit";
						visual = "vez";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.2;
						radius = 0.25;
					};
					class HitGun //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
					{
						armor = 0.3;
						material = -1;
						name = "main_gun_hit";
						visual = "";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.4;
						radius = 0.25;
					};
				};
				class OpticsIn: Optics_Gunner_AAA_01 //inherits 3 parameters from bin\config.bin/Optics_Gunner_AAA_01, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
				{
					class Wide: Wide //inherits 2 parameters from bin\config.bin/Optics_Gunner_AAA_01/Wide, sources - []
					{
					};
					class Medium: Medium //inherits 2 parameters from bin\config.bin/Optics_Gunner_AAA_01/Medium, sources - []
					{
					};
					class Narrow: Narrow //inherits 2 parameters from bin\config.bin/Optics_Gunner_AAA_01/Narrow, sources - []
					{
					};
				};
				turretInfoType = "RscOptics_APC_Tracked_01_gunner";
				class Components //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner //inherits 1 parameters from bin\config.bin/VehicleSystemsTemplateLeftGunner, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
					{
						class Components: Components //inherits 2 parameters from bin\config.bin/VehicleSystemsTemplateLeftGunner/Components, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
						{
							class SensorDisplay //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
							{
								componentType = "SensorsDisplayComponent";
								range[] = {16000, 8000, 4000, 2000};
								resource = "RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner //inherits 1 parameters from bin\config.bin/VehicleSystemsTemplateRightGunner, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
					{
						defaultDisplay = "SensorDisplay";
						class Components: Components //inherits 2 parameters from bin\config.bin/VehicleSystemsTemplateRightGunner/Components, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
						{
							class SensorDisplay //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
							{
								componentType = "SensorsDisplayComponent";
								range[] = {16000, 8000, 4000, 2000};
								resource = "RscCustomInfoSensors";
							};
						};
					};
				};
				class Turrets: Turrets //inherits 0 parameters from bin\config.bin/CfgVehicles/APC_Tracked_01_base_F/Turrets/MainTurret/Turrets, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
				{
					class CommanderOptics: CommanderOptics //inherits 32 parameters from bin\config.bin/CfgVehicles/APC_Tracked_01_base_F/Turrets/CommanderOptics, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
					{
						gunnerAction = "commander_apctracked1aa_out";
						gunnerInAction = "commander_apctracked1aa_in";
						class HitPoints: HitPoints //inherits 2 parameters from bin\config.bin/CfgVehicles/APC_Tracked_01_base_F/Turrets/CommanderOptics/HitPoints, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
						{
							class HitTurret //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
							{
								armor = 0.1;
								material = -1;
								name = "commander_turret_hit";
								visual = "";
								passThrough = 0;
								minimalHit = 0.1;
								explosionShielding = 1;
								radius = 0.2;
							};
							class HitGun //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
							{
								armor = 0.1;
								material = -1;
								name = "commander_gun_hit";
								visual = "";
								passThrough = 0;
								minimalHit = 0.1;
								explosionShielding = 1;
								radius = 0.2;
							};
						};
						class OpticsIn: Optics_Commander_01 //inherits 3 parameters from bin\config.bin/Optics_Commander_01, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
						{
							class Wide: Wide //inherits 1 parameters from bin\config.bin/Optics_Commander_01/Wide, sources - []
							{
							};
							class Medium: Medium //inherits 1 parameters from bin\config.bin/Optics_Commander_01/Medium, sources - []
							{
							};
							class Narrow: Narrow //inherits 1 parameters from bin\config.bin/Optics_Commander_01/Narrow, sources - []
							{
							};
						};
						class Components //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
						{
							class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander //inherits 1 parameters from bin\config.bin/VehicleSystemsTemplateLeftCommander, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
							{
								class Components: Components //inherits 2 parameters from bin\config.bin/VehicleSystemsTemplateLeftCommander/Components, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
								{
									class SensorDisplay //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
									{
										componentType = "SensorsDisplayComponent";
										range[] = {8000, 4000, 2000, 16000};
										resource = "RscCustomInfoSensors";
									};
								};
							};
							class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander //inherits 1 parameters from bin\config.bin/VehicleSystemsTemplateRightCommander, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
							{
								defaultDisplay = "SensorDisplay";
								class Components: Components //inherits 2 parameters from bin\config.bin/VehicleSystemsTemplateRightCommander/Components, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
								{
									class SensorDisplay //sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
									{
										componentType = "SensorsDisplayComponent";
										range[] = {8000, 4000, 2000, 16000};
										resource = "RscCustomInfoSensors";
									};
								};
							};
						};
						turretInfoType = "RscOptics_MBT_01_commander";
					};
				};
			};
		};
		threat[] = {0.5, 0.5, 1};
		smokeLauncherOnTurret = 1;
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"A3\Armor_F_Beta\APC_Tracked_01\Data\apc_tracked_01_aa_body_co.paa", "A3\Armor_F_Beta\APC_Tracked_01\Data\mbt_01_body_co.paa", "A3\Armor_F_Beta\APC_Tracked_01\Data\apc_tracked_01_aa_tower_co.paa"};
		class EventHandlers: EventHandlers //inherits 0 parameters from bin\config.bin/CfgVehicles/Tank_F/EventHandlers, sources - ["A3_Armor_F_Beta_APC_Tracked_01"]
		{
			fired = "[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
	};
	class APC_Tracked_01_unarmed_base_F: APC_Tracked_01_base_F //inherits 112 parameters from bin\config.bin/CfgVehicles/APC_Tracked_01_base_F, sources - ["A3_Armor_F_Argo_APC_Tracked_01"]
	{
		author = "Bohemia Interactive";
		mapSize = 1;
		class SpeechVariants //sources - ["A3_Armor_F_Argo_APC_Tracked_01"]
		{
			class Default //sources - ["A3_Armor_F_Argo_APC_Tracked_01"]
			{
				speechSingular[] = {"veh_vehicle_armor_s"};
				speechPlural[] = {"veh_vehicle_armor_p"};
			};
		};
		textSingular = "armor";
		textPlural = "alpha victors";
		nameSound = "veh_vehicle_armor_s";
		_generalMacro = "APC_Tracked_01_unarmed_base_F";
		class Turrets //sources - []
		{
		};
	};
	class APC_Tracked_02_base_F: Tank_F //inherits 83 parameters from bin\config.bin/CfgVehicles/Tank_F, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
	{
		author = "Bohemia Interactive";
		mapSize = 10.92;
		_generalMacro = "APC_Tracked_02_base_F";
		attenuationEffectType = "TankAttenuation";
		soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out", 0.562341, 1};
		soundGetOut[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out", 0.562341, 1, 20};
		soundTurnIn[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out", 1.77828, 1, 20};
		soundTurnOut[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out", 1.77828, 1, 20};
		soundTurnInInternal[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out", 1.77828, 1, 20};
		soundTurnOutInternal[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out", 1.77828, 1, 20};
		soundDammage[] = {"", 0.562341, 1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_start", 0.630957, 1};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_start", 1, 1, 200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_stop", 0.630957, 1};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_stop", 1, 1, 200};
		soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1", 0.177828, 1, 100};
		soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2", 0.177828, 1, 100};
		soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3", 0.177828, 1, 100};
		soundBushCrash[] = {"soundBushCollision1", 0.33, "soundBushCollision2", 0.33, "soundBushCollision3", 0.33};
		soundGeneralCollision1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_1", 1, 1, 100};
		soundGeneralCollision2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_2", 1, 1, 100};
		soundGeneralCollision3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_3", 1, 1, 100};
		soundGeneralCollision4[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_4", 1, 1, 100};
		soundCrashes[] = {"soundGeneralCollision1", 0.25, "soundGeneralCollision2", 0.25, "soundGeneralCollision3", 0.25, "soundGeneralCollision4", 0.25};
		buildCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_1", 1, 1, 200};
		buildCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_2", 1, 1, 200};
		buildCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_3", 1, 1, 200};
		buildCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_4", 1, 1, 200};
		soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
		WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_1", 1, 1, 200};
		WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_2", 1, 1, 200};
		WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_3", 1, 1, 200};
		WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_4", 1, 1, 200};
		soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166};
		ArmorCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_1", 1, 1, 200};
		ArmorCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_2", 1, 1, 200};
		ArmorCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_3", 1, 1, 200};
		ArmorCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_4", 1, 1, 200};
		soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
		class Sounds //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
		{
			class Idle_ext //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_1", 0.562341, 1, 160};
				frequency = "0.95	+	((rpm/	2300) factor[(500/	2300),(650/	2300)])*0.15";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(100/	2300),(400/	2300)])	*	((rpm/	2300) factor[(730/	2300),(610/	2300)]))";
			};
			class Engine //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_2", 0.794328, 1, 200};
				frequency = "0.8	+	((rpm/	2300) factor[(600/	2300),(1100/	2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(550/	2300),(700/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(760/	2300)]))";
			};
			class Engine1_ext //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_3", 0.891251, 1, 260};
				frequency = "0.8	+	((rpm/	2300) factor[(770/	2300),(1400/	2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(720/	2300),(1060/	2300)])	*	((rpm/	2300) factor[(1400/	2300),(1180/	2300)]))";
			};
			class Engine2_ext //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_4", 1, 1, 280};
				frequency = "0.8	+	((rpm/	2300) factor[(1150/	2300),(1700/	2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(1130/	2300),(1370/	2300)])	*	((rpm/	2300) factor[(1700/	2300),(1500/	2300)]))";
			};
			class Engine3_ext //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_5", 1.12202, 1, 300};
				frequency = "0.8	+	((rpm/	2300) factor[(1500/	2300),(2100/	2300)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(1460/	2300),(1670/	2300)])	*	((rpm/	2300) factor[(2100/	2300),(1800/	2300)]))";
			};
			class Engine4_ext //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_6", 1.25893, 1, 320};
				frequency = "0.8	+	((rpm/	2300) factor[(1800/	2300),(2300/	2300)])*0.1";
				volume = "engineOn*camPos*((rpm/	2300) factor[(1750/	2300),(2050/	2300)])";
			};
			class IdleThrust //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_1", 0.398107, 1, 250};
				frequency = "0.8	+	((rpm/	2300) factor[(500/	2300),(650/	2300)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(100/	2300),(400/	2300)])	*	((rpm/	2300) factor[(730/	2300),(610/	2300)]))";
			};
			class EngineThrust //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_2", 0.446684, 1, 280};
				frequency = "0.8	+	((rpm/	2300) factor[(600/	2300),(1100/	2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(550/	2300),(700/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(760/	2300)]))";
			};
			class Engine1_Thrust_ext //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_3", 0.501187, 1, 300};
				frequency = "0.8	+	((rpm/	2300) factor[(770/	2300),(1400/	2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(720/	2300),(1060/	2300)])	*	((rpm/	2300) factor[(1400/	2300),(1180/	2300)]))";
			};
			class Engine2_Thrust_ext //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_4", 0.562341, 1, 340};
				frequency = "0.8	+	((rpm/	2300) factor[(1150/	2300),(1700/	2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1130/	2300),(1370/	2300)])	*	((rpm/	2300) factor[(1700/	2300),(1500/	2300)]))";
			};
			class Engine3_Thrust_ext //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_5", 0.707946, 1, 360};
				frequency = "0.8	+	((rpm/	2300) factor[(1500/	2300),(2100/	2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1460/	2300),(1670/	2300)])	*	((rpm/	2300) factor[(2100/	2300),(1800/	2300)]))";
			};
			class Engine4_Thrust_ext //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_6", 0.794328, 1, 380};
				frequency = "0.8	+	((rpm/	2300) factor[(1800/	2300),(2300/	2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2300) factor[(1750/	2300),(2050/	2300)])";
			};
			class Idle_int //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_1", 0.316228, 1};
				frequency = "1	+	((rpm/	2300) factor[(500/	2300),(650/	2300)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(100/	2300),(400/	2300)])	*	((rpm/	2300) factor[(730/	2300),(610/	2300)]))";
			};
			class Engine_int //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_2", 0.354813, 1};
				frequency = "1	+	((rpm/	2300) factor[(600/	2300),(1100/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(550/	2300),(700/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(760/	2300)]))";
			};
			class Engine1_int //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_3", 0.398107, 1};
				frequency = "1	+	((rpm/	2300) factor[(770/	2300),(1400/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(720/	2300),(1060/	2300)])	*	((rpm/	2300) factor[(1400/	2300),(1180/	2300)]))";
			};
			class Engine2_int //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_4", 0.446684, 1};
				frequency = "1	+	((rpm/	2300) factor[(1150/	2300),(1700/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(1130/	2300),(1370/	2300)])	*	((rpm/	2300) factor[(1700/	2300),(1500/	2300)]))";
			};
			class Engine3_int //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_5", 0.501187, 1};
				frequency = "1	+	((rpm/	2300) factor[(1500/	2300),(2100/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(1460/	2300),(1670/	2300)])	*	((rpm/	2300) factor[(2100/	2300),(1800/	2300)]))";
			};
			class Engine4_int //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_6", 0.562341, 1};
				frequency = "1	+	((rpm/	2300) factor[(1800/	2300),(2300/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	2300) factor[(1750/	2300),(2050/	2300)])";
			};
			class NoiseInt //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1", 0.794328, 1};
				frequency = "1";
				volume = "(1-camPos)*(speed factor[4, 15])";
			};
			class NoiseExt //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1", 3.16228, 1, 250};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0 //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\Threads\Ext\APC_Tracked_02_Threads_Hard_Ext_01", 0.398107, 1, 140};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
			};
			class ThreadsOutH1 //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\Threads\Ext\APC_Tracked_02_Threads_Hard_Ext_02", 0.446684, 1, 160};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
			};
			class ThreadsOutH2 //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\Threads\Ext\APC_Tracked_02_Threads_Hard_Ext_03", 0.316228, 1, 180};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
			};
			class ThreadsOutH3 //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\Threads\Ext\APC_Tracked_02_Threads_Hard_Ext_04", 0.316228, 1, 200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-65) max 65)/	95),(((-70) max 70)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-85) max 85)/	95),(((-80) max 80)/	95)]))";
			};
			class ThreadsOutH4 //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\Threads\Ext\APC_Tracked_02_Threads_Hard_Ext_05", 0.316228, 1, 220};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	95) factor[(((-80) max 80)/	95),(((-90) max 90)/	95)])";
			};
			class ThreadsOutS0 //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\Threads\Ext\APC_Tracked_02_Threads_Soft_Ext_01", 0.316228, 1, 120};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
			};
			class ThreadsOutS1 //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\Threads\Ext\APC_Tracked_02_Threads_Soft_Ext_02", 0.354813, 1, 140};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
			};
			class ThreadsOutS2 //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\Threads\Ext\APC_Tracked_02_Threads_Soft_Ext_03", 0.398107, 1, 160};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
			};
			class ThreadsOutS3 //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\Threads\Ext\APC_Tracked_02_Threads_Soft_Ext_04", 0.446684, 1, 180};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-65) max 65)/	95),(((-70) max 70)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-85) max 85)/	95),(((-80) max 80)/	95)]))";
			};
			class ThreadsOutS4 //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\Threads\Ext\APC_Tracked_02_Threads_Soft_Ext_05", 0.501187, 1, 200};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	95) factor[(((-80) max 80)/	95),(((-90) max 90)/	95)])";
			};
			class ThreadsInH0 //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\Threads\Int\APC_Tracked_02_Threads_Hard_Int_01", 1, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
			};
			class ThreadsInH1 //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\Threads\Int\APC_Tracked_02_Threads_Hard_Int_02", 1.12202, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
			};
			class ThreadsInH2 //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\Threads\Int\APC_Tracked_02_Threads_Hard_Int_03", 1.25893, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
			};
			class ThreadsInH3 //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\Threads\Int\APC_Tracked_02_Threads_Hard_Int_04", 1.41254, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-65) max 65)/	95),(((-70) max 70)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-85) max 85)/	95),(((-80) max 80)/	95)]))";
			};
			class ThreadsInH4 //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\Threads\Int\APC_Tracked_02_Threads_Hard_Int_05", 1.58489, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	95) factor[(((-80) max 80)/	95),(((-90) max 90)/	95)])";
			};
			class ThreadsInS0 //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\Threads\Int\APC_Tracked_02_Threads_Soft_Int_01", 0.794328, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
			};
			class ThreadsInS1 //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\Threads\Int\APC_Tracked_02_Threads_Soft_Int_02", 0.891251, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
			};
			class ThreadsInS2 //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\Threads\Int\APC_Tracked_02_Threads_Soft_Int_03", 1, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
			};
			class ThreadsInS3 //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\Threads\Int\APC_Tracked_02_Threads_Soft_Int_04", 1.25893, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-65) max 65)/	95),(((-70) max 70)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-85) max 85)/	95),(((-80) max 80)/	95)]))";
			};
			class ThreadsInS4 //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\Threads\Int\APC_Tracked_02_Threads_Soft_Int_05", 1.41254, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	95) factor[(((-80) max 80)/	95),(((-90) max 90)/	95)])";
			};
			class RainExt //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext", 1, 1, 100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int", 1, 1, 100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		simulation = "tankX";
		enginePower = 780;
		maxOmega = 210;
		peakTorque = 3370;
		torqueCurve[] = {{"(700/2640)", 0}, {"(1600/2640)", "(2650/2850)"}, {"(1800/2640)", "(2800/2850)"}, {"(1900/2640)", "(2850/2850)"}, {"(2000/2640)", "(2800/2850)"}, {"(2200/2640)", "(2750/2850)"}, {"(2400/2640)", "(2600/2850)"}, {"(3440/2640)", "(0/2850)"}};
		thrustDelay = 0.2;
		clutchStrength = 90;
		fuelCapacity = 1885;
		brakeIdleSpeed = 1.78;
		latency = 0.1;
		tankTurnForce = 800000;
		antiRollbarForceCoef = 24;
		antiRollbarForceLimit = 30;
		antiRollbarSpeedMin = 15;
		antiRollbarSpeedMax = 75;
		normalSpeedForwardCoef = 0.45;
		idleRpm = 610;
		redRpm = 2300;
		engineLosses = 25;
		transmissionLosses = 15;
		changeGearMinEffectivity[] = {0.5, 0.15, 0.95, 0.95, 0.95, 0.95, 0.95, 0.95, 0.95, 0.95, 0.95, 0.95, 0.9, 0.9, 0.9, 0.9, 0.9};
		class complexGearbox //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
		{
			GearboxRatios[] = {"R1", -2.235, "N", 0, "CD0", "2*(0.75^(-10))", "CD1", "2*(0.75^(-9))", "CD2", "2*(0.75^(-8))", "CD3", "2*(0.75^(-7))", "CD4", "2*(0.75^(-6))", "CD5", "2*(0.75^(-5))", "CD6", "2*(0.75^(-4))", "CD7", "2*(0.75^(-3))", "CD8", "2*(0.75^(-2))", "CD9", "2*(0.75^(-1))", "D1", "2*(0.75^0)", "D2", "2*(0.75^1)", "D3", "2*(0.75^2)", "D4", "2*(0.75^3)", "D5", "2*(0.75^4)"};
			TransmissionRatios[] = {"High", 6.4};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0;
		};
		class Wheels //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
		{
			class L2 //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				boneName = "wheel_podkoloL1";
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				damping = 75;
				steering = 0;
				side = "left";
				weight = 100;
				mass = 100;
				MOI = 30;
				latStiffX = 25;
				latStiffY = 280;
				longitudinalStiffnessPerUnitGravity = 100000;
				maxBrakeTorque = 10000;
				sprungMass = 2500;
				springStrength = 200000;
				springDamperRate = 24000;
				dampingRate = 1;
				dampingRateInAir = 2730;
				dampingRateDamaged = 10;
				dampingRateDestroyed = 10000;
				maxDroop = 0.18;
				maxCompression = 0.18;
				frictionVsSlipGraph[] = {{0, 5}, {0.5, 5}, {1, 5}};
			};
			class L3: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/APC_Tracked_02_base_F/Wheels/L2, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				boneName = "wheel_podkolol2";
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
			};
			class L4: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/APC_Tracked_02_base_F/Wheels/L2, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				boneName = "wheel_podkolol3";
				center = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
			};
			class L5: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/APC_Tracked_02_base_F/Wheels/L2, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				boneName = "wheel_podkolol4";
				center = "wheel_1_5_axis";
				boundary = "wheel_1_5_bound";
			};
			class L6: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/APC_Tracked_02_base_F/Wheels/L2, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				boneName = "wheel_podkolol5";
				center = "wheel_1_6_axis";
				boundary = "wheel_1_6_bound";
			};
			class L7: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/APC_Tracked_02_base_F/Wheels/L2, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				boneName = "wheel_podkolol6";
				center = "wheel_1_7_axis";
				boundary = "wheel_1_7_bound";
			};
			class L9: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/APC_Tracked_02_base_F/Wheels/L2, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				boneName = "wheel_podkolol9";
				center = "wheel_1_9_axis";
				boundary = "wheel_1_9_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class L1: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/APC_Tracked_02_base_F/Wheels/L2, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				boneName = "";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class R2: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/APC_Tracked_02_base_F/Wheels/L2, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				boneName = "wheel_podkolop1";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				side = "right";
			};
			class R3: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/APC_Tracked_02_base_F/Wheels/R2, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				boneName = "wheel_podkolop2";
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
			};
			class R4: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/APC_Tracked_02_base_F/Wheels/R2, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				boneName = "wheel_podkolop3";
				center = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
			};
			class R5: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/APC_Tracked_02_base_F/Wheels/R2, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				boneName = "wheel_podkolop4";
				center = "wheel_2_5_axis";
				boundary = "wheel_2_5_bound";
			};
			class R6: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/APC_Tracked_02_base_F/Wheels/R2, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				boneName = "wheel_podkolop5";
				center = "wheel_2_6_axis";
				boundary = "wheel_2_6_bound";
			};
			class R7: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/APC_Tracked_02_base_F/Wheels/R2, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				boneName = "wheel_podkolop6";
				center = "wheel_2_7_axis";
				boundary = "wheel_2_7_bound";
			};
			class R9: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/APC_Tracked_02_base_F/Wheels/R2, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				boneName = "wheel_podkolop9";
				center = "wheel_2_9_axis";
				boundary = "wheel_2_9_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class R1: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/APC_Tracked_02_base_F/Wheels/R2, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				boneName = "";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
		};
		scope = 0;
		class Library //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
		{
			libTextDesc = "The infantry fighting vehicle BTR-K Kamysh and its anti-aircraft cousin ZSU-39 Tigris share the same vehicle platform. Developed by Russia with a pinch of undeniable inspiration from Israeli IFVs, they serve in the OPFOR army as a prime example of a leveling of the technology field with the West. The Kamysh is equipped with a CTWS turret fitted with a 30 mm cannon, coaxial machinegun and 2 guided AT missiles, making the vehicle significant in the infantry support role. The Tigris is fitted with a 35 mm autocannon and 4 Titan AA missiles.";
		};
		model = "\A3\armor_f_beta\APC_Tracked_02\APC_Tracked_02_cannon_f";
		editorSubcategory = "EdSubcat_APCs";
		memoryPointTaskMarker = "TaskMarker_1_pos";
		picture = "\A3\armor_f_beta\APC_Tracked_02\Data\UI\APC_Tracked_02_cannon_ca.paa";
		Icon = "\A3\armor_f_beta\APC_Tracked_02\Data\UI\map_APC_Tracked_02_cannon_ca.paa";
		transportSoldier = 0;
		getInAction = "GetInMRAP_01";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInAMV_cargo"};
		cargoGetOutAction[] = {"GetOutLow"};
		cargoAction[] = {"passenger_apc_narrow_generic02", "passenger_apc_narrow_generic03", "passenger_apc_generic02", "passenger_apc_generic04", "passenger_apc_narrow_generic01", "passenger_generic01_foldhands", "passenger_generic01_leanleft", "passenger_generic01_leanright"};
		driverAction = "mbt1_slot1_out";
		driverInAction = "mbt1_slot1_in";
		forceHideDriver = 1;
		hideProxyInCombat = 1;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 1;
		class ViewOptics: ViewOptics //inherits 3 parameters from bin\config.bin/CfgVehicles/Tank/ViewOptics, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
		{
			visionMode[] = {"Normal", "NVG"};
		};
		maxSpeed = 95;
		armor = 300;
		armorStructural = 6;
		armorLights = 0.1;
		crewExplosionProtection = 0.999;
		damageResistance = 0.00547;
		cost = 1e+006;
		threat[] = {1, 0.6, 0.6};
		crewVulnerable = 0;
		waterPPInVehicle = 0;
		maxFordingDepth = -0.55;
		waterResistance = 0;
		waterDamageEngine = 0.2;
		fireDustEffect = "emptyEffect";
		wheelCircumference = 2.18;
		tracksSpeed = -1.1;
		class HitPoints: HitPoints //inherits 5 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
		{
			class HitHull: HitHull //inherits 7 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints/HitHull, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				armor = 2;
				material = -1;
				name = "hull_hit";
				visual = "hull_hit";
				passThrough = 0;
				minimalHit = 0.1;
				explosionShielding = 0.6;
				radius = 0.3;
			};
			class HitFuel: HitFuel //inherits 7 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints/HitFuel, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				armor = 0.5;
				material = -1;
				name = "engine_hit";
				visual = "motor";
				passThrough = 0;
				minimalHit = 0.1;
				explosionShielding = 0.4;
				radius = 0.3;
			};
			class HitEngine: HitEngine //inherits 7 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints/HitEngine, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				armor = 1;
				material = -1;
				name = "engine_hit";
				passThrough = 0;
				minimalHit = 0.1;
				explosionShielding = 0.2;
				radius = 0.3;
			};
			class HitLTrack: HitLTrack //inherits 7 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints/HitLTrack, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				armor = 0.8;
				material = -1;
				name = "track_l_hit";
				visual = "track_l_hit";
				passThrough = 0;
				minimalHit = 0.2;
				explosionShielding = 0.4;
				radius = 0.3;
			};
			class HitRTrack: HitRTrack //inherits 7 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints/HitRTrack, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				armor = 0.8;
				material = -1;
				name = "track_r_hit";
				visual = "track_r_hit";
				passThrough = 0;
				minimalHit = 0.2;
				explosionShielding = 0.4;
				radius = 0.3;
			};
		};
		animationSourceHatch = "";
		class Exhausts //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
		{
			class Exhaust1 //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustsEffectBig";
			};
		};
		insideSoundCoef = 0.9;
		smokeLauncherGrenadeCount = 8;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 0;
		smokeLauncherAngle = 120;
		extCameraPosition[] = {0, 2.25, -9};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/Tank_F/Turrets, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
		{
			class MainTurret: MainTurret //inherits 17 parameters from bin\config.bin/CfgVehicles/Tank_F/Turrets/MainTurret, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/Tank_F/Turrets/MainTurret/Turrets, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
				{
					class CommanderOptics: CommanderOptics //inherits 2 parameters from bin\config.bin/CfgVehicles/Tank_F/Turrets/MainTurret/Turrets/CommanderOptics, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
					{
						memoryPointGunnerOutOptics = "commanderview";
						memoryPointGunnerOptics = "commanderview";
						minElev = -25;
						maxElev = 60;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						weapons[] = {"SmokeLauncher"};
						magazines[] = {"SmokeLauncherMag"};
						soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm", 0.562341, 1, 30};
						soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm", 0.562341, 1, 30};
						outGunnerMayFire = 0;
						inGunnerMayFire = 1;
						forceHideGunner = 1;
						gunnerAction = "crew_tank01_out";
						gunnerInAction = "crew_tank01_in";
						gunnerGetInAction = "GetInAMV_cargo";
						gunnerGetOutAction = "GetOutLow";
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_OPFOR_F";
						gunnerOutOpticsModel = "";
						gunnerOpticsEffect[] = {};
						class ViewGunner: ViewGunner //inherits 0 parameters from bin\config.bin/CfgVehicles/Tank_F/Turrets/MainTurret/Turrets/CommanderOptics/ViewGunner, sources - []
						{
						};
						class RCWSOptics;
						class ViewOptics: RCWSOptics //inherits 17 parameters from bin\config.bin/RCWSOptics, sources - []
						{
						};
						class OpticsIn: Optics_Commander_02 //inherits 3 parameters from bin\config.bin/Optics_Commander_02, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
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
						turretInfoType = "RscOptics_MBT_02_commander";
						showCrewAim = 1;
						startEngine = 0;
						class HitPoints //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
						{
							class HitTurret //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
							{
								armor = 0.2;
								material = -1;
								name = "commander_turret_hit";
								visual = "commander_turret_hit";
								passThrough = 0;
								minimalHit = 0.1;
								explosionShielding = 0.4;
								radius = 0.2;
							};
							class HitGun //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
							{
								armor = 0.2;
								material = -1;
								name = "commander_gun_hit";
								visual = "commander_gun_hit";
								passThrough = 0;
								minimalHit = 0.1;
								explosionShielding = 0.4;
								radius = 0.2;
							};
						};
						stabilizedInAxes = 3;
						gunnerHasFlares = 1;
						maxHorizontalRotSpeed = 1.8;
						maxVerticalRotSpeed = 1.8;
						viewGunnerInExternal = 1;
					};
				};
				body = "mainTurret";
				gun = "mainGun";
				weapons[] = {"LMG_M200"};
				magazines[] = {"2000Rnd_65x39_belt", "2000Rnd_65x39_belt"};
				soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner", 0.562341, 1, 10};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical", 0.562341, 1, 30};
				minElev = -16;
				maxElev = 36;
				gunnerAction = "apctracked2_slot1_out";
				gunnerInAction = "apctracked2_slot1_in";
				gunnerGetInAction = "GetInAMV_cargo";
				gunnerGetOutAction = "GetOutLow";
				viewGunnerInExternal = 1;
				castGunnerShadow = 1;
				forceHideGunner = 1;
				startEngine = 0;
				stabilizedInAxes = 3;
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
				gunnerOutOpticsModel = "";
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
				discreteDistanceInitIndex = 2;
				memoryPointGunnerOptics = "gunnerview";
				selectionFireAnim = "zasleh2";
				class RCWSOptics;
				class ViewOptics: RCWSOptics //inherits 17 parameters from bin\config.bin/RCWSOptics, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
				{
					visionMode[] = {"Normal", "TI"};
				};
				class OpticsIn: Optics_Gunner_MBT_02 //inherits 3 parameters from bin\config.bin/Optics_Gunner_MBT_02, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
				{
					class Wide: Wide //inherits 2 parameters from bin\config.bin/Optics_Gunner_MBT_02/Wide, sources - []
					{
					};
					class Medium: Medium //inherits 2 parameters from bin\config.bin/Optics_Gunner_MBT_02/Medium, sources - []
					{
					};
					class Narrow: Narrow //inherits 2 parameters from bin\config.bin/Optics_Gunner_MBT_02/Narrow, sources - []
					{
					};
				};
				turretInfoType = "RscOptics_MBT_02_gunner";
				showCrewAim = 2;
				class HitPoints //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
				{
					class HitTurret //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
					{
						armor = 0.6;
						material = -1;
						name = "main_turret_hit";
						visual = "main_turret_hit";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.2;
						radius = 0.3;
					};
					class HitGun //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
					{
						armor = 0.3;
						material = -1;
						name = "main_gun_hit";
						visual = "main_gun_hit";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.4;
						radius = 0.15;
					};
				};
			};
		};
		class Reflectors //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
		{
			class Left //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				color[] = {1900, 1800, 1700};
				ambient[] = {5, 5, 5};
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1;
				class Attenuation //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class Right: Left //inherits 15 parameters from bin\config.bin/CfgVehicles/APC_Tracked_02_base_F/Reflectors/Left, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
			class Right2: Right //inherits 4 parameters from bin\config.bin/CfgVehicles/APC_Tracked_02_base_F/Reflectors/Right, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				position = "light_R_flare";
				useFlare = 1;
			};
			class Left2: Left //inherits 15 parameters from bin\config.bin/CfgVehicles/APC_Tracked_02_base_F/Reflectors/Left, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				position = "light_L_flare";
				useFlare = 1;
			};
		};
		aggregateReflectors[] = {{"Left", "Left2", "Right", "Right2"}};
		class Damage //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
		{
			tex[] = {};
			mat[] = {"A3\armor_f_beta\APC_Tracked_02\Data\APC_Tracked_02_ext_01.rvmat", "A3\armor_f_beta\APC_Tracked_02\Data\APC_Tracked_02_ext_01_damage.rvmat", "A3\armor_f_beta\APC_Tracked_02\Data\APC_Tracked_02_ext_01_destruct.rvmat", "A3\armor_f_beta\APC_Tracked_02\Data\APC_Tracked_02_ext_02.rvmat", "A3\armor_f_beta\APC_Tracked_02\Data\APC_Tracked_02_ext_02_damage.rvmat", "A3\armor_f_beta\APC_Tracked_02\Data\APC_Tracked_02_ext_02_destruct.rvmat", "A3\armor_f_beta\APC_Tracked_02\Data\APC_Tracked_02_int_adds.rvmat", "A3\armor_f_beta\APC_Tracked_02\Data\APC_Tracked_02_int_adds_damage.rvmat", "A3\armor_f_beta\APC_Tracked_02\Data\APC_Tracked_02_int_adds_destruct.rvmat", "A3\armor_f_beta\APC_Tracked_02\Data\APC_Tracked_02_int_base.rvmat", "A3\armor_f_beta\APC_Tracked_02\Data\APC_Tracked_02_int_base_damage.rvmat", "A3\armor_f_beta\APC_Tracked_02\Data\APC_Tracked_02_int_base_destruct.rvmat", "A3\armor_f_beta\apc_tracked_02\data\rcws30.rvmat", "A3\armor_f_beta\apc_tracked_02\data\rcws30_damage.rvmat", "A3\armor_f_beta\apc_tracked_02\data\rcws30_destruct.rvmat", "A3\armor_f_beta\apc_tracked_01\data\apc_tracked_01_aa_tower.rvmat", "A3\armor_f_beta\apc_tracked_01\data\apc_tracked_01_aa_tower_damage.rvmat", "A3\armor_f_beta\apc_tracked_01\data\apc_tracked_01_aa_tower_destruct.rvmat"};
		};
		class TransportMagazines //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
		{
			class _xx_30Rnd_65x39_caseless_green //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				magazine = "30Rnd_65x39_caseless_green";
				count = 24;
			};
			class _xx_150Rnd_762x54_Box //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				magazine = "150Rnd_762x54_Box";
				count = 8;
			};
			class _xx_HandGrenade //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				magazine = "HandGrenade";
				count = 6;
			};
			class _xx_MiniGrenade //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				magazine = "MiniGrenade";
				count = 6;
			};
			class _xx_SmokeShell //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				magazine = "SmokeShell";
				count = 8;
			};
			class _xx_SmokeShellRed //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				magazine = "SmokeShellRed";
				count = 8;
			};
			class _xx_SmokeShellYellow //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				magazine = "SmokeShellYellow";
				count = 8;
			};
			class _xx_SmokeShellOrange //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				magazine = "SmokeShellOrange";
				count = 8;
			};
			class _xx_1Rnd_HE_Grenade_shell //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeYellow_Grenade_shell //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				magazine = "1Rnd_SmokeYellow_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				magazine = "1Rnd_SmokeRed_Grenade_shell";
				count = 3;
			};
			class _xx_RPG32_F //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				magazine = "RPG32_F";
				count = 5;
			};
			class _xx_RPG32_HE_F //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				magazine = "RPG32_HE_F";
				count = 2;
			};
			class _xx_Titan_AT //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				magazine = "Titan_AT";
				count = 2;
			};
			class _xx_Titan_AA //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				magazine = "Titan_AA";
				count = 2;
			};
		};
		class TransportItems //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
		{
			class _xx_FirstAidKit //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
		class TransportWeapons //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
		{
			class _xx_arifle_Katiba_F //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				weapon = "arifle_Katiba_F";
				count = 2;
			};
			class _xx_LMG_Zafir_F //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				weapon = "LMG_Zafir_F";
				count = 1;
			};
			class _xx_launch_RPG32_F //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				weapon = "launch_RPG32_F";
				count = 1;
			};
		};
		class AnimationSources: AnimationSources //inherits 0 parameters from bin\config.bin/CfgVehicles/All/AnimationSources, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
		{
			class HideTurret //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.001;
			};
		};
		class EventHandlers: EventHandlers //inherits 0 parameters from bin\config.bin/CfgVehicles/Tank_F/EventHandlers, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """""""", [], false] call bis_fnc_initVehicle;};";
			fired = "[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
	};
	class O_APC_Tracked_02_base_F: APC_Tracked_02_base_F //inherits 118 parameters from bin\config.bin/CfgVehicles/APC_Tracked_02_base_F, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "O_APC_Tracked_02_base_F";
		side = 0;
		faction = "OPF_F";
		crew = "O_crew_F";
		typicalCargo[] = {"O_Soldier_F"};
	};
	class O_APC_Tracked_02_cannon_F: O_APC_Tracked_02_base_F //inherits 6 parameters from bin\config.bin/CfgVehicles/O_APC_Tracked_02_base_F, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
	{
		features = "Randomization: No						<br />Camo selections: 3 - top of hull, bottom of hull, turret						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None 						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: 1 to 8";
		author = "Bohemia Interactive";
		class SpeechVariants //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
		{
			class Default //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				speechSingular[] = {"veh_vehicle_APC_s"};
				speechPlural[] = {"veh_vehicle_APC_p"};
			};
		};
		textSingular = "APC";
		textPlural = "APCs";
		nameSound = "veh_vehicle_APC_s";
		class SimpleObject //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
		{
			autoGeneratedData = 0;
			eden = 1;
			animate[] = {{"damagehide", 0}, {"wheel_koll1", 0}, {"wheel_kolol1", 0}, {"wheel_podkolol1", 0.42}, {"wheel_kolp1", 0}, {"wheel_kolop1", 0}, {"wheel_podkolop1", 0.41}, {"wheel_koll2", 0}, {"wheel_kolp2", 0}, {"wheel_kolol2", 0}, {"wheel_kolol3", 0}, {"wheel_kolol4", 0}, {"wheel_kolol5", 0}, {"wheel_kolol6", 0}, {"wheel_kolop2", 0}, {"wheel_kolop3", 0}, {"wheel_kolop4", 0}, {"wheel_kolop5", 0}, {"wheel_kolop6", 0}, {"wheel_podkolol2", 0.45}, {"wheel_podkolol3", 0.5}, {"wheel_podkolol4", 0.57}, {"wheel_podkolol5", 0.61}, {"wheel_podkolol6", 0.62}, {"wheel_podkolop2", 0.47}, {"wheel_podkolop3", 0.53}, {"wheel_podkolop4", 0.57}, {"wheel_podkolop5", 0.6}, {"wheel_podkolop6", 0.63}, {"podkolol1_hide_damage", 0}, {"podkolol2_hide_damage", 0}, {"podkolol3_hide_damage", 0}, {"podkolol4_hide_damage", 0}, {"podkolol5_hide_damage", 0}, {"podkolol6_hide_damage", 0}, {"podkolol7_hide_damage", 0}, {"podkolol8_hide_damage", 0}, {"podkolop1_hide_damage", 0}, {"podkolop2_hide_damage", 0}, {"podkolop3_hide_damage", 0}, {"podkolop4_hide_damage", 0}, {"podkolop5_hide_damage", 0}, {"podkolop6_hide_damage", 0}, {"podkolop7_hide_damage", 0}, {"podkolop8_hide_damage", 0}, {"damagevez", 0}, {"mainturret", 0}, {"maingun", 0}, {"obsturret", 0}, {"obsgun", 0}, {"poklop_driver_damage", 0}, {"reverse_light", 0}, {"maingunoptics", 0}, {"zasleh_rot", 0}, {"zasleh2_rot", 1069.76}, {"zasleh_hide", 0}, {"hidetitan_1", 1}, {"hidetitan_2", 1}, {"missile_move_1", 1}};
			hide[] = {"clan", "zasleh2", "zasleh_1", "light_l", "light_r", "zadni svetlo", "brzdove svetlo", "podsvit pristroju", "poskozeni"};
			verticalOffset = 2.371;
			verticalOffsetWorld = -0.029;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_APC_Tracked_02_cannon_F.jpg";
		_generalMacro = "O_APC_Tracked_02_cannon_F";
		scope = 2;
		displayName = "BTR-K Kamysh";
		picture = "\A3\armor_f_beta\APC_Tracked_02\Data\UI\APC_Tracked_02_cannon_ca.paa";
		Icon = "\A3\armor_f_beta\APC_Tracked_02\Data\UI\map_APC_Tracked_02_cannon_ca.paa";
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/APC_Tracked_02_base_F/Turrets, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
		{
			class MainTurret: MainTurret //inherits 29 parameters from bin\config.bin/CfgVehicles/APC_Tracked_02_base_F/Turrets/MainTurret, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				weapons[] = {"autocannon_30mm_CTWS", "LMG_M200", "missiles_titan"};
				magazines[] = {"140Rnd_30mm_MP_shells_Tracer_Green", "60Rnd_30mm_APFSDS_shells_Tracer_Green", "1000Rnd_65x39_Belt_Green", "2Rnd_GAT_missiles"};
			};
		};
		threat[] = {1, 0.8, 0.3};
		transportSoldier = 8;
		class AnimationSources: AnimationSources //inherits 1 parameters from bin\config.bin/CfgVehicles/APC_Tracked_02_base_F/AnimationSources, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
		{
			class muzzle_rot //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				source = "ammorandom";
				weapon = "autocannon_30mm_CTWS";
			};
			class muzzle_hide //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				source = "reload";
				weapon = "autocannon_30mm_CTWS";
			};
			class Missiles_revolving //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				source = "revolving";
				weapon = "missiles_titan";
			};
		};
		selectionFireAnim = "";
		class TextureSources //sources - ["A3_Armor_F_Beta_APC_Tracked_02","A3_Armor_F_Exp_APC_Tracked_02"]
		{
			class Hex //sources - ["A3_Armor_F_Beta_APC_Tracked_02","A3_Armor_F_Exp_APC_Tracked_02"]
			{
				author = "Bohemia Interactive";
				textures[] = {"A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_01_hexarid_co.paa", "A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_02_hexarid_co.paa", "A3\Armor_F_Beta\APC_Tracked_02\Data\rcws30_opfor_co.paa"};
				factions[] = {"OPF_F"};
				displayName = "Hex";
			};
			class GreenHex //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				displayName = "Green Hex";
				author = "Bohemia Interactive";
				textures[] = {"A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_02_ext_01_ghex_CO.paa", "A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_02_ext_02_ghex_CO.paa", "A3\Armor_F_Exp\APC_Tracked_02\Data\RCWS30_ghex_CO.paa"};
				factions[] = {"OPF_T_F"};
			};
		};
		textureList[] = {"Hex", 1};
		hiddenSelectionsTextures[] = {"A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_01_hexarid_co.paa", "A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_02_hexarid_co.paa", "A3\Armor_F_Beta\APC_Tracked_02\Data\rcws30_opfor_co.paa"};
	};
	class O_APC_Tracked_02_AA_F: O_APC_Tracked_02_base_F //inherits 6 parameters from bin\config.bin/CfgVehicles/O_APC_Tracked_02_base_F, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
	{
		features = "Randomization: No						<br />Camo selections: 3 - top of hull, bottom of hull, turret						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: None";
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"wheel_koll1", 1}, {"wheel_kolol1", 1}, {"wheel_podkolol1", 0.42}, {"wheel_kolp1", 1}, {"wheel_kolop1", 1}, {"wheel_podkolop1", 0.41}, {"wheel_koll2", 1}, {"wheel_kolp2", 1}, {"wheel_kolol2", 1}, {"wheel_kolol3", 1}, {"wheel_kolol4", 1}, {"wheel_kolol5", 1}, {"wheel_kolol6", 1}, {"wheel_kolop2", 1}, {"wheel_kolop3", 1}, {"wheel_kolop4", 1}, {"wheel_kolop5", 1}, {"wheel_kolop6", 1}, {"wheel_podkolol2", 0.46}, {"wheel_podkolol3", 0.5}, {"wheel_podkolol4", 0.53}, {"wheel_podkolol5", 0.56}, {"wheel_podkolol6", 0.6}, {"wheel_podkolop2", 0.45}, {"wheel_podkolop3", 0.48}, {"wheel_podkolop4", 0.53}, {"wheel_podkolop5", 0.56}, {"wheel_podkolop6", 0.6}, {"podkolol1_hide_damage", 0}, {"podkolol2_hide_damage", 0}, {"podkolol3_hide_damage", 0}, {"podkolol4_hide_damage", 0}, {"podkolol5_hide_damage", 0}, {"podkolol6_hide_damage", 0}, {"podkolol7_hide_damage", 0}, {"podkolol8_hide_damage", 0}, {"podkolop1_hide_damage", 0}, {"podkolop2_hide_damage", 0}, {"podkolop3_hide_damage", 0}, {"podkolop4_hide_damage", 0}, {"podkolop5_hide_damage", 0}, {"podkolop6_hide_damage", 0}, {"podkolop7_hide_damage", 0}, {"podkolop8_hide_damage", 0}, {"damagevez", 0}, {"mainturret", 0}, {"maingun", 0.09}, {"recoil", 0}, {"obsturret", 0}, {"obsgun", 0}, {"hatchcommander", 0}, {"hatchgunner", 0}, {"poklop_driver_damage", 0}, {"reverse_light", 0}, {"hidetitan_1", 1}, {"hidetitan_2", 1}, {"hidetitan_3", 1}, {"hidetitan_4", 1}, {"missile_move_1", 1}, {"missile_move_2", 1}, {"missile_move_3", 1}, {"zaslehrot", 0}, {"zaslehrot_2", 0}, {"maingunoptics", 0.09}, {"satellite_rot", 0}};
			hide[] = {"clan", "zasleh", "zasleh_1", "light_l", "light_r", "zadni svetlo", "brzdove svetlo", "podsvit pristroju", "poskozeni"};
			verticalOffset = 2.61;
			verticalOffsetWorld = 0.021;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_APC_Tracked_02_AA_F.jpg";
		_generalMacro = "O_APC_Tracked_02_AA_F";
		scope = 2;
		displayName = "ZSU-39 Tigris";
		model = "\A3\armor_f_beta\APC_Tracked_02\APC_Tracked_02_aa_F";
		editorSubcategory = "EdSubcat_AAs";
		picture = "\A3\armor_f_beta\APC_Tracked_02\Data\UI\APC_Tracked_02_aa_ca.paa";
		Icon = "\A3\armor_f_beta\APC_Tracked_02\Data\UI\map_APC_Tracked_02_aa_ca.paa";
		cost = 2e+006;
		artilleryScanner = 0;
		irScanGround = 0;
		irScanRangeMax = 10000;
		irScanRangeMin = 2000;
		irScanToEyeFactor = 2;
		radarType = 2;
		reportRemoteTargets = 1;
		receiveRemoteTargets = 1;
		memoryPointLMissile = "Rocket_1";
		memoryPointRMissile = "Rocket_2";
		class AnimationSources: AnimationSources //inherits 1 parameters from bin\config.bin/CfgVehicles/APC_Tracked_02_base_F/AnimationSources, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
		{
			class Missiles_revolving //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				source = "revolving";
				weapon = "missiles_titan";
			};
			class muzzle_rot //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				source = "ammorandom";
				weapon = "autocannon_35mm";
			};
		};
		class Components: Components //inherits 2 parameters from bin\config.bin/CfgVehicles/Tank_F/Components, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
		{
			class SensorsManagerComponent //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				class Components //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar //inherits 11 parameters from bin\config.bin/SensorTemplateActiveRadar, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
					{
						class AirTarget //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
						{
							minRange = 9000;
							maxRange = 9000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
						{
							minRange = 6000;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 5000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 100;
						aimDown = -45;
						minSpeedThreshold = 30;
						maxSpeedThreshold = 90;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink //inherits 4 parameters from bin\config.bin/SensorTemplateDataLink, sources - []
					{
					};
				};
			};
		};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/APC_Tracked_02_base_F/Turrets, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
		{
			class MainTurret: MainTurret //inherits 29 parameters from bin\config.bin/CfgVehicles/APC_Tracked_02_base_F/Turrets/MainTurret, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
			{
				memoryPointGun[] = {"usti hlavne 1", "usti hlavne 2"};
				minElev = -10;
				maxElev = 80;
				initElev = 5;
				weapons[] = {"autocannon_35mm", "missiles_titan"};
				magazines[] = {"680Rnd_35mm_AA_shells_Tracer_Green", "4Rnd_Titan_long_missiles"};
				soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner", 0.354813, 0.8, 30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical", 0.354813, 0.8, 30};
				selectionFireAnim = "zasleh";
				forceHideGunner = 0;
				class HitPoints: HitPoints //inherits 2 parameters from bin\config.bin/CfgVehicles/APC_Tracked_02_base_F/Turrets/MainTurret/HitPoints, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
				{
					class HitTurret //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
					{
						armor = 0.8;
						material = -1;
						name = "main_turret_hit";
						visual = "main_turret_hit";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.2;
						radius = 0.25;
					};
					class HitGun //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
					{
						armor = 0.6;
						material = -1;
						name = "main_gun_hit";
						visual = "main_gun_hit";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.4;
						radius = 0.25;
					};
				};
				class OpticsIn: Optics_Gunner_AAA_01 //inherits 3 parameters from bin\config.bin/Optics_Gunner_AAA_01, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
				{
					class Wide: Wide //inherits 2 parameters from bin\config.bin/Optics_Gunner_AAA_01/Wide, sources - []
					{
					};
					class Medium: Medium //inherits 2 parameters from bin\config.bin/Optics_Gunner_AAA_01/Medium, sources - []
					{
					};
					class Narrow: Narrow //inherits 2 parameters from bin\config.bin/Optics_Gunner_AAA_01/Narrow, sources - []
					{
					};
				};
				turretInfoType = "RscOptics_APC_Tracked_01_gunner";
				class Components //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner //inherits 1 parameters from bin\config.bin/VehicleSystemsTemplateLeftGunner, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
					{
						class Components: Components //inherits 2 parameters from bin\config.bin/VehicleSystemsTemplateLeftGunner/Components, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
						{
							class SensorDisplay //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
							{
								componentType = "SensorsDisplayComponent";
								range[] = {16000, 8000, 4000, 2000};
								resource = "RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner //inherits 1 parameters from bin\config.bin/VehicleSystemsTemplateRightGunner, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
					{
						defaultDisplay = "SensorDisplay";
						class Components: Components //inherits 2 parameters from bin\config.bin/VehicleSystemsTemplateRightGunner/Components, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
						{
							class SensorDisplay //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
							{
								componentType = "SensorsDisplayComponent";
								range[] = {16000, 8000, 4000, 2000};
								resource = "RscCustomInfoSensors";
							};
						};
					};
				};
				class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/APC_Tracked_02_base_F/Turrets/MainTurret/Turrets, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
				{
					class CommanderOptics: CommanderOptics //inherits 34 parameters from bin\config.bin/CfgVehicles/APC_Tracked_02_base_F/Turrets/MainTurret/Turrets/CommanderOptics, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
					{
						forceHideGunner = 0;
						gunnerAction = "commander_apctracked1aa_out";
						gunnerInAction = "commander_apctracked1aa_in";
						class HitPoints: HitPoints //inherits 2 parameters from bin\config.bin/CfgVehicles/APC_Tracked_02_base_F/Turrets/MainTurret/Turrets/CommanderOptics/HitPoints, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
						{
							class HitTurret //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
							{
								armor = 0.2;
								material = -1;
								name = "commander_turret_hit";
								visual = "commander_turret_hit";
								passThrough = 0;
								minimalHit = 0.1;
								explosionShielding = 1;
								radius = 0.2;
							};
							class HitGun //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
							{
								armor = 0.2;
								material = -1;
								name = "commander_gun_hit";
								visual = "commander_gun_hit";
								passThrough = 0;
								minimalHit = 0.1;
								explosionShielding = 1;
								radius = 0.2;
							};
						};
						class Components //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
						{
							class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander //inherits 1 parameters from bin\config.bin/VehicleSystemsTemplateLeftCommander, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
							{
								class Components: Components //inherits 2 parameters from bin\config.bin/VehicleSystemsTemplateLeftCommander/Components, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
								{
									class SensorDisplay //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
									{
										componentType = "SensorsDisplayComponent";
										range[] = {8000, 4000, 2000, 16000};
										resource = "RscCustomInfoSensors";
									};
								};
							};
							class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander //inherits 1 parameters from bin\config.bin/VehicleSystemsTemplateRightCommander, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
							{
								defaultDisplay = "SensorDisplay";
								class Components: Components //inherits 2 parameters from bin\config.bin/VehicleSystemsTemplateRightCommander/Components, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
								{
									class SensorDisplay //sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
									{
										componentType = "SensorsDisplayComponent";
										range[] = {8000, 4000, 2000, 16000};
										resource = "RscCustomInfoSensors";
									};
								};
							};
						};
					};
				};
			};
		};
		threat[] = {0.5, 0.5, 1};
		smokeLauncherOnTurret = 1;
		class TextureSources //sources - ["A3_Armor_F_Beta_APC_Tracked_02","A3_Armor_F_Exp_APC_Tracked_02"]
		{
			class Hex //sources - ["A3_Armor_F_Beta_APC_Tracked_02","A3_Armor_F_Exp_APC_Tracked_02"]
			{
				author = "Bohemia Interactive";
				textures[] = {"A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_01_aa_hexarid_co.paa", "A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_02_hexarid_co.paa", "A3\Armor_F_Beta\APC_Tracked_01\Data\apc_tracked_01_aa_tower_opfor_co.paa"};
				factions[] = {"OPF_F"};
				displayName = "Hex";
			};
			class GreenHex //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				displayName = "Green Hex";
				author = "Bohemia Interactive";
				textures[] = {"A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_02_ext_01_AA_ghex_CO.paa", "A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_02_ext_02_ghex_CO.paa", "A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_01_AA_Tower_ghex_CO.paa"};
				factions[] = {"OPF_T_F"};
			};
		};
		textureList[] = {"Hex", 1};
		hiddenSelectionsTextures[] = {"A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_01_aa_hexarid_co.paa", "A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_02_hexarid_co.paa", "A3\Armor_F_Beta\APC_Tracked_01\Data\apc_tracked_01_aa_tower_opfor_co.paa"};
	};
	class APC_Tracked_03_base_F: Tank_F //inherits 83 parameters from bin\config.bin/CfgVehicles/Tank_F, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
	{
		author = "Bohemia Interactive";
		mapSize = 8.98;
		_generalMacro = "APC_Tracked_03_base_F";
		features = "Randomization: No						<br />Camo selections: 2 - turret, hull						<br />Script door sources: None						<br />Script animations: HideTurret						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: 1 to 7";
		simulation = "tankX";
		enginePower = 485;
		maxOmega = 241;
		peakTorque = 2610;
		torqueCurve[] = {{"(610/2300)", 0}, {"(1000/2300)", "(1600/2610)"}, {"(1400/2300)", "(2610/2610)"}, {"(2300/2300)", "(1900/2610)"}, {"(4700/2300)", "(0/2610)"}};
		thrustDelay = 0.3;
		clutchStrength = 60;
		fuelCapacity = 770;
		brakeIdleSpeed = 1.78;
		latency = 0.1;
		tankTurnForce = 1.3e+006;
		normalSpeedForwardCoef = 0.5;
		idleRpm = 610;
		redRpm = 2300;
		engineLosses = 25;
		transmissionLosses = 15;
		antiRollbarForceCoef = 15;
		antiRollbarForceLimit = 12;
		antiRollbarSpeedMin = 30;
		antiRollbarSpeedMax = 55;
		class complexGearbox //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
		{
			GearboxRatios[] = {"R1", -2.235, "N", 0, "CD0", "2*(0.75^(-10))", "CD1", "2*(0.75^(-9))", "CD2", "2*(0.75^(-8))", "CD3", "2*(0.75^(-7))", "CD4", "2*(0.75^(-6))", "CD5", "2*(0.75^(-5))", "CD6", "2*(0.75^(-4))", "CD7", "2*(0.75^(-3))", "CD8", "2*(0.75^(-2))", "CD9", "2*(0.75^(-1))", "D1", "2*(0.75^0)", "D2", "2*(0.75^1)", "D3", "2*(0.75^2)", "D4", "2*(0.75^3)"};
			TransmissionRatios[] = {"High", 5};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0;
		};
		class Wheels //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
		{
			class L2 //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				boneName = "wheel_podkoloL1";
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				damping = 75;
				steering = 0;
				side = "left";
				weight = 100;
				mass = 100;
				MOI = 20;
				latStiffX = 25;
				latStiffY = 280;
				longitudinalStiffnessPerUnitGravity = 100000;
				maxBrakeTorque = 10000;
				sprungMass = 2625;
				springStrength = 200000;
				springDamperRate = 24000;
				dampingRate = 1;
				dampingRateInAir = 4864;
				dampingRateDamaged = 10;
				dampingRateDestroyed = 10000;
				maxDroop = 0.18;
				maxCompression = 0.18;
				frictionVsSlipGraph[] = {{0, 5}, {0.5, 5}, {1, 5}};
			};
			class L3: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/APC_Tracked_03_base_F/Wheels/L2, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				boneName = "wheel_podkolol2";
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
			};
			class L4: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/APC_Tracked_03_base_F/Wheels/L2, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				boneName = "wheel_podkolol3";
				center = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
			};
			class L5: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/APC_Tracked_03_base_F/Wheels/L2, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				boneName = "wheel_podkolol4";
				center = "wheel_1_5_axis";
				boundary = "wheel_1_5_bound";
			};
			class L6: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/APC_Tracked_03_base_F/Wheels/L2, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				boneName = "wheel_podkolol5";
				center = "wheel_1_6_axis";
				boundary = "wheel_1_6_bound";
			};
			class L7: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/APC_Tracked_03_base_F/Wheels/L2, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				boneName = "wheel_podkolol6";
				center = "wheel_1_7_axis";
				boundary = "wheel_1_7_bound";
			};
			class L9: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/APC_Tracked_03_base_F/Wheels/L2, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				boneName = "wheel_podkolol9";
				center = "wheel_1_9_axis";
				boundary = "wheel_1_9_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class L1: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/APC_Tracked_03_base_F/Wheels/L2, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				boneName = "";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class R2: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/APC_Tracked_03_base_F/Wheels/L2, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				boneName = "wheel_podkolop1";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				side = "right";
			};
			class R3: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/APC_Tracked_03_base_F/Wheels/R2, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				boneName = "wheel_podkolop2";
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
			};
			class R4: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/APC_Tracked_03_base_F/Wheels/R2, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				boneName = "wheel_podkolop3";
				center = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
			};
			class R5: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/APC_Tracked_03_base_F/Wheels/R2, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				boneName = "wheel_podkolop4";
				center = "wheel_2_5_axis";
				boundary = "wheel_2_5_bound";
			};
			class R6: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/APC_Tracked_03_base_F/Wheels/R2, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				boneName = "wheel_podkolop5";
				center = "wheel_2_6_axis";
				boundary = "wheel_2_6_bound";
			};
			class R7: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/APC_Tracked_03_base_F/Wheels/R2, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				boneName = "wheel_podkolop6";
				center = "wheel_2_7_axis";
				boundary = "wheel_2_7_bound";
			};
			class R9: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/APC_Tracked_03_base_F/Wheels/R2, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				boneName = "wheel_podkolop9";
				center = "wheel_2_9_axis";
				boundary = "wheel_2_9_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class R1: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/APC_Tracked_03_base_F/Wheels/R2, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				boneName = "";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
		};
		editorSubcategory = "EdSubcat_APCs";
		scope = 0;
		maxSpeed = 60;
		steerAheadSimul = 0.5;
		steerAheadPlan = 0.35;
		predictTurnPlan = 2.8;
		predictTurnSimul = 2.6;
		brakeDistance = 15;
		precision = 5;
		transportSoldier = 7;
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		cargoAction[] = {"passenger_apc_narrow_generic01", "passenger_apc_generic03", "passenger_apc_narrow_generic01", "passenger_apc_generic02", "passenger_apc_narrow_generic02", "passenger_generic01_foldhands", "passenger_generic01_leanleft"};
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 1;
		waterResistance = 3;
		waterDamageEngine = 0.1;
		maxFordingDepth = -1.25;
		wheelCircumference = 1.95;
		tracksSpeed = 1.27;
		driverAction = "driver_apctracked3_out";
		driverInAction = "driver_apctracked3_in";
		extCameraPosition[] = {0, 2.25, -9};
		forceHideDriver = 0;
		class ViewOptics: ViewOptics //inherits 3 parameters from bin\config.bin/CfgVehicles/Tank/ViewOptics, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
		{
			visionMode[] = {"Normal", "NVG"};
		};
		armor = 400;
		armorStructural = 6;
		armorLights = 0.075;
		crewExplosionProtection = 0.9995;
		damageResistance = 0.00547;
		cost = 2.5e+006;
		crewVulnerable = 1;
		model = "\A3\Armor_F_EPB\APC_Tracked_03\APC_Tracked_03_cannon_F.p3d";
		picture = "\A3\Armor_F_EPB\APC_Tracked_03\Data\UI\APC_Tracked_03_Base_ca.paa";
		icon = "\A3\Armor_F_EPB\APC_Tracked_03\Data\UI\map_APC_Tracked_03_CA.paa";
		memoryPointTaskMarker = "TaskMarker_1_pos";
		class HitPoints: HitPoints //inherits 5 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
		{
			class HitHull: HitHull //inherits 7 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints/HitHull, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				armor = 2;
				material = -1;
				name = "telo";
				visual = "zbytek";
				passThrough = 0;
				minimalHit = 0.1;
				explosionShielding = 0.6;
				radius = 0.3;
			};
			class HitFuel: HitFuel //inherits 7 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints/HitFuel, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				armor = 0.5;
				material = -1;
				name = "motor";
				passThrough = 0;
				minimalHit = 0.1;
				explosionShielding = 0.4;
				radius = 0.3;
			};
			class HitEngine: HitEngine //inherits 7 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints/HitEngine, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				armor = 1;
				material = -1;
				name = "motor";
				passThrough = 0;
				minimalHit = 0.1;
				explosionShielding = 0.2;
				radius = 0.3;
			};
			class HitLTrack: HitLTrack //inherits 7 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints/HitLTrack, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				armor = 0.6;
				material = -1;
				name = "pas_L";
				passThrough = 0;
				minimalHit = 0.2;
				explosionShielding = 0.4;
				radius = 0.3;
			};
			class HitRTrack: HitRTrack //inherits 7 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints/HitRTrack, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				armor = 0.6;
				material = -1;
				name = "pas_P";
				passThrough = 0;
				minimalHit = 0.2;
				explosionShielding = 0.4;
				radius = 0.3;
			};
		};
		animationSourceHatch = "";
		selectionFireAnim = "";
		class Exhausts //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
		{
			class Exhaust1 //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustsEffectBig";
			};
		};
		insideSoundCoef = 0.9;
		threat[] = {1, 1, 0.3};
		attenuationEffectType = "TankAttenuation";
		soundGetIn[] = {"A3\Sounds_F_EPB\Tracked\noises\get_in_out", 0.562341, 1};
		soundGetOut[] = {"A3\Sounds_F_EPB\Tracked\noises\get_in_out", 0.562341, 1, 20};
		soundTurnIn[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out", 1.77828, 1, 20};
		soundTurnOut[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out", 1.77828, 1, 20};
		soundTurnInInternal[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out", 1.77828, 1, 20};
		soundTurnOutInternal[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out", 1.77828, 1, 20};
		soundDammage[] = {"", 0.562341, 1};
		soundEngineOnInt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_int_start", 0.630957, 1};
		soundEngineOnExt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_ext_start", 0.794328, 1, 200};
		soundEngineOffInt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_int_stop", 0.630957, 1};
		soundEngineOffExt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_ext_stop", 0.794328, 1, 200};
		soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1", 0.177828, 1, 100};
		soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2", 0.177828, 1, 100};
		soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3", 0.177828, 1, 100};
		soundBushCrash[] = {"soundBushCollision1", 0.33, "soundBushCollision2", 0.33, "soundBushCollision3", 0.33};
		soundGeneralCollision1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_1", 1, 1, 100};
		soundGeneralCollision2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_2", 1, 1, 100};
		soundGeneralCollision3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_3", 1, 1, 100};
		soundGeneralCollision4[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_4", 1, 1, 100};
		soundCrashes[] = {"soundGeneralCollision1", 0.25, "soundGeneralCollision2", 0.25, "soundGeneralCollision3", 0.25, "soundGeneralCollision4", 0.25};
		buildCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_1", 1, 1, 200};
		buildCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_2", 1, 1, 200};
		buildCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_3", 1, 1, 200};
		buildCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_4", 1, 1, 200};
		soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
		WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_1", 1, 1, 200};
		WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_2", 1, 1, 200};
		WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_3", 1, 1, 200};
		WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_4", 1, 1, 200};
		soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166};
		ArmorCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_1", 1, 1, 200};
		ArmorCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_2", 1, 1, 200};
		ArmorCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_3", 1, 1, 200};
		ArmorCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_4", 1, 1, 200};
		soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
		class Sounds //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
		{
			class Idle_ext //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_1", 0.794328, 1, 200};
				frequency = "0.95	+	((rpm/	2300) factor[(400/	2300),(750/	2300)])*0.15";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(100/	2300),(200/	2300)])	*	((rpm/	2300) factor[(760/	2300),(600/	2300)]))";
			};
			class Engine //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_2", 0.891251, 1, 240};
				frequency = "0.8	+	((rpm/	2300) factor[(620/	2300),(910/	2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(620/	2300),(750/	2300)])	*	((rpm/	2300) factor[(920/	2300),(800/	2300)]))";
			};
			class Engine1_ext //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_3", 1.12202, 1, 280};
				frequency = "0.8	+	((rpm/	2300) factor[(800/	2300),(1150/	2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(800/	2300),(900/	2300)])	*	((rpm/	2300) factor[(1150/	2300),(960/	2300)]))";
			};
			class Engine2_ext //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_4", 1.25893, 1, 320};
				frequency = "0.8	+	((rpm/	2300) factor[(960/	2300),(1500/	2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(950/	2300),(1100/	2300)])	*	((rpm/	2300) factor[(1500/	2300),(1250/	2300)]))";
			};
			class Engine3_ext //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_5", 1.41254, 1, 360};
				frequency = "0.8	+	((rpm/	2300) factor[(1200/	2300),(1700/	2300)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(1250/	2300),(1450/	2300)])	*	((rpm/	2300) factor[(1700/	2300),(1560/	2300)]))";
			};
			class Engine4_ext //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_6", 1.58489, 1, 400};
				frequency = "0.8	+	((rpm/	2300) factor[(1520/	2300),(2000/	2300)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(1570/	2300),(1670/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1800/	2300)]))";
			};
			class Engine5_ext //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_7", 1.77828, 1, 440};
				frequency = "0.8	+	((rpm/	2300) factor[(1800/	2300),(2300/	2300)])*0.1";
				volume = "engineOn*camPos*((rpm/	2300) factor[(1850/	2300),(1950/	2300)])";
			};
			class IdleThrust //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_1", 1.12202, 1, 200};
				frequency = "0.8	+	((rpm/	2300) factor[(400/	2300),(750/	2300)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(100/	2300),(200/	2300)])	*	((rpm/	2300) factor[(760/	2300),(600/	2300)]))";
			};
			class EngineThrust //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_2", 1.41254, 1, 200};
				frequency = "0.8	+	((rpm/	2300) factor[(620/	2300),(910/	2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(620/	2300),(750/	2300)])	*	((rpm/	2300) factor[(920/	2300),(800/	2300)]))";
			};
			class Engine1_Thrust_ext //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_3", 1.77828, 1, 230};
				frequency = "0.8	+	((rpm/	2300) factor[(800/	2300),(1150/	2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(800/	2300),(900/	2300)])	*	((rpm/	2300) factor[(1150/	2300),(960/	2300)]))";
			};
			class Engine2_Thrust_ext //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_4", 1.99526, 1, 290};
				frequency = "0.8	+	((rpm/	2300) factor[(960/	2300),(1500/	2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(950/	2300),(1100/	2300)])	*	((rpm/	2300) factor[(1500/	2300),(1250/	2300)]))";
			};
			class Engine3_Thrust_ext //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_5", 1.77828, 1, 350};
				frequency = "0.8	+	((rpm/	2300) factor[(1200/	2300),(1700/	2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1250/	2300),(1450/	2300)])	*	((rpm/	2300) factor[(1700/	2300),(1560/	2300)]))";
			};
			class Engine4_Thrust_ext //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_6", 2.23872, 1, 400};
				frequency = "0.8	+	((rpm/	2300) factor[(1520/	2300),(2000/	2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1570/	2300),(1670/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1800/	2300)]))";
			};
			class Engine5_Thrust_ext //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_7", 2.51189, 1, 450};
				frequency = "0.8	+	((rpm/	2300) factor[(1800/	2300),(2300/	2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2300) factor[(1850/	2300),(1950/	2300)])";
			};
			class Idle_int //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_1", 0.501187, 1};
				frequency = "0.8	+	((rpm/	2300) factor[(400/	2300),(750/	2300)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(100/	2300),(200/	2300)])	*	((rpm/	2300) factor[(760/	2300),(600/	2300)]))";
			};
			class Engine_int //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_2", 0.354813, 1};
				frequency = "0.8	+	((rpm/	2300) factor[(620/	2300),(910/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(620/	2300),(750/	2300)])	*	((rpm/	2300) factor[(920/	2300),(800/	2300)]))";
			};
			class Engine1_int //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_3", 0.398107, 1};
				frequency = "0.8	+	((rpm/	2300) factor[(800/	2300),(1150/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(800/	2300),(900/	2300)])	*	((rpm/	2300) factor[(1150/	2300),(960/	2300)]))";
			};
			class Engine2_int //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_4", 0.446684, 1};
				frequency = "0.8	+	((rpm/	2300) factor[(960/	2300),(1500/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(950/	2300),(1100/	2300)])	*	((rpm/	2300) factor[(1500/	2300),(1250/	2300)]))";
			};
			class Engine3_int //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_5", 0.501187, 1};
				frequency = "0.8	+	((rpm/	2300) factor[(1200/	2300),(1700/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(1250/	2300),(1450/	2300)])	*	((rpm/	2300) factor[(1700/	2300),(1560/	2300)]))";
			};
			class Engine4_int //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_6", 0.562341, 1};
				frequency = "0.8	+	((rpm/	2300) factor[(1520/	2300),(2000/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(1570/	2300),(1670/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1800/	2300)]))";
			};
			class Engine5_int //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_7", 0.630957, 1};
				frequency = "0.8	+	((rpm/	2300) factor[(1800/	2300),(2300/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	2300) factor[(1850/	2300),(1950/	2300)])";
			};
			class IdleThrust_int //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_1", 0.630957, 1};
				frequency = "0.8	+	((rpm/	2300) factor[(400/	2300),(750/	2300)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(100/	2300),(200/	2300)])	*	((rpm/	2300) factor[(760/	2300),(600/	2300)]))";
			};
			class EngineThrust_int //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_2", 0.398107, 1};
				frequency = "0.8	+	((rpm/	2300) factor[(620/	2300),(910/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(620/	2300),(750/	2300)])	*	((rpm/	2300) factor[(920/	2300),(800/	2300)]))";
			};
			class Engine1_Thrust_int //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_3", 0.446684, 1};
				frequency = "0.8	+	((rpm/	2300) factor[(800/	2300),(1150/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(800/	2300),(900/	2300)])	*	((rpm/	2300) factor[(1150/	2300),(960/	2300)]))";
			};
			class Engine2_Thrust_int //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_4", 0.446684, 1};
				frequency = "0.8	+	((rpm/	2300) factor[(960/	2300),(1500/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(950/	2300),(1100/	2300)])	*	((rpm/	2300) factor[(1500/	2300),(1250/	2300)]))";
			};
			class Engine3_Thrust_int //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_5", 0.501187, 1};
				frequency = "0.8	+	((rpm/	2300) factor[(1200/	2300),(1700/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1250/	2300),(1450/	2300)])	*	((rpm/	2300) factor[(1700/	2300),(1560/	2300)]))";
			};
			class Engine4_Thrust_int //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_6", 0.562341, 1};
				frequency = "0.8	+	((rpm/	2300) factor[(1520/	2300),(2000/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1570/	2300),(1670/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1800/	2300)]))";
			};
			class Engine5_Thrust_int //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_7", 0.630957, 1};
				frequency = "0.8	+	((rpm/	2300) factor[(1800/	2300),(2300/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2300) factor[(1850/	2300),(1950/	2300)])";
			};
			class NoiseInt //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\noises\noise_tank_int_1", 0.501187, 1};
				frequency = "1";
				volume = "(1-camPos)*(speed factor[4, 15])";
			};
			class NoiseExt //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\noises\noise_tank_ext_1", 0.891251, 1, 50};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0 //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_1", 0.398107, 1, 140};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-0) max 0)/	55),(((-5) max 5)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-12) max 12)/	55),(((-8) max 8)/	55)]))";
			};
			class ThreadsOutH1 //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_2", 0.446684, 1, 160};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-10) max 10)/	55),(((-12) max 12)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-23) max 23)/	55),(((-16) max 16)/	55)]))";
			};
			class ThreadsOutH2 //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_3", 0.501187, 1, 180};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-20) max 20)/	55),(((-22) max 22)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-35) max 35)/	55),(((-28) max 28)/	55)]))";
			};
			class ThreadsOutH3 //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_4", 0.562341, 1, 200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-30) max 30)/	55),(((-34) max 34)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-42) max 42)/	55),(((-36) max 36)/	55)]))";
			};
			class ThreadsOutH4 //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_5", 0.562341, 1, 220};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	55) factor[(((-39) max 39)/	55),(((-42) max 42)/	55)])";
			};
			class ThreadsOutS0 //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_1", 0.316228, 1, 120};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-0) max 0)/	55),(((-5) max 5)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-12) max 12)/	55),(((-8) max 8)/	55)]))";
			};
			class ThreadsOutS1 //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_2", 0.354813, 1, 140};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-10) max 10)/	55),(((-12) max 12)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-23) max 23)/	55),(((-16) max 16)/	55)]))";
			};
			class ThreadsOutS2 //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_3", 0.398107, 1, 160};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-20) max 20)/	55),(((-22) max 22)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-35) max 35)/	55),(((-28) max 28)/	55)]))";
			};
			class ThreadsOutS3 //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_4", 0.446684, 1, 180};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-30) max 30)/	55),(((-34) max 34)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-42) max 42)/	55),(((-36) max 36)/	55)]))";
			};
			class ThreadsOutS4 //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_5", 0.501187, 1, 200};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	55) factor[(((-39) max 39)/	55),(((-42) max 42)/	55)])";
			};
			class ThreadsInH0 //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_1", 0.251189, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-0) max 0)/	55),(((-5) max 5)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-12) max 12)/	55),(((-8) max 8)/	55)]))";
			};
			class ThreadsInH1 //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_2", 0.281838, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-10) max 10)/	55),(((-12) max 12)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-23) max 23)/	55),(((-16) max 16)/	55)]))";
			};
			class ThreadsInH2 //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_3", 0.316228, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-20) max 20)/	55),(((-22) max 22)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-35) max 35)/	55),(((-28) max 28)/	55)]))";
			};
			class ThreadsInH3 //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_4", 0.354813, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-30) max 30)/	55),(((-34) max 34)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-42) max 42)/	55),(((-36) max 36)/	55)]))";
			};
			class ThreadsInH4 //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_5", 0.398107, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	55) factor[(((-39) max 39)/	55),(((-42) max 42)/	55)])";
			};
			class ThreadsInS0 //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_1", 0.316228, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-0) max 0)/	55),(((-5) max 5)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-12) max 12)/	55),(((-8) max 8)/	55)]))";
			};
			class ThreadsInS1 //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_2", 0.316228, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-10) max 10)/	55),(((-12) max 12)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-23) max 23)/	55),(((-16) max 16)/	55)]))";
			};
			class ThreadsInS2 //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_3", 0.354813, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-20) max 20)/	55),(((-22) max 22)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-35) max 35)/	55),(((-28) max 28)/	55)]))";
			};
			class ThreadsInS3 //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_4", 0.354813, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-30) max 30)/	55),(((-34) max 34)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-42) max 42)/	55),(((-36) max 36)/	55)]))";
			};
			class ThreadsInS4 //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_5", 0.398107, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	55) factor[(((-39) max 39)/	55),(((-42) max 42)/	55)])";
			};
			class RainExt //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext", 1, 1, 100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int", 1, 1, 100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		class Reflectors //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
		{
			class Left //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				color[] = {1900, 1800, 1700};
				ambient[] = {5, 5, 5};
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1;
				class Attenuation //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class Right: Left //inherits 15 parameters from bin\config.bin/CfgVehicles/APC_Tracked_03_base_F/Reflectors/Left, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
			class Right2: Right //inherits 4 parameters from bin\config.bin/CfgVehicles/APC_Tracked_03_base_F/Reflectors/Right, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				position = "light_R_flare";
				useFlare = 1;
			};
			class Left2: Left //inherits 15 parameters from bin\config.bin/CfgVehicles/APC_Tracked_03_base_F/Reflectors/Left, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				position = "light_L_flare";
				useFlare = 1;
			};
		};
		aggregateReflectors[] = {{"Left", "Left2", "Right", "Right2"}};
		class RenderTargets //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
		{
			class Mirror_L //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				renderTarget = "rendertarget1";
				class Camera //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.7;
				};
			};
			class Mirror_R //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				renderTarget = "rendertarget2";
				class Camera //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.7;
				};
			};
		};
		smokeLauncherGrenadeCount = 10;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 120;
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/Tank_F/Turrets, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
		{
			class MainTurret: MainTurret //inherits 17 parameters from bin\config.bin/CfgVehicles/Tank_F/Turrets/MainTurret, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/Tank_F/Turrets/MainTurret/Turrets, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
				{
					class CommanderOptics: CommanderOptics //inherits 2 parameters from bin\config.bin/CfgVehicles/Tank_F/Turrets/MainTurret/Turrets/CommanderOptics, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
					{
						memoryPointGunnerOutOptics = "commanderview";
						memoryPointGunnerOptics = "commanderview";
						minElev = -25;
						maxElev = 60;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						weapons[] = {"SmokeLauncher"};
						magazines[] = {"SmokeLauncherMag"};
						soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm", 0.562341, 1, 30};
						soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm", 0.562341, 1, 30};
						outGunnerMayFire = 0;
						inGunnerMayFire = 1;
						gunnerAction = "commander_apctracked3_out";
						gunnerInAction = "commander_apctracked3_in";
						gunnerGetInAction = "GetInLow";
						gunnerGetOutAction = "GetOutLow";
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel = "";
						gunnerOpticsEffect[] = {};
						isPersonTurret = 1;
						personTurretAction = "vehicle_turnout_1";
						minOutElev = -10;
						maxOutElev = 15;
						initOutElev = 0;
						minOutTurn = -45;
						maxOutTurn = 90;
						initOutTurn = 0;
						class ViewGunner: ViewCargo //inherits 15 parameters from bin\config.bin/CfgVehicles/AllVehicles/ViewCargo, sources - []
						{
						};
						class ViewOptics: ViewOptics //inherits 0 parameters from bin\config.bin/CfgVehicles/LandVehicle/CommanderOptics/ViewOptics, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.31;
							minFov = 0.034;
							maxFov = 0.31;
							visionMode[] = {"Normal", "TI"};
							thermalMode[] = {2, 3};
						};
						class OpticsIn: Optics_Commander_02 //inherits 3 parameters from bin\config.bin/Optics_Commander_02, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
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
						turretInfoType = "RscOptics_APC_Wheeled_03_commander";
						showCrewAim = 1;
						startEngine = 0;
						gunnerHasFlares = 1;
						stabilizedInAxes = 3;
						maxHorizontalRotSpeed = 1.8;
						maxVerticalRotSpeed = 1.8;
						viewGunnerInExternal = 1;
						class HitPoints //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
						{
							class HitTurret //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
							{
								armor = 0.1;
								material = -1;
								name = "vezVelitele";
								visual = "";
								passThrough = 0;
								minimalHit = 0.1;
								explosionShielding = 1;
								radius = 0.25;
							};
							class HitGun //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
							{
								armor = 0.1;
								material = -1;
								name = "zbranVelitele";
								visual = "";
								passThrough = 0;
								minimalHit = 0.1;
								explosionShielding = 1;
								radius = 0.25;
							};
						};
					};
				};
				gunBeg = "Usti hlavne";
				gunEnd = "Konec hlavne";
				gunnerAction = "gunner_apctracked3_out";
				gunnerInAction = "gunner_apctracked3_in";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				weapons[] = {"autocannon_30mm", "LMG_coax"};
				magazines[] = {"140Rnd_30mm_MP_shells_Tracer_Yellow", "60Rnd_30mm_APFSDS_shells_Tracer_Yellow", "1000Rnd_762x51_Belt_Yellow", "1000Rnd_762x51_Belt_Yellow"};
				soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner", 0.562341, 1, 30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical", 0.562341, 1, 30};
				forceHideGunner = 0;
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
				discreteDistanceInitIndex = 5;
				memoryPointGunnerOptics = "gunnerview";
				minElev = -5;
				maxElev = 20;
				initElev = 10;
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {};
				gunnerForceOptics = 1;
				startEngine = 0;
				inGunnerMayFire = 1;
				viewGunnerInExternal = 1;
				selectionFireAnim = "zasleh2";
				commanding = 1;
				class OpticsIn: Optics_Gunner_APC_02 //inherits 3 parameters from bin\config.bin/Optics_Gunner_APC_02, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
				{
					class Wide: Wide //inherits 1 parameters from bin\config.bin/Optics_Gunner_APC_02/Wide, sources - []
					{
					};
					class Medium: Medium //inherits 1 parameters from bin\config.bin/Optics_Gunner_APC_02/Medium, sources - []
					{
					};
					class Narrow: Narrow //inherits 1 parameters from bin\config.bin/Optics_Gunner_APC_02/Narrow, sources - []
					{
					};
				};
				turretInfoType = "RscOptics_APC_Tracked_03_gunner";
				showCrewAim = 2;
				class HitPoints //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
				{
					class HitTurret //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
					{
						armor = 0.6;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 1;
						minimalHit = 0.1;
						explosionShielding = 0.4;
						radius = 0.25;
					};
					class HitGun //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
					{
						armor = 0.4;
						material = -1;
						name = "zbran";
						visual = "";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.8;
						radius = 0.25;
					};
				};
			};
		};
		class Damage //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
		{
			tex[] = {};
			mat[] = {"A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Ext.rvmat", "A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Ext_damage.rvmat", "A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Ext_destruct.rvmat", "A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Ext2.rvmat", "A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Ext2_damage.rvmat", "A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Ext2_destruct.rvmat", "A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Int.rvmat", "A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Int_damage.rvmat", "A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Int_damage.rvmat", "A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Int2.rvmat", "A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Int2_damage.rvmat", "A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Int2_damage.rvmat"};
		};
		class AnimationSources: AnimationSources //inherits 0 parameters from bin\config.bin/CfgVehicles/All/AnimationSources, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
		{
			class muzzle_rot //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				source = "ammorandom";
				weapon = "autocannon_30mm";
			};
			class muzzle_hide //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				source = "reload";
				weapon = "autocannon_30mm";
			};
			class HideTurret //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.001;
			};
		};
		class Library //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
		{
			libTextDesc = "The FV-720 Mora is an infantry fighting vehicle used by the AAF. They were bought by the AAF from British Armed Forces and reconditioned to serve two more decades. The Mora is armed with a 30 mm cannon and a coaxial machinegun, providing not only a carrying capacity, but also reliable fire support.";
		};
		class TransportMagazines //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
		{
			class _xx_30Rnd_556x45_Stanag //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 24;
			};
			class _xx_200Rnd_65x39_cased_Box //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				magazine = "200Rnd_65x39_cased_Box";
				count = 6;
			};
			class _xx_HandGrenade //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				magazine = "HandGrenade";
				count = 6;
			};
			class _xx_MiniGrenade //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				magazine = "MiniGrenade";
				count = 6;
			};
			class _xx_1Rnd_HE_Grenade_shell //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokePurple_Grenade_shell //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				magazine = "1Rnd_SmokePurple_Grenade_shell";
				count = 3;
			};
			class _xx_SmokeShell //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				magazine = "SmokeShell";
				count = 8;
			};
			class _xx_SmokeShellGreen //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				magazine = "SmokeShellGreen";
				count = 8;
			};
			class _xx_SmokeShellOrange //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				magazine = "SmokeShellOrange";
				count = 8;
			};
			class _xx_SmokeShellPurple //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				magazine = "SmokeShellPurple";
				count = 8;
			};
			class _xx_NLAW_F //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				magazine = "NLAW_F";
				count = 5;
			};
			class _xx_Titan_AT //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				magazine = "Titan_AT";
				count = 2;
			};
			class _xx_Titan_AP //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				magazine = "Titan_AP";
				count = 2;
			};
			class _xx_Titan_AA //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				magazine = "Titan_AA";
				count = 2;
			};
		};
		class TransportItems //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
		{
			class _xx_FirstAidKit //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
		class TransportWeapons //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
		{
			class _xx_arifle_Mk20_F //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				weapon = "arifle_Mk20_F";
				count = 2;
			};
			class _xx_LMG_Mk200_F //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				weapon = "LMG_Mk200_F";
				count = 1;
			};
			class _xx_launch_NLAW_F //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
			{
				weapon = "launch_NLAW_F";
				count = 1;
			};
		};
	};
	class I_APC_tracked_03_base_F: APC_Tracked_03_base_F //inherits 121 parameters from bin\config.bin/CfgVehicles/APC_Tracked_03_base_F, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "I_APC_tracked_03_base_F";
		crew = "I_crew_F";
		typicalCargo[] = {"I_Soldier_F"};
		side = 2;
		faction = "IND_F";
	};
	class I_APC_tracked_03_cannon_F: I_APC_tracked_03_base_F //inherits 6 parameters from bin\config.bin/CfgVehicles/I_APC_tracked_03_base_F, sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Armor_F_EPB_APC_Tracked_03"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"wheel_podkolol1", 0.56}, {"wheel_podkolop1", 0.6}, {"wheel_podkolol2", 0.54}, {"wheel_podkolol3", 0.51}, {"wheel_podkolol4", 0.49}, {"wheel_podkolol5", 0.51}, {"wheel_podkolol6", 0.49}, {"wheel_podkolop2", 0.53}, {"wheel_podkolop3", 0.5}, {"wheel_podkolop4", 0.51}, {"wheel_podkolop5", 0.5}, {"wheel_podkolop6", 0.49}, {"podkolol1_hide_damage", 0}, {"podkolol2_hide_damage", 0}, {"podkolol3_hide_damage", 0}, {"podkolol4_hide_damage", 0}, {"podkolol5_hide_damage", 0}, {"podkolol6_hide_damage", 0}, {"podkolol7_hide_damage", 0}, {"podkolol8_hide_damage", 0}, {"podkolop1_hide_damage", 0}, {"podkolop2_hide_damage", 0}, {"podkolop3_hide_damage", 0}, {"podkolop4_hide_damage", 0}, {"podkolop5_hide_damage", 0}, {"podkolop6_hide_damage", 0}, {"podkolop7_hide_damage", 0}, {"podkolop8_hide_damage", 0}, {"damagevez", 0}, {"mainturret", 0}, {"maingun", 0.17}, {"hatchdriver", 0}, {"hatchcommander", 0}, {"hatchgunner", 0}, {"reverse_light", 0}, {"obsturret", 0}, {"obsgun", 0}, {"wheel_koll1", 0}, {"wheel_kolol1", 0}, {"wheel_kolp1", 0}, {"wheel_kolop1", 0}, {"wheel_koll2", 0}, {"wheel_kolp2", 0}, {"wheel_kolol2", 0}, {"wheel_kolol3", 0}, {"wheel_kolol4", 0}, {"wheel_kolol5", 0}, {"wheel_kolol6", 0}, {"wheel_kolop2", 0}, {"wheel_kolop3", 0}, {"wheel_kolop4", 0}, {"wheel_kolop5", 0}, {"wheel_kolop6", 0}, {"zasleh_rot", 0}, {"zasleh2_rot", 717.33}, {"zasleh_hide", 0}, {"maingunoptics", 0.17}};
			hide[] = {"zasleh2", "zasleh_1", "light_l", "light_r", "zadni svetlo", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 2.712;
			verticalOffsetWorld = -0.224;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_APC_tracked_03_cannon_F.jpg";
		_generalMacro = "I_APC_tracked_03_cannon_F";
		scope = 2;
		displayName = "FV-720 Mora";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"A3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext_indp_co.paa", "a3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext2_indp_co.paa"};
	};
	class MBT_01_base_F: Tank_F //inherits 83 parameters from bin\config.bin/CfgVehicles/Tank_F, sources - ["A3_Armor_F_Gamma_MBT_01"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "MBT_01_base_F";
		simulation = "tankX";
		enginePower = 1118;
		maxOmega = 276;
		peakTorque = 4832;
		torqueCurve[] = {{"(700/2640)", 0}, {"(1600/2640)", "(2650/2850)"}, {"(1800/2640)", "(2800/2850)"}, {"(1900/2640)", "(2850/2850)"}, {"(2000/2640)", "(2800/2850)"}, {"(2200/2640)", "(2750/2850)"}, {"(2400/2640)", "(2600/2850)"}, {"(4900/2640)", "(0/2850)"}};
		thrustDelay = 0.2;
		clutchStrength = 90;
		fuelCapacity = 1885;
		brakeIdleSpeed = 1.78;
		latency = 0.1;
		tankTurnForce = 1.7e+006;
		normalSpeedForwardCoef = 0.4;
		idleRpm = 700;
		redRpm = 2640;
		engineLosses = 25;
		transmissionLosses = 15;
		changeGearMinEffectivity[] = {0.5, 0.15, 0.95, 0.95, 0.95, 0.95, 0.95, 0.95, 0.95, 0.95, 0.95, 0.95, 0.9, 0.9, 0.9, 0.9, 0.9};
		class complexGearbox //sources - ["A3_Armor_F_Gamma_MBT_01"]
		{
			GearboxRatios[] = {"R1", -2.235, "N", 0, "CD0", "2*(0.75^(-10))", "CD1", "2*(0.75^(-9))", "CD2", "2*(0.75^(-8))", "CD3", "2*(0.75^(-7))", "CD4", "2*(0.75^(-6))", "CD5", "2*(0.75^(-5))", "CD6", "2*(0.75^(-4))", "CD7", "2*(0.75^(-3))", "CD8", "2*(0.75^(-2))", "CD9", "2*(0.75^(-1))", "D1", "2*(0.75^0)", "D2", "2*(0.75^1)", "D3", "2*(0.75^2)", "D4", "2*(0.75^3)", "D5", "2*(0.75^4)"};
			TransmissionRatios[] = {"High", 10};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0;
		};
		class Wheels //sources - ["A3_Armor_F_Gamma_MBT_01"]
		{
			class L2 //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				boneName = "wheel_podkoloL1";
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				damping = 75;
				steering = 0;
				side = "left";
				weight = 150;
				mass = 150;
				MOI = 49;
				latStiffX = 25;
				latStiffY = 280;
				longitudinalStiffnessPerUnitGravity = 100000;
				maxBrakeTorque = 10000;
				sprungMass = 5450;
				springStrength = 324000;
				springDamperRate = 36000;
				dampingRate = 1;
				dampingRateInAir = 3010;
				dampingRateDamaged = 10;
				dampingRateDestroyed = 10000;
				maxDroop = 0.18;
				maxCompression = 0.18;
				frictionVsSlipGraph[] = {{0, 5}, {0.5, 5}, {1, 5}};
			};
			class L3: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/Wheels/L2, sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				boneName = "wheel_podkolol2";
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
			};
			class L4: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/Wheels/L2, sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				boneName = "wheel_podkolol3";
				center = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
			};
			class L5: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/Wheels/L2, sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				boneName = "wheel_podkolol4";
				center = "wheel_1_5_axis";
				boundary = "wheel_1_5_bound";
			};
			class L6: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/Wheels/L2, sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				boneName = "wheel_podkolol5";
				center = "wheel_1_6_axis";
				boundary = "wheel_1_6_bound";
			};
			class L7: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/Wheels/L2, sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				boneName = "wheel_podkolol6";
				center = "wheel_1_7_axis";
				boundary = "wheel_1_7_bound";
			};
			class L9: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/Wheels/L2, sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				boneName = "wheel_podkolol9";
				center = "wheel_1_9_axis";
				boundary = "wheel_1_9_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class L1: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/Wheels/L2, sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				boneName = "";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class R2: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/Wheels/L2, sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				boneName = "wheel_podkolop1";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				side = "right";
			};
			class R3: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/Wheels/R2, sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				boneName = "wheel_podkolop2";
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
			};
			class R4: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/Wheels/R2, sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				boneName = "wheel_podkolop3";
				center = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
			};
			class R5: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/Wheels/R2, sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				boneName = "wheel_podkolop4";
				center = "wheel_2_5_axis";
				boundary = "wheel_2_5_bound";
			};
			class R6: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/Wheels/R2, sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				boneName = "wheel_podkolop5";
				center = "wheel_2_6_axis";
				boundary = "wheel_2_6_bound";
			};
			class R7: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/Wheels/R2, sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				boneName = "wheel_podkolop6";
				center = "wheel_2_7_axis";
				boundary = "wheel_2_7_bound";
			};
			class R9: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/Wheels/R2, sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				boneName = "wheel_podkolop9";
				center = "wheel_2_9_axis";
				boundary = "wheel_2_9_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class R1: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/Wheels/R2, sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				boneName = "";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
		};
		editorSubcategory = "EdSubcat_Tanks";
		scope = 0;
		maxSpeed = 60;
		steerAheadSimul = 0.5;
		steerAheadPlan = 0.35;
		predictTurnPlan = 2.8;
		predictTurnSimul = 2.6;
		brakeDistance = 15;
		precision = 5;
		transportSoldier = 6;
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		cargoAction[] = {"passenger_flatground_leanleft", "passenger_flatground_generic01", "passenger_flatground_generic02", "passenger_flatground_generic03", "passenger_flatground_generic04", "passenger_flatground_generic05"};
		maxFordingDepth = -0.8;
		waterResistance = 0;
		waterDamageEngine = 0.2;
		driverAction = "driver_apcwheeled2_out";
		driverInAction = "driver_apcwheeled2_in";
		extCameraPosition[] = {0, 2.25, -9};
		forceHideDriver = 1;
		viewDriverInExternal = 1;
		class ViewOptics: ViewOptics //inherits 3 parameters from bin\config.bin/CfgVehicles/Tank/ViewOptics, sources - ["A3_Armor_F_Gamma_MBT_01"]
		{
			visionMode[] = {"Normal", "NVG"};
		};
		armor = 700;
		armorLights = 0.1;
		armorStructural = 6;
		crewExplosionProtection = 0.9999;
		damageResistance = 0.00547;
		cost = 2.5e+006;
		crewVulnerable = 0;
		epeImpulseDamageCoef = 18;
		waterPPInVehicle = 0;
		wheelCircumference = 2.15;
		tracksSpeed = 1.4;
		driverWeaponsInfoType = "RscOptics_MBT_01_Driver";
		model = "\A3\armor_f_gamma\MBT_01\MBT_01_cannon_F";
		picture = "\A3\armor_f_gamma\MBT_01\Data\UI\Slammer_M2A1_Base_ca.paa";
		Icon = "\A3\armor_f_gamma\MBT_01\Data\ui\map_slammer_mk4_ca.paa";
		memoryPointTaskMarker = "TaskMarker_1_pos";
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 1;
		class HitPoints: HitPoints //inherits 5 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints, sources - ["A3_Armor_F_Gamma_MBT_01"]
		{
			class HitHull: HitHull //inherits 7 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints/HitHull, sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				armor = 1.4;
				material = -1;
				name = "hull_hit";
				visual = "hull_hit";
				passThrough = 0;
				minimalHit = 0.15;
				explosionShielding = 0.2;
				radius = 0.3;
			};
			class HitFuel: HitFuel //inherits 7 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints/HitFuel, sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				armor = 0.4;
				material = -1;
				name = "engine_hit";
				visual = "";
				passThrough = 0;
				minimalHit = 0.1;
				explosionShielding = 0.3;
				radius = 0.3;
			};
			class HitEngine: HitEngine //inherits 7 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints/HitEngine, sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				armor = 0.6;
				material = -1;
				name = "engine_hit";
				visual = "";
				passThrough = 0;
				minimalHit = 0.15;
				explosionShielding = 0.2;
				radius = 0.3;
			};
			class HitLTrack: HitLTrack //inherits 7 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints/HitLTrack, sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				armor = 0.3;
				material = -1;
				name = "track_l_hit";
				visual = "track_l_hit";
				passThrough = 0;
				minimalHit = 0.15;
				explosionShielding = 0.4;
				radius = 0.3;
			};
			class HitRTrack: HitRTrack //inherits 7 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints/HitRTrack, sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				armor = 0.3;
				material = -1;
				name = "track_r_hit";
				visual = "track_r_hit";
				passThrough = 0;
				minimalHit = 0.15;
				explosionShielding = 0.4;
				radius = 0.3;
			};
		};
		animationSourceHatch = "";
		class Exhausts //sources - ["A3_Armor_F_Gamma_MBT_01"]
		{
			class Exhaust1 //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustEffectTankSide";
			};
		};
		insideSoundCoef = 0.9;
		threat[] = {1, 1, 0.3};
		attenuationEffectType = "TankAttenuation";
		soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out", 0.562341, 1};
		soundGetOut[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out", 0.562341, 1, 20};
		soundTurnIn[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out", 1.77828, 1, 20};
		soundTurnOut[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out", 1.77828, 1, 20};
		soundTurnInInternal[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out", 1.77828, 1, 20};
		soundTurnOutInternal[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out", 1.77828, 1, 20};
		soundDammage[] = {"", 0.562341, 1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_start", 0.630957, 1};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_start", 0.794328, 1, 200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_stop", 0.630957, 1};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_stop", 0.794328, 1, 200};
		soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1", 0.177828, 1, 100};
		soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2", 0.177828, 1, 100};
		soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3", 0.177828, 1, 100};
		soundBushCrash[] = {"soundBushCollision1", 0.33, "soundBushCollision2", 0.33, "soundBushCollision3", 0.33};
		soundGeneralCollision1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_1", 1, 1, 100};
		soundGeneralCollision2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_2", 1, 1, 100};
		soundGeneralCollision3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_3", 1, 1, 100};
		soundGeneralCollision4[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_4", 1, 1, 100};
		soundCrashes[] = {"soundGeneralCollision1", 0.25, "soundGeneralCollision2", 0.25, "soundGeneralCollision3", 0.25, "soundGeneralCollision4", 0.25};
		buildCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_1", 1, 1, 200};
		buildCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_2", 1, 1, 200};
		buildCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_3", 1, 1, 200};
		buildCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_4", 1, 1, 200};
		soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
		WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_1", 1, 1, 200};
		WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_2", 1, 1, 200};
		WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_3", 1, 1, 200};
		WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_4", 1, 1, 200};
		soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166};
		ArmorCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_1", 1, 1, 200};
		ArmorCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_2", 1, 1, 200};
		ArmorCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_3", 1, 1, 200};
		ArmorCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_4", 1, 1, 200};
		soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
		class Sounds //sources - ["A3_Armor_F_Gamma_MBT_01"]
		{
			class Idle_ext //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm1", 0.794328, 1, 200};
				frequency = "0.95	+	((rpm/	2640) factor[(400/	2640),(900/	2640)])*0.15";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(900/	2640),(700/	2640)]))";
			};
			class Engine //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm2", 0.891251, 1, 240};
				frequency = "0.8	+	((rpm/	2640) factor[(700/	2640),(1100/	2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(705/	2640),(850/	2640)])	*	((rpm/	2640) factor[(1100 /	2640),(950/	2640)]))";
			};
			class Engine1_ext //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm3", 1.12202, 1, 280};
				frequency = "0.8	+	((rpm/	2640) factor[(950/	2640),(1400/	2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/	2640) factor[(1400/	2640),(1200/	2640)]))";
			};
			class Engine2_ext //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm4", 1.25893, 1, 320};
				frequency = "0.8	+	((rpm/	2640) factor[(1200/	2640),(1700/	2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/	2640) factor[(1700/	2640),(1500/	2640)]))";
			};
			class Engine3_ext //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm5", 1.41254, 1, 360};
				frequency = "0.8	+	((rpm/	2640) factor[(1500/	2640),(2100/	2640)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/	2640) factor[(2100/	2640),(1800/	2640)]))";
			};
			class Engine4_ext //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm6", 1.58489, 1, 400};
				frequency = "0.8	+	((rpm/	2640) factor[(1800/	2640),(2300/	2640)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/	2640) factor[(2450/	2640),(2200/	2640)]))";
			};
			class Engine5_ext //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm7", 1.77828, 1, 440};
				frequency = "0.8	+	((rpm/	2640) factor[(2100/	2640),(2640/	2640)])*0.1";
				volume = "engineOn*camPos*((rpm/	2640) factor[(2150/	2640),(2500/	2640)])";
			};
			class IdleThrust //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm1", 1.12202, 1, 200};
				frequency = "0.8	+	((rpm/	2640) factor[(400/	2640),(900/	2640)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(900/	2640),(700/	2640)]))";
			};
			class EngineThrust //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm2", 1.41254, 1, 200};
				frequency = "0.8	+	((rpm/	2640) factor[(700/	2640),(1100/	2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(705/	2640),(850/	2640)])	*	((rpm/	2640) factor[(1100 /	2640),(950/	2640)]))";
			};
			class Engine1_Thrust_ext //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm3", 1.77828, 1, 230};
				frequency = "0.8	+	((rpm/	2640) factor[(950/	2640),(1400/	2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/	2640) factor[(1400/	2640),(1200/	2640)]))";
			};
			class Engine2_Thrust_ext //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm4", 1.99526, 1, 290};
				frequency = "0.8	+	((rpm/	2640) factor[(1200/	2640),(1700/	2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/	2640) factor[(1700/	2640),(1500/	2640)]))";
			};
			class Engine3_Thrust_ext //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm5", 1.77828, 1, 350};
				frequency = "0.8	+	((rpm/	2640) factor[(1500/	2640),(2100/	2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/	2640) factor[(2100/	2640),(1800/	2640)]))";
			};
			class Engine4_Thrust_ext //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm6", 2.23872, 1, 400};
				frequency = "0.8	+	((rpm/	2640) factor[(1800/	2640),(2300/	2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/	2640) factor[(2450/	2640),(2200/	2640)]))";
			};
			class Engine5_Thrust_ext //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm7", 2.51189, 1, 450};
				frequency = "0.8	+	((rpm/	2640) factor[(2100/	2640),(2640/	2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2640) factor[(2150/	2640),(2500/	2640)])";
			};
			class Idle_int //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm1", 0.501187, 1};
				frequency = "0.8	+	((rpm/	2640) factor[(400/	2640),(900/	2640)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(900/	2640),(700/	2640)]))";
			};
			class Engine_int //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm2", 0.354813, 1};
				frequency = "0.8	+	((rpm/	2640) factor[(700/	2640),(1100/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(705/	2640),(850/	2640)])	*	((rpm/	2640) factor[(1100 /	2640),(950/	2640)]))";
			};
			class Engine1_int //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm3", 0.398107, 1};
				frequency = "0.8	+	((rpm/	2640) factor[(950/	2640),(1400/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/	2640) factor[(1400/	2640),(1200/	2640)]))";
			};
			class Engine2_int //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm4", 0.446684, 1};
				frequency = "0.8	+	((rpm/	2640) factor[(1200/	2640),(1700/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/	2640) factor[(1700/	2640),(1500/	2640)]))";
			};
			class Engine3_int //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm5", 0.501187, 1};
				frequency = "0.8	+	((rpm/	2640) factor[(1500/	2640),(2100/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/	2640) factor[(2100/	2640),(1800/	2640)]))";
			};
			class Engine4_int //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm6", 0.562341, 1};
				frequency = "0.8	+	((rpm/	2640) factor[(1800/	2640),(2300/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/	2640) factor[(2450/	2640),(2200/	2640)]))";
			};
			class Engine5_int //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm7", 0.630957, 1};
				frequency = "0.8	+	((rpm/	2640) factor[(2100/	2640),(2640/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	2640) factor[(2150/	2640),(2500/	2640)])";
			};
			class IdleThrust_int //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm1", 0.630957, 1};
				frequency = "0.8	+	((rpm/	2640) factor[(400/	2640),(900/	2640)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(900/	2640),(700/	2640)]))";
			};
			class EngineThrust_int //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm2", 0.398107, 1};
				frequency = "0.8	+	((rpm/	2640) factor[(700/	2640),(1100/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(705/	2640),(850/	2640)])	*	((rpm/	2640) factor[(1100 /	2640),(950/	2640)]))";
			};
			class Engine1_Thrust_int //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm3", 0.446684, 1};
				frequency = "0.8	+	((rpm/	2640) factor[(950/	2640),(1400/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/	2640) factor[(1400/	2640),(1200/	2640)]))";
			};
			class Engine2_Thrust_int //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm4", 0.446684, 1};
				frequency = "0.8	+	((rpm/	2640) factor[(1200/	2640),(1700/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/	2640) factor[(1700/	2640),(1500/	2640)]))";
			};
			class Engine3_Thrust_int //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm5", 0.501187, 1};
				frequency = "0.8	+	((rpm/	2640) factor[(1500/	2640),(2100/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/	2640) factor[(2100/	2640),(1800/	2640)]))";
			};
			class Engine4_Thrust_int //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm6", 0.562341, 1};
				frequency = "0.8	+	((rpm/	2640) factor[(1800/	2640),(2300/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/	2640) factor[(2450/	2640),(2200/	2640)]))";
			};
			class Engine5_Thrust_int //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm7", 0.630957, 1};
				frequency = "0.8	+	((rpm/	2640) factor[(2100/	2640),(2640/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2640) factor[(2150/	2640),(2500/	2640)])";
			};
			class NoiseInt //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1", 0.501187, 1};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1", 0.891251, 1, 50};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0 //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_01", 0.398107, 1, 140};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsOutH1 //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_02", 0.446684, 1, 160};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsOutH2 //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_03", 0.501187, 1, 180};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsOutH3 //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_04", 0.562341, 1, 200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsOutH4 //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_05", 0.562341, 1, 220};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsOutS0 //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_01", 0.316228, 1, 120};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsOutS1 //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_02", 0.354813, 1, 140};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsOutS2 //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_03", 0.398107, 1, 160};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsOutS3 //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_04", 0.446684, 1, 180};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsOutS4 //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_05", 0.501187, 1, 200};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsInH0 //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_01", 0.251189, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsInH1 //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_02", 0.281838, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsInH2 //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_03", 0.316228, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsInH3 //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_04", 0.354813, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsInH4 //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_05", 0.398107, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsInS0 //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_01", 0.316228, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsInS1 //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_02", 0.316228, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsInS2 //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_03", 0.354813, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsInS3 //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_04", 0.354813, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsInS4 //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_05", 0.398107, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class RainExt //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext", 1, 1, 100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int", 1, 1, 100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		class Reflectors //sources - ["A3_Armor_F_Gamma_MBT_01"]
		{
			class Left //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				color[] = {1900, 1800, 1700};
				ambient[] = {5, 5, 5};
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1;
				class Attenuation //sources - ["A3_Armor_F_Gamma_MBT_01"]
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class Right: Left //inherits 15 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/Reflectors/Left, sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
		};
		aggregateReflectors[] = {{"Left", "Right"}};
		smokeLauncherGrenadeCount = 8;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 120;
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/Tank_F/Turrets, sources - ["A3_Armor_F_Gamma_MBT_01"]
		{
			class MainTurret: MainTurret //inherits 17 parameters from bin\config.bin/CfgVehicles/Tank_F/Turrets/MainTurret, sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/Tank_F/Turrets/MainTurret/Turrets, sources - ["A3_Armor_F_Gamma_MBT_01"]
				{
					class CommanderOptics: CommanderOptics //inherits 2 parameters from bin\config.bin/CfgVehicles/Tank_F/Turrets/MainTurret/Turrets/CommanderOptics, sources - ["A3_Armor_F_Gamma_MBT_01"]
					{
						memoryPointGunnerOutOptics = "commanderview";
						memoryPointGunnerOptics = "commanderview";
						minElev = -25;
						maxElev = 60;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						weapons[] = {"SmokeLauncher"};
						magazines[] = {"SmokeLauncherMag"};
						soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_comm", 1, 1, 30};
						soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_comm", 1, 1, 30};
						outGunnerMayFire = 0;
						inGunnerMayFire = 1;
						gunnerAction = "mbt1c_slot2_out";
						gunnerInAction = "mbt1c_slot2_in";
						gunnerGetInAction = "GetInLow";
						gunnerGetOutAction = "GetOutLow";
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel = "";
						gunnerOpticsEffect[] = {};
						isPersonTurret = 1;
						personTurretAction = "vehicle_turnout_1";
						minOutElev = -10;
						maxOutElev = 25;
						initOutElev = 0;
						minOutTurn = -95;
						maxOutTurn = 95;
						initOutTurn = 0;
						class ViewGunner: ViewCargo //inherits 15 parameters from bin\config.bin/CfgVehicles/AllVehicles/ViewCargo, sources - []
						{
						};
						class ViewOptics: ViewOptics //inherits 0 parameters from bin\config.bin/CfgVehicles/LandVehicle/CommanderOptics/ViewOptics, sources - ["A3_Armor_F_Gamma_MBT_01"]
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.31;
							minFov = 0.034;
							maxFov = 0.31;
							visionMode[] = {"Normal", "TI"};
							thermalMode[] = {2, 3};
						};
						class OpticsIn: Optics_Commander_01 //inherits 3 parameters from bin\config.bin/Optics_Commander_01, sources - ["A3_Armor_F_Gamma_MBT_01"]
						{
							class Wide: Wide //inherits 1 parameters from bin\config.bin/Optics_Commander_01/Wide, sources - []
							{
							};
							class Medium: Medium //inherits 1 parameters from bin\config.bin/Optics_Commander_01/Medium, sources - []
							{
							};
							class Narrow: Narrow //inherits 1 parameters from bin\config.bin/Optics_Commander_01/Narrow, sources - []
							{
							};
						};
						turretInfoType = "RscOptics_MBT_01_commander";
						showCrewAim = 1;
						startEngine = 0;
						gunnerHasFlares = 1;
						stabilizedInAxes = 3;
						maxHorizontalRotSpeed = 1.8;
						maxVerticalRotSpeed = 1.8;
						viewGunnerInExternal = 1;
						class HitPoints //sources - ["A3_Armor_F_Gamma_MBT_01"]
						{
							class HitTurret //sources - ["A3_Armor_F_Gamma_MBT_01"]
							{
								armor = 0.1;
								material = -1;
								name = "commander_turret_hit";
								visual = "commander_turret_hit";
								passThrough = 0;
								minimalHit = 0.1;
								explosionShielding = 1;
								radius = 0.25;
							};
							class HitGun //sources - ["A3_Armor_F_Gamma_MBT_01"]
							{
								armor = 0.1;
								material = -1;
								name = "commander_gun_hit";
								visual = "commander_gun_hit";
								passThrough = 0;
								minimalHit = 0.1;
								explosionShielding = 1;
								radius = 0.25;
							};
						};
					};
				};
				memoryPointGun[] = {"usti hlavne2"};
				gunBeg = "Usti hlavne";
				gunEnd = "Konec hlavne";
				gunnerAction = "mbt1_slot2_out";
				gunnerInAction = "mbt1_slot2_in";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				weapons[] = {"cannon_120mm", "LMG_M200_body"};
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner", 0.562341, 1, 50};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical", 0.562341, 1, 50};
				magazines[] = {"32Rnd_120mm_APFSDS_shells_Tracer_Red", "16Rnd_120mm_HE_shells_Tracer_Red", "2000Rnd_65x39_belt", "2000Rnd_65x39_belt"};
				forceHideGunner = 1;
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000};
				discreteDistanceInitIndex = 5;
				memoryPointGunnerOptics = "gunnerview";
				minElev = -5;
				maxElev = 20;
				initElev = 10;
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {};
				gunnerForceOptics = 1;
				startEngine = 0;
				inGunnerMayFire = 1;
				viewGunnerInExternal = 1;
				class OpticsIn: Optics_Gunner_MBT_01 //inherits 3 parameters from bin\config.bin/Optics_Gunner_MBT_01, sources - ["A3_Armor_F_Gamma_MBT_01"]
				{
					class Wide: Wide //inherits 1 parameters from bin\config.bin/Optics_Gunner_MBT_01/Wide, sources - []
					{
					};
					class Medium: Medium //inherits 1 parameters from bin\config.bin/Optics_Gunner_MBT_01/Medium, sources - []
					{
					};
					class Narrow: Narrow //inherits 1 parameters from bin\config.bin/Optics_Gunner_MBT_01/Narrow, sources - []
					{
					};
				};
				turretInfoType = "RscOptics_MBT_01_gunner";
				showCrewAim = 2;
				class HitPoints //sources - ["A3_Armor_F_Gamma_MBT_01"]
				{
					class HitTurret //sources - ["A3_Armor_F_Gamma_MBT_01"]
					{
						armor = 0.8;
						material = -1;
						name = "main_turret_hit";
						visual = "main_turret_hit";
						passThrough = 1;
						minimalHit = 0.15;
						explosionShielding = 0.2;
						radius = 0.25;
					};
					class HitGun //sources - ["A3_Armor_F_Gamma_MBT_01"]
					{
						armor = 0.6;
						material = -1;
						name = "main_gun_hit";
						visual = "main_gun_hit";
						passThrough = 0;
						minimalHit = 0.15;
						explosionShielding = 0.4;
						radius = 0.25;
					};
				};
			};
		};
		class Damage //sources - ["A3_Armor_F_Gamma_MBT_01"]
		{
			tex[] = {};
			mat[] = {"A3\armor_f_gamma\MBT_01\Data\MBT_01_body.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_body_damage.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_body_destruct.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_int.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_int_damage.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_int_destruct.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_tow.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_damage.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_destruct.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_track.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_track_damage.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_track_destruct.rvmat"};
		};
		class AnimationSources: AnimationSources //inherits 0 parameters from bin\config.bin/CfgVehicles/All/AnimationSources, sources - ["A3_Armor_F_Gamma_MBT_01"]
		{
			class muzzle_rot_cannon //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				source = "ammorandom";
				weapon = "cannon_120mm";
			};
			class muzzle_rot_coax //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				source = "ammorandom";
				weapon = "LMG_M200";
			};
			class muzzle_hide_coax //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				source = "reload";
				weapon = "LMG_M200";
			};
			class recoil_source //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				source = "reload";
				weapon = "cannon_120mm";
			};
		};
		class Library //sources - ["A3_Armor_F_Gamma_MBT_01"]
		{
			libTextDesc = "A licensed copy of an Israeli tank built in Central Europe. This tank is built for versatile use on the battlefield and maximal crew protection, which gained significant appreciation from western Europe armies in the 21st century. The M2A1 is armed with 120 mm cannon and a coaxial machinegun and can also be used as mobile artillery. This tank has proven itself in battle and thanks to heavy manufacture, it became the second most wide spread main battle tank of many countries in the world.";
		};
		class TransportMagazines //sources - ["A3_Armor_F_Gamma_MBT_01"]
		{
			class _xx_SmokeShell //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellBlue //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				magazine = "SmokeShellBlue";
				count = 2;
			};
			class _xx_30Rnd_65x39_caseless_mag //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 4;
			};
		};
		class TransportWeapons //sources - ["A3_Armor_F_Gamma_MBT_01"]
		{
			class _xx_arifle_MXC_F //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				weapon = "arifle_MXC_F";
				count = 2;
			};
		};
		class TransportItems //sources - ["A3_Armor_F_Gamma_MBT_01"]
		{
			class _xx_FirstAidKit //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
	};
	class B_MBT_01_base_F: MBT_01_base_F //inherits 118 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F, sources - ["A3_Armor_F_Gamma_MBT_01"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "B_MBT_01_base_F";
		features = "Randomization: No						<br />Camo selections: 2 - hull, main turret						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: 1 to 6";
		crew = "B_crew_F";
		typicalCargo[] = {"B_Soldier_F"};
		side = 1;
		faction = "BLU_F";
	};
	class B_MBT_01_cannon_F: B_MBT_01_base_F //inherits 7 parameters from bin\config.bin/CfgVehicles/B_MBT_01_base_F, sources - ["A3_Armor_F_Gamma_MBT_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Armor_F_Gamma_MBT_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"wheel_koll1", 0}, {"wheel_kolol1", 0}, {"wheel_podkolol1", 0.43}, {"wheel_kolp1", 0}, {"wheel_kolop1", 0}, {"wheel_podkolop1", 0.46}, {"wheel_koll2", 0}, {"wheel_kolp2", 0}, {"wheel_kolol2", 0}, {"wheel_kolol3", 0}, {"wheel_kolol4", 0}, {"wheel_kolol5", 0}, {"wheel_kolol6", 0}, {"wheel_kolop2", 0}, {"wheel_kolop3", 0}, {"wheel_kolop4", 0}, {"wheel_kolop5", 0}, {"wheel_kolop6", 0}, {"wheel_podkolol2", 0.45}, {"wheel_podkolol3", 0.49}, {"wheel_podkolol4", 0.52}, {"wheel_podkolol5", 0.6}, {"wheel_podkolol6", 0.63}, {"wheel_podkolop2", 0.45}, {"wheel_podkolop3", 0.52}, {"wheel_podkolop4", 0.56}, {"wheel_podkolop5", 0.61}, {"wheel_podkolop6", 0.62}, {"podkolol1_hide_damage", 0}, {"podkolol2_hide_damage", 0}, {"podkolol3_hide_damage", 0}, {"podkolol4_hide_damage", 0}, {"podkolol5_hide_damage", 0}, {"podkolol6_hide_damage", 0}, {"podkolol7_hide_damage", 0}, {"podkolol8_hide_damage", 0}, {"podkolop1_hide_damage", 0}, {"podkolop2_hide_damage", 0}, {"podkolop3_hide_damage", 0}, {"podkolop4_hide_damage", 0}, {"podkolop5_hide_damage", 0}, {"podkolop6_hide_damage", 0}, {"podkolop7_hide_damage", 0}, {"podkolop8_hide_damage", 0}, {"damagevez", 0}, {"mainturret", 0}, {"maingun", 0.17}, {"hatchcommander", 0}, {"recoil", 0}, {"obsturret", 0}, {"obsgun", 0}, {"maingunoptics", 0.17}, {"damagevezvelitele", 0}, {"poklop_commander_damage", 0}, {"poklop_driver_damage", 0}, {"hatchdriver", 0}, {"plates_1_y", 0}, {"plates_2_y", 0}, {"plates_1_x", 0}, {"plates_2_x", 0}, {"plates_1_bank", 0}, {"plates_2_bank", 0}, {"cannon_muzzle_flash", 0}, {"zaslehrot_cannon", 0}};
			hide[] = {"clan", "zasleh", "zasleh_1", "light_l", "light_r", "zadni svetlo", "brzdove svetlo", "podsvit pristroju", "poskozeni"};
			verticalOffset = 2.486;
			verticalOffsetWorld = 0.008;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_MBT_01_cannon_F.jpg";
		_generalMacro = "B_MBT_01_cannon_F";
		scope = 2;
		displayName = "M2A1 Slammer";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_CO.paa", "A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_CO.paa"};
		class AnimationSources: AnimationSources //inherits 4 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/AnimationSources, sources - ["A3_Armor_F_Gamma_MBT_01"]
		{
			class muzzle_hide_cannon //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				source = "reload";
				weapon = "cannon_120mm";
			};
			class muzzle_rot_cannon //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				source = "ammorandom";
				weapon = "cannon_120mm";
			};
		};
	};
	class B_MBT_01_TUSK_F: B_MBT_01_cannon_F //inherits 9 parameters from bin\config.bin/CfgVehicles/B_MBT_01_cannon_F, sources - ["A3_Armor_F_EPC_MBT_01"]
	{
		features = "Randomization: No						<br />Camo selections: 3 - hull, main turret, RCWS turret and plates						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: 1 to 6";
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Armor_F_EPC_MBT_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"wheel_koll1", 0}, {"wheel_kolol1", 0}, {"wheel_podkolol1", 0.46}, {"wheel_kolp1", 0}, {"wheel_kolop1", 0}, {"wheel_podkolop1", 0.49}, {"wheel_koll2", 0}, {"wheel_kolp2", 0}, {"wheel_kolol2", 0}, {"wheel_kolol3", 0}, {"wheel_kolol4", 0}, {"wheel_kolol5", 0}, {"wheel_kolol6", 0}, {"wheel_kolop2", 0}, {"wheel_kolop3", 0}, {"wheel_kolop4", 0}, {"wheel_kolop5", 0}, {"wheel_kolop6", 0}, {"wheel_podkolol2", 0.48}, {"wheel_podkolol3", 0.52}, {"wheel_podkolol4", 0.55}, {"wheel_podkolol5", 0.64}, {"wheel_podkolol6", 0.66}, {"wheel_podkolop2", 0.48}, {"wheel_podkolop3", 0.55}, {"wheel_podkolop4", 0.59}, {"wheel_podkolop5", 0.64}, {"wheel_podkolop6", 0.66}, {"podkolol1_hide_damage", 0}, {"podkolol2_hide_damage", 0}, {"podkolol3_hide_damage", 0}, {"podkolol4_hide_damage", 0}, {"podkolol5_hide_damage", 0}, {"podkolol6_hide_damage", 0}, {"podkolol7_hide_damage", 0}, {"podkolol8_hide_damage", 0}, {"podkolop1_hide_damage", 0}, {"podkolop2_hide_damage", 0}, {"podkolop3_hide_damage", 0}, {"podkolop4_hide_damage", 0}, {"podkolop5_hide_damage", 0}, {"podkolop6_hide_damage", 0}, {"podkolop7_hide_damage", 0}, {"podkolop8_hide_damage", 0}, {"damagevez", 0}, {"mainturret", 0}, {"maingun", 0.17}, {"hatchcommander", 0}, {"recoil", 0}, {"obsturret", 0}, {"obsgun", 0}, {"maingunoptics", 0.17}, {"damagevezvelitele", 0}, {"poklop_commander_damage", 0}, {"poklop_driver_damage", 0}, {"hatchdriver", 0}, {"plates_1_y", 0}, {"plates_2_y", 0}, {"plates_1_x", 0}, {"plates_2_x", 0}, {"plates_1_bank", 0}, {"plates_2_bank", 0}, {"zaslehrot", 0}, {"cannon_muzzle_flash", 0}, {"zaslehrot_cannon", 0}, {"commander_muzzleflash_rot", 0}, {"commander_gun_recoil", 0}, {"commander_gun_belt_1", 0}, {"commander_gun_belt_2", 0}, {"commander_gun_belt_3", 0}};
			hide[] = {"clan", "zasleh", "commander_muzzleflash", "light_l", "light_r", "zadni svetlo", "brzdove svetlo", "podsvit pristroju", "poskozeni"};
			verticalOffset = 2.539;
			verticalOffsetWorld = -0.004;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_MBT_01_TUSK_F.jpg";
		_generalMacro = "B_MBT_01_TUSK_F";
		scope = 2;
		displayName = "M2A4 Slammer UP";
		class Library //sources - ["A3_Armor_F_EPC_MBT_01"]
		{
			libTextDesc = "The M2A4 Slammer UP is the urban purpose variant of the M2A1 Slammer. Compared to the basic version, it features heavier armor with reinforced rear of the tank and a remote-controlled turret fitted with 12.7 mm heavy machine gun. This weight increase had to be compensated somewhere - M2A4 is fitted with a less powerful 105 mm cannon compared to the 120 mm of the of the basic Slammer (the 6.5 mm coaxial machine gun is still present).";
		};
		model = "\A3\Armor_F_EPC\MBT_01\MBT_01_tusk_F.p3d";
		picture = "\A3\armor_f_gamma\MBT_01\Data\UI\Slammer_M2A1_Base_ca.paa";
		Icon = "\A3\armor_f_gamma\MBT_01\Data\ui\map_slammer_mk4_ca.paa";
		armor = 900;
		class HitPoints: HitPoints //inherits 5 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/HitPoints, sources - ["A3_Armor_F_EPC_MBT_01"]
		{
			class HitHull: HitHull //inherits 8 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/HitPoints/HitHull, sources - ["A3_Armor_F_EPC_MBT_01"]
			{
				armor = 1.2;
				explosionShielding = 0.1;
			};
			class HitFuel: HitFuel //inherits 8 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/HitPoints/HitFuel, sources - ["A3_Armor_F_EPC_MBT_01"]
			{
				armor = 0.5;
				explosionShielding = 0.2;
			};
			class HitEngine: HitEngine //inherits 8 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/HitPoints/HitEngine, sources - ["A3_Armor_F_EPC_MBT_01"]
			{
				armor = 0.7;
				explosionShielding = 0.1;
			};
			class HitLTrack: HitLTrack //inherits 8 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/HitPoints/HitLTrack, sources - ["A3_Armor_F_EPC_MBT_01"]
			{
				armor = 0.3;
				explosionShielding = 0.3;
			};
			class HitRTrack: HitRTrack //inherits 8 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/HitPoints/HitRTrack, sources - ["A3_Armor_F_EPC_MBT_01"]
			{
				armor = 0.3;
				explosionShielding = 0.3;
			};
		};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/Turrets, sources - ["A3_Armor_F_EPC_MBT_01"]
		{
			class MainTurret: MainTurret //inherits 30 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/Turrets/MainTurret, sources - ["A3_Armor_F_EPC_MBT_01"]
			{
				class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/Turrets/MainTurret/Turrets, sources - ["A3_Armor_F_EPC_MBT_01"]
				{
					class CommanderOptics: CommanderOptics //inherits 41 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/Turrets/MainTurret/Turrets/CommanderOptics, sources - ["A3_Armor_F_EPC_MBT_01"]
					{
						gunBeg = "commander_gun_muzzle_pos";
						gunEnd = "commander_gun_muzzle_end";
						memoryPointGun = "commander_gun_muzzle";
						selectionFireAnim = "commander_muzzleflash";
						minElev = -20;
						maxElev = 40;
						weapons[] = {"HMG_127_MBT", "SmokeLauncher"};
						magazines[] = {"500Rnd_127x99_mag_Tracer_Red", "500Rnd_127x99_mag_Tracer_Red", "SmokeLauncherMag"};
						discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
						discreteDistanceInitIndex = 2;
						turretInfoType = "RscOptics_MBT_01_commander_RCWS";
					};
				};
				weapons[] = {"cannon_105mm", "LMG_M200_body"};
				magazines[] = {"40Rnd_105mm_APFSDS_T_Red", "20Rnd_105mm_HEAT_MP_T_Red", "2000Rnd_65x39_belt", "2000Rnd_65x39_belt"};
				maxHorizontalRotSpeed = 1.6;
				maxVerticalRotSpeed = 1.6;
			};
		};
		class AnimationSources: AnimationSources //inherits 2 parameters from bin\config.bin/CfgVehicles/B_MBT_01_cannon_F/AnimationSources, sources - ["A3_Armor_F_EPC_MBT_01"]
		{
			class muzzle_hide_cannon //sources - ["A3_Armor_F_EPC_MBT_01"]
			{
				source = "reload";
				weapon = "cannon_105mm";
			};
			class muzzle_rot_cannon //sources - ["A3_Armor_F_EPC_MBT_01"]
			{
				source = "ammorandom";
				weapon = "cannon_105mm";
			};
			class muzzle_rot_cmdr //sources - ["A3_Armor_F_EPC_MBT_01"]
			{
				source = "ammorandom";
				weapon = "HMG_127_MBT";
			};
			class recoil_source //sources - ["A3_Armor_F_EPC_MBT_01"]
			{
				source = "reload";
				weapon = "cannon_105mm";
			};
			class commander_gun_recoil //sources - ["A3_Armor_F_EPC_MBT_01"]
			{
				source = "reload";
				weapon = "HMG_127_MBT";
			};
		};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_CO.paa", "A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_CO.paa", "a3\armor_f_epc\mbt_01\data\mbt_addons_co.paa"};
	};
	class MBT_01_arty_base_F: MBT_01_base_F //inherits 118 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F, sources - ["A3_Armor_F_Gamma_MBT_01"]
	{
		features = "Randomization: No						<br />Camo selections: 3 - hull, main turret, RCWS turret						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: None";
		author = "Bohemia Interactive";
		mapSize = 11.37;
		_generalMacro = "MBT_01_arty_base_F";
		weaponsGroup1 = 2;
		weaponsGroup2 = "1 + 		4";
		weaponsGroup3 = "8 + 	16 + 	32";
		weaponsGroup4 = "64 + 		128";
		displayName = "M4 Scorcher";
		class Library //sources - ["A3_Armor_F_Gamma_MBT_01"]
		{
			libTextDesc = "Based on the licensed version of an Israeli tank chassis, The Scorcher M4 is a 155 mm self-propelled artillery at the end of its lifetime cycle. It has modules allowing indirect fire, advanced artillery computer and is able to fire guided cannon ammunition. The rear of the tank was changed from a passenger transport space to ammunition storage. Scorcher is also equipped with a Remotely Controlled Weapon Systems turret fitted with 12.7 mm HMG and 40 mm GMG.";
		};
		model = "\A3\armor_f_gamma\MBT_01\MBT_01_arty_F";
		editorSubcategory = "EdSubcat_Artillery";
		picture = "\A3\Armor_F_Gamma\MBT_01\Data\UI\Slammer_Scorcher_M4_Base_ca.paa";
		Icon = "\A3\armor_f_gamma\MBT_01\Data\ui\map_Scorcher_M4_ca.paa";
		forceHideDriver = 0;
		transportSoldier = 0;
		maxFordingDepth = -1.15;
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		armorStructural = 4;
		artilleryScanner = 1;
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/Turrets, sources - ["A3_Armor_F_Gamma_MBT_01"]
		{
			class MainTurret: MainTurret //inherits 30 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/Turrets/MainTurret, sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/Turrets/MainTurret/Turrets, sources - ["A3_Armor_F_Gamma_MBT_01"]
				{
					class CommanderOptics: CommanderOptics //inherits 41 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/Turrets/MainTurret/Turrets/CommanderOptics, sources - ["A3_Armor_F_Gamma_MBT_01"]
					{
						gunBeg = "Usti hlavne";
						gunEnd = "Konec hlavne";
						memoryPointGun = "usti hlavne2";
						weapons[] = {"HMG_127_APC", "GMG_40mm", "SmokeLauncher"};
						magazines[] = {"96Rnd_40mm_G_belt", "500Rnd_127x99_mag_Tracer_Red", "SmokeLauncherMag"};
						gunnerAction = "mbt1_slot2_out";
						gunnerInAction = "mbt1_slot2_in";
						gunnerGetInAction = "GetInHigh";
						gunnerGetOutAction = "GetOutHigh";
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
						discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
						discreteDistanceInitIndex = 2;
						selectionFireAnim = "zasleh2";
						minElev = -25;
						initElev = 0;
						maxElev = 37;
						minOutElev = -10;
						maxOutElev = 15;
						initOutElev = 0;
						minOutTurn = -15;
						maxOutTurn = 175;
						initOutTurn = 0;
						class RCWSOptics;
						class ViewOptics: RCWSOptics //inherits 17 parameters from bin\config.bin/RCWSOptics, sources - []
						{
						};
						class OpticsIn //sources - ["A3_Armor_F_Gamma_MBT_01"]
						{
							class Wide: ViewOptics //inherits 0 parameters from bin\config.bin/CfgVehicles/MBT_01_arty_base_F/Turrets/MainTurret/Turrets/CommanderOptics/ViewOptics, sources - ["A3_Armor_F_Gamma_MBT_01"]
							{
								gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
							};
						};
						class HitPoints //sources - ["A3_Armor_F_Gamma_MBT_01"]
						{
							class HitTurret //sources - ["A3_Armor_F_Gamma_MBT_01"]
							{
								armor = 0.2;
								material = -1;
								name = "commander_turret_hit";
								visual = "commander_turret_hit";
								passThrough = 0;
								minimalHit = 0.1;
								explosionShielding = 0.2;
								radius = 0.3;
							};
							class HitGun //sources - ["A3_Armor_F_Gamma_MBT_01"]
							{
								armor = 0.1;
								material = -1;
								name = "commander_gun_hit";
								visual = "commander_gun_hit";
								passThrough = 0;
								minimalHit = 0.1;
								explosionShielding = 0.4;
								radius = 0.5;
							};
						};
					};
				};
				selectionFireAnim = "";
				forceHideGunner = 1;
				gunBeg = "Usti hlavne3";
				gunEnd = "Konec hlavne3";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner", 0.562341, 1, 30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical", 0.562341, 1, 30};
				weapons[] = {"mortar_155mm_AMOS"};
				magazines[] = {"32Rnd_155mm_Mo_shells", "2Rnd_155mm_Mo_guided", "2Rnd_155mm_Mo_guided", "6Rnd_155mm_Mo_mine", "2Rnd_155mm_Mo_Cluster", "6Rnd_155mm_Mo_smoke", "2Rnd_155mm_Mo_LG", "6Rnd_155mm_Mo_AT_mine"};
				minElev = -5;
				maxElev = 80;
				initElev = 10;
				elevationMode = 3;
				memoryPointGunnerOptics = "gunnerview";
				cameraDir = "look";
				turretInfoType = "RscWeaponRangeArtilleryAuto";
				gunnerForceOptics = 1;
				class OpticsIn: Optics_Gunner_MBT_01 //inherits 3 parameters from bin\config.bin/Optics_Gunner_MBT_01, sources - ["A3_Armor_F_Gamma_MBT_01"]
				{
					class Wide: Wide //inherits 1 parameters from bin\config.bin/Optics_Gunner_MBT_01/Wide, sources - ["A3_Armor_F_Gamma_MBT_01"]
					{
						gunnerOpticsModel = "\A3\Weapons_F\acc\reticle_mortar_01_f.p3d";
						initFov = 0.174;
						minFov = 0.0077778;
						maxFov = 0.14;
						visionMode[] = {"Normal", "NVG"};
					};
				};
				class HitPoints //sources - ["A3_Armor_F_Gamma_MBT_01"]
				{
					class HitTurret //sources - ["A3_Armor_F_Gamma_MBT_01"]
					{
						armor = 0.6;
						material = -1;
						name = "main_turret_hit";
						visual = "main_turret_hit";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.2;
						radius = 0.25;
					};
					class HitGun //sources - ["A3_Armor_F_Gamma_MBT_01"]
					{
						armor = 0.4;
						material = -1;
						name = "main_gun_hit";
						visual = "main_gun_hit";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.4;
						radius = 0.25;
					};
				};
			};
		};
		selectionFireAnim = "";
		class AnimationSources: AnimationSources //inherits 4 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/AnimationSources, sources - ["A3_Armor_F_Gamma_MBT_01"]
		{
			class recoil_source //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				source = "reload";
				weapon = "mortar_155mm_AMOS";
			};
			class muzzle_hide_arty //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				source = "reload";
				weapon = "mortar_155mm_AMOS";
			};
			class muzzle_rot_HMG //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				source = "ammorandom";
				weapon = "HMG_127_APC";
			};
			class muzzle_hide_HMG //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				source = "reload";
				weapon = "HMG_127_APC";
			};
			class muzzle_rot_GMG //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				source = "ammorandom";
				weapon = "GMG_40mm";
			};
			class muzzle_hide_GMG //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				source = "reload";
				weapon = "GMG_40mm";
			};
		};
		class Damage //sources - ["A3_Armor_F_Gamma_MBT_01"]
		{
			tex[] = {};
			mat[] = {"A3\armor_f_gamma\MBT_01\Data\MBT_01_body.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_body_damage.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_body_destruct.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_int.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_int_damage.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_int_destruct.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_tow.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_damage.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_destruct.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_track.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_track_damage.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_track_destruct.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_scorcher.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_scorcher_damage.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_scorcher_destruct.rvmat"};
		};
	};
	class B_MBT_01_arty_base_F: MBT_01_arty_base_F //inherits 24 parameters from bin\config.bin/CfgVehicles/MBT_01_arty_base_F, sources - ["A3_Armor_F_Gamma_MBT_01"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "B_MBT_01_arty_base_F";
		crew = "B_crew_F";
		typicalCargo[] = {"B_Soldier_F"};
		side = 1;
		faction = "BLU_F";
	};
	class B_MBT_01_arty_F: B_MBT_01_arty_base_F //inherits 6 parameters from bin\config.bin/CfgVehicles/B_MBT_01_arty_base_F, sources - ["A3_Armor_F_Gamma_MBT_01"]
	{
		author = "Bohemia Interactive";
		mapSize = 11.83;
		class SimpleObject //sources - ["A3_Armor_F_Gamma_MBT_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"wheel_koll1", 0}, {"wheel_kolol1", 0}, {"wheel_podkolol1", 0.34}, {"wheel_kolp1", 0}, {"wheel_kolop1", 0}, {"wheel_podkolop1", 0.34}, {"wheel_koll2", 0}, {"wheel_kolp2", 0}, {"wheel_kolol2", 0}, {"wheel_kolol3", 0}, {"wheel_kolol4", 0}, {"wheel_kolol5", 0}, {"wheel_kolol6", 0}, {"wheel_kolop2", 0}, {"wheel_kolop3", 0}, {"wheel_kolop4", 0}, {"wheel_kolop5", 0}, {"wheel_kolop6", 0}, {"wheel_podkolol2", 0.4}, {"wheel_podkolol3", 0.47}, {"wheel_podkolol4", 0.55}, {"wheel_podkolol5", 0.67}, {"wheel_podkolol6", 0.71}, {"wheel_podkolop2", 0.4}, {"wheel_podkolop3", 0.51}, {"wheel_podkolop4", 0.58}, {"wheel_podkolop5", 0.67}, {"wheel_podkolop6", 0.71}, {"podkolol1_hide_damage", 0}, {"podkolol2_hide_damage", 0}, {"podkolol3_hide_damage", 0}, {"podkolol4_hide_damage", 0}, {"podkolol5_hide_damage", 0}, {"podkolol6_hide_damage", 0}, {"podkolol7_hide_damage", 0}, {"podkolol8_hide_damage", 0}, {"podkolop1_hide_damage", 0}, {"podkolop2_hide_damage", 0}, {"podkolop3_hide_damage", 0}, {"podkolop4_hide_damage", 0}, {"podkolop5_hide_damage", 0}, {"podkolop6_hide_damage", 0}, {"podkolop7_hide_damage", 0}, {"podkolop8_hide_damage", 0}, {"damagevez", 0}, {"mainturret", 0}, {"maingun", 0.17}, {"hatchcommander", 0}, {"recoil", 0}, {"obsturret", 0}, {"obsgun", 0}, {"damagevezvelitele", 0}, {"poklop_commander_damage", 0}, {"poklop_driver_damage", 0}, {"hatchdriver", 0}, {"plates_1_y", 0}, {"plates_2_y", 0}, {"plates_1_x", 0}, {"plates_2_x", 0}, {"plates_1_bank", 0}, {"plates_2_bank", 0}, {"maingunoptics", 0.17}, {"zaslehrot_hmg", 0}, {"artillery_muzzle_flash", 0}, {"gmg_muzzle_flash", 0}, {"zaslehrot_gmg", 0}};
			hide[] = {"clan", "zasleh2", "light_l", "light_r", "zadni svetlo", "brzdove svetlo", "podsvit pristroju", "poskozeni"};
			verticalOffset = 2.862;
			verticalOffsetWorld = 0.029;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_MBT_01_arty_F.jpg";
		_generalMacro = "B_MBT_01_arty_F";
		scope = 2;
		hiddenSelectionsTextures[] = {"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_CO.paa", "A3\armor_f_gamma\MBT_01\data\MBT_01_scorcher_co.paa", "A3\Data_F\Vehicles\Turret_CO.paa"};
		availableForSupportTypes[] = {"Artillery"};
	};
	class MBT_01_mlrs_base_F: MBT_01_base_F //inherits 118 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F, sources - ["A3_Armor_F_Gamma_MBT_01"]
	{
		features = "Randomization: No						<br />Camo selections: 2 - hull, main turret						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: None";
		author = "Bohemia Interactive";
		class SpeechVariants //sources - ["A3_Armor_F_Gamma_MBT_01"]
		{
			class Default //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				speechSingular[] = {"veh_vehicle_armor_s"};
				speechPlural[] = {"veh_vehicle_armor_p"};
			};
		};
		textSingular = "armor";
		textPlural = "alpha victors";
		nameSound = "veh_vehicle_armor_s";
		_generalMacro = "MBT_01_mlrs_base_F";
		displayName = "M5 Sandstorm MLRS";
		class Library //sources - ["A3_Armor_F_Gamma_MBT_01"]
		{
			libTextDesc = "The Swedish Multiple Launch Rocket System is a replacement of the original U.S. MLRS platform. Built in 2021, it utilizes smaller rockets equipped with modern engines, resulting in longer range and better accuracy. The launch pod is mounted on a Slammer chassis and loads twelve 230 mm Titan missiles.";
		};
		model = "\A3\armor_f_gamma\MBT_01\MBT_01_mlrs_F";
		editorSubcategory = "EdSubcat_Artillery";
		picture = "\A3\Armor_F_Gamma\MBT_01\Data\UI\Slammer_MLRS_Base_ca.paa";
		Icon = "\A3\armor_f_gamma\MBT_01\Data\ui\map_mlrs_ca.paa";
		forceHideDriver = 0;
		transportSoldier = 0;
		armorStructural = 7;
		cost = 4e+006;
		weapons[] = {"SmokeLauncher"};
		magazines[] = {"SmokeLauncherMag"};
		class AnimationSources: AnimationSources //inherits 4 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/AnimationSources, sources - ["A3_Armor_F_Gamma_MBT_01"]
		{
			class Missiles_revolving //sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				source = "revolving";
				weapon = "rockets_230mm_GAT";
			};
		};
		artilleryScanner = 1;
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/Turrets, sources - ["A3_Armor_F_Gamma_MBT_01"]
		{
			class MainTurret: MainTurret //inherits 30 parameters from bin\config.bin/CfgVehicles/MBT_01_base_F/Turrets/MainTurret, sources - ["A3_Armor_F_Gamma_MBT_01"]
			{
				class Turrets //sources - []
				{
				};
				weapons[] = {"rockets_230mm_GAT"};
				magazines[] = {"12Rnd_230mm_rockets"};
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner", 0.562341, 1, 30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical", 0.562341, 1, 30};
				minElev = 5;
				maxElev = 85;
				initElev = 10;
				elevationMode = 3;
				memoryPointGunnerOptics = "computer";
				cameraDir = "look";
				gunnerOpticsModel = "\A3\Weapons_F\acc\reticle_Mortar_01_F.p3d";
				turretInfoType = "RscWeaponRangeArtilleryAuto";
				gunnerForceOptics = 1;
				forceHideGunner = 1;
				class OpticsIn: Optics_Gunner_MBT_01 //inherits 3 parameters from bin\config.bin/Optics_Gunner_MBT_01, sources - ["A3_Armor_F_Gamma_MBT_01"]
				{
					class Wide: Wide //inherits 1 parameters from bin\config.bin/Optics_Gunner_MBT_01/Wide, sources - ["A3_Armor_F_Gamma_MBT_01"]
					{
						gunnerOpticsModel = "\A3\Weapons_F\acc\reticle_Mortar_01_F.p3d";
						initFov = 0.174;
						minFov = 0.0077778;
						maxFov = 0.14;
						visionMode[] = {"Normal", "NVG", "TI"};
						thermalMode[] = {0, 1};
					};
				};
				class HitPoints //sources - ["A3_Armor_F_Gamma_MBT_01"]
				{
					class HitTurret //sources - ["A3_Armor_F_Gamma_MBT_01"]
					{
						armor = 0.4;
						material = -1;
						name = "main_turret_hit";
						visual = "main_turret_hit";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.4;
						radius = 0.25;
					};
					class HitGun //sources - ["A3_Armor_F_Gamma_MBT_01"]
					{
						armor = 0.2;
						material = -1;
						name = "main_gun_hit";
						visual = "main_gun_hit";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.6;
						radius = 0.25;
					};
				};
			};
		};
		class Damage //sources - ["A3_Armor_F_Gamma_MBT_01"]
		{
			tex[] = {};
			mat[] = {"A3\armor_f_gamma\MBT_01\Data\MBT_01_body.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_body_damage.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_body_destruct.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_int.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_int_damage.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_int_destruct.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_tow.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_damage.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_destruct.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_track.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_track_damage.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_track_destruct.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_mlrs.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_mlrs_damage.rvmat", "A3\armor_f_gamma\MBT_01\Data\MBT_01_mlrs_destruct.rvmat"};
		};
	};
	class B_MBT_01_mlrs_base_F: MBT_01_mlrs_base_F //inherits 23 parameters from bin\config.bin/CfgVehicles/MBT_01_mlrs_base_F, sources - ["A3_Armor_F_Gamma_MBT_01"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "B_MBT_01_mlrs_base_F";
		crew = "B_crew_F";
		typicalCargo[] = {"B_Soldier_F"};
		side = 1;
		faction = "BLU_F";
	};
	class B_MBT_01_mlrs_F: B_MBT_01_mlrs_base_F //inherits 6 parameters from bin\config.bin/CfgVehicles/B_MBT_01_mlrs_base_F, sources - ["A3_Armor_F_Gamma_MBT_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Armor_F_Gamma_MBT_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"wheel_koll1", 0}, {"wheel_kolol1", 0}, {"wheel_podkolol1", 0.38}, {"wheel_kolp1", 0}, {"wheel_kolop1", 0}, {"wheel_podkolop1", 0.41}, {"wheel_koll2", 0}, {"wheel_kolp2", 0}, {"wheel_kolol2", 0}, {"wheel_kolol3", 0}, {"wheel_kolol4", 0}, {"wheel_kolol5", 0}, {"wheel_kolol6", 0}, {"wheel_kolop2", 0}, {"wheel_kolop3", 0}, {"wheel_kolop4", 0}, {"wheel_kolop5", 0}, {"wheel_kolop6", 0}, {"wheel_podkolol2", 0.43}, {"wheel_podkolol3", 0.49}, {"wheel_podkolol4", 0.55}, {"wheel_podkolol5", 0.66}, {"wheel_podkolol6", 0.71}, {"wheel_podkolop2", 0.42}, {"wheel_podkolop3", 0.52}, {"wheel_podkolop4", 0.59}, {"wheel_podkolop5", 0.67}, {"wheel_podkolop6", 0.71}, {"podkolol1_hide_damage", 0}, {"podkolol2_hide_damage", 0}, {"podkolol3_hide_damage", 0}, {"podkolol4_hide_damage", 0}, {"podkolol5_hide_damage", 0}, {"podkolol6_hide_damage", 0}, {"podkolol7_hide_damage", 0}, {"podkolol8_hide_damage", 0}, {"podkolop1_hide_damage", 0}, {"podkolop2_hide_damage", 0}, {"podkolop3_hide_damage", 0}, {"podkolop4_hide_damage", 0}, {"podkolop5_hide_damage", 0}, {"podkolop6_hide_damage", 0}, {"podkolop7_hide_damage", 0}, {"podkolop8_hide_damage", 0}, {"damagevez", 0}, {"mainturret", 0}, {"maingun", 0.17}, {"damagevezvelitele", 0}, {"poklop_commander_damage", 0}, {"poklop_driver_damage", 0}, {"hatchdriver", 0}, {"plates_1_y", 0}, {"plates_2_y", 0}, {"plates_1_x", 0}, {"plates_2_x", 0}, {"plates_1_bank", 0}, {"plates_2_bank", 0}, {"elevator", 0.17}, {"elevator_piston", 0.17}, {"maingunoptics", 0.17}, {"maingunoptics_stabilization", 0.17}, {"hidemlrs_1", 1}, {"hidemlrs_2", 1}, {"hidemlrs_3", 1}, {"hidemlrs_4", 1}, {"hidemlrs_5", 1}, {"hidemlrs_6", 1}, {"hidemlrs_7", 1}, {"hidemlrs_8", 1}, {"hidemlrs_9", 1}, {"hidemlrs_10", 1}, {"hidemlrs_11", 1}, {"hidemlrs_12", 1}};
			hide[] = {"clan", "zasleh", "light_l", "light_r", "zadni svetlo", "brzdove svetlo", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.814;
			verticalOffsetWorld = 0.009;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_MBT_01_mlrs_F.jpg";
		_generalMacro = "B_MBT_01_mlrs_F";
		scope = 2;
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_CO.paa", "A3\armor_f_gamma\MBT_01\data\MBT_01_MLRS_co.paa"};
		availableForSupportTypes[] = {"Artillery"};
	};
	class MBT_02_base_F: Tank_F //inherits 83 parameters from bin\config.bin/CfgVehicles/Tank_F, sources - ["A3_Armor_F_Gamma_MBT_02"]
	{
		features = "Randomization: No						<br />Camo selections: 3 - hull, main turret, cannon and accessories						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: None";
		author = "Bohemia Interactive";
		mapSize = 11.62;
		_generalMacro = "MBT_02_base_F";
		displayName = "T-100 Varsuk";
		class Library //sources - ["A3_Armor_F_Gamma_MBT_02"]
		{
			libTextDesc = "A modernized version of the Russian T-95 MBT. The ongoing development of the new generation battle tank was restarted in 2016 thanks to revenues from the oil crisis. The new concept of battle tank is lower, lighter with increased maneuverability. The crew was moved from the turret to a more armored body of the tank resulting in increased survivability. The T-100 Varsuk comes with a standard 125 mm cannon, 7.62 mm coaxial machine gun and commander controlled NSVT-M 12.7 mm HMG.";
		};
		vehicleClass = "Armored";
		model = "\A3\armor_f_gamma\MBT_02\MBT_02_cannon_F";
		editorSubcategory = "EdSubcat_Tanks";
		memoryPointTaskMarker = "TaskMarker_1_pos";
		picture = "\A3\armor_f_gamma\MBT_02\Data\UI\MBT_02_Base_ca.paa";
		Icon = "\A3\armor_f_gamma\MBT_02\Data\UI\map_MBT_02_ca.paa";
		driverForceOptics = 1;
		driverAction = "driver_apcwheeled2_out";
		driverInAction = "driver_apcwheeled2_in";
		tracksSpeed = 1.35;
		wheelCircumference = 2.375;
		extCameraPosition[] = {0, 2.25, -9};
		maxFordingDepth = -0.75;
		waterResistance = 0;
		waterDamageEngine = 0.2;
		class ViewOptics: ViewOptics //inherits 3 parameters from bin\config.bin/CfgVehicles/Tank/ViewOptics, sources - ["A3_Armor_F_Gamma_MBT_02"]
		{
			visionMode[] = {"Normal", "NVG"};
		};
		class Exhausts //sources - ["A3_Armor_F_Gamma_MBT_02"]
		{
			class Exhaust1 //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustEffectTankBack";
			};
		};
		class Reflectors //sources - ["A3_Armor_F_Gamma_MBT_02"]
		{
			class Left //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				color[] = {1900, 1300, 950};
				ambient[] = {5, 5, 5};
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1;
				class Attenuation //sources - ["A3_Armor_F_Gamma_MBT_02"]
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class Right: Left //inherits 15 parameters from bin\config.bin/CfgVehicles/MBT_02_base_F/Reflectors/Left, sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
			class Right2: Right //inherits 4 parameters from bin\config.bin/CfgVehicles/MBT_02_base_F/Reflectors/Right, sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				position = "light_R_flare";
				useFlare = 1;
			};
			class Left2: Left //inherits 15 parameters from bin\config.bin/CfgVehicles/MBT_02_base_F/Reflectors/Left, sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				position = "light_L_flare";
				useFlare = 1;
			};
		};
		aggregateReflectors[] = {{"Left", "Right", "Left2", "Right2"}};
		smokeLauncherGrenadeCount = 8;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 120;
		armor = 600;
		armorStructural = 6;
		damageResistance = 0.00389;
		cost = 1.5e+006;
		crewVulnerable = 0;
		epeImpulseDamageCoef = 18;
		attenuationEffectType = "TankAttenuation";
		soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out", 0.562341, 1};
		soundGetOut[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out", 0.562341, 1, 20};
		soundTurnIn[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out", 1.77828, 1, 20};
		soundTurnOut[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out", 1.77828, 1, 20};
		soundTurnInInternal[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out", 1.77828, 1, 20};
		soundTurnOutInternal[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out", 1.77828, 1, 20};
		soundDammage[] = {"", 0.562341, 1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_start", 0.707946, 1};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_start", 0.630957, 1, 200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_stop", 0.707946, 1};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_stop", 0.630957, 1, 200};
		soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1", 0.177828, 1, 100};
		soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2", 0.177828, 1, 100};
		soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3", 0.177828, 1, 100};
		soundBushCrash[] = {"soundBushCollision1", 0.33, "soundBushCollision2", 0.33, "soundBushCollision3", 0.33};
		soundGeneralCollision1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_1", 1, 1, 100};
		soundGeneralCollision2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_2", 1, 1, 100};
		soundGeneralCollision3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_3", 1, 1, 100};
		soundGeneralCollision4[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_4", 1, 1, 100};
		soundCrashes[] = {"soundGeneralCollision1", 0.25, "soundGeneralCollision2", 0.25, "soundGeneralCollision3", 0.25, "soundGeneralCollision4", 0.25};
		buildCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_1", 1, 1, 200};
		buildCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_2", 1, 1, 200};
		buildCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_3", 1, 1, 200};
		buildCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_4", 1, 1, 200};
		soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
		WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_1", 1, 1, 200};
		WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_2", 1, 1, 200};
		WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_3", 1, 1, 200};
		WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_4", 1, 1, 200};
		soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166};
		ArmorCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_1", 1, 1, 250};
		ArmorCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_2", 1, 1, 250};
		ArmorCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_3", 1, 1, 250};
		ArmorCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_4", 1, 1, 250};
		soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
		class Sounds //sources - ["A3_Armor_F_Gamma_MBT_02"]
		{
			class Idle_ext //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_idle", 0.707946, 1, 200};
				frequency = "0.95	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
				volume = "engineOn*camPos*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
			};
			class Engine //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_rpm1", 0.794328, 1, 200};
				frequency = "0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
				volume = "engineOn*camPos*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
			};
			class Engine1_ext //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_rpm2", 0.794328, 1, 200};
				frequency = "0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
				volume = "engineOn*camPos*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
			};
			class Engine2_ext //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_rpm3", 0.891251, 1, 250};
				frequency = "0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
				volume = "engineOn*camPos*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
			};
			class Engine3_ext //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_rpm4", 1, 1, 300};
				frequency = "0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
				volume = "engineOn*camPos*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
			};
			class Engine4_ext //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_rpm5", 1.12202, 1, 340};
				frequency = "0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
				volume = "engineOn*camPos*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
			};
			class Engine5_ext //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_rpm6", 1.41254, 1, 400};
				frequency = "0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
				volume = "engineOn*camPos*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
			};
			class IdleThrust //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_idle", 0.891251, 1, 200};
				frequency = "0.8	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
			};
			class EngineThrust //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm1", 1.12202, 1, 200};
				frequency = "0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
			};
			class Engine1_Thrust_ext //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm2", 1.25893, 1, 200};
				frequency = "0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
			};
			class Engine2_Thrust_ext //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm3", 1.41254, 1, 250};
				frequency = "0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
			};
			class Engine3_Thrust_ext //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm4", 1.58489, 1, 350};
				frequency = "0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
			};
			class Engine4_Thrust_ext //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm5", 1.77828, 1, 400};
				frequency = "0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
			};
			class Engine5_Thrust_ext //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm6", 1.99526, 1, 450};
				frequency = "0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
			};
			class Idle_int //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_idle", 0.316228, 1};
				frequency = "0.8	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
			};
			class Engine_int //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm1", 0.354813, 1};
				frequency = "0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
			};
			class Engine1_int //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm2", 0.398107, 1};
				frequency = "0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
			};
			class Engine2_int //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm3", 0.446684, 1};
				frequency = "0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
			};
			class Engine3_int //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm4", 0.501187, 1};
				frequency = "0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
			};
			class Engine4_int //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm5", 0.562341, 1};
				frequency = "0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
			};
			class Engine5_int //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm6", 0.630957, 1};
				frequency = "0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
			};
			class IdleThrust_int //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_idle", 0.354813, 1};
				frequency = "0.8	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
			};
			class EngineThrust_int //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm1", 0.398107, 1};
				frequency = "0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
			};
			class Engine1_Thrust_int //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm2", 0.446684, 1};
				frequency = "0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
			};
			class Engine2_Thrust_int //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm3", 0.446684, 1};
				frequency = "0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
			};
			class Engine3_Thrust_int //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm4", 0.501187, 1};
				frequency = "0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
			};
			class Engine4_Thrust_int //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm5", 0.562341, 1};
				frequency = "0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
			};
			class Engine5_Thrust_int //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm6", 0.630957, 1};
				frequency = "0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
			};
			class NoiseInt //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1", 0.562341, 1};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 25])";
			};
			class NoiseExt //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1", 0.794328, 1, 150};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 25])";
			};
			class ThreadsOutH0 //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_01", 0.398107, 1, 140};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsOutH1 //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_02", 0.446684, 1, 160};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsOutH2 //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_03", 0.501187, 1, 180};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsOutH3 //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_04", 0.562341, 1, 200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsOutH4 //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_05", 0.562341, 1, 220};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsOutS0 //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_01", 0.316228, 1, 120};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsOutS1 //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_02", 0.354813, 1, 140};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsOutS2 //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_03", 0.398107, 1, 160};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsOutS3 //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_04", 0.446684, 1, 180};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsOutS4 //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_05", 0.501187, 1, 200};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsInH0 //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_01", 0.446684, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsInH1 //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_02", 0.446684, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsInH2 //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_03", 0.446684, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsInH3 //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_04", 0.501187, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsInH4 //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_05", 0.562341, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsInS0 //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_01", 0.354813, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsInS1 //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_02", 0.354813, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsInS2 //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_03", 0.398107, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsInS3 //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_04", 0.398107, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsInS4 //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_05", 0.446684, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class RainExt //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext", 1, 1, 100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int", 1, 1, 100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		simulation = "tankX";
		enginePower = 1118;
		maxOmega = 276;
		peakTorque = 4832;
		torqueCurve[] = {{"(700/2640)", 0}, {"(1600/2640)", "(2650/2850)"}, {"(1800/2640)", "(2800/2850)"}, {"(1900/2640)", "(2850/2850)"}, {"(2000/2640)", "(2800/2850)"}, {"(2200/2640)", "(2750/2850)"}, {"(2400/2640)", "(2600/2850)"}, {"(4900/2640)", "(0/2850)"}};
		thrustDelay = 0.5;
		clutchStrength = 90;
		fuelCapacity = 1885;
		brakeIdleSpeed = 1.78;
		latency = 0.1;
		tankTurnForce = 1.5e+006;
		normalSpeedForwardCoef = 0.82;
		idleRpm = 700;
		redRpm = 2640;
		engineLosses = 25;
		transmissionLosses = 15;
		changeGearMinEffectivity[] = {0.5, 0.15, 0.95, 0.95, 0.95, 0.95, 0.95, 0.95, 0.95, 0.95, 0.95, 0.95, 0.9, 0.9, 0.9, 0.9, 0.9};
		class complexGearbox //sources - ["A3_Armor_F_Gamma_MBT_02"]
		{
			GearboxRatios[] = {"R1", -2.235, "N", 0, "CD0", "2*(0.75^(-10))", "CD1", "2*(0.75^(-9))", "CD2", "2*(0.75^(-8))", "CD3", "2*(0.75^(-7))", "CD4", "2*(0.75^(-6))", "CD5", "2*(0.75^(-5))", "CD6", "2*(0.75^(-4))", "CD7", "2*(0.75^(-3))", "CD8", "2*(0.75^(-2))", "CD9", "2*(0.75^(-1))", "D1", "2*(0.75^0)", "D2", "2*(0.75^1)", "D3", "2*(0.75^2)", "D4", "2*(0.75^3)", "D5", "2*(0.75^4)"};
			TransmissionRatios[] = {"High", 11};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0;
		};
		class Wheels //sources - ["A3_Armor_F_Gamma_MBT_02"]
		{
			class L2 //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				boneName = "wheel_podkoloL1";
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				damping = 75;
				steering = 0;
				side = "left";
				weight = 150;
				mass = 150;
				MOI = 20;
				latStiffX = 25;
				latStiffY = 280;
				longitudinalStiffnessPerUnitGravity = 100000;
				maxBrakeTorque = 10000;
				sprungMass = 4000;
				springStrength = 324000;
				springDamperRate = 36000;
				dampingRate = 1;
				dampingRateInAir = 6575;
				dampingRateDamaged = 10;
				dampingRateDestroyed = 10000;
				maxDroop = 0.18;
				maxCompression = 0.18;
				frictionVsSlipGraph[] = {{0, 5}, {0.5, 5}, {1, 5}};
			};
			class L3: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/MBT_02_base_F/Wheels/L2, sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				boneName = "wheel_podkolol2";
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
			};
			class L4: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/MBT_02_base_F/Wheels/L2, sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				boneName = "wheel_podkolol3";
				center = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
			};
			class L5: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/MBT_02_base_F/Wheels/L2, sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				boneName = "wheel_podkolol4";
				center = "wheel_1_5_axis";
				boundary = "wheel_1_5_bound";
			};
			class L6: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/MBT_02_base_F/Wheels/L2, sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				boneName = "wheel_podkolol5";
				center = "wheel_1_6_axis";
				boundary = "wheel_1_6_bound";
			};
			class L7: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/MBT_02_base_F/Wheels/L2, sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				boneName = "wheel_podkolol6";
				center = "wheel_1_7_axis";
				boundary = "wheel_1_7_bound";
			};
			class L8: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/MBT_02_base_F/Wheels/L2, sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				boneName = "wheel_podkolol7";
				center = "wheel_1_8_axis";
				boundary = "wheel_1_8_bound";
			};
			class L9: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/MBT_02_base_F/Wheels/L2, sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				boneName = "wheel_podkolol9";
				center = "wheel_1_9_axis";
				boundary = "wheel_1_9_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class L1: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/MBT_02_base_F/Wheels/L2, sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				boneName = "";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class R2: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/MBT_02_base_F/Wheels/L2, sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				boneName = "wheel_podkolop1";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				side = "right";
			};
			class R3: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/MBT_02_base_F/Wheels/R2, sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				boneName = "wheel_podkolop2";
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
			};
			class R4: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/MBT_02_base_F/Wheels/R2, sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				boneName = "wheel_podkolop3";
				center = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
			};
			class R5: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/MBT_02_base_F/Wheels/R2, sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				boneName = "wheel_podkolop4";
				center = "wheel_2_5_axis";
				boundary = "wheel_2_5_bound";
			};
			class R6: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/MBT_02_base_F/Wheels/R2, sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				boneName = "wheel_podkolop5";
				center = "wheel_2_6_axis";
				boundary = "wheel_2_6_bound";
			};
			class R7: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/MBT_02_base_F/Wheels/R2, sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				boneName = "wheel_podkolop6";
				center = "wheel_2_7_axis";
				boundary = "wheel_2_7_bound";
			};
			class R8: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/MBT_02_base_F/Wheels/R2, sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				boneName = "wheel_podkolop7";
				center = "wheel_2_8_axis";
				boundary = "wheel_2_8_bound";
			};
			class R9: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/MBT_02_base_F/Wheels/R2, sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				boneName = "wheel_podkolop9";
				center = "wheel_2_9_axis";
				boundary = "wheel_2_9_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class R1: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/MBT_02_base_F/Wheels/R2, sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				boneName = "";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
		};
		class HitPoints: HitPoints //inherits 5 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints, sources - ["A3_Armor_F_Gamma_MBT_02"]
		{
			class HitHull: HitHull //inherits 7 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints/HitHull, sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				armor = 1.5;
				material = -1;
				name = "hull_hit";
				visual = "hull_hit";
				passThrough = 0;
				minimalHit = 0.25;
				explosionShielding = 0.2;
				radius = 0.2;
			};
			class HitFuel: HitFuel //inherits 7 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints/HitFuel, sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				armor = 0.4;
				material = -1;
				name = "engine_hit";
				visual = "";
				passThrough = 0;
				minimalHit = 0.1;
				explosionShielding = 0.3;
				radius = 0.3;
			};
			class HitEngine: HitEngine //inherits 7 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints/HitEngine, sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				armor = 0.6;
				material = -1;
				name = "engine_hit";
				visual = "";
				passThrough = 0;
				minimalHit = 0.25;
				explosionShielding = 0.2;
				radius = 0.3;
			};
			class HitLTrack: HitLTrack //inherits 7 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints/HitLTrack, sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				armor = 0.4;
				material = -1;
				name = "track_l_hit";
				visual = "track_l_hit";
				passThrough = 0;
				minimalHit = 0.15;
				explosionShielding = 0.4;
				radius = 0.3;
			};
			class HitRTrack: HitRTrack //inherits 7 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints/HitRTrack, sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				armor = 0.4;
				material = -1;
				name = "track_r_hit";
				visual = "track_r_hit";
				passThrough = 0;
				minimalHit = 0.15;
				explosionShielding = 0.4;
				radius = 0.3;
			};
		};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/Tank_F/Turrets, sources - ["A3_Armor_F_Gamma_MBT_02"]
		{
			class MainTurret: MainTurret //inherits 17 parameters from bin\config.bin/CfgVehicles/Tank_F/Turrets/MainTurret, sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/Tank_F/Turrets/MainTurret/Turrets, sources - ["A3_Armor_F_Gamma_MBT_02"]
				{
					class CommanderOptics: CommanderOptics //inherits 2 parameters from bin\config.bin/CfgVehicles/Tank_F/Turrets/MainTurret/Turrets/CommanderOptics, sources - ["A3_Armor_F_Gamma_MBT_02"]
					{
						body = "obsTurret";
						gun = "obsGun";
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						stabilizedInAxes = 3;
						maxHorizontalRotSpeed = 1.8;
						maxVerticalRotSpeed = 1.8;
						memoryPointGunnerOutOptics = "commanderview";
						memoryPointGunnerOptics = "commanderview";
						memoryPointGun = "usti hlavne2";
						gunBeg = "Usti hlavne2";
						gunEnd = "Konec hlavne2";
						minElev = -5;
						maxElev = 60;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						weapons[] = {"HMG_NSVT", "SmokeLauncher"};
						magazines[] = {"450Rnd_127x108_Ball", "450Rnd_127x108_Ball", "SmokeLauncherMag"};
						soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_comm", 1, 1, 30};
						soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_comm", 1, 1, 30};
						outGunnerMayFire = 0;
						inGunnerMayFire = 1;
						gunnerAction = "mbt2_slot2b_out";
						gunnerInAction = "mbt2_slot2b_in";
						gunnerGetInAction = "GetInHigh";
						gunnerGetOutAction = "GetOutHigh";
						discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
						discreteDistanceInitIndex = 2;
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel = "";
						gunnerOpticsEffect[] = {};
						class ViewOptics: ViewOptics //inherits 0 parameters from bin\config.bin/CfgVehicles/LandVehicle/CommanderOptics/ViewOptics, sources - ["A3_Armor_F_Gamma_MBT_02"]
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.155;
							minFov = 0.034;
							maxFov = 0.155;
							visionMode[] = {"Normal", "TI"};
							thermalMode[] = {4, 5};
						};
						class OpticsIn: Optics_Commander_02 //inherits 3 parameters from bin\config.bin/Optics_Commander_02, sources - ["A3_Armor_F_Gamma_MBT_02"]
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
						turretInfoType = "RscOptics_MBT_02_commander";
						showCrewAim = 1;
						startEngine = 0;
						gunnerHasFlares = 1;
						viewGunnerInExternal = 1;
						class HitPoints //sources - ["A3_Armor_F_Gamma_MBT_02"]
						{
							class HitTurret //sources - ["A3_Armor_F_Gamma_MBT_02"]
							{
								armor = 0.1;
								material = -1;
								name = "commander_turret_hit";
								visual = "commander_turret_hit";
								passThrough = 0;
								minimalHit = 0.1;
								explosionShielding = 1;
								radius = 0.3;
							};
							class HitGun //sources - ["A3_Armor_F_Gamma_MBT_02"]
							{
								armor = 0.1;
								material = -1;
								name = "commander_gun_hit";
								visual = "commander_gun_hit";
								passThrough = 0;
								minimalHit = 0.1;
								explosionShielding = 1;
								radius = 0.5;
							};
						};
						selectionFireAnim = "zasleh2";
					};
				};
				gunBeg = "Usti hlavne";
				gunEnd = "Konec hlavne";
				memoryPointGun = "usti hlavne3";
				selectionFireAnim = "zasleh";
				gunnerAction = "mbt2_slot2a_out";
				gunnerInAction = "mbt2_slot2a_in";
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner", 0.562341, 1, 50};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical", 0.562341, 1, 50};
				weapons[] = {"cannon_125mm", "LMG_coax"};
				magazines[] = {"24Rnd_125mm_APFSDS_T_Green", "12Rnd_125mm_HE_T_Green", "12Rnd_125mm_HEAT_T_Green", "2000Rnd_762x51_Belt_Green", "2000Rnd_762x51_Belt_Green"};
				forceHideGunner = 0;
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000};
				discreteDistanceInitIndex = 5;
				memoryPointGunnerOptics = "gunnerview";
				minElev = -5;
				maxElev = 20;
				initElev = 10;
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {};
				gunnerForceOptics = 1;
				startEngine = 0;
				inGunnerMayFire = 1;
				viewGunnerInExternal = 1;
				class OpticsIn: Optics_Gunner_MBT_02 //inherits 3 parameters from bin\config.bin/Optics_Gunner_MBT_02, sources - ["A3_Armor_F_Gamma_MBT_02"]
				{
					class Wide: Wide //inherits 2 parameters from bin\config.bin/Optics_Gunner_MBT_02/Wide, sources - []
					{
					};
					class Medium: Medium //inherits 2 parameters from bin\config.bin/Optics_Gunner_MBT_02/Medium, sources - []
					{
					};
					class Narrow: Narrow //inherits 2 parameters from bin\config.bin/Optics_Gunner_MBT_02/Narrow, sources - []
					{
					};
				};
				turretInfoType = "RscOptics_MBT_02_gunner";
				showCrewAim = 2;
				class HitPoints //sources - ["A3_Armor_F_Gamma_MBT_02"]
				{
					class HitTurret //sources - ["A3_Armor_F_Gamma_MBT_02"]
					{
						armor = 0.8;
						material = -1;
						name = "main_turret_hit";
						visual = "main_turret_hit";
						passThrough = 1;
						minimalHit = 0.1;
						explosionShielding = 0.2;
						radius = 0.3;
					};
					class HitGun //sources - ["A3_Armor_F_Gamma_MBT_02"]
					{
						armor = 0.6;
						material = -1;
						name = "main_gun_hit";
						visual = "main_gun_hit";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.4;
						radius = 0.15;
					};
				};
			};
		};
		class AnimationSources: AnimationSources //inherits 0 parameters from bin\config.bin/CfgVehicles/All/AnimationSources, sources - ["A3_Armor_F_Gamma_MBT_02"]
		{
			class muzzle_hide_cannon //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				source = "reload";
				weapon = "cannon_125mm";
			};
			class muzzle_rot_cannon //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				source = "ammorandom";
				weapon = "cannon_125mm";
			};
			class muzzle_rot_HMG //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				source = "ammorandom";
				weapon = "HMG_NSVT";
			};
			class recoil_source //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				source = "reload";
				weapon = "cannon_125mm";
			};
		};
		class Damage //sources - ["A3_Armor_F_Gamma_MBT_02"]
		{
			tex[] = {};
			mat[] = {"A3\Armor_F_Gamma\MBT_02\Data\MBT_02.rvmat", "A3\Armor_F_Gamma\MBT_02\Data\MBT_02_damage.rvmat", "A3\Armor_F_Gamma\MBT_02\Data\MBT_02_destruct.rvmat", "A3\Armor_F_Gamma\MBT_02\Data\MBT_02_body.rvmat", "A3\Armor_F_Gamma\MBT_02\Data\MBT_02_body_damage.rvmat", "A3\Armor_F_Gamma\MBT_02\Data\MBT_02_body_destruct.rvmat", "A3\Armor_F_Gamma\MBT_02\Data\MBT_02_tracks.rvmat", "A3\Armor_F_Gamma\MBT_02\Data\MBT_02_tracks_damage.rvmat", "A3\Armor_F_Gamma\MBT_02\Data\MBT_02_tracks_destruct.rvmat", "A3\Armor_F_Gamma\MBT_02\Data\MBT_02_turret.rvmat", "A3\Armor_F_Gamma\MBT_02\Data\MBT_02_turret_damage.rvmat", "A3\Armor_F_Gamma\MBT_02\Data\MBT_02_turret_destruct.rvmat", "A3\Armor_F_Gamma\MBT_01\Data\MBT_01_scorcher.rvmat", "A3\Armor_F_Gamma\MBT_01\Data\MBT_01_scorcher_damage.rvmat", "A3\Armor_F_Gamma\MBT_01\Data\MBT_01_scorcher_destruct.rvmat"};
		};
		class TransportMagazines //sources - ["A3_Armor_F_Gamma_MBT_02"]
		{
			class _xx_SmokeShell //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellRed //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_30Rnd_65x39_caseless_green //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				magazine = "30Rnd_65x39_caseless_green";
				count = 4;
			};
		};
		class TransportWeapons //sources - ["A3_Armor_F_Gamma_MBT_02"]
		{
			class _xx_arifle_Katiba_C_F //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				weapon = "arifle_Katiba_C_F";
				count = 2;
			};
		};
		class TransportItems //sources - ["A3_Armor_F_Gamma_MBT_02"]
		{
			class _xx_FirstAidKit //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
		numberPhysicalWheels = 18;
		class EventHandlers: EventHandlers //inherits 0 parameters from bin\config.bin/CfgVehicles/Tank_F/EventHandlers, sources - ["A3_Armor_F_Gamma_MBT_02"]
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """""""", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class MBT_02_arty_base_F: MBT_02_base_F //inherits 100 parameters from bin\config.bin/CfgVehicles/MBT_02_base_F, sources - ["A3_Armor_F_Gamma_MBT_02"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "MBT_02_arty_base_F";
		weaponsGroup1 = 2;
		weaponsGroup2 = "1 + 		4";
		weaponsGroup3 = "8 + 	16 + 	32";
		weaponsGroup4 = "64 + 		128";
		features = "Randomization: No						<br />Camo selections: 4 - hull, main turret, accessories, RCWS turret						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: None";
		displayName = "2S9 Sochor";
		model = "\A3\armor_f_gamma\MBT_02\MBT_02_arty_F";
		editorSubcategory = "EdSubcat_Artillery";
		picture = "\A3\armor_f_gamma\MBT_02\Data\ui\MBT_02_Arty_ca.paa";
		Icon = "\A3\armor_f_gamma\MBT_02\Data\ui\map_MBT_arty_ca.paa";
		class Library //sources - ["A3_Armor_F_Gamma_MBT_02"]
		{
			libTextDesc = "The 2S9 Sochor is a lightly armored self-propelled artillery piece used by the OPFOR army. It's based on the T-100 chassis and fires 155 mm projectiles. The T-100 chassis interior had to be heavily modified to allow support for the 155 mm cannon with auto-loader. Sochor is also equipped with a Remotely Controlled Weapon Systems turret fitted with 12.7 mm HMG and 40 mm GMG. The modification paid off and several Asian countries are now in the process of modernizing their heavy artillery division with the 2S9.";
		};
		transportSoldier = 0;
		armorStructural = 4.5;
		artilleryScanner = 1;
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/MBT_02_base_F/Turrets, sources - ["A3_Armor_F_Gamma_MBT_02"]
		{
			class MainTurret: MainTurret //inherits 29 parameters from bin\config.bin/CfgVehicles/MBT_02_base_F/Turrets/MainTurret, sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/MBT_02_base_F/Turrets/MainTurret/Turrets, sources - ["A3_Armor_F_Gamma_MBT_02"]
				{
					class CommanderOptics: CommanderOptics //inherits 42 parameters from bin\config.bin/CfgVehicles/MBT_02_base_F/Turrets/MainTurret/Turrets/CommanderOptics, sources - ["A3_Armor_F_Gamma_MBT_02"]
					{
						gunBeg = "Usti hlavne";
						gunEnd = "Konec hlavne";
						memoryPointGun = "usti hlavne2";
						weapons[] = {"HMG_127_APC", "GMG_40mm", "SmokeLauncher"};
						magazines[] = {"96Rnd_40mm_G_belt", "500Rnd_127x99_mag_Tracer_Green", "SmokeLauncherMag"};
						gunnerAction = "mbt2_slot2_out";
						gunnerInAction = "mbt2_slot2_in";
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
						discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
						discreteDistanceInitIndex = 2;
						turretInfoType = "RscWeaponRangeZeroing";
						selectionFireAnim = "zasleh2";
						minElev = -25;
						initElev = 0;
						maxElev = 37;
						isPersonTurret = 1;
						personTurretAction = "vehicle_turnout_1";
						minOutElev = -10;
						maxOutElev = 25;
						initOutElev = 0;
						minOutTurn = -15;
						maxOutTurn = 175;
						initOutTurn = 0;
						class RCWSOptics;
						class ViewOptics: RCWSOptics //inherits 17 parameters from bin\config.bin/RCWSOptics, sources - []
						{
						};
						class OpticsIn //sources - ["A3_Armor_F_Gamma_MBT_02"]
						{
							class Wide: ViewOptics //inherits 0 parameters from bin\config.bin/CfgVehicles/MBT_02_arty_base_F/Turrets/MainTurret/Turrets/CommanderOptics/ViewOptics, sources - ["A3_Armor_F_Gamma_MBT_02"]
							{
								gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
							};
						};
						class HitPoints //sources - ["A3_Armor_F_Gamma_MBT_02"]
						{
							class HitTurret //sources - ["A3_Armor_F_Gamma_MBT_02"]
							{
								armor = 0.2;
								material = -1;
								name = "commander_turret_hit";
								visual = "commander_turret_hit";
								passThrough = 0;
								minimalHit = 0.1;
								explosionShielding = 0.2;
								radius = 0.3;
							};
							class HitGun //sources - ["A3_Armor_F_Gamma_MBT_02"]
							{
								armor = 0.1;
								material = -1;
								name = "commander_gun_hit";
								visual = "commander_gun_hit";
								passThrough = 0;
								minimalHit = 0.1;
								explosionShielding = 0.4;
								radius = 0.5;
							};
						};
					};
				};
				selectionFireAnim = "";
				gunBeg = "Usti hlavne3";
				gunEnd = "Konec hlavne3";
				weapons[] = {"mortar_155mm_AMOS"};
				magazines[] = {"32Rnd_155mm_Mo_shells", "2Rnd_155mm_Mo_guided", "6Rnd_155mm_Mo_mine", "2Rnd_155mm_Mo_Cluster", "6Rnd_155mm_Mo_smoke", "2Rnd_155mm_Mo_LG", "2Rnd_155mm_Mo_LG", "6Rnd_155mm_Mo_AT_mine"};
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner", 0.562341, 1, 50};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical", 0.562341, 1, 50};
				minElev = -5;
				maxElev = 80;
				initElev = 10;
				elevationMode = 3;
				memoryPointGunnerOptics = "gunnerview";
				cameraDir = "look";
				turretInfoType = "RscWeaponRangeArtilleryAuto";
				gunnerForceOptics = 1;
				forceHideGunner = 1;
				commanding = 1;
				class OpticsIn: Optics_Gunner_MBT_02 //inherits 3 parameters from bin\config.bin/Optics_Gunner_MBT_02, sources - ["A3_Armor_F_Gamma_MBT_02"]
				{
					class Wide: Wide //inherits 2 parameters from bin\config.bin/Optics_Gunner_MBT_02/Wide, sources - ["A3_Armor_F_Gamma_MBT_02"]
					{
						gunnerOpticsModel = "\A3\Weapons_F\acc\reticle_mortar_01_f.p3d";
						initFov = 0.174;
						minFov = 0.0077778;
						maxFov = 0.14;
						visionMode[] = {"Normal", "NVG"};
					};
				};
				class HitPoints //sources - ["A3_Armor_F_Gamma_MBT_02"]
				{
					class HitTurret //sources - ["A3_Armor_F_Gamma_MBT_02"]
					{
						armor = 0.6;
						material = -1;
						name = "main_turret_hit";
						visual = "main_turret_hit";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.2;
						radius = 0.3;
					};
					class HitGun //sources - ["A3_Armor_F_Gamma_MBT_02"]
					{
						armor = 0.4;
						material = -1;
						name = "main_gun_hit";
						visual = "main_gun_hit";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.4;
						radius = 0.15;
					};
				};
			};
		};
		selectionFireAnim = "";
		class AnimationSources: AnimationSources //inherits 4 parameters from bin\config.bin/CfgVehicles/MBT_02_base_F/AnimationSources, sources - ["A3_Armor_F_Gamma_MBT_02"]
		{
			class recoil_source //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				source = "reload";
				weapon = "mortar_155mm_AMOS";
			};
			class muzzle_hide_arty //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				source = "reload";
				weapon = "mortar_155mm_AMOS";
			};
			class muzzle_rot_HMG //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				source = "ammorandom";
				weapon = "HMG_127_APC";
			};
			class muzzle_hide_HMG //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				source = "reload";
				weapon = "HMG_127_APC";
			};
			class muzzle_rot_GMG //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				source = "ammorandom";
				weapon = "GMG_40mm";
			};
			class muzzle_hide_GMG //sources - ["A3_Armor_F_Gamma_MBT_02"]
			{
				source = "reload";
				weapon = "GMG_40mm";
			};
		};
		availableForSupportTypes[] = {"Artillery"};
	};
	class O_MBT_02_base_F: MBT_02_base_F //inherits 100 parameters from bin\config.bin/CfgVehicles/MBT_02_base_F, sources - ["A3_Armor_F_Gamma_MBT_02"]
	{
		author = "Bohemia Interactive";
		mapSize = 10.31;
		_generalMacro = "O_MBT_02_base_F";
		side = 0;
		faction = "OPF_F";
		crew = "O_crew_F";
		typicalCargo[] = {"O_Soldier_F", "O_Soldier_F", "O_Soldier_F"};
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		class TextureSources //sources - ["A3_Armor_F_Gamma_MBT_02","A3_Armor_F_Exp_MBT_02"]
		{
			class Hex //sources - ["A3_Armor_F_Gamma_MBT_02","A3_Armor_F_Exp_MBT_02"]
			{
				author = "Bohemia Interactive";
				textures[] = {"a3\armor_f_gamma\mbt_02\data\mbt_02_body_co.paa", "a3\armor_f_gamma\mbt_02\data\mbt_02_turret_co.paa", "a3\armor_f_gamma\mbt_02\data\mbt_02_co.paa"};
				factions[] = {"OPF_F"};
				displayName = "Hex";
			};
			class GreenHex //sources - ["A3_Armor_F_Exp_MBT_02"]
			{
				displayName = "Green Hex";
				author = "Bohemia Interactive";
				textures[] = {"a3\Armor_F_Exp\MBT_02\Data\MBT_02_body_ghex_CO.paa", "a3\Armor_F_Exp\MBT_02\Data\MBT_02_turret_ghex_CO.paa", "a3\Armor_F_Exp\MBT_02\Data\MBT_02_ghex_CO.paa"};
				factions[] = {"OPF_T_F"};
			};
		};
		textureList[] = {"Hex", 1};
		hiddenSelectionsTextures[] = {"a3\armor_f_gamma\mbt_02\data\mbt_02_body_co.paa", "a3\armor_f_gamma\mbt_02\data\mbt_02_turret_co.paa", "a3\armor_f_gamma\mbt_02\data\mbt_02_co.paa"};
	};
	class O_MBT_02_cannon_F: O_MBT_02_base_F //inherits 11 parameters from bin\config.bin/CfgVehicles/O_MBT_02_base_F, sources - ["A3_Armor_F_Gamma_MBT_02"]
	{
		author = "Bohemia Interactive";
		mapSize = 10.72;
		class SimpleObject //sources - ["A3_Armor_F_Gamma_MBT_02"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"wheel_koll1", 0}, {"wheel_kolol1", 0}, {"wheel_podkolol1", 0.55}, {"wheel_kolp1", 0}, {"wheel_kolop1", 0}, {"wheel_podkolop1", 0.55}, {"wheel_koll2", 0}, {"wheel_kolp2", 0}, {"wheel_kolol2", 0}, {"wheel_kolol3", 0}, {"wheel_kolol4", 0}, {"wheel_kolol5", 0}, {"wheel_kolol6", 0}, {"wheel_kolol7", 0}, {"wheel_kolop2", 0}, {"wheel_kolop3", 0}, {"wheel_kolop4", 0}, {"wheel_kolop5", 0}, {"wheel_kolop6", 0}, {"wheel_kolop7", 0}, {"wheel_podkolol2", 0.53}, {"wheel_podkolol3", 0.51}, {"wheel_podkolol4", 0.52}, {"wheel_podkolol5", 0.53}, {"wheel_podkolol6", 0.51}, {"wheel_podkolop2", 0.53}, {"wheel_podkolop3", 0.55}, {"wheel_podkolop4", 0.54}, {"wheel_podkolop5", 0.53}, {"wheel_podkolop6", 0.51}, {"podkolol1_hide_damage", 0}, {"podkolol2_hide_damage", 0}, {"podkolol3_hide_damage", 0}, {"podkolol4_hide_damage", 0}, {"podkolol5_hide_damage", 0}, {"podkolol6_hide_damage", 0}, {"podkolol7_hide_damage", 0}, {"podkolol8_hide_damage", 0}, {"podkolop1_hide_damage", 0}, {"podkolop2_hide_damage", 0}, {"podkolop3_hide_damage", 0}, {"podkolop4_hide_damage", 0}, {"podkolop5_hide_damage", 0}, {"podkolop6_hide_damage", 0}, {"podkolop7_hide_damage", 0}, {"podkolop8_hide_damage", 0}, {"damagevez", 0}, {"mainturret", 0}, {"maingun", 0.17}, {"recoil", 0}, {"obsturret", 0}, {"obsgun", 0}, {"maingunoptics", 0.17}, {"wheel_podkolop7", 0.48}, {"wheel_podkolol7", 0.48}, {"hatchdriver", 0}, {"damagevezvelitele", 0}, {"poklop_commander_damage", 0}, {"poklop_gunner_damage", 0}, {"poklop_driver_damage", 0}, {"zaslehrot_hmg", 0}, {"recoil_2", 0}, {"zaslehrot_coax", 1236.38}, {"hatchcommanderup", 0}, {"hatchcommander", 0}, {"hatchgunnerup", 0}, {"hatchgunner", 0}, {"cannon_muzzle_flash", 0}, {"zaslehrot_cannon", 0}};
			hide[] = {"clan", "zasleh", "zasleh2", "light_l", "light_r", "zadni svetlo", "brzdove svetlo", "podsvit pristroju", "poskozeni"};
			verticalOffset = 2.198;
			verticalOffsetWorld = -0.01;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_MBT_02_cannon_F.jpg";
		_generalMacro = "O_MBT_02_cannon_F";
		scope = 2;
		textureList[] = {"Hex", 1};
	};
	class O_MBT_02_arty_base_F: MBT_02_arty_base_F //inherits 20 parameters from bin\config.bin/CfgVehicles/MBT_02_arty_base_F, sources - ["A3_Armor_F_Gamma_MBT_02"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "O_MBT_02_arty_base_F";
		side = 0;
		faction = "OPF_F";
		crew = "O_crew_F";
		typicalCargo[] = {"O_Soldier_F", "O_Soldier_F", "O_Soldier_F"};
		maxFordingDepth = -1.25;
		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		class TextureSources //sources - ["A3_Armor_F_Gamma_MBT_02","A3_Armor_F_Exp_MBT_02"]
		{
			class Hex //sources - ["A3_Armor_F_Gamma_MBT_02","A3_Armor_F_Exp_MBT_02"]
			{
				author = "Bohemia Interactive";
				textures[] = {"a3\armor_f_gamma\mbt_02\data\mbt_02_body_co.paa", "a3\armor_f_gamma\mbt_01\data\mbt_01_scorcher_hexarid_co.paa", "a3\armor_f_gamma\mbt_02\data\mbt_02_co.paa", "a3\data_f\vehicles\turret_opfor_co.paa"};
				factions[] = {"OPF_F"};
				displayName = "Hex";
			};
			class GreenHex //sources - ["A3_Armor_F_Exp_MBT_02"]
			{
				displayName = "Green Hex";
				author = "Bohemia Interactive";
				textures[] = {"a3\Armor_F_Exp\MBT_02\Data\MBT_02_body_ghex_CO.paa", "a3\Armor_F_Exp\MBT_02\Data\MBT_02_scorcher_ghex_CO.paa", "a3\Armor_F_Exp\MBT_02\Data\MBT_02_ghex_CO.paa", "a3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"};
				factions[] = {"OPF_T_F"};
			};
		};
		textureList[] = {"Hex", 1};
		hiddenSelectionsTextures[] = {"a3\armor_f_gamma\mbt_02\data\mbt_02_body_co.paa", "a3\armor_f_gamma\mbt_01\data\mbt_01_scorcher_hexarid_co.paa", "a3\armor_f_gamma\mbt_02\data\mbt_02_co.paa", "a3\data_f\vehicles\turret_opfor_co.paa"};
	};
	class O_MBT_02_arty_F: O_MBT_02_arty_base_F //inherits 11 parameters from bin\config.bin/CfgVehicles/O_MBT_02_arty_base_F, sources - ["A3_Armor_F_Gamma_MBT_02"]
	{
		author = "Bohemia Interactive";
		mapSize = 12.09;
		class SimpleObject //sources - ["A3_Armor_F_Gamma_MBT_02"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"wheel_koll1", 0}, {"wheel_kolol1", 0}, {"wheel_podkolol1", 0.48}, {"wheel_kolp1", 0}, {"wheel_kolop1", 0}, {"wheel_podkolop1", 0.48}, {"wheel_koll2", 0}, {"wheel_kolp2", 0}, {"wheel_kolol2", 0}, {"wheel_kolol3", 0}, {"wheel_kolol4", 0}, {"wheel_kolol5", 0}, {"wheel_kolol6", 0}, {"wheel_kolol7", 0}, {"wheel_kolop2", 0}, {"wheel_kolop3", 0}, {"wheel_kolop4", 0}, {"wheel_kolop5", 0}, {"wheel_kolop6", 0}, {"wheel_kolop7", 0}, {"wheel_podkolol2", 0.48}, {"wheel_podkolol3", 0.51}, {"wheel_podkolol4", 0.54}, {"wheel_podkolol5", 0.56}, {"wheel_podkolol6", 0.55}, {"wheel_podkolop2", 0.52}, {"wheel_podkolop3", 0.53}, {"wheel_podkolop4", 0.55}, {"wheel_podkolop5", 0.56}, {"wheel_podkolop6", 0.55}, {"podkolol1_hide_damage", 0}, {"podkolol2_hide_damage", 0}, {"podkolol3_hide_damage", 0}, {"podkolol4_hide_damage", 0}, {"podkolol5_hide_damage", 0}, {"podkolol6_hide_damage", 0}, {"podkolol7_hide_damage", 0}, {"podkolol8_hide_damage", 0}, {"podkolop1_hide_damage", 0}, {"podkolop2_hide_damage", 0}, {"podkolop3_hide_damage", 0}, {"podkolop4_hide_damage", 0}, {"podkolop5_hide_damage", 0}, {"podkolop6_hide_damage", 0}, {"podkolop7_hide_damage", 0}, {"podkolop8_hide_damage", 0}, {"damagevez", 0}, {"mainturret", 0}, {"maingun", 0.17}, {"hatchcommander", 0}, {"recoil", 0}, {"obsturret", 0}, {"obsgun", 0}, {"wheel_podkolop7", 0.54}, {"wheel_podkolol7", 0.51}, {"hatchdriver", 0}, {"damagevezvelitele", 0}, {"poklop_commander_damage", 0}, {"poklop_gunner_damage", 0}, {"poklop_driver_damage", 0}, {"zaslehrot_hmg", 0}, {"recoil_2", 0}, {"maingunoptics", 0.17}, {"artillery_muzzle_flash", 0}, {"gmg_muzzle_flash", 0}, {"zaslehrot_gmg", 0}};
			hide[] = {"clan", "zasleh2", "light_l", "light_r", "zadni svetlo", "brzdove svetlo", "podsvit pristroju", "poskozeni"};
			verticalOffset = 2.729;
			verticalOffsetWorld = 0.005;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_MBT_02_arty_F.jpg";
		_generalMacro = "O_MBT_02_arty_F";
		scope = 2;
		textureList[] = {"Hex", 1};
	};
	class MBT_03_base_F: Tank_F //inherits 83 parameters from bin\config.bin/CfgVehicles/Tank_F, sources - ["A3_Armor_F_EPB_MBT_03"]
	{
		features = "Randomization: No						<br />Camo selections: 3 - hull, main turret, RCWS turret						<br />Script door sources: None						<br />Script animations: HideHull, HideTurret						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: None";
		author = "Bohemia Interactive";
		mapSize = 11.44;
		_generalMacro = "MBT_03_base_F";
		simulation = "tankX";
		enginePower = 1325;
		maxOmega = 272;
		peakTorque = 5770;
		torqueCurve[] = {{"(700/2640)", 0}, {"(1600/2640)", "(2650/2850)"}, {"(1800/2640)", "(2800/2850)"}, {"(1900/2640)", "(2850/2850)"}, {"(2000/2640)", "(2800/2850)"}, {"(2200/2640)", "(2750/2850)"}, {"(2400/2640)", "(2600/2850)"}, {"(4900/2640)", "(0/2850)"}};
		thrustDelay = 0.2;
		clutchStrength = 90;
		fuelCapacity = 1885;
		brakeIdleSpeed = 1.78;
		latency = 0.1;
		tankTurnForce = 1.7e+006;
		normalSpeedForwardCoef = 0.78;
		idleRpm = 700;
		redRpm = 2600;
		engineLosses = 25;
		transmissionLosses = 15;
		changeGearMinEffectivity[] = {0.5, 0.15, 0.95, 0.95, 0.95, 0.95, 0.95, 0.95, 0.95, 0.95, 0.95, 0.95, 0.9, 0.9, 0.9, 0.9, 0.9};
		class complexGearbox //sources - ["A3_Armor_F_EPB_MBT_03"]
		{
			GearboxRatios[] = {"R1", -2.235, "N", 0, "CD0", "2*(0.75^(-10))", "CD1", "2*(0.75^(-9))", "CD2", "2*(0.75^(-8))", "CD3", "2*(0.75^(-7))", "CD4", "2*(0.75^(-6))", "CD5", "2*(0.75^(-5))", "CD6", "2*(0.75^(-4))", "CD7", "2*(0.75^(-3))", "CD8", "2*(0.75^(-2))", "CD9", "2*(0.75^(-1))", "D1", "2*(0.75^0)", "D2", "2*(0.75^1)", "D3", "2*(0.75^2)", "D4", "2*(0.75^3)"};
			TransmissionRatios[] = {"High", 8};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0;
		};
		class Wheels //sources - ["A3_Armor_F_EPB_MBT_03"]
		{
			class L2 //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				boneName = "wheel_podkoloL1";
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				damping = 75;
				steering = 0;
				side = "left";
				weight = 150;
				mass = 150;
				MOI = 30;
				latStiffX = 25;
				latStiffY = 280;
				longitudinalStiffnessPerUnitGravity = 100000;
				maxBrakeTorque = 10000;
				sprungMass = 4642;
				springStrength = 324000;
				springDamperRate = 36000;
				dampingRate = 1;
				dampingRateInAir = 5990;
				dampingRateDamaged = 10;
				dampingRateDestroyed = 10000;
				maxDroop = 0.18;
				maxCompression = 0.18;
				frictionVsSlipGraph[] = {{0, 5}, {0.5, 5}, {1, 5}};
			};
			class L3: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/MBT_03_base_F/Wheels/L2, sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				boneName = "wheel_podkolol2";
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
			};
			class L4: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/MBT_03_base_F/Wheels/L2, sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				boneName = "wheel_podkolol3";
				center = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
			};
			class L5: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/MBT_03_base_F/Wheels/L2, sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				boneName = "wheel_podkolol4";
				center = "wheel_1_5_axis";
				boundary = "wheel_1_5_bound";
			};
			class L6: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/MBT_03_base_F/Wheels/L2, sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				boneName = "wheel_podkolol5";
				center = "wheel_1_6_axis";
				boundary = "wheel_1_6_bound";
			};
			class L7: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/MBT_03_base_F/Wheels/L2, sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				boneName = "wheel_podkolol6";
				center = "wheel_1_7_axis";
				boundary = "wheel_1_7_bound";
			};
			class L8: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/MBT_03_base_F/Wheels/L2, sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				boneName = "wheel_podkolol7";
				center = "wheel_1_8_axis";
				boundary = "wheel_1_8_bound";
			};
			class L9: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/MBT_03_base_F/Wheels/L2, sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				boneName = "wheel_podkolol9";
				center = "wheel_1_9_axis";
				boundary = "wheel_1_9_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class L1: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/MBT_03_base_F/Wheels/L2, sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				boneName = "";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class R2: L2 //inherits 23 parameters from bin\config.bin/CfgVehicles/MBT_03_base_F/Wheels/L2, sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				boneName = "wheel_podkolop1";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				side = "right";
			};
			class R3: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/MBT_03_base_F/Wheels/R2, sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				boneName = "wheel_podkolop2";
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
			};
			class R4: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/MBT_03_base_F/Wheels/R2, sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				boneName = "wheel_podkolop3";
				center = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
			};
			class R5: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/MBT_03_base_F/Wheels/R2, sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				boneName = "wheel_podkolop4";
				center = "wheel_2_5_axis";
				boundary = "wheel_2_5_bound";
			};
			class R6: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/MBT_03_base_F/Wheels/R2, sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				boneName = "wheel_podkolop5";
				center = "wheel_2_6_axis";
				boundary = "wheel_2_6_bound";
			};
			class R7: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/MBT_03_base_F/Wheels/R2, sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				boneName = "wheel_podkolop6";
				center = "wheel_2_7_axis";
				boundary = "wheel_2_7_bound";
			};
			class R8: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/MBT_03_base_F/Wheels/R2, sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				boneName = "wheel_podkolop7";
				center = "wheel_2_8_axis";
				boundary = "wheel_2_8_bound";
			};
			class R9: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/MBT_03_base_F/Wheels/R2, sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				boneName = "wheel_podkolop9";
				center = "wheel_2_9_axis";
				boundary = "wheel_2_9_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class R1: R2 //inherits 4 parameters from bin\config.bin/CfgVehicles/MBT_03_base_F/Wheels/R2, sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				boneName = "";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
		};
		editorSubcategory = "EdSubcat_Tanks";
		scope = 0;
		maxSpeed = 60;
		maxFordingDepth = -1.5;
		steerAheadSimul = 0.5;
		steerAheadPlan = 0.35;
		predictTurnPlan = 2.8;
		predictTurnSimul = 2.6;
		brakeDistance = 15;
		precision = 5;
		transportSoldier = 0;
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		cargoAction[] = {"passenger_flatground_leanleft", "passenger_flatground_generic01", "passenger_flatground_generic02", "passenger_flatground_generic03", "passenger_flatground_generic04", "passenger_flatground_generic05"};
		waterResistance = 3;
		waterDamageEngine = 0.1;
		wheelCircumference = 2.25;
		tracksSpeed = -1;
		driverAction = "driver_apctracked3_out";
		driverInAction = "driver_apctracked3_in";
		extCameraPosition[] = {0, 2.25, -9};
		forceHideDriver = 1;
		class ViewOptics: ViewOptics //inherits 3 parameters from bin\config.bin/CfgVehicles/Tank/ViewOptics, sources - ["A3_Armor_F_EPB_MBT_03"]
		{
			visionMode[] = {"Normal", "NVG"};
		};
		armor = 800;
		armorLights = 0.1;
		armorStructural = 6;
		damageResistance = 0.00547;
		cost = 2.5e+006;
		crewVulnerable = 0;
		epeImpulseDamageCoef = 18;
		model = "\A3\Armor_F_EPB\MBT_03\MBT_03_cannon_F.p3d";
		picture = "\A3\Armor_F_EPB\MBT_03\Data\UI\MBT_03_Ca.paa";
		icon = "\A3\Armor_F_EPB\MBT_03\Data\UI\map_MBT_03_Ca.paa";
		memoryPointTaskMarker = "TaskMarker_1_pos";
		class HitPoints: HitPoints //inherits 5 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints, sources - ["A3_Armor_F_EPB_MBT_03"]
		{
			class HitHull: HitHull //inherits 7 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints/HitHull, sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				armor = 1.3;
				material = -1;
				name = "telo";
				visual = "zbytek";
				passThrough = 0;
				minimalHit = 0.2;
				explosionShielding = 0.2;
				radius = 0.3;
			};
			class HitFuel: HitFuel //inherits 7 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints/HitFuel, sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				armor = 0.4;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0;
				minimalHit = 0.1;
				explosionShielding = 0.3;
				radius = 0.3;
			};
			class HitEngine: HitEngine //inherits 7 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints/HitEngine, sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				armor = 0.6;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0;
				minimalHit = 0.2;
				explosionShielding = 0.2;
				radius = 0.3;
			};
			class HitLTrack: HitLTrack //inherits 7 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints/HitLTrack, sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				armor = 0.3;
				material = -1;
				name = "pas_L";
				visual = "pas_L";
				passThrough = 0;
				minimalHit = 0.15;
				explosionShielding = 0.4;
				radius = 0.3;
			};
			class HitRTrack: HitRTrack //inherits 7 parameters from bin\config.bin/CfgVehicles/Tank_F/HitPoints/HitRTrack, sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				armor = 0.3;
				material = -1;
				name = "pas_P";
				visual = "pas_P";
				passThrough = 0;
				minimalHit = 0.15;
				explosionShielding = 0.4;
				radius = 0.3;
			};
		};
		class EventHandlers: EventHandlers //inherits 0 parameters from bin\config.bin/CfgVehicles/Tank_F/EventHandlers, sources - ["A3_Armor_F_EPB_MBT_03"]
		{
			init = "if (local (_this select 0)) then {{(_this select 0) animate [_x,(random 1)]} forEach ['HideHull','HideTurret']}";
		};
		class Exhausts //sources - ["A3_Armor_F_EPB_MBT_03"]
		{
			class Exhaust1 //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustEffectTankSide";
			};
			class Exhaust2 //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				position = "exhaust2";
				direction = "exhaust_dir2";
				effect = "ExhaustEffectTankSide";
			};
		};
		insideSoundCoef = 0.9;
		threat[] = {1, 1, 0.3};
		attenuationEffectType = "TankAttenuation";
		soundGetIn[] = {"A3\Sounds_F_EPB\Tracked\noises\get_in_out", 0.562341, 1};
		soundGetOut[] = {"A3\Sounds_F_EPB\Tracked\noises\get_in_out", 0.562341, 1, 20};
		soundTurnIn[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out", 1.77828, 1, 20};
		soundTurnOut[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out", 1.77828, 1, 20};
		soundTurnInInternal[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out", 1.77828, 1, 20};
		soundTurnOutInternal[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out", 1.77828, 1, 20};
		soundDammage[] = {"", 0.562341, 1};
		soundEngineOnInt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\epb_2_int_start", 0.630957, 1};
		soundEngineOnExt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\epb_2_ext_start", 0.794328, 1, 200};
		soundEngineOffInt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\epb_2_int_stop", 0.630957, 1};
		soundEngineOffExt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\epb_2_ext_stop", 0.794328, 1, 200};
		buildCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1, 1, 200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1, 1, 200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1, 1, 200};
		buildCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1, 1, 200};
		soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1, 1, 200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1, 1, 200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1, 1, 200};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1, 1, 200};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\crashes\crash_01", 1, 1, 200};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1, 1, 200};
		soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166, "woodCrash4", 0.166, "woodCrash5", 0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1, 1, 200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1, 1, 200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1, 1, 200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1, 1, 200};
		soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
		class Sounds //sources - ["A3_Armor_F_EPB_MBT_03"]
		{
			class Idle_ext //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_1", 0.794328, 1, 200};
				frequency = "0.95	+	((rpm/	2600) factor[(400/	2600),(750/	2600)])*0.15";
				volume = "engineOn*camPos*(((rpm/	2600) factor[(100/	2600),(200/	2600)])	*	((rpm/	2600) factor[(850/	2600),(700/	2600)]))";
			};
			class Engine //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_2", 0.891251, 1, 240};
				frequency = "0.8	+	((rpm/	2600) factor[(620/	2600),(910/	2600)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2600) factor[(720/	2600),(790/	2600)])	*	((rpm/	2600) factor[(950/	2600),(850/	2600)]))";
			};
			class Engine1_ext //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_3", 1.12202, 1, 280};
				frequency = "0.8	+	((rpm/	2600) factor[(800/	2600),(1150/	2600)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2600) factor[(830/	2600),(940/	2600)])	*	((rpm/	2600) factor[(1200/	2600),(1000/	2600)]))";
			};
			class Engine2_ext //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_4", 1.25893, 1, 320};
				frequency = "0.8	+	((rpm/	2600) factor[(960/	2600),(1500/	2600)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2600) factor[(950/	2600),(1100/	2600)])	*	((rpm/	2600) factor[(1500/	2600),(1250/	2600)]))";
			};
			class Engine3_ext //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_5", 1.41254, 1, 360};
				frequency = "0.8	+	((rpm/	2600) factor[(1200/	2600),(1700/	2600)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2600) factor[(1250/	2600),(1450/	2600)])	*	((rpm/	2600) factor[(1700/	2600),(1560/	2600)]))";
			};
			class Engine4_ext //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_6", 1.58489, 1, 400};
				frequency = "0.8	+	((rpm/	2600) factor[(1520/	2600),(2000/	2600)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2600) factor[(1570/	2600),(1670/	2600)])	*	((rpm/	2600) factor[(2200/	2600),(1900/	2600)]))";
			};
			class Engine5_ext //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_7", 1.77828, 1, 440};
				frequency = "0.8	+	((rpm/	2600) factor[(1800/	2600),(2300/	2600)])*0.1";
				volume = "engineOn*camPos*((rpm/	2600) factor[(1950/	2600),(2170/	2600)])";
			};
			class IdleThrust //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_1", 1.12202, 1, 200};
				frequency = "0.8	+	((rpm/	2600) factor[(400/	2600),(750/	2600)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(100/	2600),(200/	2600)])	*	((rpm/	2600) factor[(850/	2600),(700/	2600)]))";
			};
			class EngineThrust //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_2", 1.41254, 1, 200};
				frequency = "0.8	+	((rpm/	2600) factor[(620/	2600),(910/	2600)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(720/	2600),(790/	2600)])	*	((rpm/	2600) factor[(950/	2600),(850/	2600)]))";
			};
			class Engine1_Thrust_ext //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_3", 1.77828, 1, 230};
				frequency = "0.8	+	((rpm/	2600) factor[(800/	2600),(1150/	2600)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(830/	2600),(940/	2600)])	*	((rpm/	2600) factor[(1200/	2600),(1000/	2600)]))";
			};
			class Engine2_Thrust_ext //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_4", 1.99526, 1, 290};
				frequency = "0.8	+	((rpm/	2600) factor[(960/	2600),(1500/	2600)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(950/	2600),(1100/	2600)])	*	((rpm/	2600) factor[(1500/	2600),(1250/	2600)]))";
			};
			class Engine3_Thrust_ext //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_5", 1.77828, 1, 350};
				frequency = "0.8	+	((rpm/	2600) factor[(1200/	2600),(1700/	2600)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(1250/	2600),(1450/	2600)])	*	((rpm/	2600) factor[(1700/	2600),(1560/	2600)]))";
			};
			class Engine4_Thrust_ext //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_6", 2.23872, 1, 400};
				frequency = "0.8	+	((rpm/	2600) factor[(1520/	2600),(2000/	2600)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(1570/	2600),(1670/	2600)])	*	((rpm/	2600) factor[(2200/	2600),(1900/	2600)]))";
			};
			class Engine5_Thrust_ext //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_7", 2.51189, 1, 450};
				frequency = "0.8	+	((rpm/	2600) factor[(1800/	2600),(2300/	2600)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2600) factor[(1950/	2600),(2170/	2600)])";
			};
			class Idle_int //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_1", 0.501187, 1};
				frequency = "0.8	+	((rpm/	2600) factor[(400/	2600),(750/	2600)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	2600) factor[(100/	2600),(200/	2600)])	*	((rpm/	2600) factor[(850/	2600),(700/	2600)]))";
			};
			class Engine_int //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_2", 0.354813, 1};
				frequency = "0.8	+	((rpm/	2600) factor[(620/	2600),(910/	2600)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2600) factor[(720/	2600),(790/	2600)])	*	((rpm/	2600) factor[(950/	2600),(850/	2600)]))";
			};
			class Engine1_int //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_3", 0.398107, 1};
				frequency = "0.8	+	((rpm/	2600) factor[(800/	2600),(1150/	2600)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2600) factor[(830/	2600),(940/	2600)])	*	((rpm/	2600) factor[(1200/	2600),(1000/	2600)]))";
			};
			class Engine2_int //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_4", 0.446684, 1};
				frequency = "0.8	+	((rpm/	2600) factor[(960/	2600),(1500/	2600)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2600) factor[(950/	2600),(1100/	2600)])	*	((rpm/	2600) factor[(1500/	2600),(1250/	2600)]))";
			};
			class Engine3_int //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_5", 0.501187, 1};
				frequency = "0.8	+	((rpm/	2600) factor[(1200/	2600),(1700/	2600)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2600) factor[(1250/	2600),(1450/	2600)])	*	((rpm/	2600) factor[(1700/	2600),(1560/	2600)]))";
			};
			class Engine4_int //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_6", 0.562341, 1};
				frequency = "0.8	+	((rpm/	2600) factor[(1520/	2600),(2000/	2600)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2600) factor[(1570/	2600),(1670/	2600)])	*	((rpm/	2600) factor[(2200/	2600),(1900/	2600)]))";
			};
			class Engine5_int //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_7", 0.630957, 1};
				frequency = "0.8	+	((rpm/	2600) factor[(1800/	2600),(2300/	2600)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	2600) factor[(1950/	2600),(2170/	2600)])";
			};
			class IdleThrust_int //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_1", 0.630957, 1};
				frequency = "0.8	+	((rpm/	2600) factor[(400/	2600),(750/	2600)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(100/	2600),(200/	2600)])	*	((rpm/	2600) factor[(850/	2600),(700/	2600)]))";
			};
			class EngineThrust_int //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_2", 0.398107, 1};
				frequency = "0.8	+	((rpm/	2600) factor[(620/	2600),(910/	2600)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(720/	2600),(790/	2600)])	*	((rpm/	2600) factor[(950/	2600),(850/	2600)]))";
			};
			class Engine1_Thrust_int //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_3", 0.446684, 1};
				frequency = "0.8	+	((rpm/	2600) factor[(800/	2600),(1150/	2600)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(830/	2600),(940/	2600)])	*	((rpm/	2600) factor[(1200/	2600),(1000/	2600)]))";
			};
			class Engine2_Thrust_int //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_4", 0.446684, 1};
				frequency = "0.8	+	((rpm/	2600) factor[(960/	2600),(1500/	2600)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(950/	2600),(1100/	2600)])	*	((rpm/	2600) factor[(1500/	2600),(1250/	2600)]))";
			};
			class Engine3_Thrust_int //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_5", 0.501187, 1};
				frequency = "0.8	+	((rpm/	2600) factor[(1200/	2600),(1700/	2600)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(1250/	2600),(1450/	2600)])	*	((rpm/	2600) factor[(1700/	2600),(1560/	2600)]))";
			};
			class Engine4_Thrust_int //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_6", 0.562341, 1};
				frequency = "0.8	+	((rpm/	2600) factor[(1520/	2600),(2000/	2600)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(1570/	2600),(1670/	2600)])	*	((rpm/	2600) factor[(2200/	2600),(1900/	2600)]))";
			};
			class Engine5_Thrust_int //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_7", 0.630957, 1};
				frequency = "0.8	+	((rpm/	2600) factor[(1800/	2600),(2300/	2600)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2600) factor[(1950/	2600),(2170/	2600)])";
			};
			class NoiseInt //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\noises\noise_tank_int_1", 0.501187, 1};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\noises\noise_tank_ext_1", 0.891251, 1, 50};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0 //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_1", 0.398107, 1, 140};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-0) max 0)/	65),(((-5) max 5)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-15) max 15)/	65),(((-10) max 10)/	65)]))";
			};
			class ThreadsOutH1 //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_2", 0.446684, 1, 160};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-11) max 11)/	65),(((-15) max 15)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-25) max 25)/	65),(((-20) max 20)/	65)]))";
			};
			class ThreadsOutH2 //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_3", 0.501187, 1, 180};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-21) max 21)/	65),(((-25) max 25)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-35) max 35)/	65),(((-30) max 30)/	65)]))";
			};
			class ThreadsOutH3 //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_4", 0.562341, 1, 200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-31) max 31)/	65),(((-35) max 35)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-45) max 45)/	65),(((-40) max 40)/	65)]))";
			};
			class ThreadsOutH4 //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_5", 0.562341, 1, 220};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	65) factor[(((-41) max 41)/	65),(((-50) max 50)/	65)])";
			};
			class ThreadsOutS0 //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_1", 0.316228, 1, 120};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-0) max 0)/	65),(((-5) max 5)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-15) max 15)/	65),(((-10) max 10)/	65)]))";
			};
			class ThreadsOutS1 //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_2", 0.354813, 1, 140};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-11) max 11)/	65),(((-15) max 15)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-25) max 25)/	65),(((-20) max 20)/	65)]))";
			};
			class ThreadsOutS2 //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_3", 0.398107, 1, 160};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-21) max 21)/	65),(((-25) max 25)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-35) max 35)/	65),(((-30) max 30)/	65)]))";
			};
			class ThreadsOutS3 //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_4", 0.446684, 1, 180};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-31) max 31)/	65),(((-35) max 35)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-45) max 45)/	65),(((-40) max 40)/	65)]))";
			};
			class ThreadsOutS4 //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_5", 0.501187, 1, 200};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	65) factor[(((-41) max 41)/	65),(((-50) max 50)/	65)])";
			};
			class ThreadsInH0 //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_1", 0.251189, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-0) max 0)/	65),(((-5) max 5)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-15) max 15)/	65),(((-10) max 10)/	65)]))";
			};
			class ThreadsInH1 //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_2", 0.281838, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-11) max 11)/	65),(((-15) max 15)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-25) max 25)/	65),(((-20) max 20)/	65)]))";
			};
			class ThreadsInH2 //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_3", 0.316228, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-21) max 21)/	65),(((-25) max 25)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-35) max 35)/	65),(((-30) max 30)/	65)]))";
			};
			class ThreadsInH3 //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_4", 0.354813, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-31) max 31)/	65),(((-35) max 35)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-45) max 45)/	65),(((-40) max 40)/	65)]))";
			};
			class ThreadsInH4 //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_5", 0.398107, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	65) factor[(((-41) max 41)/	65),(((-50) max 50)/	65)])";
			};
			class ThreadsInS0 //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_1", 0.316228, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-0) max 0)/	65),(((-5) max 5)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-15) max 15)/	65),(((-10) max 10)/	65)]))";
			};
			class ThreadsInS1 //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_2", 0.316228, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-11) max 11)/	65),(((-15) max 15)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-25) max 25)/	65),(((-20) max 20)/	65)]))";
			};
			class ThreadsInS2 //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_3", 0.354813, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-21) max 21)/	65),(((-25) max 25)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-35) max 35)/	65),(((-30) max 30)/	65)]))";
			};
			class ThreadsInS3 //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_4", 0.354813, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-31) max 31)/	65),(((-35) max 35)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-45) max 45)/	65),(((-40) max 40)/	65)]))";
			};
			class ThreadsInS4 //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_5", 0.398107, 1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	65) factor[(((-41) max 41)/	65),(((-50) max 50)/	65)])";
			};
			class RainExt //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext", 1, 1, 100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int", 1, 1, 100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		class Reflectors //sources - ["A3_Armor_F_EPB_MBT_03"]
		{
			class Left //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				color[] = {1900, 1800, 1700};
				ambient[] = {5, 5, 5};
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1;
				class Attenuation //sources - ["A3_Armor_F_EPB_MBT_03"]
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class Right: Left //inherits 15 parameters from bin\config.bin/CfgVehicles/MBT_03_base_F/Reflectors/Left, sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
		};
		aggregateReflectors[] = {{"Left", "Right"}};
		smokeLauncherGrenadeCount = 16;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 360;
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/Tank_F/Turrets, sources - ["A3_Armor_F_EPB_MBT_03"]
		{
			class MainTurret: MainTurret //inherits 17 parameters from bin\config.bin/CfgVehicles/Tank_F/Turrets/MainTurret, sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/Tank_F/Turrets/MainTurret/Turrets, sources - ["A3_Armor_F_EPB_MBT_03"]
				{
					class CommanderOptics: CommanderOptics //inherits 2 parameters from bin\config.bin/CfgVehicles/Tank_F/Turrets/MainTurret/Turrets/CommanderOptics, sources - ["A3_Armor_F_EPB_MBT_03"]
					{
						memoryPointGunnerOutOptics = "commanderview";
						memoryPointGunnerOptics = "commanderview";
						gunBeg = "Usti hlavne2";
						gunEnd = "Konec hlavne2";
						memoryPointGun = "usti hlavne2";
						selectionFireAnim = "zasleh2";
						minElev = -25;
						maxElev = 60;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						weapons[] = {"HMG_127_APC", "SmokeLauncher"};
						magazines[] = {"500Rnd_127x99_mag_Tracer_Yellow", "500Rnd_127x99_mag_Tracer_Yellow", "SmokeLauncherMag"};
						soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_comm", 1, 1, 30};
						soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_comm", 1, 1, 30};
						outGunnerMayFire = 0;
						inGunnerMayFire = 1;
						gunnerAction = "commander_mbt3_out";
						gunnerInAction = "commander_mbt3_in";
						gunnerGetInAction = "GetInLow";
						gunnerGetOutAction = "GetOutLow";
						discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
						discreteDistanceInitIndex = 2;
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel = "";
						gunnerOpticsEffect[] = {};
						isPersonTurret = 1;
						personTurretAction = "vehicle_turnout_1";
						class dynamicViewLimits //sources - ["A3_Armor_F_EPB_MBT_03"]
						{
							MainTurret[] = {-135, 75};
						};
						minOutElev = -10;
						maxOutElev = 15;
						initOutElev = 0;
						minOutTurn = -135;
						maxOutTurn = 90;
						initOutTurn = 0;
						class ViewGunner: ViewCargo //inherits 15 parameters from bin\config.bin/CfgVehicles/AllVehicles/ViewCargo, sources - []
						{
						};
						class ViewOptics: ViewOptics //inherits 0 parameters from bin\config.bin/CfgVehicles/LandVehicle/CommanderOptics/ViewOptics, sources - ["A3_Armor_F_EPB_MBT_03"]
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.31;
							minFov = 0.034;
							maxFov = 0.31;
							visionMode[] = {"Normal", "TI"};
							thermalMode[] = {2, 3};
						};
						class OpticsIn: Optics_Commander_02 //inherits 3 parameters from bin\config.bin/Optics_Commander_02, sources - ["A3_Armor_F_EPB_MBT_03"]
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
						turretInfoType = "RscOptics_APC_Wheeled_03_commander";
						showCrewAim = 1;
						startEngine = 0;
						gunnerHasFlares = 1;
						stabilizedInAxes = 3;
						maxHorizontalRotSpeed = 1.8;
						maxVerticalRotSpeed = 1.8;
						viewGunnerInExternal = 1;
						class HitPoints //sources - ["A3_Armor_F_EPB_MBT_03"]
						{
							class HitTurret //sources - ["A3_Armor_F_EPB_MBT_03"]
							{
								armor = 0.1;
								material = -1;
								name = "vezVelitele";
								visual = "vezVelitele";
								passThrough = 0;
								minimalHit = 0.1;
								explosionShielding = 1;
								radius = 0.25;
							};
							class HitGun //sources - ["A3_Armor_F_EPB_MBT_03"]
							{
								armor = 0.1;
								material = -1;
								name = "zbranVelitele";
								visual = "zbranVelitele";
								passThrough = 0;
								minimalHit = 0.1;
								explosionShielding = 1;
								radius = 0.25;
							};
						};
					};
				};
				gunBeg = "Usti hlavne";
				gunEnd = "Konec hlavne";
				gunnerAction = "gunner_mbt3_out";
				gunnerInAction = "gunner_mbt3_in";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				weapons[] = {"cannon_120mm_long", "LMG_coax"};
				magazines[] = {"28Rnd_120mm_APFSDS_shells_Tracer_Yellow", "14Rnd_120mm_HE_shells_Tracer_Yellow", "2000Rnd_762x51_Belt_Yellow", "2000Rnd_762x51_Belt_Yellow"};
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner", 0.562341, 1, 50};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical", 0.562341, 1, 50};
				forceHideGunner = 0;
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000};
				discreteDistanceInitIndex = 5;
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGun = "usti hlavne3";
				minElev = -9;
				maxElev = 20;
				initElev = 10;
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {};
				gunnerForceOptics = 1;
				startEngine = 0;
				inGunnerMayFire = 1;
				viewGunnerInExternal = 1;
				isPersonTurret = 1;
				personTurretAction = "vehicle_turnout_1";
				class dynamicViewLimits //sources - ["A3_Armor_F_EPB_MBT_03"]
				{
					CommanderOptics[] = {-65, 90};
				};
				minOutElev = -10;
				maxOutElev = 15;
				initOutElev = 0;
				minOutTurn = -135;
				maxOutTurn = 90;
				initOutTurn = 0;
				class OpticsIn: Optics_Gunner_MBT_03 //inherits 3 parameters from bin\config.bin/Optics_Gunner_MBT_03, sources - ["A3_Armor_F_EPB_MBT_03"]
				{
					class Wide: Wide //inherits 5 parameters from bin\config.bin/Optics_Gunner_MBT_03/Wide, sources - []
					{
					};
					class Medium: Medium //inherits 5 parameters from bin\config.bin/Optics_Gunner_MBT_03/Medium, sources - []
					{
					};
					class Narrow: Narrow //inherits 2 parameters from bin\config.bin/Optics_Gunner_MBT_03/Narrow, sources - []
					{
					};
				};
				turretInfoType = "RscOptics_MBT_03_gunner";
				showCrewAim = 2;
				class TurnOut //sources - ["A3_Armor_F_EPB_MBT_03"]
				{
					limitsArrayTop[] = {{20.1126, -107.535}, {19.8932, 99.3177}};
					limitsArrayBottom[] = {{-9.1273, -108.184}, {-7.1046, -44.255}, {-9.1675, 31.4978}, {-9.0505, 102.845}};
				};
				class TurnIn: TurnOut //inherits 2 parameters from bin\config.bin/CfgVehicles/MBT_03_base_F/Turrets/MainTurret/TurnOut, sources - ["A3_Armor_F_EPB_MBT_03"]
				{
					limitsArrayTop[] = {{19.9995, -180}, {19.9985, 180}};
					limitsArrayBottom[] = {{-2, -180}, {-1, -154.452}, {-5.8805, -82.7116}, {-4.582, 20.7562}, {-4.582, -20.7562}, {-5.8805, 82.7116}, {-1, 153.127}, {-2, 180}};
				};
				class HitPoints //sources - ["A3_Armor_F_EPB_MBT_03"]
				{
					class HitTurret //sources - ["A3_Armor_F_EPB_MBT_03"]
					{
						armor = 0.8;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 1;
						minimalHit = 0.1;
						explosionShielding = 0.2;
						radius = 0.25;
					};
					class HitGun //sources - ["A3_Armor_F_EPB_MBT_03"]
					{
						armor = 0.6;
						material = -1;
						name = "zbran";
						visual = "zbran";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.4;
						radius = 0.25;
					};
				};
			};
		};
		class Damage //sources - ["A3_Armor_F_EPB_MBT_03"]
		{
			tex[] = {};
			mat[] = {"A3\Armor_F_EPB\MBT_03\data\MBT_03_Ext01.rvmat", "A3\Armor_F_EPB\MBT_03\data\MBT_03_Ext01_damage.rvmat", "A3\Armor_F_EPB\MBT_03\data\MBT_03_Ext01_destruct.rvmat", "A3\Armor_F_EPB\MBT_03\data\MBT_03_Ext02.rvmat", "A3\Armor_F_EPB\MBT_03\data\MBT_03_Ext02_damage.rvmat", "A3\Armor_F_EPB\MBT_03\data\MBT_03_Ext02_destruct.rvmat", "A3\Armor_F_EPB\MBT_03\data\MBT_03_RCWS.rvmat", "A3\Armor_F_EPB\MBT_03\data\MBT_03_RCWS_damage.rvmat", "A3\Armor_F_EPB\MBT_03\data\MBT_03_RCWS_destruct.rvmat", "A3\Armor_F_EPB\MBT_03\data\MBT_03_track.rvmat", "A3\Armor_F_EPB\MBT_03\data\MBT_03_track_damage.rvmat", "A3\Armor_F_EPB\MBT_03\data\MBT_03_track_destruct.rvmat"};
		};
		class AnimationSources: AnimationSources //inherits 0 parameters from bin\config.bin/CfgVehicles/All/AnimationSources, sources - ["A3_Armor_F_EPB_MBT_03"]
		{
			class muzzle_rot_cannon //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				source = "ammorandom";
				weapon = "cannon_120mm_long";
			};
			class muzzle_rot_coax //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				source = "ammorandom";
				weapon = "LMG_coax";
			};
			class muzzle_rot_hmg //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				source = "ammorandom";
				weapon = "HMG_127_APC";
			};
			class muzzle_hide_coax //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				source = "reload";
				weapon = "LMG_coax";
			};
			class recoil_source //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				source = "reload";
				weapon = "cannon_120mm_long";
			};
			class LockMuzzle //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.3;
			};
			class HideTurret //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				displayName = "Remove turret extra armor";
				author = "Bohemia Interactive";
				source = "user";
				initPhase = 0;
				animPeriod = 0.01;
				mass = -900;
			};
			class HideHull //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				displayName = "Remove hull extra armor";
				author = "Bohemia Interactive";
				source = "user";
				initPhase = 0;
				animPeriod = 0.01;
				mass = -1500;
			};
		};
		class Library //sources - ["A3_Armor_F_EPB_MBT_03"]
		{
			libTextDesc = "The MBT-52 Kuma is the main battle tank used by Altian Armed Forces. A batch of a few dozen tanks and spare turrets were bought underprice from a south-European country facing an economic collapse. Like similar MBTs of the era, the Kuma is armed with a 120 mm cannon, a 7.62 mm coaxial machinegun and a remotely controlled 12.7 mm HMG. The level of protection for the crew is also remarkable, thanks to additional armor layers.";
		};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"a3\armor_f_epb\mbt_03\data\mbt_03_ext01_co.paa", "a3\armor_f_epb\mbt_03\data\mbt_03_ext02_co.paa", "a3\armor_f_epb\mbt_03\data\mbt_03_rcws_co.paa"};
		class TransportMagazines //sources - ["A3_Armor_F_EPB_MBT_03"]
		{
			class _xx_SmokeShell //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellGreen //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_30Rnd_556x45_Stanag //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 4;
			};
		};
		class TransportWeapons //sources - ["A3_Armor_F_EPB_MBT_03"]
		{
			class _xx_arifle_Mk20C_F //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				weapon = "arifle_Mk20C_F";
				count = 2;
			};
		};
		class TransportItems //sources - ["A3_Armor_F_EPB_MBT_03"]
		{
			class _xx_FirstAidKit //sources - ["A3_Armor_F_EPB_MBT_03"]
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
		numberPhysicalWheels = 18;
	};
	class I_MBT_03_base_F: MBT_03_base_F //inherits 110 parameters from bin\config.bin/CfgVehicles/MBT_03_base_F, sources - ["A3_Armor_F_EPB_MBT_03"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "I_MBT_03_base_F";
		crew = "I_crew_F";
		typicalCargo[] = {"I_Soldier_F"};
		side = 2;
		faction = "IND_F";
	};
	class I_MBT_03_cannon_F: I_MBT_03_base_F //inherits 6 parameters from bin\config.bin/CfgVehicles/I_MBT_03_base_F, sources - ["A3_Armor_F_EPB_MBT_03"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Armor_F_EPB_MBT_03"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"wheel_koll1", 0}, {"wheel_kolol1", 0}, {"wheel_podkolol1", 0.51}, {"wheel_kolp1", 0}, {"wheel_kolop1", 0}, {"wheel_podkolop1", 0.53}, {"wheel_koll2", 0}, {"wheel_kolp2", 0}, {"wheel_kolol2", 0}, {"wheel_kolol3", 0}, {"wheel_kolol4", 0}, {"wheel_kolol5", 0}, {"wheel_kolol6", 0}, {"wheel_kolol7", 0}, {"wheel_kolop2", 0}, {"wheel_kolop3", 0}, {"wheel_kolop4", 0}, {"wheel_kolop5", 0}, {"wheel_kolop6", 0}, {"wheel_kolop7", 0}, {"wheel_podkolol2", 0.51}, {"wheel_podkolol3", 0.5}, {"wheel_podkolol4", 0.51}, {"wheel_podkolol5", 0.54}, {"wheel_podkolol6", 0.54}, {"wheel_podkolop2", 0.51}, {"wheel_podkolop3", 0.55}, {"wheel_podkolop4", 0.55}, {"wheel_podkolop5", 0.56}, {"wheel_podkolop6", 0.55}, {"podkolol1_hide_damage", 0}, {"podkolol2_hide_damage", 0}, {"podkolol3_hide_damage", 0}, {"podkolol4_hide_damage", 0}, {"podkolol5_hide_damage", 0}, {"podkolol6_hide_damage", 0}, {"podkolol7_hide_damage", 0}, {"podkolol8_hide_damage", 0}, {"podkolop1_hide_damage", 0}, {"podkolop2_hide_damage", 0}, {"podkolop3_hide_damage", 0}, {"podkolop4_hide_damage", 0}, {"podkolop5_hide_damage", 0}, {"podkolop6_hide_damage", 0}, {"podkolop7_hide_damage", 0}, {"podkolop8_hide_damage", 0}, {"damagevez", 0}, {"mainturret", 0}, {"maingun", 0.17}, {"recoil", 0}, {"obsturret", 0}, {"obsgun", 0}, {"maingunoptics", 0.17}, {"wheel_podkolop7", 0.54}, {"wheel_podkolol7", 0.52}, {"hatchdriver", 0}, {"hatchcommander", 0}, {"hatchgunner", 0}, {"damagevezvelitele", 0}, {"poklop_commander_damage", 0}, {"poklop_gunner_damage", 0}, {"poklop_driver_damage", 0}, {"zaslehrot_hmg", 0}, {"zaslehrot_coax", 819.54}, {"cannon_muzzle_flash", 0}, {"zaslehrot_cannon", 0}};
			hide[] = {"clan", "zasleh", "zasleh2", "light_l", "light_r", "zadni svetlo", "brzdove svetlo", "podsvit pristroju", "poskozeni"};
			verticalOffset = 2.551;
			verticalOffsetWorld = -0.004;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_MBT_03_cannon_F.jpg";
		_generalMacro = "I_MBT_03_cannon_F";
		scope = 2;
		displayName = "MBT-52 Kuma";
	};
	class B_T_APC_Tracked_01_AA_F: B_APC_Tracked_01_AA_F //inherits 30 parameters from bin\config.bin/CfgVehicles/B_APC_Tracked_01_AA_F, sources - ["A3_Armor_F_Exp_APC_Tracked_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Armor_F_Exp_APC_Tracked_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"wheel_koll1", 0}, {"wheel_kolol1", 0}, {"wheel_podkolol1", 0.57}, {"wheel_kolp1", 0}, {"wheel_kolop1", 0}, {"wheel_podkolop1", 0.57}, {"wheel_koll2", 0}, {"wheel_kolp2", 0}, {"wheel_kolol2", 0}, {"wheel_kolol3", 0}, {"wheel_kolol4", 0}, {"wheel_kolol5", 0}, {"wheel_kolol6", 0}, {"wheel_kolop2", 0}, {"wheel_kolop3", 0}, {"wheel_kolop4", 0}, {"wheel_kolop5", 0}, {"wheel_kolop6", 0}, {"wheel_podkolol2", 0.55}, {"wheel_podkolol3", 0.52}, {"wheel_podkolol4", 0.52}, {"wheel_podkolol5", 0.53}, {"wheel_podkolol6", 0.48}, {"wheel_podkolop2", 0.55}, {"wheel_podkolop3", 0.56}, {"wheel_podkolop4", 0.55}, {"wheel_podkolop5", 0.52}, {"wheel_podkolop6", 0.48}, {"podkolol1_hide_damage", 0}, {"podkolol2_hide_damage", 0}, {"podkolol3_hide_damage", 0}, {"podkolol4_hide_damage", 0}, {"podkolol5_hide_damage", 0}, {"podkolol6_hide_damage", 0}, {"podkolol7_hide_damage", 0}, {"podkolol8_hide_damage", 0}, {"podkolop1_hide_damage", 0}, {"podkolop2_hide_damage", 0}, {"podkolop3_hide_damage", 0}, {"podkolop4_hide_damage", 0}, {"podkolop5_hide_damage", 0}, {"podkolop6_hide_damage", 0}, {"podkolop7_hide_damage", 0}, {"podkolop8_hide_damage", 0}, {"damagevez", 0}, {"mainturret", 0}, {"maingun", 0.09}, {"obsturret", 0}, {"obsgun", 0}, {"hatchcommander", 0}, {"hatchgunner", 0}, {"reverse_light", 0}, {"plates_1_y", 0}, {"plates_2_y", 0}, {"plates_1_x", 0}, {"plates_2_x", 0}, {"plates_1_bank", 0}, {"plates_2_bank", 0}, {"hidetitan_1", 1}, {"hidetitan_2", 1}, {"hidetitan_3", 1}, {"hidetitan_4", 1}, {"missile_move_1", 1}, {"missile_move_2", 1}, {"missile_move_3", 1}, {"zaslehrot", 0}, {"zaslehrot_2", 0}, {"maingunoptics", 0.09}};
			hide[] = {"clan", "zasleh", "zasleh_1", "light_l", "light_r", "zadni svetlo", "brzdove svetlo", "podsvit pristroju", "poskozeni"};
			verticalOffset = 2.821;
			verticalOffsetWorld = -0.017;
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_APC_Tracked_01_AA_F.jpg";
		_generalMacro = "B_T_APC_Tracked_01_AA_F";
		scope = 2;
		scopeCurator = 2;
		DLC = "Expansion";
		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_Crew_F";
		typicalCargo[] = {"B_T_Soldier_F"};
		class TransportWeapons //sources - ["A3_Armor_F_Exp_APC_Tracked_01"]
		{
			class _xx_arifle_MX_khk_F //sources - ["A3_Armor_F_Exp_APC_Tracked_01"]
			{
				weapon = "arifle_MX_khk_F";
				count = 2;
			};
			class _xx_arifle_MX_SW_khk_F //sources - ["A3_Armor_F_Exp_APC_Tracked_01"]
			{
				weapon = "arifle_MX_SW_khk_F";
				count = 1;
			};
			class _xx_launch_NLAW_F //sources - ["A3_Armor_F_Exp_APC_Tracked_01"]
			{
				weapon = "launch_NLAW_F";
				count = 1;
			};
		};
	};
	class B_T_APC_Tracked_01_CRV_F: B_APC_Tracked_01_CRV_F //inherits 21 parameters from bin\config.bin/CfgVehicles/B_APC_Tracked_01_CRV_F, sources - ["A3_Armor_F_Exp_APC_Tracked_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Armor_F_Exp_APC_Tracked_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"wheel_koll1", 0}, {"wheel_kolol1", 0}, {"wheel_podkolol1", 0.59}, {"wheel_kolp1", 0}, {"wheel_kolop1", 0}, {"wheel_podkolop1", 0.58}, {"wheel_koll2", 0}, {"wheel_kolp2", 0}, {"wheel_kolol2", 0}, {"wheel_kolol3", 0}, {"wheel_kolol4", 0}, {"wheel_kolol5", 0}, {"wheel_kolol6", 0}, {"wheel_kolop2", 0}, {"wheel_kolop3", 0}, {"wheel_kolop4", 0}, {"wheel_kolop5", 0}, {"wheel_kolop6", 0}, {"wheel_podkolol2", 0.56}, {"wheel_podkolol3", 0.54}, {"wheel_podkolol4", 0.53}, {"wheel_podkolol5", 0.53}, {"wheel_podkolol6", 0.49}, {"wheel_podkolop2", 0.56}, {"wheel_podkolop3", 0.58}, {"wheel_podkolop4", 0.56}, {"wheel_podkolop5", 0.53}, {"wheel_podkolop6", 0.49}, {"podkolol1_hide_damage", 0}, {"podkolol2_hide_damage", 0}, {"podkolol3_hide_damage", 0}, {"podkolol4_hide_damage", 0}, {"podkolol5_hide_damage", 0}, {"podkolol6_hide_damage", 0}, {"podkolol7_hide_damage", 0}, {"podkolol8_hide_damage", 0}, {"podkolop1_hide_damage", 0}, {"podkolop2_hide_damage", 0}, {"podkolop3_hide_damage", 0}, {"podkolop4_hide_damage", 0}, {"podkolop5_hide_damage", 0}, {"podkolop6_hide_damage", 0}, {"podkolop7_hide_damage", 0}, {"podkolop8_hide_damage", 0}, {"damagevez", 0}, {"mainturret", 0}, {"maingun", 0}, {"obsturret", 0}, {"obsgun", 0}, {"reverse_light", 0}, {"plates_1_y", 0}, {"plates_2_y", 0}, {"plates_1_x", 0}, {"plates_2_x", 0}, {"plates_1_bank", 0}, {"plates_2_bank", 0}, {"hatchcommander", 0}, {"zasleh2_rot", 209.69}, {"maingunoptics", 0}, {"zasleh_hide", 0}, {"zasleh_rot", 0}};
			hide[] = {"clan", "zasleh2", "zasleh_1", "light_l", "light_r", "zadni svetlo", "brzdove svetlo", "podsvit pristroju", "poskozeni"};
			verticalOffset = 2.469;
			verticalOffsetWorld = -0.022;
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_APC_Tracked_01_CRV_F.jpg";
		_generalMacro = "B_T_APC_Tracked_01_CRV_F";
		scope = 2;
		scopeCurator = 2;
		DLC = "Expansion";
		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_Crew_F";
		typicalCargo[] = {"B_T_Soldier_F"};
		class TransportWeapons //sources - ["A3_Armor_F_Exp_APC_Tracked_01"]
		{
			class _xx_arifle_MX_khk_F //sources - ["A3_Armor_F_Exp_APC_Tracked_01"]
			{
				weapon = "arifle_MX_khk_F";
				count = 2;
			};
			class _xx_arifle_MX_SW_khk_F //sources - ["A3_Armor_F_Exp_APC_Tracked_01"]
			{
				weapon = "arifle_MX_SW_khk_F";
				count = 1;
			};
			class _xx_launch_NLAW_F //sources - ["A3_Armor_F_Exp_APC_Tracked_01"]
			{
				weapon = "launch_NLAW_F";
				count = 1;
			};
		};
	};
	class B_T_APC_Tracked_01_rcws_F: B_APC_Tracked_01_rcws_F //inherits 22 parameters from bin\config.bin/CfgVehicles/B_APC_Tracked_01_rcws_F, sources - ["A3_Armor_F_Exp_APC_Tracked_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Armor_F_Exp_APC_Tracked_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"wheel_koll1", 0}, {"wheel_kolol1", 0}, {"wheel_podkolol1", 0.56}, {"wheel_kolp1", 0}, {"wheel_kolop1", 0}, {"wheel_podkolop1", 0.56}, {"wheel_koll2", 0}, {"wheel_kolp2", 0}, {"wheel_kolol2", 0}, {"wheel_kolol3", 0}, {"wheel_kolol4", 0}, {"wheel_kolol5", 0}, {"wheel_kolol6", 0}, {"wheel_kolop2", 0}, {"wheel_kolop3", 0}, {"wheel_kolop4", 0}, {"wheel_kolop5", 0}, {"wheel_kolop6", 0}, {"wheel_podkolol2", 0.54}, {"wheel_podkolol3", 0.51}, {"wheel_podkolol4", 0.51}, {"wheel_podkolol5", 0.52}, {"wheel_podkolol6", 0.48}, {"wheel_podkolop2", 0.54}, {"wheel_podkolop3", 0.55}, {"wheel_podkolop4", 0.54}, {"wheel_podkolop5", 0.52}, {"wheel_podkolop6", 0.48}, {"podkolol1_hide_damage", 0}, {"podkolol2_hide_damage", 0}, {"podkolol3_hide_damage", 0}, {"podkolol4_hide_damage", 0}, {"podkolol5_hide_damage", 0}, {"podkolol6_hide_damage", 0}, {"podkolol7_hide_damage", 0}, {"podkolol8_hide_damage", 0}, {"podkolop1_hide_damage", 0}, {"podkolop2_hide_damage", 0}, {"podkolop3_hide_damage", 0}, {"podkolop4_hide_damage", 0}, {"podkolop5_hide_damage", 0}, {"podkolop6_hide_damage", 0}, {"podkolop7_hide_damage", 0}, {"podkolop8_hide_damage", 0}, {"damagevez", 0}, {"mainturret", 0}, {"maingun", 0}, {"obsturret", 0}, {"obsgun", 0}, {"reverse_light", 0}, {"plates_1_y", 0}, {"plates_2_y", 0}, {"plates_1_x", 0}, {"plates_2_x", 0}, {"plates_1_bank", 0}, {"plates_2_bank", 0}, {"hatchcommander", 0}, {"zasleh_rot", 0}, {"zasleh2_rot", 212.85}, {"zasleh_hide", 0}, {"maingunoptics", 0}};
			hide[] = {"clan", "zasleh2", "zasleh_1", "light_l", "light_r", "zadni svetlo", "brzdove svetlo", "podsvit pristroju", "poskozeni"};
			verticalOffset = 2.465;
			verticalOffsetWorld = -0.014;
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_APC_Tracked_01_rcws_F.jpg";
		_generalMacro = "B_T_APC_Tracked_01_rcws_F";
		scope = 2;
		scopeCurator = 2;
		DLC = "Expansion";
		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_Crew_F";
		typicalCargo[] = {"B_T_Soldier_F"};
		class TransportWeapons //sources - ["A3_Armor_F_Exp_APC_Tracked_01"]
		{
			class _xx_arifle_MX_khk_F //sources - ["A3_Armor_F_Exp_APC_Tracked_01"]
			{
				weapon = "arifle_MX_khk_F";
				count = 2;
			};
			class _xx_arifle_MX_SW_khk_F //sources - ["A3_Armor_F_Exp_APC_Tracked_01"]
			{
				weapon = "arifle_MX_SW_khk_F";
				count = 1;
			};
			class _xx_launch_NLAW_F //sources - ["A3_Armor_F_Exp_APC_Tracked_01"]
			{
				weapon = "launch_NLAW_F";
				count = 1;
			};
		};
	};
	class O_T_APC_Tracked_02_cannon_ghex_F: O_APC_Tracked_02_cannon_F //inherits 21 parameters from bin\config.bin/CfgVehicles/O_APC_Tracked_02_cannon_F, sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
		{
			autoGeneratedData = 0;
			eden = 1;
			animate[] = {{"damagehide", 0}, {"wheel_koll1", 0}, {"wheel_kolol1", 0}, {"wheel_podkolol1", 0.42}, {"wheel_kolp1", 0}, {"wheel_kolop1", 0}, {"wheel_podkolop1", 0.41}, {"wheel_koll2", 0}, {"wheel_kolp2", 0}, {"wheel_kolol2", 0}, {"wheel_kolol3", 0}, {"wheel_kolol4", 0}, {"wheel_kolol5", 0}, {"wheel_kolol6", 0}, {"wheel_kolop2", 0}, {"wheel_kolop3", 0}, {"wheel_kolop4", 0}, {"wheel_kolop5", 0}, {"wheel_kolop6", 0}, {"wheel_podkolol2", 0.45}, {"wheel_podkolol3", 0.5}, {"wheel_podkolol4", 0.57}, {"wheel_podkolol5", 0.61}, {"wheel_podkolol6", 0.62}, {"wheel_podkolop2", 0.47}, {"wheel_podkolop3", 0.53}, {"wheel_podkolop4", 0.57}, {"wheel_podkolop5", 0.6}, {"wheel_podkolop6", 0.63}, {"podkolol1_hide_damage", 0}, {"podkolol2_hide_damage", 0}, {"podkolol3_hide_damage", 0}, {"podkolol4_hide_damage", 0}, {"podkolol5_hide_damage", 0}, {"podkolol6_hide_damage", 0}, {"podkolol7_hide_damage", 0}, {"podkolol8_hide_damage", 0}, {"podkolop1_hide_damage", 0}, {"podkolop2_hide_damage", 0}, {"podkolop3_hide_damage", 0}, {"podkolop4_hide_damage", 0}, {"podkolop5_hide_damage", 0}, {"podkolop6_hide_damage", 0}, {"podkolop7_hide_damage", 0}, {"podkolop8_hide_damage", 0}, {"damagevez", 0}, {"mainturret", 0}, {"maingun", 0}, {"obsturret", 0}, {"obsgun", 0}, {"poklop_driver_damage", 0}, {"reverse_light", 0}, {"maingunoptics", 0}, {"zasleh_rot", 0}, {"zasleh2_rot", 1278.26}, {"zasleh_hide", 0}, {"hidetitan_1", 1}, {"hidetitan_2", 1}, {"missile_move_1", 1}};
			hide[] = {"clan", "zasleh2", "zasleh_1", "light_l", "light_r", "zadni svetlo", "brzdove svetlo", "podsvit pristroju", "poskozeni"};
			verticalOffset = 2.371;
			verticalOffsetWorld = -0.029;
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_APC_Tracked_02_cannon_ghex_F.jpg";
		_generalMacro = "O_T_APC_Tracked_02_cannon_ghex_F";
		scope = 2;
		scopeCurator = 2;
		DLC = "Expansion";
		side = 0;
		faction = "OPF_T_F";
		crew = "O_T_crew_F";
		typicalCargo[] = {"O_T_Soldier_F"};
		textureList[] = {"GreenHex", 1};
		hiddenSelectionsTextures[] = {"A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_02_ext_01_ghex_CO.paa", "A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_02_ext_02_ghex_CO.paa", "A3\Armor_F_Exp\APC_Tracked_02\Data\RCWS30_ghex_CO.paa"};
		class TransportWeapons //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
		{
			class _xx_arifle_CTAR_blk_F //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				weapon = "arifle_CTAR_blk_F";
				count = 2;
			};
			class _xx_arifle_CTARS_blk_F //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				weapon = "arifle_CTARS_blk_F";
				count = 1;
			};
			class _xx_launch_RPG32_ghex_F //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				weapon = "launch_RPG32_ghex_F";
				count = 1;
			};
		};
		class TransportMagazines //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
		{
			class _xx_30Rnd_580x42_Mag_F //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "30Rnd_580x42_Mag_F";
				count = 12;
			};
			class _xx_100Rnd_580x42_Mag_F //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "100Rnd_580x42_Mag_F";
				count = 6;
			};
			class _xx_HandGrenade //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "HandGrenade";
				count = 6;
			};
			class _xx_MiniGrenade //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "MiniGrenade";
				count = 6;
			};
			class _xx_SmokeShell //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "SmokeShell";
				count = 8;
			};
			class _xx_SmokeShellRed //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "SmokeShellRed";
				count = 8;
			};
			class _xx_SmokeShellYellow //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "SmokeShellYellow";
				count = 8;
			};
			class _xx_SmokeShellOrange //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "SmokeShellOrange";
				count = 8;
			};
			class _xx_1Rnd_HE_Grenade_shell //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeYellow_Grenade_shell //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "1Rnd_SmokeYellow_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "1Rnd_SmokeRed_Grenade_shell";
				count = 3;
			};
			class _xx_RPG32_F //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "RPG32_F";
				count = 5;
			};
			class _xx_RPG32_HE_F //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "RPG32_HE_F";
				count = 2;
			};
			class _xx_Titan_AT //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "Titan_AT";
				count = 2;
			};
			class _xx_Titan_AA //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "Titan_AA";
				count = 2;
			};
		};
	};
	class O_T_APC_Tracked_02_AA_ghex_F: O_APC_Tracked_02_AA_F //inherits 30 parameters from bin\config.bin/CfgVehicles/O_APC_Tracked_02_AA_F, sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"wheel_koll1", 0}, {"wheel_kolol1", 0}, {"wheel_podkolol1", 0.42}, {"wheel_kolp1", 0}, {"wheel_kolop1", 0}, {"wheel_podkolop1", 0.41}, {"wheel_koll2", 0}, {"wheel_kolp2", 0}, {"wheel_kolol2", 0}, {"wheel_kolol3", 0}, {"wheel_kolol4", 0}, {"wheel_kolol5", 0}, {"wheel_kolol6", 0}, {"wheel_kolop2", 0}, {"wheel_kolop3", 0}, {"wheel_kolop4", 0}, {"wheel_kolop5", 0}, {"wheel_kolop6", 0}, {"wheel_podkolol2", 0.45}, {"wheel_podkolol3", 0.5}, {"wheel_podkolol4", 0.58}, {"wheel_podkolol5", 0.62}, {"wheel_podkolol6", 0.63}, {"wheel_podkolop2", 0.47}, {"wheel_podkolop3", 0.53}, {"wheel_podkolop4", 0.58}, {"wheel_podkolop5", 0.61}, {"wheel_podkolop6", 0.64}, {"podkolol1_hide_damage", 0}, {"podkolol2_hide_damage", 0}, {"podkolol3_hide_damage", 0}, {"podkolol4_hide_damage", 0}, {"podkolol5_hide_damage", 0}, {"podkolol6_hide_damage", 0}, {"podkolol7_hide_damage", 0}, {"podkolol8_hide_damage", 0}, {"podkolop1_hide_damage", 0}, {"podkolop2_hide_damage", 0}, {"podkolop3_hide_damage", 0}, {"podkolop4_hide_damage", 0}, {"podkolop5_hide_damage", 0}, {"podkolop6_hide_damage", 0}, {"podkolop7_hide_damage", 0}, {"podkolop8_hide_damage", 0}, {"damagevez", 0}, {"mainturret", 0}, {"maingun", 0.09}, {"obsturret", 0}, {"obsgun", 0}, {"hatchcommander", 0}, {"hatchgunner", 0}, {"poklop_driver_damage", 0}, {"reverse_light", 0}, {"hidetitan_1", 1}, {"hidetitan_2", 1}, {"hidetitan_3", 1}, {"hidetitan_4", 1}, {"missile_move_1", 1}, {"missile_move_2", 1}, {"missile_move_3", 1}, {"zaslehrot", 0}, {"zaslehrot_2", 0}, {"maingunoptics", 0.09}};
			hide[] = {"clan", "zasleh", "zasleh_1", "light_l", "light_r", "zadni svetlo", "brzdove svetlo", "podsvit pristroju", "poskozeni"};
			verticalOffset = 2.61;
			verticalOffsetWorld = 0.02;
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_APC_Tracked_02_AA_ghex_F.jpg";
		_generalMacro = "O_T_APC_Tracked_02_AA_ghex_F";
		scope = 2;
		scopeCurator = 2;
		DLC = "Expansion";
		side = 0;
		faction = "OPF_T_F";
		crew = "O_T_crew_F";
		typicalCargo[] = {"O_T_Soldier_F"};
		textureList[] = {"GreenHex", 1};
		hiddenSelectionsTextures[] = {"A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_02_ext_01_AA_ghex_CO.paa", "A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_02_ext_02_ghex_CO.paa", "A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_01_AA_Tower_ghex_CO.paa"};
		class TransportWeapons //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
		{
			class _xx_arifle_CTAR_blk_F //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				weapon = "arifle_CTAR_blk_F";
				count = 2;
			};
			class _xx_arifle_CTARS_blk_F //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				weapon = "arifle_CTARS_blk_F";
				count = 1;
			};
			class _xx_launch_RPG32_ghex_F //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				weapon = "launch_RPG32_ghex_F";
				count = 1;
			};
		};
		class TransportMagazines //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
		{
			class _xx_30Rnd_580x42_Mag_F //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "30Rnd_580x42_Mag_F";
				count = 12;
			};
			class _xx_100Rnd_580x42_Mag_F //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "100Rnd_580x42_Mag_F";
				count = 6;
			};
			class _xx_HandGrenade //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "HandGrenade";
				count = 6;
			};
			class _xx_MiniGrenade //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "MiniGrenade";
				count = 6;
			};
			class _xx_SmokeShell //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "SmokeShell";
				count = 8;
			};
			class _xx_SmokeShellRed //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "SmokeShellRed";
				count = 8;
			};
			class _xx_SmokeShellYellow //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "SmokeShellYellow";
				count = 8;
			};
			class _xx_SmokeShellOrange //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "SmokeShellOrange";
				count = 8;
			};
			class _xx_1Rnd_HE_Grenade_shell //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeYellow_Grenade_shell //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "1Rnd_SmokeYellow_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "1Rnd_SmokeRed_Grenade_shell";
				count = 3;
			};
			class _xx_RPG32_F //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "RPG32_F";
				count = 5;
			};
			class _xx_RPG32_HE_F //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "RPG32_HE_F";
				count = 2;
			};
			class _xx_Titan_AT //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "Titan_AT";
				count = 2;
			};
			class _xx_Titan_AA //sources - ["A3_Armor_F_Exp_APC_Tracked_02"]
			{
				magazine = "Titan_AA";
				count = 2;
			};
		};
	};
	class B_T_MBT_01_arty_F: B_MBT_01_arty_F //inherits 8 parameters from bin\config.bin/CfgVehicles/B_MBT_01_arty_F, sources - ["A3_Armor_F_Exp_MBT_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Armor_F_Exp_MBT_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"wheel_koll1", 0}, {"wheel_kolol1", 0}, {"wheel_podkolol1", 0.34}, {"wheel_kolp1", 0}, {"wheel_kolop1", 0}, {"wheel_podkolop1", 0.34}, {"wheel_koll2", 0}, {"wheel_kolp2", 0}, {"wheel_kolol2", 0}, {"wheel_kolol3", 0}, {"wheel_kolol4", 0}, {"wheel_kolol5", 0}, {"wheel_kolol6", 0}, {"wheel_kolop2", 0}, {"wheel_kolop3", 0}, {"wheel_kolop4", 0}, {"wheel_kolop5", 0}, {"wheel_kolop6", 0}, {"wheel_podkolol2", 0.4}, {"wheel_podkolol3", 0.47}, {"wheel_podkolol4", 0.55}, {"wheel_podkolol5", 0.67}, {"wheel_podkolol6", 0.71}, {"wheel_podkolop2", 0.4}, {"wheel_podkolop3", 0.51}, {"wheel_podkolop4", 0.58}, {"wheel_podkolop5", 0.67}, {"wheel_podkolop6", 0.71}, {"podkolol1_hide_damage", 0}, {"podkolol2_hide_damage", 0}, {"podkolol3_hide_damage", 0}, {"podkolol4_hide_damage", 0}, {"podkolol5_hide_damage", 0}, {"podkolol6_hide_damage", 0}, {"podkolol7_hide_damage", 0}, {"podkolol8_hide_damage", 0}, {"podkolop1_hide_damage", 0}, {"podkolop2_hide_damage", 0}, {"podkolop3_hide_damage", 0}, {"podkolop4_hide_damage", 0}, {"podkolop5_hide_damage", 0}, {"podkolop6_hide_damage", 0}, {"podkolop7_hide_damage", 0}, {"podkolop8_hide_damage", 0}, {"damagevez", 0}, {"mainturret", 0}, {"maingun", 0.17}, {"hatchcommander", 0}, {"recoil", 0}, {"obsturret", 0}, {"obsgun", 0}, {"damagevezvelitele", 0}, {"poklop_commander_damage", 0}, {"poklop_driver_damage", 0}, {"hatchdriver", 0}, {"plates_1_y", 0}, {"plates_2_y", 0}, {"plates_1_x", 0}, {"plates_2_x", 0}, {"plates_1_bank", 0}, {"plates_2_bank", 0}, {"maingunoptics", 0.17}, {"zaslehrot_hmg", 0}, {"artillery_muzzle_flash", 0}, {"gmg_muzzle_flash", 0}, {"zaslehrot_gmg", 0}};
			hide[] = {"clan", "zasleh2", "light_l", "light_r", "zadni svetlo", "brzdove svetlo", "podsvit pristroju", "poskozeni"};
			verticalOffset = 2.862;
			verticalOffsetWorld = 0.029;
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_MBT_01_arty_F.jpg";
		_generalMacro = "B_T_MBT_01_arty_F";
		scope = 2;
		scopeCurator = 2;
		DLC = "Expansion";
		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_Crew_F";
		typicalCargo[] = {"B_T_Soldier_F"};
		class TransportWeapons //sources - ["A3_Armor_F_Exp_MBT_01"]
		{
			class _xx_arifle_MXC_khk_F //sources - ["A3_Armor_F_Exp_MBT_01"]
			{
				weapon = "arifle_MXC_khk_F";
				count = 2;
			};
		};
	};
	class B_T_MBT_01_mlrs_F: B_MBT_01_mlrs_F //inherits 8 parameters from bin\config.bin/CfgVehicles/B_MBT_01_mlrs_F, sources - ["A3_Armor_F_Exp_MBT_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Armor_F_Exp_MBT_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"wheel_koll1", 0}, {"wheel_kolol1", 0}, {"wheel_podkolol1", 0.38}, {"wheel_kolp1", 0}, {"wheel_kolop1", 0}, {"wheel_podkolop1", 0.41}, {"wheel_koll2", 0}, {"wheel_kolp2", 0}, {"wheel_kolol2", 0}, {"wheel_kolol3", 0}, {"wheel_kolol4", 0}, {"wheel_kolol5", 0}, {"wheel_kolol6", 0}, {"wheel_kolop2", 0}, {"wheel_kolop3", 0}, {"wheel_kolop4", 0}, {"wheel_kolop5", 0}, {"wheel_kolop6", 0}, {"wheel_podkolol2", 0.43}, {"wheel_podkolol3", 0.49}, {"wheel_podkolol4", 0.55}, {"wheel_podkolol5", 0.66}, {"wheel_podkolol6", 0.71}, {"wheel_podkolop2", 0.42}, {"wheel_podkolop3", 0.52}, {"wheel_podkolop4", 0.59}, {"wheel_podkolop5", 0.67}, {"wheel_podkolop6", 0.71}, {"podkolol1_hide_damage", 0}, {"podkolol2_hide_damage", 0}, {"podkolol3_hide_damage", 0}, {"podkolol4_hide_damage", 0}, {"podkolol5_hide_damage", 0}, {"podkolol6_hide_damage", 0}, {"podkolol7_hide_damage", 0}, {"podkolol8_hide_damage", 0}, {"podkolop1_hide_damage", 0}, {"podkolop2_hide_damage", 0}, {"podkolop3_hide_damage", 0}, {"podkolop4_hide_damage", 0}, {"podkolop5_hide_damage", 0}, {"podkolop6_hide_damage", 0}, {"podkolop7_hide_damage", 0}, {"podkolop8_hide_damage", 0}, {"damagevez", 0}, {"mainturret", 0}, {"maingun", 0.17}, {"damagevezvelitele", 0}, {"poklop_commander_damage", 0}, {"poklop_driver_damage", 0}, {"hatchdriver", 0}, {"plates_1_y", 0}, {"plates_2_y", 0}, {"plates_1_x", 0}, {"plates_2_x", 0}, {"plates_1_bank", 0}, {"plates_2_bank", 0}, {"elevator", 0.17}, {"elevator_piston", 0.17}, {"maingunoptics", 0.17}, {"maingunoptics_stabilization", 0.17}, {"hidemlrs_1", 1}, {"hidemlrs_2", 1}, {"hidemlrs_3", 1}, {"hidemlrs_4", 1}, {"hidemlrs_5", 1}, {"hidemlrs_6", 1}, {"hidemlrs_7", 1}, {"hidemlrs_8", 1}, {"hidemlrs_9", 1}, {"hidemlrs_10", 1}, {"hidemlrs_11", 1}, {"hidemlrs_12", 1}};
			hide[] = {"clan", "zasleh", "light_l", "light_r", "zadni svetlo", "brzdove svetlo", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.814;
			verticalOffsetWorld = 0.009;
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_MBT_01_mlrs_F.jpg";
		_generalMacro = "B_T_MBT_01_mlrs_F";
		scope = 2;
		scopeCurator = 2;
		DLC = "Expansion";
		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_Crew_F";
		typicalCargo[] = {"B_T_Soldier_F"};
		class TransportWeapons //sources - ["A3_Armor_F_Exp_MBT_01"]
		{
			class _xx_arifle_MXC_khk_F //sources - ["A3_Armor_F_Exp_MBT_01"]
			{
				weapon = "arifle_MXC_khk_F";
				count = 2;
			};
		};
	};
	class B_T_MBT_01_cannon_F: B_MBT_01_cannon_F //inherits 9 parameters from bin\config.bin/CfgVehicles/B_MBT_01_cannon_F, sources - ["A3_Armor_F_Exp_MBT_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Armor_F_Exp_MBT_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"wheel_koll1", 0}, {"wheel_kolol1", 0}, {"wheel_podkolol1", 0.43}, {"wheel_kolp1", 0}, {"wheel_kolop1", 0}, {"wheel_podkolop1", 0.46}, {"wheel_koll2", 0}, {"wheel_kolp2", 0}, {"wheel_kolol2", 0}, {"wheel_kolol3", 0}, {"wheel_kolol4", 0}, {"wheel_kolol5", 0}, {"wheel_kolol6", 0}, {"wheel_kolop2", 0}, {"wheel_kolop3", 0}, {"wheel_kolop4", 0}, {"wheel_kolop5", 0}, {"wheel_kolop6", 0}, {"wheel_podkolol2", 0.45}, {"wheel_podkolol3", 0.49}, {"wheel_podkolol4", 0.52}, {"wheel_podkolol5", 0.6}, {"wheel_podkolol6", 0.63}, {"wheel_podkolop2", 0.45}, {"wheel_podkolop3", 0.52}, {"wheel_podkolop4", 0.56}, {"wheel_podkolop5", 0.61}, {"wheel_podkolop6", 0.62}, {"podkolol1_hide_damage", 0}, {"podkolol2_hide_damage", 0}, {"podkolol3_hide_damage", 0}, {"podkolol4_hide_damage", 0}, {"podkolol5_hide_damage", 0}, {"podkolol6_hide_damage", 0}, {"podkolol7_hide_damage", 0}, {"podkolol8_hide_damage", 0}, {"podkolop1_hide_damage", 0}, {"podkolop2_hide_damage", 0}, {"podkolop3_hide_damage", 0}, {"podkolop4_hide_damage", 0}, {"podkolop5_hide_damage", 0}, {"podkolop6_hide_damage", 0}, {"podkolop7_hide_damage", 0}, {"podkolop8_hide_damage", 0}, {"damagevez", 0}, {"mainturret", 0}, {"maingun", 0.17}, {"hatchcommander", 0}, {"recoil", 0}, {"obsturret", 0}, {"obsgun", 0}, {"maingunoptics", 0.17}, {"damagevezvelitele", 0}, {"poklop_commander_damage", 0}, {"poklop_driver_damage", 0}, {"hatchdriver", 0}, {"plates_1_y", 0}, {"plates_2_y", 0}, {"plates_1_x", 0}, {"plates_2_x", 0}, {"plates_1_bank", 0}, {"plates_2_bank", 0}, {"cannon_muzzle_flash", 0}, {"zaslehrot_cannon", 0}};
			hide[] = {"clan", "zasleh", "zasleh_1", "light_l", "light_r", "zadni svetlo", "brzdove svetlo", "podsvit pristroju", "poskozeni"};
			verticalOffset = 2.486;
			verticalOffsetWorld = 0.008;
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_MBT_01_cannon_F.jpg";
		_generalMacro = "B_T_MBT_01_cannon_F";
		scope = 2;
		scopeCurator = 2;
		DLC = "Expansion";
		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_Crew_F";
		typicalCargo[] = {"B_T_Soldier_F"};
		class TransportWeapons //sources - ["A3_Armor_F_Exp_MBT_01"]
		{
			class _xx_arifle_MXC_khk_F //sources - ["A3_Armor_F_Exp_MBT_01"]
			{
				weapon = "arifle_MXC_khk_F";
				count = 2;
			};
		};
	};
	class B_T_MBT_01_TUSK_F: B_MBT_01_TUSK_F //inherits 17 parameters from bin\config.bin/CfgVehicles/B_MBT_01_TUSK_F, sources - ["A3_Armor_F_Exp_MBT_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Armor_F_Exp_MBT_01"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"wheel_koll1", 0}, {"wheel_kolol1", 0}, {"wheel_podkolol1", 0.46}, {"wheel_kolp1", 0}, {"wheel_kolop1", 0}, {"wheel_podkolop1", 0.49}, {"wheel_koll2", 0}, {"wheel_kolp2", 0}, {"wheel_kolol2", 0}, {"wheel_kolol3", 0}, {"wheel_kolol4", 0}, {"wheel_kolol5", 0}, {"wheel_kolol6", 0}, {"wheel_kolop2", 0}, {"wheel_kolop3", 0}, {"wheel_kolop4", 0}, {"wheel_kolop5", 0}, {"wheel_kolop6", 0}, {"wheel_podkolol2", 0.48}, {"wheel_podkolol3", 0.52}, {"wheel_podkolol4", 0.55}, {"wheel_podkolol5", 0.64}, {"wheel_podkolol6", 0.66}, {"wheel_podkolop2", 0.48}, {"wheel_podkolop3", 0.55}, {"wheel_podkolop4", 0.59}, {"wheel_podkolop5", 0.64}, {"wheel_podkolop6", 0.66}, {"podkolol1_hide_damage", 0}, {"podkolol2_hide_damage", 0}, {"podkolol3_hide_damage", 0}, {"podkolol4_hide_damage", 0}, {"podkolol5_hide_damage", 0}, {"podkolol6_hide_damage", 0}, {"podkolol7_hide_damage", 0}, {"podkolol8_hide_damage", 0}, {"podkolop1_hide_damage", 0}, {"podkolop2_hide_damage", 0}, {"podkolop3_hide_damage", 0}, {"podkolop4_hide_damage", 0}, {"podkolop5_hide_damage", 0}, {"podkolop6_hide_damage", 0}, {"podkolop7_hide_damage", 0}, {"podkolop8_hide_damage", 0}, {"damagevez", 0}, {"mainturret", 0}, {"maingun", 0.17}, {"hatchcommander", 0}, {"recoil", 0}, {"obsturret", 0}, {"obsgun", 0}, {"maingunoptics", 0.17}, {"damagevezvelitele", 0}, {"poklop_commander_damage", 0}, {"poklop_driver_damage", 0}, {"hatchdriver", 0}, {"plates_1_y", 0}, {"plates_2_y", 0}, {"plates_1_x", 0}, {"plates_2_x", 0}, {"plates_1_bank", 0}, {"plates_2_bank", 0}, {"zaslehrot", 0}, {"cannon_muzzle_flash", 0}, {"zaslehrot_cannon", 0}, {"commander_muzzleflash_rot", 0}, {"commander_gun_recoil", 0}, {"commander_gun_belt_1", 0}, {"commander_gun_belt_2", 0}, {"commander_gun_belt_3", 0}};
			hide[] = {"clan", "zasleh", "commander_muzzleflash", "light_l", "light_r", "zadni svetlo", "brzdove svetlo", "podsvit pristroju", "poskozeni"};
			verticalOffset = 2.539;
			verticalOffsetWorld = -0.004;
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_MBT_01_TUSK_F.jpg";
		_generalMacro = "B_T_MBT_01_TUSK_F";
		scope = 2;
		scopeCurator = 2;
		DLC = "Expansion";
		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_Crew_F";
		typicalCargo[] = {"B_T_Soldier_F"};
		class TransportWeapons //sources - ["A3_Armor_F_Exp_MBT_01"]
		{
			class _xx_arifle_MXC_khk_F //sources - ["A3_Armor_F_Exp_MBT_01"]
			{
				weapon = "arifle_MXC_khk_F";
				count = 2;
			};
		};
	};
	class O_T_MBT_02_cannon_ghex_F: O_MBT_02_cannon_F //inherits 7 parameters from bin\config.bin/CfgVehicles/O_MBT_02_cannon_F, sources - ["A3_Armor_F_Exp_MBT_02"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Armor_F_Exp_MBT_02"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"wheel_koll1", 0}, {"wheel_kolol1", 0}, {"wheel_podkolol1", 0.55}, {"wheel_kolp1", 0}, {"wheel_kolop1", 0}, {"wheel_podkolop1", 0.55}, {"wheel_koll2", 0}, {"wheel_kolp2", 0}, {"wheel_kolol2", 0}, {"wheel_kolol3", 0}, {"wheel_kolol4", 0}, {"wheel_kolol5", 0}, {"wheel_kolol6", 0}, {"wheel_kolol7", 0}, {"wheel_kolop2", 0}, {"wheel_kolop3", 0}, {"wheel_kolop4", 0}, {"wheel_kolop5", 0}, {"wheel_kolop6", 0}, {"wheel_kolop7", 0}, {"wheel_podkolol2", 0.53}, {"wheel_podkolol3", 0.51}, {"wheel_podkolol4", 0.52}, {"wheel_podkolol5", 0.53}, {"wheel_podkolol6", 0.51}, {"wheel_podkolop2", 0.53}, {"wheel_podkolop3", 0.55}, {"wheel_podkolop4", 0.54}, {"wheel_podkolop5", 0.53}, {"wheel_podkolop6", 0.51}, {"podkolol1_hide_damage", 0}, {"podkolol2_hide_damage", 0}, {"podkolol3_hide_damage", 0}, {"podkolol4_hide_damage", 0}, {"podkolol5_hide_damage", 0}, {"podkolol6_hide_damage", 0}, {"podkolol7_hide_damage", 0}, {"podkolol8_hide_damage", 0}, {"podkolop1_hide_damage", 0}, {"podkolop2_hide_damage", 0}, {"podkolop3_hide_damage", 0}, {"podkolop4_hide_damage", 0}, {"podkolop5_hide_damage", 0}, {"podkolop6_hide_damage", 0}, {"podkolop7_hide_damage", 0}, {"podkolop8_hide_damage", 0}, {"damagevez", 0}, {"mainturret", 0}, {"maingun", 0.17}, {"recoil", 0}, {"obsturret", 0}, {"obsgun", 0}, {"maingunoptics", 0.17}, {"wheel_podkolop7", 0.48}, {"wheel_podkolol7", 0.48}, {"hatchdriver", 0}, {"damagevezvelitele", 0}, {"poklop_commander_damage", 0}, {"poklop_gunner_damage", 0}, {"poklop_driver_damage", 0}, {"zaslehrot_hmg", 0}, {"recoil_2", 0}, {"zaslehrot_coax", 1329.15}, {"hatchcommanderup", 0}, {"hatchcommander", 0}, {"hatchgunnerup", 0}, {"hatchgunner", 0}, {"cannon_muzzle_flash", 0}, {"zaslehrot_cannon", 0}};
			hide[] = {"clan", "zasleh", "zasleh2", "light_l", "light_r", "zadni svetlo", "brzdove svetlo", "podsvit pristroju", "poskozeni"};
			verticalOffset = 2.198;
			verticalOffsetWorld = -0.01;
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_MBT_02_cannon_ghex_F.jpg";
		_generalMacro = "O_T_MBT_02_cannon_ghex_F";
		scope = 2;
		scopeCurator = 2;
		DLC = "Expansion";
		side = 0;
		faction = "OPF_T_F";
		crew = "O_T_crew_F";
		typicalCargo[] = {"O_T_Soldier_F", "O_T_Soldier_F", "O_T_Soldier_F"};
		textureList[] = {"GreenHex", 1};
		hiddenSelectionsTextures[] = {"a3\Armor_F_Exp\MBT_02\Data\MBT_02_body_ghex_CO.paa", "a3\Armor_F_Exp\MBT_02\Data\MBT_02_turret_ghex_CO.paa", "a3\Armor_F_Exp\MBT_02\Data\MBT_02_ghex_CO.paa"};
		class TransportMagazines //sources - ["A3_Armor_F_Exp_MBT_02"]
		{
			class _xx_SmokeShell //sources - ["A3_Armor_F_Exp_MBT_02"]
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellRed //sources - ["A3_Armor_F_Exp_MBT_02"]
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_30Rnd_580x42_Mag_F //sources - ["A3_Armor_F_Exp_MBT_02"]
			{
				magazine = "30Rnd_580x42_Mag_F";
				count = 4;
			};
		};
		class TransportWeapons //sources - ["A3_Armor_F_Exp_MBT_02"]
		{
			class _xx_arifle_CTAR_blk_F //sources - ["A3_Armor_F_Exp_MBT_02"]
			{
				weapon = "arifle_CTAR_blk_F";
				count = 2;
			};
		};
	};
	class O_T_MBT_02_arty_ghex_F: O_MBT_02_arty_F //inherits 7 parameters from bin\config.bin/CfgVehicles/O_MBT_02_arty_F, sources - ["A3_Armor_F_Exp_MBT_02"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Armor_F_Exp_MBT_02"]
		{
			eden = 1;
			animate[] = {{"damagehide", 0}, {"wheel_koll1", 0}, {"wheel_kolol1", 0}, {"wheel_podkolol1", 0.48}, {"wheel_kolp1", 0}, {"wheel_kolop1", 0}, {"wheel_podkolop1", 0.48}, {"wheel_koll2", 0}, {"wheel_kolp2", 0}, {"wheel_kolol2", 0}, {"wheel_kolol3", 0}, {"wheel_kolol4", 0}, {"wheel_kolol5", 0}, {"wheel_kolol6", 0}, {"wheel_kolol7", 0}, {"wheel_kolop2", 0}, {"wheel_kolop3", 0}, {"wheel_kolop4", 0}, {"wheel_kolop5", 0}, {"wheel_kolop6", 0}, {"wheel_kolop7", 0}, {"wheel_podkolol2", 0.48}, {"wheel_podkolol3", 0.51}, {"wheel_podkolol4", 0.54}, {"wheel_podkolol5", 0.56}, {"wheel_podkolol6", 0.55}, {"wheel_podkolop2", 0.52}, {"wheel_podkolop3", 0.53}, {"wheel_podkolop4", 0.55}, {"wheel_podkolop5", 0.56}, {"wheel_podkolop6", 0.55}, {"podkolol1_hide_damage", 0}, {"podkolol2_hide_damage", 0}, {"podkolol3_hide_damage", 0}, {"podkolol4_hide_damage", 0}, {"podkolol5_hide_damage", 0}, {"podkolol6_hide_damage", 0}, {"podkolol7_hide_damage", 0}, {"podkolol8_hide_damage", 0}, {"podkolop1_hide_damage", 0}, {"podkolop2_hide_damage", 0}, {"podkolop3_hide_damage", 0}, {"podkolop4_hide_damage", 0}, {"podkolop5_hide_damage", 0}, {"podkolop6_hide_damage", 0}, {"podkolop7_hide_damage", 0}, {"podkolop8_hide_damage", 0}, {"damagevez", 0}, {"mainturret", 0}, {"maingun", 0.17}, {"hatchcommander", 0}, {"recoil", 0}, {"obsturret", 0}, {"obsgun", 0}, {"wheel_podkolop7", 0.54}, {"wheel_podkolol7", 0.51}, {"hatchdriver", 0}, {"damagevezvelitele", 0}, {"poklop_commander_damage", 0}, {"poklop_gunner_damage", 0}, {"poklop_driver_damage", 0}, {"zaslehrot_hmg", 0}, {"recoil_2", 0}, {"maingunoptics", 0.17}, {"artillery_muzzle_flash", 0}, {"gmg_muzzle_flash", 0}, {"zaslehrot_gmg", 0}};
			hide[] = {"clan", "zasleh2", "light_l", "light_r", "zadni svetlo", "brzdove svetlo", "podsvit pristroju", "poskozeni"};
			verticalOffset = 2.729;
			verticalOffsetWorld = 0.005;
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_MBT_02_arty_ghex_F.jpg";
		_generalMacro = "O_T_MBT_02_arty_ghex_F";
		scope = 2;
		scopeCurator = 2;
		DLC = "Expansion";
		side = 0;
		faction = "OPF_T_F";
		crew = "O_T_crew_F";
		typicalCargo[] = {"O_T_Soldier_F", "O_T_Soldier_F", "O_T_Soldier_F"};
		textureList[] = {"GreenHex", 1};
		hiddenSelectionsTextures[] = {"a3\Armor_F_Exp\MBT_02\Data\MBT_02_body_ghex_CO.paa", "a3\Armor_F_Exp\MBT_02\Data\MBT_02_scorcher_ghex_CO.paa", "a3\Armor_F_Exp\MBT_02\Data\MBT_02_ghex_CO.paa", "a3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"};
		class TransportMagazines //sources - ["A3_Armor_F_Exp_MBT_02"]
		{
			class _xx_SmokeShell //sources - ["A3_Armor_F_Exp_MBT_02"]
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellRed //sources - ["A3_Armor_F_Exp_MBT_02"]
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_30Rnd_580x42_Mag_F //sources - ["A3_Armor_F_Exp_MBT_02"]
			{
				magazine = "30Rnd_580x42_Mag_F";
				count = 4;
			};
		};
		class TransportWeapons //sources - ["A3_Armor_F_Exp_MBT_02"]
		{
			class _xx_arifle_CTAR_blk_F //sources - ["A3_Armor_F_Exp_MBT_02"]
			{
				weapon = "arifle_CTAR_blk_F";
				count = 2;
			};
		};
	};

};
