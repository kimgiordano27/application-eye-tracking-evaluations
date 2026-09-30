/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 05d18068
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetActionStatePose(void)

{
  undefined1 in_w8;
  float *unaff_x19;
  long unaff_x23;
  long *unaff_x24;
  float fVar1;
  float unaff_s8;
  undefined8 in_stack_00000000;
  float in_stack_00000008;
  undefined4 in_stack_00000010;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  
  *(undefined1 *)(unaff_x23 + 0x8ce) = in_w8;
  FUN_05cc3570(&stack0x00000020);
  in_stack_00000048 = in_stack_00000028;
  _fStack0000000000000040 = _fStack0000000000000020;
  uStack0000000000000054 = uStack0000000000000034;
  in_stack_00000050 = uStack0000000000000030;
  FUN_05cc3570();
  in_stack_00000028 = in_stack_00000008;
  _fStack0000000000000020 = in_stack_00000000;
  uStack0000000000000030 = in_stack_00000010;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  *unaff_x19 = (fStack0000000000000040 - fStack0000000000000020) *
               (fStack0000000000000040 - fStack0000000000000020) +
               (fStack0000000000000044 - fStack0000000000000024) *
               (fStack0000000000000044 - fStack0000000000000024) +
               (in_stack_00000048 - in_stack_00000028) * (in_stack_00000048 - in_stack_00000028);
  fVar1 = (float)FUN_05d1cb28((ulong)&stack0x00000040 | 0xc,(ulong)&stack0x00000020 | 0xc);
  unaff_x19[1] = fVar1;
  unaff_x19[2] = unaff_s8;
  return;
}


