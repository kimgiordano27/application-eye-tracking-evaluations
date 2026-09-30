/*
FUNCTION_NAME: AeLa.EasyFeedback.FormFields.PlayerInfoCollector$$FormSubmitted
ENTRY_POINT: 01c3d014
PROGRAM: gunraiders-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_3
*/


void AeLa_EasyFeedback_FormFields_PlayerInfoCollector__FormSubmitted(byte *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long in_x5;
  undefined1 *in_x6;
  byte *in_x7;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  ulong in_x9;
  ulong uVar8;
  int iVar9;
  int *piVar10;
  long in_x10;
  ulong in_x11;
  ulong in_x12;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong in_x13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong in_x14;
  ulong uVar19;
  byte *unaff_x19;
  long lVar20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  int iVar21;
  long unaff_x26;
  long unaff_x27;
  ulong *unaff_x28;
  long unaff_x29;
  double dVar22;
  double dVar23;
  double dVar24;
  double unaff_d9;
  byte bVar25;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  int *in_stack_00000020;
  int *in_stack_00000028;
  undefined1 *in_stack_00000030;
  undefined8 in_stack_00000038;
  byte *in_stack_00000040;
  ulong in_stack_00000048;
  ulong in_stack_00000050;
  long in_stack_00000058;
  byte *in_stack_00000060;
  ulong in_stack_00000068;
  int *in_stack_00000070;
  byte *in_stack_00000078;
  byte *in_stack_00000080;
  byte *in_stack_00000088;
  int *in_stack_00000090;
  int *in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_00000da8;
  
code_r0x01c3d014:
  *(ulong *)(unaff_x29 + in_x14) = in_x12 | in_x13;
  *unaff_x28 = in_x11;
  piVar10 = in_stack_00000090;
LAB_01c3d024:
  iVar9 = (int)in_x10;
  uVar8 = (long)iVar9 + 3;
  uVar5 = (uint)LZCOUNT((int)uVar8) ^ 0x1f;
  uVar3 = (ulong)(uVar5 - 1);
  *piVar10 = *piVar10 + 1;
  uVar11 = uVar8 >> (uVar3 & 0x3f);
  lVar20 = ((ulong)(uVar5 * 2 - 4) | uVar11 & 1) + 0x50;
  uVar14 = in_x11 + *(byte *)(unaff_x21 + lVar20);
  *(ulong *)(unaff_x29 + (in_x11 >> 3)) =
       (ulong)*(ushort *)(in_x5 + lVar20 * 2) << (in_x11 & 7) |
       (ulong)*(byte *)(unaff_x29 + (in_x11 >> 3));
  *unaff_x28 = uVar14;
  *(ulong *)(unaff_x29 + (uVar14 >> 3)) =
       uVar8 - ((uVar11 & 1 | 2) << (uVar3 & 0x3f)) << (uVar14 & 7) |
       (ulong)*(byte *)(unaff_x29 + (uVar14 >> 3));
  *unaff_x28 = uVar14 + uVar3;
  unaff_x19 = unaff_x19 + in_x9;
  *(int *)(in_x6 + lVar20 * 4) = *(int *)(in_x6 + lVar20 * 4) + 1;
  iVar21 = (int)unaff_x26;
  if (param_1 <= unaff_x19) goto FUN_01c3d2c4;
  uVar8 = *(ulong *)(unaff_x19 + -3);
  iVar2 = (int)unaff_x19 - iVar21;
  *(int *)(unaff_x24 + (uVar8 * unaff_x25 >> 0x31 & 0x7ffc)) = iVar2 + -3;
  *(int *)(unaff_x24 + ((uVar8 >> 8) * unaff_x25 >> 0x31 & 0x7ffc)) = iVar2 + -2;
  uVar14 = (uVar8 >> 0x18) * unaff_x25 >> 0x31 & 0x7ffc;
  *(int *)(unaff_x24 + ((uVar8 >> 0x10) * unaff_x25 >> 0x31 & 0x7ffc)) = iVar2 + -1;
  iVar7 = *(int *)(unaff_x24 + uVar14);
  *(int *)(unaff_x24 + uVar14) = iVar2;
  piVar10 = (int *)(unaff_x26 + iVar7);
  iVar7 = iVar9;
  if ((*(int *)unaff_x19 == *piVar10) && (unaff_x19[4] == *(byte *)(piVar10 + 1)))
  goto LAB_01c3ce2c;
AeLa_EasyFeedback_FormFields_PlayerInfoCollector___ctor:
  pbVar6 = unaff_x19 + 2;
  pbVar18 = unaff_x19;
  if (pbVar6 <= param_1) goto LAB_01c3c758;
FUN_01c3d2c4:
  in_stack_00000088 = in_stack_00000088 + -(long)in_stack_00000080;
  in_stack_00000080 = in_stack_00000088;
  if ((byte *)0xffff < in_stack_00000088) {
    in_stack_00000080 = (byte *)0x10000;
  }
  if ((in_stack_00000088 != (byte *)0x0) &&
     (in_stack_00000078 = in_stack_00000080 + (long)in_stack_00000078,
     in_stack_00000078 < (byte *)0x100001)) {
    memset(&stack0x000004a8,0,0x800);
    pbVar6 = (byte *)0x0;
    do {
      pbVar18 = in_x7 + (long)pbVar6;
      pbVar6 = pbVar6 + 0x2b;
      *(long *)(&stack0x000004a8 + (ulong)*pbVar18 * 8) =
           *(long *)(&stack0x000004a8 + (ulong)*pbVar18 * 8) + 1;
    } while (pbVar6 < in_stack_00000080);
    dVar24 = (double)((ulong)(in_stack_00000080 + 0x2a) / 0x2b);
    if (in_stack_00000080 < (byte *)0x2ad6) {
      dVar22 = (double)(&DAT_01041850)[(ulong)(in_stack_00000080 + 0x2a) / 0x2b];
    }
    else {
      dVar22 = log2(dVar24);
    }
    lVar20 = 0;
    dVar24 = dVar24 * (dVar22 + unaff_d9) + 200.0;
    do {
      uVar8 = *(ulong *)(&stack0x000004a8 + lVar20 * 8);
      bVar25 = *(byte *)(unaff_x23 + lVar20);
      if (uVar8 < 0x100) {
        dVar22 = (double)(&DAT_01041850)[uVar8];
      }
      else {
        dVar22 = log2((double)uVar8);
      }
      in_x6 = &stack0x000002a8;
      dVar23 = (double)NEON_ucvtf((ulong)bVar25);
      lVar20 = lVar20 + 1;
      dVar24 = dVar24 - (dVar22 + dVar23) * (double)uVar8;
    } while (lVar20 != 0x100);
    in_x5 = in_stack_000000a0;
    unaff_x21 = in_stack_00000058;
    if (0.0 <= dVar24) {
      uVar14 = 0x14;
      uVar5 = (int)in_stack_00000078 - 1;
      uVar8 = in_stack_00000068;
      do {
        uVar12 = uVar8 & 7;
        uVar11 = uVar8 >> 3;
        uVar3 = uVar14;
        if (8 - uVar12 <= uVar14) {
          uVar3 = 8 - uVar12;
        }
        uVar13 = (uint)uVar3;
        uVar1 = uVar5 & (-1 << (ulong)(uVar13 & 0x1f) ^ 0xffffffffU);
        uVar14 = uVar14 - uVar3;
        uVar5 = uVar5 >> (ulong)(uVar13 & 0x1f);
        uVar8 = uVar3 + uVar8;
        *(byte *)(unaff_x29 + uVar11) =
             ((byte)(-1 << (ulong)(uVar13 + (int)uVar12 & 0x1f)) | (byte)(-1 << uVar12) ^ 0xff) &
             *(byte *)(unaff_x29 + uVar11) | (byte)(uVar1 << uVar12);
        pbVar18 = in_x7;
        if (uVar14 == 0) goto LAB_01c3c700;
      } while( true );
    }
  }
  if (unaff_x19 < in_x7) {
    uVar8 = (long)in_x7 - (long)unaff_x19;
    if (uVar8 >> 1 < 0xc21) {
      if (uVar8 < 6) {
        uVar3 = *unaff_x28;
        lVar20 = uVar8 + 0x28;
        uVar14 = uVar3 + *(byte *)(unaff_x21 + lVar20);
        *(ulong *)(unaff_x29 + (uVar3 >> 3)) =
             (ulong)*(ushort *)(in_x5 + lVar20 * 2) << (uVar3 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar3 >> 3));
        *unaff_x28 = uVar14;
        *(int *)(in_x6 + lVar20 * 4) = *(int *)(in_x6 + lVar20 * 4) + 1;
        if (uVar8 == 0) goto joined_r0x01c3d684;
      }
      else {
        if (uVar8 < 0x82) {
          uVar11 = uVar8 - 2;
          uVar14 = *unaff_x28;
          uVar5 = ((uint)LZCOUNT((int)uVar11) ^ 0x1f) - 1;
          uVar12 = (ulong)uVar5;
          uVar19 = uVar11 >> (uVar12 & 0x3f);
          lVar20 = uVar5 * 2 + uVar19 + 0x2a;
          uVar3 = uVar14 + *(byte *)(unaff_x21 + lVar20);
          *(ulong *)(unaff_x29 + (uVar14 >> 3)) =
               (ulong)*(ushort *)(in_x5 + lVar20 * 2) << (uVar14 & 7) |
               (ulong)*(byte *)(unaff_x29 + (uVar14 >> 3));
          *unaff_x28 = uVar3;
          uVar14 = uVar3 + uVar12;
          *(ulong *)(unaff_x29 + (uVar3 >> 3)) =
               uVar11 - (uVar19 << (uVar12 & 0x3f)) << (uVar3 & 7) |
               (ulong)*(byte *)(unaff_x29 + (uVar3 >> 3));
          *unaff_x28 = uVar14;
          piVar10 = (int *)(in_x6 + lVar20 * 4);
        }
        else if (uVar8 < 0x842) {
          uVar14 = *unaff_x28;
          uVar11 = (ulong)((uint)LZCOUNT((int)(uVar8 - 0x42)) ^ 0x1f);
          lVar20 = uVar11 + 0x32;
          uVar3 = uVar14 + *(byte *)(unaff_x21 + lVar20);
          *(ulong *)(unaff_x29 + (uVar14 >> 3)) =
               (ulong)*(ushort *)(in_x5 + lVar20 * 2) << (uVar14 & 7) |
               (ulong)*(byte *)(unaff_x29 + (uVar14 >> 3));
          *unaff_x28 = uVar3;
          uVar14 = uVar3 + uVar11;
          *(ulong *)(unaff_x29 + (uVar3 >> 3)) =
               (-1L << uVar11) + (uVar8 - 0x42) << (uVar3 & 7) |
               (ulong)*(byte *)(unaff_x29 + (uVar3 >> 3));
          *unaff_x28 = uVar14;
          piVar10 = (int *)(in_x6 + lVar20 * 4);
        }
        else {
          uVar14 = *unaff_x28;
          uVar3 = uVar14 + *(byte *)(unaff_x21 + 0x3d);
          *(ulong *)(unaff_x29 + (uVar14 >> 3)) =
               (ulong)*(ushort *)(in_x5 + 0x7a) << (uVar14 & 7) |
               (ulong)*(byte *)(unaff_x29 + (uVar14 >> 3));
          *unaff_x28 = uVar3;
          uVar14 = uVar3 + 0xc;
          *(ulong *)(unaff_x29 + (uVar3 >> 3)) =
               uVar8 - 0x842 << (uVar3 & 7) | (ulong)*(byte *)(unaff_x29 + (uVar3 >> 3));
          *unaff_x28 = uVar14;
          piVar10 = in_stack_00000070;
        }
        *piVar10 = *piVar10 + 1;
      }
      do {
        uVar3 = uVar14 >> 3;
        uVar11 = uVar14 & 7;
        uVar8 = uVar8 - 1;
        uVar14 = uVar14 + *(byte *)(unaff_x23 + (ulong)*unaff_x19);
        *(ulong *)(unaff_x29 + uVar3) =
             (ulong)*(ushort *)(unaff_x27 + (ulong)*unaff_x19 * 2) << uVar11 |
             (ulong)*(byte *)(unaff_x29 + uVar3);
        *unaff_x28 = uVar14;
        unaff_x19 = unaff_x19 + 1;
      } while (uVar8 != 0);
    }
    else if ((in_stack_00000048 < 0x3d5) ||
            (uVar14 = ((long)unaff_x19 - (long)in_stack_00000040) * 0x32,
            uVar8 <= uVar14 && uVar14 - uVar8 != 0)) {
      if (uVar8 < 0x5842) {
        uVar3 = *unaff_x28;
        uVar14 = uVar3 + *(byte *)(unaff_x21 + 0x3e);
        *(ulong *)(unaff_x29 + (uVar3 >> 3)) =
             (ulong)*(ushort *)(in_x5 + 0x7c) << (uVar3 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar3 >> 3));
        *unaff_x28 = uVar14;
        *(ulong *)(unaff_x29 + (uVar14 >> 3)) =
             uVar8 - 0x1842 << (uVar14 & 7) | (ulong)*(byte *)(unaff_x29 + (uVar14 >> 3));
        uVar14 = uVar14 + 0xe;
        piVar10 = in_stack_00000020;
      }
      else {
        uVar3 = *unaff_x28;
        uVar14 = uVar3 + *(byte *)(unaff_x21 + 0x3f);
        *(ulong *)(unaff_x29 + (uVar3 >> 3)) =
             (ulong)*(ushort *)(in_x5 + 0x7e) << (uVar3 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar3 >> 3));
        *unaff_x28 = uVar14;
        *(ulong *)(unaff_x29 + (uVar14 >> 3)) =
             uVar8 - 0x5842 << (uVar14 & 7) | (ulong)*(byte *)(unaff_x29 + (uVar14 >> 3));
        uVar14 = uVar14 + 0x18;
        piVar10 = in_stack_00000028;
      }
      *unaff_x28 = uVar14;
      *piVar10 = *piVar10 + 1;
      do {
        uVar3 = uVar14 >> 3;
        uVar11 = uVar14 & 7;
        uVar8 = uVar8 - 1;
        uVar14 = uVar14 + *(byte *)(unaff_x23 + (ulong)*unaff_x19);
        *(ulong *)(unaff_x29 + uVar3) =
             (ulong)*(ushort *)(unaff_x27 + (ulong)*unaff_x19 * 2) << uVar11 |
             (ulong)*(byte *)(unaff_x29 + uVar3);
        *unaff_x28 = uVar14;
        unaff_x19 = unaff_x19 + 1;
      } while (uVar8 != 0);
    }
    else {
      FUN_01c3ec90(in_stack_00000040,in_x7,in_stack_00000050);
    }
  }
