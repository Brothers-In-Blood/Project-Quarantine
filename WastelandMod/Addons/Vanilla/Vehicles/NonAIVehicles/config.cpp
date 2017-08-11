class cfgPatches
{
	class BIB_Wasteland_Vehicles_NonAI
	{
		author="BIB_Monkey";
		name="BIB Wasteland MOD";
		url="http://www.bibgaming.com";
		addonRootClass="IB_Wasteland_Vehicles";
		requiredAddons[]=
		{
			"IB_Wasteland_Vehicles"
		};
		requiredVersion=0.1;
		units[]=
		{
		};
		weapons[]={};
	};
};



class CfgNonAIVehicles //sources - ["A3_Data_F","A3_Editor_F","A3_Structures_F_Bridges","A3_Structures_F_Mil_Flags","A3_Structures_F_Naval_Piers","A3_Animals_F","A3_Animals_F_Kestrel","A3_Animals_F_Seagull","A3_Signs_F","A3_Weapons_F","A3_Characters_F","A3_Characters_F_Heads","A3_Characters_F_Proxies","A3_Air_F","A3_Air_F_Beta_Heli_Attack_02","A3_Armor_F_Beta_APC_Tracked_02","A3_Armor_F_Gamma_MBT_02","A3_Soft_F","A3_Soft_F_EPC_Truck_03","A3_Data_F_Curator_Eagle","A3_Structures_F_Heli_Ind_Airport","A3_3DEN","A3_Structures_F_Exp_Infrastructure_Bridges","A3_Weapons_F_Exp","A3_Air_F_Exp_VTOL_01","A3_Air_F_Exp_VTOL_02","A3_Weapons_F_Jets"]
{
	access = 0;
	class EmptyDetector //sources - ["A3_Ui_F","A3_3DEN"]
	{
		scope = 2;
		simulation = "detector";
		model = "";
		selectionFabric = "latka";
		icon = "\a3\Ui_f\data\IGUI\Cfg\IslandMap\iconSensor_ca.paa";
		displayName = "Trigger";
		class AttributeValues //sources - ["A3_3DEN"]
		{
			size2[] = {0, 0};
			size3[] = {0, 0, -1};
		};
	};
	class StreetLamp //sources - []
	{
		model = "";
		destrType = "DestructTree";
		simulation = "StreetLamp";
		animated = 0;
		colorDiffuse[] = {0.9, 0.8, 0.6};
		colorAmbient[] = {0.1, 0.1, 0.1};
		brightness = 0.2;
		class HitPoints //sources - []
		{
			class HitBulb //sources - []
			{
				armor = 1;
				material = 60;
				name = "lampa";
				passThrough = 1;
				explosionShielding = 1;
			};
		};
		armorStructural = 1;
		class Reflectors //sources - []
		{
			class LampLight //sources - []
			{
				color[] = {0.9, 0.8, 0.6, 1};
				ambient[] = {0.1, 0.1, 0.1, 1};
				position = "Light";
				direction = "";
				hitpoint = "lampa";
				selection = "";
				size = 0.5;
				brightness = 0.2;
			};
		};
		aggregateReflectors[] = {};
		armorLights = 1;
	};
	class EditCursor //sources - []
	{
		model = "\core\cursor\cursor.p3d";
		simulation = "EditCursor";
	};
	class ObjView //sources - []
	{
		scope = 2;
		model = "";
		simulation = "ObjView";
	};
	class Temp //sources - []
	{
		scope = 2;
		model = "";
		simulation = "Temp";
	};
	class Bird //sources - []
	{
		scope = 0;
		model = "";
		animated = 0;
		simulation = "SeaGull";
		reversed = 0;
		minHeight = 5;
		avgHeight = 10;
		maxHeight = 50;
		minSpeed = -0.5;
		maxSpeed = 20;
		acceleration = 7;
		turning = 1;
		straightDistance = 50;
		flySound[] = {"", 0.0316228, 1, 1};
		singSound[] = {"", 0.0316228, 1, 1};
		canBeShot = 1;
		airFriction2[] = {25, 12, 2.5};
		airFriction1[] = {1500, 700, 100};
		airFriction0[] = {40, 20, 60};
	};
	class Insect: Bird //inherits 19 parameters from bin\config.bin/CfgNonAIVehicles/Bird, sources - []
	{
		animated = 0;
		minHeight = -0.1;
		avgHeight = 1.2;
		maxHeight = 2;
		minSpeed = -0.1;
		maxSpeed = 5;
		acceleration = 25;
		straightDistance = 2;
		turning = 2;
		flySound[] = {"", 0.0316228, 1, 1};
		singSound[] = {"", 0.0316228, 1, 1};
		canBeShot = 0;
		airFriction2[] = {125, 12, 2.5};
		airFriction1[] = {7500, 700, 100};
		airFriction0[] = {200, 20, 60};
	};
	class SeaGull: Bird //inherits 19 parameters from bin\config.bin/CfgNonAIVehicles/Bird, sources - ["A3_Animals_F_Seagull"]
	{
		scope = 2;
		reversed = 0;
		htMin = 60;
		htMax = 1800;
		afMax = 30;
		mfMax = 0;
		mFact = 1;
		tBody = 37;
		model = "\A3\Animals_F\Seagull\Seagull.p3d";
		singSound[] = {"A3\Sounds_F\environment\animals\birds\seagul1", 0.891251, 1, 200};
		moves = "CfgMovesBird";
		canBeShot = 0;
	};
	class RopeSegment //sources - ["A3_Data_F_Hook"]
	{
		access = 0;
		scope = 2;
		displayName = "";
		simulation = "ropesegment";
		autocenter = 0;
		animated = 0;
		model = "\A3\Data_f\proxies\Rope\rope.p3d";
	};
	class RopeEnd: RopeSegment //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/RopeSegment, sources - ["A3_Data_F_Hook"]
	{
		access = 0;
		scope = 2;
		model = "\A3\Data_f\Hook\Hook_F.p3d";
	};
	class Camera //sources - ["A3_Ui_F"]
	{
		scope = 2;
		model = "";
		simulation = "Camera";
		crossHairs = "\A3\ui_f\data\igui\cfg\nonaivehicles\camera_ca.paa";
	};
	class CamConstruct //sources - []
	{
		scope = 2;
		model = "";
		simulation = "CamConstruct";
		radius = 125;
		maxHAL = 30;
		crossHairs = "#(argb,8,8,3)color(1,1,1,1)";
	};
	class CamCurator //sources - []
	{
		scope = 2;
		model = "";
		simulation = "CamCurator";
		radius = 125;
		maxHAL = 30;
		crossHairs = "#(argb,8,8,3)color(1,1,1,1)";
	};
	class ProxyWeapon //sources - []
	{
		autocenter = 0;
		scope = 2;
		reversed = 0;
		animated = 0;
		shadow = 1;
		model = "";
		simulation = "ProxyWeapon";
	};
	class ProxyPistol //sources - []
	{
		autocenter = 0;
		scope = 2;
		animated = 0;
		model = "";
		shadow = 1;
		simulation = "ProxyInventoryOld";
		inventoryType = "Handgun";
	};
	class ProxyLauncher //sources - []
	{
		autocenter = 0;
		scope = 2;
		animated = 0;
		shadow = 1;
		model = "";
		simulation = "ProxySecWeapon";
	};
	class ProxyRightHand //sources - []
	{
		autocenter = 0;
		scope = 2;
		animated = 0;
		model = "";
		shadow = 1;
		simulation = "ProxyInventoryOld";
		inventoryType = "RightHand";
	};
	class ProxyLeftHand //sources - []
	{
		autocenter = 0;
		scope = 2;
		animated = 0;
		model = "";
		shadow = 1;
		simulation = "ProxyInventoryOld";
		inventoryType = "LeftHand";
	};
	class ProxyGoggles //sources - []
	{
		autocenter = 0;
		scope = 2;
		animated = 0;
		model = "";
		shadow = 1;
		simulation = "ProxyInventoryOld";
		inventoryType = "Goggles";
	};
	class ProxyEarPhones //sources - []
	{
		autocenter = 0;
		scope = 2;
		animated = 0;
		model = "";
		shadow = 1;
		simulation = "ProxyInventoryOld";
		inventoryType = "EarPhones";
	};
	class Proxyus_bag //sources - []
	{
		reversed = 1;
		autocenter = 0;
		scope = 2;
		animated = 0;
		model = "";
		shadow = 1;
		simulation = "ProxyInventoryOld";
		inventoryType = "Backpack";
	};
	class ProxyHide //sources - []
	{
		autocenter = 0;
		scope = 2;
		animated = 0;
		model = "";
		simulation = "alwayshide";
	};
	class ProxyWreck //sources - []
	{
		autocenter = 0;
		scope = 0;
		animated = 0;
		model = "";
		simulation = "alwaysshow";
	};
	class ProxyRetex //sources - []
	{
		autocenter = 0;
		scope = 0;
		animated = 0;
		model = "";
		simulation = "proxyretex";
		hiddenSelections[] = {};
	};
	class ProxyCrew //sources - []
	{
		autocenter = 0;
		scope = 1;
		model = "";
		shadow = 1;
		simulation = "proxycrew";
		crewPosition = "CPDriver";
	};
	class ProxyCommander: ProxyCrew //inherits 6 parameters from bin\config.bin/CfgNonAIVehicles/ProxyCrew, sources - []
	{
		crewPosition = "CPCommander";
	};
	class ProxyDriver: ProxyCrew //inherits 6 parameters from bin\config.bin/CfgNonAIVehicles/ProxyCrew, sources - []
	{
		crewPosition = "CPDriver";
	};
	class ProxyGunner: ProxyCrew //inherits 6 parameters from bin\config.bin/CfgNonAIVehicles/ProxyCrew, sources - []
	{
		crewPosition = "CPGunner";
	};
	class ProxyCargo: ProxyCrew //inherits 6 parameters from bin\config.bin/CfgNonAIVehicles/ProxyCrew, sources - []
	{
		crewPosition = "CPCargo";
	};
	class ProxyFlag //sources - ["A3_Characters_F"]
	{
		autocenter = 0;
		scope = 2;
		reversed = 0;
		shadow = 1;
		simulation = "flag";
		model = "\A3\Characters_F\Proxies\flag";
		selectionFabric = "cloth";
	};
	class RandomShape //sources - []
	{
		models[] = {};
		autocenter = 0;
		scope = 2;
		reversed = 0;
		shadow = 1;
		model = "";
		simulation = "randomshape";
	};
	class ProxyAmmoInTruck //sources - []
	{
		autocenter = 0;
		scope = 2;
		reversed = 0;
		animated = 0;
		shadow = 1;
		model = "";
		simulation = "alwaysshow";
	};
	class ProxyPilot: ProxyDriver //inherits 1 parameters from bin\config.bin/CfgNonAIVehicles/ProxyDriver, sources - []
	{
	};
	class ProxyCommanderOut: ProxyCommander //inherits 1 parameters from bin\config.bin/CfgNonAIVehicles/ProxyCommander, sources - []
	{
	};
	class ProxyDriverOut: ProxyDriver //inherits 1 parameters from bin\config.bin/CfgNonAIVehicles/ProxyDriver, sources - []
	{
	};
	class ProxyGunnerOut: ProxyGunner //inherits 1 parameters from bin\config.bin/CfgNonAIVehicles/ProxyGunner, sources - []
	{
	};
	class ProxyGunner01: ProxyGunner //inherits 1 parameters from bin\config.bin/CfgNonAIVehicles/ProxyGunner, sources - []
	{
	};
	class ProxyCargoStanding: ProxyCargo //inherits 1 parameters from bin\config.bin/CfgNonAIVehicles/ProxyCargo, sources - []
	{
	};
	class ProxyBasicMotoDriver: ProxyDriver //inherits 1 parameters from bin\config.bin/CfgNonAIVehicles/ProxyDriver, sources - []
	{
	};
	class ProxyCargo01: ProxyCargo //inherits 1 parameters from bin\config.bin/CfgNonAIVehicles/ProxyCargo, sources - []
	{
	};
	class ProxyCargo02: ProxyCargo //inherits 1 parameters from bin\config.bin/CfgNonAIVehicles/ProxyCargo, sources - []
	{
	};
	class ProxyCargo03: ProxyCargo //inherits 1 parameters from bin\config.bin/CfgNonAIVehicles/ProxyCargo, sources - []
	{
	};
	class Editor_Proxy_Composition //sources - ["A3_Editor_F"]
	{
		scope = 1;
		model = "\A3\editor_f\data\composition_proxy\composition_proxy";
		displayName = "Editor proxy - Object composition";
		autocenter = 0;
		reversed = 0;
		animated = 0;
		simulation = "flag";
		selectionFabric = "";
	};
	class Bridge_base_F //sources - ["A3_Structures_F_Bridges","A3_Structures_F_Exp_Infrastructure_Bridges"]
	{
		class Destruction //sources - ["A3_Structures_F_Bridges","A3_Structures_F_Exp_Infrastructure_Bridges"]
		{
			animations[] = {};
		};
		scope = 0;
		scopeCurator = 0;
		displayName = "Bridge";
		model = "\A3\Weapons_F\empty.p3d";
		destrType = "DestructNo";
		simulation = "road";
		armor = 500;
		cost = 30000;
	};
	class Land_Bridge_01_F: Bridge_base_F //inherits 9 parameters from bin\config.bin/CfgNonAIVehicles/Bridge_base_F, sources - ["A3_Structures_F_Bridges"]
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "Bridge";
		model = "\A3\Structures_F\Bridges\Bridge_01_F.p3d";
	};
	class Land_Bridge_Asphalt_F: Bridge_base_F //inherits 9 parameters from bin\config.bin/CfgNonAIVehicles/Bridge_base_F, sources - ["A3_Structures_F_Bridges"]
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "Bridge";
		model = "\A3\Structures_F\Bridges\Bridge_Asphalt_F.p3d";
	};
	class Land_Bridge_Concrete_F: Bridge_base_F //inherits 9 parameters from bin\config.bin/CfgNonAIVehicles/Bridge_base_F, sources - ["A3_Structures_F_Bridges"]
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "Bridge";
		model = "\A3\Structures_F\Bridges\Bridge_Concrete_F.p3d";
	};
	class Land_Bridge_HighWay_F: Bridge_base_F //inherits 9 parameters from bin\config.bin/CfgNonAIVehicles/Bridge_base_F, sources - ["A3_Structures_F_Bridges"]
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "Bridge";
		model = "\A3\Structures_F\Bridges\Bridge_HighWay_F.p3d";
	};
	class ProxyFlag_F //sources - ["A3_Structures_F_Mil_Flags"]
	{
		scope = 1;
		model = "\a3\Structures_F\Mil\Flags\Flag_F.p3d";
		autocenter = 0;
		reversed = 0;
		selectionFabric = "latka";
		simulation = "flag";
	};
	class ProxyFlag_Asym_F: ProxyFlag_F //inherits 6 parameters from bin\config.bin/CfgNonAIVehicles/ProxyFlag_F, sources - ["A3_Structures_F_Mil_Flags"]
	{
		model = "\a3\Structures_F\Mil\Flags\Flag_Asym_F.p3d";
	};
	class Land_Pier_doubleside_F: Bridge_base_F //inherits 9 parameters from bin\config.bin/CfgNonAIVehicles/Bridge_base_F, sources - ["A3_Structures_F_Naval_Piers"]
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Pier (Concrete)";
		model = "\A3\Structures_F\Naval\Piers\Pier_doubleside_F.p3d";
		editorSubcategory = "EdSubcat_Seaports";
		icon = "iconObject_3x1";
	};
	class DragonFly: Insect //inherits 15 parameters from bin\config.bin/CfgNonAIVehicles/Insect, sources - ["A3_Animals_F"]
	{
		model = "\A3\Animals_f\dragonfly.p3d";
		flySound[] = {"\A3\sounds_f\dummysound", 0.000562341, 1, 1};
		fsm[] = {"Dragonfly"};
		straightDistance = 10;
		maxSpeed = 5;
	};
	class FireFly: Insect //inherits 15 parameters from bin\config.bin/CfgNonAIVehicles/Insect, sources - ["A3_Animals_F"]
	{
		model = "\A3\Animals_f\firefly.p3d";
		flySound[] = {"\A3\sounds_f\dummysound", 0.000562341, 1, 1};
		fsm[] = {"Butterfly"};
		minHeight = -0.1;
		avgHeight = 0.3;
		maxHeight = 1.5;
		minSpeed = -0.1;
		maxSpeed = 1;
		acceleration = 5;
		straightDistance = 10;
	};
	class Cicada: Insect //inherits 15 parameters from bin\config.bin/CfgNonAIVehicles/Insect, sources - ["A3_Animals_F"]
	{
		model = "\A3\Animals_f\Cicada.p3d";
		flySound[] = {"\A3\sounds_f\dummysound", 0.000562341, 1, 1};
		fsm[] = {"Butterfly"};
		minHeight = -0.1;
		avgHeight = 0.3;
		maxHeight = 1.5;
		minSpeed = -0.1;
		maxSpeed = 1;
		acceleration = 5;
		straightDistance = 10;
	};
	class ButterFly_random: Insect //inherits 15 parameters from bin\config.bin/CfgNonAIVehicles/Insect, sources - ["A3_Animals_F"]
	{
		model = "\A3\animals_f\butterfly.p3d";
		fsm[] = {"Butterfly"};
		moves = "CfgMovesButterfly";
		minHeight = -0.1;
		avgHeight = 0.3;
		maxHeight = 1.5;
		minSpeed = -0.1;
		maxSpeed = 1;
		acceleration = 5;
		straightDistance = 2;
		turning = 5;
		reversed = 0;
		autocenter = 0;
		class EventHandlers //sources - ["A3_Animals_F"]
		{
			init = "(_this select 0) call bis_fnc_animalRandomization;";
		};
	};
	class HouseFly: Insect //inherits 15 parameters from bin\config.bin/CfgNonAIVehicles/Insect, sources - ["A3_Animals_F"]
	{
		model = "\A3\animals_f\fly.p3d";
		flySound[] = {"\A3\sounds_f\dummysound", 0.001, 1, 1};
		minSpeed = -0.1;
		maxSpeed = 5;
		minHeight = -0.1;
		avgHeight = 1.4;
		maxHeight = 2;
		straightDistance = 0.5;
	};
	class HoneyBee: Insect //inherits 15 parameters from bin\config.bin/CfgNonAIVehicles/Insect, sources - ["A3_Animals_F"]
	{
		flySound[] = {"\A3\sounds_f\dummysound", 0.001, 1, 1};
		model = "\A3\animals_f\honeybee.p3d";
		minSpeed = -0.1;
		maxSpeed = 0.2;
		minHeight = -0.1;
		avgHeight = 0.2;
		maxHeight = 1;
		fsm[] = {"HoneyBee"};
		reversed = 0;
		straightDistance = 0.5;
	};
	class Mosquito: Insect //inherits 15 parameters from bin\config.bin/CfgNonAIVehicles/Insect, sources - ["A3_Animals_F"]
	{
		model = "\A3\animals_f\mosquito.p3d";
		flySound[] = {"\A3\sounds_f\dummysound", 0.00141254, 1, 1};
		minSpeed = -0.05;
		maxSpeed = 2;
		minHeight = -0.1;
		avgHeight = 1;
		maxHeight = 2;
		straightDistance = 0.4;
	};
	class Kestrel_Random_F: Bird //inherits 19 parameters from bin\config.bin/CfgNonAIVehicles/Bird, sources - ["A3_Animals_F_Kestrel"]
	{
		model = "\A3\Animals_F\kestrel\kestrel_F.p3d";
		singSound[] = {"A3\sounds_f\dummysound", 0.00177828, 1, 1};
		moves = "CfgMovesBird";
		minHeight = 60;
		avgHeight = 70;
		maxHeight = 80;
	};
	class Crowe: SeaGull //inherits 12 parameters from bin\config.bin/CfgNonAIVehicles/SeaGull, sources - ["A3_Animals_F_Seagull"]
	{
		model = "\A3\Animals_F\Seagull\Crowe.p3d";
		singSound[] = {"A3\Animals_F\Seagull\Data\crowe", 0.891251, 1, 200};
	};
	class ProxyFlagChecked_proxy_F //sources - ["A3_Signs_F"]
	{
		scope = 1;
		model = "\A3\Signs_F\SignSpecial\FlagChecked_proxy_F.p3d";
		autocenter = 0;
		reversed = 0;
		selectionFabric = "latka";
		simulation = "flag";
	};
	class ProxyDalekohled_Proxy: ProxyLeftHand //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyLeftHand, sources - []
	{
	};
	class ProxyBinoculars: ProxyLeftHand //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyLeftHand, sources - []
	{
	};
	class ProxyParasutista: ProxyDriver //inherits 1 parameters from bin\config.bin/CfgNonAIVehicles/ProxyDriver, sources - []
	{
	};
	class ProxyPlane_Flag_F: ProxyFlag //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyFlag, sources - ["A3_Weapons_F","A3_Air_F"]
	{
		model = "\A3\Air_F\Data\Plane_Flag_F";
		selectionFabric = "cloth";
	};
	class ProxyPlane_Flag_big_F: ProxyFlag //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyFlag, sources - ["A3_Weapons_F","A3_Air_F"]
	{
		model = "\A3\Air_F\Data\Plane_Flag_big_F";
		selectionFabric = "cloth";
	};
	class ProxyNVG_Proxy: ProxyGoggles //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyGoggles, sources - ["A3_Weapons_F"]
	{
		scope = 2;
		model = "\A3\Weapons_f\binocular\NVG_Proxy";
	};
	class ProxyNVG: ProxyGoggles //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyGoggles, sources - ["A3_Weapons_F"]
	{
		scope = 2;
		model = "\A3\Weapons_f\binocular\NVG_Proxy";
	};
	class ProxyNVG_Head: ProxyGoggles //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyGoggles, sources - ["A3_Weapons_F"]
	{
		model = "\A3\Weapons_f\binocular\NVG_Head";
	};
	class ProxyNVG_Head_Big: ProxyGoggles //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyGoggles, sources - ["A3_Weapons_F"]
	{
		model = "\A3\Weapons_f\binocular\NVG_Head_Big";
	};
	class ProxyNVG_Head_R: ProxyGoggles //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyGoggles, sources - ["A3_Weapons_F"]
	{
		model = "\A3\Weapons_f\binocular\NVG_Head_R";
	};
	class ProxyNVG_Head_C: ProxyGoggles //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyGoggles, sources - ["A3_Weapons_F"]
	{
		model = "\A3\Weapons_f\binocular\NVG_Head_C";
	};
	class ProxyNVG_Head_S: ProxyGoggles //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyGoggles, sources - ["A3_Weapons_F"]
	{
		model = "\A3\Weapons_f\binocular\NVG_Head_S";
	};
	class ProxyRadio_proxy: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F"]
	{
		simulation = "proxyradio";
	};
	class ProxyHeadGear_proxy: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F"]
	{
		simulation = "proxyheadgear";
	};
	class ProxyMissile_AT_03_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F","A3_Air_F_Beta_Heli_Attack_02"]
	{
		model = "\A3\Weapons_F\Ammo\Missile_AT_03_F";
		simulation = "maverickweapon";
	};
	class ProxyBomb_01_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F","A3_Air_F"]
	{
		model = "\A3\Weapons_F\Ammo\Bomb_01_F";
		simulation = "maverickweapon";
	};
	class ProxyBomb_02_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F"]
	{
		model = "\A3\Weapons_F\Ammo\Bomb_02_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_02_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F"]
	{
		model = "\A3\Weapons_F\Ammo\Missile_AA_02_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AT_02_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F"]
	{
		model = "\A3\Weapons_F\Ammo\Missile_AT_02_F";
		simulation = "maverickweapon";
	};
	class ProxyBomb_03_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F"]
	{
		model = "\A3\Weapons_F_EPC\Ammo\Bomb_03_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyBomb_04_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F"]
	{
		model = "\A3\Weapons_F_EPC\Ammo\Bomb_04_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_03_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F"]
	{
		model = "\A3\Weapons_F_EPC\Ammo\Missile_AA_03_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_04_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F"]
	{
		model = "\A3\Weapons_F_EPC\Ammo\Missile_AA_04_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AGM_01_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F"]
	{
		model = "\A3\Weapons_F_EPC\Ammo\Missile_AGM_01_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AGM_02_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F"]
	{
		model = "\A3\Weapons_F_EPC\Ammo\Missile_AGM_02_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyRocket_03_AP_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F"]
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_AP_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyRocket_03_FL_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F"]
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_FL_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyRocket_03_HE_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F"]
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyRocket_04_AP_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F"]
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_04_AP_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyRocket_04_FL_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F"]
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_04_FL_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyRocket_04_HE_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F"]
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_04_HE_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyPylonPod_3x_Missile_AGM_02_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F"]
	{
		model = "\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AGM_02_F.p3d";
		simulation = "pylonpod";
	};
	class ProxyFlag_soldier: ProxyFlag //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyFlag, sources - ["A3_Characters_F"]
	{
		model = "\A3\characters_f\flag_soldier";
		selectionFabric = "cloth";
	};
	class ProxyFlag_Vojak: ProxyFlag //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyFlag, sources - ["A3_Characters_F"]
	{
		model = "\A3\characters_f\flag_soldier";
		selectionFabric = "cloth";
	};
	class ProxyM16A2: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - []
	{
	};
	class ProxyGunner02: ProxyGunner //inherits 1 parameters from bin\config.bin/CfgNonAIVehicles/ProxyGunner, sources - []
	{
	};
	class ProxyCargo04: ProxyCargo //inherits 1 parameters from bin\config.bin/CfgNonAIVehicles/ProxyCargo, sources - []
	{
	};
	class ProxyBasicSittingCommander: ProxyCommander //inherits 1 parameters from bin\config.bin/CfgNonAIVehicles/ProxyCommander, sources - []
	{
	};
	class ProxyBasicSittingDriver: ProxyDriver //inherits 1 parameters from bin\config.bin/CfgNonAIVehicles/ProxyDriver, sources - []
	{
	};
	class ProxyBasicSittingGunner: ProxyGunner //inherits 1 parameters from bin\config.bin/CfgNonAIVehicles/ProxyGunner, sources - []
	{
	};
	class ProxyBasicSittingCargo: ProxyCargo //inherits 1 parameters from bin\config.bin/CfgNonAIVehicles/ProxyCargo, sources - []
	{
	};
	class ProxyBasicStandingCommander: ProxyCommander //inherits 1 parameters from bin\config.bin/CfgNonAIVehicles/ProxyCommander, sources - []
	{
	};
	class ProxyBasicStandingDriver: ProxyDriver //inherits 1 parameters from bin\config.bin/CfgNonAIVehicles/ProxyDriver, sources - []
	{
	};
	class ProxyBasicStandingGunner: ProxyGunner //inherits 1 parameters from bin\config.bin/CfgNonAIVehicles/ProxyGunner, sources - []
	{
	};
	class ProxyBasicStandingCargo: ProxyCargo //inherits 1 parameters from bin\config.bin/CfgNonAIVehicles/ProxyCargo, sources - []
	{
	};
	class ProxyBysta //sources - ["A3_Characters_F_Heads"]
	{
		autocenter = 0;
		scope = 2;
		reversed = 1;
		animated = 1;
		model = "";
		simulation = "ProxySubpart";
	};
	class ProxyGlasses: ProxyGoggles //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyGoggles, sources - ["A3_Characters_F_Proxies"]
	{
		model = "\A3\Characters_F\Proxies\glasses";
		simulation = "ProxyInventoryOld";
	};
	class ProxyBackpack: Proxyus_bag //inherits 8 parameters from bin\config.bin/CfgNonAIVehicles/Proxyus_bag, sources - ["A3_Characters_F_Proxies"]
	{
		autocenter = 0;
		scope = 2;
		reversed = 1;
		animated = 1;
		model = "\A3\Characters_F\Proxies\backpack";
	};
	class ProxyEquipment //sources - ["A3_Characters_F_Proxies"]
	{
		autocenter = 0;
		scope = 2;
		reversed = 1;
		animated = 1;
		model = "\A3\characters_f\ProxyModels\equipmentVest";
		shadow = 1;
		simulation = "ProxyInventoryOld";
		inventoryType = "Vest";
	};
	class ProxyHeadgear //sources - ["A3_Characters_F_Proxies"]
	{
		autocenter = 0;
		scope = 2;
		reversed = 1;
		animated = 1;
		model = "";
		shadow = 1;
		simulation = "ProxyInventoryOld";
		inventoryType = "Headgear";
	};
	class ProxyHMD //sources - ["A3_Characters_F_Proxies"]
	{
		autocenter = 0;
		scope = 2;
		reversed = 1;
		animated = 1;
		model = "";
		shadow = 1;
		simulation = "ProxyInventoryOld";
		inventoryType = "HMD";
	};
	class ProxyPistol_holstered //sources - ["A3_Characters_F_Proxies"]
	{
		autocenter = 0;
		scope = 1;
		reversed = 1;
		animated = 1;
		model = "\A3\Characters_F\Proxies\pistol_holstered";
		shadow = 1;
		simulation = "ProxyInventoryOld";
		inventoryType = "PistolHolstered";
	};
	class ProxyMissile_AT_01_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Air_F"]
	{
		model = "\A3\Weapons_F\Ammo\Missile_AT_01_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_01_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Air_F"]
	{
		model = "\A3\Weapons_F\Ammo\Missile_AA_01_F";
		simulation = "maverickweapon";
	};
	class ProxyPlane_Flag_medium_F: ProxyFlag //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyFlag, sources - ["A3_Air_F"]
	{
		model = "\A3\Air_F\Data\Plane_Flag_medium_F";
		selectionFabric = "cloth";
	};
	class ProxyPlane_Flag_medium_inv_F: ProxyPlane_Flag_big_F //inherits 2 parameters from bin\config.bin/CfgNonAIVehicles/ProxyPlane_Flag_big_F, sources - ["A3_Air_F"]
	{
		model = "\A3\Air_F\Data\Plane_Flag_medium_inv_F";
	};
	class proxyAPC_Tracked_02_cannon_wreck_F: ProxyRetex //inherits 6 parameters from bin\config.bin/CfgNonAIVehicles/ProxyRetex, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
	{
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		model = "\A3\Armor_F_Beta\APC_Tracked_02\APC_Tracked_02_cannon_wreck_F.p3d";
	};
	class proxyAPC_Tracked_02_aa_wreck_F: ProxyRetex //inherits 6 parameters from bin\config.bin/CfgNonAIVehicles/ProxyRetex, sources - ["A3_Armor_F_Beta_APC_Tracked_02"]
	{
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		model = "\A3\Armor_F_Beta\APC_Tracked_02\APC_Tracked_02_aa_wreck_F.p3d";
	};
	class proxyMBT_02_wreck_F: ProxyRetex //inherits 6 parameters from bin\config.bin/CfgNonAIVehicles/ProxyRetex, sources - ["A3_Armor_F_Gamma_MBT_02"]
	{
		hiddenSelections[] = {"camo1"};
		model = "\A3\Armor_F_Gamma\MBT_02\MBT_02_wreck_F.p3d";
	};
	class ProxyFlag_Auto: ProxyFlag //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyFlag, sources - ["A3_Soft_F"]
	{
		model = "\A3\data_f\proxies\Flags\flag_auto";
	};
	class ProxyFlag_Alone: ProxyFlag //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyFlag, sources - ["A3_Soft_F"]
	{
		model = "\A3\data_f\proxies\Flags\flag_alone";
	};
	class proxyTruck_03_base_wreck_F: ProxyRetex //inherits 6 parameters from bin\config.bin/CfgNonAIVehicles/ProxyRetex, sources - ["A3_Soft_F_EPC_Truck_03"]
	{
		model = "\A3\Soft_F_EPC\Truck_03\Truck_03_base_wreck_F.p3d";
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
	};
	class proxyTruck_03_device_wreck_F: ProxyRetex //inherits 6 parameters from bin\config.bin/CfgNonAIVehicles/ProxyRetex, sources - ["A3_Soft_F_EPC_Truck_03"]
	{
		model = "\A3\Soft_F_EPC\Truck_03\Truck_03_device_wreck_F.p3d";
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4", "Camo5"};
	};
	class proxyTruck_03_fuel_wreck_F: ProxyRetex //inherits 6 parameters from bin\config.bin/CfgNonAIVehicles/ProxyRetex, sources - ["A3_Soft_F_EPC_Truck_03"]
	{
		model = "\A3\Soft_F_EPC\Truck_03\Truck_03_fuel_wreck_F.p3d";
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
	};
	class proxyTruck_03_repair_wreck_F: ProxyRetex //inherits 6 parameters from bin\config.bin/CfgNonAIVehicles/ProxyRetex, sources - ["A3_Soft_F_EPC_Truck_03"]
	{
		model = "\A3\Soft_F_EPC\Truck_03\Truck_03_repair_wreck_F.p3d";
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
	};
	class Eagle_F: Bird //inherits 19 parameters from bin\config.bin/CfgNonAIVehicles/Bird, sources - ["A3_Data_F_Curator_Eagle"]
	{
		model = "\a3\Data_F_Curator\Eagle\eagle.p3d";
		singSound[] = {"A3\data_f_curator\sound\cfgNonAiVehicles\eagle_f_3", 1, 1, 300};
		canBeShot = 0;
		minHeight = 60;
		avgHeight = 70;
		maxHeight = 80;
		minSPeed = 5;
		maxSpeed = 25;
		acceleration = 5;
		turning = 0.5;
	};
	class ProxyWindsock_01_F //sources - ["A3_Structures_F_Heli_Ind_Airport"]
	{
		scope = 1;
		model = "\A3\Structures_F_Heli\Ind\Airport\Windsock_01_F.p3d";
		autocenter = 0;
		reversed = 0;
		selectionFabric = "latka";
		simulation = "windsock";
		cloth = "Windsock";
	};
	class EmptyDetectorAreaR50: EmptyDetector //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/EmptyDetector, sources - ["A3_3DEN"]
	{
		displayName = "Trigger (Ø 100 m)";
		class AttributeValues //sources - ["A3_3DEN"]
		{
			size2[] = {50, 50};
			size3[] = {50, 50, -1};
		};
	};
	class EmptyDetectorAreaR250: EmptyDetector //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/EmptyDetector, sources - ["A3_3DEN"]
	{
		displayName = "Trigger (Ø 500 m)";
		class AttributeValues //sources - ["A3_3DEN"]
		{
			size2[] = {250, 250};
			size3[] = {250, 250, -1};
		};
	};
	class EmptyDetectorArea10x10: EmptyDetector //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/EmptyDetector, sources - ["A3_3DEN"]
	{
		displayName = "Trigger (10x10x10 m)";
		class AttributeValues //sources - ["A3_3DEN"]
		{
			size2[] = {5, 5};
			size3[] = {5, 5, 5};
			IsRectangle = 1;
		};
	};
	class Land_BridgeConcrete_01_F: Bridge_base_F //inherits 9 parameters from bin\config.bin/CfgNonAIVehicles/Bridge_base_F, sources - ["A3_Structures_F_Exp_Infrastructure_Bridges"]
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "BridgeConcrete_01";
		model = "\A3\Structures_F_Exp\Infrastructure\Bridges\BridgeConcrete_01_F.p3d";
	};
	class Land_BridgeSea_01_F: Bridge_base_F //inherits 9 parameters from bin\config.bin/CfgNonAIVehicles/Bridge_base_F, sources - ["A3_Structures_F_Exp_Infrastructure_Bridges"]
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "BridgeSea_01";
		model = "\A3\Structures_F_Exp\Infrastructure\Bridges\BridgeSea_01_F.p3d";
	};
	class Land_BridgeSea_01_ramp_down_F: Bridge_base_F //inherits 9 parameters from bin\config.bin/CfgNonAIVehicles/Bridge_base_F, sources - ["A3_Structures_F_Exp_Infrastructure_Bridges"]
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "BridgeSea_01_ramp_down";
		model = "\A3\Structures_F_Exp\Infrastructure\Bridges\BridgeSea_01_ramp_down_F.p3d";
	};
	class Land_BridgeSea_01_ramp_F: Bridge_base_F //inherits 9 parameters from bin\config.bin/CfgNonAIVehicles/Bridge_base_F, sources - ["A3_Structures_F_Exp_Infrastructure_Bridges"]
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "BridgeSea_01_ramp";
		model = "\A3\Structures_F_Exp\Infrastructure\Bridges\BridgeSea_01_ramp_F.p3d";
	};
	class Land_BridgeSea_01_ramp_up_F: Bridge_base_F //inherits 9 parameters from bin\config.bin/CfgNonAIVehicles/Bridge_base_F, sources - ["A3_Structures_F_Exp_Infrastructure_Bridges"]
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "BridgeSea_01_ramp_up";
		model = "\A3\Structures_F_Exp\Infrastructure\Bridges\BridgeSea_01_ramp_up_F.p3d";
	};
	class Land_BridgeWooden_01_F: Bridge_base_F //inherits 9 parameters from bin\config.bin/CfgNonAIVehicles/Bridge_base_F, sources - ["A3_Structures_F_Exp_Infrastructure_Bridges"]
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "BridgeWooden_01";
		model = "\A3\Structures_F_Exp\Infrastructure\Bridges\BridgeWooden_01_F.p3d";
	};
	class ProxyMissile_AT_04_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Exp"]
	{
		model = "\A3\Weapons_F_Exp\Ammo\Missile_AT_04_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AT_04_fly_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Exp"]
	{
		model = "\A3\Weapons_F_Exp\Ammo\Missile_AT_04_fly_F.p3d";
		simulation = "maverickweapon";
	};
	class proxyVTOL_01_vehicle_wreck_F: ProxyRetex //inherits 6 parameters from bin\config.bin/CfgNonAIVehicles/ProxyRetex, sources - ["A3_Air_F_Exp_VTOL_01"]
	{
		model = "\A3\Air_F_Exp\VTOL_01\VTOL_01_vehicle_wreck_F.p3d";
		hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
	};
	class proxyVTOL_02_vehicle_wreck_F: ProxyRetex //inherits 6 parameters from bin\config.bin/CfgNonAIVehicles/ProxyRetex, sources - ["A3_Air_F_Exp_VTOL_02"]
	{
		model = "\A3\Air_F_Exp\VTOL_02\VTOL_02_vehicle_wreck_F.p3d";
		hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
	};
	class ProxyMissile_AA_05_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_05_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_05_fly_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_05_fly_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_06_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_06_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_06_fly_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_06_fly_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_07_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_07_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_07_fly_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_07_fly_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_08_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_08_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_08_fly_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_08_fly_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_09_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_09_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_09_fly_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_09_fly_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_10_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_10_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_10_fly_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_10_fly_F";
		simulation = "maverickweapon";
	};
	class ProxyPylonPod_Missile_AA_06_x1_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_x1_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AA_06_Rail_x1_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_Rail_x1_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AA_06_DualRail_x2_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_DualRail_x2_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AA_08_x1_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_08_x1_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AA_08_Rail_x1_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_08_Rail_x1_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AA_08_DualRail_x2_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_08_DualRail_x2_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AA_10_x1_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_x1_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AA_10_Rail_x1_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_Rail_x1_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AA_10_DualRail_x2_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_DualRail_x2_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Bomb_GBU12_04_x1_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Bomb_GBU12_04_x1_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Bomb_GBU12_04_DualRail_x2_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Bomb_GBU12_04_DualRail_x2_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AGM_02_x1_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_x1_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AGM_02_Rail_x1_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_Rail_x1_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AGM_02_DualRail_x2_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_DualRail_x2_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AA_05_x1_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_05_x1_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AA_07_x1_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_07_x1_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Bomb_KAB250_03_x1_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Bomb_KAB250_03_x1_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AGM_01_x1_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_01_x1_F";
		simulation = "pylonpod";
	};
	class ProxyMissile_SAM_01_fly_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_SAM_01_fly_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_SAM_02_fly_F: ProxyWeapon //inherits 7 parameters from bin\config.bin/CfgNonAIVehicles/ProxyWeapon, sources - ["A3_Weapons_F_Jets"]
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_SAM_02_fly_F";
		simulation = "maverickweapon";
	};
};
