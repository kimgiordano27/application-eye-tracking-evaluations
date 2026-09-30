/*
FUNCTION_NAME: OVRPlugin$$get_position
ENTRY_POINT: 04f591f0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_position(long *param_1)

{
  long *plVar1;
  bool in_ZR;
  undefined8 uVar2;
  long in_x9;
  long in_x10;
  long unaff_x19;
  
  plVar1 = param_1;
  if (!in_ZR) {
    plVar1 = (long *)0x0;
  }
  *(long **)(unaff_x19 + 0x118) = plVar1;
  if ((uint)*(byte *)(*param_1 + 0x130) < (uint)in_x10) {
    param_1 = (long *)0x0;
  }
  else if (*(long *)(*(long *)(*param_1 + 200) + in_x10 * 8 + -8) != in_x9) {
    param_1 = (long *)0x0;
  }
  thunk_FUN_02bb0e9c(unaff_x19 + 0x118,param_1);
  uVar2 = FUN_03172fbc();
  *(undefined8 *)(unaff_x19 + 0x128) = uVar2;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x128);
  return;
}


