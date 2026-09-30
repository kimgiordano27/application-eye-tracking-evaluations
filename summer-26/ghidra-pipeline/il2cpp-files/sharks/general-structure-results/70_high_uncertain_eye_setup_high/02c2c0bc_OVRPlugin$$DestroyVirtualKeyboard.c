/*
FUNCTION_NAME: OVRPlugin$$DestroyVirtualKeyboard
ENTRY_POINT: 02c2c0bc
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


void OVRPlugin__DestroyVirtualKeyboard(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  uint uStack000000000000000c;
  ulong in_stack_00000010;
  uint uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  long lStack0000000000000028;
  
  puVar3 = PTR_DAT_0380bcc8;
  lVar2 = tpidr_el0;
  lStack0000000000000028 = *(long *)(lVar2 + 0x28);
  if ((DAT_03a25f96 & 1) == 0) {
    FUN_017fc350(PTR_DAT_0380bcc8);
    DAT_03a25f96 = 1;
  }
  in_stack_00000010 = 0;
  _uStack0000000000000018 = 0;
  in_stack_00000020 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar14 = *param_1;
  uVar18 = param_1[1];
  uVar15 = *(ulong *)(param_1 + 2);
  uStack000000000000000c = param_3 & 1;
  uVar13 = *param_2 ^ uVar14;
  uVar9 = uVar13 >> 0x1f;
  if ((uVar13 & 0xff0000) == 0) goto LAB_02c2c434;
  uVar11 = *param_2 & 0xff0000 | uVar14 & 0x80000000;
  iVar5 = uVar11 - uVar14;
  uVar13 = iVar5 >> 0x10;
  if (iVar5 < 0) {
    uVar13 = -uVar13;
    if (uVar9 != uStack000000000000000c) {
      uVar14 = uVar14 ^ 0x80000000;
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar15 = *(ulong *)(param_2 + 2);
    uVar7 = *(undefined8 *)param_1;
    uVar18 = param_2[1];
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)param_2 = uVar7;
    uVar11 = uVar14;
  }
  uVar14 = uVar11;
  uVar16 = (ulong)uVar18;
  if (uVar18 == 0) {
    uVar19 = (ulong)uVar13;
    if (uVar15 >> 0x20 == 0) {
      if ((int)uVar15 == 0) {
        uVar7 = *(undefined8 *)param_2;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)param_1 = uVar7;
        uVar13 = uVar14 & 0x80000000;
        if (uVar9 != uStack000000000000000c) {
          uVar13 = uVar14 & 0x80000000 ^ 0x80000000;
        }
        *param_1 = uVar13 | (uint)*(byte *)((long)param_2 + 2) << 0x10;
        goto LAB_02c2c610;
      }
      uVar19 = (ulong)(int)uVar13;
      do {
        if ((int)(uint)uVar19 < 10) {
          lVar17 = *(long *)puVar3;
          if (*(int *)(lVar17 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
            lVar17 = *(long *)puVar3;
          }
          lVar17 = **(long **)(lVar17 + 0xb8);
          if (lVar17 == 0) goto LAB_02c2c6cc;
          if (*(uint *)(lVar17 + 0x18) <= (uint)uVar19) goto LAB_02c2c6d0;
          uVar16 = 0;
          uVar15 = uVar15 * *(uint *)(lVar17 + uVar19 * 4 + 0x20);
          goto LAB_02c2c314;
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        uVar15 = (uVar15 & 0xffffffff) * 1000000000;
        uVar19 = uVar19 - 9;
      } while (uVar15 >> 0x20 == 0);
    }
    lVar17 = (long)(int)uVar19;
    do {
      lVar6 = *(long *)puVar3;
      if (lVar17 < 9) {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
          lVar6 = *(long *)puVar3;
        }
        lVar10 = **(long **)(lVar6 + 0xb8);
        if (lVar10 == 0) goto LAB_02c2c6cc;
        if (*(uint *)(lVar10 + 0x18) <= (uint)lVar17) goto LAB_02c2c6d0;
        uVar13 = *(uint *)(lVar10 + lVar17 * 4 + 0x20);
      }
      else {
        uVar13 = 1000000000;
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar16 = (uVar15 & 0xffffffff) * (ulong)uVar13;
      uVar19 = (uVar15 >> 0x20) * (ulong)uVar13 + (uVar16 >> 0x20);
      uVar15 = uVar16 & 0xffffffff | uVar19 << 0x20;
      uVar16 = uVar19 >> 0x20;
      uVar18 = (uint)(uVar19 >> 0x20);
      if (lVar17 < 10) goto LAB_02c2c434;
      lVar17 = lVar17 + -9;
    } while (uVar16 == 0);
    uVar13 = (uint)lVar17;
  }
  lVar17 = (long)(int)uVar13;
  while( true ) {
    lVar6 = *(long *)puVar3;
    if (lVar17 < 9) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        lVar6 = *(long *)puVar3;
      }
      lVar10 = **(long **)(lVar6 + 0xb8);
      if (lVar10 == 0) goto LAB_02c2c6cc;
      if (*(uint *)(lVar10 + 0x18) <= (uint)lVar17) goto LAB_02c2c6d0;
      uVar13 = *(uint *)(lVar10 + lVar17 * 4 + 0x20);
    }
    else {
      uVar13 = 1000000000;
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar19 = (uVar15 & 0xffffffff) * (ulong)uVar13;
    uVar15 = (uVar15 >> 0x20) * (ulong)uVar13 + (uVar19 >> 0x20);
    uVar16 = (uVar15 >> 0x20) + (ulong)uVar13 * (uVar16 & 0xffffffff);
    uVar15 = uVar19 & 0xffffffff | uVar15 << 0x20;
    if (uVar16 >> 0x20 != 0) break;
    bVar4 = lVar17 < 10;
    lVar17 = lVar17 + -9;
    if (bVar4) goto LAB_02c2c314;
  }
  uVar18 = (uint)lVar17 - 9;
  in_stack_00000010 = uVar15;
  _uStack0000000000000018 = uVar16;
  uVar13 = 3;
  if (0 < (int)uVar18) {
    do {
      uVar11 = 1000000000;
      if ((int)uVar18 < 9) {
        lVar17 = *(long *)puVar3;
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
          lVar17 = *(long *)puVar3;
        }
        lVar17 = **(long **)(lVar17 + 0xb8);
        if (lVar17 == 0) {
LAB_02c2c6cc:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        if (*(uint *)(lVar17 + 0x18) <= uVar18) {
LAB_02c2c6d0:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        uVar11 = *(uint *)(lVar17 + (ulong)uVar18 * 4 + 0x20);
      }
      uVar16 = 0;
      uVar15 = 0;
      do {
        uVar1 = *(uint *)((long)&stack0x00000010 + uVar15 * 4);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        uVar19 = uVar16 + (ulong)uVar1 * (ulong)uVar11;
        uVar1 = (int)uVar15 + 1;
        uVar16 = uVar19 >> 0x20;
        *(int *)((long)&stack0x00000010 + uVar15 * 4) = (int)uVar19;
        uVar15 = (ulong)uVar1;
      } while (uVar1 <= uVar13);
      iVar5 = (int)(uVar19 >> 0x20);
      if (iVar5 != 0) {
        uVar13 = uVar13 + 1;
        *(int *)((long)&stack0x00000010 + (ulong)uVar13 * 4) = iVar5;
      }
      uVar11 = uVar18 - 9;
      bVar4 = 8 < (int)uVar18;
      uVar18 = uVar11;
    } while (uVar11 != 0 && bVar4);
  }
  uVar15 = in_stack_00000010;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar16 = *(ulong *)(param_2 + 2);
  uVar18 = param_2[1];
  if (uVar9 == uStack000000000000000c) {
    uVar19 = uVar16 + uVar15;
    uVar9 = uVar18 + uStack0000000000000018;
    if (CARRY8(uVar16,uVar15)) {
      uVar9 = uVar9 + 1;
      if (uStack0000000000000018 < uVar9) goto LAB_02c2c5b8;
LAB_02c2c550:
      uVar15 = 3;
      do {
        iVar5 = *(int *)((long)&stack0x00000010 + uVar15 * 4);
        *(int *)((long)&stack0x00000010 + uVar15 * 4) = iVar5 + 1;
        if (iVar5 != -1) goto LAB_02c2c5b8;
        uVar18 = (int)uVar15 + 1;
        uVar15 = (ulong)uVar18;
      } while (uVar18 <= uVar13);
      *(undefined4 *)((long)&stack0x00000010 + (ulong)uVar18 * 4) = 1;
    }
    else {
      if (uVar9 < uStack0000000000000018) goto LAB_02c2c550;
LAB_02c2c5b8:
      uVar15 = (ulong)uVar13;
    }
LAB_02c2c5bc:
    _uStack0000000000000018 = CONCAT44(uStack000000000000001c,uVar9);
    in_stack_00000010 = uVar19;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    iVar5 = FUN_02c2e76c(&stack0x00000010,uVar15,uVar14 >> 0x10 & 0xff);
    uVar14 = uVar14 & 0xff00ffff | iVar5 << 0x10;
    uVar19 = in_stack_00000010;
    uVar9 = uStack0000000000000018;
  }
  else {
    uVar19 = uVar15 - uVar16;
    uVar9 = uStack0000000000000018 - uVar18;
    if (uVar16 <= uVar15) {
      if (uStack0000000000000018 < uVar18) goto LAB_02c2c58c;
      goto LAB_02c2c5b8;
    }
    uVar9 = uVar9 - 1;
    if (uVar9 < uStack0000000000000018) goto LAB_02c2c5b8;
LAB_02c2c58c:
    uVar15 = 3;
    do {
      iVar5 = *(int *)((long)&stack0x00000010 + uVar15 * 4);
      *(int *)((long)&stack0x00000010 + uVar15 * 4) = iVar5 + -1;
      uVar15 = (ulong)((int)uVar15 + 1);
    } while (iVar5 == 0);
    if (*(int *)((long)&stack0x00000010 + (ulong)uVar13 * 4) != 0) goto LAB_02c2c5b8;
    uVar15 = (ulong)(uVar13 - 1);
    if (2 < uVar13 - 1) goto LAB_02c2c5bc;
  }
LAB_02c2c5f4:
  *param_1 = uVar14;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  param_1[1] = uVar9;
  *(ulong *)(param_1 + 2) = uVar19;
LAB_02c2c610:
  if (*(long *)(lVar2 + 0x28) != lStack0000000000000028) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_02c2c314:
  uVar18 = (uint)uVar16;
LAB_02c2c434:
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar16 = *(ulong *)(param_2 + 2);
  if (uVar9 == uStack000000000000000c) {
    uVar19 = uVar16 + uVar15;
    uVar13 = param_2[1] + uVar18;
    if (CARRY8(uVar16,uVar15)) {
      uVar9 = uVar13 + 1;
      uVar13 = uVar9;
      if (uVar9 <= uVar18) {
LAB_02c2c4a0:
        if ((uVar14 & 0xff0000) == 0) {
          thunk_FUN_01851c08(PTR_DAT_037f87b0);
          uVar7 = thunk_FUN_01861bbc();
          uVar8 = thunk_FUN_01851c08(PTR_DAT_03809d90);
          FUN_02bde04c(uVar7,uVar8,0);
          uVar8 = thunk_FUN_01851c08(PTR_DAT_0380bd78);
                    /* WARNING: Subroutine does not return */
          FUN_017fc474(uVar7,uVar8);
        }
        uVar9 = (uint)(((ulong)uVar13 | 0x100000000) / 10);
        uVar12 = (uVar19 >> 0x20 | (ulong)(uVar13 + uVar9 * -10) << 0x20) / 10;
        uVar15 = uVar19 & 0xfffffffe |
                 (ulong)(uint)((int)(uVar19 >> 0x20) + (int)uVar12 * -10) << 0x20;
        uVar16 = uVar15 / 10;
        uVar13 = (int)uVar19 + (int)uVar16 * -10;
        uVar14 = uVar14 - 0x10000;
        uVar19 = uVar12 << 0x20 | uVar15 / 10 & 0xffffffff;
        if ((4 < uVar13) &&
           ((((uVar16 & 1) != 0 || (uVar13 != 5)) &&
            (bVar4 = uVar19 == 0xffffffffffffffff, uVar19 = uVar19 + 1, bVar4)))) {
          uVar9 = uVar9 + 1;
        }
      }
    }
    else {
      uVar9 = uVar13;
      if (uVar13 < uVar18) goto LAB_02c2c4a0;
    }
  }
  else {
    uVar19 = uVar15 - uVar16;
    uVar13 = uVar18 - param_2[1];
    if (uVar15 < uVar16) {
      uVar9 = uVar13 - 1;
      if (uVar18 <= uVar9) {
        uVar14 = uVar14 ^ 0x80000000;
        uVar19 = -uVar19;
        uVar9 = -uVar13;
      }
    }
    else {
      uVar9 = uVar13;
      if (uVar18 < param_2[1]) {
        bVar4 = uVar19 != 0;
        uVar9 = -uVar13;
        uVar14 = uVar14 ^ 0x80000000;
        uVar19 = -uVar19;
        if (bVar4) {
          uVar9 = ~uVar13;
        }
      }
    }
  }
  goto LAB_02c2c5f4;
}


