#pragma once

enum ECstrike15UserMessages {
	CS_UM_VGUIMenu = 1,
	CS_UM_Geiger = 2,
	CS_UM_Train = 3,
	CS_UM_HudText = 4,
	CS_UM_SayText = 5,
	CS_UM_SayText2 = 6,
	CS_UM_TextMsg = 7,
	CS_UM_HudMsg = 8,
	CS_UM_ResetHud = 9,
	CS_UM_GameTitle = 10,
	CS_UM_Shake = 12,
	CS_UM_Fade = 13,
	CS_UM_Rumble = 14,
	CS_UM_CloseCaption = 15,
	CS_UM_CloseCaptionDirect = 16,
	CS_UM_SendAudio = 17,
	CS_UM_RawAudio = 18,
	CS_UM_VoiceMask = 19,
	CS_UM_RequestState = 20,
	CS_UM_Damage = 21,
	CS_UM_RadioText = 22,
	CS_UM_HintText = 23,
	CS_UM_KeyHintText = 24,
	CS_UM_ProcessSpottedEntityUpdate = 25,
	CS_UM_ReloadEffect = 26,
	CS_UM_AdjustMoney = 27,
	CS_UM_UpdateTeamMoney = 28,
	CS_UM_StopSpectatorMode = 29,
	CS_UM_KillCam = 30,
	CS_UM_DesiredTimescale = 31,
	CS_UM_CurrentTimescale = 32,
	CS_UM_AchievementEvent = 33,
	CS_UM_MatchEndConditions = 34,
	CS_UM_DisconnectToLobby = 35,
	CS_UM_PlayerStatsUpdate = 36,
	CS_UM_DisplayInventory = 37,
	CS_UM_WarmupHasEnded = 38,
	CS_UM_ClientInfo = 39,
	CS_UM_XRankGet = 40,
	CS_UM_XRankUpd = 41,
	CS_UM_CallVoteFailed = 45,
	CS_UM_VoteStart = 46,
	CS_UM_VotePass = 47,
	CS_UM_VoteFailed = 48,
	CS_UM_VoteSetup = 49,
	CS_UM_ServerRankRevealAll = 50,
	CS_UM_SendLastKillerDamageToClient = 51,
	CS_UM_ServerRankUpdate = 52,
	CS_UM_ItemPickup = 53,
	CS_UM_ShowMenu = 54,
	CS_UM_BarTime = 55,
	CS_UM_AmmoDenied = 56,
	CS_UM_MarkAchievement = 57,
	CS_UM_MatchStatsUpdate = 58,
	CS_UM_ItemDrop = 59,
	CS_UM_GlowPropTurnOff = 60,
	CS_UM_SendPlayerItemDrops = 61,
	CS_UM_RoundBackupFilenames = 62,
	CS_UM_SendPlayerItemFound = 63,
	CS_UM_ReportHit = 64,
	CS_UM_XpUpdate = 65,
	CS_UM_QuestProgress = 66,
	CS_UM_ScoreLeaderboardData = 67,
	CS_UM_PlayerDecalDigitalSignature = 68,
	MAX_ECSTRIKE15USERMESSAGES
};

