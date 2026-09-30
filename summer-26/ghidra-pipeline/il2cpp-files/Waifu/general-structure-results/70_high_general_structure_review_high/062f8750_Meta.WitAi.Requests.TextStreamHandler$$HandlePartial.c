/*
FUNCTION_NAME: Meta.WitAi.Requests.TextStreamHandler$$HandlePartial
ENTRY_POINT: 062f8750
PROGRAM: Waifu-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void Meta_WitAi_Requests_TextStreamHandler__HandlePartial
               (long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  float *pfVar8;
  ulong *puVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  float unaff_w24;
  float unaff_w25;
  long lVar11;
  int unaff_w28;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ulong uVar22;
  undefined8 unaff_d8;
  float fVar23;
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
  float fStack000000000000000c;
  int iStack0000000000000014;
  float in_stack_000000a0;
  float in_stack_000000b0;
  undefined8 in_stack_000000c0;
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
  float in_stack_00000258;
  float in_stack_0000025c;
  
  while( true ) {
    uVar4 = FUN_062d1154(param_1,param_2,param_3,param_4,param_5);
    if (*(long *)(unaff_x19 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    iVar6 = (int)unaff_x21;
    unaff_x21 = unaff_x21 + 1;
    *(undefined4 *)(*(long *)(*(long *)(unaff_x19 + 0x130) + 0x10) + (long)(unaff_w23 + iVar6) * 4)
         = uVar4;
    if (unaff_x22 == unaff_x21) break;
    if (*(long *)(unaff_x20 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    param_1 = *(long *)(unaff_x19 + 0x140);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    param_2 = *(undefined8 *)(unaff_x20 + 0x140);
    param_3 = (ulong)*(uint *)(*(long *)(*(long *)(unaff_x20 + 0x130) + 0x10) + unaff_x21 * 4);
    param_4 = 1;
    param_5 = 0;
  }
  uVar5 = FUN_062e3448();
  uVar7 = FUN_062e3448();
  *(ulong *)(unaff_x20 + 0x178) = uVar7 & 0xffffffff | (ulong)uVar5 << 0x20;
  lVar11 = *(long *)(unaff_x19 + 0x38);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  FUN_04262b00(lVar11,uVar5,0,
               *(undefined8 *)(*(long *)(*(long *)(DAT_083ea980 + 0x20) + 0xc0) + 0x88));
  *(uint *)(lVar11 + 0x20) = *(int *)(lVar11 + 0x20) + uVar5;
  lVar11 = *(long *)(unaff_x19 + 0x40);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  FUN_042665cc(lVar11,uVar5,0,
               *(undefined8 *)(*(long *)(*(long *)(DAT_083eaa78 + 0x20) + 0xc0) + 0x88));
  *(uint *)(lVar11 + 0x20) = *(int *)(lVar11 + 0x20) + uVar5;
  lVar11 = *(long *)(unaff_x19 + 0x48);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  FUN_042665cc(lVar11,uVar5,0,
               *(undefined8 *)(*(long *)(*(long *)(DAT_083eaa78 + 0x20) + 0xc0) + 0x88));
  *(uint *)(lVar11 + 0x20) = *(int *)(lVar11 + 0x20) + uVar5;
  lVar11 = *(long *)(unaff_x19 + 0x50);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  FUN_042665cc(lVar11,uVar5,0,
               *(undefined8 *)(*(long *)(*(long *)(DAT_083eaa78 + 0x20) + 0xc0) + 0x88));
  *(uint *)(lVar11 + 0x20) = *(int *)(lVar11 + 0x20) + uVar5;
  lVar11 = *(long *)(unaff_x19 + 0x58);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  FUN_04265874(lVar11,uVar5,0,
               *(undefined8 *)(*(long *)(*(long *)(DAT_083eaa18 + 0x20) + 0xc0) + 0x88));
  *(uint *)(lVar11 + 0x20) = *(int *)(lVar11 + 0x20) + uVar5;
  lVar11 = *(long *)(unaff_x19 + 0x60);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  FUN_042637dc(lVar11,uVar5,0,
               *(undefined8 *)(*(long *)(*(long *)(DAT_083ea9d8 + 0x20) + 0xc0) + 0x88));
  *(uint *)(lVar11 + 0x20) = *(int *)(lVar11 + 0x20) + uVar5;
  if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(long *)(unaff_x20 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(long *)(unaff_x20 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(long *)(unaff_x19 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(long *)(unaff_x19 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(long *)(unaff_x19 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(long *)(unaff_x19 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(long *)(unaff_x19 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(long *)(unaff_x19 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  fStack000000000000000c = unaff_w24;
  iStack0000000000000014 = unaff_w28;
  uVar4 = FUN_062e3448();
  in_stack_00000140 = (float)unaff_d9;
  fVar14 = in_stack_00000140;
  fStack0000000000000144 = (float)((ulong)unaff_d9 >> 0x20);
  fVar23 = fStack0000000000000144;
  in_stack_00000148 = (float)in_stack_000000c0;
  fVar24 = in_stack_00000148;
  fStack000000000000014c = (float)((ulong)in_stack_000000c0 >> 0x20);
  FUN_040015cc(&stack0x00000138,uVar4,DAT_0840ed18);
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
  lVar10 = *(long *)(unaff_x20 + 0x140);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(long *)(lVar10 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(long *)(lVar10 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(long *)(lVar10 + 0x48) == 0) {
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
  if (*(long *)(unaff_x19 + 0x138) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  fStack000000000000013c = 0.0;
  in_stack_00000140 = (float)*(undefined8 *)(lVar11 + 0x10);
  fStack0000000000000144 = (float)((ulong)*(undefined8 *)(lVar11 + 0x10) >> 0x20);
  in_stack_00000148 = (float)*(undefined8 *)(lVar11 + 0x18);
  fStack000000000000014c = (float)((ulong)*(undefined8 *)(lVar11 + 0x18) >> 0x20);
  in_stack_00000138 = in_stack_0000025c;
  FUN_0400155c(&stack0x00000138,iStack0000000000000014,DAT_0840ed10);
  iVar6 = FUN_062f6908();
  if (0 < iVar6) {
    lVar11 = *(long *)(unaff_x19 + 0x68);
    iVar6 = FUN_062f6908();
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    FUN_04268e10(lVar11,iVar6,0,
                 *(undefined8 *)(*(long *)(*(long *)(DAT_083eab80 + 0x20) + 0xc0) + 0x88));
    *(int *)(lVar11 + 0x20) = *(int *)(lVar11 + 0x20) + iVar6;
    if (*(long *)(unaff_x20 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (*(long *)(unaff_x19 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    uVar27 = *(undefined8 *)(*(long *)(unaff_x20 + 0x68) + 0x10);
    uVar4 = FUN_062f6908();
    in_stack_00000148 = (float)uVar27;
    fStack000000000000014c = (float)((ulong)uVar27 >> 0x20);
    in_stack_00000138 = unaff_w25;
    fStack000000000000013c = in_stack_00000258;
    in_stack_00000140 = in_stack_00000258;
    fStack0000000000000144 = in_stack_00000258;
    System_Runtime_CompilerServices_Unsafe__As<byte,_EasingFunction>
              (&stack0x00000138,uVar4,DAT_0840eca0);
  }
  iVar6 = FUN_062f9284();
  if (0 < iVar6) {
    lVar11 = *(long *)(unaff_x19 + 0x70);
    iVar6 = FUN_062f9284();
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    FUN_042680e0(lVar11,iVar6,0,
                 *(undefined8 *)(*(long *)(*(long *)(DAT_083eab20 + 0x20) + 0xc0) + 0x88));
    *(int *)(lVar11 + 0x20) = *(int *)(lVar11 + 0x20) + iVar6;
    if (*(long *)(unaff_x20 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (*(long *)(unaff_x19 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    uVar27 = *(undefined8 *)(*(long *)(unaff_x20 + 0x70) + 0x10);
    uVar4 = FUN_062f9284();
    in_stack_00000138 = fStack000000000000000c;
    fStack0000000000000144 = 0.0;
    in_stack_00000148 = (float)uVar27;
    fStack000000000000014c = (float)((ulong)uVar27 >> 0x20);
    fStack000000000000013c = in_stack_00000258;
    in_stack_00000140 = in_stack_00000258;
    System_Runtime_CompilerServices_Unsafe__As<byte,_BlittableCollider>
              (&stack0x00000138,uVar4,DAT_0840ec98);
  }
  pfVar8 = *(float **)(unaff_x20 + 0x148);
  fVar12 = *pfVar8;
  fVar13 = pfVar8[1];
  fVar16 = pfVar8[2];
  fVar17 = pfVar8[3];
  fVar20 = pfVar8[4];
  fVar21 = pfVar8[5];
  puVar9 = *(ulong **)(unaff_x19 + 0x148);
  fVar25 = (float)((ulong)unaff_d10 >> 0x20);
  fVar26 = (float)((ulong)unaff_d11 >> 0x20);
  fVar18 = (float)unaff_d8 + fVar14 * fVar12 + (float)unaff_d10 * fVar13 + (float)unaff_d11 * fVar16
  ;
  fVar15 = (float)((ulong)unaff_d8 >> 0x20);
  fVar19 = fVar15 + fVar23 * fVar12 + fVar25 * fVar13 + fVar26 * fVar16;
  fVar12 = in_stack_000000d0 +
           fVar12 * fVar24 + fVar13 * in_stack_000000b0 + fVar16 * in_stack_000000a0;
  fVar14 = (float)unaff_d8 + fVar14 * fVar17 + (float)unaff_d10 * fVar20 + (float)unaff_d11 * fVar21
  ;
  fVar15 = fVar15 + fVar23 * fVar17 + fVar25 * fVar20 + fVar26 * fVar21;
  in_stack_000000d0 =
       in_stack_000000d0 + fVar17 * fVar24 + fVar20 * in_stack_000000b0 + fVar21 * in_stack_000000a0
  ;
  if (puVar9 == (ulong *)0x0) {
    in_stack_000000e0 = 0;
    in_stack_000000e8 = 0;
    in_stack_00000138 = fVar18;
    fStack000000000000013c = fVar19;
    in_stack_00000140 = fVar12;
    fStack0000000000000144 = fVar14;
    in_stack_00000148 = fVar15;
    fStack000000000000014c = in_stack_000000d0;
    FUN_04ed2950(&stack0x000000e0,&stack0x00000138,4,DAT_083f9990);
    *(undefined8 *)(unaff_x19 + 0x150) = in_stack_000000e8;
    *(undefined8 *)(unaff_x19 + 0x148) = in_stack_000000e0;
  }
  else {
    uVar7 = *puVar9;
    uVar22 = *(ulong *)((long)puVar9 + 0xc);
    uVar28 = CONCAT44(fVar19,fVar18) & 0x7fffffff7fffffff;
    uVar31 = CONCAT44(fVar15,fVar14) & 0x7fffffff7fffffff;
    iVar6 = -(uint)(0x7f800000 < (uint)uVar28);
    iVar29 = -(uint)(0x7f800000 < (uint)(uVar28 >> 0x20));
    iVar30 = -(uint)(0x7f800000 < (uint)uVar31);
    iVar32 = -(uint)(0x7f800000 < (uint)(uVar31 >> 0x20));
    iVar33 = -(uint)((float)uVar7 < fVar18);
    iVar35 = -(uint)((float)(uVar7 >> 0x20) < fVar19);
    iVar34 = -(uint)(fVar14 < (float)uVar22);
    iVar36 = -(uint)(fVar15 < (float)(uVar22 >> 0x20));
    fVar23 = *(float *)(puVar9 + 1);
    if (fVar12 <= *(float *)(puVar9 + 1) && (uint)ABS(fVar12) < 0x7f800001) {
      fVar23 = fVar12;
    }
    fVar24 = *(float *)((long)puVar9 + 0x14);
    if (*(float *)((long)puVar9 + 0x14) <= in_stack_000000d0 &&
        (uint)ABS(in_stack_000000d0) < 0x7f800001) {
      fVar24 = in_stack_000000d0;
    }
    *puVar9 = CONCAT44(fVar19,fVar18) ^
              (CONCAT44(fVar19,fVar18) ^ uVar7) &
              CONCAT17((byte)((uint)iVar29 >> 0x18) | (byte)((uint)iVar35 >> 0x18),
                       CONCAT16((byte)((uint)iVar29 >> 0x10) | (byte)((uint)iVar35 >> 0x10),
                                CONCAT15((byte)((uint)iVar29 >> 8) | (byte)((uint)iVar35 >> 8),
                                         CONCAT14((byte)iVar29 | (byte)iVar35,
                                                  CONCAT13((byte)((uint)iVar6 >> 0x18) |
                                                           (byte)((uint)iVar33 >> 0x18),
                                                           CONCAT12((byte)((uint)iVar6 >> 0x10) |
                                                                    (byte)((uint)iVar33 >> 0x10),
                                                                    CONCAT11((byte)((uint)iVar6 >> 8
                                                                                   ) | (byte)((uint)
                                                  iVar33 >> 8),(byte)iVar6 | (byte)iVar33)))))));
    *(float *)(puVar9 + 1) = fVar23;
    *(ulong *)((long)puVar9 + 0xc) =
         CONCAT44(fVar15,fVar14) ^
         (CONCAT44(fVar15,fVar14) ^ uVar22) &
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
    *(float *)((long)puVar9 + 0x14) = fVar24;
  }
  fVar14 = *(float *)(unaff_x20 + 0x11c);
  fVar23 = *(float *)(unaff_x20 + 0x120);
  fVar24 = *(float *)(unaff_x20 + 0x124);
  if (DAT_086d90cb == '\0') {
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    DAT_086d90cb = '\x01';
  }
  if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
    FUN_033b9870();
    fVar12 = *(float *)(unaff_x19 + 0x11c);
    uVar27 = *(undefined8 *)(unaff_x19 + 0x120);
    if (DAT_086d90cb == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086d90cb = '\x01';
    }
  }
  else {
    fVar12 = *(float *)(unaff_x19 + 0x11c);
    uVar27 = *(undefined8 *)(unaff_x19 + 0x120);
  }
  if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  fVar13 = (float)((ulong)uVar27 >> 0x20);
  fVar23 = SQRT(fVar24 * fVar24 + fVar14 * fVar14 + fVar23 * fVar23) /
           SQRT(fVar13 * fVar13 + fVar12 * fVar12 + (float)uVar27 * (float)uVar27);
  fVar14 = **(float **)(unaff_x19 + 0x158);
  fVar24 = fVar23 * **(float **)(unaff_x20 + 0x158);
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if ((uint)ABS(fVar24) < 0x7f800001) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar14) && !NAN(fVar24)) {
      bVar1 = fVar14 < fVar24;
      bVar2 = fVar14 == fVar24;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    fVar14 = fVar24;
  }
  **(float **)(unaff_x19 + 0x158) = fVar14;
  fVar14 = **(float **)(unaff_x19 + 0x168);
  fVar23 = fVar23 * **(float **)(unaff_x20 + 0x168);
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if ((uint)ABS(fVar23) < 0x7f800001) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar14) && !NAN(fVar23)) {
      bVar1 = fVar14 < fVar23;
      bVar2 = fVar14 == fVar23;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    fVar14 = fVar23;
  }
  **(float **)(unaff_x19 + 0x168) = fVar14;
  return;
}


