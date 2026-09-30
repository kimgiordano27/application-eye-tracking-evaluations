/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.OpenVRInterop$$IsHmdPresent
ENTRY_POINT: 043158f4
PROGRAM: m3ar-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3;functionality_possible_biometrics_hits_3
*/


void Cognitive3D_ActiveSession_RenderEyetracking_OpenVRInterop__IsHmdPresent(undefined8 param_1)

{
  long lVar1;
  long unaff_x21;
  
  FUN_042f2ebc(param_1,0);
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar1 = FUN_04347db4();
  if (0 < lVar1) {
                    /* try { // try from 04315924 to 04415927 has its CatchHandler @ 0431592c */
                    /* try { // try from 04315928 to 0441594f has its CatchHandler @ 04315514 */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 04315924 with catch @ 0431592c
                        */
    Cognitive3D_ActiveSession_RenderEyetracking_OpenVRInterop__GetStringForHmdError();
    return;
  }
                    /* catch(type#1 @ 08931438) { ... } // from try @ 04315718 with catch @ 04315930
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 04315704 with catch @ 04315934
                        */
  FUN_04315a94();
  return;
}


