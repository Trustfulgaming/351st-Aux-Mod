class CfgPatches
{
    class Trust_armor
    {
        author = "Trust";
        name = "351st: Armor Retextures";
        requiredAddons[] = {
            "Trust_core",
            "ls_armor_bluefor"
        };
        weapons[] = {};
        units[] = {};
    };
};

class CfgWeapons
{
    class lsd_gar_phase2_helmet;                                    // External class reference
    class ls_gar_phase2pilot_helmet;                                // External class reference
    class SWLB_clone_AB_helmet;                                     // External class reference
    class SWLB_clone_airborne_nco_armor;                            // External class reference
    class ls_gar_phase2Insulated_helmet; 
    class lsd_gar_marine_vest;
    class ls_sob_phase2SpecOp_helmet;
    class SWLB_Clone_officer_armor;
    class SWLB_Clone_Commander_armor;
    class ls_gar_engineer_helmet;
    class ls_gar_phase1Arf_helmet;
    class ls_gar_phase2Arf_helmet;
    class ls_gar_barc_helmet;
    class ls_gar_arc_helmet;
    class U_I_CombatUniform;
    class ls_gar_desert_helmet;

  class ls_blueforUniform_base: U_I_CombatUniform
	{
		scope=1;
		author="Legion Studios"; // no idea what this does, but it seems to be a pre-req for GM Armor
		displayName="==BLUEFOR BASE UNIFORM==";
		picture="\a3\ui_f\data\IGUI\Cfg\Actions\ico_OFF_ca";
		editorcategory="ls_static";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		class ItemInfo;
	};


     class ls_gar_phase2_uniform : ls_blueforUniform_base
    {
        class ItemInfo;                                             // External Class Reference
    };

    class lsd_gar_phase2Insulated_uniform : ls_blueforUniform_base
    {
        class ItemInfo;                                             // External Class Reference
    };

    class Trust_gar_Trustful_helmet : lsd_gar_phase2_helmet
    {
        displayName = "[351st] P2 Trustful's Helmet";
        hiddenSelections[] = {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_Trustful_Helmet.paa",
            "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };
    };

    class Trust_gar_Base_ARF : ls_gar_arc_helmet
	{
		scope=2;
		displayName="[351st] P1.5 ARC Helmet";
		hiddenSelections[]=
		{
			"camo1",
			"visor",
			"illum"
		};
		hiddenSelectionsTextures[]=
		{
			"Trust_armor\data\351st_P1.5_Base_ARC.paa",
			"ls_armor_bluefor\helmet\gar\arc\data\visor_co.paa",
			"ls_armor_bluefor\helmet\gar\arc\data\illum_co.paa"
		};	
    };

     class Trust_gar_Jungle_ARF : ls_gar_arc_helmet
	{
		scope=2;
		displayName="[351st] P1.5 ARC Jungle Helmet";
		hiddenSelections[]=
		{
			"camo1",
			"visor",
			"illum"
		};
		hiddenSelectionsTextures[]=
		{
			"Trust_armor\data\351st_P1.5_Jungle_ARC.paa",
			"ls_armor_bluefor\helmet\gar\arc\data\visor_co.paa",
			"ls_armor_bluefor\helmet\gar\arc\data\illum_co.paa"
		};
    };

    class Trust_gar_Cake_helmet : lsd_gar_phase2_helmet
    {
        displayName = "[351st] P2 Cake's Helmet";
        hiddenSelections[] = {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_Cake_Helmet.paa",
            "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };
    };

    class Trust_gar_Bomb_Barc_helmet : ls_gar_barc_helmet
    {
        displayName = "[351st] Mrk2 Barc Bomb's Helmet";
        hiddenSelections[] = {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_Bomb_Barc.paa",
            "ls_armor_bluefor\helmet\gar\barc\data\visor_co.paa"
        };
    };

    class Trust_gar_Hastings_helmet : lsd_gar_phase2_helmet
    {
        displayName = "[351st] P2 Hasting's Helmet";
        hiddenSelections[] = {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_Hastings_Helmet.paa",
            "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };
    };

    class Trust_gar_Jungle_helmet : lsd_gar_phase2_helmet
    {
        displayName = "[351st] P2 Jungle Helmet";
        hiddenSelections[] = {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_P2_Jungle_Helmet.paa",
            "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };
    };

      class Trust_gar_Jax_helmet : lsd_gar_phase2_helmet
    {
        displayName = "[351st] P2 Jax's Helmet";
        hiddenSelections[] = {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_Jax_Helmet.paa",
            "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };
    };

    class Trust_gar_Jungle_ARF_helmet : ls_gar_phase1Arf_helmet
    {
        displayName = "[351st] ARF Jungle Helmet";
        hiddenSelections[] = {
			"camo1",
			"camo2",
			"visor"
		};
		hiddenSelectionsTextures[] = {
			"Trust_armor\data\351st_ARF_Jungle_Helmet.paa",
			"",
			"Trust_armor\data\351st_ARF_Jungle_Helmet.paa",
		};
    };

    class Trust_gar_ARF_helmet : ls_gar_phase1Arf_helmet
    {
        displayName = "[351st] ARF Helmet";
        hiddenSelections[] = {
			"camo1",
			"camo2",
			"visor"
		};
		hiddenSelectionsTextures[] = {
			"Trust_armor\data\351st_ARF_Base_Helmet.paa",
			"",
			"Trust_armor\data\351st_ARF_Base_Helmet.paa",
		};
    };

    class Trust_gar_NCO_ARF_helmet : ls_gar_phase2Arf_helmet
    {
        displayName = "[351st] ARF NCO Helmet";
        hiddenSelections[] = {
			"camo1",
			"camo2",
			"visor"
		};
		hiddenSelectionsTextures[] = {
			"Trust_armor\data\351st_ARF_NCO_Helmet.paa",
			"",
			"Trust_armor\data\351st_ARF_NCO_Helmet.paa",
		};
    };

    class Trust_gar_ENG_helmet : ls_gar_engineer_helmet
    {
        displayName = "[351st] Engineer Helmet";
        hiddenSelections[] = {
            "camo1",
			"illum",
			"visor"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_engineer_helmet.paa",
            "ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
			"ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"
        };
    };

    class Trust_gar_Hazard_helmet : ls_gar_desert_helmet
    {
        displayName = "[351st] Hazard Helmet";
        hiddenSelections[] = {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_Helmet_Desert.paa",
            "ls_armor_bluefor\helmet\gar\desert\data\visor_co.paa"
        };
    };

    class Trust_gar_NCO_Hazard_helmet : ls_gar_desert_helmet
    {
        displayName = "[351st] Hazard NCO Helmet";
        hiddenSelections[] = {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_NCO_Helmet_Desert.paa",
            "ls_armor_bluefor\helmet\gar\desert\data\visor_co.paa"
        };
    };

    class Trust_gar_Medic_NCO_Hazard_helmet : ls_gar_desert_helmet
    {
        displayName = "[351st] Hazard Medic NCO Helmet";
        hiddenSelections[] = {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_Medic_NCO_Helmet_Desert.paa",
            "ls_armor_bluefor\helmet\gar\desert\data\visor_co.paa"
        };
    };

