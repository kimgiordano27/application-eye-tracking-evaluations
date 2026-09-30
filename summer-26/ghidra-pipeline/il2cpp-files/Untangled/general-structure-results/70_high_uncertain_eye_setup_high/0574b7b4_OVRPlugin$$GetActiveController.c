/*
FUNCTION_NAME: OVRPlugin$$GetActiveController
ENTRY_POINT: 0574b7b4
PROGRAM: Untangled-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetActiveController(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 extraout_x1;
  long lVar12;
  code *pcVar13;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x29;
  undefined8 extraout_d0;
  undefined1 auVar14 [16];
  undefined1 auStack_10 [16];
  
  FUN_02f07e70();
  FUN_02f07e70(PTR_DAT_06d02bc8);
  FUN_02f07e70(PTR_DAT_06d040b0);
  FUN_02f07e70(PTR_DAT_06d59090);
  FUN_02f07e70(PTR_DAT_06d59088);
  FUN_02f07e70(PTR_DAT_06d02b98);
  FUN_02f07e70(PTR_DAT_06d04190);
  auVar14 = FUN_02f07e70(PTR_DAT_06d15fd8);
  *(undefined1 *)(unaff_x22 + 0xa01) = 1;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined4 *)(unaff_x29 + -0x30) = 0;
  if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x18) != 0)) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = auVar14._8_8_;
    auVar14 = auVar1 << 0x40;
    if (*(long *)(unaff_x20 + 0x38) != 0) {
      thunk_FUN_02ebbee0(*(long *)(unaff_x20 + 0x38),0);
      auVar14 = FUN_0569db74();
      plVar7 = auVar14._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = auVar14._8_8_;
      auVar14 = auVar2 << 0x40;
      if ((plVar7 != (long *)0x0) &&
         (auVar14 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0)),
         (auVar14._0_8_ & 1) != 0)) {
        FUN_0569c484(0);
        (**(code **)(*plVar7 + 0x178))(plVar7);
        return;
      }
    }
  }
  puVar5 = PTR_DAT_06d03fe0;
  switch(*(undefined4 *)(unaff_x20 + 0x30)) {
  case 5:
    plVar7 = *(long **)(unaff_x20 + 0x38);
    if (plVar7 == (long *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    }
    auVar14._8_8_ = uVar9;
    auVar14._0_8_ = uVar9;
    if (unaff_x19 != (long *)0x0) {
      pcVar13 = *(code **)(*unaff_x19 + 0x8f8);
      goto LAB_0574bdd0;
    }
    break;
  case 6:
    plVar7 = *(long **)(unaff_x20 + 0x38);
    if (plVar7 == (long *)0x0) {
LAB_0574b938:
      if (*(int *)(*(long *)PTR_DAT_06d06338 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar9 = FUN_055b5920(0);
      if (*(int *)(*(long *)PTR_DAT_06d02200 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)PTR_DAT_06d02200);
      }
      auVar14 = FUN_0556b4a4(plVar7,uVar9,0);
      if (unaff_x19 == (long *)0x0) break;
      lVar12 = *unaff_x19;
    }
    else {
      lVar12 = *plVar7;
      if (lVar12 == *(long *)PTR_DAT_06d02bc8) {
        auVar14 = thunk_FUN_02ef195c(plVar7);
        if (unaff_x19 != (long *)0x0) {
          pcVar13 = *(code **)(*unaff_x19 + 0x6a8);
          goto LAB_0574bac0;
        }
        break;
      }
      if (lVar12 != *(long *)PTR_DAT_06d040b0) {
        if (lVar12 == *(long *)PTR_DAT_06d04190) {
          auVar14 = thunk_FUN_02ef195c(plVar7);
          if (unaff_x19 == (long *)0x0) break;
          pcVar13 = *(code **)(*unaff_x19 + 0x6d8);
          goto LAB_0574bdd0;
        }
        if (lVar12 == *(long *)PTR_DAT_06d03fe0) {
          puVar8 = (undefined8 *)thunk_FUN_02ef195c(plVar7);
          uVar10 = *puVar8;
          uVar9 = *(undefined8 *)puVar5;
          *(undefined8 *)(unaff_x29 + -0x18) = puVar8[1];
          *(undefined8 *)(unaff_x29 + -0x20) = uVar10;
          auVar14 = thunk_FUN_02ef1438(uVar9,unaff_x29 + -0x20);
          if (unaff_x19 == (long *)0x0) break;
          pcVar13 = *(code **)(*unaff_x19 + 0x8e8);
          goto LAB_0574bdd0;
        }
        goto LAB_0574b938;
      }
      auVar14 = thunk_FUN_02ef195c(plVar7);
      if (unaff_x19 == (long *)0x0) break;
      lVar12 = *unaff_x19;
    }
    pcVar13 = *(code **)(lVar12 + 0x6c8);
LAB_0574bdd0:
    (*pcVar13)();
    return;
  case 7:
    plVar7 = *(long **)(unaff_x20 + 0x38);
    if (plVar7 != (long *)0x0) {
      lVar12 = *plVar7;
      if (lVar12 == *(long *)PTR_DAT_06d040e0) {
        auVar14 = thunk_FUN_02ef195c(plVar7);
        if (unaff_x19 != (long *)0x0) {
          pcVar13 = *(code **)(*unaff_x19 + 0x768);
          goto LAB_0574bd34;
        }
        break;
      }
      if (lVar12 == *(long *)PTR_DAT_06d04108) {
        auVar14 = thunk_FUN_02ef195c(plVar7);
        if (unaff_x19 == (long *)0x0) break;
        lVar12 = *unaff_x19;
        uVar9 = *auVar14._0_8_;
        goto LAB_0574be00;
      }
      if (lVar12 == *(long *)PTR_DAT_06d02b98) {
        auVar14 = thunk_FUN_02ef195c(plVar7);
        if (unaff_x19 != (long *)0x0) {
          (**(code **)(*unaff_x19 + 0x6e8))(*auVar14._0_8_);
          return;
        }
        break;
      }
    }
    if (*(int *)(*(long *)PTR_DAT_06d06338 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar9 = FUN_055b5920(0);
    if (*(int *)(*(long *)PTR_DAT_06d02200 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)PTR_DAT_06d02200);
    }
    uVar9 = FUN_0556c208(plVar7,uVar9,0);
    auVar14._8_8_ = extraout_x1;
    auVar14._0_8_ = uVar9;
    if (unaff_x19 != (long *)0x0) {
      lVar12 = *unaff_x19;
      uVar9 = extraout_d0;
LAB_0574be00:
      (**(code **)(lVar12 + 0x6f8))(uVar9);
      return;
    }
    break;
  case 8:
    plVar7 = *(long **)(unaff_x20 + 0x38);
    if (plVar7 == (long *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    }
    auVar14._8_8_ = uVar9;
    auVar14._0_8_ = uVar9;
    if (unaff_x19 != (long *)0x0) {
      pcVar13 = *(code **)(*unaff_x19 + 0x698);
      goto LAB_0574bdd0;
    }
    break;
  case 9:
    uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_06d06338 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar10 = FUN_055b5920(0);
    if (*(int *)(*(long *)PTR_DAT_06d02200 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)PTR_DAT_06d02200);
    }
    auVar14 = FUN_05568ba4(uVar9,uVar10,0);
    if (unaff_x19 != (long *)0x0) {
      pcVar13 = *(code **)(*unaff_x19 + 0x708);
LAB_0574bac0:
      (*pcVar13)();
      return;
    }
    break;
  case 10:
    if (unaff_x19 != (long *)0x0) {
      pcVar13 = *(code **)(*unaff_x19 + 0x658);
LAB_0574baf0:
      (*pcVar13)();
      return;
    }
    break;
  case 0xb:
    if (unaff_x19 != (long *)0x0) {
      pcVar13 = *(code **)(*unaff_x19 + 0x668);
      goto LAB_0574baf0;
    }
    break;
  case 0xc:
    plVar7 = *(long **)(unaff_x20 + 0x38);
    if ((plVar7 == (long *)0x0) || (*plVar7 != *(long *)PTR_DAT_06d1b6c8)) {
      if (*(int *)(*(long *)PTR_DAT_06d06338 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar9 = FUN_055b5920(0);
      if (*(int *)(*(long *)PTR_DAT_06d02200 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)PTR_DAT_06d02200);
      }
      auVar14 = FUN_0556c8b4(plVar7,uVar9,0);
      if (unaff_x19 != (long *)0x0) {
        pcVar13 = *(code **)(*unaff_x19 + 0x778);
        goto LAB_0574bdd0;
      }
    }
    else {
      auVar14 = thunk_FUN_02ef195c(plVar7);
      if (unaff_x19 != (long *)0x0) {
        pcVar13 = *(code **)(*unaff_x19 + 0x788);
        goto LAB_0574bd34;
      }
    }
    break;
  case 0xd:
    plVar7 = *(long **)(unaff_x20 + 0x38);
    if (plVar7 == (long *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    }
    auVar14._8_8_ = uVar9;
    auVar14._0_8_ = uVar9;
    if (unaff_x19 != (long *)0x0) {
      pcVar13 = *(code **)(*unaff_x19 + 0x688);
      goto LAB_0574bdd0;
    }
    break;
  case 0xe:
    if (unaff_x19 != (long *)0x0) {
      lVar12 = *(long *)(unaff_x20 + 0x38);
      if (lVar12 != 0) {
        uVar9 = *(undefined8 *)PTR_DAT_06d020c0;
        lVar6 = thunk_FUN_02ef170c(lVar12,uVar9);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(lVar12,uVar9);
        }
      }
      pcVar13 = *(code **)(*unaff_x19 + 0x8c8);
      goto LAB_0574bdd0;
    }
    break;
  case 0xf:
    plVar7 = *(long **)(unaff_x20 + 0x38);
    if (plVar7 == (long *)0x0) {
      *(undefined8 *)(unaff_x29 + -0x40) = 0;
      *(undefined8 *)(unaff_x29 + -0x38) = 0;
      *(undefined4 *)(unaff_x29 + -0x30) = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = auVar14._8_8_;
      auVar14 = auVar3 << 0x40;
    }
    else {
      lVar12 = *(long *)(*(long *)PTR_DAT_06d59090 + 0x40);
      if (*plVar7 != lVar12) {
LAB_0574be98:
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(plVar7,lVar12);
      }
      auVar14 = thunk_FUN_02ef1964(plVar7,*(long *)PTR_DAT_06d59090,unaff_x29 + -0x40);
    }
    if (unaff_x19 != (long *)0x0) {
      *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x29 + -0x38);
      *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0x40);
      *(undefined4 *)(unaff_x29 + -0x50) = *(undefined4 *)(unaff_x29 + -0x30);
      pcVar13 = *(code **)(*unaff_x19 + 0x8a8);
      *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x38);
      *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x40);
      *(undefined4 *)(unaff_x29 + -0x10) = *(undefined4 *)(unaff_x29 + -0x30);
      (*pcVar13)();
      return;
    }
    break;
  case 0x10:
    if (unaff_x19 != (long *)0x0) {
      plVar7 = *(long **)(unaff_x20 + 0x38);
      if (plVar7 != (long *)0x0) {
        lVar12 = *(long *)PTR_DAT_06d15fd8;
        if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar12 + 0x130)) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) !=
            lVar12)) goto LAB_0574be98;
      }
      pcVar13 = *(code **)(*unaff_x19 + 0x8d8);
      goto LAB_0574bdd0;
    }
    break;
  case 0x11:
    plVar7 = *(long **)(unaff_x20 + 0x38);
    if (plVar7 == (long *)0x0) {
      *(undefined8 *)(unaff_x29 + -0x28) = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auVar14._8_8_;
      auVar14 = auVar4 << 0x40;
    }
    else {
      lVar12 = *(long *)(*(long *)PTR_DAT_06d59088 + 0x40);
      if (*plVar7 != lVar12) goto LAB_0574be98;
      auVar14 = thunk_FUN_02ef1964(plVar7,*(long *)PTR_DAT_06d59088,auStack_10);
    }
    if (unaff_x19 != (long *)0x0) {
      pcVar13 = *(code **)(*unaff_x19 + 0x8b8);
LAB_0574bd34:
      (*pcVar13)();
      return;
    }
    break;
  default:
    *(undefined4 *)(unaff_x29 + -0x20) = *(undefined4 *)(unaff_x20 + 0x30);
    uVar9 = thunk_FUN_02f239f0(PTR_DAT_06d56300);
    uVar9 = thunk_FUN_02ef1438(uVar9,unaff_x29 + -0x20);
    uVar10 = thunk_FUN_02f239f0(PTR_DAT_06d18c40);
    uVar11 = thunk_FUN_02f239f0(PTR_DAT_06d56668);
    uVar9 = FUN_056deff8(uVar10,uVar9,uVar11,0);
    uVar10 = thunk_FUN_02f239f0(PTR_DAT_06d59328);
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar9,uVar10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0(auVar14._0_8_,auVar14._8_8_);
}


