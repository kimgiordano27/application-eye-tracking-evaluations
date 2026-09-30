/*
FUNCTION_NAME: OVREyeGaze$$Start
ENTRY_POINT: 06301c88
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 86
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__Start(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  thunk_FUN_03798b70();
  lVar1 = FUN_0631ab20();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  auVar4 = FUN_062b7d8c(lVar1,0,0);
  uVar2 = FUN_06166730();
  if ((uVar2 & 1) == 0) {
    *unaff_x19 = 3;
    *(undefined1 (*) [16])(unaff_x19 + 0x10) = auVar4;
    thunk_FUN_037aeb94(unaff_x19 + 0x10,0);
    if (*(int *)(*(long *)PTR_DAT_07d881d0 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_03e64d9c(unaff_x19 + 2);
  }
  else {
    FUN_0616674c();
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(char *)(unaff_x20 + 0x82) != '\0') {
      plVar3 = *(long **)(unaff_x20 + 0x68);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar1 = (**(code **)(*plVar3 + 0x2b8))
                        (plVar3,*(undefined2 *)(unaff_x20 + 0x80),*(undefined8 *)(*plVar3 + 0x2c0));
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      auVar4 = FUN_062b7d8c(lVar1,0,0);
      uVar2 = FUN_06166730();
      if ((uVar2 & 1) == 0) {
        *unaff_x19 = 4;
        *(undefined1 (*) [16])(unaff_x19 + 0x10) = auVar4;
        thunk_FUN_037aeb94(unaff_x19 + 0x10,0);
        if (*(int *)(*(long *)PTR_DAT_07d881d0 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        FUN_03e64d9c(unaff_x19 + 2);
        return;
      }
      FUN_0616674c();
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
    }
    plVar3 = *(long **)(unaff_x20 + 0x68);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar1 = (**(code **)(*plVar3 + 0x2b8))(plVar3,0x3a,*(undefined8 *)(*plVar3 + 0x2c0));
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    auVar4 = FUN_062b7d8c(lVar1,0,0);
    uVar2 = FUN_06166730();
    if ((uVar2 & 1) == 0) {
      *unaff_x19 = 5;
      *(undefined1 (*) [16])(unaff_x19 + 0x10) = auVar4;
      thunk_FUN_037aeb94(unaff_x19 + 0x10,0);
      if (*(int *)(*(long *)PTR_DAT_07d881d0 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_03e64d9c(unaff_x19 + 2);
    }
    else {
      FUN_0616674c();
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(*(long *)PTR_DAT_07d881d0 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_06166f20(unaff_x19 + 2,0);
    }
  }
  return;
}


