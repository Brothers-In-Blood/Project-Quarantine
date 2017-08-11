class cfgPatches
{
	class BIB_Wasteland_Vehicles_StaticWeapons
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
    class LandVehicle;
    class StaticWeapon: LandVehicle //inherits 25 parameters from bin\config.bin/CfgVehicles/LandVehicle, sources - ["A3_Data_F","A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
	{
		author = "Bohemia Interactive";
		mapSize = 2.55;
		class SpeechVariants //sources - ["A3_Data_F"]
		{
			class Default //sources - ["A3_Data_F"]
			{
				speechSingular[] = {"veh_static_s"};
				speechPlural[] = {"veh_static_p"};
			};
		};
		textSingular = "static weapon";
		textPlural = "static weapons";
		nameSound = "veh_static_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
		_generalMacro = "StaticWeapon";
		class DestructionEffects //sources - []
		{
		};
		memoryPointMissile[] = {"spice rakety", "usti hlavne"};
		memoryPointMissileDir[] = {"konec rakety", "konec hlavne"};
		class VehicleTransport //sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
		{
			class Cargo //sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
			{
				canBeTransported = 0;
			};
		};
		class Turrets //sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
		{
			class MainTurret: NewTurret //inherits 115 parameters from bin\config.bin/CfgVehicles/AllVehicles/NewTurret, sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
			{
				class ViewOptics //sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
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
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
				};
				class HitPoints //sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
				{
					class HitGun //sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
					{
						armor = 0.3;
						material = -1;
						name = "action";
						visual = "autonomous_unhide";
						passThrough = 0;
						radius = 0.2;
					};
					class HitTurret: HitGun //inherits 6 parameters from bin\config.bin/CfgVehicles/StaticWeapon/Turrets/MainTurret/HitPoints/HitGun, sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
					{
						class DestructionEffects //sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
						{
							class Smoke //sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
							{
								simulation = "particles";
								type = "WeaponWreckSmoke";
								position = "destructionEffect";
								intensity = 1;
								interval = 1;
								lifeTime = 5;
							};
						};
						armor = 0.3;
					};
				};
				class Components //sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft //inherits 6 parameters from bin\config.bin/DefaultVehicleSystemsDisplayManagerLeft, sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
					{
						class Components //sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
						{
							class EmptyDisplay //sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay //sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};
							class UAVDisplay //sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
							{
								componentType = "UAVFeedDisplayComponent";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight //inherits 6 parameters from bin\config.bin/DefaultVehicleSystemsDisplayManagerRight, sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
					{
						class Components //sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
						{
							class EmptyDisplay //sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay //sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};
							class UAVDisplay //sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
							{
								componentType = "UAVFeedDisplayComponent";
							};
						};
					};
				};
				selectionFireAnim = "";
				memoryPointsGetInGunner = "pos_gunner_dir";
				memoryPointsGetInGunnerDir = "pos_gunner";
				memoryPointGun = "usti hlavne";
				outGunnerMayFire = 1;
				optics = 1;
				minTurn = -40;
				maxTurn = 40;
				initTurn = 0;
				minElev = -7;
				maxElev = 70;
				initElev = 0;
				castGunnerShadow = 1;
				ejectDeadGunner = 0;
				canEject = 0;
				gunnerGetInAction = "";
				gunnerGetOutAction = "";
				gunnerForceOptics = 0;
			};
		};
		gearBox[] = {-1, 0, 1};
		soundEnviron[] = {"", 1, 0.7};
		soundEngine[] = {"", 10, 1};
		soundCrash[] = {"", 0.562341, 1};
		soundGear[] = {"", 0.000316228, 1};
		soundDammage[] = {"", 0.01, 1};
		cargoGetInAction[] = {};
		cargoGetOutAction[] = {};
		class Wounds //sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
		{
			tex[] = {};
			mat[] = {};
		};
		class HitPoints //sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
		{
			class HitEngine //sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
			{
				armor = 0.8;
				material = -1;
				name = "motor";
				passThrough = 1;
			};
			class HitHull //sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
			{
				armor = 1;
				material = -1;
				name = "telo";
				passThrough = 1;
			};
			class HitTurret //sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
			{
				armor = 0.8;
				material = -1;
				name = "vez";
				passThrough = 1;
			};
			class HitGun //sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
			{
				armor = 0.6;
				material = -1;
				name = "zbran";
				passThrough = 1;
			};
			class HitLTrack //sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
			{
				armor = 0.6;
				material = -1;
				name = "pas_L";
				passThrough = 1;
			};
			class HitRTrack //sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
			{
				armor = 0.6;
				material = -1;
				name = "pas_P";
				passThrough = 1;
			};
			class HitBody //sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
			{
				armor = 1;
				material = -1;
				name = "NEzbytek";
				visual = "zbytek";
				passThrough = 1;
			};
		};
		extCameraPosition[] = {0, 1.5, -9};
		class ViewPilot: ViewPilot //inherits 15 parameters from bin\config.bin/CfgVehicles/AllVehicles/ViewPilot, sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
		{
			initAngleX = 7;
			minAngleX = -15;
			maxAngleX = 25;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
		};
		weapons[] = {"FakeWeapon"};
		magazines[] = {"FakeWeapon"};
		threat[] = {0.7, 1, 0.3};
		driverOpticsColor[] = {0, 0, 0, 1};
		class CargoLight //sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
		{
			color[] = {0, 0, 0, 0};
			ambient[] = {0.6, 0, 0.15, 1};
			brightness = 0.007;
		};
		class Reflectors //sources - []
		{
		};
		class UserActions //sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
		{
			class PressXToFlipTheThing //sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
			{
				displayNameDefault = "Set-up the tripod";
				displayName = "Set-up the tripod";
				position = "";
				radius = 2.7;
				onlyForPlayer = 1;
				condition = "alive this AND not canmove this AND (count crew this == 0 || isAutonomous this)";
				statement = "this setpos [getpos this select 0,getpos this select 1,(getpos this select 2)+1]";
			};
		};
		epeImpulseDamageCoef = 8;
		editorSubcategory = "EdSubcat_Turrets";
		vehicleClass = "Static";
		driverOpticsModel = "\A3\weapons_f\reticle\optics_empty";
		selectionClan = "clan";
		selectionDashboard = "podsvit pristroju";
		selectionShowDamage = "poskozeni";
		selectionBackLights = "light_back";
		bounding = "usti hlavne";
		alphaTracks = 0.7;
		textureTrackWheel = 0;
		selectionLeftOffset = "";
		selectionRightOffset = "";
		memoryPointTrack1L = "";
		memoryPointTrack1R = "";
		memoryPointTrack2L = "";
		memoryPointTrack2R = "";
		tracksSpeed = 1;
		unitInfoType = "RscUnitInfoStatic";
		waterLeakiness = 100;
		selectionFireAnim = "";
		fireDustEffect = "FDustEffects";
		memoryPointCargoLight = "cargo light";
		gunnerCanSee = "2+8+32+4";
		gunnerHasFlares = 0;
		damperSize = 1.4;
		damperForce = 0.8;
		attenuationEffectType = "OpenCarAttenuation";
		getInAction = "";
		getOutAction = "";
		getInRadius = 3.5;
		secondaryExplosion = -1;
		fuelExplosionPower = 0;
		fuelCapacity = 0;
		irScanRangeMin = 0;
		irScanRangeMax = 0;
		irScanToEyeFactor = 1;
		allowTabLock = 0;
		irTarget = 0;
		laserTarget = 0;
		armor = 24;
		armorStructural = 1;
		explosionShielding = 1;
		minTotalDamageThreshold = 0.01;
		crewCrashProtection = 1;
		crewExplosionProtection = 0;
		cost = 10000;
		steerAheadSimul = 0.4;
		steerAheadPlan = 0.6;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1.8;
		ejectDeadDriver = 1;
		ejectDeadCargo = 1;
		hasDriver = 0;
		nightVision = 0;
		driverAction = "ManActCargo";
		driverInAction = "ManActCargo";
		memoryPointsGetInCargo = "pos_cargo";
		memoryPointsGetInCargoDir = "pos_cargo_dir";
		simulation = "tankX";
		occludeSoundsWhenIn = 1;
		obstructSoundsWhenIn = 1;
		formationX = 20;
		formationZ = 30;
		precision = 1;
		brakeDistance = 0;
		turnCoef = 0;
		maxSpeed = 0;
		canFloat = 0;
		type = 1;
		camouflage = 1;
		audible = 1;
		sensitivityEar = 0.125;
		sensitivity = 1.75;
		hideProxyInCombat = 0;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		numberPhysicalWheels = 0;
	};
	class StaticMGWeapon: StaticWeapon //inherits 110 parameters from bin\config.bin/CfgVehicles/StaticWeapon, sources - ["A3_Data_F","A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
	{
		author = "Bohemia Interactive";
		mapSize = 2.74;
		class SpeechVariants //sources - ["A3_Data_F"]
		{
			class Default //sources - ["A3_Data_F"]
			{
				speechSingular[] = {"veh_static_MG_s"};
				speechPlural[] = {"veh_static_MG_p"};
			};
		};
		textSingular = "static MG";
		textPlural = "static MGs";
		nameSound = "veh_static_MG_s";
		_generalMacro = "StaticMGWeapon";
		threat[] = {0.7, 0, 0.3};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/StaticWeapon/Turrets, sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
		{
			class MainTurret: MainTurret //inherits 21 parameters from bin\config.bin/CfgVehicles/StaticWeapon/Turrets/MainTurret, sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
			{
				optics = 1;
			};
		};
		accuracy = 0.12;
		cost = 10000;
		icon = "iconStaticMG";
    };
    class HMG_01_base_F: StaticMGWeapon //inherits 12 parameters from bin\config.bin/CfgVehicles/StaticMGWeapon, sources - ["A3_Static_F"]
	{
		features = "Randomization: No						<br />Camo selections: 1 - the whole weapon with pod						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: Just the weapon						<br />Slingload: No						<br />Cargo proxy indexes: None";
		author = "Bohemia Interactive";
		_generalMacro = "HMG_01_base_F";
		scope = 0;
		displayName = "Mk30 HMG .50";
		class Armory //sources - ["A3_Static_F"]
		{
			description = "The Mk30 HMG is a static machine gun used by infantry and support. Several projects were launched to replace the Browning M2, but each resulted in them being shelved for various reasons. The Mk30 made it through. Compared to the M2, it's lighter and more portable with better accuracy, utilizing new materials, electronic targeting help and a new tripod, trading portability for rate of fire. Based on the previous concept of the XM307/XM312, the Mk30 is chambered for .50 BMG cartridges with a rate of fire of 350 rpm and effective range up to 2000 meters. Mk30 also exists in an automatic/remotely controlled variant which is labeled Mk30A.";
		};
		model = "\A3\Static_F_Gamma\HMG_01\HMG_01_F.p3d";
		editorSubcategory = "EdSubcat_Turrets";
		picture = "\A3\Static_f_gamma\data\ui\gear_StaticTurret_MG_CA.paa";
		UiPicture = "\A3\Static_f_gamma\data\ui\gear_StaticTurret_MG_CA.paa";
		threat[] = {1, 0.3, 0.3};
		cost = 150000;
		getInAction = "";
		getOutAction = "";
		class Damage //sources - ["A3_Static_F"]
		{
			tex[] = {};
			mat[] = {"A3\Static_F_Gamma\data\StaticTurret_01.rvmat", "A3\Static_F_Gamma\data\StaticTurret_01_damage.rvmat", "A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat", "A3\Static_F_Gamma\data\StaticTurret_02.rvmat", "A3\Static_F_Gamma\data\StaticTurret_02_damage.rvmat", "A3\Static_F_Gamma\data\StaticTurret_02_destruct.rvmat", "A3\Static_F_Gamma\data\StaticTurret_03.rvmat", "A3\Static_F_Gamma\data\StaticTurret_03_damage.rvmat", "A3\Static_F_Gamma\data\StaticTurret_03_destruct.rvmat"};
		};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/StaticMGWeapon/Turrets, sources - ["A3_Static_F"]
		{
			class MainTurret: MainTurret //inherits 1 parameters from bin\config.bin/CfgVehicles/StaticMGWeapon/Turrets/MainTurret, sources - ["A3_Static_F"]
			{
				optics = 1;
				discreteDistance[] = {100, 200, 300, 400, 600, 800, 1000, 1200, 1500};
				discreteDistanceInitIndex = 2;
				turretInfoType = "RscOptics_crows";
				gunnerOpticsModel = "\a3\weapons_f_gamma\reticle\HMG_01_Optics_Gunner_F";
				minElev = -20;
				maxElev = 35;
				weapons[] = {"HMG_static"};
				magazines[] = {"500Rnd_127x99_mag", "500Rnd_127x99_mag"};
				gunnerAction = "gunner_static_low01";
				gunnergetInAction = "";
				gunnergetOutAction = "";
				displayName = "";
				class ViewOptics: ViewOptics //inherits 15 parameters from bin\config.bin/CfgVehicles/StaticWeapon/Turrets/MainTurret/ViewOptics, sources - ["A3_Static_F"]
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.117;
					minFov = 0.029;
					maxFov = 0.117;
					visionMode[] = {"Normal", "NVG", "Ti"};
					thermalMode[] = {0, 1};
				};
				gunnerRightHandAnimName = "OtocHlaven_shake";
				gunnerLeftHandAnimName = "OtocHlaven_shake";
				ejectDeadGunner = 1;
			};
		};
		class AnimationSources //sources - ["A3_Static_F"]
		{
			class autonomous_unhide //sources - ["A3_Static_F"]
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class muzzle_source //sources - ["A3_Static_F"]
			{
				source = "reload";
				weapon = "HMG_static";
			};
			class muzzle_source_rot //sources - ["A3_Static_F"]
			{
				source = "ammorandom";
				weapon = "HMG_static";
			};
			class ReloadAnim //sources - ["A3_Static_F"]
			{
				source = "reload";
				weapon = "HMG_static";
			};
			class ReloadMagazine //sources - ["A3_Static_F"]
			{
				source = "reloadmagazine";
				weapon = "HMG_static";
			};
			class Revolving //sources - ["A3_Static_F"]
			{
				source = "revolving";
				weapon = "HMG_static";
			};
		};
		soundGetOut[] = {"A3\sounds_f\dummysound", 0.001, 1, 5};
		soundGetIn[] = {"A3\sounds_f\dummysound", 0.000316228, 1, 5};
	};
	class B_HMG_01_F: HMG_01_base_F //inherits 19 parameters from bin\config.bin/CfgVehicles/HMG_01_base_F, sources - ["A3_Static_F"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"mainturret_destructx", 0}, {"mainturret_destructy", 0}, {"mainturret_destructz", 0}, {"maingun_destructx", 0}, {"maingun_destructy", 0}, {"maingun_destructz", 0}, {"magazine_destruct", 0}, {"ammo_belt_destruct", 0}, {"bolt_destruct", 0}, {"charging_handle_destruct", 0}, {"damagehidevez_destruct", 0}, {"damagehidehlaven_destruct", 0}, {"damagehiderecoil_destruct", 0}, {"ammo_belt_rotation", 0}, {"barrel_recoil", 0}, {"bolt_recoil", 0}, {"turret_shake", 0}, {"turret_shake_backside", 0}, {"turret_shake_aside", 0}, {"bolt_reload_begin", 0}, {"bolt_reload_end", 0}, {"charging_handle_reload_begin", 0}, {"charging_handle_reload_end", 0}, {"magazine_hide", 0}, {"ammo_belt_hide", 0}, {"muzzleflash", 0}, {"zaslehrot", 0}, {"addautonomous_unhide", 0}, {"bullet001_reload_hide", 1}, {"bullet002_reload_hide", 1}, {"bullet003_reload_hide", 1}, {"bullet004_reload_hide", 1}, {"bullet005_reload_hide", 1}, {"bullet006_reload_hide", 1}, {"bullet007_reload_hide", 1}, {"bullet008_reload_hide", 1}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.054;
			verticalOffsetWorld = 0.075;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_HMG_01_F.jpg";
		_generalMacro = "B_HMG_01_F";
		scope = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_Soldier_F";
		class assembleInfo //sources - ["A3_Static_F"]
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"B_HMG_01_weapon_F", "B_HMG_01_support_F"};
			displayName = "";
		};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/HMG_01_base_F/Turrets, sources - ["A3_Static_F"]
		{
			class MainTurret: MainTurret //inherits 17 parameters from bin\config.bin/CfgVehicles/HMG_01_base_F/Turrets/MainTurret, sources - ["A3_Static_F"]
			{
				magazines[] = {"500Rnd_127x99_mag_Tracer_Red", "500Rnd_127x99_mag_Tracer_Red", "200Rnd_40mm_G_belt"};
			};
		};
	};
	class O_HMG_01_F: HMG_01_base_F //inherits 19 parameters from bin\config.bin/CfgVehicles/HMG_01_base_F, sources - ["A3_Static_F"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"mainturret_destructx", 0}, {"mainturret_destructy", 0}, {"mainturret_destructz", 0}, {"maingun_destructx", 0}, {"maingun_destructy", 0}, {"maingun_destructz", 0}, {"magazine_destruct", 0}, {"ammo_belt_destruct", 0}, {"bolt_destruct", 0}, {"charging_handle_destruct", 0}, {"damagehidevez_destruct", 0}, {"damagehidehlaven_destruct", 0}, {"damagehiderecoil_destruct", 0}, {"ammo_belt_rotation", 0}, {"barrel_recoil", 0}, {"bolt_recoil", 0}, {"turret_shake", 0}, {"turret_shake_backside", 0}, {"turret_shake_aside", 0}, {"bolt_reload_begin", 0}, {"bolt_reload_end", 0}, {"charging_handle_reload_begin", 0}, {"charging_handle_reload_end", 0}, {"magazine_hide", 0}, {"ammo_belt_hide", 0}, {"muzzleflash", 0}, {"zaslehrot", 0}, {"addautonomous_unhide", 0}, {"bullet001_reload_hide", 1}, {"bullet002_reload_hide", 1}, {"bullet003_reload_hide", 1}, {"bullet004_reload_hide", 1}, {"bullet005_reload_hide", 1}, {"bullet006_reload_hide", 1}, {"bullet007_reload_hide", 1}, {"bullet008_reload_hide", 1}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.054;
			verticalOffsetWorld = 0.075;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_HMG_01_F.jpg";
		_generalMacro = "O_HMG_01_F";
		scope = 2;
		side = 0;
		faction = "OPF_F";
		crew = "O_Soldier_F";
		class assembleInfo //sources - ["A3_Static_F"]
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"O_HMG_01_weapon_F", "O_HMG_01_support_F"};
			displayName = "";
		};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/HMG_01_base_F/Turrets, sources - ["A3_Static_F"]
		{
			class MainTurret: MainTurret //inherits 17 parameters from bin\config.bin/CfgVehicles/HMG_01_base_F/Turrets/MainTurret, sources - ["A3_Static_F"]
			{
				magazines[] = {"500Rnd_127x99_mag_Tracer_Green", "500Rnd_127x99_mag_Tracer_Green", "200Rnd_40mm_G_belt"};
			};
		};
	};
	class I_HMG_01_F: HMG_01_base_F //inherits 19 parameters from bin\config.bin/CfgVehicles/HMG_01_base_F, sources - ["A3_Static_F"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"mainturret_destructx", 0}, {"mainturret_destructy", 0}, {"mainturret_destructz", 0}, {"maingun_destructx", 0}, {"maingun_destructy", 0}, {"maingun_destructz", 0}, {"magazine_destruct", 0}, {"ammo_belt_destruct", 0}, {"bolt_destruct", 0}, {"charging_handle_destruct", 0}, {"damagehidevez_destruct", 0}, {"damagehidehlaven_destruct", 0}, {"damagehiderecoil_destruct", 0}, {"ammo_belt_rotation", 0}, {"barrel_recoil", 0}, {"bolt_recoil", 0}, {"turret_shake", 0}, {"turret_shake_backside", 0}, {"turret_shake_aside", 0}, {"bolt_reload_begin", 0}, {"bolt_reload_end", 0}, {"charging_handle_reload_begin", 0}, {"charging_handle_reload_end", 0}, {"magazine_hide", 0}, {"ammo_belt_hide", 0}, {"muzzleflash", 0}, {"zaslehrot", 0}, {"addautonomous_unhide", 0}, {"bullet001_reload_hide", 1}, {"bullet002_reload_hide", 1}, {"bullet003_reload_hide", 1}, {"bullet004_reload_hide", 1}, {"bullet005_reload_hide", 1}, {"bullet006_reload_hide", 1}, {"bullet007_reload_hide", 1}, {"bullet008_reload_hide", 1}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.054;
			verticalOffsetWorld = 0.075;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_HMG_01_F.jpg";
		_generalMacro = "I_HMG_01_F";
		scope = 2;
		side = 2;
		faction = "IND_F";
		crew = "I_Soldier_F";
		class assembleInfo //sources - ["A3_Static_F"]
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"I_HMG_01_weapon_F", "I_HMG_01_support_F"};
			displayName = "";
		};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/HMG_01_base_F/Turrets, sources - ["A3_Static_F"]
		{
			class MainTurret: MainTurret //inherits 17 parameters from bin\config.bin/CfgVehicles/HMG_01_base_F/Turrets/MainTurret, sources - ["A3_Static_F"]
			{
				magazines[] = {"500Rnd_127x99_mag_Tracer_Yellow", "500Rnd_127x99_mag_Tracer_Yellow", "200Rnd_40mm_G_belt"};
			};
		};
	};
	class HMG_01_high_base_F: HMG_01_base_F //inherits 19 parameters from bin\config.bin/CfgVehicles/HMG_01_base_F, sources - ["A3_Static_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 2.55;
		_generalMacro = "HMG_01_high_base_F";
		model = "\A3\Static_F_Gamma\HMG_01\HMG_01_high_F.p3d";
		displayName = "Mk30 HMG .50 (Raised)";
		armor = 30;
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/HMG_01_base_F/Turrets, sources - ["A3_Static_F"]
		{
			class MainTurret: MainTurret //inherits 17 parameters from bin\config.bin/CfgVehicles/HMG_01_base_F/Turrets/MainTurret, sources - ["A3_Static_F"]
			{
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				gunnerAction = "gunner_standup01";
				gunnergetInAction = "";
				gunnergetOutAction = "";
			};
		};
	};
	class B_HMG_01_high_F: HMG_01_high_base_F //inherits 7 parameters from bin\config.bin/CfgVehicles/HMG_01_high_base_F, sources - ["A3_Static_F"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"mainturret_destructx", 0}, {"mainturret_destructy", 0}, {"mainturret_destructz", 0}, {"maingun_destructx", 0}, {"maingun_destructy", 0}, {"maingun_destructz", 0}, {"magazine_destruct", 0}, {"ammo_belt_destruct", 0}, {"bolt_destruct", 0}, {"charging_handle_destruct", 0}, {"damagehidevez_destruct", 0}, {"damagehidehlaven_destruct", 0}, {"damagehiderecoil_destruct", 0}, {"ammo_belt_rotation", 0}, {"barrel_recoil", 0}, {"bolt_recoil", 0}, {"turret_shake", 0}, {"turret_shake_backside", 0}, {"turret_shake_aside", 0}, {"bolt_reload_begin", 0}, {"bolt_reload_end", 0}, {"charging_handle_reload_begin", 0}, {"charging_handle_reload_end", 0}, {"magazine_hide", 0}, {"ammo_belt_hide", 0}, {"muzzleflash", 0}, {"zaslehrot", 0}, {"addautonomous_unhide", 0}, {"bullet001_reload_hide", 1}, {"bullet002_reload_hide", 1}, {"bullet003_reload_hide", 1}, {"bullet004_reload_hide", 1}, {"bullet005_reload_hide", 1}, {"bullet006_reload_hide", 1}, {"bullet007_reload_hide", 1}, {"bullet008_reload_hide", 1}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.672;
			verticalOffsetWorld = -0.014;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_HMG_01_high_F.jpg";
		_generalMacro = "B_HMG_01_high_F";
		scope = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_Soldier_F";
		class assembleInfo //sources - ["A3_Static_F"]
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"B_HMG_01_high_weapon_F", "B_HMG_01_support_high_F"};
			displayName = "";
		};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/HMG_01_high_base_F/Turrets, sources - ["A3_Static_F"]
		{
			class MainTurret: MainTurret //inherits 6 parameters from bin\config.bin/CfgVehicles/HMG_01_high_base_F/Turrets/MainTurret, sources - ["A3_Static_F"]
			{
				magazines[] = {"500Rnd_127x99_mag_Tracer_Red", "500Rnd_127x99_mag_Tracer_Red", "200Rnd_40mm_G_belt"};
			};
		};
	};
	class O_HMG_01_high_F: HMG_01_high_base_F //inherits 7 parameters from bin\config.bin/CfgVehicles/HMG_01_high_base_F, sources - ["A3_Static_F"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"mainturret_destructx", 0}, {"mainturret_destructy", 0}, {"mainturret_destructz", 0}, {"maingun_destructx", 0}, {"maingun_destructy", 0}, {"maingun_destructz", 0}, {"magazine_destruct", 0}, {"ammo_belt_destruct", 0}, {"bolt_destruct", 0}, {"charging_handle_destruct", 0}, {"damagehidevez_destruct", 0}, {"damagehidehlaven_destruct", 0}, {"damagehiderecoil_destruct", 0}, {"ammo_belt_rotation", 0}, {"barrel_recoil", 0}, {"bolt_recoil", 0}, {"turret_shake", 0}, {"turret_shake_backside", 0}, {"turret_shake_aside", 0}, {"bolt_reload_begin", 0}, {"bolt_reload_end", 0}, {"charging_handle_reload_begin", 0}, {"charging_handle_reload_end", 0}, {"magazine_hide", 0}, {"ammo_belt_hide", 0}, {"muzzleflash", 0}, {"zaslehrot", 0}, {"addautonomous_unhide", 0}, {"bullet001_reload_hide", 1}, {"bullet002_reload_hide", 1}, {"bullet003_reload_hide", 1}, {"bullet004_reload_hide", 1}, {"bullet005_reload_hide", 1}, {"bullet006_reload_hide", 1}, {"bullet007_reload_hide", 1}, {"bullet008_reload_hide", 1}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.672;
			verticalOffsetWorld = -0.014;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_HMG_01_high_F.jpg";
		_generalMacro = "O_HMG_01_high_F";
		scope = 2;
		side = 0;
		faction = "OPF_F";
		crew = "O_Soldier_F";
		class assembleInfo //sources - ["A3_Static_F"]
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"O_HMG_01_high_weapon_F", "O_HMG_01_support_high_F"};
			displayName = "";
		};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/HMG_01_high_base_F/Turrets, sources - ["A3_Static_F"]
		{
			class MainTurret: MainTurret //inherits 6 parameters from bin\config.bin/CfgVehicles/HMG_01_high_base_F/Turrets/MainTurret, sources - ["A3_Static_F"]
			{
				magazines[] = {"500Rnd_127x99_mag_Tracer_Green", "500Rnd_127x99_mag_Tracer_Green", "200Rnd_40mm_G_belt"};
			};
		};
	};
	class I_HMG_01_high_F: HMG_01_high_base_F //inherits 7 parameters from bin\config.bin/CfgVehicles/HMG_01_high_base_F, sources - ["A3_Static_F"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"mainturret_destructx", 0}, {"mainturret_destructy", 0}, {"mainturret_destructz", 0}, {"maingun_destructx", 0}, {"maingun_destructy", 0}, {"maingun_destructz", 0}, {"magazine_destruct", 0}, {"ammo_belt_destruct", 0}, {"bolt_destruct", 0}, {"charging_handle_destruct", 0}, {"damagehidevez_destruct", 0}, {"damagehidehlaven_destruct", 0}, {"damagehiderecoil_destruct", 0}, {"ammo_belt_rotation", 0}, {"barrel_recoil", 0}, {"bolt_recoil", 0}, {"turret_shake", 0}, {"turret_shake_backside", 0}, {"turret_shake_aside", 0}, {"bolt_reload_begin", 0}, {"bolt_reload_end", 0}, {"charging_handle_reload_begin", 0}, {"charging_handle_reload_end", 0}, {"magazine_hide", 0}, {"ammo_belt_hide", 0}, {"muzzleflash", 0}, {"zaslehrot", 0}, {"addautonomous_unhide", 0}, {"bullet001_reload_hide", 1}, {"bullet002_reload_hide", 1}, {"bullet003_reload_hide", 1}, {"bullet004_reload_hide", 1}, {"bullet005_reload_hide", 1}, {"bullet006_reload_hide", 1}, {"bullet007_reload_hide", 1}, {"bullet008_reload_hide", 1}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.672;
			verticalOffsetWorld = -0.014;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_HMG_01_high_F.jpg";
		_generalMacro = "I_HMG_01_high_F";
		scope = 2;
		side = 2;
		faction = "IND_F";
		crew = "I_Soldier_F";
		class assembleInfo //sources - ["A3_Static_F"]
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"I_HMG_01_high_weapon_F", "I_HMG_01_support_high_F"};
			displayName = "";
		};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/HMG_01_high_base_F/Turrets, sources - ["A3_Static_F"]
		{
			class MainTurret: MainTurret //inherits 6 parameters from bin\config.bin/CfgVehicles/HMG_01_high_base_F/Turrets/MainTurret, sources - ["A3_Static_F"]
			{
				magazines[] = {"500Rnd_127x99_mag_Tracer_Yellow", "500Rnd_127x99_mag_Tracer_Yellow", "200Rnd_40mm_G_belt"};
			};
		};
	};
	class HMG_01_A_base_F: HMG_01_base_F //inherits 19 parameters from bin\config.bin/CfgVehicles/HMG_01_base_F, sources - ["A3_Static_F"]
	{
		class AnimationSources: AnimationSources //inherits 6 parameters from bin\config.bin/CfgVehicles/HMG_01_base_F/AnimationSources, sources - ["A3_Static_F"]
		{
			class autonomous_unhide: autonomous_unhide //inherits 3 parameters from bin\config.bin/CfgVehicles/HMG_01_base_F/AnimationSources/autonomous_unhide, sources - ["A3_Static_F"]
			{
				initPhase = 1;
			};
		};
		author = "Bohemia Interactive";
		_generalMacro = "HMG_01_A_base_F";
		displayName = "Mk30A HMG .50";
		isUav = 1;
		uavCameraGunnerPos = "PiP_pos";
		uavCameraGunnerDir = "PiP_dir";
		explosionEffect = "";
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/HMG_01_base_F/Turrets, sources - ["A3_Static_F"]
		{
			class MainTurret: MainTurret //inherits 17 parameters from bin\config.bin/CfgVehicles/HMG_01_base_F/Turrets/MainTurret, sources - ["A3_Static_F"]
			{
				gunnerInAction = "Disabled";
				gunnerAction = "Disabled";
				gunnerForceOptics = 1;
				class HitPoints //sources - ["A3_Static_F"]
				{
					class HitGun //sources - ["A3_Static_F"]
					{
						armor = 0.3;
						material = -1;
						name = "gun";
						visual = "autonomous_unhide";
						passThrough = 0;
						radius = 0.2;
					};
					class HitTurret: HitGun //inherits 6 parameters from bin\config.bin/CfgVehicles/HMG_01_A_base_F/Turrets/MainTurret/HitPoints/HitGun, sources - ["A3_Static_F"]
					{
						armor = 0.3;
						class DestructionEffects //sources - ["A3_Static_F"]
						{
							class Smoke //sources - ["A3_Static_F"]
							{
								simulation = "particles";
								type = "WeaponWreckSmoke";
								position = "destructionEffect";
								intensity = 1;
								interval = 1;
								lifeTime = 5;
							};
						};
					};
				};
			};
		};
	};
	class B_HMG_01_A_F: HMG_01_A_base_F //inherits 9 parameters from bin\config.bin/CfgVehicles/HMG_01_A_base_F, sources - ["A3_Static_F"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"mainturret_destructx", 0}, {"mainturret_destructy", 0}, {"mainturret_destructz", 0}, {"maingun_destructx", 0}, {"maingun_destructy", 0}, {"maingun_destructz", 0}, {"magazine_destruct", 0}, {"ammo_belt_destruct", 0}, {"bolt_destruct", 0}, {"charging_handle_destruct", 0}, {"damagehidevez_destruct", 0}, {"damagehidehlaven_destruct", 0}, {"damagehiderecoil_destruct", 0}, {"ammo_belt_rotation", 0}, {"barrel_recoil", 0}, {"bolt_recoil", 0}, {"turret_shake", 0}, {"turret_shake_backside", 0}, {"turret_shake_aside", 0}, {"bolt_reload_begin", 0}, {"bolt_reload_end", 0}, {"charging_handle_reload_begin", 0}, {"charging_handle_reload_end", 0}, {"magazine_hide", 0}, {"ammo_belt_hide", 0}, {"muzzleflash", 0}, {"zaslehrot", 0}, {"addautonomous_unhide", 1}, {"bullet001_reload_hide", 1}, {"bullet002_reload_hide", 1}, {"bullet003_reload_hide", 1}, {"bullet004_reload_hide", 1}, {"bullet005_reload_hide", 1}, {"bullet006_reload_hide", 1}, {"bullet007_reload_hide", 1}, {"bullet008_reload_hide", 1}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.054;
			verticalOffsetWorld = 0.075;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_HMG_01_A_F.jpg";
		_generalMacro = "B_HMG_01_A_F";
		scope = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_UAV_AI";
		class assembleInfo //sources - ["A3_Static_F"]
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"B_HMG_01_A_weapon_F", "B_HMG_01_support_F"};
			displayName = "";
		};
		forceInGarage = 1;
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/HMG_01_A_base_F/Turrets, sources - ["A3_Static_F"]
		{
			class MainTurret: MainTurret //inherits 4 parameters from bin\config.bin/CfgVehicles/HMG_01_A_base_F/Turrets/MainTurret, sources - ["A3_Static_F"]
			{
				magazines[] = {"500Rnd_127x99_mag_Tracer_Red", "500Rnd_127x99_mag_Tracer_Red", "200Rnd_40mm_G_belt"};
			};
		};
	};
	class O_HMG_01_A_F: HMG_01_A_base_F //inherits 9 parameters from bin\config.bin/CfgVehicles/HMG_01_A_base_F, sources - ["A3_Static_F"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"mainturret_destructx", 0}, {"mainturret_destructy", 0}, {"mainturret_destructz", 0}, {"maingun_destructx", 0}, {"maingun_destructy", 0}, {"maingun_destructz", 0}, {"magazine_destruct", 0}, {"ammo_belt_destruct", 0}, {"bolt_destruct", 0}, {"charging_handle_destruct", 0}, {"damagehidevez_destruct", 0}, {"damagehidehlaven_destruct", 0}, {"damagehiderecoil_destruct", 0}, {"ammo_belt_rotation", 0}, {"barrel_recoil", 0}, {"bolt_recoil", 0}, {"turret_shake", 0}, {"turret_shake_backside", 0}, {"turret_shake_aside", 0}, {"bolt_reload_begin", 0}, {"bolt_reload_end", 0}, {"charging_handle_reload_begin", 0}, {"charging_handle_reload_end", 0}, {"magazine_hide", 0}, {"ammo_belt_hide", 0}, {"muzzleflash", 0}, {"zaslehrot", 0}, {"addautonomous_unhide", 1}, {"bullet001_reload_hide", 1}, {"bullet002_reload_hide", 1}, {"bullet003_reload_hide", 1}, {"bullet004_reload_hide", 1}, {"bullet005_reload_hide", 1}, {"bullet006_reload_hide", 1}, {"bullet007_reload_hide", 1}, {"bullet008_reload_hide", 1}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.054;
			verticalOffsetWorld = 0.075;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_HMG_01_A_F.jpg";
		_generalMacro = "O_HMG_01_A_F";
		scope = 2;
		side = 0;
		faction = "OPF_F";
		crew = "O_UAV_AI";
		class assembleInfo //sources - ["A3_Static_F"]
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"O_HMG_01_A_weapon_F", "O_HMG_01_support_F"};
			displayName = "";
		};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/HMG_01_A_base_F/Turrets, sources - ["A3_Static_F"]
		{
			class MainTurret: MainTurret //inherits 4 parameters from bin\config.bin/CfgVehicles/HMG_01_A_base_F/Turrets/MainTurret, sources - ["A3_Static_F"]
			{
				magazines[] = {"500Rnd_127x99_mag_Tracer_Green", "500Rnd_127x99_mag_Tracer_Green", "200Rnd_40mm_G_belt"};
			};
		};
	};
	class I_HMG_01_A_F: HMG_01_A_base_F //inherits 9 parameters from bin\config.bin/CfgVehicles/HMG_01_A_base_F, sources - ["A3_Static_F"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"mainturret_destructx", 0}, {"mainturret_destructy", 0}, {"mainturret_destructz", 0}, {"maingun_destructx", 0}, {"maingun_destructy", 0}, {"maingun_destructz", 0}, {"magazine_destruct", 0}, {"ammo_belt_destruct", 0}, {"bolt_destruct", 0}, {"charging_handle_destruct", 0}, {"damagehidevez_destruct", 0}, {"damagehidehlaven_destruct", 0}, {"damagehiderecoil_destruct", 0}, {"ammo_belt_rotation", 0}, {"barrel_recoil", 0}, {"bolt_recoil", 0}, {"turret_shake", 0}, {"turret_shake_backside", 0}, {"turret_shake_aside", 0}, {"bolt_reload_begin", 0}, {"bolt_reload_end", 0}, {"charging_handle_reload_begin", 0}, {"charging_handle_reload_end", 0}, {"magazine_hide", 0}, {"ammo_belt_hide", 0}, {"muzzleflash", 0}, {"zaslehrot", 0}, {"addautonomous_unhide", 1}, {"bullet001_reload_hide", 1}, {"bullet002_reload_hide", 1}, {"bullet003_reload_hide", 1}, {"bullet004_reload_hide", 1}, {"bullet005_reload_hide", 1}, {"bullet006_reload_hide", 1}, {"bullet007_reload_hide", 1}, {"bullet008_reload_hide", 1}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.054;
			verticalOffsetWorld = 0.075;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_HMG_01_A_F.jpg";
		_generalMacro = "I_HMG_01_A_F";
		scope = 2;
		side = 2;
		faction = "IND_F";
		crew = "I_UAV_AI";
		class assembleInfo //sources - ["A3_Static_F"]
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"I_HMG_01_A_weapon_F", "I_HMG_01_support_F"};
			displayName = "";
		};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/HMG_01_A_base_F/Turrets, sources - ["A3_Static_F"]
		{
			class MainTurret: MainTurret //inherits 4 parameters from bin\config.bin/CfgVehicles/HMG_01_A_base_F/Turrets/MainTurret, sources - ["A3_Static_F"]
			{
				magazines[] = {"500Rnd_127x99_mag_Tracer_Yellow", "500Rnd_127x99_mag_Tracer_Yellow", "200Rnd_40mm_G_belt"};
			};
		};
    };
    class AA_01_base_F: StaticMGWeapon //inherits 12 parameters from bin\config.bin/CfgVehicles/StaticMGWeapon, sources - ["A3_Static_F_AA_01"]
	{
		features = "Randomization: No						<br />Camo selections: 1 - the whole weapon with pod						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: Just the weapon						<br />Slingload: No						<br />Cargo proxy indexes: None";
		author = "Bohemia Interactive";
		mapSize = 2.29;
		class SpeechVariants //sources - ["A3_Static_F_AA_01"]
		{
			class Default //sources - ["A3_Static_F_AA_01"]
			{
				speechSingular[] = {"veh_static_AA_s"};
				speechPlural[] = {"veh_static_AA_p"};
			};
		};
		textSingular = "static AA";
		textPlural = "static AAs";
		nameSound = "veh_static_AA_s";
		_generalMacro = "AA_01_base_F";
		scope = 0;
		displayName = "Static Titan Launcher (AA) [NATO]";
		class Armory //sources - ["A3_Static_F_AA_01"]
		{
			description = "The Mk30 HMG is a static machine gun used by infantry and support. Several projects were launched to replace the Browning M2, but each resulted in them being shelved for various reasons. The Mk30 made it through. Compared to the M2, it's lighter and more portable with better accuracy, utilizing new materials, electronic targeting help and a new tripod, trading portability for rate of fire. Based on the previous concept of the XM307/XM312, the Mk30 is chambered for .50 BMG cartridges with a rate of fire of 350 rpm and effective range up to 2000 meters. Mk30 also exists in an automatic/remotely controlled variant which is labeled Mk30A.";
		};
		model = "\A3\Static_F_Gamma\AA_01\AA_01.p3d";
		editorSubcategory = "EdSubcat_Turrets";
		picture = "\A3\Static_F_Gamma\data\UI\gear_StaticTurret_AA_CA.paa";
		UiPicture = "\A3\Static_F_Gamma\data\UI\gear_StaticTurret_AA_CA.paa";
		icon = "\A3\Static_F_Gamma\data\UI\map_StaticTurret_AA_CA.paa";
		threat[] = {0.3, 0.3, 1};
		cost = 150000;
		class Damage //sources - ["A3_Static_F_AA_01"]
		{
			tex[] = {};
			mat[] = {"a3\static_f_gamma\data\staticturret_01.rvmat", "a3\static_f_gamma\data\staticturret_01_damage.rvmat", "a3\static_f_gamma\data\staticturret_01_destruct.rvmat", "a3\static_f_gamma\data\staticturret_02.rvmat", "a3\static_f_gamma\data\staticturret_02_damage.rvmat", "a3\static_f_gamma\data\staticturret_02_destruct.rvmat", "a3\weapons_f_beta\launchers\titan\data\titan_launcher.rvmat", "a3\weapons_f_beta\launchers\titan\data\titan_launcher_damage.rvmat", "a3\weapons_f_beta\launchers\titan\data\titan_launcher_destruct.rvmat", "a3\weapons_f_beta\launchers\titan\data\titan_ltube.rvmat", "a3\weapons_f_beta\launchers\titan\data\titan_ltube_damage.rvmat", "a3\weapons_f_beta\launchers\titan\data\titan_ltube_destruct.rvmat"};
		};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/StaticMGWeapon/Turrets, sources - ["A3_Static_F_AA_01"]
		{
			class MainTurret: MainTurret //inherits 1 parameters from bin\config.bin/CfgVehicles/StaticMGWeapon/Turrets/MainTurret, sources - ["A3_Static_F_AA_01"]
			{
				optics = 1;
				turretInfoType = "RscOptics_titan";
				gunnerOpticsModel = "\A3\Weapons_F_Beta\acc\reticle_titan.p3d";
				minElev = -20;
				weapons[] = {"missiles_titan_static"};
				magazines[] = {"1Rnd_GAA_missiles", "1Rnd_GAA_missiles", "1Rnd_GAA_missiles", "1Rnd_GAA_missiles"};
				gunnerAction = "gunner_staticlauncher";
				gunnergetInAction = "";
				gunnergetOutAction = "";
				displayName = "";
				class ViewOptics: ViewOptics //inherits 15 parameters from bin\config.bin/CfgVehicles/StaticWeapon/Turrets/MainTurret/ViewOptics, sources - ["A3_Static_F_AA_01"]
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.08333;
					minFov = 0.04167;
					maxFov = 0.08333;
					visionMode[] = {"Normal", "Ti"};
					thermalMode[] = {0, 1};
				};
				gunnerRightHandAnimName = "OtocHlaven_shake";
				gunnerLeftHandAnimName = "OtocHlaven_shake";
				gunBeg = "Usti hlavne";
				gunEnd = "Konec hlavne";
				memoryPointGunnerOptics = "look";
				ejectDeadGunner = 1;
			};
		};
		class AnimationSources //sources - ["A3_Static_F_AA_01"]
		{
			class autonomous_unhide //sources - ["A3_Static_F_AA_01"]
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class muzzle_source //sources - ["A3_Static_F_AA_01"]
			{
				source = "reload";
				weapon = "missiles_titan";
			};
			class muzzle_source_rot //sources - ["A3_Static_F_AA_01"]
			{
				source = "ammorandom";
				weapon = "missiles_titan";
			};
			class ReloadAnim //sources - ["A3_Static_F_AA_01"]
			{
				source = "reload";
				weapon = "missiles_titan";
			};
			class ReloadMagazine //sources - ["A3_Static_F_AA_01"]
			{
				source = "reloadmagazine";
				weapon = "missiles_titan";
			};
			class Revolving //sources - ["A3_Static_F_AA_01"]
			{
				source = "revolving";
				weapon = "missiles_titan";
			};
		};
		soundGetOut[] = {"A3\sounds_f\dummysound", 0.001, 1, 5};
		soundGetIn[] = {"A3\sounds_f\dummysound", 0.000316228, 1, 5};
		armorStructural = 10;
		class assembleInfo //sources - ["A3_Static_F_AA_01"]
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {};
			displayName = "";
		};
		hiddenSelections[] = {"camo_launcher", "camo_tube"};
	};
	class B_static_AA_F: AA_01_base_F //inherits 26 parameters from bin\config.bin/CfgVehicles/AA_01_base_F, sources - ["A3_Static_F_AA_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F_AA_01"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"mainturret_destructx", 0}, {"mainturret_destructy", 0}, {"mainturret_destructz", 0}, {"maingun_destructx", 0}, {"maingun_destructy", 0}, {"maingun_destructz", 0}, {"magazine_destruct", 0}, {"ammo_belt_destruct", 0}, {"bolt_destruct", 0}, {"charging_handle_destruct", 0}, {"damagehidevez_destruct", 0}, {"damagehidehlaven_destruct", 0}, {"damagehiderecoil_destruct", 0}, {"turret_shake", 0}, {"turret_shake_aside", 0}, {"magazine_hide", 0}, {"ammo_belt_hide", 0}, {"muzzleflash", 0}, {"addautonomous_unhide", 0}, {"bullet001_reload_hide", 0}, {"bullet002_reload_hide", 0}, {"bullet003_reload_hide", 0}, {"bullet004_reload_hide", 0}, {"bullet005_reload_hide", 0}, {"bullet006_reload_hide", 0}, {"bullet007_reload_hide", 0}, {"bullet008_reload_hide", 0}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.978;
			verticalOffsetWorld = 0.003;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_static_AA_F.jpg";
		_generalMacro = "B_static_AA_F";
		scope = 2;
		displayname = "Static Titan Launcher (AA) [NATO]";
		side = 1;
		faction = "BLU_F";
		crew = "B_soldier_f";
		hiddenSelectionsTextures[] = {"\a3\weapons_f_beta\launchers\titan\data\launcher_co.paa", "\a3\weapons_f_beta\launchers\titan\data\tubel_co.paa"};
		class assembleInfo: assembleInfo //inherits 5 parameters from bin\config.bin/CfgVehicles/AA_01_base_F/assembleInfo, sources - ["A3_Static_F_AA_01"]
		{
			dissasembleTo[] = {"B_AA_01_weapon_F", "B_HMG_01_support_F"};
		};
	};
	class O_static_AA_F: AA_01_base_F //inherits 26 parameters from bin\config.bin/CfgVehicles/AA_01_base_F, sources - ["A3_Static_F_AA_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F_AA_01"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"mainturret_destructx", 0}, {"mainturret_destructy", 0}, {"mainturret_destructz", 0}, {"maingun_destructx", 0}, {"maingun_destructy", 0}, {"maingun_destructz", 0}, {"magazine_destruct", 0}, {"ammo_belt_destruct", 0}, {"bolt_destruct", 0}, {"charging_handle_destruct", 0}, {"damagehidevez_destruct", 0}, {"damagehidehlaven_destruct", 0}, {"damagehiderecoil_destruct", 0}, {"turret_shake", 0}, {"turret_shake_aside", 0}, {"magazine_hide", 0}, {"ammo_belt_hide", 0}, {"muzzleflash", 0}, {"addautonomous_unhide", 0}, {"bullet001_reload_hide", 0}, {"bullet002_reload_hide", 0}, {"bullet003_reload_hide", 0}, {"bullet004_reload_hide", 0}, {"bullet005_reload_hide", 0}, {"bullet006_reload_hide", 0}, {"bullet007_reload_hide", 0}, {"bullet008_reload_hide", 0}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.978;
			verticalOffsetWorld = 0.003;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_static_AA_F.jpg";
		_generalMacro = "O_static_AA_F";
		scope = 2;
		displayname = "Static Titan Launcher (AA) [CSAT]";
		side = 0;
		faction = "OPF_F";
		crew = "O_soldier_f";
		hiddenSelectionsTextures[] = {"\a3\weapons_f_beta\launchers\titan\data\launcher_OPFOR_co.paa", "\a3\weapons_f_beta\launchers\titan\data\tubel_OPFOR_co.paa"};
		class assembleInfo: assembleInfo //inherits 5 parameters from bin\config.bin/CfgVehicles/AA_01_base_F/assembleInfo, sources - ["A3_Static_F_AA_01"]
		{
			dissasembleTo[] = {"O_AA_01_weapon_F", "O_HMG_01_support_F"};
		};
	};
	class I_static_AA_F: AA_01_base_F //inherits 26 parameters from bin\config.bin/CfgVehicles/AA_01_base_F, sources - ["A3_Static_F_AA_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F_AA_01"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"mainturret_destructx", 0}, {"mainturret_destructy", 0}, {"mainturret_destructz", 0}, {"maingun_destructx", 0}, {"maingun_destructy", 0}, {"maingun_destructz", 0}, {"magazine_destruct", 0}, {"ammo_belt_destruct", 0}, {"bolt_destruct", 0}, {"charging_handle_destruct", 0}, {"damagehidevez_destruct", 0}, {"damagehidehlaven_destruct", 0}, {"damagehiderecoil_destruct", 0}, {"turret_shake", 0}, {"turret_shake_aside", 0}, {"magazine_hide", 0}, {"ammo_belt_hide", 0}, {"muzzleflash", 0}, {"addautonomous_unhide", 0}, {"bullet001_reload_hide", 0}, {"bullet002_reload_hide", 0}, {"bullet003_reload_hide", 0}, {"bullet004_reload_hide", 0}, {"bullet005_reload_hide", 0}, {"bullet006_reload_hide", 0}, {"bullet007_reload_hide", 0}, {"bullet008_reload_hide", 0}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.978;
			verticalOffsetWorld = 0.003;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_static_AA_F.jpg";
		_generalMacro = "I_static_AA_F";
		scope = 2;
		displayname = "Static Titan Launcher (AA) [AAF]";
		side = 2;
		faction = "IND_F";
		crew = "I_soldier_F";
		hiddenSelectionsTextures[] = {"\a3\weapons_f_beta\launchers\titan\data\launcher_INDP_co.paa", "\a3\weapons_f_beta\launchers\titan\data\tubel_INDP_co.paa"};
		class assembleInfo: assembleInfo //inherits 5 parameters from bin\config.bin/CfgVehicles/AA_01_base_F/assembleInfo, sources - ["A3_Static_F_AA_01"]
		{
			dissasembleTo[] = {"I_AA_01_weapon_F", "I_HMG_01_support_F"};
		};
	};
	class AT_01_base_F: StaticMGWeapon //inherits 12 parameters from bin\config.bin/CfgVehicles/StaticMGWeapon, sources - ["A3_Static_F_AT_01"]
	{
		author = "Bohemia Interactive";
		mapSize = 2.25;
		class SpeechVariants //sources - ["A3_Static_F_AT_01"]
		{
			class Default //sources - ["A3_Static_F_AT_01"]
			{
				speechSingular[] = {"veh_static_AT_s"};
				speechPlural[] = {"veh_static_AT_p"};
			};
		};
		textSingular = "static AT";
		textPlural = "static ATs";
		nameSound = "veh_static_AT_s";
		_generalMacro = "AT_01_base_F";
		features = "Randomization: No						<br />Camo selections: 1 - the whole weapon with pod						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: Just the weapon						<br />Slingload: No						<br />Cargo proxy indexes: None";
		scope = 0;
		displayName = "Static Titan Launcher (AT) [NATO]";
		class Armory //sources - ["A3_Static_F_AT_01"]
		{
			description = "The Mk30 HMG is a static machine gun used by infantry and support. Several projects were launched to replace the Browning M2, but each resulted in them being shelved for various reasons. The Mk30 made it through. Compared to the M2, it's lighter and more portable with better accuracy, utilizing new materials, electronic targeting help and a new tripod, trading portability for rate of fire. Based on the previous concept of the XM307/XM312, the Mk30 is chambered for .50 BMG cartridges with a rate of fire of 350 rpm and effective range up to 2000 meters. Mk30 also exists in an automatic/remotely controlled variant which is labeled Mk30A.";
		};
		model = "\A3\Static_F_Gamma\AT_01\AT_01.p3d";
		editorSubcategory = "EdSubcat_Turrets";
		picture = "\A3\Static_F_Gamma\data\UI\gear_StaticTurret_AT_CA.paa";
		UiPicture = "\A3\Static_F_Gamma\data\UI\gear_StaticTurret_AT_CA.paa";
		icon = "\A3\Static_F_Gamma\data\UI\map_StaticTurret_AT_CA.paa";
		threat[] = {0.3, 1, 0.3};
		cost = 150000;
		class Damage //sources - ["A3_Static_F_AT_01"]
		{
			tex[] = {};
			mat[] = {"a3\static_f_gamma\data\staticturret_01.rvmat", "a3\static_f_gamma\data\staticturret_01_damage.rvmat", "a3\static_f_gamma\data\staticturret_01_destruct.rvmat", "a3\static_f_gamma\data\staticturret_02.rvmat", "a3\static_f_gamma\data\staticturret_02_damage.rvmat", "a3\static_f_gamma\data\staticturret_02_destruct.rvmat", "a3\weapons_f_beta\launchers\titan\data\titan_launcher.rvmat", "a3\weapons_f_beta\launchers\titan\data\titan_launcher_damage.rvmat", "a3\weapons_f_beta\launchers\titan\data\titan_launcher_destruct.rvmat", "a3\weapons_f_beta\launchers\titan\data\titan_mtube.rvmat", "a3\weapons_f_beta\launchers\titan\data\titan_mtube_damage.rvmat", "a3\weapons_f_beta\launchers\titan\data\titan_mtube_destruct.rvmat"};
		};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/StaticMGWeapon/Turrets, sources - ["A3_Static_F_AT_01"]
		{
			class MainTurret: MainTurret //inherits 1 parameters from bin\config.bin/CfgVehicles/StaticMGWeapon/Turrets/MainTurret, sources - ["A3_Static_F_AT_01"]
			{
				optics = 1;
				turretInfoType = "RscOptics_titan";
				gunnerOpticsModel = "\A3\Weapons_F_Beta\acc\reticle_titan.p3d";
				minElev = -20;
				weapons[] = {"missiles_titan_static"};
				magazines[] = {"1Rnd_GAT_missiles", "1Rnd_GAT_missiles", "1Rnd_GAT_missiles", "1Rnd_GAT_missiles"};
				gunnerAction = "gunner_staticlauncher";
				gunnergetInAction = "";
				gunnergetOutAction = "";
				displayName = "";
				class ViewOptics: ViewOptics //inherits 15 parameters from bin\config.bin/CfgVehicles/StaticWeapon/Turrets/MainTurret/ViewOptics, sources - ["A3_Static_F_AT_01"]
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.08333;
					minFov = 0.04167;
					maxFov = 0.08333;
					visionMode[] = {"Normal", "Ti"};
					thermalMode[] = {0, 1};
				};
				gunnerRightHandAnimName = "OtocHlaven_shake";
				gunnerLeftHandAnimName = "OtocHlaven_shake";
				gunBeg = "Usti hlavne";
				gunEnd = "Konec hlavne";
				memoryPointGunnerOptics = "look";
				ejectDeadGunner = 1;
			};
		};
		class AnimationSources //sources - ["A3_Static_F_AT_01"]
		{
			class autonomous_unhide //sources - ["A3_Static_F_AT_01"]
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class muzzle_source //sources - ["A3_Static_F_AT_01"]
			{
				source = "reload";
				weapon = "missiles_titan";
			};
			class muzzle_source_rot //sources - ["A3_Static_F_AT_01"]
			{
				source = "ammorandom";
				weapon = "missiles_titan";
			};
			class ReloadAnim //sources - ["A3_Static_F_AT_01"]
			{
				source = "reload";
				weapon = "missiles_titan";
			};
			class ReloadMagazine //sources - ["A3_Static_F_AT_01"]
			{
				source = "reloadmagazine";
				weapon = "missiles_titan";
			};
			class Revolving //sources - ["A3_Static_F_AT_01"]
			{
				source = "revolving";
				weapon = "missiles_titan";
			};
		};
		soundGetOut[] = {"A3\sounds_f\dummysound", 0.001, 1, 5};
		soundGetIn[] = {"A3\sounds_f\dummysound", 0.000316228, 1, 5};
		armorStructural = 10;
		class assembleInfo //sources - ["A3_Static_F_AT_01"]
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {};
			displayName = "";
		};
		hiddenSelections[] = {"camo_launcher", "camo_tube"};
	};
	class B_static_AT_F: AT_01_base_F //inherits 26 parameters from bin\config.bin/CfgVehicles/AT_01_base_F, sources - ["A3_Static_F_AT_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F_AT_01"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"mainturret_destructx", 0}, {"mainturret_destructy", 0}, {"mainturret_destructz", 0}, {"maingun_destructx", 0}, {"maingun_destructy", 0}, {"maingun_destructz", 0}, {"magazine_destruct", 0}, {"ammo_belt_destruct", 0}, {"bolt_destruct", 0}, {"charging_handle_destruct", 0}, {"damagehidevez_destruct", 0}, {"damagehidehlaven_destruct", 0}, {"damagehiderecoil_destruct", 0}, {"turret_shake", 0}, {"turret_shake_aside", 0}, {"magazine_hide", 0}, {"ammo_belt_hide", 0}, {"muzzleflash", 0}, {"addautonomous_unhide", 0}, {"bullet001_reload_hide", 0}, {"bullet002_reload_hide", 0}, {"bullet003_reload_hide", 0}, {"bullet004_reload_hide", 0}, {"bullet005_reload_hide", 0}, {"bullet006_reload_hide", 0}, {"bullet007_reload_hide", 0}, {"bullet008_reload_hide", 0}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.977;
			verticalOffsetWorld = 0.003;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_static_AT_F.jpg";
		_generalMacro = "B_static_AT_F";
		scope = 2;
		displayname = "Static Titan Launcher (AT) [NATO]";
		side = 1;
		faction = "BLU_F";
		crew = "B_soldier_f";
		hiddenSelectionsTextures[] = {"\a3\weapons_f_beta\launchers\titan\data\launcher_co.paa", "\a3\weapons_f_beta\launchers\titan\data\tubem_co.paa"};
		class assembleInfo: assembleInfo //inherits 5 parameters from bin\config.bin/CfgVehicles/AT_01_base_F/assembleInfo, sources - ["A3_Static_F_AT_01"]
		{
			dissasembleTo[] = {"B_AT_01_weapon_F", "B_HMG_01_support_F"};
		};
	};
	class O_static_AT_F: AT_01_base_F //inherits 26 parameters from bin\config.bin/CfgVehicles/AT_01_base_F, sources - ["A3_Static_F_AT_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F_AT_01"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"mainturret_destructx", 0}, {"mainturret_destructy", 0}, {"mainturret_destructz", 0}, {"maingun_destructx", 0}, {"maingun_destructy", 0}, {"maingun_destructz", 0}, {"magazine_destruct", 0}, {"ammo_belt_destruct", 0}, {"bolt_destruct", 0}, {"charging_handle_destruct", 0}, {"damagehidevez_destruct", 0}, {"damagehidehlaven_destruct", 0}, {"damagehiderecoil_destruct", 0}, {"turret_shake", 0}, {"turret_shake_aside", 0}, {"magazine_hide", 0}, {"ammo_belt_hide", 0}, {"muzzleflash", 0}, {"addautonomous_unhide", 0}, {"bullet001_reload_hide", 0}, {"bullet002_reload_hide", 0}, {"bullet003_reload_hide", 0}, {"bullet004_reload_hide", 0}, {"bullet005_reload_hide", 0}, {"bullet006_reload_hide", 0}, {"bullet007_reload_hide", 0}, {"bullet008_reload_hide", 0}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.977;
			verticalOffsetWorld = 0.003;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_static_AT_F.jpg";
		_generalMacro = "O_static_AT_F";
		scope = 2;
		displayname = "Static Titan Launcher (AT) [CSAT]";
		side = 0;
		faction = "OPF_F";
		crew = "O_soldier_f";
		hiddenSelectionsTextures[] = {"\a3\weapons_f_beta\launchers\titan\data\launcher_OPFOR_co.paa", "\a3\weapons_f_beta\launchers\titan\data\tubem_OPFOR_co.paa"};
		class assembleInfo: assembleInfo //inherits 5 parameters from bin\config.bin/CfgVehicles/AT_01_base_F/assembleInfo, sources - ["A3_Static_F_AT_01"]
		{
			dissasembleTo[] = {"O_AT_01_weapon_F", "O_HMG_01_support_F"};
		};
	};
	class I_static_AT_F: AT_01_base_F //inherits 26 parameters from bin\config.bin/CfgVehicles/AT_01_base_F, sources - ["A3_Static_F_AT_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F_AT_01"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"mainturret_destructx", 0}, {"mainturret_destructy", 0}, {"mainturret_destructz", 0}, {"maingun_destructx", 0}, {"maingun_destructy", 0}, {"maingun_destructz", 0}, {"magazine_destruct", 0}, {"ammo_belt_destruct", 0}, {"bolt_destruct", 0}, {"charging_handle_destruct", 0}, {"damagehidevez_destruct", 0}, {"damagehidehlaven_destruct", 0}, {"damagehiderecoil_destruct", 0}, {"turret_shake", 0}, {"turret_shake_aside", 0}, {"magazine_hide", 0}, {"ammo_belt_hide", 0}, {"muzzleflash", 0}, {"addautonomous_unhide", 0}, {"bullet001_reload_hide", 0}, {"bullet002_reload_hide", 0}, {"bullet003_reload_hide", 0}, {"bullet004_reload_hide", 0}, {"bullet005_reload_hide", 0}, {"bullet006_reload_hide", 0}, {"bullet007_reload_hide", 0}, {"bullet008_reload_hide", 0}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.977;
			verticalOffsetWorld = 0.003;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_static_AT_F.jpg";
		_generalMacro = "I_static_AT_F";
		scope = 2;
		displayname = "Static Titan Launcher (AT) [AAF]";
		side = 2;
		faction = "IND_F";
		crew = "I_soldier_F";
		hiddenSelectionsTextures[] = {"\a3\weapons_f_beta\launchers\titan\data\launcher_INDP_co.paa", "\a3\weapons_f_beta\launchers\titan\data\tubem_INDP_co.paa"};
		class assembleInfo: assembleInfo //inherits 5 parameters from bin\config.bin/CfgVehicles/AT_01_base_F/assembleInfo, sources - ["A3_Static_F_AT_01"]
		{
			dissasembleTo[] = {"I_AT_01_weapon_F", "I_HMG_01_support_F"};
		};
	};
	class AAA_System_01_base_F: StaticMGWeapon //inherits 12 parameters from bin\config.bin/CfgVehicles/StaticMGWeapon, sources - ["A3_Static_F_Jets_AAA_System_01"]
	{
		author = "Bravo Zero One Studios";
		scope = 0;
		scopeCurator = 0;
		vehicleClass = "Autonomous";
		picture = "\A3\Static_F_Jets\AAA_system_01\Data\UI\AAA_system_01_picture_CA.paa";
		uiPicture = "\A3\Static_F_Jets\AAA_system_01\Data\UI\AAA_system_01_picture_CA.paa";
		icon = "\A3\Static_F_Jets\AAA_system_01\Data\UI\AAA_system_01_icon_CA.paa";
		displayName = "Praetorian 1C";
		DLC = "Jets";
		hasDriver = 0;
		hasGunner = 1;
		isUav = 1;
		uavCameraGunnerPos = "pos_gunner_view";
		uavCameraGunnerDir = "pos_gunner_view_dir";
		memoryPointGun = "pos_barrel_end";
		threat[] = {0.5, 0.3, 1};
		cost = 150000;
		accuracy = 0.12;
		editorPreview = "\A3\EditorPreviews_F_Jets\Data\Cfgvehicles\B_AAA_system_01_F.jpg";
		unitInfoType = "RscUnitInfoTank";
		model = "\A3\Static_F_Jets\AAA_system_01\AAA_system_01_F.p3d";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"a3\static_f_jets\aaa_system_01\data\aaa_system_01_co.paa", "a3\static_f_jets\aaa_system_01\data\aaa_system_02_co.paa"};
		extCameraPosition[] = {0, 1.5, -10};
		canFloat = 0;
		class TextureSources //sources - ["A3_Static_F_Jets_AAA_System_01"]
		{
			class LightGrey //sources - ["A3_Static_F_Jets_AAA_System_01"]
			{
				displayName = "Light Grey";
				author = "Bravo Zero One Studios";
				textures[] = {"a3\static_f_jets\aaa_system_01\data\aaa_system_01_co.paa", "a3\static_f_jets\aaa_system_01\data\aaa_system_02_co.paa"};
				factions[] = {"BLU_F"};
			};
			class Sand //sources - ["A3_Static_F_Jets_AAA_System_01"]
			{
				displayName = "Sand";
				author = "Bravo Zero One Studios";
				textures[] = {"a3\static_f_jets\aaa_system_01\data\aaa_system_01_TAN_co.paa", "a3\static_f_jets\aaa_system_01\data\aaa_system_02_TAN_co.paa"};
				factions[] = {"BLU_F"};
			};
			class Green //sources - ["A3_Static_F_Jets_AAA_System_01"]
			{
				displayName = "Green";
				author = "Bravo Zero One Studios";
				textures[] = {"a3\static_f_jets\aaa_system_01\data\aaa_system_01_olive_co.paa", "a3\static_f_jets\aaa_system_01\data\aaa_system_02_olive_co.paa"};
				factions[] = {"BLU_F"};
			};
		};
		animationList[] = {};
		textureList[] = {"LightGrey", 1, "Sand", 0, "Green", 0};
		enableGPS = 1;
		radarType = 4;
		gunnerCanSee = "1+2+4+16";
		commanderCanSee = "1+2+4+16";
		driverCanSee = "1+2+4+16";
		radarTarget = 1;
		radarTargetSize = 0.9;
		visualTarget = 1;
		visualTargetSize = 1.2;
		irTargetSize = 0;
		reportRemoteTargets = 1;
		receiveRemoteTargets = 1;
		lockDetectionSystem = 0;
		incomingMissileDetectionSystem = 16;
		class Components: Components //inherits 1 parameters from bin\config.bin/CfgVehicles/LandVehicle/Components, sources - ["A3_Static_F_Jets_AAA_System_01"]
		{
			class SensorsManagerComponent //sources - ["A3_Static_F_Jets_AAA_System_01"]
			{
				class Components //sources - ["A3_Static_F_Jets_AAA_System_01"]
				{
					class IRSensorComponent: SensorTemplateIR //inherits 8 parameters from bin\config.bin/SensorTemplateIR, sources - ["A3_Static_F_Jets_AAA_System_01"]
					{
						class AirTarget //sources - ["A3_Static_F_Jets_AAA_System_01"]
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget //sources - ["A3_Static_F_Jets_AAA_System_01"]
						{
							minRange = 500;
							maxRange = 3500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						typeRecognitionDistance = 3500;
						maxTrackableSpeed = 600;
						angleRangeHorizontal = 60;
						angleRangeVertical = 40;
						animDirection = "mainGun";
						aimDown = -0.5;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar //inherits 11 parameters from bin\config.bin/SensorTemplateActiveRadar, sources - ["A3_Static_F_Jets_AAA_System_01"]
					{
						class AirTarget //sources - ["A3_Static_F_Jets_AAA_System_01"]
						{
							minRange = 10000;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget //sources - ["A3_Static_F_Jets_AAA_System_01"]
						{
							minRange = 7000;
							maxRange = 7000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 10000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 100;
						aimDown = -45;
						minSpeedThreshold = 10;
						maxSpeedThreshold = 15;
						groundNoiseDistanceCoef = 0.1;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink //inherits 4 parameters from bin\config.bin/SensorTemplateDataLink, sources - []
					{
					};
				};
			};
		};
		animated = 1;
		class AnimationSources //sources - ["A3_Static_F_Jets_AAA_System_01"]
		{
			class Revolving //sources - ["A3_Static_F_Jets_AAA_System_01"]
			{
				source = "revolving";
				weapon = "weapon_Cannon_Phalanx";
			};
			class muzzle_rot_20mm: Revolving //inherits 2 parameters from bin\config.bin/CfgVehicles/AAA_System_01_base_F/AnimationSources/Revolving, sources - ["A3_Static_F_Jets_AAA_System_01"]
			{
				source = "ammorandom";
			};
		};
		armor = 80;
		armorStructural = 2;
		damageResistance = 0.004;
		damageEffect = "AirDestructionEffects";
		class HitPoints: HitPoints //inherits 7 parameters from bin\config.bin/CfgVehicles/StaticWeapon/HitPoints, sources - ["A3_Static_F_Jets_AAA_System_01"]
		{
			class HitHull //sources - ["A3_Static_F_Jets_AAA_System_01"]
			{
				armor = 3;
				name = "hit_hull";
				visual = "zbytek";
				radius = 0.25;
				minimalHit = 0.05;
				explosionShielding = 0.2;
				depends = "Total";
				passThrough = 0.1;
				material = 51;
			};
			class Hitoptics: HitHull //inherits 9 parameters from bin\config.bin/CfgVehicles/AAA_System_01_base_F/HitPoints/HitHull, sources - ["A3_Static_F_Jets_AAA_System_01"]
			{
				armor = 0.2;
				name = "hit_optics";
				visual = "optics";
				convexComponent = "optics";
				radius = 0.06;
				minimalHit = 0.01;
				explosionShielding = 0.1;
			};
			class HitTurret: HitHull //inherits 9 parameters from bin\config.bin/CfgVehicles/AAA_System_01_base_F/HitPoints/HitHull, sources - ["A3_Static_F_Jets_AAA_System_01"]
			{
				armor = 3;
				name = "hit_turret";
				convexComponent = "turret";
				visual = "turret";
				passThrough = 0.1;
				minimalHit = 0.1;
				explosionShielding = 0.2;
				class DestructionEffects //sources - ["A3_Static_F_Jets_AAA_System_01"]
				{
					class light1 //sources - ["A3_Static_F_Jets_AAA_System_01"]
					{
						simulation = "light";
						type = "ObjectDestructionLight";
						position = "turretdestruct_pos";
						intensity = 0.001;
						interval = 1;
						lifeTime = 3;
					};
					class smoke1 //sources - ["A3_Static_F_Jets_AAA_System_01"]
					{
						simulation = "particles";
						type = "ObjectDestructionSmoke";
						position = "turretdestruct_pos";
						intensity = 0.15;
						interval = 1;
						lifeTime = 3.5;
					};
					class fire1 //sources - ["A3_Static_F_Jets_AAA_System_01"]
					{
						simulation = "particles";
						type = "ObjectDestructionFire1";
						position = "turretdestruct_pos";
						intensity = 0.15;
						interval = 1;
						lifeTime = 3;
					};
					class sparks1 //sources - ["A3_Static_F_Jets_AAA_System_01"]
					{
						simulation = "particles";
						type = "ObjectDestructionSparks";
						position = "turretdestruct_pos";
						intensity = 0;
						interval = 1;
						lifeTime = 0;
					};
					class sound //sources - ["A3_Static_F_Jets_AAA_System_01"]
					{
						simulation = "sound";
						position = "turretdestruct_pos";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
						type = "Fire";
					};
				};
			};
			class Hitgun: HitTurret //inherits 8 parameters from bin\config.bin/CfgVehicles/AAA_System_01_base_F/HitPoints/HitTurret, sources - ["A3_Static_F_Jets_AAA_System_01"]
			{
				name = "hit_gun";
				visual = "gun";
				convexComponent = "gun";
				armor = 2;
				passThrough = 0.1;
				explosionShielding = 1;
				class DestructionEffects: DestructionEffects //inherits 5 parameters from bin\config.bin/CfgVehicles/AAA_System_01_base_F/HitPoints/HitTurret/DestructionEffects, sources - ["A3_Static_F_Jets_AAA_System_01"]
				{
					class light1: light1 //inherits 6 parameters from bin\config.bin/CfgVehicles/AAA_System_01_base_F/HitPoints/HitTurret/DestructionEffects/light1, sources - ["A3_Static_F_Jets_AAA_System_01"]
					{
						position = "gundestruct_pos";
					};
					class smoke1: smoke1 //inherits 6 parameters from bin\config.bin/CfgVehicles/AAA_System_01_base_F/HitPoints/HitTurret/DestructionEffects/smoke1, sources - ["A3_Static_F_Jets_AAA_System_01"]
					{
						position = "gundestruct_pos";
					};
					class fire1: fire1 //inherits 6 parameters from bin\config.bin/CfgVehicles/AAA_System_01_base_F/HitPoints/HitTurret/DestructionEffects/fire1, sources - ["A3_Static_F_Jets_AAA_System_01"]
					{
						position = "gundestruct_pos";
					};
					class sparks1: sparks1 //inherits 6 parameters from bin\config.bin/CfgVehicles/AAA_System_01_base_F/HitPoints/HitTurret/DestructionEffects/sparks1, sources - ["A3_Static_F_Jets_AAA_System_01"]
					{
						position = "gundestruct_pos";
					};
					class sound: sound //inherits 6 parameters from bin\config.bin/CfgVehicles/AAA_System_01_base_F/HitPoints/HitTurret/DestructionEffects/sound, sources - ["A3_Static_F_Jets_AAA_System_01"]
					{
						position = "gundestruct_pos";
					};
				};
			};
		};
		class Damage //sources - ["A3_Static_F_Jets_AAA_System_01"]
		{
			tex[] = {};
			mat[] = {"a3\static_f_jets\aaa_system_01\data\AAA_system_01.rvmat", "a3\static_f_jets\aaa_system_01\data\AAA_system_01_damage.rvmat", "a3\static_f_jets\aaa_system_01\data\AAA_system_01_destruct.rvmat", "a3\static_f_jets\aaa_system_01\data\AAA_system_02.rvmat", "a3\static_f_jets\aaa_system_01\data\AAA_system_02_damage.rvmat", "a3\static_f_jets\aaa_system_01\data\AAA_system_02_destruct.rvmat"};
		};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/StaticMGWeapon/Turrets, sources - ["A3_Static_F_Jets_AAA_System_01"]
		{
			class MainTurret: MainTurret //inherits 1 parameters from bin\config.bin/CfgVehicles/StaticMGWeapon/Turrets/MainTurret, sources - ["A3_Static_F_Jets_AAA_System_01"]
			{
				minelev = -25;
				maxelev = 85;
				minturn = -180;
				maxturn = 180;
				initElev = 15;
				initTurn = 0;
				maxHorizontalRotSpeed = 2.7;
				maxVerticalRotSpeed = 2.7;
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best", 1.41254, 1, 40};
				hasGunner = 1;
				gunnerName = "Phalanx operator";
				primary = 1;
				primaryGunner = 1;
				startEngine = 0;
				enableManualFire = 1;
				turretinfotype = "RscOptics_APC_Tracked_01_gunner";
				optics = 1;
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
				class OpticsIn //sources - ["A3_Static_F_Jets_AAA_System_01"]
				{
					class Wide //sources - ["A3_Static_F_Jets_AAA_System_01"]
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal", "NVG", "Ti"};
						thermalMode[] = {0, 1};
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
					};
					class Medium: Wide //inherits 13 parameters from bin\config.bin/CfgVehicles/AAA_System_01_base_F/Turrets/MainTurret/OpticsIn/Wide, sources - ["A3_Static_F_Jets_AAA_System_01"]
					{
						opticsDisplayName = "M";
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_m_F";
					};
					class Narrow: Wide //inherits 13 parameters from bin\config.bin/CfgVehicles/AAA_System_01_base_F/Turrets/MainTurret/OpticsIn/Wide, sources - ["A3_Static_F_Jets_AAA_System_01"]
					{
						opticsDisplayName = "N";
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_n_F";
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
					};
				};
				forceHideGunner = 1;
				gunnerforceoptics = 1;
				gunnerOutForceOptics = 1;
				viewgunnerinExternal = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				castGunnerShadow = 0;
				gunneraction = "Disabled";
				gunnerinaction = "Disabled";
				showAllTargets = 2;
				body = "MainTurret";
				gun = "MainGun";
				animationSourceBody = "MainTurret";
				animationSourceGun = "MainGun";
				gunbeg = "pos_barrel_end";
				gunend = "pos_barrel";
				uavCameraGunnerPos = "pos_gunner_view";
				uavCameraGunnerDir = "pos_gunner_view_dir";
				memoryPointGunnerOptics = "pos_gunner_view";
				particlespos = "pos_fx";
				particlesdir = "pos_fx_dir";
				selectionFireAnim = "zasleh";
				gunnerlefthandanimname = "";
				gunnerrighthandanimname = "";
				weapons[] = {"weapon_Cannon_Phalanx"};
				magazines[] = {"magazine_Cannon_Phalanx_x1550", "magazine_Cannon_Phalanx_x1550"};
				class Components: Components //inherits 2 parameters from bin\config.bin/CfgVehicles/StaticWeapon/Turrets/MainTurret/Components, sources - ["A3_Static_F_Jets_AAA_System_01"]
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft //inherits 6 parameters from bin\config.bin/DefaultVehicleSystemsDisplayManagerLeft, sources - ["A3_Static_F_Jets_AAA_System_01"]
					{
						class Components //sources - ["A3_Static_F_Jets_AAA_System_01"]
						{
							class EmptyDisplay //sources - ["A3_Static_F_Jets_AAA_System_01"]
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay //sources - ["A3_Static_F_Jets_AAA_System_01"]
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};
							class UAVDisplay //sources - ["A3_Static_F_Jets_AAA_System_01"]
							{
								componentType = "UAVFeedDisplayComponent";
							};
							class SensorDisplay //sources - ["A3_Static_F_Jets_AAA_System_01"]
							{
								componentType = "SensorsDisplayComponent";
								range[] = {16000, 8000, 4000, 2000};
								resource = "RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight //inherits 6 parameters from bin\config.bin/DefaultVehicleSystemsDisplayManagerRight, sources - ["A3_Static_F_Jets_AAA_System_01"]
					{
						defaultDisplay = "SensorDisplay";
						class Components //sources - ["A3_Static_F_Jets_AAA_System_01"]
						{
							class EmptyDisplay //sources - ["A3_Static_F_Jets_AAA_System_01"]
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay //sources - ["A3_Static_F_Jets_AAA_System_01"]
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};
							class UAVDisplay //sources - ["A3_Static_F_Jets_AAA_System_01"]
							{
								componentType = "UAVFeedDisplayComponent";
							};
							class SensorDisplay //sources - ["A3_Static_F_Jets_AAA_System_01"]
							{
								componentType = "SensorsDisplayComponent";
								range[] = {16000, 8000, 4000, 2000};
								resource = "RscCustomInfoSensors";
							};
						};
					};
				};
			};
		};
		class AttributeValues //sources - ["A3_Static_F_Jets_AAA_System_01"]
		{
			RadarUsageAI = 1;
		};
	};
	class B_AAA_System_01_F: AAA_System_01_base_F //inherits 53 parameters from bin\config.bin/CfgVehicles/AAA_System_01_base_F, sources - ["A3_Static_F_Jets_AAA_System_01"]
	{
		class SimpleObject //sources - ["A3_Static_F_Jets_AAA_System_01"]
		{
			eden = 1;
			animate[] = {{"barrel_revolving", 1}, {"muzzleflashrot", 0}, {"mainturret", 0}, {"maingun", 0.26}, {"sightscorrection_horizontal", 0}, {"sightscorrectionv_vertical", 0.26}, {"damageturret", 0}, {"damagegun", 0}};
			hide[] = {"zasleh", "light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 2.533;
			verticalOffsetWorld = -0.028;
		};
		author = "Bravo Zero One Studios";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_UAV_AI";
		typicalCargo[] = {"B_UAV_AI"};
	};
	class SAM_System_01_base_F: StaticMGWeapon //inherits 12 parameters from bin\config.bin/CfgVehicles/StaticMGWeapon, sources - ["A3_Static_F_Jets_SAM_System_01"]
	{
		author = "$SAM_System_01_base_F";
		scope = 0;
		scopeCurator = 0;
		vehicleClass = "Autonomous";
		editorPreview = "\A3\EditorPreviews_F_Jets\Data\Cfgvehicles\B_SAM_system_01_F.jpg";
		picture = "\A3\Static_F_Jets\SAM_System_01\Data\UI\SAM_System_01_picture_CA.paa";
		uiPicture = "\A3\Static_F_Jets\SAM_System_01\Data\UI\SAM_System_01_picture_CA.paa";
		icon = "\A3\Static_F_Jets\SAM_System_01\Data\UI\SAM_System_01_icon_CA.paa";
		displayName = "Mk49 Spartan";
		DLC = "Jets";
		hasDriver = 0;
		hasGunner = 1;
		isUav = 1;
		uavCameraGunnerPos = "pos_gunner_view";
		uavCameraGunnerDir = "pos_gunner_view_dir";
		unitInfoType = "RscUnitInfoTank";
		model = "\A3\Static_F_Jets\SAM_system_01\SAM_system_01_F.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"A3\Static_F_Jets\SAM_System_01\Data\sam_system_01_co.paa"};
		threat[] = {0.5, 0.3, 1};
		cost = 150000;
		accuracy = 0.12;
		extCameraPosition[] = {0, 1.5, -10};
		canFloat = 0;
		class TextureSources //sources - ["A3_Static_F_Jets_SAM_System_01"]
		{
			class LightGrey //sources - ["A3_Static_F_Jets_SAM_System_01"]
			{
				displayName = "Light Grey";
				author = "Bravo Zero One Studios";
				textures[] = {"A3\Static_F_Jets\SAM_System_01\Data\sam_system_01_co.paa"};
				factions[] = {"BLU_F"};
			};
			class Sand //sources - ["A3_Static_F_Jets_SAM_System_01"]
			{
				displayName = "Sand";
				author = "Bravo Zero One Studios";
				textures[] = {"A3\Static_F_Jets\SAM_System_01\Data\SAM_system_01_TAN_co.paa"};
				factions[] = {"BLU_F"};
			};
			class Green //sources - ["A3_Static_F_Jets_SAM_System_01"]
			{
				displayName = "Green";
				author = "Bravo Zero One Studios";
				textures[] = {"A3\Static_F_Jets\SAM_System_01\Data\SAM_system_01_olive_co.paa"};
				factions[] = {"BLU_F"};
			};
		};
		animationList[] = {};
		textureList[] = {"LightGrey", 1, "Sand", 0, "Green", 0};
		enableGPS = 1;
		radarType = 4;
		gunnerCanSee = "1+2+4+16";
		commanderCanSee = "1+2+4+16";
		driverCanSee = "1+2+4+16";
		radarTarget = 1;
		radarTargetSize = 0.9;
		visualTarget = 1;
		visualTargetSize = 1.2;
		irTargetSize = 0;
		reportRemoteTargets = 1;
		receiveRemoteTargets = 1;
		lockDetectionSystem = 0;
		incomingMissileDetectionSystem = 16;
		class Components: Components //inherits 1 parameters from bin\config.bin/CfgVehicles/LandVehicle/Components, sources - ["A3_Static_F_Jets_SAM_System_01"]
		{
			class SensorsManagerComponent //sources - ["A3_Static_F_Jets_SAM_System_01"]
			{
				class Components //sources - ["A3_Static_F_Jets_SAM_System_01"]
				{
					class IRSensorComponent: SensorTemplateIR //inherits 8 parameters from bin\config.bin/SensorTemplateIR, sources - ["A3_Static_F_Jets_SAM_System_01"]
					{
						class AirTarget //sources - ["A3_Static_F_Jets_SAM_System_01"]
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget //sources - ["A3_Static_F_Jets_SAM_System_01"]
						{
							minRange = 500;
							maxRange = 3500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						typeRecognitionDistance = 3500;
						maxTrackableSpeed = 600;
						angleRangeHorizontal = 60;
						angleRangeVertical = 40;
						animDirection = "mainGun";
						aimDown = -0.5;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink //inherits 4 parameters from bin\config.bin/SensorTemplateDataLink, sources - []
					{
					};
				};
			};
		};
		animated = 1;
		class AnimationSources //sources - ["A3_Static_F_Jets_SAM_System_01"]
		{
			class Missiles_revolving //sources - ["A3_Static_F_Jets_SAM_System_01"]
			{
				source = "revolving";
				weapon = "weapon_rim116Launcher";
			};
		};
		armor = 80;
		armorStructural = 2;
		damageResistance = 0.004;
		damageEffect = "AirDestructionEffects";
		class Hitpoints: HitPoints //inherits 7 parameters from bin\config.bin/CfgVehicles/StaticWeapon/HitPoints, sources - ["A3_Static_F_Jets_SAM_System_01"]
		{
			class HitHull //sources - ["A3_Static_F_Jets_SAM_System_01"]
			{
				armor = 3;
				name = "hit_hull";
				visual = "zbytek";
				radius = 0.25;
				minimalHit = 0.05;
				explosionShielding = 1.5;
				depends = "Total";
				passThrough = 0.1;
				material = 51;
			};
			class HitAvionics: HitHull //inherits 9 parameters from bin\config.bin/CfgVehicles/SAM_System_01_base_F/Hitpoints/HitHull, sources - ["A3_Static_F_Jets_SAM_System_01"]
			{
				armor = 0.5;
				passThrough = 0.15;
				name = "hit_avionics";
				visual = "avionics";
				minimalHit = 0.01;
			};
			class HitTurret: HitHull //inherits 9 parameters from bin\config.bin/CfgVehicles/SAM_System_01_base_F/Hitpoints/HitHull, sources - ["A3_Static_F_Jets_SAM_System_01"]
			{
				armor = 3;
				name = "hit_turret";
				convexComponent = "turret";
				visual = "turret";
				passThrough = 0.1;
				minimalHit = 0.1;
				explosionShielding = 1.2;
				material = -1;
				class DestructionEffects //sources - ["A3_Static_F_Jets_SAM_System_01"]
				{
					class light1 //sources - ["A3_Static_F_Jets_SAM_System_01"]
					{
						simulation = "light";
						type = "ObjectDestructionLight";
						position = "turretdestruct_pos";
						intensity = 0.001;
						interval = 1;
						lifeTime = 3;
					};
					class smoke1 //sources - ["A3_Static_F_Jets_SAM_System_01"]
					{
						simulation = "particles";
						type = "ObjectDestructionSmoke";
						position = "turretdestruct_pos";
						intensity = 0.15;
						interval = 1;
						lifeTime = 3.5;
					};
					class fire1 //sources - ["A3_Static_F_Jets_SAM_System_01"]
					{
						simulation = "particles";
						type = "ObjectDestructionFire1";
						position = "turretdestruct_pos";
						intensity = 0.15;
						interval = 1;
						lifeTime = 3;
					};
					class sparks1 //sources - ["A3_Static_F_Jets_SAM_System_01"]
					{
						simulation = "particles";
						type = "ObjectDestructionSparks";
						position = "turretdestruct_pos";
						intensity = 0;
						interval = 1;
						lifeTime = 0;
					};
					class sound //sources - ["A3_Static_F_Jets_SAM_System_01"]
					{
						simulation = "sound";
						position = "turretdestruct_pos";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
						type = "Fire";
					};
				};
			};
			class HitGun: HitTurret //inherits 9 parameters from bin\config.bin/CfgVehicles/SAM_System_01_base_F/Hitpoints/HitTurret, sources - ["A3_Static_F_Jets_SAM_System_01"]
			{
				armor = 2;
				name = "hit_gun";
				visual = "gun";
				convexComponent = "gun";
				explosionShielding = 1.2;
				passThrough = 0.1;
				class DestructionEffects: DestructionEffects //inherits 5 parameters from bin\config.bin/CfgVehicles/SAM_System_01_base_F/Hitpoints/HitTurret/DestructionEffects, sources - ["A3_Static_F_Jets_SAM_System_01"]
				{
					class light1: light1 //inherits 6 parameters from bin\config.bin/CfgVehicles/SAM_System_01_base_F/Hitpoints/HitTurret/DestructionEffects/light1, sources - ["A3_Static_F_Jets_SAM_System_01"]
					{
						position = "gundestruct_pos";
					};
					class smoke1: smoke1 //inherits 6 parameters from bin\config.bin/CfgVehicles/SAM_System_01_base_F/Hitpoints/HitTurret/DestructionEffects/smoke1, sources - ["A3_Static_F_Jets_SAM_System_01"]
					{
						position = "gundestruct_pos";
					};
					class fire1: fire1 //inherits 6 parameters from bin\config.bin/CfgVehicles/SAM_System_01_base_F/Hitpoints/HitTurret/DestructionEffects/fire1, sources - ["A3_Static_F_Jets_SAM_System_01"]
					{
						position = "gundestruct_pos";
					};
					class sparks1: sparks1 //inherits 6 parameters from bin\config.bin/CfgVehicles/SAM_System_01_base_F/Hitpoints/HitTurret/DestructionEffects/sparks1, sources - ["A3_Static_F_Jets_SAM_System_01"]
					{
						position = "gundestruct_pos";
					};
					class sound: sound //inherits 6 parameters from bin\config.bin/CfgVehicles/SAM_System_01_base_F/Hitpoints/HitTurret/DestructionEffects/sound, sources - ["A3_Static_F_Jets_SAM_System_01"]
					{
						position = "gundestruct_pos";
					};
				};
			};
			class HitOptic: HitTurret //inherits 9 parameters from bin\config.bin/CfgVehicles/SAM_System_01_base_F/Hitpoints/HitTurret, sources - ["A3_Static_F_Jets_SAM_System_01"]
			{
				armor = 0.8;
				passThrough = 0.01;
				explosionShielding = 0.2;
				name = "optic";
				visual = "optic";
				convexComponent = "optic";
				class DestructionEffects //sources - []
				{
				};
			};
		};
		class Damage //sources - ["A3_Static_F_Jets_SAM_System_01"]
		{
			tex[] = {};
			mat[] = {"A3\Static_F_Jets\SAM_system_01\data\SAM_system_01.rvmat", "A3\Static_F_Jets\SAM_system_01\data\SAM_system_01_damage.rvmat", "A3\Static_F_Jets\SAM_system_01\data\SAM_system_01_destruct.rvmat"};
		};
		memoryPointLMissile = "pos_missile_l";
		memoryPointRMissile = "pos_missile_r";
		memoryPointLRocket = "pos_missile_l";
		memoryPointRRocket = "pos_missile_r";
		memoryPointMissile[] = {"pos_missile", "usti hlavne"};
		memoryPointMissileDir[] = {"pos_missile_end", "konec hlavne"};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/StaticMGWeapon/Turrets, sources - ["A3_Static_F_Jets_SAM_System_01"]
		{
			class MainTurret: MainTurret //inherits 1 parameters from bin\config.bin/CfgVehicles/StaticMGWeapon/Turrets/MainTurret, sources - ["A3_Static_F_Jets_SAM_System_01"]
			{
				minelev = -25;
				maxelev = 40;
				minturn = -180;
				maxturn = 180;
				initElev = 15;
				initTurn = 0;
				maxHorizontalRotSpeed = 2.7;
				maxVerticalRotSpeed = 2.7;
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best", 1.41254, 1, 40};
				hasGunner = 1;
				gunnerName = "Mk-49 operator";
				primary = 1;
				primaryGunner = 1;
				startEngine = 0;
				enableManualFire = 1;
				turretinfotype = "RscOptics_APC_Tracked_01_gunner";
				forceHideGunner = 1;
				gunnerforceoptics = 1;
				gunnerOutForceOptics = 1;
				viewgunnerinExternal = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				castGunnerShadow = 0;
				gunneraction = "Disabled";
				gunnerinaction = "Disabled";
				showAllTargets = 2;
				body = "MainTurret";
				gun = "MainGun";
				animationSourceBody = "MainTurret";
				animationSourceGun = "MainGun";
				uavCameraGunnerPos = "pos_gunner_view";
				uavCameraGunnerDir = "pos_gunner_view_dir";
				memoryPointGunnerOptics = "pos_gunner_view";
				selectionFireAnim = "zasleh";
				missileBeg = "pos_missile";
				missileEnd = "pos_missile_end";
				gunnerlefthandanimname = "";
				gunnerrighthandanimname = "";
				weapons[] = {"weapon_rim116Launcher"};
				magazines[] = {"magazine_Missile_rim116_x21"};
				optics = 1;
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
				class OpticsIn //sources - ["A3_Static_F_Jets_SAM_System_01"]
				{
					class Wide //sources - ["A3_Static_F_Jets_SAM_System_01"]
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal", "NVG", "Ti"};
						thermalMode[] = {0, 1};
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
					};
					class Medium: Wide //inherits 13 parameters from bin\config.bin/CfgVehicles/SAM_System_01_base_F/Turrets/MainTurret/OpticsIn/Wide, sources - ["A3_Static_F_Jets_SAM_System_01"]
					{
						opticsDisplayName = "M";
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_m_F";
					};
					class Narrow: Wide //inherits 13 parameters from bin\config.bin/CfgVehicles/SAM_System_01_base_F/Turrets/MainTurret/OpticsIn/Wide, sources - ["A3_Static_F_Jets_SAM_System_01"]
					{
						opticsDisplayName = "N";
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_n_F";
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
					};
				};
				class Components: Components //inherits 2 parameters from bin\config.bin/CfgVehicles/StaticWeapon/Turrets/MainTurret/Components, sources - ["A3_Static_F_Jets_SAM_System_01"]
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft //inherits 6 parameters from bin\config.bin/DefaultVehicleSystemsDisplayManagerLeft, sources - ["A3_Static_F_Jets_SAM_System_01"]
					{
						class Components //sources - ["A3_Static_F_Jets_SAM_System_01"]
						{
							class EmptyDisplay //sources - ["A3_Static_F_Jets_SAM_System_01"]
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay //sources - ["A3_Static_F_Jets_SAM_System_01"]
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};
							class UAVDisplay //sources - ["A3_Static_F_Jets_SAM_System_01"]
							{
								componentType = "UAVFeedDisplayComponent";
							};
							class SensorDisplay //sources - ["A3_Static_F_Jets_SAM_System_01"]
							{
								componentType = "SensorsDisplayComponent";
								range[] = {8000, 4000, 2000, 16000};
								resource = "RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight //inherits 6 parameters from bin\config.bin/DefaultVehicleSystemsDisplayManagerRight, sources - ["A3_Static_F_Jets_SAM_System_01"]
					{
						defaultDisplay = "SensorDisplay";
						class Components //sources - ["A3_Static_F_Jets_SAM_System_01"]
						{
							class EmptyDisplay //sources - ["A3_Static_F_Jets_SAM_System_01"]
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay //sources - ["A3_Static_F_Jets_SAM_System_01"]
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};
							class UAVDisplay //sources - ["A3_Static_F_Jets_SAM_System_01"]
							{
								componentType = "UAVFeedDisplayComponent";
							};
							class SensorDisplay //sources - ["A3_Static_F_Jets_SAM_System_01"]
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
		class AttributeValues //sources - ["A3_Static_F_Jets_SAM_System_01"]
		{
			RadarUsageAI = 1;
		};
	};
	class B_SAM_System_01_F: SAM_System_01_base_F //inherits 58 parameters from bin\config.bin/CfgVehicles/SAM_System_01_base_F, sources - ["A3_Static_F_Jets_SAM_System_01"]
	{
		class SimpleObject //sources - ["A3_Static_F_Jets_SAM_System_01"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0.26}, {"hide_missilecover_01", 1}, {"hide_missilecover_02", 1}, {"hide_missilecover_03", 1}, {"hide_missilecover_04", 1}, {"hide_missilecover_05", 1}, {"hide_missilecover_06", 1}, {"hide_missilecover_07", 1}, {"hide_missilecover_08", 1}, {"hide_missilecover_09", 1}, {"hide_missilecover_10", 1}, {"hide_missilecover_11", 1}, {"hide_missilecover_12", 1}, {"hide_missilecover_13", 1}, {"hide_missilecover_14", 1}, {"hide_missilecover_15", 1}, {"hide_missilecover_16", 1}, {"hide_missilecover_17", 1}, {"hide_missilecover_18", 1}, {"hide_missilecover_19", 1}, {"hide_missilecover_20", 1}, {"hide_missilecover_21", 1}, {"damageturret", 0}, {"damage_hide_missilecover_01", 0}, {"damage_hide_missilecover_02", 0}, {"damage_hide_missilecover_03", 0}, {"damage_hide_missilecover_04", 0}, {"damage_hide_missilecover_05", 0}, {"damage_hide_missilecover_06", 0}, {"damage_hide_missilecover_07", 0}, {"damage_hide_missilecover_08", 0}, {"damage_hide_missilecover_09", 0}, {"damage_hide_missilecover_10", 0}, {"damage_hide_missilecover_11", 0}, {"damage_hide_missilecover_12", 0}, {"damage_hide_missilecover_13", 0}, {"damage_hide_missilecover_14", 0}, {"damage_hide_missilecover_15", 0}, {"damage_hide_missilecover_16", 0}, {"damage_hide_missilecover_17", 0}, {"damage_hide_missilecover_18", 0}, {"damage_hide_missilecover_19", 0}, {"damage_hide_missilecover_20", 0}, {"damage_hide_missilecover_21", 0}};
			hide[] = {"zasleh", "light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.756;
			verticalOffsetWorld = 0;
		};
		author = "Bravo Zero One Studios";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_UAV_AI";
		typicalCargo[] = {"B_UAV_AI"};
	};
	class SAM_System_02_base_F: StaticMGWeapon //inherits 12 parameters from bin\config.bin/CfgVehicles/StaticMGWeapon, sources - ["A3_Static_F_Jets_SAM_System_02"]
	{
		author = "Bravo Zero One Studios";
		scope = 0;
		scopeCurator = 0;
		vehicleClass = "Autonomous";
		editorPreview = "\A3\EditorPreviews_F_Jets\Data\Cfgvehicles\B_SAM_system_02_F.jpg";
		picture = "\A3\Static_F_Jets\SAM_System_02\Data\UI\SAM_System_02_picture_CA.paa";
		uiPicture = "\A3\Static_F_Jets\SAM_System_02\Data\UI\SAM_System_02_picture_CA.paa";
		icon = "\A3\Static_F_Jets\SAM_System_02\Data\UI\SAM_System_02_icon_CA.paa";
		displayName = "Mk21 Centurion";
		DLC = "Jets";
		hasDriver = 0;
		hasGunner = 1;
		isUav = 1;
		uavCameraGunnerPos = "pos_gunner_view";
		uavCameraGunnerDir = "pos_gunner_view_dir";
		unitInfoType = "RscUnitInfoTank";
		model = "\A3\Static_F_Jets\SAM_system_02\SAM_system_02_F.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"A3\Static_F_Jets\SAM_System_02\Data\sam_system_02_co.paa"};
		threat[] = {0.5, 0.3, 1};
		cost = 150000;
		accuracy = 0.12;
		extCameraPosition[] = {0, 1.5, -10};
		canFloat = 0;
		class TextureSources //sources - ["A3_Static_F_Jets_SAM_System_02"]
		{
			class LightGrey //sources - ["A3_Static_F_Jets_SAM_System_02"]
			{
				displayName = "Light Grey";
				author = "Bravo Zero One Studios";
				textures[] = {"A3\Static_F_Jets\SAM_System_02\Data\sam_system_02_co.paa"};
				factions[] = {"BLU_F"};
			};
			class Sand //sources - ["A3_Static_F_Jets_SAM_System_02"]
			{
				displayName = "Sand";
				author = "Bravo Zero One Studios";
				textures[] = {"A3\Static_F_Jets\SAM_System_02\Data\SAM_system_02_TAN_co.paa"};
				factions[] = {"BLU_F"};
			};
			class Green //sources - ["A3_Static_F_Jets_SAM_System_02"]
			{
				displayName = "Green";
				author = "Bravo Zero One Studios";
				textures[] = {"A3\Static_F_Jets\SAM_System_02\Data\SAM_system_02_olive_co.paa"};
				factions[] = {"BLU_F"};
			};
		};
		animationList[] = {};
		textureList[] = {"LightGrey", 1, "Sand", 0, "Green", 0};
		enableGPS = 1;
		radarType = 4;
		gunnerCanSee = "1+2+4+16";
		commanderCanSee = "1+2+4+16";
		driverCanSee = "1+2+4+16";
		radarTarget = 1;
		radarTargetSize = 1.2;
		visualTarget = 1;
		visualTargetSize = 1.2;
		irTargetSize = 0;
		reportRemoteTargets = 1;
		receiveRemoteTargets = 1;
		lockDetectionSystem = 0;
		incomingMissileDetectionSystem = 16;
		class Components: Components //inherits 1 parameters from bin\config.bin/CfgVehicles/LandVehicle/Components, sources - ["A3_Static_F_Jets_SAM_System_02"]
		{
			class SensorsManagerComponent //sources - ["A3_Static_F_Jets_SAM_System_02"]
			{
				class Components //sources - ["A3_Static_F_Jets_SAM_System_02"]
				{
					class VisualSensorComponent: SensorTemplateVisual //inherits 4 parameters from bin\config.bin/SensorTemplateVisual, sources - ["A3_Static_F_Jets_SAM_System_02"]
					{
						class AirTarget //sources - ["A3_Static_F_Jets_SAM_System_02"]
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget //sources - ["A3_Static_F_Jets_SAM_System_02"]
						{
							minRange = 500;
							maxRange = 3500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						typeRecognitionDistance = 4000;
						maxTrackableSpeed = 600;
						angleRangeHorizontal = 60;
						angleRangeVertical = 40;
						animDirection = "mainGun";
						aimDown = -0.5;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar //inherits 11 parameters from bin\config.bin/SensorTemplateActiveRadar, sources - ["A3_Static_F_Jets_SAM_System_02"]
					{
						class AirTarget //sources - ["A3_Static_F_Jets_SAM_System_02"]
						{
							minRange = 14000;
							maxRange = 14000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget //sources - ["A3_Static_F_Jets_SAM_System_02"]
						{
							minRange = 11000;
							maxRange = 11000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 11000;
						angleRangeHorizontal = 15;
						angleRangeVertical = 15;
						animDirection = "mainGun";
						aimDown = -0.5;
						groundNoiseDistanceCoef = 0.1;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink //inherits 4 parameters from bin\config.bin/SensorTemplateDataLink, sources - []
					{
					};
				};
			};
		};
		animated = 1;
		class AnimationSources //sources - ["A3_Static_F_Jets_SAM_System_02"]
		{
			class Missiles_revolving //sources - ["A3_Static_F_Jets_SAM_System_02"]
			{
				source = "revolving";
				weapon = "weapon_rim162Launcher";
			};
		};
		class EventHandlers: EventHandlers //inherits 0 parameters from bin\config.bin/CfgVehicles/All/EventHandlers, sources - ["A3_Static_F_Jets_SAM_System_02"]
		{
			fired = "[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix;";
		};
		armor = 80;
		armorStructural = 1;
		damageResistance = 0.004;
		damageEffect = "AirDestructionEffects";
		class Hitpoints: HitPoints //inherits 7 parameters from bin\config.bin/CfgVehicles/StaticWeapon/HitPoints, sources - ["A3_Static_F_Jets_SAM_System_02"]
		{
			class HitHull //sources - ["A3_Static_F_Jets_SAM_System_02"]
			{
				armor = 3;
				name = "hit_hull";
				visual = "zbytek";
				radius = 0.25;
				minimalHit = 0.05;
				explosionShielding = 1.5;
				depends = "Total";
				passThrough = 0.1;
				material = 51;
			};
			class HitAvionics: HitHull //inherits 9 parameters from bin\config.bin/CfgVehicles/SAM_System_02_base_F/Hitpoints/HitHull, sources - ["A3_Static_F_Jets_SAM_System_02"]
			{
				armor = 0.5;
				passThrough = 0.15;
				name = "hit_avionics";
				visual = "avionics";
				minimalHit = 0.01;
			};
			class HitTurret: HitHull //inherits 9 parameters from bin\config.bin/CfgVehicles/SAM_System_02_base_F/Hitpoints/HitHull, sources - ["A3_Static_F_Jets_SAM_System_02"]
			{
				armor = 3;
				name = "hit_turret";
				convexComponent = "turret";
				visual = "turret";
				material = -1;
				passThrough = 0.1;
				minimalHit = 0.1;
				explosionShielding = 1.2;
				class DestructionEffects //sources - ["A3_Static_F_Jets_SAM_System_02"]
				{
					class light1 //sources - ["A3_Static_F_Jets_SAM_System_02"]
					{
						simulation = "light";
						type = "ObjectDestructionLight";
						position = "turretdestruct_pos";
						intensity = 0.001;
						interval = 1;
						lifeTime = 3;
					};
					class smoke1 //sources - ["A3_Static_F_Jets_SAM_System_02"]
					{
						simulation = "particles";
						type = "ObjectDestructionSmoke";
						position = "turretdestruct_pos";
						intensity = 0.15;
						interval = 1;
						lifeTime = 3.5;
					};
					class fire1 //sources - ["A3_Static_F_Jets_SAM_System_02"]
					{
						simulation = "particles";
						type = "ObjectDestructionFire1";
						position = "turretdestruct_pos";
						intensity = 0.15;
						interval = 1;
						lifeTime = 3;
					};
					class sparks1 //sources - ["A3_Static_F_Jets_SAM_System_02"]
					{
						simulation = "particles";
						type = "ObjectDestructionSparks";
						position = "turretdestruct_pos";
						intensity = 0;
						interval = 1;
						lifeTime = 0;
					};
					class sound //sources - ["A3_Static_F_Jets_SAM_System_02"]
					{
						simulation = "sound";
						position = "turretdestruct_pos";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
						type = "Fire";
					};
				};
			};
			class HitGun: HitTurret //inherits 9 parameters from bin\config.bin/CfgVehicles/SAM_System_02_base_F/Hitpoints/HitTurret, sources - ["A3_Static_F_Jets_SAM_System_02"]
			{
				armor = 2;
				name = "hit_gun";
				visual = "gun";
				convexComponent = "gun";
				explosionShielding = 1.2;
				passThrough = 0.1;
				class DestructionEffects: DestructionEffects //inherits 5 parameters from bin\config.bin/CfgVehicles/SAM_System_02_base_F/Hitpoints/HitTurret/DestructionEffects, sources - ["A3_Static_F_Jets_SAM_System_02"]
				{
					class light1: light1 //inherits 6 parameters from bin\config.bin/CfgVehicles/SAM_System_02_base_F/Hitpoints/HitTurret/DestructionEffects/light1, sources - ["A3_Static_F_Jets_SAM_System_02"]
					{
						position = "gundestruct_pos";
					};
					class smoke1: smoke1 //inherits 6 parameters from bin\config.bin/CfgVehicles/SAM_System_02_base_F/Hitpoints/HitTurret/DestructionEffects/smoke1, sources - ["A3_Static_F_Jets_SAM_System_02"]
					{
						position = "gundestruct_pos";
					};
					class fire1: fire1 //inherits 6 parameters from bin\config.bin/CfgVehicles/SAM_System_02_base_F/Hitpoints/HitTurret/DestructionEffects/fire1, sources - ["A3_Static_F_Jets_SAM_System_02"]
					{
						position = "gundestruct_pos";
					};
					class sparks1: sparks1 //inherits 6 parameters from bin\config.bin/CfgVehicles/SAM_System_02_base_F/Hitpoints/HitTurret/DestructionEffects/sparks1, sources - ["A3_Static_F_Jets_SAM_System_02"]
					{
						position = "gundestruct_pos";
					};
					class sound: sound //inherits 6 parameters from bin\config.bin/CfgVehicles/SAM_System_02_base_F/Hitpoints/HitTurret/DestructionEffects/sound, sources - ["A3_Static_F_Jets_SAM_System_02"]
					{
						position = "gundestruct_pos";
					};
				};
			};
			class HitOptic: HitTurret //inherits 9 parameters from bin\config.bin/CfgVehicles/SAM_System_02_base_F/Hitpoints/HitTurret, sources - ["A3_Static_F_Jets_SAM_System_02"]
			{
				armor = 0.8;
				passThrough = 0.01;
				explosionShielding = 0.2;
				name = "optic";
				visual = "optic";
				convexComponent = "optic";
				class DestructionEffects //sources - []
				{
				};
			};
		};
		class Damage //sources - ["A3_Static_F_Jets_SAM_System_02"]
		{
			tex[] = {};
			mat[] = {"A3\Static_F_Jets\SAM_system_02\data\SAM_system_02.rvmat", "A3\Static_F_Jets\SAM_system_02\data\SAM_system_02_damage.rvmat", "A3\Static_F_Jets\SAM_system_02\data\SAM_system_02_destruct.rvmat"};
		};
		memoryPointLMissile = "pos_missile_l";
		memoryPointRMissile = "pos_missile_r";
		memoryPointLRocket = "pos_missile_l";
		memoryPointRRocket = "pos_missile_r";
		memoryPointMissile[] = {"pos_missile", "usti hlavne"};
		memoryPointMissileDir[] = {"pos_missile_end", "konec hlavne"};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/StaticMGWeapon/Turrets, sources - ["A3_Static_F_Jets_SAM_System_02"]
		{
			class MainTurret: MainTurret //inherits 1 parameters from bin\config.bin/CfgVehicles/StaticMGWeapon/Turrets/MainTurret, sources - ["A3_Static_F_Jets_SAM_System_02"]
			{
				minelev = -25;
				maxelev = 45;
				minturn = -180;
				maxturn = 180;
				initElev = 15;
				initTurn = 0;
				maxHorizontalRotSpeed = 2.7;
				maxVerticalRotSpeed = 2.7;
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best", 1.41254, 1, 40};
				hasGunner = 1;
				gunnerName = "Mk-21 operator";
				primary = 1;
				primaryGunner = 1;
				startEngine = 0;
				enableManualFire = 1;
				turretinfotype = "RscOptics_APC_Tracked_01_gunner";
				forceHideGunner = 1;
				gunnerforceoptics = 1;
				gunnerOutForceOptics = 1;
				viewgunnerinExternal = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				castGunnerShadow = 0;
				gunneraction = "Disabled";
				gunnerinaction = "Disabled";
				showAllTargets = 2;
				body = "MainTurret";
				gun = "MainGun";
				animationSourceBody = "MainTurret";
				animationSourceGun = "MainGun";
				uavCameraGunnerPos = "pos_gunner_view";
				uavCameraGunnerDir = "pos_gunner_view_dir";
				memoryPointGunnerOptics = "pos_gunner_view";
				selectionFireAnim = "zasleh";
				missileBeg = "pos_missile";
				missileEnd = "pos_missile_end";
				gunnerlefthandanimname = "";
				gunnerrighthandanimname = "";
				weapons[] = {"weapon_rim162Launcher"};
				magazines[] = {"magazine_Missile_rim162_x8"};
				optics = 1;
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
				class OpticsIn //sources - ["A3_Static_F_Jets_SAM_System_02"]
				{
					class Wide //sources - ["A3_Static_F_Jets_SAM_System_02"]
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal", "NVG", "Ti"};
						thermalMode[] = {0, 1};
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
					};
					class Medium: Wide //inherits 13 parameters from bin\config.bin/CfgVehicles/SAM_System_02_base_F/Turrets/MainTurret/OpticsIn/Wide, sources - ["A3_Static_F_Jets_SAM_System_02"]
					{
						opticsDisplayName = "M";
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_m_F";
					};
					class Narrow: Wide //inherits 13 parameters from bin\config.bin/CfgVehicles/SAM_System_02_base_F/Turrets/MainTurret/OpticsIn/Wide, sources - ["A3_Static_F_Jets_SAM_System_02"]
					{
						opticsDisplayName = "N";
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_n_F";
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
					};
				};
				class Components: Components //inherits 2 parameters from bin\config.bin/CfgVehicles/StaticWeapon/Turrets/MainTurret/Components, sources - ["A3_Static_F_Jets_SAM_System_02"]
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft //inherits 6 parameters from bin\config.bin/DefaultVehicleSystemsDisplayManagerLeft, sources - ["A3_Static_F_Jets_SAM_System_02"]
					{
						class Components //sources - ["A3_Static_F_Jets_SAM_System_02"]
						{
							class EmptyDisplay //sources - ["A3_Static_F_Jets_SAM_System_02"]
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay //sources - ["A3_Static_F_Jets_SAM_System_02"]
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};
							class UAVDisplay //sources - ["A3_Static_F_Jets_SAM_System_02"]
							{
								componentType = "UAVFeedDisplayComponent";
							};
							class SensorDisplay //sources - ["A3_Static_F_Jets_SAM_System_02"]
							{
								componentType = "SensorsDisplayComponent";
								range[] = {16000, 8000, 4000, 2000};
								resource = "RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight //inherits 6 parameters from bin\config.bin/DefaultVehicleSystemsDisplayManagerRight, sources - ["A3_Static_F_Jets_SAM_System_02"]
					{
						defaultDisplay = "SensorDisplay";
						class Components //sources - ["A3_Static_F_Jets_SAM_System_02"]
						{
							class EmptyDisplay //sources - ["A3_Static_F_Jets_SAM_System_02"]
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay //sources - ["A3_Static_F_Jets_SAM_System_02"]
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};
							class UAVDisplay //sources - ["A3_Static_F_Jets_SAM_System_02"]
							{
								componentType = "UAVFeedDisplayComponent";
							};
							class SensorDisplay //sources - ["A3_Static_F_Jets_SAM_System_02"]
							{
								componentType = "SensorsDisplayComponent";
								range[] = {16000, 8000, 4000, 2000};
								resource = "RscCustomInfoSensors";
							};
						};
					};
				};
			};
		};
		class AttributeValues //sources - ["A3_Static_F_Jets_SAM_System_02"]
		{
			RadarUsageAI = 1;
		};
	};
	class B_SAM_System_02_F: SAM_System_02_base_F //inherits 59 parameters from bin\config.bin/CfgVehicles/SAM_System_02_base_F, sources - ["A3_Static_F_Jets_SAM_System_02"]
	{
		class SimpleObject //sources - ["A3_Static_F_Jets_SAM_System_02"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0.26}, {"hide_missilecover_01", 1}, {"hide_missilecover_02", 1}, {"hide_missilecover_03", 1}, {"hide_missilecover_04", 1}, {"hide_missilecover_05", 1}, {"hide_missilecover_06", 1}, {"hide_missilecover_07", 1}, {"hide_missilecover_08", 1}, {"damageturret", 0}, {"damage_hide_missilecover_01", 0}, {"damage_hide_missilecover_02", 0}, {"damage_hide_missilecover_03", 0}, {"damage_hide_missilecover_04", 0}, {"damage_hide_missilecover_05", 0}, {"damage_hide_missilecover_06", 0}, {"damage_hide_missilecover_07", 0}, {"damage_hide_missilecover_08", 0}, {"missile_move_1", 1}, {"missile_move_2", 1}, {"missile_move_3", 1}, {"missile_move_4", 1}, {"missile_move_5", 1}, {"missile_move_6", 1}, {"missile_move_7", 1}};
			hide[] = {"zasleh", "light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.97;
			verticalOffsetWorld = 0.001;
		};
		author = "Bravo Zero One Studios";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_UAV_AI";
		typicalCargo[] = {"B_UAV_AI"};
	};

	class StaticATWeapon: StaticWeapon //inherits 110 parameters from bin\config.bin/CfgVehicles/StaticWeapon, sources - ["A3_Data_F","A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
	{
		author = "Bohemia Interactive";
		mapSize = 1;
		_generalMacro = "StaticATWeapon";
		threat[] = {0, 1, 0.2};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/StaticWeapon/Turrets, sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
		{
			class MainTurret: MainTurret //inherits 21 parameters from bin\config.bin/CfgVehicles/StaticWeapon/Turrets/MainTurret, sources - []
			{
			};
		};
		displayName = "AT Launcher";
		accuracy = 0.12;
		cost = 50000;
		icon = "iconStaticAA";
	};
	class StaticAAWeapon: StaticWeapon //inherits 110 parameters from bin\config.bin/CfgVehicles/StaticWeapon, sources - ["A3_Data_F","A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
	{
		author = "Bohemia Interactive";
		mapSize = 1;
		_generalMacro = "StaticAAWeapon";
		threat[] = {0, 0.3, 1};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/StaticWeapon/Turrets, sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
		{
			class MainTurret: MainTurret //inherits 21 parameters from bin\config.bin/CfgVehicles/StaticWeapon/Turrets/MainTurret, sources - []
			{
			};
		};
		displayName = "AA Launcher";
		accuracy = 0.12;
		cost = 70000;
		gunnerCanSee = "2+8+32+1+4";
		icon = "iconStaticAA";
	};
	class StaticCannon: StaticWeapon //inherits 110 parameters from bin\config.bin/CfgVehicles/StaticWeapon, sources - ["A3_Data_F","A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
	{
		author = "Bohemia Interactive";
		mapSize = 1;
		_generalMacro = "StaticCannon";
		threat[] = {0.8, 0.8, 0};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/StaticWeapon/Turrets, sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
		{
			class MainTurret: MainTurret //inherits 21 parameters from bin\config.bin/CfgVehicles/StaticWeapon/Turrets/MainTurret, sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
			{
				gunnerForceOptics = 1;
			};
		};
		class EventHandlers //sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
		displayName = "Cannon";
		accuracy = 0.12;
		cost = 100000;
		icon = "iconStaticCannon";
	};
	class StaticGrenadeLauncher: StaticWeapon //inherits 110 parameters from bin\config.bin/CfgVehicles/StaticWeapon, sources - ["A3_Data_F","A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
	{
		author = "Bohemia Interactive";
		mapSize = 2.64;
		class SpeechVariants //sources - ["A3_Data_F"]
		{
			class Default //sources - ["A3_Data_F"]
			{
				speechSingular[] = {"veh_static_GL_s"};
				speechPlural[] = {"veh_static_GL_p"};
			};
		};
		textSingular = "static GL";
		textPlural = "static GLs";
		nameSound = "veh_static_GL_s";
		_generalMacro = "StaticGrenadeLauncher";
		threat[] = {1, 0.5, 0};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/StaticWeapon/Turrets, sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
		{
			class MainTurret: MainTurret //inherits 21 parameters from bin\config.bin/CfgVehicles/StaticWeapon/Turrets/MainTurret, sources - []
			{
			};
		};
		displayName = "Grenade launcher";
		accuracy = 0.12;
		cost = 10000;
		icon = "iconStaticMG";
    };
    class GMG_TriPod: StaticGrenadeLauncher //inherits 13 parameters from bin\config.bin/CfgVehicles/StaticGrenadeLauncher, sources - ["A3_Static_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "GMG_TriPod";
		scope = 0;
		editorSubcategory = "EdSubcat_Turrets";
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/StaticGrenadeLauncher/Turrets, sources - ["A3_Static_F"]
		{
			class MainTurret: MainTurret //inherits 0 parameters from bin\config.bin/CfgVehicles/StaticGrenadeLauncher/Turrets/MainTurret, sources - ["A3_Static_F"]
			{
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				minElev = -10;
				minTurn = -90;
				maxTurn = 90;
				initTurn = 0;
				weapons[] = {"fakeWeapon"};
				magazines[] = {"fakeMagazine"};
				gunnerAction = "gunner_static_low01";
				gunnergetInAction = "";
				gunnergetOutAction = "";
				class GunFire: WeaponCloudsMGun //inherits 20 parameters from bin\config.bin/WeaponCloudsMGun, sources - ["A3_Static_F"]
				{
					interval = 0.01;
				};
				ejectDeadGunner = 1;
			};
		};
	};
	class GMG_01_base_F: GMG_TriPod //inherits 5 parameters from bin\config.bin/CfgVehicles/GMG_TriPod, sources - ["A3_Static_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "GMG_01_base_F";
		scope = 0;
		displayName = "Mk32 GMG 20 mm";
		class Armory //sources - ["A3_Static_F"]
		{
			description = "The Mk32 GMG is a static grenade launcher. It's based on the Mk30 HMG, using the same electronic targeting and tripod, but fires 20 mm grenades instead of .50 BMG. Mk32 also exists in an automatic/remotely controlled variant which is labeled Mk32A.";
		};
		descriptionShort = "Mk32 Static Grenade Launcher";
		picture = "\A3\Static_f_gamma\data\ui\gear_StaticTurret_GMG_CA.paa";
		UiPicture = "\A3\Static_f_gamma\data\ui\gear_StaticTurret_GMG_CA.paa";
		model = "\A3\Static_F_Gamma\GMG_01\GMG_01_F.p3d";
		visionMode[] = {"Normal"};
		fireDustEffect = "emptyEffect";
		threat[] = {1, 0.7, 0.3};
		cost = 200000;
		explosionEffect = "";
		class Damage //sources - ["A3_Static_F"]
		{
			tex[] = {};
			mat[] = {"A3\Static_F_Gamma\data\StaticTurret_01.rvmat", "A3\Static_F_Gamma\data\StaticTurret_01_damage.rvmat", "A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat", "A3\Static_F_Gamma\data\StaticTurret_02.rvmat", "A3\Static_F_Gamma\data\StaticTurret_02_damage.rvmat", "A3\Static_F_Gamma\data\StaticTurret_02_destruct.rvmat", "A3\Static_F_Gamma\data\StaticTurret_03.rvmat", "A3\Static_F_Gamma\data\StaticTurret_03_damage.rvmat", "A3\Static_F_Gamma\data\StaticTurret_03_destruct.rvmat"};
		};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/GMG_TriPod/Turrets, sources - ["A3_Static_F"]
		{
			class MainTurret: MainTurret //inherits 12 parameters from bin\config.bin/CfgVehicles/GMG_TriPod/Turrets/MainTurret, sources - ["A3_Static_F"]
			{
				minElev = -20;
				maxElev = 20;
				weapons[] = {"GMG_20mm"};
				magazines[] = {"40Rnd_20mm_g_belt", "40Rnd_20mm_g_belt", "40Rnd_20mm_g_belt", "40Rnd_20mm_g_belt"};
				gunnerAction = "gunner_static_low01";
				gunnergetInAction = "";
				gunnergetOutAction = "";
				displayName = "";
				optics = 1;
				discreteDistance[] = {100, 200, 300, 400, 600, 800, 1000};
				discreteDistanceInitIndex = 2;
				turretInfoType = "RscOptics_crows";
				minTurn = -40;
				maxTurn = 40;
				initTurn = 0;
				class OpticsIn //sources - ["A3_Static_F"]
				{
					class ViewOptics: ViewOptics //inherits 15 parameters from bin\config.bin/CfgVehicles/StaticWeapon/Turrets/MainTurret/ViewOptics, sources - ["A3_Static_F"]
					{
						useModelOptics = 1;
						gunnerOpticsModel = "\a3\weapons_f_gamma\reticle\GMG_01_Optics_Gunner_F";
						gunnerOpticsEffect[] = {"OpticsCHAbera1", "OpticsBlur1"};
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.117;
						minFov = 0.029;
						maxFov = 0.117;
						memoryPointGunnerOptics = "gunnerview";
						visionMode[] = {"Normal", "NVG", "Ti"};
						thermalMode[] = {0, 1};
						opticsFlare = 1;
						opticsDisablePeripherialVision = 1;
						cameraDir = "";
					};
				};
				gunnerRightHandAnimName = "OtocHlaven_shake";
				gunnerLeftHandAnimName = "OtocHlaven_shake";
			};
		};
		class AnimationSources //sources - ["A3_Static_F"]
		{
			class autonomous_unhide //sources - ["A3_Static_F"]
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class muzzle_source //sources - ["A3_Static_F"]
			{
				source = "reload";
				weapon = "GMG_20mm";
			};
			class muzzle_source_rot //sources - ["A3_Static_F"]
			{
				source = "ammorandom";
				weapon = "GMG_20mm";
			};
			class ReloadAnim //sources - ["A3_Static_F"]
			{
				source = "reload";
				weapon = "GMG_20mm";
			};
			class ReloadMagazine //sources - ["A3_Static_F"]
			{
				source = "reloadmagazine";
				weapon = "GMG_20mm";
			};
			class Revolving //sources - ["A3_Static_F"]
			{
				source = "revolving";
				weapon = "GMG_20mm";
			};
		};
		soundGetOut[] = {"A3\sounds_f\dummysound", 0.001, 1, 5};
		soundGetIn[] = {"A3\sounds_f\dummysound", 0.000316228, 1, 5};
	};
	class B_GMG_01_F: GMG_01_base_F //inherits 19 parameters from bin\config.bin/CfgVehicles/GMG_01_base_F, sources - ["A3_Static_F"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"mainturret_destructx", 0}, {"mainturret_destructy", 0}, {"mainturret_destructz", 0}, {"maingun_destructx", 0}, {"maingun_destructy", 0}, {"maingun_destructz", 0}, {"magazine_destruct", 0}, {"ammo_belt_destruct", 0}, {"bolt_destruct", 0}, {"charging_handle_destruct", 0}, {"damagehidevez_destruct", 0}, {"damagehidehlaven_destruct", 0}, {"damagehiderecoil_destruct", 0}, {"ammo_belt_rotation", 0}, {"barrel_recoil", 0}, {"bolt_recoil", 0}, {"turret_shake", 0}, {"turret_shake_backside", 0}, {"turret_shake_aside", 0}, {"bolt_reload_begin", 0}, {"bolt_reload_end", 0}, {"magazine_hide", 0}, {"ammo_belt_hide", 0}, {"muzzleflash", 0}, {"zaslehrot", 0}, {"addautonomous_unhide", 0}, {"bullet001_reload_hide", 1}, {"bullet002_reload_hide", 1}, {"bullet003_reload_hide", 1}, {"bullet004_reload_hide", 1}, {"bullet005_reload_hide", 1}, {"bullet006_reload_hide", 1}, {"bullet007_reload_hide", 1}, {"bullet008_reload_hide", 1}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.984;
			verticalOffsetWorld = 0.101;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_GMG_01_F.jpg";
		_generalMacro = "B_GMG_01_F";
		scope = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_Soldier_F";
		class assembleInfo //sources - ["A3_Static_F"]
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"B_GMG_01_weapon_F", "B_HMG_01_support_F"};
			displayName = "";
		};
	};
	class O_GMG_01_F: GMG_01_base_F //inherits 19 parameters from bin\config.bin/CfgVehicles/GMG_01_base_F, sources - ["A3_Static_F"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"mainturret_destructx", 0}, {"mainturret_destructy", 0}, {"mainturret_destructz", 0}, {"maingun_destructx", 0}, {"maingun_destructy", 0}, {"maingun_destructz", 0}, {"magazine_destruct", 0}, {"ammo_belt_destruct", 0}, {"bolt_destruct", 0}, {"charging_handle_destruct", 0}, {"damagehidevez_destruct", 0}, {"damagehidehlaven_destruct", 0}, {"damagehiderecoil_destruct", 0}, {"ammo_belt_rotation", 0}, {"barrel_recoil", 0}, {"bolt_recoil", 0}, {"turret_shake", 0}, {"turret_shake_backside", 0}, {"turret_shake_aside", 0}, {"bolt_reload_begin", 0}, {"bolt_reload_end", 0}, {"magazine_hide", 0}, {"ammo_belt_hide", 0}, {"muzzleflash", 0}, {"zaslehrot", 0}, {"addautonomous_unhide", 0}, {"bullet001_reload_hide", 1}, {"bullet002_reload_hide", 1}, {"bullet003_reload_hide", 1}, {"bullet004_reload_hide", 1}, {"bullet005_reload_hide", 1}, {"bullet006_reload_hide", 1}, {"bullet007_reload_hide", 1}, {"bullet008_reload_hide", 1}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.984;
			verticalOffsetWorld = 0.101;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_GMG_01_F.jpg";
		_generalMacro = "O_GMG_01_F";
		scope = 2;
		side = 0;
		faction = "OPF_F";
		crew = "O_Soldier_F";
		class assembleInfo //sources - ["A3_Static_F"]
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"O_GMG_01_weapon_F", "O_HMG_01_support_F"};
			displayName = "";
		};
	};
	class I_GMG_01_F: GMG_01_base_F //inherits 19 parameters from bin\config.bin/CfgVehicles/GMG_01_base_F, sources - ["A3_Static_F"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"mainturret_destructx", 0}, {"mainturret_destructy", 0}, {"mainturret_destructz", 0}, {"maingun_destructx", 0}, {"maingun_destructy", 0}, {"maingun_destructz", 0}, {"magazine_destruct", 0}, {"ammo_belt_destruct", 0}, {"bolt_destruct", 0}, {"charging_handle_destruct", 0}, {"damagehidevez_destruct", 0}, {"damagehidehlaven_destruct", 0}, {"damagehiderecoil_destruct", 0}, {"ammo_belt_rotation", 0}, {"barrel_recoil", 0}, {"bolt_recoil", 0}, {"turret_shake", 0}, {"turret_shake_backside", 0}, {"turret_shake_aside", 0}, {"bolt_reload_begin", 0}, {"bolt_reload_end", 0}, {"magazine_hide", 0}, {"ammo_belt_hide", 0}, {"muzzleflash", 0}, {"zaslehrot", 0}, {"addautonomous_unhide", 0}, {"bullet001_reload_hide", 1}, {"bullet002_reload_hide", 1}, {"bullet003_reload_hide", 1}, {"bullet004_reload_hide", 1}, {"bullet005_reload_hide", 1}, {"bullet006_reload_hide", 1}, {"bullet007_reload_hide", 1}, {"bullet008_reload_hide", 1}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.984;
			verticalOffsetWorld = 0.101;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_GMG_01_F.jpg";
		_generalMacro = "I_GMG_01_F";
		scope = 2;
		side = 2;
		faction = "IND_F";
		crew = "I_Soldier_F";
		class assembleInfo //sources - ["A3_Static_F"]
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"I_GMG_01_weapon_F", "I_HMG_01_support_F"};
			displayName = "";
		};
	};
	class GMG_01_high_base_F: GMG_01_base_F //inherits 19 parameters from bin\config.bin/CfgVehicles/GMG_01_base_F, sources - ["A3_Static_F"]
	{
		author = "Bohemia Interactive";
		mapSize = 2.26;
		_generalMacro = "GMG_01_high_base_F";
		model = "\A3\Static_F_Gamma\GMG_01\GMG_01_high_F.p3d";
		displayName = "Mk32 GMG 20 mm (Raised)";
		armor = 30;
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/GMG_01_base_F/Turrets, sources - ["A3_Static_F"]
		{
			class MainTurret: MainTurret //inherits 18 parameters from bin\config.bin/CfgVehicles/GMG_01_base_F/Turrets/MainTurret, sources - ["A3_Static_F"]
			{
				maxElev = 35;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				gunnerAction = "gunner_standup01";
				gunnergetInAction = "";
				gunnergetOutAction = "";
			};
		};
	};
	class B_GMG_01_high_F: GMG_01_high_base_F //inherits 7 parameters from bin\config.bin/CfgVehicles/GMG_01_high_base_F, sources - ["A3_Static_F"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"mainturret_destructx", 0}, {"mainturret_destructy", 0}, {"mainturret_destructz", 0}, {"maingun_destructx", 0}, {"maingun_destructy", 0}, {"maingun_destructz", 0}, {"magazine_destruct", 0}, {"ammo_belt_destruct", 0}, {"bolt_destruct", 0}, {"charging_handle_destruct", 0}, {"damagehidevez_destruct", 0}, {"damagehidehlaven_destruct", 0}, {"damagehiderecoil_destruct", 0}, {"ammo_belt_rotation", 0}, {"barrel_recoil", 0}, {"bolt_recoil", 0}, {"turret_shake", 0}, {"turret_shake_backside", 0}, {"turret_shake_aside", 0}, {"bolt_reload_begin", 0}, {"bolt_reload_end", 0}, {"magazine_hide", 0}, {"ammo_belt_hide", 0}, {"muzzleflash", 0}, {"zaslehrot", 0}, {"addautonomous_unhide", 0}, {"bullet001_reload_hide", 1}, {"bullet002_reload_hide", 1}, {"bullet003_reload_hide", 1}, {"bullet004_reload_hide", 1}, {"bullet005_reload_hide", 1}, {"bullet006_reload_hide", 1}, {"bullet007_reload_hide", 1}, {"bullet008_reload_hide", 1}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.672;
			verticalOffsetWorld = -0.013;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_GMG_01_high_F.jpg";
		_generalMacro = "B_GMG_01_high_F";
		scope = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_Soldier_F";
		class assembleInfo //sources - ["A3_Static_F"]
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"B_GMG_01_high_weapon_F", "B_HMG_01_support_high_F"};
			displayName = "";
		};
	};
	class O_GMG_01_high_F: GMG_01_high_base_F //inherits 7 parameters from bin\config.bin/CfgVehicles/GMG_01_high_base_F, sources - ["A3_Static_F"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"mainturret_destructx", 0}, {"mainturret_destructy", 0}, {"mainturret_destructz", 0}, {"maingun_destructx", 0}, {"maingun_destructy", 0}, {"maingun_destructz", 0}, {"magazine_destruct", 0}, {"ammo_belt_destruct", 0}, {"bolt_destruct", 0}, {"charging_handle_destruct", 0}, {"damagehidevez_destruct", 0}, {"damagehidehlaven_destruct", 0}, {"damagehiderecoil_destruct", 0}, {"ammo_belt_rotation", 0}, {"barrel_recoil", 0}, {"bolt_recoil", 0}, {"turret_shake", 0}, {"turret_shake_backside", 0}, {"turret_shake_aside", 0}, {"bolt_reload_begin", 0}, {"bolt_reload_end", 0}, {"magazine_hide", 0}, {"ammo_belt_hide", 0}, {"muzzleflash", 0}, {"zaslehrot", 0}, {"addautonomous_unhide", 0}, {"bullet001_reload_hide", 1}, {"bullet002_reload_hide", 1}, {"bullet003_reload_hide", 1}, {"bullet004_reload_hide", 1}, {"bullet005_reload_hide", 1}, {"bullet006_reload_hide", 1}, {"bullet007_reload_hide", 1}, {"bullet008_reload_hide", 1}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.672;
			verticalOffsetWorld = -0.013;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_GMG_01_high_F.jpg";
		_generalMacro = "O_GMG_01_high_F";
		scope = 2;
		side = 0;
		faction = "OPF_F";
		crew = "O_Soldier_F";
		class assembleInfo //sources - ["A3_Static_F"]
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"O_GMG_01_high_weapon_F", "O_HMG_01_support_high_F"};
			displayName = "";
		};
	};
	class I_GMG_01_high_F: GMG_01_high_base_F //inherits 7 parameters from bin\config.bin/CfgVehicles/GMG_01_high_base_F, sources - ["A3_Static_F"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"mainturret_destructx", 0}, {"mainturret_destructy", 0}, {"mainturret_destructz", 0}, {"maingun_destructx", 0}, {"maingun_destructy", 0}, {"maingun_destructz", 0}, {"magazine_destruct", 0}, {"ammo_belt_destruct", 0}, {"bolt_destruct", 0}, {"charging_handle_destruct", 0}, {"damagehidevez_destruct", 0}, {"damagehidehlaven_destruct", 0}, {"damagehiderecoil_destruct", 0}, {"ammo_belt_rotation", 0}, {"barrel_recoil", 0}, {"bolt_recoil", 0}, {"turret_shake", 0}, {"turret_shake_backside", 0}, {"turret_shake_aside", 0}, {"bolt_reload_begin", 0}, {"bolt_reload_end", 0}, {"magazine_hide", 0}, {"ammo_belt_hide", 0}, {"muzzleflash", 0}, {"zaslehrot", 0}, {"addautonomous_unhide", 0}, {"bullet001_reload_hide", 1}, {"bullet002_reload_hide", 1}, {"bullet003_reload_hide", 1}, {"bullet004_reload_hide", 1}, {"bullet005_reload_hide", 1}, {"bullet006_reload_hide", 1}, {"bullet007_reload_hide", 1}, {"bullet008_reload_hide", 1}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.672;
			verticalOffsetWorld = -0.013;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_GMG_01_high_F.jpg";
		_generalMacro = "I_GMG_01_high_F";
		scope = 2;
		side = 2;
		faction = "IND_F";
		crew = "I_Soldier_F";
		class assembleInfo //sources - ["A3_Static_F"]
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"I_GMG_01_high_weapon_F", "I_HMG_01_support_high_F"};
			displayName = "";
		};
	};
	class GMG_01_A_base_F: GMG_01_base_F //inherits 19 parameters from bin\config.bin/CfgVehicles/GMG_01_base_F, sources - ["A3_Static_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "GMG_01_A_base_F";
		displayName = "Mk32A GMG 20 mm";
		isUav = 1;
		uavCameraGunnerPos = "PiP_pos";
		uavCameraGunnerDir = "PiP_dir";
		class AnimationSources: AnimationSources //inherits 6 parameters from bin\config.bin/CfgVehicles/GMG_01_base_F/AnimationSources, sources - ["A3_Static_F"]
		{
			class autonomous_unhide: autonomous_unhide //inherits 3 parameters from bin\config.bin/CfgVehicles/GMG_01_base_F/AnimationSources/autonomous_unhide, sources - ["A3_Static_F"]
			{
				initPhase = 1;
			};
		};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/GMG_01_base_F/Turrets, sources - ["A3_Static_F"]
		{
			class MainTurret: MainTurret //inherits 18 parameters from bin\config.bin/CfgVehicles/GMG_01_base_F/Turrets/MainTurret, sources - ["A3_Static_F"]
			{
				gunnerInAction = "Disabled";
				gunnerAction = "Disabled";
				gunnerForceOptics = 1;
				class HitPoints //sources - ["A3_Static_F"]
				{
					class HitGun //sources - ["A3_Static_F"]
					{
						armor = 0.3;
						material = -1;
						name = "gun";
						visual = "autonomous_unhide";
						passThrough = 0;
						radius = 0.2;
					};
					class HitTurret: HitGun //inherits 6 parameters from bin\config.bin/CfgVehicles/GMG_01_A_base_F/Turrets/MainTurret/HitPoints/HitGun, sources - ["A3_Static_F"]
					{
						armor = 0.3;
						class DestructionEffects //sources - ["A3_Static_F"]
						{
							class Smoke //sources - ["A3_Static_F"]
							{
								simulation = "particles";
								type = "WeaponWreckSmoke";
								position = "destructionEffect";
								intensity = 1;
								interval = 1;
								lifeTime = 5;
							};
						};
					};
				};
			};
		};
	};
	class B_GMG_01_A_F: GMG_01_A_base_F //inherits 8 parameters from bin\config.bin/CfgVehicles/GMG_01_A_base_F, sources - ["A3_Static_F"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"mainturret_destructx", 0}, {"mainturret_destructy", 0}, {"mainturret_destructz", 0}, {"maingun_destructx", 0}, {"maingun_destructy", 0}, {"maingun_destructz", 0}, {"magazine_destruct", 0}, {"ammo_belt_destruct", 0}, {"bolt_destruct", 0}, {"charging_handle_destruct", 0}, {"damagehidevez_destruct", 0}, {"damagehidehlaven_destruct", 0}, {"damagehiderecoil_destruct", 0}, {"ammo_belt_rotation", 0}, {"barrel_recoil", 0}, {"bolt_recoil", 0}, {"turret_shake", 0}, {"turret_shake_backside", 0}, {"turret_shake_aside", 0}, {"bolt_reload_begin", 0}, {"bolt_reload_end", 0}, {"magazine_hide", 0}, {"ammo_belt_hide", 0}, {"muzzleflash", 0}, {"zaslehrot", 0}, {"addautonomous_unhide", 1}, {"bullet001_reload_hide", 1}, {"bullet002_reload_hide", 1}, {"bullet003_reload_hide", 1}, {"bullet004_reload_hide", 1}, {"bullet005_reload_hide", 1}, {"bullet006_reload_hide", 1}, {"bullet007_reload_hide", 1}, {"bullet008_reload_hide", 1}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.984;
			verticalOffsetWorld = 0.101;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_GMG_01_A_F.jpg";
		_generalMacro = "B_GMG_01_A_F";
		scope = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_UAV_AI";
		class assembleInfo //sources - ["A3_Static_F"]
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"B_GMG_01_A_weapon_F", "B_HMG_01_support_F"};
			displayName = "";
		};
		forceInGarage = 1;
	};
	class O_GMG_01_A_F: GMG_01_A_base_F //inherits 8 parameters from bin\config.bin/CfgVehicles/GMG_01_A_base_F, sources - ["A3_Static_F"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"mainturret_destructx", 0}, {"mainturret_destructy", 0}, {"mainturret_destructz", 0}, {"maingun_destructx", 0}, {"maingun_destructy", 0}, {"maingun_destructz", 0}, {"magazine_destruct", 0}, {"ammo_belt_destruct", 0}, {"bolt_destruct", 0}, {"charging_handle_destruct", 0}, {"damagehidevez_destruct", 0}, {"damagehidehlaven_destruct", 0}, {"damagehiderecoil_destruct", 0}, {"ammo_belt_rotation", 0}, {"barrel_recoil", 0}, {"bolt_recoil", 0}, {"turret_shake", 0}, {"turret_shake_backside", 0}, {"turret_shake_aside", 0}, {"bolt_reload_begin", 0}, {"bolt_reload_end", 0}, {"magazine_hide", 0}, {"ammo_belt_hide", 0}, {"muzzleflash", 0}, {"zaslehrot", 0}, {"addautonomous_unhide", 1}, {"bullet001_reload_hide", 1}, {"bullet002_reload_hide", 1}, {"bullet003_reload_hide", 1}, {"bullet004_reload_hide", 1}, {"bullet005_reload_hide", 1}, {"bullet006_reload_hide", 1}, {"bullet007_reload_hide", 1}, {"bullet008_reload_hide", 1}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.984;
			verticalOffsetWorld = 0.101;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_GMG_01_A_F.jpg";
		_generalMacro = "O_GMG_01_A_F";
		scope = 2;
		side = 0;
		faction = "OPF_F";
		crew = "O_UAV_AI";
		class assembleInfo //sources - ["A3_Static_F"]
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"O_GMG_01_A_weapon_F", "O_HMG_01_support_F"};
			displayName = "";
		};
	};
	class I_GMG_01_A_F: GMG_01_A_base_F //inherits 8 parameters from bin\config.bin/CfgVehicles/GMG_01_A_base_F, sources - ["A3_Static_F"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"mainturret_destructx", 0}, {"mainturret_destructy", 0}, {"mainturret_destructz", 0}, {"maingun_destructx", 0}, {"maingun_destructy", 0}, {"maingun_destructz", 0}, {"magazine_destruct", 0}, {"ammo_belt_destruct", 0}, {"bolt_destruct", 0}, {"charging_handle_destruct", 0}, {"damagehidevez_destruct", 0}, {"damagehidehlaven_destruct", 0}, {"damagehiderecoil_destruct", 0}, {"ammo_belt_rotation", 0}, {"barrel_recoil", 0}, {"bolt_recoil", 0}, {"turret_shake", 0}, {"turret_shake_backside", 0}, {"turret_shake_aside", 0}, {"bolt_reload_begin", 0}, {"bolt_reload_end", 0}, {"magazine_hide", 0}, {"ammo_belt_hide", 0}, {"muzzleflash", 0}, {"zaslehrot", 0}, {"addautonomous_unhide", 1}, {"bullet001_reload_hide", 1}, {"bullet002_reload_hide", 1}, {"bullet003_reload_hide", 1}, {"bullet004_reload_hide", 1}, {"bullet005_reload_hide", 1}, {"bullet006_reload_hide", 1}, {"bullet007_reload_hide", 1}, {"bullet008_reload_hide", 1}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.984;
			verticalOffsetWorld = 0.101;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_GMG_01_A_F.jpg";
		_generalMacro = "I_GMG_01_A_F";
		scope = 2;
		side = 2;
		faction = "IND_F";
		crew = "I_UAV_AI";
		class assembleInfo //sources - ["A3_Static_F"]
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"I_GMG_01_A_weapon_F", "I_HMG_01_support_F"};
			displayName = "";
		};
	};
	class StaticMortar: StaticWeapon //inherits 110 parameters from bin\config.bin/CfgVehicles/StaticWeapon, sources - ["A3_Data_F","A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
	{
		author = "Bohemia Interactive";
		class SpeechVariants //sources - ["A3_Data_F"]
		{
			class Default //sources - ["A3_Data_F"]
			{
				speechSingular[] = {"veh_static_mortar_s"};
				speechPlural[] = {"veh_static_mortar_p"};
			};
		};
		textSingular = "mortar";
		textPlural = "mortars";
		nameSound = "veh_static_mortar_s";
		_generalMacro = "StaticMortar";
		threat[] = {1, 0.5, 0};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/StaticWeapon/Turrets, sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
		{
			class MainTurret: MainTurret //inherits 21 parameters from bin\config.bin/CfgVehicles/StaticWeapon/Turrets/MainTurret, sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
			{
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
			};
		};
		displayName = "Mortar";
		accuracy = 0.12;
		cost = 10000;
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		icon = "iconStaticMortar";
    };
    class Mortar_01_base_F: StaticMortar //inherits 14 parameters from bin\config.bin/CfgVehicles/StaticMortar, sources - ["A3_Static_F_Mortar_01"]
	{
		features = "Randomization: No						<br />Camo selections: 1 - the whole weapon with pod						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: Just the weapon						<br />Slingload: No						<br />Cargo proxy indexes: None";
		author = "Bohemia Interactive";
		_generalMacro = "Mortar_01_base_F";
		scope = 0;
		displayname = "Mk6 Mortar";
		class Library //sources - ["A3_Static_F_Mortar_01"]
		{
			libTextDesc = "A classic 82 mm caliber mortar, equipped with a ballistic computer and easy to handle. It weighs only 21 kg and can fire various kinds of ammo: from HE (high explosive) to smokes, flares in support of infantry.";
		};
		transportSoldier = 0;
		cargoAction[] = {"Mortar_Gunner"};
		getInAction = "GetInMortar";
		getOutAction = "GetOutLow";
		editorSubcategory = "EdSubcat_Turrets";
		picture = "\A3\Static_f\Mortar_01\data\UI\Mortar_01_ca.paa";
		icon = "\A3\Static_f\Mortar_01\data\UI\map_Mortar_01_CA.paa";
		cost = 200000;
		accuracy = 0.25;
		threat[] = {1, 0.3, 0.1};
		EPEImpulseDamageCoef = 5;
		class Damage //sources - ["A3_Static_F_Mortar_01"]
		{
			tex[] = {};
			mat[] = {"A3\Static_f\Mortar_01\data\Mortar_01.rvmat", "A3\Static_f\Mortar_01\data\Mortar_01_damage.rvmat", "A3\Static_f\Mortar_01\data\Mortar_01_destruct.rvmat"};
		};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/StaticMortar/Turrets, sources - ["A3_Static_F_Mortar_01"]
		{
			class MainTurret: MainTurret //inherits 2 parameters from bin\config.bin/CfgVehicles/StaticMortar/Turrets/MainTurret, sources - ["A3_Static_F_Mortar_01"]
			{
				gunnerAction = "Mortar_Gunner";
				gunnergetInAction = "";
				gunnergetOutAction = "";
				weapons[] = {"mortar_82mm"};
				elevationMode = 1;
				initCamElev = 0;
				minCamElev = -35;
				maxCamElev = 35;
				initElev = 0;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				cameraDir = "look";
				discreteDistance[] = {100, 200, 300, 400, 500, 700, 1000, 1600, 2000, 2400, 2800};
				discreteDistanceCameraPoint[] = {"eye"};
				discreteDistanceInitIndex = 5;
				turretInfoType = "RscWeaponRangeArtillery";
				gunnerForceOptics = 1;
				memoryPointGunnerOptics = "eye";
				gunnerOpticsModel = "\A3\Weapons_F\acc\reticle_Mortar_01_F.p3d";
				class ViewOptics: ViewOptics //inherits 15 parameters from bin\config.bin/CfgVehicles/StaticWeapon/Turrets/MainTurret/ViewOptics, sources - ["A3_Static_F_Mortar_01"]
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.174;
					minFov = 0.0077778;
					maxFov = 0.14;
					visionMode[] = {"Normal", "NVG"};
				};
				minelev = -30;
				maxelev = 13;
				magazines[] = {"8Rnd_82mm_Mo_shells", "8Rnd_82mm_Mo_shells", "8Rnd_82mm_Mo_shells", "8Rnd_82mm_Mo_shells", "8Rnd_82mm_Mo_Flare_white", "8Rnd_82mm_Mo_Smoke_white"};
				ejectDeadGunner = 1;
			};
		};
		class EventHandlers //sources - ["A3_Static_F_Mortar_01"]
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		class DestructionEffects //sources - ["A3_Static_F_Mortar_01"]
		{
			class Smoke //sources - ["A3_Static_F_Mortar_01"]
			{
				simulation = "particles";
				type = "WeaponWreckSmoke";
				position = "destructionEffect";
				intensity = 1;
				interval = 1;
				lifeTime = 5;
			};
		};
		model = "\A3\static_f\Mortar_01\Mortar_01_F";
		artilleryScanner = 1;
		class assembleInfo //sources - ["A3_Static_F_Mortar_01"]
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"B_Mortar_01_weapon_F", "B_Mortar_01_support_F"};
			displayName = "";
		};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\A3\Static_f\Mortar_01\data\Mortar_01_CO.paa"};
	};
	class B_Mortar_01_F: Mortar_01_base_F //inherits 32 parameters from bin\config.bin/CfgVehicles/Mortar_01_base_F, sources - ["A3_Static_F_Mortar_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F_Mortar_01"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"optics", 0}, {"optics_stabilization", 0}, {"legs_zeroing", 0}, {"uplegs_zeroing", 0}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.685;
			verticalOffsetWorld = 0.035;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Mortar_01_F.jpg";
		_generalMacro = "B_Mortar_01_F";
		scope = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_Soldier_F";
		availableForSupportTypes[] = {"Artillery"};
	};
	class O_Mortar_01_F: Mortar_01_base_F //inherits 32 parameters from bin\config.bin/CfgVehicles/Mortar_01_base_F, sources - ["A3_Static_F_Mortar_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F_Mortar_01"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"optics", 0}, {"optics_stabilization", 0}, {"legs_zeroing", 0}, {"uplegs_zeroing", 0}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.685;
			verticalOffsetWorld = 0.035;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Mortar_01_F.jpg";
		_generalMacro = "O_Mortar_01_F";
		scope = 2;
		side = 0;
		faction = "OPF_F";
		crew = "O_Soldier_F";
		availableForSupportTypes[] = {"Artillery"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Static_f\Mortar_01\data\Mortar_01_OPFOR_CO.paa"};
		class assembleInfo: assembleInfo //inherits 5 parameters from bin\config.bin/CfgVehicles/Mortar_01_base_F/assembleInfo, sources - ["A3_Static_F_Mortar_01"]
		{
			dissasembleTo[] = {"O_Mortar_01_weapon_F", "O_Mortar_01_support_F"};
		};
	};
	class I_Mortar_01_F: Mortar_01_base_F //inherits 32 parameters from bin\config.bin/CfgVehicles/Mortar_01_base_F, sources - ["A3_Static_F_Mortar_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F_Mortar_01"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"optics", 0}, {"optics_stabilization", 0}, {"legs_zeroing", 0}, {"uplegs_zeroing", 0}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.685;
			verticalOffsetWorld = 0.035;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_Mortar_01_F.jpg";
		_generalMacro = "I_Mortar_01_F";
		scope = 2;
		crew = "I_soldier_F";
		side = 2;
		faction = "IND_F";
		availableForSupportTypes[] = {"Artillery"};
		class assembleInfo //sources - ["A3_Static_F_Mortar_01"]
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"I_Mortar_01_weapon_F", "I_Mortar_01_support_F"};
			displayName = "";
		};
	};
	class I_G_Mortar_01_F: Mortar_01_base_F //inherits 32 parameters from bin\config.bin/CfgVehicles/Mortar_01_base_F, sources - ["A3_Static_F_Mortar_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F_Mortar_01"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"optics", 0}, {"optics_stabilization", 0}, {"legs_zeroing", 0}, {"uplegs_zeroing", 0}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.685;
			verticalOffsetWorld = 0.035;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Mortar_01_F.jpg";
		_generalMacro = "I_G_Mortar_01_F";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "IND_G_F";
		crew = "I_G_Soldier_F";
		availableForSupportTypes[] = {"Artillery"};
	};
	class B_G_Mortar_01_F: I_G_Mortar_01_F //inherits 10 parameters from bin\config.bin/CfgVehicles/I_G_Mortar_01_F, sources - ["A3_Static_F_Mortar_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F_Mortar_01"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"optics", 0}, {"optics_stabilization", 0}, {"legs_zeroing", 0}, {"uplegs_zeroing", 0}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.685;
			verticalOffsetWorld = 0.035;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_G_Mortar_01_F.jpg";
		_generalMacro = "B_G_Mortar_01_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_G_F";
		crew = "B_G_Soldier_F";
	};
	class O_G_Mortar_01_F: I_G_Mortar_01_F //inherits 10 parameters from bin\config.bin/CfgVehicles/I_G_Mortar_01_F, sources - ["A3_Static_F_Mortar_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F_Mortar_01"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"optics", 0}, {"optics_stabilization", 0}, {"legs_zeroing", 0}, {"uplegs_zeroing", 0}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.685;
			verticalOffsetWorld = 0.035;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_G_Mortar_01_F.jpg";
		_generalMacro = "O_G_Mortar_01_F";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "OPF_G_F";
		crew = "O_G_Soldier_F";
	};
	class StaticSEARCHLight: StaticWeapon //inherits 110 parameters from bin\config.bin/CfgVehicles/StaticWeapon, sources - ["A3_Data_F","A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
	{
		author = "Bohemia Interactive";
		mapSize = 1;
		_generalMacro = "StaticSEARCHLight";
		threat[] = {0.1, 0.1, 0.1};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/StaticWeapon/Turrets, sources - ["A3_Static_F","A3_Static_F_AA_01","A3_Static_F_AT_01"]
		{
			class MainTurret: MainTurret //inherits 21 parameters from bin\config.bin/CfgVehicles/StaticWeapon/Turrets/MainTurret, sources - []
			{
			};
		};
		displayName = "Search Light";
		accuracy = 0.12;
		cost = 1000;
		icon = "iconStaticSearchlight";
    };
    class TargetSoldierBase: StaticWeapon //inherits 110 parameters from bin\config.bin/CfgVehicles/StaticWeapon, sources - ["A3_Structures_F_Training"]
	{
		author = "Bohemia Interactive";
		mapSize = 1.78;
		_generalMacro = "TargetSoldierBase";
		scope = 0;
		scopeCurator = 0;
		displayName = "Invisible Target Soldier";
		model = "\A3\Structures_F\Training\InvisibleTarget_F.p3d";
		editorSubcategory = "EdSubcat_Targets";
		vehicleClass = "Training";
		cost = 200000;
		accuracy = 0.05;
		destrType = "DestructNo";
		side = 5;
		alwaysTarget = 1;
		armor = 3;
		type = 0;
		class Turrets //sources - ["A3_Structures_F_Training"]
		{
			class MainTurret: NewTurret //inherits 115 parameters from bin\config.bin/CfgVehicles/AllVehicles/NewTurret, sources - ["A3_Structures_F_Training"]
			{
				body = "";
				gun = "";
			};
		};
	};
	class B_TargetSoldier: TargetSoldierBase //inherits 17 parameters from bin\config.bin/CfgVehicles/TargetSoldierBase, sources - ["A3_Structures_F_Training"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Structures_F_Training"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {"zasleh", "light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.017;
			verticalOffsetWorld = -0.015;
		};
		_generalMacro = "B_TargetSoldier";
		scope = 1;
		scopeCurator = 0;
		crew = "B_UAV_AI";
		typicalCargo[] = {"B_UAV_AI"};
		side = 1;
		faction = "BLU_F";
	};
	class O_TargetSoldier: TargetSoldierBase //inherits 17 parameters from bin\config.bin/CfgVehicles/TargetSoldierBase, sources - ["A3_Structures_F_Training"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Structures_F_Training"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {"zasleh", "light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.017;
			verticalOffsetWorld = -0.015;
		};
		_generalMacro = "O_TargetSoldier";
		scope = 1;
		scopeCurator = 0;
		crew = "O_UAV_AI";
		typicalCargo[] = {"O_UAV_AI"};
		side = 0;
		faction = "OPF_F";
	};
	class I_TargetSoldier: TargetSoldierBase //inherits 17 parameters from bin\config.bin/CfgVehicles/TargetSoldierBase, sources - ["A3_Structures_F_Training"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Structures_F_Training"]
		{
			eden = 0;
			animate[] = {};
			hide[] = {"zasleh", "light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.017;
			verticalOffsetWorld = -0.015;
		};
		_generalMacro = "I_TargetSoldier";
		scope = 1;
		scopeCurator = 0;
		crew = "I_UAV_AI";
		typicalCargo[] = {"I_UAV_AI"};
		side = 2;
		faction = "IND_F";
	};
	class Pod_Heli_Transport_04_crewed_base_F: StaticWeapon //inherits 110 parameters from bin\config.bin/CfgVehicles/StaticWeapon, sources - ["A3_Air_F_Heli_Heli_Transport_04"]
	{
		author = "Bohemia Interactive";
		mapSize = 6.77;
		_generalMacro = "Pod_Heli_Transport_04_crewed_base_F";
		scope = 0;
		scopeCurator = 0;
		displayName = "Taru Pod";
		model = "\A3\Weapons_F\empty.p3d";
		DLC = "Heli";
		icon = "iconObject_2x3";
		editorSubcategory = "EdSubcat_Storage";
		vehicleClass = "Support";
		editorForceEmpty = 1;
		accuracy = 0.5;
		selectionDamage = "DamT_1";
		supplyRadius = -1;
		faction = "OPF_F";
		side = 0;
		ejectDeadCargo = 0;
		ejectDeadDriver = 0;
		crew = "O_helipilot_F";
		typicalCargo[] = {"O_Soldier_lite_F"};
		cargoCompartments[] = {"Compartment1"};
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		cargoDoors[] = {};
		cargoAction[] = {};
		memoryPointTaskMarker = "TaskMarker_1_pos";
		memoryPointSupply = "Supply_pos";
		memoryPointsGetInCargo = "Cargo_pos";
		memoryPointsGetInCargoDir = "Cargo_dir";
		waterLeakiness = 125;
		waterLinearDampingCoefY = 0.25;
		waterLinearDampingCoefX = 0.25;
		waterResistance = 0.1;
		waterResistanceCoef = 0.01;
		maximumLoad = 1000;
		transportMaxBackpacks = 25;
		transportMaxMagazines = 200;
		transportMaxWeapons = 25;
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1", "SlingLoadCargo2", "SlingLoadCargo3", "SlingLoadCargo4"};
		class Turrets //sources - []
		{
		};
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
		class EventHandlers: EventHandlers //inherits 0 parameters from bin\config.bin/CfgVehicles/All/EventHandlers, sources - ["A3_Air_F_Heli_Heli_Transport_04"]
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
		class TextureSources //sources - ["A3_Air_F_Heli_Heli_Transport_04"]
		{
			class Opfor //sources - ["A3_Air_F_Heli_Heli_Transport_04"]
			{
				displayName = "OPFOR";
				author = "Bohemia Interactive";
				textures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_CO.paa", "A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_CO.paa"};
				factions[] = {"OPF_F"};
			};
			class Black //sources - ["A3_Air_F_Heli_Heli_Transport_04"]
			{
				displayName = "Black";
				author = "Bohemia Interactive";
				textures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_Black_CO.paa", "A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_Black_CO.paa"};
				factions[] = {"OPF_F"};
			};
		};
		textureList[] = {"Opfor", 1};
	};
	class Static_Designator_01_base_F: StaticWeapon //inherits 110 parameters from bin\config.bin/CfgVehicles/StaticWeapon, sources - ["A3_Static_F_Mark_Designator_01"]
	{
		author = "Bohemia Interactive";
		mapSize = 0.7;
		_generalMacro = "Static_Designator_01_base_F";
		features = "Randomization: No						<br />Camo selections: 1 - the whole weapon with pod						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: Just the designator						<br />Slingload: No						<br />Cargo proxy indexes: None";
		scope = 0;
		DLC = "Mark";
		displayname = "Remote Designator";
		overviewPicture = "\A3\Data_F_Mark\Images\watermarkInfo_page11_ca.paa";
		transportSoldier = 0;
		cargoAction[] = {"Mortar_Gunner"};
		getInAction = "GetInMortar";
		getOutAction = "GetOutLow";
		editorSubcategory = "EdSubcat_Turrets";
		picture = "\A3\Static_F_Mark\Designator_01\Data\UI\Designator_01_CA.paa";
		icon = "\A3\Static_F_Mark\Designator_01\Data\UI\map_Designator_01_CA.paa";
		cost = 200000;
		accuracy = 0.25;
		threat[] = {1, 0.3, 0.1};
		isUav = 1;
		uavCameraGunnerPos = "eye";
		uavCameraGunnerDir = "look";
		selectionDamage = "DamT_1";
		epeImpulseDamageCoef = 60;
		extCameraPosition[] = {0, 0.5, -3};
		class Damage //sources - ["A3_Static_F_Mark_Designator_01"]
		{
			tex[] = {};
			mat[] = {"A3\Static_F_Mark\Designator_01\Data\LD01_remote.rvmat", "A3\Static_F_Mark\Designator_02\Data\remote_destruct.rvmat", "A3\Static_F_Mark\Designator_02\Data\remote_destruct.rvmat", "A3\Weapons_F_Mark\Binocular\Data\ltlm.rvmat", "A3\Static_F_Mark\Designator_02\Data\remote_destruct.rvmat", "A3\Static_F_Mark\Designator_02\Data\remote_destruct.rvmat"};
		};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/StaticWeapon/Turrets, sources - ["A3_Static_F_Mark_Designator_01"]
		{
			class MainTurret: MainTurret //inherits 21 parameters from bin\config.bin/CfgVehicles/StaticWeapon/Turrets/MainTurret, sources - ["A3_Static_F_Mark_Designator_01"]
			{
				soundElevation[] = {"A3\Sounds_F_Mark\arsenal\sfx\Remote_Cameras\Remote_Camera_NATO", 1, 1, 10};
				soundServo[] = {"A3\Sounds_F_Mark\arsenal\sfx\Remote_Cameras\Remote_Camera_servo_NATO", 0.562341, 1, 10};
				soundServoVertical[] = {"A3\Sounds_F_Mark\arsenal\sfx\Remote_Cameras\Remote_Camera_servo_vertical_NATO", 0.562341, 1, 10};
				gunnerInAction = "Disabled";
				gunnerAction = "Disabled";
				gunnergetInAction = "";
				gunnergetOutAction = "";
				weapons[] = {"Laserdesignator_mounted"};
				magazines[] = {"Laserbatteries"};
				animationSourceElevation = "MainElevation";
				gunBeg = "look";
				gunEnd = "eye";
				maxHorizontalRotSpeed = 2.4;
				maxVerticalRotSpeed = 2.4;
				initElev = 0;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				DesignatorDir = "look";
				gunnerForceOptics = 1;
				memoryPointGunnerOptics = "eye";
				gunnerOpticsModel = "\A3\Weapons_F_beta\Binocular\lasermarker_optics";
				turretInfoType = "RscOptics_LaserDesignator";
				class ViewOptics: ViewOptics //inherits 15 parameters from bin\config.bin/CfgVehicles/StaticWeapon/Turrets/MainTurret/ViewOptics, sources - ["A3_Static_F_Mark_Designator_01"]
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.1242;
					minFov = 0.0125;
					maxFov = 0.1242;
					visionMode[] = {"Normal", "NVG", "TI"};
					thermalMode[] = {2};
				};
			};
		};
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		class DestructionEffects //sources - ["A3_Static_F_Mark_Designator_01"]
		{
			class Smoke //sources - ["A3_Static_F_Mark_Designator_01"]
			{
				simulation = "particles";
				type = "WeaponWreckSmoke";
				position = "destructionEffect";
				intensity = 1;
				interval = 1;
				lifeTime = 5;
			};
		};
		model = "\A3\Static_F_Mark\Designator_01\Designator_01_F";
		class assembleInfo //sources - ["A3_Static_F_Mark_Designator_01"]
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"B_Static_Designator_01_weapon_F"};
			displayName = "";
		};
		class EventHandlers: EventHandlers //inherits 0 parameters from bin\config.bin/CfgVehicles/All/EventHandlers, sources - ["A3_Static_F_Mark_Designator_01"]
		{
			init = "(_this select 0) execVM """"\A3\Static_F_Mark\Designator_01\Scripts\init.sqf""""";
		};
		class AnimationSources: AnimationSources //inherits 0 parameters from bin\config.bin/CfgVehicles/All/AnimationSources, sources - ["A3_Static_F_Mark_Designator_01"]
		{
			class Init //sources - ["A3_Static_F_Mark_Designator_01"]
			{
				source = "user";
				animPeriod = 0.5;
				initPhase = 0;
			};
			class InitPiston //sources - ["A3_Static_F_Mark_Designator_01"]
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
	};
	class B_Static_Designator_01_F: Static_Designator_01_base_F //inherits 37 parameters from bin\config.bin/CfgVehicles/Static_Designator_01_base_F, sources - ["A3_Static_F_Mark_Designator_01"]
	{
		author = "Bohemia Interactive";
		mapSize = 0.9;
		class SimpleObject //sources - ["A3_Static_F_Mark_Designator_01"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"mainelevation_01", 0}, {"mainelevation_02", 0}, {"mainelevation_03", 0}, {"mainelevation_04", 0}, {"initturret", 0}, {"initgun", 0}, {"initelevation_01", 0}, {"initelevation_02", 0}, {"initelevation_03", 0}, {"initelevation_04", 0}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.506;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Static_Designator_01_F.jpg";
		_generalMacro = "B_Static_Designator_01_F";
		scope = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_UAV_AI";
		displayname = "Remote Designator [NATO]";
	};
	class Static_Designator_02_base_F: StaticWeapon //inherits 110 parameters from bin\config.bin/CfgVehicles/StaticWeapon, sources - ["A3_Static_F_Mark_Designator_02"]
	{
		author = "Bohemia Interactive";
		mapSize = 0.57;
		_generalMacro = "Static_Designator_02_base_F";
		features = "Randomization: No						<br />Camo selections: 1 - the whole weapon with pod						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: Just the designator						<br />Slingload: No						<br />Cargo proxy indexes: None";
		scope = 0;
		DLC = "Mark";
		displayname = "Remote Designator [CSAT]";
		transportSoldier = 0;
		cargoAction[] = {"Mortar_Gunner"};
		getInAction = "GetInMortar";
		getOutAction = "GetOutLow";
		editorSubcategory = "EdSubcat_Turrets";
		picture = "\A3\Static_F_Mark\Designator_02\Data\UI\Designator_02_CA.paa";
		icon = "\A3\Static_F_Mark\Designator_02\Data\UI\map_Designator_02_CA.paa";
		cost = 200000;
		accuracy = 0.25;
		threat[] = {1, 0.3, 0.1};
		isUav = 1;
		uavCameraGunnerPos = "eye";
		uavCameraGunnerDir = "look";
		selectionDamage = "DamT_1";
		epeImpulseDamageCoef = 55;
		extCameraPosition[] = {0, 0.5, -3};
		class Damage //sources - ["A3_Static_F_Mark_Designator_02"]
		{
			tex[] = {};
			mat[] = {"A3\Static_F_Mark\Designator_02\Data\LD02_remote.rvmat", "A3\Static_F_Mark\Designator_02\Data\remote_destruct.rvmat", "A3\Static_F_Mark\Designator_02\Data\remote_destruct.rvmat", "A3\Weapons_F_Mark\Binocular\Data\LD02_body.rvmat", "A3\Static_F_Mark\Designator_02\Data\remote_destruct.rvmat", "A3\Static_F_Mark\Designator_02\Data\remote_destruct.rvmat"};
		};
		class Turrets: Turrets //inherits 1 parameters from bin\config.bin/CfgVehicles/StaticWeapon/Turrets, sources - ["A3_Static_F_Mark_Designator_02"]
		{
			class MainTurret: MainTurret //inherits 21 parameters from bin\config.bin/CfgVehicles/StaticWeapon/Turrets/MainTurret, sources - ["A3_Static_F_Mark_Designator_02"]
			{
				soundElevation[] = {"A3\Sounds_F_Mark\arsenal\sfx\Remote_Cameras\Remote_Camera_CSAT", 1, 1, 10};
				soundServo[] = {"A3\Sounds_F_Mark\arsenal\sfx\Remote_Cameras\Remote_Camera_servo_CSAT", 0.398107, 1, 10};
				soundServoVertical[] = {"A3\Sounds_F_Mark\arsenal\sfx\Remote_Cameras\Remote_Camera_servo_vertical_CSAT", 0.562341, 1, 10};
				gunnerInAction = "Disabled";
				gunnerAction = "Disabled";
				gunnergetInAction = "";
				gunnergetOutAction = "";
				weapons[] = {"Laserdesignator_mounted"};
				magazines[] = {"Laserbatteries"};
				animationSourceElevation = "MainElevation";
				gunBeg = "look";
				gunEnd = "eye";
				maxHorizontalRotSpeed = 2.6;
				maxVerticalRotSpeed = 2.6;
				initElev = 0;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				DesignatorDir = "look";
				gunnerForceOptics = 1;
				memoryPointGunnerOptics = "eye";
				gunnerOpticsModel = "\A3\Weapons_F_Mark\Reticle\optics_laserDesignator_02.p3d";
				turretInfoType = "RscOptics_LaserDesignator_02";
				class ViewOptics: ViewOptics //inherits 15 parameters from bin\config.bin/CfgVehicles/StaticWeapon/Turrets/MainTurret/ViewOptics, sources - ["A3_Static_F_Mark_Designator_02"]
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.09375;
					minFov = 0.01786;
					maxFov = 0.09375;
					visionMode[] = {"Normal", "NVG", "TI"};
					thermalMode[] = {2};
				};
			};
		};
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		class DestructionEffects //sources - ["A3_Static_F_Mark_Designator_02"]
		{
			class Smoke //sources - ["A3_Static_F_Mark_Designator_02"]
			{
				simulation = "particles";
				type = "WeaponWreckSmoke";
				position = "destructionEffect";
				intensity = 1;
				interval = 1;
				lifeTime = 5;
			};
		};
		model = "\A3\Static_F_Mark\Designator_02\Designator_02_F";
		class assembleInfo //sources - ["A3_Static_F_Mark_Designator_02"]
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"O_Static_Designator_02_weapon_F"};
			displayName = "";
		};
		class EventHandlers: EventHandlers //inherits 0 parameters from bin\config.bin/CfgVehicles/All/EventHandlers, sources - ["A3_Static_F_Mark_Designator_02"]
		{
			init = "(_this select 0) execVM """"\A3\Static_F_Mark\Designator_02\Scripts\init.sqf""""";
		};
		class AnimationSources: AnimationSources //inherits 0 parameters from bin\config.bin/CfgVehicles/All/AnimationSources, sources - ["A3_Static_F_Mark_Designator_02"]
		{
			class Init //sources - ["A3_Static_F_Mark_Designator_02"]
			{
				source = "user";
				animPeriod = 0.5;
				initPhase = 0;
			};
			class InitPiston //sources - ["A3_Static_F_Mark_Designator_02"]
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
	};
	class O_Static_Designator_02_F: Static_Designator_02_base_F //inherits 36 parameters from bin\config.bin/CfgVehicles/Static_Designator_02_base_F, sources - ["A3_Static_F_Mark_Designator_02"]
	{
		author = "Bohemia Interactive";
		mapSize = 0.75;
		class SimpleObject //sources - ["A3_Static_F_Mark_Designator_02"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"mainelevation_01", 0}, {"mainelevation_02", 0}, {"mainelevation_03", 0}, {"mainelevation_04", 0}, {"mainelevation_05", 0}, {"initturret", 0}, {"initgun", 0}, {"initelevation_01", 0}, {"initelevation_02", 0}, {"initelevation_03", 0}, {"initelevation_04", 0}, {"initelevation_05", 0}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.476;
			verticalOffsetWorld = -0.003;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Static_Designator_02_F.jpg";
		_generalMacro = "O_Static_Designator_02_F";
		scope = 2;
		side = 0;
		faction = "OPF_F";
		crew = "O_UAV_AI";
	};
	class B_T_Static_AA_F: B_static_AA_F //inherits 11 parameters from bin\config.bin/CfgVehicles/B_static_AA_F, sources - ["A3_Static_F_Exp_AA_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F_Exp_AA_01"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"mainturret_destructx", 0}, {"mainturret_destructy", 0}, {"mainturret_destructz", 0}, {"maingun_destructx", 0}, {"maingun_destructy", 0}, {"maingun_destructz", 0}, {"magazine_destruct", 0}, {"ammo_belt_destruct", 0}, {"bolt_destruct", 0}, {"charging_handle_destruct", 0}, {"damagehidevez_destruct", 0}, {"damagehidehlaven_destruct", 0}, {"damagehiderecoil_destruct", 0}, {"turret_shake", 0}, {"turret_shake_aside", 0}, {"magazine_hide", 0}, {"ammo_belt_hide", 0}, {"muzzleflash", 0}, {"addautonomous_unhide", 0}, {"bullet001_reload_hide", 0}, {"bullet002_reload_hide", 0}, {"bullet003_reload_hide", 0}, {"bullet004_reload_hide", 0}, {"bullet005_reload_hide", 0}, {"bullet006_reload_hide", 0}, {"bullet007_reload_hide", 0}, {"bullet008_reload_hide", 0}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.978;
			verticalOffsetWorld = 0.003;
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Static_AA_F.jpg";
		_generalMacro = "B_T_Static_AA_F";
		faction = "BLU_T_F";
		crew = "B_T_Soldier_F";
		hiddenSelections[] = {"camo_launcher", "camo_tube"};
		hiddenSelectionsTextures[] = {"\a3\weapons_f_exp\launchers\titan\data\launch_b_titan_tna_f_01_co.paa", "\a3\weapons_f_exp\launchers\titan\data\launch_b_titan_tna_f_02_co.paa"};
	};
	class B_T_Static_AT_F: B_static_AT_F //inherits 11 parameters from bin\config.bin/CfgVehicles/B_static_AT_F, sources - ["A3_Static_F_Exp_AT_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F_Exp_AT_01"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"mainturret_destructx", 0}, {"mainturret_destructy", 0}, {"mainturret_destructz", 0}, {"maingun_destructx", 0}, {"maingun_destructy", 0}, {"maingun_destructz", 0}, {"magazine_destruct", 0}, {"ammo_belt_destruct", 0}, {"bolt_destruct", 0}, {"charging_handle_destruct", 0}, {"damagehidevez_destruct", 0}, {"damagehidehlaven_destruct", 0}, {"damagehiderecoil_destruct", 0}, {"turret_shake", 0}, {"turret_shake_aside", 0}, {"magazine_hide", 0}, {"ammo_belt_hide", 0}, {"muzzleflash", 0}, {"addautonomous_unhide", 0}, {"bullet001_reload_hide", 0}, {"bullet002_reload_hide", 0}, {"bullet003_reload_hide", 0}, {"bullet004_reload_hide", 0}, {"bullet005_reload_hide", 0}, {"bullet006_reload_hide", 0}, {"bullet007_reload_hide", 0}, {"bullet008_reload_hide", 0}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.977;
			verticalOffsetWorld = 0.003;
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Static_AT_F.jpg";
		_generalMacro = "B_T_Static_AT_F";
		faction = "BLU_T_F";
		crew = "B_T_Soldier_F";
		hiddenSelections[] = {"camo_launcher", "camo_tube"};
		hiddenSelectionsTextures[] = {"\a3\weapons_f_exp\launchers\titan\data\launch_B_Titan_tna_F_01_co.paa", "\a3\weapons_f_exp\launchers\titan\data\launch_b_titan_short_tna_f_02_co.paa"};
	};
	class B_T_GMG_01_F: B_GMG_01_F //inherits 9 parameters from bin\config.bin/CfgVehicles/B_GMG_01_F, sources - ["A3_Static_F_Exp_GMG_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F_Exp_GMG_01"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"mainturret_destructx", 0}, {"mainturret_destructy", 0}, {"mainturret_destructz", 0}, {"maingun_destructx", 0}, {"maingun_destructy", 0}, {"maingun_destructz", 0}, {"magazine_destruct", 0}, {"ammo_belt_destruct", 0}, {"bolt_destruct", 0}, {"charging_handle_destruct", 0}, {"damagehidevez_destruct", 0}, {"damagehidehlaven_destruct", 0}, {"damagehiderecoil_destruct", 0}, {"ammo_belt_rotation", 0}, {"barrel_recoil", 0}, {"bolt_recoil", 0}, {"turret_shake", 0}, {"turret_shake_backside", 0}, {"turret_shake_aside", 0}, {"bolt_reload_begin", 0}, {"bolt_reload_end", 0}, {"magazine_hide", 0}, {"ammo_belt_hide", 0}, {"muzzleflash", 0}, {"zaslehrot", 0}, {"addautonomous_unhide", 0}, {"bullet001_reload_hide", 1}, {"bullet002_reload_hide", 1}, {"bullet003_reload_hide", 1}, {"bullet004_reload_hide", 1}, {"bullet005_reload_hide", 1}, {"bullet006_reload_hide", 1}, {"bullet007_reload_hide", 1}, {"bullet008_reload_hide", 1}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.984;
			verticalOffsetWorld = 0.101;
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_GMG_01_F.jpg";
		_generalMacro = "B_T_GMG_01_F";
		faction = "BLU_T_F";
		crew = "B_T_Soldier_F";
		class AssembleInfo //sources - ["A3_Static_F_Exp_GMG_01"]
		{
			displayName = "";
			assembleTo = "";
			base = "";
			primary = 0;
			dissasembleTo[] = {"B_GMG_01_Weapon_grn_F", "B_HMG_01_support_grn_F"};
		};
	};
	class B_T_HMG_01_F: B_HMG_01_F //inherits 10 parameters from bin\config.bin/CfgVehicles/B_HMG_01_F, sources - ["A3_Static_F_Exp_HMG_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F_Exp_HMG_01"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"mainturret_destructx", 0}, {"mainturret_destructy", 0}, {"mainturret_destructz", 0}, {"maingun_destructx", 0}, {"maingun_destructy", 0}, {"maingun_destructz", 0}, {"magazine_destruct", 0}, {"ammo_belt_destruct", 0}, {"bolt_destruct", 0}, {"charging_handle_destruct", 0}, {"damagehidevez_destruct", 0}, {"damagehidehlaven_destruct", 0}, {"damagehiderecoil_destruct", 0}, {"ammo_belt_rotation", 0}, {"barrel_recoil", 0}, {"bolt_recoil", 0}, {"turret_shake", 0}, {"turret_shake_backside", 0}, {"turret_shake_aside", 0}, {"bolt_reload_begin", 0}, {"bolt_reload_end", 0}, {"charging_handle_reload_begin", 0}, {"charging_handle_reload_end", 0}, {"magazine_hide", 0}, {"ammo_belt_hide", 0}, {"muzzleflash", 0}, {"zaslehrot", 0}, {"addautonomous_unhide", 0}, {"bullet001_reload_hide", 1}, {"bullet002_reload_hide", 1}, {"bullet003_reload_hide", 1}, {"bullet004_reload_hide", 1}, {"bullet005_reload_hide", 1}, {"bullet006_reload_hide", 1}, {"bullet007_reload_hide", 1}, {"bullet008_reload_hide", 1}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.054;
			verticalOffsetWorld = 0.075;
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_HMG_01_F.jpg";
		_generalMacro = "B_T_HMG_01_F";
		faction = "BLU_T_F";
		crew = "B_T_Soldier_F";
		class AssembleInfo //sources - ["A3_Static_F_Exp_HMG_01"]
		{
			displayName = "";
			assembleTo = "";
			base = "";
			primary = 0;
			dissasembleTo[] = {"B_HMG_01_Weapon_grn_F", "B_HMG_01_support_grn_F"};
		};
	};
	class B_T_Mortar_01_F: B_Mortar_01_F //inherits 9 parameters from bin\config.bin/CfgVehicles/B_Mortar_01_F, sources - ["A3_Static_F_Exp_Mortar_01"]
	{
		author = "Bohemia Interactive";
		class SimpleObject //sources - ["A3_Static_F_Exp_Mortar_01"]
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"optics", 0}, {"optics_stabilization", 0}, {"legs_zeroing", 0}, {"uplegs_zeroing", 0}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.685;
			verticalOffsetWorld = 0.035;
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Mortar_01_F.jpg";
		_generalMacro = "B_T_Mortar_01_F";
		faction = "BLU_T_F";
		crew = "B_T_Soldier_F";
		class AssembleInfo //sources - ["A3_Static_F_Exp_Mortar_01"]
		{
			displayName = "";
			assembleTo = "";
			base = "";
			primary = 0;
			dissasembleTo[] = {"B_Mortar_01_Weapon_grn_F", "B_Mortar_01_support_grn_F"};
		};
	};

};