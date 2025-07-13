class cfgPatches {
    class tnt_armour {
        name = "293rd Clone Siege Battalion Armour";
        authors[]={
            "Gray",
            "Neifer"
        };
        weapons[]={};
        units[]={};
        requiredVersion=0.1;
        requiredAddons[]={
            "ls_armor_bluefor",
            "SWLB_groundholders",
            "SWLB_clones",
            "ls_characters_clone"
        };
    };
};

class cfgWeapons {
    
    class InventoryItem_Base_F;
	class ItemCore;
	class HeadgearItem;
	class UniformItem;
	class VestItem;
	class U_I_CombatUniform;
	class H_HelmetO_ViperSP_hex_F;
	class V_PlateCarrier1_rgr;
	class NVGoggles;
    class swlb_clone_p1_helmet;
    class SWLB_clone_uniform;

    class tnt_helmet_trooper: swlb_clone_p1_helmet {
        author = "Neifer";
        displayName = "[293rd] Trooper Helmet";
        hiddenSelections[]={"camo1"};
        hiddenSelectionsTextures[]={"tnt_armour\data\tnt_helmet_trooper_CO.paa"};
    };
    class tnt_armour_trooper: SWLB_clone_uniform {
        author = "Neifer";
        displayName = "[293rd] Trooper Armour";
        class ItemInfo: UniformItem {
            uniformModel = "-";
			uniformClass = "tnt_armour_trooper_F";
			containerClass = "Supply150";
			mass = 40;
        };
    };
};

class cfgVehicles {
    class ls_clone_phase2_base;
    class tnt_armour_trooper_F: ls_clone_phase2_base {
        author = "Neifer";
        scope = 1;
        displayName = "-";
		uniformClass = "tnt_armour_trooper";
		hiddenSelections[] = {"camo1","camo2","undersuit"};
		hiddenSelectionsTextures[] = {"tnt_armour\data\tnt_armour_upper_CO.paa","tnt_armour\data\tnt_armour_lower_CO.paa","tnt_armour\data\tnt_armour_undersuit_CO.paa"};
    };
};