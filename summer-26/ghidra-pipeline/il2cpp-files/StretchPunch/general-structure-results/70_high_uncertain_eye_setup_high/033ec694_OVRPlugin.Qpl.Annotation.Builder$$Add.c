/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Add
ENTRY_POINT: 033ec694
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_Qpl_Annotation_Builder__Add(void)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint in_w8;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint *unaff_x19;
  undefined8 *unaff_x20;
  uint uVar11;
  long *unaff_x23;
  uint unaff_w24;
  uint uVar12;
  ulong unaff_x26;
  ulong uVar13;
  uint uVar14;
  ulong unaff_x27;
  long lVar15;
  long unaff_x28;
  ulong uVar16;
  int iStack0000000000000008;
  int iStack000000000000000c;
  ulong in_stack_00000010;
  uint uStack0000000000000018;
  undefined4 uStack000000000000001c;
  long in_stack_00000028;
  
  uVar12 = in_w8 & 0xff0000 | unaff_w24 & 0x80000000;
  uVar11 = (int)(uVar12 - unaff_w24) >> 0x10;
  if ((int)(uVar12 - unaff_w24) < 0) {
    uVar11 = -uVar11;
    uVar12 = unaff_w24;
    if (iStack0000000000000008 != iStack000000000000000c) {
      uVar12 = unaff_w24 ^ 0x80000000;
    }
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    unaff_x26 = unaff_x20[1];
    uVar5 = *(undefined8 *)unaff_x19;
    uVar14 = *(uint *)((long)unaff_x20 + 4);
    unaff_x27 = (ulong)uVar14;
    unaff_x20[1] = *(undefined8 *)(unaff_x19 + 2);
    *unaff_x20 = uVar5;
  }
  else {
    uVar14 = (uint)unaff_x27;
  }
  if (uVar14 == 0) {
    uVar16 = (ulong)uVar11;
    if (unaff_x26 >> 0x20 == 0) {
      if ((int)unaff_x26 == 0) {
        uVar5 = *unaff_x20;
        *(undefined8 *)(unaff_x19 + 2) = unaff_x20[1];
        *(undefined8 *)unaff_x19 = uVar5;
        uVar11 = uVar12 & 0x80000000;
        if (iStack0000000000000008 != iStack000000000000000c) {
          uVar11 = uVar12 & 0x80000000 ^ 0x80000000;
        }
        *unaff_x19 = uVar11 | (uint)*(byte *)((long)unaff_x20 + 2) << 0x10;
        goto LAB_033ecb54;
      }
      uVar16 = (ulong)(int)uVar11;
      do {
        if ((int)(uint)uVar16 < 10) {
          lVar15 = *unaff_x23;
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
            lVar15 = *unaff_x23;
          }
          lVar15 = **(long **)(lVar15 + 0xb8);
          if (lVar15 == 0) goto LAB_033ecc10;
          if (*(uint *)(lVar15 + 0x18) <= (uint)uVar16) goto LAB_033ecc14;
          unaff_x27 = 0;
          unaff_x26 = unaff_x26 * *(uint *)(lVar15 + uVar16 * 4 + 0x20);
          goto LAB_033ec858;
        }
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        unaff_x26 = (unaff_x26 & 0xffffffff) * 1000000000;
        uVar16 = uVar16 - 9;
      } while (unaff_x26 >> 0x20 == 0);
    }
    lVar15 = (long)(int)uVar16;
    do {
      lVar4 = *unaff_x23;
      if (lVar15 < 9) {
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar4 = *unaff_x23;
        }
        lVar8 = **(long **)(lVar4 + 0xb8);
        if (lVar8 == 0) goto LAB_033ecc10;
        if (*(uint *)(lVar8 + 0x18) <= (uint)lVar15) goto LAB_033ecc14;
        uVar11 = *(uint *)(lVar8 + lVar15 * 4 + 0x20);
      }
      else {
        uVar11 = 1000000000;
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar13 = (unaff_x26 & 0xffffffff) * (ulong)uVar11;
      uVar16 = (unaff_x26 >> 0x20) * (ulong)uVar11 + (uVar13 >> 0x20);
      unaff_x26 = uVar13 & 0xffffffff | uVar16 << 0x20;
      unaff_x27 = uVar16 >> 0x20;
      uVar11 = (uint)(uVar16 >> 0x20);
      if (lVar15 < 10) goto LAB_033ec978;
      lVar15 = lVar15 + -9;
    } while (unaff_x27 == 0);
    uVar11 = (uint)lVar15;
  }
  lVar15 = (long)(int)uVar11;
  while( true ) {
    lVar4 = *unaff_x23;
    if (lVar15 < 9) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar4 = *unaff_x23;
      }
      lVar8 = **(long **)(lVar4 + 0xb8);
      if (lVar8 == 0) goto LAB_033ecc10;
      if (*(uint *)(lVar8 + 0x18) <= (uint)lVar15) goto LAB_033ecc14;
      uVar11 = *(uint *)(lVar8 + lVar15 * 4 + 0x20);
    }
    else {
      uVar11 = 1000000000;
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar13 = (unaff_x26 & 0xffffffff) * (ulong)uVar11;
    uVar16 = (unaff_x26 >> 0x20) * (ulong)uVar11 + (uVar13 >> 0x20);
    unaff_x27 = (uVar16 >> 0x20) + (ulong)uVar11 * (unaff_x27 & 0xffffffff);
    unaff_x26 = uVar13 & 0xffffffff | uVar16 << 0x20;
    if (unaff_x27 >> 0x20 != 0) break;
    bVar2 = lVar15 < 10;
    lVar15 = lVar15 + -9;
    if (bVar2) goto LAB_033ec858;
  }
  uVar14 = (uint)lVar15 - 9;
  in_stack_00000010 = unaff_x26;
  _uStack0000000000000018 = unaff_x27;
  uVar11 = 3;
  if (0 < (int)uVar14) {
    do {
      uVar7 = 1000000000;
      if ((int)uVar14 < 9) {
        lVar15 = *unaff_x23;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar15 = *unaff_x23;
        }
        lVar15 = **(long **)(lVar15 + 0xb8);
        if (lVar15 == 0) {
LAB_033ecc10:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar14) {
LAB_033ecc14:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        uVar7 = *(uint *)(lVar15 + (ulong)uVar14 * 4 + 0x20);
      }
      uVar13 = 0;
      uVar16 = 0;
      do {
        uVar1 = *(uint *)((long)&stack0x00000010 + uVar16 * 4);
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar9 = uVar13 + (ulong)uVar1 * (ulong)uVar7;
        uVar1 = (int)uVar16 + 1;
        uVar13 = uVar9 >> 0x20;
        *(int *)((long)&stack0x00000010 + uVar16 * 4) = (int)uVar9;
        uVar16 = (ulong)uVar1;
      } while (uVar1 <= uVar11);
      iVar3 = (int)(uVar9 >> 0x20);
      if (iVar3 != 0) {
        uVar11 = uVar11 + 1;
        *(int *)((long)&stack0x00000010 + (ulong)uVar11 * 4) = iVar3;
      }
      uVar7 = uVar14 - 9;
      bVar2 = 8 < (int)uVar14;
      uVar14 = uVar7;
    } while (uVar7 != 0 && bVar2);
  }
  uVar16 = in_stack_00000010;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar13 = unaff_x20[1];
  uVar14 = *(uint *)((long)unaff_x20 + 4);
  if (iStack0000000000000008 == iStack000000000000000c) {
    uVar9 = uVar13 + uVar16;
    uVar7 = uVar14 + uStack0000000000000018;
    if (!CARRY8(uVar13,uVar16)) {
      if (uVar7 < uStack0000000000000018) goto OVRPlugin_OVRP_0_1_0__ovrp_GetEyeTextureSize;
      goto LAB_033ecafc;
    }
    uVar7 = uVar7 + 1;
    if (uStack0000000000000018 < uVar7) goto LAB_033ecafc;
OVRPlugin_OVRP_0_1_0__ovrp_GetEyeTextureSize:
    uVar16 = 3;
    do {
      iVar3 = *(int *)((long)&stack0x00000010 + uVar16 * 4);
      *(int *)((long)&stack0x00000010 + uVar16 * 4) = iVar3 + 1;
      if (iVar3 != -1) goto LAB_033ecafc;
      uVar14 = (int)uVar16 + 1;
      uVar16 = (ulong)uVar14;
    } while (uVar14 <= uVar11);
    *(undefined4 *)((long)&stack0x00000010 + (ulong)uVar14 * 4) = 1;
  }
  else {
    uVar9 = uVar16 - uVar13;
    uVar7 = uStack0000000000000018 - uVar14;
    if (uVar16 < uVar13) {
      uVar7 = uVar7 - 1;
      if (uStack0000000000000018 <= uVar7) {
LAB_033ecad0:
        uVar16 = 3;
        do {
          iVar3 = *(int *)((long)&stack0x00000010 + uVar16 * 4);
          *(int *)((long)&stack0x00000010 + uVar16 * 4) = iVar3 + -1;
          uVar16 = (ulong)((int)uVar16 + 1);
        } while (iVar3 == 0);
        if (*(int *)((long)&stack0x00000010 + (ulong)uVar11 * 4) == 0) {
          uVar16 = (ulong)(uVar11 - 1);
          if (uVar11 - 1 < 3) goto LAB_033ecb38;
          goto LAB_033ecb00;
        }
      }
    }
    else if (uStack0000000000000018 < uVar14) goto LAB_033ecad0;
LAB_033ecafc:
    uVar16 = (ulong)uVar11;
  }
