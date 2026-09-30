/*
FUNCTION_NAME: OVRPlugin$$GetTrackingCalibratedOrigin
ENTRY_POINT: 01a1d560
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetTrackingCalibratedOrigin(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar1 = FUN_02681b9c();
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_01a1ca08(*(long *)(unaff_x19 + 0x20),0);
      return;
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01a1d5a4 to 01b1d5cb has its CatchHandler @ 01a1dfb4 */
    FUN_00da518c();
  }
  return;
}


