/*
FUNCTION_NAME: Meta.WitAi.Requests.TextStreamHandler.TextStreamResponseDelegate$$BeginInvoke
ENTRY_POINT: 062f8aec
PROGRAM: Waifu-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Requests_TextStreamHandler_TextStreamResponseDelegate__BeginInvoke(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  float *pfVar9;
  ulong *puVar10;
  long in_x9;
  long in_x10;
  long lVar11;
  long lVar12;
  long lVar13;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ulong uVar22;
  float fVar23;
  ulong uVar24;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  float fVar25;
  undefined8 unaff_d10;
  float fVar26;
  undefined8 unaff_d11;
  float fVar27;
  undefined8 uVar28;
  ulong uVar29;
  int iVar30;
  int iVar31;
  ulong uVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  undefined8 in_stack_00000008;
  float in_stack_00000010;
  float in_stack_000000a0;
  float in_stack_000000b0;
  float in_stack_000000c0;
  float in_stack_000000d0;
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
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  float in_stack_00000258;
  float in_stack_0000025c;
  
  if (in_x9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar11 = *(long *)(in_x10 + 0x38);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar12 = *(long *)(in_x10 + 0x48);
  if (lVar12 == 0) {
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
  lVar13 = *(long *)(unaff_x19 + 0x138);
  if (lVar13 != 0) {
    in_stack_000001c0 = *(undefined8 *)(lVar13 + 0x10);
    in_stack_000001c8 = *(undefined8 *)(lVar13 + 0x18);
    fStack000000000000013c = 0.0;
    in_stack_00000140 = (float)*(undefined8 *)(param_1 + 0x10);
    fStack0000000000000144 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
    in_stack_00000148 = (float)*(undefined8 *)(param_1 + 0x18);
    fStack000000000000014c = (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
    in_stack_00000138 = in_stack_0000025c;
    in_stack_00000150 = *(undefined8 *)(in_x9 + 0x10);
    in_stack_00000158 = *(undefined8 *)(in_x9 + 0x18);
    in_stack_00000160 = *(undefined8 *)(lVar11 + 0x10);
    in_stack_00000168 = *(undefined8 *)(lVar11 + 0x18);
    in_stack_00000170 = *(undefined8 *)(lVar12 + 0x10);
    in_stack_00000178 = *(undefined8 *)(lVar12 + 0x18);
    in_stack_00000180 = in_stack_000000f0;
    in_stack_00000188 = in_stack_000000f8;
    in_stack_00000190 = in_stack_00000100;
    in_stack_00000198 = in_stack_00000108;
    in_stack_000001a0 = in_stack_00000110;
    in_stack_000001a8 = in_stack_00000118;
    in_stack_000001b0 = in_stack_00000120;
    in_stack_000001b8 = in_stack_00000128;
    FUN_0400155c(&stack0x00000138,unaff_w21,DAT_0840ed10);
    iVar7 = FUN_062f6908();
    if (0 < iVar7) {
      lVar11 = *(long *)(unaff_x19 + 0x68);
      iVar7 = FUN_062f6908();
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      FUN_04268e10(lVar11,iVar7,0,
                   *(undefined8 *)(*(long *)(*(long *)(DAT_083eab80 + 0x20) + 0xc0) + 0x88));
      *(int *)(lVar11 + 0x20) = *(int *)(lVar11 + 0x20) + iVar7;
      lVar11 = *(long *)(unaff_x20 + 0x68);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      lVar12 = *(long *)(unaff_x19 + 0x68);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      uVar28 = *(undefined8 *)(lVar11 + 0x10);
      uVar2 = *(undefined8 *)(lVar11 + 0x18);
      uVar1 = *(undefined8 *)(lVar12 + 0x10);
      uVar3 = *(undefined8 *)(lVar12 + 0x18);
      uVar8 = FUN_062f6908();
      in_stack_00000138 = in_stack_00000010;
      in_stack_00000148 = (float)uVar28;
      fStack000000000000014c = (float)((ulong)uVar28 >> 0x20);
      fStack000000000000013c = in_stack_00000258;
      in_stack_00000140 = in_stack_00000258;
      fStack0000000000000144 = in_stack_00000258;
      in_stack_00000150 = uVar2;
      in_stack_00000158 = uVar1;
      in_stack_00000160 = uVar3;
      System_Runtime_CompilerServices_Unsafe__As<byte,_EasingFunction>
                (&stack0x00000138,uVar8,DAT_0840eca0);
    }
    iVar7 = FUN_062f9284();
    if (0 < iVar7) {
      lVar11 = *(long *)(unaff_x19 + 0x70);
      iVar7 = FUN_062f9284();
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      FUN_042680e0(lVar11,iVar7,0,
                   *(undefined8 *)(*(long *)(*(long *)(DAT_083eab20 + 0x20) + 0xc0) + 0x88));
      *(int *)(lVar11 + 0x20) = *(int *)(lVar11 + 0x20) + iVar7;
      lVar11 = *(long *)(unaff_x20 + 0x70);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      lVar12 = *(long *)(unaff_x19 + 0x70);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      uVar28 = *(undefined8 *)(lVar11 + 0x10);
      uVar2 = *(undefined8 *)(lVar11 + 0x18);
      uVar1 = *(undefined8 *)(lVar12 + 0x10);
      uVar3 = *(undefined8 *)(lVar12 + 0x18);
      uVar8 = FUN_062f9284();
      in_stack_00000138 = in_stack_00000008._4_4_;
      fStack0000000000000144 = 0.0;
      in_stack_00000148 = (float)uVar28;
      fStack000000000000014c = (float)((ulong)uVar28 >> 0x20);
      fStack000000000000013c = in_stack_00000258;
      in_stack_00000140 = in_stack_00000258;
      in_stack_00000150 = uVar2;
      in_stack_00000158 = uVar1;
      in_stack_00000160 = uVar3;
      System_Runtime_CompilerServices_Unsafe__As<byte,_BlittableCollider>
                (&stack0x00000138,uVar8,DAT_0840ec98);
    }
    pfVar9 = *(float **)(unaff_x20 + 0x148);
    fVar14 = *pfVar9;
    fVar15 = pfVar9[1];
    fVar17 = pfVar9[2];
    fVar18 = pfVar9[3];
    fVar21 = pfVar9[4];
    fVar23 = pfVar9[5];
    puVar10 = *(ulong **)(unaff_x19 + 0x148);
    fVar25 = (float)((ulong)unaff_d9 >> 0x20);
    fVar26 = (float)((ulong)unaff_d10 >> 0x20);
    fVar27 = (float)((ulong)unaff_d11 >> 0x20);
    fVar19 = (float)unaff_d8 +
             (float)unaff_d9 * fVar14 + (float)unaff_d10 * fVar15 + (float)unaff_d11 * fVar17;
    fVar16 = (float)((ulong)unaff_d8 >> 0x20);
    fVar20 = fVar16 + fVar25 * fVar14 + fVar26 * fVar15 + fVar27 * fVar17;
    fVar15 = in_stack_000000d0 +
             fVar14 * in_stack_000000c0 + fVar15 * in_stack_000000b0 + fVar17 * in_stack_000000a0;
    fVar14 = (float)unaff_d8 +
             (float)unaff_d9 * fVar18 + (float)unaff_d10 * fVar21 + (float)unaff_d11 * fVar23;
    fVar16 = fVar16 + fVar25 * fVar18 + fVar26 * fVar21 + fVar27 * fVar23;
    in_stack_000000d0 =
         in_stack_000000d0 +
         fVar18 * in_stack_000000c0 + fVar21 * in_stack_000000b0 + fVar23 * in_stack_000000a0;
    if (puVar10 == (ulong *)0x0) {
      in_stack_000000e0 = 0;
      in_stack_000000e8 = 0;
      in_stack_00000138 = fVar19;
      fStack000000000000013c = fVar20;
      in_stack_00000140 = fVar15;
      fStack0000000000000144 = fVar14;
      in_stack_00000148 = fVar16;
      fStack000000000000014c = in_stack_000000d0;
      FUN_04ed2950(&stack0x000000e0,&stack0x00000138,4,DAT_083f9990);
      *(undefined8 *)(unaff_x19 + 0x150) = in_stack_000000e8;
      *(undefined8 *)(unaff_x19 + 0x148) = in_stack_000000e0;
    }
    else {
      uVar22 = *puVar10;
      uVar24 = *(ulong *)((long)puVar10 + 0xc);
      uVar29 = CONCAT44(fVar20,fVar19) & 0x7fffffff7fffffff;
      uVar32 = CONCAT44(fVar16,fVar14) & 0x7fffffff7fffffff;
      iVar7 = -(uint)(0x7f800000 < (uint)uVar29);
      iVar30 = -(uint)(0x7f800000 < (uint)(uVar29 >> 0x20));
      iVar31 = -(uint)(0x7f800000 < (uint)uVar32);
      iVar33 = -(uint)(0x7f800000 < (uint)(uVar32 >> 0x20));
      iVar34 = -(uint)((float)uVar22 < fVar19);
      iVar36 = -(uint)((float)(uVar22 >> 0x20) < fVar20);
      iVar35 = -(uint)(fVar14 < (float)uVar24);
      iVar37 = -(uint)(fVar16 < (float)(uVar24 >> 0x20));
      fVar17 = *(float *)(puVar10 + 1);
      if (fVar15 <= *(float *)(puVar10 + 1) && (uint)ABS(fVar15) < 0x7f800001) {
        fVar17 = fVar15;
      }
      fVar15 = *(float *)((long)puVar10 + 0x14);
      if (*(float *)((long)puVar10 + 0x14) <= in_stack_000000d0 &&
          (uint)ABS(in_stack_000000d0) < 0x7f800001) {
        fVar15 = in_stack_000000d0;
      }
      *puVar10 = CONCAT44(fVar20,fVar19) ^
                 (CONCAT44(fVar20,fVar19) ^ uVar22) &
                 CONCAT17((byte)((uint)iVar30 >> 0x18) | (byte)((uint)iVar36 >> 0x18),
                          CONCAT16((byte)((uint)iVar30 >> 0x10) | (byte)((uint)iVar36 >> 0x10),
                                   CONCAT15((byte)((uint)iVar30 >> 8) | (byte)((uint)iVar36 >> 8),
                                            CONCAT14((byte)iVar30 | (byte)iVar36,
                                                     CONCAT13((byte)((uint)iVar7 >> 0x18) |
                                                              (byte)((uint)iVar34 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar7 >> 0x10) |
                                                                       (byte)((uint)iVar34 >> 0x10),
                                                                       CONCAT11((byte)((uint)iVar7
                                                                                      >> 8) |
                                                                                (byte)((uint)iVar34
                                                                                      >> 8),
                                                                                (byte)iVar7 |
                                                                                (byte)iVar34)))))));
      *(float *)(puVar10 + 1) = fVar17;
      *(ulong *)((long)puVar10 + 0xc) =
           CONCAT44(fVar16,fVar14) ^
           (CONCAT44(fVar16,fVar14) ^ uVar24) &
           CONCAT17((byte)((uint)iVar33 >> 0x18) | (byte)((uint)iVar37 >> 0x18),
                    CONCAT16((byte)((uint)iVar33 >> 0x10) | (byte)((uint)iVar37 >> 0x10),
                             CONCAT15((byte)((uint)iVar33 >> 8) | (byte)((uint)iVar37 >> 8),
                                      CONCAT14((byte)iVar33 | (byte)iVar37,
                                               CONCAT13((byte)((uint)iVar31 >> 0x18) |
                                                        (byte)((uint)iVar35 >> 0x18),
                                                        CONCAT12((byte)((uint)iVar31 >> 0x10) |
                                                                 (byte)((uint)iVar35 >> 0x10),
                                                                 CONCAT11((byte)((uint)iVar31 >> 8)
                                                                          | (byte)((uint)iVar35 >> 8
                                                                                  ),
                                                                          (byte)iVar31 |
                                                                          (byte)iVar35)))))));
      *(float *)((long)puVar10 + 0x14) = fVar15;
    }
    fVar14 = *(float *)(unaff_x20 + 0x11c);
    fVar15 = *(float *)(unaff_x20 + 0x120);
    fVar16 = *(float *)(unaff_x20 + 0x124);
    if (DAT_086d90cb == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086d90cb = '\x01';
    }
    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
      FUN_033b9870();
      fVar17 = *(float *)(unaff_x19 + 0x11c);
      uVar28 = *(undefined8 *)(unaff_x19 + 0x120);
      if (DAT_086d90cb == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086d90cb = '\x01';
      }
    }
    else {
      fVar17 = *(float *)(unaff_x19 + 0x11c);
      uVar28 = *(undefined8 *)(unaff_x19 + 0x120);
    }
    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar18 = (float)((ulong)uVar28 >> 0x20);
    fVar15 = SQRT(fVar16 * fVar16 + fVar14 * fVar14 + fVar15 * fVar15) /
             SQRT(fVar18 * fVar18 + fVar17 * fVar17 + (float)uVar28 * (float)uVar28);
    fVar14 = **(float **)(unaff_x19 + 0x158);
    fVar16 = fVar15 * **(float **)(unaff_x20 + 0x158);
    bVar4 = false;
    bVar5 = false;
    bVar6 = false;
    if ((uint)ABS(fVar16) < 0x7f800001) {
      bVar4 = false;
      bVar5 = false;
      bVar6 = true;
      if (!NAN(fVar14) && !NAN(fVar16)) {
        bVar4 = fVar14 < fVar16;
        bVar5 = fVar14 == fVar16;
        bVar6 = false;
      }
    }
    if (bVar5 || bVar4 != bVar6) {
      fVar14 = fVar16;
    }
    **(float **)(unaff_x19 + 0x158) = fVar14;
    fVar14 = **(float **)(unaff_x19 + 0x168);
    fVar15 = fVar15 * **(float **)(unaff_x20 + 0x168);
    bVar4 = false;
    bVar5 = false;
    bVar6 = false;
    if ((uint)ABS(fVar15) < 0x7f800001) {
      bVar4 = false;
      bVar5 = false;
      bVar6 = true;
      if (!NAN(fVar14) && !NAN(fVar15)) {
        bVar4 = fVar14 < fVar15;
        bVar5 = fVar14 == fVar15;
        bVar6 = false;
      }
    }
    if (bVar5 || bVar4 != bVar6) {
      fVar14 = fVar15;
    }
    **(float **)(unaff_x19 + 0x168) = fVar14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


