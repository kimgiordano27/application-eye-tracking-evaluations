/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Add
ENTRY_POINT: 033ec64c
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
  uint uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  uint *unaff_x19;
  uint *unaff_x20;
  uint unaff_w21;
  uint uVar11;
  long unaff_x22;
  long *unaff_x23;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  long unaff_x28;
  ulong uVar17;
  uint uStack000000000000000c;
  ulong in_stack_00000010;
  uint uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  FUN_01d7d918();
  *(undefined1 *)(unaff_x22 + 0xb78) = 1;
  in_stack_00000010 = 0;
  _uStack0000000000000018 = 0;
  in_stack_00000020 = 0;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar12 = *unaff_x19;
  uVar16 = unaff_x19[1];
  uVar13 = *(ulong *)(unaff_x19 + 2);
  uStack000000000000000c = unaff_w21 & 1;
  uVar11 = *unaff_x20 ^ uVar12;
  uVar7 = uVar11 >> 0x1f;
  if ((uVar11 & 0xff0000) == 0) goto LAB_033ec978;
  uVar9 = *unaff_x20 & 0xff0000 | uVar12 & 0x80000000;
  iVar3 = uVar9 - uVar12;
  uVar11 = iVar3 >> 0x10;
  if (iVar3 < 0) {
    uVar11 = -uVar11;
    if (uVar7 != uStack000000000000000c) {
      uVar12 = uVar12 ^ 0x80000000;
    }
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar13 = *(ulong *)(unaff_x20 + 2);
    uVar5 = *(undefined8 *)unaff_x19;
    uVar16 = unaff_x20[1];
    *(undefined8 *)(unaff_x20 + 2) = *(undefined8 *)(unaff_x19 + 2);
    *(undefined8 *)unaff_x20 = uVar5;
    uVar9 = uVar12;
  }
  uVar12 = uVar9;
  uVar14 = (ulong)uVar16;
  if (uVar16 == 0) {
    uVar17 = (ulong)uVar11;
    if (uVar13 >> 0x20 == 0) {
      if ((int)uVar13 == 0) {
        uVar5 = *(undefined8 *)unaff_x20;
        *(undefined8 *)(unaff_x19 + 2) = *(undefined8 *)(unaff_x20 + 2);
        *(undefined8 *)unaff_x19 = uVar5;
        uVar11 = uVar12 & 0x80000000;
        if (uVar7 != uStack000000000000000c) {
          uVar11 = uVar12 & 0x80000000 ^ 0x80000000;
        }
        *unaff_x19 = uVar11 | (uint)*(byte *)((long)unaff_x20 + 2) << 0x10;
        goto LAB_033ecb54;
      }
      uVar17 = (ulong)(int)uVar11;
      do {
        if ((int)(uint)uVar17 < 10) {
          lVar15 = *unaff_x23;
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
            lVar15 = *unaff_x23;
          }
          lVar15 = **(long **)(lVar15 + 0xb8);
          if (lVar15 == 0) goto LAB_033ecc10;
          if (*(uint *)(lVar15 + 0x18) <= (uint)uVar17) goto LAB_033ecc14;
          uVar14 = 0;
          uVar13 = uVar13 * *(uint *)(lVar15 + uVar17 * 4 + 0x20);
          goto LAB_033ec858;
        }
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar13 = (uVar13 & 0xffffffff) * 1000000000;
        uVar17 = uVar17 - 9;
      } while (uVar13 >> 0x20 == 0);
    }
    lVar15 = (long)(int)uVar17;
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
      uVar14 = (uVar13 & 0xffffffff) * (ulong)uVar11;
      uVar17 = (uVar13 >> 0x20) * (ulong)uVar11 + (uVar14 >> 0x20);
      uVar13 = uVar14 & 0xffffffff | uVar17 << 0x20;
      uVar14 = uVar17 >> 0x20;
      uVar16 = (uint)(uVar17 >> 0x20);
      if (lVar15 < 10) goto LAB_033ec978;
      lVar15 = lVar15 + -9;
    } while (uVar14 == 0);
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
    uVar17 = (uVar13 & 0xffffffff) * (ulong)uVar11;
    uVar13 = (uVar13 >> 0x20) * (ulong)uVar11 + (uVar17 >> 0x20);
    uVar14 = (uVar13 >> 0x20) + (ulong)uVar11 * (uVar14 & 0xffffffff);
    uVar13 = uVar17 & 0xffffffff | uVar13 << 0x20;
    if (uVar14 >> 0x20 != 0) break;
    bVar2 = lVar15 < 10;
    lVar15 = lVar15 + -9;
    if (bVar2) goto LAB_033ec858;
  }
  uVar16 = (uint)lVar15 - 9;
  in_stack_00000010 = uVar13;
  _uStack0000000000000018 = uVar14;
  uVar11 = 3;
  if (0 < (int)uVar16) {
    do {
      uVar9 = 1000000000;
      if ((int)uVar16 < 9) {
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
        if (*(uint *)(lVar15 + 0x18) <= uVar16) {
LAB_033ecc14:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        uVar9 = *(uint *)(lVar15 + (ulong)uVar16 * 4 + 0x20);
      }
      uVar14 = 0;
      uVar13 = 0;
      do {
        uVar1 = *(uint *)((long)&stack0x00000010 + uVar13 * 4);
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar17 = uVar14 + (ulong)uVar1 * (ulong)uVar9;
        uVar1 = (int)uVar13 + 1;
        uVar14 = uVar17 >> 0x20;
        *(int *)((long)&stack0x00000010 + uVar13 * 4) = (int)uVar17;
        uVar13 = (ulong)uVar1;
      } while (uVar1 <= uVar11);
      iVar3 = (int)(uVar17 >> 0x20);
      if (iVar3 != 0) {
        uVar11 = uVar11 + 1;
        *(int *)((long)&stack0x00000010 + (ulong)uVar11 * 4) = iVar3;
      }
      uVar9 = uVar16 - 9;
      bVar2 = 8 < (int)uVar16;
      uVar16 = uVar9;
    } while (uVar9 != 0 && bVar2);
  }
  uVar13 = in_stack_00000010;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar14 = *(ulong *)(unaff_x20 + 2);
  uVar16 = unaff_x20[1];
  if (uVar7 == uStack000000000000000c) {
    uVar17 = uVar14 + uVar13;
    uVar7 = uVar16 + uStack0000000000000018;
    if (CARRY8(uVar14,uVar13)) {
      uVar7 = uVar7 + 1;
      if (uStack0000000000000018 < uVar7) goto LAB_033ecafc;
OVRPlugin_OVRP_0_1_0__ovrp_GetEyeTextureSize:
      uVar13 = 3;
      do {
        iVar3 = *(int *)((long)&stack0x00000010 + uVar13 * 4);
        *(int *)((long)&stack0x00000010 + uVar13 * 4) = iVar3 + 1;
        if (iVar3 != -1) goto LAB_033ecafc;
        uVar16 = (int)uVar13 + 1;
        uVar13 = (ulong)uVar16;
      } while (uVar16 <= uVar11);
      *(undefined4 *)((long)&stack0x00000010 + (ulong)uVar16 * 4) = 1;
    }
    else {
      if (uVar7 < uStack0000000000000018) goto OVRPlugin_OVRP_0_1_0__ovrp_GetEyeTextureSize;
LAB_033ecafc:
      uVar13 = (ulong)uVar11;
    }
LAB_033ecb00:
    _uStack0000000000000018 = CONCAT44(uStack000000000000001c,uVar7);
    in_stack_00000010 = uVar17;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    iVar3 = FUN_033f1594(&stack0x00000010,uVar13,uVar12 >> 0x10 & 0xff);
    uVar12 = uVar12 & 0xff00ffff | iVar3 << 0x10;
    uVar17 = in_stack_00000010;
    uVar7 = uStack0000000000000018;
  }
  else {
    uVar17 = uVar13 - uVar14;
    uVar7 = uStack0000000000000018 - uVar16;
    if (uVar14 <= uVar13) {
      if (uStack0000000000000018 < uVar16) goto LAB_033ecad0;
      goto LAB_033ecafc;
    }
    uVar7 = uVar7 - 1;
    if (uVar7 < uStack0000000000000018) goto LAB_033ecafc;
LAB_033ecad0:
    uVar13 = 3;
    do {
      iVar3 = *(int *)((long)&stack0x00000010 + uVar13 * 4);
      *(int *)((long)&stack0x00000010 + uVar13 * 4) = iVar3 + -1;
      uVar13 = (ulong)((int)uVar13 + 1);
    } while (iVar3 == 0);
    if (*(int *)((long)&stack0x00000010 + (ulong)uVar11 * 4) != 0) goto LAB_033ecafc;
    uVar13 = (ulong)(uVar11 - 1);
    if (2 < uVar11 - 1) goto LAB_033ecb00;
  }
LAB_033ecb38:
  *unaff_x19 = uVar12;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  unaff_x19[1] = uVar7;
  *(ulong *)(unaff_x19 + 2) = uVar17;
LAB_033ecb54:
  if (*(long *)(unaff_x28 + 0x28) != in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_033ec858:
  uVar16 = (uint)uVar14;
LAB_033ec978:
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar14 = *(ulong *)(unaff_x20 + 2);
  if (uVar7 == uStack000000000000000c) {
    uVar17 = uVar14 + uVar13;
    uVar11 = unaff_x20[1] + uVar16;
    if (CARRY8(uVar14,uVar13)) {
      uVar7 = uVar11 + 1;
      uVar11 = uVar7;
      if (uVar7 <= uVar16) {
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
        uVar7 = (uint)(((ulong)uVar11 | 0x100000000) / 10);
        uVar10 = (uVar17 >> 0x20 | (ulong)(uVar11 + uVar7 * -10) << 0x20) / 10;
        uVar13 = uVar17 & 0xfffffffe |
                 (ulong)(uint)((int)(uVar17 >> 0x20) + (int)uVar10 * -10) << 0x20;
        uVar14 = uVar13 / 10;
        uVar11 = (int)uVar17 + (int)uVar14 * -10;
        uVar12 = uVar12 - 0x10000;
        uVar17 = uVar10 << 0x20 | uVar13 / 10 & 0xffffffff;
        if ((4 < uVar11) &&
           ((((uVar14 & 1) != 0 || (uVar11 != 5)) &&
            (bVar2 = uVar17 == 0xffffffffffffffff, uVar17 = uVar17 + 1, bVar2)))) {
          uVar7 = uVar7 + 1;
        }
      }
    }
    else {
      uVar7 = uVar11;
      if (uVar11 < uVar16) goto LAB_033ec9e4;
    }
  }
  else {
    uVar17 = uVar13 - uVar14;
    uVar11 = uVar16 - unaff_x20[1];
    if (uVar13 < uVar14) {
      uVar7 = uVar11 - 1;
      if (uVar16 <= uVar7) {
        uVar12 = uVar12 ^ 0x80000000;
        uVar17 = -uVar17;
        uVar7 = -uVar11;
      }
    }
    else {
      uVar7 = uVar11;
      if (uVar16 < unaff_x20[1]) {
        bVar2 = uVar17 != 0;
        uVar7 = -uVar11;
        uVar12 = uVar12 ^ 0x80000000;
        uVar17 = -uVar17;
        if (bVar2) {
          uVar7 = ~uVar11;
        }
      }
    }
  }
  goto LAB_033ecb38;
}


