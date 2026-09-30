/*
FUNCTION_NAME: OVRPlugin$$SetTrackingCalibratedOrigin
ENTRY_POINT: 0513acf0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__SetTrackingCalibratedOrigin(void)

{
  undefined4 uVar1;
  undefined4 unaff_w19;
  long unaff_x20;
  
  *(undefined4 *)(unaff_x20 + 0x10) = unaff_w19;
  uVar1 = FUN_0504cd24();
  *(undefined4 *)(unaff_x20 + 0x20) = uVar1;
  return;
}


