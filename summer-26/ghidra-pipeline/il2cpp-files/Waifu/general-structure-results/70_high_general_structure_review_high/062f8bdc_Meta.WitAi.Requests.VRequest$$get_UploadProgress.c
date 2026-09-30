/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequest$$get_UploadProgress
ENTRY_POINT: 062f8bdc
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_1;telemetry_or_network_hits_6
*/


void Meta_WitAi_Requests_VRequest__get_UploadProgress(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  float *pfVar9;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulong uVar21;
  float fVar22;
  ulong uVar23;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  float fVar24;
  undefined8 unaff_d10;
  float fVar25;
  undefined8 unaff_d11;
  float fVar26;
  undefined8 uVar27;
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
  float in_stack_00000138;
  float fStack000000000000013c;
  float in_stack_00000140;
  float fStack0000000000000144;
  float in_stack_00000148;
  float fStack000000000000014c;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  float in_stack_00000258;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar11 = *(long *)(unaff_x19 + 0x68);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  uVar27 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(lVar11 + 0x10);
  uVar3 = *(undefined8 *)(lVar11 + 0x18);
  uVar7 = FUN_062f6908();
  in_stack_00000138 = in_stack_00000010;
  in_stack_00000148 = (float)uVar27;
  fStack000000000000014c = (float)((ulong)uVar27 >> 0x20);
  fStack000000000000013c = in_stack_00000258;
  in_stack_00000140 = in_stack_00000258;
  fStack0000000000000144 = in_stack_00000258;
  in_stack_00000150 = uVar2;
  in_stack_00000158 = uVar1;
  in_stack_00000160 = uVar3;
  System_Runtime_CompilerServices_Unsafe__As<byte,_EasingFunction>
            (&stack0x00000138,uVar7,DAT_0840eca0);
  iVar8 = FUN_062f9284();
  if (0 < iVar8) {
    lVar11 = *(long *)(unaff_x19 + 0x70);
    iVar8 = FUN_062f9284();
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    FUN_042680e0(lVar11,iVar8,0,
                 *(undefined8 *)(*(long *)(*(long *)(DAT_083eab20 + 0x20) + 0xc0) + 0x88));
    *(int *)(lVar11 + 0x20) = *(int *)(lVar11 + 0x20) + iVar8;
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
    uVar27 = *(undefined8 *)(lVar11 + 0x10);
    uVar2 = *(undefined8 *)(lVar11 + 0x18);
    uVar1 = *(undefined8 *)(lVar12 + 0x10);
    uVar3 = *(undefined8 *)(lVar12 + 0x18);
    uVar7 = FUN_062f9284();
    in_stack_00000138 = in_stack_00000008._4_4_;
    fStack0000000000000144 = 0.0;
    in_stack_00000148 = (float)uVar27;
    fStack000000000000014c = (float)((ulong)uVar27 >> 0x20);
    fStack000000000000013c = in_stack_00000258;
    in_stack_00000140 = in_stack_00000258;
    in_stack_00000150 = uVar2;
    in_stack_00000158 = uVar1;
    in_stack_00000160 = uVar3;
    System_Runtime_CompilerServices_Unsafe__As<byte,_BlittableCollider>
              (&stack0x00000138,uVar7,DAT_0840ec98);
  }
  pfVar9 = *(float **)(unaff_x20 + 0x148);
  fVar13 = *pfVar9;
  fVar14 = pfVar9[1];
  fVar16 = pfVar9[2];
  fVar17 = pfVar9[3];
  fVar20 = pfVar9[4];
  fVar22 = pfVar9[5];
  puVar10 = *(ulong **)(unaff_x19 + 0x148);
  fVar24 = (float)((ulong)unaff_d9 >> 0x20);
  fVar25 = (float)((ulong)unaff_d10 >> 0x20);
  fVar26 = (float)((ulong)unaff_d11 >> 0x20);
  fVar18 = (float)unaff_d8 +
           (float)unaff_d9 * fVar13 + (float)unaff_d10 * fVar14 + (float)unaff_d11 * fVar16;
  fVar15 = (float)((ulong)unaff_d8 >> 0x20);
  fVar19 = fVar15 + fVar24 * fVar13 + fVar25 * fVar14 + fVar26 * fVar16;
  fVar14 = in_stack_000000d0 +
           fVar13 * in_stack_000000c0 + fVar14 * in_stack_000000b0 + fVar16 * in_stack_000000a0;
  fVar13 = (float)unaff_d8 +
           (float)unaff_d9 * fVar17 + (float)unaff_d10 * fVar20 + (float)unaff_d11 * fVar22;
  fVar15 = fVar15 + fVar24 * fVar17 + fVar25 * fVar20 + fVar26 * fVar22;
  in_stack_000000d0 =
       in_stack_000000d0 +
       fVar17 * in_stack_000000c0 + fVar20 * in_stack_000000b0 + fVar22 * in_stack_000000a0;
  if (puVar10 == (ulong *)0x0) {
    in_stack_000000e0 = 0;
    in_stack_000000e8 = 0;
    in_stack_00000138 = fVar18;
    fStack000000000000013c = fVar19;
    in_stack_00000140 = fVar14;
    fStack0000000000000144 = fVar13;
    in_stack_00000148 = fVar15;
    fStack000000000000014c = in_stack_000000d0;
    FUN_04ed2950(&stack0x000000e0,&stack0x00000138,4,DAT_083f9990);
    *(undefined8 *)(unaff_x19 + 0x150) = in_stack_000000e8;
    *(undefined8 *)(unaff_x19 + 0x148) = in_stack_000000e0;
  }
  else {
    uVar21 = *puVar10;
    uVar23 = *(ulong *)((long)puVar10 + 0xc);
    uVar28 = CONCAT44(fVar19,fVar18) & 0x7fffffff7fffffff;
    uVar31 = CONCAT44(fVar15,fVar13) & 0x7fffffff7fffffff;
    iVar8 = -(uint)(0x7f800000 < (uint)uVar28);
    iVar29 = -(uint)(0x7f800000 < (uint)(uVar28 >> 0x20));
    iVar30 = -(uint)(0x7f800000 < (uint)uVar31);
    iVar32 = -(uint)(0x7f800000 < (uint)(uVar31 >> 0x20));
    iVar33 = -(uint)((float)uVar21 < fVar18);
    iVar35 = -(uint)((float)(uVar21 >> 0x20) < fVar19);
    iVar34 = -(uint)(fVar13 < (float)uVar23);
    iVar36 = -(uint)(fVar15 < (float)(uVar23 >> 0x20));
    fVar16 = *(float *)(puVar10 + 1);
    if (fVar14 <= *(float *)(puVar10 + 1) && (uint)ABS(fVar14) < 0x7f800001) {
      fVar16 = fVar14;
    }
    fVar14 = *(float *)((long)puVar10 + 0x14);
    if (*(float *)((long)puVar10 + 0x14) <= in_stack_000000d0 &&
        (uint)ABS(in_stack_000000d0) < 0x7f800001) {
      fVar14 = in_stack_000000d0;
    }
    *puVar10 = CONCAT44(fVar19,fVar18) ^
               (CONCAT44(fVar19,fVar18) ^ uVar21) &
               CONCAT17((byte)((uint)iVar29 >> 0x18) | (byte)((uint)iVar35 >> 0x18),
                        CONCAT16((byte)((uint)iVar29 >> 0x10) | (byte)((uint)iVar35 >> 0x10),
                                 CONCAT15((byte)((uint)iVar29 >> 8) | (byte)((uint)iVar35 >> 8),
                                          CONCAT14((byte)iVar29 | (byte)iVar35,
                                                   CONCAT13((byte)((uint)iVar8 >> 0x18) |
                                                            (byte)((uint)iVar33 >> 0x18),
                                                            CONCAT12((byte)((uint)iVar8 >> 0x10) |
                                                                     (byte)((uint)iVar33 >> 0x10),
                                                                     CONCAT11((byte)((uint)iVar8 >>
                                                                                    8) |
                                                                              (byte)((uint)iVar33 >>
                                                                                    8),(byte)iVar8 |
                                                                                       (byte)iVar33)
                                                                    ))))));
    *(float *)(puVar10 + 1) = fVar16;
    *(ulong *)((long)puVar10 + 0xc) =
         CONCAT44(fVar15,fVar13) ^
         (CONCAT44(fVar15,fVar13) ^ uVar23) &
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
    *(float *)((long)puVar10 + 0x14) = fVar14;
  }
  fVar13 = *(float *)(unaff_x20 + 0x11c);
  fVar14 = *(float *)(unaff_x20 + 0x120);
  fVar15 = *(float *)(unaff_x20 + 0x124);
  if (DAT_086d90cb == '\0') {
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    DAT_086d90cb = '\x01';
  }
  if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
    FUN_033b9870();
    fVar16 = *(float *)(unaff_x19 + 0x11c);
    uVar27 = *(undefined8 *)(unaff_x19 + 0x120);
    if (DAT_086d90cb == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086d90cb = '\x01';
    }
  }
  else {
    fVar16 = *(float *)(unaff_x19 + 0x11c);
    uVar27 = *(undefined8 *)(unaff_x19 + 0x120);
  }
  if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  fVar17 = (float)((ulong)uVar27 >> 0x20);
  fVar14 = SQRT(fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14) /
           SQRT(fVar17 * fVar17 + fVar16 * fVar16 + (float)uVar27 * (float)uVar27);
  fVar13 = **(float **)(unaff_x19 + 0x158);
  fVar15 = fVar14 * **(float **)(unaff_x20 + 0x158);
  bVar4 = false;
  bVar5 = false;
  bVar6 = false;
  if ((uint)ABS(fVar15) < 0x7f800001) {
    bVar4 = false;
    bVar5 = false;
    bVar6 = true;
    if (!NAN(fVar13) && !NAN(fVar15)) {
      bVar4 = fVar13 < fVar15;
      bVar5 = fVar13 == fVar15;
      bVar6 = false;
    }
  }
  if (bVar5 || bVar4 != bVar6) {
    fVar13 = fVar15;
  }
  **(float **)(unaff_x19 + 0x158) = fVar13;
  fVar13 = **(float **)(unaff_x19 + 0x168);
  fVar14 = fVar14 * **(float **)(unaff_x20 + 0x168);
  bVar4 = false;
  bVar5 = false;
  bVar6 = false;
  if ((uint)ABS(fVar14) < 0x7f800001) {
    bVar4 = false;
    bVar5 = false;
    bVar6 = true;
    if (!NAN(fVar13) && !NAN(fVar14)) {
      bVar4 = fVar13 < fVar14;
      bVar5 = fVar13 == fVar14;
      bVar6 = false;
    }
  }
  if (bVar5 || bVar4 != bVar6) {
    fVar13 = fVar14;
  }
  **(float **)(unaff_x19 + 0x168) = fVar13;
  return;
}


