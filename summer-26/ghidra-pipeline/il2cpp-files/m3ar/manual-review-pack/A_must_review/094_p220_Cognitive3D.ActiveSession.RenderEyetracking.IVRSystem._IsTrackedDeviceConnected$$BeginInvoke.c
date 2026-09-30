/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._IsTrackedDeviceConnected$$BeginInvoke
ENTRY_POINT: 04317650
PROGRAM: m3ar-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__IsTrackedDeviceConnected__BeginInvoke
               (long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  int *in_x10;
  
                    /* try { // try from 0431765c to 04417663 has its CatchHandler @ 043178d4 */
  lVar1 = Crosstales_Common_Util_BaseHelper__FormatSecondsToHRF
                    (*(undefined8 *)(param_1 + (long)(*in_x10 + param_4) * 0x10 + 0x140));
                    /* try { // try from 04317670 to 04417677 has its CatchHandler @ 043178cc */
                    /* try { // try from 04317678 to 04417683 has its CatchHandler @ 043178c8 */
  (**(code **)(lVar1 + 8))();
  FUN_04313bd4();
  return;
}