    class Trust_gar_Medic_Hazard_helmet : ls_gar_desert_helmet
    {
        displayName = "[351st] Hazard Medic Helmet";
        hiddenSelections[] = {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_Medic_Helmet_Desert.paa",
            "ls_armor_bluefor\helmet\gar\desert\data\visor_co.paa"
        };
    };

    class Trust_gar_Officer_Hazard_helmet : ls_gar_desert_helmet
    {
        displayName = "[351st] Hazard Officer Helmet";
        hiddenSelections[] = {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_Officer_Helmet_Desert.paa",
            "ls_armor_bluefor\helmet\gar\desert\data\visor_co.paa"
        };
    };

    class Trust_gar_Cell_helmet : lsd_gar_phase2_helmet
    {
        displayName = "[351st] P2 Cell's Helmet";
        hiddenSelections[] = {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_Cell_Helmet.paa",
            "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };
    };

    //Duplicate
    /*class Trust_gar_Cell_helmet : lsd_gar_phase2_helmet
    {
        displayName = "[351st] P2 Cell's Helmet";
        hiddenSelections[] = {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_Cell_Helmet.paa",
            "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };
    };*/

    class Trust_gar_Silver_helmet : lsd_gar_phase2_helmet
    {
        displayName = "[351st] P2 Silver's Helmet";
        hiddenSelections[] = {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_Silver_Helmet.paa",
            "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };
    };

    class Trust_gar_Cherry_helmet : ls_sob_phase2SpecOp_helmet
    {
        displayName = "[351st] SpecOp Cherry's Helmet";
        hiddenSelections[] = {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\Cherry_SpecOps_Helmet.paa",
            "ls_armor_bluefor\helmet\sob\phase1SpecOp\data\visor_co.paa"
        };
    };
    

    class Trust_gar_GM_helmet : ls_gar_phase2Insulated_helmet
    {
        displayName = "[351st] GM Helmet";
        hiddenSelections[] = {
            "camo1",
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_GM_Helmet.paa",
        };
    };

    class Trust_gar_GM_Medic_helmet : ls_gar_phase2Insulated_helmet
    {
        displayName = "[351st] GM Medic Helmet";
        hiddenSelections[] = {
            "camo1",
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\GM_Medic_Helmet.paa",
        };
    };

    class Trust_gar_GM_NCO_Medic_helmet : ls_gar_phase2Insulated_helmet
    {
        displayName = "[351st] GM NCO Medic Helmet";
        hiddenSelections[] = {
            "camo1",
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\GM_NCO_Medic_Helmet.paa",
        };
    };

    class Trust_gar_GM_NCO_helmet : ls_gar_phase2Insulated_helmet
    {
        displayName = "[351st] GM NCO Helmet";
        hiddenSelections[] = {
            "camo1",
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\GM_NCO_Helmet.paa",
        };
    };

    class Trust_gar_GM_Officer_helmet : ls_gar_phase2Insulated_helmet
    {
        displayName = "[351st] GM Officer Helmet";
        hiddenSelections[] = {
            "camo1",
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\GM_Officer_Helmet.paa",
        };
    };

    class Trust_gar_Salty_helmet : lsd_gar_phase2_helmet
    {
        displayName = "[351st] P2 Salty's Helmet";
        hiddenSelections[] = {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_Salty_Helmet.paa",
            "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };
    };

    class Trust_gar_AB_Medic_helmet : SWLB_clone_AB_helmet
    {
        displayName = "[351st] AB Medic Helmet";
        hiddenSelections[] = {
            "camo1",
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_AB_Medic_Helmet.paa",
        };
    };

    class Trust_gar_AB_Trustful_Medic_helmet : SWLB_clone_AB_helmet
    {
        displayName = "[351st] AB Trustful's Helmet";
        hiddenSelections[] = {
            "camo1",
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_AB_Trustful_Helmet.paa",
        };
    };

    class Trust_gar_AB_Wolf_helmet : SWLB_clone_AB_helmet
    {
        displayName = "[351st] AB Wolf's Helmet";
        hiddenSelections[] = {
            "camo1",
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_AB_Wolf_Helmet.paa",
        };
    };

     class Trust_gar_Airborne_helmet : SWLB_clone_AB_helmet
    {
        displayName = "[351st] Airborne Helmet";
        hiddenSelections[] = {
            "camo1",
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_Airborne_Helmet.paa",
        };
    };

     class Trust_gar_Galahad_helmet : lsd_gar_phase2_helmet
    {
        displayName = "[351st] P2 Galahad's Helmet";
        hiddenSelections[] = {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_Galahad_Helmet.paa",
            "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };
    };

    class Trust_gar_Vulcan_helmet : lsd_gar_phase2_helmet
    {
        displayName = "[351st] P2 Dante's Helmet";
        hiddenSelections[] = {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_Vulcan_Helmet.paa",
            "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };
    };

    class Trust_gar_Hornet_helmet : lsd_gar_phase2_helmet
    {
        displayName = "[351st] P2 Hornet's Helmet";
        hiddenSelections[] = {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_Hornet_Helmet.paa",
            "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };
    };

     class Trust_gar_Hick_helmet : lsd_gar_phase2_helmet
    {
        displayName = "[351st] P2 Hick's Helmet";
        hiddenSelections[] = {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_Hicks_Helmet.paa",
            "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };
    };

     class Trust_gar_Dragon_helmet : lsd_gar_phase2_helmet
    {
        displayName = "[351st] P2 Dragon's Helmet";
        hiddenSelections[] = {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_P2_Dragon_Helmet.paa",
            "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };
    };

    class Trust_gar_NCO_helmet : lsd_gar_phase2_helmet
    {
        displayName = "[351st] P2 NCO Helmet";
        hiddenSelections[] = {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_NCO_Helmet.paa",
            "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };
    };

     class Trust_gar_Officer_helmet : lsd_gar_phase2_helmet
    {
        displayName = "[351st] P2 Officer Helmet";
        hiddenSelections[] = {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_Officer_Helmet.paa",
            "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };
    };

    class Trust_gar_Pilot_helmet : ls_gar_phase2pilot_helmet
    {
        displayName = "[351st] P2 Pilot Helmet";
        hiddenSelections[] = {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_P2_Pilot_Helmet.paa",
            "ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
        };
    };

     class Trust_gar_Scurvy_helmet : ls_gar_phase2pilot_helmet
    {
        displayName = "[351st] P2 Scurvy Helmet";
        hiddenSelections[] = {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_P2_Scurvy_Helmet.paa",
            "ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
        };
    };

     class Trust_gar_P2_Achilles_helmet : ls_gar_phase2pilot_helmet
    {
        displayName = "[351st] P2 Pilot Achilles Helmet";
        hiddenSelections[] = {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_Achilles_Pilot.paa",
            "ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
        };
    };

