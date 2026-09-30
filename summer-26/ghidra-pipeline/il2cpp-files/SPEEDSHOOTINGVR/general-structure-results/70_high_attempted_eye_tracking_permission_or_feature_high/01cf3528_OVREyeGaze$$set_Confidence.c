/*
FUNCTION_NAME: OVREyeGaze$$set_Confidence
ENTRY_POINT: 01cf3528
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


undefined8 OVREyeGaze__set_Confidence(void)

{
  long lVar1;
  long lVar2;
  ulong unaff_x19;
  long *unaff_x21;
  
  do {
    thunk_FUN_01022c14();
    lVar1 = *unaff_x21;
    do {
      if (**(long **)(lVar1 + 0xb8) == 0) {
LAB_01cf3594:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      if ((long)*(int *)(**(long **)(lVar1 + 0xb8) + 0x18) <= (long)unaff_x19) {
        return 0;
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01022c14();
        lVar1 = *unaff_x21;
      }
      lVar2 = **(long **)(lVar1 + 0xb8);
      if (lVar2 == 0) goto LAB_01cf3594;
      if (*(uint *)(lVar2 + 0x18) <= unaff_x19) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      lVar2 = lVar2 + unaff_x19;
      unaff_x19 = unaff_x19 + 1;
      *(undefined1 *)(lVar2 + 0x20) = 0;
    } while (*(int *)(lVar1 + 0xe0) != 0);
  } while( true );
}


