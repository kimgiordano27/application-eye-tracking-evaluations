/*
FUNCTION_NAME: OVREyeGaze$$set_Confidence
ENTRY_POINT: 01987704
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__set_Confidence(ulong param_1)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x20;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_12606);
    *(undefined1 *)(unaff_x19 + 0x3f9) = 1;
  }
  lVar1 = thunk_FUN_00d62348(*unaff_x20);
  if (lVar1 != 0) {
    FUN_017b46ec(lVar1,0);
    **(long **)(*unaff_x20 + 0xb8) = lVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


