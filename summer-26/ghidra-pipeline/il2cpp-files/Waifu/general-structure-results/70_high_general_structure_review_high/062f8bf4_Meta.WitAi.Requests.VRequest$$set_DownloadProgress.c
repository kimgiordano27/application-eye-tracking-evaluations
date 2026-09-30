/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequest$$set_DownloadProgress
ENTRY_POINT: 062f8bf4
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_1;telemetry_or_network_hits_4
*/


void Meta_WitAi_Requests_VRequest__set_DownloadProgress(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  ulong *puVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long lVar8;
  float unaff_w25;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulong uVar17;
  float fVar18;
  ulong uVar19;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  float fVar20;
  undefined8 unaff_d10;
  float fVar21;
  undefined8 unaff_d11;
  float fVar22;
  undefined8 uVar23;
  ulong uVar24;
  int iVar25;
  int iVar26;
  ulong uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  undefined8 in_stack_00000008;
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
  float in_stack_00000258;
  
  uVar4 = FUN_062f6908();
  in_stack_00000148 = (float)unaff_x21;
  fStack000000000000014c = (float)((ulong)unaff_x21 >> 0x20);
  in_stack_00000138 = unaff_w25;
  fStack000000000000013c = in_stack_00000258;
  in_stack_00000140 = in_stack_00000258;
  fStack0000000000000144 = in_stack_00000258;
  System_Runtime_CompilerServices_Unsafe__As<byte,_EasingFunction>
            (&stack0x00000138,uVar4,DAT_0840eca0);
  iVar5 = FUN_062f9284();
  if (0 < iVar5) {
    lVar8 = *(long *)(unaff_x19 + 0x70);
    iVar5 = FUN_062f9284();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    FUN_042680e0(lVar8,iVar5,0,
                 *(undefined8 *)(*(long *)(*(long *)(DAT_083eab20 + 0x20) + 0xc0) + 0x88));
    *(int *)(lVar8 + 0x20) = *(int *)(lVar8 + 0x20) + iVar5;
    if (*(long *)(unaff_x20 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (*(long *)(unaff_x19 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    uVar23 = *(undefined8 *)(*(long *)(unaff_x20 + 0x70) + 0x10);
    uVar4 = FUN_062f9284();
    in_stack_00000138 = in_stack_00000008._4_4_;
    fStack0000000000000144 = 0.0;
    in_stack_00000148 = (float)uVar23;
    fStack000000000000014c = (float)((ulong)uVar23 >> 0x20);
    fStack000000000000013c = in_stack_00000258;
    in_stack_00000140 = in_stack_00000258;
    System_Runtime_CompilerServices_Unsafe__As<byte,_BlittableCollider>
              (&stack0x00000138,uVar4,DAT_0840ec98);
  }
  pfVar6 = *(float **)(unaff_x20 + 0x148);
  fVar9 = *pfVar6;
  fVar10 = pfVar6[1];
  fVar12 = pfVar6[2];
  fVar13 = pfVar6[3];
  fVar16 = pfVar6[4];
  fVar18 = pfVar6[5];
  puVar7 = *(ulong **)(unaff_x19 + 0x148);
  fVar20 = (float)((ulong)unaff_d9 >> 0x20);
  fVar21 = (float)((ulong)unaff_d10 >> 0x20);
  fVar22 = (float)((ulong)unaff_d11 >> 0x20);
  fVar14 = (float)unaff_d8 +
           (float)unaff_d9 * fVar9 + (float)unaff_d10 * fVar10 + (float)unaff_d11 * fVar12;
  fVar11 = (float)((ulong)unaff_d8 >> 0x20);
  fVar15 = fVar11 + fVar20 * fVar9 + fVar21 * fVar10 + fVar22 * fVar12;
  fVar10 = in_stack_000000d0 +
           fVar9 * in_stack_000000c0 + fVar10 * in_stack_000000b0 + fVar12 * in_stack_000000a0;
  fVar9 = (float)unaff_d8 +
          (float)unaff_d9 * fVar13 + (float)unaff_d10 * fVar16 + (float)unaff_d11 * fVar18;
  fVar11 = fVar11 + fVar20 * fVar13 + fVar21 * fVar16 + fVar22 * fVar18;
  in_stack_000000d0 =
       in_stack_000000d0 +
       fVar13 * in_stack_000000c0 + fVar16 * in_stack_000000b0 + fVar18 * in_stack_000000a0;
  if (puVar7 == (ulong *)0x0) {
    in_stack_000000e0 = 0;
    in_stack_000000e8 = 0;
    in_stack_00000138 = fVar14;
    fStack000000000000013c = fVar15;
    in_stack_00000140 = fVar10;
    fStack0000000000000144 = fVar9;
    in_stack_00000148 = fVar11;
    fStack000000000000014c = in_stack_000000d0;
    FUN_04ed2950(&stack0x000000e0,&stack0x00000138,4,DAT_083f9990);
    *(undefined8 *)(unaff_x19 + 0x150) = in_stack_000000e8;
    *(undefined8 *)(unaff_x19 + 0x148) = in_stack_000000e0;
  }
  else {
    uVar17 = *puVar7;
    uVar19 = *(ulong *)((long)puVar7 + 0xc);
    uVar24 = CONCAT44(fVar15,fVar14) & 0x7fffffff7fffffff;
    uVar27 = CONCAT44(fVar11,fVar9) & 0x7fffffff7fffffff;
    iVar5 = -(uint)(0x7f800000 < (uint)uVar24);
    iVar25 = -(uint)(0x7f800000 < (uint)(uVar24 >> 0x20));
    iVar26 = -(uint)(0x7f800000 < (uint)uVar27);
    iVar28 = -(uint)(0x7f800000 < (uint)(uVar27 >> 0x20));
    iVar29 = -(uint)((float)uVar17 < fVar14);
    iVar31 = -(uint)((float)(uVar17 >> 0x20) < fVar15);
    iVar30 = -(uint)(fVar9 < (float)uVar19);
    iVar32 = -(uint)(fVar11 < (float)(uVar19 >> 0x20));
    fVar12 = *(float *)(puVar7 + 1);
    if (fVar10 <= *(float *)(puVar7 + 1) && (uint)ABS(fVar10) < 0x7f800001) {
      fVar12 = fVar10;
    }
    fVar10 = *(float *)((long)puVar7 + 0x14);
    if (*(float *)((long)puVar7 + 0x14) <= in_stack_000000d0 &&
        (uint)ABS(in_stack_000000d0) < 0x7f800001) {
      fVar10 = in_stack_000000d0;
    }
    *puVar7 = CONCAT44(fVar15,fVar14) ^
              (CONCAT44(fVar15,fVar14) ^ uVar17) &
              CONCAT17((byte)((uint)iVar25 >> 0x18) | (byte)((uint)iVar31 >> 0x18),
                       CONCAT16((byte)((uint)iVar25 >> 0x10) | (byte)((uint)iVar31 >> 0x10),
                                CONCAT15((byte)((uint)iVar25 >> 8) | (byte)((uint)iVar31 >> 8),
                                         CONCAT14((byte)iVar25 | (byte)iVar31,
                                                  CONCAT13((byte)((uint)iVar5 >> 0x18) |
                                                           (byte)((uint)iVar29 >> 0x18),
                                                           CONCAT12((byte)((uint)iVar5 >> 0x10) |
                                                                    (byte)((uint)iVar29 >> 0x10),
                                                                    CONCAT11((byte)((uint)iVar5 >> 8
                                                                                   ) | (byte)((uint)
                                                  iVar29 >> 8),(byte)iVar5 | (byte)iVar29)))))));
    *(float *)(puVar7 + 1) = fVar12;
    *(ulong *)((long)puVar7 + 0xc) =
         CONCAT44(fVar11,fVar9) ^
         (CONCAT44(fVar11,fVar9) ^ uVar19) &
         CONCAT17((byte)((uint)iVar28 >> 0x18) | (byte)((uint)iVar32 >> 0x18),
                  CONCAT16((byte)((uint)iVar28 >> 0x10) | (byte)((uint)iVar32 >> 0x10),
                           CONCAT15((byte)((uint)iVar28 >> 8) | (byte)((uint)iVar32 >> 8),
                                    CONCAT14((byte)iVar28 | (byte)iVar32,
                                             CONCAT13((byte)((uint)iVar26 >> 0x18) |
                                                      (byte)((uint)iVar30 >> 0x18),
                                                      CONCAT12((byte)((uint)iVar26 >> 0x10) |
                                                               (byte)((uint)iVar30 >> 0x10),
                                                               CONCAT11((byte)((uint)iVar26 >> 8) |
                                                                        (byte)((uint)iVar30 >> 8),
                                                                        (byte)iVar26 | (byte)iVar30)
                                                              ))))));
    *(float *)((long)puVar7 + 0x14) = fVar10;
  }
  fVar9 = *(float *)(unaff_x20 + 0x11c);
  fVar10 = *(float *)(unaff_x20 + 0x120);
  fVar11 = *(float *)(unaff_x20 + 0x124);
  if (DAT_086d90cb == '\0') {
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    DAT_086d90cb = '\x01';
  }
  if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
    FUN_033b9870();
    fVar12 = *(float *)(unaff_x19 + 0x11c);
    uVar23 = *(undefined8 *)(unaff_x19 + 0x120);
    if (DAT_086d90cb == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086d90cb = '\x01';
    }
  }
  else {
    fVar12 = *(float *)(unaff_x19 + 0x11c);
    uVar23 = *(undefined8 *)(unaff_x19 + 0x120);
  }
  if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  fVar13 = (float)((ulong)uVar23 >> 0x20);
  fVar10 = SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar10 * fVar10) /
           SQRT(fVar13 * fVar13 + fVar12 * fVar12 + (float)uVar23 * (float)uVar23);
  fVar9 = **(float **)(unaff_x19 + 0x158);
  fVar11 = fVar10 * **(float **)(unaff_x20 + 0x158);
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if ((uint)ABS(fVar11) < 0x7f800001) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar9) && !NAN(fVar11)) {
      bVar1 = fVar9 < fVar11;
      bVar2 = fVar9 == fVar11;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    fVar9 = fVar11;
  }
  **(float **)(unaff_x19 + 0x158) = fVar9;
  fVar9 = **(float **)(unaff_x19 + 0x168);
  fVar10 = fVar10 * **(float **)(unaff_x20 + 0x168);
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if ((uint)ABS(fVar10) < 0x7f800001) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar9) && !NAN(fVar10)) {
      bVar1 = fVar9 < fVar10;
      bVar2 = fVar9 == fVar10;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    fVar9 = fVar10;
  }
  **(float **)(unaff_x19 + 0x168) = fVar9;
  return;
}


