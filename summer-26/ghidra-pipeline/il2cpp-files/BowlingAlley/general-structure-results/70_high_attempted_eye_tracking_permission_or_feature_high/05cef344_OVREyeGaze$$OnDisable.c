/*
FUNCTION_NAME: OVREyeGaze$$OnDisable
ENTRY_POINT: 05cef344
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 71
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVREyeGaze__OnDisable(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x20;
  
  thunk_FUN_032cd7c0();
  uVar1 = FUN_06bece64();
  if ((uVar1 & 1) != 0) {
    lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727b958);
    FUN_06be9c64(lVar2,*(undefined8 *)PTR_DAT_0728dcc0,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar3 = FUN_039efc38(lVar2,*(undefined8 *)PTR_DAT_072af380);
    lVar2 = *unaff_x20;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar2);
      lVar2 = *unaff_x20;
    }
    **(undefined8 **)(lVar2 + 0xb8) = uVar3;
    thunk_FUN_0333a630(*(undefined8 *)(*unaff_x20 + 0xb8),uVar3);
  }
  lVar2 = *unaff_x20;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x20;
  }
  return **(undefined8 **)(lVar2 + 0xb8);
}


