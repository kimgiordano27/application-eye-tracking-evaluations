/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetControllerState$$EndInvoke
ENTRY_POINT: 043189ec
PROGRAM: m3ar-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetControllerState__EndInvoke
               (undefined8 param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 in_stack_00000008;
  
  if (param_2 != 1) {
    FUN_03a91afc();
                    /* WARNING: Subroutine does not return */
    FUN_0412026c(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch();
  lVar2 = *plVar1;
  __cxa_end_catch();
  FUN_04fcfdf4(in_stack_00000008,*(undefined8 *)PTR_DAT_08f738c8);
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04031884(lVar2);
  }
  return;
}


