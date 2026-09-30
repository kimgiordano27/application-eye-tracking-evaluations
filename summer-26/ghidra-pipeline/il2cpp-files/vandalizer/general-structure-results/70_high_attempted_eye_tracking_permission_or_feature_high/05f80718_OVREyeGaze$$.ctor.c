/*
FUNCTION_NAME: OVREyeGaze$$.ctor
ENTRY_POINT: 05f80718
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x05f80734) */

void OVREyeGaze___ctor(undefined8 param_1)

{
  long lVar1;
  long unaff_x19;
  
  lVar1 = thunk_FUN_06e03184(param_1,0);
  if (lVar1 != 0) {
    thunk_FUN_06e1062c(lVar1,*(undefined4 *)(unaff_x19 + 0x7c),0);
    if ((*(long *)(unaff_x19 + 0x40) != 0) &&
       (lVar1 = thunk_FUN_06e03184(*(long *)(unaff_x19 + 0x40),0), lVar1 != 0)) {
      thunk_FUN_06e1073c(*(undefined4 *)(unaff_x19 + 0x48),*(undefined4 *)(unaff_x19 + 0x4c),
                         *(undefined4 *)(unaff_x19 + 0x50),*(undefined4 *)(unaff_x19 + 0x54),lVar1,
                         *(undefined4 *)(unaff_x19 + 0x80),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


