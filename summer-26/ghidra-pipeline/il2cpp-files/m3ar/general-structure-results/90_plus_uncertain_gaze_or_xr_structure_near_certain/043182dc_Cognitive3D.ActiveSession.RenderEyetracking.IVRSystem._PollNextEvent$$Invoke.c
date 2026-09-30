/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._PollNextEvent$$Invoke
ENTRY_POINT: 043182dc
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


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__PollNextEvent__Invoke
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_07449f28(param_2,param_3,*param_1);
  if (unaff_x20 != 0) {
                    /* try { // try from 043182ec to 044182fb has its CatchHandler @ 04318380 */
    FUN_04308a60();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


