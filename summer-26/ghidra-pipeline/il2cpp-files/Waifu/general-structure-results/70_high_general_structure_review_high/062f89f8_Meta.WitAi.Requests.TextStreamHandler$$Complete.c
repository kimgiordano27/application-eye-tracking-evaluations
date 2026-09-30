/*
FUNCTION_NAME: Meta.WitAi.Requests.TextStreamHandler$$Complete
ENTRY_POINT: 062f89f8
PROGRAM: Waifu-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_16;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void Meta_WitAi_Requests_TextStreamHandler__Complete(undefined8 param_1)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  float *pfVar7;
  ulong *puVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  float fVar21;
  ulong uVar22;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  float fVar23;
  undefined8 unaff_d10;
  float fVar24;
  undefined8 unaff_d11;
  float fVar25;
  undefined8 uVar26;
  ulong uVar27;
  int iVar28;
  int iVar29;
  ulong uVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  int iStack0000000000000014;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  float in_stack_000000b0;
  float in_stack_000000c0;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  float in_stack_00000138;
  float fStack000000000000013c;
  float in_stack_00000140;
  float fStack0000000000000144;
  float in_stack_00000148;
  float fStack000000000000014c;
  undefined8 uStack0000000000000158;
  undefined8 uStack0000000000000168;
  undefined8 uStack0000000000000178;
  undefined8 uStack0000000000000180;
  undefined8 uStack0000000000000188;
  undefined8 uStack0000000000000190;
  undefined8 uStack0000000000000198;
  undefined8 uStack00000000000001a0;
  undefined8 uStack00000000000001a8;
  undefined8 uStack00000000000001b0;
  undefined8 uStack00000000000001b8;
  undefined8 uStack00000000000001c0;
  undefined8 uStack00000000000001c8;
  undefined8 uStack00000000000001d0;
  undefined8 uStack00000000000001d8;
  undefined8 uStack00000000000001e0;
  undefined8 uStack00000000000001e8;
  float in_stack_00000258;
  float in_stack_0000025c;
  
  uStack0000000000000188 = in_stack_00000090;
  uStack0000000000000168 = in_stack_000000a0;
  uStack0000000000000190 = in_stack_00000088;
  uStack0000000000000198 = in_stack_00000080;
  uStack0000000000000178 = in_stack_000000d0;
  uStack00000000000001a0 = in_stack_00000078;
  uStack00000000000001a8 = in_stack_00000070;
  uStack00000000000001b0 = in_stack_00000068;
  uStack00000000000001b8 = in_stack_00000060;
  uStack00000000000001c0 = in_stack_00000058;
  uStack00000000000001c8 = in_stack_00000050;
  uStack00000000000001d0 = in_stack_00000048;
  uStack00000000000001d8 = in_stack_00000040;
  uStack00000000000001e0 = in_stack_00000038;
  uStack00000000000001e8 = in_stack_00000030;
  uStack0000000000000158 = param_1;
  FUN_040015cc(&stack0x00000138);
  lVar11 = *(long *)(unaff_x19 + 0x138);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  FUN_042673bc(lVar11,iStack0000000000000014,0,
               *(undefined8 *)(*(long *)(*(long *)(DAT_083eaad8 + 0x20) + 0xc0) + 0x88));
  *(int *)(lVar11 + 0x20) = *(int *)(lVar11 + 0x20) + iStack0000000000000014;
  lVar11 = *(long *)(unaff_x20 + 0x130);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar9 = *(long *)(unaff_x20 + 0x140);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(long *)(lVar9 + 0x30) != 0) {
    if (*(long *)(lVar9 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (*(long *)(lVar9 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    in_stack_00000128 = *(undefined8 *)(unaff_x19 + 0xb4);
    in_stack_00000120 = *(undefined8 *)(unaff_x19 + 0xac);
    in_stack_00000118 = *(undefined8 *)(unaff_x19 + 0xa4);
    in_stack_00000110 = *(undefined8 *)(unaff_x19 + 0x9c);
    in_stack_00000108 = *(undefined8 *)(unaff_x19 + 0x94);
    in_stack_00000100 = *(undefined8 *)(unaff_x19 + 0x8c);
    in_stack_000000f8 = *(undefined8 *)(unaff_x19 + 0x84);
    in_stack_000000f0 = *(undefined8 *)(unaff_x19 + 0x7c);
    lVar10 = *(long *)(unaff_x19 + 0x138);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    uStack00000000000001c0 = *(undefined8 *)(lVar10 + 0x10);
    uStack00000000000001c8 = *(undefined8 *)(lVar10 + 0x18);
    fStack000000000000013c = 0.0;
    in_stack_00000140 = (float)*(undefined8 *)(lVar11 + 0x10);
    fStack0000000000000144 = (float)((ulong)*(undefined8 *)(lVar11 + 0x10) >> 0x20);
    in_stack_00000148 = (float)*(undefined8 *)(lVar11 + 0x18);
    fStack000000000000014c = (float)((ulong)*(undefined8 *)(lVar11 + 0x18) >> 0x20);
    in_stack_00000138 = in_stack_0000025c;
    uStack0000000000000158 = *(undefined8 *)(*(long *)(lVar9 + 0x30) + 0x18);
    uStack0000000000000168 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x18);
    uStack0000000000000178 = *(undefined8 *)(*(long *)(lVar9 + 0x48) + 0x18);
    uStack0000000000000180 = in_stack_000000f0;
    uStack0000000000000188 = in_stack_000000f8;
    uStack0000000000000190 = in_stack_00000100;
    uStack0000000000000198 = in_stack_00000108;
    uStack00000000000001a0 = in_stack_00000110;
    uStack00000000000001a8 = in_stack_00000118;
    uStack00000000000001b0 = in_stack_00000120;
    uStack00000000000001b8 = in_stack_00000128;
    FUN_0400155c(&stack0x00000138,iStack0000000000000014,DAT_0840ed10);
    iVar5 = FUN_062f6908();
    if (0 < iVar5) {
      lVar11 = *(long *)(unaff_x19 + 0x68);
      iVar5 = FUN_062f6908();
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      FUN_04268e10(lVar11,iVar5,0,
                   *(undefined8 *)(*(long *)(*(long *)(DAT_083eab80 + 0x20) + 0xc0) + 0x88));
      *(int *)(lVar11 + 0x20) = *(int *)(lVar11 + 0x20) + iVar5;
      if (*(long *)(unaff_x20 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if (*(long *)(unaff_x19 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      uVar26 = *(undefined8 *)(*(long *)(unaff_x20 + 0x68) + 0x10);
      uVar1 = *(undefined8 *)(*(long *)(unaff_x19 + 0x68) + 0x10);
      uVar6 = FUN_062f6908();
      in_stack_00000138 = fStack0000000000000010;
      in_stack_00000148 = (float)uVar26;
      fStack000000000000014c = (float)((ulong)uVar26 >> 0x20);
      fStack000000000000013c = in_stack_00000258;
      in_stack_00000140 = in_stack_00000258;
      fStack0000000000000144 = in_stack_00000258;
      uStack0000000000000158 = uVar1;
      System_Runtime_CompilerServices_Unsafe__As<byte,_EasingFunction>
                (&stack0x00000138,uVar6,DAT_0840eca0);
    }
    iVar5 = FUN_062f9284();
    if (0 < iVar5) {
      lVar11 = *(long *)(unaff_x19 + 0x70);
      iVar5 = FUN_062f9284();
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      FUN_042680e0(lVar11,iVar5,0,
                   *(undefined8 *)(*(long *)(*(long *)(DAT_083eab20 + 0x20) + 0xc0) + 0x88));
      *(int *)(lVar11 + 0x20) = *(int *)(lVar11 + 0x20) + iVar5;
      if (*(long *)(unaff_x20 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if (*(long *)(unaff_x19 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      uVar26 = *(undefined8 *)(*(long *)(unaff_x20 + 0x70) + 0x10);
      uVar1 = *(undefined8 *)(*(long *)(unaff_x19 + 0x70) + 0x10);
      uVar6 = FUN_062f9284();
      in_stack_00000138 = in_stack_00000008._4_4_;
      fStack0000000000000144 = 0.0;
      in_stack_00000148 = (float)uVar26;
      fStack000000000000014c = (float)((ulong)uVar26 >> 0x20);
      fStack000000000000013c = in_stack_00000258;
      in_stack_00000140 = in_stack_00000258;
      uStack0000000000000158 = uVar1;
      System_Runtime_CompilerServices_Unsafe__As<byte,_BlittableCollider>
                (&stack0x00000138,uVar6,DAT_0840ec98);
    }
    pfVar7 = *(float **)(unaff_x20 + 0x148);
    fVar12 = *pfVar7;
    fVar13 = pfVar7[1];
    fVar15 = pfVar7[2];
    fVar16 = pfVar7[3];
    fVar19 = pfVar7[4];
    fVar21 = pfVar7[5];
    puVar8 = *(ulong **)(unaff_x19 + 0x148);
    fVar23 = (float)((ulong)unaff_d9 >> 0x20);
    fVar24 = (float)((ulong)unaff_d10 >> 0x20);
    fVar25 = (float)((ulong)unaff_d11 >> 0x20);
    fVar17 = (float)unaff_d8 +
             (float)unaff_d9 * fVar12 + (float)unaff_d10 * fVar13 + (float)unaff_d11 * fVar15;
    fVar14 = (float)((ulong)unaff_d8 >> 0x20);
    fVar18 = fVar14 + fVar23 * fVar12 + fVar24 * fVar13 + fVar25 * fVar15;
    fVar15 = (float)in_stack_000000d0 +
             fVar12 * in_stack_000000c0 + fVar13 * in_stack_000000b0 +
             fVar15 * (float)in_stack_000000a0;
    fVar13 = (float)unaff_d8 +
             (float)unaff_d9 * fVar16 + (float)unaff_d10 * fVar19 + (float)unaff_d11 * fVar21;
    fVar14 = fVar14 + fVar23 * fVar16 + fVar24 * fVar19 + fVar25 * fVar21;
    fVar12 = (float)in_stack_000000d0 +
             fVar16 * in_stack_000000c0 + fVar19 * in_stack_000000b0 +
             fVar21 * (float)in_stack_000000a0;
    if (puVar8 == (ulong *)0x0) {
      in_stack_000000e0 = 0;
      in_stack_000000e8 = 0;
      in_stack_00000138 = fVar17;
      fStack000000000000013c = fVar18;
      in_stack_00000140 = fVar15;
      fStack0000000000000144 = fVar13;
      in_stack_00000148 = fVar14;
      fStack000000000000014c = fVar12;
      FUN_04ed2950(&stack0x000000e0,&stack0x00000138,4,DAT_083f9990);
      *(undefined8 *)(unaff_x19 + 0x150) = in_stack_000000e8;
      *(undefined8 *)(unaff_x19 + 0x148) = in_stack_000000e0;
    }
    else {
      uVar20 = *puVar8;
      uVar22 = *(ulong *)((long)puVar8 + 0xc);
      uVar27 = CONCAT44(fVar18,fVar17) & 0x7fffffff7fffffff;
      uVar30 = CONCAT44(fVar14,fVar13) & 0x7fffffff7fffffff;
      iVar5 = -(uint)(0x7f800000 < (uint)uVar27);
      iVar28 = -(uint)(0x7f800000 < (uint)(uVar27 >> 0x20));
      iVar29 = -(uint)(0x7f800000 < (uint)uVar30);
      iVar31 = -(uint)(0x7f800000 < (uint)(uVar30 >> 0x20));
      iVar32 = -(uint)((float)uVar20 < fVar17);
      iVar34 = -(uint)((float)(uVar20 >> 0x20) < fVar18);
      iVar33 = -(uint)(fVar13 < (float)uVar22);
      iVar35 = -(uint)(fVar14 < (float)(uVar22 >> 0x20));
      fVar16 = *(float *)(puVar8 + 1);
      if (fVar15 <= *(float *)(puVar8 + 1) && (uint)ABS(fVar15) < 0x7f800001) {
        fVar16 = fVar15;
      }
      fVar15 = *(float *)((long)puVar8 + 0x14);
      if (*(float *)((long)puVar8 + 0x14) <= fVar12 && (uint)ABS(fVar12) < 0x7f800001) {
        fVar15 = fVar12;
      }
      *puVar8 = CONCAT44(fVar18,fVar17) ^
                (CONCAT44(fVar18,fVar17) ^ uVar20) &
                CONCAT17((byte)((uint)iVar28 >> 0x18) | (byte)((uint)iVar34 >> 0x18),
                         CONCAT16((byte)((uint)iVar28 >> 0x10) | (byte)((uint)iVar34 >> 0x10),
                                  CONCAT15((byte)((uint)iVar28 >> 8) | (byte)((uint)iVar34 >> 8),
                                           CONCAT14((byte)iVar28 | (byte)iVar34,
                                                    CONCAT13((byte)((uint)iVar5 >> 0x18) |
                                                             (byte)((uint)iVar32 >> 0x18),
                                                             CONCAT12((byte)((uint)iVar5 >> 0x10) |
                                                                      (byte)((uint)iVar32 >> 0x10),
                                                                      CONCAT11((byte)((uint)iVar5 >>
                                                                                     8) |
                                                                               (byte)((uint)iVar32
                                                                                     >> 8),
                                                                               (byte)iVar5 |
                                                                               (byte)iVar32)))))));
      *(float *)(puVar8 + 1) = fVar16;
      *(ulong *)((long)puVar8 + 0xc) =
           CONCAT44(fVar14,fVar13) ^
           (CONCAT44(fVar14,fVar13) ^ uVar22) &
           CONCAT17((byte)((uint)iVar31 >> 0x18) | (byte)((uint)iVar35 >> 0x18),
                    CONCAT16((byte)((uint)iVar31 >> 0x10) | (byte)((uint)iVar35 >> 0x10),
                             CONCAT15((byte)((uint)iVar31 >> 8) | (byte)((uint)iVar35 >> 8),
                                      CONCAT14((byte)iVar31 | (byte)iVar35,
                                               CONCAT13((byte)((uint)iVar29 >> 0x18) |
                                                        (byte)((uint)iVar33 >> 0x18),
                                                        CONCAT12((byte)((uint)iVar29 >> 0x10) |
                                                                 (byte)((uint)iVar33 >> 0x10),
                                                                 CONCAT11((byte)((uint)iVar29 >> 8)
                                                                          | (byte)((uint)iVar33 >> 8
                                                                                  ),
                                                                          (byte)iVar29 |
                                                                          (byte)iVar33)))))));
      *(float *)((long)puVar8 + 0x14) = fVar15;
    }
    fVar12 = *(float *)(unaff_x20 + 0x11c);
    fVar13 = *(float *)(unaff_x20 + 0x120);
    fVar14 = *(float *)(unaff_x20 + 0x124);
    if (DAT_086d90cb == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086d90cb = '\x01';
    }
    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
      FUN_033b9870();
      fVar15 = *(float *)(unaff_x19 + 0x11c);
      uVar26 = *(undefined8 *)(unaff_x19 + 0x120);
      if (DAT_086d90cb == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086d90cb = '\x01';
      }
    }
    else {
      fVar15 = *(float *)(unaff_x19 + 0x11c);
      uVar26 = *(undefined8 *)(unaff_x19 + 0x120);
    }
    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar16 = (float)((ulong)uVar26 >> 0x20);
    fVar13 = SQRT(fVar14 * fVar14 + fVar12 * fVar12 + fVar13 * fVar13) /
             SQRT(fVar16 * fVar16 + fVar15 * fVar15 + (float)uVar26 * (float)uVar26);
    fVar12 = **(float **)(unaff_x19 + 0x158);
    fVar14 = fVar13 * **(float **)(unaff_x20 + 0x158);
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    if ((uint)ABS(fVar14) < 0x7f800001) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar12) && !NAN(fVar14)) {
        bVar2 = fVar12 < fVar14;
        bVar3 = fVar12 == fVar14;
        bVar4 = false;
      }
    }
    if (bVar3 || bVar2 != bVar4) {
      fVar12 = fVar14;
    }
    **(float **)(unaff_x19 + 0x158) = fVar12;
    fVar12 = **(float **)(unaff_x19 + 0x168);
    fVar13 = fVar13 * **(float **)(unaff_x20 + 0x168);
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    if ((uint)ABS(fVar13) < 0x7f800001) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar12) && !NAN(fVar13)) {
        bVar2 = fVar12 < fVar13;
        bVar3 = fVar12 == fVar13;
        bVar4 = false;
      }
    }
    if (bVar3 || bVar2 != bVar4) {
      fVar12 = fVar13;
    }
    **(float **)(unaff_x19 + 0x168) = fVar12;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