     class Trust_gar_Seelig_helmet : ls_gar_phase2pilot_helmet
    {
        displayName = "[351st] P2 Seelig's Helmet";
        hiddenSelections[] = {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_Pilot_Seelig_Helmet.paa",
            "ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
        };
    };

    class Trust_gar_phase2_helmet : lsd_gar_phase2_helmet
    {
        displayName = "[351st] P2 Trooper Helmet";
        hiddenSelections[] = {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_Clone_Helmet.paa",
            "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };
    };

     class Trust_gar_phase2_Vet_helmet : lsd_gar_phase2_helmet
    {
        displayName = "[351st] P2 Vet Trooper Helmet";
        hiddenSelections[] = {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_Vet_Trooper_Helmet.paa",
            "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };
    };

     class Trust_gar_Medic_helmet : lsd_gar_phase2_helmet
    {
        displayName = "[351st] P2 Medic Helmet";
        hiddenSelections[] = {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_Medic_Helmet.paa",
            "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };
    };

    // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Vest<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<


    // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Vest<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

    class Trust_gar_Seelig_Vest : SWLB_Clone_officer_armor
    {
        displayName = "[351st] Seelig's Vest";
        hiddenSelections[] = {
            "camo1",
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_Seelig_Accessories_Officer.paa",
        };
        vestType="Rebreather"
    };

    class Trust_gar_Dragon_Vest : SWLB_Clone_Commander_armor
    {
        displayName = "[351st] Dragon's Vest";
        hiddenSelections[] = {
            "camo1",
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\Dragon_Accessories_Officer.paa",
        };
        vestType="Rebreather"
    };

    class Trust_gar_Trustful_Vest : SWLB_clone_airborne_nco_armor
    {
        displayName = "[351st] Trustfuls's Vest";
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "camo4"
        };
        hiddenSelectionsTextures[] = {
            "Trust_armor\data\351st_Trustful_Heavy.paa",
            "Trust_armor\data\351st_Trustful_Officer.paa",
            "Trust_armor\data\351st_Trustful_Heavy.paa",
            "Trust_armor\data\351st_Trustful_Heavy.paa"
        };
        vestType="Rebreather"
    };

    class Trust_gar_GM_Medic_Vest : lsd_gar_marine_vest
    {
        displayName = "[351st] GM Medic Vest";
      hiddenSelections[]=
		{
			"ammoRight",
			"ammoLeft",
			"Bandolier",
			"camo1",
			"camo2",
		};
		hiddenSelectionsTextures[]= {
		    "Trust_armor\data\GM_Medic_Vest.paa",
			"swlb_core\data\common_textures\accessories\heavy_accessories_co.paa",
			"Trust_armor\data\GM_Medic_Vest.paa",
			"Trust_armor\data\GM_Medic_Vest.paa",
			"swlb_core\data\common_textures\accessories\officer_accessories_co.paa"
		};
    };

    class Trust_gar_GM_Medic_NCO_Vest : lsd_gar_marine_vest
    {
        displayName = "[351st] GM Medic NCO Vest";
      hiddenSelections[]=
		{
			"ammoRight",
			"ammoLeft",
			"Bandolier",
			"camo1",
			"camo2",
		};
		hiddenSelectionsTextures[]= {
		    "Trust_armor\data\GM_Medic_NCO_Vest.paa",
			"swlb_core\data\common_textures\accessories\heavy_accessories_co.paa",
			"Trust_armor\data\GM_Medic_NCO_Vest.paa",
			"Trust_armor\data\GM_Medic_NCO_Vest.paa",
			"swlb_core\data\common_textures\accessories\officer_accessories_co.paa"
		};
    };

    class Trust_gar_GM_NCO_Vest : lsd_gar_marine_vest
    {
        displayName = "[351st] GM NCO Vest";
      hiddenSelections[]=
		{
			"ammoRight",
			"ammoLeft",
			"Bandolier",
			"camo1",
			"camo2",
		};
		hiddenSelectionsTextures[]= {
		    "Trust_armor\data\GM_NCO_Vest.paa",
			"swlb_core\data\common_textures\accessories\heavy_accessories_co.paa",
			"Trust_armor\data\GM_NCO_Vest.paa",
			"Trust_armor\data\GM_NCO_Vest.paa",
			"swlb_core\data\common_textures\accessories\officer_accessories_co.paa"
		};
    };

    class Trust_gar_GM_Officer_Vest : lsd_gar_marine_vest
    {
        displayName = "[351st] GM Officer Vest";
      hiddenSelections[]=
		{
			"ammoRight",
			"ammoLeft",
			"Bandolier",
			"camo1",
			"camo2",
		};
		hiddenSelectionsTextures[]= {
		    "Trust_armor\data\GM_Officer_Vest.paa",
			"swlb_core\data\common_textures\accessories\heavy_accessories_co.paa",
			"Trust_armor\data\GM_Officer_Vest.paa",
			"Trust_armor\data\GM_Officer_Vest.paa",
			"swlb_core\data\common_textures\accessories\officer_accessories_co.paa"
		};
    };

   // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>uniforms<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<


    // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>uniforms<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<


    class Trust_gar_Trustful_uniform : ls_gar_phase2_uniform
    {
        displayName = "[351st] Trustful's Armor";

        class ItemInfo : ItemInfo
        {
            uniformClass = Trust_gar_Trustful_base;
        }
    };

    class Trust_gar_Wolf_uniform : ls_gar_phase2_uniform
    {
        displayName = "[351st] Wolf's Armor";

        class ItemInfo : ItemInfo
        {
            uniformClass = Trust_gar_Wolf_base;
        }
    };

     class Trust_gar_Jungle_uniform : ls_gar_phase2_uniform
    {
        displayName = "[351st] Jungle Armor";

        class ItemInfo : ItemInfo
        {
            uniformClass = Trust_gar_Jungle_base;
        }
    };
    
     class Trust_gar_Scurvy_uniform : ls_gar_phase2_uniform
    {
        displayName = "[351st] Scurvy Armor";

        class ItemInfo : ItemInfo
        {
            uniformClass = Trust_gar_Scurvy_base;
        }
    };

    class Trust_gar_GM_Uniform : ls_blueforUniform_base
	{
		scope=2;
		displayName="[351st] GM Armor ";
		model="\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			uniformClass="Trust_gar_Uniform_GM";
			containerClass="Supply150";
			mass=40;
		};
	};

    class Trust_gar_GM_Medic_Uniform : ls_blueforUniform_base
	{
		scope=2;
		displayName="[351st] GM Medic Armor ";
		model="\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			uniformClass="Trust_gar_Uniform_GM_Medic";
			containerClass="Supply150";
			mass=40;
		};
	};

    class Trust_gar_GM_NCO_Uniform : ls_blueforUniform_base
	{
		scope=2;
		displayName="[351st] GM NCO Armor ";
		model="\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			uniformClass="Trust_gar_Uniform_GM_NCO";
			containerClass="Supply150";
			mass=40;
		};
	};

