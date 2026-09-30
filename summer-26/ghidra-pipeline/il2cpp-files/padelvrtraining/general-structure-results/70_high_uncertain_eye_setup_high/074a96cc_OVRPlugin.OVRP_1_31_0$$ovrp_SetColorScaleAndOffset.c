/*
FUNCTION_NAME: OVRPlugin.OVRP_1_31_0$$ovrp_SetColorScaleAndOffset
ENTRY_POINT: 074a96cc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_31_0__ovrp_SetColorScaleAndOffset(void)

{
  void *__ptr;
  undefined8 uVar1;
  int in_w8;
  long *unaff_x20;
  
  if (in_w8 == 0) {
    thunk_FUN_03db619c();
  }
  __ptr = (void *)FUN_074a3564();
  uVar1 = FUN_074a9718();
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_03db619c(*unaff_x20);
  }
  free(__ptr);
  return uVar1;
}


