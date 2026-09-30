/*
FUNCTION_NAME: OVREyeGaze$$OnDestroy
ENTRY_POINT: 07bf564c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnDestroy(long param_1)

{
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0x708));
  *(undefined1 *)(unaff_x21 + 0x25c) = 1;
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    FUN_073234dc(*(long *)(unaff_x20 + 0x30),unaff_w19,*(undefined8 *)PTR_DAT_09f4e708);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


