/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetEventTypeNameFromEnum$$.ctor
ENTRY_POINT: 043185b0
PROGRAM: m3ar-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetEventTypeNameFromEnum___ctor
               (undefined8 param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *unaff_x20;
  undefined8 in_stack_00000008;
  
  if (param_2 != 1) {
    FUN_03a91acc();
                    /* WARNING: Subroutine does not return */
    FUN_0412026c(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch(param_1);
  lVar2 = *plVar1;
  __cxa_end_catch();
  FUN_04fcfdf4(in_stack_00000008,*unaff_x20);
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04031884(lVar2);
  }
  return;
}


