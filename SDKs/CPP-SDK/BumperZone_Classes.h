// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x58
class ShipBumperZone: public Actor
{
public:
	bool                                                         UseInverseRightVector;                             // 0x3d0(0x1)
	Class BoxComponent*                                          BumperZoneComponent;                               // 0x400(0x8)
	Class SphereComponent*                                       DistanceRadiusComponent;                           // 0x408(0x8)
	bool                                                         ApplyAngularImpulse;                               // 0x410(0x1)
	float                                                        AngularImpulse;                                    // 0x414(0x4)
	bool                                                         OverrideWheelControl;                              // 0x418(0x1)
	bool                                                         ApplyWheelTurbulence;                              // 0x419(0x1)
	float                                                        MinWheelTurbulence;                                // 0x41c(0x4)
	float                                                        MaxWheelTurbulence;                                // 0x420(0x4)
};


}