     class Trust_gar_GM_NCO_Medic_Uniform : ls_blueforUniform_base
	{
		scope=2;
		displayName="[351st] GM Medic NCO Armor ";
		model="\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			uniformClass="Trust_gar_Uniform_GM_NCO_Medic";
			containerClass="Supply150";
			mass=40;
		};
	};

     class Trust_gar_GM_Officer_Uniform : ls_blueforUniform_base
	{
		scope=2;
		displayName="[351st] GM Officer Armor ";
		model="\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			uniformClass="Trust_gar_Uniform_GM_Officer";
			containerClass="Supply150";
			mass=40;
		};
	};

    class Trust_gar_Achilles_uniform : ls_gar_phase2_uniform
    {
        displayName = "[351st] Achilles's Armor";

        class ItemInfo : ItemInfo
        {
            uniformClass = Trust_gar_Achilles_base;
        }
    };

    class Trust_gar_Cell_uniform : ls_gar_phase2_uniform
    {
        displayName = "[351st] Cell's Armor";

        class ItemInfo : ItemInfo
        {
            uniformClass = Trust_gar_Cell_base;
        }
    };

    class Trust_gar_Airborne_uniform : ls_gar_phase2_uniform
    {
        displayName = "[351st] Airborne Armor";

        class ItemInfo : ItemInfo
        {
            uniformClass = Trust_gar_Airborne_base;
        }
    };

     class Trust_gar_Vulcan_uniform : ls_gar_phase2_uniform
    {
        displayName = "[351st] Dante's Armor";

        class ItemInfo : ItemInfo
        {
            uniformClass = Trust_gar_Vulcan_base;
        }
    };

     class Trust_gar_Airborne_Medic_uniform : ls_gar_phase2_uniform
    {
        displayName = "[351st] Airborne Medic Armor";

        class ItemInfo : ItemInfo
        {
            uniformClass = Trust_gar_Airborne_Medic_base;
        }
    };


    class Trust_gar_Hick_uniform : ls_gar_phase2_uniform
    {
        displayName = "[351st] Hick's Armor";

        class ItemInfo : ItemInfo
        {
            uniformClass = Trust_gar_Hick_base;
        }
    };

    class Trust_gar_Hornet_uniform : ls_gar_phase2_uniform
    {
        displayName = "[351st] Hornet's Armor";

        class ItemInfo : ItemInfo
        {
            uniformClass = Trust_gar_Hornet_base;
        }
    };

     class Trust_gar_Bomb_uniform : ls_gar_phase2_uniform
    {
        displayName = "[351st] Bomb's Armor";

        class ItemInfo : ItemInfo
        {
            uniformClass = Trust_gar_Bomb_base;
        }
    };

    class Trust_gar_Dragon_uniform : ls_gar_phase2_uniform
    {
        displayName = "[351st] Dragon's Armor";

        class ItemInfo : ItemInfo
        {
            uniformClass = Trust_gar_Dragon_base;
        }
    };

    class Trust_gar_NCO_uniform : ls_gar_phase2_uniform
    {
        displayName = "[351st] NCO Armor";

        class ItemInfo : ItemInfo
        {
            uniformClass = Trust_gar_NCO_base;
        }
    };

     class Trust_gar_Officer_uniform : ls_gar_phase2_uniform
    {
        displayName = "[351st] Officer Armor";

        class ItemInfo : ItemInfo
        {
            uniformClass = Trust_gar_Officer_base;
        }
    };

    class Trust_gar_Phase2_uniform : ls_gar_phase2_uniform
    {
        displayName = "[351st] Trooper Armor";

        class ItemInfo : ItemInfo
        {
            uniformClass = Trust_gar_Phase2_base;
        }
    };

    class Trust_gar_Medic_uniform : ls_gar_phase2_uniform
    {
        displayName = "[351st] Medic Armor";

        class ItemInfo : ItemInfo
        {
            uniformClass = Trust_gar_Medic_base;
        }
    };


     class Trust_gar_Galahad_uniform : ls_gar_phase2_uniform
    {
        displayName = "[351st] Galahad's Armor";

        class ItemInfo : ItemInfo
        {
            uniformClass = Trust_gar_Galahad_base;
        }
    };

      class Trust_gar_Jax_uniform : ls_gar_phase2_uniform
    {
        displayName = "[351st] Jax's Armor";

        class ItemInfo : ItemInfo
        {
            uniformClass = Trust_gar_Jax_base;
        }
    };

     class Trust_gar_Elessar_uniform : ls_gar_phase2_uniform
    {
        displayName = "[351st] Elessar's Armor";

        class ItemInfo : ItemInfo
        {
            uniformClass = Trust_gar_Elessar_base;
        }
    };

     class Trust_gar_Arch_uniform : ls_gar_phase2_uniform
    {
        displayName = "[351st] Archangel's Armor";

        class ItemInfo : ItemInfo
        {
            uniformClass = Trust_gar_Arch_base;
        }
    };

    class Trust_gar_Specter_uniform : ls_gar_phase2_uniform
    {
        displayName = "[351st] Phoenix's Armor";

        class ItemInfo : ItemInfo
        {
            uniformClass = Trust_gar_Specter_base;
        }
    };

    class Trust_gar_Seelig_uniform : ls_gar_phase2_uniform
    {
        displayName = "[351st] Seelig's Armor";

        class ItemInfo : ItemInfo
        {
            uniformClass = Trust_gar_Seelig_base;
        }
    };
    
    class Trust_gar_Hastings_uniform : ls_gar_phase2_uniform
    {
        displayName = "[351st] Hasting's Armor";

        class ItemInfo : ItemInfo
        {
            uniformClass = Trust_gar_Hastings_base;
        }
    };

    
    class Trust_gar_Gambler_uniform : ls_gar_phase2_uniform
    {
        displayName = "[351st] Gambler's Armor";

        class ItemInfo : ItemInfo
        {
            uniformClass = Trust_gar_Gambler_base;
        }
    };

      class Trust_gar_Silver_uniform : ls_gar_phase2_uniform
    {
        displayName = "[351st] Silvers's Armor";

        class ItemInfo : ItemInfo
        {
            uniformClass = Trust_gar_Silver_base;
        }
    };

    class Trust_gar_Cherryy_uniform : ls_gar_phase2_uniform
    {
        displayName = "[351st] Cherryy Armor";

        class ItemInfo : ItemInfo
        {
            uniformClass = Trust_gar_Cherryy_base;
        }
    };

    class Trust_gar_Pilot_uniform : ls_gar_phase2_uniform
    {
        displayName = "[351st] Pilot Armor";

        class ItemInfo : ItemInfo
        {
            uniformClass = Trust_gar_Pilot_base;
        }
    };


};

class CfgVehicles
{
    class lsd_gar_phase2_base;
    class lsd_gar_phase2Insulated_uniform;

