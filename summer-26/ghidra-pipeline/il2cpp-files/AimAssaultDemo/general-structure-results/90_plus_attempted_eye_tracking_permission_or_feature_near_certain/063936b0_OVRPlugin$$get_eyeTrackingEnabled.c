/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingEnabled
ENTRY_POINT: 063936b0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_13;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


long OVRPlugin__get_eyeTrackingEnabled(ulong param_1,long param_2,short param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  short sVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  uint unaff_w19;
  long unaff_x20;
  long lVar13;
  undefined2 uStack000000000000000c;
  
  if ((param_1 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db6608);
    FUN_0373b518(PTR_DAT_07db6278);
    FUN_0373b518(PTR_DAT_07d86c58);
    FUN_0373b518(PTR_DAT_07d86c50);
    FUN_0373b518(PTR_DAT_07d86c48);
    FUN_0373b518(PTR_DAT_07db6610);
    FUN_0373b518(PTR_DAT_07db65f8);
    *(undefined1 *)(unaff_x20 + 0x60c) = 1;
  }
  puVar6 = PTR_DAT_07db65f8;
  puVar5 = PTR_DAT_07d86c58;
  puVar4 = PTR_DAT_07d86c50;
  puVar3 = PTR_DAT_07d86c48;
  uStack000000000000000c = 0;
  lVar11 = *(long *)(param_2 + 0x10);
  if (lVar11 != 0) {
    lVar13 = 0;
    do {
      if (*(int *)(lVar11 + 0x10) <= *(int *)(param_2 + 0x20)) {
        thunk_FUN_037a15ac(PTR_DAT_07d967c8);
        uVar8 = thunk_FUN_037788cc();
        uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db65f8);
        FUN_062d6d20(uVar8,uVar10,0);
        uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db6618);
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar8,uVar10);
      }
      uVar8 = FUN_063953d8(param_2);
      FUN_06392df8(param_2);
      FUN_06393620(param_2,*(undefined8 *)puVar6);
      if (*(long *)(param_2 + 0x10) == 0) break;
      sVar7 = FUN_060bb390(*(long *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x20),0);
      if (sVar7 == param_3) {
        if (lVar13 == 0) {
          if (*(int *)(*(long *)PTR_DAT_07db6278 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          lVar11 = FUN_06393458(uVar8,unaff_w19 & 1);
        }
        else {
          lVar11 = *(long *)(lVar13 + 0x10);
          lVar12 = *(long *)puVar5;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar11 == 0) break;
          uVar2 = *(uint *)(lVar13 + 0x18);
          if (uVar2 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar2 + 1;
            puVar9 = (undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
            *puVar9 = uVar8;
            thunk_FUN_037aeb94(puVar9,uVar8);
          }
          else {
            FUN_049ceef4(lVar13,uVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          puVar9 = (undefined8 *)PTR_DAT_07db6610;
          if ((unaff_w19 & 1) == 0) {
            puVar9 = (undefined8 *)PTR_DAT_07db6608;
          }
          lVar11 = thunk_FUN_037788cc(*puVar9);
          FUN_062855bc(lVar11,0);
          *(long *)(lVar11 + 0x10) = lVar13;
          thunk_FUN_037aeb94((long *)(lVar11 + 0x10),lVar13);
        }
        return lVar11;
      }
      if (*(long *)(param_2 + 0x10) == 0) break;
      sVar7 = FUN_060bb390(*(long *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x20),0);
      if (sVar7 != 0x2c) {
        uVar8 = *(undefined8 *)(param_2 + 0x10);
        uVar1 = *(undefined4 *)(param_2 + 0x20);
        FUN_031a5e18(uVar8);
        uStack000000000000000c = FUN_060bb390(uVar8,uVar1,0);
        FUN_031ae340(*(undefined8 *)(PTR_DAT_07d86548 + 0x88));
        uVar8 = FUN_0619e108(&stack0x0000000c,0);
        uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db6620);
        uVar8 = System_Convert__ToInt32(uVar10,uVar8,0);
        thunk_FUN_037a15ac(PTR_DAT_07d967c8);
        uVar10 = thunk_FUN_037788cc();
        FUN_062d6d20(uVar10,uVar8,0);
        uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db6618);
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar10,uVar8);
      }
      *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
      FUN_06392df8(param_2);
      if (lVar13 == 0) {
        lVar13 = thunk_FUN_037788cc(*(undefined8 *)puVar3);
        FUN_049ce6c0(lVar13,*(undefined8 *)puVar4);
        if (lVar13 == 0) break;
      }
      lVar11 = *(long *)(lVar13 + 0x10);
      lVar12 = *(long *)puVar5;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      if (lVar11 == 0) break;
      uVar2 = *(uint *)(lVar13 + 0x18);
      if (uVar2 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar13 + 0x18) = uVar2 + 1;
        puVar9 = (undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
        *puVar9 = uVar8;
        thunk_FUN_037aeb94(puVar9,uVar8);
      }
      else {
        FUN_049ceef4(lVar13,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70)
                    );
      }
      lVar11 = *(long *)(param_2 + 0x10);
    } while (lVar11 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


