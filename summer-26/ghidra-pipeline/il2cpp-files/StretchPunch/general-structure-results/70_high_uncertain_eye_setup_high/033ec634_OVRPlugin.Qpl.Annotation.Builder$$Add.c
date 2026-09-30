/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Add
ENTRY_POINT: 033ec634
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


void OVRPlugin_Qpl_Annotation_Builder__Add(ulong param_1,uint *param_2,uint *param_3)

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
  uint unaff_w21;
  uint uVar11;
  long unaff_x22;
  long unaff_x23;
  long *plVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  long unaff_x28;
  ulong uVar18;
  uint uStack000000000000000c;
  ulong in_stack_00000010;
  uint uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  plVar12 = *(long **)(unaff_x23 + 0x1f8);
  if ((param_1 & 1) == 0) {
    FUN_01d7d918(StringLiteral_9323);
    *(undefined1 *)(unaff_x22 + 0xb78) = 1;
  }
  in_stack_00000010 = 0;
  _uStack0000000000000018 = 0;
  in_stack_00000020 = 0;
  if (*(int *)(*plVar12 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar13 = *param_2;
  uVar17 = param_2[1];
  uVar14 = *(ulong *)(param_2 + 2);
  uStack000000000000000c = unaff_w21 & 1;
  uVar11 = *param_3 ^ uVar13;
  uVar7 = uVar11 >> 0x1f;
  if ((uVar11 & 0xff0000) == 0) goto LAB_033ec978;
  uVar9 = *param_3 & 0xff0000 | uVar13 & 0x80000000;
  iVar3 = uVar9 - uVar13;
  uVar11 = iVar3 >> 0x10;
  if (iVar3 < 0) {
    uVar11 = -uVar11;
    if (uVar7 != uStack000000000000000c) {
      uVar13 = uVar13 ^ 0x80000000;
    }
    if (*(int *)(*plVar12 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar14 = *(ulong *)(param_3 + 2);
    uVar5 = *(undefined8 *)param_2;
    uVar17 = param_3[1];
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_3 = uVar5;
    uVar9 = uVar13;
  }
  uVar13 = uVar9;
  uVar15 = (ulong)uVar17;
  if (uVar17 == 0) {
    uVar18 = (ulong)uVar11;
    if (uVar14 >> 0x20 == 0) {
      if ((int)uVar14 == 0) {
        uVar5 = *(undefined8 *)param_3;
        *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)param_2 = uVar5;
        uVar11 = uVar13 & 0x80000000;
        if (uVar7 != uStack000000000000000c) {
          uVar11 = uVar13 & 0x80000000 ^ 0x80000000;
        }
        *param_2 = uVar11 | (uint)*(byte *)((long)param_3 + 2) << 0x10;
        goto LAB_033ecb54;
      }
      uVar18 = (ulong)(int)uVar11;
      do {
        if ((int)(uint)uVar18 < 10) {
          lVar16 = *plVar12;
          if (*(int *)(lVar16 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
            lVar16 = *plVar12;
          }
          lVar16 = **(long **)(lVar16 + 0xb8);
          if (lVar16 == 0) goto LAB_033ecc10;
          if (*(uint *)(lVar16 + 0x18) <= (uint)uVar18) goto LAB_033ecc14;
          uVar15 = 0;
          uVar14 = uVar14 * *(uint *)(lVar16 + uVar18 * 4 + 0x20);
          goto LAB_033ec858;
        }
        if (*(int *)(*plVar12 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar14 = (uVar14 & 0xffffffff) * 1000000000;
        uVar18 = uVar18 - 9;
      } while (uVar14 >> 0x20 == 0);
    }
    lVar16 = (long)(int)uVar18;
    do {
      lVar4 = *plVar12;
      if (lVar16 < 9) {
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar4 = *plVar12;
        }
        lVar8 = **(long **)(lVar4 + 0xb8);
        if (lVar8 == 0) goto LAB_033ecc10;
        if (*(uint *)(lVar8 + 0x18) <= (uint)lVar16) goto LAB_033ecc14;
        uVar11 = *(uint *)(lVar8 + lVar16 * 4 + 0x20);
      }
      else {
        uVar11 = 1000000000;
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar15 = (uVar14 & 0xffffffff) * (ulong)uVar11;
      uVar18 = (uVar14 >> 0x20) * (ulong)uVar11 + (uVar15 >> 0x20);
      uVar14 = uVar15 & 0xffffffff | uVar18 << 0x20;
      uVar15 = uVar18 >> 0x20;
      uVar17 = (uint)(uVar18 >> 0x20);
      if (lVar16 < 10) goto LAB_033ec978;
      lVar16 = lVar16 + -9;
    } while (uVar15 == 0);
    uVar11 = (uint)lVar16;
  }
  lVar16 = (long)(int)uVar11;
  while( true ) {
    lVar4 = *plVar12;
    if (lVar16 < 9) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar4 = *plVar12;
      }
      lVar8 = **(long **)(lVar4 + 0xb8);
      if (lVar8 == 0) goto LAB_033ecc10;
      if (*(uint *)(lVar8 + 0x18) <= (uint)lVar16) goto LAB_033ecc14;
      uVar11 = *(uint *)(lVar8 + lVar16 * 4 + 0x20);
    }
    else {
      uVar11 = 1000000000;
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar18 = (uVar14 & 0xffffffff) * (ulong)uVar11;
    uVar14 = (uVar14 >> 0x20) * (ulong)uVar11 + (uVar18 >> 0x20);
    uVar15 = (uVar14 >> 0x20) + (ulong)uVar11 * (uVar15 & 0xffffffff);
    uVar14 = uVar18 & 0xffffffff | uVar14 << 0x20;
    if (uVar15 >> 0x20 != 0) break;
    bVar2 = lVar16 < 10;
    lVar16 = lVar16 + -9;
    if (bVar2) goto LAB_033ec858;
  }
  uVar17 = (uint)lVar16 - 9;
  in_stack_00000010 = uVar14;
  _uStack0000000000000018 = uVar15;
  uVar11 = 3;
  if (0 < (int)uVar17) {
    do {
      uVar9 = 1000000000;
      if ((int)uVar17 < 9) {
        lVar16 = *plVar12;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar16 = *plVar12;
        }
        lVar16 = **(long **)(lVar16 + 0xb8);
        if (lVar16 == 0) {
LAB_033ecc10:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        if (*(uint *)(lVar16 + 0x18) <= uVar17) {
LAB_033ecc14:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        uVar9 = *(uint *)(lVar16 + (ulong)uVar17 * 4 + 0x20);
      }
      uVar15 = 0;
      uVar14 = 0;
      do {
        uVar1 = *(uint *)((long)&stack0x00000010 + uVar14 * 4);
        if (*(int *)(*plVar12 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar18 = uVar15 + (ulong)uVar1 * (ulong)uVar9;
        uVar1 = (int)uVar14 + 1;
        uVar15 = uVar18 >> 0x20;
        *(int *)((long)&stack0x00000010 + uVar14 * 4) = (int)uVar18;
        uVar14 = (ulong)uVar1;
      } while (uVar1 <= uVar11);
      iVar3 = (int)(uVar18 >> 0x20);
      if (iVar3 != 0) {
        uVar11 = uVar11 + 1;
        *(int *)((long)&stack0x00000010 + (ulong)uVar11 * 4) = iVar3;
      }
      uVar9 = uVar17 - 9;
      bVar2 = 8 < (int)uVar17;
      uVar17 = uVar9;
    } while (uVar9 != 0 && bVar2);
  }
  uVar14 = in_stack_00000010;
  if (*(int *)(*plVar12 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar15 = *(ulong *)(param_3 + 2);
  uVar17 = param_3[1];
  if (uVar7 == uStack000000000000000c) {
    uVar18 = uVar15 + uVar14;
    uVar7 = uVar17 + uStack0000000000000018;
    if (CARRY8(uVar15,uVar14)) {
      uVar7 = uVar7 + 1;
      if (uStack0000000000000018 < uVar7) goto LAB_033ecafc;
OVRPlugin_OVRP_0_1_0__ovrp_GetEyeTextureSize:
      uVar14 = 3;
      do {
        iVar3 = *(int *)((long)&stack0x00000010 + uVar14 * 4);
        *(int *)((long)&stack0x00000010 + uVar14 * 4) = iVar3 + 1;
        if (iVar3 != -1) goto LAB_033ecafc;
        uVar17 = (int)uVar14 + 1;
        uVar14 = (ulong)uVar17;
      } while (uVar17 <= uVar11);
      *(undefined4 *)((long)&stack0x00000010 + (ulong)uVar17 * 4) = 1;
    }
    else {
      if (uVar7 < uStack0000000000000018) goto OVRPlugin_OVRP_0_1_0__ovrp_GetEyeTextureSize;
LAB_033ecafc:
      uVar14 = (ulong)uVar11;
    }
LAB_033ecb00:
    _uStack0000000000000018 = CONCAT44(uStack000000000000001c,uVar7);
    in_stack_00000010 = uVar18;
    if (*(int *)(*plVar12 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    iVar3 = FUN_033f1594(&stack0x00000010,uVar14,uVar13 >> 0x10 & 0xff);
    uVar13 = uVar13 & 0xff00ffff | iVar3 << 0x10;
    uVar18 = in_stack_00000010;
    uVar7 = uStack0000000000000018;
  }
  else {
    uVar18 = uVar14 - uVar15;
    uVar7 = uStack0000000000000018 - uVar17;
    if (uVar15 <= uVar14) {
      if (uStack0000000000000018 < uVar17) goto LAB_033ecad0;
      goto LAB_033ecafc;
    }
    uVar7 = uVar7 - 1;
    if (uVar7 < uStack0000000000000018) goto LAB_033ecafc;
LAB_033ecad0:
    uVar14 = 3;
    do {
      iVar3 = *(int *)((long)&stack0x00000010 + uVar14 * 4);
      *(int *)((long)&stack0x00000010 + uVar14 * 4) = iVar3 + -1;
      uVar14 = (ulong)((int)uVar14 + 1);
    } while (iVar3 == 0);
    if (*(int *)((long)&stack0x00000010 + (ulong)uVar11 * 4) != 0) goto LAB_033ecafc;
    uVar14 = (ulong)(uVar11 - 1);
    if (2 < uVar11 - 1) goto LAB_033ecb00;
  }
LAB_033ecb38:
  *param_2 = uVar13;
  if (*(int *)(*plVar12 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  param_2[1] = uVar7;
  *(ulong *)(param_2 + 2) = uVar18;
LAB_033ecb54:
  if (*(long *)(unaff_x28 + 0x28) != in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_033ec858:
  uVar17 = (uint)uVar15;
LAB_033ec978:
  if (*(int *)(*plVar12 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar15 = *(ulong *)(param_3 + 2);
  if (uVar7 == uStack000000000000000c) {
    uVar18 = uVar15 + uVar14;
    uVar11 = param_3[1] + uVar17;
    if (CARRY8(uVar15,uVar14)) {
      uVar7 = uVar11 + 1;
      uVar11 = uVar7;
      if (uVar7 <= uVar17) {
LAB_033ec9e4:
        if ((uVar13 & 0xff0000) == 0) {
          thunk_FUN_01dd295c(StringLiteral_1150);
          uVar5 = thunk_FUN_01de27b8();
          uVar6 = thunk_FUN_01dd295c(StringLiteral_8348);
          FUN_03390704(uVar5,uVar6,0);
          uVar6 = thunk_FUN_01dd295c(StringLiteral_9331);
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar5,uVar6);
        }
        uVar7 = (uint)(((ulong)uVar11 | 0x100000000) / 10);
        uVar10 = (uVar18 >> 0x20 | (ulong)(uVar11 + uVar7 * -10) << 0x20) / 10;
        uVar14 = uVar18 & 0xfffffffe |
                 (ulong)(uint)((int)(uVar18 >> 0x20) + (int)uVar10 * -10) << 0x20;
        uVar15 = uVar14 / 10;
        uVar11 = (int)uVar18 + (int)uVar15 * -10;
        uVar13 = uVar13 - 0x10000;
        uVar18 = uVar10 << 0x20 | uVar14 / 10 & 0xffffffff;
        if ((4 < uVar11) &&
           ((((uVar15 & 1) != 0 || (uVar11 != 5)) &&
            (bVar2 = uVar18 == 0xffffffffffffffff, uVar18 = uVar18 + 1, bVar2)))) {
          uVar7 = uVar7 + 1;
        }
      }
    }
    else {
      uVar7 = uVar11;
      if (uVar11 < uVar17) goto LAB_033ec9e4;
    }
  }
  else {
    uVar18 = uVar14 - uVar15;
    uVar11 = uVar17 - param_3[1];
    if (uVar14 < uVar15) {
      uVar7 = uVar11 - 1;
      if (uVar17 <= uVar7) {
        uVar13 = uVar13 ^ 0x80000000;
        uVar18 = -uVar18;
        uVar7 = -uVar11;
      }
    }
    else {
      uVar7 = uVar11;
      if (uVar17 < param_3[1]) {
        bVar2 = uVar18 != 0;
        uVar7 = -uVar11;
        uVar13 = uVar13 ^ 0x80000000;
        uVar18 = -uVar18;
        if (bVar2) {
          uVar7 = ~uVar11;
        }
      }
    }
  }
  goto LAB_033ecb38;
}


