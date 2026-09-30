/*
FUNCTION_NAME: OVREyeGaze$$set_Confidence
ENTRY_POINT: 06301bfc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_14;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__set_Confidence(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool in_ZR;
  bool in_CY;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  if (!in_CY || in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x06301c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(&switchD_06301c14::switchdataD_016ab590)[param_1] * 4 + 0x6301c18))();
    return;
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar3 = FUN_06302250();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  auVar7 = FUN_062b7d8c(lVar3,0,0);
  uVar4 = FUN_06166730();
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 0x10) = auVar7;
    thunk_FUN_037aeb94(unaff_x19 + 0x10,0);
    if (*(int *)(*(long *)PTR_DAT_07d881d0 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_03e64d9c(unaff_x19 + 2);
    return;
  }
  FUN_0616674c();
  if (*(char *)(unaff_x19 + 0xe) == '\0') {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(char *)(unaff_x20 + 0x82) != '\0') {
      plVar5 = *(long **)(unaff_x20 + 0x68);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar3 = (**(code **)(*plVar5 + 0x2b8))
                        (plVar5,*(undefined2 *)(unaff_x20 + 0x80),*(undefined8 *)(*plVar5 + 0x2c0));
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      auVar7 = FUN_062b7d8c(lVar3,0,0);
      uVar4 = FUN_06166730();
      if ((uVar4 & 1) == 0) {
        *unaff_x19 = 2;
        *(undefined1 (*) [16])(unaff_x19 + 0x10) = auVar7;
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
    uVar6 = *(undefined8 *)(unaff_x20 + 0x68);
    uVar1 = *(undefined8 *)(unaff_x19 + 10);
    uVar2 = *(undefined8 *)(unaff_x19 + 0xc);
    if (*(int *)(*(long *)PTR_DAT_07d95e20 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar3 = FUN_0631ab20(uVar6,uVar1,uVar2,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    auVar7 = FUN_062b7d8c(lVar3,0,0);
    uVar4 = FUN_06166730();
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 3;
      *(undefined1 (*) [16])(unaff_x19 + 0x10) = auVar7;
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
    if (*(char *)(unaff_x20 + 0x82) == '\0') goto LAB_06301e58;
    plVar5 = *(long **)(unaff_x20 + 0x68);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar3 = (**(code **)(*plVar5 + 0x2b8))
                      (plVar5,*(undefined2 *)(unaff_x20 + 0x80),*(undefined8 *)(*plVar5 + 0x2c0));
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    auVar7 = FUN_062b7d8c(lVar3,0,0);
    uVar4 = FUN_06166730();
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 4;
      *(undefined1 (*) [16])(unaff_x19 + 0x10) = auVar7;
      thunk_FUN_037aeb94(unaff_x19 + 0x10,0);
      if (*(int *)(*(long *)PTR_DAT_07d881d0 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_03e64d9c(unaff_x19 + 2);
      return;
    }
    FUN_0616674c();
  }
  else {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar3 = FUN_062fbd8c();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    auVar7 = FUN_062b7d8c(lVar3,0,0);
    uVar4 = FUN_06166730();
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x10) = auVar7;
      thunk_FUN_037aeb94(unaff_x19 + 0x10,0);
      if (*(int *)(*(long *)PTR_DAT_07d881d0 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_03e64d9c(unaff_x19 + 2);
      return;
    }
    FUN_0616674c();
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
LAB_06301e58:
  plVar5 = *(long **)(unaff_x20 + 0x68);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar3 = (**(code **)(*plVar5 + 0x2b8))(plVar5,0x3a,*(undefined8 *)(*plVar5 + 0x2c0));
  if (lVar3 != 0) {
    auVar7 = FUN_062b7d8c(lVar3,0,0);
    uVar4 = FUN_06166730();
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 5;
      *(undefined1 (*) [16])(unaff_x19 + 0x10) = auVar7;
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


