/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_GetTrackingCalibratedOrigin
ENTRY_POINT: 033ed1a0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


uint OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingCalibratedOrigin(long param_1)

{
  uint unaff_w20;
  uint uStack0000000000000000;
  uint uStack0000000000000004;
  uint uStack0000000000000008;
  int iStack000000000000000c;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_033ff354(&stack0x00000008);
  return (unaff_w20 & 0xff00ffff | iStack000000000000000c << 0x10) ^ uStack0000000000000000 ^
         uStack0000000000000008 ^ uStack0000000000000004;
}


