/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_RecenterTrackingOrigin
ENTRY_POINT: 01a45928
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_0_0__ovrp_RecenterTrackingOrigin(undefined8 param_1)

{
  if (DAT_0377ad18 == (code *)0x0) {
    DAT_0377ad18 = (code *)thunk_FUN_00d625b4();
  }
  (*DAT_0377ad18)(param_1);
  return;
}


