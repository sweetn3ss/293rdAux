class cfgPatches {
    class tnt_armour {
        name = "293rd Clone Siege Battalion Armour";
        authors[]={
            "Gray",
            "Neifer",
            "Devbo123"
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
		hiddenSelectionsMaterials[]={"tnt_armour\data\rvmats\helmet.rvmat"};
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
    class tnt_jedi_uniform_toast: tnt_armour_trooper {
        author = "Toast";
        displayName = "[293rd] Jedi Uniform (Toast)";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "tnt_jedi_uniform_toast_F";
            containerClass = "Supply150";
            mass = 25;
        };
    };
    class tnt_mask_toast: NVGoggles {
		scope=2;
		scopeArsenal=2;
		author="Toast";
		displayName="[293rd] Master Toast's Mask";
		model="tnt_armour\data\Jedi_Mask_Toast.p3d";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="tnt_armour\data\Jedi_Mask_Toast.p3d";
			modelOff="tnt_armour\data\Jedi_Mask_Toast.p3d";
			mass=2;
		};
	};
    class tnt_hood_toast: swlb_clone_p1_helmet {
        author = "Toast";
        displayName = "[293rd] Master Toast Hood";
        model = "tnt_armour\data\Jedi_Hood_Toast.p3d";
        class ItemInfo: HeadgearItem {
            modelSides[] = {6};
            mass = 10;
            uniformModel = "tnt_armour\data\Jedi_Hood_Toast.p3d";
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
    class tnt_jedi_uniform_toast_F: tnt_armour_trooper_F {
        author = "Toast";
        scope = 1;
        displayName = "-";
        uniformClass = "tnt_jedi_uniform_toast";
        model = "tnt_armour\data\jedi_uniform_toast.p3d";
    };
};