joined_r0x01c3d684:
  unaff_x19 = in_x7;
  if (in_stack_00000088 == (byte *)0x0) {
    if (in_stack_00000010._4_4_ == 0) {
      *in_stack_00000030 = 0;
      *in_stack_00000008 = 0;
      FUN_01c3eed4(&stack0x000002a8,unaff_x21,in_stack_000000a0);
    }
    if (*(long *)(in_stack_00000018 + 0x28) != in_stack_00000da8) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  in_stack_00000050 = *unaff_x28;
  in_stack_00000078 = in_stack_00000088;
  if ((byte *)0x17fff < in_stack_00000088) {
    in_stack_00000078 = (byte *)0x18000;
  }
  FUN_01be9bd4(in_stack_00000078,0);
  uVar8 = *unaff_x28;
  uVar14 = uVar8 >> 3;
  *(ulong *)(unaff_x29 + uVar14) = (ulong)*(byte *)(unaff_x29 + uVar14);
  *unaff_x28 = uVar8 + 0xd;
  in_stack_00000048 =
       FUN_01c3ed24(in_stack_00000038,unaff_x19,in_stack_00000078,&stack0x00000ca8,&stack0x000000a8)
  ;
  FUN_01c3eed4(&stack0x000002a8,unaff_x21,in_stack_000000a0);
  in_stack_00000068 = in_stack_00000050 + 3;
  pbVar18 = unaff_x19;
  in_stack_00000040 = unaff_x19;
  in_stack_00000080 = in_stack_00000078;
LAB_01c3c700:
  memcpy(&stack0x000002a8,&DAT_00fa1494,0x200);
  in_x7 = pbVar18 + (long)in_stack_00000080;
  if ((byte *)0xf < in_stack_00000080) {
    pbVar6 = pbVar18 + 2;
    param_1 = in_stack_00000080 + -5;
    if (in_stack_00000088 + -0x10 <= in_stack_00000080 + -5) {
      param_1 = in_stack_00000088 + -0x10;
    }
    param_1 = pbVar18 + (long)param_1;
    if (pbVar6 <= param_1) {
      iVar7 = -1;
      in_x6 = &stack0x000002a8;
      in_x5 = in_stack_000000a0;
      in_stack_00000060 = pbVar18;
LAB_01c3c758:
      lVar20 = *(long *)(pbVar18 + 1);
      uVar8 = 0x21;
      pbVar18 = pbVar18 + 1;
      do {
        pbVar15 = pbVar6;
        pbVar6 = pbVar18 + -(long)iVar7;
        uVar14 = lVar20 * unaff_x25;
        lVar20 = *(long *)pbVar15;
        uVar14 = uVar14 >> 0x33;
        if (((*(int *)pbVar18 == *(int *)pbVar6) && (pbVar6 < pbVar18)) && (pbVar18[4] == pbVar6[4])
           ) {
          *(int *)(unaff_x24 + uVar14 * 4) = (int)pbVar18 - iVar21;
LAB_01c3c7ac:
          if ((long)pbVar18 - (long)pbVar6 <= unaff_x22)
          goto AeLa_EasyFeedback_UI_TMP_TMPDropdownWrapper__AddOption;
        }
        else {
          iVar9 = *(int *)(unaff_x24 + uVar14 * 4);
          *(int *)(unaff_x24 + uVar14 * 4) = (int)pbVar18 - iVar21;
          pbVar6 = (byte *)(unaff_x26 + iVar9);
          if ((*(int *)pbVar18 == *(int *)pbVar6) && (pbVar18[4] == pbVar6[4])) goto LAB_01c3c7ac;
        }
        uVar14 = uVar8 >> 5;
        if (param_1 < pbVar15 + uVar14) goto FUN_01c3d2c4;
        uVar8 = (ulong)((int)uVar8 + 1);
        pbVar6 = pbVar15 + uVar14;
        pbVar18 = pbVar15;
      } while( true );
    }
  }
  in_x6 = &stack0x000002a8;
  in_x5 = in_stack_000000a0;
  goto FUN_01c3d2c4;
AeLa_EasyFeedback_UI_TMP_TMPDropdownWrapper__AddOption:
  pbVar17 = in_x7 + (-5 - (long)pbVar18);
  uVar8 = (ulong)pbVar17 >> 3;
  pbVar15 = pbVar18 + 5;
  if (uVar8 == 0) {
    uVar14 = 0;
    pbVar16 = pbVar15;
  }
  else {
    uVar14 = (ulong)pbVar17 & 0xfffffffffffffff8;
    lVar20 = 0;
    pbVar16 = pbVar15 + uVar14;
    do {
      if (*(ulong *)(pbVar15 + lVar20) != *(ulong *)(pbVar6 + lVar20 + 5)) {
        uVar8 = *(ulong *)(pbVar6 + lVar20 + 5) ^ *(ulong *)(pbVar15 + lVar20);
        uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = lVar20 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3);
        goto LAB_01c3c860;
      }
      uVar8 = uVar8 - 1;
      lVar20 = lVar20 + 8;
    } while (uVar8 != 0);
  }
  uVar3 = (ulong)pbVar17 & 7;
  uVar8 = uVar14;
  if (uVar3 != 0) {
    uVar11 = uVar14 | uVar3;
    do {
      uVar8 = uVar14;
      if (pbVar6[uVar14 + 5] != *pbVar16) break;
      pbVar16 = pbVar16 + 1;
      uVar3 = uVar3 - 1;
      uVar14 = uVar14 + 1;
      uVar8 = uVar11;
    } while (uVar3 != 0);
  }
