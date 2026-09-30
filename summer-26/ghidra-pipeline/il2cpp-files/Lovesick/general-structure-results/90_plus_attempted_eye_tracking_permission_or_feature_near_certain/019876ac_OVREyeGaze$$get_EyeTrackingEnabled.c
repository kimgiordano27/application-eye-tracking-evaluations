/*
FUNCTION_NAME: OVREyeGaze$$get_EyeTrackingEnabled
ENTRY_POINT: 019876ac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 112
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


bool OVREyeGaze__get_EyeTrackingEnabled(ulong param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_8481);
    *(undefined1 *)(unaff_x20 + 0x3f8) = 1;
  }
  if (*(long *)(unaff_x19 + 0x18) != 0) {
                    /* try { // try from 019876d8 to 01a876ff has its CatchHandler @ 01987720 */
    return *(long *)(unaff_x19 + 0x10) != *(long *)(*(long *)(unaff_x19 + 0x18) + 200);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


