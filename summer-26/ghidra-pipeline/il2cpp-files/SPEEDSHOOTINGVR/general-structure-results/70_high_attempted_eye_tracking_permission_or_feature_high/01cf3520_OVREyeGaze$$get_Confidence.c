/*
FUNCTION_NAME: OVREyeGaze$$get_Confidence
ENTRY_POINT: 01cf3520
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVREyeGaze__get_Confidence(long param_1)

{
  long lVar1;
  ulong unaff_x19;
  long *unaff_x21;
  
  while( true ) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      param_1 = *unaff_x21;
    }
    if (**(long **)(param_1 + 0xb8) == 0) break;
    if ((long)*(int *)(**(long **)(param_1 + 0xb8) + 0x18) <= (long)unaff_x19) {
      return 0;
    }
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      param_1 = *unaff_x21;
    }
    lVar1 = **(long **)(param_1 + 0xb8);
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= unaff_x19) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    lVar1 = lVar1 + unaff_x19;
    unaff_x19 = unaff_x19 + 1;
    *(undefined1 *)(lVar1 + 0x20) = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


