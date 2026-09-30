/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._ApplyTransform$$EndInvoke
ENTRY_POINT: 043171f8
PROGRAM: m3ar-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__ApplyTransform__EndInvoke(long param_1)

{
  byte unaff_w19;
  long unaff_x20;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  FUN_042e5fa8(param_1,unaff_w19 & 1,0);
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    *(byte *)(*(long *)(unaff_x20 + 0x60) + 0x41) = unaff_w19 & 1;
    return;
  }
  FUN_072641bc(unaff_x20 + 0x68,*(undefined8 *)PTR_DAT_08f73850,0,0);
  return;
}