    class Trust_gar_Trustful_base : lsd_gar_phase2_base
    {
        scope = 2;
        displayName = "Trustful";
        editorSubcategory = Trust_gar_clones;
        uniformClass = Trust_gar_Trustful_uniform;
        hiddenSelections[]={
            "camo1",
            "camo2",
            "undersuit",
            "insignia"
        };
        hiddenSelectionsTextures[]={
            "\Trust_armor\data\351st_Trustful_Upper.paa",
            "\Trust_armor\data\351st_Trustful_Lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa",
        };
    };   

      class Trust_gar_Cherryy_base : lsd_gar_phase2_base
    {
        scope = 2;
        displayName = "Cherryy";
        editorSubcategory = Trust_gar_clones;
        uniformClass = Trust_gar_Cherryy_uniform;
        hiddenSelections[]={
            "camo1",
            "camo2",
            "undersuit",
            "insignia"
        };
        hiddenSelectionsTextures[]={
            "\Trust_armor\data\351st_Cherryy_Upper.paa",
            "\Trust_armor\data\351st_Cherryy_Lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa",
        };
    };  

     class Trust_gar_Silver_base : lsd_gar_phase2_base
    {
        scope = 2;
        displayName = "Silver";
        editorSubcategory = Trust_gar_clones;
        uniformClass = Trust_gar_Silver_uniform;
        hiddenSelections[]={
            "camo1",
            "camo2",
            "undersuit",
            "insignia"
        };
        hiddenSelectionsTextures[]={
            "\Trust_armor\data\351st_Silver_Upper.paa",
            "\Trust_armor\data\351st_Silver_Lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa",
        };
    };   
    
    class Trust_gar_Hastings_base : lsd_gar_phase2_base
    {
        scope = 2;
        displayName = "Hastings";
        editorSubcategory = Trust_gar_clones;
        uniformClass = Trust_gar_Hastings_uniform;
        hiddenSelections[]={
            "camo1",
            "camo2",
            "undersuit",
            "insignia"
        };
        hiddenSelectionsTextures[]={
            "\Trust_armor\data\351st_Hastings_Upper.paa",
            "\Trust_armor\data\351st_Hastings_Lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa",
        };
    };   

    class Trust_gar_Gambler_base : lsd_gar_phase2_base
    {
        scope = 2;
        displayName = "Gambler";
        editorSubcategory = Trust_gar_clones;
        uniformClass = Trust_gar_Gambler_uniform;
        hiddenSelections[]={
            "camo1",
            "camo2",
            "undersuit",
            "insignia"
        };
        hiddenSelectionsTextures[]={
            "\Trust_armor\data\351st_Gambler_Upper.paa",
            "\Trust_armor\data\351st_Clone_Lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa",
        };
    };   

     class Trust_gar_Scurvy_base : lsd_gar_phase2_base
    {
        scope = 2;
        displayName = "Scurvy";
        editorSubcategory = Trust_gar_clones;
        uniformClass = Trust_gar_Scurvy_uniform;
        hiddenSelections[]={
            "camo1",
            "camo2",
            "undersuit",
            "insignia"
        };
        hiddenSelectionsTextures[]={
            "\Trust_armor\data\351st_P2_Scurvy_Upper.paa",
            "\Trust_armor\data\351st_P2_Scurvy_Lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa",
        };
    };   

    class Trust_gar_Seelig_base : lsd_gar_phase2_base
    {
        scope = 2;
        displayName = "Seelig";
        editorSubcategory = Trust_gar_clones;
        uniformClass = Trust_gar_Seelig_uniform;
        hiddenSelections[]={
            "camo1",
            "camo2",
            "undersuit",
            "insignia"
        };
        hiddenSelectionsTextures[]={
            "\Trust_armor\data\351st_Pilot_Seelig_Upper.paa",
            "\Trust_armor\data\351st_Pilot_Seelig_Lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa",
        };
    };   

     class Trust_gar_Wolf_base : lsd_gar_phase2_base
    {
        scope = 2;
        displayName = "Wolf";
        editorSubcategory = Trust_gar_clones;
        uniformClass = Trust_gar_Wolf_uniform;
        hiddenSelections[]={
            "camo1",
            "camo2",
            "undersuit",
            "insignia"
        };
        hiddenSelectionsTextures[]={
            "\Trust_armor\data\351st_AB_Wolf_Upper.paa",
            "\Trust_armor\data\351st_AB_Wolf_Lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa",
        };
    };  

     class Trust_gar_Jungle_base : lsd_gar_phase2_base
    {
        scope = 2;
        displayName = "Jungle Trooper";
        editorSubcategory = Trust_gar_clones;
        uniformClass = Trust_gar_Jungle_uniform;
        hiddenSelections[]={
            "camo1",
            "camo2",
            "undersuit",
            "insignia"
        };
        hiddenSelectionsTextures[]={
            "\Trust_armor\data\351st_ARF_Jungle_Upper.paa",
            "\Trust_armor\data\351st_ARF_Jungle_Lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa",
        };
    };  

    class Trust_gar_Cell_base : lsd_gar_phase2_base
    {
        scope = 2;
        displayName = "Cell";
        editorSubcategory = Trust_gar_clones;
        uniformClass = Trust_gar_Cell_uniform;
        hiddenSelections[]={
            "camo1",
            "camo2",
            "undersuit",
            "insignia"
        };
        hiddenSelectionsTextures[]={
            "\Trust_armor\data\351st_Cell_Upper.paa",
            "\Trust_armor\data\351st_Cell_Lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa",
        };
    };    

     class Trust_gar_Jax_base : lsd_gar_phase2_base
    {
        scope = 2;
        displayName = "Jax";
        editorSubcategory = Trust_gar_clones;
        uniformClass = Trust_gar_Jax_uniform;
        hiddenSelections[]={
            "camo1",
            "camo2",
            "undersuit",
            "insignia"
        };
        hiddenSelectionsTextures[]={
            "\Trust_armor\data\351st_Jax_Upper.paa",
            "\Trust_armor\data\351st_Jax_Lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa",
        };
    };    

    class ls_blueforUnit_base;
	class ls_blueforClone_base;
	class  Trust_gar_Uniform_GM: ls_blueforClone_base
	{
		genericNames="ls_clone_p2_ct";
		uniformClass="Trust_gar_GM_Uniform";
		nakedUniform="lsd_gar_bodyGlove_uniform";
		model="\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
		hiddenSelections[]=
		{
			"_upper",
			"_lower",
			"_undersuit"
		};
		hiddenSelectionsTextures[]=
		{
			"\Trust_armor\data\351st_GM_Upper.paa",
			"\Trust_armor\data\351st_GM_Lower.paa",
			"\lsd_armor_bluefor\uniform\gar\phase2Insulated\data\undersuit_co.paa"
        };
    };

    class  Trust_gar_Uniform_GM_Medic: ls_blueforClone_base
	{
		genericNames="ls_clone_p2_ct";
		uniformClass="Trust_gar_GM_Medic_Uniform";
		nakedUniform="lsd_gar_bodyGlove_uniform";
		model="\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
		hiddenSelections[]=
		{
			"_upper",
			"_lower",
			"_undersuit"
		};
		hiddenSelectionsTextures[]=
		{
			"\Trust_armor\data\GM_Medic_Upper.paa",
			"\Trust_armor\data\GM_Medic_Lower.paa",
			"\lsd_armor_bluefor\uniform\gar\phase2Insulated\data\undersuit_co.paa"
        };
    };

