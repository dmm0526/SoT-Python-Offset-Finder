// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class BP_CylinderLightingZone_Treasury_1C_C: public BP_CylinderLightingZone_C
{
public:
};


// Size 0x0
class BP_CylinderLightingZone_Treasury_1B_C: public BP_CylinderLightingZone_C
{
public:
};


// Size 0x0
class BP_CylinderLightingZone_Treasury_1A_C: public BP_CylinderLightingZone_C
{
public:
};


// Size 0x0
class BP_CylinderLightingZone_Shrine_2C_C: public BP_CylinderLightingZone_C
{
public:
};


// Size 0x0
class BP_CylinderLightingZone_Shrine_2B_C: public BP_CylinderLightingZone_C
{
public:
};


// Size 0x0
class BP_CylinderLightingZone_Shrine_2A_C: public BP_CylinderLightingZone_C
{
public:
};


// Size 0x0
class BP_CylinderLightingZone_Shrine_1C_C: public BP_CylinderLightingZone_C
{
public:
};


// Size 0x0
class BP_CylinderLightingZone_Shrine_1B_C: public BP_CylinderLightingZone_C
{
public:
};


// Size 0x0
class BP_CylinderLightingZone_Shrine_1A_C: public BP_CylinderLightingZone_C
{
public:
};


// Size 0x45
class BP_CylinderLightingZone_C: public Actor
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x3d0(0x8)
	Class CapsuleComponent*                                      InnerCapsule;                                      // 0x3d8(0x8)
	Class CapsuleComponent*                                      OuterCapsule;                                      // 0x3e0(0x8)
	Class LightingZoneComponent*                                 LightingZone;                                      // 0x3e8(0x8)
	Class SceneComponent*                                        DefaultSceneRoot;                                  // 0x3f0(0x8)
	float                                                        Outer Radius;                                      // 0x3f8(0x4)
	float                                                        Outer Half Height;                                 // 0x3fc(0x4)
	float                                                        Inner Radius;                                      // 0x400(0x4)
	float                                                        Inner Half Height;                                 // 0x404(0x4)
	float                                                        Weight;                                            // 0x408(0x4)
	int                                                          Priority Layer;                                    // 0x40c(0x4)
	int                                                          Lighting Set;                                      // 0x410(0x4)
	bool                                                         IsUnderwaterZone;                                  // 0x414(0x1)
};


}