/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequest$$get_IsComplete
ENTRY_POINT: 062f8b64
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ray_or_cast_sink_hits_1;telemetry_or_network_hits_4
*/


void Meta_WitAi_Requests_VRequest__get_IsComplete
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined1 param_4 [16]
               ,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  float *pfVar10;
  ulong *puVar11;
  long lVar12;
  long in_x17;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long lVar13;
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
  ulong uVar28;
  int iVar29;
  int iVar30;
  ulong uVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  undefined8 in_stack_00000008;
  float in_stack_00000010;
  float in_stack_000000a0;
  float in_stack_000000b0;
  float in_stack_000000c0;
  float in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  float fStack0000000000000138;
  float fStack000000000000013c;
  float fStack0000000000000140;
  float fStack0000000000000144;
  float fStack0000000000000148;
  float fStack000000000000014c;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 uStack00000000000001c0;
  float in_stack_00000258;
  
  uVar9 = *(undefined8 *)(param_1 + 0xd10);
  *(long *)(in_x17 + 0x60) = param_3._8_8_;
  *(long *)(in_x17 + 0x58) = param_3._0_8_;
  *(long *)(in_x17 + 0x70) = param_4._8_8_;
  *(long *)(in_x17 + 0x68) = param_4._0_8_;
  *(long *)(in_x17 + 0x80) = param_2._8_8_;
  *(long *)(in_x17 + 0x78) = param_2._0_8_;
  uStack00000000000001c0 = param_5;
  FUN_0400155c(&stack0x00000138,unaff_w21,uVar9);
  iVar7 = FUN_062f6908();
  if (0 < iVar7) {
    lVar13 = *(long *)(unaff_x19 + 0x68);
    iVar7 = FUN_062f6908();
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    FUN_04268e10(lVar13,iVar7,0,
                 *(undefined8 *)(*(long *)(*(long *)(DAT_083eab80 + 0x20) + 0xc0) + 0x88));
    *(int *)(lVar13 + 0x20) = *(int *)(lVar13 + 0x20) + iVar7;
    lVar13 = *(long *)(unaff_x20 + 0x68);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    lVar12 = *(long *)(unaff_x19 + 0x68);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    uVar9 = *(undefined8 *)(lVar13 + 0x10);
    uVar2 = *(undefined8 *)(lVar13 + 0x18);
    uVar1 = *(undefined8 *)(lVar12 + 0x10);
    uVar3 = *(undefined8 *)(lVar12 + 0x18);
    uVar8 = FUN_062f6908();
    fStack0000000000000138 = in_stack_00000010;
    fStack0000000000000148 = (float)uVar9;
    fStack000000000000014c = (float)((ulong)uVar9 >> 0x20);
    fStack000000000000013c = in_stack_00000258;
    fStack0000000000000140 = in_stack_00000258;
    fStack0000000000000144 = in_stack_00000258;
    in_stack_00000150 = uVar2;
    in_stack_00000158 = uVar1;
    in_stack_00000160 = uVar3;
    System_Runtime_CompilerServices_Unsafe__As<byte,_EasingFunction>
              (&stack0x00000138,uVar8,DAT_0840eca0);
  }
  iVar7 = FUN_062f9284();
  if (0 < iVar7) {
    lVar13 = *(long *)(unaff_x19 + 0x70);
    iVar7 = FUN_062f9284();
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    FUN_042680e0(lVar13,iVar7,0,
                 *(undefined8 *)(*(long *)(*(long *)(DAT_083eab20 + 0x20) + 0xc0) + 0x88));
    *(int *)(lVar13 + 0x20) = *(int *)(lVar13 + 0x20) + iVar7;
    lVar13 = *(long *)(unaff_x20 + 0x70);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    lVar12 = *(long *)(unaff_x19 + 0x70);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    uVar9 = *(undefined8 *)(lVar13 + 0x10);
    uVar2 = *(undefined8 *)(lVar13 + 0x18);
    uVar1 = *(undefined8 *)(lVar12 + 0x10);
    uVar3 = *(undefined8 *)(lVar12 + 0x18);
    uVar8 = FUN_062f9284();
    fStack0000000000000138 = in_stack_00000008._4_4_;
    fStack0000000000000144 = 0.0;
    fStack0000000000000148 = (float)uVar9;
    fStack000000000000014c = (float)((ulong)uVar9 >> 0x20);
    fStack000000000000013c = in_stack_00000258;
    fStack0000000000000140 = in_stack_00000258;
    in_stack_00000150 = uVar2;
    in_stack_00000158 = uVar1;
    in_stack_00000160 = uVar3;
    System_Runtime_CompilerServices_Unsafe__As<byte,_BlittableCollider>
              (&stack0x00000138,uVar8,DAT_0840ec98);
  }
  pfVar10 = *(float **)(unaff_x20 + 0x148);
  fVar14 = *pfVar10;
  fVar15 = pfVar10[1];
  fVar17 = pfVar10[2];
  fVar18 = pfVar10[3];
  fVar21 = pfVar10[4];
  fVar23 = pfVar10[5];
  puVar11 = *(ulong **)(unaff_x19 + 0x148);
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
  if (puVar11 == (ulong *)0x0) {
    in_stack_000000e0 = 0;
    in_stack_000000e8 = 0;
    fStack0000000000000138 = fVar19;
    fStack000000000000013c = fVar20;
    fStack0000000000000140 = fVar15;
    fStack0000000000000144 = fVar14;
    fStack0000000000000148 = fVar16;
    fStack000000000000014c = in_stack_000000d0;
    FUN_04ed2950(&stack0x000000e0,&stack0x00000138,4,DAT_083f9990);
    *(undefined8 *)(unaff_x19 + 0x150) = in_stack_000000e8;
    *(undefined8 *)(unaff_x19 + 0x148) = in_stack_000000e0;
  }
  else {
    uVar22 = *puVar11;
    uVar24 = *(ulong *)((long)puVar11 + 0xc);
    uVar28 = CONCAT44(fVar20,fVar19) & 0x7fffffff7fffffff;
    uVar31 = CONCAT44(fVar16,fVar14) & 0x7fffffff7fffffff;
    iVar7 = -(uint)(0x7f800000 < (uint)uVar28);
    iVar29 = -(uint)(0x7f800000 < (uint)(uVar28 >> 0x20));
    iVar30 = -(uint)(0x7f800000 < (uint)uVar31);
    iVar32 = -(uint)(0x7f800000 < (uint)(uVar31 >> 0x20));
    iVar33 = -(uint)((float)uVar22 < fVar19);
    iVar35 = -(uint)((float)(uVar22 >> 0x20) < fVar20);
    iVar34 = -(uint)(fVar14 < (float)uVar24);
    iVar36 = -(uint)(fVar16 < (float)(uVar24 >> 0x20));
    fVar17 = *(float *)(puVar11 + 1);
    if (fVar15 <= *(float *)(puVar11 + 1) && (uint)ABS(fVar15) < 0x7f800001) {
      fVar17 = fVar15;
    }
    fVar15 = *(float *)((long)puVar11 + 0x14);
    if (*(float *)((long)puVar11 + 0x14) <= in_stack_000000d0 &&
        (uint)ABS(in_stack_000000d0) < 0x7f800001) {
      fVar15 = in_stack_000000d0;
    }
    *puVar11 = CONCAT44(fVar20,fVar19) ^
               (CONCAT44(fVar20,fVar19) ^ uVar22) &
               CONCAT17((byte)((uint)iVar29 >> 0x18) | (byte)((uint)iVar35 >> 0x18),
                        CONCAT16((byte)((uint)iVar29 >> 0x10) | (byte)((uint)iVar35 >> 0x10),
                                 CONCAT15((byte)((uint)iVar29 >> 8) | (byte)((uint)iVar35 >> 8),
                                          CONCAT14((byte)iVar29 | (byte)iVar35,
                                                   CONCAT13((byte)((uint)iVar7 >> 0x18) |
                                                            (byte)((uint)iVar33 >> 0x18),
                                                            CONCAT12((byte)((uint)iVar7 >> 0x10) |
                                                                     (byte)((uint)iVar33 >> 0x10),
                                                                     CONCAT11((byte)((uint)iVar7 >>
                                                                                    8) |
                                                                              (byte)((uint)iVar33 >>
                                                                                    8),(byte)iVar7 |
                                                                                       (byte)iVar33)
                                                                    ))))));
    *(float *)(puVar11 + 1) = fVar17;
    *(ulong *)((long)puVar11 + 0xc) =
         CONCAT44(fVar16,fVar14) ^
         (CONCAT44(fVar16,fVar14) ^ uVar24) &
         CONCAT17((byte)((uint)iVar32 >> 0x18) | (byte)((uint)iVar36 >> 0x18),
                  CONCAT16((byte)((uint)iVar32 >> 0x10) | (byte)((uint)iVar36 >> 0x10),
                           CONCAT15((byte)((uint)iVar32 >> 8) | (byte)((uint)iVar36 >> 8),
                                    CONCAT14((byte)iVar32 | (byte)iVar36,
                                             CONCAT13((byte)((uint)iVar30 >> 0x18) |
                                                      (byte)((uint)iVar34 >> 0x18),
                                                      CONCAT12((byte)((uint)iVar30 >> 0x10) |
                                                               (byte)((uint)iVar34 >> 0x10),
                                                               CONCAT11((byte)((uint)iVar30 >> 8) |
                                                                        (byte)((uint)iVar34 >> 8),
                                                                        (byte)iVar30 | (byte)iVar34)
                                                              ))))));
    *(float *)((long)puVar11 + 0x14) = fVar15;
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
    uVar9 = *(undefined8 *)(unaff_x19 + 0x120);
    if (DAT_086d90cb == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086d90cb = '\x01';
    }
  }
  else {
    fVar17 = *(float *)(unaff_x19 + 0x11c);
    uVar9 = *(undefined8 *)(unaff_x19 + 0x120);
  }
  if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  fVar18 = (float)((ulong)uVar9 >> 0x20);
  fVar15 = SQRT(fVar16 * fVar16 + fVar14 * fVar14 + fVar15 * fVar15) /
           SQRT(fVar18 * fVar18 + fVar17 * fVar17 + (float)uVar9 * (float)uVar9);
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


