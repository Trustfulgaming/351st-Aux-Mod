class CfgPatches 
{
    class Trust_VIC                     // Had to rework this area as you had a weird structure and had a duplicate units[]={};
	{
		author="Trust";
		requiredAddons[]=
		{
            "Trust_core",
            "ls_armor_bluefor"   
        };
		requiredVersion=0.1;
		units[]= 
		{
            "Trust_351st_LAAT",
            "Trust_351st_Transport_LAAT",
            "Trust_351st_LAAT_Medic",
            "Trust_351st_AB_LAAT",
		};
		weapons[]={};
	};
};

class cfgFactionClasses //I would move this section to your core
{ 
    class Trust_351st_Fac  //Main faction class of every unit.
    { 
        displayName = "[351st Legion] Evarrian Company"; 
        priority = 2; // Position in list. 
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = ""; //Custom Icon 
    };  
};

//Duplicate CfgFactionClasses 
/*class cfgFactionClasses 
{ 
    class ScorpionPlatoon                               // this wouldn't be here unlesss you wanted seperate factions for each detachment, i'd suggest 1 faction the subcategories. Seen below
    { 
        displayName = "Scorpion Platoon"; 
        priority = 3; // Position in list. 
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = ""; //Custom Icon 
    };  
};*/
class CfgEditorSubcategories
{
	class Trust_Categ_Ghoul
	{
		displayName= "Ghoul Air Support Wing";
	};
    class Trust_Scrp_Plt 
    {
        displayname = "Scorpion Platoon";
    };
};

    class CfgVehicles 
{     
	
	class ls_laat_ab;
	class lsd_laat_base;
	class lsd_heli_laati_ab;
    class ls_laat;
	class lsd_heli_laati_medevac;
	class lsd_heli_laati;
    class lsd_heli_laati_transport;
  
    class Trust_351st_AB_LAAT : lsd_heli_laati_ab
    {
        scope = 2;
        displayname="351st AB LAAT/I";
        faction="Trust_351st_Fac"; //this needs to be the class variable name of the cfgFactions
         author="";
        editorSubcategory="Trust_Categ_Ghoul"; //can remove if no editor subc // class variable name of cfgEditorSubcategories
        hiddenselections[]=
        {
            "body",
            "body_2",
            "door_1",
            "door_2",
            "door_3",
            "wings",
            "missiles",
            "cockpits",
            "glass",
            "clan",
            "zasleh_l",
            "zasleh_r",
            "zasleh_b"
        };
        hiddenselectionstextures[]= //you still need the filepaths to your textures here like in the TextureSources
        {
                "\Trust_LAATs\data\351st_LAAT_Body1.paa", //0
                "\Trust_LAATs\data\351st_LAAT_Body2.paa", //1
                "\Trust_LAATs\data\351st_LAAT_Door1.paa", //2
                "\Trust_LAATs\data\351st_LAAT_Door2.paa", //3
                "\Trust_LAATs\data\351st_LAAT_Door3.paa", //4
                "\Trust_LAATs\data\351st_LAAT_Wings.paa", //5
                "lsd_vehicles_heli\laati\data\missiles_co.paa", //6
                "lsd_vehicles_heli\laati\data\cockpits_co.paa", //7
                "lsd_vehicles_heli\laati\data\glass_ca.paa" //8
                
        };

        class TextureSources
        {
            class base
            {
                displayname="351st LAAT I";
                author="";
                textures[]=
                {
                "\Trust_LAATs\data\351st_LAAT_Body1.paa", //0
                "\Trust_LAATs\data\351st_LAAT_Body2.paa", //1
                "\Trust_LAATs\data\351st_LAAT_Door1.paa", //2
                "\Trust_LAATs\data\351st_LAAT_Door2.paa", //3
                "\Trust_LAATs\data\351st_LAAT_Door3.paa", //4
                "\Trust_LAATs\data\351st_LAAT_Wings.paa", //5
                "lsd_vehicles_heli\laati\data\missiles_co.paa", //6
                "lsd_vehicles_heli\laati\data\cockpits_co.paa", //7
                "lsd_vehicles_heli\laati\data\glass_ca.paa" //8
                };
                factions[]=
                {
                    "Trust_Categ_Ghoul" 
                };
            };

        };
        textureList[]=
        {
            "base",
        };
    };

