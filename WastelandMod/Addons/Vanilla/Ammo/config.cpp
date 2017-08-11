class cfgPatches
{
  class BIB_Wasteland_Ammo
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

class CfgAmmo
	{
		access = 1;
		class Default //sources - []
		{
			access = 3;
			hit = 0;
			indirectHit = 0;
			indirectHitRange = 1;
			underwaterHitRangeCoef = 1;
			typicalSpeed = 900;
			explosionForceCoef = 1;
			isCraterOriented = 0;
			model = "";
			proxyShape = "";
			craterShape = "";
			simulation = "";
			weaponType = "Default";
			animated = 0;
			shadow = 0;
			cost = 0;
			maxSpeed = 0;
			cartridge = "";
			simulationStep = 0.05;
			tracerColor[] = {0.7, 0.7, 0.5, 0.04};
			tracerColorR[] = {0.7, 0.7, 0.5, 0.04};
			soundFly[] = {"", 1, 1};
			soundEngine[] = {"", 1, 1};
			soundHit[] = {"", 1, 1};
			supersonicCrackNear[] = {"", 1, 1};
			supersonicCrackFar[] = {"", 1, 1};
			soundFall[] = {"", 1, 1};
			soundFakeFall[] = {"soundFall", 1};
			hitGroundSoft[] = {"soundHit", 1};
			hitGroundHard[] = {"soundHit", 1};
			hitMan[] = {"soundHit", 1};
			hitArmor[] = {"soundHit", 1};
			hitIron[] = {"soundHit", 1};
			hitBuilding[] = {"soundHit", 1};
			hitFoliage[] = {"soundHit", 1};
			hitWood[] = {"soundHit", 1};
			hitGlass[] = {"soundHit", 1};
			hitGlassArmored[] = {"soundHit", 1};
			hitConcrete[] = {"soundHit", 1};
			hitRubber[] = {"soundHit", 1};
			hitPlastic[] = {"soundHit", 1};
			hitDefault[] = {"soundHit", 1};
			hitMetal[] = {"soundHit", 1};
			hitMetalplate[] = {"soundHit", 1};
			hitTyre[] = {"soundHit", 1};
			hitWater[] = {"soundHit", 1};
			soundImpact[] = {"", 1, 1};
			impactGroundSoft[] = {"soundImpact", 1};
			impactGroundHard[] = {"soundImpact", 1};
			impactMan[] = {"soundImpact", 1};
			impactIron[] = {"soundImpact", 1};
			impactArmor[] = {"soundImpact", 1};
			impactBuilding[] = {"soundImpact", 1};
			impactFoliage[] = {"soundImpact", 1};
			impactWood[] = {"soundImpact", 1};
			impactGlass[] = {"soundImpact", 1};
			impactGlassArmored[] = {"soundImpact", 1};
			impactConcrete[] = {"soundImpact", 1};
			impactRubber[] = {"soundImpact", 1};
			impactPlastic[] = {"soundImpact", 1};
			impactDefault[] = {"soundImpact", 1};
			impactMetal[] = {"soundImpact", 1};
			impactMetalplate[] = {"soundImpact", 1};
			impactTyre[] = {"soundImpact", 1};
			impactWater[] = {"soundImpact", 1};
			grenadeFireSound[] = {};
			grenadeBurningSound[] = {};
			deflecting = 0;
			deflectionSlowDown = 0.8;
			explosive = 1;
			explosionEffects = "ExplosionEffects";
			craterEffects = "ImpactEffectsMedium";
			craterWaterEffects = "ImpactEffectsWater";
			effectsMissile = "ExplosionEffects";
			effectsMissileInit = "";
			effectsSmoke = "SmokeShellWhite";
			effectsFire = "CannonFire";
			effectFlare = "FlareShell";
			effectFly = "";
			mineJumpEffects = "";
			waterEffectOffset = 0.45;
			directionalExplosion = 0;
			explosionAngle = 60;
			explosionDir = "explosionDir";
			explosionPos = "explosionPos";
			explosionEffectsDir = "explosionDir";
			minimumSafeZone = 0.1;
			soundTrigger[] = {};
			soundActivation[] = {};
			soundDeactivation[] = {};
			explosionSoundEffect = "";
			timeToLive = 10;
			minTimeToLive = 0;
			irLock = 0;
			airLock = 0;
			laserLock = 0;
			nvLock = 0;
			artilleryLock = 0;
			hitOnWater = 0;
			lockSeekRadius = 100;
			manualControl = 0;
			maxControlRange = 350;
			maneuvrability = 1;
			trackLead = 1;
			trackOversteer = 1;
			missileLockCone = 0;
			weaponLockSystem = 0;
			cmImmunity = 1;
			lockType = 0;
			maverickweaponIndexOffset = 0;
			sideAirFriction = 1;
			artilleryDispersion = 1;
			artilleryCharge = 1;
			autoSeekTarget = 0;
			visibleFire = 0;
			audibleFire = 0;
			shootDistraction = -1;
			visibleFireTime = 0;
			explosionTime = 0;
			fuseDistance = 0;
			initTime = 0;
			thrustTime = 1.5;
			thrust = 210;
			airFriction = -0.0005;
			icon = "";
			submunitionAmmo = "";
			explosionType = "explosive";
			mineTrigger = "RangeTrigger";
			mineBoundingTime = 3;
			mineBoundingDist = 3;
			mineInconspicuousness = 10;
			mineFloating = -1;
			mineDiveSpeed = 1;
			minePlaceDist = 0.5;
			class HitEffects //sources - []
			{
				vehicle = "ImpactMetal";
				object = "ImpactConcrete";
			};
			suppressionRadiusBulletClose = -1;
			suppressionRadiusHit = -1;
			dangerRadiusBulletClose = -1;
			dangerRadiusHit = -1;
			caliber = 1;
			whistleDist = 0;
			whistleOnFire = 0;
			class NVGMarkers //sources - []
			{
			};
			minDamageForCamShakeHit = 0.55;
		};
		class MissileCore: Default //inherits 144 parameters from bin\config.bin/CfgAmmo/Default, sources - []
		{
			simulation = "shotMissile";
			simulationStep = 0.05;
			timeToLive = 20;
			manualControl = 1;
			maxControlRange = 250;
			initTime = 0.15;
			thrustTime = 2.5;
			thrust = 350;
			maneuvrability = 3;
			missileLockCone = 50;
			visibleFire = 32;
			audibleFire = 32;
			visibleFireTime = 20;
			soundHit[] = {"", 100, 1};
			soundFly[] = {"", 0.01, 2};
			soundEngine[] = {"", 0.001, 1};
			cost = 10000;
			deflecting = 5;
		};
		class BombCore: Default //inherits 144 parameters from bin\config.bin/CfgAmmo/Default, sources - []
		{
			hit = 50;
			indirectHit = 40;
			indirectHitRange = 10;
			cost = 200;
			irLock = 0;
			laserLock = 0;
			maxControlRange = 0;
			maneuvrability = 16;
			sideAirFriction = 0.1;
			simulation = "shotMissile";
			maxSpeed = 100;
			timeToLive = 120;
			initTime = 0;
			thrustTime = 0;
			thrust = 0;
		};
		class LaserBombCore: BombCore //inherits 15 parameters from bin\config.bin/CfgAmmo/BombCore, sources - []
		{
			hit = 5000;
			indirectHit = 3500;
			indirectHitRange = 15;
			cost = 20000;
			irLock = 0;
			laserLock = 1;
			maxControlRange = 100000;
			maneuvrability = 16;
			sideAirFriction = 0.1;
			simulation = "shotMissile";
			maxSpeed = 100;
			timeToLive = 120;
			initTime = 0;
			thrustTime = 0;
			thrust = 0;
			missileLockCone = 50;
		};
		class RocketCore: Default //inherits 144 parameters from bin\config.bin/CfgAmmo/Default, sources - []
		{
			simulation = "shotRocket";
			simulationStep = 0.05;
			timeToLive = 20;
			maneuvrability = 0;
			maxControlRange = 0;
			initTime = 0.05;
			thrustTime = 1;
			thrust = 1500;
			visibleFire = 32;
			audibleFire = 32;
			visibleFireTime = 20;
			cost = 2000;
			deflecting = 5;
		};
		class ArtilleryRocketCore: RocketCore //inherits 13 parameters from bin\config.bin/CfgAmmo/RocketCore, sources - []
		{
			artilleryLock = 1;
		};
		class BulletCore: Default //inherits 144 parameters from bin\config.bin/CfgAmmo/Default, sources - []
		{
			simulation = "shotBullet";
			simulationStep = 0.05;
			timeToLive = 3;
			soundFly[] = {"", 0.251189, 0.7};
			explosive = 0;
			visibleFire = 16;
			audibleFire = 16;
			visibleFireTime = 3;
			soundHit1[] = {"", 0.0316228, 1};
			soundHit2[] = {"", 0.0316228, 1};
			soundHit3[] = {"", 0.0316228, 1};
			soundHitMan1[] = {"", 0.0125893, 1};
			soundHitMan2[] = {"", 0.0125893, 1};
			soundHitArmor1[] = {"", 0.0316228, 1};
			soundHitArmor2[] = {"", 0.0316228, 1};
			soundHitBuilding1[] = {"", 0.0316228, 1};
			soundHitBuilding2[] = {"", 0.0316228, 1};
			hitGround[] = {"soundHit1", 0.33, "soundHit2", 0.33, "soundHit3", 0.33};
			hitMan[] = {"soundHitMan1", 0.5, "soundHitMan2", 0.5};
			hitArmor[] = {"soundHitArmor1", 0.7, "soundHitArmor2", 0.3};
			hitBuilding[] = {"soundHitBuilding1", 0.5, "soundHitBuilding2", 0.5};
			cost = 0.7;
		};
		class ShotgunCore: Default //inherits 144 parameters from bin\config.bin/CfgAmmo/Default, sources - []
		{
			simulation = "shotSpread";
			simulationStep = 0.05;
			timeToLive = 3;
			soundFly[] = {"", 0.251189, 0.7};
			explosive = 0;
			visibleFire = 16;
			audibleFire = 16;
			visibleFireTime = 3;
			soundHit1[] = {"", 0.0316228, 1};
			soundHit2[] = {"", 0.0316228, 1};
			soundHit3[] = {"", 0.0316228, 1};
			soundHitMan1[] = {"", 0.0125893, 1};
			soundHitMan2[] = {"", 0.0125893, 1};
			soundHitArmor1[] = {"", 0.0316228, 1};
			soundHitArmor2[] = {"", 0.0316228, 1};
			soundHitBuilding1[] = {"", 0.0316228, 1};
			soundHitBuilding2[] = {"", 0.0316228, 1};
			hitGround[] = {"soundHit1", 0.33, "soundHit2", 0.33, "soundHit3", 0.33};
			hitMan[] = {"soundHitMan1", 0.5, "soundHitMan2", 0.5};
			hitArmor[] = {"soundHitArmor1", 0.7, "soundHitArmor2", 0.3};
			hitBuilding[] = {"soundHitBuilding1", 0.5, "soundHitBuilding2", 0.5};
			cost = 0.7;
		};
		class ShellCore: Default //inherits 144 parameters from bin\config.bin/CfgAmmo/Default, sources - []
		{
			simulation = "shotShell";
			simulationStep = 0.05;
			timeToLive = 20;
			cost = 1000;
			soundHit[] = {"", 316.228, 1};
			soundFly[] = {"", 0.0316228, 4};
			indirectHitRange = 8;
			visibleFire = 16;
			audibleFire = 16;
			visibleFireTime = 10;
			deflecting = 5;
		};
		class SubmunitionCore: Default //inherits 144 parameters from bin\config.bin/CfgAmmo/Default, sources - []
		{
			simulation = "shotSubmunitions";
			simulationStep = 0.05;
			timeToLive = 180;
			cost = 1000;
			soundHit[] = {"", 316.228, 1};
			soundFly[] = {"", 0.0316228, 4};
			hitOnWater = 1;
			artilleryLock = 1;
			indirectHitRange = 8;
			visibleFire = 16;
			audibleFire = 16;
			visibleFireTime = 10;
			deflecting = 5;
		};
		class ShotDeployCore: Default //inherits 144 parameters from bin\config.bin/CfgAmmo/Default, sources - []
		{
			simulation = "shotDeploy";
			simulationStep = 0.05;
			timeToLive = 180;
			cost = 1000;
			soundHit[] = {"", 316.228, 1};
			soundFly[] = {"", 0.0316228, 4};
			hitOnWater = 1;
			artilleryLock = 1;
			indirectHitRange = 8;
			visibleFire = 16;
			audibleFire = 16;
			visibleFireTime = 10;
			deflecting = 5;
		};
		class GrenadeCore: Default //inherits 144 parameters from bin\config.bin/CfgAmmo/Default, sources - []
		{
			explosive = 1;
			hit = 20;
			indirectHit = 18;
			indirectHitRange = 7;
			cost = 40;
			simulation = "shotShell";
			simulationStep = 0.05;
			soundHit[] = {"", 10, 1};
			soundFly[] = {"", 3.16228e-005, 1};
			soundEngine[] = {"", 0.0001, 4};
			visibleFire = 2;
			audibleFire = 0.25;
			visibleFireTime = 0;
			timeToLive = 20;
			deflecting = 60;
		};
		class TimeBombCore: Default //inherits 144 parameters from bin\config.bin/CfgAmmo/Default, sources - []
		{
			hit = 700;
			indirectHit = 700;
			indirectHitRange = 7;
			model = "";
			cost = 2000;
			simulation = "shotTimeBomb";
			simulationStep = 0.1;
			soundHit[] = {"", 100, 1};
			soundFly[] = {"", 0, 1};
			soundEngine[] = {"", 0, 1};
			visibleFire = 0;
			audibleFire = 0;
			visibleFireTime = 0;
			timeToLive = 0;
			triggerWhenDestroyed = 1;
			mineCanBeReactivated = 1;
		};
		class LaserCore: Default //inherits 144 parameters from bin\config.bin/CfgAmmo/Default, sources - []
		{
			simulation = "shotLaser";
			simulationStep = 0.05;
			timeToLive = 1;
			soundFly[] = {"", 0.251189, 0.7};
			explosive = 0;
			visibleFire = 32;
			audibleFire = 32;
			visibleFireTime = 1;
			recoil = "Empty";
			recoilProne = "Empty";
			soundHit1[] = {"", 0.0316228, 1};
			soundHit2[] = {"", 0.0316228, 1};
			soundHit3[] = {"", 0.0316228, 1};
			soundHitMan1[] = {"", 0.0125893, 1};
			soundHitMan2[] = {"", 0.0125893, 1};
			soundHitArmor1[] = {"", 0.0316228, 1};
			soundHitArmor2[] = {"", 0.0316228, 1};
			soundHitBuilding1[] = {"", 0.0316228, 1};
			soundHitBuilding2[] = {"", 0.0316228, 1};
			hitGround[] = {"soundHit1", 0.33, "soundHit2", 0.33, "soundHit3", 0.33};
			hitMan[] = {"soundHitMan1", 0.5, "soundHitMan2", 0.5};
			hitArmor[] = {"soundHitArmor1", 0.7, "soundHitArmor2", 0.3};
			hitBuilding[] = {"soundHitBuilding1", 0.5, "soundHitBuilding2", 0.5};
			cost = 0.7;
		};
		class PipeBombCore: TimeBombCore //inherits 16 parameters from bin\config.bin/CfgAmmo/TimeBombCore, sources - []
		{
			simulation = "shotMine";
			mineTrigger = "RemoteTrigger";
		};
		class DirectionalBombCore: TimeBombCore //inherits 16 parameters from bin\config.bin/CfgAmmo/TimeBombCore, sources - []
		{
			hit = 750;
			indirectHit = 750;
			indirectHitRange = 10;
			simulation = "shotDirectionalBomb";
			directionalExplosion = 1;
			explosionAngle = 80;
		};
		class BoundingMineCore: TimeBombCore //inherits 16 parameters from bin\config.bin/CfgAmmo/TimeBombCore, sources - []
		{
			hit = 750;
			indirectHit = 750;
			indirectHitRange = 5;
			simulation = "shotBoundingMine";
			mineBoundingTime = 0.2;
			mineBoundingDist = 3;
		};
		class MineCore: TimeBombCore //inherits 16 parameters from bin\config.bin/CfgAmmo/TimeBombCore, sources - []
		{
			hit = 750;
			indirectHit = 750;
			indirectHitRange = 5;
			simulation = "shotMine";
			model = "";
			defaultMagazine = "";
		};
		class FlareCore: GrenadeCore //inherits 15 parameters from bin\config.bin/CfgAmmo/GrenadeCore, sources - []
		{
			timeToLive = 30;
			hit = 5;
			indirectHit = 2;
			indirectHitRange = 0.2;
			cost = 100;
			simulation = "shotIlluminating";
			simulationStep = 0.05;
			explosive = 0;
			soundHit[] = {"", 0, 1};
			lightColor[] = {1, 1, 1, 0};
			brightness = 2;
			size = 1;
			deflecting = 60;
			thrust = 0;
			airFriction = 0;
			sideairFriction = 0;
			artilleryLock = 1;
		};
		class SmokeShellCore: GrenadeCore //inherits 15 parameters from bin\config.bin/CfgAmmo/GrenadeCore, sources - []
		{
			timeToLive = 60;
			visibleFire = 2;
			audibleFire = 0.25;
			visibleFireTime = 1;
			hit = 5;
			indirectHit = 2;
			indirectHitRange = 0.2;
			cost = 100;
			simulation = "shotSmokeX";
			explosive = 0;
			soundHit[] = {"", 0, 1};
			smokeColor[] = {1, 1, 1, 0};
			deflecting = 60;
		};
		class FakeAmmo: BulletCore //inherits 22 parameters from bin\config.bin/CfgAmmo/BulletCore, sources - []
		{
			hit = 13;
			indirectHit = 4;
			indirectHitRange = 0.2;
			cost = 6;
			airlock = 1;
			explosive = 0;
			visibleFire = 16;
			audibleFire = 16;
			visibleFireTime = 3;
		};
		class BulletBase: BulletCore //inherits 22 parameters from bin\config.bin/CfgAmmo/BulletCore, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			visibleFire = 3;
			audibleFire = 40;
			visibleFireTime = 2;
			dangerRadiusBulletClose = 4;
			dangerRadiusHit = -1;
			suppressionRadiusBulletClose = 2;
			suppressionRadiusHit = 4;
			hit = 8;
			indirectHit = 0;
			indirectHitRange = 0;
			model = "\A3\Weapons_f\ammo\shell";
			caliber = 1;
			cartridge = "FxCartridge_556";
			cost = 1;
			timeToLive = 6;
			deflecting = 15;
			tracerStartTime = -1;
			muzzleEffect = "";
			waterEffectOffset = 0.8;
			effectFly = "AmmoClassic";
			aiAmmoUsageFlags = "64 + 128 + 256";
			soundImpactDefault1[] = {"A3\Sounds_F\weapons\Grenades\Grenade_Roll", 2.51189, 1, 200};
			impactGroundSoft[] = {"soundImpactDefault1", 1};
			impactGroundHard[] = {"soundImpactDefault1", 1};
			impactMan[] = {"soundImpactDefault1", 1};
			impactIron[] = {"soundImpactDefault1", 1};
			impactArmor[] = {"soundImpactDefault1", 1};
			impactBuilding[] = {"soundImpactDefault1", 1};
			impactFoliage[] = {"soundImpactDefault1", 1};
			impactWood[] = {"soundImpactDefault1", 1};
			impactGlass[] = {"soundImpactDefault1", 1};
			impactGlassArmored[] = {"soundImpactDefault1", 1};
			impactConcrete[] = {"soundImpactDefault1", 1};
			impactTyre[] = {"soundImpactDefault1", 1};
			impactRubber[] = {"soundImpactDefault1", 1};
			impactPlastic[] = {"soundImpactDefault1", 1};
			impactDefault[] = {"soundImpactDefault1", 1};
			impactMetal[] = {"soundImpactDefault1", 1};
			impactMetalplate[] = {"soundImpactDefault1", 1};
			impactWater[] = {"soundImpactDefault1", 1};
			soundDefault1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01", 1.99526, 1, 60};
			soundDefault2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_02", 1.99526, 1, 60};
			soundDefault3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_03", 1.99526, 1, 60};
			soundDefault4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_04", 1.99526, 1, 60};
			soundDefault5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_05", 1.99526, 1, 60};
			soundDefault6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_06", 1.99526, 1, 60};
			soundDefault7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_07", 1.99526, 1, 60};
			soundDefault8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_08", 1.99526, 1, 60};
			soundGroundSoft1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_01", 1.99526, 1, 60};
			soundGroundSoft2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_02", 1.99526, 1, 60};
			soundGroundSoft3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_03", 1.99526, 1, 60};
			soundGroundSoft4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_04", 1.99526, 1, 60};
			soundGroundSoft5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_05", 1.99526, 1, 60};
			soundGroundSoft6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_06", 1.99526, 1, 60};
			soundGroundSoft7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_07", 1.99526, 1, 60};
			soundGroundSoft8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_08", 1.99526, 1, 60};
			soundGroundHard1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_01", 1.41254, 1, 80};
			soundGroundHard2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_02", 1.41254, 1, 80};
			soundGroundHard3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_03", 1.41254, 1, 80};
			soundGroundHard4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_04", 1.41254, 1, 80};
			soundGroundHard5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_05", 1.41254, 1, 80};
			soundGroundHard6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_06", 1.41254, 1, 80};
			soundGroundHard7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_07", 1.41254, 1, 80};
			soundGroundHard8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_08", 1.41254, 1, 80};
			soundGlass1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_01", 1.25893, 1, 100};
			soundGlass2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_02", 1.25893, 1, 100};
			soundGlass3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_03", 1.25893, 1, 100};
			soundGlass4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_04", 1.25893, 1, 100};
			soundGlass5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_05", 1.25893, 1, 100};
			soundGlass6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_06", 1.25893, 1, 100};
			soundGlass7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_07", 1.25893, 1, 100};
			soundGlass8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_08", 1.25893, 1, 100};
			soundGlassArmored1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_01", 1.58489, 1, 60};
			soundGlassArmored2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_02", 1.58489, 1, 60};
			soundGlassArmored3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_03", 1.58489, 1, 60};
			soundGlassArmored4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_04", 1.58489, 1, 60};
			soundGlassArmored5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_05", 1.58489, 1, 60};
			soundGlassArmored6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_06", 1.58489, 1, 60};
			soundGlassArmored7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_07", 1.58489, 1, 60};
			soundGlassArmored8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_08", 1.58489, 1, 60};
			soundMetal1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_01", 1.58489, 1, 80};
			soundMetal2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_02", 1.58489, 1, 80};
			soundMetal3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_03", 1.58489, 1, 80};
			soundMetal4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_04", 1.58489, 1, 80};
			soundMetal5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_05", 1.58489, 1, 80};
			soundMetal6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_06", 1.58489, 1, 80};
			soundMetal7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_07", 1.58489, 1, 80};
			soundMetal8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_08", 1.58489, 1, 80};
			soundVehiclePlate1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_01", 1.58489, 1, 80};
			soundVehiclePlate2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_02", 1.58489, 1, 80};
			soundVehiclePlate3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_03", 1.58489, 1, 80};
			soundVehiclePlate4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_04", 1.58489, 1, 80};
			soundVehiclePlate5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_05", 1.58489, 1, 80};
			soundVehiclePlate6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_06", 1.58489, 1, 80};
			soundVehiclePlate7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_07", 1.58489, 1, 80};
			soundVehiclePlate8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_08", 1.58489, 1, 80};
			soundWood1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_01", 1.99526, 1, 60};
			soundWood2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_02", 1.99526, 1, 60};
			soundWood3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_03", 1.99526, 1, 60};
			soundWood4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_04", 1.99526, 1, 60};
			soundWood5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_05", 1.99526, 1, 60};
			soundWood6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_06", 1.99526, 1, 60};
			soundWood7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_07", 1.99526, 1, 60};
			soundWood8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_08", 1.99526, 1, 60};
			soundHitBody1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_01", 1.58489, 1, 10};
			soundHitBody2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_02", 1.58489, 1, 10};
			soundHitBody3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_03", 1.58489, 1, 10};
			soundHitBody4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_04", 1.58489, 1, 10};
			soundHitBody5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_05", 1.58489, 1, 10};
			soundHitBody6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_06", 1.58489, 1, 10};
			soundHitBody7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_07", 1.58489, 1, 10};
			soundHitBody8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_08", 1.58489, 1, 10};
			soundHitBuilding1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_01", 2.23872, 1, 50};
			soundHitBuilding2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_02", 2.23872, 1, 50};
			soundHitBuilding3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_03", 2.23872, 1, 50};
			soundHitBuilding4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_04", 2.23872, 1, 50};
			soundHitBuilding5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_05", 2.23872, 1, 50};
			soundHitBuilding6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_06", 2.23872, 1, 50};
			soundHitBuilding7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_07", 2.23872, 1, 50};
			soundHitBuilding8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_08", 2.23872, 1, 50};
			soundHitFoliage1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_01", 0.707946, 1, 20};
			soundHitFoliage2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_02", 0.707946, 1, 20};
			soundHitFoliage3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_03", 0.707946, 1, 20};
			soundHitFoliage4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_04", 0.707946, 1, 20};
			soundHitFoliage5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_05", 0.707946, 1, 20};
			soundHitFoliage6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_06", 0.707946, 1, 20};
			soundHitFoliage7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_07", 0.707946, 1, 20};
			soundHitFoliage8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_08", 0.707946, 1, 20};
			soundPlastic1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_01", 1, 1, 70};
			soundPlastic2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_02", 1, 1, 70};
			soundPlastic3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_03", 1, 1, 70};
			soundPlastic4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_04", 1, 1, 70};
			soundPlastic5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_05", 1, 1, 70};
			soundPlastic6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_06", 1, 1, 70};
			soundPlastic7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_07", 1, 1, 70};
			soundPlastic8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_08", 1, 1, 70};
			soundConcrete1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01", 1.41254, 1, 70};
			soundConcrete2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_02", 1.41254, 1, 70};
			soundConcrete3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_03", 1.41254, 1, 70};
			soundConcrete4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_04", 1.41254, 1, 70};
			soundConcrete5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_05", 1.41254, 1, 70};
			soundConcrete6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_06", 1.41254, 1, 70};
			soundConcrete7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_07", 1.41254, 1, 70};
			soundConcrete8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_08", 1.41254, 1, 70};
			soundTyre1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_01", 0.891251, 1, 50};
			soundTyre2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_02", 0.891251, 1, 50};
			soundTyre3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_03", 0.891251, 1, 50};
			soundTyre4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_04", 0.891251, 1, 50};
			soundTyre5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_05", 0.891251, 1, 50};
			soundTyre6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_06", 0.891251, 1, 50};
			soundTyre7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_07", 0.891251, 1, 50};
			soundTyre8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_08", 0.891251, 1, 50};
			soundRubber1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_01", 0.891251, 1, 50};
			soundRubber2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_02", 0.891251, 1, 50};
			soundRubber3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_03", 0.891251, 1, 50};
			soundRubber4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_04", 0.891251, 1, 50};
			soundRubber5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_05", 0.891251, 1, 50};
			soundRubber6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_06", 0.891251, 1, 50};
			soundWater1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_01", 1, 1, 40};
			soundWater2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_02", 1, 1, 40};
			soundWater3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_03", 1, 1, 40};
			soundWater4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_04", 1, 1, 40};
			soundWater5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_05", 1, 1, 40};
			soundWater6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_06", 1, 1, 40};
			soundWater7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_07", 1, 1, 40};
			soundWater8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_08", 1, 1, 40};
			soundMetalInt1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_01", 1.58489, 1, 80};
			soundMetalInt2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_02", 1.58489, 1, 80};
			soundMetalInt3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_03", 1.58489, 1, 80};
			soundMetalInt4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_04", 1.58489, 1, 80};
			soundMetalInt5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_05", 1.58489, 1, 80};
			soundMetalInt6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_06", 1.58489, 1, 80};
			soundVehiclePlateInt1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_01", 1.58489, 1, 80};
			soundVehiclePlateInt2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_02", 1.58489, 1, 80};
			soundVehiclePlateInt3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_03", 1.58489, 1, 80};
			soundVehiclePlateInt4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_04", 1.58489, 1, 80};
			soundVehiclePlateInt5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_05", 1.58489, 1, 80};
			soundVehiclePlateInt6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_06", 1.58489, 1, 80};
			soundVehiclePlateInt7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_07", 1.58489, 1, 80};
			soundVehiclePlateInt8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_08", 1.58489, 1, 80};
			soundVehiclePlateInt9[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_09", 1.58489, 1, 80};
			soundVehiclePlateInt10[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_10", 1.58489, 1, 80};
			soundVehiclePlateInt11[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_11", 1.58489, 1, 80};
			soundVehiclePlateInt12[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_12", 1.58489, 1, 80};
			soundVehiclePlateInt13[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_13", 1.58489, 1, 80};
			soundVehiclePlateInt14[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_14", 1.58489, 1, 80};
			soundVehiclePlateInt15[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_15", 1.58489, 1, 80};
			hitArmorInt[] = {"soundVehiclePlateInt1", 0.066, "soundVehiclePlateInt2", 0.066, "soundVehiclePlateInt3", 0.066, "soundVehiclePlateInt4", 0.066, "soundVehiclePlateInt5", 0.066, "soundVehiclePlateInt6", 0.066, "soundVehiclePlateInt7", 0.066, "soundVehiclePlateInt8", 0.066, "soundVehiclePlateInt9", 0.066, "soundVehiclePlateInt10", 0.066, "soundVehiclePlateInt11", 0.066, "soundVehiclePlateInt12", 0.066, "soundVehiclePlateInt13", 0.066, "soundVehiclePlateInt14", 0.066, "soundVehiclePlateInt15", 0.066};
			hitMetalInt[] = {"soundMetalInt1", 0.166, "soundMetalInt2", 0.166, "soundMetalInt3", 0.166, "soundMetalInt4", 0.166, "soundMetalInt5", 0.166, "soundMetalInt6", 0.166};
			hitGroundSoft[] = {"soundGroundSoft1", 0.2, "soundGroundSoft2", 0.2, "soundGroundSoft3", 0.1, "soundGroundSoft4", 0.1, "soundGroundSoft5", 0.1, "soundGroundSoft6", 0.1, "soundGroundSoft7", 0.1, "soundGroundSoft8", 0.1};
			hitGroundHard[] = {"soundGroundHard1", 0.2, "soundGroundHard2", 0.2, "soundGroundHard3", 0.1, "soundGroundHard4", 0.1, "soundGroundHard5", 0.1, "soundGroundHard6", 0.1, "soundGroundHard7", 0.1, "soundGroundHard8", 0.1};
			hitMan[] = {"soundHitBody1", 0.125, "soundHitBody2", 0.125, "soundHitBody3", 0.125, "soundHitBody4", 0.125, "soundHitBody5", 0.125, "soundHitBody6", 0.125, "soundHitBody7", 0.125, "soundHitBody8", 0.125};
			hitArmor[] = {"soundVehiclePlate1", 0.125, "soundVehiclePlate2", 0.125, "soundVehiclePlate3", 0.125, "soundVehiclePlate4", 0.125, "soundVehiclePlate5", 0.125, "soundVehiclePlate6", 0.125, "soundVehiclePlate7", 0.125, "soundVehiclePlate8", 0.125};
			hitBuilding[] = {"soundHitBuilding1", 0.2, "soundHitBuilding2", 0.2, "soundHitBuilding3", 0.1, "soundHitBuilding4", 0.1, "soundHitBuilding5", 0.1, "soundHitBuilding6", 0.1, "soundHitBuilding7", 0.1, "soundHitBuilding8", 0.1};
			hitFoliage[] = {"soundHitFoliage1", 0.125, "soundHitFoliage2", 0.125, "soundHitFoliage3", 0.125, "soundHitFoliage4", 0.125, "soundHitFoliage5", 0.125, "soundHitFoliage6", 0.125, "soundHitFoliage7", 0.125, "soundHitFoliage8", 0.125};
			hitWood[] = {"soundWood1", 0.125, "soundWood2", 0.125, "soundWood3", 0.125, "soundWood4", 0.125, "soundWood5", 0.125, "soundWood6", 0.125, "soundWood7", 0.125, "soundWood8", 0.125};
			hitGlass[] = {"soundGlass1", 0.125, "soundGlass2", 0.125, "soundGlass3", 0.125, "soundGlass4", 0.125, "soundGlass5", 0.125, "soundGlass6", 0.125, "soundGlass7", 0.125, "soundGlass8", 0.125};
			hitGlassArmored[] = {"soundGlassArmored1", 0.125, "soundGlassArmored2", 0.125, "soundGlassArmored3", 0.125, "soundGlassArmored4", 0.125, "soundGlassArmored5", 0.125, "soundGlassArmored6", 0.125, "soundGlassArmored7", 0.125, "soundGlassArmored8", 0.125};
			hitConcrete[] = {"soundConcrete1", 0.125, "soundConcrete2", 0.125, "soundConcrete3", 0.125, "soundConcrete4", 0.125, "soundConcrete5", 0.125, "soundConcrete6", 0.125, "soundConcrete7", 0.125, "soundConcrete8", 0.125};
			hitTyre[] = {"soundTyre1", 0.125, "soundTyre2", 0.125, "soundTyre3", 0.125, "soundTyre4", 0.125, "soundTyre5", 0.125, "soundTyre6", 0.125, "soundTyre7", 0.125, "soundTyre8", 0.125};
			hitRubber[] = {"soundRubber1", 0.125, "soundRubber2", 0.125, "soundRubber3", 0.125, "soundRubber4", 0.125, "soundRubber5", 0.125, "soundRubber6", 0.125};
			hitPlastic[] = {"soundPlastic1", 0.125, "soundPlastic2", 0.125, "soundPlastic3", 0.125, "soundPlastic4", 0.125, "soundPlastic5", 0.125, "soundPlastic6", 0.125, "soundPlastic7", 0.125, "soundPlastic8", 0.125};
			hitDefault[] = {"soundDefault1", 0.2, "soundDefault2", 0.2, "soundDefault3", 0.1, "soundDefault4", 0.1, "soundDefault5", 0.1, "soundDefault6", 0.1, "soundDefault7", 0.1, "soundDefault8", 0.1};
			hitMetal[] = {"soundMetal1", 0.125, "soundMetal2", 0.125, "soundMetal3", 0.125, "soundMetal4", 0.125, "soundMetal5", 0.125, "soundMetal6", 0.125, "soundMetal7", 0.125, "soundMetal8", 0.125};
			hitMetalplate[] = {"soundVehiclePlate1", 0.125, "soundVehiclePlate2", 0.125, "soundVehiclePlate3", 0.125, "soundVehiclePlate4", 0.125, "soundVehiclePlate5", 0.125, "soundVehiclePlate6", 0.125, "soundVehiclePlate7", 0.125, "soundVehiclePlate8", 0.125};
			hitWater[] = {"soundWater1", 0.125, "soundWater2", 0.125, "soundWater3", 0.125, "soundWater4", 0.125, "soundWater5", 0.125, "soundWater6", 0.125, "soundWater7", 0.125, "soundWater8", 0.125};
			bulletFly1[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby01", 1.58489, 1, 30};
			bulletFly2[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby02", 1.58489, 1, 30};
			bulletFly3[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby03", 1.58489, 1, 30};
			bulletFly4[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby04", 1.58489, 1, 30};
			bulletFly5[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby05", 1.58489, 1, 30};
			bulletFly6[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby06", 1.58489, 1, 30};
			bulletFly7[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby07", 1.58489, 1, 30};
			bulletFly8[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby08", 1.58489, 1, 30};
			bulletFly9[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby09", 1.58489, 1, 30};
			bulletFly10[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby10", 1.58489, 1, 30};
			bulletFly11[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby11", 1.58489, 1, 30};
			bulletFly12[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby12", 1.58489, 1, 30};
			bulletFly[] = {"bulletFly1", 0.083, "bulletFly2", 0.083, "bulletFly3", 0.083, "bulletFly4", 0.083, "bulletFly5", 0.083, "bulletFly6", 0.083, "bulletFly7", 0.083, "bulletFly8", 0.083, "bulletFly9", 0.083, "bulletFly10", 0.083, "bulletFly11", 0.083, "bulletFly12", 0.083};
			supersonicCrackNear[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_close", 3.16228, 1, 200};
			supersonicCrackFar[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_middle", 3.16228, 1, 200};
			class SuperSonicCrack //sources - ["A3_Weapons_F"]
			{
				superSonicCrack[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow1", 3.16228, 1, 200};
				class SCrackForest //sources - ["A3_Weapons_F"]
				{
					range[] = {0, 500};
					sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_forest1", 1, 1, 500};
					sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_forest2", 1, 1, 500};
					sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_forest3", 1, 1, 500};
					sounds[] = {"sound1", 0.333, "sound2", 0.333, "sound3", 0.333};
					frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
					trigger = "forest";
				};
				class SCrackTrees //sources - ["A3_Weapons_F"]
				{
					range[] = {0, 500};
					sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_trees1", 1, 1, 500};
					sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_trees2", 1, 1, 500};
					sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_trees3", 1, 1, 500};
					sounds[] = {"sound1", 0.333, "sound2", 0.333, "sound3", 0.333};
					frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
					trigger = "trees";
				};
				class SCrackMeadow //sources - ["A3_Weapons_F"]
				{
					range[] = {0, 500};
					sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow1", 1, 1, 500};
					sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow2", 1, 1, 500};
					sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow3", 1, 1, 500};
					sounds[] = {"sound1", 0.333, "sound2", 0.333, "sound3", 0.333};
					frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
					trigger = "meadow max sea";
				};
				class SCrackHouses //sources - ["A3_Weapons_F"]
				{
					range[] = {0, 500};
					sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_houses1", 1, 1, 500};
					sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_houses2", 1, 1, 500};
					sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_houses3", 1, 1, 500};
					sounds[] = {"sound1", 0.333, "sound2", 0.333, "sound3", 0.333};
					frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
					trigger = "houses max interior";
				};
			};
			class HitEffects //sources - ["A3_Weapons_F"]
			{
				Hit_Foliage_green = "ImpactLeavesGreen";
				Hit_Foliage_Dead = "ImpactLeavesDead";
				Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
				Hit_Foliage_Palm = "ImpactLeavesPalm";
				Hit_Foliage_Pine = "ImpactLeavesPine";
				hitFoliage = "ImpactLeaves";
				hitGlass = "ImpactGlass";
				hitGlassArmored = "ImpactGlassThin";
				hitWood = "ImpactWood";
				hitMetal = "ImpactMetal";
				hitMetalPlate = "ImpactMetal";
				hitBuilding = "ImpactPlaster";
				hitPlastic = "ImpactPlastic";
				hitRubber = "ImpactRubber";
				hitTyre = "ImpactTyre";
				hitConcrete = "ImpactConcrete";
				hitMan = "ImpactEffectsBlood";
				hitGroundSoft = "ImpactEffectsSmall";
				hitGroundRed = "ImpactEffectsRed";
				hitGroundHard = "ImpactEffectsHardGround";
				hitWater = "ImpactEffectsWater";
				hitVirtual = "ImpactMetal";
			};
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 1.73205;
				duration = 0.4;
				frequency = 20;
				distance = 5.19615;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 3;
				duration = 0.2;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 0;
				duration = 0;
				frequency = 0;
				distance = 0;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 0;
				duration = 0;
				frequency = 0;
				distance = 0;
			};
			soundSetBulletFly[] = {"bulletFlyBy_SoundSet"};
			soundSetSonicCrack[] = {"bulletSonicCrack_SoundSet", "bulletSonicCrackTail_SoundSet"};
		};
		class ShellBase: ShellCore //inherits 11 parameters from bin\config.bin/CfgAmmo/ShellCore, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			supersonicCrackNear[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_close", 0.316228, 1, 50};
			supersonicCrackFar[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_50meters", 0.223872, 1, 150};
			CraterEffects = "HEShellCrater";
			CraterWaterEffects = "ImpactEffectsWaterHE";
			ExplosionEffects = "HEShellExplosion";
			visibleFire = 64;
			audibleFire = 250;
			dangerRadiusHit = -1;
			suppressionRadiusHit = 30;
			timeToLive = 360;
			muzzleEffect = "";
			caliber = 34;
			whistleOnFire = 2;
			aiAmmoUsageFlags = "64 + 128 + 256";
			class HitEffects //sources - ["A3_Weapons_F"]
			{
				hitWater = "ImpactEffectsWaterRocket";
			};
			soundFakeFall0[] = {"a3\Sounds_F\weapons\falling_bomb\fall_01", 3.16228, 1, 1000};
			soundFakeFall1[] = {"a3\Sounds_F\weapons\falling_bomb\fall_02", 3.16228, 1, 1000};
			soundFakeFall2[] = {"a3\Sounds_F\weapons\falling_bomb\fall_03", 3.16228, 1, 1000};
			soundFakeFall3[] = {"a3\Sounds_F\weapons\falling_bomb\fall_04", 3.16228, 1, 1000};
			soundFakeFall[] = {"soundFakeFall0", 0.25, "soundFakeFall1", 0.25, "soundFakeFall2", 0.25, "soundFakeFall3", 0.25};
			soundSetSonicCrack[] = {"bulletSonicCrack_SoundSet", "bulletSonicCrackTail_SoundSet"};
		};
		class ShotDeployBase: ShotDeployCore //inherits 13 parameters from bin\config.bin/CfgAmmo/ShotDeployCore, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_F\Ammo\shell.p3d";
		};
		class SubmunitionBase: SubmunitionCore //inherits 13 parameters from bin\config.bin/CfgAmmo/SubmunitionCore, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_F\Ammo\shell.p3d";
		};
		class SubmunitionBullet: SubmunitionBase //inherits 1 parameters from bin\config.bin/CfgAmmo/SubmunitionBase, sources - ["A3_Weapons_F"]
		{
			explosive = 0;
			triggerTime = 1;
			submunitionConeAngle = 0;
			submunitionCount = 1;
			submunitionAmmo = "BulletBase";
			class HitEffects //sources - ["A3_Weapons_F"]
			{
				Hit_Foliage_green = "ImpactLeavesGreen";
				Hit_Foliage_Dead = "ImpactLeavesDead";
				Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
				Hit_Foliage_Palm = "ImpactLeavesPalm";
				Hit_Foliage_Pine = "ImpactLeavesPine";
				hitFoliage = "ImpactLeaves";
				hitGlass = "ImpactGlass";
				hitGlassArmored = "ImpactGlassThin";
				hitWood = "ImpactWood";
				hitMetal = "ImpactMetal";
				hitMetalPlate = "ImpactMetal";
				hitBuilding = "ImpactPlaster";
				hitPlastic = "ImpactPlastic";
				hitRubber = "ImpactRubber";
				hitTyre = "ImpactTyre";
				hitConcrete = "ImpactConcrete";
				hitMan = "ImpactEffectsBlood";
				hitGroundSoft = "ImpactEffectsSmall";
				hitGroundRed = "ImpactEffectsRed";
				hitGroundHard = "ImpactEffectsHardGround";
				hitWater = "ImpactEffectsWater";
				hitVirtual = "ImpactMetal";
			};
		};
		class MissileBase: MissileCore //inherits 18 parameters from bin\config.bin/CfgAmmo/MissileCore, sources - ["A3_Weapons_F"]
		{
			manualControl = 0;
			maneuvrability = 20;
			maxSpeed = 500;
			simulationStep = 0.01;
			airFriction = 0.2;
			sideAirFriction = 0.001;
			maxControlRange = 4000;
			soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 2000};
			soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 2000};
			soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 2000};
			multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
			explosionSoundEffect = "DefaultExplosion";
			soundFly[] = {"", 1, 1, 400};
			soundEngine[] = {"", 1, 1, 50};
			supersonicCrackNear[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_close", 0.398107, 1, 20};
			supersonicCrackFar[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_50meters", 0.316228, 1, 50};
			CraterEffects = "ATMissileCrater";
			explosionEffects = "ATMissileExplosion";
			muzzleEffect = "BIS_fnc_effectFiredRocket";
			effectsMissile = "missile4";
			deflecting = 0;
			weaponLockSystem = "2 + 16";
			cmImmunity = 0.9;
			dangerRadiusHit = -1;
			suppressionRadiusHit = 30;
			class HitEffects //sources - ["A3_Weapons_F"]
			{
				hitWater = "ImpactEffectsWaterRocket";
			};
			class Components //sources - []
			{
			};
			maverickWeaponIndexOffset = 0;
			htMin = 60;
			htMax = 1800;
			afMax = 200;
			mfMax = 100;
			mFact = 0;
			tBody = 0;
		};
		class Grenade: Default //inherits 144 parameters from bin\config.bin/CfgAmmo/Default, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			model = "\A3\Weapons_f\ammo\Handgrenade";
			hit = 10;
			indirectHit = 8;
			indirectHitRange = 6;
			explosive = 1;
			explosionEffectsRadius = 5;
			typicalspeed = 60;
			deflecting = 15;
			cost = 40;
			simulation = "shotGrenade";
			simulationStep = 0.05;
			shadow = 1;
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_01", 2.51189, 1, 1500};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_02", 2.51189, 1, 1500};
			soundHit3[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_03", 2.51189, 1, 1500};
			soundHit4[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_04", 2.51189, 1, 1500};
			multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
			soundImpactSoft1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_1", 1.41254, 1, 45};
			soundImpactSoft2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_2", 1.41254, 1, 45};
			soundImpactSoft3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_3", 1.41254, 1, 45};
			soundImpactSoft4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_4", 1.41254, 1, 45};
			soundImpactSoft5[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_5", 1.41254, 1, 45};
			soundImpactSoft6[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_6", 1.41254, 1, 45};
			soundImpactSoft7[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_7", 1.41254, 1, 45};
			soundImpactHard1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_1", 1.41254, 1, 65};
			soundImpactHard2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_2", 1.41254, 1, 65};
			soundImpactHard3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_3", 1.41254, 1, 65};
			soundImpactHard4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_4", 1.41254, 1, 65};
			soundImpactHard5[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_5", 1.41254, 1, 65};
			soundImpactHard6[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_6", 1.41254, 1, 65};
			soundImpactHard7[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_7", 1.41254, 1, 65};
			soundImpactIron1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_1", 1.25893, 1, 95};
			soundImpactIron2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_2", 1.25893, 1, 95};
			soundImpactIron3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_3", 1.25893, 1, 95};
			soundImpactIron4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_4", 1.25893, 1, 95};
			soundImpactIron5[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_5", 1.25893, 1, 95};
			soundImpactWoodExt1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_1", 1.41254, 1, 75};
			soundImpactWoodExt2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_2", 1.41254, 1, 75};
			soundImpactWoodExt3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_3", 1.41254, 1, 75};
			soundImpactWoodExt4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_4", 1.41254, 1, 75};
			soundImpactWater1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_1", 1.41254, 1, 55};
			soundImpactWater2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_2", 1.41254, 1, 55};
			soundImpactWater3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_3", 1.41254, 1, 55};
			impactGroundSoft[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1};
			impactGroundHard[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
			impactIron[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
			impactArmor[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
			impactBuilding[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
			impactFoliage[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1};
			impactWood[] = {"soundImpactWoodExt1", 0.25, "soundImpactWoodExt2", 0.25, "soundImpactWoodExt3", 0.25, "soundImpactWoodExt4", 0.25};
			impactGlass[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
			impactGlassArmored[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
			impactConcrete[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
			impactTyre[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1};
			impactRubber[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1};
			impactPlastic[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1};
			impactDefault[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
			impactMetal[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
			impactMetalplate[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
			impactWater[] = {"soundImpactWater1", 0.35, "soundImpactWater2", 0.35, "soundImpactWater3", 0.3};
			soundFly[] = {"", 0.1, 1, 20};
			soundEngine[] = {"", 1, 1};
			explosionSoundEffect = "DefaultExplosion";
			CraterEffects = "GrenadeCrater";
			CraterWaterEffects = "ImpactEffectsWaterExplosion";
			explosionEffects = "GrenadeExplosion";
			visibleFire = 1;
			audibleFire = 0.25;
			visibleFireTime = 0;
			whistleDist = 28;
			explosionTime = 5;
			timeToLive = 6;
			class HitEffects //sources - ["A3_Weapons_F"]
			{
				hitWater = "ImpactEffectsWaterRocket";
			};
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 6;
				duration = 1;
				frequency = 20;
				distance = 99.8178;
			};
			SoundSetExplosion[] = {"GrenadeHe_Exp_SoundSet", "GrenadeHe_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class RocketBase: RocketCore //inherits 13 parameters from bin\config.bin/CfgAmmo/RocketCore, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F.p3d";
			hit = 500;
			indirectHit = 150;
			indirectHitRange = 2;
			dangerRadiusHit = -1;
			suppressionRadiusHit = 30;
			soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_02", 2.51189, 1, 2500};
			explosionSoundEffect = "DefaultExplosion";
			soundFly[] = {"", 1, 1, 400};
			soundEngine[] = {"", 1, 1, 20};
			supersonicCrackNear[] = {"", 1, 1, 50};
			supersonicCrackFar[] = {"", 1, 1, 150};
			maxSpeed = 1;
			initTime = 0;
			thrustTime = 0.2;
			thrust = 2000;
			CraterEffects = "HERocketCrater";
			explosionEffects = "HERocketExplosion";
			muzzleEffect = "BIS_fnc_effectFiredRocket";
			effectsMissile = "missile1";
			class HitEffects //sources - ["A3_Weapons_F"]
			{
				hitWater = "ImpactEffectsWaterRocket";
			};
			airFriction = 0.1;
			sideAirFriction = 0.001;
		};
		class GrenadeBase: GrenadeCore //inherits 15 parameters from bin\config.bin/CfgAmmo/GrenadeCore, sources - ["A3_Weapons_F"]
		{
			soundHit1[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_1", 3.16228, 1, 1400};
			soundHit2[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_2", 3.16228, 1, 1400};
			soundHit3[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_3", 3.16228, 1, 1400};
			soundHit4[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_4", 3.16228, 1, 1400};
			soundHit5[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_5", 3.16228, 1, 1400};
			soundHit6[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_6", 3.16228, 1, 1400};
			multiSoundHit[] = {"soundHit1", 0.2, "soundHit2", 0.2, "soundHit3", 0.2, "soundHit4", 0.1, "soundHit5", 0.15, "soundHit6", 0.15};
			supersonicCrackNear[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_close", 0.316228, 1, 50};
			supersonicCrackFar[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_50meters", 0.223872, 1, 75};
			explosionSoundEffect = "DefaultExplosion";
			CraterEffects = "GrenadeCrater";
			explosionEffects = "GrenadeExplosion";
			muzzleEffect = "";
			explosionForceCoef = 4;
			shadow = 1;
		};
		class ShotgunBase: ShotgunCore //inherits 22 parameters from bin\config.bin/CfgAmmo/ShotgunCore, sources - ["A3_Weapons_F"]
		{
			waterEffectOffset = -0.8;
			dangerRadiusBulletClose = 4;
			dangerRadiusHit = 8;
			suppressionRadiusBulletClose = 2;
			suppressionRadiusHit = 4;
			model = "\A3\Weapons_f\ammo\shell";
			class HitEffects //sources - ["A3_Weapons_F"]
			{
				Hit_Foliage_green = "ImpactLeavesGreen";
				Hit_Foliage_Dead = "ImpactLeavesDead";
				Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
				Hit_Foliage_Palm = "ImpactLeavesPalm";
				Hit_Foliage_Pine = "ImpactLeavesPine";
				hitFoliage = "ImpactLeaves";
				hitGlass = "ImpactGlass";
				hitGlassArmored = "ImpactGlassThin";
				hitWood = "ImpactWood";
				hitMetal = "ImpactMetal";
				hitMetalPlate = "ImpactMetal";
				hitBuilding = "ImpactPlaster";
				hitPlastic = "ImpactPlastic";
				hitRubber = "ImpactRubber";
				hitConcrete = "ImpactConcrete";
				hitMan = "ImpactEffectsBlood";
				hitGroundSoft = "ImpactEffectsSmall";
				hitGroundRed = "ImpactEffectsRed";
				hitGroundHard = "ImpactEffectsHardGround";
				hitWater = "ImpactEffectsWater";
				hitVirtual = "hitArmor";
			};
		};
		class FuelExplosion: Default //inherits 144 parameters from bin\config.bin/CfgAmmo/Default, sources - ["A3_Weapons_F"]
		{
			hit = 100;
			indirectHit = 100;
			indirectHitRange = 2.5;
			model = "";
			simulation = "";
			cost = 1;
			SoundSetExplosion[] = {"ExplosiveCharge_Exp_SoundSet", "ExplosiveCharge_Tail_SoundSet", "Explosion_Debris_SoundSet"};
			explosionSoundEffect = "DefaultExplosion";
			soundFly[] = {"", 1, 1};
			soundEngine[] = {"", 1, 4};
			explosionEffects = "VehicleExplosionEffects";
		};
		class FuelExplosionBig: FuelExplosion //inherits 11 parameters from bin\config.bin/CfgAmmo/FuelExplosion, sources - ["A3_Weapons_F"]
		{
			explosionEffects = "VehicleExplosionEffectsBig";
		};
		class HelicopterExploSmall: ShellBase //inherits 21 parameters from bin\config.bin/CfgAmmo/ShellBase, sources - ["A3_Weapons_F"]
		{
			hit = 2500;
			indirectHit = 500;
			indirectHitRange = 5;
			typicalSpeed = 100;
			explosive = 1;
			cost = 300;
			model = "\A3\Weapons_f\empty";
			airFriction = 0;
			timeToLive = 1;
			explosionTime = 0.001;
			soundFly[] = {"", 1, 1};
			soundEngine[] = {"", 1, 4};
			explosionEffects = "HelicopterExplosionEffects";
			SoundSetExplosion[] = {"SmallIED_Exp_SoundSet", "SmallIED_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class HelicopterExploBig: HelicopterExploSmall //inherits 14 parameters from bin\config.bin/CfgAmmo/HelicopterExploSmall, sources - ["A3_Weapons_F"]
		{
			hit = 10000;
			indirectHit = 200;
			indirectHitRange = 7.5;
			explosionEffects = "HelicopterExplosionEffects2";
			explosionSoundEffect = "DefaultExplosion";
			SoundSetExplosion[] = {"BigIED_Exp_SoundSet", "BigIED_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class SmallSecondary: HelicopterExploSmall //inherits 14 parameters from bin\config.bin/CfgAmmo/HelicopterExploSmall, sources - ["A3_Weapons_F"]
		{
			hit = 5;
			indirectHit = 2;
			indirectHitRange = 5;
			explosionEffects = "SencondaryExplosion";
			craterEffects = "SecondaryCrater";
			SoundSetExplosion[] = {"ExplosiveCharge_Exp_SoundSet", "ExplosiveCharge_Tail_SoundSet", "Explosion_Debris_SoundSet"};
			explosionSoundEffect = "DefaultExplosion";
		};
		class Laserbeam: Default //inherits 144 parameters from bin\config.bin/CfgAmmo/Default, sources - ["A3_Weapons_F"]
		{
			hit = 500;
			indirectHit = 150;
			indirectHitRange = 2.5;
			model = "\A3\weapons_f\empty";
			simulation = "laserDesignate";
			simulationStep = 0.1;
			cost = 5000;
			timeToLive = 0;
			soundHit[] = {"", 19.9526, 1, 1500};
			soundFly[] = {"", 0.0001, 4};
			maxSpeed = 350;
			airLock = 1;
			manualControl = 1;
			maxControlRange = 0;
			aiRateOfFire = 0;
			aiRateOfFireDistance = 500;
			initTime = 0;
			maneuvrability = 0;
		};
		class B_556x45_Ball: BulletBase //inherits 229 parameters from bin\config.bin/CfgAmmo/BulletBase, sources - ["A3_Weapons_F"]
		{
			airLock = 1;
			hit = 8;
			indirectHit = 0;
			indirectHitRange = 0;
			cost = 1;
			typicalSpeed = 920;
			airFriction = -0.0012;
			waterFriction = -0.3;
			caliber = 0.7;
			deflecting = 20;
			model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
			tracerScale = 1;
			tracerStartTime = 0.05;
			tracerEndTime = 1;
			audibleFire = 35;
			dangerRadiusBulletClose = 8;
			dangerRadiusHit = 12;
			suppressionRadiusBulletClose = 6;
			suppressionRadiusHit = 8;
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 2.23607;
				duration = 0.4;
				frequency = 20;
				distance = 6.7082;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 5;
				duration = 0.2;
				frequency = 20;
				distance = 1;
			};
		};
		class B_556x45_Ball_Tracer_Red: B_556x45_Ball //inherits 21 parameters from bin\config.bin/CfgAmmo/B_556x45_Ball, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
			nvgOnly = 0;
		};
		class B_556x45_Ball_Tracer_Green: B_556x45_Ball //inherits 21 parameters from bin\config.bin/CfgAmmo/B_556x45_Ball, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
			nvgOnly = 0;
		};
		class B_556x45_Ball_Tracer_Yellow: B_556x45_Ball //inherits 21 parameters from bin\config.bin/CfgAmmo/B_556x45_Ball, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
			nvgOnly = 0;
		};
		class B_556x45_dual: B_556x45_Ball //inherits 21 parameters from bin\config.bin/CfgAmmo/B_556x45_Ball, sources - ["A3_Weapons_F"]
		{
			cartridge = "FxCartridge_65";
			audibleFire = 20;
			dangerRadiusBulletClose = 4;
			dangerRadiusHit = 8;
			suppressionRadiusBulletClose = 2;
			suppressionRadiusHit = 4;
			typicalSpeed = 270;
			airFriction = -0.02;
			waterFriction = -0.01;
			effectFly = "AmmoUnderwater";
			nvgOnly = 1;
			aiAmmoUsageFlags = "64 + 32";
		};
		class B_56x15_dual: BulletBase //inherits 229 parameters from bin\config.bin/CfgAmmo/BulletBase, sources - ["A3_Weapons_F"]
		{
			hit = 8;
			indirectHit = 0;
			indirectHitRange = 0;
			cost = 2;
			caliber = 2;
			deflecting = 30;
			model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
			tracerScale = 0.5;
			tracerStartTime = 0.05;
			tracerEndTime = 1;
			nvgOnly = 1;
			cartridge = "FxCartridge_9mm";
			audibleFire = 20;
			waterFriction = -0.014;
			airFriction = -0.0018;
		};
		class B_65x39_Caseless: BulletBase //inherits 229 parameters from bin\config.bin/CfgAmmo/BulletBase, sources - ["A3_Weapons_F"]
		{
			hit = 10;
			indirectHit = 0;
			indirectHitRange = 0;
			cartridge = "FxCartridge_65_caseless";
			dangerRadiusBulletClose = 8;
			dangerRadiusHit = 12;
			suppressionRadiusBulletClose = 6;
			suppressionRadiusHit = 8;
			cost = 1.2;
			airLock = 1;
			typicalSpeed = 820;
			caliber = 1;
			model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
			tracerScale = 1;
			tracerStartTime = 0.05;
			tracerEndTime = 1;
			airFriction = -0.0009;
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 2.44949;
				duration = 0.4;
				frequency = 20;
				distance = 7.34847;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 6;
				duration = 0.4;
				frequency = 20;
				distance = 1;
			};
		};
		class B_65x39_Caseless_green: B_65x39_Caseless //inherits 19 parameters from bin\config.bin/CfgAmmo/B_65x39_Caseless, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		};
		class B_65x39_Caseless_yellow: B_65x39_Caseless //inherits 19 parameters from bin\config.bin/CfgAmmo/B_65x39_Caseless, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		};
		class B_65x39_Case: B_65x39_Caseless //inherits 19 parameters from bin\config.bin/CfgAmmo/B_65x39_Caseless, sources - ["A3_Weapons_F"]
		{
			cartridge = "FxCartridge_65";
		};
		class B_65x39_Case_green: B_65x39_Case //inherits 1 parameters from bin\config.bin/CfgAmmo/B_65x39_Case, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		};
		class B_65x39_Case_yellow: B_65x39_Case //inherits 1 parameters from bin\config.bin/CfgAmmo/B_65x39_Case, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		};
		class B_65x39_Minigun_Caseless: SubmunitionBullet //inherits 6 parameters from bin\config.bin/CfgAmmo/SubmunitionBullet, sources - ["A3_Weapons_F"]
		{
			hit = 10;
			indirectHit = 0;
			indirectHitRange = 0;
			caliber = 3.2;
			deflecting = 30;
			explosive = 0;
			triggerTime = 0.1;
			submunitionConeAngle = 0;
			submunitionCount = 1;
			submunitionAmmo = "B_65x39_Minigun_Caseless_Red_splash";
			cartridge = "FxCartridge_65_caseless";
			visibleFire = 5;
			audibleFire = 60;
			cost = 1.2;
			airLock = 1;
			typicalSpeed = 820;
			model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
			tracerScale = 1;
			tracerStartTime = 0.05;
			tracerEndTime = 1;
			airFriction = -0.0009;
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 2.44949;
				duration = 0.4;
				frequency = 20;
				distance = 7.34847;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 6;
				duration = 0.4;
				frequency = 20;
				distance = 1;
			};
		};
		class B_65x39_Minigun_Caseless_Red_splash: B_65x39_Caseless //inherits 19 parameters from bin\config.bin/CfgAmmo/B_65x39_Caseless, sources - ["A3_Weapons_F"]
		{
			hit = 10;
			indirectHit = 1;
			indirectHitRange = 2;
			caliber = 3.2;
			deflecting = 30;
			fuseDistance = 12;
			soundSetSonicCrack[] = {"BulletSonicCrack_Gatling_SoundSet"};
		};
		class B_65x39_Minigun_Caseless_Yellow_splash: B_65x39_Minigun_Caseless_Red_splash //inherits 7 parameters from bin\config.bin/CfgAmmo/B_65x39_Minigun_Caseless_Red_splash, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		};
		class B_65x39_Minigun_Caseless_Green_splash: B_65x39_Minigun_Caseless_Red_splash //inherits 7 parameters from bin\config.bin/CfgAmmo/B_65x39_Minigun_Caseless_Red_splash, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		};
		class B_762x51_Ball: BulletBase //inherits 229 parameters from bin\config.bin/CfgAmmo/BulletBase, sources - ["A3_Weapons_F"]
		{
			hit = 12;
			indirectHit = 0;
			indirectHitRange = 0;
			cartridge = "FxCartridge_762";
			visibleFire = 3;
			audibleFire = 45;
			dangerRadiusBulletClose = 8;
			dangerRadiusHit = 12;
			suppressionRadiusBulletClose = 6;
			suppressionRadiusHit = 8;
			cost = 1.2;
			airLock = 1;
			typicalSpeed = 800;
			caliber = 1.6;
			model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
			tracerScale = 0.6;
			tracerStartTime = 0.0075;
			tracerEndTime = 5;
			airFriction = -0.001;
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 2.82843;
				duration = 0.6;
				frequency = 20;
				distance = 8.48528;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 5;
				duration = 0.2;
				frequency = 20;
				distance = 1;
			};
		};
		class B_762x51_Tracer_Red: B_762x51_Ball //inherits 21 parameters from bin\config.bin/CfgAmmo/B_762x51_Ball, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		};
		class B_762x51_Tracer_Green: B_762x51_Ball //inherits 21 parameters from bin\config.bin/CfgAmmo/B_762x51_Ball, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		};
		class B_762x51_Tracer_Yellow: B_762x51_Ball //inherits 21 parameters from bin\config.bin/CfgAmmo/B_762x51_Ball, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		};
		class B_762x54_Ball: B_762x51_Ball //inherits 21 parameters from bin\config.bin/CfgAmmo/B_762x51_Ball, sources - ["A3_Weapons_F"]
		{
			caliber = 1.8;
			airFriction = -0.0012;
		};
		class B_762x54_Tracer_Red: B_762x54_Ball //inherits 2 parameters from bin\config.bin/CfgAmmo/B_762x54_Ball, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		};
		class B_762x54_Tracer_Green: B_762x54_Ball //inherits 2 parameters from bin\config.bin/CfgAmmo/B_762x54_Ball, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		};
		class B_762x54_Tracer_Yellow: B_762x54_Ball //inherits 2 parameters from bin\config.bin/CfgAmmo/B_762x54_Ball, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		};
		class B_762x51_Minigun_Tracer_Red: SubmunitionBullet //inherits 6 parameters from bin\config.bin/CfgAmmo/SubmunitionBullet, sources - ["A3_Weapons_F"]
		{
			hit = 12;
			indirectHit = 0;
			indirectHitRange = 0;
			model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
			caliber = 3.6;
			deflecting = 30;
			explosive = 0;
			triggerTime = 0.1;
			submunitionConeAngle = 0;
			submunitionCount = 1;
			submunitionAmmo = "B_762x51_Minigun_Tracer_Red_splash";
			cartridge = "FxCartridge_762";
			visibleFire = 5;
			audibleFire = 70;
			cost = 1.2;
			airLock = 1;
			typicalSpeed = 800;
			tracerScale = 0.6;
			tracerStartTime = 0.0075;
			tracerEndTime = 5;
			airFriction = -0.001;
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 2.82843;
				duration = 0.6;
				frequency = 20;
				distance = 8.48528;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 5;
				duration = 0.2;
				frequency = 20;
				distance = 1;
			};
		};
		class B_762x51_Minigun_Tracer_Red_splash: B_762x51_Ball //inherits 21 parameters from bin\config.bin/CfgAmmo/B_762x51_Ball, sources - ["A3_Weapons_F"]
		{
			hit = 12;
			indirectHit = 1.2;
			indirectHitRange = 2;
			model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
			caliber = 3.6;
			deflecting = 30;
			fuseDistance = 12;
			soundSetSonicCrack[] = {"BulletSonicCrack_Gatling_SoundSet"};
		};
		class B_12Gauge_Slug: BulletBase //inherits 229 parameters from bin\config.bin/CfgAmmo/BulletBase, sources - ["A3_Weapons_F"]
		{
			hit = 42;
			indirectHit = 0;
			indirectHitRange = 0;
			cartridge = "FxCartridge_slug";
			cost = 5;
			typicalSpeed = 600;
			airFriction = -0.008;
			caliber = 3;
			deflecting = 30;
		};
		class B_12Gauge_Pellets: ShotgunBase //inherits 7 parameters from bin\config.bin/CfgAmmo/ShotgunBase, sources - ["A3_Weapons_F"]
		{
			hit = 2;
			indirectHit = 2;
			indirectHitRange = 0.4;
			cartridge = "FxCartridge_slug";
			cost = 5;
			typicalSpeed = 400;
			airFriction = -0.008;
			caliber = 1;
			deflecting = 30;
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 3;
				duration = 0.5;
				frequency = 20;
				distance = 10;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 1;
				duration = 0.1;
				frequency = 20;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 10;
				duration = 1;
				frequency = 20;
			};
		};
		class B_9x21_Ball: BulletBase //inherits 229 parameters from bin\config.bin/CfgAmmo/BulletBase, sources - ["A3_Weapons_F"]
		{
			hit = 5;
			indirectHit = 0;
			indirectHitRange = 0;
			cartridge = "FxCartridge_9mm";
			cost = 100;
			typicalSpeed = 380;
			airFriction = -0.0016;
			caliber = 1.2;
			deflecting = 30;
			model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
			airLock = 1;
			tracerScale = 0.5;
			tracerStartTime = 0.05;
			tracerEndTime = 1;
			nvgOnly = 1;
			audibleFire = 30;
			dangerRadiusBulletClose = 4;
			dangerRadiusHit = 8;
			suppressionRadiusBulletClose = 2;
			suppressionRadiusHit = 4;
		};
		class B_9x21_Ball_Tracer_Green: B_9x21_Ball //inherits 20 parameters from bin\config.bin/CfgAmmo/B_9x21_Ball, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
			tracerScale = 0.5;
			tracerStartTime = 0.05;
			tracerEndTime = 1;
			nvgOnly = 0;
		};
		class B_9x21_Ball_Tracer_Red: B_9x21_Ball_Tracer_Green //inherits 5 parameters from bin\config.bin/CfgAmmo/B_9x21_Ball_Tracer_Green, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_Red";
		};
		class B_9x21_Ball_Tracer_Yellow: B_9x21_Ball_Tracer_Green //inherits 5 parameters from bin\config.bin/CfgAmmo/B_9x21_Ball_Tracer_Green, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_Yellow";
		};
		class B_408_Ball: BulletBase //inherits 229 parameters from bin\config.bin/CfgAmmo/BulletBase, sources - ["A3_Weapons_F"]
		{
			hit = 24;
			indirectHit = 0;
			indirectHitRange = 0;
			cartridge = "FxCartridge_127";
			visibleFire = 5;
			audibleFire = 120;
			visibleFireTime = 3;
			cost = 7;
			airLock = 1;
			caliber = 2.4;
			typicalSpeed = 910;
			timeToLive = 10;
			model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
			tracerScale = 1.2;
			tracerStartTime = 0.075;
			tracerEndTime = 1;
			airFriction = -0.00048;
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 3.16228;
				duration = 0.6;
				frequency = 20;
				distance = 9.48683;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 10;
				duration = 0.4;
				frequency = 20;
				distance = 1;
			};
		};
		class B_127x33_Ball: BulletBase //inherits 229 parameters from bin\config.bin/CfgAmmo/BulletBase, sources - ["A3_Weapons_F"]
		{
			hit = 6;
			indirectHit = 0;
			indirectHitRange = 0;
			cartridge = "FxCartridge_127";
			audibleFire = 50;
			dangerRadiusBulletClose = 4;
			dangerRadiusHit = 8;
			suppressionRadiusBulletClose = 2;
			suppressionRadiusHit = 4;
			visibleFireTime = 3;
			cost = 50;
			airLock = 1;
			caliber = 1;
			deflecting = 30;
			typicalSpeed = 420;
			model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
			tracerScale = 1.2;
			tracerStartTime = 0.075;
			tracerEndTime = 1;
			airFriction = -0.002;
		};
		class B_127x99_Ball: BulletBase //inherits 229 parameters from bin\config.bin/CfgAmmo/BulletBase, sources - ["A3_Weapons_F"]
		{
			hit = 30;
			indirectHit = 0;
			indirectHitRange = 0;
			cartridge = "FxCartridge_127";
			visibleFire = 8;
			audibleFire = 120;
			dangerRadiusBulletClose = 12;
			dangerRadiusHit = 16;
			suppressionRadiusBulletClose = 8;
			suppressionRadiusHit = 12;
			cost = 5;
			airLock = 1;
			caliber = 2.6;
			typicalSpeed = 880;
			timeToLive = 10;
			model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
			tracerScale = 1.2;
			tracerStartTime = 0.075;
			tracerEndTime = 1;
			airFriction = -0.00086;
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 3.60555;
				duration = 0.8;
				frequency = 20;
				distance = 10.8167;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 13;
				duration = 0.4;
				frequency = 20;
				distance = 1;
			};
		};
		class B_127x99_Ball_Tracer_Red: B_127x99_Ball //inherits 22 parameters from bin\config.bin/CfgAmmo/B_127x99_Ball, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		};
		class B_127x99_Ball_Tracer_Green: B_127x99_Ball //inherits 22 parameters from bin\config.bin/CfgAmmo/B_127x99_Ball, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		};
		class B_127x99_Ball_Tracer_Yellow: B_127x99_Ball //inherits 22 parameters from bin\config.bin/CfgAmmo/B_127x99_Ball, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		};
		class B_127x99_SLAP: B_127x99_Ball //inherits 22 parameters from bin\config.bin/CfgAmmo/B_127x99_Ball, sources - ["A3_Weapons_F"]
		{
			hit = 50;
			indirectHit = 0;
			indirectHitRange = 0;
			caliber = 3.4;
			deflecting = 30;
			typicalSpeed = 1215;
			airFriction = -0.00036;
			cost = 15;
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 4.47214;
				duration = 0.8;
				frequency = 20;
				distance = 13.4164;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 20;
				duration = 0.4;
				frequency = 20;
				distance = 1;
			};
		};
		class B_127x99_SLAP_Tracer_Red: B_127x99_SLAP //inherits 10 parameters from bin\config.bin/CfgAmmo/B_127x99_SLAP, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		};
		class B_127x99_SLAP_Tracer_Green: B_127x99_SLAP //inherits 10 parameters from bin\config.bin/CfgAmmo/B_127x99_SLAP, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		};
		class B_127x99_SLAP_Tracer_Yellow: B_127x99_SLAP //inherits 10 parameters from bin\config.bin/CfgAmmo/B_127x99_SLAP, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		};
		class B_127x108_Ball: BulletBase //inherits 229 parameters from bin\config.bin/CfgAmmo/BulletBase, sources - ["A3_Weapons_F"]
		{
			hit = 35;
			indirectHit = 0;
			indirectHitRange = 0;
			cartridge = "FxCartridge_127";
			visibleFire = 5;
			audibleFire = 120;
			dangerRadiusBulletClose = 12;
			dangerRadiusHit = 16;
			suppressionRadiusBulletClose = 8;
			suppressionRadiusHit = 12;
			visibleFireTime = 3;
			cost = 5;
			airLock = 1;
			caliber = 2.8;
			typicalSpeed = 820;
			timeToLive = 10;
			model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
			tracerScale = 1.5;
			tracerStartTime = 0.075;
			tracerEndTime = 1;
			airFriction = -0.00086;
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 3.60555;
				duration = 0.8;
				frequency = 20;
				distance = 10.8167;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 13;
				duration = 0.4;
				frequency = 20;
				distance = 1;
			};
		};
		class B_127x108_APDS: B_127x108_Ball //inherits 23 parameters from bin\config.bin/CfgAmmo/B_127x108_Ball, sources - ["A3_Weapons_F"]
		{
			hit = 60;
			indirectHit = 0;
			indirectHitRange = 0;
			caliber = 3.6;
			deflecting = 30;
			typicalSpeed = 1060;
			airFriction = -0.00036;
			cost = 15;
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 4.47214;
				duration = 0.8;
				frequency = 20;
				distance = 13.4164;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 20;
				duration = 0.4;
				frequency = 20;
				distance = 1;
			};
		};
		class B_19mm_HE: BulletBase //inherits 229 parameters from bin\config.bin/CfgAmmo/BulletBase, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			soundFly[] = {"", 1, 1, 50};
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
			soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
			soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
			multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
			explosionSoundEffect = "DefaultExplosion";
			hit = 20;
			indirectHit = 6;
			indirectHitRange = 2;
			explosive = 0.8;
			explosionEffects = "ExploAmmoExplosion";
			craterEffects = "ExploAmmoCrater";
			visibleFire = 16;
			audibleFire = 150;
			visibleFireTime = 3;
			dangerRadiusBulletClose = 16;
			dangerRadiusHit = 40;
			suppressionRadiusBulletClose = 10;
			suppressionRadiusHit = 14;
			cost = 20;
			deflecting = 5;
			airFriction = -0.0006;
			fuseDistance = 3;
			typicalSpeed = 400;
			caliber = 2;
			model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
			tracerScale = 1;
			tracerStartTime = 0.05;
			tracerEndTime = 1;
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 3.8;
				duration = 0.8;
				frequency = 20;
				distance = 50.8712;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 19;
				duration = 0.4;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 2.0878;
				duration = 0.8;
				frequency = 20;
				distance = 34.8712;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 0.01;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
			SoundSetExplosion[] = {"Shell19mm25mm_Exp_SoundSet"};
		};
		class B_30mm_HE: B_19mm_HE //inherits 35 parameters from bin\config.bin/CfgAmmo/B_19mm_HE, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			weaponType = "cannon";
			hit = 30;
			indirectHit = 8;
			indirectHitRange = 3;
			explosive = 0.8;
			visibleFire = 32;
			audibleFire = 200;
			visibleFireTime = 3;
			dangerRadiusBulletClose = 20;
			dangerRadiusHit = 60;
			suppressionRadiusBulletClose = 12;
			suppressionRadiusHit = 24;
			cost = 20;
			airFriction = -0.00036;
			fuseDistance = 3;
			typicalSpeed = 960;
			caliber = 1.4;
			airlock = 1;
			aiAmmoUsageFlags = "64 + 128";
			tracerScale = 2.5;
			tracerStartTime = 0.1;
			tracerEndTime = 4.7;
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
			soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
			soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
			multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 6;
				duration = 1;
				frequency = 20;
				distance = 67.8178;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 30;
				duration = 0.4;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 2.23607;
				duration = 1;
				frequency = 20;
				distance = 40;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 0.01;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
			SoundSetExplosion[] = {"Shell30mm40mm_Exp_SoundSet", "Shell30mm40mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class B_30mm_HE_Tracer_Red: B_30mm_HE //inherits 32 parameters from bin\config.bin/CfgAmmo/B_30mm_HE, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		};
		class B_30mm_HE_Tracer_Green: B_30mm_HE //inherits 32 parameters from bin\config.bin/CfgAmmo/B_30mm_HE, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		};
		class B_30mm_HE_Tracer_Yellow: B_30mm_HE //inherits 32 parameters from bin\config.bin/CfgAmmo/B_30mm_HE, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		};
		class B_30mm_MP: B_30mm_HE //inherits 32 parameters from bin\config.bin/CfgAmmo/B_30mm_HE, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			hit = 90;
			indirectHit = 4;
			indirectHitRange = 2;
			caliber = 4.4;
			deflecting = 10;
			explosive = 0.6;
			typicalSpeed = 1070;
			airFriction = -0.00036;
			dangerRadiusBulletClose = 16;
			dangerRadiusHit = 40;
			suppressionRadiusBulletClose = 10;
			suppressionRadiusHit = 14;
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
			soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
			soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
			multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 6;
				duration = 1;
				frequency = 20;
				distance = 67.8178;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 30;
				duration = 0.4;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 2.34035;
				duration = 1;
				frequency = 20;
				distance = 43.8178;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 0.01;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
			SoundSetExplosion[] = {"Shell30mm40mm_Exp_SoundSet", "Shell30mm40mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class B_30mm_MP_Tracer_Red: B_30mm_MP //inherits 22 parameters from bin\config.bin/CfgAmmo/B_30mm_MP, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		};
		class B_30mm_MP_Tracer_Green: B_30mm_MP //inherits 22 parameters from bin\config.bin/CfgAmmo/B_30mm_MP, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		};
		class B_30mm_MP_Tracer_Yellow: B_30mm_MP //inherits 22 parameters from bin\config.bin/CfgAmmo/B_30mm_MP, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		};
		class B_40mm_GPR: B_30mm_HE //inherits 32 parameters from bin\config.bin/CfgAmmo/B_30mm_HE, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			hit = 70;
			indirectHit = 8;
			indirectHitRange = 4;
			caliber = 4.6;
			deflecting = 10;
			cost = 40;
			airFriction = -0.0006;
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
			soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
			soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
			multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 8;
				duration = 1.2;
				frequency = 20;
				distance = 82.5964;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 40;
				duration = 0.6;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 2.51487;
				duration = 1.2;
				frequency = 20;
				distance = 50.5964;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 0.01;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
			SoundSetExplosion[] = {"Shell30mm40mm_Exp_SoundSet", "Shell30mm40mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class B_40mm_GPR_Tracer_Red: B_40mm_GPR //inherits 17 parameters from bin\config.bin/CfgAmmo/B_40mm_GPR, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		};
		class B_40mm_GPR_Tracer_Green: B_40mm_GPR //inherits 17 parameters from bin\config.bin/CfgAmmo/B_40mm_GPR, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		};
		class B_40mm_GPR_Tracer_Yellow: B_40mm_GPR //inherits 17 parameters from bin\config.bin/CfgAmmo/B_40mm_GPR, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		};
		class B_20mm: BulletBase //inherits 229 parameters from bin\config.bin/CfgAmmo/BulletBase, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			hit = 60;
			indirectHit = 6;
			indirectHitRange = 0.4;
			explosive = 0.4;
			caliber = 3.4;
			cost = 30;
			model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
			tracerScale = 1;
			tracerStartTime = 0.05;
			tracerEndTime = 1;
			nvgOnly = 0;
			typicalSpeed = 1030;
			visibleFire = 32;
			audibleFire = 200;
			visibleFireTime = 4;
			dangerRadiusBulletClose = 16;
			dangerRadiusHit = 40;
			suppressionRadiusBulletClose = 10;
			suppressionRadiusHit = 14;
			aiAmmoUsageFlags = "64 + 128";
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01", 1.77828, 1, 1300};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02", 1.77828, 1, 1300};
			soundHit3[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03", 1.77828, 1, 1300};
			soundHit4[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04", 1.77828, 1, 1300};
			multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
			explosionSoundEffect = "DefaultExplosion";
			airLock = 1;
			CraterEffects = "ExploAmmoCrater";
			explosionEffects = "ExploAmmoExplosion";
			airFriction = -0.00078;
			muzzleEffect = "";
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 4;
				duration = 0.8;
				frequency = 20;
				distance = 43.7771;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 20;
				duration = 0.4;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 2.11474;
				duration = 0.8;
				frequency = 20;
				distance = 35.7771;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 0.01;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
			SoundSetExplosion[] = {"Shell19mm25mm_Exp_SoundSet"};
		};
		class B_20mm_Tracer_Red: B_20mm //inherits 36 parameters from bin\config.bin/CfgAmmo/B_20mm, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		};
		class B_25mm: BulletBase //inherits 229 parameters from bin\config.bin/CfgAmmo/BulletBase, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			hit = 70;
			indirectHit = 6;
			indirectHitRange = 0.4;
			explosive = 0.4;
			caliber = 3.8;
			cost = 20;
			model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
			tracerScale = 1;
			tracerStartTime = 0.05;
			tracerEndTime = 1;
			nvgOnly = 1;
			typicalSpeed = 1030;
			visibleFire = 32;
			audibleFire = 200;
			visibleFireTime = 4;
			dangerRadiusBulletClose = 16;
			dangerRadiusHit = 40;
			suppressionRadiusBulletClose = 10;
			suppressionRadiusHit = 14;
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
			soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
			soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
			multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
			explosionSoundEffect = "DefaultExplosion";
			airLock = 1;
			CraterEffects = "ExploAmmoCrater";
			explosionEffects = "ExploAmmoExplosion";
			airFriction = -0.00076;
			muzzleEffect = "";
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 5;
				duration = 1;
				frequency = 20;
				distance = 56;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 25;
				duration = 0.4;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 2.23607;
				duration = 1;
				frequency = 20;
				distance = 40;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 0.01;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
			SoundSetExplosion[] = {"Shell30mm40mm_Exp_SoundSet", "Shell30mm40mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class B_30mm_AP: BulletBase //inherits 229 parameters from bin\config.bin/CfgAmmo/BulletBase, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			weaponType = "cannon";
			hit = 80;
			indirectHit = 8;
			indirectHitRange = 0.2;
			caliber = 4.2;
			visibleFire = 32;
			audibleFire = 200;
			visibleFireTime = 3;
			dangerRadiusBulletClose = 16;
			dangerRadiusHit = 40;
			suppressionRadiusBulletClose = 10;
			suppressionRadiusHit = 14;
			cost = 35;
			model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
			tracerScale = 2.5;
			tracerStartTime = 0.1;
			tracerEndTime = 2;
			airFriction = -0.00042;
			muzzleEffect = "";
			deflecting = 20;
			typicalSpeed = 1120;
			airlock = 1;
			aiAmmoUsageFlags = "128 + 512";
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
			soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
			soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
			multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 5;
				duration = 1;
				frequency = 20;
				distance = 56;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 50;
				duration = 0.6;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 2.23607;
				duration = 1;
				frequency = 20;
				distance = 40;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 0.01;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
			SoundSetExplosion[] = {"Shell30mm40mm_Exp_SoundSet", "Shell30mm40mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class B_30mm_AP_Tracer_Red: B_30mm_AP //inherits 33 parameters from bin\config.bin/CfgAmmo/B_30mm_AP, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		};
		class B_30mm_AP_Tracer_Green: B_30mm_AP //inherits 33 parameters from bin\config.bin/CfgAmmo/B_30mm_AP, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		};
		class B_30mm_AP_Tracer_Yellow: B_30mm_AP //inherits 33 parameters from bin\config.bin/CfgAmmo/B_30mm_AP, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		};
		class B_30mm_APFSDS: B_30mm_AP //inherits 33 parameters from bin\config.bin/CfgAmmo/B_30mm_AP, sources - ["A3_Weapons_F"]
		{
			hit = 120;
			indirectHit = 8;
			indirectHitRange = 0.2;
			caliber = 6;
			deflecting = 30;
			airFriction = -0.0001;
			typicalSpeed = 1320;
			cost = 75;
			tracerEndTime = 1.5;
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
			soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
			soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
			multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
			class HitEffects //sources - ["A3_Weapons_F"]
			{
				hitMetal = "ImpactMetalSabotSmall";
				hitMetalPlate = "ImpactMetalSabotSmall";
				hitBuilding = "ImpactConcreteSabotSmall";
				hitConcrete = "ImpactConcreteSabotSmall";
				hitGroundSoft = "ImpactEffectsGroundSabot";
				hitGroundHard = "ImpactEffectsGroundSabot";
				Hit_Foliage_green = "ImpactLeavesGreen";
				Hit_Foliage_Dead = "ImpactLeavesDead";
				Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
				Hit_Foliage_Palm = "ImpactLeavesPalm";
				Hit_Foliage_Pine = "ImpactLeavesPine";
				hitFoliage = "ImpactLeaves";
				hitGlass = "ImpactGlass";
				hitGlassArmored = "ImpactGlassThin";
				hitWood = "ImpactWood";
				hitPlastic = "ImpactPlastic";
				hitRubber = "ImpactRubber";
				hitTyre = "ImpactTyre";
				hitMan = "ImpactEffectsBlood";
				hitWater = "ImpactEffectsWater";
				default_mat = "ImpactEffectsGroundSabot";
			};
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 6.7082;
				duration = 1.4;
				frequency = 20;
				distance = 20.1246;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 45;
				duration = 0.6;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 2.34035;
				duration = 1;
				frequency = 20;
				distance = 43.8178;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 0.01;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
		};
		class B_30mm_APFSDS_Tracer_Red: B_30mm_APFSDS //inherits 19 parameters from bin\config.bin/CfgAmmo/B_30mm_APFSDS, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		};
		class B_30mm_APFSDS_Tracer_Green: B_30mm_APFSDS //inherits 19 parameters from bin\config.bin/CfgAmmo/B_30mm_APFSDS, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		};
		class B_30mm_APFSDS_Tracer_Yellow: B_30mm_APFSDS //inherits 19 parameters from bin\config.bin/CfgAmmo/B_30mm_APFSDS, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		};
		class B_40mm_APFSDS: B_30mm_APFSDS //inherits 19 parameters from bin\config.bin/CfgAmmo/B_30mm_APFSDS, sources - ["A3_Weapons_F"]
		{
			hit = 150;
			indirectHit = 8;
			indirectHitRange = 0.2;
			typicalSpeed = 1140;
			caliber = 8;
			airFriction = -0.00012;
			cost = 100;
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
			soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
			soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
			multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 7.74597;
				duration = 1.6;
				frequency = 20;
				distance = 23.2379;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 60;
				duration = 0.6;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 2.51487;
				duration = 1.2;
				frequency = 20;
				distance = 50.5964;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 0.01;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
		};
		class B_40mm_APFSDS_Tracer_Red: B_40mm_APFSDS //inherits 16 parameters from bin\config.bin/CfgAmmo/B_40mm_APFSDS, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		};
		class B_40mm_APFSDS_Tracer_Green: B_40mm_APFSDS //inherits 16 parameters from bin\config.bin/CfgAmmo/B_40mm_APFSDS, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		};
		class B_40mm_APFSDS_Tracer_Yellow: B_40mm_APFSDS //inherits 16 parameters from bin\config.bin/CfgAmmo/B_40mm_APFSDS, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		};
		class B_35mm_AA: BulletBase //inherits 229 parameters from bin\config.bin/CfgAmmo/BulletBase, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			hit = 60;
			indirectHit = 6;
			indirectHitRange = 4;
			visibleFire = 38;
			audibleFire = 200;
			visibleFireTime = 5;
			dangerRadiusBulletClose = 20;
			dangerRadiusHit = 60;
			suppressionRadiusBulletClose = 12;
			suppressionRadiusHit = 24;
			deflecting = 0;
			explosive = 0.6;
			airLock = 1;
			aiAmmoUsageFlags = "128 + 256";
			allowAgainstInfantry = 1;
			cost = 42;
			CraterEffects = "ExploAmmoCrater";
			explosionEffects = "ExploAmmoExplosion";
			explosionSoundEffect = "DefaultExplosion";
			model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
			tracerScale = 1.85;
			tracerStartTime = 0.1;
			tracerEndTime = 2;
			airFriction = -0.0005;
			muzzleEffect = "";
			caliber = 2.8;
			typicalSpeed = 960;
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
			soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
			soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
			multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 3.6;
				duration = 0.8;
				frequency = 20;
				distance = 41.9411;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 18;
				duration = 0.4;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 1.49535;
				duration = 0.4;
				frequency = 20;
				distance = 17.8885;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 0.001;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
			SoundSetExplosion[] = {"Shell19mm25mm_Exp_SoundSet"};
		};
		class B_35mm_AA_Tracer_Red: B_35mm_AA //inherits 37 parameters from bin\config.bin/CfgAmmo/B_35mm_AA, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		};
		class B_35mm_AA_Tracer_Green: B_35mm_AA //inherits 37 parameters from bin\config.bin/CfgAmmo/B_35mm_AA, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		};
		class B_35mm_AA_Tracer_Yellow: B_35mm_AA //inherits 37 parameters from bin\config.bin/CfgAmmo/B_35mm_AA, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		};
		class B_coil_5g_spike: BulletBase //inherits 229 parameters from bin\config.bin/CfgAmmo/BulletBase, sources - ["A3_Weapons_F"]
		{
			hit = 30;
			indirectHit = 0;
			indirectHitRange = 0;
			cartridge = "FxCartridge_9mm";
			cost = 50;
			typicalSpeed = 3000;
			visibleFire = 1;
			audibleFire = 0.01;
			visibleFireTime = 2;
			dangerRadiusBulletClose = 16;
			dangerRadiusHit = 40;
			suppressionRadiusBulletClose = 10;
			suppressionRadiusHit = 14;
			airFriction = -0.0001;
			caliber = 10;
			deflecting = 0;
		};
		class B_coil_20g_spike: B_coil_5g_spike //inherits 16 parameters from bin\config.bin/CfgAmmo/B_coil_5g_spike, sources - ["A3_Weapons_F"]
		{
			hit = 120;
			typicalSpeed = 6000;
		};
		class SmokeLauncherAmmo: BulletBase //inherits 229 parameters from bin\config.bin/CfgAmmo/BulletBase, sources - ["A3_Weapons_F"]
		{
			muzzleEffect = "BIS_fnc_effectFiredSmokeLauncher";
			effectsSmoke = "EmptyEffect";
			weaponLockSystem = "1 + 2 + 4";
			hit = 1;
			indirectHit = 0;
			indirectHitRange = 0;
			timeToLive = 10;
			thrustTime = 10;
			airFriction = -0.1;
			simulation = "shotCM";
			model = "\A3\weapons_f\empty";
			maxControlRange = 50;
			initTime = 2;
			aiAmmoUsageFlags = "4 + 8";
		};
		class SmokeLauncherAmmo_boat: SmokeLauncherAmmo //inherits 14 parameters from bin\config.bin/CfgAmmo/SmokeLauncherAmmo, sources - ["A3_Weapons_F"]
		{
			muzzleEffect = "BIS_fnc_effectFiredSmokeLauncher_boat";
		};
		class FlareLauncherAmmo: SmokeLauncherAmmo //inherits 14 parameters from bin\config.bin/CfgAmmo/SmokeLauncherAmmo, sources - ["A3_Weapons_F"]
		{
			muzzleEffect = "BIS_fnc_effectFiredFlares";
		};
		class CMflareAmmo: BulletBase //inherits 229 parameters from bin\config.bin/CfgAmmo/BulletBase, sources - ["A3_Weapons_F"]
		{
			hit = 1;
			indirectHit = 0;
			indirectHitRange = 0;
			timeToLive = 15;
			thrustTime = 2;
			airFriction = -0.01;
			simulation = "shotCM";
			effectsSmoke = "CounterMeasureFlare";
			weaponLockSystem = 2;
			model = "\A3\weapons_f\empty";
			maxControlRange = -1;
			initTime = 0;
			aiAmmoUsageFlags = 8;
		};
		class CMflare_Chaff_Ammo: CMflareAmmo //inherits 13 parameters from bin\config.bin/CfgAmmo/CMflareAmmo, sources - ["A3_Weapons_F"]
		{
			effectsSmoke = "CounterMeasureChaff";
			weaponLockSystem = "2 + 8";
		};
		class GrenadeHand: Grenade //inherits 75 parameters from bin\config.bin/CfgAmmo/Grenade, sources - ["A3_Weapons_F"]
		{
			hit = 8;
			indirectHit = 8;
			indirectHitRange = 6;
			dangerRadiusHit = 60;
			suppressionRadiusHit = 24;
			typicalspeed = 18;
			model = "\A3\Weapons_f\ammo\Handgrenade";
			visibleFire = 0.5;
			audibleFire = 0.05;
			visibleFireTime = 1;
			fuseDistance = 0;
		};
		class mini_Grenade: GrenadeHand //inherits 11 parameters from bin\config.bin/CfgAmmo/GrenadeHand, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			hit = 6;
			indirectHit = 6;
			indirectHitRange = 4;
			dangerRadiusHit = 50;
			suppressionRadiusHit = 18;
			typicalspeed = 26;
			model = "\A3\Weapons_f\ammo\mini_frag";
			whistleDist = 12;
			explosionEffectsRadius = 1.5;
			deflecting = 30;
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 3.2;
				duration = 0.8;
				frequency = 20;
				distance = 56;
			};
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01", 3.16228, 1, 1300};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02", 3.16228, 1, 1300};
			soundHit3[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03", 3.16228, 1, 1300};
			soundHit4[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04", 3.16228, 1, 1300};
			multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
			SoundSetExplosion[] = {"MiniGrenade_Exp_SoundSet", "MiniGrenade_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class GrenadeHand_stone: GrenadeHand //inherits 11 parameters from bin\config.bin/CfgAmmo/GrenadeHand, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			hit = 0.5;
			indirectHit = 0.2;
			indirectHitRange = 1;
			dangerRadiusHit = 6;
			suppressionRadiusHit = -1;
			CraterEffects = "NoCrater";
			explosionEffects = "NoExplosion";
			explosive = 0;
			soundHit[] = {"", 1, 1};
			cost = 1;
			whistleDist = 0;
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 0;
				duration = 0.2;
				frequency = 20;
				distance = 0;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 5;
				duration = 0.2;
				frequency = 20;
				distance = 1;
			};
			SoundSetExplosion[] = {"GrenadeHe_Exp_SoundSet", "GrenadeHe_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class SmokeShell: GrenadeHand //inherits 11 parameters from bin\config.bin/CfgAmmo/GrenadeHand, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\ammo\smokegrenade_white";
			hit = 0;
			indirectHit = 0;
			indirectHitRange = 0.2;
			dangerRadiusHit = -1;
			suppressionRadiusHit = -1;
			typicalspeed = 22;
			cost = 100;
			simulation = "shotSmokeX";
			explosive = 0;
			deflecting = 60;
			explosionTime = 2;
			timeToLive = 60;
			fuseDistance = 0;
			soundHit[] = {"", 0, 1};
			SmokeShellSoundHit1[] = {"A3\Sounds_F\weapons\smokeshell\smoke_1", 1.25893, 1, 100};
			SmokeShellSoundHit2[] = {"A3\Sounds_F\weapons\smokeshell\smoke_2", 1.25893, 1, 100};
			SmokeShellSoundHit3[] = {"A3\Sounds_F\weapons\smokeshell\smoke_3", 1.25893, 1, 100};
			SmokeShellSoundLoop1[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop1", 0.125893, 1, 70};
			SmokeShellSoundLoop2[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop2", 0.125893, 1, 70};
			grenadeFireSound[] = {"SmokeShellSoundHit1", 0.25, "SmokeShellSoundHit2", 0.25, "SmokeShellSoundHit3", 0.5};
			grenadeBurningSound[] = {"SmokeShellSoundLoop1", 0.5, "SmokeShellSoundLoop2", 0.5};
			aiAmmoUsageFlags = "4 + 2";
			smokeColor[] = {1, 1, 1, 1};
			effectsSmoke = "SmokeShellWhiteEffect";
			whistleDist = 0;
		};
		class SmokeShellRed: SmokeShell //inherits 26 parameters from bin\config.bin/CfgAmmo/SmokeShell, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\ammo\smokegrenade_red";
			smokeColor[] = {0.8438, 0.1383, 0.1353, 1};
			effectsSmoke = "SmokeShellRedEffect";
		};
		class SmokeShellGreen: SmokeShell //inherits 26 parameters from bin\config.bin/CfgAmmo/SmokeShell, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\ammo\smokegrenade_green";
			smokeColor[] = {0.2125, 0.6258, 0.4891, 1};
			effectsSmoke = "SmokeShellGreenEffect";
		};
		class SmokeShellYellow: SmokeShell //inherits 26 parameters from bin\config.bin/CfgAmmo/SmokeShell, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\ammo\smokegrenade_yellow";
			smokeColor[] = {0.9883, 0.8606, 0.0719, 1};
			effectsSmoke = "SmokeShellYellowEffect";
		};
		class SmokeShellPurple: SmokeShell //inherits 26 parameters from bin\config.bin/CfgAmmo/SmokeShell, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\ammo\smokegrenade_purple";
			smokeColor[] = {0.4341, 0.1388, 0.4144, 1};
			effectsSmoke = "SmokeShellPurpleEffect";
		};
		class SmokeShellBlue: SmokeShell //inherits 26 parameters from bin\config.bin/CfgAmmo/SmokeShell, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\ammo\smokegrenade_blue";
			smokeColor[] = {0.1183, 0.1867, 1, 1};
			effectsSmoke = "SmokeShellBlueEffect";
		};
		class SmokeShellOrange: SmokeShell //inherits 26 parameters from bin\config.bin/CfgAmmo/SmokeShell, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\ammo\smokegrenade_orange";
			smokeColor[] = {0.6697, 0.2275, 0.10053, 1};
			effectsSmoke = "SmokeShellOrangeEffect";
		};
		class G_40mm_Smoke: SmokeShell //inherits 26 parameters from bin\config.bin/CfgAmmo/SmokeShell, sources - ["A3_Weapons_F"]
		{
			model = "\A3\weapons_f\Ammo\UGL_slug";
		};
		class G_40mm_SmokeRed: G_40mm_Smoke //inherits 1 parameters from bin\config.bin/CfgAmmo/G_40mm_Smoke, sources - ["A3_Weapons_F"]
		{
			smokeColor[] = {0.8438, 0.1383, 0.1353, 1};
			effectsSmoke = "SmokeShellRedEffect";
		};
		class G_40mm_SmokeGreen: G_40mm_Smoke //inherits 1 parameters from bin\config.bin/CfgAmmo/G_40mm_Smoke, sources - ["A3_Weapons_F"]
		{
			smokeColor[] = {0.2125, 0.6258, 0.4891, 1};
			effectsSmoke = "SmokeShellGreenEffect";
		};
		class G_40mm_SmokeYellow: G_40mm_Smoke //inherits 1 parameters from bin\config.bin/CfgAmmo/G_40mm_Smoke, sources - ["A3_Weapons_F"]
		{
			smokeColor[] = {0.9883, 0.8606, 0.0719, 1};
			effectsSmoke = "SmokeShellYellowEffect";
		};
		class G_40mm_SmokePurple: G_40mm_Smoke //inherits 1 parameters from bin\config.bin/CfgAmmo/G_40mm_Smoke, sources - ["A3_Weapons_F"]
		{
			smokeColor[] = {0.4341, 0.1388, 0.4144, 1};
			effectsSmoke = "SmokeShellPurpleEffect";
		};
		class G_40mm_SmokeBlue: G_40mm_Smoke //inherits 1 parameters from bin\config.bin/CfgAmmo/G_40mm_Smoke, sources - ["A3_Weapons_F"]
		{
			smokeColor[] = {0.1183, 0.1867, 1, 1};
			effectsSmoke = "SmokeShellBlueEffect";
		};
		class G_40mm_SmokeOrange: G_40mm_Smoke //inherits 1 parameters from bin\config.bin/CfgAmmo/G_40mm_Smoke, sources - ["A3_Weapons_F"]
		{
			smokeColor[] = {0.6697, 0.2275, 0.10053, 1};
			effectsSmoke = "SmokeShellOrangeEffect";
		};
		class SmokeShellArty: SmokeShell //inherits 26 parameters from bin\config.bin/CfgAmmo/SmokeShell, sources - ["A3_Weapons_F"]
		{
			simulation = "shotSmoke";
			effectsSmoke = "SmokeShellWhiteSmall";
			model = "\A3\weapons_f\ammo\shell_smoke";
		};
		class IncinerateShell: SmokeShellArty //inherits 3 parameters from bin\config.bin/CfgAmmo/SmokeShellArty, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\ammo\smokegrenade_orange";
			effectsSmoke = "IncinerateShell";
		};
		class Chemlight_base: SmokeShell //inherits 26 parameters from bin\config.bin/CfgAmmo/SmokeShell, sources - ["A3_Weapons_F"]
		{
			timeToLive = 900;
			grenadeFireSound[] = {};
			grenadeBurningSound[] = {};
			aiAmmoUsageFlags = "2 + 1";
		};
		class Chemlight_green: Chemlight_base //inherits 4 parameters from bin\config.bin/CfgAmmo/Chemlight_base, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\chemlight\chemlight_green_lit";
			effectsSmoke = "ChemlightLight_green";
			typicalspeed = 14;
		};
		class Chemlight_red: Chemlight_base //inherits 4 parameters from bin\config.bin/CfgAmmo/Chemlight_base, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\chemlight\chemlight_red_lit";
			effectsSmoke = "ChemlightLight_red";
		};
		class Chemlight_yellow: Chemlight_base //inherits 4 parameters from bin\config.bin/CfgAmmo/Chemlight_base, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\chemlight\chemlight_yellow_lit";
			effectsSmoke = "ChemlightLight_yellow";
		};
		class Chemlight_blue: Chemlight_base //inherits 4 parameters from bin\config.bin/CfgAmmo/Chemlight_base, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\chemlight\chemlight_blue_lit";
			effectsSmoke = "ChemlightLight_blue";
		};
		class SmokeShellVehicle: SmokeShell //inherits 26 parameters from bin\config.bin/CfgAmmo/SmokeShell, sources - ["A3_Weapons_F"]
		{
			soundFly[] = {"A3\sounds_f\dummysound", 0.1, 1};
			effectsSmoke = "EmptyEffect";
		};
		class SmokeShellVehicle_boat: SmokeShellVehicle //inherits 2 parameters from bin\config.bin/CfgAmmo/SmokeShellVehicle, sources - ["A3_Weapons_F"]
		{
			model = "\A3\weapons_f\Ammo\UGL_slug";
		};
		class FlareCountermeasure: SmokeShellVehicle //inherits 2 parameters from bin\config.bin/CfgAmmo/SmokeShellVehicle, sources - ["A3_Weapons_F"]
		{
			airFriction = -0.05;
			model = "\A3\Weapons_f\empty";
			deflecting = 75;
		};
		class FlareBase: FlareCore //inherits 17 parameters from bin\config.bin/CfgAmmo/FlareCore, sources - ["A3_Weapons_F"]
		{
			timeToLive = 25;
			muzzleEffect = "BIS_fnc_effectFiredRifle";
			intensity = 10000;
		};
		class F_40mm_White: FlareBase //inherits 3 parameters from bin\config.bin/CfgAmmo/FlareBase, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_F\Ammo\UGL_Flare";
			lightColor[] = {0.5, 0.5, 0.5, 0.5};
			useFlare = 1;
			deflecting = 30;
			smokeColor[] = {1, 1, 1, 0.5};
			effectFlare = "CounterMeasureFlare";
			brightness = 12;
			size = 1;
			triggerTime = 3;
			triggerSpeedCoef = 1;
			audibleFire = 20;
		};
		class F_40mm_Green: F_40mm_White //inherits 11 parameters from bin\config.bin/CfgAmmo/F_40mm_White, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_F\Ammo\UGL_Flare";
			lightColor[] = {0.25, 0.5, 0.25, 0};
		};
		class F_40mm_Red: F_40mm_White //inherits 11 parameters from bin\config.bin/CfgAmmo/F_40mm_White, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_F\Ammo\UGL_Flare";
			lightColor[] = {0.5, 0.25, 0.25, 0};
		};
		class F_40mm_Yellow: F_40mm_White //inherits 11 parameters from bin\config.bin/CfgAmmo/F_40mm_White, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_F\Ammo\UGL_Flare";
			lightColor[] = {0.5, 0.5, 0.25, 0};
		};
		class F_40mm_Cir: F_40mm_White //inherits 11 parameters from bin\config.bin/CfgAmmo/F_40mm_White, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_F\Ammo\UGL_Flare";
			lightColor[] = {0.5, 0.5, 0.25, 0};
		};
		class F_20mm_White: FlareBase //inherits 3 parameters from bin\config.bin/CfgAmmo/FlareBase, sources - ["A3_Weapons_F"]
		{
			model = "\A3\weapons_f\ammo\flare_white";
			lightColor[] = {0.5, 0.5, 0.5, 0.5};
			useFlare = 1;
			flareSize = 3;
			deflecting = 30;
			smokeColor[] = {1, 1, 1, 0.5};
			effectFlare = "CounterMeasureFlare";
			brightness = 8;
			size = 1;
			triggerTime = 3;
			triggerSpeedCoef = 1;
		};
		class F_20mm_Green: F_20mm_White //inherits 11 parameters from bin\config.bin/CfgAmmo/F_20mm_White, sources - ["A3_Weapons_F"]
		{
			model = "\A3\weapons_f\ammo\flare_green";
			lightColor[] = {0.25, 0.5, 0.25, 0};
		};
		class F_20mm_Red: F_20mm_White //inherits 11 parameters from bin\config.bin/CfgAmmo/F_20mm_White, sources - ["A3_Weapons_F"]
		{
			model = "\A3\weapons_f\ammo\flare_red";
			lightColor[] = {0.5, 0.25, 0.25, 0};
		};
		class F_20mm_Yellow: F_20mm_White //inherits 11 parameters from bin\config.bin/CfgAmmo/F_20mm_White, sources - ["A3_Weapons_F"]
		{
			model = "\A3\weapons_f\ammo\flare_yellow";
			lightColor[] = {0.5, 0.5, 0.25, 0};
		};
		class SmokeShell_Infinite: SmokeShell //inherits 26 parameters from bin\config.bin/CfgAmmo/SmokeShell, sources - ["A3_Weapons_F"]
		{
			timeToLive = 1e+010;
		};
		class SmokeShellBlue_Infinite: SmokeShellBlue //inherits 3 parameters from bin\config.bin/CfgAmmo/SmokeShellBlue, sources - ["A3_Weapons_F"]
		{
			timeToLive = 1e+010;
		};
		class SmokeShellGreen_Infinite: SmokeShellGreen //inherits 3 parameters from bin\config.bin/CfgAmmo/SmokeShellGreen, sources - ["A3_Weapons_F"]
		{
			timeToLive = 1e+010;
		};
		class SmokeShellOrange_Infinite: SmokeShellOrange //inherits 3 parameters from bin\config.bin/CfgAmmo/SmokeShellOrange, sources - ["A3_Weapons_F"]
		{
			timeToLive = 1e+010;
		};
		class SmokeShellPurple_Infinite: SmokeShellPurple //inherits 3 parameters from bin\config.bin/CfgAmmo/SmokeShellPurple, sources - ["A3_Weapons_F"]
		{
			timeToLive = 1e+010;
		};
		class SmokeShellRed_Infinite: SmokeShellRed //inherits 3 parameters from bin\config.bin/CfgAmmo/SmokeShellRed, sources - ["A3_Weapons_F"]
		{
			timeToLive = 1e+010;
		};
		class SmokeShellYellow_Infinite: SmokeShellYellow //inherits 3 parameters from bin\config.bin/CfgAmmo/SmokeShellYellow, sources - ["A3_Weapons_F"]
		{
			timeToLive = 1e+010;
		};
		class Chemlight_blue_Infinite: Chemlight_blue //inherits 2 parameters from bin\config.bin/CfgAmmo/Chemlight_blue, sources - ["A3_Weapons_F"]
		{
			timeToLive = 1e+010;
		};
		class Chemlight_green_Infinite: Chemlight_green //inherits 3 parameters from bin\config.bin/CfgAmmo/Chemlight_green, sources - ["A3_Weapons_F"]
		{
			timeToLive = 1e+010;
		};
		class Chemlight_red_Infinite: Chemlight_red //inherits 2 parameters from bin\config.bin/CfgAmmo/Chemlight_red, sources - ["A3_Weapons_F"]
		{
			timeToLive = 1e+010;
		};
		class Chemlight_yellow_Infinite: Chemlight_yellow //inherits 2 parameters from bin\config.bin/CfgAmmo/Chemlight_yellow, sources - ["A3_Weapons_F"]
		{
			timeToLive = 1e+010;
		};
		class G_40mm_Smoke_Infinite: G_40mm_Smoke //inherits 1 parameters from bin\config.bin/CfgAmmo/G_40mm_Smoke, sources - ["A3_Weapons_F"]
		{
			timeToLive = 1e+010;
		};
		class G_40mm_SmokeBlue_Infinite: G_40mm_SmokeBlue //inherits 2 parameters from bin\config.bin/CfgAmmo/G_40mm_SmokeBlue, sources - ["A3_Weapons_F"]
		{
			timeToLive = 1e+010;
		};
		class G_40mm_SmokeGreen_Infinite: G_40mm_SmokeGreen //inherits 2 parameters from bin\config.bin/CfgAmmo/G_40mm_SmokeGreen, sources - ["A3_Weapons_F"]
		{
			timeToLive = 1e+010;
		};
		class G_40mm_SmokeOrange_Infinite: G_40mm_SmokeOrange //inherits 2 parameters from bin\config.bin/CfgAmmo/G_40mm_SmokeOrange, sources - ["A3_Weapons_F"]
		{
			timeToLive = 1e+010;
		};
		class G_40mm_SmokePurple_Infinite: G_40mm_SmokePurple //inherits 2 parameters from bin\config.bin/CfgAmmo/G_40mm_SmokePurple, sources - ["A3_Weapons_F"]
		{
			timeToLive = 1e+010;
		};
		class G_40mm_SmokeRed_Infinite: G_40mm_SmokeRed //inherits 2 parameters from bin\config.bin/CfgAmmo/G_40mm_SmokeRed, sources - ["A3_Weapons_F"]
		{
			timeToLive = 1e+010;
		};
		class G_40mm_SmokeYellow_Infinite: G_40mm_SmokeYellow //inherits 2 parameters from bin\config.bin/CfgAmmo/G_40mm_SmokeYellow, sources - ["A3_Weapons_F"]
		{
			timeToLive = 1e+010;
		};
		class F_40mm_White_Infinite: F_40mm_White //inherits 11 parameters from bin\config.bin/CfgAmmo/F_40mm_White, sources - ["A3_Weapons_F"]
		{
			timeToLive = 1e+010;
		};
		class F_40mm_Green_Infinite: F_40mm_Green //inherits 2 parameters from bin\config.bin/CfgAmmo/F_40mm_Green, sources - ["A3_Weapons_F"]
		{
			timeToLive = 1e+010;
		};
		class F_40mm_Red_Infinite: F_40mm_Red //inherits 2 parameters from bin\config.bin/CfgAmmo/F_40mm_Red, sources - ["A3_Weapons_F"]
		{
			timeToLive = 1e+010;
		};
		class F_40mm_Yellow_Infinite: F_40mm_Yellow //inherits 2 parameters from bin\config.bin/CfgAmmo/F_40mm_Yellow, sources - ["A3_Weapons_F"]
		{
			timeToLive = 1e+010;
		};
		class F_40mm_Cir_Infinite: F_40mm_Cir //inherits 2 parameters from bin\config.bin/CfgAmmo/F_40mm_Cir, sources - ["A3_Weapons_F"]
		{
			timeToLive = 1e+010;
		};
		class F_20mm_White_Infinite: F_20mm_White //inherits 11 parameters from bin\config.bin/CfgAmmo/F_20mm_White, sources - ["A3_Weapons_F"]
		{
			timeToLive = 1e+010;
		};
		class F_20mm_Green_Infinite: F_20mm_Green //inherits 2 parameters from bin\config.bin/CfgAmmo/F_20mm_Green, sources - ["A3_Weapons_F"]
		{
			timeToLive = 1e+010;
		};
		class F_20mm_Red_Infinite: F_20mm_Red //inherits 2 parameters from bin\config.bin/CfgAmmo/F_20mm_Red, sources - ["A3_Weapons_F"]
		{
			timeToLive = 1e+010;
		};
		class F_20mm_Yellow_Infinite: F_20mm_Yellow //inherits 2 parameters from bin\config.bin/CfgAmmo/F_20mm_Yellow, sources - ["A3_Weapons_F"]
		{
			timeToLive = 1e+010;
		};
		class Sh_120mm_HE: ShellBase //inherits 21 parameters from bin\config.bin/CfgAmmo/ShellBase, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			hit = 250;
			indirectHit = 60;
			indirectHitRange = 6;
			dangerRadiusHit = 160;
			suppressionRadiusHit = 32;
			typicalSpeed = 1400;
			explosive = 0.8;
			cost = 300;
			airFriction = -0.000275;
			caliber = 10;
			deflecting = 0;
			timeToLive = 15;
			whistleOnFire = 1;
			whistleDist = 14;
			model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
			tracerScale = 1;
			tracerStartTime = 0.1;
			tracerEndTime = 3;
			muzzleEffect = "";
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01", 1.77828, 1, 1800};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02", 1.77828, 1, 1800};
			soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03", 1.77828, 1, 1800};
			soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04", 1.77828, 1, 1800};
			multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 24;
				duration = 2.2;
				frequency = 20;
				distance = 143.636;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 120;
				duration = 0.6;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 3.30975;
				duration = 2.2;
				frequency = 20;
				distance = 87.6356;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 0.02;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
			SoundSetExplosion[] = {"Shell105mm130mm_Exp_SoundSet", "Shell105mm130mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class Sh_120mm_HE_Tracer_Red: Sh_120mm_HE //inherits 29 parameters from bin\config.bin/CfgAmmo/Sh_120mm_HE, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		};
		class Sh_120mm_HE_Tracer_Green: Sh_120mm_HE //inherits 29 parameters from bin\config.bin/CfgAmmo/Sh_120mm_HE, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
		};
		class Sh_120mm_HE_Tracer_Yellow: Sh_120mm_HE //inherits 29 parameters from bin\config.bin/CfgAmmo/Sh_120mm_HE, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
		};
		class Sh_120mm_APFSDS: ShellBase //inherits 21 parameters from bin\config.bin/CfgAmmo/ShellBase, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			hit = 500;
			indirectHit = 15;
			indirectHitRange = 0.5;
			dangerRadiusHit = 100;
			suppressionRadiusHit = 18;
			typicalSpeed = 1680;
			explosive = 0;
			cost = 500;
			airFriction = -3.96e-005;
			CraterEffects = "ExploAmmoCrater";
			explosionEffects = "ExploAmmoExplosion";
			caliber = 30;
			deflecting = 20;
			timeToLive = 15;
			whistleOnFire = 1;
			whistleDist = 14;
			model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
			tracerScale = 3;
			tracerStartTime = 0.1;
			tracerEndTime = 3;
			muzzleEffect = "";
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01", 1.77828, 1, 1800};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02", 1.77828, 1, 1800};
			soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03", 1.77828, 1, 1800};
			soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04", 1.77828, 1, 1800};
			multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
			class HitEffects //sources - ["A3_Weapons_F"]
			{
				hitMetal = "ImpactMetalSabotBig";
				hitMetalPlate = "ImpactMetalSabotBig";
				hitBuilding = "ImpactConcreteSabot";
				hitConcrete = "ImpactConcreteSabot";
				hitGroundSoft = "ImpactEffectsGroundSabot";
				hitGroundHard = "ImpactEffectsGroundSabot";
				hitWater = "ImpactEffectsWater";
				default_mat = "ImpactEffectsGroundSabot";
			};
			aiAmmoUsageFlags = "128 + 512";
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 13.4164;
				duration = 2.6;
				frequency = 20;
				distance = 40.2492;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 180;
				duration = 0.8;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 3.30975;
				duration = 2.2;
				frequency = 20;
				distance = 87.6356;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 0.02;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
			SoundSetExplosion[] = {"Shell105mm130mm_Exp_SoundSet", "Shell105mm130mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class Sh_120mm_APFSDS_Tracer_Red: Sh_120mm_APFSDS //inherits 33 parameters from bin\config.bin/CfgAmmo/Sh_120mm_APFSDS, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		};
		class Sh_120mm_APFSDS_Tracer_Green: Sh_120mm_APFSDS //inherits 33 parameters from bin\config.bin/CfgAmmo/Sh_120mm_APFSDS, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
		};
		class Sh_120mm_APFSDS_Tracer_Yellow: Sh_120mm_APFSDS //inherits 33 parameters from bin\config.bin/CfgAmmo/Sh_120mm_APFSDS, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
		};
		class Sh_155mm_AMOS: ShellBase //inherits 21 parameters from bin\config.bin/CfgAmmo/ShellBase, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			hit = 340;
			indirectHit = 125;
			indirectHitRange = 30;
			dangerRadiusHit = 750;
			suppressionRadiusHit = 75;
			typicalSpeed = 800;
			caliber = 10;
			deflecting = 0;
			explosive = 0.8;
			cost = 300;
			model = "\A3\weapons_f\ammo\shell";
			CraterEffects = "ArtyShellCrater";
			ExplosionEffects = "MortarExplosion";
			whistleDist = 60;
			artilleryLock = 1;
			thrust = 0;
			timeToLive = 180;
			airFriction = 0;
			sideairFriction = 0;
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01", 2.51189, 1, 1900};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02", 2.51189, 1, 1900};
			soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03", 2.51189, 1, 1900};
			soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04", 2.51189, 1, 1900};
			multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 31;
				duration = 2.4;
				frequency = 20;
				distance = 339.599;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 155;
				duration = 0.8;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 3.52844;
				duration = 2.4;
				frequency = 20;
				distance = 99.5992;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 0.01;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
			SoundSetExplosion[] = {"Shell155mm_Exp_SoundSet", "Shell155mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class Sh_82mm_AMOS: Sh_155mm_AMOS //inherits 29 parameters from bin\config.bin/CfgAmmo/Sh_155mm_AMOS, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			hit = 165;
			indirectHit = 52;
			indirectHitRange = 18;
			cost = 200;
			muzzleEffect = "";
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 16.4;
				duration = 1.8;
				frequency = 20;
				distance = 216.443;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 82;
				duration = 0.6;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 3.00922;
				duration = 1.8;
				frequency = 20;
				distance = 72.4431;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 0.01;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
			SoundSetExplosion[] = {"Mortar_Exp_SoundSet", "Mortar_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class Flare_82mm_AMOS_White: FlareCore //inherits 17 parameters from bin\config.bin/CfgAmmo/FlareCore, sources - ["A3_Weapons_F"]
		{
			timeToLive = 45;
			model = "\A3\weapons_f\ammo\shell";
			effectFlare = "CounterMeasureFlare";
			aimAboveTarget[] = {30, 60, 120, 180, 240, 300, 360};
			aimAboveDefault = 4;
			triggerTime = -1;
			triggerSpeedCoef = 1;
			lightColor[] = {0.95, 0.95, 1, 0.5};
			smokeColor[] = {1, 1, 1, 0.5};
			intensity = 10000;
		};
		class Smoke_82mm_AMOS_White: ShotDeployBase //inherits 1 parameters from bin\config.bin/CfgAmmo/ShotDeployBase, sources - ["A3_Weapons_F"]
		{
			model = "\A3\weapons_f\ammo\shell";
			submunitionAmmo = "SmokeShellArty";
		};
		class Sh_82mm_AMOS_guided: SubmunitionBase //inherits 1 parameters from bin\config.bin/CfgAmmo/SubmunitionBase, sources - ["A3_Weapons_F"]
		{
			submunitionAmmo = "M_Mo_82mm_AT";
			submunitionCount = 1;
			submunitionConeAngle = 0;
			laserLock = 0;
			autoSeekTarget = 1;
			cost = 200;
			muzzleEffect = "";
			triggerDistance = 300;
			airFriction = 0;
			hit = 165;
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 3.00922;
				duration = 1.8;
				frequency = 20;
				distance = 72.4431;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 0.01;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
		};
		class Sh_82mm_AMOS_LG: Sh_82mm_AMOS_guided //inherits 12 parameters from bin\config.bin/CfgAmmo/Sh_82mm_AMOS_guided, sources - ["A3_Weapons_F"]
		{
			submunitionAmmo = "M_Mo_82mm_AT_LG";
			cost = 500;
			laserLock = 1;
			irLock = 0;
			muzzleEffect = "";
		};
		class Fire_82mm_AMOS: ShotDeployBase //inherits 1 parameters from bin\config.bin/CfgAmmo/ShotDeployBase, sources - ["A3_Weapons_F"]
		{
			model = "\A3\weapons_f\ammo\shell";
			submunitionAmmo = "IncinerateShell";
			hit = 165;
		};
		class Sh_155mm_AMOS_guided: Sh_82mm_AMOS_guided //inherits 12 parameters from bin\config.bin/CfgAmmo/Sh_82mm_AMOS_guided, sources - ["A3_Weapons_F"]
		{
			submunitionAmmo = "M_Mo_155mm_AT";
			muzzleEffect = "";
			triggerDistance = 500;
			hit = 300;
		};
		class Sh_155mm_AMOS_LG: Sh_82mm_AMOS_LG //inherits 5 parameters from bin\config.bin/CfgAmmo/Sh_82mm_AMOS_LG, sources - ["A3_Weapons_F"]
		{
			submunitionAmmo = "M_Mo_155mm_AT_LG";
			muzzleEffect = "";
			triggerDistance = 500;
			hit = 300;
		};
		class Smoke_120mm_AMOS_White: SubmunitionBase //inherits 1 parameters from bin\config.bin/CfgAmmo/SubmunitionBase, sources - ["A3_Weapons_F"]
		{
			submunitionAmmo = "SmokeShellArty";
			submunitionConeType[] = {"poissondisc", 5};
			submunitionConeAngle = 5;
			triggerDistance = 100;
			cost = 200;
			airFriction = 0;
			muzzleEffect = "";
			hit = 300;
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 3.30975;
				duration = 2.2;
				frequency = 20;
				distance = 87.6356;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 0.02;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
		};
		class Mo_ClassicMineRange: ShotDeployBase //inherits 1 parameters from bin\config.bin/CfgAmmo/ShotDeployBase, sources - ["A3_Weapons_F"]
		{
			submunitionAmmo = "APERSMine_Range_Ammo";
			airFriction = 0;
			EffectFly = "ArtilleryTrails";
			hit = 300;
		};
		class Mo_ATMineRange: ShotDeployBase //inherits 1 parameters from bin\config.bin/CfgAmmo/ShotDeployBase, sources - ["A3_Weapons_F"]
		{
			submunitionAmmo = "ATMine_Range_Ammo";
			airFriction = 0;
			EffectFly = "ArtilleryTrails";
			hit = 300;
		};
		class Mo_UnderwaterMineRange: Mo_ClassicMineRange //inherits 4 parameters from bin\config.bin/CfgAmmo/Mo_ClassicMineRange, sources - ["A3_Weapons_F"]
		{
			submunitionAmmo = "UnderwaterMine_Range_Ammo";
			airFriction = 0;
			hit = 300;
		};
		class Mine_155mm_AMOS_range: SubmunitionBase //inherits 1 parameters from bin\config.bin/CfgAmmo/SubmunitionBase, sources - ["A3_Weapons_F"]
		{
			submunitionAmmo = "Mo_ClassicMineRange";
			submunitionConeType[] = {"randomcenter", 24};
			submunitionConeAngle = 30;
			triggerDistance = 100;
			cost = 500;
			airFriction = 0;
			muzzleEffect = "";
			hit = 300;
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 3.52844;
				duration = 2.4;
				frequency = 20;
				distance = 99.5992;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 0.02;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
		};
		class AT_Mine_155mm_AMOS_range: SubmunitionBase //inherits 1 parameters from bin\config.bin/CfgAmmo/SubmunitionBase, sources - ["A3_Weapons_F"]
		{
			submunitionAmmo = "Mo_ATMineRange";
			submunitionConeType[] = {"randomcenter", 12};
			submunitionConeAngle = 30;
			triggerDistance = 100;
			cost = 500;
			airFriction = 0;
			muzzleEffect = "";
			hit = 300;
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 3.52844;
				duration = 2.4;
				frequency = 20;
				distance = 99.5992;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 0.02;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
		};
		class UWMine_155mm_AMOS_range: Mine_155mm_AMOS_range //inherits 10 parameters from bin\config.bin/CfgAmmo/Mine_155mm_AMOS_range, sources - ["A3_Weapons_F"]
		{
			submunitionAmmo = "Mo_UnderwaterMineRange";
			airFriction = 0;
		};
		class Cluster_155mm_AMOS: SubmunitionBase //inherits 1 parameters from bin\config.bin/CfgAmmo/SubmunitionBase, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			submunitionAmmo[] = {"Mo_cluster_AP", 1};
			submunitionConeType[] = {"randomcenter", 25};
			submunitionConeAngle = 25;
			triggerDistance = 100;
			cost = 200;
			airFriction = 0;
			muzzleEffect = "";
			hit = 300;
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_01", 1.77828, 1, 2000};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_02", 1.77828, 1, 2000};
			soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_03", 1.77828, 1, 2000};
			soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_04", 1.77828, 1, 2000};
			soundHit5[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_05", 1.77828, 1, 2000};
			soundHit6[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_06", 1.77828, 1, 2000};
			soundHit7[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_07", 1.77828, 1, 2000};
			soundHit8[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_08", 1.77828, 1, 2000};
			multiSoundHit[] = {"soundHit1", 0.125, "soundHit2", 0.125, "soundHit3", 0.125, "soundHit4", 0.125, "soundHit5", 0.125, "soundHit6", 0.125, "soundHit7", 0.125, "soundHit8", 0.125};
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 3.52844;
				duration = 2.4;
				frequency = 20;
				distance = 99.5992;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 0.02;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
			SoundSetExplosion[] = {"GrenadeHe_Exp_SoundSet", "GrenadeHe_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class M_PG_AT: MissileBase //inherits 34 parameters from bin\config.bin/CfgAmmo/MissileBase, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
			proxyShape = "\A3\Weapons_F\Ammo\Rocket_01_F";
			hit = 600;
			indirectHit = 50;
			indirectHitRange = 4;
			cost = 500;
			maxSpeed = 720;
			irLock = 1;
			laserLock = 1;
			aiAmmoUsageFlags = "128 + 64";
			trackOversteer = 1;
			trackLead = 1;
			maneuvrability = 8;
			timeToLive = 20;
			simulationStep = 0.01;
			airFriction = 0.1;
			sideAirFriction = 0.16;
			initTime = 0.002;
			thrustTime = 1.07;
			thrust = 530;
			fuseDistance = 50;
			effectsMissileInit = "MissileDAR1";
			effectsMissile = "missile2";
			whistleDist = 4;
			muzzleEffect = "";
			airLock = 0;
			missileLockCone = 30;
			missileKeepLockedCone = 60;
			missileLockMaxDistance = 5000;
			missileLockMinDistance = 100;
			missileLockMaxSpeed = 35;
			weaponLockSystem = "2 + 4 + 16";
			cmImmunity = 0.3;
			manualControl = 1;
			maxControlRange = 5000;
			class Components: Components //inherits 0 parameters from bin\config.bin/CfgAmmo/MissileBase/Components, sources - ["A3_Weapons_F"]
			{
				class SensorsManagerComponent //sources - ["A3_Weapons_F"]
				{
					class Components //sources - ["A3_Weapons_F"]
					{
						class IRSensorComponent: SensorTemplateIR //inherits 8 parameters from bin\config.bin/SensorTemplateIR, sources - ["A3_Weapons_F"]
						{
							class AirTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 500;
								maxRange = 3000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = 1;
							};
							class GroundTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 500;
								maxRange = 3000;
								objectDistanceLimitCoef = 1;
								viewDistanceLimitCoef = 1;
							};
							maxTrackableSpeed = 35;
							angleRangeHorizontal = 45;
							angleRangeVertical = 35;
						};
						class LaserSensorComponent: SensorTemplateLaser //inherits 7 parameters from bin\config.bin/SensorTemplateLaser, sources - ["A3_Weapons_F"]
						{
							class AirTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 5000;
								maxRange = 5000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = -1;
							};
							class GroundTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 5000;
								maxRange = 5000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = -1;
							};
							maxTrackableSpeed = 35;
							angleRangeHorizontal = 90;
							angleRangeVertical = 70;
						};
					};
				};
			};
			SoundSetExplosion[] = {"RocketsLight_Exp_SoundSet", "RocketsLight_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class M_AT: M_PG_AT //inherits 37 parameters from bin\config.bin/CfgAmmo/M_PG_AT, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			hit = 300;
			indirectHit = 50;
			indirectHitRange = 8;
			irLock = 0;
			laserLock = 0;
			maneuvrability = 0;
			maxControlRange = 0;
			simulationStep = 0.1;
			sideAirFriction = 0.005;
			thrust = 825;
			muzzleEffect = "";
			soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 1900};
			soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 1900};
			soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 1900};
			multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
			reloadSound[] = {"", 0.000316228, 1};
			explosionSoundEffect = "DefaultExplosion";
			weaponLockSystem = 0;
			manualControl = 0;
			SoundSetExplosion[] = {"RocketsLight_Exp_SoundSet", "RocketsLight_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class M_NLAW_AT_F: MissileBase //inherits 34 parameters from bin\config.bin/CfgAmmo/MissileBase, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			hit = 500;
			indirectHit = 15;
			indirectHitRange = 4;
			explosive = 0.6;
			maneuvrability = 3;
			simulationStep = 0.002;
			trackOversteer = 1;
			trackLead = 1;
			irLock = 1;
			aiAmmoUsageFlags = "128 + 512";
			maxControlRange = 11;
			model = "\A3\weapons_f\launchers\nlaw\nlaw_rocket";
			cost = 400;
			timeToLive = 7;
			airFriction = 0.4;
			sideAirFriction = 0.1;
			maxSpeed = 210;
			initTime = 0.2;
			thrustTime = 0.8;
			thrust = 260;
			fuseDistance = 20;
			effectsMissile = "missile3";
			whistleDist = 16;
			CraterEffects = "ATRocketCrater";
			explosionEffects = "ATRocketExplosion";
			effectsMissileInit = "RocketBackEffectsNLAW";
			allowAgainstInfantry = 0;
			soundHit[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\NLAW_Hit", 1.77828, 1, 1500};
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 11;
				duration = 1.4;
				frequency = 20;
				distance = 91.3296;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 110;
				duration = 0.6;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 2.51487;
				duration = 1.2;
				frequency = 20;
				distance = 50.5964;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 2;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
			airLock = 0;
			missileLockCone = 5;
			missileKeepLockedCone = 15;
			missileLockMaxDistance = 600;
			missileLockMinDistance = 20;
			missileLockMaxSpeed = 35;
			weaponLockSystem = "1 + 16";
			cmImmunity = 0.2;
			class Components: Components //inherits 0 parameters from bin\config.bin/CfgAmmo/MissileBase/Components, sources - ["A3_Weapons_F"]
			{
				class SensorsManagerComponent //sources - ["A3_Weapons_F"]
				{
					class Components //sources - ["A3_Weapons_F"]
					{
						class VisualSensorComponent: SensorTemplateVisual //inherits 4 parameters from bin\config.bin/SensorTemplateVisual, sources - ["A3_Weapons_F"]
						{
							class AirTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 500;
								maxRange = 800;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = 1;
							};
							class GroundTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 500;
								maxRange = 800;
								objectDistanceLimitCoef = 1;
								viewDistanceLimitCoef = 1;
							};
							maxTrackableSpeed = 35;
							nightRangeCoef = 0.8;
							angleRangeHorizontal = 5;
							angleRangeVertical = 5;
						};
					};
				};
			};
			SoundSetExplosion[] = {"RocketsMedium_Exp_SoundSet", "RocketsMedium_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class M_Scalpel_AT: MissileBase //inherits 34 parameters from bin\config.bin/CfgAmmo/MissileBase, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			hit = 1400;
			indirectHit = 50;
			indirectHitRange = 6.5;
			soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_02", 0.891251, 1, 1900};
			model = "\A3\Weapons_F\Ammo\Missile_AT_03_fly_F";
			proxyShape = "\A3\Weapons_F\Ammo\Missile_AT_03_F";
			CraterEffects = "ATRocketCrater";
			explosionEffects = "ATRocketExplosion";
			whistleDist = 8;
			maneuvrability = 14;
			simulationStep = 0.002;
			aiAmmoUsageFlags = "128 + 512";
			irLock = 1;
			nvLock = 1;
			laserLock = 1;
			cost = 300;
			maxSpeed = 600;
			timeToLive = 19;
			airFriction = 0.04;
			sideAirFriction = 0.08;
			trackLead = 1;
			trackOversteer = 1;
			initTime = 0;
			thrustTime = 2;
			thrust = 366;
			fuseDistance = 500;
			muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
			class Hiteffects //sources - ["A3_Weapons_F"]
			{
				hitWater = "ImpactEffectsSmall";
			};
			cameraViewAvailable = 1;
			airLock = 0;
			missileLockCone = 30;
			missileKeepLockedCone = 60;
			missileLockMaxDistance = 6000;
			missileLockMinDistance = 250;
			missileLockMaxSpeed = 55;
			weaponLockSystem = "2 + 4 + 16";
			cmImmunity = 0.45;
			manualControl = 1;
			maxControlRange = 6000;
			class Components: Components //inherits 0 parameters from bin\config.bin/CfgAmmo/MissileBase/Components, sources - ["A3_Weapons_F"]
			{
				class SensorsManagerComponent //sources - ["A3_Weapons_F"]
				{
					class Components //sources - ["A3_Weapons_F"]
					{
						class IRSensorComponent: SensorTemplateIR //inherits 8 parameters from bin\config.bin/SensorTemplateIR, sources - ["A3_Weapons_F"]
						{
							class AirTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 500;
								maxRange = 4500;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = 1;
							};
							class GroundTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 500;
								maxRange = 4500;
								objectDistanceLimitCoef = 1;
								viewDistanceLimitCoef = 1;
							};
							maxTrackableSpeed = 55;
							angleRangeHorizontal = 45;
							angleRangeVertical = 35;
						};
						class LaserSensorComponent: SensorTemplateLaser //inherits 7 parameters from bin\config.bin/SensorTemplateLaser, sources - ["A3_Weapons_F"]
						{
							class AirTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 6000;
								maxRange = 6000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = -1;
							};
							class GroundTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 6000;
								maxRange = 6000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = -1;
							};
							maxTrackableSpeed = 55;
							angleRangeHorizontal = 90;
							angleRangeVertical = 70;
						};
					};
				};
			};
			SoundSetExplosion[] = {"RocketsMedium_Exp_SoundSet", "RocketsMedium_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class M_Scalpel_AT_hidden: M_Scalpel_AT //inherits 41 parameters from bin\config.bin/CfgAmmo/M_Scalpel_AT, sources - ["A3_Weapons_F"]
		{
			proxyShape = "\A3\weapons_f\empty";
		};
		class Bo_Air_LGB: M_Scalpel_AT //inherits 41 parameters from bin\config.bin/CfgAmmo/M_Scalpel_AT, sources - []
		{
		};
		class Bo_Air_LGB_hidden: M_Scalpel_AT_hidden //inherits 1 parameters from bin\config.bin/CfgAmmo/M_Scalpel_AT_hidden, sources - []
		{
		};
		class Bo_GBU12_LGB: LaserBombCore //inherits 16 parameters from bin\config.bin/CfgAmmo/LaserBombCore, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			hit = 5000;
			indirectHit = 1100;
			indirectHitRange = 12;
			dangerRadiusHit = 1000;
			suppressionRadiusHit = 120;
			soundHit1[] = {"A3\Sounds_F\weapons\Explosion\expl_big_1", 2.51189, 1, 2400};
			soundHit2[] = {"A3\Sounds_F\weapons\Explosion\expl_big_2", 2.51189, 1, 2400};
			soundHit3[] = {"A3\Sounds_F\weapons\Explosion\expl_big_3", 2.51189, 1, 2400};
			soundHit4[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_1", 2.51189, 1, 2400};
			soundHit5[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_2", 2.51189, 1, 2400};
			multiSoundHit[] = {"soundHit1", 0.2, "soundHit2", 0.2, "soundHit3", 0.2, "soundHit4", 0.2, "soundHit5", 0.2};
			explosionSoundEffect = "DefaultExplosion";
			model = "\A3\Weapons_F\Ammo\Bomb_01_fly_F";
			proxyShape = "\A3\Weapons_F\Ammo\Bomb_01_F";
			trackOversteer = 1;
			trackLead = 0.95;
			maneuvrability = 20;
			CraterEffects = "BombCrater";
			explosionEffects = "BombExplosion";
			explosionTime = 2;
			fuseDistance = 35;
			whistleDist = 24;
			nvLock = 1;
			missileLockCone = 180;
			missileKeepLockedCone = 180;
			missileLockMaxDistance = 8000;
			missileLockMinDistance = 250;
			missileLockMaxSpeed = 30;
			weaponLockSystem = 4;
			cmImmunity = 0.3;
			autoSeekTarget = 1;
			lockSeekRadius = 500;
			class Components //sources - ["A3_Weapons_F"]
			{
				class SensorsManagerComponent //sources - ["A3_Weapons_F"]
				{
					class Components //sources - ["A3_Weapons_F"]
					{
						class NVSensorComponent: SensorTemplateNV //inherits 2 parameters from bin\config.bin/SensorTemplateNV, sources - ["A3_Weapons_F"]
						{
							class AirTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 500;
								maxRange = 8000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = 1;
							};
							class GroundTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 500;
								maxRange = 8000;
								objectDistanceLimitCoef = 1;
								viewDistanceLimitCoef = 1;
							};
							maxTrackableSpeed = 30;
							angleRangeHorizontal = 180;
							angleRangeVertical = 180;
						};
						class LaserSensorComponent: SensorTemplateLaser //inherits 7 parameters from bin\config.bin/SensorTemplateLaser, sources - ["A3_Weapons_F"]
						{
							class AirTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 8000;
								maxRange = 8000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = -1;
							};
							class GroundTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 8000;
								maxRange = 8000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = -1;
							};
							maxTrackableSpeed = 30;
							angleRangeHorizontal = 180;
							angleRangeVertical = 180;
						};
					};
				};
			};
			SoundSetExplosion[] = {"BombsHeavy_Exp_SoundSet", "BombsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class Bo_GBU12_LGB_MI10: Bo_GBU12_LGB //inherits 34 parameters from bin\config.bin/CfgAmmo/Bo_GBU12_LGB, sources - ["A3_Weapons_F"]
		{
			maverickWeaponIndexOffset = 10;
		};
		class Bo_Mk82: BombCore //inherits 15 parameters from bin\config.bin/CfgAmmo/BombCore, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			hit = 5000;
			indirectHit = 1100;
			indirectHitRange = 12;
			dangerRadiusHit = 1250;
			suppressionRadiusHit = 100;
			cost = 1000;
			irLock = 0;
			laserLock = 0;
			maxControlRange = 10;
			maneuvrability = 16;
			sideAirFriction = 0.1;
			simulation = "shotRocket";
			maxSpeed = 100;
			timeToLive = 120;
			initTime = 0;
			thrustTime = 0;
			thrust = 0;
			soundHit1[] = {"A3\Sounds_F\weapons\Explosion\expl_big_1", 2.51189, 1, 1500};
			soundHit2[] = {"A3\Sounds_F\weapons\Explosion\expl_big_2", 2.51189, 1, 1500};
			soundHit3[] = {"A3\Sounds_F\weapons\Explosion\expl_big_3", 2.51189, 1, 1500};
			soundHit4[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_1", 2.51189, 1, 1500};
			soundHit5[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_2", 2.51189, 1, 1500};
			multiSoundHit[] = {"soundHit1", 0.2, "soundHit2", 0.2, "soundHit3", 0.2, "soundHit4", 0.2, "soundHit5", 0.2};
			explosionSoundEffect = "DefaultExplosion";
			model = "\A3\Weapons_F\Ammo\Bomb_02_F";
			proxyShape = "\A3\Weapons_F\Ammo\Bomb_02_F";
			CraterEffects = "BombCrater";
			explosionEffects = "BombExplosion";
			whistleDist = 24;
			SoundSetExplosion[] = {"BombsHeavy_Exp_SoundSet", "BombsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class Bo_Mk82_MI08: Bo_Mk82 //inherits 30 parameters from bin\config.bin/CfgAmmo/Bo_Mk82, sources - ["A3_Weapons_F"]
		{
			maverickWeaponIndexOffset = 8;
		};
		class R_PG32V_F: RocketBase //inherits 23 parameters from bin\config.bin/CfgAmmo/RocketBase, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			model = "\A3\weapons_f\launchers\RPG32\pg32v_rocket.p3d";
			hit = 600;
			indirectHit = 20;
			indirectHitRange = 4;
			explosive = 0.8;
			cost = 300;
			airFriction = 0.075;
			sideAirFriction = 0.075;
			maxSpeed = 140;
			initTime = 0;
			thrustTime = 0.1;
			thrust = 500;
			fuseDistance = 15;
			CraterEffects = "ATMissileCrater";
			explosionEffects = "ATMissileExplosion";
			effectsMissileInit = "";
			effectsMissile = "EmptyEffect";
			simulationStep = 0.02;
			airLock = 0;
			aiAmmoUsageFlags = "128 + 512";
			irLock = 0;
			timeToLive = 10;
			maneuvrability = 0;
			allowAgainstInfantry = 0;
			soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 1800};
			soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 1800};
			soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 1800};
			multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 11;
				duration = 1.4;
				frequency = 20;
				distance = 99.3296;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 110;
				duration = 0.6;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 2.11474;
				duration = 0.8;
				frequency = 20;
				distance = 35.7771;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 1;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
			SoundSetExplosion[] = {"RocketsLight_Exp_SoundSet", "RocketsLight_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class R_TBG32V_F: R_PG32V_F //inherits 33 parameters from bin\config.bin/CfgAmmo/R_PG32V_F, sources - ["A3_Weapons_F"]
		{
			hit = 200;
			indirectHit = 50;
			indirectHitRange = 6;
			explosive = 1;
			model = "\A3\weapons_f\launchers\RPG32\tbg32v_rocket.p3d";
			CraterEffects = "ArtyShellCrater";
			ExplosionEffects = "MortarExplosion";
			allowAgainstInfantry = 1;
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 22;
				duration = 2;
				frequency = 20;
				distance = 123.905;
			};
		};
		class R_80mm_HE: RocketBase //inherits 23 parameters from bin\config.bin/CfgAmmo/RocketBase, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			model = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
			hit = 400;
			indirectHit = 60;
			indirectHitRange = 15;
			cost = 500;
			maxSpeed = 590;
			initTime = 0.002;
			thrustTime = 0.69;
			thrust = 1060;
			airFriction = 0.09;
			sideAirFriction = 0.005;
			fuseDistance = 50;
			whistleDist = 30;
			timeToLive = 15;
			effectsMissileInit = "MissileDAR1";
			simulation = "shotMissile";
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 16;
				duration = 1.8;
				frequency = 20;
				distance = 191.554;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 80;
				duration = 0.6;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 2.9907;
				duration = 1.8;
				frequency = 20;
				distance = 71.5542;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 2;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
			SoundSetExplosion[] = {"RocketsMedium_Exp_SoundSet", "RocketsMedium_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class R_60mm_HE: R_80mm_HE //inherits 21 parameters from bin\config.bin/CfgAmmo/R_80mm_HE, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
			hit = 200;
			indirectHit = 40;
			indirectHitRange = 10;
			cost = 250;
			maxSpeed = 490;
			thrustTime = 1.1;
			thrust = 620;
			airFriction = 0.2;
			timeToLive = 10;
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 12;
				duration = 1.6;
				frequency = 20;
				distance = 141.968;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 60;
				duration = 0.6;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 2.78316;
				duration = 1.6;
				frequency = 20;
				distance = 61.9677;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 2;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
		};
		class R_230mm_HE: SubmunitionBase //inherits 1 parameters from bin\config.bin/CfgAmmo/SubmunitionBase, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			artilleryLock = 1;
			submunitionAmmo = "R_230mm_fly";
			triggerDistance = 500;
			cost = 1000;
			airFriction = 0;
			muzzleEffect = "";
			effectFly = "Missile0";
			model = "\A3\Weapons_F\Ammo\Missile_AT_02_fly_F";
			hit = 300;
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 46;
				duration = 3;
				frequency = 20;
				distance = 361.326;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 230;
				duration = 0.8;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 3.89432;
				duration = 3;
				frequency = 20;
				distance = 121.326;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 5;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
			SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class R_230mm_fly: ShellBase //inherits 21 parameters from bin\config.bin/CfgAmmo/ShellBase, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			artilleryLock = 1;
			model = "\A3\Weapons_F\Ammo\Missile_AT_02_F";
			hit = 1200;
			indirectHit = 800;
			indirectHitRange = 30;
			cost = 1000;
			audibleFire = 64;
			dangerRadiusHit = 1250;
			suppressionRadiusHit = 120;
			deflecting = 0;
			airFriction = 0;
			muzzleEffect = "";
			effectFly = "ArtilleryTrails";
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 46;
				duration = 3;
				frequency = 20;
				distance = 361.326;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 230;
				duration = 0.8;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 3.89432;
				duration = 3;
				frequency = 20;
				distance = 121.326;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 5;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
			soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 1900};
			soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 1900};
			soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 1900};
			multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
			SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class G_40mm_HE: GrenadeBase //inherits 15 parameters from bin\config.bin/CfgAmmo/GrenadeBase, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			explosionSoundEffect = "DefaultExplosion";
			simulation = "shotShell";
			model = "\A3\weapons_f\ammo\UGL_slug";
			hit = 80;
			indirectHit = 8;
			indirectHitRange = 6;
			visibleFire = 1;
			audibleFire = 30;
			visibleFireTime = 3;
			dangerRadiusHit = 60;
			suppressionRadiusHit = 24;
			explosive = 1;
			cost = 10;
			deflecting = 5;
			airFriction = -0.001;
			fuseDistance = 15;
			whistleDist = 16;
			typicalSpeed = 185;
			caliber = 2;
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_01", 3.16228, 1, 1500};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_02", 3.16228, 1, 1500};
			soundHit3[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_03", 3.16228, 1, 1500};
			soundHit4[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_04", 3.16228, 1, 1500};
			multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 8;
				duration = 1.2;
				frequency = 20;
				distance = 74.5964;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 20;
				duration = 0.4;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 0;
				duration = 0.2;
				frequency = 20;
				distance = 0;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 0;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
			SoundSetExplosion[] = {"GrenadeHe_Exp_SoundSet", "GrenadeHe_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class G_20mm_HE: G_40mm_HE //inherits 29 parameters from bin\config.bin/CfgAmmo/G_40mm_HE, sources - ["A3_Weapons_F"]
		{
			simulation = "shotBullet";
			hit = 40;
			indirectHit = 6;
			indirectHitRange = 4;
			whistleDist = 20;
			caliber = 1;
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 4;
				duration = 0.8;
				frequency = 20;
				distance = 75.7771;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 20;
				duration = 0.4;
				frequency = 20;
				distance = 1;
			};
		};
		class G_40mm_HEDP: G_40mm_HE //inherits 29 parameters from bin\config.bin/CfgAmmo/G_40mm_HE, sources - ["A3_Weapons_F"]
		{
			hit = 100;
			indirectHit = 6;
			indirectHitRange = 4;
			caliber = 3;
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 30;
				duration = 0.4;
				frequency = 20;
				distance = 1;
			};
		};
		class G_40mm_HEDP_Bullet: G_40mm_HEDP //inherits 5 parameters from bin\config.bin/CfgAmmo/G_40mm_HEDP, sources - ["A3_Weapons_F"]
		{
			simulation = "shotBullet";
		};
		class B_45ACP_Ball: BulletBase //inherits 229 parameters from bin\config.bin/CfgAmmo/BulletBase, sources - ["A3_Weapons_F"]
		{
			airLock = 1;
			hit = 5;
			indirectHit = 0;
			indirectHitRange = 0;
			dangerRadiusBulletClose = 4;
			dangerRadiusHit = 8;
			suppressionRadiusBulletClose = 2;
			suppressionRadiusHit = 4;
			cartridge = "FxCartridge_9mm";
			model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
			caliber = 1.4;
			deflecting = 30;
			audibleFire = 45;
			cost = 100;
			typicalSpeed = 280;
			airFriction = -0.0018;
			tracerScale = 0.6;
			tracerStartTime = 0.0075;
			tracerEndTime = 5;
		};
		class B_45ACP_Ball_Green: B_45ACP_Ball //inherits 19 parameters from bin\config.bin/CfgAmmo/B_45ACP_Ball, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		};
		class B_45ACP_Ball_Yellow: B_45ACP_Ball //inherits 19 parameters from bin\config.bin/CfgAmmo/B_45ACP_Ball, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		};
		class M_Titan_AA: MissileBase //inherits 34 parameters from bin\config.bin/CfgAmmo/MissileBase, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_atl_fly.p3d";
			hit = 80;
			indirectHit = 60;
			indirectHitRange = 6;
			proximityExplosionDistance = 10;
			maneuvrability = 15;
			simulationStep = 0.002;
			trackOversteer = 1;
			trackLead = 0.95;
			aiAmmoUsageFlags = 256;
			irLock = 1;
			cost = 1000;
			timeToLive = 15;
			airFriction = 0.145;
			sideAirFriction = 0.1;
			maxSpeed = 850;
			initTime = 0.25;
			thrustTime = 2.25;
			thrust = 380;
			fuseDistance = 50;
			CraterEffects = "AAMissileCrater";
			explosionEffects = "AAMissileExplosion";
			effectsMissileInit = "RocketBackEffectsRPG";
			effectsMissile = "missile3";
			soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 1900};
			soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 1900};
			soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 1900};
			multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
			airLock = 2;
			missileLockCone = 4;
			missileKeepLockedCone = 75;
			missileLockMaxDistance = 3500;
			missileLockMinDistance = 100;
			missileLockMaxSpeed = 250;
			weaponLockSystem = "2 + 16";
			cmImmunity = 0.9;
			class Components: Components //inherits 0 parameters from bin\config.bin/CfgAmmo/MissileBase/Components, sources - ["A3_Weapons_F"]
			{
				class SensorsManagerComponent //sources - ["A3_Weapons_F"]
				{
					class Components //sources - ["A3_Weapons_F"]
					{
						class IRSensorComponent: SensorTemplateIR //inherits 8 parameters from bin\config.bin/SensorTemplateIR, sources - ["A3_Weapons_F"]
						{
							class AirTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 500;
								maxRange = 3500;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = 1;
							};
							class GroundTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 500;
								maxRange = 2500;
								objectDistanceLimitCoef = 1;
								viewDistanceLimitCoef = 1;
							};
							maxTrackableSpeed = 250;
							angleRangeHorizontal = 7;
							angleRangeVertical = 4.5;
							groundNoiseDistanceCoef = 0.2;
							maxGroundNoiseDistance = 50;
						};
					};
				};
			};
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 22;
				duration = 2;
				frequency = 20;
				distance = 147.905;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 110;
				duration = 0.6;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 2.78316;
				duration = 1.6;
				frequency = 20;
				distance = 61.9677;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 3;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
			SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class M_Zephyr: M_Titan_AA //inherits 42 parameters from bin\config.bin/CfgAmmo/M_Titan_AA, sources - ["A3_Weapons_F"]
		{
			proxyShape = "\A3\Weapons_F\Ammo\Missile_AA_02_F.p3d";
			model = "\A3\Weapons_F\Ammo\Missile_AA_02_fly_F.p3d";
			airFriction = 0.078;
			sideAirFriction = 0.18;
			maneuvrability = 30;
			hit = 170;
			indirectHit = 120;
			indirectHitRange = 15;
			proximityExplosionDistance = 20;
			timeToLive = 30;
			initTime = 0.6;
			effectsMissileInit = "PylonBackEffects_InitDelay";
			muzzleEffect = "";
			thrustTime = 7;
			thrust = 200;
			maxSpeed = 850;
			fuseDistance = 500;
			cost = 1500;
			trackOversteer = 1.2;
			trackLead = 1.05;
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 2.9907;
				duration = 1.8;
				frequency = 20;
				distance = 71.5542;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 4;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
			missileLockCone = 40;
			missileKeepLockedCone = 75;
			missileLockMaxDistance = 10000;
			missileLockMinDistance = 500;
			missileLockMaxSpeed = 835;
			weaponLockSystem = "8 + 16";
			cmImmunity = 0.95;
			class Components: Components //inherits 1 parameters from bin\config.bin/CfgAmmo/M_Titan_AA/Components, sources - ["A3_Weapons_F"]
			{
				class SensorsManagerComponent //sources - ["A3_Weapons_F"]
				{
					class Components //sources - ["A3_Weapons_F"]
					{
						class RadarSensorComponent: SensorTemplateActiveRadar //inherits 11 parameters from bin\config.bin/SensorTemplateActiveRadar, sources - ["A3_Weapons_F"]
						{
							class AirTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 10000;
								maxRange = 10000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = -1;
							};
							class GroundTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 5000;
								maxRange = 5000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = -1;
							};
							angleRangeHorizontal = 60;
							angleRangeVertical = 60;
						};
					};
				};
			};
		};
		class M_Zephyr_Mi06: M_Zephyr //inherits 30 parameters from bin\config.bin/CfgAmmo/M_Zephyr, sources - ["A3_Weapons_F"]
		{
			maverickWeaponIndexOffset = 6;
		};
		class M_Titan_AA_long: M_Titan_AA //inherits 42 parameters from bin\config.bin/CfgAmmo/M_Titan_AA, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_F_Beta\Launchers\Titan\titan_missile_atl_fly.p3d";
			thrustTime = 3;
			missileLockCone = 30;
			missileKeepLockedCone = 40;
			missileLockMaxDistance = 4500;
			missileLockMaxSpeed = 500;
			class Components: Components //inherits 1 parameters from bin\config.bin/CfgAmmo/M_Titan_AA/Components, sources - ["A3_Weapons_F"]
			{
				class SensorsManagerComponent //sources - ["A3_Weapons_F"]
				{
					class Components //sources - ["A3_Weapons_F"]
					{
						class IRSensorComponent: SensorTemplateIR //inherits 8 parameters from bin\config.bin/SensorTemplateIR, sources - ["A3_Weapons_F"]
						{
							class AirTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 500;
								maxRange = 4500;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = 1;
							};
							class GroundTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 500;
								maxRange = 3500;
								objectDistanceLimitCoef = 1;
								viewDistanceLimitCoef = 1;
							};
							maxTrackableSpeed = 500;
							angleRangeHorizontal = 40;
							angleRangeVertical = 25;
							groundNoiseDistanceCoef = 0.2;
							maxGroundNoiseDistance = 50;
						};
					};
				};
			};
		};
		class Mo_cluster_AP: ShellBase //inherits 21 parameters from bin\config.bin/CfgAmmo/ShellBase, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			model = "\A3\weapons_f\ammo\shell";
			hit = 70;
			indirectHit = 50;
			indirectHitRange = 8;
			timeToLive = 20;
			initTime = 0.025;
			EffectFly = "ArtilleryTrails";
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_01", 1.77828, 1, 2000};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_02", 1.77828, 1, 2000};
			soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_03", 1.77828, 1, 2000};
			soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_04", 1.77828, 1, 2000};
			soundHit5[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_05", 1.77828, 1, 2000};
			soundHit6[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_06", 1.77828, 1, 2000};
			soundHit7[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_07", 1.77828, 1, 2000};
			soundHit8[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_08", 1.77828, 1, 2000};
			multiSoundHit[] = {"soundHit1", 0.125, "soundHit2", 0.125, "soundHit3", 0.125, "soundHit4", 0.125, "soundHit5", 0.125, "soundHit6", 0.125, "soundHit7", 0.125, "soundHit8", 0.125};
			SoundSetExplosion[] = {"Shell155mm_Exp_SoundSet", "Shell155mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class M_Air_AA: MissileBase //inherits 34 parameters from bin\config.bin/CfgAmmo/MissileBase, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			model = "\A3\Weapons_F\Ammo\Missile_AT_02_fly_F";
			proxyShape = "\A3\Weapons_F\Ammo\Missile_AT_02_F";
			hit = 200;
			indirectHit = 100;
			indirectHitRange = 7;
			maneuvrability = 42;
			simulationStep = 0.002;
			aiAmmoUsageFlags = 256;
			irLock = 1;
			cost = 1000;
			maxSpeed = 1020;
			timeToLive = 30;
			airFriction = 0.14;
			sideAirFriction = 0.18;
			trackOversteer = 1;
			trackLead = 1;
			initTime = 0;
			thrustTime = 5;
			thrust = 250;
			fuseDistance = 300;
			CraterEffects = "AAMissileCrater";
			explosionEffects = "AAMissileExplosion";
			effectsMissile = "missile3";
			whistleDist = 20;
			muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
			soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 1900};
			soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 1900};
			soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 1900};
			multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
			airLock = 2;
			missileLockCone = 90;
			missileKeepLockedCone = 120;
			missileLockMaxDistance = 6000;
			missileLockMinDistance = 200;
			missileLockMaxSpeed = 600;
			weaponLockSystem = "2 + 16";
			cmImmunity = 0.92;
			manualControl = 0;
			maxControlRange = 6000;
			class Components: Components //inherits 0 parameters from bin\config.bin/CfgAmmo/MissileBase/Components, sources - ["A3_Weapons_F"]
			{
				class SensorsManagerComponent //sources - ["A3_Weapons_F"]
				{
					class Components //sources - ["A3_Weapons_F"]
					{
						class IRSensorComponent: SensorTemplateIR //inherits 8 parameters from bin\config.bin/SensorTemplateIR, sources - ["A3_Weapons_F"]
						{
							class AirTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 500;
								maxRange = 6000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = 1;
							};
							class GroundTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 500;
								maxRange = 5000;
								objectDistanceLimitCoef = 1;
								viewDistanceLimitCoef = 1;
							};
							angleRangeHorizontal = 120;
							angleRangeVertical = 90;
						};
					};
				};
			};
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 22;
				duration = 2;
				frequency = 20;
				distance = 163.905;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 110;
				duration = 0.6;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 2.9907;
				duration = 1.8;
				frequency = 20;
				distance = 71.5542;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 4;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
			SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class M_Air_AA_MI02: M_Air_AA //inherits 45 parameters from bin\config.bin/CfgAmmo/M_Air_AA, sources - ["A3_Weapons_F"]
		{
			maverickWeaponIndexOffset = 2;
		};
		class M_Air_AA_MI06: M_Air_AA //inherits 45 parameters from bin\config.bin/CfgAmmo/M_Air_AA, sources - ["A3_Weapons_F"]
		{
			maverickWeaponIndexOffset = 6;
		};
		class M_Titan_AT: MissileBase //inherits 34 parameters from bin\config.bin/CfgAmmo/MissileBase, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_at_fly";
			hit = 800;
			indirectHit = 15;
			indirectHitRange = 4;
			explosive = 0.8;
			cost = 500;
			aiAmmoUsageFlags = "128 + 512";
			irLock = 1;
			laserLock = 1;
			explosionSoundEffect = "DefaultExplosion";
			effectsMissileInit = "PylonBackEffects";
			muzzleEffect = "";
			initTime = 0.25;
			trackOversteer = 1;
			trackLead = 0.85;
			timeToLive = 30;
			maneuvrability = 4;
			simulationStep = 0.002;
			airFriction = 0.065;
			sideAirFriction = 0.3;
			maxSpeed = 210;
			typicalSpeed = 175;
			thrustTime = 6;
			thrust = 40;
			fuseDistance = 50;
			effectsMissile = "missile2";
			whistleDist = 4;
			airLock = 0;
			missileLockCone = 4;
			missileKeepLockedCone = 160;
			missileLockMaxDistance = 4000;
			missileLockMinDistance = 50;
			missileLockMaxSpeed = 35;
			weaponLockSystem = "2 + 16";
			cmImmunity = 0.3;
			manualControl = 1;
			maxControlRange = 4000;
			class Components: Components //inherits 0 parameters from bin\config.bin/CfgAmmo/MissileBase/Components, sources - ["A3_Weapons_F"]
			{
				class SensorsManagerComponent //sources - ["A3_Weapons_F"]
				{
					class Components //sources - ["A3_Weapons_F"]
					{
						class IRSensorComponent: SensorTemplateIR //inherits 8 parameters from bin\config.bin/SensorTemplateIR, sources - ["A3_Weapons_F"]
						{
							class AirTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 500;
								maxRange = 4000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = 1;
							};
							class GroundTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 500;
								maxRange = 4000;
								objectDistanceLimitCoef = 1;
								viewDistanceLimitCoef = 1;
							};
							maxTrackableSpeed = 35;
							angleRangeHorizontal = 7;
							angleRangeVertical = 4.5;
							maxTrackableATL = 100;
						};
						class LaserSensorComponent: SensorTemplateLaser //inherits 7 parameters from bin\config.bin/SensorTemplateLaser, sources - ["A3_Weapons_F"]
						{
							class AirTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 4000;
								maxRange = 4000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = -1;
							};
							class GroundTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 4000;
								maxRange = 4000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = -1;
							};
							maxTrackableSpeed = 35;
							angleRangeHorizontal = 7;
							angleRangeVertical = 4.5;
							maxTrackableATL = 100;
						};
					};
				};
			};
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 11;
				duration = 1.4;
				frequency = 20;
				distance = 91.3296;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 110;
				duration = 0.6;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 2.78316;
				duration = 1.6;
				frequency = 20;
				distance = 61.9677;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 3;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
			SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class M_Titan_AP: M_Titan_AT //inherits 43 parameters from bin\config.bin/CfgAmmo/M_Titan_AT, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_ap_fly";
			hit = 100;
			indirectHit = 25;
			indirectHitRange = 10;
			explosive = 1;
			aiAmmoUsageFlags = "64 + 128";
			airLock = 0;
			irLock = 0;
			cost = 300;
			timeToLive = 20;
			maneuvrability = 10;
			thrustTime = 10;
			thrust = 50;
			CraterEffects = "ATMissileCrater";
			effectsMissile = "missile3";
			class Components: Components //inherits 1 parameters from bin\config.bin/CfgAmmo/M_Titan_AT/Components, sources - ["A3_Weapons_F"]
			{
				class SensorsManagerComponent //sources - []
				{
				};
			};
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 11;
				duration = 1.4;
				frequency = 20;
				distance = 123.33;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 55;
				duration = 0.6;
				frequency = 20;
				distance = 1;
			};
		};
		class M_Air_AT: M_Titan_AT //inherits 43 parameters from bin\config.bin/CfgAmmo/M_Titan_AT, sources - []
		{
		};
		class M_Zephyr_air: M_Zephyr //inherits 30 parameters from bin\config.bin/CfgAmmo/M_Zephyr, sources - ["A3_Weapons_F"]
		{
			effectsMissile = "missile3";
		};
		class M_Titan_AA_static: M_Titan_AA //inherits 42 parameters from bin\config.bin/CfgAmmo/M_Titan_AA, sources - ["A3_Weapons_F"]
		{
			effectsMissileInit = "RocketBackEffectsStaticRPG";
		};
		class M_Titan_AT_static: M_Titan_AT //inherits 43 parameters from bin\config.bin/CfgAmmo/M_Titan_AT, sources - ["A3_Weapons_F"]
		{
			effectsMissileInit = "RocketBackEffectsStaticRPG";
		};
		class IRStrobeBase: GrenadeCore //inherits 15 parameters from bin\config.bin/CfgAmmo/GrenadeCore, sources - ["A3_Weapons_F"]
		{
			muzzleEffect = "BIS_Effects_Rifle";
			timeToLive = 300;
			explosionTime = 310;
			shadow = 1;
			hit = 5;
			indirectHit = 2;
			indirectHitRange = 0.2;
			typicalspeed = 18;
			cost = 5000;
			irLock = 1;
			simulation = "shotNVGMarker";
			simulationStep = 0.05;
			explosive = 0;
			soundHit[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_1", 1, 1, 45};
			deflecting = 30;
			class NVGMarkers //sources - ["A3_Weapons_F"]
			{
				class Blinking1 //sources - ["A3_Weapons_F"]
				{
					name = "cerveny pozicni blik";
					color[] = {0.01, 0.01, 0.01, 1};
					ambient[] = {0.005, 0.005, 0.005, 1};
					blinking = 1;
					brightness = 0.002;
					onlyInNvg = 1;
				};
			};
			soundImpactSoft1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_1", 1.41254, 1, 45};
			soundImpactSoft2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_2", 1.41254, 1, 45};
			soundImpactSoft3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_3", 1.41254, 1, 45};
			soundImpactSoft4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_4", 1.41254, 1, 45};
			soundImpactSoft5[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_5", 1.41254, 1, 45};
			soundImpactSoft6[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_6", 1.41254, 1, 45};
			soundImpactSoft7[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_7", 1.41254, 1, 45};
			soundImpactHard1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_1", 1.41254, 1, 65};
			soundImpactHard2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_2", 1.41254, 1, 65};
			soundImpactHard3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_3", 1.41254, 1, 65};
			soundImpactHard4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_4", 1.41254, 1, 65};
			soundImpactHard5[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_5", 1.41254, 1, 65};
			soundImpactHard6[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_6", 1.41254, 1, 65};
			soundImpactHard7[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_7", 1.41254, 1, 65};
			soundImpactIron1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_1", 1.25893, 1, 95};
			soundImpactIron2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_2", 1.25893, 1, 95};
			soundImpactIron3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_3", 1.25893, 1, 95};
			soundImpactIron4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_4", 1.25893, 1, 95};
			soundImpactIron5[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_5", 1.25893, 1, 95};
			soundImpactWoodExt1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_1", 1.41254, 1, 75};
			soundImpactWoodExt2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_2", 1.41254, 1, 75};
			soundImpactWoodExt3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_3", 1.41254, 1, 75};
			soundImpactWoodExt4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_4", 1.41254, 1, 75};
			soundImpactWater1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_1", 1.41254, 1, 55};
			soundImpactWater2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_2", 1.41254, 1, 55};
			soundImpactWater3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_3", 1.41254, 1, 55};
			impactGroundSoft[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1};
			impactGroundHard[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
			impactIron[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
			impactArmor[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
			impactBuilding[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
			impactFoliage[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1};
			impactWood[] = {"soundImpactWoodExt1", 0.25, "soundImpactWoodExt2", 0.25, "soundImpactWoodExt3", 0.25, "soundImpactWoodExt4", 0.25};
			impactGlass[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
			impactGlassArmored[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
			impactConcrete[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
			impactTyre[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1};
			impactRubber[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1};
			impactPlastic[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1};
			impactDefault[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
			impactMetal[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
			impactMetalplate[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
			impactWater[] = {"soundImpactWater1", 0.35, "soundImpactWater2", 0.35, "soundImpactWater3", 0.3};
		};
		class B_IRStrobe: IRStrobeBase //inherits 59 parameters from bin\config.bin/CfgAmmo/IRStrobeBase, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_F_EPB\Ammo\B_IRstrobe_F.p3d";
			class NVGMarkers //sources - ["A3_Weapons_F"]
			{
				class Blinking1 //sources - []
				{
				};
			};
		};
		class O_IRStrobe: IRStrobeBase //inherits 59 parameters from bin\config.bin/CfgAmmo/IRStrobeBase, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_F_EPB\Ammo\O_IRstrobe_F.p3d";
			class NVGMarkers //sources - ["A3_Weapons_F"]
			{
				class Blinking1 //sources - []
				{
				};
			};
		};
		class I_IRStrobe: IRStrobeBase //inherits 59 parameters from bin\config.bin/CfgAmmo/IRStrobeBase, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_F_EPB\Ammo\I_IRstrobe_F.p3d";
			class NVGMarkers //sources - ["A3_Weapons_F"]
			{
				class Blinking1 //sources - []
				{
				};
			};
		};
		class B_762x51_Minigun_Tracer_Yellow: B_762x51_Minigun_Tracer_Red //inherits 23 parameters from bin\config.bin/CfgAmmo/B_762x51_Minigun_Tracer_Red, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
			submunitionAmmo = "B_762x51_Minigun_Tracer_Yellow_splash";
		};
		class B_762x51_Minigun_Tracer_Yellow_splash: B_762x51_Minigun_Tracer_Red_splash //inherits 8 parameters from bin\config.bin/CfgAmmo/B_762x51_Minigun_Tracer_Red_splash, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		};
		class Sh_125mm_APFSDS: Sh_120mm_APFSDS //inherits 33 parameters from bin\config.bin/CfgAmmo/Sh_120mm_APFSDS, sources - ["A3_Weapons_F"]
		{
			hit = 550;
			indirectHit = 20;
			indirectHitRange = 0.5;
			caliber = 35;
			deflecting = 20;
		};
		class Sh_125mm_APFSDS_T_Red: Sh_125mm_APFSDS //inherits 5 parameters from bin\config.bin/CfgAmmo/Sh_125mm_APFSDS, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		};
		class Sh_125mm_APFSDS_T_Green: Sh_125mm_APFSDS //inherits 5 parameters from bin\config.bin/CfgAmmo/Sh_125mm_APFSDS, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
		};
		class Sh_125mm_APFSDS_T_Yellow: Sh_125mm_APFSDS //inherits 5 parameters from bin\config.bin/CfgAmmo/Sh_125mm_APFSDS, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
		};
		class Sh_125mm_HE: Sh_120mm_HE //inherits 29 parameters from bin\config.bin/CfgAmmo/Sh_120mm_HE, sources - ["A3_Weapons_F"]
		{
			hit = 300;
			indirectHit = 80;
			indirectHitRange = 6;
			caliber = 10;
			deflecting = 0;
		};
		class Sh_125mm_HE_T_Red: Sh_125mm_HE //inherits 5 parameters from bin\config.bin/CfgAmmo/Sh_125mm_HE, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		};
		class Sh_125mm_HE_T_Green: Sh_125mm_HE //inherits 5 parameters from bin\config.bin/CfgAmmo/Sh_125mm_HE, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
		};
		class Sh_125mm_HE_T_Yellow: Sh_125mm_HE //inherits 5 parameters from bin\config.bin/CfgAmmo/Sh_125mm_HE, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
		};
		class Sh_125mm_HEAT: Sh_125mm_HE //inherits 5 parameters from bin\config.bin/CfgAmmo/Sh_125mm_HE, sources - ["A3_Weapons_F"]
		{
			hit = 800;
			indirectHit = 40;
			indirectHitRange = 2;
			cost = 500;
			caliber = 1;
			deflecting = 0;
			explosive = 0.9;
			typicalSpeed = 900;
			CraterEffects = "ATRocketCrater";
			explosionEffects = "ATRocketExplosion";
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01", 1.77828, 1, 1800};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02", 1.77828, 1, 1800};
			soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03", 1.77828, 1, 1800};
			soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04", 1.77828, 1, 1800};
			multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
			explosionSoundEffect = "DefaultExplosion";
		};
		class Sh_125mm_HEAT_T_Red: Sh_125mm_HEAT //inherits 16 parameters from bin\config.bin/CfgAmmo/Sh_125mm_HEAT, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		};
		class Sh_125mm_HEAT_T_Green: Sh_125mm_HEAT //inherits 16 parameters from bin\config.bin/CfgAmmo/Sh_125mm_HEAT, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
		};
		class Sh_125mm_HEAT_T_Yellow: Sh_125mm_HEAT //inherits 16 parameters from bin\config.bin/CfgAmmo/Sh_125mm_HEAT, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
		};
		class Gatling_30mm_HE_Plane_CAS_01_F: BulletBase //inherits 229 parameters from bin\config.bin/CfgAmmo/BulletBase, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_red.p3d";
			cost = 20;
			hit = 180;
			indirectHit = 4;
			indirectHitRange = 3;
			caliber = 5;
			explosive = 0.4;
			airlock = 1;
			deflecting = 5;
			airFriction = -0.00036;
			typicalSpeed = 960;
			visibleFire = 32;
			audibleFire = 250;
			visibleFireTime = 3;
			fuseDistance = 10;
			dangerRadiusBulletClose = 20;
			dangerRadiusHit = 60;
			suppressionRadiusBulletClose = 12;
			suppressionRadiusHit = 24;
			tracerScale = 2.5;
			tracerStartTime = 0.1;
			tracerEndTime = 4.7;
			soundFly[] = {"", 1, 1, 50};
			explosionSoundEffect = "DefaultExplosion";
			explosionEffects = "ExploAmmoExplosionPlaneCAS";
			craterEffects = "ExploAmmoCrater";
			soundSetSonicCrack[] = {"BulletSonicCrack_Gatling_SoundSet"};
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_01", 3.16228, 1, 1300};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_02", 3.16228, 1, 1300};
			soundHit3[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_03", 3.16228, 1, 1300};
			soundHit4[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_04", 3.16228, 1, 1300};
			multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 6;
				duration = 1;
				frequency = 20;
				distance = 67.8178;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 30;
				duration = 0.4;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 2.23607;
				duration = 1;
				frequency = 20;
				distance = 40;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 0.01;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
			class HitEffects //sources - ["A3_Weapons_F"]
			{
				Hit_Foliage_green = "ImpactLeavesGreen";
				Hit_Foliage_Dead = "ImpactLeavesDead";
				Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
				Hit_Foliage_Palm = "ImpactLeavesPalm";
				Hit_Foliage_Pine = "ImpactLeavesPine";
				hitFoliage = "ImpactLeaves";
				hitGlass = "";
				hitGlassArmored = "";
				hitWood = "ImpactWood";
				hitMetal = "";
				hitMetalPlate = "";
				hitBuilding = "";
				hitPlastic = "";
				hitRubber = "";
				hitConcrete = "";
				hitMan = "";
				hitGroundSoft = "";
				hitGroundHard = "";
				hitWater = "ImpactEffectsWater";
				hitVirtual = "";
			};
			SoundSetExplosion[] = {"Shell19mm25mm_Exp_SoundSet"};
		};
		class Missile_AA_04_F: MissileBase //inherits 34 parameters from bin\config.bin/CfgAmmo/MissileBase, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			model = "\A3\Weapons_F_EPC\Ammo\Missile_AA_04_fly_F.p3d";
			proxyShape = "\A3\Weapons_F_EPC\Ammo\Missile_AA_04_F.p3d";
			maverickWeaponIndexOffset = 0;
			cost = 1000;
			hit = 100;
			indirectHit = 75;
			indirectHitRange = 9;
			proximityExplosionDistance = 15;
			airLock = 2;
			irLock = 1;
			laserLock = 0;
			nvLock = 0;
			missileLockCone = 30;
			missileKeepLockedCone = 45;
			missileLockMaxDistance = 4500;
			missileLockMinDistance = 150;
			missileLockMaxSpeed = 445;
			weaponLockSystem = "2 + 16";
			cmImmunity = 0.9;
			manualControl = 0;
			maxControlRange = 4500;
			class Components: Components //inherits 0 parameters from bin\config.bin/CfgAmmo/MissileBase/Components, sources - ["A3_Weapons_F"]
			{
				class SensorsManagerComponent //sources - ["A3_Weapons_F"]
				{
					class Components //sources - ["A3_Weapons_F"]
					{
						class IRSensorComponent: SensorTemplateIR //inherits 8 parameters from bin\config.bin/SensorTemplateIR, sources - ["A3_Weapons_F"]
						{
							class AirTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 500;
								maxRange = 5000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = 1;
							};
							class GroundTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 500;
								maxRange = 4000;
								objectDistanceLimitCoef = 1;
								viewDistanceLimitCoef = 1;
							};
							angleRangeHorizontal = 30;
							angleRangeVertical = 30;
						};
					};
				};
			};
			aiAmmoUsageFlags = 256;
			initTime = 0;
			thrust = 220;
			thrustTime = 5;
			airFriction = 0.14;
			sideAirFriction = 0.2;
			maxSpeed = 920;
			maneuvrability = 36;
			simulationStep = 0.002;
			fuseDistance = 500;
			timeToLive = 20;
			trackLead = 0.9;
			trackOversteer = 1;
			craterEffects = "ATRocketCrater";
			explosionEffects = "ATRocketExplosion";
			effectsMissileInit = "PylonBackEffects";
			muzzleEffect = "";
			soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 2000};
			soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 2000};
			soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 2000};
			multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
			whistleDist = 8;
			class Hiteffects //sources - ["A3_Weapons_F"]
			{
				hitWater = "ImpactEffectsSmall";
			};
			SoundSetExplosion[] = {"RocketsMedium_Exp_SoundSet", "RocketsMedium_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class Missile_AGM_02_F: MissileBase //inherits 34 parameters from bin\config.bin/CfgAmmo/MissileBase, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			model = "\A3\Weapons_F_EPC\Ammo\Missile_AGM_02_fly_F.p3d";
			proxyShape = "\A3\Weapons_F_EPC\Ammo\Missile_AGM_02_F.p3d";
			maverickWeaponIndexOffset = 2;
			cost = 1500;
			hit = 2100;
			indirectHit = 85;
			indirectHitRange = 8;
			airLock = 0;
			irLock = 1;
			laserLock = 0;
			nvLock = 0;
			missileLockCone = 30;
			missileKeepLockedCone = 30;
			missileLockMaxDistance = 6000;
			missileLockMinDistance = 350;
			missileLockMaxSpeed = 55;
			weaponLockSystem = "2 + 16";
			cmImmunity = 0.5;
			manualControl = 0;
			maxControlRange = 6000;
			class Components: Components //inherits 0 parameters from bin\config.bin/CfgAmmo/MissileBase/Components, sources - ["A3_Weapons_F"]
			{
				class SensorsManagerComponent //sources - ["A3_Weapons_F"]
				{
					class Components //sources - ["A3_Weapons_F"]
					{
						class IRSensorComponent: SensorTemplateIR //inherits 8 parameters from bin\config.bin/SensorTemplateIR, sources - ["A3_Weapons_F"]
						{
							class AirTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 500;
								maxRange = 6000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = 1;
							};
							class GroundTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 500;
								maxRange = 6000;
								objectDistanceLimitCoef = 1;
								viewDistanceLimitCoef = 1;
							};
							maxTrackableSpeed = 55;
							angleRangeHorizontal = 30;
							angleRangeVertical = 30;
						};
					};
				};
			};
			aiAmmoUsageFlags = "128 + 512";
			initTime = 0;
			thrust = 240;
			thrustTime = 5;
			airFriction = 0.05;
			sideAirFriction = 0.1;
			maxSpeed = 828;
			maneuvrability = 27;
			simulationStep = 0.002;
			fuseDistance = 500;
			timeToLive = 40;
			trackLead = 1;
			trackOversteer = 1;
			craterEffects = "AAMissileCrater";
			effectsMissile = "missile3";
			explosionEffects = "AAMissileExplosion";
			effectsMissileInit = "PylonBackEffects";
			muzzleEffect = "";
			whistleDist = 20;
			cameraViewAvailable = 1;
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 22;
				duration = 2;
				frequency = 20;
				distance = 163.905;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 110;
				duration = 0.6;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 2.9907;
				duration = 1.8;
				frequency = 20;
				distance = 71.5542;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 4;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
			SoundSetExplosion[] = {"RocketsLight_Exp_SoundSet", "RocketsLight_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class Bomb_04_F: LaserBombCore //inherits 16 parameters from bin\config.bin/CfgAmmo/LaserBombCore, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			model = "\A3\Weapons_F_EPC\Ammo\Bomb_04_fly_F.p3d";
			proxyShape = "\A3\Weapons_F_EPC\Ammo\Bomb_04_F.p3d";
			maverickWeaponIndexOffset = 8;
			hit = 6000;
			indirectHit = 1400;
			indirectHitRange = 15;
			nvLock = 1;
			missileLockCone = 180;
			missileKeepLockedCone = 180;
			missileLockMaxDistance = 8000;
			missileLockMinDistance = 250;
			missileLockMaxSpeed = 30;
			weaponLockSystem = 4;
			cmImmunity = 0.3;
			autoSeekTarget = 1;
			lockSeekRadius = 500;
			class Components //sources - ["A3_Weapons_F"]
			{
				class SensorsManagerComponent //sources - ["A3_Weapons_F"]
				{
					class Components //sources - ["A3_Weapons_F"]
					{
						class NVSensorComponent: SensorTemplateNV //inherits 2 parameters from bin\config.bin/SensorTemplateNV, sources - ["A3_Weapons_F"]
						{
							class AirTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 500;
								maxRange = 8000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = 1;
							};
							class GroundTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 500;
								maxRange = 8000;
								objectDistanceLimitCoef = 1;
								viewDistanceLimitCoef = 1;
							};
							maxTrackableSpeed = 30;
							angleRangeHorizontal = 180;
							angleRangeVertical = 180;
						};
						class LaserSensorComponent: SensorTemplateLaser //inherits 7 parameters from bin\config.bin/SensorTemplateLaser, sources - ["A3_Weapons_F"]
						{
							class AirTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 8000;
								maxRange = 8000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = -1;
							};
							class GroundTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 8000;
								maxRange = 8000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = -1;
							};
							maxTrackableSpeed = 30;
							angleRangeHorizontal = 180;
							angleRangeVertical = 180;
						};
					};
				};
			};
			aiAmmoUsageFlags = "128 + 512";
			maneuvrability = 20;
			fuseDistance = 35;
			trackLead = 0.95;
			trackOversteer = 1;
			craterEffects = "BombCrater";
			explosionEffects = "BombExplosion";
			explosionSoundEffect = "DefaultExplosion";
			explosionTime = 2;
			multiSoundHit[] = {"soundHit1", 0.2, "soundHit2", 0.2, "soundHit3", 0.2, "soundHit4", 0.2, "soundHit5", 0.2};
			soundHit1[] = {"\A3\Sounds_F\weapons\Explosion\expl_big_1", 2.51189, 1, 2400};
			soundHit2[] = {"\A3\Sounds_F\weapons\Explosion\expl_big_2", 2.51189, 1, 2400};
			soundHit3[] = {"\A3\Sounds_F\weapons\Explosion\expl_big_3", 2.51189, 1, 2400};
			soundHit4[] = {"\A3\Sounds_F\weapons\Explosion\expl_shell_1", 2.51189, 1, 2400};
			soundHit5[] = {"\A3\Sounds_F\weapons\Explosion\expl_shell_2", 2.51189, 1, 2400};
			whistleDist = 24;
			SoundSetExplosion[] = {"BombsHeavy_Exp_SoundSet", "BombsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class M_Mo_82mm_AT: MissileBase //inherits 34 parameters from bin\config.bin/CfgAmmo/MissileBase, sources - ["A3_Weapons_F"]
		{
			model = "\A3\weapons_f\ammo\shell";
			hit = 160;
			indirectHit = 50;
			indirectHitRange = 8;
			autoSeekTarget = 1;
			irLock = 1;
			airLock = 0;
			laserLock = 0;
			manualControl = 0;
			maneuvrability = 10;
			simulationStep = 0.002;
			fuseDistance = 0;
			airFriction = 0;
			weaponLockSystem = 2;
		};
		class M_Mo_82mm_AT_LG: M_Mo_82mm_AT //inherits 14 parameters from bin\config.bin/CfgAmmo/M_Mo_82mm_AT, sources - ["A3_Weapons_F"]
		{
			hit = 240;
			irLock = 0;
			laserLock = 1;
			manualControl = 1;
			autoSeekTarget = 1;
			simulationStep = 0.002;
			weaponLockSystem = 4;
		};
		class M_Mo_120mm_AT: Missile_AGM_02_F //inherits 46 parameters from bin\config.bin/CfgAmmo/Missile_AGM_02_F, sources - ["A3_Weapons_F"]
		{
			model = "\A3\weapons_f\ammo\shell";
			hit = 800;
			indirectHit = 50;
			indirectHitRange = 3;
			autoSeekTarget = 1;
			airFriction = 0;
			EffectFly = "ArtilleryTrails";
			weaponLockSystem = 2;
			cameraViewAvailable = 1;
		};
		class M_Mo_155mm_AT: M_Mo_120mm_AT //inherits 9 parameters from bin\config.bin/CfgAmmo/M_Mo_120mm_AT, sources - ["A3_Weapons_F"]
		{
			hit = 1200;
			indirectHit = 200;
			indirectHitRange = 4;
		};
		class M_Mo_120mm_AT_LG: M_Mo_120mm_AT //inherits 9 parameters from bin\config.bin/CfgAmmo/M_Mo_120mm_AT, sources - ["A3_Weapons_F"]
		{
			laserLock = 1;
			manualControl = 1;
			simulationStep = 0.002;
			EffectFly = "ArtilleryTrails";
			weaponLockSystem = 4;
		};
		class M_Mo_155mm_AT_LG: M_Mo_120mm_AT_LG //inherits 5 parameters from bin\config.bin/CfgAmmo/M_Mo_120mm_AT_LG, sources - ["A3_Weapons_F"]
		{
			hit = 1200;
			indirectHit = 200;
			indirectHitRange = 4;
		};
		class Rocket_04_HE_F: MissileBase //inherits 34 parameters from bin\config.bin/CfgAmmo/MissileBase, sources - ["A3_Weapons_F","A3_Sounds_F"]
		{
			model = "\A3\Weapons_F_EPC\Ammo\Rocket_04_HE_fly_F.p3d";
			proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_04_HE_F.p3d";
			maverickWeaponIndexOffset = 12;
			maverickweapon = 1;
			cost = 500;
			hit = 210;
			indirectHit = 55;
			indirectHitRange = 15;
			manualControl = 0;
			maxControlRange = 0;
			airLock = 0;
			irLock = 0;
			laserLock = 0;
			nvLock = 0;
			weaponLockSystem = 0;
			cmimmunity = 1;
			aiAmmoUsageFlags = "64 + 128";
			missileLockMinDistance = 500;
			missileLockMaxDistance = 3000;
			initTime = 0.002;
			thrust = 1060;
			thrustTime = 0.69;
			airFriction = 0.09;
			sideAirFriction = 0.005;
			maxSpeed = 590;
			maneuvrability = 0;
			fuseDistance = 50;
			timeToLive = 60;
			effectsMissileInit = "PylonBackEffectsFFAR";
			muzzleEffect = "";
			whistleDist = 30;
			class CamShakeExplode //sources - ["A3_Weapons_F"]
			{
				power = 16;
				duration = 1.8;
				frequency = 20;
				distance = 191.554;
			};
			class CamShakeHit //sources - ["A3_Weapons_F"]
			{
				power = 80;
				duration = 0.6;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F"]
			{
				power = 2.9907;
				duration = 1.8;
				frequency = 20;
				distance = 71.5542;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F"]
			{
				power = 2;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
			SoundSetExplosion[] = {"RocketsLight_Exp_SoundSet", "RocketsLight_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class Rocket_04_AP_F: Rocket_04_HE_F //inherits 36 parameters from bin\config.bin/CfgAmmo/Rocket_04_HE_F, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_F_EPC\Ammo\Rocket_04_AP_fly_F.p3d";
			proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_04_AP_F.p3d";
			maverickWeaponIndexOffset = 19;
			hit = 400;
			indirectHit = 10;
			indirectHitRange = 10;
			aiAmmoUsageFlags = "128 + 512";
		};
		class Cannon_30mm_HE_Plane_CAS_02_F: Gatling_30mm_HE_Plane_CAS_01_F //inherits 38 parameters from bin\config.bin/CfgAmmo/Gatling_30mm_HE_Plane_CAS_01_F, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_green.p3d";
			hit = 150;
			indirectHit = 4;
			indirectHitRange = 4;
			caliber = 3;
			explosive = 0.6;
			missileLockMaxDistance = 1000;
			missileLockMinDistance = 350;
		};
		class Missile_AA_03_F: Missile_AA_04_F //inherits 46 parameters from bin\config.bin/CfgAmmo/Missile_AA_04_F, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_F_EPC\Ammo\Missile_AA_03_fly_F.p3d";
			proxyShape = "\A3\Weapons_F_EPC\Ammo\Missile_AA_03_F.p3d";
			maverickWeaponIndexOffset = 0;
			hit = 140;
			indirectHit = 90;
			indirectHitRange = 8;
			proximityExplosionDistance = 15;
			missileLockCone = 45;
			missileKeepLockedCone = 120;
			missileLockMaxDistance = 6000;
			missileLockMinDistance = 150;
			missileLockMaxSpeed = 700;
			weaponLockSystem = "2 + 16";
			cmImmunity = 0.91;
			class Components: Components //inherits 1 parameters from bin\config.bin/CfgAmmo/Missile_AA_04_F/Components, sources - ["A3_Weapons_F"]
			{
				class SensorsManagerComponent //sources - ["A3_Weapons_F"]
				{
					class Components //sources - ["A3_Weapons_F"]
					{
						class IRSensorComponent: SensorTemplateIR //inherits 8 parameters from bin\config.bin/SensorTemplateIR, sources - ["A3_Weapons_F"]
						{
							class AirTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 500;
								maxRange = 6000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = 1;
							};
							class GroundTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 500;
								maxRange = 4000;
								objectDistanceLimitCoef = 1;
								viewDistanceLimitCoef = 1;
							};
							maxTrackableSpeed = 700;
							angleRangeHorizontal = 45;
							angleRangeVertical = 45;
						};
					};
				};
			};
			airFriction = 0.13;
			thrust = 200;
			thrustTime = 7;
			maxSpeed = 850;
			maneuvrability = 30;
			fuseDistance = 300;
		};
		class Missile_AGM_01_F: Missile_AGM_02_F //inherits 46 parameters from bin\config.bin/CfgAmmo/Missile_AGM_02_F, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_F_EPC\Ammo\Missile_AGM_01_fly_F.p3d";
			proxyShape = "\A3\Weapons_F_EPC\Ammo\Missile_AGM_01_F.p3d";
			maverickWeaponIndexOffset = 2;
			hit = 2200;
			indirectHit = 90;
			indirectHitRange = 10;
			cameraViewAvailable = 1;
			missileLockCone = 20;
			missileKeepLockedCone = 20;
			missileLockMaxDistance = 6000;
			missileLockMinDistance = 300;
			missileLockMaxSpeed = 40;
			weaponLockSystem = "2 + 16";
			cmImmunity = 0.5;
			class Components: Components //inherits 1 parameters from bin\config.bin/CfgAmmo/Missile_AGM_02_F/Components, sources - ["A3_Weapons_F"]
			{
				class SensorsManagerComponent //sources - ["A3_Weapons_F"]
				{
					class Components //sources - ["A3_Weapons_F"]
					{
						class IRSensorComponent: SensorTemplateIR //inherits 8 parameters from bin\config.bin/SensorTemplateIR, sources - ["A3_Weapons_F"]
						{
							class AirTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 500;
								maxRange = 6000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = 1;
							};
							class GroundTarget //sources - ["A3_Weapons_F"]
							{
								minRange = 500;
								maxRange = 6000;
								objectDistanceLimitCoef = 1;
								viewDistanceLimitCoef = 1;
							};
							maxTrackableSpeed = 40;
							angleRangeHorizontal = 20;
							angleRangeVertical = 20;
						};
					};
				};
			};
		};
		class Bomb_03_F: Bomb_04_F //inherits 34 parameters from bin\config.bin/CfgAmmo/Bomb_04_F, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_F_EPC\Ammo\Bomb_03_F.p3d";
			proxyShape = "\A3\Weapons_F_EPC\Ammo\Bomb_03_F.p3d";
			maverickWeaponIndexOffset = 6;
			hit = 6400;
			indirectHit = 1400;
			indirectHitRange = 16;
		};
		class Rocket_03_HE_F: Rocket_04_HE_F //inherits 36 parameters from bin\config.bin/CfgAmmo/Rocket_04_HE_F, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_fly_F.p3d";
			proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_F.p3d";
			maverickWeaponIndexOffset = 8;
		};
		class Rocket_03_AP_F: Rocket_04_AP_F //inherits 7 parameters from bin\config.bin/CfgAmmo/Rocket_04_AP_F, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_AP_fly_F.p3d";
			proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_03_AP_F.p3d";
			maverickWeaponIndexOffset = 28;
		};
		class Sh_105mm_APFSDS: Sh_120mm_APFSDS //inherits 33 parameters from bin\config.bin/CfgAmmo/Sh_120mm_APFSDS, sources - ["A3_Weapons_F"]
		{
			hit = 450;
			indirectHit = 10;
			indirectHitRange = 0.5;
			airFriction = -3.48e-005;
			caliber = 25;
			deflecting = 20;
			tracerEndTime = 2.5;
		};
		class Sh_105mm_APFSDS_T_Red: Sh_105mm_APFSDS //inherits 7 parameters from bin\config.bin/CfgAmmo/Sh_105mm_APFSDS, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		};
		class Sh_105mm_APFSDS_T_Green: Sh_105mm_APFSDS //inherits 7 parameters from bin\config.bin/CfgAmmo/Sh_105mm_APFSDS, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
		};
		class Sh_105mm_APFSDS_T_Yellow: Sh_105mm_APFSDS //inherits 7 parameters from bin\config.bin/CfgAmmo/Sh_105mm_APFSDS, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
		};
		class Sh_105mm_HEAT_MP: Sh_125mm_HEAT //inherits 16 parameters from bin\config.bin/CfgAmmo/Sh_125mm_HEAT, sources - ["A3_Weapons_F"]
		{
			hit = 600;
			indirectHit = 20;
			indirectHitRange = 4;
			caliber = 1;
			deflecting = 0;
			airFriction = -0.000308;
		};
		class Sh_105mm_HEAT_MP_T_Red: Sh_105mm_HEAT_MP //inherits 6 parameters from bin\config.bin/CfgAmmo/Sh_105mm_HEAT_MP, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		};
		class Sh_105mm_HEAT_MP_T_Green: Sh_105mm_HEAT_MP //inherits 6 parameters from bin\config.bin/CfgAmmo/Sh_105mm_HEAT_MP, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
		};
		class Sh_105mm_HEAT_MP_T_Yellow: Sh_105mm_HEAT_MP //inherits 6 parameters from bin\config.bin/CfgAmmo/Sh_105mm_HEAT_MP, sources - ["A3_Weapons_F"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
		};
		class MineBase: MineCore //inherits 6 parameters from bin\config.bin/CfgAmmo/MineCore, sources - ["A3_Weapons_F_Explosives"]
		{
			icon = "iconExplosiveAT";
			mapsize = 1;
			explosionType = "mine";
			triggerWhenDestroyed = 1;
			underwaterHitRangeCoef = 2;
			soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_2", 3.16228, 1, 50};
			soundActivation[] = {"A3\Sounds_F\weapons\mines\mech_activate_mine_1", 0.562341, 1, 30};
			soundDeactivation[] = {"A3\Sounds_F\weapons\mines\deactivate_mine_3a", 0.562341, 1, 30};
			aiAmmoUsageFlags = 16;
		};
		class BoundingMineBase: BoundingMineCore //inherits 6 parameters from bin\config.bin/CfgAmmo/BoundingMineCore, sources - ["A3_Weapons_F_Explosives"]
		{
			mineBoundingTime = 5;
			mineBoundingDist = 3;
			icon = "iconExplosiveAP";
			mapsize = 1;
			explosionType = "mine";
			triggerWhenDestroyed = 1;
			underwaterHitRangeCoef = 0.5;
			soundTrigger[] = {"A3\Sounds_F\weapons\mines\expl_trigger_1", 0.562341, 1, 50};
			soundActivation[] = {"A3\Sounds_F\weapons\Mines\electron_activate_mine_1", 0.562341, 1, 50};
			soundDeactivation[] = {"A3\Sounds_F\weapons\mines\deactivate_mine_3a", 0.562341, 1, 50};
		};
		class DirectionalBombBase: DirectionalBombCore //inherits 6 parameters from bin\config.bin/CfgAmmo/DirectionalBombCore, sources - ["A3_Weapons_F_Explosives"]
		{
			explosionPos = "explosionPos";
			explosionDir = "explosionDir";
			minimumSafeZone = 1;
			explosionAngle = 60;
			simulation = "shotDirectionalBomb";
			directionalExplosion = 1;
			icon = "iconExplosiveAPDirectional";
			underwaterHitRangeCoef = 0.1;
			mapsize = 1;
			explosionType = "mine";
			triggerWhenDestroyed = 1;
			soundTrigger[] = {"A3\Sounds_F\weapons\mines\electron_trigger_1", 0.562341, 1, 50};
			soundActivation[] = {"A3\Sounds_F\weapons\mines\electron_activate_mine_1", 0.562341, 1, 50};
			soundDeactivation[] = {"A3\Sounds_F\weapons\mines\deactivate_mine_3a", 0.562341, 1, 50};
			craterShape = "\A3\weapons_f\empty.p3d";
		};
		class PipeBombBase: PipeBombCore //inherits 2 parameters from bin\config.bin/CfgAmmo/PipeBombCore, sources - ["A3_Weapons_F_Explosives"]
		{
			icon = "iconExplosiveGP";
			mapsize = 1;
			explosionType = "bomb";
			soundTrigger[] = {"A3\Sounds_F\weapons\mines\electron_trigger_1", 0.562341, 1, 50};
			soundActivation[] = {"A3\Sounds_F\weapons\mines\electron_activate_mine_1", 0.562341, 1, 50};
			soundDeactivation[] = {"A3\Sounds_F\weapons\mines\deactivate_mine_3a", 0.562341, 1, 50};
			triggerWhenDestroyed = 1;
			underwaterHitRangeCoef = 1;
		};
		class ATMine_Range_Ammo: MineBase //inherits 9 parameters from bin\config.bin/CfgAmmo/MineBase, sources - ["A3_Weapons_F_Explosives","A3_Sounds_F"]
		{
			hit = 2000;
			indirectHit = 2000;
			indirectHitRange = 1;
			model = "\A3\Weapons_f\Explosives\mine_at";
			mineModelDisabled = "\A3\Weapons_f\Explosives\mine_at_d";
			defaultMagazine = "ATMine_Range_Mag";
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\mines\AT_landmine_explosion_01", 3.16228, 1, 2000};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\mines\AT_landmine_explosion_02", 3.16228, 1, 2000};
			multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
			explosionEffects = "ATMineExplosion";
			CraterEffects = "ATMineCrater";
			whistleDist = 8;
			mineInconspicuousness = 40;
			mineTrigger = "TankTriggerMagnetic";
			SoundSetExplosion[] = {"ATmine_Exp_SoundSet", "ATmine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class UnderwaterMine_Range_Ammo: MineBase //inherits 9 parameters from bin\config.bin/CfgAmmo/MineBase, sources - ["A3_Weapons_F_Explosives","A3_Sounds_F"]
		{
			hit = 3000;
			indirectHit = 3000;
			indirectHitRange = 10;
			model = "\A3\Weapons_F\explosives\mine_naval";
			mineModelDisabled = "\A3\Weapons_F\explosives\mine_naval_d";
			defaultMagazine = "";
			icon = "iconExplosiveUW";
			soundHit[] = {"A3\Sounds_F\weapons\mines\underwater_mine_3", 1.77828, 1, 2000};
			soundTrigger[] = {"A3\Sounds_F\weapons\mines\electron_UWtrigger_1", 0.562341, 1, 50};
			soundActivation[] = {"A3\Sounds_F\weapons\mines\electron_activate_UWmine_1", 0.562341, 1, 50};
			soundDeactivation[] = {"A3\Sounds_F\weapons\mines\deactivate_UWmine_1", 0.562341, 1, 50};
			explosionEffects = "MineUnderwaterExplosion";
			CraterEffects = "";
			whistleDist = 20;
			cost = 2000;
			mineTrigger = "UnderwaterRangeTriggerMagnetic";
			mineFloating = -2;
			mineInconspicuousness = 0.5;
			aiAmmoUsageFlags = "16 + 32";
			SoundSetExplosion[] = {"UnderwaterMine_Exp_SoundSet", "UnderwaterMine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class UnderwaterMineAB_Range_Ammo: UnderwaterMine_Range_Ammo //inherits 20 parameters from bin\config.bin/CfgAmmo/UnderwaterMine_Range_Ammo, sources - ["A3_Weapons_F_Explosives","A3_Sounds_F"]
		{
			hit = 2000;
			indirectHit = 2000;
			indirectHitRange = 10;
			model = "\A3\Weapons_F\explosives\mine_naval2";
			defaultMagazine = "";
			mineModelDisabled = "\A3\Weapons_F\explosives\mine_naval2_d";
			soundHit[] = {"A3\Sounds_F\weapons\mines\underwater_mine_2", 3.16228, 1, 2000};
			soundDeactivation[] = {"A3\Sounds_F\weapons\mines\deactivate_UWmine_2", 0.354813, 1, 50};
			explosionEffects = "MineUnderwaterABExplosion";
			mineFloating = 1;
			mineInconspicuousness = 1;
			SoundSetExplosion[] = {"UnderwaterMineAB_Exp_SoundSet", "UnderwaterMineAB_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class UnderwaterMinePDM_Range_Ammo: UnderwaterMine_Range_Ammo //inherits 20 parameters from bin\config.bin/CfgAmmo/UnderwaterMine_Range_Ammo, sources - ["A3_Weapons_F_Explosives","A3_Sounds_F"]
		{
			hit = 500;
			indirectHit = 500;
			indirectHitRange = 5;
			model = "\A3\Weapons_F\explosives\mine_naval3";
			defaultMagazine = "";
			mineModelDisabled = "\A3\Weapons_F\explosives\mine_naval3_d";
			soundHit[] = {"A3\Sounds_F\weapons\mines\underwater_mine_1", 10, 1, 2000};
			soundDeactivation[] = {"A3\Sounds_F\weapons\mines\deactivate_UWmine_2", 1, 1, 50};
			explosionEffects = "MineUnderwaterPDMExplosion";
			mineTrigger = "UnderwaterRangeTriggerMagneticShort";
			whistleDist = 10;
			mineFloating = 1;
			mineInconspicuousness = 50;
			SoundSetExplosion[] = {"UnderwaterMinePDM_Exp_SoundSet", "UnderwaterMinePDM_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class APERSMine_Range_Ammo: MineBase //inherits 9 parameters from bin\config.bin/CfgAmmo/MineBase, sources - ["A3_Weapons_F_Explosives","A3_Sounds_F"]
		{
			hit = 10;
			indirectHit = 10;
			indirectHitRange = 5;
			model = "\A3\Weapons_F\explosives\mine_ap";
			mineModelDisabled = "\A3\Weapons_F\explosives\mine_ap_d";
			icon = "iconExplosiveAP";
			defaultMagazine = "APERSMine_Range_Mag";
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\mines\AP_mines_explosion_01", 3.16228, 1, 1500};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\mines\AP_mines_explosion_02", 3.16228, 1, 2000};
			multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
			soundTrigger[] = {"A3\Sounds_F\weapons\mines\electron_trigger_1", 0.562341, 1, 50};
			soundActivation[] = {"A3\Sounds_F\weapons\mines\electron_activate_mine_1", 0.562341, 1, 50};
			explosionEffects = "MineExplosion";
			CraterEffects = "MineCrater";
			whistleDist = 8;
			cost = 200;
			mineInconspicuousness = 50;
			mineTrigger = "RangeTriggerShort";
			SoundSetExplosion[] = {"APmine_Exp_SoundSet", "APmine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class APERSBoundingMine_Range_Ammo: BoundingMineBase //inherits 10 parameters from bin\config.bin/CfgAmmo/BoundingMineBase, sources - ["A3_Weapons_F_Explosives","A3_Sounds_F"]
		{
			hit = 20;
			indirectHit = 20;
			indirectHitRange = 20;
			model = "\A3\Weapons_F\explosives\mine_AP_bouncing";
			mineModelDisabled = "\A3\Weapons_F\explosives\mine_AP_bouncing_d";
			defaultMagazine = "APERSBoundingMine_Range_Mag";
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\mines\Explosion_M6_slam_mine_01", 3.16228, 1, 1300};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\mines\Explosion_M6_slam_mine_02", 3.16228, 1, 2000};
			multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
			explosionEffects = "BoundingMineExplosion";
			CraterEffects = "BoundingMineCrater";
			mineJumpEffects = "MineJumpEffect";
			whistleDist = 60;
			cost = 300;
			mineBoundingTime = 0.3;
			mineBoundingDist = 2;
			mineInconspicuousness = 40;
			mineTrigger = "RangeTriggerBounding";
			SoundSetExplosion[] = {"M6slamMine_Exp_SoundSet", "M6slamMine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class SLAMDirectionalMine_Wire_Ammo: DirectionalBombBase //inherits 15 parameters from bin\config.bin/CfgAmmo/DirectionalBombBase, sources - ["A3_Weapons_F_Explosives","A3_Sounds_F"]
		{
			hit = 1000;
			indirectHit = 1000;
			indirectHitRange = 10;
			model = "\A3\Weapons_F\Explosives\mine_SLAM_directional";
			icon = "iconExplosiveGPDirectional";
			mineModelDisabled = "\A3\Weapons_F\Explosives\mine_SLAM_directional_d";
			defaultMagazine = "SLAMDirectionalMine_Wire_Mag";
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\mines\Explosion_M6_slam_mine_01", 3.16228, 1, 1500};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\mines\Explosion_M6_slam_mine_02", 3.16228, 1, 1500};
			multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
			explosionEffects = "DirectionalMineExplosionBig";
			explosionAngle = 30;
			CraterEffects = "";
			whistleDist = 100;
			cost = 400;
			mineTrigger = "IRTrigger";
			mineInconspicuousness = 20;
			craterShape = "\A3\weapons_f\empty.p3d";
			SoundSetExplosion[] = {"M6slamMine_Exp_SoundSet", "M6slamMine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class APERSTripMine_Wire_Ammo: DirectionalBombBase //inherits 15 parameters from bin\config.bin/CfgAmmo/DirectionalBombBase, sources - ["A3_Weapons_F_Explosives","A3_Sounds_F"]
		{
			hit = 15;
			indirectHit = 15;
			indirectHitRange = 10;
			model = "\A3\Weapons_F\explosives\mine_AP_tripwire";
			mineModelDisabled = "\A3\Weapons_F\explosives\mine_AP_tripwire_d";
			defaultMagazine = "APERSTripMine_Wire_Mag";
			icon = "iconExplosiveAP";
			soundHit[] = {"\A3\Sounds_F\arsenal\explosives\mines\Explosion_tripwire_landmine", 3.16228, 1, 1500};
			minimumSafeZone = 0;
			explosionAngle = 360;
			explosionEffects = "MineExplosion";
			CraterEffects = "MineCrater";
			whistleDist = 8;
			cost = 200;
			mineTrigger = "WireTrigger";
			mineInconspicuousness = 30;
			SoundSetExplosion[] = {"TripwireMine_Exp_SoundSet", "TripwireMine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class ClaymoreDirectionalMine_Remote_Ammo: DirectionalBombBase //inherits 15 parameters from bin\config.bin/CfgAmmo/DirectionalBombBase, sources - ["A3_Weapons_F_Explosives","A3_Sounds_F"]
		{
			hit = 40;
			indirectHit = 40;
			indirectHitRange = 30;
			model = "\A3\Weapons_F\explosives\mine_AP_miniclaymore";
			mineModelDisabled = "\A3\Weapons_F\explosives\mine_AP_miniclaymore_d";
			defaultMagazine = "ClaymoreDirectionalMine_Remote_Mag";
			soundHit[] = {"A3\Sounds_F\arsenal\explosives\mines\Explosion_claymore", 2.23872, 1, 1500};
			soundDeactivation[] = {"A3\Sounds_F\weapons\mines\deactivate_mine_3a", 0.562341, 1, 50};
			explosionEffects = "DirectionalMineExplosion";
			explosionAngle = 60;
			CraterEffects = "";
			whistleDist = 100;
			cost = 400;
			mineInconspicuousness = 20;
			mineTrigger = "RemoteTrigger";
			craterShape = "\A3\weapons_f\empty.p3d";
			SoundSetExplosion[] = {"ClaymoreMine_Exp_SoundSet", "ClaymoreMine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class ClaymoreDirectionalMine_Remote_Ammo_Scripted: ClaymoreDirectionalMine_Remote_Ammo //inherits 17 parameters from bin\config.bin/CfgAmmo/ClaymoreDirectionalMine_Remote_Ammo, sources - []
		{
		};
		class SatchelCharge_Remote_Ammo: PipeBombBase //inherits 8 parameters from bin\config.bin/CfgAmmo/PipeBombBase, sources - ["A3_Weapons_F_Explosives","A3_Sounds_F"]
		{
			hit = 3000;
			indirectHit = 3000;
			indirectHitRange = 5;
			model = "\A3\Weapons_F\Explosives\satchel";
			mineModelDisabled = "\A3\Weapons_F\Explosives\satchel_d";
			defaultMagazine = "SatchelCharge_Remote_Mag";
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosion_satchel_01", 3.16228, 1, 1500};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosion_satchel_02", 3.16228, 1, 1500};
			multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
			ExplosionEffects = "MineNondirectionalExplosion";
			CraterEffects = "MineNondirectionalCrater";
			whistleDist = 10;
			mineInconspicuousness = 3;
			mineTrigger = "RemoteTrigger";
			SoundSetExplosion[] = {"ClaymoreMine_Exp_SoundSet", "ClaymoreMine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class SatchelCharge_Remote_Ammo_Scripted: SatchelCharge_Remote_Ammo //inherits 15 parameters from bin\config.bin/CfgAmmo/SatchelCharge_Remote_Ammo, sources - []
		{
		};
		class DemoCharge_Remote_Ammo: PipeBombBase //inherits 8 parameters from bin\config.bin/CfgAmmo/PipeBombBase, sources - ["A3_Weapons_F_Explosives","A3_Sounds_F"]
		{
			hit = 1000;
			indirectHit = 1000;
			indirectHitRange = 3;
			model = "\A3\Weapons_F\explosives\c4_charge_small";
			mineModelDisabled = "\A3\Weapons_F\explosives\c4_charge_small_d";
			soundHit[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosive_Charge", 3.16228, 1, 1500};
			defaultMagazine = "DemoCharge_Remote_Mag";
			ExplosionEffects = "MineNondirectionalExplosionSmall";
			CraterEffects = "MineNondirectionalCraterSmall";
			whistleDist = 32;
			mineInconspicuousness = 5;
			mineTrigger = "RemoteTrigger";
			SoundSetExplosion[] = {"ExplosiveCharge_Exp_SoundSet", "ExplosiveCharge_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class DemoCharge_Remote_Ammo_Scripted: DemoCharge_Remote_Ammo //inherits 13 parameters from bin\config.bin/CfgAmmo/DemoCharge_Remote_Ammo, sources - []
		{
		};
		class IEDUrbanBig_Remote_Ammo: PipeBombBase //inherits 8 parameters from bin\config.bin/CfgAmmo/PipeBombBase, sources - ["A3_Weapons_F_Explosives","A3_Sounds_F"]
		{
			hit = 2000;
			indirectHit = 2000;
			indirectHitRange = 5;
			model = "\A3\Weapons_F\Explosives\IED_urban_big";
			mineModelDisabled = "\A3\Weapons_F\Explosives\IED_urban_big_d";
			defaultMagazine = "IEDUrbanBig_Remote_Mag";
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosion_IED_bigBomb_01", 3.16228, 1, 2000};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosion_IED_bigBomb_02", 3.16228, 1, 2000};
			multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
			whistleDist = 20;
			CraterEffects = "IEDMineBigGarbageCrater";
			explosionEffects = "IEDMineBigExplosion";
			cost = 2000;
			mineInconspicuousness = 20;
			mineTrigger = "RemoteTrigger";
			SoundSetExplosion[] = {"BigIED_Exp_SoundSet", "BigIED_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class IEDLandBig_Remote_Ammo: PipeBombBase //inherits 8 parameters from bin\config.bin/CfgAmmo/PipeBombBase, sources - ["A3_Weapons_F_Explosives","A3_Sounds_F"]
		{
			hit = 2000;
			indirectHit = 2000;
			indirectHitRange = 5;
			model = "\A3\Weapons_F\Explosives\IED_land_big";
			mineModelDisabled = "\A3\Weapons_F\Explosives\IED_land_big_d";
			defaultMagazine = "IEDLandBig_Remote_Mag";
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosion_IED_bigBomb_01", 2.51189, 1, 1500};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosion_IED_bigBomb_02", 2.51189, 1, 1500};
			multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
			soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_1", 0.562341, 1, 30};
			soundActivation[] = {"A3\Sounds_F\weapons\mines\mech_activate_mine_1", 0.562341, 1, 30};
			CraterEffects = "IEDMineBigLandCrater";
			explosionEffects = "IEDMineBigExplosion";
			whistleDist = 8;
			cost = 2000;
			mineInconspicuousness = 30;
			mineTrigger = "RemoteTrigger";
			SoundSetExplosion[] = {"BigIED_Exp_SoundSet", "BigIED_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class IEDUrbanSmall_Remote_Ammo: PipeBombBase //inherits 8 parameters from bin\config.bin/CfgAmmo/PipeBombBase, sources - ["A3_Weapons_F_Explosives","A3_Sounds_F"]
		{
			hit = 1000;
			indirectHit = 1000;
			indirectHitRange = 3;
			model = "\A3\Weapons_F\Explosives\IED_urban_small";
			mineModelDisabled = "\A3\Weapons_F\Explosives\IED_urban_small_d";
			defaultMagazine = "IEDUrbanSmall_Remote_Mag";
			soundHit1[] = {"A3\sounds_f\arsenal\explosives\bombs\Explosion_IED_smallBomb_01", 2.51189, 1, 1600};
			soundHit2[] = {"A3\sounds_f\arsenal\explosives\bombs\Explosion_IED_smallBomb_02", 2.51189, 1, 1600};
			multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
			CraterEffects = "IEDMineSmallGarbageCrater";
			explosionEffects = "IEDMineSmallExplosion";
			whistleDist = 12;
			cost = 200;
			mineInconspicuousness = 40;
			mineTrigger = "RemoteTrigger";
			SoundSetExplosion[] = {"SmallIED_Exp_SoundSet", "SmallIED_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class IEDLandSmall_Remote_Ammo: PipeBombBase //inherits 8 parameters from bin\config.bin/CfgAmmo/PipeBombBase, sources - ["A3_Weapons_F_Explosives","A3_Sounds_F"]
		{
			hit = 1000;
			indirectHit = 1000;
			indirectHitRange = 3;
			model = "\A3\Weapons_F\Explosives\IED_land_small";
			mineModelDisabled = "\A3\Weapons_F\Explosives\IED_land_small_d";
			defaultMagazine = "IEDLandSmall_Remote_Mag";
			soundHit1[] = {"A3\sounds_f\arsenal\explosives\bombs\Explosion_IED_smallBomb_01", 2.51189, 1, 1500};
			soundHit2[] = {"A3\sounds_f\arsenal\explosives\bombs\Explosion_IED_smallBomb_02", 2.51189, 1, 1500};
			multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
			soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_1", 0.562341, 1, 40};
			soundActivation[] = {"A3\Sounds_F\weapons\mines\mech_activate_mine_1", 0.562341, 1, 40};
			CraterEffects = "IEDMineSmallLandCrater";
			explosionEffects = "IEDMineSmallExplosion";
			whistleDist = 6;
			cost = 200;
			mineInconspicuousness = 50;
			mineTrigger = "RemoteTrigger";
			SoundSetExplosion[] = {"SmallIED_Exp_SoundSet", "SmallIED_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		};
		class ModuleOrdnanceMortar_F_ammo: Sh_82mm_AMOS //inherits 10 parameters from bin\config.bin/CfgAmmo/Sh_82mm_AMOS, sources - ["A3_Data_F_Curator"]
		{
			explosionEffects = "HEShellExplosion";
		};
		class ModuleOrdnanceHowitzer_F_ammo: Sh_155mm_AMOS //inherits 29 parameters from bin\config.bin/CfgAmmo/Sh_155mm_AMOS, sources - ["A3_Data_F_Curator"]
		{
			hit = 500;
			indirectHit = 300;
			soundHit[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_2", 1.99526, 1, 1800};
		};
		class ModuleOrdnanceRocket_F_ammo: R_230mm_HE //inherits 14 parameters from bin\config.bin/CfgAmmo/R_230mm_HE, sources - ["A3_Data_F_Curator"]
		{
			submunitionAmmo[] = {"ModuleOrdnanceRocket_F_subammo", 1};
			submunitionConeType[] = {"poissondisccenter", 10};
			submunitionConeAngle = 25;
			triggerDistance = 100;
		};
		class ModuleOrdnanceRocket_F_subammo: R_230mm_fly //inherits 22 parameters from bin\config.bin/CfgAmmo/R_230mm_fly, sources - ["A3_Data_F_Curator"]
		{
			indirectHit = 600;
			indirectHitRange = 27;
			soundHit[] = {"A3\Sounds_F\weapons\Explosion\expl_big_1", 1.99526, 1, 1800};
		};
		class LightningBolt: ShellBase //inherits 21 parameters from bin\config.bin/CfgAmmo/ShellBase, sources - ["A3_Data_F_Curator_Misc"]
		{
			model = "\A3\Weapons_f\empty";
			hit = 10000;
			indirectHit = 10000;
			indirectHitRange = 0.1;
			explosive = 0.8;
			explosionEffects = "ExploAmmoExplosion";
			craterEffects = "ExploAmmoCrater";
			class CamShakeHit //sources - ["A3_Data_F_Curator_Misc"]
			{
				power = 100;
				duration = 1;
				frequency = 20;
			};
			multiSoundHit[] = {"soundHit1", 0.33, "soundHit2", 0.33, "soundHit3", 0.34};
			soundHit1[] = {"\A3\Sounds_F\ambient\thunder\thunder_02", 10, 1, 3000};
			soundHit2[] = {"\A3\Sounds_F\ambient\thunder\thunder_03", 10, 1, 3000};
			soundHit3[] = {"\A3\Sounds_F\ambient\thunder\thunder_06", 10, 1, 3000};
			soundHit[] = {"", 1, 1};
			simulation = "shotMine";
			mineTrigger = "RemoteTrigger";
			triggerWhenDestroyed = 1;
		};
		class F_Signal_Green: FlareBase //inherits 3 parameters from bin\config.bin/CfgAmmo/FlareBase, sources - ["A3_Weapons_F_Kart"]
		{
			hit = 0;
			model = "\A3\Weapons_f\empty";
			lightColor[] = {0.25, 0.5, 0.25, 0};
			useFlare = 1;
			deflecting = 30;
			smokeColor[] = {1, 1, 1, 0.5};
			effectFlare = "CounterMeasureFlare";
			brightness = 12;
			size = 1;
			triggerTime = 0.5;
			triggerSpeedCoef = 1;
			timeToLive = 10;
		};
		class F_Signal_Red: F_Signal_Green //inherits 12 parameters from bin\config.bin/CfgAmmo/F_Signal_Green, sources - ["A3_Weapons_F_Kart"]
		{
			model = "\A3\Weapons_f\empty";
			lightColor[] = {0.5, 0.25, 0.25, 0};
		};
		class Sub_F_Signal_Green: B_9x21_Ball //inherits 20 parameters from bin\config.bin/CfgAmmo/B_9x21_Ball, sources - ["A3_Weapons_F_Kart"]
		{
			simulation = "shotSubmunitions";
			hit = 0;
			submunitionAmmo = "F_Signal_Green";
			triggerTime = 0.9;
			submunitionConeType[] = {"poissondisccenter", 3};
			submunitionConeAngle = 35;
			airFriction = -0.0216;
			model = "\A3\Weapons_F_Kart\Ammo\tracer_green.p3d";
			tracerStartTime = 0.1;
			tracerScale = 5;
		};
		class Sub_F_Signal_Red: Sub_F_Signal_Green //inherits 10 parameters from bin\config.bin/CfgAmmo/Sub_F_Signal_Green, sources - ["A3_Weapons_F_Kart"]
		{
			submunitionAmmo = "F_Signal_Red";
			model = "\A3\Weapons_F_Kart\Ammo\tracer_red.p3d";
		};
		class B_338_Ball: BulletBase //inherits 229 parameters from bin\config.bin/CfgAmmo/BulletBase, sources - ["A3_Weapons_F_Mark"]
		{
			hit = 16;
			indirectHit = 0;
			indirectHitRange = 0;
			cartridge = "FxCartridge_338_Ball";
			audibleFire = 80;
			visibleFireTime = 3;
			dangerRadiusBulletClose = 10;
			dangerRadiusHit = 14;
			suppressionRadiusBulletClose = 8;
			suppressionRadiusHit = 10;
			cost = 6;
			airLock = 1;
			caliber = 2;
			typicalSpeed = 890;
			timeToLive = 10;
			model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
			tracerScale = 1.2;
			tracerStartTime = 0.075;
			tracerEndTime = 1;
			airFriction = -0.00061;
			class CamShakeExplode //sources - ["A3_Weapons_F_Mark"]
			{
				power = 3.16228;
				duration = 0.6;
				frequency = 20;
				distance = 9.48683;
			};
			class CamShakeHit //sources - ["A3_Weapons_F_Mark"]
			{
				power = 10;
				duration = 0.4;
				frequency = 20;
				distance = 1;
			};
		};
		class B_338_NM_Ball: BulletBase //inherits 229 parameters from bin\config.bin/CfgAmmo/BulletBase, sources - ["A3_Weapons_F_Mark"]
		{
			hit = 14;
			indirectHit = 0;
			indirectHitRange = 0;
			cartridge = "FxCartridge_338_NM_Ball";
			audibleFire = 60;
			visibleFireTime = 3;
			dangerRadiusBulletClose = 10;
			dangerRadiusHit = 14;
			suppressionRadiusBulletClose = 8;
			suppressionRadiusHit = 10;
			cost = 6;
			airLock = 1;
			caliber = 1.8;
			typicalSpeed = 760;
			timeToLive = 10;
			model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
			tracerScale = 1.2;
			tracerStartTime = 0.075;
			tracerEndTime = 1;
			airFriction = -0.00061;
			class CamShakeExplode //sources - ["A3_Weapons_F_Mark"]
			{
				power = 3.16228;
				duration = 0.6;
				frequency = 20;
				distance = 9.48683;
			};
			class CamShakeHit //sources - ["A3_Weapons_F_Mark"]
			{
				power = 10;
				duration = 0.4;
				frequency = 20;
				distance = 1;
			};
		};
		class B_127x54_Ball: BulletBase //inherits 229 parameters from bin\config.bin/CfgAmmo/BulletBase, sources - ["A3_Weapons_F_Mark"]
		{
			hit = 20;
			indirectHit = 0;
			indirectHitRange = 0;
			cartridge = "FxCartridge_127x54_APDS";
			visibleFire = 1;
			audibleFire = 5;
			visibleFireTime = 3;
			dangerRadiusBulletClose = 4;
			dangerRadiusHit = 14;
			suppressionRadiusBulletClose = 2;
			suppressionRadiusHit = 10;
			cost = 15;
			airLock = 1;
			caliber = 4.6;
			typicalSpeed = 270;
			timeToLive = 6;
			model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
			tracerScale = 1.5;
			tracerStartTime = 0.075;
			tracerEndTime = 1;
			airFriction = -0.0014;
			class CamShakeExplode //sources - ["A3_Weapons_F_Mark"]
			{
				power = 2.23607;
				duration = 0.4;
				frequency = 20;
				distance = 6.7082;
			};
			class CamShakeHit //sources - ["A3_Weapons_F_Mark"]
			{
				power = 15;
				duration = 0.4;
				frequency = 20;
				distance = 1;
			};
		};
		class B_93x64_Ball: BulletBase //inherits 229 parameters from bin\config.bin/CfgAmmo/BulletBase, sources - ["A3_Weapons_F_Mark"]
		{
			hit = 18;
			indirectHit = 0;
			indirectHitRange = 0;
			cartridge = "FxCartridge_93x64_Ball";
			audibleFire = 80;
			visibleFireTime = 3;
			dangerRadiusBulletClose = 10;
			dangerRadiusHit = 14;
			suppressionRadiusBulletClose = 8;
			suppressionRadiusHit = 10;
			cost = 6;
			airLock = 1;
			caliber = 2.2;
			typicalSpeed = 785;
			timeToLive = 10;
			model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
			tracerScale = 1.2;
			tracerStartTime = 0.075;
			tracerEndTime = 1;
			airFriction = -0.00075;
			class CamShakeExplode //sources - ["A3_Weapons_F_Mark"]
			{
				power = 3.16228;
				duration = 0.6;
				frequency = 20;
				distance = 9.48683;
			};
			class CamShakeHit //sources - ["A3_Weapons_F_Mark"]
			{
				power = 10;
				duration = 0.4;
				frequency = 20;
				distance = 1;
			};
		};
		class B_580x42_Ball_F: BulletBase //inherits 229 parameters from bin\config.bin/CfgAmmo/BulletBase, sources - ["A3_Weapons_F_Exp"]
		{
			airLock = 1;
			hit = 9;
			indirectHit = 0;
			indirectHitRange = 0;
			typicalSpeed = 870;
			airFriction = -0.0011;
			caliber = 0.9;
			deflecting = 20;
			model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
			tracerScale = 1;
			tracerStartTime = 0.05;
			tracerEndTime = 1;
			nvgOnly = 0;
			dangerRadiusBulletClose = 8;
			dangerRadiusHit = 12;
			suppressionRadiusBulletClose = 6;
			suppressionRadiusHit = 8;
		};
		class B_50BW_Ball_F: BulletBase //inherits 229 parameters from bin\config.bin/CfgAmmo/BulletBase, sources - ["A3_Weapons_F_Exp"]
		{
			airLock = 1;
			hit = 22;
			indirectHit = 0;
			indirectHitRange = 0;
			typicalSpeed = 550;
			airFriction = -0.002;
			caliber = 4.2;
			model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
			tracerScale = 1;
			tracerStartTime = 0.05;
			tracerEndTime = 1;
			nvgOnly = 0;
			dangerRadiusBulletClose = 12;
			dangerRadiusHit = 16;
			suppressionRadiusBulletClose = 8;
			suppressionRadiusHit = 12;
		};
		class B_762x39_Ball_F: BulletBase //inherits 229 parameters from bin\config.bin/CfgAmmo/BulletBase, sources - ["A3_Weapons_F_Exp"]
		{
			airLock = 1;
			hit = 11;
			indirectHit = 0;
			indirectHitRange = 0;
			typicalSpeed = 730;
			airFriction = -0.0016;
			caliber = 1.2;
			model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
			tracerScale = 1;
			tracerStartTime = 0.05;
			tracerEndTime = 1;
			nvgOnly = 0;
			dangerRadiusBulletClose = 8;
			dangerRadiusHit = 12;
			suppressionRadiusBulletClose = 6;
			suppressionRadiusHit = 8;
		};
		class B_762x39_Ball_Green_F: B_762x39_Ball_F //inherits 16 parameters from bin\config.bin/CfgAmmo/B_762x39_Ball_F, sources - ["A3_Weapons_F_Exp"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		};
		class B_545x39_Ball_F: BulletBase //inherits 229 parameters from bin\config.bin/CfgAmmo/BulletBase, sources - ["A3_Weapons_F_Exp"]
		{
			airLock = 1;
			hit = 7;
			indirectHit = 0;
			indirectHitRange = 0;
			typicalSpeed = 880;
			airFriction = -0.0013;
			caliber = 0.6;
			deflecting = 20;
			model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
			tracerScale = 1;
			tracerStartTime = 0.05;
			tracerEndTime = 1;
			nvgOnly = 0;
			dangerRadiusBulletClose = 8;
			dangerRadiusHit = 12;
			suppressionRadiusBulletClose = 6;
			suppressionRadiusHit = 8;
		};
		class B_545x39_Ball_Green_F: B_545x39_Ball_F //inherits 17 parameters from bin\config.bin/CfgAmmo/B_545x39_Ball_F, sources - ["A3_Weapons_F_Exp"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		};
		class R_PG7_F: RocketBase //inherits 23 parameters from bin\config.bin/CfgAmmo/RocketBase, sources - ["A3_Weapons_F_Exp"]
		{
			model = "\A3\Weapons_F_Exp\Launchers\RPG7\rocket_rpg7.p3d";
			hit = 400;
			indirectHit = 10;
			indirectHitRange = 6;
			explosive = 0.8;
			cost = 200;
			airFriction = 0.65;
			sideAirFriction = 0.15;
			maxSpeed = 300;
			initTime = 0.1;
			thrustTime = 0.05;
			thrust = 4000;
			fuseDistance = 5;
			CraterEffects = "ATMissileCrater";
			explosionEffects = "ATMissileExplosion";
			effectsMissileInit = "";
			effectsMissile = "EmptyEffect";
			simulationStep = 0.02;
			airLock = 0;
			aiAmmoUsageFlags = "128 + 512";
			irLock = 0;
			timeToLive = 6.1;
			maneuvrability = 0;
			allowAgainstInfantry = 0;
			soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 1800};
			soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 1800};
			soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 1800};
			multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
			class CamShakeExplode //sources - ["A3_Weapons_F_Exp"]
			{
				power = 7;
				duration = 1.2;
				frequency = 20;
				distance = 79.3286;
			};
			class CamShakeHit //sources - ["A3_Weapons_F_Exp"]
			{
				power = 85;
				duration = 0.6;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F_Exp"]
			{
				power = 1.96799;
				duration = 0.8;
				frequency = 20;
				distance = 30.9839;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F_Exp"]
			{
				power = 1;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
		};
		class M_Jian_AT: Missile_AGM_01_F //inherits 15 parameters from bin\config.bin/CfgAmmo/Missile_AGM_01_F, sources - ["A3_Weapons_F_Exp"]
		{
			model = "\A3\Weapons_F_Exp\Ammo\Missile_AT_04_fly_F.p3d";
			proxyShape = "\A3\Weapons_F_Exp\Ammo\Missile_AT_04_F.p3d";
			maverickWeaponIndexOffset = 0;
			initSpeed = 40;
			initTime = 0.2;
			hit = 1600;
			indirectHit = 90;
			indirectHitRange = 7.5;
			airLock = 0;
			irLock = 1;
			laserLock = 1;
			nvLock = 1;
			missileLockCone = 30;
			missileKeepLockedCone = 30;
			missileLockMaxDistance = 8000;
			missileLockMinDistance = 350;
			missileLockMaxSpeed = 35;
			weaponLockSystem = "2 + 4 + 16";
			cmImmunity = 0.4;
			manualControl = 1;
			maxControlRange = 8000;
			class Components: Components //inherits 1 parameters from bin\config.bin/CfgAmmo/Missile_AGM_01_F/Components, sources - ["A3_Weapons_F_Exp"]
			{
				class SensorsManagerComponent //sources - ["A3_Weapons_F_Exp"]
				{
					class Components //sources - ["A3_Weapons_F_Exp"]
					{
						class IRSensorComponent: SensorTemplateIR //inherits 8 parameters from bin\config.bin/SensorTemplateIR, sources - ["A3_Weapons_F_Exp"]
						{
							class AirTarget //sources - ["A3_Weapons_F_Exp"]
							{
								minRange = 500;
								maxRange = 6000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = 1;
							};
							class GroundTarget //sources - ["A3_Weapons_F_Exp"]
							{
								minRange = 500;
								maxRange = 6000;
								objectDistanceLimitCoef = 1;
								viewDistanceLimitCoef = 1;
							};
							maxTrackableSpeed = 35;
							angleRangeHorizontal = 30;
							angleRangeVertical = 30;
						};
						class LaserSensorComponent: SensorTemplateLaser //inherits 7 parameters from bin\config.bin/SensorTemplateLaser, sources - ["A3_Weapons_F_Exp"]
						{
							class AirTarget //sources - ["A3_Weapons_F_Exp"]
							{
								minRange = 8000;
								maxRange = 8000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = -1;
							};
							class GroundTarget //sources - ["A3_Weapons_F_Exp"]
							{
								minRange = 8000;
								maxRange = 8000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = -1;
							};
							maxTrackableSpeed = 35;
							angleRangeHorizontal = 60;
							angleRangeVertical = 60;
						};
					};
				};
			};
		};
		class ammo_Missile_MediumRangeAABase: MissileBase //inherits 34 parameters from bin\config.bin/CfgAmmo/MissileBase, sources - ["A3_Weapons_F_Jets"]
		{
			model = "\A3\weapons_f\empty";
			proxyShape = "\A3\weapons_f\empty";
			hit = 200;
			indirectHit = 150;
			indirectHitRange = 15;
			explosionForceCoef = 1;
			proximityExplosionDistance = 25;
			fuseDistance = 750;
			maneuvrability = 30;
			airFriction = 0.07;
			sideAirFriction = 0.18;
			trackOversteer = 1.2;
			trackLead = 1.06;
			initTime = 0.6;
			timeToLive = 35;
			thrustTime = 7;
			thrust = 210;
			maxSpeed = 900;
			simulationStep = 0.002;
			airLock = 2;
			lockType = 0;
			cmimmunity = 0.97;
			weaponLockSystem = "8 + 16";
			missileLockCone = 70;
			missileKeepLockedCone = 90;
			missileLockMaxDistance = 12000;
			missileLockMinDistance = 1000;
			missileLockMaxSpeed = 800;
			class Components: Components //inherits 0 parameters from bin\config.bin/CfgAmmo/MissileBase/Components, sources - ["A3_Weapons_F_Jets"]
			{
				class SensorsManagerComponent //sources - ["A3_Weapons_F_Jets"]
				{
					class Components //sources - ["A3_Weapons_F_Jets"]
					{
						class ActiveRadarSensorComponent: SensorTemplateActiveRadar //inherits 11 parameters from bin\config.bin/SensorTemplateActiveRadar, sources - ["A3_Weapons_F_Jets"]
						{
							class AirTarget //sources - ["A3_Weapons_F_Jets"]
							{
								minRange = 12000;
								maxRange = 12000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = -1;
							};
							class GroundTarget //sources - ["A3_Weapons_F_Jets"]
							{
								minRange = 8000;
								maxRange = 8000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = -1;
							};
							angleRangeHorizontal = 50;
							angleRangeVertical = 50;
							groundNoiseDistanceCoef = 0.2;
							minSpeedThreshold = 30;
							maxSpeedThreshold = 40;
							maxTrackableSpeed = 800;
							minTrackableATL = 10;
						};
					};
				};
			};
			cost = 1500;
			aiAmmoUsageFlags = 256;
			missileFireAnim = "rocket_fire_hide";
			CraterEffects = "AAMissileCrater";
			explosionEffects = "AAMissileExplosion";
			effectsMissile = "FX_Missile_AA";
			muzzleEffect = "";
		};
		class ammo_Missile_ShortRangeAABase: MissileBase //inherits 34 parameters from bin\config.bin/CfgAmmo/MissileBase, sources - ["A3_Weapons_F_Jets"]
		{
			model = "\A3\weapons_f\empty";
			proxyShape = "\A3\weapons_f\empty";
			hit = 130;
			indirectHit = 85;
			indirectHitRange = 10;
			explosionForceCoef = 1;
			proximityExplosionDistance = 15;
			fuseDistance = 100;
			maneuvrability = 42;
			airFriction = 0.14;
			sideAirFriction = 0.23;
			trackOversteer = 1.6;
			trackLead = 0.9;
			initTime = 0;
			timeToLive = 20;
			thrustTime = 5;
			thrust = 250;
			maxSpeed = 700;
			simulationStep = 0.002;
			airLock = 2;
			lockType = 0;
			cmimmunity = 0.92;
			weaponLockSystem = "2 + 16";
			missileLockCone = 180;
			missileKeepLockedCone = 180;
			missileLockMaxDistance = 5000;
			missileLockMinDistance = 250;
			missileLockMaxSpeed = 600;
			class Components: Components //inherits 0 parameters from bin\config.bin/CfgAmmo/MissileBase/Components, sources - ["A3_Weapons_F_Jets"]
			{
				class SensorsManagerComponent //sources - ["A3_Weapons_F_Jets"]
				{
					class Components //sources - ["A3_Weapons_F_Jets"]
					{
						class IRSensorComponent: SensorTemplateIR //inherits 8 parameters from bin\config.bin/SensorTemplateIR, sources - ["A3_Weapons_F_Jets"]
						{
							class AirTarget //sources - ["A3_Weapons_F_Jets"]
							{
								minRange = 500;
								maxRange = 5000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = 1;
							};
							class GroundTarget //sources - ["A3_Weapons_F_Jets"]
							{
								minRange = 500;
								maxRange = 4000;
								objectDistanceLimitCoef = 1;
								viewDistanceLimitCoef = 1;
							};
							angleRangeHorizontal = 180;
							angleRangeVertical = 180;
							maxTrackableSpeed = 600;
							minTrackableATL = 3;
						};
					};
				};
			};
			cost = 1000;
			whistleDist = 20;
			aiAmmoUsageFlags = 256;
			missileFireAnim = "rocket_fire_hide";
			CraterEffects = "AAMissileCrater";
			explosionEffects = "AAMissileExplosion";
			effectsMissile = "FX_Missile_AA";
			muzzleEffect = "B01_fnc_effectFiredJetMissile";
		};
		class ammo_Gun20mmAABase: BulletBase //inherits 229 parameters from bin\config.bin/CfgAmmo/BulletBase, sources - ["A3_Weapons_F_Jets"]
		{
			hit = 60;
			indirectHit = 6;
			indirectHitRange = 0.4;
			explosive = 0;
			caliber = 3.4;
			cost = 30;
			model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
			tracerScale = 2;
			tracerStartTime = 0.05;
			tracerEndTime = 2;
			nvgOnly = 0;
			typicalSpeed = 1030;
			visibleFire = 32;
			audibleFire = 200;
			visibleFireTime = 4;
			dangerRadiusBulletClose = 16;
			dangerRadiusHit = 40;
			suppressionRadiusBulletClose = 10;
			suppressionRadiusHit = 14;
			aiAmmoUsageFlags = 256;
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01", 1.77828, 1, 1300};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02", 1.77828, 1, 1300};
			soundHit3[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03", 1.77828, 1, 1300};
			soundHit4[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04", 1.77828, 1, 1300};
			multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
			explosionSoundEffect = "DefaultExplosion";
			airLock = 1;
			CraterEffects = "ExploAmmoCrater";
			explosionEffects = "ExploAmmoExplosion";
			airFriction = -0.00078;
			muzzleEffect = "";
			class CamShakeExplode //sources - ["A3_Weapons_F_Jets"]
			{
				power = 4;
				duration = 0.8;
				frequency = 20;
				distance = 43.7771;
			};
			class CamShakeHit //sources - ["A3_Weapons_F_Jets"]
			{
				power = 20;
				duration = 0.4;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F_Jets"]
			{
				power = 2.11474;
				duration = 0.8;
				frequency = 20;
				distance = 35.7771;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F_Jets"]
			{
				power = 0.01;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
		};
		class ammo_Gun30mmAABase: BulletBase //inherits 229 parameters from bin\config.bin/CfgAmmo/BulletBase, sources - ["A3_Weapons_F_Jets"]
		{
			hit = 70;
			indirectHit = 6;
			indirectHitRange = 1;
			explosive = 0;
			caliber = 4.5;
			cost = 30;
			model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
			tracerScale = 2;
			tracerStartTime = 0.1;
			tracerEndTime = 2;
			nvgOnly = 0;
			typicalSpeed = 980;
			visibleFire = 32;
			audibleFire = 200;
			visibleFireTime = 4;
			dangerRadiusBulletClose = 16;
			dangerRadiusHit = 40;
			suppressionRadiusBulletClose = 10;
			suppressionRadiusHit = 14;
			aiAmmoUsageFlags = 256;
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01", 1.77828, 1, 1300};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02", 1.77828, 1, 1300};
			soundHit3[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03", 1.77828, 1, 1300};
			soundHit4[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04", 1.77828, 1, 1300};
			multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
			explosionSoundEffect = "DefaultExplosion";
			airLock = 1;
			CraterEffects = "ExploAmmoCrater";
			explosionEffects = "ExploAmmoExplosion";
			airFriction = -0.0005;
			muzzleEffect = "";
			class CamShakeExplode //sources - ["A3_Weapons_F_Jets"]
			{
				power = 4;
				duration = 0.8;
				frequency = 20;
				distance = 43.7771;
			};
			class CamShakeHit //sources - ["A3_Weapons_F_Jets"]
			{
				power = 20;
				duration = 0.4;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F_Jets"]
			{
				power = 2.11474;
				duration = 0.8;
				frequency = 20;
				distance = 35.7771;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F_Jets"]
			{
				power = 0.01;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
		};
		class ammo_Gun35mmAABase: BulletBase //inherits 229 parameters from bin\config.bin/CfgAmmo/BulletBase, sources - ["A3_Weapons_F_Jets"]
		{
			hit = 72;
			indirectHit = 6;
			indirectHitRange = 1;
			visibleFire = 38;
			audibleFire = 200;
			visibleFireTime = 5;
			dangerRadiusBulletClose = 20;
			dangerRadiusHit = 60;
			suppressionRadiusBulletClose = 12;
			suppressionRadiusHit = 24;
			aiAmmoUsageFlags = 256;
			deflecting = 0;
			explosive = 0;
			airLock = 1;
			cost = 42;
			CraterEffects = "ExploAmmoCrater";
			explosionEffects = "ExploAmmoExplosion";
			explosionSoundEffect = "DefaultExplosion";
			model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
			tracerScale = 2;
			tracerStartTime = 0.1;
			tracerEndTime = 2;
			airFriction = -0.00035;
			muzzleEffect = "";
			caliber = 4.5;
			typicalSpeed = 950;
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
			soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
			soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
			multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
			class CamShakeExplode //sources - ["A3_Weapons_F_Jets"]
			{
				power = 3.6;
				duration = 0.8;
				frequency = 20;
				distance = 41.9411;
			};
			class CamShakeHit //sources - ["A3_Weapons_F_Jets"]
			{
				power = 18;
				duration = 0.4;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire //sources - ["A3_Weapons_F_Jets"]
			{
				power = 1.49535;
				duration = 0.4;
				frequency = 20;
				distance = 17.8885;
			};
			class CamShakePlayerFire //sources - ["A3_Weapons_F_Jets"]
			{
				power = 0.001;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
		};
		class ammo_AAA_Gun35mm_AA: ammo_Gun35mmAABase //inherits 35 parameters from bin\config.bin/CfgAmmo/ammo_Gun35mmAABase, sources - ["A3_Weapons_F_Jets"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
			tracerScale = 2;
			tracerStartTime = 0.05;
			tracerEndTime = 2;
			shotDistractionAI = -0.5;
		};
		class ammo_Missile_rim116: ammo_Missile_ShortRangeAABase //inherits 37 parameters from bin\config.bin/CfgAmmo/ammo_Missile_ShortRangeAABase, sources - ["A3_Weapons_F_Jets"]
		{
			model = "\A3\Weapons_F_Jets\Ammo\Missile_SAM_01_fly_F.p3d";
			proxyShape = "\A3\Weapons_F_Jets\Ammo\Missile_SAM_01_fly_F.p3d";
			airFriction = 0.16;
			thrustTime = 4;
			thrust = 300;
			maxSpeed = 800;
			missileLockMaxDistance = 4000;
		};
		class ammo_Missile_rim162: ammo_Missile_MediumRangeAABase //inherits 36 parameters from bin\config.bin/CfgAmmo/ammo_Missile_MediumRangeAABase, sources - ["A3_Weapons_F_Jets"]
		{
			model = "\A3\Weapons_F_Jets\Ammo\Missile_SAM_02_fly_F.p3d";
			proxyShape = "\A3\Weapons_F_Jets\Ammo\Missile_SAM_02_fly_F.p3d";
			hit = 200;
			indirectHit = 200;
			proximityExplosionDistance = 20;
			maneuvrability = 24;
			trackOversteer = 2;
			airFriction = 0.09;
			sideAirFriction = 0.16;
			initTime = 0;
			thrust = 230;
			missileLockCone = 170;
			missileKeepLockedCone = 170;
			missileLockMaxSpeed = 900;
			class Components: Components //inherits 1 parameters from bin\config.bin/CfgAmmo/ammo_Missile_MediumRangeAABase/Components, sources - ["A3_Weapons_F_Jets"]
			{
				class SensorsManagerComponent //sources - ["A3_Weapons_F_Jets"]
				{
					class Components //sources - ["A3_Weapons_F_Jets"]
					{
						class ActiveRadarSensorComponent: SensorTemplateActiveRadar //inherits 11 parameters from bin\config.bin/SensorTemplateActiveRadar, sources - ["A3_Weapons_F_Jets"]
						{
							class AirTarget //sources - ["A3_Weapons_F_Jets"]
							{
								minRange = 12000;
								maxRange = 12000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = -1;
							};
							class GroundTarget //sources - ["A3_Weapons_F_Jets"]
							{
								minRange = 8000;
								maxRange = 8000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = -1;
							};
							angleRangeHorizontal = 120;
							angleRangeVertical = 120;
							groundNoiseDistanceCoef = 0.2;
							minSpeedThreshold = 30;
							maxSpeedThreshold = 40;
							maxTrackableSpeed = 900;
							minTrackableATL = 10;
						};
					};
				};
			};
		};
		class ammo_Fighter01_Gun20mm_AA: ammo_Gun20mmAABase //inherits 35 parameters from bin\config.bin/CfgAmmo/ammo_Gun20mmAABase, sources - ["A3_Weapons_F_Jets"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
			tracerScale = 2;
			tracerStartTime = 0.05;
			tracerEndTime = 2;
		};
		class ammo_Fighter04_Gun20mm_AA: ammo_Gun20mmAABase //inherits 35 parameters from bin\config.bin/CfgAmmo/ammo_Gun20mmAABase, sources - ["A3_Weapons_F_Jets"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
			tracerScale = 2;
			tracerStartTime = 0.05;
			tracerEndTime = 2;
		};
		class ammo_Missile_AMRAAM_C: ammo_Missile_MediumRangeAABase //inherits 36 parameters from bin\config.bin/CfgAmmo/ammo_Missile_MediumRangeAABase, sources - ["A3_Weapons_F_Jets"]
		{
			model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_10_fly_F";
			proxyShape = "\A3\Weapons_F_Jets\Ammo\Missile_AA_10_F";
		};
		class ammo_Missile_AMRAAM_D: ammo_Missile_MediumRangeAABase //inherits 36 parameters from bin\config.bin/CfgAmmo/ammo_Missile_MediumRangeAABase, sources - ["A3_Weapons_F_Jets"]
		{
			model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_06_fly_F";
			proxyShape = "\A3\Weapons_F_Jets\Ammo\Missile_AA_06_F";
			airFriction = 0.065;
			thrustTime = 7.5;
			cmimmunity = 0.98;
			missileLockCone = 140;
			missileKeepLockedCone = 140;
			missileLockMaxDistance = 13000;
			class Components: Components //inherits 1 parameters from bin\config.bin/CfgAmmo/ammo_Missile_MediumRangeAABase/Components, sources - ["A3_Weapons_F_Jets"]
			{
				class SensorsManagerComponent //sources - ["A3_Weapons_F_Jets"]
				{
					class Components //sources - ["A3_Weapons_F_Jets"]
					{
						class ActiveRadarSensorComponent: SensorTemplateActiveRadar //inherits 11 parameters from bin\config.bin/SensorTemplateActiveRadar, sources - ["A3_Weapons_F_Jets"]
						{
							class AirTarget //sources - ["A3_Weapons_F_Jets"]
							{
								minRange = 13000;
								maxRange = 13000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = -1;
							};
							class GroundTarget //sources - ["A3_Weapons_F_Jets"]
							{
								minRange = 9000;
								maxRange = 9000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = -1;
							};
							angleRangeHorizontal = 100;
							angleRangeVertical = 100;
							groundNoiseDistanceCoef = 0.2;
							minSpeedThreshold = 30;
							maxSpeedThreshold = 40;
							maxTrackableSpeed = 800;
							minTrackableATL = 10;
						};
					};
				};
			};
		};
		class ammo_Missile_BIM9X: ammo_Missile_ShortRangeAABase //inherits 37 parameters from bin\config.bin/CfgAmmo/ammo_Missile_ShortRangeAABase, sources - ["A3_Weapons_F_Jets"]
		{
			model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_08_fly_F";
			proxyShape = "\A3\Weapons_F_Jets\Ammo\Missile_AA_08_F";
		};
		class ammo_Fighter02_Gun30mm_AA: ammo_Gun30mmAABase //inherits 35 parameters from bin\config.bin/CfgAmmo/ammo_Gun30mmAABase, sources - ["A3_Weapons_F_Jets"]
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
			tracerScale = 2;
			tracerStartTime = 0.05;
			tracerEndTime = 2;
		};
		class ammo_Missile_AA_R77: ammo_Missile_MediumRangeAABase //inherits 36 parameters from bin\config.bin/CfgAmmo/ammo_Missile_MediumRangeAABase, sources - ["A3_Weapons_F_Jets"]
		{
			model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_05_fly_F";
			proxyShape = "\A3\Weapons_F_Jets\Ammo\Missile_AA_05_F";
			maneuvrability = 35;
			airFriction = 0.08;
			sideAirFriction = 0.16;
			thrust = 230;
			missileLockCone = 90;
			missileLockMaxDistance = 10000;
			class Components: Components //inherits 1 parameters from bin\config.bin/CfgAmmo/ammo_Missile_MediumRangeAABase/Components, sources - ["A3_Weapons_F_Jets"]
			{
				class SensorsManagerComponent //sources - ["A3_Weapons_F_Jets"]
				{
					class Components //sources - ["A3_Weapons_F_Jets"]
					{
						class ActiveRadarSensorComponent: SensorTemplateActiveRadar //inherits 11 parameters from bin\config.bin/SensorTemplateActiveRadar, sources - ["A3_Weapons_F_Jets"]
						{
							class AirTarget //sources - ["A3_Weapons_F_Jets"]
							{
								minRange = 10000;
								maxRange = 10000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = -1;
							};
							class GroundTarget //sources - ["A3_Weapons_F_Jets"]
							{
								minRange = 8000;
								maxRange = 8000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = -1;
							};
							angleRangeHorizontal = 65;
							angleRangeVertical = 65;
							groundNoiseDistanceCoef = 0.2;
							minSpeedThreshold = 30;
							maxSpeedThreshold = 40;
							maxTrackableSpeed = 800;
							minTrackableATL = 10;
						};
					};
				};
			};
		};
		class ammo_Missile_AA_R73: ammo_Missile_ShortRangeAABase //inherits 37 parameters from bin\config.bin/CfgAmmo/ammo_Missile_ShortRangeAABase, sources - ["A3_Weapons_F_Jets"]
		{
			model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_07_fly_F";
			proxyShape = "\A3\Weapons_F_Jets\Ammo\Missile_AA_07_F";
			hit = 140;
			indirectHit = 95;
			maneuvrability = 38;
			airFriction = 0.16;
			sideAirFriction = 0.25;
			cmimmunity = 0.93;
			missileLockMinDistance = 75;
			missileLockMaxDistance = 6000;
			missileLockCone = 150;
			missileKeepLockedCone = 150;
			timeToLive = 25;
			thrustTime = 6;
			class Components: Components //inherits 1 parameters from bin\config.bin/CfgAmmo/ammo_Missile_ShortRangeAABase/Components, sources - ["A3_Weapons_F_Jets"]
			{
				class SensorsManagerComponent //sources - ["A3_Weapons_F_Jets"]
				{
					class Components //sources - ["A3_Weapons_F_Jets"]
					{
						class IRSensorComponent: SensorTemplateIR //inherits 8 parameters from bin\config.bin/SensorTemplateIR, sources - ["A3_Weapons_F_Jets"]
						{
							class AirTarget //sources - ["A3_Weapons_F_Jets"]
							{
								minRange = 500;
								maxRange = 6000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = 1;
							};
							class GroundTarget //sources - ["A3_Weapons_F_Jets"]
							{
								minRange = 500;
								maxRange = 4000;
								objectDistanceLimitCoef = 1;
								viewDistanceLimitCoef = 1;
							};
							angleRangeHorizontal = 150;
							angleRangeVertical = 150;
							maxTrackableSpeed = 600;
							minTrackableATL = 3;
						};
					};
				};
			};
		};
	};