enum ItemDefinitionIndex
{
	WEAPON_DEAGLE = 1,
	WEAPON_ELITE = 2,
	WEAPON_FIVESEVEN = 3,
	WEAPON_GLOCK = 4,
	WEAPON_AK47 = 7,
	WEAPON_AUG = 8,
	WEAPON_AWP = 9,
	WEAPON_FAMAS = 10,
	WEAPON_G3SG1 = 11,
	WEAPON_GALILAR = 13,
	WEAPON_M249 = 14,
	WEAPON_M4A1 = 16,
	WEAPON_MAC10 = 17,
	WEAPON_P90 = 19,
	WEAPON_UMP45 = 24,
	WEAPON_XM1014 = 25,
	WEAPON_BIZON = 26,
	WEAPON_MAG7 = 27,
	WEAPON_NEGEV = 28,
	WEAPON_SAWEDOFF = 29,
	WEAPON_TEC9 = 30,
	WEAPON_TASER = 31,
	WEAPON_HKP2000 = 32,
	WEAPON_MP7 = 33,
	WEAPON_MP9 = 34,
	WEAPON_NOVA = 35,
	WEAPON_P250 = 36,
	WEAPON_SCAR20 = 38,
	WEAPON_SG556 = 39,
	WEAPON_SSG08 = 40,
	WEAPON_KNIFE = 42,
	WEAPON_FLASHBANG = 43,
	WEAPON_HEGRENADE = 44,
	WEAPON_SMOKEGRENADE = 45,
	WEAPON_MOLOTOV = 46,
	WEAPON_DECOY = 47,
	WEAPON_INCGRENADE = 48,
	WEAPON_C4 = 49,
	WEAPON_KNIFE_T = 59,
	WEAPON_M4A1_SILENCER = 60,
	WEAPON_USP_SILENCER = 61,
	WEAPON_CZ75A = 63,
	WEAPON_REVOLVER = 64,
	WEAPON_KNIFE_BAYONET = 500,
	WEAPON_KNIFE_FLIP = 505,
	WEAPON_KNIFE_GUT = 506,
	WEAPON_KNIFE_KARAMBIT = 507,
	WEAPON_KNIFE_M9_BAYONET = 508,
	WEAPON_KNIFE_TACTICAL = 509,
	WEAPON_KNIFE_FALCHION = 512,
	WEAPON_KNIFE_SURVIVAL_BOWIE = 514,
	WEAPON_KNIFE_BUTTERFLY = 515,
	WEAPON_KNIFE_PUSH = 516,
	WEAPON_KNIFE_URSUS = 519,
	WEAPON_KNIFE_GYPSY_JACKKNIFE = 520,
	WEAPON_KNIFE_STILETTO = 522,
	WEAPON_KNIFE_WIDOWMAKER = 523,
	GLOVE_STUDDED_BLOODHOUND = 5027,
	GLOVE_T_SIDE = 5028,
	GLOVE_CT_SIDE = 5029,
	GLOVE_SPORTY = 5030,
	GLOVE_SLICK = 5031,
	GLOVE_LEATHER_WRAP = 5032,
	GLOVE_MOTORCYCLE = 5033,
	GLOVE_SPECIALIST = 5034,
	GLOVE_HYDRA = 5035
};

