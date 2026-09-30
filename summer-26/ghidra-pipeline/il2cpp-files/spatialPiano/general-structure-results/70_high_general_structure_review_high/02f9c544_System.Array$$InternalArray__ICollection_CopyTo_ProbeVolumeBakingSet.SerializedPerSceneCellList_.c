/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 02f9c544
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<ProbeVolumeBakingSet_SerializedPerSceneCellList>
               (long param_1)

{
  ios_base *this;
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *unaff_x19;
  uint unaff_w20;
  undefined8 uVar7;
  long unaff_x29;
  
  uVar2 = *(uint *)(param_1 + 8);
  std::__ndk1::ios_base::getloc();
  plVar4 = (long *)std::__ndk1::locale::use_facet
                             ((locale *)(unaff_x29 + 0x18),(id *)StringLiteral_9751);
  std::__ndk1::locale::~locale((locale *)(unaff_x29 + 0x18));
  lVar6 = (long)unaff_x19 + *(long *)(*unaff_x19 + -0x18);
  uVar3 = *(uint *)(lVar6 + 0x90);
  uVar7 = *(undefined8 *)(lVar6 + 0x28);
  if (uVar3 == 0xffffffff) {
    std::__ndk1::ios_base::getloc();
    plVar5 = (long *)std::__ndk1::locale::use_facet
                               ((locale *)(unaff_x29 + 0x18),(id *)StringLiteral_9688);
    uVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,0x20);
    std::__ndk1::locale::~locale((locale *)(unaff_x29 + 0x18));
    uVar3 = uVar3 & 0xff;
    *(uint *)(lVar6 + 0x90) = uVar3;
  }
  uVar2 = uVar2 & 0x4a;
  uVar1 = (ulong)unaff_w20;
  if (uVar2 != 8 && uVar2 != 0x40) {
    uVar1 = (long)(int)unaff_w20;
  }
  lVar6 = (**(code **)(*plVar4 + 0x20))(plVar4,uVar7,lVar6,uVar3,uVar1);
  if (lVar6 == 0) {
    this = (ios_base *)((long)unaff_x19 + *(long *)(*unaff_x19 + -0x18));
    std::__ndk1::ios_base::clear(this,*(uint *)(this + 0x20) | 5);
  }
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry
            ((sentry *)&stack0x00000000);
  return;
}