     class  Trust_gar_Uniform_GM_NCO: ls_blueforClone_base
	{
		genericNames="ls_clone_p2_ct";
		uniformClass="Trust_gar_GM_NCO_Uniform";
		nakedUniform="lsd_gar_bodyGlove_uniform";
		model="\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
		hiddenSelections[]=
		{
			"_upper",
			"_lower",
			"_undersuit"
		};
		hiddenSelectionsTextures[]=
		{
			"\Trust_armor\data\GM_NCO_Upper.paa",
			"\Trust_armor\data\GM_Medic_Lower.paa",
			"\lsd_armor_bluefor\uniform\gar\phase2Insulated\data\undersuit_co.paa"
        };
    };

     class  Trust_gar_Uniform_GM_NCO_Medic: ls_blueforClone_base
	{
		genericNames="ls_clone_p2_ct";
		uniformClass="Trust_gar_GM_NCO_Medic_Uniform";
		nakedUniform="lsd_gar_bodyGlove_uniform";
		model="\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
		hiddenSelections[]=
		{
			"_upper",
			"_lower",
			"_undersuit"
		};
		hiddenSelectionsTextures[]=
		{
			"\Trust_armor\data\GM_Medic_Upper.paa",
			"\Trust_armor\data\GM_Medic_Lower.paa",
			"\lsd_armor_bluefor\uniform\gar\phase2Insulated\data\undersuit_co.paa"
        };
    };

    class  Trust_gar_Uniform_GM_Officer: ls_blueforClone_base
	{
		genericNames="ls_clone_p2_ct";
		uniformClass="Trust_gar_GM_Officer_Uniform";
		nakedUniform="lsd_gar_bodyGlove_uniform";
		model="\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
		hiddenSelections[]=
		{
			"_upper",
			"_lower",
			"_undersuit"
		};
		hiddenSelectionsTextures[]=
		{
			"\Trust_armor\data\GM_NCO_Upper.paa",
			"\Trust_armor\data\GM_Medic_Lower.paa",
			"\lsd_armor_bluefor\uniform\gar\phase2Insulated\data\undersuit_co.paa"
        };
    };

    class Trust_gar_Vulcan_base : lsd_gar_phase2_base
    {
        scope = 2;
        displayName = "Dante";
        editorSubcategory = Trust_gar_clones;
        uniformClass = Trust_gar_Vulcan_uniform;
        hiddenSelections[]={
            "camo1",
            "camo2",
            "undersuit",
            "insignia"
        };
        hiddenSelectionsTextures[]={
            "\Trust_armor\data\351st_Vulcan_Upper.paa",
            "\Trust_armor\data\351st_Vulcan_Lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa",
        };
    };      

    class Trust_gar_Airborne_base : lsd_gar_phase2_base
    {
        scope = 2;
        displayName = "Airborne";
        editorSubcategory = Trust_gar_clones;
        uniformClass = Trust_gar_Airborne_uniform;
        hiddenSelections[]={
            "camo1",
            "camo2",
            "undersuit",
            "insignia"
        };
        hiddenSelectionsTextures[]={
            "\Trust_armor\data\351st_Airborne_Upper.paa",
            "\Trust_armor\data\351st_Airborne_Lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa",
        };
    };      

    class Trust_gar_Airborne_Medic_base : lsd_gar_phase2_base
    {
        scope = 2;
        displayName = "Airborne Medic";
        editorSubcategory = Trust_gar_clones;
        uniformClass = Trust_gar_Airborne_Medic_uniform;
        hiddenSelections[]={
            "camo1",
            "camo2",
            "undersuit",
            "insignia"
        };
        hiddenSelectionsTextures[]={
            "\Trust_armor\data\351st_AB_Medic_Upper.paa",
            "\Trust_armor\data\351st_AB_Medic_Lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa",
        };
    };      

      class Trust_gar_Galahad_base : lsd_gar_phase2_base
    {
        scope = 2;
        displayName = "Galahad";
        editorSubcategory = Trust_gar_clones;
        uniformClass = Trust_gar_Galahad_uniform;
        hiddenSelections[]={
            "camo1",
            "camo2",
            "undersuit",
            "insignia"
        };
        hiddenSelectionsTextures[]={
            "\Trust_armor\data\351st_Galahad_Upper.paa",
            "\Trust_armor\data\351st_Galahad_Lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa",
        };
    };      

    class Trust_gar_Hick_base : lsd_gar_phase2_base
    {
        scope = 2;
        displayName = "Hick";
        editorSubcategory = Trust_gar_clones;
        uniformClass = Trust_gar_Hick_uniform;
        hiddenSelections[]={
            "camo1",
            "camo2",
            "undersuit",
            "insignia"
        };
        hiddenSelectionsTextures[]={
            "\Trust_armor\data\351st_Hicks_Upper.paa",
            "\Trust_armor\data\351st_Hicks_Lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa",
        };
    };      

    class Trust_gar_Achilles_base : lsd_gar_phase2_base
    {
        scope = 2;
        displayName = "Achilles";
        editorSubcategory = Trust_gar_clones;
        uniformClass = Trust_gar_Achilles_uniform;
        hiddenSelections[]={
            "camo1",
            "camo2",
            "undersuit",
            "insignia"
        };
        hiddenSelectionsTextures[]={
            "\Trust_armor\data\351st_Achilles_Upper.paa",
            "\Trust_armor\data\351st_Achilles_Lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa",
        };
    };      

      class Trust_gar_Hornet_base : lsd_gar_phase2_base
    {
        scope = 2;
        displayName = "Hornet";
        editorSubcategory = Trust_gar_clones;
        uniformClass = Trust_gar_Hornet_uniform;
        hiddenSelections[]={
            "camo1",
            "camo2",
            "undersuit",
            "insignia"
        };
        hiddenSelectionsTextures[]={
            "\Trust_armor\data\351st_Hornet_Upper.paa",
            "\Trust_armor\data\351st_Hornet_Lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa",
        };
    };      

     class Trust_gar_Bomb_base : lsd_gar_phase2_base
    {
        scope = 2;
        displayName = "Bomb";
        editorSubcategory = Trust_gar_clones;
        uniformClass = Trust_gar_Bomb_uniform;
        hiddenSelections[]={
            "camo1",
            "camo2",
            "undersuit",
            "insignia"
        };
        hiddenSelectionsTextures[]={
            "\Trust_armor\data\351st_Bomb_Upper.paa",
            "\Trust_armor\data\351st_Bomb_Lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa",
        };
    };    

    class Trust_gar_Elessar_base : lsd_gar_phase2_base
    {
        scope = 2;
        displayname = "Elessar Trooper";
        editorSubcategory = Trust_gar_clones;
        uniformClass = Trust_gar_Elessar_uniform;
        hiddenSelections[]={
            "camo1",
            "camo2",
            "undersuit",
            "insignia"
        };
        hiddenSelectionsTextures[]={
            "\Trust_armor\data\351st_Elssar_Upper.paa",
            "\Trust_armor\data\351st_Clone_Lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa",
        };
    };     

