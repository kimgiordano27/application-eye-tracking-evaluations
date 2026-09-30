/*
FUNCTION_NAME: OVREyeGaze$$OnDisable
ENTRY_POINT: 0768fe18
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnDisable(void)

{
  ulong uVar1;
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  
  if (in_w8 == 0) {
    thunk_FUN_0408f364();
  }
  uVar1 = FUN_08589e5c();
  if ((uVar1 & 1) != 0) {
    *(long *)(unaff_x20 + 0x48) = unaff_x19;
    FUN_0768f300();
    if (unaff_x19 != 0) {
      FUN_054b4c68();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  return;
}


