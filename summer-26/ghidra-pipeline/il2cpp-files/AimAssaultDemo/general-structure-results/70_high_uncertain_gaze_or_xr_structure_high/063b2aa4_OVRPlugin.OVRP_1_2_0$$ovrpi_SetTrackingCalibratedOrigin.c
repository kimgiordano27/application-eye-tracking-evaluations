/*
FUNCTION_NAME: OVRPlugin.OVRP_1_2_0$$ovrpi_SetTrackingCalibratedOrigin
ENTRY_POINT: 063b2aa4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_2_0__ovrpi_SetTrackingCalibratedOrigin(long param_1)

{
  byte bVar1;
  uint in_w9;
  long *in_x10;
  
                    /* try { // try from 063b2aa8 to 064b2aff has its CatchHandler @ 063b2928 */
  bVar1 = *(byte *)(*in_x10 + 0x130);
  if ((bVar1 <= in_w9) && (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) == *in_x10))
  {
    FUN_063b1fd8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373bb54();
}


