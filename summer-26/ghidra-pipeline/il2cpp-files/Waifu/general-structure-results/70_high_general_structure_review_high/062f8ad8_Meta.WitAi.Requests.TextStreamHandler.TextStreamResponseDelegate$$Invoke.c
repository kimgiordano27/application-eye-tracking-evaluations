/*
FUNCTION_NAME: Meta.WitAi.Requests.TextStreamHandler.TextStreamResponseDelegate$$Invoke
ENTRY_POINT: 062f8ad8
PROGRAM: Waifu-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Requests_TextStreamHandler_TextStreamResponseDelegate__Invoke(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  float *pfVar10;
  ulong *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  ulong uVar24;
  float fVar25;
  ulong uVar26;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  float fVar27;
  undefined8 unaff_d10;
  float fVar28;
  undefined8 unaff_d11;
  float fVar29;
  undefined8 uVar30;
  ulong uVar31;
  int iVar32;
  int iVar33;
  ulong uVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
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
  
  lVar9 = *(long *)(unaff_x20 + 0x130);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar13 = *(long *)(unaff_x20 + 0x140);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar12 = *(long *)(lVar13 + 0x30);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar14 = *(long *)(lVar13 + 0x38);
  if (lVar14 != 0) {
    lVar13 = *(long *)(lVar13 + 0x48);
    if (lVar13 == 0) {
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
    lVar15 = *(long *)(unaff_x19 + 0x138);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    in_stack_000001c0 = *(undefined8 *)(lVar15 + 0x10);
    in_stack_000001c8 = *(undefined8 *)(lVar15 + 0x18);
    fStack000000000000013c = 0.0;
    in_stack_00000140 = (float)*(undefined8 *)(lVar9 + 0x10);
    fStack0000000000000144 = (float)((ulong)*(undefined8 *)(lVar9 + 0x10) >> 0x20);
    in_stack_00000148 = (float)*(undefined8 *)(lVar9 + 0x18);
    fStack000000000000014c = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20);
    in_stack_00000138 = in_stack_0000025c;
    in_stack_00000150 = *(undefined8 *)(lVar12 + 0x10);
    in_stack_00000158 = *(undefined8 *)(lVar12 + 0x18);
    in_stack_00000160 = *(undefined8 *)(lVar14 + 0x10);
    in_stack_00000168 = *(undefined8 *)(lVar14 + 0x18);
    in_stack_00000170 = *(undefined8 *)(lVar13 + 0x10);
    in_stack_00000178 = *(undefined8 *)(lVar13 + 0x18);
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
      lVar9 = *(long *)(unaff_x19 + 0x68);
      iVar7 = FUN_062f6908();
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      FUN_04268e10(lVar9,iVar7,0,
                   *(undefined8 *)(*(long *)(*(long *)(DAT_083eab80 + 0x20) + 0xc0) + 0x88));
      *(int *)(lVar9 + 0x20) = *(int *)(lVar9 + 0x20) + iVar7;
      lVar9 = *(long *)(unaff_x20 + 0x68);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      lVar13 = *(long *)(unaff_x19 + 0x68);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      uVar30 = *(undefined8 *)(lVar9 + 0x10);
      uVar2 = *(undefined8 *)(lVar9 + 0x18);
      uVar1 = *(undefined8 *)(lVar13 + 0x10);
      uVar3 = *(undefined8 *)(lVar13 + 0x18);
      uVar8 = FUN_062f6908();
      in_stack_00000138 = in_stack_00000010;
      in_stack_00000148 = (float)uVar30;
      fStack000000000000014c = (float)((ulong)uVar30 >> 0x20);
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
      lVar9 = *(long *)(unaff_x19 + 0x70);
      iVar7 = FUN_062f9284();
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      FUN_042680e0(lVar9,iVar7,0,
                   *(undefined8 *)(*(long *)(*(long *)(DAT_083eab20 + 0x20) + 0xc0) + 0x88));
      *(int *)(lVar9 + 0x20) = *(int *)(lVar9 + 0x20) + iVar7;
      lVar9 = *(long *)(unaff_x20 + 0x70);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      lVar13 = *(long *)(unaff_x19 + 0x70);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      uVar30 = *(undefined8 *)(lVar9 + 0x10);
      uVar2 = *(undefined8 *)(lVar9 + 0x18);
      uVar1 = *(undefined8 *)(lVar13 + 0x10);
      uVar3 = *(undefined8 *)(lVar13 + 0x18);
      uVar8 = FUN_062f9284();
      in_stack_00000138 = in_stack_00000008._4_4_;
      fStack0000000000000144 = 0.0;
      in_stack_00000148 = (float)uVar30;
      fStack000000000000014c = (float)((ulong)uVar30 >> 0x20);
      fStack000000000000013c = in_stack_00000258;
      in_stack_00000140 = in_stack_00000258;
      in_stack_00000150 = uVar2;
      in_stack_00000158 = uVar1;
      in_stack_00000160 = uVar3;
      System_Runtime_CompilerServices_Unsafe__As<byte,_BlittableCollider>
                (&stack0x00000138,uVar8,DAT_0840ec98);
    }
    pfVar10 = *(float **)(unaff_x20 + 0x148);
    fVar16 = *pfVar10;
    fVar17 = pfVar10[1];
    fVar19 = pfVar10[2];
    fVar20 = pfVar10[3];
    fVar23 = pfVar10[4];
    fVar25 = pfVar10[5];
    puVar11 = *(ulong **)(unaff_x19 + 0x148);
    fVar27 = (float)((ulong)unaff_d9 >> 0x20);
    fVar28 = (float)((ulong)unaff_d10 >> 0x20);
    fVar29 = (float)((ulong)unaff_d11 >> 0x20);
    fVar21 = (float)unaff_d8 +
             (float)unaff_d9 * fVar16 + (float)unaff_d10 * fVar17 + (float)unaff_d11 * fVar19;
    fVar18 = (float)((ulong)unaff_d8 >> 0x20);
    fVar22 = fVar18 + fVar27 * fVar16 + fVar28 * fVar17 + fVar29 * fVar19;
    fVar17 = in_stack_000000d0 +
             fVar16 * in_stack_000000c0 + fVar17 * in_stack_000000b0 + fVar19 * in_stack_000000a0;
    fVar16 = (float)unaff_d8 +
             (float)unaff_d9 * fVar20 + (float)unaff_d10 * fVar23 + (float)unaff_d11 * fVar25;
    fVar18 = fVar18 + fVar27 * fVar20 + fVar28 * fVar23 + fVar29 * fVar25;
    in_stack_000000d0 =
         in_stack_000000d0 +
         fVar20 * in_stack_000000c0 + fVar23 * in_stack_000000b0 + fVar25 * in_stack_000000a0;
    if (puVar11 == (ulong *)0x0) {
      in_stack_000000e0 = 0;
      in_stack_000000e8 = 0;
      in_stack_00000138 = fVar21;
      fStack000000000000013c = fVar22;
      in_stack_00000140 = fVar17;
      fStack0000000000000144 = fVar16;
      in_stack_00000148 = fVar18;
      fStack000000000000014c = in_stack_000000d0;
      FUN_04ed2950(&stack0x000000e0,&stack0x00000138,4,DAT_083f9990);
      *(undefined8 *)(unaff_x19 + 0x150) = in_stack_000000e8;
      *(undefined8 *)(unaff_x19 + 0x148) = in_stack_000000e0;
    }
    else {
      uVar24 = *puVar11;
      uVar26 = *(ulong *)((long)puVar11 + 0xc);
      uVar31 = CONCAT44(fVar22,fVar21) & 0x7fffffff7fffffff;
      uVar34 = CONCAT44(fVar18,fVar16) & 0x7fffffff7fffffff;
      iVar7 = -(uint)(0x7f800000 < (uint)uVar31);
      iVar32 = -(uint)(0x7f800000 < (uint)(uVar31 >> 0x20));
      iVar33 = -(uint)(0x7f800000 < (uint)uVar34);
      iVar35 = -(uint)(0x7f800000 < (uint)(uVar34 >> 0x20));
      iVar36 = -(uint)((float)uVar24 < fVar21);
      iVar38 = -(uint)((float)(uVar24 >> 0x20) < fVar22);
      iVar37 = -(uint)(fVar16 < (float)uVar26);
      iVar39 = -(uint)(fVar18 < (float)(uVar26 >> 0x20));
      fVar19 = *(float *)(puVar11 + 1);
      if (fVar17 <= *(float *)(puVar11 + 1) && (uint)ABS(fVar17) < 0x7f800001) {
        fVar19 = fVar17;
      }
      fVar17 = *(float *)((long)puVar11 + 0x14);
      if (*(float *)((long)puVar11 + 0x14) <= in_stack_000000d0 &&
          (uint)ABS(in_stack_000000d0) < 0x7f800001) {
        fVar17 = in_stack_000000d0;
      }
      *puVar11 = CONCAT44(fVar22,fVar21) ^
                 (CONCAT44(fVar22,fVar21) ^ uVar24) &
                 CONCAT17((byte)((uint)iVar32 >> 0x18) | (byte)((uint)iVar38 >> 0x18),
                          CONCAT16((byte)((uint)iVar32 >> 0x10) | (byte)((uint)iVar38 >> 0x10),
                                   CONCAT15((byte)((uint)iVar32 >> 8) | (byte)((uint)iVar38 >> 8),
                                            CONCAT14((byte)iVar32 | (byte)iVar38,
                                                     CONCAT13((byte)((uint)iVar7 >> 0x18) |
                                                              (byte)((uint)iVar36 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar7 >> 0x10) |
                                                                       (byte)((uint)iVar36 >> 0x10),
                                                                       CONCAT11((byte)((uint)iVar7
                                                                                      >> 8) |
                                                                                (byte)((uint)iVar36
                                                                                      >> 8),
                                                                                (byte)iVar7 |
                                                                                (byte)iVar36)))))));
      *(float *)(puVar11 + 1) = fVar19;
      *(ulong *)((long)puVar11 + 0xc) =
           CONCAT44(fVar18,fVar16) ^
           (CONCAT44(fVar18,fVar16) ^ uVar26) &
           CONCAT17((byte)((uint)iVar35 >> 0x18) | (byte)((uint)iVar39 >> 0x18),
                    CONCAT16((byte)((uint)iVar35 >> 0x10) | (byte)((uint)iVar39 >> 0x10),
                             CONCAT15((byte)((uint)iVar35 >> 8) | (byte)((uint)iVar39 >> 8),
                                      CONCAT14((byte)iVar35 | (byte)iVar39,
                                               CONCAT13((byte)((uint)iVar33 >> 0x18) |
                                                        (byte)((uint)iVar37 >> 0x18),
                                                        CONCAT12((byte)((uint)iVar33 >> 0x10) |
                                                                 (byte)((uint)iVar37 >> 0x10),
                                                                 CONCAT11((byte)((uint)iVar33 >> 8)
                                                                          | (byte)((uint)iVar37 >> 8
                                                                                  ),
                                                                          (byte)iVar33 |
                                                                          (byte)iVar37)))))));
      *(float *)((long)puVar11 + 0x14) = fVar17;
    }
    fVar16 = *(float *)(unaff_x20 + 0x11c);
    fVar17 = *(float *)(unaff_x20 + 0x120);
    fVar18 = *(float *)(unaff_x20 + 0x124);
    if (DAT_086d90cb == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086d90cb = '\x01';
    }
    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
      FUN_033b9870();
      fVar19 = *(float *)(unaff_x19 + 0x11c);
      uVar30 = *(undefined8 *)(unaff_x19 + 0x120);
      if (DAT_086d90cb == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086d90cb = '\x01';
      }
    }
    else {
      fVar19 = *(float *)(unaff_x19 + 0x11c);
      uVar30 = *(undefined8 *)(unaff_x19 + 0x120);
    }
    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar20 = (float)((ulong)uVar30 >> 0x20);
    fVar17 = SQRT(fVar18 * fVar18 + fVar16 * fVar16 + fVar17 * fVar17) /
             SQRT(fVar20 * fVar20 + fVar19 * fVar19 + (float)uVar30 * (float)uVar30);
    fVar16 = **(float **)(unaff_x19 + 0x158);
    fVar18 = fVar17 * **(float **)(unaff_x20 + 0x158);
    bVar4 = false;
    bVar5 = false;
    bVar6 = false;
    if ((uint)ABS(fVar18) < 0x7f800001) {
      bVar4 = false;
      bVar5 = false;
      bVar6 = true;
      if (!NAN(fVar16) && !NAN(fVar18)) {
        bVar4 = fVar16 < fVar18;
        bVar5 = fVar16 == fVar18;
        bVar6 = false;
      }
    }
    if (bVar5 || bVar4 != bVar6) {
      fVar16 = fVar18;
    }
    **(float **)(unaff_x19 + 0x158) = fVar16;
    fVar16 = **(float **)(unaff_x19 + 0x168);
    fVar17 = fVar17 * **(float **)(unaff_x20 + 0x168);
    bVar4 = false;
    bVar5 = false;
    bVar6 = false;
    if ((uint)ABS(fVar17) < 0x7f800001) {
      bVar4 = false;
      bVar5 = false;
      bVar6 = true;
      if (!NAN(fVar16) && !NAN(fVar17)) {
        bVar4 = fVar16 < fVar17;
        bVar5 = fVar16 == fVar17;
        bVar6 = false;
      }
    }
    if (bVar5 || bVar4 != bVar6) {
      fVar16 = fVar17;
    }
    **(float **)(unaff_x19 + 0x168) = fVar16;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


