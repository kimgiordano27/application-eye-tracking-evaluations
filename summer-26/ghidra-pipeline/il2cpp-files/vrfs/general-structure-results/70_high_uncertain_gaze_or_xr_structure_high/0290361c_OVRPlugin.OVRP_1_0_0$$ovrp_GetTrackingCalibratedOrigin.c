/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_GetTrackingCalibratedOrigin
ENTRY_POINT: 0290361c
PROGRAM: vrfs-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


ulong OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingCalibratedOrigin(void)

{
  undefined1 in_w8;
  ulong unaff_x19;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0xc46) = in_w8;
  if (unaff_x19 < 0x10000) {
                    /* try { // try from 02903628 to 02a036e7 has its CatchHandler @ 02903238 */
    return unaff_x19 & 0xffffffff;
  }
  FUN_011aacf4(*(undefined8 *)PTR_DAT_06ddaad8);
                    /* WARNING: Subroutine does not return */
  FUN_02902c24();
}


