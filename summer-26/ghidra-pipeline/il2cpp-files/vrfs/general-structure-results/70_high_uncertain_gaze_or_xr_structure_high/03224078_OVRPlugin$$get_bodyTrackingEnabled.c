/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingEnabled
ENTRY_POINT: 03224078
PROGRAM: vrfs-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


uint OVRPlugin__get_bodyTrackingEnabled(void)

{
  uint uVar1;
  int in_w8;
  long unaff_x28;
  long unaff_x29;
  
  if (in_w8 == 0) {
                    /* try { // try from 0322407c to 03324087 has its CatchHandler @ 03224158 */
    thunk_FUN_016466fc();
  }
                    /* try { // try from 03224088 to 03324147 has its CatchHandler @ 03223cb0 */
  uVar1 = FUN_03223918();
  if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x68)) {
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


