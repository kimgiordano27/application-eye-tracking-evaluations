/*
FUNCTION_NAME: OVRPlugin$$GetTrackingCalibratedOrigin
ENTRY_POINT: 07c79e00
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetTrackingCalibratedOrigin(long param_1,long param_2)

{
  long in_x9;
  uint in_w11;
  undefined1 auVar1 [16];
  
  if ((*(byte *)(param_1 + 0x130) <= in_w11) &&
     (*(long *)(*(long *)(in_x9 + 200) + (ulong)*(byte *)(param_1 + 0x130) * 8 + -8) == param_1)) {
    auVar1 = NEON_rev64(*(undefined1 (*) [16])(param_2 + 0x14),4);
    *(float *)(param_2 + 0x1c) = -auVar1._8_4_;
    *(float *)(param_2 + 0x20) = -auVar1._12_4_;
    *(float *)(param_2 + 0x14) = -auVar1._0_4_;
    *(float *)(param_2 + 0x18) = -auVar1._4_4_;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