LAB_01c3c860:
  uVar14 = (long)pbVar18 - (long)unaff_x19;
  if (uVar14 >> 1 < 0xc21) {
    if (uVar14 < 6) {
      uVar11 = *unaff_x28;
      lVar20 = uVar14 + 0x28;
      uVar3 = uVar11 + *(byte *)(unaff_x21 + lVar20);
      *(ulong *)(unaff_x29 + (uVar11 >> 3)) =
           (ulong)*(ushort *)(in_x5 + lVar20 * 2) << (uVar11 & 7) |
           (ulong)*(byte *)(unaff_x29 + (uVar11 >> 3));
      *unaff_x28 = uVar3;
      *(int *)(in_x6 + lVar20 * 4) = *(int *)(in_x6 + lVar20 * 4) + 1;
      goto joined_r0x01c3c8b4;
    }
    if (uVar14 < 0x82) {
      uVar12 = uVar14 - 2;
      uVar3 = *unaff_x28;
      uVar5 = ((uint)LZCOUNT((int)uVar12) ^ 0x1f) - 1;
      uVar19 = (ulong)uVar5;
      uVar4 = uVar12 >> (uVar19 & 0x3f);
      lVar20 = uVar5 * 2 + uVar4 + 0x2a;
      uVar11 = uVar3 + *(byte *)(unaff_x21 + lVar20);
      *(ulong *)(unaff_x29 + (uVar3 >> 3)) =
           (ulong)*(ushort *)(in_x5 + lVar20 * 2) << (uVar3 & 7) |
           (ulong)*(byte *)(unaff_x29 + (uVar3 >> 3));
      *unaff_x28 = uVar11;
      uVar3 = uVar11 + uVar19;
      *(ulong *)(unaff_x29 + (uVar11 >> 3)) =
           uVar12 - (uVar4 << (uVar19 & 0x3f)) << (uVar11 & 7) |
           (ulong)*(byte *)(unaff_x29 + (uVar11 >> 3));
      *unaff_x28 = uVar3;
      piVar10 = (int *)(in_x6 + lVar20 * 4);
      goto AeLa_EasyFeedback_FormFields_DropdownField__FormClosed;
    }
    if (0x841 < uVar14) {
      uVar3 = *unaff_x28;
      uVar11 = uVar3 + *(byte *)(unaff_x21 + 0x3d);
      *(ulong *)(unaff_x29 + (uVar3 >> 3)) =
           (ulong)*(ushort *)(in_x5 + 0x7a) << (uVar3 & 7) |
           (ulong)*(byte *)(unaff_x29 + (uVar3 >> 3));
      *unaff_x28 = uVar11;
      uVar3 = uVar11 + 0xc;
      *(ulong *)(unaff_x29 + (uVar11 >> 3)) =
           uVar14 - 0x842 << (uVar11 & 7) | (ulong)*(byte *)(unaff_x29 + (uVar11 >> 3));
      piVar10 = in_stack_00000070;
      goto LAB_01c3ca08;
    }
    uVar3 = *unaff_x28;
    uVar12 = (ulong)((uint)LZCOUNT((int)(uVar14 - 0x42)) ^ 0x1f);
    lVar20 = uVar12 + 0x32;
    uVar11 = uVar3 + *(byte *)(unaff_x21 + lVar20);
    *(ulong *)(unaff_x29 + (uVar3 >> 3)) =
         (ulong)*(ushort *)(in_x5 + lVar20 * 2) << (uVar3 & 7) |
         (ulong)*(byte *)(unaff_x29 + (uVar3 >> 3));
    *unaff_x28 = uVar11;
    uVar3 = uVar11 + uVar12;
    *(ulong *)(unaff_x29 + (uVar11 >> 3)) =
         (-1L << uVar12) + (uVar14 - 0x42) << (uVar11 & 7) |
         (ulong)*(byte *)(unaff_x29 + (uVar11 >> 3));
    *unaff_x28 = uVar3;
    piVar10 = (int *)(in_x6 + lVar20 * 4);
    goto AeLa_EasyFeedback_FormFields_DropdownField__FormClosed;
  }
  if ((in_stack_00000048 < 0x3d5) ||
     (uVar3 = ((long)unaff_x19 - (long)in_stack_00000040) * 0x32,
     uVar14 <= uVar3 && uVar3 - uVar14 != 0)) goto LAB_01c3d204;
  FUN_01c3ec90(in_stack_00000040,pbVar18,in_stack_00000050);
  in_stack_00000088 = in_stack_00000060 + ((long)in_stack_00000088 - (long)pbVar18);
  in_x7 = pbVar18;
  goto joined_r0x01c3d684;
