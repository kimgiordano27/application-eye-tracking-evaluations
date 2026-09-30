/*
FUNCTION_NAME: OVRPlugin$$DestroySpaceUser
ENTRY_POINT: 0514a2a8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__DestroySpaceUser(ulong param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  long lVar13;
  code *pcVar14;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x29;
  undefined8 extraout_d0;
  undefined1 auVar15 [16];
  
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined4 *)(unaff_x29 + -0x30) = 0;
  if ((unaff_x22 != 0) && (*(long *)(unaff_x22 + 0x18) != 0)) {
    param_1 = 0;
    if (*(long *)(unaff_x20 + 0x38) != 0) {
      thunk_FUN_02d709fc(*(long *)(unaff_x20 + 0x38),0);
      auVar15 = FUN_0509de84();
      param_2 = auVar15._8_8_;
      plVar8 = auVar15._0_8_;
      param_1 = 0;
      if (plVar8 != (long *)0x0) {
        auVar15 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
        param_2 = auVar15._8_8_;
        param_1 = auVar15._0_8_;
        if ((param_1 & 1) != 0) {
          FUN_0509c790(0);
          (**(code **)(*plVar8 + 0x178))(plVar8);
          return;
        }
      }
    }
  }
  puVar6 = PTR_DAT_067677e0;
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = param_1;
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  switch(*(undefined4 *)(unaff_x20 + 0x30)) {
  case 5:
    plVar8 = *(long **)(unaff_x20 + 0x38);
    if (plVar8 == (long *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    }
    auVar15._8_8_ = uVar10;
    auVar15._0_8_ = uVar10;
    if (unaff_x19 != (long *)0x0) {
      pcVar14 = *(code **)(*unaff_x19 + 0x8f8);
      goto LAB_0514a840;
    }
    break;
  case 6:
    plVar8 = *(long **)(unaff_x20 + 0x38);
    if (plVar8 == (long *)0x0) {
LAB_0514a3b0:
      if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar10 = FUN_04f8e414(0);
      if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
      }
      auVar15 = FUN_04f898a8(plVar8,uVar10,0);
      if (unaff_x19 == (long *)0x0) break;
      lVar13 = *unaff_x19;
    }
    else {
      lVar13 = *plVar8;
      if (lVar13 == *(long *)(PTR_DAT_0675e258 + 0x48)) {
        auVar15 = thunk_FUN_02d9d688(plVar8);
        if (unaff_x19 != (long *)0x0) {
          pcVar14 = *(code **)(*unaff_x19 + 0x6a8);
          goto LAB_0514a530;
        }
        break;
      }
      if (lVar13 != *(long *)(PTR_DAT_0675e258 + 0x68)) {
        if (lVar13 == *(long *)(PTR_DAT_0675e258 + 0x70)) {
          auVar15 = thunk_FUN_02d9d688(plVar8);
          if (unaff_x19 == (long *)0x0) break;
          pcVar14 = *(code **)(*unaff_x19 + 0x6d8);
          goto LAB_0514a840;
        }
        if (lVar13 == *(long *)PTR_DAT_067677e0) {
          puVar9 = (undefined8 *)thunk_FUN_02d9d688(plVar8);
          uVar11 = *puVar9;
          uVar10 = *(undefined8 *)puVar6;
          *(undefined8 *)(unaff_x29 + -0x18) = puVar9[1];
          *(undefined8 *)(unaff_x29 + -0x20) = uVar11;
          auVar15 = thunk_FUN_02d9d164(uVar10,unaff_x29 + -0x20);
          if (unaff_x19 == (long *)0x0) break;
          pcVar14 = *(code **)(*unaff_x19 + 0x8e8);
          goto LAB_0514a840;
        }
        goto LAB_0514a3b0;
      }
      auVar15 = thunk_FUN_02d9d688(plVar8);
      if (unaff_x19 == (long *)0x0) break;
      lVar13 = *unaff_x19;
    }
    pcVar14 = *(code **)(lVar13 + 0x6c8);
LAB_0514a840:
    (*pcVar14)();
    return;
  case 7:
    plVar8 = *(long **)(unaff_x20 + 0x38);
    if (plVar8 != (long *)0x0) {
      lVar13 = *plVar8;
      if (lVar13 == *(long *)PTR_DAT_06767820) {
        auVar15 = thunk_FUN_02d9d688(plVar8);
        if (unaff_x19 != (long *)0x0) {
          pcVar14 = *(code **)(*unaff_x19 + 0x768);
          goto LAB_0514a7a4;
        }
        break;
      }
      if (lVar13 == *(long *)(PTR_DAT_0675e258 + 0x80)) {
        auVar15 = thunk_FUN_02d9d688(plVar8);
        if (unaff_x19 == (long *)0x0) break;
        lVar13 = *unaff_x19;
        uVar10 = *auVar15._0_8_;
        goto LAB_0514a870;
      }
      if (lVar13 == *(long *)(PTR_DAT_0675e258 + 0x78)) {
        auVar15 = thunk_FUN_02d9d688(plVar8);
        if (unaff_x19 != (long *)0x0) {
          (**(code **)(*unaff_x19 + 0x6e8))(*auVar15._0_8_);
          return;
        }
        break;
      }
    }
    if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar10 = FUN_04f8e414(0);
    if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
    }
    uVar10 = FUN_04f8a60c(plVar8,uVar10,0);
    auVar15._8_8_ = extraout_x1;
    auVar15._0_8_ = uVar10;
    if (unaff_x19 != (long *)0x0) {
      lVar13 = *unaff_x19;
      uVar10 = extraout_d0;
LAB_0514a870:
      (**(code **)(lVar13 + 0x6f8))(uVar10);
      return;
    }
    break;
  case 8:
    plVar8 = *(long **)(unaff_x20 + 0x38);
    if (plVar8 == (long *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    }
    auVar15._8_8_ = uVar10;
    auVar15._0_8_ = uVar10;
    if (unaff_x19 != (long *)0x0) {
      pcVar14 = *(code **)(*unaff_x19 + 0x698);
      goto LAB_0514a840;
    }
    break;
  case 9:
    uVar10 = *(undefined8 *)(unaff_x20 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar11 = FUN_04f8e414(0);
    if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
    }
    auVar15 = FUN_04f87018(uVar10,uVar11,0);
    if (unaff_x19 != (long *)0x0) {
      pcVar14 = *(code **)(*unaff_x19 + 0x708);
LAB_0514a530:
      (*pcVar14)();
      return;
    }
    break;
  case 10:
    if (unaff_x19 != (long *)0x0) {
      pcVar14 = *(code **)(*unaff_x19 + 0x658);
LAB_0514a560:
      (*pcVar14)();
      return;
    }
    break;
  case 0xb:
    auVar15 = auVar3;
    if (unaff_x19 != (long *)0x0) {
      pcVar14 = *(code **)(*unaff_x19 + 0x668);
      goto LAB_0514a560;
    }
    break;
  case 0xc:
    plVar8 = *(long **)(unaff_x20 + 0x38);
    if ((plVar8 == (long *)0x0) || (*plVar8 != *(long *)PTR_DAT_067657d0)) {
      if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar10 = FUN_04f8e414(0);
      if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
      }
      auVar15 = FUN_04f8acb8(plVar8,uVar10,0);
      if (unaff_x19 != (long *)0x0) {
        pcVar14 = *(code **)(*unaff_x19 + 0x778);
        goto LAB_0514a840;
      }
    }
    else {
      auVar15 = thunk_FUN_02d9d688(plVar8);
      if (unaff_x19 != (long *)0x0) {
        pcVar14 = *(code **)(*unaff_x19 + 0x788);
        goto LAB_0514a7a4;
      }
    }
    break;
  case 0xd:
    plVar8 = *(long **)(unaff_x20 + 0x38);
    if (plVar8 == (long *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    }
    auVar15._8_8_ = uVar10;
    auVar15._0_8_ = uVar10;
    if (unaff_x19 != (long *)0x0) {
      pcVar14 = *(code **)(*unaff_x19 + 0x688);
      goto LAB_0514a840;
    }
    break;
  case 0xe:
    auVar15 = auVar2;
    if (unaff_x19 != (long *)0x0) {
      lVar13 = *(long *)(unaff_x20 + 0x38);
      if (lVar13 != 0) {
        uVar10 = *(undefined8 *)PTR_DAT_0675e1c0;
        lVar7 = thunk_FUN_02d9d438(lVar13,uVar10);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88(lVar13,uVar10);
        }
      }
      pcVar14 = *(code **)(*unaff_x19 + 0x8c8);
      goto LAB_0514a840;
    }
    break;
  case 0xf:
    plVar8 = *(long **)(unaff_x20 + 0x38);
    if (plVar8 == (long *)0x0) {
      *(undefined8 *)(unaff_x29 + -0x40) = 0;
      *(undefined8 *)(unaff_x29 + -0x38) = 0;
      *(undefined4 *)(unaff_x29 + -0x30) = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_2;
      auVar15 = auVar4 << 0x40;
    }
    else {
      lVar13 = *(long *)(*(long *)PTR_DAT_06781a00 + 0x40);
      if (*plVar8 != lVar13) {
LAB_0514a908:
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(plVar8,lVar13);
      }
      auVar15 = thunk_FUN_02d9d690(plVar8,*(long *)PTR_DAT_06781a00,unaff_x29 + -0x40);
    }
    if (unaff_x19 != (long *)0x0) {
      *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x29 + -0x38);
      *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0x40);
      *(undefined4 *)(unaff_x29 + -0x50) = *(undefined4 *)(unaff_x29 + -0x30);
      pcVar14 = *(code **)(*unaff_x19 + 0x8a8);
      *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x38);
      *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x40);
      *(undefined4 *)(unaff_x29 + -0x10) = *(undefined4 *)(unaff_x29 + -0x30);
      (*pcVar14)();
      return;
    }
    break;
  case 0x10:
    auVar15 = auVar1;
    if (unaff_x19 != (long *)0x0) {
      plVar8 = *(long **)(unaff_x20 + 0x38);
      if (plVar8 != (long *)0x0) {
        lVar13 = *(long *)PTR_DAT_06764580;
        if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar13 + 0x130)) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) !=
            lVar13)) goto LAB_0514a908;
      }
      pcVar14 = *(code **)(*unaff_x19 + 0x8d8);
      goto LAB_0514a840;
    }
    break;
  case 0x11:
    plVar8 = *(long **)(unaff_x20 + 0x38);
    if (plVar8 == (long *)0x0) {
      *(undefined8 *)(unaff_x29 + -0x28) = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = param_2;
      auVar15 = auVar5 << 0x40;
    }
    else {
      lVar13 = *(long *)(*(long *)PTR_DAT_067819f8 + 0x40);
      if (*plVar8 != lVar13) goto LAB_0514a908;
      auVar15 = thunk_FUN_02d9d690();
    }
    if (unaff_x19 != (long *)0x0) {
      pcVar14 = *(code **)(*unaff_x19 + 0x8b8);
LAB_0514a7a4:
      (*pcVar14)();
      return;
    }
    break;
  default:
    *(undefined4 *)(unaff_x29 + -0x20) = *(undefined4 *)(unaff_x20 + 0x30);
    uVar10 = thunk_FUN_02dc61f4(PTR_DAT_0677eb78);
    uVar10 = thunk_FUN_02d9d164(uVar10,unaff_x29 + -0x20);
    uVar11 = thunk_FUN_02dc61f4(PTR_DAT_0676bc78);
    uVar12 = thunk_FUN_02dc61f4(PTR_DAT_0677eef0);
    uVar10 = FUN_050debd4(uVar11,uVar10,uVar12,0);
    uVar11 = thunk_FUN_02dc61f4(PTR_DAT_06781c90);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar10,uVar11);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8(auVar15._0_8_,auVar15._8_8_);
}


