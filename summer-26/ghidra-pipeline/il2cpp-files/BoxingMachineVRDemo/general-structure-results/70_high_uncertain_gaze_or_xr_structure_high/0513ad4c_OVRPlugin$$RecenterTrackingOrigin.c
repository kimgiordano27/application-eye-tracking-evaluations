/*
FUNCTION_NAME: OVRPlugin$$RecenterTrackingOrigin
ENTRY_POINT: 0513ad4c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__RecenterTrackingOrigin(void)

{
  undefined4 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_0504920c();
  *(undefined4 *)(unaff_x20 + 0x10) = 0xfffffffe;
  uVar1 = FUN_0504cd24(0);
  *(undefined4 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
  thunk_FUN_02dd37b4();
  return;
}