LAB_01c3d204:
  if (uVar14 < 0x5842) {
    uVar3 = *unaff_x28;
    uVar11 = uVar3 + *(byte *)(unaff_x21 + 0x3e);
    *(ulong *)(unaff_x29 + (uVar3 >> 3)) =
         (ulong)*(ushort *)(in_x5 + 0x7c) << (uVar3 & 7) |
         (ulong)*(byte *)(unaff_x29 + (uVar3 >> 3));
    *unaff_x28 = uVar11;
    uVar3 = uVar11 + 0xe;
    *(ulong *)(unaff_x29 + (uVar11 >> 3)) =
         uVar14 - 0x1842 << (uVar11 & 7) | (ulong)*(byte *)(unaff_x29 + (uVar11 >> 3));
    piVar10 = in_stack_00000020;
  }
  else {
    uVar3 = *unaff_x28;
    uVar11 = uVar3 + *(byte *)(unaff_x21 + 0x3f);
    *(ulong *)(unaff_x29 + (uVar3 >> 3)) =
         (ulong)*(ushort *)(in_x5 + 0x7e) << (uVar3 & 7) |
         (ulong)*(byte *)(unaff_x29 + (uVar3 >> 3));
    *unaff_x28 = uVar11;
    uVar3 = uVar11 + 0x18;
    *(ulong *)(unaff_x29 + (uVar11 >> 3)) =
         uVar14 - 0x5842 << (uVar11 & 7) | (ulong)*(byte *)(unaff_x29 + (uVar11 >> 3));
    piVar10 = in_stack_00000028;
  }
