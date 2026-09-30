/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$ovrp_StartKeyboardTracking
ENTRY_POINT: 033f56dc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_68_0__ovrp_StartKeyboardTracking(void)

{
  int iVar1;
  int *unaff_x19;
  
  FUN_03277a4c();
  iVar1 = 10;
  if (*unaff_x19 != 0x7fffffff) {
    iVar1 = *unaff_x19 + 1;
  }
  *unaff_x19 = iVar1;
  return;
}


