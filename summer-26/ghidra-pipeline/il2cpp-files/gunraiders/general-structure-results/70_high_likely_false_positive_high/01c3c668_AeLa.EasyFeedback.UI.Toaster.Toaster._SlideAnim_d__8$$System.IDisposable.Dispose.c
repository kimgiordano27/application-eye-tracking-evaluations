/*
FUNCTION_NAME: AeLa.EasyFeedback.UI.Toaster.Toaster.<SlideAnim>d__8$$System.IDisposable.Dispose
ENTRY_POINT: 01c3c668
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void AeLa_EasyFeedback_UI_Toaster_Toaster_<SlideAnim>d__8__System_IDisposable_Dispose(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  ulong in_x9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  int *piVar13;
  byte *pbVar14;
  byte *pbVar15;
  long in_x12;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  long in_x15;
  ulong uVar22;
  ulong uVar23;
  undefined8 *unaff_x19;
  byte *pbVar24;
  byte *unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  long unaff_x24;
  int iVar25;
  byte *unaff_x26;
  long unaff_x27;
  ulong *unaff_x28;
  long unaff_x29;
  double dVar26;
  double dVar27;
  double dVar28;
  byte bVar29;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  int *piStack0000000000000020;
  int *piStack0000000000000028;
  undefined1 *in_stack_00000030;
  undefined8 in_stack_00000038;
  byte *pbStack0000000000000040;
  ulong in_stack_00000048;
  ulong uStack0000000000000050;
  ulong uStack0000000000000068;
  int *piStack0000000000000070;
  byte *pbStack0000000000000078;
  byte *pbStack0000000000000080;
  byte *in_stack_00000088;
  int *piStack0000000000000090;
  int *piStack0000000000000098;
  long in_stack_000000a0;
  long in_stack_00000da8;
  
  uVar18 = param_1 + in_x12;
  piStack0000000000000028 = (int *)&stack0x000003a4;
  piStack0000000000000020 = (int *)&stack0x000003a0;
  piStack0000000000000070 = (int *)&stack0x0000039c;
  piStack0000000000000098 = (int *)&stack0x000003a8;
  *(ulong *)(unaff_x29 + (uVar18 >> 3)) =
       (ulong)*(byte *)(in_x15 + (in_x9 >> 3)) << (uVar18 & 7) |
       (ulong)*(byte *)(unaff_x29 + (uVar18 >> 3));
  piStack0000000000000090 = (int *)&stack0x00000344;
  *unaff_x28 = (in_x9 & 7) + uVar18;
  pbVar15 = unaff_x26;
LAB_01c3c6e8:
  uStack0000000000000068 = unaff_x22 + 3;
  pbVar8 = pbVar15;
  pbVar24 = pbVar15;
  pbStack0000000000000040 = pbVar15;
  uStack0000000000000050 = unaff_x22;
  pbStack0000000000000078 = unaff_x20;
  pbStack0000000000000080 = unaff_x20;
  do {
    memcpy(&stack0x000002a8,&DAT_00fa1494,0x200);
    pbVar1 = pbVar8 + (long)pbStack0000000000000080;
    if ((byte *)0xf < pbStack0000000000000080) {
      pbVar14 = pbVar8 + 2;
      pbVar2 = pbStack0000000000000080 + -5;
      if (in_stack_00000088 + -0x10 <= pbStack0000000000000080 + -5) {
        pbVar2 = in_stack_00000088 + -0x10;
      }
      pbVar2 = pbVar8 + (long)pbVar2;
      if (pbVar14 <= pbVar2) {
        iVar9 = -1;
        pbVar15 = pbVar8;
LAB_01c3c758:
        lVar12 = *(long *)(pbVar15 + 1);
        uVar18 = 0x21;
        pbVar15 = pbVar15 + 1;
        do {
          pbVar21 = pbVar14;
          pbVar14 = pbVar15 + -(long)iVar9;
          uVar23 = lVar12 * 0x1e35a7bd000000;
          lVar12 = *(long *)pbVar21;
          uVar23 = uVar23 >> 0x33;
          iVar25 = (int)unaff_x26;
          if (((*(int *)pbVar15 == *(int *)pbVar14) && (pbVar14 < pbVar15)) &&
             (pbVar15[4] == pbVar14[4])) {
            *(int *)(unaff_x24 + uVar23 * 4) = (int)pbVar15 - iVar25;
LAB_01c3c7ac:
            if ((long)pbVar15 - (long)pbVar14 < 0x3fff1)
            goto AeLa_EasyFeedback_UI_TMP_TMPDropdownWrapper__AddOption;
          }
          else {
            iVar11 = *(int *)(unaff_x24 + uVar23 * 4);
            *(int *)(unaff_x24 + uVar23 * 4) = (int)pbVar15 - iVar25;
            pbVar14 = unaff_x26 + iVar11;
            if ((*(int *)pbVar15 == *(int *)pbVar14) && (pbVar15[4] == pbVar14[4]))
            goto LAB_01c3c7ac;
          }
          uVar23 = uVar18 >> 5;
          if (pbVar2 < pbVar21 + uVar23) break;
          uVar18 = (ulong)((int)uVar18 + 1);
          pbVar14 = pbVar21 + uVar23;
          pbVar15 = pbVar21;
        } while( true );
      }
    }
FUN_01c3d2c4:
    in_stack_00000088 = in_stack_00000088 + -(long)pbStack0000000000000080;
    pbVar15 = in_stack_00000088;
    if ((byte *)0xffff < in_stack_00000088) {
      pbVar15 = (byte *)0x10000;
    }
    if ((in_stack_00000088 == (byte *)0x0) ||
       (pbStack0000000000000078 = pbVar15 + (long)pbStack0000000000000078,
       (byte *)0x100000 < pbStack0000000000000078)) goto LAB_01c3d488;
    memset(&stack0x000004a8,0,0x800);
    pbVar8 = (byte *)0x0;
    do {
      pbVar14 = pbVar1 + (long)pbVar8;
      pbVar8 = pbVar8 + 0x2b;
      *(long *)(&stack0x000004a8 + (ulong)*pbVar14 * 8) =
           *(long *)(&stack0x000004a8 + (ulong)*pbVar14 * 8) + 1;
    } while (pbVar8 < pbVar15);
    dVar28 = (double)((ulong)(pbVar15 + 0x2a) / 0x2b);
    pbStack0000000000000080 = pbVar15;
    if (pbVar15 < (byte *)0x2ad6) {
      dVar26 = (double)(&DAT_01041850)[(ulong)(pbVar15 + 0x2a) / 0x2b];
    }
    else {
      dVar26 = log2(dVar28);
    }
    lVar12 = 0;
    dVar28 = dVar28 * (dVar26 + 0.5) + 200.0;
    do {
      uVar18 = *(ulong *)(&stack0x000004a8 + lVar12 * 8);
      bVar29 = *(byte *)(unaff_x23 + lVar12);
      if (uVar18 < 0x100) {
        dVar26 = (double)(&DAT_01041850)[uVar18];
      }
      else {
        dVar26 = log2((double)uVar18);
      }
      dVar27 = (double)NEON_ucvtf((ulong)bVar29);
      lVar12 = lVar12 + 1;
      dVar28 = dVar28 - (dVar26 + dVar27) * (double)uVar18;
    } while (lVar12 != 0x100);
    if (dVar28 < 0.0) goto LAB_01c3d488;
    uVar23 = 0x14;
    uVar7 = (int)pbStack0000000000000078 - 1;
    uVar18 = uStack0000000000000068;
    do {
      uVar5 = uVar18 & 7;
      uVar22 = uVar18 >> 3;
      uVar10 = uVar23;
      if (8 - uVar5 <= uVar23) {
        uVar10 = 8 - uVar5;
      }
      uVar17 = (uint)uVar10;
      uVar3 = uVar7 & (-1 << (ulong)(uVar17 & 0x1f) ^ 0xffffffffU);
      uVar23 = uVar23 - uVar10;
      uVar7 = uVar7 >> (ulong)(uVar17 & 0x1f);
      uVar18 = uVar10 + uVar18;
      *(byte *)(unaff_x29 + uVar22) =
           ((byte)(-1 << (ulong)(uVar17 + (int)uVar5 & 0x1f)) | (byte)(-1 << uVar5) ^ 0xff) &
           *(byte *)(unaff_x29 + uVar22) | (byte)(uVar3 << uVar5);
      pbVar8 = pbVar1;
    } while (uVar23 != 0);
  } while( true );
AeLa_EasyFeedback_UI_TMP_TMPDropdownWrapper__AddOption:
  pbVar20 = pbVar1 + (-5 - (long)pbVar15);
  uVar18 = (ulong)pbVar20 >> 3;
  pbVar21 = pbVar15 + 5;
  if (uVar18 == 0) {
    uVar23 = 0;
    pbVar19 = pbVar21;
  }
  else {
    uVar23 = (ulong)pbVar20 & 0xfffffffffffffff8;
    lVar12 = 0;
    pbVar19 = pbVar21 + uVar23;
    do {
      if (*(ulong *)(pbVar21 + lVar12) != *(ulong *)(pbVar14 + lVar12 + 5)) {
        uVar18 = *(ulong *)(pbVar14 + lVar12 + 5) ^ *(ulong *)(pbVar21 + lVar12);
        uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
        uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
        uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar18 = lVar12 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3);
        goto LAB_01c3c860;
      }
      uVar18 = uVar18 - 1;
      lVar12 = lVar12 + 8;
    } while (uVar18 != 0);
  }
  uVar10 = (ulong)pbVar20 & 7;
  uVar18 = uVar23;
  if (uVar10 != 0) {
    uVar22 = uVar23 | uVar10;
    do {
      uVar18 = uVar23;
      if (pbVar14[uVar23 + 5] != *pbVar19) break;
      pbVar19 = pbVar19 + 1;
      uVar10 = uVar10 - 1;
      uVar23 = uVar23 + 1;
      uVar18 = uVar22;
    } while (uVar10 != 0);
  }
LAB_01c3c860:
  uVar23 = (long)pbVar15 - (long)pbVar24;
  if (uVar23 >> 1 < 0xc21) {
    if (5 < uVar23) {
      if (uVar23 < 0x82) {
        uVar5 = uVar23 - 2;
        uVar10 = *unaff_x28;
        uVar7 = ((uint)LZCOUNT((int)uVar5) ^ 0x1f) - 1;
        uVar16 = (ulong)uVar7;
        uVar6 = uVar5 >> (uVar16 & 0x3f);
        lVar12 = uVar7 * 2 + uVar6 + 0x2a;
        uVar22 = uVar10 + *(byte *)(unaff_x21 + lVar12);
        *(ulong *)(unaff_x29 + (uVar10 >> 3)) =
             (ulong)*(ushort *)(in_stack_000000a0 + lVar12 * 2) << (uVar10 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar10 >> 3));
        *unaff_x28 = uVar22;
        uVar10 = uVar22 + uVar16;
        *(ulong *)(unaff_x29 + (uVar22 >> 3)) =
             uVar5 - (uVar6 << (uVar16 & 0x3f)) << (uVar22 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar22 >> 3));
        *unaff_x28 = uVar10;
        piVar13 = (int *)(&stack0x000002a8 + lVar12 * 4);
      }
      else {
        if (0x841 < uVar23) {
          uVar10 = *unaff_x28;
          uVar22 = uVar10 + *(byte *)(unaff_x21 + 0x3d);
          *(ulong *)(unaff_x29 + (uVar10 >> 3)) =
               (ulong)*(ushort *)(in_stack_000000a0 + 0x7a) << (uVar10 & 7) |
               (ulong)*(byte *)(unaff_x29 + (uVar10 >> 3));
          *unaff_x28 = uVar22;
          uVar10 = uVar22 + 0xc;
          *(ulong *)(unaff_x29 + (uVar22 >> 3)) =
               uVar23 - 0x842 << (uVar22 & 7) | (ulong)*(byte *)(unaff_x29 + (uVar22 >> 3));
          piVar13 = piStack0000000000000070;
          goto LAB_01c3ca08;
        }
        uVar10 = *unaff_x28;
        uVar5 = (ulong)((uint)LZCOUNT((int)(uVar23 - 0x42)) ^ 0x1f);
        lVar12 = uVar5 + 0x32;
        uVar22 = uVar10 + *(byte *)(unaff_x21 + lVar12);
        *(ulong *)(unaff_x29 + (uVar10 >> 3)) =
             (ulong)*(ushort *)(in_stack_000000a0 + lVar12 * 2) << (uVar10 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar10 >> 3));
        *unaff_x28 = uVar22;
        uVar10 = uVar22 + uVar5;
        *(ulong *)(unaff_x29 + (uVar22 >> 3)) =
             (-1L << uVar5) + (uVar23 - 0x42) << (uVar22 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar22 >> 3));
        *unaff_x28 = uVar10;
        piVar13 = (int *)(&stack0x000002a8 + lVar12 * 4);
      }
      goto AeLa_EasyFeedback_FormFields_DropdownField__FormClosed;
    }
    uVar22 = *unaff_x28;
    lVar12 = uVar23 + 0x28;
    uVar10 = uVar22 + *(byte *)(unaff_x21 + lVar12);
    *(ulong *)(unaff_x29 + (uVar22 >> 3)) =
         (ulong)*(ushort *)(in_stack_000000a0 + lVar12 * 2) << (uVar22 & 7) |
         (ulong)*(byte *)(unaff_x29 + (uVar22 >> 3));
    *unaff_x28 = uVar10;
    *(int *)(&stack0x000002a8 + lVar12 * 4) = *(int *)(&stack0x000002a8 + lVar12 * 4) + 1;
    if (uVar23 == 0) goto LAB_01c3ca4c;
  }
  else {
    if ((0x3d4 < in_stack_00000048) &&
       (uVar10 = ((long)pbVar24 - (long)pbStack0000000000000040) * 0x32,
       uVar10 < uVar23 || uVar10 - uVar23 == 0)) {
      FUN_01c3ec90(pbStack0000000000000040,pbVar15,uStack0000000000000050);
      in_stack_00000088 = pbVar8 + ((long)in_stack_00000088 - (long)pbVar15);
      if (in_stack_00000088 != (byte *)0x0) goto LAB_01c3d688;
      goto LAB_01c3d87c;
    }
    if (uVar23 < 0x5842) {
      uVar10 = *unaff_x28;
      uVar22 = uVar10 + *(byte *)(unaff_x21 + 0x3e);
      *(ulong *)(unaff_x29 + (uVar10 >> 3)) =
           (ulong)*(ushort *)(in_stack_000000a0 + 0x7c) << (uVar10 & 7) |
           (ulong)*(byte *)(unaff_x29 + (uVar10 >> 3));
      *unaff_x28 = uVar22;
      uVar10 = uVar22 + 0xe;
      *(ulong *)(unaff_x29 + (uVar22 >> 3)) =
           uVar23 - 0x1842 << (uVar22 & 7) | (ulong)*(byte *)(unaff_x29 + (uVar22 >> 3));
      piVar13 = piStack0000000000000020;
    }
    else {
      uVar10 = *unaff_x28;
      uVar22 = uVar10 + *(byte *)(unaff_x21 + 0x3f);
      *(ulong *)(unaff_x29 + (uVar10 >> 3)) =
           (ulong)*(ushort *)(in_stack_000000a0 + 0x7e) << (uVar10 & 7) |
           (ulong)*(byte *)(unaff_x29 + (uVar10 >> 3));
      *unaff_x28 = uVar22;
      uVar10 = uVar22 + 0x18;
      *(ulong *)(unaff_x29 + (uVar22 >> 3)) =
           uVar23 - 0x5842 << (uVar22 & 7) | (ulong)*(byte *)(unaff_x29 + (uVar22 >> 3));
      piVar13 = piStack0000000000000028;
    }
LAB_01c3ca08:
    *unaff_x28 = uVar10;
AeLa_EasyFeedback_FormFields_DropdownField__FormClosed:
    *piVar13 = *piVar13 + 1;
  }
  do {
    uVar22 = uVar10 >> 3;
    uVar5 = uVar10 & 7;
    uVar23 = uVar23 - 1;
    uVar10 = uVar10 + *(byte *)(unaff_x23 + (ulong)*pbVar24);
    *(ulong *)(unaff_x29 + uVar22) =
         (ulong)*(ushort *)(unaff_x27 + (ulong)*pbVar24 * 2) << uVar5 |
         (ulong)*(byte *)(unaff_x29 + uVar22);
    *unaff_x28 = uVar10;
    pbVar24 = pbVar24 + 1;
  } while (uVar23 != 0);
LAB_01c3ca4c:
  iVar11 = (int)((long)pbVar15 - (long)pbVar14);
  if (iVar9 == iVar11) {
    uVar22 = uVar10 + *(byte *)(unaff_x21 + 0x40);
    *(ulong *)(unaff_x29 + (uVar10 >> 3)) =
         (ulong)*(ushort *)(in_stack_000000a0 + 0x80) << (uVar10 & 7) |
         (ulong)*(byte *)(unaff_x29 + (uVar10 >> 3));
    piVar13 = piStack0000000000000098;
    iVar11 = iVar9;
  }
  else {
    uVar23 = (long)iVar11 + 3;
    uVar7 = (uint)LZCOUNT((int)uVar23) ^ 0x1f;
    uVar16 = (ulong)(uVar7 - 1);
    uVar6 = uVar23 >> (uVar16 & 0x3f);
    lVar12 = ((ulong)(uVar7 * 2 - 4) | uVar6 & 1) + 0x50;
    uVar5 = uVar10 + *(byte *)(unaff_x21 + lVar12);
    *(ulong *)(unaff_x29 + (uVar10 >> 3)) =
         (ulong)*(ushort *)(in_stack_000000a0 + lVar12 * 2) << (uVar10 & 7) |
         (ulong)*(byte *)(unaff_x29 + (uVar10 >> 3));
    *unaff_x28 = uVar5;
    uVar22 = uVar5 + uVar16;
    *(ulong *)(unaff_x29 + (uVar5 >> 3)) =
         uVar23 - ((uVar6 & 1 | 2) << (uVar16 & 0x3f)) << (uVar5 & 7) |
         (ulong)*(byte *)(unaff_x29 + (uVar5 >> 3));
    piVar13 = (int *)(&stack0x000002a8 + lVar12 * 4);
  }
  *unaff_x28 = uVar22;
  uVar23 = uVar18 + 5;
  *piVar13 = *piVar13 + 1;
  if (uVar23 < 0xc) {
    lVar12 = uVar18 + 1;
    bVar29 = *(byte *)(unaff_x21 + lVar12);
    *(ulong *)(unaff_x29 + (uVar22 >> 3)) =
         (ulong)*(ushort *)(in_stack_000000a0 + lVar12 * 2) << (uVar22 & 7) |
         (ulong)*(byte *)(unaff_x29 + (uVar22 >> 3));
    *unaff_x28 = uVar22 + bVar29;
    piVar13 = (int *)(&stack0x000002a8 + lVar12 * 4);
  }
  else if (uVar23 < 0x48) {
    uVar18 = uVar18 - 3;
    uVar7 = ((uint)LZCOUNT((int)uVar18) ^ 0x1f) - 1;
    uVar5 = (ulong)uVar7;
    uVar16 = uVar18 >> (uVar5 & 0x3f);
    lVar12 = uVar7 * 2 + uVar16 + 4;
    uVar10 = uVar22 + *(byte *)(unaff_x21 + lVar12);
    *(ulong *)(unaff_x29 + (uVar22 >> 3)) =
         (ulong)*(ushort *)(in_stack_000000a0 + lVar12 * 2) << (uVar22 & 7) |
         (ulong)*(byte *)(unaff_x29 + (uVar22 >> 3));
    *unaff_x28 = uVar10;
    *(ulong *)(unaff_x29 + (uVar10 >> 3)) =
         uVar18 - (uVar16 << (uVar5 & 0x3f)) << (uVar10 & 7) |
         (ulong)*(byte *)(unaff_x29 + (uVar10 >> 3));
    *unaff_x28 = uVar10 + uVar5;
    piVar13 = (int *)(&stack0x000002a8 + lVar12 * 4);
  }
  else {
    piVar13 = piStack0000000000000098;
    if (uVar23 < 0x88) {
      lVar12 = (uVar18 - 3 >> 5) + 0x1e;
      uVar5 = uVar22 + *(byte *)(unaff_x21 + lVar12);
      *(ulong *)(unaff_x29 + (uVar22 >> 3)) =
           (ulong)*(ushort *)(in_stack_000000a0 + lVar12 * 2) << (uVar22 & 7) |
           (ulong)*(byte *)(unaff_x29 + (uVar22 >> 3));
      *unaff_x28 = uVar5;
      uVar10 = uVar5 + 5;
      *(ulong *)(unaff_x29 + (uVar5 >> 3)) =
           (uVar18 - 3 & 0x1f) << (uVar5 & 7) | (ulong)*(byte *)(unaff_x29 + (uVar5 >> 3));
      *unaff_x28 = uVar10;
      bVar29 = *(byte *)(unaff_x21 + 0x40);
      *(ulong *)(unaff_x29 + (uVar10 >> 3)) =
           (ulong)*(ushort *)(in_stack_000000a0 + 0x80) << (uVar10 & 7) |
           (ulong)*(byte *)(unaff_x29 + (uVar10 >> 3));
      *unaff_x28 = uVar10 + bVar29;
      *(int *)(&stack0x000002a8 + lVar12 * 4) = *(int *)(&stack0x000002a8 + lVar12 * 4) + 1;
    }
    else {
      uVar10 = uVar22 >> 3;
      if (uVar23 < 0x848) {
        uVar16 = (ulong)((uint)LZCOUNT((int)(uVar18 - 0x43)) ^ 0x1f);
        lVar12 = uVar16 + 0x1c;
        uVar5 = uVar22 + *(byte *)(unaff_x21 + lVar12);
        *(ulong *)(unaff_x29 + uVar10) =
             (ulong)*(ushort *)(in_stack_000000a0 + lVar12 * 2) << (uVar22 & 7) |
             (ulong)*(byte *)(unaff_x29 + uVar10);
        *unaff_x28 = uVar5;
        uVar10 = uVar5 + uVar16;
        *(ulong *)(unaff_x29 + (uVar5 >> 3)) =
             (-1L << uVar16) + (uVar18 - 0x43) << (uVar5 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar5 >> 3));
        *unaff_x28 = uVar10;
        bVar29 = *(byte *)(unaff_x21 + 0x40);
        *(ulong *)(unaff_x29 + (uVar10 >> 3)) =
             (ulong)*(ushort *)(in_stack_000000a0 + 0x80) << (uVar10 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar10 >> 3));
        *unaff_x28 = uVar10 + bVar29;
        *(int *)(&stack0x000002a8 + lVar12 * 4) = *(int *)(&stack0x000002a8 + lVar12 * 4) + 1;
      }
      else {
        uVar5 = uVar22 + *(byte *)(unaff_x21 + 0x27);
        *(ulong *)(unaff_x29 + uVar10) =
             (ulong)*(ushort *)(in_stack_000000a0 + 0x4e) << (uVar22 & 7) |
             (ulong)*(byte *)(unaff_x29 + uVar10);
        *unaff_x28 = uVar5;
        uVar10 = uVar5 + 0x18;
        *(ulong *)(unaff_x29 + (uVar5 >> 3)) =
             uVar18 - 0x843 << (uVar5 & 7) | (ulong)*(byte *)(unaff_x29 + (uVar5 >> 3));
        *unaff_x28 = uVar10;
        bVar29 = *(byte *)(unaff_x21 + 0x40);
        *(ulong *)(unaff_x29 + (uVar10 >> 3)) =
             (ulong)*(ushort *)(in_stack_000000a0 + 0x80) << (uVar5 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar10 >> 3));
        *unaff_x28 = uVar10 + bVar29;
      }
    }
  }
  pbVar24 = pbVar15 + uVar23;
  *piVar13 = *piVar13 + 1;
  if (pbVar2 <= pbVar24) goto FUN_01c3d2c4;
  uVar18 = *(ulong *)(pbVar24 + -3);
  iVar4 = (int)pbVar24 - iVar25;
  *(int *)(unaff_x24 + (uVar18 * 0x1e35a7bd000000 >> 0x31 & 0x7ffc)) = iVar4 + -3;
  *(int *)(unaff_x24 + ((uVar18 >> 8) * 0x1e35a7bd000000 >> 0x31 & 0x7ffc)) = iVar4 + -2;
  uVar23 = (uVar18 >> 0x18) * 0x1e35a7bd000000 >> 0x31 & 0x7ffc;
  *(int *)(unaff_x24 + ((uVar18 >> 0x10) * 0x1e35a7bd000000 >> 0x31 & 0x7ffc)) = iVar4 + -1;
  iVar9 = *(int *)(unaff_x24 + uVar23);
  *(int *)(unaff_x24 + uVar23) = iVar4;
  pbVar15 = unaff_x26 + iVar9;
  iVar9 = iVar11;
  if ((*(int *)pbVar24 == *(int *)pbVar15) && (pbVar24[4] == pbVar15[4])) {
    do {
      pbVar21 = pbVar1 + (-5 - (long)pbVar24);
      uVar18 = (ulong)pbVar21 >> 3;
      pbVar14 = pbVar24 + 5;
      if (uVar18 == 0) {
        uVar23 = 0;
        pbVar20 = pbVar14;
      }
      else {
        uVar23 = (ulong)pbVar21 & 0xfffffffffffffff8;
        lVar12 = 0;
        pbVar20 = pbVar14 + uVar23;
        do {
          if (*(ulong *)(pbVar14 + lVar12) != *(ulong *)(pbVar15 + lVar12 + 5)) {
            uVar18 = *(ulong *)(pbVar15 + lVar12 + 5) ^ *(ulong *)(pbVar14 + lVar12);
            uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
            uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
            uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
            uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
            uVar18 = lVar12 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3);
            goto LAB_01c3ce84;
          }
          uVar18 = uVar18 - 1;
          lVar12 = lVar12 + 8;
        } while (uVar18 != 0);
      }
      uVar10 = (ulong)pbVar21 & 7;
      uVar18 = uVar23;
      if (uVar10 != 0) {
        uVar22 = uVar23 | uVar10;
        do {
          uVar18 = uVar23;
          if (pbVar15[uVar23 + 5] != *pbVar20) break;
          pbVar20 = pbVar20 + 1;
          uVar10 = uVar10 - 1;
          uVar23 = uVar23 + 1;
          uVar18 = uVar22;
        } while (uVar10 != 0);
      }
LAB_01c3ce84:
      iVar9 = iVar11;
      if (0x3fff0 < (long)pbVar24 - (long)pbVar15) break;
      uVar23 = uVar18 + 5;
      if (uVar23 < 10) {
        uVar22 = *unaff_x28;
        lVar12 = uVar18 + 0x13;
        uVar10 = uVar22 + *(byte *)(unaff_x21 + lVar12);
        *(ulong *)(unaff_x29 + (uVar22 >> 3)) =
             (ulong)*(ushort *)(in_stack_000000a0 + lVar12 * 2) << (uVar22 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar22 >> 3));
        *unaff_x28 = uVar10;
        piVar13 = (int *)(&stack0x000002a8 + lVar12 * 4);
      }
      else if (uVar23 < 0x86) {
        uVar18 = uVar18 - 1;
        uVar10 = *unaff_x28;
        uVar7 = ((uint)LZCOUNT((int)uVar18) ^ 0x1f) - 1;
        uVar5 = (ulong)uVar7;
        uVar16 = uVar18 >> (uVar5 & 0x3f);
        lVar12 = uVar7 * 2 + uVar16 + 0x14;
        uVar22 = uVar10 + *(byte *)(unaff_x21 + lVar12);
        *(ulong *)(unaff_x29 + (uVar10 >> 3)) =
             (ulong)*(ushort *)(in_stack_000000a0 + lVar12 * 2) << (uVar10 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar10 >> 3));
        *unaff_x28 = uVar22;
        uVar10 = uVar22 + uVar5;
        *(ulong *)(unaff_x29 + (uVar22 >> 3)) =
             uVar18 - (uVar16 << (uVar5 & 0x3f)) << (uVar22 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar22 >> 3));
        *unaff_x28 = uVar10;
        piVar13 = (int *)(&stack0x000002a8 + lVar12 * 4);
      }
      else if (uVar23 < 0x846) {
        uVar10 = *unaff_x28;
        uVar5 = (ulong)((uint)LZCOUNT((int)(uVar18 - 0x41)) ^ 0x1f);
        lVar12 = uVar5 + 0x1c;
        uVar22 = uVar10 + *(byte *)(unaff_x21 + lVar12);
        *(ulong *)(unaff_x29 + (uVar10 >> 3)) =
             (ulong)*(ushort *)(in_stack_000000a0 + lVar12 * 2) << (uVar10 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar10 >> 3));
        *unaff_x28 = uVar22;
        uVar10 = uVar22 + uVar5;
        *(ulong *)(unaff_x29 + (uVar22 >> 3)) =
             (-1L << uVar5) + (uVar18 - 0x41) << (uVar22 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar22 >> 3));
        *unaff_x28 = uVar10;
        piVar13 = (int *)(&stack0x000002a8 + lVar12 * 4);
      }
      else {
        uVar10 = *unaff_x28;
        uVar22 = uVar10 + *(byte *)(unaff_x21 + 0x27);
        *(ulong *)(unaff_x29 + (uVar10 >> 3)) =
             (ulong)*(ushort *)(in_stack_000000a0 + 0x4e) << (uVar10 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar10 >> 3));
        *unaff_x28 = uVar22;
        uVar10 = uVar22 + 0x18;
        *(ulong *)(unaff_x29 + (uVar22 >> 3)) =
             uVar18 - 0x841 << (uVar22 & 7) | (ulong)*(byte *)(unaff_x29 + (uVar22 >> 3));
        *unaff_x28 = uVar10;
        piVar13 = piStack0000000000000090;
      }
      iVar11 = (int)((long)pbVar24 - (long)pbVar15);
      uVar18 = (long)iVar11 + 3;
      uVar7 = (uint)LZCOUNT((int)uVar18) ^ 0x1f;
      uVar5 = (ulong)(uVar7 - 1);
      *piVar13 = *piVar13 + 1;
      uVar16 = uVar18 >> (uVar5 & 0x3f);
      lVar12 = ((ulong)(uVar7 * 2 - 4) | uVar16 & 1) + 0x50;
      uVar22 = uVar10 + *(byte *)(unaff_x21 + lVar12);
      *(ulong *)(unaff_x29 + (uVar10 >> 3)) =
           (ulong)*(ushort *)(in_stack_000000a0 + lVar12 * 2) << (uVar10 & 7) |
           (ulong)*(byte *)(unaff_x29 + (uVar10 >> 3));
      *unaff_x28 = uVar22;
      *(ulong *)(unaff_x29 + (uVar22 >> 3)) =
           uVar18 - ((uVar16 & 1 | 2) << (uVar5 & 0x3f)) << (uVar22 & 7) |
           (ulong)*(byte *)(unaff_x29 + (uVar22 >> 3));
      *unaff_x28 = uVar22 + uVar5;
      pbVar24 = pbVar24 + uVar23;
      *(int *)(&stack0x000002a8 + lVar12 * 4) = *(int *)(&stack0x000002a8 + lVar12 * 4) + 1;
      if (pbVar2 <= pbVar24) goto FUN_01c3d2c4;
      uVar18 = *(ulong *)(pbVar24 + -3);
      iVar4 = (int)pbVar24 - iVar25;
      *(int *)(unaff_x24 + (uVar18 * 0x1e35a7bd000000 >> 0x31 & 0x7ffc)) = iVar4 + -3;
      *(int *)(unaff_x24 + ((uVar18 >> 8) * 0x1e35a7bd000000 >> 0x31 & 0x7ffc)) = iVar4 + -2;
      uVar23 = (uVar18 >> 0x18) * 0x1e35a7bd000000 >> 0x31 & 0x7ffc;
      *(int *)(unaff_x24 + ((uVar18 >> 0x10) * 0x1e35a7bd000000 >> 0x31 & 0x7ffc)) = iVar4 + -1;
      iVar9 = *(int *)(unaff_x24 + uVar23);
      *(int *)(unaff_x24 + uVar23) = iVar4;
      pbVar15 = unaff_x26 + iVar9;
      iVar9 = iVar11;
      if ((*(int *)pbVar24 != *(int *)pbVar15) || (pbVar24[4] != pbVar15[4])) break;
    } while( true );
  }
  pbVar14 = pbVar24 + 2;
  pbVar15 = pbVar24;
  if (pbVar2 < pbVar14) goto FUN_01c3d2c4;
  goto LAB_01c3c758;
LAB_01c3d488:
  if (pbVar24 < pbVar1) {
    uVar18 = (long)pbVar1 - (long)pbVar24;
    if (uVar18 >> 1 < 0xc21) {
      if (uVar18 < 6) {
        uVar10 = *unaff_x28;
        lVar12 = uVar18 + 0x28;
        uVar23 = uVar10 + *(byte *)(unaff_x21 + lVar12);
        *(ulong *)(unaff_x29 + (uVar10 >> 3)) =
             (ulong)*(ushort *)(in_stack_000000a0 + lVar12 * 2) << (uVar10 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar10 >> 3));
        *unaff_x28 = uVar23;
        *(int *)(&stack0x000002a8 + lVar12 * 4) = *(int *)(&stack0x000002a8 + lVar12 * 4) + 1;
        if (uVar18 == 0) goto AeLa_EasyFeedback_FormFields_TextField__ONValueChanged;
      }
      else {
        if (uVar18 < 0x82) {
          uVar22 = uVar18 - 2;
          uVar23 = *unaff_x28;
          uVar7 = ((uint)LZCOUNT((int)uVar22) ^ 0x1f) - 1;
          uVar5 = (ulong)uVar7;
          uVar16 = uVar22 >> (uVar5 & 0x3f);
          lVar12 = uVar7 * 2 + uVar16 + 0x2a;
          uVar10 = uVar23 + *(byte *)(unaff_x21 + lVar12);
          *(ulong *)(unaff_x29 + (uVar23 >> 3)) =
               (ulong)*(ushort *)(in_stack_000000a0 + lVar12 * 2) << (uVar23 & 7) |
               (ulong)*(byte *)(unaff_x29 + (uVar23 >> 3));
          *unaff_x28 = uVar10;
          uVar23 = uVar10 + uVar5;
          *(ulong *)(unaff_x29 + (uVar10 >> 3)) =
               uVar22 - (uVar16 << (uVar5 & 0x3f)) << (uVar10 & 7) |
               (ulong)*(byte *)(unaff_x29 + (uVar10 >> 3));
          *unaff_x28 = uVar23;
          piVar13 = (int *)(&stack0x000002a8 + lVar12 * 4);
        }
        else if (uVar18 < 0x842) {
          uVar23 = *unaff_x28;
          uVar22 = (ulong)((uint)LZCOUNT((int)(uVar18 - 0x42)) ^ 0x1f);
          lVar12 = uVar22 + 0x32;
          uVar10 = uVar23 + *(byte *)(unaff_x21 + lVar12);
          *(ulong *)(unaff_x29 + (uVar23 >> 3)) =
               (ulong)*(ushort *)(in_stack_000000a0 + lVar12 * 2) << (uVar23 & 7) |
               (ulong)*(byte *)(unaff_x29 + (uVar23 >> 3));
          *unaff_x28 = uVar10;
          uVar23 = uVar10 + uVar22;
          *(ulong *)(unaff_x29 + (uVar10 >> 3)) =
               (-1L << uVar22) + (uVar18 - 0x42) << (uVar10 & 7) |
               (ulong)*(byte *)(unaff_x29 + (uVar10 >> 3));
          *unaff_x28 = uVar23;
          piVar13 = (int *)(&stack0x000002a8 + lVar12 * 4);
        }
        else {
          uVar23 = *unaff_x28;
          uVar10 = uVar23 + *(byte *)(unaff_x21 + 0x3d);
          *(ulong *)(unaff_x29 + (uVar23 >> 3)) =
               (ulong)*(ushort *)(in_stack_000000a0 + 0x7a) << (uVar23 & 7) |
               (ulong)*(byte *)(unaff_x29 + (uVar23 >> 3));
          *unaff_x28 = uVar10;
          uVar23 = uVar10 + 0xc;
          *(ulong *)(unaff_x29 + (uVar10 >> 3)) =
               uVar18 - 0x842 << (uVar10 & 7) | (ulong)*(byte *)(unaff_x29 + (uVar10 >> 3));
          *unaff_x28 = uVar23;
          piVar13 = piStack0000000000000070;
        }
        *piVar13 = *piVar13 + 1;
      }
      do {
        uVar10 = uVar23 >> 3;
        uVar22 = uVar23 & 7;
        uVar18 = uVar18 - 1;
        uVar23 = uVar23 + *(byte *)(unaff_x23 + (ulong)*pbVar24);
        *(ulong *)(unaff_x29 + uVar10) =
             (ulong)*(ushort *)(unaff_x27 + (ulong)*pbVar24 * 2) << uVar22 |
             (ulong)*(byte *)(unaff_x29 + uVar10);
        *unaff_x28 = uVar23;
        pbVar24 = pbVar24 + 1;
      } while (uVar18 != 0);
    }
    else if ((in_stack_00000048 < 0x3d5) ||
            (uVar23 = ((long)pbVar24 - (long)pbStack0000000000000040) * 0x32,
            uVar18 <= uVar23 && uVar23 - uVar18 != 0)) {
      if (uVar18 < 0x5842) {
        uVar10 = *unaff_x28;
        uVar23 = uVar10 + *(byte *)(unaff_x21 + 0x3e);
        *(ulong *)(unaff_x29 + (uVar10 >> 3)) =
             (ulong)*(ushort *)(in_stack_000000a0 + 0x7c) << (uVar10 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar10 >> 3));
        *unaff_x28 = uVar23;
        *(ulong *)(unaff_x29 + (uVar23 >> 3)) =
             uVar18 - 0x1842 << (uVar23 & 7) | (ulong)*(byte *)(unaff_x29 + (uVar23 >> 3));
        uVar23 = uVar23 + 0xe;
        piVar13 = piStack0000000000000020;
      }
      else {
        uVar10 = *unaff_x28;
        uVar23 = uVar10 + *(byte *)(unaff_x21 + 0x3f);
        *(ulong *)(unaff_x29 + (uVar10 >> 3)) =
             (ulong)*(ushort *)(in_stack_000000a0 + 0x7e) << (uVar10 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar10 >> 3));
        *unaff_x28 = uVar23;
        *(ulong *)(unaff_x29 + (uVar23 >> 3)) =
             uVar18 - 0x5842 << (uVar23 & 7) | (ulong)*(byte *)(unaff_x29 + (uVar23 >> 3));
        uVar23 = uVar23 + 0x18;
        piVar13 = piStack0000000000000028;
      }
      *unaff_x28 = uVar23;
      *piVar13 = *piVar13 + 1;
      do {
        uVar10 = uVar23 >> 3;
        uVar22 = uVar23 & 7;
        uVar18 = uVar18 - 1;
        uVar23 = uVar23 + *(byte *)(unaff_x23 + (ulong)*pbVar24);
        *(ulong *)(unaff_x29 + uVar10) =
             (ulong)*(ushort *)(unaff_x27 + (ulong)*pbVar24 * 2) << uVar22 |
             (ulong)*(byte *)(unaff_x29 + uVar10);
        *unaff_x28 = uVar23;
        pbVar24 = pbVar24 + 1;
      } while (uVar18 != 0);
    }
    else {
      FUN_01c3ec90(pbStack0000000000000040,pbVar1,uStack0000000000000050);
    }
  }
AeLa_EasyFeedback_FormFields_TextField__ONValueChanged:
  pbVar15 = pbVar1;
  if (in_stack_00000088 == (byte *)0x0) {
LAB_01c3d87c:
    if (in_stack_00000010._4_4_ == 0) {
      *in_stack_00000030 = 0;
      *unaff_x19 = 0;
      FUN_01c3eed4(&stack0x000002a8,unaff_x21,in_stack_000000a0);
    }
    if (*(long *)(in_stack_00000018 + 0x28) == in_stack_00000da8) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_01c3d688:
  uStack0000000000000050 = *unaff_x28;
  unaff_x20 = in_stack_00000088;
  if ((byte *)0x17fff < in_stack_00000088) {
    unaff_x20 = (byte *)0x18000;
  }
  FUN_01be9bd4(unaff_x20,0);
  uVar18 = *unaff_x28;
  uVar23 = uVar18 >> 3;
  *(ulong *)(unaff_x29 + uVar23) = (ulong)*(byte *)(unaff_x29 + uVar23);
  *unaff_x28 = uVar18 + 0xd;
  in_stack_00000048 =
       FUN_01c3ed24(in_stack_00000038,pbVar15,unaff_x20,&stack0x00000ca8,&stack0x000000a8);
  FUN_01c3eed4(&stack0x000002a8,unaff_x21,in_stack_000000a0);
  unaff_x22 = uStack0000000000000050;
  goto LAB_01c3c6e8;
}


