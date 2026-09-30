/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._IsDisplayOnDesktop$$Invoke
ENTRY_POINT: 04316818
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


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__IsDisplayOnDesktop__Invoke
               (code *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x19;
  
  uVar2 = (*param_1)();
  iVar1 = FUN_042f2ebc(uVar2,0);
  if (iVar1 != 0) {
    *(int *)(unaff_x19 + 0x48) = iVar1;
    FUN_04316948();
    return;
  }
  return;
}


