/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetProjectionRaw$$Invoke
ENTRY_POINT: 04315e5c
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


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetProjectionRaw__Invoke
               (undefined8 param_1)

{
  long lVar1;
  long in_x9;
  undefined4 unaff_w19;
  long unaff_x20;
  
  FUN_05769150(param_1,unaff_w19,*(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 0x70));
  lVar1 = *(long *)(unaff_x20 + 0x40);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04315e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),unaff_w19,3,*(undefined8 *)(lVar1 + 0x28));
    return;
  }
  return;
}


