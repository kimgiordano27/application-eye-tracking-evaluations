/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 073de530
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetActionStatePose(float param_1,undefined1 param_2 [16],float param_3)

{
  float unaff_s8;
  float fVar1;
  float unaff_s9;
  float fVar2;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000068;
  
  if (DAT_09410538 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_09410538 = '\x01';
  }
  fVar2 = (unaff_s9 + (unaff_s11 * param_1) / param_3) - unaff_s15;
  in_stack_00000068._4_4_ = (unaff_s8 + (unaff_s12 * param_1) / param_3) - in_stack_00000068._4_4_;
  fVar1 = (unaff_s10 + (unaff_s13 * param_1) / param_3) - unaff_s14;
  if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  return SQRT(fVar1 * fVar1 + in_stack_00000068._4_4_ * in_stack_00000068._4_4_ + fVar2 * fVar2);
}


