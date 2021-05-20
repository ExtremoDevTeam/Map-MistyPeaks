class CfgSurfaces 
{
	class Default;
	class MistyPeaks_grass_green_Surface: Default
	{
		files="MistyPeaks_grass_green_*";
		character="MistyPeaks_grass_green_Character";
		soundEnviron="grass";
		soundHit="soft_ground";
		rough=0.079999998;
		dust=0.050000001;
		lucidity=4;
		grassCover=0.050000001;
		impact="hitGroundSoft";
		surfaceFriction=1.2;
		restitution=0.15000001;
		maxSpeedCoef=0.85000002;
		maxClutterColoringCoef=1.35;
	};
	class MistyPeaks_enforestdec_Surface: Default
	{
		access=2;
		files="MistyPeaks_enforestdec_*";
		character="MistyPeaks_enforestdec_Character";
		soundEnviron="forest_exp";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		rough=0.080000;
		maxSpeedCoef=0.900000;
		dust=0.100000;
		lucidity=4;
		grassCover=0.500000;
		maxClutterColoringCoef=1.350000;
		AIAvoidStance=2;
	};
	class MistyPeaks_dirt_Surface: Default
	{
		access=2;
		files="MistyPeaks_dirt_*";
		character="empty";
		soundEnviron="gravel";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		rough=0.200000;
		maxSpeedCoef=0.950000;
		dust=0.200000;
		lucidity=0.300000;
		grassCover=0.000000;
		maxClutterColoringCoef=1.150000;
	};
};

class CfgSurfaceCharacters
{
	class MistyPeaks_grass_green_Character
	{
		probability[]={0.74000001,0.02,0.19,0.050000001};
		names[]=
		{
			"GrassGreen",
			"ThistleThornGreen",
			"ThistleThornGreenSmall",
			"FlowerLowYellow2"
		};
	};
	class MistyPeaks_enforestdec_Character
	{
		probability[]={0.325000,0.098750,0.072500,0.120000,0.030000,0.100000,0.050000,0.200000,0.002500,0.001250};
		names[]=
		{
			"Vaccinium",
			"Fern",
			"FernTall",
			"c_branches_picea",
			"c_branchesBig_picea",
			"c_GrassSmall",
			"c_Pines",
			"c_Cones",
			"c_fern_boletus_group",
			"c_fern_amanita_single"
		};
	};
};