enum ClassId
{
	ClassId_CTestTraceline = 217,
	ClassId_CTEWorldDecal = 218,
	ClassId_CTESpriteSpray = 215,
	ClassId_CTESprite = 214,
	ClassId_CTESparks = 213,
	ClassId_CTESmoke = 212,
	ClassId_CTEShowLine = 210,
	ClassId_CTEProjectedDecal = 207,
	ClassId_CFEPlayerDecal = 69,
	ClassId_CTEPlayerDecal = 206,
	ClassId_CTEPhysicsProp = 203,
	ClassId_CTEParticleSystem = 202,
	ClassId_CTEMuzzleFlash = 201,
	ClassId_CTELargeFunnel = 199,
	ClassId_CTEKillPlayerAttachments = 198,
	ClassId_CTEImpact = 197,
	ClassId_CTEGlowSprite = 196,
	ClassId_CTEShatterSurface = 209,
	ClassId_CTEFootprintDecal = 193,
	ClassId_CTEFizz = 192,
	ClassId_CTEExplosion = 190,
	ClassId_CTEEnergySplash = 189,
	ClassId_CTEEffectDispatch = 188,
	ClassId_CTEDynamicLight = 187,
	ClassId_CTEDecal = 185,
	ClassId_CTEClientProjectile = 184,
	ClassId_CTEBubbleTrail = 183,
	ClassId_CTEBubbles = 182,
	ClassId_CTEBSPDecal = 181,
	ClassId_CTEBreakModel = 180,
	ClassId_CTEBloodStream = 179,
	ClassId_CTEBloodSprite = 178,
	ClassId_CTEBeamSpline = 177,
	ClassId_CTEBeamRingPoint = 176,
	ClassId_CTEBeamRing = 175,
	ClassId_CTEBeamPoints = 174,
	ClassId_CTEBeamLaser = 173,
	ClassId_CTEBeamFollow = 172,
	ClassId_CTEBeamEnts = 171,
	ClassId_CTEBeamEntPoint = 170,
	ClassId_CTEBaseBeam = 169,
	ClassId_CTEArmorRicochet = 168,
	ClassId_CTEMetalSparks = 200,
	ClassId_CSteamJet = 161,
	ClassId_CSmokeStack = 154,
	ClassId_DustTrail = 268,
	ClassId_CFireTrail = 72,
	ClassId_SporeTrail = 274,
	ClassId_SporeExplosion = 273,
	ClassId_RocketTrail = 271,
	ClassId_SmokeTrail = 272,
	ClassId_CPropVehicleDriveable = 141,
	ClassId_ParticleSmokeGrenade = 270,
	ClassId_CParticleFire = 114,
	ClassId_MovieExplosion = 269,
	ClassId_CTEGaussExplosion = 195,
	ClassId_CEnvQuadraticBeam = 64,
	ClassId_CEmbers = 53,
	ClassId_CEnvWind = 68,
	ClassId_CPrecipitation = 134,
	ClassId_CPrecipitationBlocker = 135,
	ClassId_CBaseTempEntity = 18,
	ClassId_NextBotCombatCharacter = 0,
	ClassId_CEconWearable = 52,
	ClassId_CBaseAttributableItem = 4,
	ClassId_CEconEntity = 51,
	ClassId_CWeaponXM1014 = 265,
	ClassId_CWeaponTaser = 260,
	ClassId_CTablet = 165,
	ClassId_CSmokeGrenade = 152,
	ClassId_CWeaponSG552 = 257,
	ClassId_CSensorGrenade = 148,
	ClassId_CWeaponSawedoff = 253,
	ClassId_CWeaponNOVA = 249,
	ClassId_CIncendiaryGrenade = 97,
	ClassId_CMolotovGrenade = 110,
	ClassId_CMelee = 109,
	ClassId_CWeaponM3 = 241,
	ClassId_CKnifeGG = 106,
	ClassId_CKnife = 105,
	ClassId_CHEGrenade = 94,
	ClassId_CFlashbang = 75,
	ClassId_CFists = 74,
	ClassId_CWeaponElite = 232,
	ClassId_CDecoyGrenade = 45,
	ClassId_CDEagle = 44,
	ClassId_CWeaponUSP = 264,
	ClassId_CWeaponM249 = 240,
	ClassId_CWeaponUMP45 = 263,
	ClassId_CWeaponTMP = 262,
	ClassId_CWeaponTec9 = 261,
	ClassId_CWeaponSSG08 = 259,
	ClassId_CWeaponSG556 = 258,
	ClassId_CWeaponSG550 = 256,
	ClassId_CWeaponScout = 255,
	ClassId_CWeaponSCAR20 = 254,
	ClassId_CSCAR17 = 146,
	ClassId_CWeaponP90 = 252,
	ClassId_CWeaponP250 = 251,
	ClassId_CWeaponP228 = 250,
	ClassId_CWeaponNegev = 248,
	ClassId_CWeaponMP9 = 247,
	ClassId_CWeaponMP7 = 246,
	ClassId_CWeaponMP5Navy = 245,
	ClassId_CWeaponMag7 = 244,
	ClassId_CWeaponMAC10 = 243,
	ClassId_CWeaponM4A1 = 242,
	ClassId_CWeaponHKP2000 = 239,
	ClassId_CWeaponGlock = 238,
	ClassId_CWeaponGalilAR = 237,
	ClassId_CWeaponGalil = 236,
	ClassId_CWeaponG3SG1 = 235,
	ClassId_CWeaponFiveSeven = 234,
	ClassId_CWeaponFamas = 233,
	ClassId_CWeaponBizon = 228,
	ClassId_CWeaponAWP = 226,
	ClassId_CWeaponAug = 225,
	ClassId_CAK47 = 1,
	ClassId_CWeaponCSBaseGun = 230,
	ClassId_CWeaponCSBase = 229,
	ClassId_CC4 = 32,
	ClassId_CBreachCharge = 28,
	ClassId_CBreachChargeProjectile = 29,
	ClassId_CWeaponBaseItem = 227,
	ClassId_CBaseCSGrenade = 8,
	ClassId_CSmokeGrenadeProjectile = 153,
	ClassId_CSensorGrenadeProjectile = 149,
	ClassId_CMolotovProjectile = 111,
	ClassId_CItem_Healthshot = 102,
	ClassId_CItemDogtags = 104,
	ClassId_CDecoyProjectile = 46,
	ClassId_CPhysPropRadarJammer = 124,
	ClassId_CPhysPropWeaponUpgrade = 125,
	ClassId_CPhysPropAmmoBox = 122,
	ClassId_CPhysPropLootCrate = 123,
	ClassId_CItemCash = 103,
	ClassId_CEnvGasCanister = 61,
	ClassId_CDronegun = 48,
	ClassId_CParadropChopper = 113,
	ClassId_CSurvivalSpawnChopper = 164,
	ClassId_CBRC4Target = 27,
	ClassId_CInfoMapRegion = 100,
	ClassId_CFireCrackerBlast = 70,
	ClassId_CInferno = 98,
	ClassId_CChicken = 34,
	ClassId_CDrone = 47,
	ClassId_CFootstepControl = 77,
	ClassId_CCSGameRulesProxy = 37,
	ClassId_CWeaponCubemap = 0,
	ClassId_CWeaponCycler = 231,
	ClassId_CTEPlantBomb = 204,
	ClassId_CTEFireBullets = 191,
	ClassId_CTERadioIcon = 208,
	ClassId_CPlantedC4 = 126,
	ClassId_CCSTeam = 41,
	ClassId_CCSPlayerResource = 39,
	ClassId_CCSPlayer = 38,
	ClassId_CCSRagdoll = 40,
	ClassId_CTEPlayerAnimEvent = 205,
	ClassId_CHostage = 95,
	ClassId_CHostageCarriableProp = 96,
	ClassId_CBaseCSGrenadeProjectile = 9,
	ClassId_CHandleTest = 93,
	ClassId_CTeamplayRoundBasedRulesProxy = 167,
	ClassId_CSpriteTrail = 159,
	ClassId_CSpriteOriented = 158,
	ClassId_CSprite = 157,
	ClassId_CRagdollPropAttached = 144,
	ClassId_CRagdollProp = 143,
	ClassId_CPropCounter = 138,
	ClassId_CPredictedViewModel = 136,
	ClassId_CPoseController = 132,
	ClassId_CGrassBurn = 92,
	ClassId_CGameRulesProxy = 91,
	ClassId_CInfoLadderDismount = 99,
	ClassId_CFuncLadder = 83,
	ClassId_CTEFoundryHelpers = 194,
	ClassId_CEnvDetailController = 59,
	ClassId_CDangerZone = 42,
	ClassId_CDangerZoneController = 43,
	ClassId_CWorldVguiText = 267,
	ClassId_CWorld = 266,
	ClassId_CWaterLODControl = 224,
	ClassId_CWaterBullet = 223,
	ClassId_CVoteController = 222,
	ClassId_CVGuiScreen = 221,
	ClassId_CPropJeep = 140,
	ClassId_CPropVehicleChoreoGeneric = 0,
	ClassId_CTriggerSoundOperator = 220,
	ClassId_CBaseVPhysicsTrigger = 22,
	ClassId_CTriggerPlayerMovement = 219,
	ClassId_CBaseTrigger = 20,
	ClassId_CTest_ProxyToggle_Networkable = 216,
	ClassId_CTesla = 211,
	ClassId_CBaseTeamObjectiveResource = 17,
	ClassId_CTeam = 166,
	ClassId_CSunlightShadowControl = 163,
	ClassId_CSun = 162,
	ClassId_CParticlePerformanceMonitor = 115,
	ClassId_CSpotlightEnd = 156,
	ClassId_CSpatialEntity = 155,
	ClassId_CSlideshowDisplay = 151,
	ClassId_CShadowControl = 150,
	ClassId_CSceneEntity = 147,
	ClassId_CRopeKeyframe = 145,
	ClassId_CRagdollManager = 142,
	ClassId_CPhysicsPropMultiplayer = 120,
	ClassId_CPhysBoxMultiplayer = 118,
	ClassId_CPropDoorRotating = 139,
	ClassId_CBasePropDoor = 16,
	ClassId_CDynamicProp = 50,
	ClassId_CProp_Hallucination = 137,
	ClassId_CPostProcessController = 133,
	ClassId_CPointWorldText = 131,
	ClassId_CPointCommentaryNode = 130,
	ClassId_CPointCamera = 129,
	ClassId_CPlayerResource = 128,
	ClassId_CPlasma = 127,
	ClassId_CPhysMagnet = 121,
	ClassId_CPhysicsProp = 119,
	ClassId_CStatueProp = 160,
	ClassId_CPhysBox = 117,
	ClassId_CParticleSystem = 116,
	ClassId_CMovieDisplay = 112,
	ClassId_CMaterialModifyControl = 108,
	ClassId_CLightGlow = 107,
	ClassId_CItemAssaultSuitUseable = 0,
	ClassId_CItem = 0,
	ClassId_CInfoOverlayAccessor = 101,
	ClassId_CFuncTrackTrain = 90,
	ClassId_CFuncSmokeVolume = 89,
	ClassId_CFuncRotating = 88,
	ClassId_CFuncReflectiveGlass = 87,
	ClassId_CFuncOccluder = 86,
	ClassId_CFuncMoveLinear = 85,
	ClassId_CFuncMonitor = 84,
	ClassId_CFunc_LOD = 79,
	ClassId_CTEDust = 186,
	ClassId_CFunc_Dust = 78,
	ClassId_CFuncConveyor = 82,
	ClassId_CFuncBrush = 81,
	ClassId_CBreakableSurface = 31,
	ClassId_CFuncAreaPortalWindow = 80,
	ClassId_CFish = 73,
	ClassId_CFireSmoke = 71,
	ClassId_CEnvTonemapController = 67,
	ClassId_CEnvScreenEffect = 65,
	ClassId_CEnvScreenOverlay = 66,
	ClassId_CEnvProjectedTexture = 63,
	ClassId_CEnvParticleScript = 62,
	ClassId_CFogController = 76,
	ClassId_CEnvDOFController = 60,
	ClassId_CCascadeLight = 33,
	ClassId_CEnvAmbientLight = 58,
	ClassId_CEntityParticleTrail = 57,
	ClassId_CEntityFreezing = 56,
	ClassId_CEntityFlame = 55,
	ClassId_CEntityDissolve = 54,
	ClassId_CDynamicLight = 49,
	ClassId_CColorCorrectionVolume = 36,
	ClassId_CColorCorrection = 35,
	ClassId_CBreakableProp = 30,
	ClassId_CBeamSpotlight = 25,
	ClassId_CBaseButton = 5,
	ClassId_CBaseToggle = 19,
	ClassId_CBasePlayer = 15,
	ClassId_CBaseFlex = 12,
	ClassId_CBaseEntity = 11,
	ClassId_CBaseDoor = 10,
	ClassId_CBaseCombatCharacter = 6,
	ClassId_CBaseAnimatingOverlay = 3,
	ClassId_CBoneFollower = 26,
	ClassId_CBaseAnimating = 2,
	ClassId_CAI_BaseNPC = 0,
	ClassId_CBeam = 24,
	ClassId_CBaseViewModel = 21,
	ClassId_CBaseParticleEntity = 14,
	ClassId_CBaseGrenade = 13,
	ClassId_CBaseCombatWeapon = 7,
	ClassId_CBaseWeaponWorldModel = 23
};
enum ECSPlayerBones {
	pelvis = 0,
	spine_0,
	spine_1,
	spine_2,
	spine_3,
	neck_0,
	head_0,
	clavicle_L,
	arm_upper_L,
	arm_lower_L,
	hand_L,
	MAX_ECSPLAYERBONES
};

