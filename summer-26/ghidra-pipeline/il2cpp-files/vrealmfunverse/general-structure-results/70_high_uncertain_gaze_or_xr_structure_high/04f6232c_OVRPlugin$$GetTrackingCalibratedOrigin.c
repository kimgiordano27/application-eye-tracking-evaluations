/*
FUNCTION_NAME: OVRPlugin$$GetTrackingCalibratedOrigin
ENTRY_POINT: 04f6232c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin__GetTrackingCalibratedOrigin(long param_1)

{
  undefined8 uVar1;
  long in_x9;
  undefined8 *unaff_x19;
  
  uVar1 = FUN_02b3c908(**(undefined8 **)(in_x9 + 0xb00),*(undefined4 *)(param_1 + 0x18));
  *unaff_x19 = uVar1;
  thunk_FUN_02bb0e9c();
  return *unaff_x19;
}


