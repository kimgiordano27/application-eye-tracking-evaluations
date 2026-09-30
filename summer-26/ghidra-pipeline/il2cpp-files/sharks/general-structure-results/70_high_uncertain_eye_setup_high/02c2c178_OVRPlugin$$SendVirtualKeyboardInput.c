/*
FUNCTION_NAME: OVRPlugin$$SendVirtualKeyboardInput
ENTRY_POINT: 02c2c178
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


void OVRPlugin__SendVirtualKeyboardInput(void)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  uint *unaff_x19;
  undefined8 *unaff_x20;
  uint uVar9;
  long *unaff_x23;
  uint unaff_w24;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  int unaff_w28;
  uint uVar14;
  ulong uVar15;
  long in_stack_00000000;
  int iStack0000000000000008;
  int iStack000000000000000c;
  ulong in_stack_00000010;
  uint uStack0000000000000018;
  undefined4 uStack000000000000001c;
  long in_stack_00000028;
  
  uVar9 = -unaff_w28;
  uVar15 = (ulong)uVar9;
  if (iStack0000000000000008 != iStack000000000000000c) {
    unaff_w24 = unaff_w24 ^ 0x80000000;
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar10 = unaff_x20[1];
  uVar5 = *(undefined8 *)unaff_x19;
  uVar12 = (ulong)*(uint *)((long)unaff_x20 + 4);
  unaff_x20[1] = *(undefined8 *)(unaff_x19 + 2);
  *unaff_x20 = uVar5;
  if (*(uint *)((long)unaff_x20 + 4) == 0) {
    if (uVar10 >> 0x20 == 0) {
      if ((int)uVar10 == 0) {
        uVar5 = *unaff_x20;
        *(undefined8 *)(unaff_x19 + 2) = unaff_x20[1];
        *(undefined8 *)unaff_x19 = uVar5;
        uVar9 = unaff_w24 & 0x80000000;
        if (iStack0000000000000008 != iStack000000000000000c) {
          uVar9 = unaff_w24 & 0x80000000 ^ 0x80000000;
        }
        *unaff_x19 = uVar9 | (uint)*(byte *)((long)unaff_x20 + 2) << 0x10;
        goto LAB_02c2c610;
      }
      uVar15 = (ulong)(int)uVar9;
      do {
        if ((int)(uint)uVar15 < 10) {
          lVar13 = *unaff_x23;
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
            lVar13 = *unaff_x23;
          }
          lVar13 = **(long **)(lVar13 + 0xb8);
          if (lVar13 == 0) goto LAB_02c2c6cc;
          if (*(uint *)(lVar13 + 0x18) <= (uint)uVar15) goto LAB_02c2c6d0;
          uVar12 = 0;
          uVar10 = uVar10 * *(uint *)(lVar13 + uVar15 * 4 + 0x20);
          goto LAB_02c2c314;
        }
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        uVar10 = (uVar10 & 0xffffffff) * 1000000000;
        uVar15 = uVar15 - 9;
      } while (uVar10 >> 0x20 == 0);
    }
    lVar13 = (long)(int)uVar15;
    do {
      lVar4 = *unaff_x23;
      if (lVar13 < 9) {
                    /* try { // try from 02c2c214 to 02d2c30f has its CatchHandler @ 02c2c214
                       catch() { ... } // from try @ 02c2c214 with catch @ 02c2c214
                       catch() { ... } // from try @ 02c2c38c with catch @ 02c2c214
                       catch() { ... } // from try @ 02c2c4dc with catch @ 02c2c214
                       catch() { ... } // from try @ 02c2c544 with catch @ 02c2c214 */
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
          lVar4 = *unaff_x23;
        }
        lVar8 = **(long **)(lVar4 + 0xb8);
        if (lVar8 == 0) goto LAB_02c2c6cc;
        if (*(uint *)(lVar8 + 0x18) <= (uint)lVar13) goto LAB_02c2c6d0;
        uVar9 = *(uint *)(lVar8 + lVar13 * 4 + 0x20);
      }
      else {
        uVar9 = 1000000000;
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar12 = (uVar10 & 0xffffffff) * (ulong)uVar9;
      uVar15 = (uVar10 >> 0x20) * (ulong)uVar9 + (uVar12 >> 0x20);
      uVar10 = uVar12 & 0xffffffff | uVar15 << 0x20;
      uVar12 = uVar15 >> 0x20;
      uVar9 = (uint)(uVar15 >> 0x20);
      if (lVar13 < 10) goto LAB_02c2c434;
      lVar13 = lVar13 + -9;
    } while (uVar12 == 0);
    uVar9 = (uint)lVar13;
  }
  lVar13 = (long)(int)uVar9;
  while( true ) {
    lVar4 = *unaff_x23;
    if (lVar13 < 9) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        lVar4 = *unaff_x23;
      }
      lVar8 = **(long **)(lVar4 + 0xb8);
      if (lVar8 == 0) goto LAB_02c2c6cc;
      if (*(uint *)(lVar8 + 0x18) <= (uint)lVar13) goto LAB_02c2c6d0;
      uVar9 = *(uint *)(lVar8 + lVar13 * 4 + 0x20);
    }
    else {
      uVar9 = 1000000000;
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar11 = (uVar10 & 0xffffffff) * (ulong)uVar9;
    uVar15 = (uVar10 >> 0x20) * (ulong)uVar9 + (uVar11 >> 0x20);
    uVar12 = (uVar15 >> 0x20) + (ulong)uVar9 * (uVar12 & 0xffffffff);
    uVar10 = uVar11 & 0xffffffff | uVar15 << 0x20;
    if (uVar12 >> 0x20 != 0) break;
    bVar2 = lVar13 < 10;
    lVar13 = lVar13 + -9;
    if (bVar2) goto LAB_02c2c314;
  }
  uVar14 = (uint)lVar13 - 9;
  in_stack_00000010 = uVar10;
  _uStack0000000000000018 = uVar12;
  uVar9 = 3;
  if (0 < (int)uVar14) {
    do {
      uVar7 = 1000000000;
      if ((int)uVar14 < 9) {
        lVar13 = *unaff_x23;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
          lVar13 = *unaff_x23;
        }
        lVar13 = **(long **)(lVar13 + 0xb8);
        if (lVar13 == 0) {
LAB_02c2c6cc:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar14) {
LAB_02c2c6d0:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        uVar7 = *(uint *)(lVar13 + (ulong)uVar14 * 4 + 0x20);
      }
      uVar10 = 0;
      uVar15 = 0;
      do {
        uVar1 = *(uint *)((long)&stack0x00000010 + uVar15 * 4);
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        uVar12 = uVar10 + (ulong)uVar1 * (ulong)uVar7;
        uVar1 = (int)uVar15 + 1;
        uVar10 = uVar12 >> 0x20;
        *(int *)((long)&stack0x00000010 + uVar15 * 4) = (int)uVar12;
        uVar15 = (ulong)uVar1;
      } while (uVar1 <= uVar9);
      iVar3 = (int)(uVar12 >> 0x20);
      if (iVar3 != 0) {
        uVar9 = uVar9 + 1;
        *(int *)((long)&stack0x00000010 + (ulong)uVar9 * 4) = iVar3;
      }
      uVar7 = uVar14 - 9;
      bVar2 = 8 < (int)uVar14;
      uVar14 = uVar7;
    } while (uVar7 != 0 && bVar2);
  }
  uVar15 = in_stack_00000010;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar10 = unaff_x20[1];
  uVar14 = *(uint *)((long)unaff_x20 + 4);
  if (iStack0000000000000008 == iStack000000000000000c) {
    uVar12 = uVar10 + uVar15;
    uVar7 = uVar14 + uStack0000000000000018;
    if (!CARRY8(uVar10,uVar15)) {
      if (uVar7 < uStack0000000000000018) goto LAB_02c2c550;
      goto LAB_02c2c5b8;
    }
    uVar7 = uVar7 + 1;
    if (uStack0000000000000018 < uVar7) goto LAB_02c2c5b8;
LAB_02c2c550:
    uVar15 = 3;
    do {
      iVar3 = *(int *)((long)&stack0x00000010 + uVar15 * 4);
      *(int *)((long)&stack0x00000010 + uVar15 * 4) = iVar3 + 1;
      if (iVar3 != -1) goto LAB_02c2c5b8;
      uVar14 = (int)uVar15 + 1;
      uVar15 = (ulong)uVar14;
    } while (uVar14 <= uVar9);
    *(undefined4 *)((long)&stack0x00000010 + (ulong)uVar14 * 4) = 1;
  }
  else {
    uVar12 = uVar15 - uVar10;
    uVar7 = uStack0000000000000018 - uVar14;
    if (uVar15 < uVar10) {
      uVar7 = uVar7 - 1;
      if (uStack0000000000000018 <= uVar7) {
LAB_02c2c58c:
        uVar15 = 3;
        do {
          iVar3 = *(int *)((long)&stack0x00000010 + uVar15 * 4);
          *(int *)((long)&stack0x00000010 + uVar15 * 4) = iVar3 + -1;
          uVar15 = (ulong)((int)uVar15 + 1);
        } while (iVar3 == 0);
        if (*(int *)((long)&stack0x00000010 + (ulong)uVar9 * 4) == 0) {
          uVar15 = (ulong)(uVar9 - 1);
          if (uVar9 - 1 < 3) goto LAB_02c2c5f4;
          goto LAB_02c2c5bc;
        }
      }
    }
    else if (uStack0000000000000018 < uVar14) goto LAB_02c2c58c;
LAB_02c2c5b8:
    uVar15 = (ulong)uVar9;
  }