enum EntityFlags {
	FL_ONGROUND = (1 << 0),
	FL_DUCKING = (1 << 1),
	FL_AIMDUCKING = (1 << 2),
	FL_WATERJUMP = (1 << 3),
	FL_ONTRAIN = (1 << 4),
	FL_INRAIN = (1 << 5),
	FL_FROZEN = (1 << 6),
	FL_ATCONTROLS = (1 << 7),
	FL_CLIENT = (1 << 8),
	FL_FAKECLIENT = (1 << 9),
	MAX_ENTITYFLAGS
};

enum LifeState : unsigned char {
	LIFE_ALIVE = 0,// alive
	LIFE_DYING = 1, // playing death animation or still falling off of a ledge waiting to hit ground
	LIFE_DEAD = 2, // dead. lying still.
	MAX_LIFESTATE
};

enum WeaponSound_t {
	EMPTY,
	SINGLE,
	SINGLE_NPC,
	WPN_DOUBLE, // Can't be "DOUBLE" because windows.h uses it.
	DOUBLE_NPC,
	BURST,
	RELOAD,
	RELOAD_NPC,
	MELEE_MISS,
	MELEE_HIT,
	MELEE_HIT_WORLD,
	SPECIAL1,
	SPECIAL2,
	SPECIAL3,
	TAUNT,
	FAST_RELOAD,
	// Add new shoot sound types here
	REVERSE_THE_NEW_SOUND,
	NUM_SHOOT_SOUND_TYPES,
	MAX_WEAPONSOUND
};

