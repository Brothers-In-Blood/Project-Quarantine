class cfgPatches
{
  class BIB_Wasteland_Magazines
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

class CfgMagazines //sources - ["A3_Weapons_F","A3_Weapons_F_Explosives","A3_Weapons_F_Kart","A3_Weapons_F_Mark","A3_Weapons_F_Exp","A3_Weapons_F_Jets"]
	{
		class Default //sources - []
		{
			scope = 0;
			value = 2;
			type = 0;
			simulation = "ProxyMagazines";
			model = "";
			picture = "";
			ammo = "";
			count = 1;
			displayName = "";
			displayNameShort = "";
			nameSound = "";
			weight = 0;
			maxLeadSpeed = 50;
			initSpeed = 100;
			reloadAction = "";
			useAction = 0;
			useActionTitle = "";
			modelSpecial = "";
			class InventoryPlacements //sources - []
			{
			};
			class Library //sources - []
			{
				libTextDesc = "";
			};
			descriptionShort = "";
			maxThrowHoldTime = 2;
			minThrowIntensityCoef = 0.3;
			maxThrowIntensityCoef = 1.4;
			quickReload = 0;
		};
		class FakeMagazine: Default //inherits 25 parameters from bin\config.bin/CfgMagazines/Default, sources - []
		{
			scope = 1;
			ammo = "FakeAmmo";
		};
		class FakeWeapon: FakeMagazine //inherits 2 parameters from bin\config.bin/CfgMagazines/FakeMagazine, sources - []
		{
		};
		class CA_Magazine: Default //inherits 25 parameters from bin\config.bin/CfgMagazines/Default, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 1;
			value = 1;
			displayName = "";
			model = "\A3\weapons_F\ammo\mag_univ.p3d";
			picture = "";
			modelSpecial = "";
			useAction = 0;
			useActionTitle = "";
			reloadAction = "";
			ammo = "";
			count = 30;
			type = 256;
			initSpeed = 900;
			selectionFireAnim = "zasleh";
			nameSound = "magazine";
			maxLeadSpeed = 23;
			weaponpoolavailable = 1;
			mass = 8;
		};
		class VehicleMagazine: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			type = 0;
			reloadAction = "";
			maxLeadSpeed = 100;
			weaponPoolAvailable = 0;
		};
		class CA_LauncherMagazine: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			model = "";
			value = 5;
			type = "2*		256";
			allowedSlots[] = {901};
			count = 1;
			initSpeed = 5;
			picture = "";
			nameSound = "handgrenade";
		};
		class 30Rnd_556x45_Stanag: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "5.56 mm 30rnd STANAG Reload Tracer (Yellow) Mag";
			picture = "\A3\weapons_F\data\UI\m_30stanag_CA.paa";
			ammo = "B_556x45_Ball";
			count = 30;
			initSpeed = 920;
			tracersEvery = 0;
			lastRoundsTracer = 4;
			descriptionShort = "Caliber: 5.56x45 mm STANAG<br />Rounds: 30<br />Used in: TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR, SPAR-16";
		};
		class 30Rnd_556x45_Stanag_green: 30Rnd_556x45_Stanag //inherits 10 parameters from bin\config.bin/CfgMagazines/30Rnd_556x45_Stanag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "5.56 mm 30rnd STANAG Reload Tracer (Green) Mag";
			ammo = "B_556x45_Ball_Tracer_Green";
		};
		class 30Rnd_556x45_Stanag_red: 30Rnd_556x45_Stanag //inherits 10 parameters from bin\config.bin/CfgMagazines/30Rnd_556x45_Stanag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "5.56 mm 30rnd STANAG Reload Tracer (Red) Mag";
			ammo = "B_556x45_Ball_Tracer_Red";
		};
		class 30Rnd_556x45_Stanag_Tracer_Red: 30Rnd_556x45_Stanag //inherits 10 parameters from bin\config.bin/CfgMagazines/30Rnd_556x45_Stanag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "5.56 mm 30rnd Tracer (Red) Mag";
			picture = "\A3\weapons_F\data\UI\m_30stanag_red_ca.paa";
			ammo = "B_556x45_Ball_Tracer_Red";
			tracersEvery = 1;
			descriptionShort = "Caliber: 5.56x45 mm STANAG Tracers - Red<br />Rounds: 30<br />Used in: TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR, SPAR-16";
			displaynameshort = "Tracer";
		};
		class 30Rnd_556x45_Stanag_Tracer_Green: 30Rnd_556x45_Stanag //inherits 10 parameters from bin\config.bin/CfgMagazines/30Rnd_556x45_Stanag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "5.56 mm 30rnd Tracer (Green) Mag";
			picture = "\A3\weapons_F\data\UI\m_30stanag_green_ca.paa";
			ammo = "B_556x45_Ball_Tracer_Green";
			tracersEvery = 1;
			descriptionShort = "Caliber: 5.56x45 mm STANAG Tracers - Green<br />Rounds: 30<br />Used in: TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR, SPAR-16";
			displaynameshort = "Tracer";
		};
		class 30Rnd_556x45_Stanag_Tracer_Yellow: 30Rnd_556x45_Stanag //inherits 10 parameters from bin\config.bin/CfgMagazines/30Rnd_556x45_Stanag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "5.56 mm 30rnd Tracer (Yellow) Mag";
			picture = "\A3\weapons_F\data\UI\m_30stanag_yellow_CA.paa";
			ammo = "B_556x45_Ball_Tracer_Yellow";
			tracersEvery = 1;
			descriptionShort = "Caliber: 5.56x45 mm STANAG Tracers - Yellow<br />Rounds: 30<br />Used in: TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR, SPAR-16";
			displaynameshort = "Tracer";
		};
		class 20Rnd_556x45_UW_mag: 30Rnd_556x45_Stanag //inherits 10 parameters from bin\config.bin/CfgMagazines/30Rnd_556x45_Stanag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "5.56 mm 20Rnd Dual Purpose Mag";
			descriptionShort = "Caliber: 5.56x45 mm Dual Purpose<br />Rounds: 20<br />Used in: SDAR";
			displaynameshort = "UW";
			picture = "\A3\weapons_f\data\ui\m_20stanag_CA.paa";
			ammo = "B_556x45_dual";
			count = 20;
			mass = 6;
			initSpeed = 270;
			tracersEvery = 0;
			lastRoundsTracer = 0;
		};
		class 30Rnd_65x39_caseless_mag: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "6.5 mm 30Rnd STANAG Mag";
			picture = "\A3\weapons_f\data\ui\m_30stanag_caseless_CA.paa";
			ammo = "B_65x39_Caseless";
			count = 30;
			mass = 10;
			initSpeed = 800;
			tracersEvery = 0;
			lastRoundsTracer = 4;
			descriptionShort = "Caliber: 6.5x39 mm ‒ STANAG Caseless<br />Rounds: 30<br />Used in: MX/C/M/SW/3GL";
		};
		class 30Rnd_65x39_caseless_green: 30Rnd_65x39_caseless_mag //inherits 11 parameters from bin\config.bin/CfgMagazines/30Rnd_65x39_caseless_mag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_65x39_Caseless_green";
			picture = "\A3\weapons_f\data\ui\m_20stanag_CA.paa";
			descriptionShort = "Caliber: 6.5x39 mm - Caseless<br />Rounds: 30<br />Used in: Katiba, Type 115";
			displayName = "6.5mm 30Rnd Caseless Mag";
		};
		class 30Rnd_65x39_caseless_mag_Tracer: 30Rnd_65x39_caseless_mag //inherits 11 parameters from bin\config.bin/CfgMagazines/30Rnd_65x39_caseless_mag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			tracersEvery = 1;
			lastRoundsTracer = 30;
			picture = "\A3\weapons_f\data\ui\m_30stanag_caseless_red_CA.paa";
			displayName = "6.5 mm 30Rnd Tracer (Red) Mag";
			descriptionShort = "Caliber: 6.5x39 mm Tracer - Red<br />Rounds: 30<br />Used in: MX/C/M/SW/3GL";
			displaynameshort = "Tracer";
		};
		class 30Rnd_65x39_caseless_green_mag_Tracer: 30Rnd_65x39_caseless_green //inherits 5 parameters from bin\config.bin/CfgMagazines/30Rnd_65x39_caseless_green, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			tracersEvery = 1;
			lastRoundsTracer = 30;
			picture = "\A3\weapons_f\data\ui\m_20stanag_green_ca.paa";
			displayName = "6.5 mm 30Rnd Tracer (Green) Caseless Mag";
			descriptionShort = "Caliber: 6.5x39 mm Tracer (Green) - Caseless<br />Rounds: 30<br />Used in: Katiba, Type 115";
			displaynameshort = "Tracer";
		};
		class 20Rnd_762x51_Mag: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "7.62 mm 20Rnd Mag";
			picture = "\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
			count = 20;
			ammo = "B_762x51_Ball";
			mass = 12;
			initSpeed = 850;
			descriptionShort = "Caliber: 7.62x51 mm NATO<br />Rounds: 20<br />Used in: Mk18 ABR, Mk-I EMR, Mk14, SPAR-17";
		};
		class 7Rnd_408_Mag: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = ".408 7Rnd LRR Mag";
			picture = "\A3\weapons_f\data\UI\m_M24_CA.paa";
			count = 7;
			ammo = "B_408_Ball";
			initSpeed = 910;
			descriptionShort = "Caliber: .408<br />Rounds: 7<br />Used in: M320 LRR";
			mass = 14;
		};
		class 5Rnd_127x108_Mag: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "12.7 mm 5Rnd Mag";
			picture = "\A3\Weapons_F_EPA\Data\ui\M_5rnd_127x108_ball_CA.paa";
			count = 5;
			ammo = "B_127x108_Ball";
			initSpeed = 820;
			descriptionShort = "Caliber: 12.7x108 mm Russian<br />Rounds: 5<br />Used in: GM6 Lynx";
			mass = 16;
		};
		class 100Rnd_65x39_caseless_mag: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "6.5 mm 100Rnd Mag";
			picture = "\A3\Weapons_F\Data\UI\M_100Rnd_65x39_CA.paa";
			count = 100;
			type = "2*		256";
			ammo = "B_65x39_Caseless";
			initSpeed = 880;
			tracersEvery = 4;
			lastRoundsTracer = 4;
			nameSound = "mgun";
			descriptionShort = "Caliber: 6.5x39 mm ‒ Caseless<br />Rounds: 100<br />Used in: MX SW";
			mass = 25;
		};
		class 100Rnd_65x39_caseless_mag_Tracer: 100Rnd_65x39_caseless_mag //inherits 13 parameters from bin\config.bin/CfgMagazines/100Rnd_65x39_caseless_mag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "6.5 mm 100Rnd Tracer (Red) Mag";
			picture = "\A3\Weapons_F\Data\UI\M_100Rnd_65x39_red_CA.paa";
			tracersEvery = 1;
			lastRoundsTracer = 100;
			descriptionShort = "Caliber: 6.5x39 mm Tracer - Red<br />Rounds: 100<br />Used in: MX SW";
			displaynameshort = "Tracer";
		};
		class 200Rnd_65x39_cased_Box: 100Rnd_65x39_caseless_mag //inherits 13 parameters from bin\config.bin/CfgMagazines/100Rnd_65x39_caseless_mag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "6.5 mm 200Rnd Belt";
			picture = "\A3\Weapons_F\Data\UI\M_200Rnd_65x39_CA.paa";
			count = 200;
			initSpeed = 920;
			ammo = "B_65x39_Caseless_yellow";
			descriptionShort = "Caliber: 6.5x39 mm<br />Rounds: 200<br />Used in: Mk200";
			mass = 50;
		};
		class 200Rnd_65x39_cased_Box_Tracer: 200Rnd_65x39_cased_Box //inherits 8 parameters from bin\config.bin/CfgMagazines/200Rnd_65x39_cased_Box, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "6.5 mm 200Rnd Belt Tracer (Yellow)";
			picture = "\A3\Weapons_F\Data\UI\m_200rnd_65x39_yellow_ca.paa";
			descriptionShort = "Caliber: 6.5x39 mm Tracer - Yellow<br />Rounds: 200<br />Used in: Mk200";
			displaynameshort = "Tracer";
			lastRoundsTracer = 200;
			tracersEvery = 1;
		};
		class 30Rnd_9x21_Mag: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "9 mm 30Rnd Mag";
			picture = "\A3\Weapons_F\Data\UI\M_30Rnd_45ACP_CA.paa";
			ammo = "B_9x21_Ball";
			count = 30;
			mass = 10;
			initSpeed = 370;
			tracersEvery = 0;
			descriptionShort = "Caliber: 9x21 mm<br />Rounds: 30<br />Used in: PDW2000, P07, Rook-40";
		};
		class 30Rnd_9x21_Red_Mag: 30Rnd_9x21_Mag //inherits 10 parameters from bin\config.bin/CfgMagazines/30Rnd_9x21_Mag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "9 mm 30Rnd Reload Tracer (Red) Mag";
			ammo = "B_9x21_Ball_Tracer_Red";
			lastRoundsTracer = 4;
		};
		class 30Rnd_9x21_Yellow_Mag: 30Rnd_9x21_Mag //inherits 10 parameters from bin\config.bin/CfgMagazines/30Rnd_9x21_Mag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "9 mm 30Rnd Reload Tracer (Yellow) Mag";
			ammo = "B_9x21_Ball_Tracer_Yellow";
			lastRoundsTracer = 4;
		};
		class 30Rnd_9x21_Green_Mag: 30Rnd_9x21_Mag //inherits 10 parameters from bin\config.bin/CfgMagazines/30Rnd_9x21_Mag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "9 mm 30Rnd Reload Tracer (Green) Mag";
			ammo = "B_9x21_Ball_Tracer_Green";
			lastRoundsTracer = 4;
		};
		class 16Rnd_9x21_Mag: 30Rnd_9x21_Mag //inherits 10 parameters from bin\config.bin/CfgMagazines/30Rnd_9x21_Mag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "9 mm 16Rnd Mag";
			picture = "\A3\weapons_f\data\ui\M_16Rnd_9x21_CA.paa";
			type = 16;
			count = 16;
			descriptionShort = "Caliber: 9x21 mm<br />Rounds: 16<br />Used in: PDW2000, P07, ROOK-40";
			mass = 6;
			initSpeed = 410;
		};
		class 30Rnd_9x21_Mag_SMG_02: 30Rnd_9x21_Mag //inherits 10 parameters from bin\config.bin/CfgMagazines/30Rnd_9x21_Mag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			picture = "\A3\weapons_f\data\ui\M_30Rnd_9x21_CA.paa";
			descriptionShort = "Caliber: 9x21 mm<br />Rounds: 30<br />Used in: Sting, Protector";
		};
		class 30Rnd_9x21_Mag_SMG_02_Tracer_Red: 30Rnd_9x21_Mag_SMG_02 //inherits 3 parameters from bin\config.bin/CfgMagazines/30Rnd_9x21_Mag_SMG_02, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "9 mm 30Rnd Reload Tracer (Red) Mag";
			ammo = "B_9x21_Ball_Tracer_Red";
			lastRoundsTracer = 4;
		};
		class 30Rnd_9x21_Mag_SMG_02_Tracer_Yellow: 30Rnd_9x21_Mag_SMG_02 //inherits 3 parameters from bin\config.bin/CfgMagazines/30Rnd_9x21_Mag_SMG_02, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "9 mm 30Rnd Reload Tracer (Yellow) Mag";
			ammo = "B_9x21_Ball_Tracer_Yellow";
			lastRoundsTracer = 4;
		};
		class 30Rnd_9x21_Mag_SMG_02_Tracer_Green: 30Rnd_9x21_Mag_SMG_02 //inherits 3 parameters from bin\config.bin/CfgMagazines/30Rnd_9x21_Mag_SMG_02, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "9 mm 30Rnd Reload Tracer (Green) Mag";
			ammo = "B_9x21_Ball_Tracer_Green";
			lastRoundsTracer = 4;
		};
		class 16Rnd_9x21_red_Mag: 16Rnd_9x21_Mag //inherits 8 parameters from bin\config.bin/CfgMagazines/16Rnd_9x21_Mag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "9 mm 16Rnd Reload Tracer (Red) Mag";
			ammo = "B_9x21_Ball_Tracer_Red";
			lastRoundsTracer = 4;
		};
		class 16Rnd_9x21_green_Mag: 16Rnd_9x21_Mag //inherits 8 parameters from bin\config.bin/CfgMagazines/16Rnd_9x21_Mag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "9 mm 16Rnd Reload Tracer (Green) Mag";
			ammo = "B_9x21_Ball_Tracer_Green";
			lastRoundsTracer = 4;
		};
		class 16Rnd_9x21_yellow_Mag: 16Rnd_9x21_Mag //inherits 8 parameters from bin\config.bin/CfgMagazines/16Rnd_9x21_Mag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "9 mm 16Rnd Reload Tracer (Yellow) Mag";
			ammo = "B_9x21_Ball_Tracer_Yellow";
			lastRoundsTracer = 4;
		};
		class RPG32_F: CA_LauncherMagazine //inherits 9 parameters from bin\config.bin/CfgMagazines/CA_LauncherMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "RPG-42 Rocket";
			model = "\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
			picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
			initSpeed = 140;
			descriptionShort = "Type: RPG-42 rocket<br />Rounds: 1<br />Used in: RPG-42";
			displaynameshort = "AT";
			ammo = "R_PG32V_F";
			type = "2*		256";
			mass = 60;
		};
		class RPG32_HE_F: RPG32_F //inherits 11 parameters from bin\config.bin/CfgMagazines/RPG32_F, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "RPG-42 HE Rocket";
			displayNameShort = "HE";
			descriptionShort = "Type: RPG-42 HE rocket<br />Rounds: 1<br />Used in: RPG-42";
			model = "\A3\weapons_f\launchers\RPG32\tbg32v_rocket_item.p3d";
			picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_tbg32v_rocket_ca.paa";
			ammo = "R_TBG32V_F";
			mass = 40;
		};
		class NLAW_F: CA_LauncherMagazine //inherits 9 parameters from bin\config.bin/CfgMagazines/CA_LauncherMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "PCML Missile";
			descriptionShort = "Type: PCML Missile<br />Rounds: 1<br />Used in: PCML";
			displaynameshort = "AT";
			ammo = "M_NLAW_AT_F";
			type = "3 * 		256";
			picture = "\A3\weapons_f\launchers\nlaw\data\UI\gear_nlaw_rocket_ca.paa";
			modelSpecial = "\A3\weapons_f\launchers\nlaw\nlaw_loaded_F";
			model = "\A3\weapons_f\launchers\nlaw\nlaw_proxy";
			initSpeed = 40;
			maxLeadSpeed = 40;
			mass = 80;
		};
		class 1Rnd_HE_Grenade_shell: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			type = 16;
			displayName = "40 mm HE Grenade Round";
			displayNameShort = "HE Grenade";
			picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
			ammo = "G_40mm_HE";
			initSpeed = 80;
			count = 1;
			nameSound = "";
			descriptionShort = "Type: High Explosive Grenade Round<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: EGLM, 3GL";
			mass = 4;
		};
		class 3Rnd_HE_Grenade_shell: 1Rnd_HE_Grenade_shell //inherits 12 parameters from bin\config.bin/CfgMagazines/1Rnd_HE_Grenade_shell, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 3;
			displayName = "40 mm 3Rnd HE Grenade";
			descriptionShort = "Type: High Explosive Grenade Rounds<br />Caliber: 40 mm<br />Rounds: 3<br />Used in: 3GL";
			mass = 12;
		};
		class 1Rnd_Smoke_Grenade_shell: 1Rnd_HE_Grenade_shell //inherits 12 parameters from bin\config.bin/CfgMagazines/1Rnd_HE_Grenade_shell, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "Smoke Round (White)";
			picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_white_CA.paa";
			ammo = "G_40mm_Smoke";
			descriptionShort = "Type: Smoke Round - White<br />Rounds: 1<br />Used in: EGLM, 3GL";
			displayNameShort = "White Smoke";
		};
		class 3Rnd_Smoke_Grenade_shell: 1Rnd_Smoke_Grenade_shell //inherits 6 parameters from bin\config.bin/CfgMagazines/1Rnd_Smoke_Grenade_shell, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 3;
			displayName = "3Rnd 3GL Smoke Rounds (White)";
			descriptionShort = "Type: Smoke Rounds - White <br />Rounds: 3<br />Used in: 3GL";
			mass = 12;
		};
		class 1Rnd_SmokeRed_Grenade_shell: 1Rnd_Smoke_Grenade_shell //inherits 6 parameters from bin\config.bin/CfgMagazines/1Rnd_Smoke_Grenade_shell, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "Smoke Round (Red)";
			picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_red_CA.paa";
			ammo = "G_40mm_SmokeRed";
			displayNameShort = "Red Smoke";
			descriptionShort = "Type: Smoke Round - Red<br />Rounds: 1<br />Used in: EGLM, 3GL";
		};
		class 3Rnd_SmokeRed_Grenade_shell: 1Rnd_SmokeRed_Grenade_shell //inherits 6 parameters from bin\config.bin/CfgMagazines/1Rnd_SmokeRed_Grenade_shell, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 3;
			displayName = "3Rnd 3GL Smoke Rounds (Red)";
			descriptionShort = "Type: Smoke Rounds - Red<br />Rounds: 3<br />Used in: 3GL";
			mass = 12;
		};
		class 1Rnd_SmokeGreen_Grenade_shell: 1Rnd_Smoke_Grenade_shell //inherits 6 parameters from bin\config.bin/CfgMagazines/1Rnd_Smoke_Grenade_shell, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "Smoke Round (Green)";
			picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_green_CA.paa";
			ammo = "G_40mm_SmokeGreen";
			displayNameShort = "Green Smoke";
			descriptionShort = "Type: Smoke Round - Green<br />Rounds: 1<br />Used in: EGLM, 3GL";
		};
		class 3Rnd_SmokeGreen_Grenade_shell: 1Rnd_SmokeGreen_Grenade_shell //inherits 6 parameters from bin\config.bin/CfgMagazines/1Rnd_SmokeGreen_Grenade_shell, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 3;
			displayName = "3Rnd 3GL Smoke Rounds (Green)";
			descriptionShort = "Type: Smoke Rounds - Green<br />Rounds: 3<br />Used in: 3GL";
			mass = 12;
		};
		class 1Rnd_SmokeYellow_Grenade_shell: 1Rnd_Smoke_Grenade_shell //inherits 6 parameters from bin\config.bin/CfgMagazines/1Rnd_Smoke_Grenade_shell, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "Smoke Round (Yellow)";
			picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_yellow_CA.paa";
			ammo = "G_40mm_SmokeYellow";
			displayNameShort = "Yellow Smoke";
			descriptionShort = "Type: Smoke Round - Yellow<br />Rounds: 1<br />Used in: EGLM, 3GL";
		};
		class 3Rnd_SmokeYellow_Grenade_shell: 1Rnd_SmokeYellow_Grenade_shell //inherits 6 parameters from bin\config.bin/CfgMagazines/1Rnd_SmokeYellow_Grenade_shell, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 3;
			displayName = "3Rnd 3GL Smoke Rounds (Yellow)";
			descriptionShort = "Type: Smoke Rounds - Yellow<br />Rounds: 3<br />Used in: 3GL";
			mass = 12;
		};
		class 1Rnd_SmokePurple_Grenade_shell: 1Rnd_Smoke_Grenade_shell //inherits 6 parameters from bin\config.bin/CfgMagazines/1Rnd_Smoke_Grenade_shell, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "Smoke Round (Purple)";
			picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_purple_CA.paa";
			ammo = "G_40mm_SmokePurple";
			displayNameShort = "Purple Smoke";
			descriptionShort = "Type: Smoke Round - Purple<br />Rounds: 1<br />Used in: EGLM, 3GL";
		};
		class 3Rnd_SmokePurple_Grenade_shell: 1Rnd_SmokePurple_Grenade_shell //inherits 6 parameters from bin\config.bin/CfgMagazines/1Rnd_SmokePurple_Grenade_shell, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 3;
			displayName = "3Rnd 3GL Smoke Rounds (Purple)";
			descriptionShort = "Type: Smoke Rounds - Purple<br />Rounds: 3<br />Used in: 3GL";
			mass = 12;
		};
		class 1Rnd_SmokeBlue_Grenade_shell: 1Rnd_Smoke_Grenade_shell //inherits 6 parameters from bin\config.bin/CfgMagazines/1Rnd_Smoke_Grenade_shell, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "Smoke Round (Blue)";
			picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_blue_CA.paa";
			ammo = "G_40mm_SmokeBlue";
			displayNameShort = "Blue Smoke";
			descriptionShort = "Type: Smoke Round - Blue<br />Rounds: 1<br />Used in: EGLM, 3GL";
		};
		class 3Rnd_SmokeBlue_Grenade_shell: 1Rnd_SmokeBlue_Grenade_shell //inherits 6 parameters from bin\config.bin/CfgMagazines/1Rnd_SmokeBlue_Grenade_shell, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 3;
			displayName = "3Rnd 3GL Smoke Rounds (Blue)";
			descriptionShort = "Type: Smoke Rounds - Blue<br />Rounds: 3<br />Used in: 3GL";
			mass = 12;
		};
		class 1Rnd_SmokeOrange_Grenade_shell: 1Rnd_Smoke_Grenade_shell //inherits 6 parameters from bin\config.bin/CfgMagazines/1Rnd_Smoke_Grenade_shell, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "Smoke Round (Orange)";
			picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_orange_CA.paa";
			ammo = "G_40mm_SmokeOrange";
			displayNameShort = "Orange Smoke";
			descriptionShort = "Type: Smoke Round - Orange<br />Rounds: 1<br />Used in: EGLM, 3GL";
		};
		class 3Rnd_SmokeOrange_Grenade_shell: 1Rnd_SmokeOrange_Grenade_shell //inherits 6 parameters from bin\config.bin/CfgMagazines/1Rnd_SmokeOrange_Grenade_shell, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 3;
			displayName = "3Rnd 3GL Smoke Rounds (Orange)";
			descriptionShort = "Type: Smoke Rounds - Orange<br />Rounds: 3<br />Used in: 3GL";
			mass = 12;
		};
		class HandGrenade: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			mass = 10;
			scope = 2;
			value = 1;
			displayName = "RGO Grenade";
			picture = "\A3\Weapons_F\Data\UI\gear_M67_CA.paa";
			model = "\A3\Weapons_f\ammo\Handgrenade";
			type = 256;
			ammo = "GrenadeHand";
			count = 1;
			initSpeed = 18;
			nameSound = "handgrenade";
			maxLeadSpeed = 7;
			sound[] = {"", 0.000316228, 1};
			descriptionShort = "Type: Defensive Grenade<br />Rounds: 1<br />Used in: Hand";
			displayNameShort = "RGO Grenade";
		};
		class MiniGrenade: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			mass = 6;
			scope = 2;
			value = 1;
			displayName = "RGN Grenade";
			model = "\A3\Weapons_f\ammo\mini_frag";
			picture = "\A3\Weapons_F\Data\UI\gear_M67_CA.paa";
			type = 256;
			ammo = "mini_Grenade";
			count = 1;
			initSpeed = 26;
			nameSound = "handgrenade";
			maxLeadSpeed = 7;
			sound[] = {"", 0.000316228, 1};
			descriptionShort = "Type: Offensive Grenade<br />Rounds: 1<br />Used in: Hand";
			displayNameShort = "RGN Grenade";
		};
		class HandGrenade_Stone: HandGrenade //inherits 16 parameters from bin\config.bin/CfgMagazines/HandGrenade, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 1;
			displayName = "Stone";
			value = 0.1;
			ammo = "GrenadeHand_stone";
			descriptionShort = "Just an ordinary run-of-the-mill stone";
			displayNameShort = "Stone";
		};
		class SmokeShell: HandGrenade //inherits 16 parameters from bin\config.bin/CfgMagazines/HandGrenade, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "Smoke Grenade (White)";
			picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_white_ca.paa";
			model = "\A3\Weapons_f\ammo\smokegrenade_white";
			value = 2;
			ammo = "SmokeShell";
			nameSoundWeapon = "smokeshell";
			nameSound = "smokeshell";
			descriptionShort = "Type: Smoke Grenade - White<br />Rounds: 1<br />Used in: Hand";
			displayNameShort = "White Smoke";
			mass = 4;
			initSpeed = 22;
		};
		class SmokeShellRed: SmokeShell //inherits 12 parameters from bin\config.bin/CfgMagazines/SmokeShell, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "Smoke Grenade (Red)";
			displayNameShort = "Red Smoke";
			picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_red_ca.paa";
			model = "\A3\Weapons_f\ammo\smokegrenade_red";
			ammo = "SmokeShellRed";
			descriptionShort = "Type: Smoke Grenade - Red<br />Rounds: 1<br />Used in: Hand";
		};
		class SmokeShellGreen: SmokeShell //inherits 12 parameters from bin\config.bin/CfgMagazines/SmokeShell, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "Smoke Grenade (Green)";
			displayNameShort = "Green Smoke";
			picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_green_ca.paa";
			model = "\A3\Weapons_f\ammo\smokegrenade_green";
			ammo = "SmokeShellGreen";
			descriptionShort = "Type: Smoke Grenade - Green<br />Rounds: 1<br />Used in: Hand";
		};
		class SmokeShellYellow: SmokeShell //inherits 12 parameters from bin\config.bin/CfgMagazines/SmokeShell, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "Smoke Grenade (Yellow)";
			displayNameShort = "Yellow Smoke";
			picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_yellow_ca.paa";
			model = "\A3\Weapons_f\ammo\smokegrenade_yellow";
			ammo = "SmokeShellYellow";
			descriptionShort = "Type: Smoke Grenade - Yellow<br />Rounds: 1<br />Used in: Hand";
		};
		class SmokeShellPurple: SmokeShell //inherits 12 parameters from bin\config.bin/CfgMagazines/SmokeShell, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "Smoke Grenade (Purple)";
			displayNameShort = "Purple Smoke";
			picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_purple_ca.paa";
			model = "\A3\Weapons_f\ammo\smokegrenade_purple";
			ammo = "SmokeShellPurple";
			descriptionShort = "Type: Smoke Grenade - Purple<br />Rounds: 1<br />Used in: Hand";
		};
		class SmokeShellBlue: SmokeShell //inherits 12 parameters from bin\config.bin/CfgMagazines/SmokeShell, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "Smoke Grenade (Blue)";
			displayNameShort = "Blue Smoke";
			ammo = "SmokeShellBlue";
			picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_blue_ca.paa";
			model = "\A3\Weapons_f\ammo\smokegrenade_blue";
			descriptionShort = "Type: Smoke Grenade - Blue<br />Rounds: 1<br />Used in: Hand";
		};
		class SmokeShellOrange: SmokeShell //inherits 12 parameters from bin\config.bin/CfgMagazines/SmokeShell, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "Smoke Grenade (Orange)";
			displayNameShort = "Orange Smoke";
			ammo = "SmokeShellOrange";
			picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_orange_ca.paa";
			model = "\A3\Weapons_f\ammo\smokegrenade_orange";
			descriptionShort = "Type: Smoke Grenade - Orange<br />Rounds: 1<br />Used in: Hand";
		};
		class Chemlight_green: SmokeShell //inherits 12 parameters from bin\config.bin/CfgMagazines/SmokeShell, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "Chemlight (Green)";
			picture = "\A3\Weapons_F\Data\UI\M_chemlight_green_CA.paa";
			model = "\A3\Weapons_f\chemlight\chemlight_green";
			value = 2;
			initSpeed = 14;
			ammo = "Chemlight_green";
			nameSoundWeapon = "Chemlight";
			nameSound = "Chemlight";
			descriptionShort = "Type: Light - Green<br />Rounds: 1<br />Used in: Hand";
			displayNameShort = "Green Light";
			mass = 2;
		};
		class Chemlight_red: Chemlight_green //inherits 12 parameters from bin\config.bin/CfgMagazines/Chemlight_green, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "Chemlight (Red)";
			ammo = "Chemlight_red";
			descriptionShort = "Type: Light - Red<br />Rounds: 1<br />Used in: Hand";
			model = "\A3\Weapons_f\chemlight\chemlight_red";
			displayNameShort = "Red Light";
			picture = "\A3\Weapons_F\Data\UI\M_chemlight_red_CA.paa";
		};
		class Chemlight_yellow: Chemlight_green //inherits 12 parameters from bin\config.bin/CfgMagazines/Chemlight_green, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "Chemlight (Yellow)";
			ammo = "Chemlight_yellow";
			descriptionShort = "Type: Light - Yellow<br />Rounds: 1<br />Used in: Hand";
			model = "\A3\Weapons_f\chemlight\chemlight_yellow";
			displayNameShort = "Yellow Light";
			picture = "\A3\Weapons_F\Data\UI\M_chemlight_yellow_CA.paa";
		};
		class Chemlight_blue: Chemlight_green //inherits 12 parameters from bin\config.bin/CfgMagazines/Chemlight_green, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "Chemlight (Blue)";
			ammo = "Chemlight_blue";
			descriptionShort = "Type: Light - Blue<br />Rounds: 1<br />Used in: Hand";
			model = "\A3\Weapons_f\chemlight\chemlight_blue";
			displayNameShort = "Blue Light";
			picture = "\A3\Weapons_F\Data\UI\M_chemlight_blue_CA.paa";
		};
		class 60Rnd_CMFlareMagazine: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 60;
			ammo = "CMflareAmmo";
			initSpeed = 30;
		};
		class 120Rnd_CMFlareMagazine: 60Rnd_CMFlareMagazine //inherits 4 parameters from bin\config.bin/CfgMagazines/60Rnd_CMFlareMagazine, sources - ["A3_Weapons_F"]
		{
			count = 120;
		};
		class 240Rnd_CMFlareMagazine: 60Rnd_CMFlareMagazine //inherits 4 parameters from bin\config.bin/CfgMagazines/60Rnd_CMFlareMagazine, sources - ["A3_Weapons_F"]
		{
			count = 240;
		};
		class 60Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlareMagazine //inherits 4 parameters from bin\config.bin/CfgMagazines/60Rnd_CMFlareMagazine, sources - ["A3_Weapons_F"]
		{
			ammo = "CMflare_Chaff_Ammo";
		};
		class 120Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine //inherits 1 parameters from bin\config.bin/CfgMagazines/60Rnd_CMFlare_Chaff_Magazine, sources - ["A3_Weapons_F"]
		{
			count = 120;
		};
		class 240Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine //inherits 1 parameters from bin\config.bin/CfgMagazines/60Rnd_CMFlare_Chaff_Magazine, sources - ["A3_Weapons_F"]
		{
			count = 240;
		};
		class 192Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine //inherits 1 parameters from bin\config.bin/CfgMagazines/60Rnd_CMFlare_Chaff_Magazine, sources - ["A3_Weapons_F"]
		{
			count = 192;
		};
		class 168Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine //inherits 1 parameters from bin\config.bin/CfgMagazines/60Rnd_CMFlare_Chaff_Magazine, sources - ["A3_Weapons_F"]
		{
			count = 168;
		};
		class 300Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine //inherits 1 parameters from bin\config.bin/CfgMagazines/60Rnd_CMFlare_Chaff_Magazine, sources - ["A3_Weapons_F"]
		{
			count = 300;
		};
		class SmokeLauncherMag: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			ammo = "SmokeLauncherAmmo";
			count = 2;
			nameSound = "smokeshell";
			initSpeed = 14;
		};
		class SmokeLauncherMag_boat: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			ammo = "SmokeLauncherAmmo_boat";
			count = 2;
			nameSound = "smokeshell";
			initSpeed = 14;
		};
		class 200Rnd_65x39_Belt: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			count = 200;
			ammo = "B_65x39_Caseless";
			initSpeed = 825;
			maxLeadSpeed = 55;
			tracersEvery = 5;
			nameSound = "mgun";
			displayName = "6.5 mm 200Rnd Belt Case";
			descriptionShort = "Caliber: 6.5x39 mm<br />Rounds: 200<br />Used in: Vehicles";
		};
		class 200Rnd_65x39_Belt_Tracer_Red: 200Rnd_65x39_Belt //inherits 10 parameters from bin\config.bin/CfgMagazines/200Rnd_65x39_Belt, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_65x39_Caseless";
			tracersEvery = 1;
			displayName = "6.5 mm 200Rnd Belt Case Tracer (Red)";
			descriptionShort = "Caliber: 6.5x39 mm Tracer - Red<br />Rounds: 200<br />Used in: Mk200";
			displaynameshort = "Tracer";
		};
		class 200Rnd_65x39_Belt_Tracer_Green: 200Rnd_65x39_Belt //inherits 10 parameters from bin\config.bin/CfgMagazines/200Rnd_65x39_Belt, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_65x39_Case_green";
			tracersEvery = 1;
			displayName = "6.5 mm 200Rnd Belt Case Tracer (Green)";
			descriptionShort = "Caliber: 6.5x39 mm Tracer - Green<br />Rounds: 200<br />Used in: Mk200";
			displaynameshort = "Tracer";
		};
		class 200Rnd_65x39_Belt_Tracer_Yellow: 200Rnd_65x39_Belt //inherits 10 parameters from bin\config.bin/CfgMagazines/200Rnd_65x39_Belt, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_65x39_Case_yellow";
			tracersEvery = 1;
			displayName = "6.5 mm 200Rnd Belt Tracer (Yellow)";
			descriptionShort = "Caliber: 6.5x39 mm Tracer - Yellow<br />Rounds: 200<br />Used in: Mk200";
			displaynameshort = "Tracer";
		};
		class 1000Rnd_65x39_Belt: 200Rnd_65x39_Belt //inherits 10 parameters from bin\config.bin/CfgMagazines/200Rnd_65x39_Belt, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 1000;
			displayName = "6.5 mm 1000Rnd LMG Belt";
			descriptionShort = "Caliber: 6.5x39 mm<br />Rounds: 1000<br />Used in: Vehicles";
		};
		class 1000Rnd_65x39_Belt_Tracer_Red: 1000Rnd_65x39_Belt //inherits 4 parameters from bin\config.bin/CfgMagazines/1000Rnd_65x39_Belt, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			tracersEvery = 1;
			ammo = "B_65x39_Caseless";
			displayName = "6.5 mm 1000Rnd LMG Tracer (Red) Belt";
			descriptionShort = "Caliber: 6.5x39 mm Tracer - Red<br />Rounds: 1000<br />Used in: Vehicles";
			displaynameshort = "Tracer";
		};
		class 1000Rnd_65x39_Belt_Green: 1000Rnd_65x39_Belt //inherits 4 parameters from bin\config.bin/CfgMagazines/1000Rnd_65x39_Belt, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_65x39_Case_green";
		};
		class 1000Rnd_65x39_Belt_Tracer_Green: 1000Rnd_65x39_Belt_Green //inherits 2 parameters from bin\config.bin/CfgMagazines/1000Rnd_65x39_Belt_Green, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			tracersEvery = 1;
			displayName = "6.5 mm 1000Rnd LMG Tracer (Green) Belt";
			descriptionShort = "Caliber: 6.5x39 mm Tracer - Red<br />Rounds: 1000<br />Used in: Vehicles";
			displaynameshort = "Tracer";
		};
		class 1000Rnd_65x39_Belt_Yellow: 1000Rnd_65x39_Belt //inherits 4 parameters from bin\config.bin/CfgMagazines/1000Rnd_65x39_Belt, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_65x39_Case_Yellow";
		};
		class 1000Rnd_65x39_Belt_Tracer_Yellow: 1000Rnd_65x39_Belt_Yellow //inherits 2 parameters from bin\config.bin/CfgMagazines/1000Rnd_65x39_Belt_Yellow, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			tracersEvery = 1;
			displayName = "6.5 mm 1000Rnd LMG Tracer (Yellow) Belt";
			descriptionShort = "Caliber: 6.5x39 mm Tracer - Yellow<br />Rounds: 1000<br />Used in: Vehicles";
			displaynameshort = "Tracer";
		};
		class 2000Rnd_65x39_Belt: 200Rnd_65x39_Belt //inherits 10 parameters from bin\config.bin/CfgMagazines/200Rnd_65x39_Belt, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 2000;
			displayName = "6.5 mm 2000Rnd LMG Belt";
			descriptionShort = "Caliber: 6.5x39 mm<br />Rounds: 2000<br />Used in: Vehicles";
		};
		class 2000Rnd_65x39_Belt_Tracer_Red: 2000Rnd_65x39_Belt //inherits 4 parameters from bin\config.bin/CfgMagazines/2000Rnd_65x39_Belt, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			tracersEvery = 1;
			ammo = "B_65x39_Minigun_Caseless_Red_splash";
			displayName = "6.5 mm 2000Rnd LMG Tracer (Red) Belt";
			descriptionShort = "Caliber: 6.5x39 mm Tracer - Red<br />Rounds: 2000<br />Used in: Vehicles";
			displaynameshort = "Tracer";
			weight = 30;
		};
		class 2000Rnd_65x39_Belt_Green: 2000Rnd_65x39_Belt //inherits 4 parameters from bin\config.bin/CfgMagazines/2000Rnd_65x39_Belt, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_65x39_Case_Green";
		};
		class 2000Rnd_65x39_Belt_Tracer_Green: 2000Rnd_65x39_Belt_Green //inherits 2 parameters from bin\config.bin/CfgMagazines/2000Rnd_65x39_Belt_Green, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			tracersEvery = 1;
			displayName = "6.5 mm 2000Rnd LMG Tracer (Green) Belt";
			descriptionShort = "Caliber: 6.5x39 mm Tracer - Green<br />Rounds: 2000<br />Used in: Vehicles";
			displaynameshort = "Tracer";
			weight = 30;
		};
		class 2000Rnd_65x39_Belt_Tracer_Green_Splash: 2000Rnd_65x39_Belt_Tracer_Green //inherits 6 parameters from bin\config.bin/CfgMagazines/2000Rnd_65x39_Belt_Tracer_Green, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_65x39_Minigun_Caseless_Green_splash";
		};
		class 2000Rnd_65x39_Belt_Yellow: 2000Rnd_65x39_Belt //inherits 4 parameters from bin\config.bin/CfgMagazines/2000Rnd_65x39_Belt, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_65x39_Case_Yellow";
		};
		class 2000Rnd_65x39_Belt_Tracer_Yellow: 2000Rnd_65x39_Belt_Yellow //inherits 2 parameters from bin\config.bin/CfgMagazines/2000Rnd_65x39_Belt_Yellow, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			tracersEvery = 1;
			displayName = "6.5 mm 2000Rnd LMG Tracer (Yellow) Belt";
			descriptionShort = "Caliber: 6.5x39 mm Tracer - Yellow<br />Rounds: 2000<br />Used in: Vehicles";
			displaynameshort = "Tracer";
		};
		class 2000Rnd_65x39_Belt_Tracer_Yellow_Splash: 2000Rnd_65x39_Belt_Tracer_Yellow //inherits 5 parameters from bin\config.bin/CfgMagazines/2000Rnd_65x39_Belt_Tracer_Yellow, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_65x39_Minigun_Caseless_Yellow_splash";
		};
		class 5000Rnd_762x51_Belt: 2000Rnd_65x39_Belt //inherits 4 parameters from bin\config.bin/CfgMagazines/2000Rnd_65x39_Belt, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_762x51_Minigun_Tracer_Red_splash";
			displayName = "7.62 mm Minigun Belt";
			descriptionShort = "Caliber: 7.62x51 mm<br />Rounds: 2000<br />Used in: AH-9";
			tracersEvery = 1;
			count = 5000;
			initSpeed = 860;
			weight = 128;
		};
		class 5000Rnd_762x51_Yellow_Belt: 5000Rnd_762x51_Belt //inherits 8 parameters from bin\config.bin/CfgMagazines/5000Rnd_762x51_Belt, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_762x51_Minigun_Tracer_Yellow_splash";
		};
		class 500Rnd_127x99_mag: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			count = 500;
			ammo = "B_127x99_Ball";
			initSpeed = 910;
			maxLeadSpeed = 55;
			tracersEvery = 4;
			nameSound = "mgun";
			displayName = "12.7 mm AA MG Mag";
			descriptionShort = "Caliber: 12.7x99 mm NATO<br/>Rounds: 500<br />Used in: Vehicles";
		};
		class 500Rnd_127x99_mag_Tracer_Red: 500Rnd_127x99_mag //inherits 10 parameters from bin\config.bin/CfgMagazines/500Rnd_127x99_mag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_127x99_Ball_Tracer_Red";
			displayName = "12.7 mm AA MG Tracer (Red) Mag";
			descriptionShort = "Caliber: 12.7x99 mm Tracer - Red<br/>Rounds: 500<br />Used in: Vehicles";
			displaynameshort = "Tracer";
		};
		class 500Rnd_127x99_mag_Tracer_Green: 500Rnd_127x99_mag //inherits 10 parameters from bin\config.bin/CfgMagazines/500Rnd_127x99_mag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_127x99_Ball_Tracer_Green";
			displayName = "12.7 mm AA MG Tracer (Green) Mag";
			descriptionShort = "Caliber: 12.7x99 mm Tracer - Green<br/>Rounds: 500<br />Used in: Vehicles";
			displaynameshort = "Tracer";
		};
		class 500Rnd_127x99_mag_Tracer_Yellow: 500Rnd_127x99_mag //inherits 10 parameters from bin\config.bin/CfgMagazines/500Rnd_127x99_mag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_127x99_Ball_Tracer_Yellow";
			displayName = "12.7 mm AA MG Tracer (Yellow) Mag";
			descriptionShort = "Caliber: 12.7x99 mm Tracer - Yellow<br/>Rounds: 500<br />Used in: Vehicles";
			displaynameshort = "Tracer";
		};
		class 200Rnd_127x99_mag: 500Rnd_127x99_mag //inherits 10 parameters from bin\config.bin/CfgMagazines/500Rnd_127x99_mag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 200;
			tracersEvery = 3;
			displayName = "12.7 mm RCWS HMG";
			descriptionShort = "Caliber: 12.7x99 mm NATO<br/>Rounds: 200<br />Used in: RCWS";
		};
		class 200Rnd_127x99_mag_Tracer_Red: 200Rnd_127x99_mag //inherits 5 parameters from bin\config.bin/CfgMagazines/200Rnd_127x99_mag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_127x99_Ball_Tracer_Red";
			displayName = "12.7 mm RCWS HMG Tracer (Red)";
			descriptionShort = "Caliber: 12.7x99 mm Tracer - Red<br/>Rounds: 200<br />Used in: RCWS";
			displaynameshort = "Tracer";
		};
		class 200Rnd_127x99_mag_Tracer_Green: 200Rnd_127x99_mag //inherits 5 parameters from bin\config.bin/CfgMagazines/200Rnd_127x99_mag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_127x99_Ball_Tracer_Green";
			displayName = "12.7 mm RCWS HMG Tracer (Green)";
			descriptionShort = "Caliber: 12.7x99 mm Tracer - Green<br/>Rounds: 200<br />Used in: RCWS";
			displaynameshort = "Tracer";
		};
		class 200Rnd_127x99_mag_Tracer_Yellow: 200Rnd_127x99_mag //inherits 5 parameters from bin\config.bin/CfgMagazines/200Rnd_127x99_mag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_127x99_Ball_Tracer_Yellow";
			displayName = "12.7 mm RCWS HMG Tracer (Yellow)";
			descriptionShort = "Caliber: 12.7x99 mm Tracer - Yellow<br/>Rounds: 200<br />Used in: RCWS";
			displaynameshort = "Tracer";
		};
		class 100Rnd_127x99_mag: 500Rnd_127x99_mag //inherits 10 parameters from bin\config.bin/CfgMagazines/500Rnd_127x99_mag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 100;
			displayName = "12.7 mm M2 HMG Belt";
			descriptionShort = "Caliber: 1.27x99 mm NATO<br/>Rounds: 100<br />Used in: Mounted M2";
		};
		class 100Rnd_127x99_mag_Tracer_Red: 100Rnd_127x99_mag //inherits 4 parameters from bin\config.bin/CfgMagazines/100Rnd_127x99_mag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_127x99_Ball_Tracer_Red";
			displayName = "12.7 mm M2 HMG Tracer (Red) Belt";
			descriptionShort = "Caliber: 12.7x99 mm Tracer - Red<br/>Rounds: 100<br />Used in: Mounted M2";
			displaynameshort = "Tracer";
		};
		class 100Rnd_127x99_mag_Tracer_Green: 100Rnd_127x99_mag //inherits 4 parameters from bin\config.bin/CfgMagazines/100Rnd_127x99_mag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_127x99_Ball_Tracer_Green";
			displayName = "12.7 mm M2 HMG Tracer (Green) Belt";
			descriptionShort = "Caliber: 12.7x99 mm Tracer - Green<br/>Rounds: 100<br />Used in: Mounted M2";
			displaynameshort = "Tracer";
		};
		class 100Rnd_127x99_mag_Tracer_Yellow: 100Rnd_127x99_mag //inherits 4 parameters from bin\config.bin/CfgMagazines/100Rnd_127x99_mag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_127x99_Ball_Tracer_Yellow";
			displayName = "12.7 mm M2 HMG Tracer (Yellow) Belt";
			descriptionShort = "Caliber: 12.7x99 mm Tracer - Yellow<br/>Rounds: 100<br />Used in: Mounted M2";
			displaynameshort = "Tracer";
		};
		class 450Rnd_127x108_Ball: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			count = 450;
			ammo = "B_127x108_Ball";
			initSpeed = 845;
			maxLeadSpeed = 55;
			tracersEvery = 4;
			nameSound = "mgun";
			displayName = "NSVT-M";
		};
		class 150Rnd_127x108_Ball: 450Rnd_127x108_Ball //inherits 9 parameters from bin\config.bin/CfgMagazines/450Rnd_127x108_Ball, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 150;
		};
		class 50Rnd_127x108_Ball: 450Rnd_127x108_Ball //inherits 9 parameters from bin\config.bin/CfgMagazines/450Rnd_127x108_Ball, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 50;
		};
		class 200Rnd_40mm_G_belt: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			ammo = "G_40mm_HEDP_Bullet";
			initSpeed = 241;
			maxLeadSpeed = 25;
			nameSound = "";
			count = 200;
			displayName = "40 mm HE Grenade Mag";
			descriptionShort = "Caliber: 40 mm <br/>Rounds: 200 DSS<br />Used in: Grenade Launcher, RCWS";
		};
		class 96Rnd_40mm_G_belt: 200Rnd_40mm_G_belt //inherits 9 parameters from bin\config.bin/CfgMagazines/200Rnd_40mm_G_belt, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 96;
		};
		class 64Rnd_40mm_G_belt: 200Rnd_40mm_G_belt //inherits 9 parameters from bin\config.bin/CfgMagazines/200Rnd_40mm_G_belt, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 64;
		};
		class 32Rnd_40mm_G_belt: 200Rnd_40mm_G_belt //inherits 9 parameters from bin\config.bin/CfgMagazines/200Rnd_40mm_G_belt, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 32;
		};
		class 200Rnd_20mm_G_belt: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			ammo = "G_20mm_HE";
			initSpeed = 400;
			maxLeadSpeed = 55;
			nameSound = "";
			count = 200;
			displayName = "20 mm Grenade Mag";
			descriptionShort = "Caliber: 20 mm <br/>Rounds: 200 DSS<br />Used in: Grenade Launcher";
		};
		class 40Rnd_20mm_G_belt: 200Rnd_20mm_G_belt //inherits 9 parameters from bin\config.bin/CfgMagazines/200Rnd_20mm_G_belt, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 40;
			displayName = "20 mm HE Grenade Mag";
			displayNameShort = "HE";
			descriptionShort = "Caliber: 20 mm<br/>Rounds: 40<br />Used in: Grenade Launcher";
		};
		class 24Rnd_PG_missiles: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			count = 24;
			ammo = "M_PG_AT";
			displayName = "DAGR";
			displayNameShort = "HE";
			descriptionShort = "Type: ATGM<br />Rounds: 24<br />Used in: A-143, AH-9, AH-99";
			initSpeed = 30;
			maxLeadSpeed = 40;
			nameSound = "missiles";
			sound[] = {"A3\sounds_f\dummysound", 3.16228, 1};
			reloadSound[] = {"A3\sounds_f\dummysound", 0.000316228, 1};
		};
		class 12Rnd_PG_missiles: 24Rnd_PG_missiles //inherits 12 parameters from bin\config.bin/CfgMagazines/24Rnd_PG_missiles, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 12;
			displayName = "DAGR";
			displayNameShort = "HE";
			descriptionShort = "Type: ATGM<br />Rounds: 12<br />Used in: Ka-60";
			weight = 72;
		};
		class 24Rnd_missiles: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			count = 24;
			ammo = "M_AT";
			displayName = "DAR";
			displayNameShort = "HE";
			descriptionShort = "DAR";
			initSpeed = 44;
			maxLeadSpeed = 25;
			nameSound = "rockets";
			sound[] = {"A3\sounds_f\weapons\rockets\explosion_missile_01", 1, 1, 1200};
			reloadSound[] = {"", 0.000316228, 1};
			weight = 144;
		};
		class 12Rnd_missiles: 24Rnd_missiles //inherits 13 parameters from bin\config.bin/CfgMagazines/24Rnd_missiles, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 12;
		};
		class 32Rnd_155mm_Mo_shells: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			initSpeed = 810;
			displayNameShort = "HE";
			scope = 2;
			displayName = "155 mm HE Shells";
			ammo = "Sh_155mm_AMOS";
			count = 32;
			nameSound = "heat";
		};
		class 8Rnd_82mm_Mo_shells: 32Rnd_155mm_Mo_shells //inherits 8 parameters from bin\config.bin/CfgMagazines/32Rnd_155mm_Mo_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "HE Mortar Shells";
			displayNameShort = "HE";
			count = 8;
			ammo = "Sh_82mm_AMOS";
			initSpeed = 200;
		};
		class 8Rnd_82mm_Mo_Flare_white: 8Rnd_82mm_Mo_shells //inherits 6 parameters from bin\config.bin/CfgMagazines/8Rnd_82mm_Mo_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "Flare_82mm_AMOS_White";
			displayName = "Flare (White)";
			displayNameShort = "White Flare";
		};
		class 8Rnd_82mm_Mo_Smoke_white: 8Rnd_82mm_Mo_shells //inherits 6 parameters from bin\config.bin/CfgMagazines/8Rnd_82mm_Mo_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "Smoke_82mm_AMOS_White";
			displayName = "Smoke Shell (White)";
			displayNameShort = "White Smoke";
		};
		class 8Rnd_82mm_Mo_guided: 8Rnd_82mm_Mo_shells //inherits 6 parameters from bin\config.bin/CfgMagazines/8Rnd_82mm_Mo_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "Sh_82mm_AMOS_guided";
			displayName = "Guided";
			displayNameShort = "Guided";
		};
		class 8Rnd_82mm_Mo_LG: 8Rnd_82mm_Mo_shells //inherits 6 parameters from bin\config.bin/CfgMagazines/8Rnd_82mm_Mo_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "Sh_82mm_AMOS_LG";
			displayName = "Laser Guided";
			displayNameShort = "Laser Guided";
		};
		class 6Rnd_155mm_Mo_smoke: 32Rnd_155mm_Mo_shells //inherits 8 parameters from bin\config.bin/CfgMagazines/32Rnd_155mm_Mo_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 6;
			ammo = "Smoke_120mm_AMOS_White";
			displayName = "Smoke (White)";
			displayNameShort = "White Smoke";
		};
		class 2Rnd_155mm_Mo_guided: 6Rnd_155mm_Mo_smoke //inherits 5 parameters from bin\config.bin/CfgMagazines/6Rnd_155mm_Mo_smoke, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 2;
			ammo = "Sh_155mm_AMOS_guided";
			displayName = "Guided";
			displayNameShort = "Guided";
		};
		class 2Rnd_155mm_Mo_LG: 6Rnd_155mm_Mo_smoke //inherits 5 parameters from bin\config.bin/CfgMagazines/6Rnd_155mm_Mo_smoke, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 2;
			ammo = "Sh_155mm_AMOS_LG";
			displayName = "Laser Guided";
			displayNameShort = "Laser Guided";
		};
		class 6Rnd_155mm_Mo_mine: 6Rnd_155mm_Mo_smoke //inherits 5 parameters from bin\config.bin/CfgMagazines/6Rnd_155mm_Mo_smoke, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "Mine_155mm_AMOS_range";
			displayName = "Mine Cluster";
			displayNameShort = "Mine Cluster";
		};
		class 6Rnd_155mm_Mo_AT_mine: 6Rnd_155mm_Mo_smoke //inherits 5 parameters from bin\config.bin/CfgMagazines/6Rnd_155mm_Mo_smoke, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "AT_Mine_155mm_AMOS_range";
			displayName = "AT Mine Cluster";
			displayNameShort = "AT Mine Cluster";
		};
		class 2Rnd_155mm_Mo_Cluster: 6Rnd_155mm_Mo_smoke //inherits 5 parameters from bin\config.bin/CfgMagazines/6Rnd_155mm_Mo_smoke, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 2;
			ammo = "Cluster_155mm_AMOS";
			displayName = "Cluster Shells";
			displayNameShort = "Cluster Shells";
		};
		class UGL_FlareWhite_F: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			type = 16;
			displayName = "Flare Round (White)";
			displayNameShort = "White Flare";
			picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_CA.paa";
			model = "\A3\Weapons_F\Ammo\UGL_Flare";
			ammo = "F_40mm_White";
			initSpeed = 80;
			count = 1;
			nameSound = "";
			descriptionShort = "Type: Flare Round - White <br />Rounds: 1<br />Used in: EGLM, 3GL";
			weaponPoolAvailable = 1;
			mass = 4;
		};
		class 3Rnd_UGL_FlareWhite_F: UGL_FlareWhite_F //inherits 14 parameters from bin\config.bin/CfgMagazines/UGL_FlareWhite_F, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 3;
			displayName = "3Rnd 3GL Flares (White)";
			displayNameShort = "White Flare";
			descriptionShort = "Type: Flare Rounds - White<br />Rounds: 3<br />Used in: 3GL";
			mass = 12;
		};
		class UGL_FlareGreen_F: UGL_FlareWhite_F //inherits 14 parameters from bin\config.bin/CfgMagazines/UGL_FlareWhite_F, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "Flare Round (Green)";
			displayNameShort = "Green Flare";
			ammo = "F_40mm_Green";
			picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_Green_CA.paa";
			descriptionShort = "Type: Flare - Green<br />Rounds: 1<br />Used in: EGLM, 3GL";
		};
		class 3Rnd_UGL_FlareGreen_F: UGL_FlareGreen_F //inherits 6 parameters from bin\config.bin/CfgMagazines/UGL_FlareGreen_F, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 3;
			displayName = "3Rnd 3GL Flares (Green)";
			descriptionShort = "Type: Flare Rounds - Green<br />Rounds: 3<br />Used in: 3GL";
			displayNameShort = "Green Flare";
			mass = 12;
		};
		class UGL_FlareRed_F: UGL_FlareWhite_F //inherits 14 parameters from bin\config.bin/CfgMagazines/UGL_FlareWhite_F, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "Flare Round (Red)";
			ammo = "F_40mm_Red";
			picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_Red_CA.paa";
			descriptionShort = "Type: Flare - Red<br />Rounds: 1<br />Used in: EGLM, 3GL";
			displayNameShort = "Red Flare";
		};
		class 3Rnd_UGL_FlareRed_F: UGL_FlareRed_F //inherits 6 parameters from bin\config.bin/CfgMagazines/UGL_FlareRed_F, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 3;
			displayName = "3Rnd 3GL Flares (Red)";
			descriptionShort = "Type: Flare Rounds - Red<br />Rounds: 3<br />Used in: 3GL";
			displayNameShort = "Red Flare";
			mass = 12;
		};
		class UGL_FlareYellow_F: UGL_FlareWhite_F //inherits 14 parameters from bin\config.bin/CfgMagazines/UGL_FlareWhite_F, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "Flare Round (Yellow)";
			ammo = "F_40mm_Yellow";
			picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_yelow_CA.paa";
			descriptionShort = "Type: Flare - Yellow<br />Rounds: 1<br />Used in: EGLM, 3GL";
			displayNameShort = "Yellow Flare";
		};
		class 3Rnd_UGL_FlareYellow_F: UGL_FlareYellow_F //inherits 6 parameters from bin\config.bin/CfgMagazines/UGL_FlareYellow_F, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 3;
			displayName = "3Rnd 3GL Flares (Yellow)";
			descriptionShort = "Type: Flare Rounds - Yellow<br />Rounds: 3<br />Used in: 3GL";
			displayNameShort = "Yellow Flare";
			mass = 12;
		};
		class UGL_FlareCIR_F: UGL_FlareWhite_F //inherits 14 parameters from bin\config.bin/CfgMagazines/UGL_FlareWhite_F, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "Flare Round (IR)";
			ammo = "F_40mm_CIR";
			picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_purple_CA.paa";
			descriptionShort = "Type: Flare - IR<br />Rounds: 1<br />Used in: EGLM, 3GL";
			displayNameShort = "IR";
		};
		class 3Rnd_UGL_FlareCIR_F: UGL_FlareCIR_F //inherits 6 parameters from bin\config.bin/CfgMagazines/UGL_FlareCIR_F, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 3;
			displayName = "3Rnd 3GL Flares (IR)";
			descriptionShort = "Type: Flare Rounds - IR<br />Rounds: 3<br />Used in: 3GL";
			displayNameShort = "IR";
			mass = 12;
		};
		class FlareWhite_F: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			type = 16;
			displayName = "Flare (White)";
			picture = "\A3\Weapons_F\Data\UI\gear_flare_white_ca.paa";
			model = "\A3\weapons_f\ammo\flare_white";
			ammo = "F_20mm_White";
			initSpeed = 80;
			count = 1;
			nameSound = "";
			descriptionShort = "Type: Flare Rounds - White<br />Rounds: 1<br />Used in: Flare Gun";
			displayNameShort = "White Flare";
			weaponPoolAvailable = 1;
			mass = 4;
		};
		class FlareGreen_F: FlareWhite_F //inherits 14 parameters from bin\config.bin/CfgMagazines/FlareWhite_F, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "Flare (Green)";
			ammo = "F_20mm_Green";
			picture = "\A3\Weapons_F\Data\UI\gear_flare_green_ca.paa";
			model = "\A3\weapons_f\ammo\flare_green";
			descriptionShort = "Type: Flare Round - Green<br />Rounds: 1<br />Used in: Flare Gun";
			displayNameShort = "Green Flare";
		};
		class FlareRed_F: FlareWhite_F //inherits 14 parameters from bin\config.bin/CfgMagazines/FlareWhite_F, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "Flare (Red)";
			ammo = "F_20mm_Red";
			picture = "\A3\Weapons_F\Data\UI\gear_flare_red_ca.paa";
			model = "\A3\weapons_f\ammo\flare_red";
			descriptionShort = "Type: Flare Rounds - Red<br />Rounds: 1<br />Used in: Flare Gun";
			displayNameShort = "Red Flare";
		};
		class FlareYellow_F: FlareWhite_F //inherits 14 parameters from bin\config.bin/CfgMagazines/FlareWhite_F, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "Flare (Yellow)";
			ammo = "F_20mm_Yellow";
			picture = "\A3\Weapons_F\Data\UI\gear_flare_yellow_ca.paa";
			model = "\A3\weapons_f\ammo\flare_yellow";
			descriptionShort = "Type: Flare Rounds - Yellow<br />Rounds: 1<br />Used in: Flare Gun";
			displayNameShort = "Yellow Flare";
		};
		class Laserbatteries: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "Designator Batteries";
			picture = "\A3\Weapons_F\Data\UI\M_battery_CA.paa";
			ammo = "Laserbeam";
			count = 1;
			initSpeed = 30;
			nameSound = "laserdesignator";
			descriptionShort = "Batteries for Laser Designator<br />Does not fit into NVG<br />Recycle after use.";
			mass = 6;
		};
		class 30Rnd_45ACP_Mag_SMG_01: 30Rnd_9x21_Mag //inherits 10 parameters from bin\config.bin/CfgMagazines/30Rnd_9x21_Mag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = ".45 ACP 30Rnd Vermin Mag";
			descriptionShort = "Caliber: .45 ACP<br />Rounds: 30<br />Used in: Vermin SMG";
			picture = "\A3\Weapons_F\Data\UI\M_30Rnd_45ACP_CA.paa";
			mass = 10;
			tracersEvery = 0;
			lastRoundsTracer = 4;
			ammo = "B_45ACP_Ball";
			initSpeed = 280;
		};
		class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green: 30Rnd_45ACP_Mag_SMG_01 //inherits 9 parameters from bin\config.bin/CfgMagazines/30Rnd_45ACP_Mag_SMG_01, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = ".45 ACP 30Rnd Vermin Tracers (Green) Mag";
			tracersEvery = 1;
			lastRoundsTracer = 30;
			descriptionShort = "Caliber: .45 ACP Tracers - Green<br />Rounds: 30<br />Used in: Vermin SMG";
			displaynameshort = "Tracer";
			ammo = "B_45ACP_Ball_Green";
		};
		class 30Rnd_45ACP_Mag_SMG_01_Tracer_Red: 30Rnd_45ACP_Mag_SMG_01 //inherits 9 parameters from bin\config.bin/CfgMagazines/30Rnd_45ACP_Mag_SMG_01, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = ".45 ACP 30Rnd Vermin Tracers (Red) Mag";
			tracersEvery = 1;
			lastRoundsTracer = 30;
			descriptionShort = "Caliber: .45 ACP Tracers - Red<br />Rounds: 30<br />Used in: Vermin SMG";
		};
		class 30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow: 30Rnd_45ACP_Mag_SMG_01 //inherits 9 parameters from bin\config.bin/CfgMagazines/30Rnd_45ACP_Mag_SMG_01, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = ".45 ACP 30Rnd Vermin Tracers (Yellow) Mag";
			tracersEvery = 1;
			lastRoundsTracer = 30;
			descriptionShort = "Caliber: .45 ACP Tracers - Yellow<br />Rounds: 30<br />Used in: Vermin SMG";
			ammo = "B_45ACP_Ball_Yellow";
		};
		class 9Rnd_45ACP_Mag: 30Rnd_45ACP_Mag_SMG_01 //inherits 9 parameters from bin\config.bin/CfgMagazines/30Rnd_45ACP_Mag_SMG_01, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = ".45 ACP 9Rnd Mag";
			descriptionShort = "Caliber: .45 ACP<br />Rounds: 9<br />Used in: ACP-C2";
			count = 9;
			mass = 6;
			lastRoundsTracer = 0;
			initSpeed = 280;
			ammo = "B_45ACP_Ball_Green";
		};
		class 150Rnd_762x51_Box: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "7.62 mm 150Rnd Box";
			descriptionShort = "Caliber: 7.62x54 mm<br/>Rounds: 150<br />Used in: Zafir";
			picture = "\A3\Weapons_F_Beta\Data\UI\m_150Rnd_762x51_CA.paa";
			count = 150;
			type = "2*		256";
			ammo = "B_762x51_Tracer_Green";
			initSpeed = 860;
			tracersEvery = 5;
			lastRoundsTracer = 4;
			nameSound = "mgun";
			mass = 50;
		};
		class 150Rnd_762x51_Box_Tracer: 150Rnd_762x51_Box //inherits 13 parameters from bin\config.bin/CfgMagazines/150Rnd_762x51_Box, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "7.62 mm 150Rnd Tracer (Green) Box";
			displayNameShort = "Tracer";
			descriptionShort = "Caliber: 7.62x54 mm Tracer - Green<br/>Rounds: 150<br />Used in: Zafir";
			picture = "\A3\Weapons_F_Beta\Data\UI\m_150Rnd_762x51_tracer_CA.paa";
			tracersEvery = 1;
		};
		class 150Rnd_762x54_Box: 150Rnd_762x51_Box //inherits 13 parameters from bin\config.bin/CfgMagazines/150Rnd_762x51_Box, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_762x54_Tracer_Green";
		};
		class 150Rnd_762x54_Box_Tracer: 150Rnd_762x54_Box //inherits 2 parameters from bin\config.bin/CfgMagazines/150Rnd_762x54_Box, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "7.62 mm 150Rnd Tracer (Green) Box";
			displayNameShort = "Tracer";
			descriptionShort = "Caliber: 7.62x54 mm Tracer - Green<br/>Rounds: 150<br />Used in: Zafir";
			picture = "\A3\Weapons_F_Beta\Data\UI\m_150Rnd_762x51_tracer_CA.paa";
			tracersEvery = 1;
		};
		class Titan_AA: CA_LauncherMagazine //inherits 9 parameters from bin\config.bin/CfgMagazines/CA_LauncherMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "Titan AA Missile";
			displayNameShort = "AA";
			ammo = "M_Titan_AA";
			type = "6 * 		256";
			picture = "\A3\Weapons_F_beta\Launchers\titan\Data\UI\gear_titan_missile_atl_CA.paa";
			model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_atl";
			initSpeed = 25;
			maxLeadSpeed = 100;
			descriptionShort = "Type: Anti-Air<br />Rounds: 1<br />Used in: Titan MPRL";
			mass = 100;
		};
		class Titan_AP: Titan_AA //inherits 12 parameters from bin\config.bin/CfgMagazines/Titan_AA, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "M_Titan_AP";
			displayName = "Titan AP Missile";
			displayNameShort = "AP";
			descriptionShort = "Type: Antipersonnel<br />Rounds: 1<br />Used in: Titan MPRL Compact";
			model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_ap";
			picture = "\A3\Weapons_F_beta\Launchers\titan\Data\UI\gear_titan_missile_ap_CA.paa";
			maxLeadSpeed = 35;
			mass = 60;
		};
		class Titan_AT: Titan_AA //inherits 12 parameters from bin\config.bin/CfgMagazines/Titan_AA, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "M_Titan_AT";
			displayName = "Titan AT Missile";
			displayNameShort = "AT";
			descriptionShort = "Type: Anti-Tank<br />Rounds: 1<br />Used in: Titan MPRL Compact";
			model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_at";
			picture = "\A3\Weapons_F_beta\Launchers\titan\Data\UI\gear_titan_missile_at_CA.paa";
			maxLeadSpeed = 35;
			mass = 100;
		};
		class 300Rnd_20mm_shells: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "20 mm Shells";
			displayNameShort = "HE";
			ammo = "B_20mm";
			count = 300;
			initSpeed = 1030;
			maxLeadSpeed = 85;
			tracersEvery = 5;
			nameSound = "cannon";
		};
		class 1000Rnd_20mm_shells: 300Rnd_20mm_shells //inherits 10 parameters from bin\config.bin/CfgMagazines/300Rnd_20mm_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "20 mm Shells";
			count = 1000;
			ammo = "B_20mm_Tracer_Red";
			weight = 126;
		};
		class 2000Rnd_20mm_shells: 300Rnd_20mm_shells //inherits 10 parameters from bin\config.bin/CfgMagazines/300Rnd_20mm_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "20 mm Shells";
			count = 2000;
		};
		class 300Rnd_25mm_shells: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "25 mm Shells";
			ammo = "B_25mm";
			count = 300;
			initSpeed = 1030;
			maxLeadSpeed = 85;
			tracersEvery = 4;
			nameSound = "cannon";
		};
		class 1000Rnd_25mm_shells: 300Rnd_25mm_shells //inherits 9 parameters from bin\config.bin/CfgMagazines/300Rnd_25mm_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "25 mm Shells";
			count = 1000;
		};
		class 250Rnd_30mm_HE_shells: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "30 mm HE Shells";
			displayNameShort = "HE";
			ammo = "B_30mm_HE";
			count = 250;
			initSpeed = 960;
			maxLeadSpeed = 85;
			nameSound = "cannon";
			tracersEvery = 1;
			weight = 126;
		};
		class 250Rnd_30mm_HE_shells_Tracer_Red: 250Rnd_30mm_HE_shells //inherits 11 parameters from bin\config.bin/CfgMagazines/250Rnd_30mm_HE_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "30 mm HE Tracer (Red) Shells";
			ammo = "B_30mm_HE_Tracer_Red";
			tracersEvery = 1;
			displayNameShort = "HE";
		};
		class 250Rnd_30mm_HE_shells_Tracer_Green: 250Rnd_30mm_HE_shells //inherits 11 parameters from bin\config.bin/CfgMagazines/250Rnd_30mm_HE_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "30 mm HE Tracer (Green) Shells";
			ammo = "B_30mm_HE_Tracer_Green";
			tracersEvery = 1;
		};
		class 250Rnd_30mm_APDS_shells: 250Rnd_30mm_HE_shells //inherits 11 parameters from bin\config.bin/CfgMagazines/250Rnd_30mm_HE_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "30 mm APDS shells";
			displayNameShort = "APDS";
			ammo = "B_30mm_AP";
			initSpeed = 1120;
		};
		class 250Rnd_30mm_APDS_shells_Tracer_Red: 250Rnd_30mm_APDS_shells //inherits 5 parameters from bin\config.bin/CfgMagazines/250Rnd_30mm_APDS_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "30 mm APDS Tracer (Red) Shells";
			ammo = "B_30mm_AP_Tracer_Red";
			tracersEvery = 1;
		};
		class 250Rnd_30mm_APDS_shells_Tracer_Green: 250Rnd_30mm_APDS_shells //inherits 5 parameters from bin\config.bin/CfgMagazines/250Rnd_30mm_APDS_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "30 mm APDS Tracer (Green) Shells";
			ammo = "B_30mm_AP_Tracer_Green";
			tracersEvery = 1;
		};
		class 250Rnd_30mm_APDS_shells_Tracer_Yellow: 250Rnd_30mm_APDS_shells //inherits 5 parameters from bin\config.bin/CfgMagazines/250Rnd_30mm_APDS_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "30 mm APDS Tracer (Yellow) Shells";
			ammo = "B_30mm_AP_Tracer_Yellow";
			tracersEvery = 1;
		};
		class 140Rnd_30mm_MP_shells: 250Rnd_30mm_HE_shells //inherits 11 parameters from bin\config.bin/CfgMagazines/250Rnd_30mm_HE_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "30 mm Multi-purpose";
			displayNameShort = "MP";
			ammo = "B_30mm_MP";
			initSpeed = 1070;
			count = 140;
		};
		class 140Rnd_30mm_MP_shells_Tracer_Red: 140Rnd_30mm_MP_shells //inherits 6 parameters from bin\config.bin/CfgMagazines/140Rnd_30mm_MP_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "30 mm MP-T";
			ammo = "B_30mm_MP_Tracer_Red";
			displaynameshort = "MP-T";
			count = 140;
		};
		class 140Rnd_30mm_MP_shells_Tracer_Green: 140Rnd_30mm_MP_shells_Tracer_Red //inherits 5 parameters from bin\config.bin/CfgMagazines/140Rnd_30mm_MP_shells_Tracer_Red, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_30mm_MP_Tracer_Green";
		};
		class 140Rnd_30mm_MP_shells_Tracer_Yellow: 140Rnd_30mm_MP_shells_Tracer_Red //inherits 5 parameters from bin\config.bin/CfgMagazines/140Rnd_30mm_MP_shells_Tracer_Red, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_30mm_MP_Tracer_Yellow";
		};
		class 60Rnd_30mm_APFSDS_shells: 250Rnd_30mm_HE_shells //inherits 11 parameters from bin\config.bin/CfgMagazines/250Rnd_30mm_HE_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "30 mm APFSDS";
			displayNameShort = "APFSDS";
			ammo = "B_30mm_APFSDS";
			initSpeed = 1430;
			count = 60;
		};
		class 60Rnd_30mm_APFSDS_shells_Tracer_Red: 60Rnd_30mm_APFSDS_shells //inherits 6 parameters from bin\config.bin/CfgMagazines/60Rnd_30mm_APFSDS_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "30 mm APFSDS-T";
			displaynameshort = "APFSDS-T";
			ammo = "B_30mm_APFSDS_Tracer_Red";
			tracersEvery = 1;
		};
		class 60Rnd_30mm_APFSDS_shells_Tracer_Green: 60Rnd_30mm_APFSDS_shells //inherits 6 parameters from bin\config.bin/CfgMagazines/60Rnd_30mm_APFSDS_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "30 mm APFSDS";
			displaynameshort = "APFSDS-T";
			ammo = "B_30mm_APFSDS_Tracer_Green";
			tracersEvery = 1;
		};
		class 60Rnd_30mm_APFSDS_shells_Tracer_Yellow: 60Rnd_30mm_APFSDS_shells //inherits 6 parameters from bin\config.bin/CfgMagazines/60Rnd_30mm_APFSDS_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "30 mm APFSDS-T";
			displaynameshort = "APFSDS-T";
			ammo = "B_30mm_APFSDS_Tracer_Yellow";
			tracersEvery = 1;
		};
		class 60Rnd_40mm_GPR_shells: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "40 mm GPR";
			displayNameShort = "GPR";
			ammo = "B_40mm_GPR";
			count = 60;
			initSpeed = 1035;
			maxLeadSpeed = 25;
			nameSound = "cannon";
			tracersEvery = 1;
		};
		class 60Rnd_40mm_GPR_Tracer_Red_shells: 60Rnd_40mm_GPR_shells //inherits 10 parameters from bin\config.bin/CfgMagazines/60Rnd_40mm_GPR_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "40 mm GPR-T";
			displayNameShort = "GPR-T";
			ammo = "B_40mm_GPR_Tracer_Red";
		};
		class 60Rnd_40mm_GPR_Tracer_Green_shells: 60Rnd_40mm_GPR_shells //inherits 10 parameters from bin\config.bin/CfgMagazines/60Rnd_40mm_GPR_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "40 mm GPR-T";
			displayNameShort = "GPR-T";
			ammo = "B_40mm_GPR_Tracer_Green";
		};
		class 60Rnd_40mm_GPR_Tracer_Yellow_shells: 60Rnd_40mm_GPR_shells //inherits 10 parameters from bin\config.bin/CfgMagazines/60Rnd_40mm_GPR_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "40 mm GPR-T";
			displayNameShort = "GPR-T";
			ammo = "B_40mm_GPR_Tracer_Yellow";
		};
		class 40Rnd_40mm_APFSDS_shells: 60Rnd_40mm_GPR_shells //inherits 10 parameters from bin\config.bin/CfgMagazines/60Rnd_40mm_GPR_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "40 mm APFSDS";
			displayNameShort = "APFSDS";
			ammo = "B_40mm_APFSDS";
			initSpeed = 1600;
			count = 40;
		};
		class 40Rnd_40mm_APFSDS_Tracer_Red_shells: 40Rnd_40mm_APFSDS_shells //inherits 6 parameters from bin\config.bin/CfgMagazines/40Rnd_40mm_APFSDS_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "40 mm APFSDS-T";
			displayNameShort = "APFSDS-T";
			ammo = "B_40mm_APFSDS_Tracer_Red";
			count = 40;
		};
		class 40Rnd_40mm_APFSDS_Tracer_Green_shells: 40Rnd_40mm_APFSDS_Tracer_Red_shells //inherits 5 parameters from bin\config.bin/CfgMagazines/40Rnd_40mm_APFSDS_Tracer_Red_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_40mm_APFSDS_Tracer_Green";
		};
		class 40Rnd_40mm_APFSDS_Tracer_Yellow_shells: 40Rnd_40mm_APFSDS_Tracer_Red_shells //inherits 5 parameters from bin\config.bin/CfgMagazines/40Rnd_40mm_APFSDS_Tracer_Red_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_40mm_APFSDS_Tracer_Yellow";
		};
		class 8Rnd_LG_scalpel: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "Scalpel E2";
			displayNameShort = "AG";
			ammo = "M_Scalpel_AT";
			initSpeed = 0;
			maxLeadSpeed = 60;
			sound[] = {"", 1, 1};
			reloadSound[] = {"", 0.000316228, 1};
			count = 8;
			nameSound = "missiles";
			weight = 400;
		};
		class 6Rnd_LG_scalpel: 8Rnd_LG_scalpel //inherits 12 parameters from bin\config.bin/CfgMagazines/8Rnd_LG_scalpel, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 6;
		};
		class 2Rnd_LG_scalpel: 8Rnd_LG_scalpel //inherits 12 parameters from bin\config.bin/CfgMagazines/8Rnd_LG_scalpel, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 2;
		};
		class 2Rnd_LG_scalpel_hidden: 2Rnd_LG_scalpel //inherits 2 parameters from bin\config.bin/CfgMagazines/2Rnd_LG_scalpel, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "M_Scalpel_AT_hidden";
		};
		class 14Rnd_80mm_rockets: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "Skyfire";
			displayNameShort = "AG";
			ammo = "R_80mm_HE";
			initSpeed = 44;
			maxLeadSpeed = 55;
			count = 14;
			nameSound = "rockets";
			sound[] = {"A3\sounds_f\weapons\rockets\Titan_3", 1, 1, 1200};
			reloadSound[] = {"", 0.000316228, 1};
		};
		class 38Rnd_80mm_rockets: 14Rnd_80mm_rockets //inherits 11 parameters from bin\config.bin/CfgMagazines/14Rnd_80mm_rockets, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 38;
			weight = 460;
		};
		class 12Rnd_230mm_rockets: 14Rnd_80mm_rockets //inherits 11 parameters from bin\config.bin/CfgMagazines/14Rnd_80mm_rockets, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "230 mm Titan Missile";
			ammo = "R_230mm_HE";
			initSpeed = 850;
			count = 12;
		};
		class 2Rnd_AAA_missiles: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "ASRAAM";
			displayNameShort = "AA SRange";
			ammo = "M_Air_AA";
			count = 2;
			initSpeed = 0;
			maxLeadSpeed = 300;
			sound[] = {"A3\Sounds_F\weapons\Rockets\titan_3", 1.25893, 1, 1000};
			reloadSound[] = {"", 0.000316228, 1, 20};
			nameSound = "missiles";
		};
		class 2Rnd_AAA_missiles_MI02: 2Rnd_AAA_missiles //inherits 11 parameters from bin\config.bin/CfgMagazines/2Rnd_AAA_missiles, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "M_Air_AA_MI02";
		};
		class 2Rnd_AAA_missiles_MI06: 2Rnd_AAA_missiles //inherits 11 parameters from bin\config.bin/CfgMagazines/2Rnd_AAA_missiles, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "M_Air_AA_MI06";
		};
		class 4Rnd_AAA_missiles: 2Rnd_AAA_missiles //inherits 11 parameters from bin\config.bin/CfgMagazines/2Rnd_AAA_missiles, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "ASRAAM";
			displayNameShort = "AA SRange";
			count = 4;
			weight = 360;
		};
		class 4Rnd_AAA_missiles_MI02: 4Rnd_AAA_missiles //inherits 5 parameters from bin\config.bin/CfgMagazines/4Rnd_AAA_missiles, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "M_Air_AA_MI02";
		};
		class 4Rnd_GAA_missiles: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "Zephyr";
			displayNameShort = "AA LRange";
			count = 4;
			ammo = "M_Zephyr";
			initSpeed = 25;
			maxLeadSpeed = 300;
			sound[] = {"A3\Sounds_F\weapons\Rockets\titan_2", 1.25893, 1, 1000};
			soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2", 0.501187, 1.3, 400};
			soundHit[] = {"", 1.25893, 1, 1};
			reloadSound[] = {"", 0.000316228, 1, 20};
			nameSound = "missiles";
		};
		class 4Rnd_Titan_long_missiles: 4Rnd_GAA_missiles //inherits 13 parameters from bin\config.bin/CfgMagazines/4Rnd_GAA_missiles, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "M_Titan_AA_long";
			displayName = "Titan Missile";
			displayNameShort = "AA";
		};
		class 5Rnd_GAT_missiles: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "Titan Missile";
			displayNameShort = "AT";
			count = 5;
			ammo = "M_Titan_AT";
			initSpeed = 80;
			maxLeadSpeed = 35;
			sound[] = {"A3\Sounds_F\weapons\Rockets\titan_2", 1.25893, 1, 1000};
			soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2", 0.501187, 1.3, 400};
			soundHit[] = {"", 1.25893, 1, 1};
			reloadSound[] = {"", 0.000316228, 1, 20};
			nameSound = "missiles";
		};
		class 2Rnd_GAT_missiles: 5Rnd_GAT_missiles //inherits 13 parameters from bin\config.bin/CfgMagazines/5Rnd_GAT_missiles, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 2;
		};
		class 30Rnd_120mm_HE_shells: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "HE Shells";
			displayNameShort = "HE";
			ammo = "Sh_120mm_HE";
			count = 30;
			initSpeed = 1410;
			maxLeadSpeed = 35;
			tracersEvery = 0;
			nameSound = "cannon";
		};
		class 30Rnd_120mm_HE_shells_Tracer_Red: 30Rnd_120mm_HE_shells //inherits 10 parameters from bin\config.bin/CfgMagazines/30Rnd_120mm_HE_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "120mm HE-T";
			displayNameShort = "HE-T";
			ammo = "Sh_120mm_HE_Tracer_Red";
			tracersEvery = 1;
		};
		class 30Rnd_120mm_HE_shells_Tracer_Green: 30Rnd_120mm_HE_shells //inherits 10 parameters from bin\config.bin/CfgMagazines/30Rnd_120mm_HE_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "120mm HE-T";
			displayNameShort = "HE-T";
			ammo = "Sh_120mm_HE_Tracer_Green";
			tracersEvery = 1;
		};
		class 30Rnd_120mm_HE_shells_Tracer_Yellow: 30Rnd_120mm_HE_shells //inherits 10 parameters from bin\config.bin/CfgMagazines/30Rnd_120mm_HE_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "120mm HE-T";
			displayNameShort = "HE-T";
			ammo = "Sh_120mm_HE_Tracer_Yellow";
			tracersEvery = 1;
		};
		class 16Rnd_120mm_HE_shells: 30Rnd_120mm_HE_shells //inherits 10 parameters from bin\config.bin/CfgMagazines/30Rnd_120mm_HE_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 16;
		};
		class 16Rnd_120mm_HE_shells_Tracer_Red: 30Rnd_120mm_HE_shells_Tracer_Red //inherits 5 parameters from bin\config.bin/CfgMagazines/30Rnd_120mm_HE_shells_Tracer_Red, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 16;
		};
		class 16Rnd_120mm_HE_shells_Tracer_Green: 30Rnd_120mm_HE_shells_Tracer_Green //inherits 5 parameters from bin\config.bin/CfgMagazines/30Rnd_120mm_HE_shells_Tracer_Green, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 16;
		};
		class 16Rnd_120mm_HE_shells_Tracer_Yellow: 30Rnd_120mm_HE_shells_Tracer_Yellow //inherits 5 parameters from bin\config.bin/CfgMagazines/30Rnd_120mm_HE_shells_Tracer_Yellow, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 16;
		};
		class 30Rnd_120mm_APFSDS_shells: 30Rnd_120mm_HE_shells //inherits 10 parameters from bin\config.bin/CfgMagazines/30Rnd_120mm_HE_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "120mm APFSDS";
			displayNameShort = "APFSDS";
			ammo = "Sh_120mm_APFSDS";
			initSpeed = 1680;
		};
		class 30Rnd_120mm_APFSDS_shells_Tracer_Red: 30Rnd_120mm_APFSDS_shells //inherits 5 parameters from bin\config.bin/CfgMagazines/30Rnd_120mm_APFSDS_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "120mm APFSDS-T";
			displayNameShort = "APFSDS-T";
			ammo = "Sh_120mm_APFSDS_Tracer_Red";
			tracersEvery = 1;
		};
		class 30Rnd_120mm_APFSDS_shells_Tracer_Green: 30Rnd_120mm_APFSDS_shells //inherits 5 parameters from bin\config.bin/CfgMagazines/30Rnd_120mm_APFSDS_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "120mm APFSDS-T";
			displayNameShort = "APFSDS-T";
			ammo = "Sh_120mm_APFSDS_Tracer_Green";
			tracersEvery = 1;
		};
		class 30Rnd_120mm_APFSDS_shells_Tracer_Yellow: 30Rnd_120mm_APFSDS_shells //inherits 5 parameters from bin\config.bin/CfgMagazines/30Rnd_120mm_APFSDS_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "120mm APFSDS-T";
			displayNameShort = "APFSDS-T";
			ammo = "Sh_120mm_APFSDS_Tracer_Yellow";
			tracersEvery = 1;
		};
		class 32Rnd_120mm_APFSDS_shells: 30Rnd_120mm_APFSDS_shells //inherits 5 parameters from bin\config.bin/CfgMagazines/30Rnd_120mm_APFSDS_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 32;
		};
		class 32Rnd_120mm_APFSDS_shells_Tracer_Red: 30Rnd_120mm_APFSDS_shells_Tracer_Red //inherits 5 parameters from bin\config.bin/CfgMagazines/30Rnd_120mm_APFSDS_shells_Tracer_Red, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 32;
		};
		class 32Rnd_120mm_APFSDS_shells_Tracer_Green: 30Rnd_120mm_APFSDS_shells_Tracer_Green //inherits 5 parameters from bin\config.bin/CfgMagazines/30Rnd_120mm_APFSDS_shells_Tracer_Green, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 32;
		};
		class 32Rnd_120mm_APFSDS_shells_Tracer_Yellow: 30Rnd_120mm_APFSDS_shells_Tracer_Yellow //inherits 5 parameters from bin\config.bin/CfgMagazines/30Rnd_120mm_APFSDS_shells_Tracer_Yellow, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 32;
		};
		class 680Rnd_35mm_AA_shells: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "35 mm AA Shells";
			displayNameShort = "AA";
			ammo = "B_35mm_AA";
			count = 680;
			initSpeed = 1440;
			maxLeadSpeed = 300;
			tracersEvery = 3;
			nameSound = "cannon";
		};
		class 680Rnd_35mm_AA_shells_Tracer_Red: 680Rnd_35mm_AA_shells //inherits 10 parameters from bin\config.bin/CfgMagazines/680Rnd_35mm_AA_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_35mm_AA_Tracer_Red";
		};
		class 680Rnd_35mm_AA_shells_Tracer_Green: 680Rnd_35mm_AA_shells //inherits 10 parameters from bin\config.bin/CfgMagazines/680Rnd_35mm_AA_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_35mm_AA_Tracer_Green";
		};
		class 680Rnd_35mm_AA_shells_Tracer_Yellow: 680Rnd_35mm_AA_shells //inherits 10 parameters from bin\config.bin/CfgMagazines/680Rnd_35mm_AA_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_35mm_AA_Tracer_Yellow";
		};
		class 6Rnd_AAT_missiles: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "AG Missiles";
			displayNameShort = "AT";
			count = 6;
			ammo = "M_Air_AT";
			initSpeed = 0;
			maxLeadSpeed = 35;
			sound[] = {"A3\sounds_f\dummysound", 31.6228, 1, 1100};
			soundFly[] = {"A3\sounds_f\dummysound", 1, 1.1, 700};
			soundHit[] = {"A3\sounds_f\dummysound", 15.8489, 1, 2000};
			reloadSound[] = {"A3\sounds_f\dummysound", 0.000316228, 1, 20};
			nameSound = "missiles";
		};
		class 4Rnd_AAT_missiles: 6Rnd_AAT_missiles //inherits 13 parameters from bin\config.bin/CfgMagazines/6Rnd_AAT_missiles, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 4;
		};
		class 1Rnd_GAA_missiles: 4Rnd_GAA_missiles //inherits 13 parameters from bin\config.bin/CfgMagazines/4Rnd_GAA_missiles, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "M_Titan_AA_static";
			count = 1;
		};
		class 1Rnd_GAT_missiles: 5Rnd_GAT_missiles //inherits 13 parameters from bin\config.bin/CfgMagazines/5Rnd_GAT_missiles, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "M_Titan_AT_static";
			count = 1;
		};
		class 2Rnd_GBU12_LGB: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "GBU-12";
			descriptionShort = "Type: Laser-Guided Bomb Rounds: 2 Used in: F35F, L159";
			displayNameShort = "Bomb";
			ammo = "Bo_GBU12_LGB";
			initSpeed = 0;
			maxLeadSpeed = 35;
			sound[] = {"", 1, 1};
			reloadSound[] = {"", 0.000316228, 1};
			count = 2;
			nameSound = "cannon";
		};
		class 2Rnd_GBU12_LGB_MI10: 2Rnd_GBU12_LGB //inherits 12 parameters from bin\config.bin/CfgMagazines/2Rnd_GBU12_LGB, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "Bo_GBU12_LGB_MI10";
		};
		class 2Rnd_Mk82: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			ammo = "Bo_Mk82";
			displayName = "Mk82";
			descriptionShort = "Type: Bomb <br />Rounds: 2<br /> Used in: F35F, L159";
			displayNameShort = "Bomb";
			initSpeed = 0;
			maxLeadSpeed = 5;
			count = 2;
			nameSound = "missiles";
		};
		class 2Rnd_Mk82_MI08: 2Rnd_Mk82 //inherits 10 parameters from bin\config.bin/CfgMagazines/2Rnd_Mk82, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "Bo_Mk82_MI08";
		};
		class 11Rnd_45ACP_Mag: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = ".45 ACP 11Rnd Mag";
			picture = "\A3\weapons_f\data\UI\M_16Rnd_9x21_CA.paa";
			count = 11;
			ammo = "B_45ACP_Ball";
			initSpeed = 380;
			sound[] = {"A3\sounds_f\dummysound", 31.6228, 1, 1600};
			reloadMagazineSound[] = {"A3\sounds_f\dummysound", 0.01, 1, 10};
			descriptionShort = "Caliber: .45 ACP<br />Rounds: 11<br />Used in: 4-five";
			mass = 7;
		};
		class 6Rnd_45ACP_Cylinder: 11Rnd_45ACP_Mag //inherits 11 parameters from bin\config.bin/CfgMagazines/11Rnd_45ACP_Mag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			picture = "\A3\Weapons_F_EPA\Data\ui\M_6Rnd_revolver_CA.paa";
			displayName = ".45 ACP 6Rnd Cylinder";
			descriptionShort = "Caliber: .45 ACP<br />Rounds: 6<br />Used in: Zubr";
			initSpeed = 480;
			count = 6;
			mass = 4;
		};
		class 10Rnd_762x51_Mag: 20Rnd_762x51_Mag //inherits 9 parameters from bin\config.bin/CfgMagazines/20Rnd_762x51_Mag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			picture = "\A3\Weapons_F_EPA\Data\ui\M_10Rnd_762x51_CA.paa";
			displayName = "7.62mm 10Rnd Mag";
			initSpeed = 830;
			count = 10;
			descriptionShort = "Caliber: 7.62x54 mm<br />Rounds: 10<br />Used in: Rahim";
			mass = 8;
		};
		class 10Rnd_762x54_Mag: 10Rnd_762x51_Mag //inherits 7 parameters from bin\config.bin/CfgMagazines/10Rnd_762x51_Mag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_762x54_Ball";
		};
		class 5Rnd_127x108_APDS_Mag: 5Rnd_127x108_Mag //inherits 9 parameters from bin\config.bin/CfgMagazines/5Rnd_127x108_Mag, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			picture = "\A3\weapons_f\data\UI\M_5rnd_127x108_CA.paa";
			displayName = "12.7mm 5Rnd APDS Mag";
			displayNameShort = "APDS";
			initSpeed = 1060;
			ammo = "B_127x108_APDS";
			descriptionShort = "Caliber: 12.7x108 mm APDS<br />Rounds: 5<br />Used in: GM6 Lynx";
		};
		class B_IR_Grenade: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			value = 1;
			displayName = "IR Grenade [NATO]";
			picture = "\A3\Weapons_F_EPB\Ammo\Data\UI\gear_B_IRstrobe_CA.paa";
			model = "\A3\Weapons_F_EPB\Ammo\B_IRstrobe_F.p3d";
			ammo = "B_IRStrobe";
			count = 1;
			initSpeed = 18;
			nameSound = "handgrenade";
			maxLeadSpeed = 7;
			sound[] = {"", 0.000316228, 1};
			descriptionShort = "Type: IR Strobe<br />Faction: NATO<br />Rounds: 1";
			displayNameShort = "IR Grenade";
		};
		class O_IR_Grenade: B_IR_Grenade //inherits 14 parameters from bin\config.bin/CfgMagazines/B_IR_Grenade, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "O_IRStrobe";
			displayName = "IR Grenade [CSAT]";
			model = "\A3\Weapons_F_EPB\Ammo\O_IRstrobe_F.p3d";
			picture = "\A3\Weapons_F_EPB\Ammo\Data\UI\gear_O_IRstrobe_CA.paa";
			descriptionShort = "Type: IR Strobe<br />Faction: CSAT<br />Rounds: 1";
		};
		class I_IR_Grenade: B_IR_Grenade //inherits 14 parameters from bin\config.bin/CfgMagazines/B_IR_Grenade, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "I_IRStrobe";
			displayName = "IR Grenade [AAF]";
			model = "\A3\Weapons_F_EPB\Ammo\I_IRstrobe_F.p3d";
			picture = "\A3\Weapons_F_EPB\Ammo\Data\UI\gear_I_IRstrobe_CA.paa";
			descriptionShort = "Type: IR Strobe<br />Faction: AAF<br />Rounds: 1";
		};
		class 28Rnd_120mm_APFSDS_shells: 32Rnd_120mm_APFSDS_shells //inherits 2 parameters from bin\config.bin/CfgMagazines/32Rnd_120mm_APFSDS_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 28;
			initSpeed = 1750;
		};
		class 24Rnd_125mm_APFSDS: 32Rnd_120mm_APFSDS_shells //inherits 2 parameters from bin\config.bin/CfgMagazines/32Rnd_120mm_APFSDS_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "125mm APFSDS";
			ammo = "Sh_125mm_APFSDS";
			initSpeed = 1700;
			count = 24;
		};
		class 28Rnd_120mm_APFSDS_shells_Tracer_Red: 32Rnd_120mm_APFSDS_shells_Tracer_Red //inherits 2 parameters from bin\config.bin/CfgMagazines/32Rnd_120mm_APFSDS_shells_Tracer_Red, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 28;
			initSpeed = 1750;
		};
		class 24Rnd_125mm_APFSDS_T_Red: 32Rnd_120mm_APFSDS_shells_Tracer_Red //inherits 2 parameters from bin\config.bin/CfgMagazines/32Rnd_120mm_APFSDS_shells_Tracer_Red, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "125mm APFSDS";
			ammo = "Sh_125mm_APFSDS_T_Red";
			initSpeed = 1700;
			count = 24;
		};
		class 28Rnd_120mm_APFSDS_shells_Tracer_Green: 32Rnd_120mm_APFSDS_shells_Tracer_Green //inherits 2 parameters from bin\config.bin/CfgMagazines/32Rnd_120mm_APFSDS_shells_Tracer_Green, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 28;
			initSpeed = 1750;
		};
		class 24Rnd_125mm_APFSDS_T_Green: 32Rnd_120mm_APFSDS_shells_Tracer_Green //inherits 2 parameters from bin\config.bin/CfgMagazines/32Rnd_120mm_APFSDS_shells_Tracer_Green, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "125mm APFSDS";
			ammo = "Sh_125mm_APFSDS_T_Green";
			count = 24;
			initSpeed = 1700;
		};
		class 28Rnd_120mm_APFSDS_shells_Tracer_Yellow: 32Rnd_120mm_APFSDS_shells_Tracer_Yellow //inherits 2 parameters from bin\config.bin/CfgMagazines/32Rnd_120mm_APFSDS_shells_Tracer_Yellow, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 28;
			initSpeed = 1750;
		};
		class 24Rnd_125mm_APFSDS_T_Yellow: 32Rnd_120mm_APFSDS_shells_Tracer_Yellow //inherits 2 parameters from bin\config.bin/CfgMagazines/32Rnd_120mm_APFSDS_shells_Tracer_Yellow, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "125mm APFSDS";
			ammo = "Sh_125mm_APFSDS_T_Yellow";
			count = 24;
			initSpeed = 1700;
		};
		class 14Rnd_120mm_HE_shells: 16Rnd_120mm_HE_shells //inherits 2 parameters from bin\config.bin/CfgMagazines/16Rnd_120mm_HE_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 14;
			initSpeed = 1460;
		};
		class 12Rnd_125mm_HE: 16Rnd_120mm_HE_shells //inherits 2 parameters from bin\config.bin/CfgMagazines/16Rnd_120mm_HE_shells, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "125mm HE";
			ammo = "Sh_125mm_HE";
			count = 12;
			initSpeed = 850;
		};
		class 14Rnd_120mm_HE_shells_Tracer_Red: 16Rnd_120mm_HE_shells_Tracer_Red //inherits 2 parameters from bin\config.bin/CfgMagazines/16Rnd_120mm_HE_shells_Tracer_Red, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 14;
			initSpeed = 1460;
		};
		class 12Rnd_125mm_HE_T_Red: 16Rnd_120mm_HE_shells_Tracer_Red //inherits 2 parameters from bin\config.bin/CfgMagazines/16Rnd_120mm_HE_shells_Tracer_Red, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "125mm HE";
			ammo = "Sh_125mm_HE_T_Red";
			count = 12;
			initSpeed = 850;
		};
		class 14Rnd_120mm_HE_shells_Tracer_Green: 16Rnd_120mm_HE_shells_Tracer_Green //inherits 2 parameters from bin\config.bin/CfgMagazines/16Rnd_120mm_HE_shells_Tracer_Green, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 14;
			initSpeed = 1460;
		};
		class 12Rnd_125mm_HE_T_Green: 16Rnd_120mm_HE_shells_Tracer_Green //inherits 2 parameters from bin\config.bin/CfgMagazines/16Rnd_120mm_HE_shells_Tracer_Green, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "125mm HE";
			ammo = "Sh_125mm_HE_T_Green";
			count = 12;
			initSpeed = 850;
		};
		class 14Rnd_120mm_HE_shells_Tracer_Yellow: 16Rnd_120mm_HE_shells_Tracer_Yellow //inherits 2 parameters from bin\config.bin/CfgMagazines/16Rnd_120mm_HE_shells_Tracer_Yellow, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 14;
			initSpeed = 1460;
		};
		class 12Rnd_125mm_HE_T_Yellow: 16Rnd_120mm_HE_shells_Tracer_Yellow //inherits 2 parameters from bin\config.bin/CfgMagazines/16Rnd_120mm_HE_shells_Tracer_Yellow, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "125mm HE";
			ammo = "Sh_125mm_HE_T_Yellow";
			count = 12;
			initSpeed = 850;
		};
		class 12Rnd_125mm_HEAT: 12Rnd_125mm_HE //inherits 5 parameters from bin\config.bin/CfgMagazines/12Rnd_125mm_HE, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "125mm HEAT";
			displayNameShort = "HEAT";
			ammo = "Sh_125mm_HEAT";
			initSpeed = 915;
		};
		class 12Rnd_125mm_HEAT_T_Red: 12Rnd_125mm_HEAT //inherits 5 parameters from bin\config.bin/CfgMagazines/12Rnd_125mm_HEAT, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "125mm HEAT";
			displayNameShort = "HEAT-T";
			ammo = "Sh_125mm_HEAT_T_Red";
			tracersEvery = 1;
		};
		class 12Rnd_125mm_HEAT_T_Green: 12Rnd_125mm_HEAT //inherits 5 parameters from bin\config.bin/CfgMagazines/12Rnd_125mm_HEAT, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "125mm HEAT";
			displayNameShort = "HEAT-T";
			ammo = "Sh_125mm_HEAT_T_Green";
			tracersEvery = 1;
		};
		class 12Rnd_125mm_HEAT_T_Yellow: 12Rnd_125mm_HEAT //inherits 5 parameters from bin\config.bin/CfgMagazines/12Rnd_125mm_HEAT, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "125mm HEAT";
			displayNameShort = "HEAT-T";
			ammo = "Sh_125mm_HEAT_T_Yellow";
			tracersEvery = 1;
		};
		class 200Rnd_762x51_Belt: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			count = 200;
			ammo = "B_762x51_Ball";
			initSpeed = 860;
			maxLeadSpeed = 55;
			tracersEvery = 5;
			lastRoundsTracer = 4;
			nameSound = "mgun";
			displayName = "7.62 mm Minigun Belt";
			descriptionShort = "Caliber: 7.62x51 mm<br />Rounds: 2000<br />Used in: AH-9";
		};
		class 200Rnd_762x51_Belt_Red: 200Rnd_762x51_Belt //inherits 11 parameters from bin\config.bin/CfgMagazines/200Rnd_762x51_Belt, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_762x51_Tracer_Red";
		};
		class 200Rnd_762x51_Belt_T_Red: 200Rnd_762x51_Belt_Red //inherits 2 parameters from bin\config.bin/CfgMagazines/200Rnd_762x51_Belt_Red, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			tracersEvery = 1;
			displaynameshort = "Tracer";
		};
		class 200Rnd_762x51_Belt_Green: 200Rnd_762x51_Belt //inherits 11 parameters from bin\config.bin/CfgMagazines/200Rnd_762x51_Belt, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_762x51_Tracer_Green";
		};
		class 200Rnd_762x51_Belt_T_Green: 200Rnd_762x51_Belt_Green //inherits 2 parameters from bin\config.bin/CfgMagazines/200Rnd_762x51_Belt_Green, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			tracersEvery = 1;
			displaynameshort = "Tracer";
		};
		class 200Rnd_762x51_Belt_Yellow: 200Rnd_762x51_Belt //inherits 11 parameters from bin\config.bin/CfgMagazines/200Rnd_762x51_Belt, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_762x51_Tracer_Yellow";
		};
		class 200Rnd_762x51_Belt_T_Yellow: 200Rnd_762x51_Belt_Yellow //inherits 2 parameters from bin\config.bin/CfgMagazines/200Rnd_762x51_Belt_Yellow, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			tracersEvery = 1;
			displaynameshort = "Tracer";
		};
		class 1000Rnd_762x51_Belt: 200Rnd_762x51_Belt //inherits 11 parameters from bin\config.bin/CfgMagazines/200Rnd_762x51_Belt, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 1000;
		};
		class 1000Rnd_762x51_Belt_Red: 1000Rnd_762x51_Belt //inherits 2 parameters from bin\config.bin/CfgMagazines/1000Rnd_762x51_Belt, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_762x51_Tracer_Red";
		};
		class 1000Rnd_762x51_Belt_T_Red: 1000Rnd_762x51_Belt_Red //inherits 2 parameters from bin\config.bin/CfgMagazines/1000Rnd_762x51_Belt_Red, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			tracersEvery = 1;
			displaynameshort = "Tracer";
		};
		class 1000Rnd_762x51_Belt_Green: 1000Rnd_762x51_Belt //inherits 2 parameters from bin\config.bin/CfgMagazines/1000Rnd_762x51_Belt, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_762x51_Tracer_Green";
		};
		class 1000Rnd_762x51_Belt_T_Green: 1000Rnd_762x51_Belt_Green //inherits 2 parameters from bin\config.bin/CfgMagazines/1000Rnd_762x51_Belt_Green, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			tracersEvery = 1;
			displaynameshort = "Tracer";
		};
		class 1000Rnd_762x51_Belt_Yellow: 1000Rnd_762x51_Belt //inherits 2 parameters from bin\config.bin/CfgMagazines/1000Rnd_762x51_Belt, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_762x51_Tracer_Yellow";
		};
		class 1000Rnd_762x51_Belt_T_Yellow: 1000Rnd_762x51_Belt_Yellow //inherits 2 parameters from bin\config.bin/CfgMagazines/1000Rnd_762x51_Belt_Yellow, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			tracersEvery = 1;
			displaynameshort = "Tracer";
		};
		class 2000Rnd_762x51_Belt: 200Rnd_762x51_Belt //inherits 11 parameters from bin\config.bin/CfgMagazines/200Rnd_762x51_Belt, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			count = 2000;
		};
		class 2000Rnd_762x51_Belt_Red: 2000Rnd_762x51_Belt //inherits 2 parameters from bin\config.bin/CfgMagazines/2000Rnd_762x51_Belt, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_762x51_Tracer_Red";
		};
		class 2000Rnd_762x51_Belt_T_Red: 2000Rnd_762x51_Belt_Red //inherits 2 parameters from bin\config.bin/CfgMagazines/2000Rnd_762x51_Belt_Red, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			tracersEvery = 1;
			displaynameshort = "Tracer";
		};
		class 2000Rnd_762x51_Belt_Green: 2000Rnd_762x51_Belt //inherits 2 parameters from bin\config.bin/CfgMagazines/2000Rnd_762x51_Belt, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_762x51_Tracer_Green";
		};
		class 2000Rnd_762x51_Belt_T_Green: 2000Rnd_762x51_Belt_Green //inherits 2 parameters from bin\config.bin/CfgMagazines/2000Rnd_762x51_Belt_Green, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			tracersEvery = 1;
			displaynameshort = "Tracer";
		};
		class 2000Rnd_762x51_Belt_Yellow: 2000Rnd_762x51_Belt //inherits 2 parameters from bin\config.bin/CfgMagazines/2000Rnd_762x51_Belt, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			ammo = "B_762x51_Tracer_Yellow";
		};
		class 2000Rnd_762x51_Belt_T_Yellow: 2000Rnd_762x51_Belt_Yellow //inherits 2 parameters from bin\config.bin/CfgMagazines/2000Rnd_762x51_Belt_Yellow, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			tracersEvery = 1;
			displaynameshort = "Tracer";
		};
		class 1000Rnd_Gatling_30mm_Plane_CAS_01_F: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayNameShort = "";
			ammo = "Gatling_30mm_HE_Plane_CAS_01_F";
			count = 1000;
			initSpeed = 1120;
			maxLeadSpeed = 85;
			sound[] = {"", 1, 1};
			reloadSound[] = {"", 0.000316228, 1};
			nameSound = "cannon";
			tracersEvery = 1;
		};
		class 2Rnd_Missile_AA_04_F: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayNameShort = "AA SRange";
			ammo = "Missile_AA_04_F";
			count = 2;
			initSpeed = 0;
			maxLeadSpeed = 300;
			sound[] = {"", 1, 1};
			reloadSound[] = {"", 0.000316228, 1};
			nameSound = "missiles";
		};
		class 6Rnd_Missile_AGM_02_F: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayNameShort = "AG";
			ammo = "Missile_AGM_02_F";
			count = 6;
			initSpeed = 0;
			maxLeadSpeed = 35;
			sound[] = {"\A3\sounds_f\dummysound", 1, 1, 1300};
			reloadSound[] = {"\A3\sounds_f\dummysound", 0.000316228, 1, 20};
			nameSound = "missiles";
		};
		class 7Rnd_Rocket_04_HE_F: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayNameShort = "HE";
			ammo = "Rocket_04_HE_F";
			count = 7;
			initSpeed = 44;
			maxLeadSpeed = 35;
			nameSound = "rockets";
			reloadSound[] = {"", 0.000316228, 1};
			sound[] = {"\A3\sounds_f\weapons\rockets\explosion_missile_02", 1, 1, 1200};
		};
		class 7Rnd_Rocket_04_AP_F: 7Rnd_Rocket_04_HE_F //inherits 10 parameters from bin\config.bin/CfgMagazines/7Rnd_Rocket_04_HE_F, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayNameShort = "AP";
			ammo = "Rocket_04_AP_F";
		};
		class 4Rnd_Bomb_04_F: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayNameShort = "Bomb";
			ammo = "Bomb_04_F";
			count = 4;
			initSpeed = 0;
			maxLeadSpeed = 35;
			sound[] = {"", 1, 1};
			reloadSound[] = {"", 0.000316228, 1};
			nameSound = "cannon";
		};
		class 500Rnd_Cannon_30mm_Plane_CAS_02_F: 1000Rnd_Gatling_30mm_Plane_CAS_01_F //inherits 11 parameters from bin\config.bin/CfgMagazines/1000Rnd_Gatling_30mm_Plane_CAS_01_F, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayNameShort = "";
			ammo = "Cannon_30mm_HE_Plane_CAS_02_F";
			count = 500;
		};
		class 2Rnd_Missile_AA_03_F: 2Rnd_Missile_AA_04_F //inherits 10 parameters from bin\config.bin/CfgMagazines/2Rnd_Missile_AA_04_F, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayNameShort = "AA SRange";
			ammo = "Missile_AA_03_F";
			count = 2;
		};
		class 4Rnd_Missile_AGM_01_F: 6Rnd_Missile_AGM_02_F //inherits 10 parameters from bin\config.bin/CfgMagazines/6Rnd_Missile_AGM_02_F, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayNameShort = "AG";
			ammo = "Missile_AGM_01_F";
			count = 4;
		};
		class 20Rnd_Rocket_03_HE_F: 7Rnd_Rocket_04_HE_F //inherits 10 parameters from bin\config.bin/CfgMagazines/7Rnd_Rocket_04_HE_F, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayNameShort = "HE";
			ammo = "Rocket_03_HE_F";
			count = 20;
		};
		class 20Rnd_Rocket_03_AP_F: 7Rnd_Rocket_04_AP_F //inherits 3 parameters from bin\config.bin/CfgMagazines/7Rnd_Rocket_04_AP_F, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayNameShort = "AP";
			ammo = "Rocket_03_AP_F";
			count = 20;
		};
		class 2Rnd_Bomb_03_F: 4Rnd_Bomb_04_F //inherits 10 parameters from bin\config.bin/CfgMagazines/4Rnd_Bomb_04_F, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayNameShort = "Bomb";
			ammo = "Bomb_03_F";
			count = 2;
		};
		class 40Rnd_105mm_APFSDS: 24Rnd_125mm_APFSDS //inherits 5 parameters from bin\config.bin/CfgMagazines/24Rnd_125mm_APFSDS, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "105mm APFSDS";
			displayNameShort = "APFSDS-T";
			ammo = "Sh_105mm_APFSDS";
			initSpeed = 1505;
			count = 40;
		};
		class 40Rnd_105mm_APFSDS_T_Red: 40Rnd_105mm_APFSDS //inherits 6 parameters from bin\config.bin/CfgMagazines/40Rnd_105mm_APFSDS, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "105mm APFSDS-T";
			displayNameShort = "APFSDS-T";
			ammo = "Sh_105mm_APFSDS_T_Red";
			tracersEvery = 1;
		};
		class 40Rnd_105mm_APFSDS_T_Green: 40Rnd_105mm_APFSDS //inherits 6 parameters from bin\config.bin/CfgMagazines/40Rnd_105mm_APFSDS, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "105mm APFSDS-T";
			displayNameShort = "APFSDS-T";
			ammo = "Sh_105mm_APFSDS_T_Green";
			tracersEvery = 1;
		};
		class 40Rnd_105mm_APFSDS_T_Yellow: 40Rnd_105mm_APFSDS //inherits 6 parameters from bin\config.bin/CfgMagazines/40Rnd_105mm_APFSDS, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "105mm APFSDS-T";
			displayNameShort = "APFSDS";
			ammo = "Sh_105mm_APFSDS_T_Yellow";
			tracersEvery = 1;
		};
		class 20Rnd_105mm_HEAT_MP: 12Rnd_125mm_HEAT //inherits 5 parameters from bin\config.bin/CfgMagazines/12Rnd_125mm_HEAT, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "105mm HEAT-MP";
			displayNameShort = "HEAT-MP";
			ammo = "Sh_105mm_HEAT_MP";
			initSpeed = 1330;
			count = 20;
		};
		class 20Rnd_105mm_HEAT_MP_T_Red: 20Rnd_105mm_HEAT_MP //inherits 6 parameters from bin\config.bin/CfgMagazines/20Rnd_105mm_HEAT_MP, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "105mm HEAT-MP-T";
			displayNameShort = "HEAT-MP-T";
			ammo = "Sh_105mm_HEAT_MP_T_Red";
			tracersEvery = 1;
		};
		class 20Rnd_105mm_HEAT_MP_T_Green: 20Rnd_105mm_HEAT_MP //inherits 6 parameters from bin\config.bin/CfgMagazines/20Rnd_105mm_HEAT_MP, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "105mm HEAT-MP-T";
			displayNameShort = "HEAT-MP-T";
			ammo = "Sh_105mm_HEAT_MP_T_Green";
			tracersEvery = 1;
		};
		class 20Rnd_105mm_HEAT_MP_T_Yellow: 20Rnd_105mm_HEAT_MP //inherits 6 parameters from bin\config.bin/CfgMagazines/20Rnd_105mm_HEAT_MP, sources - ["A3_Weapons_F"]
		{
			author = "Bohemia Interactive";
			displayName = "105mm HEAT-MP-T";
			displayNameShort = "HEAT-MP-T";
			ammo = "Sh_105mm_HEAT_MP_T_Yellow";
			tracersEvery = 1;
		};
		class PylonRack_1Rnd_Missile_AA_04_F: 2Rnd_Missile_AA_04_F //inherits 10 parameters from bin\config.bin/CfgMagazines/2Rnd_Missile_AA_04_F, sources - ["A3_Weapons_F"]
		{
			displayName = "Falchion-22";
			count = 1;
			model = "\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_04_F.p3d";
			hardpoints[] = {"B_MISSILE_PYLON"};
			pylonWeapon = "Missile_AA_04_Plane_CAS_01_F";
			mass = 125;
		};
		class PylonMissile_1Rnd_Missile_AA_04_F: PylonRack_1Rnd_Missile_AA_04_F //inherits 6 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_Missile_AA_04_F, sources - ["A3_Weapons_F"]
		{
			hardpoints[] = {"B_AIM9"};
			model = "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
			mass = 85;
		};
		class PylonRack_1Rnd_AAA_missiles: 4Rnd_AAA_missiles //inherits 5 parameters from bin\config.bin/CfgMagazines/4Rnd_AAA_missiles, sources - ["A3_Weapons_F"]
		{
			displayName = "ASRAAM";
			count = 1;
			hardpoints[] = {"B_MISSILE_PYLON", "B_ASRRAM_EJECTOR"};
			model = "\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_04_F.p3d";
			pylonWeapon = "missiles_ASRAAM";
			mass = 128;
		};
		class PylonMissile_1Rnd_AAA_missiles: PylonRack_1Rnd_AAA_missiles //inherits 6 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_AAA_missiles, sources - ["A3_Weapons_F"]
		{
			hardpoints[] = {"B_ASRAAM"};
			model = "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
			mass = 88;
			class mfdElements //sources - ["A3_Weapons_F"]
			{
				class Heli_Attack_01 //sources - ["A3_Weapons_F"]
				{
					class Bones //sources - []
					{
					};
					class Draw //sources - ["A3_Weapons_F"]
					{
						class BackgroundGroup //sources - ["A3_Weapons_F"]
						{
							color[] = {0, 0, 0};
							class Background //sources - ["A3_Weapons_F"]
							{
								type = "polygon";
								points[] = {{{{-0.005, -0.03}, 1}, {{0.065, -0.03}, 1}, {{0.065, 0.15}, 1}, {{-0.005, 0.15}, 1}}};
							};
						};
						class Default //sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0, 0.12, 0};
							class Shape //sources - ["A3_Weapons_F"]
							{
								type = "line";
								width = 4;
								points[] = {{{0.0553333, 0.00176638}, 1}, {{0.0313333, 0.0174929}, 1}, {{0.00600001, 0.00176638}, 1}, {}, {{0.0553333, 0.135442}, 1}, {{0.0553333, 0.00176638}, 1}, {{0.0553333, -0.00609687}, 1}, {{0.0526667, -0.0126496}, 1}, {{0.05, -0.0178917}, 1}, {{0.0446667, -0.0205128}, 1}, {{0.0393333, -0.0231339}, 1}, {{0.0353333, -0.0244445}, 1}, {{0.0313333, -0.025755}, 1}, {{0.03, -0.025755}, 1}, {{0.026, -0.0244445}, 1}, {{0.022, -0.0231339}, 1}, {{0.0166667, -0.0205128}, 1}, {{0.0126667, -0.0178917}, 1}, {{0.00866666, -0.0126496}, 1}, {{0.00733334, -0.00609687}, 1}, {{0.00600001, 0.00176638}, 1}, {{0.00600001, 0.135442}, 1}, {{0.0553333, 0.135442}, 1}, {}};
							};
							class PylonText1 //sources - ["A3_Weapons_F"]
							{
								type = "text";
								source = "static";
								text = "AA";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.03, 0.05}, 1};
								right[] = {{0.06, 0.05}, 1};
								down[] = {{0.03, 0.075}, 1};
							};
							class Ammo //sources - ["A3_Weapons_F"]
							{
								type = "text";
								source = "PylonAmmo";
								sourceIndex = 1;
								sourceScale = 1;
								align = "center";
								scale = 1;
								pos[] = {{0.03, 0.09}, 1};
								right[] = {{0.07, 0.09}, 1};
								down[] = {{0.03, 0.125}, 1};
							};
						};
						class Selected: Default //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_AAA_missiles/mfdElements/Heli_Attack_01/Draw/Default, sources - ["A3_Weapons_F"]
						{
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							color[] = {0.99, 0.94, 0.59};
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_AAA_missiles/mfdElements/Heli_Attack_01/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_AAA_missiles/mfdElements/Heli_Attack_01/Draw/Default/PylonText1, sources - []
							{
							};
							class Ammo: Ammo //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_AAA_missiles/mfdElements/Heli_Attack_01/Draw/Default/Ammo, sources - []
							{
							};
						};
						class Empty: Default //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_AAA_missiles/mfdElements/Heli_Attack_01/Draw/Default, sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_AAA_missiles/mfdElements/Heli_Attack_01/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_AAA_missiles/mfdElements/Heli_Attack_01/Draw/Default/PylonText1, sources - []
							{
							};
							class Ammo: Ammo //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_AAA_missiles/mfdElements/Heli_Attack_01/Draw/Default/Ammo, sources - ["A3_Weapons_F"]
							{
								source = "static";
								text = "-";
							};
						};
					};
				};
			};
		};
		class PylonRack_1Rnd_GAA_missiles: 4Rnd_GAA_missiles //inherits 13 parameters from bin\config.bin/CfgMagazines/4Rnd_GAA_missiles, sources - ["A3_Weapons_F"]
		{
			displayName = "Zephyr";
			count = 1;
			hardpoints[] = {"B_ZEPHYR"};
			model = "\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_04_F.p3d";
			pylonWeapon = "missiles_Zephyr";
			mass = 192;
		};
		class PylonMissile_1Rnd_GAA_missiles: PylonRack_1Rnd_GAA_missiles //inherits 6 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_GAA_missiles, sources - ["A3_Weapons_F"]
		{
			hardpoints[] = {"B_AMRAAM"};
			model = "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
			mass = 152;
		};
		class PylonRack_1Rnd_Missile_AGM_02_F: 6Rnd_Missile_AGM_02_F //inherits 10 parameters from bin\config.bin/CfgMagazines/6Rnd_Missile_AGM_02_F, sources - ["A3_Weapons_F"]
		{
			displayName = "Macer";
			model = "\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AGM_02_F.p3d";
			count = 1;
			hardpoints[] = {"B_MISSILE_PYLON"};
			pylonWeapon = "Missile_AGM_02_Plane_CAS_01_F";
			mass = 361;
		};
		class PylonRack_3Rnd_Missile_AGM_02_F: PylonRack_1Rnd_Missile_AGM_02_F //inherits 6 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_Missile_AGM_02_F, sources - ["A3_Weapons_F"]
		{
			displayName = "Macer 3x";
			model = "\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_AGM_02_F.p3d";
			count = 3;
			mirrorMissilesIndexes[] = {2, 1, 3};
			mass = 1020;
		};
		class PylonRack_1Rnd_LG_scalpel: 2Rnd_LG_scalpel //inherits 2 parameters from bin\config.bin/CfgMagazines/2Rnd_LG_scalpel, sources - ["A3_Weapons_F"]
		{
			displayName = "Scalpel";
			count = 1;
			hardpoints[] = {"B_MISSILE_PYLON", "SCALPEL_1RND_EJECTOR"};
			model = "\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_04_F.p3d";
			pylonWeapon = "missiles_SCALPEL";
			mass = 110;
			class mfdElements //sources - ["A3_Weapons_F"]
			{
				class Plane_CAS_02 //sources - ["A3_Weapons_F"]
				{
					class Bones //sources - ["A3_Weapons_F"]
					{
						class Center //sources - ["A3_Weapons_F"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
					};
					class Draw //sources - ["A3_Weapons_F"]
					{
						class BlackBackgroundGroup //sources - ["A3_Weapons_F"]
						{
							color[] = {0, 0, 0};
							alpha = 1;
							class BlackBackground //sources - ["A3_Weapons_F"]
							{
								type = "polygon";
								points[] = {{{{0.1, 0.11}, 1}, {{0.17, 0.11}, 1}, {{0.17, 0.33}, 1}, {{0.1, 0.33}, 1}}};
							};
						};
						class Default //sources - ["A3_Weapons_F"]
						{
							condition = "(PylonAmmoRelative>0.01) - PylonSelected";
							color[] = {1, 1, 1};
							alpha = 0.2;
							class Shape //sources - ["A3_Weapons_F"]
							{
								type = "polygon";
								texture = "a3\Weapons_F\MFD\UI\icon_place_cas_02_scalpel_ca.paa";
								points[] = {{{{0.1, 0.1}, 1}, {{0.18, 0.1}, 1}, {{0.18, 0.34}, 1}, {{0.1, 0.34}, 1}}};
							};
							class PylonText1 //sources - ["A3_Weapons_F"]
							{
								type = "text";
								source = "pylonammo";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.14, 0.27}, 1};
								right[] = {{0.18, 0.27}, 1};
								down[] = {{0.14, 0.301}, 1};
							};
						};
						class Selected: Default //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_LG_scalpel/mfdElements/Plane_CAS_02/Draw/Default, sources - ["A3_Weapons_F"]
						{
							color[] = {0, 0.12, 0};
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_LG_scalpel/mfdElements/Plane_CAS_02/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 8 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_LG_scalpel/mfdElements/Plane_CAS_02/Draw/Default/PylonText1, sources - []
							{
							};
						};
						class Empty: Selected //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_LG_scalpel/mfdElements/Plane_CAS_02/Draw/Selected, sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_LG_scalpel/mfdElements/Plane_CAS_02/Draw/Selected/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_LG_scalpel/mfdElements/Plane_CAS_02/Draw/Selected/PylonText1, sources - []
							{
							};
						};
					};
				};
			};
		};
		class PylonMissile_1Rnd_LG_scalpel: PylonRack_1Rnd_LG_scalpel //inherits 7 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_LG_scalpel, sources - ["A3_Weapons_F"]
		{
			hardpoints[] = {"SCALPEL_1RND", "UNI_SCALPEL"};
			model = "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
			mass = 49;
			class mfdElements //sources - ["A3_Weapons_F"]
			{
				class Heli_Attack_01 //sources - ["A3_Weapons_F"]
				{
					class Bones //sources - []
					{
					};
					class Draw //sources - ["A3_Weapons_F"]
					{
						class BackgroundGroup //sources - ["A3_Weapons_F"]
						{
							color[] = {0, 0, 0};
							class Background //sources - ["A3_Weapons_F"]
							{
								type = "polygon";
								points[] = {{{{-0.005, -0.03}, 1}, {{0.065, -0.03}, 1}, {{0.065, 0.15}, 1}, {{-0.005, 0.15}, 1}}};
							};
						};
						class Default //sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0, 0.12, 0};
							class Shape //sources - ["A3_Weapons_F"]
							{
								type = "line";
								width = 4;
								points[] = {{{0.0553333, 0.00176638}, 1}, {{0.0313333, 0.0174929}, 1}, {{0.00600001, 0.00176638}, 1}, {}, {{0.0553333, 0.135442}, 1}, {{0.0553333, 0.00176638}, 1}, {{0.0553333, -0.00609687}, 1}, {{0.0526667, -0.0126496}, 1}, {{0.05, -0.0178917}, 1}, {{0.0446667, -0.0205128}, 1}, {{0.0393333, -0.0231339}, 1}, {{0.0353333, -0.0244445}, 1}, {{0.0313333, -0.025755}, 1}, {{0.03, -0.025755}, 1}, {{0.026, -0.0244445}, 1}, {{0.022, -0.0231339}, 1}, {{0.0166667, -0.0205128}, 1}, {{0.0126667, -0.0178917}, 1}, {{0.00866666, -0.0126496}, 1}, {{0.00733334, -0.00609687}, 1}, {{0.00600001, 0.00176638}, 1}, {{0.00600001, 0.135442}, 1}, {{0.0553333, 0.135442}, 1}, {}};
							};
							class PylonText1 //sources - ["A3_Weapons_F"]
							{
								type = "text";
								source = "static";
								text = "AT";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.03, 0.05}, 1};
								right[] = {{0.06, 0.05}, 1};
								down[] = {{0.03, 0.075}, 1};
							};
							class Ammo //sources - ["A3_Weapons_F"]
							{
								type = "text";
								source = "PylonAmmo";
								sourceIndex = 1;
								sourceScale = 1;
								align = "center";
								scale = 1;
								pos[] = {{0.03, 0.09}, 1};
								right[] = {{0.07, 0.09}, 1};
								down[] = {{0.03, 0.125}, 1};
							};
						};
						class Selected: Default //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_LG_scalpel/mfdElements/Heli_Attack_01/Draw/Default, sources - ["A3_Weapons_F"]
						{
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							color[] = {0.99, 0.94, 0.59};
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_LG_scalpel/mfdElements/Heli_Attack_01/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_LG_scalpel/mfdElements/Heli_Attack_01/Draw/Default/PylonText1, sources - []
							{
							};
							class Ammo: Ammo //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_LG_scalpel/mfdElements/Heli_Attack_01/Draw/Default/Ammo, sources - []
							{
							};
						};
						class Empty: Default //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_LG_scalpel/mfdElements/Heli_Attack_01/Draw/Default, sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_LG_scalpel/mfdElements/Heli_Attack_01/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_LG_scalpel/mfdElements/Heli_Attack_01/Draw/Default/PylonText1, sources - []
							{
							};
							class Ammo: Ammo //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_LG_scalpel/mfdElements/Heli_Attack_01/Draw/Default/Ammo, sources - ["A3_Weapons_F"]
							{
								source = "static";
								text = "-";
							};
						};
					};
				};
				class Plane_CAS_02 //sources - ["A3_Weapons_F"]
				{
					class Bones //sources - ["A3_Weapons_F"]
					{
						class Center //sources - ["A3_Weapons_F"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
					};
					class Draw //sources - ["A3_Weapons_F"]
					{
						class BlackBackgroundGroup //sources - ["A3_Weapons_F"]
						{
							color[] = {0, 0, 0};
							alpha = 1;
							class BlackBackground //sources - ["A3_Weapons_F"]
							{
								type = "polygon";
								points[] = {{{{0.1, 0.11}, 1}, {{0.17, 0.11}, 1}, {{0.17, 0.33}, 1}, {{0.1, 0.33}, 1}}};
							};
						};
						class Default //sources - ["A3_Weapons_F"]
						{
							condition = "(PylonAmmoRelative>0.01) - PylonSelected";
							color[] = {1, 1, 1};
							alpha = 0.2;
							class Shape //sources - ["A3_Weapons_F"]
							{
								type = "polygon";
								texture = "a3\Weapons_F\MFD\UI\icon_place_cas_02_scalpel_ca.paa";
								points[] = {{{{0.1, 0.1}, 1}, {{0.18, 0.1}, 1}, {{0.18, 0.34}, 1}, {{0.1, 0.34}, 1}}};
							};
							class PylonText1 //sources - ["A3_Weapons_F"]
							{
								type = "text";
								source = "pylonammo";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.14, 0.27}, 1};
								right[] = {{0.18, 0.27}, 1};
								down[] = {{0.14, 0.301}, 1};
							};
						};
						class Selected: Default //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_LG_scalpel/mfdElements/Plane_CAS_02/Draw/Default, sources - ["A3_Weapons_F"]
						{
							color[] = {0, 0.12, 0};
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_LG_scalpel/mfdElements/Plane_CAS_02/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 8 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_LG_scalpel/mfdElements/Plane_CAS_02/Draw/Default/PylonText1, sources - []
							{
							};
						};
						class Empty: Selected //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_LG_scalpel/mfdElements/Plane_CAS_02/Draw/Selected, sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_LG_scalpel/mfdElements/Plane_CAS_02/Draw/Selected/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_LG_scalpel/mfdElements/Plane_CAS_02/Draw/Selected/PylonText1, sources - []
							{
							};
						};
					};
				};
				class VTOL_02 //sources - ["A3_Weapons_F"]
				{
					class Bones //sources - ["A3_Weapons_F"]
					{
						class Center //sources - ["A3_Weapons_F"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
						class R1: Center //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_LG_scalpel/mfdElements/VTOL_02/Bones/Center, sources - ["A3_Weapons_F"]
						{
							pos[] = {0, 0.0125};
						};
					};
					class Draw //sources - ["A3_Weapons_F"]
					{
						class Default //sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0.15, 1, 0.15, 1};
							alpha = 0.22;
							class Shape //sources - ["A3_Weapons_F"]
							{
								type = "line";
								width = 4;
								points[] = {{"R1", {0, -0.01125}, 1}, {"R1", {0.0045, -0.0097425}, 1}, {"R1", {0.007794, -0.005625}, 1}, {"R1", {0.009, 0}, 1}, {"R1", {0.007794, 0.005625}, 1}, {"R1", {0.0045, 0.0097425}, 1}, {"R1", {0, 0.01125}, 1}, {"R1", {-0.0045, 0.0097425}, 1}, {"R1", {-0.007794, 0.005625}, 1}, {"R1", {-0.009, 0}, 1}, {"R1", {-0.007794, -0.005625}, 1}, {"R1", {-0.0045, -0.0097425}, 1}, {"R1", {0, -0.01125}, 1}, {}, {"R1", {0.00636396, -0.00795495}, 1}, {"R1", {0.0106066, -0.0132583}, 1}, {}, {"R1", {0.00636396, 0.00795495}, 1}, {"R1", {0.0106066, 0.0132583}, 1}, {}, {"R1", {-0.00636396, 0.00795495}, 1}, {"R1", {-0.0106066, 0.0132583}, 1}, {}, {"R1", {-0.00636396, -0.00795495}, 1}, {"R1", {-0.0106066, -0.0132582}, 1}, {}};
							};
							class PylonText1 //sources - ["A3_Weapons_F"]
							{
								type = "text";
								source = "static";
								text = "AT";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {"Center", 1, {0, -0.051}, 1};
								right[] = {"Center", 1, {0.018, -0.051}, 1};
								down[] = {"Center", 1, {0, -0.03}, 1};
							};
						};
						class Selected: Default //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Default, sources - ["A3_Weapons_F"]
						{
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Default/PylonText1, sources - []
							{
							};
							class Background //sources - ["A3_Weapons_F"]
							{
								type = "polygon";
								points[] = {{{"R1", 1, {0, 0}, 1}, {"R1", {0.00636396, -0.00795495}, 1}, {"R1", {0.009, 4.91753e-010}, 1}, {"R1", {0.00636396, 0.00795495}, 1}}, {{"R1", 1, {0, 0}, 1}, {"R1", {0.00636396, 0.00795495}, 1}, {"R1", {-7.86805e-010, 0.01125}, 1}, {"R1", {-0.00636396, 0.00795495}, 1}}, {{"R1", 1, {0, 0}, 1}, {"R1", {-0.00636396, 0.00795495}, 1}, {"R1", {-0.009, -1.34155e-010}, 1}, {"R1", {-0.00636396, -0.00795495}, 1}}, {{"R1", 1, {0, 0}, 1}, {"R1", {-0.00636396, -0.00795495}, 1}, {"R1", {1.57361e-009, -0.01125}, 1}, {"R1", {0.00636396, -0.00795495}, 1}}};
							};
						};
						class Empty: Selected //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Selected, sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Selected/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Selected/PylonText1, sources - []
							{
							};
							class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Selected/Background, sources - []
							{
							};
						};
					};
				};
			};
		};
		class PylonRack_3Rnd_LG_scalpel: PylonRack_1Rnd_LG_scalpel //inherits 7 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_LG_scalpel, sources - ["A3_Weapons_F"]
		{
			hardpoints[] = {"B_MISSILE_PYLON", "UNI_SCALPEL"};
			count = 3;
			displayName = "Scalpel 3x";
			model = "\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_LG_scalpel_F.p3d";
			mass = 300;
			mirrorMissilesIndexes[] = {2, 1, 3};
			class mfdElements: mfdElements //inherits 1 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_LG_scalpel/mfdElements, sources - ["A3_Weapons_F"]
			{
				class VTOL_02 //sources - ["A3_Weapons_F"]
				{
					class Bones //sources - ["A3_Weapons_F"]
					{
						class Center //sources - ["A3_Weapons_F"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
						class R1: Center //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_3Rnd_LG_scalpel/mfdElements/VTOL_02/Bones/Center, sources - ["A3_Weapons_F"]
						{
							pos[] = {-0, 0.03};
						};
						class R2: Center //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_3Rnd_LG_scalpel/mfdElements/VTOL_02/Bones/Center, sources - ["A3_Weapons_F"]
						{
							pos[] = {-0.0125, -0.01};
						};
						class R3: Center //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_3Rnd_LG_scalpel/mfdElements/VTOL_02/Bones/Center, sources - ["A3_Weapons_F"]
						{
							pos[] = {0.0125, -0.01};
						};
						class R4: Center //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_3Rnd_LG_scalpel/mfdElements/VTOL_02/Bones/Center, sources - ["A3_Weapons_F"]
						{
							pos[] = {0.0125, -0.01};
						};
					};
					class Draw //sources - ["A3_Weapons_F"]
					{
						class Default //sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0.15, 1, 0.15, 1};
							alpha = 0.22;
							class Missile1 //sources - ["A3_Weapons_F"]
							{
								condition = "PylonAmmo>=3";
								class Shape //sources - ["A3_Weapons_F"]
								{
									type = "line";
									width = 2;
									points[] = {{"R1", {0, -0.01125}, 1}, {"R1", {0.0045, -0.0097425}, 1}, {"R1", {0.007794, -0.005625}, 1}, {"R1", {0.009, 0}, 1}, {"R1", {0.007794, 0.005625}, 1}, {"R1", {0.0045, 0.0097425}, 1}, {"R1", {0, 0.01125}, 1}, {"R1", {-0.0045, 0.0097425}, 1}, {"R1", {-0.007794, 0.005625}, 1}, {"R1", {-0.009, 0}, 1}, {"R1", {-0.007794, -0.005625}, 1}, {"R1", {-0.0045, -0.0097425}, 1}, {"R1", {0, -0.01125}, 1}, {}, {"R1", {0.00636396, -0.00795495}, 1}, {"R1", {0.0106066, -0.0132583}, 1}, {}, {"R1", {0.00636396, 0.00795495}, 1}, {"R1", {0.0106066, 0.0132583}, 1}, {}, {"R1", {-0.00636396, 0.00795495}, 1}, {"R1", {-0.0106066, 0.0132583}, 1}, {}, {"R1", {-0.00636396, -0.00795495}, 1}, {"R1", {-0.0106066, -0.0132582}, 1}, {}};
								};
							};
							class Missile2 //sources - ["A3_Weapons_F"]
							{
								condition = "PylonAmmo>=2";
								class Shape //sources - ["A3_Weapons_F"]
								{
									type = "line";
									width = 2;
									points[] = {{"R2", {0, -0.01125}, 1}, {"R2", {0.0045, -0.0097425}, 1}, {"R2", {0.007794, -0.005625}, 1}, {"R2", {0.009, 0}, 1}, {"R2", {0.007794, 0.005625}, 1}, {"R2", {0.0045, 0.0097425}, 1}, {"R2", {0, 0.01125}, 1}, {"R2", {-0.0045, 0.0097425}, 1}, {"R2", {-0.007794, 0.005625}, 1}, {"R2", {-0.009, 0}, 1}, {"R2", {-0.007794, -0.005625}, 1}, {"R2", {-0.0045, -0.0097425}, 1}, {"R2", {0, -0.01125}, 1}, {}, {"R2", {0.00636396, -0.00795495}, 1}, {"R2", {0.0106066, -0.0132583}, 1}, {}, {"R2", {0.00636396, 0.00795495}, 1}, {"R2", {0.0106066, 0.0132583}, 1}, {}, {"R2", {-0.00636396, 0.00795495}, 1}, {"R2", {-0.0106066, 0.0132583}, 1}, {}, {"R2", {-0.00636396, -0.00795495}, 1}, {"R2", {-0.0106066, -0.0132582}, 1}, {}};
								};
							};
							class Missile3 //sources - ["A3_Weapons_F"]
							{
								condition = "PylonAmmo>=1";
								class Shape //sources - ["A3_Weapons_F"]
								{
									type = "line";
									width = 2;
									points[] = {{"R3", {0, -0.01125}, 1}, {"R3", {0.0045, -0.0097425}, 1}, {"R3", {0.007794, -0.005625}, 1}, {"R3", {0.009, 0}, 1}, {"R3", {0.007794, 0.005625}, 1}, {"R3", {0.0045, 0.0097425}, 1}, {"R3", {0, 0.01125}, 1}, {"R3", {-0.0045, 0.0097425}, 1}, {"R3", {-0.007794, 0.005625}, 1}, {"R3", {-0.009, 0}, 1}, {"R3", {-0.007794, -0.005625}, 1}, {"R3", {-0.0045, -0.0097425}, 1}, {"R3", {0, -0.01125}, 1}, {}, {"R3", {0.00636396, -0.00795495}, 1}, {"R3", {0.0106066, -0.0132583}, 1}, {}, {"R3", {0.00636396, 0.00795495}, 1}, {"R3", {0.0106066, 0.0132583}, 1}, {}, {"R3", {-0.00636396, 0.00795495}, 1}, {"R3", {-0.0106066, 0.0132583}, 1}, {}, {"R3", {-0.00636396, -0.00795495}, 1}, {"R3", {-0.0106066, -0.0132582}, 1}, {}};
								};
							};
							class PylonText1 //sources - ["A3_Weapons_F"]
							{
								type = "text";
								source = "static";
								text = "AT";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {"Center", 1, {0, -0.051}, 1};
								right[] = {"Center", 1, {0.018, -0.051}, 1};
								down[] = {"Center", 1, {0, -0.03}, 1};
							};
						};
						class Selected: Default //inherits 7 parameters from bin\config.bin/CfgMagazines/PylonRack_3Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Default, sources - ["A3_Weapons_F"]
						{
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonRack_3Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Default/PylonText1, sources - []
							{
							};
							class Missile1: Missile1 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_3Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Default/Missile1, sources - ["A3_Weapons_F"]
							{
								condition = "PylonAmmo>=3";
								class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_3Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Default/Missile1/Shape, sources - []
								{
								};
								class Background //sources - ["A3_Weapons_F"]
								{
									type = "polygon";
									points[] = {{{"R1", 1, {0, 0}, 1}, {"R1", {0.00636396, -0.00795495}, 1}, {"R1", {0.009, 4.91753e-010}, 1}, {"R1", {0.00636396, 0.00795495}, 1}}, {{"R1", 1, {0, 0}, 1}, {"R1", {0.00636396, 0.00795495}, 1}, {"R1", {-7.86805e-010, 0.01125}, 1}, {"R1", {-0.00636396, 0.00795495}, 1}}, {{"R1", 1, {0, 0}, 1}, {"R1", {-0.00636396, 0.00795495}, 1}, {"R1", {-0.009, -1.34155e-010}, 1}, {"R1", {-0.00636396, -0.00795495}, 1}}, {{"R1", 1, {0, 0}, 1}, {"R1", {-0.00636396, -0.00795495}, 1}, {"R1", {1.57361e-009, -0.01125}, 1}, {"R1", {0.00636396, -0.00795495}, 1}}};
								};
							};
							class Missile2: Missile2 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_3Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Default/Missile2, sources - ["A3_Weapons_F"]
							{
								condition = "(PylonAmmo>=2)-(PylonAmmo>=3)";
								class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_3Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Default/Missile2/Shape, sources - []
								{
								};
								class Background //sources - ["A3_Weapons_F"]
								{
									type = "polygon";
									points[] = {{{"R2", 1, {0, 0}, 1}, {"R2", {0.00636396, -0.00795495}, 1}, {"R2", {0.009, 4.91753e-010}, 1}, {"R2", {0.00636396, 0.00795495}, 1}}, {{"R2", 1, {0, 0}, 1}, {"R2", {0.00636396, 0.00795495}, 1}, {"R2", {-7.86805e-010, 0.01125}, 1}, {"R2", {-0.00636396, 0.00795495}, 1}}, {{"R2", 1, {0, 0}, 1}, {"R2", {-0.00636396, 0.00795495}, 1}, {"R2", {-0.009, -1.34155e-010}, 1}, {"R2", {-0.00636396, -0.00795495}, 1}}, {{"R2", 1, {0, 0}, 1}, {"R2", {-0.00636396, -0.00795495}, 1}, {"R2", {1.57361e-009, -0.01125}, 1}, {"R2", {0.00636396, -0.00795495}, 1}}};
								};
							};
							class Missile3: Missile3 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_3Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Default/Missile3, sources - ["A3_Weapons_F"]
							{
								condition = "(PylonAmmo>=1)-(PylonAmmo>=2)";
								class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_3Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Default/Missile3/Shape, sources - []
								{
								};
								class Background //sources - ["A3_Weapons_F"]
								{
									type = "polygon";
									points[] = {{{"R3", 1, {0, 0}, 1}, {"R3", {0.00636396, -0.00795495}, 1}, {"R3", {0.009, 4.91753e-010}, 1}, {"R3", {0.00636396, 0.00795495}, 1}}, {{"R3", 1, {0, 0}, 1}, {"R3", {0.00636396, 0.00795495}, 1}, {"R3", {-7.86805e-010, 0.01125}, 1}, {"R3", {-0.00636396, 0.00795495}, 1}}, {{"R3", 1, {0, 0}, 1}, {"R3", {-0.00636396, 0.00795495}, 1}, {"R3", {-0.009, -1.34155e-010}, 1}, {"R3", {-0.00636396, -0.00795495}, 1}}, {{"R3", 1, {0, 0}, 1}, {"R3", {-0.00636396, -0.00795495}, 1}, {"R3", {1.57361e-009, -0.01125}, 1}, {"R3", {0.00636396, -0.00795495}, 1}}};
								};
							};
						};
						class HalfEmpty: Selected //inherits 6 parameters from bin\config.bin/CfgMagazines/PylonRack_3Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Selected, sources - ["A3_Weapons_F"]
						{
							alpha = 0.15;
							condition = "PylonAmmoRelative <= 1";
							color[] = {1, 0, 0, 1};
							class Missile1: Missile1 //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_3Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Selected/Missile1, sources - ["A3_Weapons_F"]
							{
								condition = "PylonAmmo<=2";
								class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_3Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Selected/Missile1/Shape, sources - []
								{
								};
								class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_3Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Selected/Missile1/Background, sources - []
								{
								};
							};
							class Missile2: Missile2 //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_3Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Selected/Missile2, sources - ["A3_Weapons_F"]
							{
								condition = "PylonAmmo<=1";
								class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_3Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Selected/Missile2/Shape, sources - []
								{
								};
								class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_3Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Selected/Missile2/Background, sources - []
								{
								};
							};
							class Missile3: Missile3 //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_3Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Selected/Missile3, sources - ["A3_Weapons_F"]
							{
								condition = "PylonAmmo<=0";
								class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_3Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Selected/Missile3/Shape, sources - []
								{
								};
								class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_3Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Selected/Missile3/Background, sources - []
								{
								};
							};
						};
						class Empty: Selected //inherits 6 parameters from bin\config.bin/CfgMagazines/PylonRack_3Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Selected, sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_3Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Selected/PylonText1, sources - []
							{
							};
						};
					};
				};
			};
		};
		class PylonRack_4Rnd_LG_scalpel: PylonRack_1Rnd_LG_scalpel //inherits 7 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_LG_scalpel, sources - ["A3_Weapons_F"]
		{
			count = 4;
			displayName = "Scalpel 4x";
			model = "\A3\Weapons_F\DynamicLoadout\PylonPod_4x_Missile_LG_scalpel_F.p3d";
			mass = 370;
			mirrorMissilesIndexes[] = {2, 1, 4, 3};
			hardpoints[] = {"UNI_SCALPEL", "SCALPEL_4RND"};
			class mfdElements: mfdElements //inherits 1 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_LG_scalpel/mfdElements, sources - ["A3_Weapons_F"]
			{
				class VTOL_02 //sources - ["A3_Weapons_F"]
				{
					class Bones //sources - ["A3_Weapons_F"]
					{
						class Center //sources - ["A3_Weapons_F"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
						class R1: Center //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_4Rnd_LG_scalpel/mfdElements/VTOL_02/Bones/Center, sources - ["A3_Weapons_F"]
						{
							pos[] = {-0.0125, 0.03};
						};
						class R2: Center //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_4Rnd_LG_scalpel/mfdElements/VTOL_02/Bones/Center, sources - ["A3_Weapons_F"]
						{
							pos[] = {0.0125, 0.03};
						};
						class R3: Center //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_4Rnd_LG_scalpel/mfdElements/VTOL_02/Bones/Center, sources - ["A3_Weapons_F"]
						{
							pos[] = {-0.0125, -0.01};
						};
						class R4: Center //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_4Rnd_LG_scalpel/mfdElements/VTOL_02/Bones/Center, sources - ["A3_Weapons_F"]
						{
							pos[] = {0.0125, -0.01};
						};
					};
					class Draw //sources - ["A3_Weapons_F"]
					{
						class Default //sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0.15, 1, 0.15, 1};
							alpha = 0.22;
							class Missile1 //sources - ["A3_Weapons_F"]
							{
								condition = "PylonAmmo>=4";
								class Shape //sources - ["A3_Weapons_F"]
								{
									type = "line";
									width = 2;
									points[] = {{"R1", {0, -0.01125}, 1}, {"R1", {0.0045, -0.0097425}, 1}, {"R1", {0.007794, -0.005625}, 1}, {"R1", {0.009, 0}, 1}, {"R1", {0.007794, 0.005625}, 1}, {"R1", {0.0045, 0.0097425}, 1}, {"R1", {0, 0.01125}, 1}, {"R1", {-0.0045, 0.0097425}, 1}, {"R1", {-0.007794, 0.005625}, 1}, {"R1", {-0.009, 0}, 1}, {"R1", {-0.007794, -0.005625}, 1}, {"R1", {-0.0045, -0.0097425}, 1}, {"R1", {0, -0.01125}, 1}, {}, {"R1", {0.00636396, -0.00795495}, 1}, {"R1", {0.0106066, -0.0132583}, 1}, {}, {"R1", {0.00636396, 0.00795495}, 1}, {"R1", {0.0106066, 0.0132583}, 1}, {}, {"R1", {-0.00636396, 0.00795495}, 1}, {"R1", {-0.0106066, 0.0132583}, 1}, {}, {"R1", {-0.00636396, -0.00795495}, 1}, {"R1", {-0.0106066, -0.0132582}, 1}, {}};
								};
							};
							class Missile2 //sources - ["A3_Weapons_F"]
							{
								condition = "PylonAmmo>=3";
								class Shape //sources - ["A3_Weapons_F"]
								{
									type = "line";
									width = 2;
									points[] = {{"R2", {0, -0.01125}, 1}, {"R2", {0.0045, -0.0097425}, 1}, {"R2", {0.007794, -0.005625}, 1}, {"R2", {0.009, 0}, 1}, {"R2", {0.007794, 0.005625}, 1}, {"R2", {0.0045, 0.0097425}, 1}, {"R2", {0, 0.01125}, 1}, {"R2", {-0.0045, 0.0097425}, 1}, {"R2", {-0.007794, 0.005625}, 1}, {"R2", {-0.009, 0}, 1}, {"R2", {-0.007794, -0.005625}, 1}, {"R2", {-0.0045, -0.0097425}, 1}, {"R2", {0, -0.01125}, 1}, {}, {"R2", {0.00636396, -0.00795495}, 1}, {"R2", {0.0106066, -0.0132583}, 1}, {}, {"R2", {0.00636396, 0.00795495}, 1}, {"R2", {0.0106066, 0.0132583}, 1}, {}, {"R2", {-0.00636396, 0.00795495}, 1}, {"R2", {-0.0106066, 0.0132583}, 1}, {}, {"R2", {-0.00636396, -0.00795495}, 1}, {"R2", {-0.0106066, -0.0132582}, 1}, {}};
								};
							};
							class Missile3 //sources - ["A3_Weapons_F"]
							{
								condition = "PylonAmmo>=2";
								class Shape //sources - ["A3_Weapons_F"]
								{
									type = "line";
									width = 2;
									points[] = {{"R3", {0, -0.01125}, 1}, {"R3", {0.0045, -0.0097425}, 1}, {"R3", {0.007794, -0.005625}, 1}, {"R3", {0.009, 0}, 1}, {"R3", {0.007794, 0.005625}, 1}, {"R3", {0.0045, 0.0097425}, 1}, {"R3", {0, 0.01125}, 1}, {"R3", {-0.0045, 0.0097425}, 1}, {"R3", {-0.007794, 0.005625}, 1}, {"R3", {-0.009, 0}, 1}, {"R3", {-0.007794, -0.005625}, 1}, {"R3", {-0.0045, -0.0097425}, 1}, {"R3", {0, -0.01125}, 1}, {}, {"R3", {0.00636396, -0.00795495}, 1}, {"R3", {0.0106066, -0.0132583}, 1}, {}, {"R3", {0.00636396, 0.00795495}, 1}, {"R3", {0.0106066, 0.0132583}, 1}, {}, {"R3", {-0.00636396, 0.00795495}, 1}, {"R3", {-0.0106066, 0.0132583}, 1}, {}, {"R3", {-0.00636396, -0.00795495}, 1}, {"R3", {-0.0106066, -0.0132582}, 1}, {}};
								};
							};
							class Missile4 //sources - ["A3_Weapons_F"]
							{
								condition = "PylonAmmo>=1";
								class Shape //sources - ["A3_Weapons_F"]
								{
									type = "line";
									width = 2;
									points[] = {{"R4", {0, -0.01125}, 1}, {"R4", {0.0045, -0.0097425}, 1}, {"R4", {0.007794, -0.005625}, 1}, {"R4", {0.009, 0}, 1}, {"R4", {0.007794, 0.005625}, 1}, {"R4", {0.0045, 0.0097425}, 1}, {"R4", {0, 0.01125}, 1}, {"R4", {-0.0045, 0.0097425}, 1}, {"R4", {-0.007794, 0.005625}, 1}, {"R4", {-0.009, 0}, 1}, {"R4", {-0.007794, -0.005625}, 1}, {"R4", {-0.0045, -0.0097425}, 1}, {"R4", {0, -0.01125}, 1}, {}, {"R4", {0.00636396, -0.00795495}, 1}, {"R4", {0.0106066, -0.0132583}, 1}, {}, {"R4", {0.00636396, 0.00795495}, 1}, {"R4", {0.0106066, 0.0132583}, 1}, {}, {"R4", {-0.00636396, 0.00795495}, 1}, {"R4", {-0.0106066, 0.0132583}, 1}, {}, {"R4", {-0.00636396, -0.00795495}, 1}, {"R4", {-0.0106066, -0.0132582}, 1}, {}};
								};
							};
							class PylonText1 //sources - ["A3_Weapons_F"]
							{
								type = "text";
								source = "static";
								text = "AT";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {"Center", 1, {0, -0.051}, 1};
								right[] = {"Center", 1, {0.018, -0.051}, 1};
								down[] = {"Center", 1, {0, -0.03}, 1};
							};
						};
						class Selected: Default //inherits 8 parameters from bin\config.bin/CfgMagazines/PylonRack_4Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Default, sources - ["A3_Weapons_F"]
						{
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonRack_4Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Default/PylonText1, sources - []
							{
							};
							class Missile1: Missile1 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_4Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Default/Missile1, sources - ["A3_Weapons_F"]
							{
								condition = "PylonAmmo>=4";
								class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_4Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Default/Missile1/Shape, sources - []
								{
								};
								class Background //sources - ["A3_Weapons_F"]
								{
									type = "polygon";
									points[] = {{{"R1", 1, {0, 0}, 1}, {"R1", {0.00636396, -0.00795495}, 1}, {"R1", {0.009, 4.91753e-010}, 1}, {"R1", {0.00636396, 0.00795495}, 1}}, {{"R1", 1, {0, 0}, 1}, {"R1", {0.00636396, 0.00795495}, 1}, {"R1", {-7.86805e-010, 0.01125}, 1}, {"R1", {-0.00636396, 0.00795495}, 1}}, {{"R1", 1, {0, 0}, 1}, {"R1", {-0.00636396, 0.00795495}, 1}, {"R1", {-0.009, -1.34155e-010}, 1}, {"R1", {-0.00636396, -0.00795495}, 1}}, {{"R1", 1, {0, 0}, 1}, {"R1", {-0.00636396, -0.00795495}, 1}, {"R1", {1.57361e-009, -0.01125}, 1}, {"R1", {0.00636396, -0.00795495}, 1}}};
								};
							};
							class Missile2: Missile2 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_4Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Default/Missile2, sources - ["A3_Weapons_F"]
							{
								condition = "(PylonAmmo>=3)-(PylonAmmo>=4)";
								class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_4Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Default/Missile2/Shape, sources - []
								{
								};
								class Background //sources - ["A3_Weapons_F"]
								{
									type = "polygon";
									points[] = {{{"R2", 1, {0, 0}, 1}, {"R2", {0.00636396, -0.00795495}, 1}, {"R2", {0.009, 4.91753e-010}, 1}, {"R2", {0.00636396, 0.00795495}, 1}}, {{"R2", 1, {0, 0}, 1}, {"R2", {0.00636396, 0.00795495}, 1}, {"R2", {-7.86805e-010, 0.01125}, 1}, {"R2", {-0.00636396, 0.00795495}, 1}}, {{"R2", 1, {0, 0}, 1}, {"R2", {-0.00636396, 0.00795495}, 1}, {"R2", {-0.009, -1.34155e-010}, 1}, {"R2", {-0.00636396, -0.00795495}, 1}}, {{"R2", 1, {0, 0}, 1}, {"R2", {-0.00636396, -0.00795495}, 1}, {"R2", {1.57361e-009, -0.01125}, 1}, {"R2", {0.00636396, -0.00795495}, 1}}};
								};
							};
							class Missile3: Missile3 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_4Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Default/Missile3, sources - ["A3_Weapons_F"]
							{
								condition = "(PylonAmmo>=2)-(PylonAmmo>=3)";
								class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_4Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Default/Missile3/Shape, sources - []
								{
								};
								class Background //sources - ["A3_Weapons_F"]
								{
									type = "polygon";
									points[] = {{{"R3", 1, {0, 0}, 1}, {"R3", {0.00636396, -0.00795495}, 1}, {"R3", {0.009, 4.91753e-010}, 1}, {"R3", {0.00636396, 0.00795495}, 1}}, {{"R3", 1, {0, 0}, 1}, {"R3", {0.00636396, 0.00795495}, 1}, {"R3", {-7.86805e-010, 0.01125}, 1}, {"R3", {-0.00636396, 0.00795495}, 1}}, {{"R3", 1, {0, 0}, 1}, {"R3", {-0.00636396, 0.00795495}, 1}, {"R3", {-0.009, -1.34155e-010}, 1}, {"R3", {-0.00636396, -0.00795495}, 1}}, {{"R3", 1, {0, 0}, 1}, {"R3", {-0.00636396, -0.00795495}, 1}, {"R3", {1.57361e-009, -0.01125}, 1}, {"R3", {0.00636396, -0.00795495}, 1}}};
								};
							};
							class Missile4: Missile4 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_4Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Default/Missile4, sources - ["A3_Weapons_F"]
							{
								condition = "(PylonAmmo>=1)-(PylonAmmo>=2)";
								class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_4Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Default/Missile4/Shape, sources - []
								{
								};
								class Background //sources - ["A3_Weapons_F"]
								{
									type = "polygon";
									points[] = {{{"R4", 1, {0, 0}, 1}, {"R4", {0.00636396, -0.00795495}, 1}, {"R4", {0.009, 4.91753e-010}, 1}, {"R4", {0.00636396, 0.00795495}, 1}}, {{"R4", 1, {0, 0}, 1}, {"R4", {0.00636396, 0.00795495}, 1}, {"R4", {-7.86805e-010, 0.01125}, 1}, {"R4", {-0.00636396, 0.00795495}, 1}}, {{"R4", 1, {0, 0}, 1}, {"R4", {-0.00636396, 0.00795495}, 1}, {"R4", {-0.009, -1.34155e-010}, 1}, {"R4", {-0.00636396, -0.00795495}, 1}}, {{"R4", 1, {0, 0}, 1}, {"R4", {-0.00636396, -0.00795495}, 1}, {"R4", {1.57361e-009, -0.01125}, 1}, {"R4", {0.00636396, -0.00795495}, 1}}};
								};
							};
						};
						class HalfEmpty: Selected //inherits 7 parameters from bin\config.bin/CfgMagazines/PylonRack_4Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Selected, sources - ["A3_Weapons_F"]
						{
							alpha = 0.15;
							condition = "PylonAmmoRelative <= 1";
							color[] = {1, 0, 0, 1};
							class Missile1: Missile1 //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_4Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Selected/Missile1, sources - ["A3_Weapons_F"]
							{
								condition = "PylonAmmo<=3";
								class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_4Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Selected/Missile1/Shape, sources - []
								{
								};
								class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_4Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Selected/Missile1/Background, sources - []
								{
								};
							};
							class Missile2: Missile2 //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_4Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Selected/Missile2, sources - ["A3_Weapons_F"]
							{
								condition = "PylonAmmo<=2";
								class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_4Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Selected/Missile2/Shape, sources - []
								{
								};
								class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_4Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Selected/Missile2/Background, sources - []
								{
								};
							};
							class Missile3: Missile3 //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_4Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Selected/Missile3, sources - ["A3_Weapons_F"]
							{
								condition = "PylonAmmo<=1";
								class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_4Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Selected/Missile3/Shape, sources - []
								{
								};
								class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_4Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Selected/Missile3/Background, sources - []
								{
								};
							};
							class Missile4: Missile4 //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_4Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Selected/Missile4, sources - ["A3_Weapons_F"]
							{
								condition = "PylonAmmo<=0";
								class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_4Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Selected/Missile4/Shape, sources - []
								{
								};
								class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_4Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Selected/Missile4/Background, sources - []
								{
								};
							};
						};
						class Empty: Selected //inherits 7 parameters from bin\config.bin/CfgMagazines/PylonRack_4Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Selected, sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_4Rnd_LG_scalpel/mfdElements/VTOL_02/Draw/Selected/PylonText1, sources - []
							{
							};
						};
					};
				};
			};
		};
		class PylonRack_7Rnd_Rocket_04_HE_F: 7Rnd_Rocket_04_HE_F //inherits 10 parameters from bin\config.bin/CfgMagazines/7Rnd_Rocket_04_HE_F, sources - ["A3_Weapons_F"]
		{
			displayName = "Shrieker 7x HE";
			count = 7;
			model = "\A3\Weapons_F\DynamicLoadout\PylonPod_Rocket_02_F.p3d";
			hardpoints[] = {"B_MISSILE_PYLON", "B_SHIEKER"};
			pylonWeapon = "Rocket_04_HE_Plane_CAS_01_F";
			mass = 88.3;
		};
		class PylonRack_7Rnd_Rocket_04_AP_F: 7Rnd_Rocket_04_AP_F //inherits 3 parameters from bin\config.bin/CfgMagazines/7Rnd_Rocket_04_AP_F, sources - ["A3_Weapons_F"]
		{
			displayName = "Shrieker 7x AP";
			count = 7;
			model = "\A3\Weapons_F\DynamicLoadout\PylonPod_Rocket_02_F.p3d";
			hardpoints[] = {"B_MISSILE_PYLON", "B_SHIEKER"};
			pylonWeapon = "Rocket_04_AP_Plane_CAS_01_F";
			mass = 88.3;
		};
		class PylonRack_12Rnd_PG_missiles: 24Rnd_PG_missiles //inherits 12 parameters from bin\config.bin/CfgMagazines/24Rnd_PG_missiles, sources - ["A3_Weapons_F"]
		{
			displayName = "DAGR";
			count = 12;
			hardpoints[] = {"B_MISSILE_PYLON", "DAGR"};
			model = "\A3\Weapons_F\DynamicLoadout\PylonPod_Rocket_DAGR_F.p3d";
			muzzlePos = "muzzlePos";
			muzzleEnd = "muzzleEnd";
			pylonWeapon = "missiles_DAGR";
			mass = 140;
			class mfdElements //sources - ["A3_Weapons_F"]
			{
				class Heli_Attack_01 //sources - ["A3_Weapons_F"]
				{
					class Bones //sources - []
					{
					};
					class Draw //sources - ["A3_Weapons_F"]
					{
						class BackgroundGroup //sources - ["A3_Weapons_F"]
						{
							color[] = {0, 0, 0};
							class Background //sources - ["A3_Weapons_F"]
							{
								type = "polygon";
								points[] = {{{{-0.005, -0.03}, 1}, {{0.065, -0.03}, 1}, {{0.065, 0.15}, 1}, {{-0.005, 0.15}, 1}}};
							};
						};
						class Default //sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0, 0.12, 0};
							class Shape //sources - ["A3_Weapons_F"]
							{
								type = "line";
								width = 4;
								points[] = {{{-0.005, -0.03}, 1}, {{0.065, -0.03}, 1}, {{0.065, 0.15}, 1}, {{-0.005, 0.15}, 1}, {{-0.005, -0.03}, 1}};
							};
							class PylonText1 //sources - ["A3_Weapons_F"]
							{
								type = "text";
								source = "static";
								text = "RKT";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.03, 0.05}, 1};
								right[] = {{0.06, 0.05}, 1};
								down[] = {{0.03, 0.075}, 1};
							};
							class Ammo //sources - ["A3_Weapons_F"]
							{
								type = "text";
								source = "PylonAmmo";
								sourceIndex = 1;
								sourceScale = 1;
								align = "center";
								scale = 1;
								pos[] = {{0.03, 0.09}, 1};
								right[] = {{0.07, 0.09}, 1};
								down[] = {{0.03, 0.125}, 1};
							};
						};
						class Selected: Default //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonRack_12Rnd_PG_missiles/mfdElements/Heli_Attack_01/Draw/Default, sources - ["A3_Weapons_F"]
						{
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							color[] = {0.99, 0.94, 0.59};
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_12Rnd_PG_missiles/mfdElements/Heli_Attack_01/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonRack_12Rnd_PG_missiles/mfdElements/Heli_Attack_01/Draw/Default/PylonText1, sources - []
							{
							};
							class Ammo: Ammo //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonRack_12Rnd_PG_missiles/mfdElements/Heli_Attack_01/Draw/Default/Ammo, sources - []
							{
							};
						};
						class Empty: Default //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonRack_12Rnd_PG_missiles/mfdElements/Heli_Attack_01/Draw/Default, sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_12Rnd_PG_missiles/mfdElements/Heli_Attack_01/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonRack_12Rnd_PG_missiles/mfdElements/Heli_Attack_01/Draw/Default/PylonText1, sources - []
							{
							};
							class Ammo: Ammo //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonRack_12Rnd_PG_missiles/mfdElements/Heli_Attack_01/Draw/Default/Ammo, sources - ["A3_Weapons_F"]
							{
								source = "static";
								text = "-";
							};
						};
					};
				};
			};
		};
		class PylonRack_12Rnd_missiles: 12Rnd_missiles //inherits 2 parameters from bin\config.bin/CfgMagazines/12Rnd_missiles, sources - ["A3_Weapons_F"]
		{
			displayName = "DAR";
			count = 12;
			model = "\A3\Weapons_F\DynamicLoadout\PylonPod_12x_Rocket_DAR_F.p3d";
			hardpoints[] = {"B_MISSILE_PYLON", "DAR"};
			muzzlePos = "muzzlePos";
			muzzleEnd = "muzzleEnd";
			pylonWeapon = "missiles_DAR";
			mass = 140;
		};
		class PylonMissile_1Rnd_Bomb_04_F: 4Rnd_Bomb_04_F //inherits 10 parameters from bin\config.bin/CfgMagazines/4Rnd_Bomb_04_F, sources - ["A3_Weapons_F"]
		{
			displayName = "GBU-12";
			count = 1;
			model = "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
			hardpoints[] = {"B_BOMB_PYLON"};
			pylonWeapon = "Bomb_04_Plane_CAS_01_F";
			mass = 230;
		};
		class PylonMissile_1Rnd_Mk82_F: 2Rnd_Mk82 //inherits 10 parameters from bin\config.bin/CfgMagazines/2Rnd_Mk82, sources - ["A3_Weapons_F"]
		{
			displayName = "Mk82";
			count = 1;
			model = "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_02_F.p3d";
			hardpoints[] = {"B_BOMB_PYLON"};
			pylonWeapon = "Mk82BombLauncher";
			mass = 227;
		};
		class PylonWeapon_300Rnd_20mm_shells: 300Rnd_20mm_shells //inherits 10 parameters from bin\config.bin/CfgMagazines/300Rnd_20mm_shells, sources - ["A3_Weapons_F"]
		{
			displayName = "Twin Cannon 20mm";
			model = "\A3\Weapons_F\DynamicLoadout\PylonPod_Twin_Cannon_20mm.p3d";
			muzzlePos = "muzzlePos";
			muzzleEnd = "muzzleEnd";
			hardpoints[] = {"B_A143_BUZZARD_CENTER_PYLON", "20MM_TWIN_CANNON"};
			pylonWeapon = "Twin_Cannon_20mm";
			mass = 230;
		};
		class PylonWeapon_2000Rnd_65x39_belt: 2000Rnd_65x39_Belt_Tracer_Green_Splash //inherits 2 parameters from bin\config.bin/CfgMagazines/2000Rnd_65x39_Belt_Tracer_Green_Splash, sources - ["A3_Weapons_F"]
		{
			displayName = "Minigun 6.5 mm";
			model = "\A3\Weapons_F\DynamicLoadout\PylonPod_Minigun_Heli_Light_02.p3d";
			muzzlePos = "machinegun_beg";
			muzzleEnd = "machinegun_end";
			hardpoints[] = {"I_ORCA_RIGHT_PYLON"};
			pylonWeapon = "LMG_Minigun_heli";
			mass = 200;
		};
		class PylonRack_20Rnd_Rocket_03_HE_F: 20Rnd_Rocket_03_HE_F //inherits 4 parameters from bin\config.bin/CfgMagazines/20Rnd_Rocket_03_HE_F, sources - ["A3_Weapons_F"]
		{
			displayName = "Tratnyr 20x HE";
			count = 20;
			model = "\A3\Weapons_F\DynamicLoadout\PylonPod_Rocket_01_F.p3d";
			muzzlePos = "muzzlePos";
			muzzleEnd = "muzzleEnd";
			hardpoints[] = {"O_MISSILE_PYLON"};
			pylonWeapon = "Rocket_03_HE_Plane_CAS_02_F";
			mass = 208;
			class mfdElements //sources - ["A3_Weapons_F"]
			{
				class Plane_CAS_02 //sources - ["A3_Weapons_F"]
				{
					class Bones //sources - ["A3_Weapons_F"]
					{
						class Center //sources - ["A3_Weapons_F"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
					};
					class Draw //sources - ["A3_Weapons_F"]
					{
						class BlackBackgroundGroup //sources - ["A3_Weapons_F"]
						{
							color[] = {0, 0, 0};
							alpha = 1;
							class BlackBackground //sources - ["A3_Weapons_F"]
							{
								type = "polygon";
								points[] = {{{{0.1, 0.11}, 1}, {{0.17, 0.11}, 1}, {{0.17, 0.33}, 1}, {{0.1, 0.33}, 1}}};
							};
						};
						class Default //sources - ["A3_Weapons_F"]
						{
							condition = "(PylonAmmoRelative>0.01) - PylonSelected";
							color[] = {1, 1, 1};
							alpha = 0.2;
							class Shape //sources - ["A3_Weapons_F"]
							{
								type = "polygon";
								texture = "a3\Weapons_F\MFD\UI\icon_place_cas_02_rocket_02_ca.paa";
								points[] = {{{{0.1, 0.1}, 1}, {{0.18, 0.1}, 1}, {{0.18, 0.34}, 1}, {{0.1, 0.34}, 1}}};
							};
							class PylonText1 //sources - ["A3_Weapons_F"]
							{
								type = "text";
								source = "pylonammo";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.14, 0.27}, 1};
								right[] = {{0.18, 0.27}, 1};
								down[] = {{0.14, 0.301}, 1};
							};
						};
						class Selected: Default //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonRack_20Rnd_Rocket_03_HE_F/mfdElements/Plane_CAS_02/Draw/Default, sources - ["A3_Weapons_F"]
						{
							color[] = {0, 0.12, 0};
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_20Rnd_Rocket_03_HE_F/mfdElements/Plane_CAS_02/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 8 parameters from bin\config.bin/CfgMagazines/PylonRack_20Rnd_Rocket_03_HE_F/mfdElements/Plane_CAS_02/Draw/Default/PylonText1, sources - []
							{
							};
						};
						class Empty: Selected //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonRack_20Rnd_Rocket_03_HE_F/mfdElements/Plane_CAS_02/Draw/Selected, sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_20Rnd_Rocket_03_HE_F/mfdElements/Plane_CAS_02/Draw/Selected/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_20Rnd_Rocket_03_HE_F/mfdElements/Plane_CAS_02/Draw/Selected/PylonText1, sources - []
							{
							};
						};
					};
				};
				class VTOL_02 //sources - ["A3_Weapons_F"]
				{
					class Bones //sources - ["A3_Weapons_F"]
					{
						class Center //sources - ["A3_Weapons_F"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
						class R1: Center //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_20Rnd_Rocket_03_HE_F/mfdElements/VTOL_02/Bones/Center, sources - ["A3_Weapons_F"]
						{
							pos[] = {0, 0.0125};
						};
					};
					class Draw //sources - ["A3_Weapons_F"]
					{
						class Default //sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0.15, 1, 0.15, 1};
							alpha = 0.22;
							class Shape //sources - ["A3_Weapons_F"]
							{
								type = "line";
								width = 2;
								points[] = {{"R1", {0, -0.03}, 1}, {"R1", {0.012, -0.02598}, 1}, {"R1", {0.020784, -0.015}, 1}, {"R1", {0.024, 0}, 1}, {"R1", {0.020784, 0.015}, 1}, {"R1", {0.012, 0.02598}, 1}, {"R1", {0, 0.03}, 1}, {"R1", {-0.012, 0.02598}, 1}, {"R1", {-0.020784, 0.015}, 1}, {"R1", {-0.024, 0}, 1}, {"R1", {-0.020784, -0.015}, 1}, {"R1", {-0.012, -0.02598}, 1}, {"R1", {0, -0.03}, 1}, {}};
							};
							class PylonText1 //sources - ["A3_Weapons_F"]
							{
								type = "text";
								source = "static";
								text = "RKT";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {"Center", 1, {0, -0.051}, 1};
								right[] = {"Center", 1, {0.018, -0.051}, 1};
								down[] = {"Center", 1, {0, -0.03}, 1};
							};
							class PylonAmmo1 //sources - ["A3_Weapons_F"]
							{
								type = "text";
								source = "pylonammo";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0, 0}, 1};
								right[] = {{0.027, 0}, 1};
								down[] = {{0, 0.028}, 1};
							};
						};
						class Selected: Default //inherits 6 parameters from bin\config.bin/CfgMagazines/PylonRack_20Rnd_Rocket_03_HE_F/mfdElements/VTOL_02/Draw/Default, sources - ["A3_Weapons_F"]
						{
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_20Rnd_Rocket_03_HE_F/mfdElements/VTOL_02/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonRack_20Rnd_Rocket_03_HE_F/mfdElements/VTOL_02/Draw/Default/PylonText1, sources - []
							{
							};
						};
						class Empty: Selected //inherits 4 parameters from bin\config.bin/CfgMagazines/PylonRack_20Rnd_Rocket_03_HE_F/mfdElements/VTOL_02/Draw/Selected, sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_20Rnd_Rocket_03_HE_F/mfdElements/VTOL_02/Draw/Selected/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_20Rnd_Rocket_03_HE_F/mfdElements/VTOL_02/Draw/Selected/PylonText1, sources - []
							{
							};
							class PylonAmmo1: PylonAmmo1 //inherits 8 parameters from bin\config.bin/CfgMagazines/PylonRack_20Rnd_Rocket_03_HE_F/mfdElements/VTOL_02/Draw/Default/PylonAmmo1, sources - []
							{
							};
							class Background //sources - ["A3_Weapons_F"]
							{
								type = "polygon";
								points[] = {{{"R1", 1, {0, 0}, 1}, {"R1", {0.0169706, -0.0212132}, 1}, {"R1", {0.024, 1.31134e-009}, 1}, {"R1", {0.0169706, 0.0212132}, 1}}, {{"R1", 1, {0, 0}, 1}, {"R1", {0.0169706, 0.0212132}, 1}, {"R1", {-2.09815e-009, 0.03}, 1}, {"R1", {-0.0169706, 0.0212132}, 1}}, {{"R1", 1, {0, 0}, 1}, {"R1", {-0.0169706, 0.0212132}, 1}, {"R1", {-0.024, -3.57746e-010}, 1}, {"R1", {-0.0169706, -0.0212132}, 1}}, {{"R1", 1, {0, 0}, 1}, {"R1", {-0.0169706, -0.0212132}, 1}, {"R1", {4.19629e-009, -0.03}, 1}, {"R1", {0.0169706, -0.0212132}, 1}}};
							};
						};
					};
				};
			};
		};
		class PylonRack_20Rnd_Rocket_03_AP_F: 20Rnd_Rocket_03_AP_F //inherits 4 parameters from bin\config.bin/CfgMagazines/20Rnd_Rocket_03_AP_F, sources - ["A3_Weapons_F"]
		{
			displayName = "Tratnyr 20x AP";
			count = 20;
			model = "\A3\Weapons_F\DynamicLoadout\PylonPod_Rocket_01_F.p3d";
			muzzlePos = "muzzlePos";
			muzzleEnd = "muzzleEnd";
			hardpoints[] = {"O_MISSILE_PYLON"};
			pylonWeapon = "Rocket_03_AP_Plane_CAS_02_F";
			mass = 208;
			class mfdElements //sources - ["A3_Weapons_F"]
			{
				class Plane_CAS_02 //sources - ["A3_Weapons_F"]
				{
					class Bones //sources - ["A3_Weapons_F"]
					{
						class Center //sources - ["A3_Weapons_F"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
					};
					class Draw //sources - ["A3_Weapons_F"]
					{
						class BlackBackgroundGroup //sources - ["A3_Weapons_F"]
						{
							color[] = {0, 0, 0};
							alpha = 1;
							class BlackBackground //sources - ["A3_Weapons_F"]
							{
								type = "polygon";
								points[] = {{{{0.1, 0.11}, 1}, {{0.17, 0.11}, 1}, {{0.17, 0.33}, 1}, {{0.1, 0.33}, 1}}};
							};
						};
						class Default //sources - ["A3_Weapons_F"]
						{
							condition = "(PylonAmmoRelative>0.01) - PylonSelected";
							color[] = {1, 1, 1};
							alpha = 0.2;
							class Shape //sources - ["A3_Weapons_F"]
							{
								type = "polygon";
								texture = "a3\Weapons_F\MFD\UI\icon_place_cas_02_rocket_02_ca.paa";
								points[] = {{{{0.1, 0.1}, 1}, {{0.18, 0.1}, 1}, {{0.18, 0.34}, 1}, {{0.1, 0.34}, 1}}};
							};
							class PylonText1 //sources - ["A3_Weapons_F"]
							{
								type = "text";
								source = "pylonammo";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.14, 0.27}, 1};
								right[] = {{0.18, 0.27}, 1};
								down[] = {{0.14, 0.301}, 1};
							};
						};
						class Selected: Default //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonRack_20Rnd_Rocket_03_AP_F/mfdElements/Plane_CAS_02/Draw/Default, sources - ["A3_Weapons_F"]
						{
							color[] = {0, 0.12, 0};
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_20Rnd_Rocket_03_AP_F/mfdElements/Plane_CAS_02/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 8 parameters from bin\config.bin/CfgMagazines/PylonRack_20Rnd_Rocket_03_AP_F/mfdElements/Plane_CAS_02/Draw/Default/PylonText1, sources - []
							{
							};
						};
						class Empty: Selected //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonRack_20Rnd_Rocket_03_AP_F/mfdElements/Plane_CAS_02/Draw/Selected, sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_20Rnd_Rocket_03_AP_F/mfdElements/Plane_CAS_02/Draw/Selected/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_20Rnd_Rocket_03_AP_F/mfdElements/Plane_CAS_02/Draw/Selected/PylonText1, sources - []
							{
							};
						};
					};
				};
				class VTOL_02 //sources - ["A3_Weapons_F"]
				{
					class Bones //sources - ["A3_Weapons_F"]
					{
						class Center //sources - ["A3_Weapons_F"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
						class R1: Center //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_20Rnd_Rocket_03_AP_F/mfdElements/VTOL_02/Bones/Center, sources - ["A3_Weapons_F"]
						{
							pos[] = {0, 0.0125};
						};
					};
					class Draw //sources - ["A3_Weapons_F"]
					{
						class Default //sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0.15, 1, 0.15, 1};
							alpha = 0.22;
							class Shape //sources - ["A3_Weapons_F"]
							{
								type = "line";
								width = 2;
								points[] = {{"R1", {0, -0.03}, 1}, {"R1", {0.012, -0.02598}, 1}, {"R1", {0.020784, -0.015}, 1}, {"R1", {0.024, 0}, 1}, {"R1", {0.020784, 0.015}, 1}, {"R1", {0.012, 0.02598}, 1}, {"R1", {0, 0.03}, 1}, {"R1", {-0.012, 0.02598}, 1}, {"R1", {-0.020784, 0.015}, 1}, {"R1", {-0.024, 0}, 1}, {"R1", {-0.020784, -0.015}, 1}, {"R1", {-0.012, -0.02598}, 1}, {"R1", {0, -0.03}, 1}, {}};
							};
							class PylonText1 //sources - ["A3_Weapons_F"]
							{
								type = "text";
								source = "static";
								text = "RKT";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {"Center", 1, {0, -0.051}, 1};
								right[] = {"Center", 1, {0.018, -0.051}, 1};
								down[] = {"Center", 1, {0, -0.03}, 1};
							};
							class PylonAmmo1 //sources - ["A3_Weapons_F"]
							{
								type = "text";
								source = "pylonammo";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0, 0}, 1};
								right[] = {{0.027, 0}, 1};
								down[] = {{0, 0.028}, 1};
							};
						};
						class Selected: Default //inherits 6 parameters from bin\config.bin/CfgMagazines/PylonRack_20Rnd_Rocket_03_AP_F/mfdElements/VTOL_02/Draw/Default, sources - ["A3_Weapons_F"]
						{
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_20Rnd_Rocket_03_AP_F/mfdElements/VTOL_02/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonRack_20Rnd_Rocket_03_AP_F/mfdElements/VTOL_02/Draw/Default/PylonText1, sources - []
							{
							};
						};
						class Empty: Selected //inherits 4 parameters from bin\config.bin/CfgMagazines/PylonRack_20Rnd_Rocket_03_AP_F/mfdElements/VTOL_02/Draw/Selected, sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_20Rnd_Rocket_03_AP_F/mfdElements/VTOL_02/Draw/Selected/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_20Rnd_Rocket_03_AP_F/mfdElements/VTOL_02/Draw/Selected/PylonText1, sources - []
							{
							};
							class PylonAmmo1: PylonAmmo1 //inherits 8 parameters from bin\config.bin/CfgMagazines/PylonRack_20Rnd_Rocket_03_AP_F/mfdElements/VTOL_02/Draw/Default/PylonAmmo1, sources - []
							{
							};
							class Background //sources - ["A3_Weapons_F"]
							{
								type = "polygon";
								points[] = {{{"R1", 1, {0, 0}, 1}, {"R1", {0.0169706, -0.0212132}, 1}, {"R1", {0.024, 1.31134e-009}, 1}, {"R1", {0.0169706, 0.0212132}, 1}}, {{"R1", 1, {0, 0}, 1}, {"R1", {0.0169706, 0.0212132}, 1}, {"R1", {-2.09815e-009, 0.03}, 1}, {"R1", {-0.0169706, 0.0212132}, 1}}, {{"R1", 1, {0, 0}, 1}, {"R1", {-0.0169706, 0.0212132}, 1}, {"R1", {-0.024, -3.57746e-010}, 1}, {"R1", {-0.0169706, -0.0212132}, 1}}, {{"R1", 1, {0, 0}, 1}, {"R1", {-0.0169706, -0.0212132}, 1}, {"R1", {4.19629e-009, -0.03}, 1}, {"R1", {0.0169706, -0.0212132}, 1}}};
							};
						};
					};
				};
			};
		};
		class PylonRack_19Rnd_Rocket_Skyfire: 38Rnd_80mm_rockets //inherits 3 parameters from bin\config.bin/CfgMagazines/38Rnd_80mm_rockets, sources - ["A3_Weapons_F"]
		{
			displayName = "Skyfire 19x";
			count = 19;
			model = "\A3\Weapons_F\DynamicLoadout\PylonPod_Rocket_Skyfire_F.p3d";
			muzzlePos = "muzzlePos";
			muzzleEnd = "muzzleEnd";
			hardpoints[] = {"O_MISSILE_PYLON", "O_SKYFIRE"};
			pylonWeapon = "rockets_Skyfire";
			mass = 208;
			class mfdElements //sources - ["A3_Weapons_F"]
			{
				class Plane_CAS_02 //sources - ["A3_Weapons_F"]
				{
					class Bones //sources - ["A3_Weapons_F"]
					{
						class Center //sources - ["A3_Weapons_F"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
					};
					class Draw //sources - ["A3_Weapons_F"]
					{
						class BlackBackgroundGroup //sources - ["A3_Weapons_F"]
						{
							color[] = {0, 0, 0};
							alpha = 1;
							class BlackBackground //sources - ["A3_Weapons_F"]
							{
								type = "polygon";
								points[] = {{{{0.1, 0.11}, 1}, {{0.17, 0.11}, 1}, {{0.17, 0.33}, 1}, {{0.1, 0.33}, 1}}};
							};
						};
						class Default //sources - ["A3_Weapons_F"]
						{
							condition = "(PylonAmmoRelative>0.01) - PylonSelected";
							color[] = {1, 1, 1};
							alpha = 0.2;
							class Shape //sources - ["A3_Weapons_F"]
							{
								type = "polygon";
								texture = "a3\Weapons_F\MFD\UI\icon_place_cas_02_rocket_01_ca.paa";
								points[] = {{{{0.1, 0.1}, 1}, {{0.18, 0.1}, 1}, {{0.18, 0.34}, 1}, {{0.1, 0.34}, 1}}};
							};
							class PylonText1 //sources - ["A3_Weapons_F"]
							{
								type = "text";
								source = "pylonammo";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.14, 0.27}, 1};
								right[] = {{0.18, 0.27}, 1};
								down[] = {{0.14, 0.301}, 1};
							};
						};
						class Selected: Default //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonRack_19Rnd_Rocket_Skyfire/mfdElements/Plane_CAS_02/Draw/Default, sources - ["A3_Weapons_F"]
						{
							color[] = {0, 0.12, 0};
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_19Rnd_Rocket_Skyfire/mfdElements/Plane_CAS_02/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 8 parameters from bin\config.bin/CfgMagazines/PylonRack_19Rnd_Rocket_Skyfire/mfdElements/Plane_CAS_02/Draw/Default/PylonText1, sources - []
							{
							};
						};
						class Empty: Selected //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonRack_19Rnd_Rocket_Skyfire/mfdElements/Plane_CAS_02/Draw/Selected, sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_19Rnd_Rocket_Skyfire/mfdElements/Plane_CAS_02/Draw/Selected/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_19Rnd_Rocket_Skyfire/mfdElements/Plane_CAS_02/Draw/Selected/PylonText1, sources - []
							{
							};
						};
					};
				};
				class VTOL_02 //sources - ["A3_Weapons_F"]
				{
					class Bones //sources - ["A3_Weapons_F"]
					{
						class Center //sources - ["A3_Weapons_F"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
						class R1: Center //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_19Rnd_Rocket_Skyfire/mfdElements/VTOL_02/Bones/Center, sources - ["A3_Weapons_F"]
						{
							pos[] = {0, 0.0125};
						};
					};
					class Draw //sources - ["A3_Weapons_F"]
					{
						class Default //sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0.15, 1, 0.15, 1};
							alpha = 0.22;
							class Shape //sources - ["A3_Weapons_F"]
							{
								type = "line";
								width = 2;
								points[] = {{"R1", {-0.013, -0.025}, 1}, {"R1", {0.013, -0.025}, 1}, {"R1", {0.024, -0}, 1}, {"R1", {0.013, 0.025}, 1}, {"R1", {-0.013, 0.025}, 1}, {"R1", {-0.024, -0}, 1}, {"R1", {-0.013, -0.025}, 1}};
							};
							class PylonText1 //sources - ["A3_Weapons_F"]
							{
								type = "text";
								source = "static";
								text = "RKT";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {"Center", 1, {0, -0.051}, 1};
								right[] = {"Center", 1, {0.018, -0.051}, 1};
								down[] = {"Center", 1, {0, -0.03}, 1};
							};
							class PylonAmmo1 //sources - ["A3_Weapons_F"]
							{
								type = "text";
								source = "pylonammo";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0, 0}, 1};
								right[] = {{0.027, 0}, 1};
								down[] = {{0, 0.028}, 1};
							};
						};
						class Selected: Default //inherits 6 parameters from bin\config.bin/CfgMagazines/PylonRack_19Rnd_Rocket_Skyfire/mfdElements/VTOL_02/Draw/Default, sources - ["A3_Weapons_F"]
						{
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_19Rnd_Rocket_Skyfire/mfdElements/VTOL_02/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonRack_19Rnd_Rocket_Skyfire/mfdElements/VTOL_02/Draw/Default/PylonText1, sources - []
							{
							};
						};
						class Empty: Selected //inherits 4 parameters from bin\config.bin/CfgMagazines/PylonRack_19Rnd_Rocket_Skyfire/mfdElements/VTOL_02/Draw/Selected, sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_19Rnd_Rocket_Skyfire/mfdElements/VTOL_02/Draw/Selected/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_19Rnd_Rocket_Skyfire/mfdElements/VTOL_02/Draw/Selected/PylonText1, sources - []
							{
							};
							class PylonAmmo1: PylonAmmo1 //inherits 8 parameters from bin\config.bin/CfgMagazines/PylonRack_19Rnd_Rocket_Skyfire/mfdElements/VTOL_02/Draw/Default/PylonAmmo1, sources - []
							{
							};
							class Background //sources - ["A3_Weapons_F"]
							{
								type = "polygon";
								points[] = {{{"R1", 1, {0, 0}, 1}, {"R1", {0.0169706, -0.0212132}, 1}, {"R1", {0.024, 1.31134e-009}, 1}, {"R1", {0.0169706, 0.0212132}, 1}}, {{"R1", 1, {0, 0}, 1}, {"R1", {0.0169706, 0.0212132}, 1}, {"R1", {-2.09815e-009, 0.03}, 1}, {"R1", {-0.0169706, 0.0212132}, 1}}, {{"R1", 1, {0, 0}, 1}, {"R1", {-0.0169706, 0.0212132}, 1}, {"R1", {-0.024, -3.57746e-010}, 1}, {"R1", {-0.0169706, -0.0212132}, 1}}, {{"R1", 1, {0, 0}, 1}, {"R1", {-0.0169706, -0.0212132}, 1}, {"R1", {4.19629e-009, -0.03}, 1}, {"R1", {0.0169706, -0.0212132}, 1}}};
							};
						};
					};
				};
			};
		};
		class PylonRack_1Rnd_Missile_AA_03_F: 2Rnd_Missile_AA_03_F //inherits 4 parameters from bin\config.bin/CfgMagazines/2Rnd_Missile_AA_03_F, sources - ["A3_Weapons_F"]
		{
			displayName = "Sahr-3";
			count = 1;
			model = "\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_03_F.p3d";
			hardpoints[] = {"O_MISSILE_PYLON"};
			pylonWeapon = "Missile_AA_03_Plane_CAS_02_F";
			mass = 125;
			class mfdElements //sources - ["A3_Weapons_F"]
			{
				class Plane_CAS_02 //sources - ["A3_Weapons_F"]
				{
					class Bones //sources - ["A3_Weapons_F"]
					{
						class Center //sources - ["A3_Weapons_F"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
					};
					class Draw //sources - ["A3_Weapons_F"]
					{
						class BlackBackgroundGroup //sources - ["A3_Weapons_F"]
						{
							color[] = {0, 0, 0};
							alpha = 1;
							class BlackBackground //sources - ["A3_Weapons_F"]
							{
								type = "polygon";
								points[] = {{{{0.1, 0.13}, 1}, {{0.17, 0.13}, 1}, {{0.17, 0.31}, 1}, {{0.1, 0.31}, 1}}};
							};
						};
						class Default //sources - ["A3_Weapons_F"]
						{
							condition = "(PylonAmmoRelative>0.01) - PylonSelected";
							color[] = {1, 1, 1};
							alpha = 0.2;
							class Shape //sources - ["A3_Weapons_F"]
							{
								type = "polygon";
								texture = "a3\Weapons_F\MFD\UI\icon_place_cas_02_aa_03_ca.paa";
								points[] = {{{{0.1, 0.1}, 1}, {{0.18, 0.1}, 1}, {{0.18, 0.34}, 1}, {{0.1, 0.34}, 1}}};
							};
						};
						class Selected: Default //inherits 4 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_Missile_AA_03_F/mfdElements/Plane_CAS_02/Draw/Default, sources - ["A3_Weapons_F"]
						{
							color[] = {0, 0.12, 0};
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_Missile_AA_03_F/mfdElements/Plane_CAS_02/Draw/Default/Shape, sources - []
							{
							};
						};
						class Empty: Selected //inherits 4 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_Missile_AA_03_F/mfdElements/Plane_CAS_02/Draw/Selected, sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_Missile_AA_03_F/mfdElements/Plane_CAS_02/Draw/Selected/Shape, sources - []
							{
							};
						};
					};
				};
				class VTOL_02 //sources - ["A3_Weapons_F"]
				{
					class Bones //sources - ["A3_Weapons_F"]
					{
						class Center //sources - ["A3_Weapons_F"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
						class R1: Center //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_Missile_AA_03_F/mfdElements/VTOL_02/Bones/Center, sources - ["A3_Weapons_F"]
						{
							pos[] = {0, 0.0125};
						};
					};
					class Draw //sources - ["A3_Weapons_F"]
					{
						class Default //sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0.15, 1, 0.15, 1};
							alpha = 0.22;
							class Shape //sources - ["A3_Weapons_F"]
							{
								type = "line";
								width = 4;
								points[] = {{"R1", {0, -0.01375}, 1}, {"R1", {0.0055, -0.0119075}, 1}, {"R1", {0.009526, -0.006875}, 1}, {"R1", {0.011, 0}, 1}, {"R1", {0.009526, 0.006875}, 1}, {"R1", {0.0055, 0.0119075}, 1}, {"R1", {0, 0.01375}, 1}, {"R1", {-0.0055, 0.0119075}, 1}, {"R1", {-0.009526, 0.006875}, 1}, {"R1", {-0.011, 0}, 1}, {"R1", {-0.009526, -0.006875}, 1}, {"R1", {-0.0055, -0.0119075}, 1}, {"R1", {0, -0.01375}, 1}, {}, {"R1", {0.00777817, -0.00972272}, 1}, {"R1", {0.0162635, -0.0203293}, 1}, {}, {"R1", {0.00777817, 0.00972272}, 1}, {"R1", {0.0162635, 0.0203293}, 1}, {}, {"R1", {-0.00777817, 0.00972272}, 1}, {"R1", {-0.0162635, 0.0203293}, 1}, {}, {"R1", {-0.00777818, -0.00972272}, 1}, {"R1", {-0.0162635, -0.0203293}, 1}, {}};
							};
							class PylonText1 //sources - ["A3_Weapons_F"]
							{
								type = "text";
								source = "static";
								text = "AA";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {"Center", 1, {0, -0.051}, 1};
								right[] = {"Center", 1, {0.018, -0.051}, 1};
								down[] = {"Center", 1, {0, -0.03}, 1};
							};
						};
						class Selected: Default //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_Missile_AA_03_F/mfdElements/VTOL_02/Draw/Default, sources - ["A3_Weapons_F"]
						{
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_Missile_AA_03_F/mfdElements/VTOL_02/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_Missile_AA_03_F/mfdElements/VTOL_02/Draw/Default/PylonText1, sources - []
							{
							};
							class Background //sources - ["A3_Weapons_F"]
							{
								type = "polygon";
								points[] = {{{"R1", 1, {0, 0}, 1}, {"R1", {0.00777817, -0.00972272}, 1}, {"R1", {0.011, 6.01032e-010}, 1}, {"R1", {0.00777817, 0.00972272}, 1}}, {{"R1", 1, {0, 0}, 1}, {"R1", {0.00777817, 0.00972272}, 1}, {"R1", {-9.61651e-010, 0.01375}, 1}, {"R1", {-0.00777817, 0.00972272}, 1}}, {{"R1", 1, {0, 0}, 1}, {"R1", {-0.00777817, 0.00972272}, 1}, {"R1", {-0.011, -1.63967e-010}, 1}, {"R1", {-0.00777818, -0.00972272}, 1}}, {{"R1", 1, {0, 0}, 1}, {"R1", {-0.00777818, -0.00972272}, 1}, {"R1", {1.9233e-009, -0.01375}, 1}, {"R1", {0.00777818, -0.00972271}, 1}}};
							};
						};
						class Empty: Selected //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_Missile_AA_03_F/mfdElements/VTOL_02/Draw/Selected, sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_Missile_AA_03_F/mfdElements/VTOL_02/Draw/Selected/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_Missile_AA_03_F/mfdElements/VTOL_02/Draw/Selected/PylonText1, sources - []
							{
							};
							class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_Missile_AA_03_F/mfdElements/VTOL_02/Draw/Selected/Background, sources - []
							{
							};
						};
					};
				};
			};
		};
		class PylonMissile_1Rnd_Missile_AA_03_F: PylonRack_1Rnd_Missile_AA_03_F //inherits 7 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_Missile_AA_03_F, sources - ["A3_Weapons_F"]
		{
			hardpoints[] = {"O_SAHR3"};
			model = "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
			mass = 85;
			class mfdElements //sources - ["A3_Weapons_F"]
			{
				class Plane_CAS_02 //sources - ["A3_Weapons_F"]
				{
					class Bones //sources - ["A3_Weapons_F"]
					{
						class Center //sources - ["A3_Weapons_F"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
					};
					class Draw //sources - ["A3_Weapons_F"]
					{
						class BlackBackgroundGroup //sources - ["A3_Weapons_F"]
						{
							color[] = {0, 0, 0};
							alpha = 1;
							class BlackBackground //sources - ["A3_Weapons_F"]
							{
								type = "polygon";
								points[] = {{{{0.1, 0.13}, 1}, {{0.17, 0.13}, 1}, {{0.17, 0.31}, 1}, {{0.1, 0.31}, 1}}};
							};
						};
						class Default //sources - ["A3_Weapons_F"]
						{
							condition = "(PylonAmmoRelative>0.01) - PylonSelected";
							color[] = {1, 1, 1};
							alpha = 0.2;
							class Shape //sources - ["A3_Weapons_F"]
							{
								type = "polygon";
								texture = "a3\Weapons_F\MFD\UI\icon_place_cas_02_aa_03_ca.paa";
								points[] = {{{{0.1, 0.1}, 1}, {{0.18, 0.1}, 1}, {{0.18, 0.34}, 1}, {{0.1, 0.34}, 1}}};
							};
						};
						class Selected: Default //inherits 4 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_Missile_AA_03_F/mfdElements/Plane_CAS_02/Draw/Default, sources - ["A3_Weapons_F"]
						{
							color[] = {0, 0.12, 0};
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_Missile_AA_03_F/mfdElements/Plane_CAS_02/Draw/Default/Shape, sources - []
							{
							};
						};
						class Empty: Selected //inherits 4 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_Missile_AA_03_F/mfdElements/Plane_CAS_02/Draw/Selected, sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_Missile_AA_03_F/mfdElements/Plane_CAS_02/Draw/Selected/Shape, sources - []
							{
							};
						};
					};
				};
				class VTOL_02 //sources - ["A3_Weapons_F"]
				{
					class Bones //sources - ["A3_Weapons_F"]
					{
						class Center //sources - ["A3_Weapons_F"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
						class R1: Center //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_Missile_AA_03_F/mfdElements/VTOL_02/Bones/Center, sources - ["A3_Weapons_F"]
						{
							pos[] = {0, 0.0125};
						};
					};
					class Draw //sources - ["A3_Weapons_F"]
					{
						class Default //sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0.15, 1, 0.15, 1};
							alpha = 0.22;
							class Shape //sources - ["A3_Weapons_F"]
							{
								type = "line";
								width = 4;
								points[] = {{"R1", {0, -0.01375}, 1}, {"R1", {0.0055, -0.0119075}, 1}, {"R1", {0.009526, -0.006875}, 1}, {"R1", {0.011, 0}, 1}, {"R1", {0.009526, 0.006875}, 1}, {"R1", {0.0055, 0.0119075}, 1}, {"R1", {0, 0.01375}, 1}, {"R1", {-0.0055, 0.0119075}, 1}, {"R1", {-0.009526, 0.006875}, 1}, {"R1", {-0.011, 0}, 1}, {"R1", {-0.009526, -0.006875}, 1}, {"R1", {-0.0055, -0.0119075}, 1}, {"R1", {0, -0.01375}, 1}, {}, {"R1", {0.00777817, -0.00972272}, 1}, {"R1", {0.0162635, -0.0203293}, 1}, {}, {"R1", {0.00777817, 0.00972272}, 1}, {"R1", {0.0162635, 0.0203293}, 1}, {}, {"R1", {-0.00777817, 0.00972272}, 1}, {"R1", {-0.0162635, 0.0203293}, 1}, {}, {"R1", {-0.00777818, -0.00972272}, 1}, {"R1", {-0.0162635, -0.0203293}, 1}, {}};
							};
							class PylonText1 //sources - ["A3_Weapons_F"]
							{
								type = "text";
								source = "static";
								text = "AA";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {"Center", 1, {0, -0.051}, 1};
								right[] = {"Center", 1, {0.018, -0.051}, 1};
								down[] = {"Center", 1, {0, -0.03}, 1};
							};
						};
						class Selected: Default //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_Missile_AA_03_F/mfdElements/VTOL_02/Draw/Default, sources - ["A3_Weapons_F"]
						{
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_Missile_AA_03_F/mfdElements/VTOL_02/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_Missile_AA_03_F/mfdElements/VTOL_02/Draw/Default/PylonText1, sources - []
							{
							};
							class Background //sources - ["A3_Weapons_F"]
							{
								type = "polygon";
								points[] = {{{"R1", 1, {0, 0}, 1}, {"R1", {0.00777817, -0.00972272}, 1}, {"R1", {0.011, 6.01032e-010}, 1}, {"R1", {0.00777817, 0.00972272}, 1}}, {{"R1", 1, {0, 0}, 1}, {"R1", {0.00777817, 0.00972272}, 1}, {"R1", {-9.61651e-010, 0.01375}, 1}, {"R1", {-0.00777817, 0.00972272}, 1}}, {{"R1", 1, {0, 0}, 1}, {"R1", {-0.00777817, 0.00972272}, 1}, {"R1", {-0.011, -1.63967e-010}, 1}, {"R1", {-0.00777818, -0.00972272}, 1}}, {{"R1", 1, {0, 0}, 1}, {"R1", {-0.00777818, -0.00972272}, 1}, {"R1", {1.9233e-009, -0.01375}, 1}, {"R1", {0.00777818, -0.00972271}, 1}}};
							};
						};
						class Empty: Selected //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_Missile_AA_03_F/mfdElements/VTOL_02/Draw/Selected, sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_Missile_AA_03_F/mfdElements/VTOL_02/Draw/Selected/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_Missile_AA_03_F/mfdElements/VTOL_02/Draw/Selected/PylonText1, sources - []
							{
							};
							class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_Missile_AA_03_F/mfdElements/VTOL_02/Draw/Selected/Background, sources - []
							{
							};
						};
					};
				};
			};
		};
		class PylonRack_1Rnd_Missile_AGM_01_F: 4Rnd_Missile_AGM_01_F //inherits 4 parameters from bin\config.bin/CfgMagazines/4Rnd_Missile_AGM_01_F, sources - ["A3_Weapons_F"]
		{
			displayName = "Sharur";
			model = "\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AGM_01_F.p3d";
			count = 1;
			hardpoints[] = {"O_MISSILE_PYLON"};
			pylonWeapon = "Missile_AGM_01_Plane_CAS_02_F";
			mass = 361;
			class mfdElements //sources - ["A3_Weapons_F"]
			{
				class Plane_CAS_02 //sources - ["A3_Weapons_F"]
				{
					class Bones //sources - ["A3_Weapons_F"]
					{
						class Center //sources - ["A3_Weapons_F"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
					};
					class Draw //sources - ["A3_Weapons_F"]
					{
						class BlackBackgroundGroup //sources - ["A3_Weapons_F"]
						{
							color[] = {0, 0, 0};
							alpha = 1;
							class BlackBackground //sources - ["A3_Weapons_F"]
							{
								type = "polygon";
								points[] = {{{{0.1, 0.11}, 1}, {{0.17, 0.11}, 1}, {{0.17, 0.31}, 1}, {{0.1, 0.31}, 1}}};
							};
						};
						class Default //sources - ["A3_Weapons_F"]
						{
							condition = "(PylonAmmoRelative>0.01) - PylonSelected";
							color[] = {1, 1, 1};
							alpha = 0.2;
							class Shape //sources - ["A3_Weapons_F"]
							{
								type = "polygon";
								texture = "a3\Weapons_F\MFD\UI\icon_place_cas_02_agm_01_ca.paa";
								points[] = {{{{0.1, 0.1}, 1}, {{0.18, 0.1}, 1}, {{0.18, 0.34}, 1}, {{0.1, 0.34}, 1}}};
							};
						};
						class Selected: Default //inherits 4 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_Missile_AGM_01_F/mfdElements/Plane_CAS_02/Draw/Default, sources - ["A3_Weapons_F"]
						{
							color[] = {0, 0.12, 0};
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_Missile_AGM_01_F/mfdElements/Plane_CAS_02/Draw/Default/Shape, sources - []
							{
							};
						};
						class Empty: Selected //inherits 4 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_Missile_AGM_01_F/mfdElements/Plane_CAS_02/Draw/Selected, sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_Missile_AGM_01_F/mfdElements/Plane_CAS_02/Draw/Selected/Shape, sources - []
							{
							};
						};
					};
				};
				class VTOL_02 //sources - ["A3_Weapons_F"]
				{
					class Bones //sources - ["A3_Weapons_F"]
					{
						class Center //sources - ["A3_Weapons_F"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
						class R1: Center //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_Missile_AGM_01_F/mfdElements/VTOL_02/Bones/Center, sources - ["A3_Weapons_F"]
						{
							pos[] = {0, 0.0125};
						};
					};
					class Draw //sources - ["A3_Weapons_F"]
					{
						class Default //sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0.15, 1, 0.15, 1};
							alpha = 0.22;
							class Shape //sources - ["A3_Weapons_F"]
							{
								type = "line";
								width = 4;
								points[] = {{"R1", {0, -0.01875}, 1}, {"R1", {0.0075, -0.0162375}, 1}, {"R1", {0.01299, -0.009375}, 1}, {"R1", {0.015, 0}, 1}, {"R1", {0.01299, 0.009375}, 1}, {"R1", {0.0075, 0.0162375}, 1}, {"R1", {0, 0.01875}, 1}, {"R1", {-0.0075, 0.0162375}, 1}, {"R1", {-0.01299, 0.009375}, 1}, {"R1", {-0.015, 0}, 1}, {"R1", {-0.01299, -0.009375}, 1}, {"R1", {-0.0075, -0.0162375}, 1}, {"R1", {0, -0.01875}, 1}, {}, {"R1", {0.0106066, -0.0132583}, 1}, {"R1", {0.0176777, -0.0220971}, 1}, {}, {"R1", {0.0106066, 0.0132583}, 1}, {"R1", {0.0176777, 0.0220971}, 1}, {}, {"R1", {-0.0106066, 0.0132583}, 1}, {"R1", {-0.0176777, 0.0220971}, 1}, {}, {"R1", {-0.0106066, -0.0132582}, 1}, {"R1", {-0.0176777, -0.0220971}, 1}, {}};
							};
							class PylonText1 //sources - ["A3_Weapons_F"]
							{
								type = "text";
								source = "static";
								text = "AGM";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {"Center", 1, {0, -0.051}, 1};
								right[] = {"Center", 1, {0.018, -0.051}, 1};
								down[] = {"Center", 1, {0, -0.03}, 1};
							};
						};
						class Selected: Default //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_Missile_AGM_01_F/mfdElements/VTOL_02/Draw/Default, sources - ["A3_Weapons_F"]
						{
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_Missile_AGM_01_F/mfdElements/VTOL_02/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_Missile_AGM_01_F/mfdElements/VTOL_02/Draw/Default/PylonText1, sources - []
							{
							};
							class Background //sources - ["A3_Weapons_F"]
							{
								type = "polygon";
								points[] = {{{"R1", 1, {0, 0}, 1}, {"R1", {0.0106066, -0.0132583}, 1}, {"R1", {0.015, 8.19589e-010}, 1}, {"R1", {0.0106066, 0.0132583}, 1}}, {{"R1", 1, {0, 0}, 1}, {"R1", {0.0106066, 0.0132583}, 1}, {"R1", {-1.31134e-009, 0.01875}, 1}, {"R1", {-0.0106066, 0.0132583}, 1}}, {{"R1", 1, {0, 0}, 1}, {"R1", {-0.0106066, 0.0132583}, 1}, {"R1", {-0.015, -2.23592e-010}, 1}, {"R1", {-0.0106066, -0.0132582}, 1}}, {{"R1", 1, {0, 0}, 1}, {"R1", {-0.0106066, -0.0132582}, 1}, {"R1", {2.62268e-009, -0.01875}, 1}, {"R1", {0.0106066, -0.0132582}, 1}}};
							};
						};
						class Empty: Selected //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_Missile_AGM_01_F/mfdElements/VTOL_02/Draw/Selected, sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_Missile_AGM_01_F/mfdElements/VTOL_02/Draw/Selected/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_Missile_AGM_01_F/mfdElements/VTOL_02/Draw/Selected/PylonText1, sources - []
							{
							};
							class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_1Rnd_Missile_AGM_01_F/mfdElements/VTOL_02/Draw/Selected/Background, sources - []
							{
							};
						};
					};
				};
			};
		};
		class PylonMissile_1Rnd_Bomb_03_F: 2Rnd_Bomb_03_F //inherits 4 parameters from bin\config.bin/CfgMagazines/2Rnd_Bomb_03_F, sources - ["A3_Weapons_F"]
		{
			displayName = "LOM-250G";
			count = 1;
			model = "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_03_F.p3d";
			hardpoints[] = {"O_BOMB_PYLON"};
			pylonWeapon = "Bomb_03_Plane_CAS_02_F";
			mass = 250;
			class mfdElements //sources - ["A3_Weapons_F"]
			{
				class Plane_CAS_02 //sources - ["A3_Weapons_F"]
				{
					class Bones //sources - ["A3_Weapons_F"]
					{
						class Center //sources - ["A3_Weapons_F"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
					};
					class Draw //sources - ["A3_Weapons_F"]
					{
						class BlackBackgroundGroup //sources - ["A3_Weapons_F"]
						{
							color[] = {0, 0, 0};
							alpha = 1;
							class BlackBackground //sources - ["A3_Weapons_F"]
							{
								type = "polygon";
								points[] = {{{{0.1, 0.1}, 1}, {{0.17, 0.1}, 1}, {{0.17, 0.34}, 1}, {{0.1, 0.34}, 1}}};
							};
						};
						class Default //sources - ["A3_Weapons_F"]
						{
							condition = "(PylonAmmoRelative>0.01) - PylonSelected";
							color[] = {1, 1, 1};
							alpha = 0.2;
							class Shape //sources - ["A3_Weapons_F"]
							{
								type = "polygon";
								texture = "a3\Weapons_F\MFD\UI\icon_place_cas_02_bomb_03_ca.paa";
								points[] = {{{{0.1, 0.1}, 1}, {{0.18, 0.1}, 1}, {{0.18, 0.34}, 1}, {{0.1, 0.34}, 1}}};
							};
						};
						class Selected: Default //inherits 4 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_Bomb_03_F/mfdElements/Plane_CAS_02/Draw/Default, sources - ["A3_Weapons_F"]
						{
							color[] = {0, 0.12, 0};
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_Bomb_03_F/mfdElements/Plane_CAS_02/Draw/Default/Shape, sources - []
							{
							};
						};
						class Empty: Selected //inherits 4 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_Bomb_03_F/mfdElements/Plane_CAS_02/Draw/Selected, sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_Bomb_03_F/mfdElements/Plane_CAS_02/Draw/Selected/Shape, sources - []
							{
							};
						};
					};
				};
				class VTOL_02 //sources - ["A3_Weapons_F"]
				{
					class Bones //sources - ["A3_Weapons_F"]
					{
						class Center //sources - ["A3_Weapons_F"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
						class R1: Center //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_Bomb_03_F/mfdElements/VTOL_02/Bones/Center, sources - ["A3_Weapons_F"]
						{
							pos[] = {0, 0.0125};
						};
					};
					class Draw //sources - ["A3_Weapons_F"]
					{
						class Default //sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0.15, 1, 0.15, 1};
							alpha = 0.22;
							class Shape //sources - ["A3_Weapons_F"]
							{
								type = "line";
								width = 4;
								points[] = {{"R1", {0, -0.01875}, 1}, {"R1", {0.0075, -0.0162375}, 1}, {"R1", {0.01299, -0.009375}, 1}, {"R1", {0.015, 0}, 1}, {"R1", {0.01299, 0.009375}, 1}, {"R1", {0.0075, 0.0162375}, 1}, {"R1", {0, 0.01875}, 1}, {"R1", {-0.0075, 0.0162375}, 1}, {"R1", {-0.01299, 0.009375}, 1}, {"R1", {-0.015, 0}, 1}, {"R1", {-0.01299, -0.009375}, 1}, {"R1", {-0.0075, -0.0162375}, 1}, {"R1", {0, -0.01875}, 1}, {}, {"R1", {0.0106066, -0.0132583}, 1}, {"R1", {0.0176777, -0.0220971}, 1}, {}, {"R1", {0.0106066, 0.0132583}, 1}, {"R1", {0.0176777, 0.0220971}, 1}, {}, {"R1", {-0.0106066, 0.0132583}, 1}, {"R1", {-0.0176777, 0.0220971}, 1}, {}, {"R1", {-0.0106066, -0.0132582}, 1}, {"R1", {-0.0176777, -0.0220971}, 1}, {}};
							};
							class PylonText1 //sources - ["A3_Weapons_F"]
							{
								type = "text";
								source = "static";
								text = "LGB";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {"Center", 1, {0, -0.051}, 1};
								right[] = {"Center", 1, {0.018, -0.051}, 1};
								down[] = {"Center", 1, {0, -0.03}, 1};
							};
						};
						class Selected: Default //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_Bomb_03_F/mfdElements/VTOL_02/Draw/Default, sources - ["A3_Weapons_F"]
						{
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_Bomb_03_F/mfdElements/VTOL_02/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_Bomb_03_F/mfdElements/VTOL_02/Draw/Default/PylonText1, sources - []
							{
							};
							class Background //sources - ["A3_Weapons_F"]
							{
								type = "polygon";
								points[] = {{{"R1", 1, {0, 0}, 1}, {"R1", {0.0106066, -0.0132583}, 1}, {"R1", {0.015, 8.19589e-010}, 1}, {"R1", {0.0106066, 0.0132583}, 1}}, {{"R1", 1, {0, 0}, 1}, {"R1", {0.0106066, 0.0132583}, 1}, {"R1", {-1.31134e-009, 0.01875}, 1}, {"R1", {-0.0106066, 0.0132583}, 1}}, {{"R1", 1, {0, 0}, 1}, {"R1", {-0.0106066, 0.0132583}, 1}, {"R1", {-0.015, -2.23592e-010}, 1}, {"R1", {-0.0106066, -0.0132582}, 1}}, {{"R1", 1, {0, 0}, 1}, {"R1", {-0.0106066, -0.0132582}, 1}, {"R1", {2.62268e-009, -0.01875}, 1}, {"R1", {0.0106066, -0.0132582}, 1}}};
							};
						};
						class Empty: Selected //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_Bomb_03_F/mfdElements/VTOL_02/Draw/Selected, sources - ["A3_Weapons_F"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_Bomb_03_F/mfdElements/VTOL_02/Draw/Selected/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_Bomb_03_F/mfdElements/VTOL_02/Draw/Selected/PylonText1, sources - []
							{
							};
							class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonMissile_1Rnd_Bomb_03_F/mfdElements/VTOL_02/Draw/Selected/Background, sources - []
							{
							};
						};
					};
				};
			};
		};
		class ATMine_Range_Mag: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F_Explosives"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			mass = 80;
			displayName = "AT Mine";
			descriptionUse = "Use mine";
			picture = "\A3\Weapons_F\Data\UI\gear_mine_AT_CA.paa";
			model = "\A3\Weapons_f\Explosives\mine_at_i";
			useAction = 1;
			useActionTitle = "Put %1 (%2 left)";
			type = "2*		256";
			allowedSlots[] = {901};
			value = 5;
			ammo = "ATMine_Range_Ammo";
			nameSoundWeapon = "mine";
			nameSound = "mine";
			count = 1;
			initSpeed = 0;
			maxLeadSpeed = 0;
			descriptionShort = "Type: Anti-tank mine <br />Rounds: 1<br />Used on: Ground";
			weaponPoolAvailable = 1;
			sound[] = {"A3\sounds_f\dummysound", 0.000316228, 1, 10};
		};
		class APERSMine_Range_Mag: ATMine_Range_Mag //inherits 21 parameters from bin\config.bin/CfgMagazines/ATMine_Range_Mag, sources - ["A3_Weapons_F_Explosives"]
		{
			author = "Bohemia Interactive";
			mass = 10;
			ammo = "APERSMine_Range_Ammo";
			picture = "\A3\Weapons_F\Data\UI\gear_mine_AP_CA.paa";
			displayName = "APERS Mine";
			model = "\A3\Weapons_F\explosives\mine_ap_i";
			descriptionShort = "Type: Anti-personnel  mine<br />Rounds: 1<br />Used on: Ground";
			class Library //sources - ["A3_Weapons_F_Explosives"]
			{
				libTextDesc = "A classic pressure-activated anti-personnel mine is still widely used despite being prohibited by international conventions. When dug-in, they are very hard to detect without the help of a mine detector.";
			};
			descriptionUse = "<t color='#9cf953'>Use: </t>Place Mine";
			allowedSlots[] = {901, 701};
		};
		class APERSBoundingMine_Range_Mag: ATMine_Range_Mag //inherits 21 parameters from bin\config.bin/CfgMagazines/ATMine_Range_Mag, sources - ["A3_Weapons_F_Explosives"]
		{
			author = "Bohemia Interactive";
			mass = 20;
			ammo = "APERSBoundingMine_Range_Ammo";
			displayName = "APERS Bounding Mine";
			picture = "\A3\Weapons_F\Data\UI\gear_mine_AP_bouncing_CA.paa";
			model = "\A3\Weapons_F\explosives\mine_AP_bouncing_i";
			descriptionShort = "Type: Anti-personnel bounding mine<br />Rounds: 1<br />Used on: Ground";
			class Library //sources - ["A3_Weapons_F_Explosives"]
			{
				libTextDesc = "The anti-personnel bounding mine is best suitable for open areas. It is usually burried just bellow the surface of the ground. When triggered, a charge launches the body of the mine one meter into the air. The explosion covers a close area with fragments, killing the whole group.";
			};
			descriptionUse = "<t color='#9cf953'>Use: </t>Place Mine";
			allowedSlots[] = {901, 701};
		};
		class SLAMDirectionalMine_Wire_Mag: ATMine_Range_Mag //inherits 21 parameters from bin\config.bin/CfgMagazines/ATMine_Range_Mag, sources - ["A3_Weapons_F_Explosives"]
		{
			author = "Bohemia Interactive";
			mass = 20;
			ammo = "SLAMDirectionalMine_Wire_Ammo";
			displayName = "M6 SLAM Mine";
			picture = "\A3\Weapons_F\Data\UI\gear_mine_SLAM_directional_CA.paa";
			model = "\A3\Weapons_F\Explosives\mine_SLAM_directional_i";
			descriptionShort = "Type: Anti-armor penetration mine<br />Rounds: 1<br />Used on: Ground";
			class Library //sources - ["A3_Weapons_F_Explosives"]
			{
				libTextDesc = "The M6 SLAM mine is a next generation Selectable Lightweight Attack Munition. They are very effective against light armored vehicles, penetrating 40 mm armor from up to eight meters. Unlike dug-in mines, SLAM is placed on the ground and is easier to spot.";
			};
			descriptionUse = "<t color='#9cf953'>Use: </t>Place Mine";
			allowedSlots[] = {901, 701};
		};
		class APERSTripMine_Wire_Mag: ATMine_Range_Mag //inherits 21 parameters from bin\config.bin/CfgMagazines/ATMine_Range_Mag, sources - ["A3_Weapons_F_Explosives"]
		{
			author = "Bohemia Interactive";
			mass = 20;
			ammo = "APERSTripMine_Wire_Ammo";
			displayName = "APERS Tripwire Mine";
			picture = "\A3\Weapons_F\Data\UI\gear_mine_AP_tripwire_CA.paa";
			model = "\A3\Weapons_F\explosives\mine_AP_tripwire_i";
			descriptionShort = "Type: Anti-personnel tripwire mine<br />Rounds: 1<br />Used on: Ground";
			class Library //sources - ["A3_Weapons_F_Explosives"]
			{
				libTextDesc = "Tripwire anti-personnel mines consist of a dug-in mine and a 5m wire.  They are very hard to spot, but carry a smaller explosive charge than more typical mines.";
			};
			descriptionUse = "<t color='#9cf953'>Use: </t>Place Mine";
			allowedSlots[] = {901, 701};
		};
		class ClaymoreDirectionalMine_Remote_Mag: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F_Explosives"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			mass = 20;
			ammo = "ClaymoreDirectionalMine_Remote_Ammo";
			displayName = "Claymore Charge";
			picture = "\A3\Weapons_F\Data\UI\gear_mine_AP_miniclaymore_CA.paa";
			model = "\A3\Weapons_F\explosives\mine_AP_miniclaymore_i";
			nameSoundWeapon = "mine";
			type = "2*		256";
			value = 5;
			count = 1;
			initSpeed = 0;
			maxLeadSpeed = 0;
			nameSound = "mine";
			useAction = 1;
			useActionTitle = "Put %1 (%2 left)";
			descriptionShort = "Type: Anti-personnel fragmentation charge<br />Rounds: 1<br />Used on: Ground";
			class Library //sources - ["A3_Weapons_F_Explosives"]
			{
				libTextDesc = "A Claymore fragmentation charge is one of the deadliest anti-personnel charges available. On a timed or remote-triggered detonation, the Claymore sends deadly steel balls in a frontal direction. Effective kill radius is up to 50 meters. Unlike dug-in mines the Claymore is placed on the ground and is easier to spot.";
			};
			descriptionUse = "<t color='#9cf953'>Use: </t>Place Mine";
			allowedSlots[] = {901, 701};
		};
		class SatchelCharge_Remote_Mag: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F_Explosives"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "Explosive Satchel";
			picture = "\A3\Weapons_f\data\UI\gear_satchel_CA.paa";
			model = "\A3\Weapons_F\Explosives\satchel_i";
			descriptionShort = "Type: Charge<br />Rounds: 1<br />Used on: Ground";
			class Library //sources - ["A3_Weapons_F_Explosives"]
			{
				libTextDesc = "An explosive satchel is a charge placeable on the ground. It can be set to detonate either by using the built-in timer or a remote detonator. They are stronger than an explosive charge, capable of destroying whole buildings, but easier to spot.";
			};
			descriptionUse = "<t color='#9cf953'>Use: </t>Set Charge";
			type = "2*		256";
			allowedSlots[] = {901};
			value = 5;
			ammo = "SatchelCharge_Remote_Ammo";
			mass = 80;
			count = 1;
			initSpeed = 0;
			maxLeadSpeed = 0;
			nameSoundWeapon = "satchelcharge";
			nameSound = "satchelcharge";
			weaponPoolAvailable = 1;
			useAction = 1;
			useActionTitle = "Put %1 (%2 left)";
			sound[] = {"A3\sounds_f\dummysound", 0.000316228, 1, 10};
		};
		class DemoCharge_Remote_Mag: SatchelCharge_Remote_Mag //inherits 22 parameters from bin\config.bin/CfgMagazines/SatchelCharge_Remote_Mag, sources - ["A3_Weapons_F_Explosives"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			mass = 20;
			displayName = "Explosive Charge";
			picture = "\A3\Weapons_F\Data\UI\gear_c4_charge_small_CA.paa";
			model = "\A3\Weapons_F\Explosives\c4_charge_small";
			ammo = "DemoCharge_Remote_Ammo";
			descriptionShort = "Type: Charge<br />Rounds: 1<br />Used on: Ground";
			class Library //sources - ["A3_Weapons_F_Explosives"]
			{
				libTextDesc = "An explosive charge is placeable on the ground. It could be set to detonate either by the built-in timer or a remote detonator.";
			};
			allowedSlots[] = {901, 701};
		};
		class IEDUrbanBig_Remote_Mag: DemoCharge_Remote_Mag //inherits 10 parameters from bin\config.bin/CfgMagazines/DemoCharge_Remote_Mag, sources - ["A3_Weapons_F_Explosives"]
		{
			author = "Bohemia Interactive";
			mass = 80;
			displayName = "Large IED (Urban)";
			picture = "\A3\Weapons_F\Data\UI\gear_mine_AT_CA.paa";
			model = "\A3\Weapons_F\Explosives\IED_urban_big";
			ammo = "IEDUrbanBig_Remote_Ammo";
			allowedSlots[] = {901};
		};
		class IEDLandBig_Remote_Mag: IEDUrbanBig_Remote_Mag //inherits 7 parameters from bin\config.bin/CfgMagazines/IEDUrbanBig_Remote_Mag, sources - ["A3_Weapons_F_Explosives"]
		{
			author = "Bohemia Interactive";
			displayName = "Large IED (Dug-in)";
			picture = "\A3\Weapons_F\Data\UI\gear_mine_AP_bouncing_CA.paa";
			model = "\A3\Weapons_F\Explosives\IED_land_big";
			ammo = "IEDLandBig_Remote_Ammo";
		};
		class IEDUrbanSmall_Remote_Mag: DemoCharge_Remote_Mag //inherits 10 parameters from bin\config.bin/CfgMagazines/DemoCharge_Remote_Mag, sources - ["A3_Weapons_F_Explosives"]
		{
			author = "Bohemia Interactive";
			mass = 40;
			displayName = "Small IED (Urban)";
			picture = "\A3\Weapons_F\Data\UI\gear_mine_AT_CA.paa";
			model = "\A3\Weapons_F\Explosives\IED_urban_small";
			ammo = "IEDUrbanSmall_Remote_Ammo";
		};
		class IEDLandSmall_Remote_Mag: IEDUrbanSmall_Remote_Mag //inherits 6 parameters from bin\config.bin/CfgMagazines/IEDUrbanSmall_Remote_Mag, sources - ["A3_Weapons_F_Explosives"]
		{
			author = "Bohemia Interactive";
			displayName = "Small IED (Dug-in)";
			picture = "\A3\Weapons_F\Data\UI\gear_mine_AP_bouncing_CA.paa";
			model = "\A3\Weapons_F\Explosives\IED_land_small";
			ammo = "IEDLandSmall_Remote_Ammo";
		};
		class 6Rnd_GreenSignal_F: 3Rnd_UGL_FlareGreen_F //inherits 6 parameters from bin\config.bin/CfgMagazines/3Rnd_UGL_FlareGreen_F, sources - ["A3_Weapons_F_Kart"]
		{
			author = "Bohemia Interactive";
			ammo = "Sub_F_Signal_Green";
			count = 6;
			displayName = "6Rnd Signal Cylinder (Green)";
			descriptionShort = "Type: Flare Slugs - Green<br />Rounds: 6<br />Used in: Starter Pistol";
			displayNameShort = "Green Flare";
			mass = 12;
			initSpeed = 240;
			model = "\A3\weapons_F\ammo\mag_univ.p3d";
			picture = "\A3\Weapons_F_Kart\Pistols\Pistol_Signal_F\Data\UI\M_6Rnd_GreenSignal_CA.paa";
		};
		class 6Rnd_RedSignal_F: 6Rnd_GreenSignal_F //inherits 10 parameters from bin\config.bin/CfgMagazines/6Rnd_GreenSignal_F, sources - ["A3_Weapons_F_Kart"]
		{
			author = "Bohemia Interactive";
			ammo = "Sub_F_Signal_Red";
			displayName = "6Rnd Signal Cylinder (Red)";
			descriptionShort = "Type: Flare Slugs - Red<br />Rounds: 6<br />Used in: Starter Pistol";
			displayNameShort = "Red Flare";
			picture = "\A3\Weapons_F_Kart\Pistols\Pistol_Signal_F\Data\UI\M_6Rnd_RedSignal_CA.paa";
		};
		class 10Rnd_338_Mag: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F_Mark"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = ".338 LM 10Rnd Mag";
			picture = "\A3\Weapons_F_Mark\Data\UI\M_338_CA.paa";
			count = 10;
			ammo = "B_338_Ball";
			initSpeed = 915;
			descriptionShort = "Caliber: .338 Lapua Magnum<br />Rounds: 10<br />Used in: MAR-10";
			mass = 14;
		};
		class 130Rnd_338_Mag: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F_Mark"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = ".338 NM 130Rnd Belt";
			picture = "\A3\Weapons_F_Mark\Data\UI\M_338_NM_CA.paa";
			count = 130;
			ammo = "B_338_NM_Ball";
			initSpeed = 807;
			tracersEvery = 5;
			lastRoundsTracer = 5;
			descriptionShort = "Caliber: .338 Norma Magnum<br />Rounds: 130<br />Used in: SPMG";
			mass = 60;
		};
		class 10Rnd_127x54_Mag: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F_Mark"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "12.7mm 10Rnd Mag";
			picture = "\A3\Weapons_F_Mark\Data\UI\M_127x54_CA.paa";
			count = 10;
			ammo = "B_127x54_Ball";
			initSpeed = 290;
			descriptionShort = "Caliber: 12.7x54 mm<br />Rounds: 10<br />Used in: ASP-1 Kir";
			mass = 12;
		};
		class 150Rnd_93x64_Mag: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F_Mark"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "9.3mm 150Rnd Belt";
			picture = "\A3\Weapons_F_Mark\Data\UI\M_93x64_CA.paa";
			count = 150;
			ammo = "B_93x64_Ball";
			initSpeed = 785;
			tracersEvery = 3;
			lastRoundsTracer = 6;
			descriptionShort = "Caliber: 9.3x64mm<br />Rounds: 150<br />Used in: Navid";
			mass = 70;
		};
		class 10Rnd_93x64_DMR_05_Mag: 150Rnd_93x64_Mag //inherits 11 parameters from bin\config.bin/CfgMagazines/150Rnd_93x64_Mag, sources - ["A3_Weapons_F_Mark"]
		{
			author = "Bohemia Interactive";
			picture = "\A3\Weapons_F_Mark\Data\UI\M_93x64_DMR_05_CA.paa";
			count = 10;
			displayName = "9.3mm 10Rnd Mag";
			descriptionShort = "Caliber: 9.3x64mm<br />Rounds: 10<br />Used in: Cyrus";
			initSpeed = 870;
			tracersEvery = 0;
			lastRoundsTracer = 0;
			mass = 16;
		};
		class 10Rnd_9x21_Mag: 16Rnd_9x21_Mag //inherits 8 parameters from bin\config.bin/CfgMagazines/16Rnd_9x21_Mag, sources - ["A3_Weapons_F_Exp"]
		{
			author = "Bohemia Interactive";
			displayName = "9 mm 10Rnd Mag";
			count = 10;
			descriptionShort = "Caliber: 9x21 mm<br />Rounds: 10<br />Used in: PM";
			mass = 4;
			initSpeed = 410;
		};
		class 30Rnd_580x42_Mag_F: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F_Exp"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "5.8 mm 30Rnd Mag";
			descriptionShort = "Caliber: 5.8x42 mm<br />Rounds: 30<br />Used in: CAR-95, CAR-95 GL";
			ammo = "B_580x42_Ball_F";
			count = 30;
			initSpeed = 930;
			picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_580x42_Mag_F_ca.paa";
			tracersEvery = 0;
			lastRoundsTracer = 4;
			mass = 8;
		};
		class 30Rnd_580x42_Mag_Tracer_F: 30Rnd_580x42_Mag_F //inherits 11 parameters from bin\config.bin/CfgMagazines/30Rnd_580x42_Mag_F, sources - ["A3_Weapons_F_Exp"]
		{
			author = "Bohemia Interactive";
			displayName = "5.8 mm 30Rnd Tracer (Green) Mag";
			displayNameShort = "Tracer";
			picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_580x42_Mag_Tracer_F_ca.paa";
			tracersEvery = 1;
			lastRoundsTracer = 30;
		};
		class 100Rnd_580x42_Mag_F: 30Rnd_580x42_Mag_F //inherits 11 parameters from bin\config.bin/CfgMagazines/30Rnd_580x42_Mag_F, sources - ["A3_Weapons_F_Exp"]
		{
			author = "Bohemia Interactive";
			displayName = "5.8 mm 100Rnd Mag";
			descriptionShort = "Caliber: 5.8x42 mm<br />Rounds: 100<br />Used in: CAR-95-1";
			count = 100;
			picture = "\A3\Weapons_F_Exp\Data\UI\icon_100Rnd_580x42_Mag_F_ca.paa";
			mass = 20;
		};
		class 100Rnd_580x42_Mag_Tracer_F: 100Rnd_580x42_Mag_F //inherits 6 parameters from bin\config.bin/CfgMagazines/100Rnd_580x42_Mag_F, sources - ["A3_Weapons_F_Exp"]
		{
			author = "Bohemia Interactive";
			displayName = "5.8 mm 100Rnd Tracer (Green) Mag";
			displayNameShort = "Tracer";
			picture = "\A3\Weapons_F_Exp\Data\UI\icon_100Rnd_580x42_Mag_Tracer_F_ca.paa";
			tracersEvery = 1;
			lastRoundsTracer = 100;
		};
		class 20Rnd_650x39_Cased_Mag_F: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F_Exp"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "6.5 mm 20Rnd Mag";
			descriptionShort = "Caliber: 6.5x39 mm<br />Rounds: 20<br />Used in: CMR-76";
			ammo = "B_65x39_Case_green";
			count = 20;
			initSpeed = 820;
			picture = "\A3\Weapons_F_Exp\Data\UI\icon_20Rnd_650x39_Cased_Mag_F_ca.paa";
			tracersEvery = 0;
			lastRoundsTracer = 0;
			mass = 7;
		};
		class 10Rnd_50BW_Mag_F: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F_Exp"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = ".50 BW 10Rnd Caseless Mag";
			descriptionShort = "Caliber: .50 BW - Caseless<br />Rounds: 10<br />Used in: Type 115";
			ammo = "B_50BW_Ball_F";
			count = 10;
			initSpeed = 580;
			picture = "\A3\Weapons_F_Exp\Data\UI\icon_10Rnd_50BW_Mag_F_ca.paa";
			tracersEvery = 0;
			lastRoundsTracer = 0;
			mass = 12;
		};
		class 150Rnd_556x45_Drum_Mag_F: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F_Exp"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "5.56 mm 150Rnd Mag";
			descriptionShort = "Caliber: 5.56x45 mm<br />Rounds: 150<br />Used in: SPAR-16S";
			ammo = "B_556x45_Ball_Tracer_Red";
			count = 150;
			initSpeed = 930;
			picture = "\A3\Weapons_F_Exp\Data\UI\icon_150Rnd_556x45_Drum_Mag_F_ca.paa";
			tracersEvery = 0;
			lastRoundsTracer = 4;
			mass = 30;
		};
		class 150Rnd_556x45_Drum_Mag_Tracer_F: 150Rnd_556x45_Drum_Mag_F //inherits 11 parameters from bin\config.bin/CfgMagazines/150Rnd_556x45_Drum_Mag_F, sources - ["A3_Weapons_F_Exp"]
		{
			author = "Bohemia Interactive";
			displayName = "5.56 mm 150Rnd Tracer (Red) Mag";
			displayNameShort = "Tracer";
			picture = "\A3\Weapons_F_Exp\Data\UI\icon_150Rnd_556x45_Drum_Mag_Tracer_F_ca.paa";
			tracersEvery = 1;
			lastRoundsTracer = 150;
		};
		class 30Rnd_762x39_Mag_F: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F_Exp"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "7.62 mm 30Rnd Reload Tracer (Yellow) Mag";
			descriptionShort = "Caliber: 7.62x39 mm<br />Rounds: 30<br />Used in: AK-12, AK-12 GL, AKM";
			ammo = "B_762x39_Ball_F";
			count = 30;
			initSpeed = 715;
			picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_762x39_Mag_F_ca.paa";
			tracersEvery = 0;
			lastRoundsTracer = 4;
			mass = 10;
		};
		class 30Rnd_762x39_Mag_Green_F: 30Rnd_762x39_Mag_F //inherits 11 parameters from bin\config.bin/CfgMagazines/30Rnd_762x39_Mag_F, sources - ["A3_Weapons_F_Exp"]
		{
			author = "Bohemia Interactive";
			displayName = "7.62 mm 30Rnd Reload Tracer (Green) Mag";
			ammo = "B_762x39_Ball_Green_F";
		};
		class 30Rnd_762x39_Mag_Tracer_F: 30Rnd_762x39_Mag_F //inherits 11 parameters from bin\config.bin/CfgMagazines/30Rnd_762x39_Mag_F, sources - ["A3_Weapons_F_Exp"]
		{
			author = "Bohemia Interactive";
			displayName = "7.62 mm 30Rnd Tracer (Yellow) Mag";
			displayNameShort = "Tracer";
			picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_762x39_Mag_Tracer_F_ca.paa";
			tracersEvery = 1;
			lastRoundsTracer = 30;
		};
		class 30Rnd_762x39_Mag_Tracer_Green_F: 30Rnd_762x39_Mag_Tracer_F //inherits 6 parameters from bin\config.bin/CfgMagazines/30Rnd_762x39_Mag_Tracer_F, sources - ["A3_Weapons_F_Exp"]
		{
			author = "Bohemia Interactive";
			displayName = "7.62 mm 30Rnd Tracer (Green) Mag";
			ammo = "B_762x39_Ball_Green_F";
			picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_762x39_Mag_Tracer_Green_F_ca.paa";
		};
		class 30Rnd_545x39_Mag_F: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F_Exp"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "5.45 mm 30Rnd Reload Tracer (Yellow) Mag";
			descriptionShort = "Caliber: 5.45x39 mm<br />Rounds: 30<br />Used in: AKS-74U";
			ammo = "B_545x39_Ball_F";
			count = 30;
			initSpeed = 735;
			picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_F_ca.paa";
			tracersEvery = 0;
			lastRoundsTracer = 4;
			mass = 8;
		};
		class 30Rnd_545x39_Mag_Green_F: 30Rnd_545x39_Mag_F //inherits 11 parameters from bin\config.bin/CfgMagazines/30Rnd_545x39_Mag_F, sources - ["A3_Weapons_F_Exp"]
		{
			author = "Bohemia Interactive";
			displayName = "5.45 mm 30Rnd Reload Tracer (Green) Mag";
			ammo = "B_545x39_Ball_Green_F";
		};
		class 30Rnd_545x39_Mag_Tracer_F: 30Rnd_545x39_Mag_F //inherits 11 parameters from bin\config.bin/CfgMagazines/30Rnd_545x39_Mag_F, sources - ["A3_Weapons_F_Exp"]
		{
			author = "Bohemia Interactive";
			displayName = "5.45 mm 30Rnd Tracer (Yellow) Mag";
			displayNameShort = "Tracer";
			picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_Tracer_F_ca.paa";
			tracersEvery = 1;
			lastRoundsTracer = 30;
		};
		class 30Rnd_545x39_Mag_Tracer_Green_F: 30Rnd_545x39_Mag_Tracer_F //inherits 6 parameters from bin\config.bin/CfgMagazines/30Rnd_545x39_Mag_Tracer_F, sources - ["A3_Weapons_F_Exp"]
		{
			author = "Bohemia Interactive";
			displayName = "5.45 mm 30Rnd Tracer (Green) Mag";
			ammo = "B_545x39_Ball_Green_F";
			picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_Tracer_Green_F_ca.paa";
		};
		class 200Rnd_556x45_Box_F: CA_Magazine //inherits 19 parameters from bin\config.bin/CfgMagazines/CA_Magazine, sources - ["A3_Weapons_F_Exp"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "5.56 mm 200Rnd Reload Tracer (Yellow) Box";
			descriptionShort = "Caliber: 5.56x45 mm<br />Rounds: 200<br />Used in: LIM-85";
			ammo = "B_556x45_Ball_Tracer_Yellow";
			count = 200;
			initSpeed = 915;
			picture = "\A3\Weapons_F_Exp\Data\UI\icon_200Rnd_556x45_Box_F_ca.paa";
			tracersEvery = 4;
			lastRoundsTracer = 4;
			mass = 40;
		};
		class 200Rnd_556x45_Box_Red_F: 200Rnd_556x45_Box_F //inherits 11 parameters from bin\config.bin/CfgMagazines/200Rnd_556x45_Box_F, sources - ["A3_Weapons_F_Exp"]
		{
			author = "Bohemia Interactive";
			displayName = "5.56 mm 200Rnd Reload Tracer (Red) Box";
			ammo = "B_556x45_Ball_Tracer_Red";
		};
		class 200Rnd_556x45_Box_Tracer_F: 200Rnd_556x45_Box_F //inherits 11 parameters from bin\config.bin/CfgMagazines/200Rnd_556x45_Box_F, sources - ["A3_Weapons_F_Exp"]
		{
			author = "Bohemia Interactive";
			displayName = "5.56 mm 200Rnd Tracer (Yellow) Box";
			displayNameShort = "Tracer";
			picture = "\A3\Weapons_F_Exp\Data\UI\icon_200Rnd_556x45_Box_Tracer_F_ca.paa";
			tracersEvery = 1;
			lastRoundsTracer = 200;
		};
		class 200Rnd_556x45_Box_Tracer_Red_F: 200Rnd_556x45_Box_Tracer_F //inherits 6 parameters from bin\config.bin/CfgMagazines/200Rnd_556x45_Box_Tracer_F, sources - ["A3_Weapons_F_Exp"]
		{
			author = "Bohemia Interactive";
			displayName = "5.56 mm 200Rnd Tracer (Red) Box";
			ammo = "B_556x45_Ball_Tracer_Red";
			picture = "\A3\Weapons_F_Exp\Data\UI\icon_200Rnd_556x45_Box_Tracer_Red_F_ca.paa";
		};
		class 500Rnd_65x39_Belt: 200Rnd_65x39_Belt //inherits 10 parameters from bin\config.bin/CfgMagazines/200Rnd_65x39_Belt, sources - ["A3_Weapons_F_Exp"]
		{
			author = "Bohemia Interactive";
			count = 500;
			ammo = "B_65x39_Caseless";
			tracersEvery = 5;
			displayName = "6.5 mm 500Rnd Belt Case";
			descriptionShort = "Caliber: 6.5x39 mm<br />Rounds: 500<br />Used in: Vehicles";
		};
		class 500Rnd_65x39_Belt_Tracer_Red_Splash: 500Rnd_65x39_Belt //inherits 6 parameters from bin\config.bin/CfgMagazines/500Rnd_65x39_Belt, sources - ["A3_Weapons_F_Exp"]
		{
			author = "Bohemia Interactive";
			ammo = "B_65x39_Minigun_Caseless_Red_splash";
			tracersEvery = 1;
			displayName = "6.5 mm 500Rnd Belt Case Tracer (Red)";
			displaynameShort = "Tracer";
		};
		class 500Rnd_65x39_Belt_Tracer_Green_Splash: 500Rnd_65x39_Belt //inherits 6 parameters from bin\config.bin/CfgMagazines/500Rnd_65x39_Belt, sources - ["A3_Weapons_F_Exp"]
		{
			author = "Bohemia Interactive";
			ammo = "B_65x39_Minigun_Caseless_Green_splash";
			tracersEvery = 1;
			displayName = "6.5 mm 500Rnd Belt Case Tracer (Green)";
			displaynameShort = "Tracer";
		};
		class 500Rnd_65x39_Belt_Tracer_Yellow_Splash: 500Rnd_65x39_Belt //inherits 6 parameters from bin\config.bin/CfgMagazines/500Rnd_65x39_Belt, sources - ["A3_Weapons_F_Exp"]
		{
			author = "Bohemia Interactive";
			ammo = "B_65x39_Minigun_Caseless_Yellow_splash";
			tracersEvery = 1;
			displayName = "6.5 mm 500Rnd Belt Case Tracer (Yellow)";
			displaynameShort = "Tracer";
		};
		class RPG7_F: RPG32_F //inherits 11 parameters from bin\config.bin/CfgMagazines/RPG32_F, sources - ["A3_Weapons_F_Exp"]
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = "PG-7VM HEAT Grenade";
			displaynameShort = "AT";
			descriptionShort = "Type: Anti-Tank Grenade<br />Rounds: 1<br />Used in: RPG-7";
			model = "\A3\Weapons_F_Exp\Launchers\RPG7\rocket_rpg7_item.p3d";
			picture = "\A3\Weapons_F_Exp\Launchers\RPG7\Data\UI\icon_rocket_RPG7_CA.paa";
			initSpeed = 134;
			ammo = "R_PG7_F";
			type = "2*		256";
			mass = 40;
		};
		class 4Rnd_LG_Jian: 4Rnd_Missile_AGM_01_F //inherits 4 parameters from bin\config.bin/CfgMagazines/4Rnd_Missile_AGM_01_F, sources - ["A3_Weapons_F_Exp"]
		{
			author = "Bohemia Interactive";
			displayName = "Jian";
			displayNameShort = "AG";
			ammo = "M_Jian_AT";
			count = 4;
			initSpeed = 0;
		};
		class 4000Rnd_20mm_Tracer_Red_shells: 1000Rnd_20mm_shells //inherits 5 parameters from bin\config.bin/CfgMagazines/1000Rnd_20mm_shells, sources - ["A3_Weapons_F_Exp"]
		{
			author = "Bohemia Interactive";
			count = 4000;
			tracersEvery = 1;
		};
		class 160Rnd_40mm_APFSDS_Tracer_Red_shells: 40Rnd_40mm_APFSDS_Tracer_Red_shells //inherits 5 parameters from bin\config.bin/CfgMagazines/40Rnd_40mm_APFSDS_Tracer_Red_shells, sources - ["A3_Weapons_F_Exp"]
		{
			author = "Bohemia Interactive";
			count = 160;
		};
		class 240Rnd_40mm_GPR_Tracer_Red_shells: 60Rnd_40mm_GPR_Tracer_Red_shells //inherits 4 parameters from bin\config.bin/CfgMagazines/60Rnd_40mm_GPR_Tracer_Red_shells, sources - ["A3_Weapons_F_Exp"]
		{
			author = "Bohemia Interactive";
			count = 240;
		};
		class 100Rnd_105mm_HEAT_MP: 20Rnd_105mm_HEAT_MP //inherits 6 parameters from bin\config.bin/CfgMagazines/20Rnd_105mm_HEAT_MP, sources - ["A3_Weapons_F_Exp"]
		{
			author = "Bohemia Interactive";
			count = 100;
		};
		class magazine_Missile_rim116_x21: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F_Jets"]
		{
			scope = 2;
			displayName = "Spartan AA";
			displayNameShort = "SAM SR";
			descriptionShort = "Spartan AA system missile";
			ammo = "ammo_Missile_rim116";
			count = 21;
			initSpeed = 40;
			maxLeadSpeed = 750;
			sound[] = {"A3\sounds_f\dummysound", 1, 1, 1300};
			reloadSound[] = {"A3\sounds_f\dummysound", 0.000316228, 1, 20};
			nameSound = "missiles";
		};
		class magazine_Missile_rim162_x8: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F_Jets"]
		{
			scope = 2;
			displayName = "Centurion AA";
			displayNameShort = "SAM MR";
			descriptionShort = "Centurion AA system missile";
			count = 8;
			ammo = "ammo_Missile_rim162";
			initSpeed = 60;
			maxLeadSpeed = 900;
			sound[] = {"A3\sounds_f\dummysound", 31.6228, 1, 1100};
			soundFly[] = {"A3\sounds_f\dummysound", 1, 1.1, 700};
			soundHit[] = {"A3\sounds_f\dummysound", 15.8489, 1, 2000};
			reloadSound[] = {"A3\sounds_f\dummysound", 0.000316228, 1, 20};
			nameSound = "missiles";
		};
		class magazine_Cannon_Phalanx_x1550: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F_Jets"]
		{
			scope = 2;
			displayName = "Praetorian 20mm";
			descriptionShort = "Praetorian 20mm 1550 rounds";
			ammo = "ammo_AAA_Gun35mm_AA";
			count = 1550;
			initSpeed = 1440;
			maxLeadSpeed = 600;
			tracersEvery = 3;
			nameSound = "cannon";
		};
		class magazine_Fighter01_Gun20mm_AA_x450: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F_Jets"]
		{
			scope = 2;
			displayName = "M61 20mm 450 rnd";
			descriptionShort = "M61 20mm 450 rounds";
			ammo = "ammo_Fighter01_Gun20mm_AA";
			count = 450;
			initSpeed = 1036;
			maxLeadSpeed = 300;
			tracersEvery = 3;
			nameSound = "cannon";
		};
		class magazine_Fighter04_Gun20mm_AA_x150: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F_Jets"]
		{
			scope = 2;
			displayName = "M61 20mm 150 rbd";
			descriptionShort = "M61 20mm 150 rounds";
			ammo = "ammo_Fighter04_Gun20mm_AA";
			count = 150;
			initSpeed = 1036;
			maxLeadSpeed = 300;
			tracersEvery = 3;
			nameSound = "cannon";
		};
		class magazine_Fighter04_Gun20mm_AA_x250: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F_Jets"]
		{
			scope = 2;
			displayName = "M61 20mm 150 rbd";
			descriptionShort = "M61 20mm 150 rounds";
			ammo = "ammo_Fighter04_Gun20mm_AA";
			count = 250;
			initSpeed = 1036;
			maxLeadSpeed = 300;
			tracersEvery = 3;
			nameSound = "cannon";
		};
		class magazine_Missile_AMRAAM_C_x1: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F_Jets"]
		{
			scope = 2;
			displayName = "AMRAAM C AA x1";
			displayNameShort = "AA MR";
			descriptionShort = "AMRAAM C MR AA missile";
			count = 1;
			ammo = "ammo_Missile_AMRAAM_C";
			initSpeed = 0;
			maxLeadSpeed = 800;
			sound[] = {"A3\sounds_f\dummysound", 31.6228, 1, 1100};
			soundFly[] = {"A3\sounds_f\dummysound", 1, 1.1, 700};
			soundHit[] = {"A3\sounds_f\dummysound", 15.8489, 1, 2000};
			reloadSound[] = {"A3\sounds_f\dummysound", 0.000316228, 1, 20};
			nameSound = "missiles";
			class mfdElements //sources - ["A3_Weapons_F_Jets"]
			{
				class Plane_Fighter_01 //sources - ["A3_Weapons_F_Jets"]
				{
					class Bones //sources - ["A3_Weapons_F_Jets"]
					{
						class Center //sources - ["A3_Weapons_F_Jets"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
					};
					class Draw //sources - ["A3_Weapons_F_Jets"]
					{
						class Default //sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0, 0.12, 0};
							alpha = 0.22;
							class Shape //sources - ["A3_Weapons_F_Jets"]
							{
								type = "line";
								width = 4;
								points[] = {{"Center", {0, -0.0147436}, 1}, {"Center", {0.0075, -0.0127679}, 1}, {"Center", {0.01299, -0.00737179}, 1}, {"Center", {0.015, 0}, 1}, {"Center", {0.01299, 0.00737179}, 1}, {"Center", {0.0075, 0.0127679}, 1}, {"Center", {0, 0.0147436}, 1}, {"Center", {-0.0075, 0.0127679}, 1}, {"Center", {-0.01299, 0.00737179}, 1}, {"Center", {-0.015, 0}, 1}, {"Center", {-0.01299, -0.00737179}, 1}, {"Center", {-0.0075, -0.0127679}, 1}, {"Center", {0, -0.0147436}, 1}, {}, {"Center", {0.0106066, -0.0104253}, 1}, {"Center", {0.0212132, -0.0208506}, 1}, {}, {"Center", {0.0106066, 0.0104253}, 1}, {"Center", {0.0212132, 0.0208506}, 1}, {}, {"Center", {-0.0106066, 0.0104253}, 1}, {"Center", {-0.0212132, 0.0208506}, 1}, {}, {"Center", {-0.0106066, -0.0104253}, 1}, {"Center", {-0.0212132, -0.0208506}, 1}, {}};
							};
							class PylonText1 //sources - ["A3_Weapons_F_Jets"]
							{
								type = "text";
								source = "static";
								text = "ARH";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {"Center", 1, {-0.005, 0.02}, 1};
								right[] = {"Center", 1, {0.045, 0.02}, 1};
								down[] = {"Center", 1, {-0.005, 0.065}, 1};
							};
						};
						class Selected: Default //inherits 5 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_C_x1/mfdElements/Plane_Fighter_01/Draw/Default, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_C_x1/mfdElements/Plane_Fighter_01/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_C_x1/mfdElements/Plane_Fighter_01/Draw/Default/PylonText1, sources - []
							{
							};
							class Background //sources - ["A3_Weapons_F_Jets"]
							{
								type = "polygon";
								points[] = {{{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, -0.0104253}, 1}, {"Center", {0.015, 6.44463e-010}, 1}, {"Center", {0.0106066, 0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, 0.0104253}, 1}, {"Center", {-1.31134e-009, 0.0147436}, 1}, {"Center", {-0.0106066, 0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, 0.0104253}, 1}, {"Center", {-0.015, -1.75816e-010}, 1}, {"Center", {-0.0106066, -0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, -0.0104253}, 1}, {"Center", {2.62268e-009, -0.0147436}, 1}, {"Center", {0.0106066, -0.0104253}, 1}}};
							};
						};
						class Empty: Selected //inherits 5 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_C_x1/mfdElements/Plane_Fighter_01/Draw/Selected, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_C_x1/mfdElements/Plane_Fighter_01/Draw/Selected/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_C_x1/mfdElements/Plane_Fighter_01/Draw/Selected/PylonText1, sources - []
							{
							};
							class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_C_x1/mfdElements/Plane_Fighter_01/Draw/Selected/Background, sources - []
							{
							};
						};
					};
				};
				class Plane_Fighter_04 //sources - ["A3_Weapons_F_Jets"]
				{
					class Bones //sources - ["A3_Weapons_F_Jets"]
					{
						class Center //sources - ["A3_Weapons_F_Jets"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
					};
					class Draw //sources - ["A3_Weapons_F_Jets"]
					{
						class Default //sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0, 0.12, 0};
							alpha = 0.22;
							class Shape //sources - ["A3_Weapons_F_Jets"]
							{
								type = "line";
								width = 4;
								points[] = {{"Center", {0, -0.00982906}, 1}, {"Center", {0.005, -0.00851197}, 1}, {"Center", {0.00866, -0.00491453}, 1}, {"Center", {0.01, 0}, 1}, {"Center", {0.00866, 0.00491453}, 1}, {"Center", {0.005, 0.00851197}, 1}, {"Center", {0, 0.00982906}, 1}, {"Center", {-0.005, 0.00851197}, 1}, {"Center", {-0.00866, 0.00491453}, 1}, {"Center", {-0.01, 0}, 1}, {"Center", {-0.00866, -0.00491453}, 1}, {"Center", {-0.005, -0.00851197}, 1}, {"Center", {0, -0.00982906}, 1}, {}, {"Center", {0.00707107, -0.00695019}, 1}, {"Center", {0.0141421, -0.0139004}, 1}, {}, {"Center", {0.00707107, 0.00695019}, 1}, {"Center", {0.0141421, 0.0139004}, 1}, {}, {"Center", {-0.00707107, 0.00695019}, 1}, {"Center", {-0.0141421, 0.0139004}, 1}, {}, {"Center", {-0.00707107, -0.00695019}, 1}, {"Center", {-0.0141421, -0.0139004}, 1}, {}};
							};
							class PylonText1 //sources - ["A3_Weapons_F_Jets"]
							{
								type = "text";
								source = "static";
								text = "ARH";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {"Center", 1, {-0.005, 0.02}, 1};
								right[] = {"Center", 1, {0.045, 0.02}, 1};
								down[] = {"Center", 1, {-0.005, 0.065}, 1};
							};
						};
						class Selected: Default //inherits 5 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_C_x1/mfdElements/Plane_Fighter_04/Draw/Default, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_C_x1/mfdElements/Plane_Fighter_04/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_C_x1/mfdElements/Plane_Fighter_04/Draw/Default/PylonText1, sources - []
							{
							};
							class Background //sources - ["A3_Weapons_F_Jets"]
							{
								type = "polygon";
								points[] = {{{"Center", 1, {0, 0}, 1}, {"Center", {0.00707107, -0.00695019}, 1}, {"Center", {0.01, 4.29642e-010}, 1}, {"Center", {0.00707107, 0.00695019}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {0.00707107, 0.00695019}, 1}, {"Center", {-8.74228e-010, 0.00982906}, 1}, {"Center", {-0.00707107, 0.00695019}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.00707107, 0.00695019}, 1}, {"Center", {-0.01, -1.1721e-010}, 1}, {"Center", {-0.00707107, -0.00695019}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.00707107, -0.00695019}, 1}, {"Center", {1.74846e-009, -0.00982906}, 1}, {"Center", {0.00707107, -0.00695019}, 1}}};
							};
						};
						class Empty: Selected //inherits 5 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_C_x1/mfdElements/Plane_Fighter_04/Draw/Selected, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_C_x1/mfdElements/Plane_Fighter_04/Draw/Selected/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_C_x1/mfdElements/Plane_Fighter_04/Draw/Selected/PylonText1, sources - []
							{
							};
							class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_C_x1/mfdElements/Plane_Fighter_04/Draw/Selected/Background, sources - []
							{
							};
						};
					};
				};
			};
		};
		class magazine_Missile_AMRAAM_D_x1: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F_Jets"]
		{
			scope = 2;
			displayName = "AMRAAM D AA x1";
			displayNameShort = "AA MR";
			descriptionShort = "AMRAAM D MR AA missile";
			count = 1;
			ammo = "ammo_Missile_AMRAAM_D";
			initSpeed = 0;
			maxLeadSpeed = 900;
			sound[] = {"A3\sounds_f\dummysound", 31.6228, 1, 1100};
			soundFly[] = {"A3\sounds_f\dummysound", 1, 1.1, 700};
			soundHit[] = {"A3\sounds_f\dummysound", 15.8489, 1, 2000};
			reloadSound[] = {"A3\sounds_f\dummysound", 0.000316228, 1, 20};
			nameSound = "missiles";
			class mfdElements //sources - ["A3_Weapons_F_Jets"]
			{
				class Plane_Fighter_01 //sources - ["A3_Weapons_F_Jets"]
				{
					class Bones //sources - ["A3_Weapons_F_Jets"]
					{
						class Center //sources - ["A3_Weapons_F_Jets"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
					};
					class Draw //sources - ["A3_Weapons_F_Jets"]
					{
						class Default //sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0, 0.12, 0};
							alpha = 0.22;
							class Shape //sources - ["A3_Weapons_F_Jets"]
							{
								type = "line";
								width = 4;
								points[] = {{"Center", {0, -0.0147436}, 1}, {"Center", {0.0075, -0.0127679}, 1}, {"Center", {0.01299, -0.00737179}, 1}, {"Center", {0.015, 0}, 1}, {"Center", {0.01299, 0.00737179}, 1}, {"Center", {0.0075, 0.0127679}, 1}, {"Center", {0, 0.0147436}, 1}, {"Center", {-0.0075, 0.0127679}, 1}, {"Center", {-0.01299, 0.00737179}, 1}, {"Center", {-0.015, 0}, 1}, {"Center", {-0.01299, -0.00737179}, 1}, {"Center", {-0.0075, -0.0127679}, 1}, {"Center", {0, -0.0147436}, 1}, {}, {"Center", {0.0106066, -0.0104253}, 1}, {"Center", {0.0212132, -0.0208506}, 1}, {}, {"Center", {0.0106066, 0.0104253}, 1}, {"Center", {0.0212132, 0.0208506}, 1}, {}, {"Center", {-0.0106066, 0.0104253}, 1}, {"Center", {-0.0212132, 0.0208506}, 1}, {}, {"Center", {-0.0106066, -0.0104253}, 1}, {"Center", {-0.0212132, -0.0208506}, 1}, {}};
							};
							class PylonText1 //sources - ["A3_Weapons_F_Jets"]
							{
								type = "text";
								source = "static";
								text = "ARH";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {"Center", 1, {-0.005, 0.02}, 1};
								right[] = {"Center", 1, {0.045, 0.02}, 1};
								down[] = {"Center", 1, {-0.005, 0.065}, 1};
							};
						};
						class Selected: Default //inherits 5 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_D_x1/mfdElements/Plane_Fighter_01/Draw/Default, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_D_x1/mfdElements/Plane_Fighter_01/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_D_x1/mfdElements/Plane_Fighter_01/Draw/Default/PylonText1, sources - []
							{
							};
							class Background //sources - ["A3_Weapons_F_Jets"]
							{
								type = "polygon";
								points[] = {{{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, -0.0104253}, 1}, {"Center", {0.015, 6.44463e-010}, 1}, {"Center", {0.0106066, 0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, 0.0104253}, 1}, {"Center", {-1.31134e-009, 0.0147436}, 1}, {"Center", {-0.0106066, 0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, 0.0104253}, 1}, {"Center", {-0.015, -1.75816e-010}, 1}, {"Center", {-0.0106066, -0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, -0.0104253}, 1}, {"Center", {2.62268e-009, -0.0147436}, 1}, {"Center", {0.0106066, -0.0104253}, 1}}};
							};
						};
						class Empty: Selected //inherits 5 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_D_x1/mfdElements/Plane_Fighter_01/Draw/Selected, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_D_x1/mfdElements/Plane_Fighter_01/Draw/Selected/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_D_x1/mfdElements/Plane_Fighter_01/Draw/Selected/PylonText1, sources - []
							{
							};
							class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_D_x1/mfdElements/Plane_Fighter_01/Draw/Selected/Background, sources - []
							{
							};
						};
					};
				};
				class Plane_Fighter_04 //sources - ["A3_Weapons_F_Jets"]
				{
					class Bones //sources - ["A3_Weapons_F_Jets"]
					{
						class Center //sources - ["A3_Weapons_F_Jets"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
					};
					class Draw //sources - ["A3_Weapons_F_Jets"]
					{
						class Default //sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0, 0.12, 0};
							alpha = 0.22;
							class Shape //sources - ["A3_Weapons_F_Jets"]
							{
								type = "line";
								width = 4;
								points[] = {{"Center", {0, -0.00982906}, 1}, {"Center", {0.005, -0.00851197}, 1}, {"Center", {0.00866, -0.00491453}, 1}, {"Center", {0.01, 0}, 1}, {"Center", {0.00866, 0.00491453}, 1}, {"Center", {0.005, 0.00851197}, 1}, {"Center", {0, 0.00982906}, 1}, {"Center", {-0.005, 0.00851197}, 1}, {"Center", {-0.00866, 0.00491453}, 1}, {"Center", {-0.01, 0}, 1}, {"Center", {-0.00866, -0.00491453}, 1}, {"Center", {-0.005, -0.00851197}, 1}, {"Center", {0, -0.00982906}, 1}, {}, {"Center", {0.00707107, -0.00695019}, 1}, {"Center", {0.0141421, -0.0139004}, 1}, {}, {"Center", {0.00707107, 0.00695019}, 1}, {"Center", {0.0141421, 0.0139004}, 1}, {}, {"Center", {-0.00707107, 0.00695019}, 1}, {"Center", {-0.0141421, 0.0139004}, 1}, {}, {"Center", {-0.00707107, -0.00695019}, 1}, {"Center", {-0.0141421, -0.0139004}, 1}, {}};
							};
							class PylonText1 //sources - ["A3_Weapons_F_Jets"]
							{
								type = "text";
								source = "static";
								text = "ARH";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {"Center", 1, {-0.005, 0.02}, 1};
								right[] = {"Center", 1, {0.045, 0.02}, 1};
								down[] = {"Center", 1, {-0.005, 0.065}, 1};
							};
						};
						class Selected: Default //inherits 5 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_D_x1/mfdElements/Plane_Fighter_04/Draw/Default, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_D_x1/mfdElements/Plane_Fighter_04/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_D_x1/mfdElements/Plane_Fighter_04/Draw/Default/PylonText1, sources - []
							{
							};
							class Background //sources - ["A3_Weapons_F_Jets"]
							{
								type = "polygon";
								points[] = {{{"Center", 1, {0, 0}, 1}, {"Center", {0.00707107, -0.00695019}, 1}, {"Center", {0.01, 4.29642e-010}, 1}, {"Center", {0.00707107, 0.00695019}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {0.00707107, 0.00695019}, 1}, {"Center", {-8.74228e-010, 0.00982906}, 1}, {"Center", {-0.00707107, 0.00695019}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.00707107, 0.00695019}, 1}, {"Center", {-0.01, -1.1721e-010}, 1}, {"Center", {-0.00707107, -0.00695019}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.00707107, -0.00695019}, 1}, {"Center", {1.74846e-009, -0.00982906}, 1}, {"Center", {0.00707107, -0.00695019}, 1}}};
							};
						};
						class Empty: Selected //inherits 5 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_D_x1/mfdElements/Plane_Fighter_04/Draw/Selected, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_D_x1/mfdElements/Plane_Fighter_04/Draw/Selected/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_D_x1/mfdElements/Plane_Fighter_04/Draw/Selected/PylonText1, sources - []
							{
							};
							class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_D_x1/mfdElements/Plane_Fighter_04/Draw/Selected/Background, sources - []
							{
							};
						};
					};
				};
			};
		};
		class magazine_Missile_BIM9X_x1: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F_Jets"]
		{
			scope = 2;
			displayName = "BIM 9X AA x1";
			displayNameShort = "AA SR";
			descriptionShort = "BIM 9X SR AA missile";
			ammo = "ammo_Missile_BIM9X";
			count = 1;
			initSpeed = 0;
			maxLeadSpeed = 700;
			sound[] = {"A3\sounds_f\dummysound", 1, 1, 1300};
			reloadSound[] = {"A3\sounds_f\dummysound", 0.000316228, 1, 20};
			nameSound = "missiles";
			class mfdElements //sources - ["A3_Weapons_F_Jets"]
			{
				class Plane_Fighter_01 //sources - ["A3_Weapons_F_Jets"]
				{
					class Bones //sources - ["A3_Weapons_F_Jets"]
					{
						class Center //sources - ["A3_Weapons_F_Jets"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
					};
					class Draw //sources - ["A3_Weapons_F_Jets"]
					{
						class Default //sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0, 0.12, 0};
							alpha = 0.22;
							class Shape //sources - ["A3_Weapons_F_Jets"]
							{
								type = "line";
								width = 4;
								points[] = {{"Center", {0, -0.0147436}, 1}, {"Center", {0.0075, -0.0127679}, 1}, {"Center", {0.01299, -0.00737179}, 1}, {"Center", {0.015, 0}, 1}, {"Center", {0.01299, 0.00737179}, 1}, {"Center", {0.0075, 0.0127679}, 1}, {"Center", {0, 0.0147436}, 1}, {"Center", {-0.0075, 0.0127679}, 1}, {"Center", {-0.01299, 0.00737179}, 1}, {"Center", {-0.015, 0}, 1}, {"Center", {-0.01299, -0.00737179}, 1}, {"Center", {-0.0075, -0.0127679}, 1}, {"Center", {0, -0.0147436}, 1}, {}, {"Center", {0.0106066, -0.0104253}, 1}, {"Center", {0.0212132, -0.0208506}, 1}, {}, {"Center", {0.0106066, 0.0104253}, 1}, {"Center", {0.0212132, 0.0208506}, 1}, {}, {"Center", {-0.0106066, 0.0104253}, 1}, {"Center", {-0.0212132, 0.0208506}, 1}, {}, {"Center", {-0.0106066, -0.0104253}, 1}, {"Center", {-0.0212132, -0.0208506}, 1}, {}};
							};
							class PylonText1 //sources - ["A3_Weapons_F_Jets"]
							{
								type = "text";
								source = "static";
								text = "IR";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {"Center", 1, {-0.005, 0.02}, 1};
								right[] = {"Center", 1, {0.045, 0.02}, 1};
								down[] = {"Center", 1, {-0.005, 0.065}, 1};
							};
						};
						class Selected: Default //inherits 5 parameters from bin\config.bin/CfgMagazines/magazine_Missile_BIM9X_x1/mfdElements/Plane_Fighter_01/Draw/Default, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/magazine_Missile_BIM9X_x1/mfdElements/Plane_Fighter_01/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/magazine_Missile_BIM9X_x1/mfdElements/Plane_Fighter_01/Draw/Default/PylonText1, sources - []
							{
							};
							class Background //sources - ["A3_Weapons_F_Jets"]
							{
								type = "polygon";
								points[] = {{{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, -0.0104253}, 1}, {"Center", {0.015, 6.44463e-010}, 1}, {"Center", {0.0106066, 0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, 0.0104253}, 1}, {"Center", {-1.31134e-009, 0.0147436}, 1}, {"Center", {-0.0106066, 0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, 0.0104253}, 1}, {"Center", {-0.015, -1.75816e-010}, 1}, {"Center", {-0.0106066, -0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, -0.0104253}, 1}, {"Center", {2.62268e-009, -0.0147436}, 1}, {"Center", {0.0106066, -0.0104253}, 1}}};
							};
						};
						class Empty: Selected //inherits 5 parameters from bin\config.bin/CfgMagazines/magazine_Missile_BIM9X_x1/mfdElements/Plane_Fighter_01/Draw/Selected, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Missile_BIM9X_x1/mfdElements/Plane_Fighter_01/Draw/Selected/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Missile_BIM9X_x1/mfdElements/Plane_Fighter_01/Draw/Selected/PylonText1, sources - []
							{
							};
							class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/magazine_Missile_BIM9X_x1/mfdElements/Plane_Fighter_01/Draw/Selected/Background, sources - []
							{
							};
						};
					};
				};
				class Plane_Fighter_04 //sources - ["A3_Weapons_F_Jets"]
				{
					class Bones //sources - ["A3_Weapons_F_Jets"]
					{
						class Center //sources - ["A3_Weapons_F_Jets"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
					};
					class Draw //sources - ["A3_Weapons_F_Jets"]
					{
						class Default //sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0, 0.12, 0};
							alpha = 0.22;
							class Shape //sources - ["A3_Weapons_F_Jets"]
							{
								type = "line";
								width = 4;
								points[] = {{"Center", {0, -0.00982906}, 1}, {"Center", {0.005, -0.00851197}, 1}, {"Center", {0.00866, -0.00491453}, 1}, {"Center", {0.01, 0}, 1}, {"Center", {0.00866, 0.00491453}, 1}, {"Center", {0.005, 0.00851197}, 1}, {"Center", {0, 0.00982906}, 1}, {"Center", {-0.005, 0.00851197}, 1}, {"Center", {-0.00866, 0.00491453}, 1}, {"Center", {-0.01, 0}, 1}, {"Center", {-0.00866, -0.00491453}, 1}, {"Center", {-0.005, -0.00851197}, 1}, {"Center", {0, -0.00982906}, 1}, {}, {"Center", {0.00707107, -0.00695019}, 1}, {"Center", {0.0141421, -0.0139004}, 1}, {}, {"Center", {0.00707107, 0.00695019}, 1}, {"Center", {0.0141421, 0.0139004}, 1}, {}, {"Center", {-0.00707107, 0.00695019}, 1}, {"Center", {-0.0141421, 0.0139004}, 1}, {}, {"Center", {-0.00707107, -0.00695019}, 1}, {"Center", {-0.0141421, -0.0139004}, 1}, {}};
							};
							class PylonText1 //sources - ["A3_Weapons_F_Jets"]
							{
								type = "text";
								source = "static";
								text = "IR";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {"Center", 1, {-0.005, 0.02}, 1};
								right[] = {"Center", 1, {0.045, 0.02}, 1};
								down[] = {"Center", 1, {-0.005, 0.065}, 1};
							};
						};
						class Selected: Default //inherits 5 parameters from bin\config.bin/CfgMagazines/magazine_Missile_BIM9X_x1/mfdElements/Plane_Fighter_04/Draw/Default, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/magazine_Missile_BIM9X_x1/mfdElements/Plane_Fighter_04/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/magazine_Missile_BIM9X_x1/mfdElements/Plane_Fighter_04/Draw/Default/PylonText1, sources - []
							{
							};
							class Background //sources - ["A3_Weapons_F_Jets"]
							{
								type = "polygon";
								points[] = {{{"Center", 1, {0, 0}, 1}, {"Center", {0.00707107, -0.00695019}, 1}, {"Center", {0.01, 4.29642e-010}, 1}, {"Center", {0.00707107, 0.00695019}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {0.00707107, 0.00695019}, 1}, {"Center", {-8.74228e-010, 0.00982906}, 1}, {"Center", {-0.00707107, 0.00695019}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.00707107, 0.00695019}, 1}, {"Center", {-0.01, -1.1721e-010}, 1}, {"Center", {-0.00707107, -0.00695019}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.00707107, -0.00695019}, 1}, {"Center", {1.74846e-009, -0.00982906}, 1}, {"Center", {0.00707107, -0.00695019}, 1}}};
							};
						};
						class Empty: Selected //inherits 5 parameters from bin\config.bin/CfgMagazines/magazine_Missile_BIM9X_x1/mfdElements/Plane_Fighter_04/Draw/Selected, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Missile_BIM9X_x1/mfdElements/Plane_Fighter_04/Draw/Selected/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Missile_BIM9X_x1/mfdElements/Plane_Fighter_04/Draw/Selected/PylonText1, sources - []
							{
							};
							class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/magazine_Missile_BIM9X_x1/mfdElements/Plane_Fighter_04/Draw/Selected/Background, sources - []
							{
							};
						};
					};
				};
			};
		};
		class magazine_Missile_AGM_02_x1: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F_Jets"]
		{
			scope = 2;
			displayName = "Macer II AGM x1";
			displayNameShort = "AG";
			descriptionShort = "Macer II AGM missile";
			ammo = "Missile_AGM_02_F";
			initSpeed = 0;
			maxLeadSpeed = 60;
			sound[] = {"", 1, 1};
			reloadSound[] = {"", 0.000316228, 1};
			count = 1;
			nameSound = "missiles";
			class mfdElements //sources - ["A3_Weapons_F_Jets"]
			{
				class Plane_Fighter_01 //sources - ["A3_Weapons_F_Jets"]
				{
					class Bones //sources - ["A3_Weapons_F_Jets"]
					{
						class Center //sources - ["A3_Weapons_F_Jets"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
					};
					class Draw //sources - ["A3_Weapons_F_Jets"]
					{
						class Default //sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0, 0.12, 0};
							alpha = 0.22;
							class Shape //sources - ["A3_Weapons_F_Jets"]
							{
								type = "line";
								width = 4;
								points[] = {{"Center", {0, -0.0147436}, 1}, {"Center", {0.0075, -0.0127679}, 1}, {"Center", {0.01299, -0.00737179}, 1}, {"Center", {0.015, 0}, 1}, {"Center", {0.01299, 0.00737179}, 1}, {"Center", {0.0075, 0.0127679}, 1}, {"Center", {0, 0.0147436}, 1}, {"Center", {-0.0075, 0.0127679}, 1}, {"Center", {-0.01299, 0.00737179}, 1}, {"Center", {-0.015, 0}, 1}, {"Center", {-0.01299, -0.00737179}, 1}, {"Center", {-0.0075, -0.0127679}, 1}, {"Center", {0, -0.0147436}, 1}, {}, {"Center", {0.0106066, -0.0104253}, 1}, {"Center", {0.0212132, -0.0208506}, 1}, {}, {"Center", {0.0106066, 0.0104253}, 1}, {"Center", {0.0212132, 0.0208506}, 1}, {}, {"Center", {-0.0106066, 0.0104253}, 1}, {"Center", {-0.0212132, 0.0208506}, 1}, {}, {"Center", {-0.0106066, -0.0104253}, 1}, {"Center", {-0.0212132, -0.0208506}, 1}, {}};
							};
							class PylonText1 //sources - ["A3_Weapons_F_Jets"]
							{
								type = "text";
								source = "static";
								text = "ATGM";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {"Center", 1, {-0.005, 0.02}, 1};
								right[] = {"Center", 1, {0.045, 0.02}, 1};
								down[] = {"Center", 1, {-0.005, 0.065}, 1};
							};
						};
						class Selected: Default //inherits 5 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AGM_02_x1/mfdElements/Plane_Fighter_01/Draw/Default, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AGM_02_x1/mfdElements/Plane_Fighter_01/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AGM_02_x1/mfdElements/Plane_Fighter_01/Draw/Default/PylonText1, sources - []
							{
							};
							class Background //sources - ["A3_Weapons_F_Jets"]
							{
								type = "polygon";
								points[] = {{{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, -0.0104253}, 1}, {"Center", {0.015, 6.44463e-010}, 1}, {"Center", {0.0106066, 0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, 0.0104253}, 1}, {"Center", {-1.31134e-009, 0.0147436}, 1}, {"Center", {-0.0106066, 0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, 0.0104253}, 1}, {"Center", {-0.015, -1.75816e-010}, 1}, {"Center", {-0.0106066, -0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, -0.0104253}, 1}, {"Center", {2.62268e-009, -0.0147436}, 1}, {"Center", {0.0106066, -0.0104253}, 1}}};
							};
						};
						class Empty: Selected //inherits 5 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AGM_02_x1/mfdElements/Plane_Fighter_01/Draw/Selected, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AGM_02_x1/mfdElements/Plane_Fighter_01/Draw/Selected/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AGM_02_x1/mfdElements/Plane_Fighter_01/Draw/Selected/PylonText1, sources - []
							{
							};
							class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AGM_02_x1/mfdElements/Plane_Fighter_01/Draw/Selected/Background, sources - []
							{
							};
						};
					};
				};
				class Plane_Fighter_04 //sources - ["A3_Weapons_F_Jets"]
				{
					class Bones //sources - ["A3_Weapons_F_Jets"]
					{
						class Center //sources - ["A3_Weapons_F_Jets"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
					};
					class Draw //sources - ["A3_Weapons_F_Jets"]
					{
						class Default //sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0, 0.12, 0};
							alpha = 0.22;
							class Shape //sources - ["A3_Weapons_F_Jets"]
							{
								type = "line";
								width = 4;
								points[] = {{"Center", {0, -0.0147436}, 1}, {"Center", {0.0075, -0.0127679}, 1}, {"Center", {0.01299, -0.00737179}, 1}, {"Center", {0.015, 0}, 1}, {"Center", {0.01299, 0.00737179}, 1}, {"Center", {0.0075, 0.0127679}, 1}, {"Center", {0, 0.0147436}, 1}, {"Center", {-0.0075, 0.0127679}, 1}, {"Center", {-0.01299, 0.00737179}, 1}, {"Center", {-0.015, 0}, 1}, {"Center", {-0.01299, -0.00737179}, 1}, {"Center", {-0.0075, -0.0127679}, 1}, {"Center", {0, -0.0147436}, 1}, {}, {"Center", {0.0106066, -0.0104253}, 1}, {"Center", {0.0212132, -0.0208506}, 1}, {}, {"Center", {0.0106066, 0.0104253}, 1}, {"Center", {0.0212132, 0.0208506}, 1}, {}, {"Center", {-0.0106066, 0.0104253}, 1}, {"Center", {-0.0212132, 0.0208506}, 1}, {}, {"Center", {-0.0106066, -0.0104253}, 1}, {"Center", {-0.0212132, -0.0208506}, 1}, {}};
							};
							class PylonText1 //sources - ["A3_Weapons_F_Jets"]
							{
								type = "text";
								source = "static";
								text = "ATGM";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {"Center", 1, {-0.005, 0.02}, 1};
								right[] = {"Center", 1, {0.045, 0.02}, 1};
								down[] = {"Center", 1, {-0.005, 0.065}, 1};
							};
						};
						class Selected: Default //inherits 5 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AGM_02_x1/mfdElements/Plane_Fighter_04/Draw/Default, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AGM_02_x1/mfdElements/Plane_Fighter_04/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AGM_02_x1/mfdElements/Plane_Fighter_04/Draw/Default/PylonText1, sources - []
							{
							};
							class Background //sources - ["A3_Weapons_F_Jets"]
							{
								type = "polygon";
								points[] = {{{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, -0.0104253}, 1}, {"Center", {0.015, 6.44463e-010}, 1}, {"Center", {0.0106066, 0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, 0.0104253}, 1}, {"Center", {-1.31134e-009, 0.0147436}, 1}, {"Center", {-0.0106066, 0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, 0.0104253}, 1}, {"Center", {-0.015, -1.75816e-010}, 1}, {"Center", {-0.0106066, -0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, -0.0104253}, 1}, {"Center", {2.62268e-009, -0.0147436}, 1}, {"Center", {0.0106066, -0.0104253}, 1}}};
							};
						};
						class Empty: Selected //inherits 5 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AGM_02_x1/mfdElements/Plane_Fighter_04/Draw/Selected, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AGM_02_x1/mfdElements/Plane_Fighter_04/Draw/Selected/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AGM_02_x1/mfdElements/Plane_Fighter_04/Draw/Selected/PylonText1, sources - []
							{
							};
							class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AGM_02_x1/mfdElements/Plane_Fighter_04/Draw/Selected/Background, sources - []
							{
							};
						};
					};
				};
			};
		};
		class magazine_Bomb_GBU12_x1: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F_Jets"]
		{
			scope = 2;
			displayName = "GBU 12 LGB x1";
			descriptionShort = "GBU 12 LGB 500lb";
			displayNameShort = "Bomb";
			ammo = "Bomb_04_F";
			initSpeed = 0;
			maxLeadSpeed = 30;
			sound[] = {"", 1, 1};
			reloadSound[] = {"", 0.000316228, 1};
			count = 1;
			nameSound = "";
			class mfdElements //sources - ["A3_Weapons_F_Jets"]
			{
				class Plane_Fighter_01 //sources - ["A3_Weapons_F_Jets"]
				{
					class Bones //sources - ["A3_Weapons_F_Jets"]
					{
						class Center //sources - ["A3_Weapons_F_Jets"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
					};
					class Draw //sources - ["A3_Weapons_F_Jets"]
					{
						class Default //sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0, 0.12, 0};
							alpha = 0.22;
							class Shape //sources - ["A3_Weapons_F_Jets"]
							{
								type = "line";
								width = 4;
								points[] = {{"Center", {0, -0.0147436}, 1}, {"Center", {0.0075, -0.0127679}, 1}, {"Center", {0.01299, -0.00737179}, 1}, {"Center", {0.015, 0}, 1}, {"Center", {0.01299, 0.00737179}, 1}, {"Center", {0.0075, 0.0127679}, 1}, {"Center", {0, 0.0147436}, 1}, {"Center", {-0.0075, 0.0127679}, 1}, {"Center", {-0.01299, 0.00737179}, 1}, {"Center", {-0.015, 0}, 1}, {"Center", {-0.01299, -0.00737179}, 1}, {"Center", {-0.0075, -0.0127679}, 1}, {"Center", {0, -0.0147436}, 1}, {}, {"Center", {0.0106066, -0.0104253}, 1}, {"Center", {0.0212132, -0.0208506}, 1}, {}, {"Center", {0.0106066, 0.0104253}, 1}, {"Center", {0.0212132, 0.0208506}, 1}, {}, {"Center", {-0.0106066, 0.0104253}, 1}, {"Center", {-0.0212132, 0.0208506}, 1}, {}, {"Center", {-0.0106066, -0.0104253}, 1}, {"Center", {-0.0212132, -0.0208506}, 1}, {}};
							};
							class PylonText1 //sources - ["A3_Weapons_F_Jets"]
							{
								type = "text";
								source = "static";
								text = "LGB";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {"Center", 1, {-0.005, 0.02}, 1};
								right[] = {"Center", 1, {0.045, 0.02}, 1};
								down[] = {"Center", 1, {-0.005, 0.065}, 1};
							};
						};
						class Selected: Default //inherits 5 parameters from bin\config.bin/CfgMagazines/magazine_Bomb_GBU12_x1/mfdElements/Plane_Fighter_01/Draw/Default, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/magazine_Bomb_GBU12_x1/mfdElements/Plane_Fighter_01/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/magazine_Bomb_GBU12_x1/mfdElements/Plane_Fighter_01/Draw/Default/PylonText1, sources - []
							{
							};
							class Background //sources - ["A3_Weapons_F_Jets"]
							{
								type = "polygon";
								points[] = {{{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, -0.0104253}, 1}, {"Center", {0.015, 6.44463e-010}, 1}, {"Center", {0.0106066, 0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, 0.0104253}, 1}, {"Center", {-1.31134e-009, 0.0147436}, 1}, {"Center", {-0.0106066, 0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, 0.0104253}, 1}, {"Center", {-0.015, -1.75816e-010}, 1}, {"Center", {-0.0106066, -0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, -0.0104253}, 1}, {"Center", {2.62268e-009, -0.0147436}, 1}, {"Center", {0.0106066, -0.0104253}, 1}}};
							};
						};
						class Empty: Selected //inherits 5 parameters from bin\config.bin/CfgMagazines/magazine_Bomb_GBU12_x1/mfdElements/Plane_Fighter_01/Draw/Selected, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Bomb_GBU12_x1/mfdElements/Plane_Fighter_01/Draw/Selected/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Bomb_GBU12_x1/mfdElements/Plane_Fighter_01/Draw/Selected/PylonText1, sources - []
							{
							};
							class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/magazine_Bomb_GBU12_x1/mfdElements/Plane_Fighter_01/Draw/Selected/Background, sources - []
							{
							};
						};
					};
				};
				class Plane_Fighter_04 //sources - ["A3_Weapons_F_Jets"]
				{
					class Bones //sources - ["A3_Weapons_F_Jets"]
					{
						class Center //sources - ["A3_Weapons_F_Jets"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
					};
					class Draw //sources - ["A3_Weapons_F_Jets"]
					{
						class Default //sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0, 0.12, 0};
							alpha = 0.22;
							class Shape //sources - ["A3_Weapons_F_Jets"]
							{
								type = "line";
								width = 4;
								points[] = {{"Center", {0, -0.0147436}, 1}, {"Center", {0.0075, -0.0127679}, 1}, {"Center", {0.01299, -0.00737179}, 1}, {"Center", {0.015, 0}, 1}, {"Center", {0.01299, 0.00737179}, 1}, {"Center", {0.0075, 0.0127679}, 1}, {"Center", {0, 0.0147436}, 1}, {"Center", {-0.0075, 0.0127679}, 1}, {"Center", {-0.01299, 0.00737179}, 1}, {"Center", {-0.015, 0}, 1}, {"Center", {-0.01299, -0.00737179}, 1}, {"Center", {-0.0075, -0.0127679}, 1}, {"Center", {0, -0.0147436}, 1}, {}, {"Center", {0.0106066, -0.0104253}, 1}, {"Center", {0.0212132, -0.0208506}, 1}, {}, {"Center", {0.0106066, 0.0104253}, 1}, {"Center", {0.0212132, 0.0208506}, 1}, {}, {"Center", {-0.0106066, 0.0104253}, 1}, {"Center", {-0.0212132, 0.0208506}, 1}, {}, {"Center", {-0.0106066, -0.0104253}, 1}, {"Center", {-0.0212132, -0.0208506}, 1}, {}};
							};
							class PylonText1 //sources - ["A3_Weapons_F_Jets"]
							{
								type = "text";
								source = "static";
								text = "LGB";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {"Center", 1, {-0.005, 0.02}, 1};
								right[] = {"Center", 1, {0.045, 0.02}, 1};
								down[] = {"Center", 1, {-0.005, 0.065}, 1};
							};
						};
						class Selected: Default //inherits 5 parameters from bin\config.bin/CfgMagazines/magazine_Bomb_GBU12_x1/mfdElements/Plane_Fighter_04/Draw/Default, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/magazine_Bomb_GBU12_x1/mfdElements/Plane_Fighter_04/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/magazine_Bomb_GBU12_x1/mfdElements/Plane_Fighter_04/Draw/Default/PylonText1, sources - []
							{
							};
							class Background //sources - ["A3_Weapons_F_Jets"]
							{
								type = "polygon";
								points[] = {{{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, -0.0104253}, 1}, {"Center", {0.015, 6.44463e-010}, 1}, {"Center", {0.0106066, 0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, 0.0104253}, 1}, {"Center", {-1.31134e-009, 0.0147436}, 1}, {"Center", {-0.0106066, 0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, 0.0104253}, 1}, {"Center", {-0.015, -1.75816e-010}, 1}, {"Center", {-0.0106066, -0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, -0.0104253}, 1}, {"Center", {2.62268e-009, -0.0147436}, 1}, {"Center", {0.0106066, -0.0104253}, 1}}};
							};
						};
						class Empty: Selected //inherits 5 parameters from bin\config.bin/CfgMagazines/magazine_Bomb_GBU12_x1/mfdElements/Plane_Fighter_04/Draw/Selected, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Bomb_GBU12_x1/mfdElements/Plane_Fighter_04/Draw/Selected/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Bomb_GBU12_x1/mfdElements/Plane_Fighter_04/Draw/Selected/PylonText1, sources - []
							{
							};
							class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/magazine_Bomb_GBU12_x1/mfdElements/Plane_Fighter_04/Draw/Selected/Background, sources - []
							{
							};
						};
					};
				};
			};
		};
		class PylonMissile_Missile_AMRAAM_C_x1: magazine_Missile_AMRAAM_C_x1 //inherits 14 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_C_x1, sources - ["A3_Weapons_F_Jets"]
		{
			count = 1;
			displayName = "AMRAAM C AA x1";
			displayNameShort = "AA MR";
			descriptionShort = "AMRAAM C MR AA missile";
			model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_10_x1_F";
			hardpoints[] = {"B_AMRAAM_C", "I_AMRAAM_C"};
			pylonWeapon = "weapon_AMRAAMLauncher";
		};
		class PylonRack_Missile_AMRAAM_C_x1: magazine_Missile_AMRAAM_C_x1 //inherits 14 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_C_x1, sources - ["A3_Weapons_F_Jets"]
		{
			count = 1;
			displayName = "AMRAAM C AA x1";
			displayNameShort = "AA MR";
			descriptionShort = "AMRAAM C MR AA missile";
			model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_10_Rail_x1_F";
			hardpoints[] = {"B_AMRAAM_C_RAIL", "I_AMRAAM_C_RAIL"};
			pylonWeapon = "weapon_AMRAAMLauncher";
		};
		class PylonRack_Missile_AMRAAM_C_x2: magazine_Missile_AMRAAM_C_x1 //inherits 14 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_C_x1, sources - ["A3_Weapons_F_Jets"]
		{
			count = 2;
			displayName = "AMRAAM C AA x2";
			displayNameShort = "AA MR";
			descriptionShort = "AMRAAM C MR AA missile";
			model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_10_DualRail_x2_F";
			hardpoints[] = {"B_AMRAAM_C_DUAL_RAIL", "I_AMRAAM_C_DUAL_RAIL"};
			pylonWeapon = "weapon_AMRAAMLauncher";
		};
		class PylonMissile_Missile_AMRAAM_D_x1: magazine_Missile_AMRAAM_D_x1 //inherits 14 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_D_x1, sources - ["A3_Weapons_F_Jets"]
		{
			count = 1;
			displayName = "AMRAAM D AA x1";
			displayNameShort = "AA MR";
			descriptionShort = "AMRAAM D MR AA missile";
			model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_x1_F";
			hardpoints[] = {"B_AMRAAM_D"};
			pylonWeapon = "weapon_AMRAAMLauncher";
		};
		class PylonMissile_Missile_AMRAAM_D_INT_x1: magazine_Missile_AMRAAM_D_x1 //inherits 14 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_D_x1, sources - ["A3_Weapons_F_Jets"]
		{
			count = 1;
			displayName = "AMRAAM D AA x1";
			displayNameShort = "AA MR";
			descriptionShort = "AMRAAM D MR AA missile";
			model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_x1_F";
			hardpoints[] = {"B_AMRAAM_D_INT"};
			pylonWeapon = "weapon_AMRAAMLauncher";
			initSpeed = 0;
			initSpeedY = -25;
			initSpeedZ = 0;
		};
		class PylonRack_Missile_AMRAAM_D_x1: magazine_Missile_AMRAAM_D_x1 //inherits 14 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_D_x1, sources - ["A3_Weapons_F_Jets"]
		{
			count = 1;
			displayName = "AMRAAM D AA x1";
			displayNameShort = "AA MR";
			descriptionShort = "AMRAAM D MR AA missile";
			model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_Rail_x1_F";
			hardpoints[] = {"B_AMRAAM_D_RAIL", "I_AMRAAM_D_RAIL"};
			pylonWeapon = "weapon_AMRAAMLauncher";
			ejectSpeed[] = {1, 0, 0};
		};
		class PylonRack_Missile_AMRAAM_D_x2: magazine_Missile_AMRAAM_D_x1 //inherits 14 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AMRAAM_D_x1, sources - ["A3_Weapons_F_Jets"]
		{
			count = 2;
			displayName = "AMRAAM D AA x2";
			displayNameShort = "AA MR";
			descriptionShort = "AMRAAM D MR AA missile";
			model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_DualRail_x2_F";
			hardpoints[] = {"B_AMRAAM_D_DUAL_RAIL", "I_AMRAAM_D_DUAL_RAIL"};
			pylonWeapon = "weapon_AMRAAMLauncher";
			class mfdElements //sources - ["A3_Weapons_F_Jets"]
			{
				class Plane_Fighter_01 //sources - ["A3_Weapons_F_Jets"]
				{
					class Bones //sources - ["A3_Weapons_F_Jets"]
					{
						class Center //sources - ["A3_Weapons_F_Jets"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
						class Center2 //sources - ["A3_Weapons_F_Jets"]
						{
							type = "fixed";
							pos[] = {0, 0.05};
						};
					};
					class Draw //sources - ["A3_Weapons_F_Jets"]
					{
						class Default //sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0, 0.12, 0};
							alpha = 0.22;
							class Missile1 //sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo>=2";
								class Shape //sources - ["A3_Weapons_F_Jets"]
								{
									type = "line";
									width = 4;
									points[] = {{"Center", {0, -0.0147436}, 1}, {"Center", {0.0075, -0.0127679}, 1}, {"Center", {0.01299, -0.00737179}, 1}, {"Center", {0.015, 0}, 1}, {"Center", {0.01299, 0.00737179}, 1}, {"Center", {0.0075, 0.0127679}, 1}, {"Center", {0, 0.0147436}, 1}, {"Center", {-0.0075, 0.0127679}, 1}, {"Center", {-0.01299, 0.00737179}, 1}, {"Center", {-0.015, 0}, 1}, {"Center", {-0.01299, -0.00737179}, 1}, {"Center", {-0.0075, -0.0127679}, 1}, {"Center", {0, -0.0147436}, 1}, {}, {"Center", {0.0106066, -0.0104253}, 1}, {"Center", {0.0212132, -0.0208506}, 1}, {}, {"Center", {0.0106066, 0.0104253}, 1}, {"Center", {0.0212132, 0.0208506}, 1}, {}, {"Center", {-0.0106066, 0.0104253}, 1}, {"Center", {-0.0212132, 0.0208506}, 1}, {}, {"Center", {-0.0106066, -0.0104253}, 1}, {"Center", {-0.0212132, -0.0208506}, 1}, {}};
								};
							};
							class Missile2 //sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo>=1";
								class Shape //sources - ["A3_Weapons_F_Jets"]
								{
									type = "line";
									width = 4;
									points[] = {{"Center2", {0, -0.0147436}, 1}, {"Center2", {0.0075, -0.0127679}, 1}, {"Center2", {0.01299, -0.00737179}, 1}, {"Center2", {0.015, 0}, 1}, {"Center2", {0.01299, 0.00737179}, 1}, {"Center2", {0.0075, 0.0127679}, 1}, {"Center2", {0, 0.0147436}, 1}, {"Center2", {-0.0075, 0.0127679}, 1}, {"Center2", {-0.01299, 0.00737179}, 1}, {"Center2", {-0.015, 0}, 1}, {"Center2", {-0.01299, -0.00737179}, 1}, {"Center2", {-0.0075, -0.0127679}, 1}, {"Center2", {0, -0.0147436}, 1}, {}, {"Center2", {0.0106066, -0.0104253}, 1}, {"Center2", {0.0212132, -0.0208506}, 1}, {}, {"Center2", {0.0106066, 0.0104253}, 1}, {"Center2", {0.0212132, 0.0208506}, 1}, {}, {"Center2", {-0.0106066, 0.0104253}, 1}, {"Center2", {-0.0212132, 0.0208506}, 1}, {}, {"Center2", {-0.0106066, -0.0104253}, 1}, {"Center2", {-0.0212132, -0.0208506}, 1}, {}};
								};
							};
							class PylonText1 //sources - ["A3_Weapons_F_Jets"]
							{
								type = "text";
								source = "static";
								text = "ARH";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {"Center", 1, {-0.005, 0.07}, 1};
								right[] = {"Center", 1, {0.045, 0.07}, 1};
								down[] = {"Center", 1, {-0.005, 0.115}, 1};
							};
						};
						class Selected: Default //inherits 6 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AMRAAM_D_x2/mfdElements/Plane_Fighter_01/Draw/Default, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "(PylonSelected +  PylonAmmo/2)/2";
							alpha = 1;
							class Missile1: Missile1 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AMRAAM_D_x2/mfdElements/Plane_Fighter_01/Draw/Default/Missile1, sources - ["A3_Weapons_F_Jets"]
							{
								class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AMRAAM_D_x2/mfdElements/Plane_Fighter_01/Draw/Default/Missile1/Shape, sources - []
								{
								};
								class Background //sources - ["A3_Weapons_F_Jets"]
								{
									type = "polygon";
									points[] = {{{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, -0.0104253}, 1}, {"Center", {0.015, 6.44463e-010}, 1}, {"Center", {0.0106066, 0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, 0.0104253}, 1}, {"Center", {-1.31134e-009, 0.0147436}, 1}, {"Center", {-0.0106066, 0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, 0.0104253}, 1}, {"Center", {-0.015, -1.75816e-010}, 1}, {"Center", {-0.0106066, -0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, -0.0104253}, 1}, {"Center", {2.62268e-009, -0.0147436}, 1}, {"Center", {0.0106066, -0.0104253}, 1}}};
								};
							};
							class Missile2: Missile2 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AMRAAM_D_x2/mfdElements/Plane_Fighter_01/Draw/Default/Missile2, sources - ["A3_Weapons_F_Jets"]
							{
								class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AMRAAM_D_x2/mfdElements/Plane_Fighter_01/Draw/Default/Missile2/Shape, sources - []
								{
								};
								class Background //sources - ["A3_Weapons_F_Jets"]
								{
									type = "polygon";
									points[] = {{{"Center2", 1, {0, 0}, 1}, {"Center2", {0.0106066, -0.0104253}, 1}, {"Center2", {0.015, 6.44463e-010}, 1}, {"Center2", {0.0106066, 0.0104253}, 1}}, {{"Center2", 1, {0, 0}, 1}, {"Center2", {0.0106066, 0.0104253}, 1}, {"Center2", {-1.31134e-009, 0.0147436}, 1}, {"Center2", {-0.0106066, 0.0104253}, 1}}, {{"Center2", 1, {0, 0}, 1}, {"Center2", {-0.0106066, 0.0104253}, 1}, {"Center2", {-0.015, -1.75816e-010}, 1}, {"Center2", {-0.0106066, -0.0104253}, 1}}, {{"Center2", 1, {0, 0}, 1}, {"Center2", {-0.0106066, -0.0104253}, 1}, {"Center2", {2.62268e-009, -0.0147436}, 1}, {"Center2", {0.0106066, -0.0104253}, 1}}};
								};
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AMRAAM_D_x2/mfdElements/Plane_Fighter_01/Draw/Default/PylonText1, sources - []
							{
							};
						};
						class HalfEmpty: Selected //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AMRAAM_D_x2/mfdElements/Plane_Fighter_01/Draw/Selected, sources - ["A3_Weapons_F_Jets"]
						{
							alpha = 0.15;
							condition = "PylonAmmoRelative <= 1";
							color[] = {1, 0, 0, 1};
							class Missile1: Missile1 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AMRAAM_D_x2/mfdElements/Plane_Fighter_01/Draw/Selected/Missile1, sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo<=1";
								class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AMRAAM_D_x2/mfdElements/Plane_Fighter_01/Draw/Selected/Missile1/Shape, sources - []
								{
								};
								class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AMRAAM_D_x2/mfdElements/Plane_Fighter_01/Draw/Selected/Missile1/Background, sources - []
								{
								};
							};
							class Missile2: Missile2 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AMRAAM_D_x2/mfdElements/Plane_Fighter_01/Draw/Selected/Missile2, sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo<=0";
								class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AMRAAM_D_x2/mfdElements/Plane_Fighter_01/Draw/Selected/Missile2/Shape, sources - []
								{
								};
								class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AMRAAM_D_x2/mfdElements/Plane_Fighter_01/Draw/Selected/Missile2/Background, sources - []
								{
								};
							};
						};
						class Empty: HalfEmpty //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AMRAAM_D_x2/mfdElements/Plane_Fighter_01/Draw/HalfEmpty, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative <= 0";
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AMRAAM_D_x2/mfdElements/Plane_Fighter_01/Draw/Selected/PylonText1, sources - []
							{
							};
						};
					};
				};
				class Plane_Fighter_04 //sources - ["A3_Weapons_F_Jets"]
				{
					class Bones //sources - ["A3_Weapons_F_Jets"]
					{
						class Center //sources - ["A3_Weapons_F_Jets"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
						class Center2 //sources - ["A3_Weapons_F_Jets"]
						{
							type = "fixed";
							pos[] = {0, -0.05};
						};
					};
					class Draw //sources - ["A3_Weapons_F_Jets"]
					{
						class Default //sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0, 0.12, 0};
							alpha = 0.22;
							class Missile1 //sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo>=2";
								class Shape //sources - ["A3_Weapons_F_Jets"]
								{
									type = "line";
									width = 4;
									points[] = {{"Center", {0, -0.00982906}, 1}, {"Center", {0.005, -0.00851197}, 1}, {"Center", {0.00866, -0.00491453}, 1}, {"Center", {0.01, 0}, 1}, {"Center", {0.00866, 0.00491453}, 1}, {"Center", {0.005, 0.00851197}, 1}, {"Center", {0, 0.00982906}, 1}, {"Center", {-0.005, 0.00851197}, 1}, {"Center", {-0.00866, 0.00491453}, 1}, {"Center", {-0.01, 0}, 1}, {"Center", {-0.00866, -0.00491453}, 1}, {"Center", {-0.005, -0.00851197}, 1}, {"Center", {0, -0.00982906}, 1}, {}, {"Center", {0.00707107, -0.00695019}, 1}, {"Center", {0.0141421, -0.0139004}, 1}, {}, {"Center", {0.00707107, 0.00695019}, 1}, {"Center", {0.0141421, 0.0139004}, 1}, {}, {"Center", {-0.00707107, 0.00695019}, 1}, {"Center", {-0.0141421, 0.0139004}, 1}, {}, {"Center", {-0.00707107, -0.00695019}, 1}, {"Center", {-0.0141421, -0.0139004}, 1}, {}};
								};
							};
							class Missile2 //sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo>=1";
								class Shape //sources - ["A3_Weapons_F_Jets"]
								{
									type = "line";
									width = 4;
									points[] = {{"Center2", {0, -0.00982906}, 1}, {"Center2", {0.005, -0.00851197}, 1}, {"Center2", {0.00866, -0.00491453}, 1}, {"Center2", {0.01, 0}, 1}, {"Center2", {0.00866, 0.00491453}, 1}, {"Center2", {0.005, 0.00851197}, 1}, {"Center2", {0, 0.00982906}, 1}, {"Center2", {-0.005, 0.00851197}, 1}, {"Center2", {-0.00866, 0.00491453}, 1}, {"Center2", {-0.01, 0}, 1}, {"Center2", {-0.00866, -0.00491453}, 1}, {"Center2", {-0.005, -0.00851197}, 1}, {"Center2", {0, -0.00982906}, 1}, {}, {"Center2", {0.00707107, -0.00695019}, 1}, {"Center2", {0.0141421, -0.0139004}, 1}, {}, {"Center2", {0.00707107, 0.00695019}, 1}, {"Center2", {0.0141421, 0.0139004}, 1}, {}, {"Center2", {-0.00707107, 0.00695019}, 1}, {"Center2", {-0.0141421, 0.0139004}, 1}, {}, {"Center2", {-0.00707107, -0.00695019}, 1}, {"Center2", {-0.0141421, -0.0139004}, 1}, {}};
								};
							};
							class PylonText1 //sources - ["A3_Weapons_F_Jets"]
							{
								type = "text";
								source = "static";
								text = "ARH";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {"Center", 1, {-0.005, 0.02}, 1};
								right[] = {"Center", 1, {0.045, 0.02}, 1};
								down[] = {"Center", 1, {-0.005, 0.065}, 1};
							};
						};
						class Selected: Default //inherits 6 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AMRAAM_D_x2/mfdElements/Plane_Fighter_04/Draw/Default, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "(PylonSelected +  PylonAmmo/2)/2";
							alpha = 1;
							class Missile1: Missile1 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AMRAAM_D_x2/mfdElements/Plane_Fighter_04/Draw/Default/Missile1, sources - ["A3_Weapons_F_Jets"]
							{
								class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AMRAAM_D_x2/mfdElements/Plane_Fighter_04/Draw/Default/Missile1/Shape, sources - []
								{
								};
								class Background //sources - ["A3_Weapons_F_Jets"]
								{
									type = "polygon";
									points[] = {{{"Center", 1, {0, 0}, 1}, {"Center", {0.00707107, -0.00695019}, 1}, {"Center", {0.01, 4.29642e-010}, 1}, {"Center", {0.00707107, 0.00695019}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {0.00707107, 0.00695019}, 1}, {"Center", {-8.74228e-010, 0.00982906}, 1}, {"Center", {-0.00707107, 0.00695019}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.00707107, 0.00695019}, 1}, {"Center", {-0.01, -1.1721e-010}, 1}, {"Center", {-0.00707107, -0.00695019}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.00707107, -0.00695019}, 1}, {"Center", {1.74846e-009, -0.00982906}, 1}, {"Center", {0.00707107, -0.00695019}, 1}}};
								};
							};
							class Missile2: Missile2 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AMRAAM_D_x2/mfdElements/Plane_Fighter_04/Draw/Default/Missile2, sources - ["A3_Weapons_F_Jets"]
							{
								class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AMRAAM_D_x2/mfdElements/Plane_Fighter_04/Draw/Default/Missile2/Shape, sources - []
								{
								};
								class Background //sources - ["A3_Weapons_F_Jets"]
								{
									type = "polygon";
									points[] = {{{"Center2", 1, {0, 0}, 1}, {"Center2", {0.00707107, -0.00695019}, 1}, {"Center2", {0.01, 4.29642e-010}, 1}, {"Center2", {0.00707107, 0.00695019}, 1}}, {{"Center2", 1, {0, 0}, 1}, {"Center2", {0.00707107, 0.00695019}, 1}, {"Center2", {-8.74228e-010, 0.00982906}, 1}, {"Center2", {-0.00707107, 0.00695019}, 1}}, {{"Center2", 1, {0, 0}, 1}, {"Center2", {-0.00707107, 0.00695019}, 1}, {"Center2", {-0.01, -1.1721e-010}, 1}, {"Center2", {-0.00707107, -0.00695019}, 1}}, {{"Center2", 1, {0, 0}, 1}, {"Center2", {-0.00707107, -0.00695019}, 1}, {"Center2", {1.74846e-009, -0.00982906}, 1}, {"Center2", {0.00707107, -0.00695019}, 1}}};
								};
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AMRAAM_D_x2/mfdElements/Plane_Fighter_04/Draw/Default/PylonText1, sources - []
							{
							};
						};
						class HalfEmpty: Selected //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AMRAAM_D_x2/mfdElements/Plane_Fighter_04/Draw/Selected, sources - ["A3_Weapons_F_Jets"]
						{
							alpha = 0.15;
							condition = "PylonAmmoRelative <= 1";
							color[] = {1, 0, 0, 1};
							class Missile1: Missile1 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AMRAAM_D_x2/mfdElements/Plane_Fighter_04/Draw/Selected/Missile1, sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo<=1";
								class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AMRAAM_D_x2/mfdElements/Plane_Fighter_04/Draw/Selected/Missile1/Shape, sources - []
								{
								};
								class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AMRAAM_D_x2/mfdElements/Plane_Fighter_04/Draw/Selected/Missile1/Background, sources - []
								{
								};
							};
							class Missile2: Missile2 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AMRAAM_D_x2/mfdElements/Plane_Fighter_04/Draw/Selected/Missile2, sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo<=0";
								class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AMRAAM_D_x2/mfdElements/Plane_Fighter_04/Draw/Selected/Missile2/Shape, sources - []
								{
								};
								class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AMRAAM_D_x2/mfdElements/Plane_Fighter_04/Draw/Selected/Missile2/Background, sources - []
								{
								};
							};
						};
						class Empty: HalfEmpty //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AMRAAM_D_x2/mfdElements/Plane_Fighter_04/Draw/HalfEmpty, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative <= 0";
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AMRAAM_D_x2/mfdElements/Plane_Fighter_04/Draw/Selected/PylonText1, sources - []
							{
							};
						};
					};
				};
			};
		};
		class PylonMissile_Missile_BIM9X_x1: magazine_Missile_BIM9X_x1 //inherits 12 parameters from bin\config.bin/CfgMagazines/magazine_Missile_BIM9X_x1, sources - ["A3_Weapons_F_Jets"]
		{
			count = 1;
			displayName = "BIM 9X AA x1";
			displayNameShort = "AA SR";
			descriptionShort = "BIM 9X SR AA missile";
			model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_08_x1_F";
			hardpoints[] = {"B_BIM9X", "I_BIM9X"};
			pylonWeapon = "weapon_BIM9xLauncher";
			ejectSpeed[] = {1, 0, 0};
		};
		class PylonRack_Missile_BIM9X_x1: magazine_Missile_BIM9X_x1 //inherits 12 parameters from bin\config.bin/CfgMagazines/magazine_Missile_BIM9X_x1, sources - ["A3_Weapons_F_Jets"]
		{
			count = 1;
			displayName = "BIM 9X AA x1";
			displayNameShort = "AA SR";
			descriptionShort = "BIM 9X SR AA missile";
			model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_08_Rail_x1_F";
			hardpoints[] = {"B_BIM9X_RAIL", "I_BIM9X_RAIL"};
			pylonWeapon = "weapon_BIM9xLauncher";
			ejectSpeed[] = {1, 0, 0};
		};
		class PylonRack_Missile_BIM9X_x2: magazine_Missile_BIM9X_x1 //inherits 12 parameters from bin\config.bin/CfgMagazines/magazine_Missile_BIM9X_x1, sources - ["A3_Weapons_F_Jets"]
		{
			count = 2;
			displayName = "BIM 9X AA x2";
			displayNameShort = "AA SR";
			descriptionShort = "BIM 9X SR AA missile";
			model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_08_DualRail_x2_F";
			hardpoints[] = {"B_BIM9X_DUAL_RAIL", "I_BIM9X_DUAL_RAIL"};
			pylonWeapon = "weapon_BIM9xLauncher";
			class mfdElements //sources - ["A3_Weapons_F_Jets"]
			{
				class Plane_Fighter_01 //sources - ["A3_Weapons_F_Jets"]
				{
					class Bones //sources - ["A3_Weapons_F_Jets"]
					{
						class Center //sources - ["A3_Weapons_F_Jets"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
						class Center2 //sources - ["A3_Weapons_F_Jets"]
						{
							type = "fixed";
							pos[] = {0, 0.05};
						};
					};
					class Draw //sources - ["A3_Weapons_F_Jets"]
					{
						class Default //sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0, 0.12, 0};
							alpha = 0.22;
							class Missile1 //sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo>=2";
								class Shape //sources - ["A3_Weapons_F_Jets"]
								{
									type = "line";
									width = 4;
									points[] = {{"Center", {0, -0.0147436}, 1}, {"Center", {0.0075, -0.0127679}, 1}, {"Center", {0.01299, -0.00737179}, 1}, {"Center", {0.015, 0}, 1}, {"Center", {0.01299, 0.00737179}, 1}, {"Center", {0.0075, 0.0127679}, 1}, {"Center", {0, 0.0147436}, 1}, {"Center", {-0.0075, 0.0127679}, 1}, {"Center", {-0.01299, 0.00737179}, 1}, {"Center", {-0.015, 0}, 1}, {"Center", {-0.01299, -0.00737179}, 1}, {"Center", {-0.0075, -0.0127679}, 1}, {"Center", {0, -0.0147436}, 1}, {}, {"Center", {0.0106066, -0.0104253}, 1}, {"Center", {0.0212132, -0.0208506}, 1}, {}, {"Center", {0.0106066, 0.0104253}, 1}, {"Center", {0.0212132, 0.0208506}, 1}, {}, {"Center", {-0.0106066, 0.0104253}, 1}, {"Center", {-0.0212132, 0.0208506}, 1}, {}, {"Center", {-0.0106066, -0.0104253}, 1}, {"Center", {-0.0212132, -0.0208506}, 1}, {}};
								};
							};
							class Missile2 //sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo>=1";
								class Shape //sources - ["A3_Weapons_F_Jets"]
								{
									type = "line";
									width = 4;
									points[] = {{"Center2", {0, -0.0147436}, 1}, {"Center2", {0.0075, -0.0127679}, 1}, {"Center2", {0.01299, -0.00737179}, 1}, {"Center2", {0.015, 0}, 1}, {"Center2", {0.01299, 0.00737179}, 1}, {"Center2", {0.0075, 0.0127679}, 1}, {"Center2", {0, 0.0147436}, 1}, {"Center2", {-0.0075, 0.0127679}, 1}, {"Center2", {-0.01299, 0.00737179}, 1}, {"Center2", {-0.015, 0}, 1}, {"Center2", {-0.01299, -0.00737179}, 1}, {"Center2", {-0.0075, -0.0127679}, 1}, {"Center2", {0, -0.0147436}, 1}, {}, {"Center2", {0.0106066, -0.0104253}, 1}, {"Center2", {0.0212132, -0.0208506}, 1}, {}, {"Center2", {0.0106066, 0.0104253}, 1}, {"Center2", {0.0212132, 0.0208506}, 1}, {}, {"Center2", {-0.0106066, 0.0104253}, 1}, {"Center2", {-0.0212132, 0.0208506}, 1}, {}, {"Center2", {-0.0106066, -0.0104253}, 1}, {"Center2", {-0.0212132, -0.0208506}, 1}, {}};
								};
							};
							class PylonText1 //sources - ["A3_Weapons_F_Jets"]
							{
								type = "text";
								source = "static";
								text = "IR";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {"Center", 1, {-0.005, 0.07}, 1};
								right[] = {"Center", 1, {0.045, 0.07}, 1};
								down[] = {"Center", 1, {-0.005, 0.115}, 1};
							};
						};
						class Selected: Default //inherits 6 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_BIM9X_x2/mfdElements/Plane_Fighter_01/Draw/Default, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "(PylonSelected +  PylonAmmo/2)/2";
							alpha = 1;
							class Missile1: Missile1 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_BIM9X_x2/mfdElements/Plane_Fighter_01/Draw/Default/Missile1, sources - ["A3_Weapons_F_Jets"]
							{
								class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_BIM9X_x2/mfdElements/Plane_Fighter_01/Draw/Default/Missile1/Shape, sources - []
								{
								};
								class Background //sources - ["A3_Weapons_F_Jets"]
								{
									type = "polygon";
									points[] = {{{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, -0.0104253}, 1}, {"Center", {0.015, 6.44463e-010}, 1}, {"Center", {0.0106066, 0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, 0.0104253}, 1}, {"Center", {-1.31134e-009, 0.0147436}, 1}, {"Center", {-0.0106066, 0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, 0.0104253}, 1}, {"Center", {-0.015, -1.75816e-010}, 1}, {"Center", {-0.0106066, -0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, -0.0104253}, 1}, {"Center", {2.62268e-009, -0.0147436}, 1}, {"Center", {0.0106066, -0.0104253}, 1}}};
								};
							};
							class Missile2: Missile2 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_BIM9X_x2/mfdElements/Plane_Fighter_01/Draw/Default/Missile2, sources - ["A3_Weapons_F_Jets"]
							{
								class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_BIM9X_x2/mfdElements/Plane_Fighter_01/Draw/Default/Missile2/Shape, sources - []
								{
								};
								class Background //sources - ["A3_Weapons_F_Jets"]
								{
									type = "polygon";
									points[] = {{{"Center2", 1, {0, 0}, 1}, {"Center2", {0.0106066, -0.0104253}, 1}, {"Center2", {0.015, 6.44463e-010}, 1}, {"Center2", {0.0106066, 0.0104253}, 1}}, {{"Center2", 1, {0, 0}, 1}, {"Center2", {0.0106066, 0.0104253}, 1}, {"Center2", {-1.31134e-009, 0.0147436}, 1}, {"Center2", {-0.0106066, 0.0104253}, 1}}, {{"Center2", 1, {0, 0}, 1}, {"Center2", {-0.0106066, 0.0104253}, 1}, {"Center2", {-0.015, -1.75816e-010}, 1}, {"Center2", {-0.0106066, -0.0104253}, 1}}, {{"Center2", 1, {0, 0}, 1}, {"Center2", {-0.0106066, -0.0104253}, 1}, {"Center2", {2.62268e-009, -0.0147436}, 1}, {"Center2", {0.0106066, -0.0104253}, 1}}};
								};
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_BIM9X_x2/mfdElements/Plane_Fighter_01/Draw/Default/PylonText1, sources - []
							{
							};
						};
						class HalfEmpty: Selected //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_BIM9X_x2/mfdElements/Plane_Fighter_01/Draw/Selected, sources - ["A3_Weapons_F_Jets"]
						{
							alpha = 0.15;
							condition = "PylonAmmoRelative <= 1";
							color[] = {1, 0, 0, 1};
							class Missile1: Missile1 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_BIM9X_x2/mfdElements/Plane_Fighter_01/Draw/Selected/Missile1, sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo<=1";
								class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_BIM9X_x2/mfdElements/Plane_Fighter_01/Draw/Selected/Missile1/Shape, sources - []
								{
								};
								class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_BIM9X_x2/mfdElements/Plane_Fighter_01/Draw/Selected/Missile1/Background, sources - []
								{
								};
							};
							class Missile2: Missile2 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_BIM9X_x2/mfdElements/Plane_Fighter_01/Draw/Selected/Missile2, sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo<=0";
								class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_BIM9X_x2/mfdElements/Plane_Fighter_01/Draw/Selected/Missile2/Shape, sources - []
								{
								};
								class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_BIM9X_x2/mfdElements/Plane_Fighter_01/Draw/Selected/Missile2/Background, sources - []
								{
								};
							};
						};
						class Empty: HalfEmpty //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_BIM9X_x2/mfdElements/Plane_Fighter_01/Draw/HalfEmpty, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative <= 0";
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_BIM9X_x2/mfdElements/Plane_Fighter_01/Draw/Selected/PylonText1, sources - []
							{
							};
						};
					};
				};
				class Plane_Fighter_04 //sources - ["A3_Weapons_F_Jets"]
				{
					class Bones //sources - ["A3_Weapons_F_Jets"]
					{
						class Center //sources - ["A3_Weapons_F_Jets"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
						class Center2 //sources - ["A3_Weapons_F_Jets"]
						{
							type = "fixed";
							pos[] = {0, -0.05};
						};
					};
					class Draw //sources - ["A3_Weapons_F_Jets"]
					{
						class Default //sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0, 0.12, 0};
							alpha = 0.22;
							class Missile1 //sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo>=2";
								class Shape //sources - ["A3_Weapons_F_Jets"]
								{
									type = "line";
									width = 4;
									points[] = {{"Center", {0, -0.00982906}, 1}, {"Center", {0.005, -0.00851197}, 1}, {"Center", {0.00866, -0.00491453}, 1}, {"Center", {0.01, 0}, 1}, {"Center", {0.00866, 0.00491453}, 1}, {"Center", {0.005, 0.00851197}, 1}, {"Center", {0, 0.00982906}, 1}, {"Center", {-0.005, 0.00851197}, 1}, {"Center", {-0.00866, 0.00491453}, 1}, {"Center", {-0.01, 0}, 1}, {"Center", {-0.00866, -0.00491453}, 1}, {"Center", {-0.005, -0.00851197}, 1}, {"Center", {0, -0.00982906}, 1}, {}, {"Center", {0.00707107, -0.00695019}, 1}, {"Center", {0.0141421, -0.0139004}, 1}, {}, {"Center", {0.00707107, 0.00695019}, 1}, {"Center", {0.0141421, 0.0139004}, 1}, {}, {"Center", {-0.00707107, 0.00695019}, 1}, {"Center", {-0.0141421, 0.0139004}, 1}, {}, {"Center", {-0.00707107, -0.00695019}, 1}, {"Center", {-0.0141421, -0.0139004}, 1}, {}};
								};
							};
							class Missile2 //sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo>=1";
								class Shape //sources - ["A3_Weapons_F_Jets"]
								{
									type = "line";
									width = 4;
									points[] = {{"Center2", {0, -0.00982906}, 1}, {"Center2", {0.005, -0.00851197}, 1}, {"Center2", {0.00866, -0.00491453}, 1}, {"Center2", {0.01, 0}, 1}, {"Center2", {0.00866, 0.00491453}, 1}, {"Center2", {0.005, 0.00851197}, 1}, {"Center2", {0, 0.00982906}, 1}, {"Center2", {-0.005, 0.00851197}, 1}, {"Center2", {-0.00866, 0.00491453}, 1}, {"Center2", {-0.01, 0}, 1}, {"Center2", {-0.00866, -0.00491453}, 1}, {"Center2", {-0.005, -0.00851197}, 1}, {"Center2", {0, -0.00982906}, 1}, {}, {"Center2", {0.00707107, -0.00695019}, 1}, {"Center2", {0.0141421, -0.0139004}, 1}, {}, {"Center2", {0.00707107, 0.00695019}, 1}, {"Center2", {0.0141421, 0.0139004}, 1}, {}, {"Center2", {-0.00707107, 0.00695019}, 1}, {"Center2", {-0.0141421, 0.0139004}, 1}, {}, {"Center2", {-0.00707107, -0.00695019}, 1}, {"Center2", {-0.0141421, -0.0139004}, 1}, {}};
								};
							};
							class PylonText1 //sources - ["A3_Weapons_F_Jets"]
							{
								type = "text";
								source = "static";
								text = "IR";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {"Center", 1, {-0.005, 0.02}, 1};
								right[] = {"Center", 1, {0.045, 0.02}, 1};
								down[] = {"Center", 1, {-0.005, 0.065}, 1};
							};
						};
						class Selected: Default //inherits 6 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_BIM9X_x2/mfdElements/Plane_Fighter_04/Draw/Default, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "(PylonSelected +  PylonAmmo/2)/2";
							alpha = 1;
							class Missile1: Missile1 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_BIM9X_x2/mfdElements/Plane_Fighter_04/Draw/Default/Missile1, sources - ["A3_Weapons_F_Jets"]
							{
								class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_BIM9X_x2/mfdElements/Plane_Fighter_04/Draw/Default/Missile1/Shape, sources - []
								{
								};
								class Background //sources - ["A3_Weapons_F_Jets"]
								{
									type = "polygon";
									points[] = {{{"Center", 1, {0, 0}, 1}, {"Center", {0.00707107, -0.00695019}, 1}, {"Center", {0.01, 4.29642e-010}, 1}, {"Center", {0.00707107, 0.00695019}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {0.00707107, 0.00695019}, 1}, {"Center", {-8.74228e-010, 0.00982906}, 1}, {"Center", {-0.00707107, 0.00695019}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.00707107, 0.00695019}, 1}, {"Center", {-0.01, -1.1721e-010}, 1}, {"Center", {-0.00707107, -0.00695019}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.00707107, -0.00695019}, 1}, {"Center", {1.74846e-009, -0.00982906}, 1}, {"Center", {0.00707107, -0.00695019}, 1}}};
								};
							};
							class Missile2: Missile2 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_BIM9X_x2/mfdElements/Plane_Fighter_04/Draw/Default/Missile2, sources - ["A3_Weapons_F_Jets"]
							{
								class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_BIM9X_x2/mfdElements/Plane_Fighter_04/Draw/Default/Missile2/Shape, sources - []
								{
								};
								class Background //sources - ["A3_Weapons_F_Jets"]
								{
									type = "polygon";
									points[] = {{{"Center2", 1, {0, 0}, 1}, {"Center2", {0.00707107, -0.00695019}, 1}, {"Center2", {0.01, 4.29642e-010}, 1}, {"Center2", {0.00707107, 0.00695019}, 1}}, {{"Center2", 1, {0, 0}, 1}, {"Center2", {0.00707107, 0.00695019}, 1}, {"Center2", {-8.74228e-010, 0.00982906}, 1}, {"Center2", {-0.00707107, 0.00695019}, 1}}, {{"Center2", 1, {0, 0}, 1}, {"Center2", {-0.00707107, 0.00695019}, 1}, {"Center2", {-0.01, -1.1721e-010}, 1}, {"Center2", {-0.00707107, -0.00695019}, 1}}, {{"Center2", 1, {0, 0}, 1}, {"Center2", {-0.00707107, -0.00695019}, 1}, {"Center2", {1.74846e-009, -0.00982906}, 1}, {"Center2", {0.00707107, -0.00695019}, 1}}};
								};
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_BIM9X_x2/mfdElements/Plane_Fighter_04/Draw/Default/PylonText1, sources - []
							{
							};
						};
						class HalfEmpty: Selected //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_BIM9X_x2/mfdElements/Plane_Fighter_04/Draw/Selected, sources - ["A3_Weapons_F_Jets"]
						{
							alpha = 0.15;
							condition = "PylonAmmoRelative <= 1";
							color[] = {1, 0, 0, 1};
							class Missile1: Missile1 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_BIM9X_x2/mfdElements/Plane_Fighter_04/Draw/Selected/Missile1, sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo<=1";
								class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_BIM9X_x2/mfdElements/Plane_Fighter_04/Draw/Selected/Missile1/Shape, sources - []
								{
								};
								class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_BIM9X_x2/mfdElements/Plane_Fighter_04/Draw/Selected/Missile1/Background, sources - []
								{
								};
							};
							class Missile2: Missile2 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_BIM9X_x2/mfdElements/Plane_Fighter_04/Draw/Selected/Missile2, sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo<=0";
								class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_BIM9X_x2/mfdElements/Plane_Fighter_04/Draw/Selected/Missile2/Shape, sources - []
								{
								};
								class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_BIM9X_x2/mfdElements/Plane_Fighter_04/Draw/Selected/Missile2/Background, sources - []
								{
								};
							};
						};
						class Empty: HalfEmpty //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_BIM9X_x2/mfdElements/Plane_Fighter_04/Draw/HalfEmpty, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative <= 0";
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_BIM9X_x2/mfdElements/Plane_Fighter_04/Draw/Selected/PylonText1, sources - []
							{
							};
						};
					};
				};
			};
		};
		class PylonMissile_Missile_AGM_02_x1: magazine_Missile_AGM_02_x1 //inherits 12 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AGM_02_x1, sources - ["A3_Weapons_F_Jets"]
		{
			count = 1;
			displayName = "Macer II AGM x1";
			displayNameShort = "AG";
			descriptionShort = "Macer II AGM missile";
			model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_x1_F";
			hardpoints[] = {"B_AGM65", "I_AGM65"};
			pylonWeapon = "weapon_AGM_65Launcher";
		};
		class PylonMissile_Missile_AGM_02_x2: magazine_Missile_AGM_02_x1 //inherits 12 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AGM_02_x1, sources - ["A3_Weapons_F_Jets"]
		{
			count = 2;
			displayName = "Macer II AGM x2";
			displayNameShort = "AG";
			descriptionShort = "Macer II AGM missile";
			model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_x2_F";
			hardpoints[] = {"B_AGM65_DUAL", "I_AGM65_DUAL"};
			pylonWeapon = "weapon_AGM_65Launcher";
			class mfdElements //sources - ["A3_Weapons_F_Jets"]
			{
				class Plane_Fighter_01 //sources - ["A3_Weapons_F_Jets"]
				{
					class Bones //sources - ["A3_Weapons_F_Jets"]
					{
						class Center //sources - ["A3_Weapons_F_Jets"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
						class Center2 //sources - ["A3_Weapons_F_Jets"]
						{
							type = "fixed";
							pos[] = {0, 0.05};
						};
					};
					class Draw //sources - ["A3_Weapons_F_Jets"]
					{
						class Default //sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0, 0.12, 0};
							alpha = 0.22;
							class Missile1 //sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo>=2";
								class Shape //sources - ["A3_Weapons_F_Jets"]
								{
									type = "line";
									width = 4;
									points[] = {{"Center", {0, -0.0147436}, 1}, {"Center", {0.0075, -0.0127679}, 1}, {"Center", {0.01299, -0.00737179}, 1}, {"Center", {0.015, 0}, 1}, {"Center", {0.01299, 0.00737179}, 1}, {"Center", {0.0075, 0.0127679}, 1}, {"Center", {0, 0.0147436}, 1}, {"Center", {-0.0075, 0.0127679}, 1}, {"Center", {-0.01299, 0.00737179}, 1}, {"Center", {-0.015, 0}, 1}, {"Center", {-0.01299, -0.00737179}, 1}, {"Center", {-0.0075, -0.0127679}, 1}, {"Center", {0, -0.0147436}, 1}, {}, {"Center", {0.0106066, -0.0104253}, 1}, {"Center", {0.0212132, -0.0208506}, 1}, {}, {"Center", {0.0106066, 0.0104253}, 1}, {"Center", {0.0212132, 0.0208506}, 1}, {}, {"Center", {-0.0106066, 0.0104253}, 1}, {"Center", {-0.0212132, 0.0208506}, 1}, {}, {"Center", {-0.0106066, -0.0104253}, 1}, {"Center", {-0.0212132, -0.0208506}, 1}, {}};
								};
							};
							class Missile2 //sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo>=1";
								class Shape //sources - ["A3_Weapons_F_Jets"]
								{
									type = "line";
									width = 4;
									points[] = {{"Center2", {0, -0.0147436}, 1}, {"Center2", {0.0075, -0.0127679}, 1}, {"Center2", {0.01299, -0.00737179}, 1}, {"Center2", {0.015, 0}, 1}, {"Center2", {0.01299, 0.00737179}, 1}, {"Center2", {0.0075, 0.0127679}, 1}, {"Center2", {0, 0.0147436}, 1}, {"Center2", {-0.0075, 0.0127679}, 1}, {"Center2", {-0.01299, 0.00737179}, 1}, {"Center2", {-0.015, 0}, 1}, {"Center2", {-0.01299, -0.00737179}, 1}, {"Center2", {-0.0075, -0.0127679}, 1}, {"Center2", {0, -0.0147436}, 1}, {}, {"Center2", {0.0106066, -0.0104253}, 1}, {"Center2", {0.0212132, -0.0208506}, 1}, {}, {"Center2", {0.0106066, 0.0104253}, 1}, {"Center2", {0.0212132, 0.0208506}, 1}, {}, {"Center2", {-0.0106066, 0.0104253}, 1}, {"Center2", {-0.0212132, 0.0208506}, 1}, {}, {"Center2", {-0.0106066, -0.0104253}, 1}, {"Center2", {-0.0212132, -0.0208506}, 1}, {}};
								};
							};
							class PylonText1 //sources - ["A3_Weapons_F_Jets"]
							{
								type = "text";
								source = "static";
								text = "ATGM";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {"Center", 1, {-0.005, 0.07}, 1};
								right[] = {"Center", 1, {0.045, 0.07}, 1};
								down[] = {"Center", 1, {-0.005, 0.115}, 1};
							};
						};
						class Selected: Default //inherits 6 parameters from bin\config.bin/CfgMagazines/PylonMissile_Missile_AGM_02_x2/mfdElements/Plane_Fighter_01/Draw/Default, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "(PylonSelected +  PylonAmmo/2)/2";
							alpha = 1;
							class Missile1: Missile1 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonMissile_Missile_AGM_02_x2/mfdElements/Plane_Fighter_01/Draw/Default/Missile1, sources - ["A3_Weapons_F_Jets"]
							{
								class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonMissile_Missile_AGM_02_x2/mfdElements/Plane_Fighter_01/Draw/Default/Missile1/Shape, sources - []
								{
								};
								class Background //sources - ["A3_Weapons_F_Jets"]
								{
									type = "polygon";
									points[] = {{{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, -0.0104253}, 1}, {"Center", {0.015, 6.44463e-010}, 1}, {"Center", {0.0106066, 0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, 0.0104253}, 1}, {"Center", {-1.31134e-009, 0.0147436}, 1}, {"Center", {-0.0106066, 0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, 0.0104253}, 1}, {"Center", {-0.015, -1.75816e-010}, 1}, {"Center", {-0.0106066, -0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, -0.0104253}, 1}, {"Center", {2.62268e-009, -0.0147436}, 1}, {"Center", {0.0106066, -0.0104253}, 1}}};
								};
							};
							class Missile2: Missile2 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonMissile_Missile_AGM_02_x2/mfdElements/Plane_Fighter_01/Draw/Default/Missile2, sources - ["A3_Weapons_F_Jets"]
							{
								class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonMissile_Missile_AGM_02_x2/mfdElements/Plane_Fighter_01/Draw/Default/Missile2/Shape, sources - []
								{
								};
								class Background //sources - ["A3_Weapons_F_Jets"]
								{
									type = "polygon";
									points[] = {{{"Center2", 1, {0, 0}, 1}, {"Center2", {0.0106066, -0.0104253}, 1}, {"Center2", {0.015, 6.44463e-010}, 1}, {"Center2", {0.0106066, 0.0104253}, 1}}, {{"Center2", 1, {0, 0}, 1}, {"Center2", {0.0106066, 0.0104253}, 1}, {"Center2", {-1.31134e-009, 0.0147436}, 1}, {"Center2", {-0.0106066, 0.0104253}, 1}}, {{"Center2", 1, {0, 0}, 1}, {"Center2", {-0.0106066, 0.0104253}, 1}, {"Center2", {-0.015, -1.75816e-010}, 1}, {"Center2", {-0.0106066, -0.0104253}, 1}}, {{"Center2", 1, {0, 0}, 1}, {"Center2", {-0.0106066, -0.0104253}, 1}, {"Center2", {2.62268e-009, -0.0147436}, 1}, {"Center2", {0.0106066, -0.0104253}, 1}}};
								};
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonMissile_Missile_AGM_02_x2/mfdElements/Plane_Fighter_01/Draw/Default/PylonText1, sources - []
							{
							};
						};
						class HalfEmpty: Selected //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonMissile_Missile_AGM_02_x2/mfdElements/Plane_Fighter_01/Draw/Selected, sources - ["A3_Weapons_F_Jets"]
						{
							alpha = 0.15;
							condition = "PylonAmmoRelative <= 1";
							color[] = {1, 0, 0, 1};
							class Missile1: Missile1 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonMissile_Missile_AGM_02_x2/mfdElements/Plane_Fighter_01/Draw/Selected/Missile1, sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo<=1";
								class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonMissile_Missile_AGM_02_x2/mfdElements/Plane_Fighter_01/Draw/Selected/Missile1/Shape, sources - []
								{
								};
								class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonMissile_Missile_AGM_02_x2/mfdElements/Plane_Fighter_01/Draw/Selected/Missile1/Background, sources - []
								{
								};
							};
							class Missile2: Missile2 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonMissile_Missile_AGM_02_x2/mfdElements/Plane_Fighter_01/Draw/Selected/Missile2, sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo<=0";
								class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonMissile_Missile_AGM_02_x2/mfdElements/Plane_Fighter_01/Draw/Selected/Missile2/Shape, sources - []
								{
								};
								class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonMissile_Missile_AGM_02_x2/mfdElements/Plane_Fighter_01/Draw/Selected/Missile2/Background, sources - []
								{
								};
							};
						};
						class Empty: HalfEmpty //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonMissile_Missile_AGM_02_x2/mfdElements/Plane_Fighter_01/Draw/HalfEmpty, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative <= 0";
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonMissile_Missile_AGM_02_x2/mfdElements/Plane_Fighter_01/Draw/Selected/PylonText1, sources - []
							{
							};
						};
					};
				};
				class Plane_Fighter_04 //sources - ["A3_Weapons_F_Jets"]
				{
					class Bones //sources - ["A3_Weapons_F_Jets"]
					{
						class Center //sources - ["A3_Weapons_F_Jets"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
						class Center2 //sources - ["A3_Weapons_F_Jets"]
						{
							type = "fixed";
							pos[] = {0, -0.05};
						};
					};
					class Draw //sources - ["A3_Weapons_F_Jets"]
					{
						class Default //sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0, 0.12, 0};
							alpha = 0.22;
							class Missile1 //sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo>=2";
								class Shape //sources - ["A3_Weapons_F_Jets"]
								{
									type = "line";
									width = 4;
									points[] = {{"Center", {0, -0.0147436}, 1}, {"Center", {0.0075, -0.0127679}, 1}, {"Center", {0.01299, -0.00737179}, 1}, {"Center", {0.015, 0}, 1}, {"Center", {0.01299, 0.00737179}, 1}, {"Center", {0.0075, 0.0127679}, 1}, {"Center", {0, 0.0147436}, 1}, {"Center", {-0.0075, 0.0127679}, 1}, {"Center", {-0.01299, 0.00737179}, 1}, {"Center", {-0.015, 0}, 1}, {"Center", {-0.01299, -0.00737179}, 1}, {"Center", {-0.0075, -0.0127679}, 1}, {"Center", {0, -0.0147436}, 1}, {}, {"Center", {0.0106066, -0.0104253}, 1}, {"Center", {0.0212132, -0.0208506}, 1}, {}, {"Center", {0.0106066, 0.0104253}, 1}, {"Center", {0.0212132, 0.0208506}, 1}, {}, {"Center", {-0.0106066, 0.0104253}, 1}, {"Center", {-0.0212132, 0.0208506}, 1}, {}, {"Center", {-0.0106066, -0.0104253}, 1}, {"Center", {-0.0212132, -0.0208506}, 1}, {}};
								};
							};
							class Missile2 //sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo>=1";
								class Shape //sources - ["A3_Weapons_F_Jets"]
								{
									type = "line";
									width = 4;
									points[] = {{"Center2", {0, -0.0147436}, 1}, {"Center2", {0.0075, -0.0127679}, 1}, {"Center2", {0.01299, -0.00737179}, 1}, {"Center2", {0.015, 0}, 1}, {"Center2", {0.01299, 0.00737179}, 1}, {"Center2", {0.0075, 0.0127679}, 1}, {"Center2", {0, 0.0147436}, 1}, {"Center2", {-0.0075, 0.0127679}, 1}, {"Center2", {-0.01299, 0.00737179}, 1}, {"Center2", {-0.015, 0}, 1}, {"Center2", {-0.01299, -0.00737179}, 1}, {"Center2", {-0.0075, -0.0127679}, 1}, {"Center2", {0, -0.0147436}, 1}, {}, {"Center2", {0.0106066, -0.0104253}, 1}, {"Center2", {0.0212132, -0.0208506}, 1}, {}, {"Center2", {0.0106066, 0.0104253}, 1}, {"Center2", {0.0212132, 0.0208506}, 1}, {}, {"Center2", {-0.0106066, 0.0104253}, 1}, {"Center2", {-0.0212132, 0.0208506}, 1}, {}, {"Center2", {-0.0106066, -0.0104253}, 1}, {"Center2", {-0.0212132, -0.0208506}, 1}, {}};
								};
							};
							class PylonText1 //sources - ["A3_Weapons_F_Jets"]
							{
								type = "text";
								source = "static";
								text = "ATGM";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {"Center", 1, {-0.005, 0.02}, 1};
								right[] = {"Center", 1, {0.045, 0.02}, 1};
								down[] = {"Center", 1, {-0.005, 0.065}, 1};
							};
						};
						class Selected: Default //inherits 6 parameters from bin\config.bin/CfgMagazines/PylonMissile_Missile_AGM_02_x2/mfdElements/Plane_Fighter_04/Draw/Default, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "(PylonSelected +  PylonAmmo/2)/2";
							alpha = 1;
							class Missile1: Missile1 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonMissile_Missile_AGM_02_x2/mfdElements/Plane_Fighter_04/Draw/Default/Missile1, sources - ["A3_Weapons_F_Jets"]
							{
								class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonMissile_Missile_AGM_02_x2/mfdElements/Plane_Fighter_04/Draw/Default/Missile1/Shape, sources - []
								{
								};
								class Background //sources - ["A3_Weapons_F_Jets"]
								{
									type = "polygon";
									points[] = {{{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, -0.0104253}, 1}, {"Center", {0.015, 6.44463e-010}, 1}, {"Center", {0.0106066, 0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, 0.0104253}, 1}, {"Center", {-1.31134e-009, 0.0147436}, 1}, {"Center", {-0.0106066, 0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, 0.0104253}, 1}, {"Center", {-0.015, -1.75816e-010}, 1}, {"Center", {-0.0106066, -0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, -0.0104253}, 1}, {"Center", {2.62268e-009, -0.0147436}, 1}, {"Center", {0.0106066, -0.0104253}, 1}}};
								};
							};
							class Missile2: Missile2 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonMissile_Missile_AGM_02_x2/mfdElements/Plane_Fighter_04/Draw/Default/Missile2, sources - ["A3_Weapons_F_Jets"]
							{
								class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonMissile_Missile_AGM_02_x2/mfdElements/Plane_Fighter_04/Draw/Default/Missile2/Shape, sources - []
								{
								};
								class Background //sources - ["A3_Weapons_F_Jets"]
								{
									type = "polygon";
									points[] = {{{"Center2", 1, {0, 0}, 1}, {"Center2", {0.0106066, -0.0104253}, 1}, {"Center2", {0.015, 6.44463e-010}, 1}, {"Center2", {0.0106066, 0.0104253}, 1}}, {{"Center2", 1, {0, 0}, 1}, {"Center2", {0.0106066, 0.0104253}, 1}, {"Center2", {-1.31134e-009, 0.0147436}, 1}, {"Center2", {-0.0106066, 0.0104253}, 1}}, {{"Center2", 1, {0, 0}, 1}, {"Center2", {-0.0106066, 0.0104253}, 1}, {"Center2", {-0.015, -1.75816e-010}, 1}, {"Center2", {-0.0106066, -0.0104253}, 1}}, {{"Center2", 1, {0, 0}, 1}, {"Center2", {-0.0106066, -0.0104253}, 1}, {"Center2", {2.62268e-009, -0.0147436}, 1}, {"Center2", {0.0106066, -0.0104253}, 1}}};
								};
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonMissile_Missile_AGM_02_x2/mfdElements/Plane_Fighter_04/Draw/Default/PylonText1, sources - []
							{
							};
						};
						class HalfEmpty: Selected //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonMissile_Missile_AGM_02_x2/mfdElements/Plane_Fighter_04/Draw/Selected, sources - ["A3_Weapons_F_Jets"]
						{
							alpha = 0.15;
							condition = "PylonAmmoRelative <= 1";
							color[] = {1, 0, 0, 1};
							class Missile1: Missile1 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonMissile_Missile_AGM_02_x2/mfdElements/Plane_Fighter_04/Draw/Selected/Missile1, sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo<=1";
								class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonMissile_Missile_AGM_02_x2/mfdElements/Plane_Fighter_04/Draw/Selected/Missile1/Shape, sources - []
								{
								};
								class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonMissile_Missile_AGM_02_x2/mfdElements/Plane_Fighter_04/Draw/Selected/Missile1/Background, sources - []
								{
								};
							};
							class Missile2: Missile2 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonMissile_Missile_AGM_02_x2/mfdElements/Plane_Fighter_04/Draw/Selected/Missile2, sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo<=0";
								class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonMissile_Missile_AGM_02_x2/mfdElements/Plane_Fighter_04/Draw/Selected/Missile2/Shape, sources - []
								{
								};
								class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonMissile_Missile_AGM_02_x2/mfdElements/Plane_Fighter_04/Draw/Selected/Missile2/Background, sources - []
								{
								};
							};
						};
						class Empty: HalfEmpty //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonMissile_Missile_AGM_02_x2/mfdElements/Plane_Fighter_04/Draw/HalfEmpty, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative <= 0";
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonMissile_Missile_AGM_02_x2/mfdElements/Plane_Fighter_04/Draw/Selected/PylonText1, sources - []
							{
							};
						};
					};
				};
			};
		};
		class PylonRack_Missile_AGM_02_x1: magazine_Missile_AGM_02_x1 //inherits 12 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AGM_02_x1, sources - ["A3_Weapons_F_Jets"]
		{
			count = 1;
			displayName = "Macer II AGM x1";
			displayNameShort = "AG";
			descriptionShort = "Macer II AGM missile";
			model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_Rail_x1_F";
			hardpoints[] = {"B_AGM65_RAIL", "I_AGM65_RAIL"};
			pylonWeapon = "weapon_AGM_65Launcher";
		};
		class PylonRack_Missile_AGM_02_x2: magazine_Missile_AGM_02_x1 //inherits 12 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AGM_02_x1, sources - ["A3_Weapons_F_Jets"]
		{
			count = 2;
			displayName = "Macer II AGM x2";
			displayNameShort = "AG";
			descriptionShort = "Macer II AGM missile";
			model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_DualRail_x2_F";
			hardpoints[] = {"B_AGM65_DUAL_RAIL", "I_AGM65_DUAL_RAIL"};
			pylonWeapon = "weapon_AGM_65Launcher";
			class mfdElements //sources - ["A3_Weapons_F_Jets"]
			{
				class Plane_Fighter_01 //sources - ["A3_Weapons_F_Jets"]
				{
					class Bones //sources - ["A3_Weapons_F_Jets"]
					{
						class Center //sources - ["A3_Weapons_F_Jets"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
						class Center2 //sources - ["A3_Weapons_F_Jets"]
						{
							type = "fixed";
							pos[] = {0, 0.05};
						};
					};
					class Draw //sources - ["A3_Weapons_F_Jets"]
					{
						class Default //sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0, 0.12, 0};
							alpha = 0.22;
							class Missile1 //sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo>=2";
								class Shape //sources - ["A3_Weapons_F_Jets"]
								{
									type = "line";
									width = 4;
									points[] = {{"Center", {0, -0.0147436}, 1}, {"Center", {0.0075, -0.0127679}, 1}, {"Center", {0.01299, -0.00737179}, 1}, {"Center", {0.015, 0}, 1}, {"Center", {0.01299, 0.00737179}, 1}, {"Center", {0.0075, 0.0127679}, 1}, {"Center", {0, 0.0147436}, 1}, {"Center", {-0.0075, 0.0127679}, 1}, {"Center", {-0.01299, 0.00737179}, 1}, {"Center", {-0.015, 0}, 1}, {"Center", {-0.01299, -0.00737179}, 1}, {"Center", {-0.0075, -0.0127679}, 1}, {"Center", {0, -0.0147436}, 1}, {}, {"Center", {0.0106066, -0.0104253}, 1}, {"Center", {0.0212132, -0.0208506}, 1}, {}, {"Center", {0.0106066, 0.0104253}, 1}, {"Center", {0.0212132, 0.0208506}, 1}, {}, {"Center", {-0.0106066, 0.0104253}, 1}, {"Center", {-0.0212132, 0.0208506}, 1}, {}, {"Center", {-0.0106066, -0.0104253}, 1}, {"Center", {-0.0212132, -0.0208506}, 1}, {}};
								};
							};
							class Missile2 //sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo>=1";
								class Shape //sources - ["A3_Weapons_F_Jets"]
								{
									type = "line";
									width = 4;
									points[] = {{"Center2", {0, -0.0147436}, 1}, {"Center2", {0.0075, -0.0127679}, 1}, {"Center2", {0.01299, -0.00737179}, 1}, {"Center2", {0.015, 0}, 1}, {"Center2", {0.01299, 0.00737179}, 1}, {"Center2", {0.0075, 0.0127679}, 1}, {"Center2", {0, 0.0147436}, 1}, {"Center2", {-0.0075, 0.0127679}, 1}, {"Center2", {-0.01299, 0.00737179}, 1}, {"Center2", {-0.015, 0}, 1}, {"Center2", {-0.01299, -0.00737179}, 1}, {"Center2", {-0.0075, -0.0127679}, 1}, {"Center2", {0, -0.0147436}, 1}, {}, {"Center2", {0.0106066, -0.0104253}, 1}, {"Center2", {0.0212132, -0.0208506}, 1}, {}, {"Center2", {0.0106066, 0.0104253}, 1}, {"Center2", {0.0212132, 0.0208506}, 1}, {}, {"Center2", {-0.0106066, 0.0104253}, 1}, {"Center2", {-0.0212132, 0.0208506}, 1}, {}, {"Center2", {-0.0106066, -0.0104253}, 1}, {"Center2", {-0.0212132, -0.0208506}, 1}, {}};
								};
							};
							class PylonText1 //sources - ["A3_Weapons_F_Jets"]
							{
								type = "text";
								source = "static";
								text = "ATGM";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {"Center", 1, {-0.005, 0.07}, 1};
								right[] = {"Center", 1, {0.045, 0.07}, 1};
								down[] = {"Center", 1, {-0.005, 0.115}, 1};
							};
						};
						class Selected: Default //inherits 6 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AGM_02_x2/mfdElements/Plane_Fighter_01/Draw/Default, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "(PylonSelected +  PylonAmmo/2)/2";
							alpha = 1;
							class Missile1: Missile1 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AGM_02_x2/mfdElements/Plane_Fighter_01/Draw/Default/Missile1, sources - ["A3_Weapons_F_Jets"]
							{
								class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AGM_02_x2/mfdElements/Plane_Fighter_01/Draw/Default/Missile1/Shape, sources - []
								{
								};
								class Background //sources - ["A3_Weapons_F_Jets"]
								{
									type = "polygon";
									points[] = {{{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, -0.0104253}, 1}, {"Center", {0.015, 6.44463e-010}, 1}, {"Center", {0.0106066, 0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, 0.0104253}, 1}, {"Center", {-1.31134e-009, 0.0147436}, 1}, {"Center", {-0.0106066, 0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, 0.0104253}, 1}, {"Center", {-0.015, -1.75816e-010}, 1}, {"Center", {-0.0106066, -0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, -0.0104253}, 1}, {"Center", {2.62268e-009, -0.0147436}, 1}, {"Center", {0.0106066, -0.0104253}, 1}}};
								};
							};
							class Missile2: Missile2 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AGM_02_x2/mfdElements/Plane_Fighter_01/Draw/Default/Missile2, sources - ["A3_Weapons_F_Jets"]
							{
								class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AGM_02_x2/mfdElements/Plane_Fighter_01/Draw/Default/Missile2/Shape, sources - []
								{
								};
								class Background //sources - ["A3_Weapons_F_Jets"]
								{
									type = "polygon";
									points[] = {{{"Center2", 1, {0, 0}, 1}, {"Center2", {0.0106066, -0.0104253}, 1}, {"Center2", {0.015, 6.44463e-010}, 1}, {"Center2", {0.0106066, 0.0104253}, 1}}, {{"Center2", 1, {0, 0}, 1}, {"Center2", {0.0106066, 0.0104253}, 1}, {"Center2", {-1.31134e-009, 0.0147436}, 1}, {"Center2", {-0.0106066, 0.0104253}, 1}}, {{"Center2", 1, {0, 0}, 1}, {"Center2", {-0.0106066, 0.0104253}, 1}, {"Center2", {-0.015, -1.75816e-010}, 1}, {"Center2", {-0.0106066, -0.0104253}, 1}}, {{"Center2", 1, {0, 0}, 1}, {"Center2", {-0.0106066, -0.0104253}, 1}, {"Center2", {2.62268e-009, -0.0147436}, 1}, {"Center2", {0.0106066, -0.0104253}, 1}}};
								};
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AGM_02_x2/mfdElements/Plane_Fighter_01/Draw/Default/PylonText1, sources - []
							{
							};
						};
						class HalfEmpty: Selected //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AGM_02_x2/mfdElements/Plane_Fighter_01/Draw/Selected, sources - ["A3_Weapons_F_Jets"]
						{
							alpha = 0.15;
							condition = "PylonAmmoRelative <= 1";
							color[] = {1, 0, 0, 1};
							class Missile1: Missile1 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AGM_02_x2/mfdElements/Plane_Fighter_01/Draw/Selected/Missile1, sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo<=1";
								class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AGM_02_x2/mfdElements/Plane_Fighter_01/Draw/Selected/Missile1/Shape, sources - []
								{
								};
								class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AGM_02_x2/mfdElements/Plane_Fighter_01/Draw/Selected/Missile1/Background, sources - []
								{
								};
							};
							class Missile2: Missile2 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AGM_02_x2/mfdElements/Plane_Fighter_01/Draw/Selected/Missile2, sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo<=0";
								class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AGM_02_x2/mfdElements/Plane_Fighter_01/Draw/Selected/Missile2/Shape, sources - []
								{
								};
								class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AGM_02_x2/mfdElements/Plane_Fighter_01/Draw/Selected/Missile2/Background, sources - []
								{
								};
							};
						};
						class Empty: HalfEmpty //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AGM_02_x2/mfdElements/Plane_Fighter_01/Draw/HalfEmpty, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative <= 0";
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AGM_02_x2/mfdElements/Plane_Fighter_01/Draw/Selected/PylonText1, sources - []
							{
							};
						};
					};
				};
				class Plane_Fighter_04 //sources - ["A3_Weapons_F_Jets"]
				{
					class Bones //sources - ["A3_Weapons_F_Jets"]
					{
						class Center //sources - ["A3_Weapons_F_Jets"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
						class Center2 //sources - ["A3_Weapons_F_Jets"]
						{
							type = "fixed";
							pos[] = {0, -0.05};
						};
					};
					class Draw //sources - ["A3_Weapons_F_Jets"]
					{
						class Default //sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0, 0.12, 0};
							alpha = 0.22;
							class Missile1 //sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo>=2";
								class Shape //sources - ["A3_Weapons_F_Jets"]
								{
									type = "line";
									width = 4;
									points[] = {{"Center", {0, -0.0147436}, 1}, {"Center", {0.0075, -0.0127679}, 1}, {"Center", {0.01299, -0.00737179}, 1}, {"Center", {0.015, 0}, 1}, {"Center", {0.01299, 0.00737179}, 1}, {"Center", {0.0075, 0.0127679}, 1}, {"Center", {0, 0.0147436}, 1}, {"Center", {-0.0075, 0.0127679}, 1}, {"Center", {-0.01299, 0.00737179}, 1}, {"Center", {-0.015, 0}, 1}, {"Center", {-0.01299, -0.00737179}, 1}, {"Center", {-0.0075, -0.0127679}, 1}, {"Center", {0, -0.0147436}, 1}, {}, {"Center", {0.0106066, -0.0104253}, 1}, {"Center", {0.0212132, -0.0208506}, 1}, {}, {"Center", {0.0106066, 0.0104253}, 1}, {"Center", {0.0212132, 0.0208506}, 1}, {}, {"Center", {-0.0106066, 0.0104253}, 1}, {"Center", {-0.0212132, 0.0208506}, 1}, {}, {"Center", {-0.0106066, -0.0104253}, 1}, {"Center", {-0.0212132, -0.0208506}, 1}, {}};
								};
							};
							class Missile2 //sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo>=1";
								class Shape //sources - ["A3_Weapons_F_Jets"]
								{
									type = "line";
									width = 4;
									points[] = {{"Center2", {0, -0.0147436}, 1}, {"Center2", {0.0075, -0.0127679}, 1}, {"Center2", {0.01299, -0.00737179}, 1}, {"Center2", {0.015, 0}, 1}, {"Center2", {0.01299, 0.00737179}, 1}, {"Center2", {0.0075, 0.0127679}, 1}, {"Center2", {0, 0.0147436}, 1}, {"Center2", {-0.0075, 0.0127679}, 1}, {"Center2", {-0.01299, 0.00737179}, 1}, {"Center2", {-0.015, 0}, 1}, {"Center2", {-0.01299, -0.00737179}, 1}, {"Center2", {-0.0075, -0.0127679}, 1}, {"Center2", {0, -0.0147436}, 1}, {}, {"Center2", {0.0106066, -0.0104253}, 1}, {"Center2", {0.0212132, -0.0208506}, 1}, {}, {"Center2", {0.0106066, 0.0104253}, 1}, {"Center2", {0.0212132, 0.0208506}, 1}, {}, {"Center2", {-0.0106066, 0.0104253}, 1}, {"Center2", {-0.0212132, 0.0208506}, 1}, {}, {"Center2", {-0.0106066, -0.0104253}, 1}, {"Center2", {-0.0212132, -0.0208506}, 1}, {}};
								};
							};
							class PylonText1 //sources - ["A3_Weapons_F_Jets"]
							{
								type = "text";
								source = "static";
								text = "ATGM";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {"Center", 1, {-0.005, 0.02}, 1};
								right[] = {"Center", 1, {0.045, 0.02}, 1};
								down[] = {"Center", 1, {-0.005, 0.065}, 1};
							};
						};
						class Selected: Default //inherits 6 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AGM_02_x2/mfdElements/Plane_Fighter_04/Draw/Default, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "(PylonSelected +  PylonAmmo/2)/2";
							alpha = 1;
							class Missile1: Missile1 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AGM_02_x2/mfdElements/Plane_Fighter_04/Draw/Default/Missile1, sources - ["A3_Weapons_F_Jets"]
							{
								class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AGM_02_x2/mfdElements/Plane_Fighter_04/Draw/Default/Missile1/Shape, sources - []
								{
								};
								class Background //sources - ["A3_Weapons_F_Jets"]
								{
									type = "polygon";
									points[] = {{{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, -0.0104253}, 1}, {"Center", {0.015, 6.44463e-010}, 1}, {"Center", {0.0106066, 0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, 0.0104253}, 1}, {"Center", {-1.31134e-009, 0.0147436}, 1}, {"Center", {-0.0106066, 0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, 0.0104253}, 1}, {"Center", {-0.015, -1.75816e-010}, 1}, {"Center", {-0.0106066, -0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, -0.0104253}, 1}, {"Center", {2.62268e-009, -0.0147436}, 1}, {"Center", {0.0106066, -0.0104253}, 1}}};
								};
							};
							class Missile2: Missile2 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AGM_02_x2/mfdElements/Plane_Fighter_04/Draw/Default/Missile2, sources - ["A3_Weapons_F_Jets"]
							{
								class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AGM_02_x2/mfdElements/Plane_Fighter_04/Draw/Default/Missile2/Shape, sources - []
								{
								};
								class Background //sources - ["A3_Weapons_F_Jets"]
								{
									type = "polygon";
									points[] = {{{"Center2", 1, {0, 0}, 1}, {"Center2", {0.0106066, -0.0104253}, 1}, {"Center2", {0.015, 6.44463e-010}, 1}, {"Center2", {0.0106066, 0.0104253}, 1}}, {{"Center2", 1, {0, 0}, 1}, {"Center2", {0.0106066, 0.0104253}, 1}, {"Center2", {-1.31134e-009, 0.0147436}, 1}, {"Center2", {-0.0106066, 0.0104253}, 1}}, {{"Center2", 1, {0, 0}, 1}, {"Center2", {-0.0106066, 0.0104253}, 1}, {"Center2", {-0.015, -1.75816e-010}, 1}, {"Center2", {-0.0106066, -0.0104253}, 1}}, {{"Center2", 1, {0, 0}, 1}, {"Center2", {-0.0106066, -0.0104253}, 1}, {"Center2", {2.62268e-009, -0.0147436}, 1}, {"Center2", {0.0106066, -0.0104253}, 1}}};
								};
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AGM_02_x2/mfdElements/Plane_Fighter_04/Draw/Default/PylonText1, sources - []
							{
							};
						};
						class HalfEmpty: Selected //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AGM_02_x2/mfdElements/Plane_Fighter_04/Draw/Selected, sources - ["A3_Weapons_F_Jets"]
						{
							alpha = 0.15;
							condition = "PylonAmmoRelative <= 1";
							color[] = {1, 0, 0, 1};
							class Missile1: Missile1 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AGM_02_x2/mfdElements/Plane_Fighter_04/Draw/Selected/Missile1, sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo<=1";
								class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AGM_02_x2/mfdElements/Plane_Fighter_04/Draw/Selected/Missile1/Shape, sources - []
								{
								};
								class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AGM_02_x2/mfdElements/Plane_Fighter_04/Draw/Selected/Missile1/Background, sources - []
								{
								};
							};
							class Missile2: Missile2 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AGM_02_x2/mfdElements/Plane_Fighter_04/Draw/Selected/Missile2, sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo<=0";
								class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AGM_02_x2/mfdElements/Plane_Fighter_04/Draw/Selected/Missile2/Shape, sources - []
								{
								};
								class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AGM_02_x2/mfdElements/Plane_Fighter_04/Draw/Selected/Missile2/Background, sources - []
								{
								};
							};
						};
						class Empty: HalfEmpty //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AGM_02_x2/mfdElements/Plane_Fighter_04/Draw/HalfEmpty, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative <= 0";
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_Missile_AGM_02_x2/mfdElements/Plane_Fighter_04/Draw/Selected/PylonText1, sources - []
							{
							};
						};
					};
				};
			};
		};
		class PylonMissile_Bomb_GBU12_x1: magazine_Bomb_GBU12_x1 //inherits 12 parameters from bin\config.bin/CfgMagazines/magazine_Bomb_GBU12_x1, sources - ["A3_Weapons_F_Jets"]
		{
			count = 1;
			displayName = "GBU 12 LGB x1";
			descriptionShort = "GBU 12 LGB 500lb";
			displayNameShort = "Bomb";
			model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Bomb_GBU12_04_x1_F";
			hardpoints[] = {"B_GBU12", "I_GBU12"};
			pylonWeapon = "weapon_GBU12Launcher";
		};
		class PylonRack_Bomb_GBU12_x2: magazine_Bomb_GBU12_x1 //inherits 12 parameters from bin\config.bin/CfgMagazines/magazine_Bomb_GBU12_x1, sources - ["A3_Weapons_F_Jets"]
		{
			count = 2;
			displayName = "GBU 12 LGB x2";
			descriptionShort = "GBU 12 LGB 500lb";
			displayNameShort = "Bomb";
			model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Bomb_GBU12_04_DualRail_x2_F";
			hardpoints[] = {"B_GBU12_DUAL_RAIL", "I_GBU12_DUAL_RAIL"};
			pylonWeapon = "weapon_GBU12Launcher";
			class mfdElements //sources - ["A3_Weapons_F_Jets"]
			{
				class Plane_Fighter_01 //sources - ["A3_Weapons_F_Jets"]
				{
					class Bones //sources - ["A3_Weapons_F_Jets"]
					{
						class Center //sources - ["A3_Weapons_F_Jets"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
						class Center2 //sources - ["A3_Weapons_F_Jets"]
						{
							type = "fixed";
							pos[] = {0, 0.05};
						};
					};
					class Draw //sources - ["A3_Weapons_F_Jets"]
					{
						class Default //sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0, 0.12, 0};
							alpha = 0.22;
							class Missile1 //sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo>=2";
								class Shape //sources - ["A3_Weapons_F_Jets"]
								{
									type = "line";
									width = 4;
									points[] = {{"Center", {0, -0.0147436}, 1}, {"Center", {0.0075, -0.0127679}, 1}, {"Center", {0.01299, -0.00737179}, 1}, {"Center", {0.015, 0}, 1}, {"Center", {0.01299, 0.00737179}, 1}, {"Center", {0.0075, 0.0127679}, 1}, {"Center", {0, 0.0147436}, 1}, {"Center", {-0.0075, 0.0127679}, 1}, {"Center", {-0.01299, 0.00737179}, 1}, {"Center", {-0.015, 0}, 1}, {"Center", {-0.01299, -0.00737179}, 1}, {"Center", {-0.0075, -0.0127679}, 1}, {"Center", {0, -0.0147436}, 1}, {}, {"Center", {0.0106066, -0.0104253}, 1}, {"Center", {0.0212132, -0.0208506}, 1}, {}, {"Center", {0.0106066, 0.0104253}, 1}, {"Center", {0.0212132, 0.0208506}, 1}, {}, {"Center", {-0.0106066, 0.0104253}, 1}, {"Center", {-0.0212132, 0.0208506}, 1}, {}, {"Center", {-0.0106066, -0.0104253}, 1}, {"Center", {-0.0212132, -0.0208506}, 1}, {}};
								};
							};
							class Missile2 //sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo>=1";
								class Shape //sources - ["A3_Weapons_F_Jets"]
								{
									type = "line";
									width = 4;
									points[] = {{"Center2", {0, -0.0147436}, 1}, {"Center2", {0.0075, -0.0127679}, 1}, {"Center2", {0.01299, -0.00737179}, 1}, {"Center2", {0.015, 0}, 1}, {"Center2", {0.01299, 0.00737179}, 1}, {"Center2", {0.0075, 0.0127679}, 1}, {"Center2", {0, 0.0147436}, 1}, {"Center2", {-0.0075, 0.0127679}, 1}, {"Center2", {-0.01299, 0.00737179}, 1}, {"Center2", {-0.015, 0}, 1}, {"Center2", {-0.01299, -0.00737179}, 1}, {"Center2", {-0.0075, -0.0127679}, 1}, {"Center2", {0, -0.0147436}, 1}, {}, {"Center2", {0.0106066, -0.0104253}, 1}, {"Center2", {0.0212132, -0.0208506}, 1}, {}, {"Center2", {0.0106066, 0.0104253}, 1}, {"Center2", {0.0212132, 0.0208506}, 1}, {}, {"Center2", {-0.0106066, 0.0104253}, 1}, {"Center2", {-0.0212132, 0.0208506}, 1}, {}, {"Center2", {-0.0106066, -0.0104253}, 1}, {"Center2", {-0.0212132, -0.0208506}, 1}, {}};
								};
							};
							class PylonText1 //sources - ["A3_Weapons_F_Jets"]
							{
								type = "text";
								source = "static";
								text = "LGB";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {"Center", 1, {-0.005, 0.07}, 1};
								right[] = {"Center", 1, {0.045, 0.07}, 1};
								down[] = {"Center", 1, {-0.005, 0.115}, 1};
							};
						};
						class Selected: Default //inherits 6 parameters from bin\config.bin/CfgMagazines/PylonRack_Bomb_GBU12_x2/mfdElements/Plane_Fighter_01/Draw/Default, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "(PylonSelected +  PylonAmmo/2)/2";
							alpha = 1;
							class Missile1: Missile1 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Bomb_GBU12_x2/mfdElements/Plane_Fighter_01/Draw/Default/Missile1, sources - ["A3_Weapons_F_Jets"]
							{
								class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_Bomb_GBU12_x2/mfdElements/Plane_Fighter_01/Draw/Default/Missile1/Shape, sources - []
								{
								};
								class Background //sources - ["A3_Weapons_F_Jets"]
								{
									type = "polygon";
									points[] = {{{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, -0.0104253}, 1}, {"Center", {0.015, 6.44463e-010}, 1}, {"Center", {0.0106066, 0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, 0.0104253}, 1}, {"Center", {-1.31134e-009, 0.0147436}, 1}, {"Center", {-0.0106066, 0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, 0.0104253}, 1}, {"Center", {-0.015, -1.75816e-010}, 1}, {"Center", {-0.0106066, -0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, -0.0104253}, 1}, {"Center", {2.62268e-009, -0.0147436}, 1}, {"Center", {0.0106066, -0.0104253}, 1}}};
								};
							};
							class Missile2: Missile2 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Bomb_GBU12_x2/mfdElements/Plane_Fighter_01/Draw/Default/Missile2, sources - ["A3_Weapons_F_Jets"]
							{
								class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_Bomb_GBU12_x2/mfdElements/Plane_Fighter_01/Draw/Default/Missile2/Shape, sources - []
								{
								};
								class Background //sources - ["A3_Weapons_F_Jets"]
								{
									type = "polygon";
									points[] = {{{"Center2", 1, {0, 0}, 1}, {"Center2", {0.0106066, -0.0104253}, 1}, {"Center2", {0.015, 6.44463e-010}, 1}, {"Center2", {0.0106066, 0.0104253}, 1}}, {{"Center2", 1, {0, 0}, 1}, {"Center2", {0.0106066, 0.0104253}, 1}, {"Center2", {-1.31134e-009, 0.0147436}, 1}, {"Center2", {-0.0106066, 0.0104253}, 1}}, {{"Center2", 1, {0, 0}, 1}, {"Center2", {-0.0106066, 0.0104253}, 1}, {"Center2", {-0.015, -1.75816e-010}, 1}, {"Center2", {-0.0106066, -0.0104253}, 1}}, {{"Center2", 1, {0, 0}, 1}, {"Center2", {-0.0106066, -0.0104253}, 1}, {"Center2", {2.62268e-009, -0.0147436}, 1}, {"Center2", {0.0106066, -0.0104253}, 1}}};
								};
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonRack_Bomb_GBU12_x2/mfdElements/Plane_Fighter_01/Draw/Default/PylonText1, sources - []
							{
							};
						};
						class HalfEmpty: Selected //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonRack_Bomb_GBU12_x2/mfdElements/Plane_Fighter_01/Draw/Selected, sources - ["A3_Weapons_F_Jets"]
						{
							alpha = 0.15;
							condition = "PylonAmmoRelative <= 1";
							color[] = {1, 0, 0, 1};
							class Missile1: Missile1 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Bomb_GBU12_x2/mfdElements/Plane_Fighter_01/Draw/Selected/Missile1, sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo<=1";
								class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_Bomb_GBU12_x2/mfdElements/Plane_Fighter_01/Draw/Selected/Missile1/Shape, sources - []
								{
								};
								class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Bomb_GBU12_x2/mfdElements/Plane_Fighter_01/Draw/Selected/Missile1/Background, sources - []
								{
								};
							};
							class Missile2: Missile2 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Bomb_GBU12_x2/mfdElements/Plane_Fighter_01/Draw/Selected/Missile2, sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo<=0";
								class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_Bomb_GBU12_x2/mfdElements/Plane_Fighter_01/Draw/Selected/Missile2/Shape, sources - []
								{
								};
								class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Bomb_GBU12_x2/mfdElements/Plane_Fighter_01/Draw/Selected/Missile2/Background, sources - []
								{
								};
							};
						};
						class Empty: HalfEmpty //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonRack_Bomb_GBU12_x2/mfdElements/Plane_Fighter_01/Draw/HalfEmpty, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative <= 0";
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_Bomb_GBU12_x2/mfdElements/Plane_Fighter_01/Draw/Selected/PylonText1, sources - []
							{
							};
						};
					};
				};
				class Plane_Fighter_04 //sources - ["A3_Weapons_F_Jets"]
				{
					class Bones //sources - ["A3_Weapons_F_Jets"]
					{
						class Center //sources - ["A3_Weapons_F_Jets"]
						{
							type = "fixed";
							pos[] = {0, 0};
						};
						class Center2 //sources - ["A3_Weapons_F_Jets"]
						{
							type = "fixed";
							pos[] = {0, -0.05};
						};
					};
					class Draw //sources - ["A3_Weapons_F_Jets"]
					{
						class Default //sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative>0";
							color[] = {0, 0.12, 0};
							alpha = 0.22;
							class Missile1 //sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo>=2";
								class Shape //sources - ["A3_Weapons_F_Jets"]
								{
									type = "line";
									width = 4;
									points[] = {{"Center", {0, -0.0147436}, 1}, {"Center", {0.0075, -0.0127679}, 1}, {"Center", {0.01299, -0.00737179}, 1}, {"Center", {0.015, 0}, 1}, {"Center", {0.01299, 0.00737179}, 1}, {"Center", {0.0075, 0.0127679}, 1}, {"Center", {0, 0.0147436}, 1}, {"Center", {-0.0075, 0.0127679}, 1}, {"Center", {-0.01299, 0.00737179}, 1}, {"Center", {-0.015, 0}, 1}, {"Center", {-0.01299, -0.00737179}, 1}, {"Center", {-0.0075, -0.0127679}, 1}, {"Center", {0, -0.0147436}, 1}, {}, {"Center", {0.0106066, -0.0104253}, 1}, {"Center", {0.0212132, -0.0208506}, 1}, {}, {"Center", {0.0106066, 0.0104253}, 1}, {"Center", {0.0212132, 0.0208506}, 1}, {}, {"Center", {-0.0106066, 0.0104253}, 1}, {"Center", {-0.0212132, 0.0208506}, 1}, {}, {"Center", {-0.0106066, -0.0104253}, 1}, {"Center", {-0.0212132, -0.0208506}, 1}, {}};
								};
							};
							class Missile2 //sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo>=1";
								class Shape //sources - ["A3_Weapons_F_Jets"]
								{
									type = "line";
									width = 4;
									points[] = {{"Center2", {0, -0.0147436}, 1}, {"Center2", {0.0075, -0.0127679}, 1}, {"Center2", {0.01299, -0.00737179}, 1}, {"Center2", {0.015, 0}, 1}, {"Center2", {0.01299, 0.00737179}, 1}, {"Center2", {0.0075, 0.0127679}, 1}, {"Center2", {0, 0.0147436}, 1}, {"Center2", {-0.0075, 0.0127679}, 1}, {"Center2", {-0.01299, 0.00737179}, 1}, {"Center2", {-0.015, 0}, 1}, {"Center2", {-0.01299, -0.00737179}, 1}, {"Center2", {-0.0075, -0.0127679}, 1}, {"Center2", {0, -0.0147436}, 1}, {}, {"Center2", {0.0106066, -0.0104253}, 1}, {"Center2", {0.0212132, -0.0208506}, 1}, {}, {"Center2", {0.0106066, 0.0104253}, 1}, {"Center2", {0.0212132, 0.0208506}, 1}, {}, {"Center2", {-0.0106066, 0.0104253}, 1}, {"Center2", {-0.0212132, 0.0208506}, 1}, {}, {"Center2", {-0.0106066, -0.0104253}, 1}, {"Center2", {-0.0212132, -0.0208506}, 1}, {}};
								};
							};
							class PylonText1 //sources - ["A3_Weapons_F_Jets"]
							{
								type = "text";
								source = "static";
								text = "LGB";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {"Center", 1, {-0.005, 0.02}, 1};
								right[] = {"Center", 1, {0.045, 0.02}, 1};
								down[] = {"Center", 1, {-0.005, 0.065}, 1};
							};
						};
						class Selected: Default //inherits 6 parameters from bin\config.bin/CfgMagazines/PylonRack_Bomb_GBU12_x2/mfdElements/Plane_Fighter_04/Draw/Default, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "(PylonSelected +  PylonAmmo/2)/2";
							alpha = 1;
							class Missile1: Missile1 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Bomb_GBU12_x2/mfdElements/Plane_Fighter_04/Draw/Default/Missile1, sources - ["A3_Weapons_F_Jets"]
							{
								class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_Bomb_GBU12_x2/mfdElements/Plane_Fighter_04/Draw/Default/Missile1/Shape, sources - []
								{
								};
								class Background //sources - ["A3_Weapons_F_Jets"]
								{
									type = "polygon";
									points[] = {{{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, -0.0104253}, 1}, {"Center", {0.015, 6.44463e-010}, 1}, {"Center", {0.0106066, 0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, 0.0104253}, 1}, {"Center", {-1.31134e-009, 0.0147436}, 1}, {"Center", {-0.0106066, 0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, 0.0104253}, 1}, {"Center", {-0.015, -1.75816e-010}, 1}, {"Center", {-0.0106066, -0.0104253}, 1}}, {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, -0.0104253}, 1}, {"Center", {2.62268e-009, -0.0147436}, 1}, {"Center", {0.0106066, -0.0104253}, 1}}};
								};
							};
							class Missile2: Missile2 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Bomb_GBU12_x2/mfdElements/Plane_Fighter_04/Draw/Default/Missile2, sources - ["A3_Weapons_F_Jets"]
							{
								class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/PylonRack_Bomb_GBU12_x2/mfdElements/Plane_Fighter_04/Draw/Default/Missile2/Shape, sources - []
								{
								};
								class Background //sources - ["A3_Weapons_F_Jets"]
								{
									type = "polygon";
									points[] = {{{"Center2", 1, {0, 0}, 1}, {"Center2", {0.0106066, -0.0104253}, 1}, {"Center2", {0.015, 6.44463e-010}, 1}, {"Center2", {0.0106066, 0.0104253}, 1}}, {{"Center2", 1, {0, 0}, 1}, {"Center2", {0.0106066, 0.0104253}, 1}, {"Center2", {-1.31134e-009, 0.0147436}, 1}, {"Center2", {-0.0106066, 0.0104253}, 1}}, {{"Center2", 1, {0, 0}, 1}, {"Center2", {-0.0106066, 0.0104253}, 1}, {"Center2", {-0.015, -1.75816e-010}, 1}, {"Center2", {-0.0106066, -0.0104253}, 1}}, {{"Center2", 1, {0, 0}, 1}, {"Center2", {-0.0106066, -0.0104253}, 1}, {"Center2", {2.62268e-009, -0.0147436}, 1}, {"Center2", {0.0106066, -0.0104253}, 1}}};
								};
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/PylonRack_Bomb_GBU12_x2/mfdElements/Plane_Fighter_04/Draw/Default/PylonText1, sources - []
							{
							};
						};
						class HalfEmpty: Selected //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonRack_Bomb_GBU12_x2/mfdElements/Plane_Fighter_04/Draw/Selected, sources - ["A3_Weapons_F_Jets"]
						{
							alpha = 0.15;
							condition = "PylonAmmoRelative <= 1";
							color[] = {1, 0, 0, 1};
							class Missile1: Missile1 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Bomb_GBU12_x2/mfdElements/Plane_Fighter_04/Draw/Selected/Missile1, sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo<=1";
								class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_Bomb_GBU12_x2/mfdElements/Plane_Fighter_04/Draw/Selected/Missile1/Shape, sources - []
								{
								};
								class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Bomb_GBU12_x2/mfdElements/Plane_Fighter_04/Draw/Selected/Missile1/Background, sources - []
								{
								};
							};
							class Missile2: Missile2 //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Bomb_GBU12_x2/mfdElements/Plane_Fighter_04/Draw/Selected/Missile2, sources - ["A3_Weapons_F_Jets"]
							{
								condition = "PylonAmmo<=0";
								class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_Bomb_GBU12_x2/mfdElements/Plane_Fighter_04/Draw/Selected/Missile2/Shape, sources - []
								{
								};
								class Background: Background //inherits 2 parameters from bin\config.bin/CfgMagazines/PylonRack_Bomb_GBU12_x2/mfdElements/Plane_Fighter_04/Draw/Selected/Missile2/Background, sources - []
								{
								};
							};
						};
						class Empty: HalfEmpty //inherits 5 parameters from bin\config.bin/CfgMagazines/PylonRack_Bomb_GBU12_x2/mfdElements/Plane_Fighter_04/Draw/HalfEmpty, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative <= 0";
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/PylonRack_Bomb_GBU12_x2/mfdElements/Plane_Fighter_04/Draw/Selected/PylonText1, sources - []
							{
							};
						};
					};
				};
			};
		};
		class magazine_Fighter02_Gun30mm_AA_x180: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F_Jets"]
		{
			scope = 2;
			displayName = "Gsh 30mm 180 rnd";
			descriptionShort = "Gsh 30mm 180 rounds";
			ammo = "ammo_Fighter02_Gun30mm_AA";
			count = 180;
			initSpeed = 1036;
			maxLeadSpeed = 300;
			tracersEvery = 2;
			nameSound = "cannon";
		};
		class magazine_Missile_AA_R73_x1: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F_Jets"]
		{
			scope = 2;
			displayName = "R73 SR AA x1";
			displayNameShort = "AA SR";
			descriptionShort = "R73 SR AA missile";
			ammo = "ammo_Missile_AA_R73";
			count = 1;
			initSpeed = 0;
			maxLeadSpeed = 700;
			sound[] = {"A3\sounds_f\dummysound", 1, 1, 1300};
			reloadSound[] = {"A3\sounds_f\dummysound", 0.000316228, 1, 20};
			nameSound = "missiles";
			class mfdElements //sources - ["A3_Weapons_F_Jets"]
			{
				class Plane_Fighter_02 //sources - ["A3_Weapons_F_Jets"]
				{
					class Bones //sources - []
					{
					};
					class Draw //sources - ["A3_Weapons_F_Jets"]
					{
						class BackgroundGroup //sources - ["A3_Weapons_F_Jets"]
						{
							color[] = {0, 0, 0};
							class Background //sources - ["A3_Weapons_F_Jets"]
							{
								type = "polygon";
								points[] = {{{{0.135, -0.025}, 1}, {{0.165, -0.025}, 1}, {{0.165, 0.175}, 1}, {{0.135, 0.175}, 1}}};
							};
						};
						class Default //sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative>0+PylonSelected";
							color[] = {0.94, 0.83, 0};
							alpha = 0.22;
							class Shape //sources - ["A3_Weapons_F_Jets"]
							{
								type = "line";
								width = 4;
								points[] = {{{0.153077, 0.14503}, 1}, {{0.156538, 0.141716}, 1}, {{0.159231, 0.141716}, 1}, {{0.159231, 0.113314}, 1}, {{0.155385, 0.110473}, 1}, {{0.155385, 0.0560355}, 1}, {{0.16, 0.0560355}, 1}, {{0.16, 0.0527219}, 1}, {{0.156538, 0.0446746}, 1}, {{0.156154, 0.0347337}, 1}, {{0.155769, 0.0228994}, 1}, {{0.155385, 0.0176923}, 1}, {{0.154231, 0.0134319}, 1}, {{0.153077, 0.0110651}, 1}, {{0.151923, 0.0091716}, 1}, {{0.150769, 0.00822485}, 1}, {{0.149615, 0.00822485}, 1}, {{0.149231, 0.00822485}, 1}, {{0.147692, 0.00822485}, 1}, {{0.146538, 0.0091716}, 1}, {{0.145385, 0.0110651}, 1}, {{0.144615, 0.0134319}, 1}, {{0.143462, 0.0176923}, 1}, {{0.142692, 0.0228994}, 1}, {{0.142692, 0.0347337}, 1}, {{0.142308, 0.0446746}, 1}, {{0.138462, 0.0527219}, 1}, {{0.138462, 0.0560355}, 1}, {{0.143462, 0.0560355}, 1}, {{0.143462, 0.110473}, 1}, {{0.139231, 0.113314}, 1}, {{0.139231, 0.141716}, 1}, {{0.142308, 0.141716}, 1}, {{0.145385, 0.14503}, 1}, {{0.153077, 0.14503}, 1}};
							};
							class PylonText1 //sources - ["A3_Weapons_F_Jets"]
							{
								type = "text";
								source = "static";
								text = "I";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{"0.00+0.15", 0.01}, 1};
								right[] = {{0.17, 0.01}, 1};
								down[] = {{"0.00+0.15", 0.035}, 1};
							};
							class PylonText2 //sources - ["A3_Weapons_F_Jets"]
							{
								type = "text";
								source = "static";
								text = "R";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{"0.00+0.15", 0.03}, 1};
								right[] = {{0.17, 0.03}, 1};
								down[] = {{"0.00+0.15", 0.055}, 1};
							};
						};
						class Selected: Default //inherits 6 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AA_R73_x1/mfdElements/Plane_Fighter_02/Draw/Default, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							color[] = {0, 0.12, 0};
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AA_R73_x1/mfdElements/Plane_Fighter_02/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AA_R73_x1/mfdElements/Plane_Fighter_02/Draw/Default/PylonText1, sources - []
							{
							};
							class PylonText2: PylonText2 //inherits 9 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AA_R73_x1/mfdElements/Plane_Fighter_02/Draw/Default/PylonText2, sources - []
							{
							};
						};
						class Empty: Selected //inherits 6 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AA_R73_x1/mfdElements/Plane_Fighter_02/Draw/Selected, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AA_R73_x1/mfdElements/Plane_Fighter_02/Draw/Selected/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AA_R73_x1/mfdElements/Plane_Fighter_02/Draw/Selected/PylonText1, sources - []
							{
							};
							class PylonText2: PylonText2 //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AA_R73_x1/mfdElements/Plane_Fighter_02/Draw/Selected/PylonText2, sources - []
							{
							};
						};
					};
				};
			};
		};
		class magazine_Missile_AA_R77_x1: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F_Jets"]
		{
			scope = 2;
			displayName = "R77 MR AA x1";
			displayNameShort = "AA MR";
			descriptionShort = "R77 MR AA missile";
			count = 1;
			ammo = "ammo_Missile_AA_R77";
			initSpeed = 0;
			maxLeadSpeed = 900;
			sound[] = {"A3\sounds_f\dummysound", 31.6228, 1, 1100};
			soundFly[] = {"A3\sounds_f\dummysound", 1, 1.1, 700};
			soundHit[] = {"A3\sounds_f\dummysound", 15.8489, 1, 2000};
			reloadSound[] = {"A3\sounds_f\dummysound", 0.000316228, 1, 20};
			nameSound = "missiles";
			class mfdElements //sources - ["A3_Weapons_F_Jets"]
			{
				class Plane_Fighter_02 //sources - ["A3_Weapons_F_Jets"]
				{
					class Bones //sources - []
					{
					};
					class Draw //sources - ["A3_Weapons_F_Jets"]
					{
						class BackgroundGroup //sources - ["A3_Weapons_F_Jets"]
						{
							color[] = {0, 0, 0};
							class Background //sources - ["A3_Weapons_F_Jets"]
							{
								type = "polygon";
								points[] = {{{{0.135, -0.025}, 1}, {{0.165, -0.025}, 1}, {{0.165, 0.175}, 1}, {{0.135, 0.175}, 1}}};
							};
						};
						class Default //sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative>0+PylonSelected";
							color[] = {0.94, 0.83, 0};
							alpha = 0.22;
							class Shape //sources - ["A3_Weapons_F_Jets"]
							{
								type = "line";
								width = 4;
								points[] = {{{0.160769, 0.106213}, 1}, {{0.156154, 0.0863314}, 1}, {{0.156154, 0.0243195}, 1}, {{0.159231, 0.0243195}, 1}, {{0.159231, 0.0191124}, 1}, {{0.156538, 0.0153254}, 1}, {{0.153462, -0.00976331}, 1}, {{0.152308, -0.0121302}, 1}, {{0.150769, -0.0135503}, 1}, {{0.148846, -0.014497}, 1}, {{0.146923, -0.0135503}, 1}, {{0.145, -0.0121302}, 1}, {{0.144231, -0.00976331}, 1}, {{0.141154, 0.0153254}, 1}, {{0.138462, 0.0191124}, 1}, {{0.138462, 0.0243195}, 1}, {{0.141538, 0.0243195}, 1}, {{0.141538, 0.0863314}, 1}, {{0.136923, 0.106213}, 1}, {{0.136923, 0.119941}, 1}, {{0.143462, 0.118047}, 1}, {{0.143462, 0.144556}, 1}, {{0.143462, 0.14787}, 1}, {{0.144231, 0.149763}, 1}, {{0.145769, 0.151657}, 1}, {{0.147308, 0.152604}, 1}, {{0.148846, 0.15355}, 1}, {{0.148846, 0.15355}, 1}, {{0.150385, 0.152604}, 1}, {{0.151923, 0.151657}, 1}, {{0.153077, 0.149763}, 1}, {{0.154231, 0.14787}, 1}, {{0.154231, 0.144556}, 1}, {{0.154231, 0.118047}, 1}, {{0.160769, 0.119941}, 1}, {{0.160769, 0.106213}, 1}};
							};
							class PylonText1 //sources - ["A3_Weapons_F_Jets"]
							{
								type = "text";
								source = "static";
								text = "R";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{"0.00+0.148", 0.03}, 1};
								right[] = {{0.168, 0.03}, 1};
								down[] = {{"0.00+0.148", 0.055}, 1};
							};
							class PylonText2 //sources - ["A3_Weapons_F_Jets"]
							{
								type = "text";
								source = "static";
								text = "D";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{"0.00+0.148", 0.05}, 1};
								right[] = {{0.168, 0.05}, 1};
								down[] = {{"0.00+0.148", 0.075}, 1};
							};
							class PylonText3 //sources - ["A3_Weapons_F_Jets"]
							{
								type = "text";
								source = "static";
								text = "R";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{"0.00+0.148", 0.07}, 1};
								right[] = {{0.168, 0.07}, 1};
								down[] = {{"0.00+0.148", 0.095}, 1};
							};
						};
						class Selected: Default //inherits 7 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AA_R77_x1/mfdElements/Plane_Fighter_02/Draw/Default, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							color[] = {0, 0.12, 0};
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AA_R77_x1/mfdElements/Plane_Fighter_02/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AA_R77_x1/mfdElements/Plane_Fighter_02/Draw/Default/PylonText1, sources - []
							{
							};
							class PylonText2: PylonText2 //inherits 9 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AA_R77_x1/mfdElements/Plane_Fighter_02/Draw/Default/PylonText2, sources - []
							{
							};
							class PylonText3: PylonText3 //inherits 9 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AA_R77_x1/mfdElements/Plane_Fighter_02/Draw/Default/PylonText3, sources - []
							{
							};
						};
						class Empty: Selected //inherits 7 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AA_R77_x1/mfdElements/Plane_Fighter_02/Draw/Selected, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AA_R77_x1/mfdElements/Plane_Fighter_02/Draw/Selected/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AA_R77_x1/mfdElements/Plane_Fighter_02/Draw/Selected/PylonText1, sources - []
							{
							};
							class PylonText2: PylonText2 //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AA_R77_x1/mfdElements/Plane_Fighter_02/Draw/Selected/PylonText2, sources - []
							{
							};
							class PylonText3: PylonText3 //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AA_R77_x1/mfdElements/Plane_Fighter_02/Draw/Selected/PylonText3, sources - []
							{
							};
						};
					};
				};
			};
		};
		class magazine_Missile_AGM_KH25_x1: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F_Jets"]
		{
			scope = 2;
			displayName = "KH25 AGM x1";
			displayNameShort = "AG";
			descriptionShort = "KH25 AGM missile";
			ammo = "Missile_AGM_01_F";
			initSpeed = 0;
			maxLeadSpeed = 60;
			sound[] = {"", 1, 1};
			reloadSound[] = {"", 0.000316228, 1};
			count = 1;
			nameSound = "missiles";
			class mfdElements //sources - ["A3_Weapons_F_Jets"]
			{
				class Plane_Fighter_02 //sources - ["A3_Weapons_F_Jets"]
				{
					class Bones //sources - []
					{
					};
					class Draw //sources - ["A3_Weapons_F_Jets"]
					{
						class BackgroundGroup //sources - ["A3_Weapons_F_Jets"]
						{
							color[] = {0, 0, 0};
							class Background //sources - ["A3_Weapons_F_Jets"]
							{
								type = "polygon";
								points[] = {{{{0.135, -0.025}, 1}, {{0.165, -0.025}, 1}, {{0.165, 0.175}, 1}, {{0.135, 0.175}, 1}}};
							};
						};
						class Default //sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative>0+PylonSelected";
							color[] = {0.94, 0.83, 0};
							alpha = 0.22;
							class Shape //sources - ["A3_Weapons_F_Jets"]
							{
								type = "line";
								width = 4;
								points[] = {{{0.160769, 0.106213}, 1}, {{0.156154, 0.0863314}, 1}, {{0.156154, 0.0243195}, 1}, {{0.159231, 0.0243195}, 1}, {{0.159231, 0.0191124}, 1}, {{0.156538, 0.0153254}, 1}, {{0.153462, -0.00976331}, 1}, {{0.152308, -0.0121302}, 1}, {{0.150769, -0.0135503}, 1}, {{0.148846, -0.014497}, 1}, {{0.146923, -0.0135503}, 1}, {{0.145, -0.0121302}, 1}, {{0.144231, -0.00976331}, 1}, {{0.141154, 0.0153254}, 1}, {{0.138462, 0.0191124}, 1}, {{0.138462, 0.0243195}, 1}, {{0.141538, 0.0243195}, 1}, {{0.141538, 0.0863314}, 1}, {{0.136923, 0.106213}, 1}, {{0.136923, 0.119941}, 1}, {{0.143462, 0.118047}, 1}, {{0.143462, 0.144556}, 1}, {{0.143462, 0.14787}, 1}, {{0.144231, 0.149763}, 1}, {{0.145769, 0.151657}, 1}, {{0.147308, 0.152604}, 1}, {{0.148846, 0.15355}, 1}, {{0.148846, 0.15355}, 1}, {{0.150385, 0.152604}, 1}, {{0.151923, 0.151657}, 1}, {{0.153077, 0.149763}, 1}, {{0.154231, 0.14787}, 1}, {{0.154231, 0.144556}, 1}, {{0.154231, 0.118047}, 1}, {{0.160769, 0.119941}, 1}, {{0.160769, 0.106213}, 1}};
							};
							class PylonText1 //sources - ["A3_Weapons_F_Jets"]
							{
								type = "text";
								source = "static";
								text = "I";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{"0.00+0.148", 0.03}, 1};
								right[] = {{0.168, 0.03}, 1};
								down[] = {{"0.00+0.148", 0.055}, 1};
							};
							class PylonText2 //sources - ["A3_Weapons_F_Jets"]
							{
								type = "text";
								source = "static";
								text = "R";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{"0.00+0.148", 0.05}, 1};
								right[] = {{0.168, 0.05}, 1};
								down[] = {{"0.00+0.148", 0.075}, 1};
							};
						};
						class Selected: Default //inherits 6 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AGM_KH25_x1/mfdElements/Plane_Fighter_02/Draw/Default, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							color[] = {0, 0.12, 0};
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AGM_KH25_x1/mfdElements/Plane_Fighter_02/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AGM_KH25_x1/mfdElements/Plane_Fighter_02/Draw/Default/PylonText1, sources - []
							{
							};
							class PylonText2: PylonText2 //inherits 9 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AGM_KH25_x1/mfdElements/Plane_Fighter_02/Draw/Default/PylonText2, sources - []
							{
							};
						};
						class Empty: Selected //inherits 6 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AGM_KH25_x1/mfdElements/Plane_Fighter_02/Draw/Selected, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AGM_KH25_x1/mfdElements/Plane_Fighter_02/Draw/Selected/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AGM_KH25_x1/mfdElements/Plane_Fighter_02/Draw/Selected/PylonText1, sources - []
							{
							};
							class PylonText2: PylonText2 //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AGM_KH25_x1/mfdElements/Plane_Fighter_02/Draw/Selected/PylonText2, sources - []
							{
							};
						};
					};
				};
			};
		};
		class magazine_Bomb_KAB250_x1: VehicleMagazine //inherits 5 parameters from bin\config.bin/CfgMagazines/VehicleMagazine, sources - ["A3_Weapons_F_Jets"]
		{
			scope = 2;
			displayName = "KAB 250 LGB x1";
			displayNameShort = "Bomb";
			descriptionShort = "KAB 250 LGB 500lb";
			ammo = "Bomb_03_F";
			initSpeed = 0;
			maxLeadSpeed = 30;
			sound[] = {"", 1, 1};
			reloadSound[] = {"", 0.000316228, 1};
			count = 1;
			nameSound = "";
			class mfdElements //sources - ["A3_Weapons_F_Jets"]
			{
				class Plane_Fighter_02 //sources - ["A3_Weapons_F_Jets"]
				{
					class Bones //sources - []
					{
					};
					class Draw //sources - ["A3_Weapons_F_Jets"]
					{
						class BackgroundGroup //sources - ["A3_Weapons_F_Jets"]
						{
							color[] = {0, 0, 0};
							class Background //sources - ["A3_Weapons_F_Jets"]
							{
								type = "polygon";
								points[] = {{{{0.135, -0.025}, 1}, {{0.165, -0.025}, 1}, {{0.165, 0.175}, 1}, {{0.135, 0.175}, 1}}};
							};
						};
						class Default //sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative>0+PylonSelected";
							color[] = {0.94, 0.83, 0};
							alpha = 0.22;
							class Shape //sources - ["A3_Weapons_F_Jets"]
							{
								type = "line";
								width = 4;
								points[] = {{{0.148846, -0.0230178}, 1}, {{0.148462, -0.0230178}, 1}, {{0.146923, -0.022071}, 1}, {{0.146538, -0.0206509}, 1}, {{0.146538, -0.0135503}, 1}, {{0.145, -0.0116568}, 1}, {{0.144231, -0.00976331}, 1}, {{0.144231, -0.00692308}, 1}, {{0.145, -0.00597633}, 1}, {{0.146538, -0.00597633}, 1}, {{0.147308, -0.00455621}, 1}, {{0.146538, 0.00538462}, 1}, {{0.142692, 0.0186391}, 1}, {{0.142692, 0.022426}, 1}, {{0.136154, 0.0318935}, 1}, {{0.136154, 0.0389941}, 1}, {{0.141923, 0.0380473}, 1}, {{0.142692, 0.0394675}, 1}, {{0.142692, 0.057929}, 1}, {{0.14, 0.0740237}, 1}, {{0.14, 0.119941}, 1}, {{0.141538, 0.135089}, 1}, {{0.131923, 0.15497}, 1}, {{0.134615, 0.167278}, 1}, {{0.148846, 0.167278}, 1}, {{0.149615, 0.167278}, 1}, {{0.163846, 0.167278}, 1}, {{0.166538, 0.15497}, 1}, {{0.156923, 0.135089}, 1}, {{0.158462, 0.119941}, 1}, {{0.158462, 0.0740237}, 1}, {{0.155385, 0.057929}, 1}, {{0.155385, 0.0394675}, 1}, {{0.156538, 0.0380473}, 1}, {{0.162308, 0.0389941}, 1}, {{0.162308, 0.0318935}, 1}, {{0.155385, 0.022426}, 1}, {{0.155385, 0.0186391}, 1}, {{0.151923, 0.00538462}, 1}, {{0.150769, -0.00455621}, 1}, {{0.151923, -0.00597633}, 1}, {{0.153077, -0.00597633}, 1}, {{0.154231, -0.00692308}, 1}, {{0.154231, -0.00976331}, 1}, {{0.153462, -0.0116568}, 1}, {{0.151923, -0.0135503}, 1}, {{0.151923, -0.0206509}, 1}, {{0.151154, -0.022071}, 1}, {{0.148846, -0.0230178}, 1}};
							};
							class PylonText1 //sources - ["A3_Weapons_F_Jets"]
							{
								type = "text";
								source = "static";
								text = "L";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{"0.00+0.15", 0.06}, 1};
								right[] = {{0.175, 0.06}, 1};
								down[] = {{"0.00+0.15", 0.085}, 1};
							};
							class PylonText2 //sources - ["A3_Weapons_F_Jets"]
							{
								type = "text";
								source = "static";
								text = "S";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{"0.00+0.15", 0.08}, 1};
								right[] = {{0.175, 0.08}, 1};
								down[] = {{"0.00+0.15", 0.105}, 1};
							};
							class PylonText3 //sources - ["A3_Weapons_F_Jets"]
							{
								type = "text";
								source = "static";
								text = "R";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{"0.00+0.15", 0.1}, 1};
								right[] = {{0.175, 0.1}, 1};
								down[] = {{"0.00+0.15", 0.125}, 1};
							};
						};
						class Selected: Default //inherits 7 parameters from bin\config.bin/CfgMagazines/magazine_Bomb_KAB250_x1/mfdElements/Plane_Fighter_02/Draw/Default, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "(PylonSelected +  PylonAmmoRelative)/2";
							alpha = 1;
							color[] = {0, 0.12, 0};
							class Shape: Shape //inherits 3 parameters from bin\config.bin/CfgMagazines/magazine_Bomb_KAB250_x1/mfdElements/Plane_Fighter_02/Draw/Default/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 9 parameters from bin\config.bin/CfgMagazines/magazine_Bomb_KAB250_x1/mfdElements/Plane_Fighter_02/Draw/Default/PylonText1, sources - []
							{
							};
							class PylonText2: PylonText2 //inherits 9 parameters from bin\config.bin/CfgMagazines/magazine_Bomb_KAB250_x1/mfdElements/Plane_Fighter_02/Draw/Default/PylonText2, sources - []
							{
							};
							class PylonText3: PylonText3 //inherits 9 parameters from bin\config.bin/CfgMagazines/magazine_Bomb_KAB250_x1/mfdElements/Plane_Fighter_02/Draw/Default/PylonText3, sources - []
							{
							};
						};
						class Empty: Selected //inherits 7 parameters from bin\config.bin/CfgMagazines/magazine_Bomb_KAB250_x1/mfdElements/Plane_Fighter_02/Draw/Selected, sources - ["A3_Weapons_F_Jets"]
						{
							condition = "PylonAmmoRelative <= 0";
							color[] = {1, 0, 0, 1};
							class Shape: Shape //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Bomb_KAB250_x1/mfdElements/Plane_Fighter_02/Draw/Selected/Shape, sources - []
							{
							};
							class PylonText1: PylonText1 //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Bomb_KAB250_x1/mfdElements/Plane_Fighter_02/Draw/Selected/PylonText1, sources - []
							{
							};
							class PylonText2: PylonText2 //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Bomb_KAB250_x1/mfdElements/Plane_Fighter_02/Draw/Selected/PylonText2, sources - []
							{
							};
							class PylonText3: PylonText3 //inherits 0 parameters from bin\config.bin/CfgMagazines/magazine_Bomb_KAB250_x1/mfdElements/Plane_Fighter_02/Draw/Selected/PylonText3, sources - []
							{
							};
						};
					};
				};
			};
		};
		class PylonMissile_Missile_AA_R73_x1: magazine_Missile_AA_R73_x1 //inherits 12 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AA_R73_x1, sources - ["A3_Weapons_F_Jets"]
		{
			count = 1;
			displayName = "R73 SR AA x1";
			displayNameShort = "AA SR";
			descriptionShort = "R73 SR AA missile";
			model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_07_x1_F.p3d";
			hardpoints[] = {"O_R73"};
			pylonWeapon = "weapon_R73Launcher";
			ejectSpeed[] = {1, 0, 0};
		};
		class PylonMissile_Missile_AA_R77_x1: magazine_Missile_AA_R77_x1 //inherits 14 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AA_R77_x1, sources - ["A3_Weapons_F_Jets"]
		{
			count = 1;
			displayName = "R77 MR AA x1";
			displayNameShort = "AA MR";
			descriptionShort = "R77 MR AA missile";
			model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_05_x1_F.p3d";
			hardpoints[] = {"O_R77"};
			pylonWeapon = "weapon_R77Launcher";
			ejectSpeed[] = {1, 0, 0};
		};
		class PylonMissile_Missile_AA_R77_INT_x1: magazine_Missile_AA_R77_x1 //inherits 14 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AA_R77_x1, sources - ["A3_Weapons_F_Jets"]
		{
			count = 1;
			displayName = "R77 MR AA x1";
			displayNameShort = "AA MR";
			descriptionShort = "R77 MR AA missile";
			model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_05_x1_F.p3d";
			hardpoints[] = {"O_R77_INT"};
			pylonWeapon = "weapon_R77Launcher";
			ejectSpeed[] = {1, 0, 0};
			initSpeed = 0;
			initSpeedY = -25;
			initSpeedZ = 0;
		};
		class PylonMissile_Missile_AGM_KH25_x1: magazine_Missile_AGM_KH25_x1 //inherits 12 parameters from bin\config.bin/CfgMagazines/magazine_Missile_AGM_KH25_x1, sources - ["A3_Weapons_F_Jets"]
		{
			count = 1;
			displayName = "KH25 AGM x1";
			displayNameShort = "AG";
			descriptionShort = "KH25 AGM missile";
			model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_01_x1_F.p3d";
			hardpoints[] = {"O_KH25"};
			pylonWeapon = "weapon_AGM_KH25Launcher";
		};
		class PylonMissile_Missile_AGM_KH25_INT_x1: PylonMissile_Missile_AGM_KH25_x1 //inherits 7 parameters from bin\config.bin/CfgMagazines/PylonMissile_Missile_AGM_KH25_x1, sources - ["A3_Weapons_F_Jets"]
		{
			hardpoints[] = {"O_KH25_INT"};
			ejectSpeed[] = {1, 0, 0};
			initSpeed = 0;
			initSpeedY = -25;
			initSpeedZ = 0;
		};
		class PylonMissile_Bomb_KAB250_x1: magazine_Bomb_KAB250_x1 //inherits 12 parameters from bin\config.bin/CfgMagazines/magazine_Bomb_KAB250_x1, sources - ["A3_Weapons_F_Jets"]
		{
			count = 1;
			displayName = "KAB 250 LGB x1";
			displayNameShort = "Bomb";
			descriptionShort = "KAB 250 LGB 500lb";
			model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Bomb_KAB250_03_x1_F.p3d";
			hardpoints[] = {"O_KAB250_BOMB"};
			pylonWeapon = "weapon_KAB250Launcher";
		};
	};
