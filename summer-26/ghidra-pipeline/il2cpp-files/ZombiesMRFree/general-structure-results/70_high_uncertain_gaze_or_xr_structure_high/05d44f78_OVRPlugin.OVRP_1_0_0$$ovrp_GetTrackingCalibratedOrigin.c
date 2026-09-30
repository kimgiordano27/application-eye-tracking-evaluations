/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_GetTrackingCalibratedOrigin
ENTRY_POINT: 05d44f78
PROGRAM: ZombiesMRFree-libil2cpp.so
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
  uint uVar1;
  bool in_ZR;
  bool in_CY;
  uint *unaff_x19;
  int unaff_w20;
  
  if (in_CY && !in_ZR) {
    uVar1 = *(uint *)(param_1 + (long)unaff_w20 * 4 + 0x20);
    *unaff_x19 = uVar1;
    return ~uVar1 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