    class Trust_351st_Transport_LAAT : lsd_heli_laati_transport
    {
        scope = 2;
        displayname="351st LAAT/I Transport";
        faction="Trust_351st_Fac"; //this needs to be the class variable name of the cfgFactions
        author="";
        editorSubcategory="Trust_Categ_Ghoul"; //can remove if no editor subc // class variable name of cfgEditorSubcategories
        hiddenselections[]=
        {
            "body",
            "body_2",
            "door_1",
            "door_2",
            "door_3",
            "wings",
            "missiles",
            "cockpits",
            "glass",
            "clan",
            "zasleh_l",
            "zasleh_r",
            "zasleh_b"
        };
        hiddenselectionstextures[]= //you still need the filepaths to your textures here like in the TextureSources
        {
                "\Trust_LAATs\data\351st_LAAT_Body1.paa", //0
                "\Trust_LAATs\data\351st_LAAT_Body2.paa", //1
                "\Trust_LAATs\data\351st_LAAT_Door1.paa", //2
                "\Trust_LAATs\data\351st_LAAT_Door2.paa", //3
                "\Trust_LAATs\data\351st_LAAT_Door3.paa", //4
                "\Trust_LAATs\data\351st_LAAT_Wings.paa", //5
                "lsd_vehicles_heli\laati\data\missiles_co.paa", //6
                "lsd_vehicles_heli\laati\data\cockpits_co.paa", //7
                "lsd_vehicles_heli\laati\data\glass_ca.paa" //8
                
        };

        class TextureSources
        {
            class base
            {
                displayname="351st LAAT I";
                author="";
                textures[]=
                {
                "\Trust_LAATs\data\351st_LAAT_Body1.paa", //0
                "\Trust_LAATs\data\351st_LAAT_Body2.paa", //1
                "\Trust_LAATs\data\351st_LAAT_Door1.paa", //2
                "\Trust_LAATs\data\351st_LAAT_Door2.paa", //3
                "\Trust_LAATs\data\351st_LAAT_Door3.paa", //4
                "\Trust_LAATs\data\351st_LAAT_Wings.paa", //5
                "lsd_vehicles_heli\laati\data\missiles_co.paa", //6
                "lsd_vehicles_heli\laati\data\cockpits_co.paa", //7
                "lsd_vehicles_heli\laati\data\glass_ca.paa" //8
                };
                factions[]=
                {
                    "Trust_Categ_Ghoul" 
                };
            };

        };
        textureList[]=
        {
            "base",
        };
    };

    class Trust_351st_LAAT : lsd_heli_laati
    {
        scope = 2;
        displayname="351st LAAT/I Gunship";
        faction="Trust_351st_Fac"; //this needs to be the class variable name of the cfgFactions
        author="";
        editorSubcategory="Trust_Categ_Ghoul"; //can remove if no editor subc // class variable name of cfgEditorSubcategories
        hiddenselections[]=
        {
            "body",
            "body_2",
            "door_1",
            "door_2",
            "door_3",
            "wings",
            "missiles",
            "cockpits",
            "glass",
            "clan",
            "zasleh_l",
            "zasleh_r",
            "zasleh_b"
        };
        hiddenselectionstextures[]= //you still need the filepaths to your textures here like in the TextureSources
        {
                "\Trust_LAATs\data\351st_LAAT_Body1.paa", //0
                "\Trust_LAATs\data\351st_LAAT_Body2.paa", //1
                "\Trust_LAATs\data\351st_LAAT_Door1.paa", //2
                "\Trust_LAATs\data\351st_LAAT_Door2.paa", //3
                "\Trust_LAATs\data\351st_LAAT_Door3.paa", //4
                "\Trust_LAATs\data\351st_LAAT_Wings.paa", //5
                "lsd_vehicles_heli\laati\data\missiles_co.paa", //6
                "lsd_vehicles_heli\laati\data\cockpits_co.paa", //7
                "lsd_vehicles_heli\laati\data\glass_ca.paa" //8
                
        };

