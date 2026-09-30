/*
FUNCTION_NAME: OVRPlugin$$RequestBodyTrackingFidelity
ENTRY_POINT: 05147c64
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 119
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin__RequestBodyTrackingFidelity(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  code *pcVar13;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x29;
  undefined8 extraout_d0;
  undefined1 auVar14 [16];
  undefined1 auStack_10 [16];
  
  FUN_02d6084c(PTR_DAT_067819f8);
  auVar14 = FUN_02d6084c(PTR_DAT_06764580);
  *(undefined1 *)(unaff_x22 + 0xd75) = 1;
  *(undefined8 *)(unaff_x29 + 0x18) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined4 *)(unaff_x29 + -0x30) = 0;
  if ((unaff_x23 != 0) && (*(long *)(unaff_x23 + 0x18) != 0)) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = auVar14._8_8_;
    auVar14 = auVar1 << 0x40;
    if (*(long *)(unaff_x21 + 0x38) != 0) {
      thunk_FUN_02d709fc(*(long *)(unaff_x21 + 0x38),0);
      auVar14 = FUN_0509de84();
      plVar8 = auVar14._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = auVar14._8_8_;
      auVar14 = auVar2 << 0x40;
      if ((plVar8 != (long *)0x0) &&
         (auVar14 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0)),
         (auVar14._0_8_ & 1) != 0)) {
        FUN_0509c790(0);
        (**(code **)(*plVar8 + 0x178))(plVar8);
        puVar5 = PTR_DAT_06767a28;
        lVar6 = *(long *)PTR_DAT_06767a28;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar6 = *(long *)puVar5;
        }
        return *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
      }
    }
  }
  puVar5 = PTR_DAT_067677e0;
  switch(*(undefined4 *)(unaff_x21 + 0x30)) {
  case 5:
    plVar8 = *(long **)(unaff_x21 + 0x38);
    if (plVar8 == (long *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    }
    auVar14._8_8_ = uVar10;
    auVar14._0_8_ = uVar10;
    if (unaff_x20 != (long *)0x0) {
      pcVar13 = *(code **)(*unaff_x20 + 0x278);
      goto LAB_0514825c;
    }
    break;
  case 6:
    plVar8 = *(long **)(unaff_x21 + 0x38);
    if (plVar8 == (long *)0x0) {
LAB_05147dbc:
      if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar10 = FUN_04f8e414(0);
      if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
      }
      auVar14 = FUN_04f898a8(plVar8,uVar10,0);
      if (unaff_x20 == (long *)0x0) break;
      lVar6 = *unaff_x20;
    }
    else {
      lVar6 = *plVar8;
      if (lVar6 == *(long *)(PTR_DAT_0675e258 + 0x48)) {
        auVar14 = thunk_FUN_02d9d688(plVar8);
        if (unaff_x20 != (long *)0x0) {
          pcVar13 = *(code **)(*unaff_x20 + 0x3f8);
          goto LAB_05147f3c;
        }
        break;
      }
      if (lVar6 != *(long *)(PTR_DAT_0675e258 + 0x68)) {
        if (lVar6 == *(long *)(PTR_DAT_0675e258 + 0x70)) {
          auVar14 = thunk_FUN_02d9d688(plVar8);
          if (unaff_x20 == (long *)0x0) break;
          pcVar13 = *(code **)(*unaff_x20 + 0x4d8);
          goto LAB_0514825c;
        }
        if (lVar6 == *(long *)PTR_DAT_067677e0) {
          puVar9 = (undefined8 *)thunk_FUN_02d9d688(plVar8);
          uVar11 = *puVar9;
          uVar10 = *(undefined8 *)puVar5;
          *(undefined8 *)(unaff_x29 + -0x18) = puVar9[1];
          *(undefined8 *)(unaff_x29 + -0x20) = uVar11;
          auVar14 = thunk_FUN_02d9d164(uVar10,unaff_x29 + -0x20);
          if (unaff_x20 == (long *)0x0) break;
          pcVar13 = *(code **)(*unaff_x20 + 0x438);
          goto LAB_0514825c;
        }
        goto LAB_05147dbc;
      }
      auVar14 = thunk_FUN_02d9d688(plVar8);
      if (unaff_x20 == (long *)0x0) break;
      lVar6 = *unaff_x20;
    }
    pcVar13 = *(code **)(lVar6 + 0x418);
LAB_0514825c:
    uVar10 = (*pcVar13)();
    return uVar10;
  case 7:
    plVar8 = *(long **)(unaff_x21 + 0x38);
    if (plVar8 != (long *)0x0) {
      lVar6 = *plVar8;
      if (lVar6 == *(long *)PTR_DAT_06767820) {
        auVar14 = thunk_FUN_02d9d688(plVar8);
        if (unaff_x20 != (long *)0x0) {
          pcVar13 = *(code **)(*unaff_x20 + 0x378);
          goto LAB_051481bc;
        }
        break;
      }
      if (lVar6 == *(long *)(PTR_DAT_0675e258 + 0x80)) {
        auVar14 = thunk_FUN_02d9d688(plVar8);
        if (unaff_x20 == (long *)0x0) break;
        lVar6 = *unaff_x20;
        uVar10 = *auVar14._0_8_;
        goto LAB_05148294;
      }
      if (lVar6 == *(long *)(PTR_DAT_0675e258 + 0x78)) {
        auVar14 = thunk_FUN_02d9d688(plVar8);
        if (unaff_x20 != (long *)0x0) {
          uVar10 = (**(code **)(*unaff_x20 + 0x3b8))(*auVar14._0_8_);
          return uVar10;
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
    auVar14._8_8_ = extraout_x1;
    auVar14._0_8_ = uVar10;
    if (unaff_x20 != (long *)0x0) {
      lVar6 = *unaff_x20;
      uVar10 = extraout_d0;
LAB_05148294:
      uVar10 = (**(code **)(lVar6 + 0x398))(uVar10);
      return uVar10;
    }
    break;
  case 8:
    plVar8 = *(long **)(unaff_x21 + 0x38);
    if (plVar8 == (long *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    }
    auVar14._8_8_ = uVar10;
    auVar14._0_8_ = uVar10;
    if (unaff_x20 != (long *)0x0) {
      pcVar13 = *(code **)(*unaff_x20 + 0x488);
      goto LAB_0514825c;
    }
    break;
  case 9:
    uVar10 = *(undefined8 *)(unaff_x21 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar11 = FUN_04f8e414(0);
    if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
    }
    auVar14 = FUN_04f87018(uVar10,uVar11,0);
    if (unaff_x20 != (long *)0x0) {
      pcVar13 = *(code **)(*unaff_x20 + 0x2c8);
LAB_05147f3c:
      uVar10 = (*pcVar13)();
      return uVar10;
    }
    break;
  case 10:
    if (unaff_x20 != (long *)0x0) {
      pcVar13 = *(code **)(*unaff_x20 + 0x238);
LAB_05147f70:
      uVar10 = (*pcVar13)();
      return uVar10;
    }
    break;
  case 0xb:
    if (unaff_x20 != (long *)0x0) {
      pcVar13 = *(code **)(*unaff_x20 + 0x528);
      goto LAB_05147f70;
    }
    break;
  case 0xc:
    plVar8 = *(long **)(unaff_x21 + 0x38);
    if ((plVar8 == (long *)0x0) || (*plVar8 != *(long *)PTR_DAT_067657d0)) {
      if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar10 = FUN_04f8e414(0);
      if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
      }
      auVar14 = FUN_04f8acb8(plVar8,uVar10,0);
      if (unaff_x20 != (long *)0x0) {
        pcVar13 = *(code **)(*unaff_x20 + 0x338);
        goto LAB_0514825c;
      }
    }
    else {
      auVar14 = thunk_FUN_02d9d688(plVar8);
      if (unaff_x20 != (long *)0x0) {
        pcVar13 = *(code **)(*unaff_x20 + 0x358);
        goto LAB_051481bc;
      }
    }
    break;
  case 0xd:
    plVar8 = *(long **)(unaff_x21 + 0x38);
    if (plVar8 == (long *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    }
    auVar14._8_8_ = uVar10;
    auVar14._0_8_ = uVar10;
    if (unaff_x20 != (long *)0x0) {
      pcVar13 = *(code **)(*unaff_x20 + 0x288);
      goto LAB_0514825c;
    }
    break;
  case 0xe:
    if (unaff_x20 != (long *)0x0) {
      lVar6 = *(long *)(unaff_x21 + 0x38);
      if (lVar6 != 0) {
        uVar10 = *(undefined8 *)PTR_DAT_0675e1c0;
        lVar7 = thunk_FUN_02d9d438(lVar6,uVar10);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88(lVar6,uVar10);
        }
      }
      pcVar13 = *(code **)(*unaff_x20 + 0x308);
      goto LAB_0514825c;
    }
    break;
  case 0xf:
    plVar8 = *(long **)(unaff_x21 + 0x38);
    if (plVar8 == (long *)0x0) {
      *(undefined8 *)(unaff_x29 + -0x40) = 0;
      *(undefined8 *)(unaff_x29 + -0x38) = 0;
      *(undefined4 *)(unaff_x29 + -0x30) = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = auVar14._8_8_;
      auVar14 = auVar3 << 0x40;
    }
    else {
      lVar6 = *(long *)(*(long *)PTR_DAT_06781a00 + 0x40);
      if (*plVar8 != lVar6) {
LAB_05148334:
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(plVar8,lVar6);
      }
      auVar14 = thunk_FUN_02d9d690(plVar8,*(long *)PTR_DAT_06781a00,unaff_x29 + -0x40);
    }
    if (unaff_x20 != (long *)0x0) {
      *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x29 + -0x38);
      *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0x40);
      *(undefined4 *)(unaff_x29 + -0x50) = *(undefined4 *)(unaff_x29 + -0x30);
      pcVar13 = *(code **)(*unaff_x20 + 1000);
      *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x38);
      *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x40);
      *(undefined4 *)(unaff_x29 + -0x10) = *(undefined4 *)(unaff_x29 + -0x30);
      uVar10 = (*pcVar13)();
      return uVar10;
    }
    break;
  case 0x10:
    if (unaff_x20 != (long *)0x0) {
      plVar8 = *(long **)(unaff_x21 + 0x38);
      if (plVar8 != (long *)0x0) {
        lVar6 = *(long *)PTR_DAT_06764580;
        if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6)
           ) goto LAB_05148334;
      }
      pcVar13 = *(code **)(*unaff_x20 + 0x4f8);
      goto LAB_0514825c;
    }
    break;
  case 0x11:
    plVar8 = *(long **)(unaff_x21 + 0x38);
    if (plVar8 == (long *)0x0) {
      *(undefined8 *)(unaff_x29 + 0x18) = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auVar14._8_8_;
      auVar14 = auVar4 << 0x40;
    }
    else {
      lVar6 = *(long *)(*(long *)PTR_DAT_067819f8 + 0x40);
      if (*plVar8 != lVar6) goto LAB_05148334;
      auVar14 = thunk_FUN_02d9d690(plVar8,*(long *)PTR_DAT_067819f8,auStack_10);
    }
    if (unaff_x20 != (long *)0x0) {
      pcVar13 = *(code **)(*unaff_x20 + 0x4a8);
LAB_051481bc:
      uVar10 = (*pcVar13)();
      return uVar10;
    }
    break;
  default:
    *(undefined4 *)(unaff_x29 + -0x20) = *(undefined4 *)(unaff_x21 + 0x30);
    uVar10 = thunk_FUN_02dc61f4(PTR_DAT_0677eb78);
    uVar10 = thunk_FUN_02d9d164(uVar10,unaff_x29 + -0x20);
    uVar11 = thunk_FUN_02dc61f4(PTR_DAT_0676bc78);
    uVar12 = thunk_FUN_02dc61f4(PTR_DAT_0677eef0);
    uVar10 = FUN_050debd4(uVar11,uVar10,uVar12,0);
    uVar11 = thunk_FUN_02dc61f4(PTR_DAT_06781c30);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar10,uVar11);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8(auVar14._0_8_,auVar14._8_8_);
}