LAB_01c3ca08:
  *unaff_x28 = uVar3;
AeLa_EasyFeedback_FormFields_DropdownField__FormClosed:
  *piVar10 = *piVar10 + 1;
  do {
    uVar11 = uVar3 >> 3;
    uVar12 = uVar3 & 7;
    uVar14 = uVar14 - 1;
    uVar3 = uVar3 + *(byte *)(unaff_x23 + (ulong)*unaff_x19);
    *(ulong *)(unaff_x29 + uVar11) =
         (ulong)*(ushort *)(unaff_x27 + (ulong)*unaff_x19 * 2) << uVar12 |
         (ulong)*(byte *)(unaff_x29 + uVar11);
    *unaff_x28 = uVar3;
    unaff_x19 = unaff_x19 + 1;
joined_r0x01c3c8b4:
  } while (uVar14 != 0);
  iVar9 = (int)((long)pbVar18 - (long)pbVar6);
  if (iVar7 == iVar9) {
    uVar11 = uVar3 + *(byte *)(unaff_x21 + 0x40);
    *(ulong *)(unaff_x29 + (uVar3 >> 3)) =
         (ulong)*(ushort *)(in_x5 + 0x80) << (uVar3 & 7) |
         (ulong)*(byte *)(unaff_x29 + (uVar3 >> 3));
    piVar10 = in_stack_00000098;
    iVar9 = iVar7;
  }
  else {
    uVar14 = (long)iVar9 + 3;
    uVar5 = (uint)LZCOUNT((int)uVar14) ^ 0x1f;
    uVar19 = (ulong)(uVar5 - 1);
    uVar4 = uVar14 >> (uVar19 & 0x3f);
    lVar20 = ((ulong)(uVar5 * 2 - 4) | uVar4 & 1) + 0x50;
    uVar12 = uVar3 + *(byte *)(unaff_x21 + lVar20);
    *(ulong *)(unaff_x29 + (uVar3 >> 3)) =
         (ulong)*(ushort *)(in_x5 + lVar20 * 2) << (uVar3 & 7) |
         (ulong)*(byte *)(unaff_x29 + (uVar3 >> 3));
    *unaff_x28 = uVar12;
    uVar11 = uVar12 + uVar19;
    *(ulong *)(unaff_x29 + (uVar12 >> 3)) =
         uVar14 - ((uVar4 & 1 | 2) << (uVar19 & 0x3f)) << (uVar12 & 7) |
         (ulong)*(byte *)(unaff_x29 + (uVar12 >> 3));
    piVar10 = (int *)(in_x6 + lVar20 * 4);
  }
  *unaff_x28 = uVar11;
  uVar14 = uVar8 + 5;
  *piVar10 = *piVar10 + 1;
  if (uVar14 < 0xc) {
    lVar20 = uVar8 + 1;
    bVar25 = *(byte *)(unaff_x21 + lVar20);
    *(ulong *)(unaff_x29 + (uVar11 >> 3)) =
         (ulong)*(ushort *)(in_x5 + lVar20 * 2) << (uVar11 & 7) |
         (ulong)*(byte *)(unaff_x29 + (uVar11 >> 3));
    *unaff_x28 = uVar11 + bVar25;
    piVar10 = (int *)(in_x6 + lVar20 * 4);
  }
  else if (uVar14 < 0x48) {
    uVar8 = uVar8 - 3;
    uVar5 = ((uint)LZCOUNT((int)uVar8) ^ 0x1f) - 1;
    uVar12 = (ulong)uVar5;
    uVar19 = uVar8 >> (uVar12 & 0x3f);
    lVar20 = uVar5 * 2 + uVar19 + 4;
    uVar3 = uVar11 + *(byte *)(unaff_x21 + lVar20);
    *(ulong *)(unaff_x29 + (uVar11 >> 3)) =
         (ulong)*(ushort *)(in_x5 + lVar20 * 2) << (uVar11 & 7) |
         (ulong)*(byte *)(unaff_x29 + (uVar11 >> 3));
    *unaff_x28 = uVar3;
    *(ulong *)(unaff_x29 + (uVar3 >> 3)) =
         uVar8 - (uVar19 << (uVar12 & 0x3f)) << (uVar3 & 7) |
         (ulong)*(byte *)(unaff_x29 + (uVar3 >> 3));
    *unaff_x28 = uVar3 + uVar12;
    piVar10 = (int *)(in_x6 + lVar20 * 4);
  }
  else {
    piVar10 = in_stack_00000098;
    if (uVar14 < 0x88) {
      lVar20 = (uVar8 - 3 >> 5) + 0x1e;
      uVar12 = uVar11 + *(byte *)(unaff_x21 + lVar20);
      *(ulong *)(unaff_x29 + (uVar11 >> 3)) =
           (ulong)*(ushort *)(in_x5 + lVar20 * 2) << (uVar11 & 7) |
           (ulong)*(byte *)(unaff_x29 + (uVar11 >> 3));
      *unaff_x28 = uVar12;
      uVar3 = uVar12 + 5;
      *(ulong *)(unaff_x29 + (uVar12 >> 3)) =
           (uVar8 - 3 & 0x1f) << (uVar12 & 7) | (ulong)*(byte *)(unaff_x29 + (uVar12 >> 3));
      *unaff_x28 = uVar3;
      bVar25 = *(byte *)(unaff_x21 + 0x40);
      *(ulong *)(unaff_x29 + (uVar3 >> 3)) =
           (ulong)*(ushort *)(in_x5 + 0x80) << (uVar3 & 7) |
           (ulong)*(byte *)(unaff_x29 + (uVar3 >> 3));
      *unaff_x28 = uVar3 + bVar25;
      *(int *)(in_x6 + lVar20 * 4) = *(int *)(in_x6 + lVar20 * 4) + 1;
    }
    else {
      uVar3 = uVar11 >> 3;
      if (uVar14 < 0x848) {
        uVar19 = (ulong)((uint)LZCOUNT((int)(uVar8 - 0x43)) ^ 0x1f);
        lVar20 = uVar19 + 0x1c;
        uVar12 = uVar11 + *(byte *)(unaff_x21 + lVar20);
        *(ulong *)(unaff_x29 + uVar3) =
             (ulong)*(ushort *)(in_x5 + lVar20 * 2) << (uVar11 & 7) |
             (ulong)*(byte *)(unaff_x29 + uVar3);
        *unaff_x28 = uVar12;
        uVar3 = uVar12 + uVar19;
        *(ulong *)(unaff_x29 + (uVar12 >> 3)) =
             (-1L << uVar19) + (uVar8 - 0x43) << (uVar12 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar12 >> 3));
        *unaff_x28 = uVar3;
        bVar25 = *(byte *)(unaff_x21 + 0x40);
        *(ulong *)(unaff_x29 + (uVar3 >> 3)) =
             (ulong)*(ushort *)(in_x5 + 0x80) << (uVar3 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar3 >> 3));
        *unaff_x28 = uVar3 + bVar25;
        *(int *)(in_x6 + lVar20 * 4) = *(int *)(in_x6 + lVar20 * 4) + 1;
      }
      else {
        uVar12 = uVar11 + *(byte *)(unaff_x21 + 0x27);
        *(ulong *)(unaff_x29 + uVar3) =
             (ulong)*(ushort *)(in_x5 + 0x4e) << (uVar11 & 7) | (ulong)*(byte *)(unaff_x29 + uVar3);
        *unaff_x28 = uVar12;
        uVar3 = uVar12 + 0x18;
        *(ulong *)(unaff_x29 + (uVar12 >> 3)) =
             uVar8 - 0x843 << (uVar12 & 7) | (ulong)*(byte *)(unaff_x29 + (uVar12 >> 3));
        *unaff_x28 = uVar3;
        bVar25 = *(byte *)(unaff_x21 + 0x40);
        *(ulong *)(unaff_x29 + (uVar3 >> 3)) =
             (ulong)*(ushort *)(in_x5 + 0x80) << (uVar12 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar3 >> 3));
        *unaff_x28 = uVar3 + bVar25;
      }
    }
  }
  unaff_x19 = pbVar18 + uVar14;
  *piVar10 = *piVar10 + 1;
  if (unaff_x19 < param_1) goto AeLa_EasyFeedback_FormFields_GraphicsInfoCollector__FormSubmitted;
  goto FUN_01c3d2c4;
