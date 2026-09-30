/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetAppCpuStartToGpuEndTime
ENTRY_POINT: 076e146c
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_6_0__ovrp_GetAppCpuStartToGpuEndTime(undefined8 param_1)

{
  long lVar1;
  long unaff_x19;
  
  *(undefined8 *)(unaff_x19 + 0x30) = param_1;
  lVar1 = thunk_FUN_0406ddbc();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04031c0c();
  }
  return;
}


