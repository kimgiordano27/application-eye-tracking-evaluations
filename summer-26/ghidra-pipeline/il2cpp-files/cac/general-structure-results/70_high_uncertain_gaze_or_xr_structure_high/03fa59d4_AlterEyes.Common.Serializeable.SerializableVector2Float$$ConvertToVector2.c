/*
FUNCTION_NAME: AlterEyes.Common.Serializeable.SerializableVector2Float$$ConvertToVector2
ENTRY_POINT: 03fa59d4
PROGRAM: cac-libil2cpp.so
SCORE: 76
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only
*/


void AlterEyes_Common_Serializeable_SerializableVector2Float__ConvertToVector2(void)

{
  ios_base *this;
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *unaff_x19;
  uint unaff_w20;
  undefined8 uVar5;
  long unaff_x29;
  
  std::__ndk1::ios_base::getloc();
  plVar2 = (long *)std::__ndk1::locale::use_facet
                             ((locale *)(unaff_x29 + -8),
                              (id *)
                              System_Collections_Generic_List<ConfigurationItemDefinition>_TypeInfo)
  ;
  std::__ndk1::locale::~locale((locale *)(unaff_x29 + -8));
  lVar4 = (long)unaff_x19 + *(long *)(*unaff_x19 + -0x18);
  uVar1 = *(uint *)(lVar4 + 0x90);
  uVar5 = *(undefined8 *)(lVar4 + 0x28);
  if (uVar1 == 0xffffffff) {
    std::__ndk1::ios_base::getloc();
    plVar3 = (long *)std::__ndk1::locale::use_facet
                               ((locale *)(unaff_x29 + -8),
                                (id *)System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo
                               );
    uVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,0x20);
    std::__ndk1::locale::~locale((locale *)(unaff_x29 + -8));
    uVar1 = uVar1 & 0xff;
    *(uint *)(lVar4 + 0x90) = uVar1;
  }
  lVar4 = (**(code **)(*plVar2 + 0x18))(plVar2,uVar5,lVar4,uVar1,unaff_w20 & 1);
  if (lVar4 == 0) {
    this = (ios_base *)((long)unaff_x19 + *(long *)(*unaff_x19 + -0x18));
    std::__ndk1::ios_base::clear(this,*(uint *)(this + 0x20) | 5);
  }
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry
            ((sentry *)&stack0x00000008);
  return;
}


