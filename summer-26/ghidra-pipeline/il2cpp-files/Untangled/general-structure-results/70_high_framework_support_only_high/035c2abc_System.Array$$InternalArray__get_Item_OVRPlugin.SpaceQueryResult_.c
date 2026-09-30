/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 035c2abc
PROGRAM: Untangled-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__get_Item<OVRPlugin_SpaceQueryResult>(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000000 = param_1;
  uStack0000000000000010 = param_1;
  uVar1 = FUN_0561a77c();
  if (unaff_w22 < uVar1) {
    memcpy(&stack0x00000000,
           (void *)((long)unaff_x21 +
                   (ulong)*(uint *)(*unaff_x21 + 0x104) * (long)(int)unaff_w22 + 0x20),
           (ulong)*(uint *)(*unaff_x21 + 0x104));
    memcpy(unaff_x20,&stack0x00000000,0x60);
    return;
  }
  thunk_FUN_02f239f0(PTR_DAT_06d0e378);
  uVar2 = thunk_FUN_02ef1808();
  uVar3 = thunk_FUN_02f239f0(PTR_DAT_06d030f0);
  FUN_0555fe30(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar2);
}