LAB_02c2c5bc:
  _uStack0000000000000018 = CONCAT44(uStack000000000000001c,uVar7);
  in_stack_00000010 = uVar12;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  iVar3 = FUN_02c2e76c(&stack0x00000010,uVar15,unaff_w24 >> 0x10 & 0xff);
  unaff_w24 = unaff_w24 & 0xff00ffff | iVar3 << 0x10;
  uVar12 = in_stack_00000010;
  uVar7 = uStack0000000000000018;
  goto LAB_02c2c5f4;
LAB_02c2c314:
  uVar9 = (uint)uVar12;
LAB_02c2c434:
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar15 = unaff_x20[1];
  if (iStack0000000000000008 == iStack000000000000000c) {
    uVar12 = uVar15 + uVar10;
    uVar14 = *(int *)((long)unaff_x20 + 4) + uVar9;
    if (CARRY8(uVar15,uVar10)) {
      uVar7 = uVar14 + 1;
      uVar14 = uVar7;
      if (uVar7 <= uVar9) {
LAB_02c2c4a0:
        if ((unaff_w24 & 0xff0000) == 0) {
          thunk_FUN_01851c08(PTR_DAT_037f87b0);
          uVar5 = thunk_FUN_01861bbc();
          uVar6 = thunk_FUN_01851c08(PTR_DAT_03809d90);
          FUN_02bde04c(uVar5,uVar6,0);
          uVar6 = thunk_FUN_01851c08(PTR_DAT_0380bd78);
                    /* WARNING: Subroutine does not return */
          FUN_017fc474(uVar5,uVar6);
        }
        uVar7 = (uint)(((ulong)uVar14 | 0x100000000) / 10);
        uVar11 = (uVar12 >> 0x20 | (ulong)(uVar14 + uVar7 * -10) << 0x20) / 10;
        uVar15 = uVar12 & 0xfffffffe |
                 (ulong)(uint)((int)(uVar12 >> 0x20) + (int)uVar11 * -10) << 0x20;
        uVar10 = uVar15 / 10;
        uVar9 = (int)uVar12 + (int)uVar10 * -10;
        unaff_w24 = unaff_w24 - 0x10000;
        uVar12 = uVar11 << 0x20 | uVar15 / 10 & 0xffffffff;
        if ((4 < uVar9) &&
           ((((uVar10 & 1) != 0 || (uVar9 != 5)) &&
            (bVar2 = uVar12 == 0xffffffffffffffff, uVar12 = uVar12 + 1, bVar2)))) {
          uVar7 = uVar7 + 1;
        }
      }
    }
    else {
      uVar7 = uVar14;
      if (uVar14 < uVar9) goto LAB_02c2c4a0;
    }
  }
  else {
    uVar12 = uVar10 - uVar15;
    uVar14 = uVar9 - *(uint *)((long)unaff_x20 + 4);
    if (uVar10 < uVar15) {
      uVar7 = uVar14 - 1;
      if (uVar9 <= uVar7) {
        unaff_w24 = unaff_w24 ^ 0x80000000;
        uVar12 = -uVar12;
        uVar7 = -uVar14;
      }
    }
    else {
      uVar7 = uVar14;
      if (uVar9 < *(uint *)((long)unaff_x20 + 4)) {
        bVar2 = uVar12 != 0;
        uVar7 = -uVar14;
        unaff_w24 = unaff_w24 ^ 0x80000000;
        uVar12 = -uVar12;
        if (bVar2) {
          uVar7 = ~uVar14;
        }
      }
    }
  }
LAB_02c2c5f4:
  *unaff_x19 = unaff_w24;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  unaff_x19[1] = uVar7;
  *(ulong *)(unaff_x19 + 2) = uVar12;
LAB_02c2c610:
  if (*(long *)(in_stack_00000000 + 0x28) == in_stack_00000028) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