enum MoveType_t {
	MOVETYPE_NONE = 0,
	MOVETYPE_ISOMETRIC,
	MOVETYPE_WALK,
	MOVETYPE_STEP,
	MOVETYPE_FLY,
	MOVETYPE_FLYGRAVITY,
	MOVETYPE_VPHYSICS,
	MOVETYPE_PUSH,
	MOVETYPE_NOCLIP,
	MOVETYPE_LADDER,
	MOVETYPE_OBSERVER,
	MOVETYPE_CUSTOM,
	MOVETYPE_LAST = MOVETYPE_CUSTOM,
	MOVETYPE_MAX_BITS = 4,
	MAX_MOVETYPE
};

enum Collision_Group_t {
	COLLISION_GROUP_NONE = 0,
	COLLISION_GROUP_DEBRIS,				// Collides with nothing but world and static stuff
	COLLISION_GROUP_DEBRIS_TRIGGER,		// Same as debris, but hits triggers
	COLLISION_GROUP_INTERACTIVE_DEB,	// RIS, // Collides with everything except other interactive debris or debris
	COLLISION_GROUP_INTERACTIVE,		// Collides with everything except interactive debris or debris
	COLLISION_GROUP_PLAYER,
	COLLISION_GROUP_BREAKABLE_GLASS,
	COLLISION_GROUP_VEHICLE,
	COLLISION_GROUP_PLAYER_MOVEMENT,	// For HL2, same as Collision_Group_Player
	COLLISION_GROUP_NPC,				// Generic NPC group
	COLLISION_GROUP_IN_VEHICLE,			// for any entity inside a vehicle
	COLLISION_GROUP_WEAPON,				// for any weapons that need collision detection
	COLLISION_GROUP_VEHICLE_CLIP,		// vehicle clip brush to restrict vehicle movement
	COLLISION_GROUP_PROJECTILE,			// Projectiles!
	COLLISION_GROUP_DOOR_BLOCKER,		// Blocks entities not permitted to get near moving doors
	COLLISION_GROUP_PASSABLE_DOOR,		// Doors that the player shouldn't collide with
	COLLISION_GROUP_DISSOLVING,			// Things that are dissolving are in this group
	COLLISION_GROUP_PUSHAWAY,			// Nonsolid on client and server, pushaway in player code
	COLLISION_GROUP_NPC_ACTOR,			// Used so NPCs in scripts ignore the player.
	LAST_SHARED_COLLISION_GROUP
};