LAB_033ecb00:
  _uStack0000000000000018 = CONCAT44(uStack000000000000001c,uVar7);
  in_stack_00000010 = uVar9;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  iVar3 = FUN_033f1594(&stack0x00000010,uVar16,uVar12 >> 0x10 & 0xff);
  uVar12 = uVar12 & 0xff00ffff | iVar3 << 0x10;
  uVar9 = in_stack_00000010;
  uVar7 = uStack0000000000000018;
  goto LAB_033ecb38;
LAB_033ec858:
  uVar11 = (uint)unaff_x27;
LAB_033ec978:
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar16 = unaff_x20[1];
  if (iStack0000000000000008 == iStack000000000000000c) {
    uVar9 = uVar16 + unaff_x26;
    uVar14 = *(int *)((long)unaff_x20 + 4) + uVar11;
    if (CARRY8(uVar16,unaff_x26)) {
      uVar7 = uVar14 + 1;
      uVar14 = uVar7;
      if (uVar7 <= uVar11) {
LAB_033ec9e4:
        if ((uVar12 & 0xff0000) == 0) {
          thunk_FUN_01dd295c(StringLiteral_1150);
          uVar5 = thunk_FUN_01de27b8();
          uVar6 = thunk_FUN_01dd295c(StringLiteral_8348);
          FUN_03390704(uVar5,uVar6,0);
          uVar6 = thunk_FUN_01dd295c(StringLiteral_9331);
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar5,uVar6);
        }
        uVar7 = (uint)(((ulong)uVar14 | 0x100000000) / 10);
        uVar10 = (uVar9 >> 0x20 | (ulong)(uVar14 + uVar7 * -10) << 0x20) / 10;
        uVar16 = uVar9 & 0xfffffffe |
                 (ulong)(uint)((int)(uVar9 >> 0x20) + (int)uVar10 * -10) << 0x20;
        uVar13 = uVar16 / 10;
        uVar11 = (int)uVar9 + (int)uVar13 * -10;
        uVar12 = uVar12 - 0x10000;
        uVar9 = uVar10 << 0x20 | uVar16 / 10 & 0xffffffff;
        if ((4 < uVar11) &&
           ((((uVar13 & 1) != 0 || (uVar11 != 5)) &&
            (bVar2 = uVar9 == 0xffffffffffffffff, uVar9 = uVar9 + 1, bVar2)))) {
          uVar7 = uVar7 + 1;
        }
      }
    }
    else {
      uVar7 = uVar14;
      if (uVar14 < uVar11) goto LAB_033ec9e4;
    }
  }
  else {
    uVar9 = unaff_x26 - uVar16;
    uVar14 = uVar11 - *(uint *)((long)unaff_x20 + 4);
    if (unaff_x26 < uVar16) {
      uVar7 = uVar14 - 1;
      if (uVar11 <= uVar7) {
        uVar12 = uVar12 ^ 0x80000000;
        uVar9 = -uVar9;
        uVar7 = -uVar14;
      }
    }
    else {
      uVar7 = uVar14;
      if (uVar11 < *(uint *)((long)unaff_x20 + 4)) {
        bVar2 = uVar9 != 0;
        uVar7 = -uVar14;
        uVar12 = uVar12 ^ 0x80000000;
        uVar9 = -uVar9;
        if (bVar2) {
          uVar7 = ~uVar14;
        }
      }
    }
  }
LAB_033ecb38:
  *unaff_x19 = uVar12;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  unaff_x19[1] = uVar7;
  *(ulong *)(unaff_x19 + 2) = uVar9;
LAB_033ecb54:
  if (*(long *)(unaff_x28 + 0x28) != in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


