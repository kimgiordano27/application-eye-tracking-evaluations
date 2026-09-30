/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_RecenterTrackingOrigin
ENTRY_POINT: 02c4c50c
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_0_0__ovrp_RecenterTrackingOrigin(void)

{
  undefined1 in_w8;
  undefined4 unaff_w19;
  long unaff_x24;
  long *unaff_x25;
  
  *(undefined1 *)(unaff_x24 + 0xff) = in_w8;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  FUN_02c43fcc(unaff_w19);
  FUN_02c43c60();
  return;
}