AeLa_EasyFeedback_FormFields_GraphicsInfoCollector__FormSubmitted:
  uVar8 = *(ulong *)(unaff_x19 + -3);
  iVar2 = (int)unaff_x19 - iVar21;
  *(int *)(unaff_x24 + (uVar8 * unaff_x25 >> 0x31 & 0x7ffc)) = iVar2 + -3;
  *(int *)(unaff_x24 + ((uVar8 >> 8) * unaff_x25 >> 0x31 & 0x7ffc)) = iVar2 + -2;
  uVar14 = (uVar8 >> 0x18) * unaff_x25 >> 0x31 & 0x7ffc;
  *(int *)(unaff_x24 + ((uVar8 >> 0x10) * unaff_x25 >> 0x31 & 0x7ffc)) = iVar2 + -1;
  iVar7 = *(int *)(unaff_x24 + uVar14);
  *(int *)(unaff_x24 + uVar14) = iVar2;
  piVar10 = (int *)(unaff_x26 + iVar7);
  iVar7 = iVar9;
  if ((*(int *)unaff_x19 != *piVar10) || (unaff_x19[4] != *(byte *)(piVar10 + 1)))
  goto AeLa_EasyFeedback_FormFields_PlayerInfoCollector___ctor;
LAB_01c3ce2c:
  pbVar18 = in_x7 + (-5 - (long)unaff_x19);
  uVar8 = (ulong)pbVar18 >> 3;
  pbVar6 = unaff_x19 + 5;
  if (uVar8 == 0) {
    uVar14 = 0;
    pbVar15 = pbVar6;
  }
  else {
    uVar14 = (ulong)pbVar18 & 0xfffffffffffffff8;
    lVar20 = 0;
    pbVar15 = pbVar6 + uVar14;
    do {
      uVar3 = *(ulong *)((long)piVar10 + lVar20 + 5);
      if (*(ulong *)(pbVar6 + lVar20) != uVar3) {
        uVar3 = uVar3 ^ *(ulong *)(pbVar6 + lVar20);
        uVar8 = (uVar3 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar3 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = lVar20 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3);
        goto LAB_01c3ce84;
      }
      uVar8 = uVar8 - 1;
      lVar20 = lVar20 + 8;
    } while (uVar8 != 0);
  }
  uVar3 = (ulong)pbVar18 & 7;
  uVar8 = uVar14;
  if (uVar3 != 0) {
    uVar11 = uVar14 | uVar3;
    do {
      uVar8 = uVar14;
      if (*(byte *)((long)piVar10 + uVar14 + 5) != *pbVar15) break;
      pbVar15 = pbVar15 + 1;
      uVar3 = uVar3 - 1;
      uVar14 = uVar14 + 1;
      uVar8 = uVar11;
    } while (uVar3 != 0);
  }
