/*
FUNCTION_NAME: OVRPlugin$$GetTrackingCalibratedOrigin
ENTRY_POINT: 0747768c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetTrackingCalibratedOrigin(ulong param_1)

{
  long unaff_x19;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_092234b8);
    *(undefined1 *)(unaff_x21 + 0x8f6) = 1;
  }
  *(undefined2 *)(unaff_x19 + 0x60) = 0x101;
  FUN_05699814();
  return;
}


