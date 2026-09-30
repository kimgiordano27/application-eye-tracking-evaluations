/*
FUNCTION_NAME: UnityWebSocketSharp.Net.ChunkedRequestStream$$Close
ENTRY_POINT: 07c3ff2c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void UnityWebSocketSharp_Net_ChunkedRequestStream__Close(void)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  short sVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  uint in_w8;
  ushort *puVar8;
  undefined2 *puVar9;
  uint uVar10;
  short *psVar11;
  int iVar12;
  int unaff_w19;
  long unaff_x20;
  ulong uVar13;
  uint unaff_w21;
  long unaff_x22;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  long unaff_x24;
  int iVar18;
  long unaff_x25;
  short unaff_w26;
  uint unaff_w27;
  int iVar19;
  ulong unaff_x28;
  int iVar20;
  uint unaff_w29;
  undefined8 *in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
code_r0x07c3ff2c:
  if (unaff_w21 <= in_w8) {
LAB_07c402fc:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d550();
  }
  uVar3 = *(ushort *)(unaff_x20 + unaff_x25 * 2);
  iVar18 = (int)unaff_x25;
  iVar19 = (int)unaff_x28;
  if (0x39 < uVar3) {
    if (uVar3 != 0x3a) {
      if (uVar3 == 0x5d) goto LAB_07c40274;
LAB_07c3ff64:
      if (*(int *)(*(long *)PTR_DAT_091aed80 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      sVar5 = FUN_07bc42c0(uVar3,0);
      unaff_x25 = unaff_x25 + 1;
      unaff_w26 = sVar5 + unaff_w26 * 0x10;
      unaff_x24 = unaff_x24 + 2;
      if (unaff_x22 == unaff_x25) goto LAB_07c40274;
      goto LAB_07c3ff28;
    }
    unaff_w29 = iVar18 + iVar19 + 1;
    *(short *)(in_stack_00000018 + (long)unaff_w19 * 2) = unaff_w26;
    if (unaff_w29 < unaff_w21) {
      iVar20 = unaff_w19 + 1;
      if (*(short *)(in_stack_00000010 + (long)(int)unaff_w29 * 2) == 0x3a) {
        unaff_w29 = iVar19 + iVar18 + 2;
        in_stack_00000008._4_4_ = iVar20;
LAB_07c3fffc:
        unaff_w26 = 0;
        if ((int)unaff_w29 < (int)unaff_w21) {
          uVar2 = unaff_w29;
          if (unaff_w29 <= unaff_w21) {
            uVar2 = unaff_w21;
          }
          uVar15 = unaff_w29;
          uVar1 = unaff_w29;
          if ((int)unaff_w29 <= (int)(unaff_w29 + 4)) {
            uVar1 = unaff_w29 + 4;
          }
          do {
            if (uVar2 == uVar15) goto LAB_07c402fc;
            uVar10 = (uint)*(ushort *)(in_stack_00000010 + (long)(int)uVar15 * 2);
            uVar4 = uVar10 - 0x25;
            if (((uVar4 < 0x39) && ((1L << ((ulong)uVar4 & 0x3f) & 0x100000000200401U) != 0)) ||
               (uVar1 == uVar15)) break;
            if (uVar10 == 0x2e) {
              unaff_w29 = uVar15;
              if ((int)unaff_w21 <= (int)uVar15) goto LAB_07c40234;
              puVar8 = (ushort *)(in_stack_00000010 + (long)(int)uVar15 * 2);
              lVar14 = in_stack_00000020 - (int)uVar15;
              goto LAB_07c401f4;
            }
            uVar15 = uVar15 + 1;
          } while (unaff_w21 != uVar15);
          unaff_w26 = 0;
        }
      }
      else {
        if (-1 < in_stack_00000008._4_4_) {
LAB_07c3ffe4:
          unaff_w29 = iVar19 + iVar18 + 1;
          goto LAB_07c3fffc;
        }
        unaff_w26 = 0;
        if (5 < iVar20) goto LAB_07c3ffe4;
      }
      goto LAB_07c3fefc;
    }
    goto LAB_07c402fc;
  }
  iVar12 = unaff_w19;
  if (uVar3 == 0x25) {
    if ((in_stack_00000028._4_4_ & 1) != 0) {
      iVar12 = unaff_w19 + 1;
      *(short *)(in_stack_00000018 + (long)unaff_w19 * 2) = unaff_w26;
    }
    uVar17 = unaff_x25 + (unaff_x28 & 0xffffffff);
    uVar2 = unaff_w21;
    if ((int)unaff_w21 < iVar19 + iVar18 + 1) {
      uVar2 = iVar19 + iVar18 + 1;
    }
    uVar16 = uVar17 & 0xffffffff;
    psVar11 = (short *)(in_stack_00000010 + (long)(int)unaff_w29 * 2);
    while( true ) {
      uVar15 = (int)uVar16 + 1;
      uVar16 = (ulong)uVar15;
      if ((int)unaff_w21 <= (int)uVar15) break;
      if (unaff_w21 <= uVar15) goto LAB_07c402fc;
      sVar5 = *psVar11;
      if ((sVar5 == 0x5d) || (psVar11 = psVar11 + 1, sVar5 == 0x2f)) goto LAB_07c40120;
    }
    uVar16 = (ulong)uVar2;
LAB_07c40120:
    unaff_w29 = (uint)uVar16;
    lVar14 = *(long *)PTR_DAT_091dad70;
    uVar13 = ((uint)-iVar19 + uVar16) - unaff_x25;
    if ((unaff_w21 < (uint)uVar17) || ((unaff_w21 - iVar19) - iVar18 < (uint)uVar13)) {
      FUN_0719919c(0);
    }
    if ((*(byte *)(*(long *)(lVar14 + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    uVar7 = FUN_06fd9c88(0,unaff_x24,uVar13 & 0xffffffff,0);
    *in_stack_00000000 = uVar7;
    thunk_FUN_03d1023c();
    if ((int)unaff_w29 < (int)unaff_w21) {
      uVar2 = unaff_w29;
      if (unaff_w29 <= unaff_w21) {
        uVar2 = unaff_w21;
      }
      do {
        uVar15 = (uint)uVar16;
        if (uVar2 == uVar15) goto LAB_07c402fc;
        unaff_w29 = uVar15;
      } while ((*(short *)(in_stack_00000010 + (long)(int)uVar15 * 2) != 0x5d) &&
              (uVar16 = (ulong)(uVar15 + 1), unaff_w29 = unaff_w21, unaff_w21 != uVar15 + 1));
    }
    goto LAB_07c3fef8;
  }
  if (uVar3 != 0x2f) goto LAB_07c3ff64;
  if ((in_stack_00000028._4_4_ & 1) != 0) {
    iVar12 = unaff_w19 + 1;
    *(short *)(in_stack_00000018 + (long)unaff_w19 * 2) = unaff_w26;
  }
  uVar17 = unaff_x25 + (unaff_x28 & 0xffffffff) + 1;
  if (unaff_w21 <= (uint)uVar17) goto LAB_07c402fc;
  while (unaff_w29 = (uint)uVar17, *(short *)(in_stack_00000010 + (long)(int)unaff_w29 * 2) != 0x5d)
  {
    uVar17 = (ulong)(unaff_w29 + 1);
    if (unaff_w21 == unaff_w29 + 1) goto LAB_07c402fc;
  }
LAB_07c3fef8:
  in_stack_00000028._4_4_ = 0;
  iVar20 = iVar12;
LAB_07c3fefc:
  unaff_w19 = iVar20;
  if ((int)unaff_w21 <= (int)unaff_w29) {
LAB_07c40274:
    if ((in_stack_00000028._4_4_ & 1) != 0) {
      *(short *)(in_stack_00000018 + (long)unaff_w19 * 2) = unaff_w26;
      unaff_w19 = unaff_w19 + 1;
    }
    if ((0 < in_stack_00000008._4_4_) && (0 < unaff_w19 - in_stack_00000008._4_4_)) {
      iVar18 = unaff_w19 + -1;
      puVar9 = (undefined2 *)(in_stack_00000018 + 0xe);
      do {
        *puVar9 = *(undefined2 *)(in_stack_00000018 + (long)iVar18 * 2);
        *(undefined2 *)(in_stack_00000018 + (long)iVar18 * 2) = 0;
        iVar18 = iVar18 + -1;
        puVar9 = puVar9 + -1;
      } while (1 < (iVar18 - in_stack_00000008._4_4_) + 2);
    }
    return;
  }
  unaff_x20 = in_stack_00000010 + (long)(int)unaff_w29 * 2;
  unaff_x28 = (ulong)unaff_w29;
  unaff_x25 = 0;
  unaff_x22 = in_stack_00000020 - (int)unaff_w29;
  unaff_x24 = unaff_x20;
  unaff_w27 = unaff_w29;
LAB_07c3ff28:
  unaff_w29 = unaff_w29 + 1;
  in_w8 = unaff_w27 + (int)unaff_x25;
  goto code_r0x07c3ff2c;
  while( true ) {
    uVar15 = uVar15 + 1;
    lVar14 = lVar14 + -1;
    puVar8 = puVar8 + 1;
    unaff_w29 = unaff_w21;
    if (lVar14 == 0) break;
LAB_07c401f4:
    if (unaff_w21 <= uVar15) goto LAB_07c402fc;
    if ((*puVar8 - 0x25 < 0x39) &&
       (unaff_w29 = uVar15, (1L << ((ulong)(*puVar8 - 0x25) & 0x3f) & 0x100000000000401U) != 0))
    break;
  }
LAB_07c40234:
  uVar6 = FUN_078270e0(in_stack_00000010);
  unaff_w26 = 0;
  iVar12 = unaff_w19 + 3;
  *(short *)(in_stack_00000018 + (long)iVar20 * 2) = (short)((uint)uVar6 >> 0x10);
  *(short *)(in_stack_00000018 + (long)(unaff_w19 + 2) * 2) = (short)uVar6;
  goto LAB_07c3fef8;
}