     class Trust_gar_Pilot_base : lsd_gar_phase2_base
    {
        scope = 2;
        displayname = "Pilot Trooper";
        editorSubcategory = Trust_gar_clones;
        uniformClass = Trust_gar_Pilot_uniform;
        hiddenSelections[]={
            "camo1",
            "camo2",
            "undersuit",
            "insignia"
        };
        hiddenSelectionsTextures[]={
            "\Trust_armor\data\351st_P2_Pilot_Upper.paa",
            "\Trust_armor\data\351st_Clone_Lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa",
        };
    };   

    class Trust_gar_Arch_base : lsd_gar_phase2_base
    {
        scope = 2;
        displayname = "Archangel Trooper";
        editorSubcategory = Trust_gar_clones;
        uniformClass = Trust_gar_Arch_uniform;
        hiddenSelections[]={
            "camo1",
            "camo2",
            "undersuit",
            "insignia"
        };
        hiddenSelectionsTextures[]={
            "\Trust_armor\data\351st_Arch_Upper.paa",
            "\Trust_armor\data\351st_Clone_Lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa",
        };
    };     

    class Trust_gar_Specter_base : lsd_gar_phase2_base
    {
        scope = 2;
        displayname = "Phoenix Trooper";
        editorSubcategory = Trust_gar_clones;
        uniformClass = Trust_gar_Specter_uniform;
        hiddenSelections[]={
            "camo1",
            "camo2",
            "undersuit",
            "insignia"
        };
        hiddenSelectionsTextures[]={
            "\Trust_armor\data\351st_Spectre_Upper.paa",
            "\Trust_armor\data\351st_Clone_Lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa",
        };
    };          

    class Trust_gar_Phase2_base : lsd_gar_phase2_base
    {
        scope = 2;
        displayname = "Trooper";
        editorSubcategory = Trust_gar_clones;
        uniformClass = Trust_gar_Phase2_uniform;
        hiddenSelections[]={
            "camo1",
            "camo2",
            "undersuit",
            "insignia"
        };
        hiddenSelectionsTextures[]={
            "\Trust_armor\data\351st_Clone_Upper.paa",
            "\Trust_armor\data\351st_Clone_Lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa",
        };
    };        
    
    class Trust_gar_Officer_base : lsd_gar_phase2_base
    {
        scope = 2;
        displayname = "Officer";
        editorSubcategory = Trust_gar_clones;
        uniformClass = Trust_gar_Officer_uniform;
        hiddenSelections[]={
            "camo1",
            "camo2",
            "undersuit",
            "insignia"
        };
        hiddenSelectionsTextures[]={
            "\Trust_armor\data\351st_Officer_Upper.paa",
            "\Trust_armor\data\351st_Officer_lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa",
        };
    };         

     class Trust_gar_NCO_base : lsd_gar_phase2_base
    {
        scope = 2;
        displayname = "NCO";
        editorSubcategory = Trust_gar_clones;
        uniformClass = Trust_gar_NCO_uniform;
        hiddenSelections[]={
            "camo1",
            "camo2",
            "undersuit",
            "insignia"
        };
        hiddenSelectionsTextures[]={
            "\Trust_armor\data\351st_NCO_Upper.paa",
            "\Trust_armor\data\351st_NCO_lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa",
        };
    };         

    class Trust_gar_Medic_base : lsd_gar_phase2_base
    {
        scope = 2;
        displayname = "Medic";
        editorSubcategory = Trust_gar_clones;
        uniformClass = Trust_gar_Medic_uniform;
        hiddenSelections[]={
            "camo1",
            "camo2",
            "undersuit",
            "insignia"
        };
        hiddenSelectionsTextures[]={
            "\Trust_armor\data\351st_Medic_Upper.paa",
            "\Trust_armor\data\351st_Medic_Lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa",
        };
    };         

    class Trust_gar_Dragon_base : lsd_gar_phase2_base
    {
        scope = 2;
        displayname = "Dragon";
        editorSubcategory = Trust_gar_clones;
        uniformClass = Trust_gar_Dragon_uniform;
        hiddenSelections[]={
            "camo1",
            "camo2",
            "undersuit",
            "insignia"
        };
        hiddenSelectionsTextures[]={
            "\Trust_armor\data\351st_P2_Dragon_Upper.paa",
            "\Trust_armor\data\351st_P2_Dragon_Lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa",
        };
    };        

    // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Back Packs<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

    class SWLB_clone_backpack_predef_light;
	class SWLB_clone_backpack_predef_heavy;
	class SWLB_clone_backpack_predef_medic;
	class SWLB_clone_backpack_predef_sg;
	class SWLB_clone_backpack_RTO;
	class SWLB_clone_backpack;
	class B_Kitbag_rgr;
	class SWLB_clone_RTO_mini_backpack;
	class SWLB_clone_backpack_heavy;
	class SWLB_clone_backpack_medic;
    class SWLB_clone_bag;

	class Trust_Clone_Backpack: SWLB_clone_backpack
	{
		displayName="351st Base backpack";
		hiddenSelectionsTextures[]=
		{
			"\Trust_armor\data\351st_Base_Backpack.paa",
			"\Trust_armor\data\351st_Base_Backpack.paa",
			"",
			"",
			""
		};
	};

    class Trust_Heavy_Backpack: SWLB_clone_backpack_heavy
	{
		displayName=" 351st Heavy backpack";
		hiddenSelectionsTextures[]=
		{
			"\Trust_armor\data\351st_Base_Backpack.paa",
	    	"\Trust_armor\data\351st_Base_Backpack.paa",
			"\Trust_armor\data\351st_Base_Backpack.paa",
			"",
			""
		};
	};

    class Trust_EOD_Backpack: SWLB_clone_backpack_heavy
	{
		displayName="351st EOD backpack";
		hiddenSelectionsTextures[]=
		{
			"\Trust_armor\data\351st_EOD_Backpack.paa",
	    	"\Trust_armor\data\351st_EOD_Backpack.paa",
			"\Trust_armor\data\351st_EOD_Backpack.paa",
			"",
			""
		};
	};

	class Trust_backpack : SWLB_clone_backpack_medic
	{
		displayName=" 351st Medic backpack";
		hiddenSelectionsTextures[]=
		{
			"\Trust_armor\data\351st_Medic_Backpack.paa",
	    	"\Trust_armor\data\351st_Medic_Backpack.paa",
			"",
			"\Trust_armor\data\351st_Medic_Backpack.paa",
			""
		};
	};

	class Trust_RTO_Backpack: SWLB_clone_backpack_RTO
	{
		displayName="351st RTO backpack";
		hiddenSelectionsTextures[]=
		{
			"\Trust_armor\data\351st_Base_Backpack.paa",
			"",
			"",
			"",
			"\Trust_armor\data\351st_Base_Backpack.paa",
		};
        maximumload=200;
		tf_range = 60000;
		tf_encryptionCode = "tf_west_radio_code";
		tf_additional_channel = 1;

	};

