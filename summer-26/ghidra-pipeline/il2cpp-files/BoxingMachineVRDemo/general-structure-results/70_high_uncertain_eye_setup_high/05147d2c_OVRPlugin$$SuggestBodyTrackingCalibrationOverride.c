/*
FUNCTION_NAME: OVRPlugin$$SuggestBodyTrackingCalibrationOverride
ENTRY_POINT: 05147d2c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SuggestBodyTrackingCalibrationOverride(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  long lVar11;
  code *pcVar12;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x29;
  undefined8 extraout_d0;
  undefined1 auVar13 [16];
  
  puVar4 = PTR_DAT_067677e0;
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = param_1;
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  switch(*(undefined4 *)(unaff_x21 + 0x30)) {
  case 5:
    plVar6 = *(long **)(unaff_x21 + 0x38);
    if (plVar6 == (long *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    }
    auVar13._8_8_ = uVar8;
    auVar13._0_8_ = uVar8;
    if (unaff_x20 != (long *)0x0) {
      pcVar12 = *(code **)(*unaff_x20 + 0x278);
      goto LAB_0514825c;
    }
    break;
  case 6:
    plVar6 = *(long **)(unaff_x21 + 0x38);
    if (plVar6 == (long *)0x0) {
LAB_05147dbc:
      if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar8 = FUN_04f8e414(0);
      if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
      }
      auVar13 = FUN_04f898a8(plVar6,uVar8,0);
      if (unaff_x20 == (long *)0x0) break;
      lVar11 = *unaff_x20;
    }
    else {
      lVar11 = *plVar6;
      if (lVar11 == *(long *)(PTR_DAT_0675e258 + 0x48)) {
        auVar13 = thunk_FUN_02d9d688(plVar6);
        if (unaff_x20 != (long *)0x0) {
          pcVar12 = *(code **)(*unaff_x20 + 0x3f8);
          goto LAB_05147f3c;
        }
        break;
      }
      if (lVar11 != *(long *)(PTR_DAT_0675e258 + 0x68)) {
        if (lVar11 == *(long *)(PTR_DAT_0675e258 + 0x70)) {
          auVar13 = thunk_FUN_02d9d688(plVar6);
          if (unaff_x20 == (long *)0x0) break;
          pcVar12 = *(code **)(*unaff_x20 + 0x4d8);
          goto LAB_0514825c;
        }
        if (lVar11 == *(long *)PTR_DAT_067677e0) {
          puVar7 = (undefined8 *)thunk_FUN_02d9d688(plVar6);
          uVar9 = *puVar7;
          uVar8 = *(undefined8 *)puVar4;
          *(undefined8 *)(unaff_x29 + -0x18) = puVar7[1];
          *(undefined8 *)(unaff_x29 + -0x20) = uVar9;
          auVar13 = thunk_FUN_02d9d164(uVar8,unaff_x29 + -0x20);
          if (unaff_x20 == (long *)0x0) break;
          pcVar12 = *(code **)(*unaff_x20 + 0x438);
          goto LAB_0514825c;
        }
        goto LAB_05147dbc;
      }
      auVar13 = thunk_FUN_02d9d688(plVar6);
      if (unaff_x20 == (long *)0x0) break;
      lVar11 = *unaff_x20;
    }
    pcVar12 = *(code **)(lVar11 + 0x418);
LAB_0514825c:
    (*pcVar12)();
    return;
  case 7:
    plVar6 = *(long **)(unaff_x21 + 0x38);
    if (plVar6 != (long *)0x0) {
      lVar11 = *plVar6;
      if (lVar11 == *(long *)PTR_DAT_06767820) {
        auVar13 = thunk_FUN_02d9d688(plVar6);
        if (unaff_x20 != (long *)0x0) {
          pcVar12 = *(code **)(*unaff_x20 + 0x378);
          goto LAB_051481bc;
        }
        break;
      }
      if (lVar11 == *(long *)(PTR_DAT_0675e258 + 0x80)) {
        auVar13 = thunk_FUN_02d9d688(plVar6);
        if (unaff_x20 == (long *)0x0) break;
        lVar11 = *unaff_x20;
        uVar8 = *auVar13._0_8_;
        goto LAB_05148294;
      }
      if (lVar11 == *(long *)(PTR_DAT_0675e258 + 0x78)) {
        auVar13 = thunk_FUN_02d9d688(plVar6);
        if (unaff_x20 != (long *)0x0) {
          (**(code **)(*unaff_x20 + 0x3b8))(*auVar13._0_8_);
          return;
        }
        break;
      }
    }
    if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar8 = FUN_04f8e414(0);
    if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
    }
    uVar8 = FUN_04f8a60c(plVar6,uVar8,0);
    auVar13._8_8_ = extraout_x1;
    auVar13._0_8_ = uVar8;
    if (unaff_x20 != (long *)0x0) {
      lVar11 = *unaff_x20;
      uVar8 = extraout_d0;
LAB_05148294:
      (**(code **)(lVar11 + 0x398))(uVar8);
      return;
    }
    break;
  case 8:
    plVar6 = *(long **)(unaff_x21 + 0x38);
    if (plVar6 == (long *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    }
    auVar13._8_8_ = uVar8;
    auVar13._0_8_ = uVar8;
    if (unaff_x20 != (long *)0x0) {
      pcVar12 = *(code **)(*unaff_x20 + 0x488);
      goto LAB_0514825c;
    }
    break;
  case 9:
    uVar8 = *(undefined8 *)(unaff_x21 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar9 = FUN_04f8e414(0);
    if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
    }
    auVar13 = FUN_04f87018(uVar8,uVar9,0);
    if (unaff_x20 != (long *)0x0) {
      pcVar12 = *(code **)(*unaff_x20 + 0x2c8);
LAB_05147f3c:
      (*pcVar12)();
      return;
    }
    break;
  case 10:
    if (unaff_x20 != (long *)0x0) {
      pcVar12 = *(code **)(*unaff_x20 + 0x238);
LAB_05147f70:
      (*pcVar12)();
      return;
    }
    break;
  case 0xb:
    auVar13 = auVar3;
    if (unaff_x20 != (long *)0x0) {
      pcVar12 = *(code **)(*unaff_x20 + 0x528);
      goto LAB_05147f70;
    }
    break;
  case 0xc:
    plVar6 = *(long **)(unaff_x21 + 0x38);
    if ((plVar6 == (long *)0x0) || (*plVar6 != *(long *)PTR_DAT_067657d0)) {
      if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar8 = FUN_04f8e414(0);
      if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
      }
      auVar13 = FUN_04f8acb8(plVar6,uVar8,0);
      if (unaff_x20 != (long *)0x0) {
        pcVar12 = *(code **)(*unaff_x20 + 0x338);
        goto LAB_0514825c;
      }
    }
    else {
      auVar13 = thunk_FUN_02d9d688(plVar6);
      if (unaff_x20 != (long *)0x0) {
        pcVar12 = *(code **)(*unaff_x20 + 0x358);
        goto LAB_051481bc;
      }
    }
    break;
  case 0xd:
    plVar6 = *(long **)(unaff_x21 + 0x38);
    if (plVar6 == (long *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    }
    auVar13._8_8_ = uVar8;
    auVar13._0_8_ = uVar8;
    if (unaff_x20 != (long *)0x0) {
      pcVar12 = *(code **)(*unaff_x20 + 0x288);
      goto LAB_0514825c;
    }
    break;
  case 0xe:
    auVar13 = auVar2;
    if (unaff_x20 != (long *)0x0) {
      lVar11 = *(long *)(unaff_x21 + 0x38);
      if (lVar11 != 0) {
        uVar8 = *(undefined8 *)PTR_DAT_0675e1c0;
        lVar5 = thunk_FUN_02d9d438(lVar11,uVar8);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88(lVar11,uVar8);
        }
      }
      pcVar12 = *(code **)(*unaff_x20 + 0x308);
      goto LAB_0514825c;
    }
    break;
  case 0xf:
    plVar6 = *(long **)(unaff_x21 + 0x38);
    if (plVar6 == (long *)0x0) {
      *(undefined8 *)(unaff_x29 + -0x40) = 0;
      *(undefined8 *)(unaff_x29 + -0x38) = 0;
      *(undefined4 *)(unaff_x29 + -0x30) = 0;
      uVar8 = 0;
    }
    else {
      lVar11 = *(long *)(*(long *)PTR_DAT_06781a00 + 0x40);
      if (*plVar6 != lVar11) {
LAB_05148334:
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(plVar6,lVar11);
      }
      auVar13 = thunk_FUN_02d9d690(plVar6,*(long *)PTR_DAT_06781a00,unaff_x29 + -0x40);
      param_2 = auVar13._8_8_;
      uVar8 = auVar13._0_8_;
    }
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = uVar8;
    if (unaff_x20 != (long *)0x0) {
      *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x29 + -0x38);
      *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0x40);
      *(undefined4 *)(unaff_x29 + -0x50) = *(undefined4 *)(unaff_x29 + -0x30);
      pcVar12 = *(code **)(*unaff_x20 + 1000);
      *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x38);
      *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x40);
      *(undefined4 *)(unaff_x29 + -0x10) = *(undefined4 *)(unaff_x29 + -0x30);
      (*pcVar12)();
      return;
    }
    break;
  case 0x10:
    auVar13 = auVar1;
    if (unaff_x20 != (long *)0x0) {
      plVar6 = *(long **)(unaff_x21 + 0x38);
      if (plVar6 != (long *)0x0) {
        lVar11 = *(long *)PTR_DAT_06764580;
        if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) !=
            lVar11)) goto LAB_05148334;
      }
      pcVar12 = *(code **)(*unaff_x20 + 0x4f8);
      goto LAB_0514825c;
    }
    break;
  case 0x11:
    plVar6 = *(long **)(unaff_x21 + 0x38);
    if (plVar6 == (long *)0x0) {
      *(undefined8 *)(unaff_x29 + 0x18) = 0;
      uVar8 = 0;
    }
    else {
      lVar11 = *(long *)(*(long *)PTR_DAT_067819f8 + 0x40);
      if (*plVar6 != lVar11) goto LAB_05148334;
      auVar13 = thunk_FUN_02d9d690();
      param_2 = auVar13._8_8_;
      uVar8 = auVar13._0_8_;
    }
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = uVar8;
    if (unaff_x20 != (long *)0x0) {
      pcVar12 = *(code **)(*unaff_x20 + 0x4a8);
LAB_051481bc:
      (*pcVar12)();
      return;
    }
    break;
  default:
    *(undefined4 *)(unaff_x29 + -0x20) = *(undefined4 *)(unaff_x21 + 0x30);
    uVar8 = thunk_FUN_02dc61f4(PTR_DAT_0677eb78);
    uVar8 = thunk_FUN_02d9d164(uVar8,unaff_x29 + -0x20);
    uVar9 = thunk_FUN_02dc61f4(PTR_DAT_0676bc78);
    uVar10 = thunk_FUN_02dc61f4(PTR_DAT_0677eef0);
    uVar8 = FUN_050debd4(uVar9,uVar8,uVar10,0);
    uVar9 = thunk_FUN_02dc61f4(PTR_DAT_06781c30);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar8,uVar9);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8(auVar13._0_8_,auVar13._8_8_);
}


