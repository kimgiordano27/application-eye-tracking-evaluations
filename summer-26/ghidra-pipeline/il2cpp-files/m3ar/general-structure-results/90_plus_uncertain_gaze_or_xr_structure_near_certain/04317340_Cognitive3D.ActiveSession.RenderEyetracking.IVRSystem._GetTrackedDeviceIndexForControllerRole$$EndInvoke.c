/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetTrackedDeviceIndexForControllerRole$$EndInvoke
ENTRY_POINT: 04317340
PROGRAM: m3ar-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetTrackedDeviceIndexForControllerRole__EndInvoke
               (long param_1,uint param_2)

{
  FUN_04317304();
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_08588638(*(long *)(param_1 + 0x70),param_2 & 1,0);
    FUN_04317380(param_1,param_2 & 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


