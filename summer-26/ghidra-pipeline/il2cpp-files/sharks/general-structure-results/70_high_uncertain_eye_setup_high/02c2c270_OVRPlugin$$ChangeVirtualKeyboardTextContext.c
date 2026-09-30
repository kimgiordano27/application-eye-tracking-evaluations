/*
FUNCTION_NAME: OVRPlugin$$ChangeVirtualKeyboardTextContext
ENTRY_POINT: 02c2c270
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__ChangeVirtualKeyboardTextContext(ulong param_1)

{
  uint uVar1;
  char in_NG;
  char in_OV;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *unaff_x19;
  long unaff_x20;
  uint uVar12;
  long *unaff_x23;
  uint unaff_w24;
  ulong unaff_x26;
  ulong uVar13;
  long unaff_x27;
  long lVar14;
  uint uVar15;
  long unaff_x28;
  long in_stack_00000000;
  int iStack0000000000000008;
  int iStack000000000000000c;
  ulong in_stack_00000010;
  uint uStack0000000000000018;
  undefined4 uStack000000000000001c;
  long in_stack_00000028;
  
  while (in_NG == in_OV) {
    lVar14 = unaff_x27 + -9;
    if (param_1 != 0) {
      param_1 = param_1 & 0xffffffff;
      lVar14 = (long)(int)(uint)lVar14;
      goto LAB_02c2c288;
    }
    lVar4 = *unaff_x23;
    if (lVar14 < 9) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        lVar4 = *unaff_x23;
      }
      lVar8 = **(long **)(lVar4 + 0xb8);
      if (lVar8 == 0) goto LAB_02c2c6cc;
      if (*(uint *)(lVar8 + 0x18) <= (uint)lVar14) goto LAB_02c2c6d0;
      uVar12 = *(uint *)(lVar8 + lVar14 * 4 + 0x20);
    }
    else {
      uVar12 = 1000000000;
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar9 = (unaff_x26 & 0xffffffff) * (ulong)uVar12;
    param_1 = (unaff_x26 >> 0x20) * (ulong)uVar12 + (uVar9 >> 0x20);
    unaff_x26 = uVar9 & 0xffffffff | param_1 << 0x20;
    in_OV = SBORROW8(lVar14,10);
    param_1 = param_1 >> 0x20;
    in_NG = unaff_x27 + -0x13 < 0;
    unaff_x27 = lVar14;
  }
  param_1 = param_1 & 0xffffffff;
  in_stack_00000000 = unaff_x28;
LAB_02c2c434:
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar9 = *(ulong *)(unaff_x20 + 8);
  uVar12 = (uint)param_1;
  if (iStack0000000000000008 == iStack000000000000000c) {
    uVar10 = uVar9 + unaff_x26;
    uVar15 = *(int *)(unaff_x20 + 4) + uVar12;
    if (CARRY8(uVar9,unaff_x26)) {
      uVar7 = uVar15 + 1;
      uVar15 = uVar7;
      if (uVar12 < uVar7) goto LAB_02c2c5f4;
    }
    else {
      uVar7 = uVar15;
      if (uVar12 <= uVar15) goto LAB_02c2c5f4;
    }
    if ((unaff_w24 & 0xff0000) == 0) {
      thunk_FUN_01851c08(PTR_DAT_037f87b0);
      uVar5 = thunk_FUN_01861bbc();
      uVar6 = thunk_FUN_01851c08(PTR_DAT_03809d90);
      FUN_02bde04c(uVar5,uVar6,0);
      uVar6 = thunk_FUN_01851c08(PTR_DAT_0380bd78);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar5,uVar6);
    }
    uVar7 = (uint)(((ulong)uVar15 | 0x100000000) / 10);
    uVar11 = (uVar10 >> 0x20 | (ulong)(uVar15 + uVar7 * -10) << 0x20) / 10;
    uVar9 = uVar10 & 0xfffffffe | (ulong)(uint)((int)(uVar10 >> 0x20) + (int)uVar11 * -10) << 0x20;
    uVar13 = uVar9 / 10;
    uVar12 = (int)uVar10 + (int)uVar13 * -10;
    unaff_w24 = unaff_w24 - 0x10000;
    uVar10 = uVar11 << 0x20 | uVar9 / 10 & 0xffffffff;
    if ((4 < uVar12) &&
       ((((uVar13 & 1) != 0 || (uVar12 != 5)) &&
        (bVar2 = uVar10 == 0xffffffffffffffff, uVar10 = uVar10 + 1, bVar2)))) {
      uVar7 = uVar7 + 1;
    }
  }
  else {
    uVar10 = unaff_x26 - uVar9;
    uVar15 = uVar12 - *(uint *)(unaff_x20 + 4);
    if (unaff_x26 < uVar9) {
      uVar7 = uVar15 - 1;
      if (uVar12 <= uVar7) {
        unaff_w24 = unaff_w24 ^ 0x80000000;
        uVar10 = -uVar10;
        uVar7 = -uVar15;
      }
    }
    else {
      uVar7 = uVar15;
      if (uVar12 < *(uint *)(unaff_x20 + 4)) {
        bVar2 = uVar10 != 0;
        uVar7 = -uVar15;
        unaff_w24 = unaff_w24 ^ 0x80000000;
        uVar10 = -uVar10;
        if (bVar2) {
          uVar7 = ~uVar15;
        }
      }
    }
  }
  goto LAB_02c2c5f4;
LAB_02c2c288:
  lVar4 = *unaff_x23;
  if (lVar14 < 9) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar4 = *unaff_x23;
    }
    lVar8 = **(long **)(lVar4 + 0xb8);
    if (lVar8 == 0) goto LAB_02c2c6cc;
    if (*(uint *)(lVar8 + 0x18) <= (uint)lVar14) goto LAB_02c2c6d0;
    uVar12 = *(uint *)(lVar8 + lVar14 * 4 + 0x20);
  }
  else {
    uVar12 = 1000000000;
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar13 = (unaff_x26 & 0xffffffff) * (ulong)uVar12;
  uVar9 = (unaff_x26 >> 0x20) * (ulong)uVar12 + (uVar13 >> 0x20);
  param_1 = (uVar9 >> 0x20) + (ulong)uVar12 * (param_1 & 0xffffffff);
  unaff_x26 = uVar13 & 0xffffffff | uVar9 << 0x20;
  if (param_1 >> 0x20 == 0) {
                    /* try { // try from 02c2c310 to 02d2c323 has its CatchHandler @ 02c2c4ac */
    bVar2 = lVar14 < 10;
    lVar14 = lVar14 + -9;
    if (bVar2) goto LAB_02c2c434;
    goto LAB_02c2c288;
  }
  uVar15 = (uint)lVar14 - 9;
  in_stack_00000010 = unaff_x26;
  _uStack0000000000000018 = param_1;
  uVar12 = 3;
  if (0 < (int)uVar15) {
    do {
      uVar7 = 1000000000;
      if ((int)uVar15 < 9) {
        lVar14 = *unaff_x23;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
          lVar14 = *unaff_x23;
        }
        lVar14 = **(long **)(lVar14 + 0xb8);
        if (lVar14 == 0) {
LAB_02c2c6cc:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        if (*(uint *)(lVar14 + 0x18) <= uVar15) {
LAB_02c2c6d0:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        uVar7 = *(uint *)(lVar14 + (ulong)uVar15 * 4 + 0x20);
      }
      uVar13 = 0;
      uVar9 = 0;
      do {
        uVar1 = *(uint *)((long)&stack0x00000010 + uVar9 * 4);
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        uVar10 = uVar13 + (ulong)uVar1 * (ulong)uVar7;
        uVar1 = (int)uVar9 + 1;
        uVar13 = uVar10 >> 0x20;
        *(int *)((long)&stack0x00000010 + uVar9 * 4) = (int)uVar10;
        uVar9 = (ulong)uVar1;
      } while (uVar1 <= uVar12);
      iVar3 = (int)(uVar10 >> 0x20);
      if (iVar3 != 0) {
        uVar12 = uVar12 + 1;
        *(int *)((long)&stack0x00000010 + (ulong)uVar12 * 4) = iVar3;
      }
      uVar7 = uVar15 - 9;
      bVar2 = 8 < (int)uVar15;
      uVar15 = uVar7;
    } while (uVar7 != 0 && bVar2);
  }
  uVar9 = in_stack_00000010;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar13 = *(ulong *)(unaff_x20 + 8);
  uVar15 = *(uint *)(unaff_x20 + 4);
  if (iStack0000000000000008 == iStack000000000000000c) {
    uVar10 = uVar13 + uVar9;
    uVar7 = uVar15 + uStack0000000000000018;
    if (!CARRY8(uVar13,uVar9)) {
      if (uVar7 < uStack0000000000000018) goto LAB_02c2c550;
      goto LAB_02c2c5b8;
    }
    uVar7 = uVar7 + 1;
    if (uStack0000000000000018 < uVar7) goto LAB_02c2c5b8;
LAB_02c2c550:
    uVar9 = 3;
    do {
      iVar3 = *(int *)((long)&stack0x00000010 + uVar9 * 4);
      *(int *)((long)&stack0x00000010 + uVar9 * 4) = iVar3 + 1;
      if (iVar3 != -1) goto LAB_02c2c5b8;
      uVar15 = (int)uVar9 + 1;
      uVar9 = (ulong)uVar15;
    } while (uVar15 <= uVar12);
    *(undefined4 *)((long)&stack0x00000010 + (ulong)uVar15 * 4) = 1;
  }
  else {
    uVar10 = uVar9 - uVar13;
    uVar7 = uStack0000000000000018 - uVar15;
    if (uVar9 < uVar13) {
      uVar7 = uVar7 - 1;
      if (uStack0000000000000018 <= uVar7) {
LAB_02c2c58c:
        uVar9 = 3;
        do {
          iVar3 = *(int *)((long)&stack0x00000010 + uVar9 * 4);
          *(int *)((long)&stack0x00000010 + uVar9 * 4) = iVar3 + -1;
          uVar9 = (ulong)((int)uVar9 + 1);
        } while (iVar3 == 0);
        if (*(int *)((long)&stack0x00000010 + (ulong)uVar12 * 4) == 0) {
          uVar9 = (ulong)(uVar12 - 1);
          if (uVar12 - 1 < 3) goto LAB_02c2c5f4;
          goto LAB_02c2c5bc;
        }
      }
    }
    else if (uStack0000000000000018 < uVar15) goto LAB_02c2c58c;
LAB_02c2c5b8:
    uVar9 = (ulong)uVar12;
  }
LAB_02c2c5bc:
  _uStack0000000000000018 = CONCAT44(uStack000000000000001c,uVar7);
  in_stack_00000010 = uVar10;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  iVar3 = FUN_02c2e76c(&stack0x00000010,uVar9,unaff_w24 >> 0x10 & 0xff);
  unaff_w24 = unaff_w24 & 0xff00ffff | iVar3 << 0x10;
  uVar10 = in_stack_00000010;
  uVar7 = uStack0000000000000018;
LAB_02c2c5f4:
  *unaff_x19 = unaff_w24;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  unaff_x19[1] = uVar7;
  *(ulong *)(unaff_x19 + 2) = uVar10;
  if (*(long *)(in_stack_00000000 + 0x28) == in_stack_00000028) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


