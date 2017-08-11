class cfgPatches
{
  class BIB_Wasteland_Faces
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
class CfgGlasses //sources - ["A3_Characters_F","A3_Characters_F_Heads","A3_Characters_F_Exp"]
{
	class None //sources - ["A3_Characters_F_Heads"]
	{
		name = "None";
		model = "";
		identityTypes[] = {"NoGlasses", 1000, "G_NATO_default", 300, "G_NATO_casual", 550, "G_NATO_pilot", 1000, "G_NATO_recon", 595, "G_NATO_SF", 300, "G_NATO_sniper", 1000, "G_NATO_diver", 0, "G_IRAN_default", 1000, "G_IRAN_diver", 0, "G_GUERIL_default", 595, "G_HAF_default", 595, "G_CIVIL_female", 655, "G_CIVIL_male", 670, "g_Rangemaster", 0, "G_IRAN_officer", 500};
		displayname = "None";
		picture = "\A3\Characters_F\data\ui\icon_g_aviators_CA.paa";
		mass = 1;
		scope = 2;
	};
	class G_Spectacles: None //inherits 7 parameters from bin\config.bin/CfgGlasses/None, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Spectacles";
		displayname = "Spectacle Glasses";
		model = "\A3\characters_f_beta\heads\glasses\g_spectacles";
		picture = "\A3\Characters_F\data\ui\icon_g_spectacles_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\spectacles_brown_ca.paa"};
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 5, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 10, "G_HAF_default", 10, "G_CIVIL_female", 10, "G_CIVIL_male", 20};
		mass = 2;
	};
	class G_Spectacles_Tinted: None //inherits 7 parameters from bin\config.bin/CfgGlasses/None, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Spectacles_Tinted";
		displayname = "Tinted Spectacles";
		model = "\A3\characters_f_beta\heads\glasses\g_spectacles_tinted";
		picture = "\A3\Characters_F\data\ui\icon_g_spectacles_tinted_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\spectacles_black_ca.paa"};
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 5, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 10, "G_HAF_default", 10, "G_CIVIL_female", 10, "G_CIVIL_male", 20};
		mass = 2;
	};
	class G_Combat: None //inherits 7 parameters from bin\config.bin/CfgGlasses/None, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Combat";
		displayname = "Combat Goggles";
		model = "\A3\characters_f_beta\heads\glasses\g_combat";
		picture = "\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\g_combat_ca.paa"};
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 300, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 50, "G_NATO_SF", 300, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 0, "G_HAF_default", 50, "G_CIVIL_female", 0, "G_CIVIL_male", 0};
		mass = 4;
	};
	class G_Lowprofile: None //inherits 7 parameters from bin\config.bin/CfgGlasses/None, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Lowprofile";
		displayname = "Low Profile Goggles";
		model = "\A3\characters_f_beta\heads\glasses\g_lowprofile";
		picture = "\A3\Characters_F\data\ui\icon_g_lowprofile_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"};
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 150, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 0, "G_HAF_default", 50, "G_CIVIL_female", 0, "G_CIVIL_male", 0};
		mass = 2;
	};
	class G_Shades_Black: None //inherits 7 parameters from bin\config.bin/CfgGlasses/None, sources - ["A3_Characters_F","A3_Characters_F_Heads"]
	{
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\joeyx_black_ca.paa"};
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 10, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 20, "G_HAF_default", 20, "G_CIVIL_female", 10, "G_CIVIL_male", 20};
		mass = 2;
		author = "Bohemia Interactive";
		_generalMacro = "G_Shades_Black";
		displayname = "Shades (Black)";
		model = "\A3\characters_f\Heads\glasses\g_shades_black";
		picture = "\A3\Characters_F\data\ui\icon_g_shades_black_CA.paa";
	};
	class G_Shades_Green: None //inherits 7 parameters from bin\config.bin/CfgGlasses/None, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Shades_Green";
		displayname = "Shades (Green)";
		model = "\A3\characters_f_beta\heads\glasses\g_shades_green";
		picture = "\A3\Characters_F\data\ui\icon_g_shades_green_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\joeyx_green_ca.paa"};
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 10, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 20, "G_HAF_default", 20, "G_CIVIL_female", 10, "G_CIVIL_male", 20, "G_Competitor", 10};
		mass = 2;
	};
	class G_Shades_Red: None //inherits 7 parameters from bin\config.bin/CfgGlasses/None, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Shades_Red";
		displayname = "Shades (Red)";
		model = "\A3\characters_f_beta\heads\glasses\g_shades_red";
		picture = "\A3\Characters_F\data\ui\icon_g_shades_red_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\joeyx_red_ca.paa"};
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 10, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 20, "G_HAF_default", 20, "G_CIVIL_female", 10, "G_CIVIL_male", 20, "G_Competitor", 10};
		mass = 2;
	};
	class G_Squares: None //inherits 7 parameters from bin\config.bin/CfgGlasses/None, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Squares";
		displayname = "Square Spectacles";
		model = "\A3\characters_f_beta\heads\glasses\g_squares";
		picture = "\A3\Characters_F\data\ui\icon_g_squares_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\civil\data\nikos_wear_co.paa"};
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 5, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 10, "G_HAF_default", 10, "G_CIVIL_female", 10, "G_CIVIL_male", 15};
		mass = 2;
	};
	class G_Squares_Tinted: None //inherits 7 parameters from bin\config.bin/CfgGlasses/None, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Squares_Tinted";
		displayname = "Square Shades";
		model = "\A3\characters_f_beta\heads\glasses\g_squares_tinted";
		picture = "\A3\Characters_F\data\ui\icon_g_squares_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\civil\data\nikos_wear_co.paa"};
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 5, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 10, "G_HAF_default", 10, "G_CIVIL_female", 10, "G_CIVIL_male", 15};
		mass = 2;
	};
	class G_Sport_BlackWhite: None //inherits 7 parameters from bin\config.bin/CfgGlasses/None, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Sport_BlackWhite";
		displayname = "Sport Shades (Shadow)";
		model = "\A3\characters_f_beta\heads\glasses\g_sport_blackWhite";
		picture = "\A3\Characters_F\data\ui\icon_g_sport_blackwhite_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\sunglasses_sport_1_ca.paa"};
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 5, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 10, "G_HAF_default", 10, "G_CIVIL_female", 15, "G_CIVIL_male", 25};
		mass = 2;
	};
	class G_Sport_Blackyellow: None //inherits 7 parameters from bin\config.bin/CfgGlasses/None, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Sport_Blackyellow";
		displayname = "Sport Shades (Poison)";
		model = "\A3\characters_f_beta\heads\glasses\g_sport_blackyellow";
		picture = "\A3\Characters_F\data\ui\icon_g_sport_blackyellow_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\sunglasses_sport_2_ca.paa"};
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 5, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 10, "G_HAF_default", 10, "G_CIVIL_female", 15, "G_CIVIL_male", 25};
		mass = 2;
	};
	class G_Sport_Greenblack: None //inherits 7 parameters from bin\config.bin/CfgGlasses/None, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Sport_Greenblack";
		displayname = "Sport Shades (Yetti)";
		model = "\A3\characters_f_beta\heads\glasses\g_sport_greenblack";
		picture = "\A3\Characters_F\data\ui\icon_g_sport_greenblack_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\sunglasses_sport_3_ca.paa"};
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 5, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 10, "G_HAF_default", 10, "G_CIVIL_female", 15, "G_CIVIL_male", 25};
		mass = 2;
	};
	class G_Sport_Checkered: None //inherits 7 parameters from bin\config.bin/CfgGlasses/None, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Sport_Checkered";
		displayname = "Sport Shades (Style)";
		model = "\A3\characters_f_beta\heads\glasses\g_sport_checkered";
		picture = "\A3\Characters_F\data\ui\icon_g_sport_checkered_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\sunglasses_sport_6_ca.paa"};
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 5, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 10, "G_HAF_default", 10, "G_CIVIL_female", 15, "G_CIVIL_male", 25};
		mass = 2;
	};
	class G_Sport_Red: None //inherits 7 parameters from bin\config.bin/CfgGlasses/None, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Sport_Red";
		displayname = "Sport Shades (Fire)";
		model = "\A3\characters_f_beta\heads\glasses\g_sport_red";
		picture = "\A3\Characters_F\data\ui\icon_g_sport_red_CA.paa";
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 5, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 0, "G_HAF_default", 10, "G_CIVIL_female", 15, "G_CIVIL_male", 25};
		mass = 2;
	};
	class G_Tactical_Black: None //inherits 7 parameters from bin\config.bin/CfgGlasses/None, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Tactical_Black";
		displayname = "Tactical Shades";
		model = "\A3\characters_f_beta\heads\glasses\g_tactical_black";
		picture = "\A3\Characters_F\data\ui\icon_g_tactical_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\tactical_3_ca.paa"};
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 100, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 50, "G_NATO_SF", 100, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 0, "G_HAF_default", 50, "G_CIVIL_female", 0, "G_CIVIL_male", 0, "G_Competitor", 10};
		mass = 2;
	};
	class G_Aviator: None //inherits 7 parameters from bin\config.bin/CfgGlasses/None, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Aviator";
		displayname = "Aviator Glasses";
		model = "\A3\characters_f_gamma\Heads\Glasses\g_aviators";
		picture = "\A3\Characters_F\data\ui\icon_g_aviators_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\glass_ca.paa"};
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 50, "G_NATO_casual", 450, "G_NATO_pilot", 0, "G_NATO_recon", 15, "G_NATO_SF", 50, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 25, "G_HAF_default", 25, "G_CIVIL_female", 15, "G_CIVIL_male", 30, "G_IRAN_officer", 500};
		mass = 2;
	};
	class G_Lady_Mirror: None //inherits 7 parameters from bin\config.bin/CfgGlasses/None, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Lady_Mirror";
		scope = 1;
		displayname = "Ladies Shades (Iridium)";
		model = "\A3\characters_f_gamma\Heads\Glasses\g_lady_mirror";
		picture = "\A3\Characters_F\data\ui\icon_g_lady_CA.paa";
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 0, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 0, "G_HAF_default", 0, "G_CIVIL_female", 40, "G_CIVIL_male", 0};
		mass = 2;
	};
	class G_Lady_Dark: None //inherits 7 parameters from bin\config.bin/CfgGlasses/None, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Lady_Dark";
		scope = 1;
		displayname = "Ladies Shades (Sea)";
		model = "\A3\characters_f_gamma\Heads\Glasses\g_lady_dark";
		picture = "\A3\Characters_F\data\ui\icon_g_lady_CA.paa";
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 0, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 0, "G_HAF_default", 0, "G_CIVIL_female", 40, "G_CIVIL_male", 0};
		mass = 2;
	};
	class G_Lady_Red: None //inherits 7 parameters from bin\config.bin/CfgGlasses/None, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Lady_Red";
		scope = 1;
		displayname = "Ladies Shades (Fire)";
		model = "\A3\characters_f_gamma\Heads\Glasses\g_lady_red";
		picture = "\A3\Characters_F\data\ui\icon_g_lady_CA.paa";
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 0, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 0, "G_HAF_default", 0, "G_CIVIL_female", 40, "G_CIVIL_male", 0};
		mass = 2;
	};
	class G_Lady_Blue: None //inherits 7 parameters from bin\config.bin/CfgGlasses/None, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Lady_Blue";
		displayname = "Ladies Shades";
		model = "\A3\characters_f_gamma\Heads\Glasses\g_lady_blue";
		picture = "\A3\Characters_F\data\ui\icon_g_lady_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\glass_ca.paa"};
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 0, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 0, "G_HAF_default", 0, "G_CIVIL_female", 40, "G_CIVIL_male", 0};
		mass = 2;
	};
	class G_Diving //sources - ["A3_Characters_F_Heads"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Diving";
		displayname = "Diving Goggles";
		descriptionUse = "$str_a3_cfgglasses_g_diving1";
		model = "\A3\characters_f\Heads\glasses\g_diving";
		picture = "\A3\characters_F\data\ui\icon_G_Diving_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\g_diving_ca.paa"};
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 0, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 1000, "G_IRAN_default", 0, "G_IRAN_diver", 1000, "G_GUERIL_default", 0, "G_HAF_default", 0, "G_CIVIL_female", 0, "G_CIVIL_male", 0};
		mode = 1;
		mass = 3;
		scope = 2;
	};
	class G_B_Diving: G_Diving //inherits 12 parameters from bin\config.bin/CfgGlasses/G_Diving, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_B_Diving";
		displayname = "Diving Goggles [NATO]";
		model = "\A3\Characters_F_EPB\Heads\Glasses\g_b_diving.p3d";
		picture = "\A3\Characters_F_EPB\Heads\Glasses\data\UI\icon_g_diving_nato_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_epb\heads\glasses\data\g_diving_nato_ca.paa"};
		mass = 4;
	};
	class G_O_Diving: G_Diving //inherits 12 parameters from bin\config.bin/CfgGlasses/G_Diving, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_O_Diving";
		displayname = "Diving Goggles [CSAT]";
		model = "\A3\Characters_F_EPB\Heads\Glasses\g_o_diving.p3d";
		picture = "\A3\Characters_F_EPB\Heads\Glasses\data\UI\icon_g_diving_iran_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_epb\heads\glasses\data\g_diving_iran_ca.paa"};
		mass = 4;
	};
	class G_I_Diving: G_Diving //inherits 12 parameters from bin\config.bin/CfgGlasses/G_Diving, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_I_Diving";
		displayname = "Diving Goggles [AAF]";
		model = "\A3\Characters_F_EPB\Heads\Glasses\g_i_diving.p3d";
		picture = "\A3\Characters_F_EPB\Heads\Glasses\data\UI\icon_g_diving_rus_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_epb\heads\glasses\data\g_diving_rus_ca.paa"};
		mass = 4;
	};
	class G_Goggles_VR: None //inherits 7 parameters from bin\config.bin/CfgGlasses/None, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Goggles_VR";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "VR Goggles";
		model = "\A3\Characters_F_Bootcamp\Common\G_vr.p3d";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Goggles_VR_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_bootcamp\common\data\g_vr_co.paa"};
		identityTypes[] = {};
		mass = 6;
	};
	class G_Balaclava_blk: None //inherits 7 parameters from bin\config.bin/CfgGlasses/None, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Balaclava_blk";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Balaclava (Black)";
		model = "\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_bootcamp\guerrilla\data\headgear_balaclava_blk_co.paa"};
		identityTypes[] = {};
		mass = 6;
	};
	class G_Balaclava_oli: G_Balaclava_blk //inherits 12 parameters from bin\config.bin/CfgGlasses/G_Balaclava_blk, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Balaclava_oli";
		displayName = "Balaclava (Olive)";
		model = "\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_olive_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\headgear_balaclava_grn_co.paa"};
		identityTypes[] = {};
	};
	class G_Balaclava_combat: G_Balaclava_blk //inherits 12 parameters from bin\config.bin/CfgGlasses/G_Balaclava_blk, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Balaclava_combat";
		displayName = "Balaclava (Combat Goggles)";
		model = "\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_combat.p3d";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_combat_ca.paa";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_bootcamp\guerrilla\data\headgear_balaclava_blk_co.paa", "\a3\characters_f\heads\glasses\data\g_combat_ca.paa"};
		mass = 10;
	};
	class G_Balaclava_lowprofile: G_Balaclava_blk //inherits 12 parameters from bin\config.bin/CfgGlasses/G_Balaclava_blk, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Balaclava_lowprofile";
		displayName = "Balaclava (Low Profile Goggles)";
		model = "\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_lowprofile.p3d";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_lowprofile_ca.paa";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_bootcamp\guerrilla\data\headgear_balaclava_blk_co.paa", "\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"};
		mass = 8;
	};
	class G_Bandanna_blk: G_Balaclava_blk //inherits 12 parameters from bin\config.bin/CfgGlasses/G_Balaclava_blk, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Bandanna_blk";
		displayName = "Bandana (Black)";
		model = "\A3\Characters_F_Bootcamp\Guerrilla\g_bandana_clean.p3d";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Bandana_clean_ca.paa";
		hiddenSelectionsTextures[] = {"\a3\characters_f_bootcamp\guerrilla\data\headgear_bandmask_blk_co.paa"};
		mass = 4;
	};
	class G_Bandanna_oli: G_Bandanna_blk //inherits 7 parameters from bin\config.bin/CfgGlasses/G_Bandanna_blk, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Bandanna_oli";
		displayName = "Bandana (Olive)";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_BandMask_olive_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\headgear_bandMask_grn_co.paa"};
	};
	class G_Bandanna_khk: G_Bandanna_blk //inherits 7 parameters from bin\config.bin/CfgGlasses/G_Bandanna_blk, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Bandanna_khk";
		displayName = "Bandana (Khaki)";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_BandMask_khaki_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\headgear_bandMask_khk_co.paa"};
	};
	class G_Bandanna_tan: G_Bandanna_blk //inherits 7 parameters from bin\config.bin/CfgGlasses/G_Bandanna_blk, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Bandanna_tan";
		displayName = "Bandana (Tan)";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_BandMask_tan_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\headgear_bandMask_tan_co.paa"};
	};
	class G_Bandanna_beast: G_Bandanna_blk //inherits 7 parameters from bin\config.bin/CfgGlasses/G_Bandanna_blk, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Bandanna_beast";
		displayName = "Bandana (Beast)";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_BandMask_beast_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\headgear_bandMask_beast_co.paa"};
	};
	class G_Bandanna_shades: G_Bandanna_blk //inherits 7 parameters from bin\config.bin/CfgGlasses/G_Bandanna_blk, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Bandanna_shades";
		displayName = "Bandana (Shades)";
		model = "\A3\Characters_F_Bootcamp\Guerrilla\g_bandana_shades.p3d";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Bandana_shades_ca.paa";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_bootcamp\guerrilla\data\headgear_bandmask_blk_co.paa", "\a3\characters_f\heads\glasses\data\joeyx_black_ca.paa"};
		mass = 6;
	};
	class G_Bandanna_sport: G_Bandanna_shades //inherits 8 parameters from bin\config.bin/CfgGlasses/G_Bandanna_shades, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Bandanna_sport";
		displayName = "Bandana (Sport)";
		model = "\A3\Characters_F_Bootcamp\Guerrilla\g_bandana_sport.p3d";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Bandana_sport_ca.paa";
		hiddenSelectionsTextures[] = {"\a3\characters_f_bootcamp\guerrilla\data\headgear_bandmask_blk_co.paa", "\a3\characters_f\heads\glasses\data\sunglasses_sport_4_ca.paa"};
	};
	class G_Bandanna_aviator: G_Bandanna_shades //inherits 8 parameters from bin\config.bin/CfgGlasses/G_Bandanna_shades, sources - ["A3_Characters_F"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Bandanna_aviator";
		displayName = "Bandana (Aviator)";
		model = "\A3\Characters_F_Bootcamp\Guerrilla\g_bandana_aviator.p3d";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Bandana_aviator_ca.paa";
		hiddenSelectionsTextures[] = {"\a3\characters_f_bootcamp\guerrilla\data\headgear_bandmask_blk_co.paa", "\a3\characters_f\heads\glasses\data\glass_ca.paa"};
	};
	class G_Shades_Blue: None //inherits 7 parameters from bin\config.bin/CfgGlasses/None, sources - ["A3_Characters_F_Heads"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Shades_Blue";
		displayname = "Shades (Blue)";
		model = "\A3\characters_f\heads\glasses\g_shades_blue";
		picture = "\A3\Characters_F\data\ui\icon_g_shades_blue_CA.paa";
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 10, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 20, "G_HAF_default", 20, "G_CIVIL_female", 10, "G_CIVIL_male", 20};
	};
	class G_Sport_Blackred: None //inherits 7 parameters from bin\config.bin/CfgGlasses/None, sources - ["A3_Characters_F_Heads"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Sport_Blackred";
		displayname = "Sport Shades (Vulcan)";
		model = "\A3\characters_f\heads\glasses\g_sport_blackred";
		picture = "\A3\Characters_F\data\ui\icon_g_sport_blackred_CA.paa";
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 5, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 10, "G_HAF_default", 10, "G_CIVIL_female", 15, "G_CIVIL_male", 25};
	};
	class G_Tactical_Clear: None //inherits 7 parameters from bin\config.bin/CfgGlasses/None, sources - ["A3_Characters_F_Heads"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Tactical_Clear";
		displayname = "Tactical Glasses";
		model = "\A3\characters_f\heads\glasses\g_tactical_clear";
		picture = "\A3\Characters_F\data\ui\icon_g_tactical_CA.paa";
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 250, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 50, "G_NATO_SF", 250, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 0, "G_HAF_default", 50, "G_CIVIL_female", 0, "G_CIVIL_male", 0, "G_Rangemaster", 1};
	};
	class G_Balaclava_TI_blk_F: None //inherits 7 parameters from bin\config.bin/CfgGlasses/None, sources - ["A3_Characters_F_Exp"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Balaclava_TI_blk_F";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Stealth Balaclava (Black)";
		model = "\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
		picture = "\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_blk_F_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\G_Balaclava_TI_blk_F_co.paa"};
		identityTypes[] = {};
		mass = 6;
		DLC = "Expansion";
	};
	class G_Balaclava_TI_tna_F: G_Balaclava_TI_blk_F //inherits 13 parameters from bin\config.bin/CfgGlasses/G_Balaclava_TI_blk_F, sources - ["A3_Characters_F_Exp"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Balaclava_TI_tna_F";
		displayName = "Stealth Balaclava (Green)";
		picture = "\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_tna_F_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\G_Balaclava_TI_tna_F_co.paa"};
		identityTypes[] = {};
		mass = 6;
		DLC = "Expansion";
	};
	class G_Balaclava_TI_G_blk_F: G_Balaclava_TI_blk_F //inherits 13 parameters from bin\config.bin/CfgGlasses/G_Balaclava_TI_blk_F, sources - ["A3_Characters_F_Exp"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Balaclava_TI_G_blk_F";
		displayName = "Stealth Balaclava (Black, Goggles)";
		model = "\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
		picture = "\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_G_blk_F_ca.paa";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\G_Balaclava_TI_blk_F_co.paa", "\A3\Characters_F\Heads\Glasses\data\g_combat_ca.paa"};
		identityTypes[] = {};
		mass = 10;
		DLC = "Expansion";
	};
	class G_Balaclava_TI_G_tna_F: G_Balaclava_TI_tna_F //inherits 8 parameters from bin\config.bin/CfgGlasses/G_Balaclava_TI_tna_F, sources - ["A3_Characters_F_Exp"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Balaclava_TI_G_tna_F";
		displayName = "Stealth Balaclava (Green, Goggles)";
		model = "\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
		picture = "\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_G_tna_F_ca.paa";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\G_Balaclava_TI_tna_F_co.paa", "\A3\Characters_F\Heads\Glasses\data\g_combat_ca.paa"};
		identityTypes[] = {};
		mass = 10;
		DLC = "Expansion";
	};
	class G_Combat_Goggles_tna_F: None //inherits 7 parameters from bin\config.bin/CfgGlasses/None, sources - ["A3_Characters_F_Exp"]
	{
		author = "Bohemia Interactive";
		_generalMacro = "G_Combat_Goggles_tna_F";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Combat Goggles (Green)";
		model = "\A3\Characters_F_Beta\Heads\Glasses\g_combat.p3d";
		picture = "\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Combat_Goggles_tna_F_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\G_Combat_Goggles_tna_F_ca.paa"};
		identityTypes[] = {};
		mass = 6;
		DLC = "Expansion";
	};
};
class CfgFaces //sources - ["A3_Characters_F_Heads"]
{
	class Default //sources - []
	{
		class Default //sources - []
		{
			name = "";
			head = "";
			material = "";
			texture = "#(rgb,8,8,3)color(0.5,0.5,1,1)";
			textureHL = "#(rgb,8,8,3)color(0.5,0.5,1,1)";
			materialHL = "";
			identityTypes[] = {"Default"};
		};
		class Custom //sources - []
		{
			name = "";
			head = "";
			material = "";
			texture = "#(rgb,8,8,3)color(1,1,1,1)";
			textureHL = "#(rgb,8,8,3)color(0.5,0.5,1,1)";
			materialHL = "";
			front = "#(rgb,8,8,3)color(1,1,1,1)";
			side = "#(rgb,8,8,3)color(1,1,1,1)";
			back = "#(rgb,8,8,3)color(1,1,1,1)";
			identityTypes[] = {};
		};
	};
	class Man_A3: Default //inherits 2 parameters from bin\config.bin/CfgFaces/Default, sources - ["A3_Characters_F_Heads","A3_Characters_F_Mark","A3_Characters_F_Exp"]
	{
		class Default //sources - ["A3_Characters_F_Heads"]
		{
			displayname = "Default face";
			texture = "\A3\Characters_F\Heads\Data\m_White_01_co.paa";
			head = "DefaultHead_A3";
			identityTypes[] = {};
			material = "A3\Characters_F\Heads\Data\m_White_01.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 0;
		};
		class Custom: Custom //inherits 10 parameters from bin\config.bin/CfgFaces/Default/Custom, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Custom face";
			texture = "#(argb,8,8,3)color(0.596,0.412,0.365,1)";
			head = "DefaultHead_A3";
			identityTypes[] = {};
			material = "A3\Characters_F\Heads\Data\m_White_01.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_01_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
		};
		class PersianHead_A3_01: Default //inherits 10 parameters from bin\config.bin/CfgFaces/Man_A3/Default, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Bahadur";
			texture = "\A3\Characters_F\Heads\Data\m_persian_01_co.paa";
			textureHL = "\A3\Characters_F\Heads\Data\hl_black_bald_co.paa";
			head = "PersianHead_A3";
			identityTypes[] = {"Head_TK"};
			material = "\A3\Characters_F\Heads\Data\m_persian_01.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_persian_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_persian_01_injury.rvmat";
		};
		class PersianHead_A3_02: PersianHead_A3_01 //inherits 9 parameters from bin\config.bin/CfgFaces/Man_A3/PersianHead_A3_01, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Jalali";
			texture = "\A3\Characters_F\Heads\Data\m_persian_02_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_persian_02.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_persian_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_persian_02_injury.rvmat";
		};
		class PersianHead_A3_03: PersianHead_A3_01 //inherits 9 parameters from bin\config.bin/CfgFaces/Man_A3/PersianHead_A3_01, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Sabet";
			texture = "\A3\Characters_F\Heads\Data\m_persian_03_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_persian_03.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_persian_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_persian_03_injury.rvmat";
		};
		class PersianHead_A3_04_a: PersianHead_A3_01 //inherits 9 parameters from bin\config.bin/CfgFaces/Man_A3/PersianHead_A3_01, sources - ["A3_Characters_F_Heads","A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Bahadur (Arid)";
			texture = "\A3\Characters_F_Mark\Heads\Data\m_persian_04_a_co.paa";
			textureHL = "\A3\Characters_F\Heads\Data\hl_white_hairy_3_co.paa";
			head = "PersianHead_A3";
			identityTypes[] = {"Head_TK_camo_arid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_persian_04_a.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_persian_04_a_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_persian_04_a_injury.rvmat";
			DLC = "Mark";
		};
		class PersianHead_A3_04_l: PersianHead_A3_04_a //inherits 10 parameters from bin\config.bin/CfgFaces/Man_A3/PersianHead_A3_04_a, sources - ["A3_Characters_F_Heads","A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Bahadur (Lush)";
			identityTypes[] = {"Head_TK_camo_lush"};
			texture = "\A3\Characters_F_Mark\Heads\Data\m_persian_04_l_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_persian_04_l.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_persian_04_l_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_persian_04_l_injury.rvmat";
			DLC = "Mark";
		};
		class PersianHead_A3_04_sa: PersianHead_A3_04_a //inherits 10 parameters from bin\config.bin/CfgFaces/Man_A3/PersianHead_A3_04_a, sources - ["A3_Characters_F_Heads","A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Bahadur (Semi-Arid)";
			identityTypes[] = {"Head_TK_camo_semiarid"};
			texture = "\A3\Characters_F_Mark\Heads\Data\m_persian_04_sa_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_persian_04_sa.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_persian_04_sa_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_persian_04_sa_injury.rvmat";
			DLC = "Mark";
		};
		class WhiteHead_01: Default //inherits 10 parameters from bin\config.bin/CfgFaces/Man_A3/Default, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Bayh";
			texture = "\A3\Characters_F\Heads\Data\m_White_01_co.paa";
			head = "NATOHead_A3";
			identityTypes[] = {"Head_NATO", "Head_Euro"};
			material = "\A3\Characters_F\Heads\Data\m_White_01.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_01_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
		};
		class WhiteHead_02: WhiteHead_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_01, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Burr";
			texture = "\A3\Characters_F\Heads\Data\m_White_02_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_02.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_02_injury.rvmat";
		};
		class WhiteHead_03: WhiteHead_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_01, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Coburn";
			texture = "\A3\Characters_F\Heads\Data\m_White_03_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_03.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_03_injury.rvmat";
		};
		class WhiteHead_04: WhiteHead_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_01, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Collins";
			texture = "\A3\Characters_F\Heads\Data\m_White_04_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_04.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_04_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_04_injury.rvmat";
		};
		class WhiteHead_05: WhiteHead_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_01, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Campbell";
			texture = "\A3\Characters_F\Heads\Data\m_White_05_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_05.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
		};
		class WhiteHead_06: WhiteHead_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_01, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Dayton";
			texture = "\A3\Characters_F\Heads\Data\m_White_06_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_06.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_06_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_06_injury.rvmat";
		};
		class WhiteHead_07: WhiteHead_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_01, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Dorgan";
			texture = "\A3\Characters_F\Heads\Data\m_White_07_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_07.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_07_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_07_injury.rvmat";
		};
		class WhiteHead_08: WhiteHead_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_01, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Halliwell";
			texture = "\A3\Characters_F\Heads\Data\m_White_08_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_08.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_08_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_08_injury.rvmat";
		};
		class WhiteHead_09: WhiteHead_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_01, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Johnson";
			texture = "\A3\Characters_F\Heads\Data\m_White_09_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_09.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_09_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_09_injury.rvmat";
		};
		class WhiteHead_10: WhiteHead_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_01, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Martinez";
			texture = "\A3\Characters_F\Heads\Data\m_White_10_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_10.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_10_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_10_injury.rvmat";
		};
		class WhiteHead_11: WhiteHead_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_01, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Kirby";
			texture = "\A3\Characters_F\Heads\Data\m_White_11_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_11.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_11_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_11_injury.rvmat";
		};
		class WhiteHead_12: WhiteHead_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_01, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Reed";
			texture = "\A3\Characters_F\Heads\Data\m_White_12_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_12.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_12_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_12_injury.rvmat";
		};
		class WhiteHead_13: WhiteHead_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_01, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Santorum";
			texture = "\A3\Characters_F\Heads\Data\m_White_13_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_13.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_13_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_13_injury.rvmat";
		};
		class WhiteHead_14: WhiteHead_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_01, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Smith";
			texture = "\A3\Characters_F\Heads\Data\m_White_14_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_14.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_14_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_14_injury.rvmat";
		};
		class WhiteHead_15: WhiteHead_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_01, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Snowe";
			texture = "\A3\Characters_F\Heads\Data\m_White_15_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_15.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_15_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_15_injury.rvmat";
		};
		class WhiteHead_16: WhiteHead_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_01, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Kelly";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_white_16_co.paa";
			material = "\A3\Characters_F_EPB\Heads\Data\m_white_16.rvmat";
			materialWounded1 = "\A3\Characters_F_EPB\Heads\Data\m_white_16_injury.rvmat";
			materialWounded2 = "\A3\Characters_F_EPB\Heads\Data\m_white_16_injury.rvmat";
			textureHL = "\A3\Characters_F_EPB\Heads\Data\hl_white_16_co.paa";
			materialHL = "\A3\Characters_F_EPB\Heads\Data\hl_white_16.rvmat";
			textureHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_white_16_co.paa";
			materialHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_white_16.rvmat";
		};
		class WhiteHead_17: WhiteHead_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_01, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "O'Connor";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_white_17_co.paa";
			material = "\A3\Characters_F_EPB\Heads\Data\m_white_17.rvmat";
			materialWounded1 = "\A3\Characters_F_EPB\Heads\Data\m_white_17_injury.rvmat";
			materialWounded2 = "\A3\Characters_F_EPB\Heads\Data\m_white_17_injury.rvmat";
			textureHL = "\A3\Characters_F_EPB\Heads\Data\hl_white_17_co.paa";
			materialHL = "\A3\Characters_F_EPB\Heads\Data\hl_white_17.rvmat";
			textureHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_white_17_co.paa";
			materialHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_white_17.rvmat";
		};
		class WhiteHead_18: WhiteHead_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_01, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Byrne";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_white_18_co.paa";
			material = "\A3\Characters_F_EPB\Heads\Data\m_white_18.rvmat";
			materialWounded1 = "\A3\Characters_F_EPB\Heads\Data\m_white_18_injury.rvmat";
			materialWounded2 = "\A3\Characters_F_EPB\Heads\Data\m_white_18_injury.rvmat";
			textureHL = "\A3\Characters_F_EPB\Heads\Data\hl_white_18_co.paa";
			materialHL = "\A3\Characters_F_EPB\Heads\Data\hl_white_18.rvmat";
			textureHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_white_18_co.paa";
			materialHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_white_18.rvmat";
		};
		class WhiteHead_19: WhiteHead_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_01, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "O'Brien";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_white_19_co.paa";
			material = "\A3\Characters_F_EPB\Heads\Data\m_white_19.rvmat";
			materialWounded1 = "\A3\Characters_F_EPB\Heads\Data\m_white_19_injury.rvmat";
			materialWounded2 = "\A3\Characters_F_EPB\Heads\Data\m_white_19_injury.rvmat";
			textureHL = "\A3\Characters_F_EPB\Heads\Data\hl_white_19_co.paa";
			materialHL = "\A3\Characters_F_EPB\Heads\Data\hl_white_19.rvmat";
			textureHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_white_19_co.paa";
			materialHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_white_19.rvmat";
		};
		class WhiteHead_20: WhiteHead_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_01, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Walsh";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_white_20_co.paa";
			material = "\A3\Characters_F_EPB\Heads\Data\m_white_20.rvmat";
			materialWounded1 = "\A3\Characters_F_EPB\Heads\Data\m_white_20_injury.rvmat";
			materialWounded2 = "\A3\Characters_F_EPB\Heads\Data\m_white_20_injury.rvmat";
			textureHL = "\A3\Characters_F_EPB\Heads\Data\hl_white_20_co.paa";
			materialHL = "\A3\Characters_F_EPB\Heads\Data\hl_white_20.rvmat";
			textureHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_white_20_co.paa";
			materialHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_white_20.rvmat";
		};
		class WhiteHead_21: WhiteHead_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_01, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "O'Sullivan";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_white_21_co.paa";
			material = "\A3\Characters_F_EPB\Heads\Data\m_white_21.rvmat";
			materialWounded1 = "\A3\Characters_F_EPB\Heads\Data\m_white_21_injury.rvmat";
			materialWounded2 = "\A3\Characters_F_EPB\Heads\Data\m_white_21_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
		};
		class WhiteHead_22_a: WhiteHead_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_01, sources - ["A3_Characters_F_Heads","A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Kirby (Arid)";
			identityTypes[] = {"Head_NATO_camo_arid"};
			texture = "\A3\Characters_F_Mark\Heads\Data\m_White_22_a_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_White_22_a.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_White_22_a_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_White_22_a_injury.rvmat";
			DLC = "Mark";
		};
		class WhiteHead_22_l: WhiteHead_22_a //inherits 8 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_22_a, sources - ["A3_Characters_F_Heads","A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Kirby (Lush)";
			identityTypes[] = {"Head_NATO_camo_lush"};
			texture = "\A3\Characters_F_Mark\Heads\Data\m_White_22_l_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_White_22_L.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_White_22_l_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_White_22_l_injury.rvmat";
			DLC = "Mark";
		};
		class WhiteHead_22_sa: WhiteHead_22_a //inherits 8 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_22_a, sources - ["A3_Characters_F_Heads","A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Kirby (Semi-Arid)";
			identityTypes[] = {"Head_NATO_camo_semiarid"};
			texture = "\A3\Characters_F_Mark\Heads\Data\m_White_22_sa_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_White_22_sa.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_White_22_sa_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_White_22_sa_injury.rvmat";
			DLC = "Mark";
		};
		class AfricanHead_01: Default //inherits 10 parameters from bin\config.bin/CfgFaces/Man_A3/Default, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Williams";
			texture = "\A3\Characters_F\Heads\Data\m_african_01_co.paa";
			head = "BlackHead_A3";
			identityTypes[] = {"Head_NATO", "Head_African"};
			material = "\A3\Characters_F\Heads\Data\m_african_01.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_african_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_african_01_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_black_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_black_bald_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat";
		};
		class AfricanHead_02: AfricanHead_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/AfricanHead_01, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Hasan";
			texture = "\A3\Characters_F\Heads\Data\m_african_02_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_african_02.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_african_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_african_02_injury.rvmat";
		};
		class AfricanHead_03: AfricanHead_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/AfricanHead_01, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Jesus";
			texture = "\A3\Characters_F\Heads\Data\m_african_03_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_african_03.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_african_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_african_03_injury.rvmat";
		};
		class GreekHead_A3_01: Default //inherits 10 parameters from bin\config.bin/CfgFaces/Man_A3/Default, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Athanasiadis";
			texture = "\A3\Characters_F\Heads\Data\m_Greek_01_co.paa";
			head = "GreekHead_A3";
			identityTypes[] = {"Head_Greek"};
			material = "\A3\Characters_F\Heads\Data\m_Greek_01.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Greek_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Greek_01_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_3_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_3_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
		};
		class GreekHead_A3_02: GreekHead_A3_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/GreekHead_A3_01, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Baros";
			texture = "\A3\Characters_F\Heads\Data\m_Greek_02_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_Greek_02.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Greek_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Greek_02_injury.rvmat";
		};
		class GreekHead_A3_03: GreekHead_A3_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/GreekHead_A3_01, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Constantinou";
			texture = "\A3\Characters_F\Heads\Data\m_Greek_03_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_Greek_03.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Greek_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Greek_03_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_old_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_old.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_old_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_old.rvmat";
			identityTypes[] = {"Head_Greek", "Head_Rangemaster"};
		};
		class GreekHead_A3_04: GreekHead_A3_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/GreekHead_A3_01, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Costas";
			texture = "\A3\Characters_F\Heads\Data\m_Greek_04_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_Greek_04.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Greek_04_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Greek_04_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_old_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_old.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_old_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_old.rvmat";
		};
		class GreekHead_A3_05: GreekHead_A3_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/GreekHead_A3_01, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Doukas";
			texture = "\A3\Characters_F\Heads\Data\m_White_01_co.paa";
			identityTypes[] = {"Head_NATO", "Head_Greek"};
			material = "\A3\Characters_F\Heads\Data\m_White_01.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_01_injury.rvmat";
		};
		class GreekHead_A3_06: GreekHead_A3_05 //inherits 7 parameters from bin\config.bin/CfgFaces/Man_A3/GreekHead_A3_05, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Gikas";
			texture = "\A3\Characters_F\Heads\Data\m_White_02_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_02.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_02_injury.rvmat";
		};
		class GreekHead_A3_07: GreekHead_A3_05 //inherits 7 parameters from bin\config.bin/CfgFaces/Man_A3/GreekHead_A3_05, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Christou";
			texture = "\A3\Characters_F\Heads\Data\m_White_03_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_03.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_03_injury.rvmat";
		};
		class GreekHead_A3_08: GreekHead_A3_05 //inherits 7 parameters from bin\config.bin/CfgFaces/Man_A3/GreekHead_A3_05, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Kanelloupou";
			texture = "\A3\Characters_F\Heads\Data\m_White_04_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_04.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_04_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_04_injury.rvmat";
		};
		class GreekHead_A3_09: GreekHead_A3_05 //inherits 7 parameters from bin\config.bin/CfgFaces/Man_A3/GreekHead_A3_05, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Savalas";
			texture = "\A3\Characters_F\Heads\Data\m_White_05_co.paa";
			identityTypes[] = {"Head_NATO", "Head_Greek"};
			material = "\A3\Characters_F\Heads\Data\m_White_05.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
		};
		class GreekHead_A3_10_a: GreekHead_A3_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/GreekHead_A3_01, sources - ["A3_Characters_F_Heads","A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Baros (Arid)";
			identityTypes[] = {"Head_Greek_camo_arid"};
			texture = "\A3\Characters_F_Mark\Heads\Data\m_Greek_10_a_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_Greek_10_a.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_Greek_10_a_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_Greek_10_a_injury.rvmat";
			DLC = "Mark";
		};
		class GreekHead_A3_10_l: GreekHead_A3_10_a //inherits 8 parameters from bin\config.bin/CfgFaces/Man_A3/GreekHead_A3_10_a, sources - ["A3_Characters_F_Heads","A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Baros (Lush)";
			identityTypes[] = {"Head_Greek_camo_lush"};
			texture = "\A3\Characters_F_Mark\Heads\Data\m_Greek_10_l_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_Greek_10_l.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_Greek_10_l_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_Greek_10_l_injury.rvmat";
			DLC = "Mark";
		};
		class GreekHead_A3_10_sa: GreekHead_A3_10_a //inherits 8 parameters from bin\config.bin/CfgFaces/Man_A3/GreekHead_A3_10_a, sources - ["A3_Characters_F_Heads","A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Baros (Semi-Arid)";
			identityTypes[] = {"Head_Greek_camo_semiarid"};
			texture = "\A3\Characters_F_Mark\Heads\Data\m_Greek_10_sa_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_Greek_10_sa.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_Greek_10_sa_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_Greek_10_sa_injury.rvmat";
			DLC = "Mark";
		};
		class AsianHead_A3_01: Default //inherits 10 parameters from bin\config.bin/CfgFaces/Man_A3/Default, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Ximi";
			texture = "\A3\Characters_F\Heads\Data\m_Asian_01_co.paa";
			head = "AsianHead_A3";
			identityTypes[] = {"Head_Asian"};
			material = "\A3\Characters_F\Heads\Data\m_Asian_01.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Asian_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Asian_01_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat";
		};
		class AsianHead_A3_02: AsianHead_A3_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/AsianHead_A3_01, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Jeong";
			texture = "\A3\Characters_F\Heads\Data\m_Asian_02_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_Asian_02.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Asian_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Asian_02_injury.rvmat";
		};
		class AsianHead_A3_03: AsianHead_A3_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/AsianHead_A3_01, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Tung";
			texture = "\A3\Characters_F\Heads\Data\m_Asian_03_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_Asian_03.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Asian_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Asian_03_injury.rvmat";
		};
		class Nikos: GreekHead_A3_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/GreekHead_A3_01, sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Nikos";
			head = "Nikos";
			texture = "\A3\Characters_F\Heads\Data\m_nikos_co.paa";
			identityTypes[] = {"Nikos"};
			material = "\A3\Characters_F\Heads\Data\m_nikos.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_nikos_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_nikos_injury.rvmat";
			disabled = 1;
		};
		class Miller: Default //inherits 10 parameters from bin\config.bin/CfgFaces/Man_A3/Default, sources - ["A3_Characters_F_Heads"]
		{
			displayname = "Miller";
			head = "Miller";
			texture = "\A3\Characters_F\Heads\Data\m_Miller_co.paa";
			identityTypes[] = {"Miller"};
			material = "\A3\Characters_F\Heads\Data\m_Miller.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Miller_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Miller_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 1;
		};
		class Kerry: Default //inherits 10 parameters from bin\config.bin/CfgFaces/Man_A3/Default, sources - ["A3_Characters_F_Heads"]
		{
			head = "KerryHead_A3";
			texture = "\A3\Characters_F_EPA\Heads\Data\m_kerry_A_co.paa";
			identityTypes[] = {"Kerry"};
			material = "A3\Characters_F_EPA\Heads\Data\m_kerry_A.rvmat";
			materialWounded1 = "A3\Characters_F_EPA\Heads\Data\m_kerry_A_injury.rvmat";
			materialWounded2 = "A3\Characters_F_EPA\Heads\Data\m_kerry_A_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 1;
		};
		class Kerry_A_F: Kerry //inherits 11 parameters from bin\config.bin/CfgFaces/Man_A3/Kerry, sources - ["A3_Characters_F_Heads"]
		{
			identityTypes[] = {"Kerry_A"};
		};
		class kerry_B1_F: Kerry //inherits 11 parameters from bin\config.bin/CfgFaces/Man_A3/Kerry, sources - ["A3_Characters_F_Heads"]
		{
			texture = "\A3\Characters_F_EPA\Heads\Data\m_kerry_B1_co.paa";
			identityTypes[] = {"kerry_B1"};
			material = "A3\Characters_F_EPA\Heads\Data\m_kerry_B1.rvmat";
			materialWounded1 = "A3\Characters_F_EPA\Heads\Data\m_kerry_b1_injury.rvmat";
			materialWounded2 = "A3\Characters_F_EPA\Heads\Data\m_kerry_b1_injury.rvmat";
		};
		class kerry_B2_F: Kerry //inherits 11 parameters from bin\config.bin/CfgFaces/Man_A3/Kerry, sources - ["A3_Characters_F_Heads"]
		{
			texture = "\A3\Characters_F_EPA\Heads\Data\m_kerry_B2_co.paa";
			identityTypes[] = {"kerry_B2"};
			material = "A3\Characters_F_EPA\Heads\Data\m_kerry_B2.rvmat";
			materialWounded1 = "A3\Characters_F_EPA\Heads\Data\m_kerry_b2_injury.rvmat";
			materialWounded2 = "A3\Characters_F_EPA\Heads\Data\m_kerry_b2_injury.rvmat";
			textureHL = "\A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty_co.paa";
			materialHL = "\A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty.rvmat";
			textureHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty_co.paa";
			materialHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty.rvmat";
		};
		class Kerry_C_F: Kerry //inherits 11 parameters from bin\config.bin/CfgFaces/Man_A3/Kerry, sources - ["A3_Characters_F_Heads"]
		{
			texture = "\A3\Characters_F_EPA\Heads\Data\m_kerry_C_co.paa";
			identityTypes[] = {"Kerry_C"};
			material = "A3\Characters_F_EPA\Heads\Data\m_kerry_C.rvmat";
			materialWounded1 = "A3\Characters_F_EPA\Heads\Data\m_kerry_C_injury.rvmat";
			materialWounded2 = "A3\Characters_F_EPA\Heads\Data\m_kerry_C_injury.rvmat";
		};
		class IG_Leader: Default //inherits 10 parameters from bin\config.bin/CfgFaces/Man_A3/Default, sources - ["A3_Characters_F_Heads"]
		{
			displayname = "Stavrou";
			head = "IG_Leader";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_IG_leader_co.paa";
			identityTypes[] = {"IG_Leader"};
			material = "\A3\Characters_F_EPB\Heads\Data\m_IG_leader.rvmat";
			materialWounded1 = "A3\characters_F_EPB\Heads\Data\m_IG_leader_injury.rvmat";
			materialWounded2 = "A3\characters_F_EPB\Heads\Data\m_IG_leader_injury.rvmat";
			textureHL = "\A3\Characters_F_EPB\Heads\Data\hl_Stavrou_dirty_co.paa";
			materialHL = "\A3\Characters_F_EPB\Heads\Data\hl_stavrou_dirty.rvmat";
			textureHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_Stavrou_dirty_co.paa";
			materialHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_stavrou_dirty.rvmat";
			disabled = 1;
		};
		class O_Colonel: Default //inherits 10 parameters from bin\config.bin/CfgFaces/Man_A3/Default, sources - ["A3_Characters_F_Heads"]
		{
			displayname = "Namdar";
			head = "PersianHead_A3";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_white_17_co.paa";
			identityTypes[] = {"O_Colonel"};
			material = "\A3\Characters_F_EPB\Heads\Data\m_white_17.rvmat";
			materialWounded1 = "\A3\Characters_F_EPB\Heads\Data\m_white_17_injury.rvmat";
			materialWounded2 = "\A3\Characters_F_EPB\Heads\Data\m_white_17_injury.rvmat";
			textureHL = "\A3\Characters_F_EPB\Heads\Data\hl_white_17_co.paa";
			materialHL = "\A3\Characters_F_EPB\Heads\Data\hl_white_17.rvmat";
			textureHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_white_17_co.paa";
			materialHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_white_17.rvmat";
			disabled = 1;
		};
		class CamoHead_White_01_F: WhiteHead_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_01, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_White_01";
			texture = "\A3\Characters_F\Heads\Data\m_White_01_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_01.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_01_injury.rvmat";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_White_02_F: WhiteHead_02 //inherits 6 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_02, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_White_02";
			texture = "\A3\Characters_F\Heads\Data\m_White_02_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_02.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_02_injury.rvmat";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_White_03_F: WhiteHead_03 //inherits 6 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_03, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_White_03";
			texture = "\A3\Characters_F\Heads\Data\m_White_03_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_03.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_03_injury.rvmat";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_White_04_F: WhiteHead_04 //inherits 6 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_04, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_White_04";
			texture = "\A3\Characters_F\Heads\Data\m_White_04_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_04.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_04_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_04_injury.rvmat";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_White_05_F: WhiteHead_05 //inherits 6 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_05, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_White_05";
			texture = "\A3\Characters_F\Heads\Data\m_White_05_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_05.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_05_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_05_injury.rvmat";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_White_06_F: WhiteHead_06 //inherits 6 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_06, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_White_06";
			texture = "\A3\Characters_F\Heads\Data\m_White_06_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_06.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_06_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_06_injury.rvmat";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_White_07_F: WhiteHead_07 //inherits 6 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_07, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_White_07";
			texture = "\A3\Characters_F\Heads\Data\m_White_07_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_07.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_07_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_07_injury.rvmat";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_White_08_F: WhiteHead_08 //inherits 6 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_08, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_White_08";
			texture = "\A3\Characters_F\Heads\Data\m_White_08_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_08.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_08_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_08_injury.rvmat";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_White_09_F: WhiteHead_09 //inherits 6 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_09, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_White_09";
			texture = "\A3\Characters_F\Heads\Data\m_White_09_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_09.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_09_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_09_injury.rvmat";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_White_10_F: WhiteHead_10 //inherits 6 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_10, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_White_10";
			texture = "\A3\Characters_F\Heads\Data\m_White_10_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_10.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_10_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_10_injury.rvmat";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_White_11_F: WhiteHead_11 //inherits 6 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_11, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_White_11";
			texture = "\A3\Characters_F\Heads\Data\m_White_11_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_11.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_11_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_11_injury.rvmat";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_White_12_F: WhiteHead_12 //inherits 6 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_12, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_White_12";
			texture = "\A3\Characters_F\Heads\Data\m_White_12_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_12.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_12_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_12_injury.rvmat";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_White_13_F: WhiteHead_13 //inherits 6 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_13, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_White_13";
			texture = "\A3\Characters_F\Heads\Data\m_White_13_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_13.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_13_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_13_injury.rvmat";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_White_14_F: WhiteHead_14 //inherits 6 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_14, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_White_14";
			texture = "\A3\Characters_F\Heads\Data\m_White_14_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_14.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_14_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_14_injury.rvmat";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_White_15_F: WhiteHead_15 //inherits 6 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_15, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_White_15";
			texture = "\A3\Characters_F\Heads\Data\m_White_15_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_15.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_15_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_15_injury.rvmat";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_White_16_F: WhiteHead_16 //inherits 10 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_16, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_White_16";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_White_16_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_16.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_16_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_16_injury.rvmat";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_White_17_F: WhiteHead_17 //inherits 10 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_17, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_White_17";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_White_17_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_17.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_17_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_17_injury.rvmat";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_White_18_F: WhiteHead_18 //inherits 10 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_18, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_White_18";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_White_18_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_18.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_18_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_18_injury.rvmat";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_White_19_F: WhiteHead_19 //inherits 10 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_19, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_White_19";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_White_19_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_19.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_19_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_19_injury.rvmat";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_White_20_F: WhiteHead_20 //inherits 10 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_20, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_White_20";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_White_20_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_20.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_20_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_20_injury.rvmat";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_White_21_F: WhiteHead_21 //inherits 10 parameters from bin\config.bin/CfgFaces/Man_A3/WhiteHead_21, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_White_21";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_White_21_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_21.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_21_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_21_injury.rvmat";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_African_01_F: AfricanHead_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/AfricanHead_01, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_African_01";
			texture = "\A3\Characters_F\Heads\Data\m_African_01_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_African_01.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_African_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_African_01_injury.rvmat";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_African_02_F: AfricanHead_02 //inherits 6 parameters from bin\config.bin/CfgFaces/Man_A3/AfricanHead_02, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_African_02";
			texture = "\A3\Characters_F\Heads\Data\m_African_02_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_African_02.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_African_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_African_02_injury.rvmat";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_African_03_F: AfricanHead_03 //inherits 6 parameters from bin\config.bin/CfgFaces/Man_A3/AfricanHead_03, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_African_03";
			texture = "\A3\Characters_F\Heads\Data\m_African_03_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_African_03.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_African_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_African_03_injury.rvmat";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_Greek_01_F: GreekHead_A3_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/GreekHead_A3_01, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_Greek_01";
			texture = "\A3\Characters_F\Heads\Data\m_Greek_01_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_Greek_01.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_Greek_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_Greek_01_injury.rvmat";
			identityTypes[] = {"Head_Greek_camo_lush", "Head_Greek_camo_arid", "Head_Greek_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_Greek_02_F: GreekHead_A3_02 //inherits 6 parameters from bin\config.bin/CfgFaces/Man_A3/GreekHead_A3_02, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_Greek_02";
			texture = "\A3\Characters_F\Heads\Data\m_Greek_02_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_Greek_02.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_Greek_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_Greek_02_injury.rvmat";
			identityTypes[] = {"Head_Greek_camo_lush", "Head_Greek_camo_arid", "Head_Greek_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_Greek_03_F: GreekHead_A3_03 //inherits 11 parameters from bin\config.bin/CfgFaces/Man_A3/GreekHead_A3_03, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_Greek_03";
			texture = "\A3\Characters_F\Heads\Data\m_Greek_03_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_Greek_03.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_Greek_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_Greek_03_injury.rvmat";
			identityTypes[] = {"Head_Greek_camo_lush", "Head_Greek_camo_arid", "Head_Greek_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_Greek_04_F: GreekHead_A3_04 //inherits 10 parameters from bin\config.bin/CfgFaces/Man_A3/GreekHead_A3_04, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_Greek_04";
			texture = "\A3\Characters_F\Heads\Data\m_Greek_04_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_Greek_04.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_Greek_04_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_Greek_04_injury.rvmat";
			identityTypes[] = {"Head_Greek_camo_lush", "Head_Greek_camo_arid", "Head_Greek_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_Greek_05_F: GreekHead_A3_05 //inherits 7 parameters from bin\config.bin/CfgFaces/Man_A3/GreekHead_A3_05, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_Greek_05";
			texture = "\A3\Characters_F\Heads\Data\m_White_01_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_01.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_01_injury.rvmat";
			identityTypes[] = {"Head_Greek_camo_lush", "Head_Greek_camo_arid", "Head_Greek_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_Greek_06_F: GreekHead_A3_06 //inherits 6 parameters from bin\config.bin/CfgFaces/Man_A3/GreekHead_A3_06, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_Greek_06";
			texture = "\A3\Characters_F\Heads\Data\m_White_02_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_02.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_02_injury.rvmat";
			identityTypes[] = {"Head_Greek_camo_lush", "Head_Greek_camo_arid", "Head_Greek_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_Greek_07_F: GreekHead_A3_07 //inherits 6 parameters from bin\config.bin/CfgFaces/Man_A3/GreekHead_A3_07, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_Greek_07";
			texture = "\A3\Characters_F\Heads\Data\m_White_03_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_03.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_03_injury.rvmat";
			identityTypes[] = {"Head_Greek_camo_lush", "Head_Greek_camo_arid", "Head_Greek_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_Greek_08_F: GreekHead_A3_08 //inherits 6 parameters from bin\config.bin/CfgFaces/Man_A3/GreekHead_A3_08, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_Greek_08";
			texture = "\A3\Characters_F\Heads\Data\m_White_04_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_04.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_04_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_04_injury.rvmat";
			identityTypes[] = {"Head_Greek_camo_lush", "Head_Greek_camo_arid", "Head_Greek_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_Greek_09_F: GreekHead_A3_09 //inherits 7 parameters from bin\config.bin/CfgFaces/Man_A3/GreekHead_A3_09, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_Greek_09";
			texture = "\A3\Characters_F\Heads\Data\m_White_05_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_05.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_05_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_05_injury.rvmat";
			identityTypes[] = {"Head_Greek_camo_lush", "Head_Greek_camo_arid", "Head_Greek_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_Asian_01_F: AsianHead_A3_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/AsianHead_A3_01, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_Asian_01";
			texture = "\A3\Characters_F\Heads\Data\m_Asian_01_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_Asian_01.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_Asian_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_Asian_01_injury.rvmat";
			identityTypes[] = {"Head_Greek_camo_lush", "Head_Greek_camo_arid", "Head_Greek_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_Asian_02_F: AsianHead_A3_02 //inherits 6 parameters from bin\config.bin/CfgFaces/Man_A3/AsianHead_A3_02, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_Asian_02";
			texture = "\A3\Characters_F\Heads\Data\m_Asian_02_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_Asian_02.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_Asian_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_Asian_02_injury.rvmat";
			identityTypes[] = {"Head_Greek_camo_lush", "Head_Greek_camo_arid", "Head_Greek_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_Asian_03_F: AsianHead_A3_03 //inherits 6 parameters from bin\config.bin/CfgFaces/Man_A3/AsianHead_A3_03, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_Asian_03";
			texture = "\A3\Characters_F\Heads\Data\m_Asian_03_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_Asian_03.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_Asian_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_Asian_03_injury.rvmat";
			identityTypes[] = {"Head_Greek_camo_lush", "Head_Greek_camo_arid", "Head_Greek_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_Persian_01_F: PersianHead_A3_01 //inherits 9 parameters from bin\config.bin/CfgFaces/Man_A3/PersianHead_A3_01, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_Persian_01";
			texture = "\A3\Characters_F\Heads\Data\m_Persian_01_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_Persian_01.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_Persian_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_Persian_01_injury.rvmat";
			identityTypes[] = {"Head_TK_camo_lush", "Head_TK_camo_arid", "Head_TK_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_Persian_02_F: PersianHead_A3_02 //inherits 6 parameters from bin\config.bin/CfgFaces/Man_A3/PersianHead_A3_02, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_Persian_02";
			texture = "\A3\Characters_F\Heads\Data\m_Persian_02_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_Persian_02.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_Persian_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_Persian_02_injury.rvmat";
			identityTypes[] = {"Head_TK_camo_lush", "Head_TK_camo_arid", "Head_TK_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class CamoHead_Persian_03_F: PersianHead_A3_03 //inherits 6 parameters from bin\config.bin/CfgFaces/Man_A3/PersianHead_A3_03, sources - ["A3_Characters_F_Mark"]
		{
			author = "Bohemia Interactive";
			displayName = "Camo_Persian_03";
			texture = "\A3\Characters_F\Heads\Data\m_Persian_03_co.paa";
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_Persian_03.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_Persian_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_Persian_03_injury.rvmat";
			identityTypes[] = {"Head_TK_camo_lush", "Head_TK_camo_arid", "Head_TK_camo_semiarid"};
			disabled = 1;
			DLC = "Mark";
		};
		class TanoanHead_A3_01: Default //inherits 10 parameters from bin\config.bin/CfgFaces/Man_A3/Default, sources - ["A3_Characters_F_Exp"]
		{
			author = "Bohemia Interactive";
			displayName = "Simo";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_tanoan_01_co.paa";
			head = "TanoanHead_A3";
			identityTypes[] = {"Head_Tanoan"};
			material = "A3\Characters_F_Exp\Heads\Data\m_tanoan_01.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_01_injury.rvmat";
			textureHL = "\A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_co.paa";
			materialHL = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat";
			textureHL2 = "\A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_co.paa";
			materialHL2 = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat";
			DLC = "Expansion";
		};
		class TanoanHead_A3_02: TanoanHead_A3_01 //inherits 13 parameters from bin\config.bin/CfgFaces/Man_A3/TanoanHead_A3_01, sources - ["A3_Characters_F_Exp"]
		{
			author = "Bohemia Interactive";
			displayName = "Adnet";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_tanoan_02_co.paa";
			material = "A3\Characters_F_Exp\Heads\Data\m_tanoan_02.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_02_injury.rvmat";
			DLC = "Expansion";
		};
		class TanoanHead_A3_03: TanoanHead_A3_01 //inherits 13 parameters from bin\config.bin/CfgFaces/Man_A3/TanoanHead_A3_01, sources - ["A3_Characters_F_Exp"]
		{
			author = "Bohemia Interactive";
			displayName = "Cahun";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_tanoan_03_co.paa";
			material = "A3\Characters_F_Exp\Heads\Data\m_tanoan_03.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_03_injury.rvmat";
			DLC = "Expansion";
		};
		class TanoanHead_A3_04: TanoanHead_A3_01 //inherits 13 parameters from bin\config.bin/CfgFaces/Man_A3/TanoanHead_A3_01, sources - ["A3_Characters_F_Exp"]
		{
			author = "Bohemia Interactive";
			displayName = "Ganio";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_tanoan_04_co.paa";
			material = "A3\Characters_F_Exp\Heads\Data\m_tanoan_04.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_04_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_04_injury.rvmat";
			DLC = "Expansion";
		};
		class TanoanHead_A3_05: TanoanHead_A3_01 //inherits 13 parameters from bin\config.bin/CfgFaces/Man_A3/TanoanHead_A3_01, sources - ["A3_Characters_F_Exp"]
		{
			author = "Bohemia Interactive";
			displayName = "Malet";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_tanoan_05_co.paa";
			material = "A3\Characters_F_Exp\Heads\Data\m_tanoan_05.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_05_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_05_injury.rvmat";
			DLC = "Expansion";
		};
		class TanoanHead_A3_06: TanoanHead_A3_01 //inherits 13 parameters from bin\config.bin/CfgFaces/Man_A3/TanoanHead_A3_01, sources - ["A3_Characters_F_Exp"]
		{
			author = "Bohemia Interactive";
			displayName = "Solé";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_tanoan_06_co.paa";
			material = "A3\Characters_F_Exp\Heads\Data\m_tanoan_06.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_06_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_06_injury.rvmat";
			DLC = "Expansion";
		};
		class TanoanHead_A3_07: TanoanHead_A3_01 //inherits 13 parameters from bin\config.bin/CfgFaces/Man_A3/TanoanHead_A3_01, sources - ["A3_Characters_F_Exp"]
		{
			author = "Bohemia Interactive";
			displayName = "Mignard";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_tanoan_07_co.paa";
			material = "A3\Characters_F_Exp\Heads\Data\m_tanoan_07.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_07_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_07_injury.rvmat";
			DLC = "Expansion";
		};
		class TanoanHead_A3_08: TanoanHead_A3_01 //inherits 13 parameters from bin\config.bin/CfgFaces/Man_A3/TanoanHead_A3_01, sources - ["A3_Characters_F_Exp"]
		{
			author = "Bohemia Interactive";
			displayName = "Thibaud";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_tanoan_08_co.paa";
			material = "A3\Characters_F_Exp\Heads\Data\m_tanoan_08.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_08_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_08_injury.rvmat";
			DLC = "Expansion";
		};
		class TanoanBossHead: TanoanHead_A3_01 //inherits 13 parameters from bin\config.bin/CfgFaces/Man_A3/TanoanHead_A3_01, sources - ["A3_Characters_F_Exp"]
		{
			author = "Bohemia Interactive";
			displayName = "Solomon Maru";
			identityTypes[] = {"Syndikat_Boss_F"};
			texture = "\A3\Characters_F_Exp\Heads\Data\m_tanoan_boss_co.paa";
			material = "A3\Characters_F_Exp\Heads\Data\m_tanoan_boss.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_boss_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_boss_injury.rvmat";
			disabled = 1;
			DLC = "Expansion";
		};
		class AsianHead_A3_04: AsianHead_A3_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/AsianHead_A3_01, sources - ["A3_Characters_F_Exp"]
		{
			author = "Bohemia Interactive";
			displayname = "Lee";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_Asian_04_co.paa";
			material = "\A3\Characters_F_Exp\Heads\Data\m_Asian_04.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_Asian_04_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_Asian_04_injury.rvmat";
			DLC = "Expansion";
		};
		class AsianHead_A3_05: AsianHead_A3_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/AsianHead_A3_01, sources - ["A3_Characters_F_Exp"]
		{
			author = "Bohemia Interactive";
			displayname = "Chan";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_Asian_05_co.paa";
			material = "\A3\Characters_F_Exp\Heads\Data\m_Asian_05.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_Asian_05_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_Asian_05_injury.rvmat";
			DLC = "Expansion";
		};
		class AsianHead_A3_06: AsianHead_A3_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/AsianHead_A3_01, sources - ["A3_Characters_F_Exp"]
		{
			author = "Bohemia Interactive";
			displayname = "Yeung";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_Asian_06_co.paa";
			material = "\A3\Characters_F_Exp\Heads\Data\m_Asian_06.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_Asian_06_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_Asian_06_injury.rvmat";
			DLC = "Expansion";
		};
		class AsianHead_A3_07: AsianHead_A3_01 //inherits 12 parameters from bin\config.bin/CfgFaces/Man_A3/AsianHead_A3_01, sources - ["A3_Characters_F_Exp"]
		{
			author = "Bohemia Interactive";
			displayname = "Wong";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_Asian_07_co.paa";
			material = "\A3\Characters_F_Exp\Heads\Data\m_Asian_07.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_Asian_07_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_Asian_07_injury.rvmat";
			DLC = "Expansion";
		};
	};
	class Miller //sources - ["A3_Characters_F_Heads"]
	{
		class Default //sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Miller";
			head = "Miller";
			texture = "\A3\Characters_F\Heads\Data\m_Miller_co.paa";
			identityTypes[] = {"Miller"};
			material = "\A3\Characters_F\Heads\Data\m_Miller.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Miller_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Miller_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 1;
		};
		class Miller: Default //inherits 13 parameters from bin\config.bin/CfgFaces/Miller/Default, sources - []
		{
		};
	};
	class Kerry //sources - ["A3_Characters_F_Heads"]
	{
		class Default //sources - ["A3_Characters_F_Heads"]
		{
			head = "KerryHead_A3";
			texture = "\A3\Characters_F_EPA\Heads\Data\m_kerry_A_co.paa";
			identityTypes[] = {"Kerry"};
			material = "A3\Characters_F_EPA\Heads\Data\m_kerry_A.rvmat";
			materialWounded1 = "A3\Characters_F_EPA\Heads\Data\m_kerry_A_injury.rvmat";
			materialWounded2 = "A3\Characters_F_EPA\Heads\Data\m_kerry_A_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 1;
		};
		class Kerry: Default //inherits 11 parameters from bin\config.bin/CfgFaces/Kerry/Default, sources - []
		{
		};
		class Kerry_A_F: Default //inherits 11 parameters from bin\config.bin/CfgFaces/Kerry/Default, sources - ["A3_Characters_F_Heads"]
		{
			identityTypes[] = {"Kerry_A"};
		};
		class kerry_B1_F: Default //inherits 11 parameters from bin\config.bin/CfgFaces/Kerry/Default, sources - ["A3_Characters_F_Heads"]
		{
			texture = "\A3\Characters_F_EPA\Heads\Data\m_kerry_B1_co.paa";
			identityTypes[] = {"kerry_B1"};
			material = "A3\Characters_F_EPA\Heads\Data\m_kerry_B1.rvmat";
			materialWounded1 = "A3\Characters_F_EPA\Heads\Data\m_kerry_B1_injury.rvmat";
			materialWounded2 = "A3\Characters_F_EPA\Heads\Data\m_kerry_B1_injury.rvmat";
		};
		class kerry_B2_F: Default //inherits 11 parameters from bin\config.bin/CfgFaces/Kerry/Default, sources - ["A3_Characters_F_Heads"]
		{
			texture = "\A3\Characters_F_EPA\Heads\Data\m_kerry_B2_co.paa";
			identityTypes[] = {"kerry_B2"};
			material = "A3\Characters_F_EPA\Heads\Data\m_kerry_B2.rvmat";
			materialWounded1 = "A3\Characters_F_EPA\Heads\Data\m_kerry_B2_injury.rvmat";
			materialWounded2 = "A3\Characters_F_EPA\Heads\Data\m_kerry_B2_injury.rvmat";
			textureHL = "\A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty_co.paa";
			materialHL = "\A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty.rvmat";
			textureHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty_co.paa";
			materialHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty.rvmat";
		};
		class Kerry_C_F: Default //inherits 11 parameters from bin\config.bin/CfgFaces/Kerry/Default, sources - ["A3_Characters_F_Heads"]
		{
			texture = "\A3\Characters_F_EPA\Heads\Data\m_kerry_C_co.paa";
			identityTypes[] = {"Kerry_C"};
			material = "A3\Characters_F_EPA\Heads\Data\m_kerry_C.rvmat";
			materialWounded1 = "A3\Characters_F_EPA\Heads\Data\m_kerry_C_injury.rvmat";
			materialWounded2 = "A3\Characters_F_EPA\Heads\Data\m_kerry_C_injury.rvmat";
		};
	};
	class IG_Leader //sources - ["A3_Characters_F_Heads"]
	{
		class Default //sources - ["A3_Characters_F_Heads"]
		{
			displayname = "Stavrou";
			head = "IG_Leader";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_IG_leader_co.paa";
			identityTypes[] = {"IG_Leader"};
			material = "\A3\Characters_F_EPB\Heads\Data\m_IG_leader.rvmat";
			materialWounded1 = "A3\characters_F_EPB\Heads\Data\m_IG_leader_injury.rvmat";
			materialWounded2 = "A3\characters_F_EPB\Heads\Data\m_IG_leader_injury.rvmat";
			textureHL = "\A3\Characters_F_EPB\Heads\Data\hl_Stavrou_dirty_co.paa";
			materialHL = "\A3\Characters_F_EPB\Heads\Data\hl_stavrou_dirty.rvmat";
			textureHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_Stavrou_dirty_co.paa";
			materialHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_stavrou_dirty.rvmat";
			disabled = 1;
		};
		class IG_Leader: Default //inherits 12 parameters from bin\config.bin/CfgFaces/IG_Leader/Default, sources - []
		{
		};
	};
	class O_Colonel //sources - ["A3_Characters_F_Heads"]
	{
		class Default //sources - ["A3_Characters_F_Heads"]
		{
			displayname = "Namdar";
			head = "PersianHead_A3";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_white_17_co.paa";
			identityTypes[] = {"O_Colonel"};
			material = "\A3\Characters_F_EPB\Heads\Data\m_white_17.rvmat";
			materialWounded1 = "\A3\Characters_F_EPB\Heads\Data\m_white_17_injury.rvmat";
			materialWounded2 = "\A3\Characters_F_EPB\Heads\Data\m_white_17_injury.rvmat";
			textureHL = "\A3\Characters_F_EPB\Heads\Data\hl_white_17_co.paa";
			materialHL = "\A3\Characters_F_EPB\Heads\Data\hl_white_17.rvmat";
			textureHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_white_17_co.paa";
			materialHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_white_17.rvmat";
			disabled = 1;
		};
		class O_Colonel: Default //inherits 12 parameters from bin\config.bin/CfgFaces/O_Colonel/Default, sources - []
		{
		};
	};
	class AnimalHead //sources - ["A3_Characters_F_Heads"]
	{
		class Default //sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "animal";
			texture = "\A3\Characters_F\Heads\Data\m_White_01_co.paa";
			head = "";
			identityTypes[] = {"Animal"};
			material = "";
		};
		class Animal: Default //inherits 6 parameters from bin\config.bin/CfgFaces/AnimalHead/Default, sources - []
		{
		};
	};
	class WomanHead_A3 //sources - ["A3_Characters_F_Heads"]
	{
		class Default //sources - ["A3_Characters_F_Heads"]
		{
			author = "Bohemia Interactive";
			displayname = "Default face";
			texture = "\A3\Characters_F\Heads\Data\m_White_01_co.paa";
			head = "WomanHead_A3";
			identityTypes[] = {"Woman"};
			material = "";
			disabled = 1;
		};
		class Woman_A3: Default //inherits 7 parameters from bin\config.bin/CfgFaces/WomanHead_A3/Default, sources - []
		{
		};
	};
};
class CfgMimics //sources - []
{
	class HeadPreview //sources - []
	{
		microMimics = "Micro";
		boneHead = "head";
	};
	class Micro //sources - []
	{
		lBrow[] = {0.002, 0.002, 0.001, 0.6, 3};
		mBrow[] = {0.002, 0.002, 0.001, 0.6, 2.5};
		rBrow[] = {0.002, 0.002, 0.001, 0.6, 3};
		lMouth[] = {0.001, 0.002, 0.001, 0.6, 2};
		mMouth[] = {0, 0, 0, 0.6, 3};
		rMouth[] = {0.001, 0.002, 0.001, 0.6, 2};
	};
	class NoMicro //sources - []
	{
		lBrow[] = {0, 0, 0, 0.6, 3};
		mBrow[] = {0, 0, 0, 0.6, 2.5};
		rBrow[] = {0, 0, 0, 0.6, 3};
		lMouth[] = {0, 0, 0, 0.6, 2};
		mMouth[] = {0, 0, 0, 0.6, 3};
		rMouth[] = {0, 0, 0, 0.6, 2};
	};
	class States //sources - []
	{
		class Default //sources - []
		{
			lBrow[] = {0, 0};
			mBrow[] = {0, 0};
			rBrow[] = {0, 0};
			lMouth[] = {0, 0};
			mMouth[] = {0, 0};
			rMouth[] = {0, 0};
		};
		class Normal //sources - []
		{
			lBrow[] = {0, 0};
			mBrow[] = {0, 0};
			rBrow[] = {0, 0};
			lMouth[] = {0, 0};
			mMouth[] = {0, 0};
			rMouth[] = {0, 0};
		};
		class Smile //sources - []
		{
			lBrow[] = {0, 0.25};
			mBrow[] = {0, 0.25};
			rBrow[] = {0, 0.25};
			lMouth[] = {-0.5, 0.6};
			mMouth[] = {0, 0};
			rMouth[] = {0.5, 0.6};
		};
		class Hurt //sources - []
		{
			lBrow[] = {0, -0.35};
			mBrow[] = {0, -0.5};
			rBrow[] = {0, -0.6};
			lMouth[] = {0.5, -0.3};
			mMouth[] = {0, 0.3};
			rMouth[] = {-0.5, -0.6};
		};
		class Ironic //sources - []
		{
			lBrow[] = {0, -0.35};
			mBrow[] = {0, -0.35};
			rBrow[] = {0, -0.35};
			lMouth[] = {0.1, 0.3};
			mMouth[] = {0, 0.9};
			rMouth[] = {-0.1, 0.3};
		};
		class Sad //sources - []
		{
			lBrow[] = {0, 0.2};
			mBrow[] = {0, 0.2};
			rBrow[] = {0, 0.2};
			lMouth[] = {0.1, -0.5};
			mMouth[] = {0, -0.5};
			rMouth[] = {-0.1, -0.5};
		};
		class Cynic //sources - []
		{
			lBrow[] = {0, -0.35};
			mBrow[] = {0, 0};
			rBrow[] = {0, 0.05};
			lMouth[] = {0.2, -0.9};
			mMouth[] = {0, -0.2};
			rMouth[] = {0, 0};
		};
		class Surprised //sources - []
		{
			lBrow[] = {0, 0.5};
			mBrow[] = {0, 0.5};
			rBrow[] = {0, 0.5};
			lMouth[] = {0, -0.3};
			mMouth[] = {0, 0.3};
			rMouth[] = {0, -0.2};
		};
		class Agresive //sources - []
		{
			lBrow[] = {0, -0.25};
			mBrow[] = {0, -0.4};
			rBrow[] = {0, -0.3};
			lMouth[] = {0.4, 0.5};
			mMouth[] = {0, 0.5};
			rMouth[] = {-0.4, -0.5};
		};
		class Angry //sources - []
		{
			lBrow[] = {0.4, -0.5};
			mBrow[] = {0.1, -0.4};
			rBrow[] = {-0.4, -0.5};
			lMouth[] = {0.4, -0.9};
			mMouth[] = {0, -0.2};
			rMouth[] = {-0.4, -0.8};
		};
	};
	combat[] = {"Sad", 0.1, "Surprised", 0.1, "Cynic", 0.3, "Angry", 0.1, "Normal"};
	aware[] = {"Angry", 0.2, "Normal"};
	safe[] = {"Smile", 0.1, "Surprised", 0.1, "Normal"};
	neutral[] = {"Surprised", 0.1, "Sad", 0.1, "Normal"};
	danger[] = {"Surprised", 0.4, "Sad"};
	dead[] = {"Hurt"};
	hurt[] = {"Hurt"};
};
class MaskFace_A3 //sources - ["A3_Characters_F_Heads"]
{
  mask[] = {"face_hub", 1, "face_jawbone", 1, "face_jowl", 1, "face_chopright", 1, "face_chopleft", 1, "face_liplowermiddle", 1, "face_liplowerright", 1, "face_liplowerleft", 1, "face_chin", 1, "face_tongue", 1, "face_cornerright", 1, "face_cheeksideright", 1, "face_cornerleft", 1, "face_cheeksideleft", 1, "face_cheekfrontright", 1, "face_cheekfrontleft", 1, "face_cheekupperright", 1, "face_cheekupperleft", 1, "face_lipuppermiddle", 1, "face_lipupperright", 1, "face_lipupperleft", 1, "face_nostrilright", 1, "face_nostrilleft", 1, "face_forehead", 1, "face_browfrontright", 1, "face_browfrontleft", 1, "face_browmiddle", 1, "face_browsideright", 1, "face_browsideleft", 1, "face_eyelids", 1, "face_eyelidupperright", 1, "face_eyelidupperleft", 1, "face_eyelidlowerright", 1, "face_eyelidlowerleft", 1, "eyeleft", 1, "eyeright", 1, "neck", 1, "neck1", 1, "head", 1};
};
class MaskFaceWoman_A3 //sources - ["A3_Characters_F_Heads"]
{
  mask[] = {"face_hub", 1, "face_jawbone", 1, "face_jowl", 1, "face_chopright", 1, "face_chopleft", 1, "face_liplowermiddle", 1, "face_liplowerright", 1, "face_liplowerleft", 1, "face_chin", 1, "face_tongue", 1, "face_cornerright", 1, "face_cheeksideright", 1, "face_cornerleft", 1, "face_cheeksideleft", 1, "face_cheekfrontright", 1, "face_cheekfrontleft", 1, "face_cheekupperright", 1, "face_cheekupperleft", 1, "face_lipuppermiddle", 1, "face_lipupperright", 1, "face_lipupperleft", 1, "face_nostrilright", 1, "face_nostrilleft", 1, "face_forehead", 1, "face_browfrontright", 1, "face_browfrontleft", 1, "face_browmiddle", 1, "face_browsideright", 1, "face_browsideleft", 1, "face_eyelids", 1, "face_eyelidupperright", 1, "face_eyelidupperleft", 1, "face_eyelidlowerright", 1, "face_eyelidlowerleft", 1, "eyeleft", 1, "eyeright", 1, "neck", 1, "neck1", 1, "head", 1};
};
class LipMask_A3 //sources - ["A3_Characters_F_Heads"]
{
  mask[] = {"face_hub", 1, "face_jawbone", 1, "face_jowl", 1, "face_chopright", 1, "face_chopleft", 1, "face_liplowermiddle", 1, "face_liplowerright", 1, "face_liplowerleft", 1, "face_chin", 1, "face_tongue", 1, "face_cornerright", 1, "face_cheeksideright", 1, "face_cornerleft", 1, "face_cheeksideleft", 1, "face_cheekfrontright", 1, "face_cheekfrontleft", 1, "face_cheekupperright", 1, "face_cheekupperleft", 1, "face_lipuppermiddle", 1, "face_lipupperright", 1, "face_lipupperleft", 1, "face_nostrilright", 1, "face_nostrilleft", 1, "face_forehead", 1, "face_browfrontright", 1, "face_browfrontleft", 1, "face_browmiddle", 1, "face_browsideright", 1, "face_browsideleft", 1, "face_eyelids", 1, "face_eyelidupperright", 1, "face_eyelidupperleft", 1, "face_eyelidlowerright", 1, "face_eyelidlowerleft", 1};
};
class CfgHeads //sources - ["A3_Characters_F_Heads","A3_Characters_F_Exp"]
{
	class Air //sources - []
	{
		friction = 10;
		movement = 160;
		maxAmp = 0.05;
		maxSpeed = 3;
		radius = 0.2;
	};
	class Land //sources - []
	{
		friction = 20;
		movement = 260;
		maxAmp = 0.1;
		maxSpeed = 4;
		radius = 0.3;
	};
	class Default_A3 //sources - ["A3_Characters_F_Heads"]
	{
		model = "\A3\characters_f\Heads\m_white_01";
		class Wounds //sources - ["A3_Characters_F_Heads"]
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\m_white_01.rvmat", "A3\characters_f\Heads\Data\m_white_01_injury.rvmat", "A3\characters_f\Heads\Data\m_white_01_injury.rvmat"};
		};
		selectionHeadWound = "injury_head";
		selectionPersonality = "personality";
		selectionPersonalityHL = "hl";
		class Grimaces //sources - ["A3_Characters_F_Heads"]
		{
			class Eyes //sources - ["A3_Characters_F_Heads"]
			{
				type = "eyes";
				eyeMaxAngle = 0.26;
				eyelidUpStartAngle = 0;
				eyelidUpMaxAngle = 3.14;
				eyelidDownStartAngle = 0;
				eyelidDownMaxAngle = 3.14;
			};
			class Lipsync //sources - ["A3_Characters_F_Heads"]
			{
				type = "lipsync";
				vizem[] = {"A3\Characters_F\Heads\Anim\male\Neutral.rtm", "A3\Characters_F\Heads\Anim\male\vizem\a.rtm", "A3\Characters_F\Heads\Anim\male\vizem\e2.rtm", "A3\Characters_F\Heads\Anim\male\vizem\f.rtm", "A3\Characters_F\Heads\Anim\male\vizem\m.rtm", "A3\Characters_F\Heads\Anim\male\vizem\y.rtm", "A3\Characters_F\Heads\Anim\male\vizem\v.rtm", "A3\Characters_F\Heads\Anim\male\vizem\i.rtm"};
			};
			class RTM_Face //sources - ["A3_Characters_F_Heads"]
			{
				type = "rtm";
				anim = "A3\Characters_F\Heads\Anim\male\Neutral.rtm";
				anims[] = {"A3\Characters_F\Heads\Anim\male\Neutral.rtm", 1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\Neutral.rtm", 1};
			};
			class NeutralFace: RTM_Face //inherits 4 parameters from bin\config.bin/CfgHeads/Default_A3/Grimaces/RTM_Face, sources - ["A3_Characters_F_Heads"]
			{
				anims[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\1a_frown_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1a_neutral_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1a_smile_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_frown_165_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_neutral_165_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_smile_165_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1c_frown_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1c_neutral_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1c_smile_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1d_frown_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1d_neutral_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1d_smile_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_frown_180_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_neutral_180_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_smile_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1f_frown_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1f_neutral_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1f_smile_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1g_frown_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1g_neutral_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1g_smile_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1h_frown_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1h_neutral_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1h_smile_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1i_frown_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1i_neutral_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1i_smile_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1j_frown_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1j_neutral_200_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1j_smile_200_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2a_frown_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2a_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2a_smile_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2b_frown_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2b_neutral_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2b_smile_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2c_frown_110_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2c_neutral_110_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2c_smile_110_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_frown_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_neutral_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_smile_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2e_frown_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\2e_neutral_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\2e_smile_200_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\2f_frown_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2f_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2f_smile_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2g_frown_120_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\2g_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2g_smile_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_frown_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_smile_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6};
			};
			class DeadFace: RTM_Face //inherits 4 parameters from bin\config.bin/CfgHeads/Default_A3/Grimaces/RTM_Face, sources - ["A3_Characters_F_Heads"]
			{
				anims[] = {"A3\Characters_F\Heads\Anim\male\Dead.rtm", 1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\Dead.rtm", 1};
			};
			class UnconsciousFace: RTM_Face //inherits 4 parameters from bin\config.bin/CfgHeads/Default_A3/Grimaces/RTM_Face, sources - ["A3_Characters_F_Heads"]
			{
				anims[] = {"A3\Characters_F\Heads\Anim\male\unconscious.rtm", 1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\unconscious.rtm", 1};
			};
			class DangerFace: RTM_Face //inherits 4 parameters from bin\config.bin/CfgHeads/Default_A3/Grimaces/RTM_Face, sources - ["A3_Characters_F_Heads"]
			{
				anims[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\1a_frown_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1a_neutral_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_frown_165_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_neutral_165_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\1c_neutral_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1d_frown_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1d_neutral_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1f_neutral_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1g_frown_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1g_neutral_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1h_neutral_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1i_frown_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1i_neutral_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1j_neutral_200_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\2a_frown_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2a_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2b_neutral_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2c_neutral_110_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_frown_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_neutral_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2e_frown_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\2e_neutral_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\2f_frown_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2f_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2g_frown_120_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\2g_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_frown_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6};
			};
			class HurtFace: RTM_Face //inherits 4 parameters from bin\config.bin/CfgHeads/Default_A3/Grimaces/RTM_Face, sources - ["A3_Characters_F_Heads"]
			{
				anims[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\1a_frown_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_frown_165_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1c_frown_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1d_frown_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_frown_180_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1g_frown_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1h_frown_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1i_frown_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1j_frown_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1j_neutral_200_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\2a_frown_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2b_frown_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2b_neutral_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2c_frown_110_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2c_neutral_110_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_frown_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2e_frown_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\2f_frown_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2f_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2g_frown_120_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\2g_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_frown_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\1a_frown_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1a_neutral_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_frown_165_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_neutral_165_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\1c_frown_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1c_neutral_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1d_frown_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1d_neutral_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_frown_180_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_neutral_180_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1f_frown_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1f_neutral_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1g_frown_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1g_neutral_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1h_frown_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1h_neutral_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1i_frown_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1i_neutral_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1j_frown_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1j_neutral_200_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\2a_frown_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2a_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2b_frown_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2b_neutral_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2c_frown_110_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2c_neutral_110_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_frown_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_neutral_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2e_frown_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\2e_neutral_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\2f_frown_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2f_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2g_frown_120_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\2g_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_frown_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\still3_03gulp.rtm", 3, "A3\Characters_F\Heads\Anim\male\still3_03gulp.rtm", 3, "A3\Characters_F\Heads\Anim\male\still3_03gulp.rtm", 3, "A3\Characters_F\Heads\Anim\male\still3_03gulp.rtm", 3};
			};
			class AwareFace: RTM_Face //inherits 4 parameters from bin\config.bin/CfgHeads/Default_A3/Grimaces/RTM_Face, sources - ["A3_Characters_F_Heads"]
			{
				anims[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6};
			};
			class SafeFace: RTM_Face //inherits 4 parameters from bin\config.bin/CfgHeads/Default_A3/Grimaces/RTM_Face, sources - ["A3_Characters_F_Heads"]
			{
				anims[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still2_09.rtm", 4.6, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\1a_neutral_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1a_smile_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_neutral_165_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_smile_165_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1c_neutral_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1c_smile_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1d_neutral_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1d_smile_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_neutral_180_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_smile_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1f_neutral_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1f_smile_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1g_neutral_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1g_smile_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1h_neutral_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1h_smile_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1i_neutral_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1i_smile_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1j_neutral_200_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1j_smile_200_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2a_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2a_smile_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2b_neutral_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2b_smile_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2c_neutral_110_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2c_smile_110_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_neutral_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_smile_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2e_neutral_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\2e_smile_200_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\2f_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2f_smile_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2g_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2g_smile_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_smile_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\1a_frown_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1a_neutral_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1a_smile_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_frown_165_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_neutral_165_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_smile_165_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1c_frown_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1c_neutral_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1c_smile_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1d_frown_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1d_neutral_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1d_smile_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_frown_180_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_neutral_180_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_smile_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1f_frown_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1f_neutral_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1f_smile_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1g_frown_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1g_neutral_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1g_smile_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1h_frown_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1h_neutral_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1h_smile_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1i_frown_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1i_neutral_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1i_smile_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1j_frown_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1j_neutral_200_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1j_smile_200_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2a_frown_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2a_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2a_smile_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2b_frown_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2b_neutral_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2b_smile_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2c_frown_110_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2c_neutral_110_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2c_smile_110_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_frown_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_neutral_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_smile_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2e_frown_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\2e_neutral_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\2e_smile_200_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\2f_frown_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2f_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2f_smile_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2g_frown_120_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\2g_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2g_smile_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_frown_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_smile_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still2_09.rtm", 4.6, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6};
			};
			class CombatFace: RTM_Face //inherits 4 parameters from bin\config.bin/CfgHeads/Default_A3/Grimaces/RTM_Face, sources - ["A3_Characters_F_Heads"]
			{
				anims[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6};
			};
			class Neutral //sources - ["A3_Characters_F_Heads"]
			{
				type = "compound";
				class Items //sources - ["A3_Characters_F_Heads"]
				{
					class NeutralFace: MaskFace_A3 //inherits 1 parameters from bin\config.bin/MaskFace_A3, sources - []
					{
					};
					class Lipsync: LipMask_A3 //inherits 1 parameters from bin\config.bin/LipMask_A3, sources - []
					{
					};
				};
			};
			class Dead //sources - ["A3_Characters_F_Heads"]
			{
				type = "compound";
				class Items //sources - ["A3_Characters_F_Heads"]
				{
					class DeadFace: MaskFace_A3 //inherits 1 parameters from bin\config.bin/MaskFace_A3, sources - []
					{
					};
				};
			};
			class Unconscious //sources - ["A3_Characters_F_Heads"]
			{
				type = "compound";
				class Items //sources - ["A3_Characters_F_Heads"]
				{
					class UnconsciousFace: MaskFace_A3 //inherits 1 parameters from bin\config.bin/MaskFace_A3, sources - []
					{
					};
				};
			};
			class Danger //sources - ["A3_Characters_F_Heads"]
			{
				type = "compound";
				class Items //sources - ["A3_Characters_F_Heads"]
				{
					class DangerFace: MaskFace_A3 //inherits 1 parameters from bin\config.bin/MaskFace_A3, sources - []
					{
					};
					class Lipsync: LipMask_A3 //inherits 1 parameters from bin\config.bin/LipMask_A3, sources - []
					{
					};
				};
			};
			class Hurt //sources - ["A3_Characters_F_Heads"]
			{
				type = "compound";
				class Items //sources - ["A3_Characters_F_Heads"]
				{
					class HurtFace: MaskFace_A3 //inherits 1 parameters from bin\config.bin/MaskFace_A3, sources - []
					{
					};
					class Lipsync: LipMask_A3 //inherits 1 parameters from bin\config.bin/LipMask_A3, sources - []
					{
					};
				};
			};
			class Aware //sources - ["A3_Characters_F_Heads"]
			{
				type = "compound";
				class Items //sources - ["A3_Characters_F_Heads"]
				{
					class AwareFace: MaskFace_A3 //inherits 1 parameters from bin\config.bin/MaskFace_A3, sources - []
					{
					};
					class Lipsync: LipMask_A3 //inherits 1 parameters from bin\config.bin/LipMask_A3, sources - []
					{
					};
				};
			};
			class Safe //sources - ["A3_Characters_F_Heads"]
			{
				type = "compound";
				class Items //sources - ["A3_Characters_F_Heads"]
				{
					class SafeFace: MaskFace_A3 //inherits 1 parameters from bin\config.bin/MaskFace_A3, sources - []
					{
					};
					class Lipsync: LipMask_A3 //inherits 1 parameters from bin\config.bin/LipMask_A3, sources - []
					{
					};
				};
			};
			class Combat //sources - ["A3_Characters_F_Heads"]
			{
				type = "compound";
				class Items //sources - ["A3_Characters_F_Heads"]
				{
					class CombatFace: MaskFace_A3 //inherits 1 parameters from bin\config.bin/MaskFace_A3, sources - []
					{
					};
					class Lipsync: LipMask_A3 //inherits 1 parameters from bin\config.bin/LipMask_A3, sources - []
					{
					};
				};
			};
		};
	};
	class DefaultHead_A3: Default_A3 //inherits 6 parameters from bin\config.bin/CfgHeads/Default_A3, sources - ["A3_Characters_F_Heads"]
	{
		model = "\A3\characters_f\Heads\m_white_01";
		class Wounds //sources - ["A3_Characters_F_Heads"]
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\m_white_01.rvmat", "A3\characters_f\Heads\Data\m_white_01_injury.rvmat", "A3\characters_f\Heads\Data\m_white_01_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_02.rvmat", "A3\characters_f\Heads\Data\m_white_02_injury.rvmat", "A3\characters_f\Heads\Data\m_white_02_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_03.rvmat", "A3\characters_f\Heads\Data\m_white_03_injury.rvmat", "A3\characters_f\Heads\Data\m_white_03_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_04.rvmat", "A3\characters_f\Heads\Data\m_white_04_injury.rvmat", "A3\characters_f\Heads\Data\m_white_04_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_05.rvmat", "A3\characters_f\Heads\Data\m_white_05_injury.rvmat", "A3\characters_f\Heads\Data\m_white_05_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_06.rvmat", "A3\characters_f\Heads\Data\m_white_06_injury.rvmat", "A3\characters_f\Heads\Data\m_white_06_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_07.rvmat", "A3\characters_f\Heads\Data\m_white_07_injury.rvmat", "A3\characters_f\Heads\Data\m_white_07_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_08.rvmat", "A3\characters_f\Heads\Data\m_white_08_injury.rvmat", "A3\characters_f\Heads\Data\m_white_08_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_09.rvmat", "A3\characters_f\Heads\Data\m_white_09_injury.rvmat", "A3\characters_f\Heads\Data\m_white_09_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_10.rvmat", "A3\characters_f\Heads\Data\m_white_10_injury.rvmat", "A3\characters_f\Heads\Data\m_white_10_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_11.rvmat", "A3\characters_f\Heads\Data\m_white_11_injury.rvmat", "A3\characters_f\Heads\Data\m_white_11_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_12.rvmat", "A3\characters_f\Heads\Data\m_white_12_injury.rvmat", "A3\characters_f\Heads\Data\m_white_12_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_13.rvmat", "A3\characters_f\Heads\Data\m_white_13_injury.rvmat", "A3\characters_f\Heads\Data\m_white_13_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_14.rvmat", "A3\characters_f\Heads\Data\m_white_14_injury.rvmat", "A3\characters_f\Heads\Data\m_white_14_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_15.rvmat", "A3\characters_f\Heads\Data\m_white_15_injury.rvmat", "A3\characters_f\Heads\Data\m_white_15_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_16.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_16_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_16_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_17.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_17_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_17_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_18.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_18_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_18_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_19.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_19_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_19_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_20.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_20_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_20_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_21.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_21_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_21_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white.rvmat", "A3\Characters_F\Heads\Data\hl_white_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_injury.rvmat"};
		};
	};
	class WomanHead_A3: Default_A3 //inherits 6 parameters from bin\config.bin/CfgHeads/Default_A3, sources - ["A3_Characters_F_Heads"]
	{
		model = "\A3\Characters_F\Heads\m_white_01.p3d";
		class Wounds //sources - ["A3_Characters_F_Heads"]
		{
			tex[] = {};
			mat[] = {};
		};
		selectionHeadWound = "injury_head";
		selectionPersonality = "osobnost";
		class Grimaces //sources - ["A3_Characters_F_Heads"]
		{
			class Eyes //sources - ["A3_Characters_F_Heads"]
			{
				type = "eyes";
				eyeMaxAngle = 0.5;
				eyelidUpStartAngle = 0;
				eyelidUpMaxAngle = 0;
				eyelidDownStartAngle = 0;
				eyelidDownMaxAngle = 0;
			};
			class Lipsync //sources - ["A3_Characters_F_Heads"]
			{
				type = "lipsync";
				vizem[] = {"A3\A3\Characters_F\Heads\Anim\female\Neutral.rtm", "A3\A3\Characters_F\Heads\Anim\female\vizem\a.rtm", "A3\A3\Characters_F\Heads\Anim\female\vizem\e2.rtm", "A3\A3\Characters_F\Heads\Anim\female\vizem\f.rtm", "A3\A3\Characters_F\Heads\Anim\female\vizem\m.rtm", "A3\A3\Characters_F\Heads\Anim\female\vizem\y.rtm", "A3\A3\Characters_F\Heads\Anim\female\vizem\v.rtm", "A3\A3\Characters_F\Heads\Anim\female\vizem\i.rtm"};
			};
			class RTM_Face //sources - ["A3_Characters_F_Heads"]
			{
				type = "rtm";
				anim = "A3\Characters_F\Heads\Anim\female\Neutral.rtm";
				anims[] = {"A3\Characters_F\Heads\Anim\female\Neutral.rtm", 1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\female\Neutral.rtm", 1};
			};
			class NeutralFace: RTM_Face //inherits 4 parameters from bin\config.bin/CfgHeads/WomanHead_A3/Grimaces/RTM_Face, sources - ["A3_Characters_F_Heads"]
			{
				anims[] = {"A3\Characters_F\Heads\Anim\female\Neutral_blink_left.rtm", 1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\female\Neutral_blink_left.rtm", 1};
			};
			class DeadFace: RTM_Face //inherits 4 parameters from bin\config.bin/CfgHeads/WomanHead_A3/Grimaces/RTM_Face, sources - ["A3_Characters_F_Heads"]
			{
				anims[] = {"A3\Characters_F\Heads\Anim\female\Dead.rtm", 1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\female\Dead.rtm", 1};
			};
			class UnconsciousFace: DeadFace //inherits 2 parameters from bin\config.bin/CfgHeads/WomanHead_A3/Grimaces/DeadFace, sources - []
			{
			};
			class DangerFace: RTM_Face //inherits 4 parameters from bin\config.bin/CfgHeads/WomanHead_A3/Grimaces/RTM_Face, sources - ["A3_Characters_F_Heads"]
			{
				anims[] = {"A3\Characters_F\Heads\Anim\female\Danger.rtm", 1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\female\Danger.rtm", 1};
			};
			class HurtFace: RTM_Face //inherits 4 parameters from bin\config.bin/CfgHeads/WomanHead_A3/Grimaces/RTM_Face, sources - ["A3_Characters_F_Heads"]
			{
				anims[] = {"A3\Characters_F\Heads\Anim\female\Hurt.rtm", 1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\female\Hurt.rtm", 1};
			};
			class AwareFace: RTM_Face //inherits 4 parameters from bin\config.bin/CfgHeads/WomanHead_A3/Grimaces/RTM_Face, sources - ["A3_Characters_F_Heads"]
			{
				anims[] = {"A3\Characters_F\Heads\Anim\female\Aware.rtm", 1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\female\Aware.rtm", 1};
			};
			class SafeFace: RTM_Face //inherits 4 parameters from bin\config.bin/CfgHeads/WomanHead_A3/Grimaces/RTM_Face, sources - []
			{
			};
			class CombatFace: RTM_Face //inherits 4 parameters from bin\config.bin/CfgHeads/WomanHead_A3/Grimaces/RTM_Face, sources - ["A3_Characters_F_Heads"]
			{
				anims[] = {"A3\Characters_F\Heads\Anim\female\Combat.rtm", 1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\female\Combat.rtm", 1};
			};
			class Neutral //sources - ["A3_Characters_F_Heads"]
			{
				type = "compound";
				class Items //sources - ["A3_Characters_F_Heads"]
				{
					class NeutralFace: MaskFaceWoman_A3 //inherits 1 parameters from bin\config.bin/MaskFaceWoman_A3, sources - []
					{
					};
					class Lipsync: LipMask_A3 //inherits 1 parameters from bin\config.bin/LipMask_A3, sources - []
					{
					};
				};
			};
			class Dead //sources - ["A3_Characters_F_Heads"]
			{
				type = "compound";
				class Items //sources - ["A3_Characters_F_Heads"]
				{
					class DeadFace: MaskFaceWoman_A3 //inherits 1 parameters from bin\config.bin/MaskFaceWoman_A3, sources - []
					{
					};
				};
			};
			class Danger //sources - ["A3_Characters_F_Heads"]
			{
				type = "compound";
				class Items //sources - ["A3_Characters_F_Heads"]
				{
					class DangerFace: MaskFaceWoman_A3 //inherits 1 parameters from bin\config.bin/MaskFaceWoman_A3, sources - []
					{
					};
					class Lipsync: LipMask_A3 //inherits 1 parameters from bin\config.bin/LipMask_A3, sources - []
					{
					};
				};
			};
			class Unconscious //sources - ["A3_Characters_F_Heads"]
			{
				type = "compound";
				class Items //sources - ["A3_Characters_F_Heads"]
				{
					class UnconsciousFace: MaskFaceWoman_A3 //inherits 1 parameters from bin\config.bin/MaskFaceWoman_A3, sources - []
					{
					};
				};
			};
			class Hurt //sources - ["A3_Characters_F_Heads"]
			{
				type = "compound";
				class Items //sources - ["A3_Characters_F_Heads"]
				{
					class HurtFace: MaskFaceWoman_A3 //inherits 1 parameters from bin\config.bin/MaskFaceWoman_A3, sources - []
					{
					};
					class Lipsync: LipMask_A3 //inherits 1 parameters from bin\config.bin/LipMask_A3, sources - []
					{
					};
				};
			};
			class Aware //sources - ["A3_Characters_F_Heads"]
			{
				type = "compound";
				class Items //sources - ["A3_Characters_F_Heads"]
				{
					class AwareFace: MaskFaceWoman_A3 //inherits 1 parameters from bin\config.bin/MaskFaceWoman_A3, sources - []
					{
					};
					class Lipsync: LipMask_A3 //inherits 1 parameters from bin\config.bin/LipMask_A3, sources - []
					{
					};
				};
			};
			class Safe //sources - ["A3_Characters_F_Heads"]
			{
				type = "compound";
				class Items //sources - ["A3_Characters_F_Heads"]
				{
					class SafeFace: MaskFaceWoman_A3 //inherits 1 parameters from bin\config.bin/MaskFaceWoman_A3, sources - []
					{
					};
					class Lipsync: LipMask_A3 //inherits 1 parameters from bin\config.bin/LipMask_A3, sources - []
					{
					};
				};
			};
			class Combat //sources - ["A3_Characters_F_Heads"]
			{
				type = "compound";
				class Items //sources - ["A3_Characters_F_Heads"]
				{
					class CombatFace: MaskFaceWoman_A3 //inherits 1 parameters from bin\config.bin/MaskFaceWoman_A3, sources - []
					{
					};
					class Lipsync: LipMask_A3 //inherits 1 parameters from bin\config.bin/LipMask_A3, sources - []
					{
					};
				};
			};
		};
	};
	class MaskHead_A3: Default_A3 //inherits 6 parameters from bin\config.bin/CfgHeads/Default_A3, sources - ["A3_Characters_F_Heads"]
	{
		model = "\A3\Characters_F\Heads\m_white_01";
		class Wounds //sources - ["A3_Characters_F_Heads"]
		{
			tex[] = {};
			mat[] = {"A3\characters_f\heads\data\m_white_01.rvmat", "A3\characters_f\heads\data\m_white_01_injury.rvmat", "A3\characters_f\heads\data\m_white_01_injury.rvmat"};
		};
	};
	class MaskHead_A3_Black: MaskHead_A3 //inherits 2 parameters from bin\config.bin/CfgHeads/MaskHead_A3, sources - ["A3_Characters_F_Heads"]
	{
		class Wounds //sources - ["A3_Characters_F_Heads"]
		{
			tex[] = {};
			mat[] = {"A3\characters_f\heads\data\m_african_01.rvmat", "A3\characters_f\heads\data\m_african_01_injury.rvmat", "A3\characters_f\heads\data\m_african_01_injury.rvmat"};
		};
	};
	class MaskHead_A3_1: MaskHead_A3 //inherits 2 parameters from bin\config.bin/CfgHeads/MaskHead_A3, sources - ["A3_Characters_F_Heads"]
	{
		model = "\A3\Characters_F\Heads\m_white_01";
	};
	class MaskHead_A3_1_Black: MaskHead_A3_1 //inherits 1 parameters from bin\config.bin/CfgHeads/MaskHead_A3_1, sources - ["A3_Characters_F_Heads"]
	{
		class Wounds //sources - ["A3_Characters_F_Heads"]
		{
			tex[] = {};
			mat[] = {"A3\characters_f\heads\data\m_white_01.rvmat", "A3\characters_f\heads\data\m_white_01_injury.rvmat", "A3\characters_f\heads\data\m_white_01_injury.rvmat"};
		};
	};
	class MaskHead_A3_B: Default_A3 //inherits 6 parameters from bin\config.bin/CfgHeads/Default_A3, sources - ["A3_Characters_F_Heads"]
	{
		model = "\A3\Characters_F\Heads\m_white_01";
	};
	class MaskHead_A3_B_Black: MaskHead_A3_B //inherits 1 parameters from bin\config.bin/CfgHeads/MaskHead_A3_B, sources - ["A3_Characters_F_Heads"]
	{
		class Wounds //sources - ["A3_Characters_F_Heads"]
		{
			tex[] = {};
			mat[] = {"A3\characters_f\heads\data\m_white_01.rvmat", "A3\characters_f\heads\data\m_white_01_injury.rvmat", "A3\characters_f\heads\data\m_white_01_injury.rvmat"};
		};
	};
	class Cooper_A3: Default_A3 //inherits 6 parameters from bin\config.bin/CfgHeads/Default_A3, sources - ["A3_Characters_F_Heads"]
	{
		model = "\A3\Characters_F\Heads\m_african_01";
		class Wounds //sources - ["A3_Characters_F_Heads"]
		{
			tex[] = {};
			mat[] = {"A3\characters_f\heads\data\m_african_01.rvmat", "A3\characters_f\heads\data\m_african_01_injury.rvmat", "A3\characters_f\heads\data\m_african_01_injury.rvmat"};
		};
		selectionHeadWound = "injury_head";
		selectionPersonality = "osobnost";
	};
	class BlackHead_A3: Cooper_A3 //inherits 4 parameters from bin\config.bin/CfgHeads/Cooper_A3, sources - ["A3_Characters_F_Heads"]
	{
		model = "\A3\Characters_F\Heads\m_african_01";
		class Wounds //sources - ["A3_Characters_F_Heads"]
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\m_african_01.rvmat", "A3\Characters_F\Heads\Data\m_african_01_injury.rvmat", "A3\Characters_F\Heads\Data\m_african_01_injury.rvmat", "A3\Characters_F\Heads\Data\m_african_02.rvmat", "A3\Characters_F\Heads\Data\m_african_02_injury.rvmat", "A3\Characters_F\Heads\Data\m_african_02_injury.rvmat", "A3\Characters_F\Heads\Data\m_african_03.rvmat", "A3\Characters_F\Heads\Data\m_african_03_injury.rvmat", "A3\Characters_F\Heads\Data\m_african_03_injury.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat"};
		};
		selectionHeadWound = "injury_head";
		selectionPersonality = "personality";
	};
	class PersianHead_A3: Default_A3 //inherits 6 parameters from bin\config.bin/CfgHeads/Default_A3, sources - ["A3_Characters_F_Heads"]
	{
		model = "\A3\Characters_F\Heads\m_persian_01";
		class Wounds //sources - ["A3_Characters_F_Heads"]
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\m_persian_01.rvmat", "A3\Characters_F\Heads\Data\m_persian_01_injury.rvmat", "A3\Characters_F\Heads\Data\m_persian_01_injury.rvmat", "A3\Characters_F\Heads\Data\m_persian_02.rvmat", "A3\Characters_F\Heads\Data\m_persian_02_injury.rvmat", "A3\Characters_F\Heads\Data\m_persian_02_injury.rvmat", "A3\Characters_F\Heads\Data\m_persian_03.rvmat", "A3\Characters_F\Heads\Data\m_persian_03_injury.rvmat", "A3\Characters_F\Heads\Data\m_persian_03_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white.rvmat", "A3\Characters_F\Heads\Data\hl_white_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_injury.rvmat"};
		};
		selectionHeadWound = "injury_head";
		selectionPersonality = "personality";
	};
	class AsianHead_A3: Default_A3 //inherits 6 parameters from bin\config.bin/CfgHeads/Default_A3, sources - ["A3_Characters_F_Heads"]
	{
		model = "\A3\Characters_F\Heads\m_asian_01";
		class Wounds //sources - ["A3_Characters_F_Heads"]
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\m_asian_01.rvmat", "A3\Characters_F\Heads\Data\m_asian_01_injury.rvmat", "A3\Characters_F\Heads\Data\m_asian_01_injury.rvmat", "A3\Characters_F\Heads\Data\m_asian_02.rvmat", "A3\Characters_F\Heads\Data\m_asian_02_injury.rvmat", "A3\Characters_F\Heads\Data\m_asian_02_injury.rvmat", "A3\Characters_F\Heads\Data\m_asian_03.rvmat", "A3\Characters_F\Heads\Data\m_asian_03_injury.rvmat", "A3\Characters_F\Heads\Data\m_asian_03_injury.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		selectionHeadWound = "injury_head";
		selectionPersonality = "personality";
	};
	class GreekHead_A3: Default_A3 //inherits 6 parameters from bin\config.bin/CfgHeads/Default_A3, sources - ["A3_Characters_F_Heads"]
	{
		model = "\A3\Characters_F\Heads\m_greek_01";
		class Wounds //sources - ["A3_Characters_F_Heads"]
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\m_greek_01.rvmat", "A3\Characters_F\Heads\Data\m_greek_01_injury.rvmat", "A3\Characters_F\Heads\Data\m_greek_01_injury.rvmat", "A3\Characters_F\Heads\Data\m_greek_02.rvmat", "A3\Characters_F\Heads\Data\m_greek_02_injury.rvmat", "A3\Characters_F\Heads\Data\m_greek_02_injury.rvmat", "A3\Characters_F\Heads\Data\m_greek_03.rvmat", "A3\Characters_F\Heads\Data\m_greek_03_injury.rvmat", "A3\Characters_F\Heads\Data\m_greek_03_injury.rvmat", "A3\Characters_F\Heads\Data\m_greek_04.rvmat", "A3\Characters_F\Heads\Data\m_greek_04_injury.rvmat", "A3\Characters_F\Heads\Data\m_greek_04_injury.rvmat"};
		};
		selectionHeadWound = "injury_head";
		selectionPersonality = "personality";
	};
	class NATOHead_A3: DefaultHead_A3 //inherits 2 parameters from bin\config.bin/CfgHeads/DefaultHead_A3, sources - ["A3_Characters_F_Heads"]
	{
		model = "\A3\Characters_F\Heads\m_white_01";
		selectionHeadWound = "injury_head";
		selectionPersonality = "personality";
	};
	class Nikos: GreekHead_A3 //inherits 4 parameters from bin\config.bin/CfgHeads/GreekHead_A3, sources - ["A3_Characters_F_Heads"]
	{
		model = "\A3\Characters_F\Heads\m_nikos";
		class Wounds //sources - ["A3_Characters_F_Heads"]
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\m_nikos.rvmat", "A3\Characters_F\Heads\Data\m_nikos_injury.rvmat", "A3\Characters_F\Heads\Data\m_nikos_injury.rvmat"};
		};
	};
	class IG_Leader: GreekHead_A3 //inherits 4 parameters from bin\config.bin/CfgHeads/GreekHead_A3, sources - ["A3_Characters_F_Heads"]
	{
		model = "\A3\Characters_F_EPB\Heads\m_IG_leader.p3d";
		class Wounds //sources - ["A3_Characters_F_Heads"]
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_EPB\Heads\Data\m_IG_leader.rvmat", "A3\Characters_F_EPB\Heads\Data\m_IG_leader_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\m_IG_leader_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\hl_stavrou_dirty.rvmat", "A3\Characters_F_EPB\Heads\Data\hl_stavrou_dirty_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\hl_stavrou_dirty_injury.rvmat"};
		};
	};
	class KerryHead_A3: DefaultHead_A3 //inherits 2 parameters from bin\config.bin/CfgHeads/DefaultHead_A3, sources - ["A3_Characters_F_Heads"]
	{
		class Wounds //sources - ["A3_Characters_F_Heads"]
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_EPA\Heads\Data\m_kerry_A.rvmat", "A3\Characters_F_EPA\Heads\Data\m_kerry_A_injury.rvmat", "A3\Characters_F_EPA\Heads\Data\m_kerry_A_injury.rvmat", "A3\Characters_F_EPA\Heads\Data\m_kerry_B1.rvmat", "A3\Characters_F_EPA\Heads\Data\m_kerry_B1_injury.rvmat", "A3\Characters_F_EPA\Heads\Data\m_kerry_B1_injury.rvmat", "A3\Characters_F_EPA\Heads\Data\m_kerry_B2.rvmat", "A3\Characters_F_EPA\Heads\Data\m_kerry_B2_injury.rvmat", "A3\Characters_F_EPA\Heads\Data\m_kerry_B2_injury.rvmat", "A3\Characters_F_EPA\Heads\Data\m_kerry_C.rvmat", "A3\Characters_F_EPA\Heads\Data\m_kerry_C_injury.rvmat", "A3\Characters_F_EPA\Heads\Data\m_kerry_C_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty.rvmat", "A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty_injury.rvmat"};
		};
	};
	class Miller: DefaultHead_A3 //inherits 2 parameters from bin\config.bin/CfgHeads/DefaultHead_A3, sources - ["A3_Characters_F_Heads"]
	{
		model = "\A3\Characters_F\Heads\m_miller";
		class Wounds //sources - ["A3_Characters_F_Heads"]
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\m_miller.rvmat", "A3\Characters_F\Heads\Data\m_miller_injury.rvmat", "A3\Characters_F\Heads\Data\m_miller_injury.rvmat"};
		};
	};
	class Kerry: Miller //inherits 2 parameters from bin\config.bin/CfgHeads/Miller, sources - []
	{
	};
	class TanoanHead_A3: Default_A3 //inherits 6 parameters from bin\config.bin/CfgHeads/Default_A3, sources - ["A3_Characters_F_Exp"]
	{
		model = "\A3\Characters_F_Exp\Heads\m_tanoan_01.p3d";
		class Wounds //sources - ["A3_Characters_F_Exp"]
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Exp\Heads\Data\m_tanoan_01.rvmat", "A3\Characters_F_Exp\Heads\Data\m_tanoan_01_injury.rvmat", "A3\Characters_F_Exp\Heads\Data\m_tanoan_01_injury.rvmat", "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat", "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat", "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat"};
		};
		selectionHeadWound = "injury_head";
		selectionPersonality = "personality";
	};
};
