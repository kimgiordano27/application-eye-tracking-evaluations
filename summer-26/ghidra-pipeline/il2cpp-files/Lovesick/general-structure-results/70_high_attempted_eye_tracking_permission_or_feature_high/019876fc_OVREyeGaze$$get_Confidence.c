/*
FUNCTION_NAME: OVREyeGaze$$get_Confidence
ENTRY_POINT: 019876fc
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


void OVREyeGaze__get_Confidence(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long *plVar2;
  
                    /* try { // try from 01987700 to 01a8770b has its CatchHandler @ 01986fac */
  plVar2 = *(long **)(unaff_x20 + 0x748);
  if ((*(byte *)(unaff_x19 + 0x3f9) & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_12606);
    *(undefined1 *)(unaff_x19 + 0x3f9) = 1;
  }
  lVar1 = thunk_FUN_00d62348(*plVar2);
  if (lVar1 != 0) {
    FUN_017b46ec(lVar1,0);
    **(long **)(*plVar2 + 0xb8) = lVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


