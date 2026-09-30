/*
FUNCTION_NAME: OVRPlugin$$GetTrackingCalibratedOrigin
ENTRY_POINT: 0513ac7c
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


long OVRPlugin__GetTrackingCalibratedOrigin(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 0x7a0));
  *(undefined1 *)(unaff_x20 + 0xcdb) = 1;
  lVar2 = thunk_FUN_02d9d534(*unaff_x21);
  FUN_0504920c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0xfffffffe;
  uVar1 = FUN_0504cd24(0);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  *(undefined8 *)(lVar2 + 0x28) = unaff_x19;
  thunk_FUN_02dd37b4();
  return lVar2;
}