LAB_01c3ce84:
  in_x10 = (long)unaff_x19 - (long)piVar10;
  iVar7 = iVar9;
  if (unaff_x22 < in_x10) goto AeLa_EasyFeedback_FormFields_PlayerInfoCollector___ctor;
  in_x9 = uVar8 + 5;
  if (in_x9 < 10) {
    uVar14 = *unaff_x28;
    lVar20 = uVar8 + 0x13;
    in_x11 = uVar14 + *(byte *)(unaff_x21 + lVar20);
    *(ulong *)(unaff_x29 + (uVar14 >> 3)) =
         (ulong)*(ushort *)(in_x5 + lVar20 * 2) << (uVar14 & 7) |
         (ulong)*(byte *)(unaff_x29 + (uVar14 >> 3));
    *unaff_x28 = in_x11;
    piVar10 = (int *)(in_x6 + lVar20 * 4);
    goto LAB_01c3d024;
  }
  if (in_x9 < 0x86) {
    uVar8 = uVar8 - 1;
    uVar3 = *unaff_x28;
    uVar5 = ((uint)LZCOUNT((int)uVar8) ^ 0x1f) - 1;
    uVar11 = (ulong)uVar5;
    uVar12 = uVar8 >> (uVar11 & 0x3f);
    lVar20 = uVar5 * 2 + uVar12 + 0x14;
    uVar14 = uVar3 + *(byte *)(unaff_x21 + lVar20);
    *(ulong *)(unaff_x29 + (uVar3 >> 3)) =
         (ulong)*(ushort *)(in_x5 + lVar20 * 2) << (uVar3 & 7) |
         (ulong)*(byte *)(unaff_x29 + (uVar3 >> 3));
    *unaff_x28 = uVar14;
    in_x11 = uVar14 + uVar11;
    *(ulong *)(unaff_x29 + (uVar14 >> 3)) =
         uVar8 - (uVar12 << (uVar11 & 0x3f)) << (uVar14 & 7) |
         (ulong)*(byte *)(unaff_x29 + (uVar14 >> 3));
    *unaff_x28 = in_x11;
    piVar10 = (int *)(in_x6 + lVar20 * 4);
    goto LAB_01c3d024;
  }
  if (in_x9 < 0x846) {
    uVar3 = *unaff_x28;
    uVar11 = (ulong)((uint)LZCOUNT((int)(uVar8 - 0x41)) ^ 0x1f);
    lVar20 = uVar11 + 0x1c;
    uVar14 = uVar3 + *(byte *)(unaff_x21 + lVar20);
    *(ulong *)(unaff_x29 + (uVar3 >> 3)) =
         (ulong)*(ushort *)(in_x5 + lVar20 * 2) << (uVar3 & 7) |
         (ulong)*(byte *)(unaff_x29 + (uVar3 >> 3));
    *unaff_x28 = uVar14;
    in_x11 = uVar14 + uVar11;
    *(ulong *)(unaff_x29 + (uVar14 >> 3)) =
         (-1L << uVar11) + (uVar8 - 0x41) << (uVar14 & 7) |
         (ulong)*(byte *)(unaff_x29 + (uVar14 >> 3));
    *unaff_x28 = in_x11;
    piVar10 = (int *)(in_x6 + lVar20 * 4);
    goto LAB_01c3d024;
  }
  uVar3 = *unaff_x28;
  uVar14 = uVar3 + *(byte *)(unaff_x21 + 0x27);
  in_x14 = uVar14 >> 3;
  *(ulong *)(unaff_x29 + (uVar3 >> 3)) =
       (ulong)*(ushort *)(in_x5 + 0x4e) << (uVar3 & 7) | (ulong)*(byte *)(unaff_x29 + (uVar3 >> 3));
  *unaff_x28 = uVar14;
  in_x13 = (ulong)*(byte *)(unaff_x29 + in_x14);
  in_x12 = uVar8 - 0x841 << (uVar14 & 7);
  in_x11 = uVar14 + 0x18;
  goto code_r0x01c3d014;
}


