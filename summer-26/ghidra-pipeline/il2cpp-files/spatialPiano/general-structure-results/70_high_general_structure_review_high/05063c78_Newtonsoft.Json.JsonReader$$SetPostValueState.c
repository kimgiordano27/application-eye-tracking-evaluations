/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$SetPostValueState
ENTRY_POINT: 05063c78
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonReader__SetPostValueState(undefined **param_1)

{
  ushort *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  uint uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  long unaff_x19;
  uint uVar11;
  long lVar12;
  ulong unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  uint uVar13;
  ulong unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  undefined1 auVar14 [16];
  
code_r0x05063c78:
  uVar5 = *(uint *)(unaff_x29 + -0xc);
  uVar13 = (uint)unaff_x26;
  lVar12 = *(long *)param_1[4];
  if (uVar13 < uVar5) {
    FUN_050f577c(0);
  }
  if ((*(ushort *)(*(long *)(lVar12 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  uVar10 = (uint)unaff_x19;
  lVar12 = *(long *)PTR_DAT_067dc028;
  if (unaff_w22 < uVar10) {
    FUN_050f577c(0);
  }
  lVar12 = *(long *)(lVar12 + 0x20);
  if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_02f41e9c();
  }
  if (uVar13 == uVar5) {
LAB_0506402c:
    if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    goto LAB_05064044;
  }
  lVar12 = *unaff_x28;
  puVar1 = (ushort *)(unaff_x23 + (long)(int)uVar5 * 2);
  uVar4 = *puVar1;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    lVar12 = thunk_FUN_02f6670c();
  }
  uVar13 = uVar13 - uVar5;
  unaff_w22 = unaff_w22 - uVar10;
  *(long *)(unaff_x29 + -0x28) = *(long *)(unaff_x29 + -0x28) + unaff_x19;
  if ((uVar4 < 0x21) && ((unaff_x27 << ((ulong)uVar4 & 0x3f) & unaff_x21) != 0)) {
    if (uVar13 != 1) {
      uVar5 = uVar13;
      if (uVar13 < 2) {
        uVar5 = 1;
      }
      uVar11 = 1;
      while (uVar5 != uVar11) {
        lVar12 = *unaff_x28;
        uVar4 = puVar1[(int)uVar11];
        if (*(int *)(lVar12 + 0xe4) == 0) {
          lVar12 = thunk_FUN_02f6670c();
        }
        if ((0x20 < uVar4) || ((unaff_x27 << ((ulong)uVar4 & 0x3f) & unaff_x21) == 0)) {
          lVar12 = *(long *)PTR_DAT_067dc020;
          if (uVar13 < uVar11) {
            FUN_050f577c(0);
          }
          goto LAB_05063d7c;
        }
        uVar11 = uVar11 + 1;
        if (uVar13 == uVar11) goto LAB_05063d6c;
      }
      goto LAB_0506402c;
    }
LAB_05063d6c:
    lVar12 = *(long *)PTR_DAT_067dc020;
    uVar11 = uVar13;
LAB_05063d7c:
    if ((*(ushort *)(*(long *)(lVar12 + 0x20) + 0x135) & 1) == 0) {
      FUN_02f41e9c();
    }
    uVar13 = uVar13 - uVar11;
    unaff_x26 = (ulong)uVar13;
    if (0x55555554 < uVar10 * -0x55555555 + 0x2aaaaaaa) {
      if (uVar13 != 0) goto LAB_05063fe4;
      goto LAB_05063ff4;
    }
    lVar12 = (long)(int)uVar11 << 1;
    if (uVar13 == 0) goto LAB_05063ff4;
  }
  else {
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar2 = *(undefined8 *)(unaff_x29 + -0x48);
    uVar3 = *(undefined8 *)(unaff_x29 + -0x40);
    FUN_05064048(puVar1,uVar13,uVar2,uVar3,unaff_x29 + -0x14,unaff_x29 + -0x18);
    *(ulong *)(unaff_x29 + -0x50) = (ulong)*(uint *)(unaff_x29 + -0x18);
    if ((*(uint *)(unaff_x29 + -0x18) & 3) != 0) goto LAB_05063fe4;
    lVar12 = *(long *)PTR_DAT_067d5400;
    if ((uint)uVar3 < (uint)*(undefined8 *)(unaff_x29 + -0x50)) {
      FUN_050f577c(0);
    }
    if ((*(ushort *)(*(long *)(lVar12 + 0x20) + 0x135) & 1) == 0) {
      FUN_02f41e9c();
    }
    auVar14 = FUN_04255888(uVar2,*(undefined8 *)(unaff_x29 + -0x50),*(undefined8 *)PTR_DAT_067d5408)
    ;
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar7 = FUN_0505c878(auVar14._0_8_,auVar14._8_8_,*(undefined8 *)(unaff_x29 + -0x28),unaff_w22,
                         unaff_x29 + -0x1c,unaff_x29 + -0x20);
    puVar6 = PTR_DAT_067dc020;
    if ((uVar7 & 1) == 0) goto LAB_05063fe4;
    uVar10 = *(uint *)(unaff_x29 + -0x20);
    uVar11 = *(uint *)(unaff_x29 + -0x14);
    iVar9 = **(int **)(unaff_x29 + -0x30);
    *(long *)(unaff_x29 + -0x40) = (long)(int)uVar11;
    lVar12 = *(long *)puVar6;
    **(int **)(unaff_x29 + -0x30) = uVar10 + iVar9;
    if (uVar13 < uVar11) {
      FUN_050f577c(0);
    }
    if ((*(ushort *)(*(long *)(lVar12 + 0x20) + 0x135) & 1) == 0) {
      FUN_02f41e9c();
    }
    lVar12 = *(long *)PTR_DAT_067dc028;
    if (unaff_w22 < uVar10) {
      FUN_050f577c(0);
    }
    lVar12 = *(long *)(lVar12 + 0x20);
    *(long *)(unaff_x29 + -0x58) = (long)(int)uVar10;
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      FUN_02f41e9c();
    }
    lVar8 = *(long *)(unaff_x29 + -0x40);
    iVar9 = (int)*(long *)(unaff_x29 + -0x58);
    lVar12 = lVar8 << 1;
    uVar13 = uVar13 - (int)lVar8;
    unaff_x26 = (ulong)uVar13;
    unaff_w22 = unaff_w22 - iVar9;
    *(long *)(unaff_x29 + -0x28) = *(long *)(unaff_x29 + -0x28) + *(long *)(unaff_x29 + -0x58);
    if (0x55555554 < iVar9 * -0x55555555 + 0x2aaaaaaaU) {
      if (0 < (int)uVar13) {
        uVar7 = 0;
        goto LAB_05063fa4;
      }
LAB_05063ff4:
      lVar12 = 1;
      goto LAB_05063ff8;
    }
    if (uVar13 == 0) goto LAB_05063ff4;
    *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x50);
  }
  unaff_x23 = (long)puVar1 + lVar12;
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar7 = FUN_0505c878(unaff_x23,unaff_x26,*(undefined8 *)(unaff_x29 + -0x28),unaff_w22,
                       unaff_x29 + -0xc,unaff_x29 + -0x10);
  unaff_x19 = (long)*(int *)(unaff_x29 + -0x10);
  **(int **)(unaff_x29 + -0x30) = *(int *)(unaff_x29 + -0x10) + **(int **)(unaff_x29 + -0x30);
  if ((uVar7 & 1) != 0) goto LAB_05063ff4;
  param_1 = &PTR_DAT_067dc000;
  goto code_r0x05063c78;
LAB_05063fe4:
  lVar12 = 0;
  **(undefined4 **)(unaff_x29 + -0x30) = 0;
  goto LAB_05063ff8;
  while( true ) {
    uVar7 = uVar7 + 1;
    lVar12 = 1;
    if (unaff_x26 <= uVar7) break;
LAB_05063fa4:
    uVar4 = *(ushort *)(unaff_x23 + lVar8 * 2 + (long)(int)uVar5 * 2 + uVar7 * 2);
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if ((0x20 < uVar4) || ((1L << ((ulong)uVar4 & 0x3f) & 0x100002600U) == 0)) goto LAB_05063fe4;
  }
LAB_05063ff8:
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_05064044:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar12);
}