        class TextureSources
        {
            class base
            {
                displayname="351st LAAT I";
                author="";
                textures[]=
                {
                "\Trust_LAATs\data\351st_LAAT_Body1.paa", //0
                "\Trust_LAATs\data\351st_LAAT_Body2.paa", //1
                "\Trust_LAATs\data\351st_LAAT_Door1.paa", //2
                "\Trust_LAATs\data\351st_LAAT_Door2.paa", //3
                "\Trust_LAATs\data\351st_LAAT_Door3.paa", //4
                "\Trust_LAATs\data\351st_LAAT_Wings.paa", //5
                "lsd_vehicles_heli\laati\data\missiles_co.paa", //6
                "lsd_vehicles_heli\laati\data\cockpits_co.paa", //7
                "lsd_vehicles_heli\laati\data\glass_ca.paa" //8
                };
                factions[]=
                {
                    "Trust_Categ_Ghoul" 
                };
            };

        };
        textureList[]=
        {
            "base",
        };
    };

    class Trust_351st_LAAT_Medic : lsd_heli_laati_medevac
    {
        scope = 2;
        displayname="351st LAAT/I Medevac";
        faction="Trust_351st_Fac"; //this needs to be the class variable name of the cfgFactions
        author="";
        editorSubcategory="Trust_Categ_Ghoul"; //can remove if no editor subc // class variable name of cfgEditorSubcategories
        hiddenselections[]=
        {
            "body",
            "body_2",
            "door_1",
            "door_2",
            "door_3",
            "wings",
            "missiles",
            "cockpits",
            "glass",
            "clan",
            "zasleh_l",
            "zasleh_r",
            "zasleh_b"
        };
        hiddenselectionstextures[]= //you still need the filepaths to your textures here like in the TextureSources
        {
                "\Trust_LAATs\data\351st_LAAT_Medic_Body1.paa", //0
                "\Trust_LAATs\data\351st_LAAT_Medic_Body2.paa", //1
                "\Trust_LAATs\data\351st_LAAT_Medic_Door1.paa", //2
                "\Trust_LAATs\data\351st_LAAT_Medic_Door2.paa", //3
                "\Trust_LAATs\data\351st_LAAT_Medic_Door3.paa", //4
                "\Trust_LAATs\data\351st_LAAT_Medic_Wings.paa", //5
                "lsd_vehicles_heli\laati\data\missiles_co.paa", //6
                "lsd_vehicles_heli\laati\data\cockpits_co.paa", //7
                "lsd_vehicles_heli\laati\data\glass_ca.paa" //8
                
        };

        class TextureSources
        {
            class base
            {
                displayname="351st LAAT I";
                author="";
                textures[]=
                {
               "\Trust_LAATs\data\351st_LAAT_Medic_Body1.paa", //0
                "\Trust_LAATs\data\351st_LAAT_Medic_Body2.paa", //1
                "\Trust_LAATs\data\351st_LAAT_Medic_Door1.paa", //2
                "\Trust_LAATs\data\351st_LAAT_Medic_Door2.paa", //3
                "\Trust_LAATs\data\351st_LAAT_Medic_Door3.paa", //4
                "\Trust_LAATs\data\351st_LAAT_Medic_Wings.paa", //5
                "lsd_vehicles_heli\laati\data\missiles_co.paa", //6
                "lsd_vehicles_heli\laati\data\cockpits_co.paa", //7
                "lsd_vehicles_heli\laati\data\glass_ca.paa" //8
                };
                factions[]=
                {
                    "Trust_Categ_Ghoul" 
                };
            };

        };
        textureList[]=
        {
            "base",
        };
    };
};