enum mp_break_t {
	MULTIPLAYER_BREAK_DEFAULT,
	MULTIPLAYER_BREAK_SERVERSIDE,
	MULTIPLAYER_BREAK_CLIENTSIDE,
	MULTIPLAYER_BREAK_BOTH
};

enum propdata_interactions_t {
	PROPINTER_PHYSGUN_WORLD_STICK,		// "onworldimpact"	"stick"
	PROPINTER_PHYSGUN_FIRST_BREAK,		// "onfirstimpact"	"break"
	PROPINTER_PHYSGUN_FIRST_PAINT,		// "onfirstimpact"	"paintsplat"
	PROPINTER_PHYSGUN_FIRST_IMPALE,		// "onfirstimpact"	"impale"
	PROPINTER_PHYSGUN_LAUNCH_SPIN_NONE,	// "onlaunch"		"spin_none"
	PROPINTER_PHYSGUN_LAUNCH_SPIN_Z,	// "onlaunch"		"spin_zaxis"
	PROPINTER_PHYSGUN_BREAK_EXPLODE,	// "onbreak"		"explode_fire"
	PROPINTER_PHYSGUN_DAMAGE_NONE,		// "damage"			"none"
	PROPINTER_FIRE_FLAMMABLE,			// "flammable"			"yes"
	PROPINTER_FIRE_EXPLOSIVE_RESIST,	// "explosive_resist"	"yes"
	PROPINTER_FIRE_IGNITE_HALFHEALTH,	// "ignite"				"halfhealth"
	PROPINTER_PHYSGUN_CREATE_FLARE,		// "onpickup"		"create_flare"
	PROPINTER_PHYSGUN_ALLOW_OVERHEAD,	// "allow_overhead"	"yes"
	PROPINTER_WORLD_BLOODSPLAT,			// "onworldimpact", "bloodsplat"
	PROPINTER_PHYSGUN_NOTIFY_CHILDREN,	// "onfirstimpact" cause attached flechettes to explode
	PROPINTER_NUM_INTERACTIONS,			// If we get more than 32 of these, we'll need a different system
};

