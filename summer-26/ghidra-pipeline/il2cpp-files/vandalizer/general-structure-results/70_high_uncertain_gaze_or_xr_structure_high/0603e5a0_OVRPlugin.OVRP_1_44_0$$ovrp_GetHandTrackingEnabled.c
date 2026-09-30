/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetHandTrackingEnabled
ENTRY_POINT: 0603e5a0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_OVRP_1_44_0__ovrp_GetHandTrackingEnabled(void *param_1)

{
  undefined8 uVar1;
  long *unaff_x21;
  
  FUN_0604dab0();
  uVar1 = FUN_0603e5ec();
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x21);
  }
  free(param_1);
  return uVar1;
}


