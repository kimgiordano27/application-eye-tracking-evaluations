/*
FUNCTION_NAME: OVREyeGaze$$get_EyeTrackingEnabled
ENTRY_POINT: 06301ba4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_14;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__get_EyeTrackingEnabled(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  if ((DAT_0825c153 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db3298);
    FUN_0373b518(PTR_DAT_07d881d0);
    FUN_0373b518(PTR_DAT_07d95e20);
    DAT_0825c153 = 1;
  }
  lVar6 = *(long *)(param_1 + 8);
  switch(*param_1) {
  case 0:
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *param_1 = 0xffffffff;
    break;
  case 1:
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *param_1 = 0xffffffff;
    goto LAB_06301e48;
  case 2:
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *param_1 = 0xffffffff;
    goto LAB_06301c5c;
  case 3:
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *param_1 = 0xffffffff;
    goto LAB_06301d2c;
  case 4:
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *param_1 = 0xffffffff;
    goto LAB_06301d84;
  case 5:
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *param_1 = 0xffffffff;
    goto LAB_06301e98;
  default:
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar3 = FUN_06302250(lVar6,*(undefined8 *)(param_1 + 10),*(undefined8 *)(param_1 + 0xc));
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    auVar8 = FUN_062b7d8c(lVar3,0,0);
    uVar4 = FUN_06166730();
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x10) = auVar8;
      thunk_FUN_037aeb94(param_1 + 0x10,0);
      if (*(int *)(*(long *)PTR_DAT_07d881d0 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_03e64d9c(param_1 + 2);
      return;
    }
  }
  FUN_0616674c();
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(char *)(lVar6 + 0x82) != '\0') {
      plVar5 = *(long **)(lVar6 + 0x68);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar3 = (**(code **)(*plVar5 + 0x2b8))
                        (plVar5,*(undefined2 *)(lVar6 + 0x80),*(undefined8 *)(*plVar5 + 0x2c0));
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      auVar8 = FUN_062b7d8c(lVar3,0,0);
      uVar4 = FUN_06166730();
      if ((uVar4 & 1) == 0) {
        *param_1 = 2;
        *(undefined1 (*) [16])(param_1 + 0x10) = auVar8;
        thunk_FUN_037aeb94(param_1 + 0x10,0);
        if (*(int *)(*(long *)PTR_DAT_07d881d0 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        FUN_03e64d9c(param_1 + 2);
        return;
      }
LAB_06301c5c:
      FUN_0616674c();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
    }
    uVar7 = *(undefined8 *)(lVar6 + 0x68);
    uVar1 = *(undefined8 *)(param_1 + 10);
    uVar2 = *(undefined8 *)(param_1 + 0xc);
    if (*(int *)(*(long *)PTR_DAT_07d95e20 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar3 = FUN_0631ab20(uVar7,uVar1,uVar2,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    auVar8 = FUN_062b7d8c(lVar3,0,0);
    uVar4 = FUN_06166730();
    if ((uVar4 & 1) == 0) {
      *param_1 = 3;
      *(undefined1 (*) [16])(param_1 + 0x10) = auVar8;
      thunk_FUN_037aeb94(param_1 + 0x10,0);
      if (*(int *)(*(long *)PTR_DAT_07d881d0 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_03e64d9c(param_1 + 2);
      return;
    }
LAB_06301d2c:
    FUN_0616674c();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(char *)(lVar6 + 0x82) != '\0') {
      plVar5 = *(long **)(lVar6 + 0x68);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar3 = (**(code **)(*plVar5 + 0x2b8))
                        (plVar5,*(undefined2 *)(lVar6 + 0x80),*(undefined8 *)(*plVar5 + 0x2c0));
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      auVar8 = FUN_062b7d8c(lVar3,0,0);
      uVar4 = FUN_06166730();
      if ((uVar4 & 1) == 0) {
        *param_1 = 4;
        *(undefined1 (*) [16])(param_1 + 0x10) = auVar8;
        thunk_FUN_037aeb94(param_1 + 0x10,0);
        if (*(int *)(*(long *)PTR_DAT_07d881d0 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        FUN_03e64d9c(param_1 + 2);
        return;
      }
LAB_06301d84:
      FUN_0616674c();
      goto LAB_06301e54;
    }
  }
  else {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar3 = FUN_062fbd8c(lVar6,*(undefined8 *)(param_1 + 10),*(undefined1 *)(lVar6 + 0x82),
                         *(undefined8 *)(param_1 + 0xc),0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    auVar8 = FUN_062b7d8c(lVar3,0,0);
    uVar4 = FUN_06166730();
    if ((uVar4 & 1) == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x10) = auVar8;
      thunk_FUN_037aeb94(param_1 + 0x10,0);
      if (*(int *)(*(long *)PTR_DAT_07d881d0 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_03e64d9c(param_1 + 2);
      return;
    }
LAB_06301e48:
    FUN_0616674c();
LAB_06301e54:
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
  }
  plVar5 = *(long **)(lVar6 + 0x68);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar6 = (**(code **)(*plVar5 + 0x2b8))(plVar5,0x3a,*(undefined8 *)(*plVar5 + 0x2c0));
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  auVar8 = FUN_062b7d8c(lVar6,0,0);
  uVar4 = FUN_06166730();
  if ((uVar4 & 1) == 0) {
    *param_1 = 5;
    *(undefined1 (*) [16])(param_1 + 0x10) = auVar8;
    thunk_FUN_037aeb94(param_1 + 0x10,0);
    if (*(int *)(*(long *)PTR_DAT_07d881d0 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_03e64d9c(param_1 + 2);
  }
  else {
LAB_06301e98:
    FUN_0616674c();
    *param_1 = 0xfffffffe;
    if (*(int *)(*(long *)PTR_DAT_07d881d0 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_06166f20(param_1 + 2,0);
  }
  return;
}


