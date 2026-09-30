/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_GetTrackingCalibratedOrigin
ENTRY_POINT: 05779fb4
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingCalibratedOrigin
               (undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0xf40);
  if (pcVar1 == (code *)0x0) {
    pcVar1 = (code *)thunk_FUN_02ef1ac4();
    *(code **)(unaff_x22 + 0xf40) = pcVar1;
  }
                    /* try { // try from 0577a018 to 0587a08f has its CatchHandler @ 0577a018
                       catch() { ... } // from try @ 0577a018 with catch @ 0577a018
                       catch() { ... } // from try @ 0577a0d8 with catch @ 0577a018
                       catch() { ... } // from try @ 0577a114 with catch @ 0577a018
                       catch() { ... } // from try @ 0577a158 with catch @ 0577a018 */
  (*pcVar1)(param_1,param_2,param_3);
  return;
}


