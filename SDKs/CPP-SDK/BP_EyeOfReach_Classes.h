// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x60
class BP_EyeOfReach_C: public ProjectileWeapon
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0xa70(0x8)
	Class StaticMeshComponent*                                   Glint;                                             // 0xa78(0x8)
	Class PostProcessComponent*                                  PostProcess;                                       // 0xa80(0x8)
	byte                                                         sfx relationship;                                  // 0xa88(0x1)
	Class MaterialInstanceDynamic*                               DynamicMaterial;                                   // 0xa90(0x8)
	bool                                                         TurningOn;                                         // 0xa98(0x1)
	float                                                        BlurTime;                                          // 0xa9c(0x4)
	float                                                        BlurInDuration;                                    // 0xaa0(0x4)
	float                                                        BlurOutDuration;                                   // 0xaa4(0x4)
	Class CurveFloat*                                            BlurCurve;                                         // 0xaa8(0x8)
	Class Texture2D*                                             LensNormal;                                        // 0xab0(0x8)
	Class Texture2D*                                             LensMask;                                          // 0xab8(0x8)
	Struct LinearColor                                           LensTint;                                          // 0xac0(0x10)
};


}