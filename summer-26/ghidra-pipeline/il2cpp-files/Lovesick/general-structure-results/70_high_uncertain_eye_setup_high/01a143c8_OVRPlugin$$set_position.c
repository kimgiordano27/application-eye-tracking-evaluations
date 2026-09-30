/*
FUNCTION_NAME: OVRPlugin$$set_position
ENTRY_POINT: 01a143c8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_position
               (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],float param_4,
               undefined1 param_5 [16],float param_6,undefined1 param_7 [16],float param_8)

{
  float in_s16;
  float in_s17;
  float in_s18;
  float in_s19;
  float in_s20;
  float in_s21;
  float in_s22;
  float in_s24;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  
  FUN_02666aac(uStack0000000000000020,uStack0000000000000024,in_stack_00000028,param_6 - param_8,
               (in_s18 + in_s16 + in_s17) - in_s19,(in_s20 + param_2) - in_s21,
               (param_4 - in_s22) - in_s24);
  return;
}


