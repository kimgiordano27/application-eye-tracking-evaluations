/*
FUNCTION_NAME: OVRManager$$SetAppSpacePosition
ENTRY_POINT: 0908c7d4
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__SetAppSpacePosition(undefined1 param_1 [16],float param_2,float param_3)

{
  uint uVar1;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  thunk_FUN_049a583c();
  fVar2 = (float)FUN_0908ce4c(&stack0x00000030);
  if (DAT_0b32413d == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0a830);
    DAT_0b32413d = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
                    /* try { // try from 0908c830 to 0918c857 has its CatchHandler @ 0908d728 */
  uVar1 = FUN_0908cf14(-SQRT((unaff_s8 - param_3) * (unaff_s8 - param_3) +
                             (unaff_s9 - fVar2) * (unaff_s9 - fVar2) +
                             (unaff_s10 - param_2) * (unaff_s10 - param_2)));
                    /* try { // try from 0908c894 to 0918c8bb has its CatchHandler @ 0908d724 */
  return uVar1 & 1;
}