	class Trust_RTO_Mini_Pack: SWLB_clone_backpack
	{
		displayName="351st RTO mini pack";
		model="\SWLB_equipment\backpacks\SWLB_clone_RTO_mini_backpack.p3d";
		hiddenSelections[]=
		{
			"main",
			"accumulator"
		};
		hiddenSelectionsTextures[]=
		{
			"\Trust_armor\data\351st_mini_RTO_Pack.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_RTO_mini_backpack_accumulator_co.paa"
		};
		maximumload=150;
		picture="\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_RTO_mini_backpack_ca.paa";
		tf_range = 40000;
		tf_encryptionCode = "tf_west_radio_code";
		tf_additional_channel = 1;

	};

	class Trust_Recon_RTO_Backpack: SWLB_clone_RTO_mini_backpack
	{
		author="Trustful";
		scopecurator=2;
		maximumload=200;
		displayName="351st Recon RTO Mini Pack";
		model="\SWLB_CEE\data\SWLB_CEE_Recon_RTO_Backpack.p3d";
		picture="\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_RTO_mini_backpack_ca.paa";
		hiddenSelections[]=
		{
			"Accumulator",
			"Camo1",
			"Camo2",
			"Camo3",
			"Main"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_equipment\backpacks\data\SWLB_clone_RTO_mini_backpack_accumulator_co.paa",
			"SWLB_equipment\backpacks\data\bag_co.paa",
            "SWLB_equipment\backpacks\data\bag_co.paa",
			"SWLB_clones\data\light_accessories_co.paa",
			"\Trust_armor\data\351st_mini_RTO_Pack.paa",
		};
		tf_range = 40000;
		tf_encryptionCode = "tf_west_radio_code";
		tf_additional_channel = 1;
	};

	class Trust_clone_bags: B_Kitbag_rgr
	{
		author="Trustful";
		scope=2;
		picture="\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_bag_ca.paa";
		displayName="351st Clone trooper bags";
		model="\SWLB_equipment\backpacks\SWLB_clone_bag.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_equipment\backpacks\data\bag_co.paa",
			"SWLB_equipment\backpacks\data\bag_co.paa",
		};
		maximumload=125;
	};
    
	class trust_bag_belt: SWLB_clone_bag
	{
		displayName="351st Clone trooper belt bag";
		hiddenSelectionsTextures[]=
		{
			"SWLB_equipment\backpacks\data\bag_co.paa",
			""
		};
		maximumload=80;
	};

	class trust_bag_leg: SWLB_clone_bag
	{
		displayName="351st Clone trooper leg bag";
		hiddenSelectionsTextures[]=
		{
			"",
			"SWLB_equipment\backpacks\data\bag_co.paa",
		};
		maximumload=80;
    };

    // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Jungle Backpack<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

    class Trust_Jungle_Backpack: SWLB_clone_backpack
	{
		displayName="351st Jungle backpack";
		hiddenSelectionsTextures[]=
		{
			"\Trust_armor\data\351st_Jungle_Backpack.paa",
			"\Trust_armor\data\351st_Jungle_Backpack.paa",
			"",
			"",
			""
		};
	};

    class Trust_Jungle_Heavy_Backpack: SWLB_clone_backpack_heavy
	{
		displayName=" 351st Jungle Heavy backpack";
		hiddenSelectionsTextures[]=
		{
			"\Trust_armor\data\351st_Jungle_Backpack.paa",
	    	"\Trust_armor\data\351st_Jungle_Backpack.paa",
			"\Trust_armor\data\351st_Jungle_Backpack.paa",
			"",
			""
		};
	};

    class Trust_Jungle_EOD_Backpack: SWLB_clone_backpack_heavy
	{
		displayName="351st Jungle EOD backpack";
		hiddenSelectionsTextures[]=
		{
			"\Trust_armor\data\351st_Jungle_EOD_Backpack.paa",
	    	"\Trust_armor\data\351st_Jungle_EOD_Backpack.paa",
			"\Trust_armor\data\351st_Jungle_EOD_Backpack.paa",
			"",
			""
		};
	};

	class Trust_Jungle_Medic_backpack : SWLB_clone_backpack_medic
	{
		displayName=" 351st Jungle Medic backpack";
		hiddenSelectionsTextures[]=
		{
			"\Trust_armor\data\351st_Jungle_Medic_Backpack.paa",
	    	"\Trust_armor\data\351st_Jungle_Medic_Backpack.paa",
			"",
			"\Trust_armor\data\351st_Jungle_Medic_Backpack.paa",
			""
		};
	};

	class Trust_Jungle_RTO_Backpack: SWLB_clone_backpack_RTO
	{
		displayName="351st Jungle RTO backpack";
		hiddenSelectionsTextures[]=
		{
			"\Trust_armor\data\351st_Jungle_Backpack.paa",
			"",
			"",
			"",
			"\Trust_armor\data\351st_Jungle_Backpack.paa",
		};
        maximumload=200;
		tf_range = 60000;
		tf_encryptionCode = "tf_west_radio_code";
		tf_additional_channel = 1;

	};

	class Trust_Jungle_RTO_Mini_Pack: SWLB_clone_backpack
	{
		displayName="351st Jungle RTO Mini Pack";
		model="\SWLB_equipment\backpacks\SWLB_clone_RTO_mini_backpack.p3d";
		hiddenSelections[]=
		{
			"main",
			"accumulator"
		};
		hiddenSelectionsTextures[]=
		{
			"\Trust_armor\data\351st_Jungle_Mini_RTO_Backpack.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_RTO_mini_backpack_accumulator_co.paa"
		};
		maximumload=150;
		picture="\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_RTO_mini_backpack_ca.paa";
		tf_range = 40000;
		tf_encryptionCode = "tf_west_radio_code";
		tf_additional_channel = 1;

	};

	class Trust_Jungle_Recon_RTO_Backpack: SWLB_clone_RTO_mini_backpack
	{
		author="Trustful";
		scopecurator=2;
		maximumload=200;
		displayName="351st Jungle Recon RTO Mini Pack";
		model="\SWLB_CEE\data\SWLB_CEE_Recon_RTO_Backpack.p3d";
		picture="\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_RTO_mini_backpack_ca.paa";
		hiddenSelections[]=
		{
			"Accumulator",
			"Camo1",
			"Camo2",
			"Camo3",
			"Main"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_equipment\backpacks\data\SWLB_clone_RTO_mini_backpack_accumulator_co.paa",
			"SWLB_equipment\backpacks\data\bag_co.paa",
            "SWLB_equipment\backpacks\data\bag_co.paa",
			"SWLB_clones\data\light_accessories_co.paa",
			"\Trust_armor\data\351st_Jungle_Mini_RTO_Backpack.paa",
		};
		tf_range = 40000;
		tf_encryptionCode = "tf_west_radio_code";
		tf_additional_channel = 1;
	};
};