enum FontRenderFlag_t {
	FONT_LEFT = 0,
	FONT_RIGHT = 1,
	FONT_CENTER = 2
};

enum ObserverType_t {
	OBS_MODE_NONE = 0,	// not in spectator mode
	OBS_MODE_DEATHCAM,	// special mode for death cam animation
	OBS_MODE_FREEZECAM,	// zooms to a target, and freeze-frames on them
	OBS_MODE_FIXED,		// view from a fixed camera position
	OBS_MODE_IN_EYE,	// follow a player in first person view
	OBS_MODE_CHASE,		// follow a player in third person view
	OBS_MODE_ROAMING,	// free roaming

	NUM_OBSERVER_MODES,
};

enum {
	TE_BEAMPOINTS = 0x00,		// beam effect between two points
	TE_SPRITE = 0x01,	// additive sprite, plays 1 cycle
	TE_BEAMDISK = 0x02,	// disk that expands to max radius over lifetime
	TE_BEAMCYLINDER = 0x03,		// cylinder that expands to max radius over lifetime
	TE_BEAMFOLLOW = 0x04,		// create a line of decaying beam segments until entity stops moving
	TE_BEAMRING = 0x05,		// connect a beam ring to two entities
	TE_BEAMSPLINE = 0x06,
	TE_BEAMRINGPOINT = 0x07,
	TE_BEAMLASER = 0x08,		// Fades according to viewpoint
	TE_BEAMTESLA = 0x09,
};
enum {
	FBEAM_STARTENTITY = 0x00000001,
	FBEAM_ENDENTITY = 0x00000002,
	FBEAM_FADEIN = 0x00000004,
	FBEAM_FADEOUT = 0x00000008,
	FBEAM_SINENOISE = 0x00000010,
	FBEAM_SOLID = 0x00000020,
	FBEAM_SHADEIN = 0x00000040,
	FBEAM_SHADEOUT = 0x00000080,
	FBEAM_ONLYNOISEONCE = 0x00000100,		// Only calculate our noise once
	FBEAM_NOTILE = 0x00000200,
	FBEAM_USE_HITBOXES = 0x00000400,		// Attachment indices represent hitbox indices instead when this is set.
	FBEAM_STARTVISIBLE = 0x00000800,		// Has this client actually seen this beam's start entity yet?
	FBEAM_ENDVISIBLE = 0x00001000,		// Has this client actually seen this beam's end entity yet?
	FBEAM_ISACTIVE = 0x00002000,
	FBEAM_FOREVER = 0x00004000,
	FBEAM_HALOBEAM = 0x00008000,		// When drawing a beam with a halo, don't ignore the segments and endwidth
	FBEAM_REVERSED = 0x00010000,
	NUM_BEAM_FLAGS = 17	// KEEP THIS UPDATED!
};
//#define TE_BEAMPOINTS 0		// beam effect between two points

enum {
	CHAR_TEX_ANTLION = 'A',
	CHAR_TEX_BLOODYFLESH = 'B',
	CHAR_TEX_CONCRETE = 'C',
	CHAR_TEX_DIRT = 'D',
	CHAR_TEX_EGGSHELL = 'E',
	CHAR_TEX_FLESH = 'F',
	CHAR_TEX_GRATE = 'G',
	CHAR_TEX_ALIENFLESH = 'H',
	CHAR_TEX_CLIP = 'I',
	CHAR_TEX_PLASTIC = 'L',
	CHAR_TEX_METAL = 'M',
	CHAR_TEX_SAND = 'N',
	CHAR_TEX_FOLIAGE = 'O',
	CHAR_TEX_COMPUTER = 'P',
	CHAR_TEX_SLOSH = 'S',
	CHAR_TEX_TILE = 'T',
	CHAR_TEX_CARDBOARD = 'U',
	CHAR_TEX_VENT = 'V',
	CHAR_TEX_WOOD = 'W',
	CHAR_TEX_GLASS = 'Y',
	CHAR_TEX_WARPSHIELD = 'Z',
};