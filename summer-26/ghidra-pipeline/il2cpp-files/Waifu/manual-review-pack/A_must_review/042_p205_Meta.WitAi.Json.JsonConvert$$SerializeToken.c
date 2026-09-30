/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$SerializeToken
ENTRY_POINT: 063088cc
PROGRAM: Waifu-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Meta_WitAi_Json_JsonConvert__SerializeToken(long param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [16];
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float *pfVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  int *unaff_x19;
  long unaff_x20;
  undefined1 unaff_w21;
  ulong uVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  int iVar22;
  ulong uVar23;
  int iVar27;
  ulong uVar28;
  undefined1 auVar24 [16];
  int iVar26;
  int iVar29;
  undefined1 auVar25 [16];
  int iVar30;
  int iVar31;
  int iVar32;
  ulong uVar33;
  int iVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  long in_stack_00000008;
  float fStack0000000000000028;
  float fStack000000000000002c;
  byte in_stack_00000080;
  byte bStack0000000000000081;
  byte bStack0000000000000082;
  byte bStack0000000000000083;
  byte bStack0000000000000084;
  byte bStack0000000000000085;
  byte bStack0000000000000086;
  byte bStack0000000000000087;
  byte in_stack_00000088;
  byte bStack0000000000000089;
  byte bStack000000000000008a;
  byte bStack000000000000008b;
  byte bStack000000000000008c;
  byte bStack000000000000008d;
  byte bStack000000000000008e;
  byte bStack000000000000008f;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  ushort in_stack_000000a8;
  long in_stack_000010a8;
  
  FUN_0335b6c8(param_1 + 0x708,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083f9710,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d2d30,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x72f) = unaff_w21;
  in_stack_00000088 = 0;
  bStack0000000000000089 = 0;
  bStack000000000000008a = 0;
  bStack000000000000008b = 0;
  bStack000000000000008c = 0;
  bStack000000000000008d = 0;
  bStack000000000000008e = 0;
  bStack000000000000008f = 0;
  in_stack_00000080 = 0;
  bStack0000000000000081 = 0;
  bStack0000000000000082 = 0;
  bStack0000000000000083 = 0;
  bStack0000000000000084 = 0;
  bStack0000000000000085 = 0;
  bStack0000000000000086 = 0;
  bStack0000000000000087 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  memset(&stack0x000000a8,0,0x1000);
  if (*unaff_x19 < 1) {
LAB_06308eb0:
    if (*(long *)(in_stack_00000008 + 0x28) == in_stack_000010a8) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar20 = NEON_fmov(0xbf800000,4);
  auVar21 = NEON_fmov(0x3f800000,4);
  fStack0000000000000028 = auVar21._8_4_;
  fStack000000000000002c = auVar21._12_4_;
  lVar19 = 0;
  piVar1 = unaff_x19 + 0x1a;
  uVar28 = DAT_012e4e20._8_8_;
  uVar23 = (ulong)DAT_012e4e20;
LAB_06308994:
  bVar4 = *(byte *)(*(long *)(unaff_x19 + 6) + lVar19);
  if (*(int *)(DAT_083d2d30 + 0xe0) == 0) {
    FUN_033b9870();
  }
  if (DAT_086de51e == '\0') {
    FUN_0335b6c8(&DAT_083d2d30,1);
    DataMemoryBarrier(2,3);
    DAT_086de51e = '\x01';
  }
  if (*(int *)(DAT_083d2d30 + 0xe0) == 0) {
    FUN_033b9870();
  }
  if ((bVar4 & 3) != 0) {
    pfVar14 = (float *)(*(long *)(unaff_x19 + 2) + lVar19 * 0x18);
    fVar35 = *pfVar14;
    fVar36 = pfVar14[1];
    fVar37 = pfVar14[2];
    fVar40 = pfVar14[4];
    uVar18 = (ulong)(uint)fVar40;
    FUN_04ec9b04(piVar1,DAT_083f9708);
    FUN_04309140(&stack0x000000a8,DAT_083eb678);
    lVar11 = DAT_0840bbe8;
    in_stack_000000a0._4_2_ = SUB42(fVar40,0);
    in_stack_00000088 = auVar20[8];
    bStack0000000000000089 = auVar20[9];
    bStack000000000000008a = auVar20[10];
    bStack000000000000008b = auVar20[0xb];
    bStack000000000000008c = auVar20[0xc];
    bStack000000000000008d = auVar20[0xd];
    bStack000000000000008e = auVar20[0xe];
    bStack000000000000008f = auVar20[0xf];
    in_stack_00000080 = auVar20[0];
    bStack0000000000000081 = auVar20[1];
    bStack0000000000000082 = auVar20[2];
    bStack0000000000000083 = auVar20[3];
    bStack0000000000000084 = auVar20[4];
    bStack0000000000000085 = auVar20[5];
    bStack0000000000000086 = auVar20[6];
    bStack0000000000000087 = auVar20[7];
    in_stack_00000090 = 0;
    in_stack_00000098 = 0;
    lVar15 = *(long *)(DAT_0840bbe8 + 0x38);
    if (lVar15 == 0) {
      FUN_0338f674(DAT_0840bbe8);
      lVar15 = *(long *)(lVar11 + 0x38);
    }
    FUN_04308cf4(&stack0x000000a8,(long)&stack0x000000a0 + 4,*(undefined8 *)(lVar15 + 0x10));
LAB_06308a6c:
    lVar11 = *(long *)(DAT_083eb680 + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0338f618();
    }
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x38) + 0x20) + 0x135) & 1) == 0)
    {
      FUN_0338f618();
    }
    if (in_stack_000000a8 != 0) {
      uVar12 = FUN_06313168(&stack0x000000a8,DAT_0840bbe0);
      uVar18 = uVar12 & 0xffffffff;
      uVar13 = FUN_04ec9bc4(piVar1,uVar18,DAT_083f9710);
      if ((uVar13 & 1) == 0) {
        FUN_04ec9b38(piVar1,uVar18,DAT_083f9700);
        pfVar14 = (float *)(*(long *)(unaff_x19 + 0xe) + (uVar12 & 0xffff) * 0xc);
        fVar40 = *pfVar14;
        fVar39 = pfVar14[1];
        fVar38 = pfVar14[2];
        if (DAT_086d90cb == '\0') {
          FUN_0335b6c8(&DAT_083ce8b0,1);
          DataMemoryBarrier(2,3);
          DAT_086d90cb = '\x01';
        }
        if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
          FUN_033b9870();
        }
        fVar40 = fVar40 - fVar35;
        fVar39 = fVar39 - fVar36;
        fVar38 = fVar38 - fVar37;
        fVar40 = SQRT(fVar38 * fVar38 + fVar40 * fVar40 + fVar39 * fVar39);
        if (fVar40 <= (float)unaff_x19[1]) {
          fVar39 = 1.0 - fVar40 / (float)unaff_x19[1];
          fVar40 = fVar39;
          if (1.0 < fVar39) {
            fVar40 = 1.0;
          }
          if (fVar39 < 0.0) {
            fVar40 = 0.0;
          }
          powf(fVar40,3.0);
          FUN_062f0ba4(&stack0x00000080,(uint)uVar12 & 0xffff,0);
          uVar3 = *(uint *)(*(long *)(unaff_x19 + 0x12) + (uVar12 & 0xffff) * 4);
          uVar6 = uVar3 >> 0x14;
          uVar12 = (ulong)uVar6;
          if (uVar6 != 0) {
            lVar11 = ((ulong)uVar3 & 0xfffff) << 1;
            do {
              lVar15 = DAT_0840bbd8;
              lVar16 = *(long *)(DAT_0840bbd8 + 0x38);
              if (lVar16 == 0) {
                FUN_0338f674(DAT_0840bbd8);
                lVar16 = *(long *)(lVar15 + 0x38);
              }
              if ((*(byte *)(*(long *)(*(long *)(lVar16 + 8) + 0x20) + 0x135) & 1) == 0) {
                FUN_0338f618();
                lVar16 = *(long *)(lVar15 + 0x38);
              }
              uVar5 = in_stack_000000a8;
              lVar15 = *(long *)(*(long *)(lVar16 + 0x18) + 0x20);
              if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                lVar15 = FUN_0338f618();
              }
              lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x58);
              plVar17 = *(long **)(lVar15 + 0x38);
              if (plVar17 == (long *)0x0) {
                FUN_0338f674(lVar15);
                plVar17 = *(long **)(lVar15 + 0x38);
              }
              lVar16 = *plVar17;
              lVar15 = *(long *)(lVar16 + 0x38);
              if (lVar15 == 0) {
                FUN_0335b6c8(&DAT_08419f38,1);
                DataMemoryBarrier(2,3);
                lVar15 = *(long *)(lVar16 + 0x38);
                if (lVar15 == 0) {
                  FUN_0338f674(lVar16);
                  lVar15 = *(long *)(lVar16 + 0x38);
                }
              }
              if (*(long *)(*(long *)(lVar15 + 8) + 0x38) == 0) {
                FUN_0338f674();
              }
              if (0x7fe < uVar5) break;
              uVar5 = *(ushort *)(*(long *)(unaff_x19 + 0x16) + lVar11);
              uVar13 = FUN_04ec9bc4(piVar1,(ulong)uVar5,DAT_083f9710);
              if ((uVar13 & 1) == 0) {
                pfVar14 = (float *)(*(long *)(unaff_x19 + 0xe) + (ulong)uVar5 * 0xc);
                fVar40 = *pfVar14;
                fVar39 = pfVar14[1];
                fVar38 = pfVar14[2];
                if (DAT_086d90cb == '\0') {
                  FUN_0335b6c8(&DAT_083ce8b0,1);
                  DataMemoryBarrier(2,3);
                  DAT_086d90cb = '\x01';
                }
                if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
                  FUN_033b9870();
                }
                lVar15 = DAT_0840bbe8;
                fVar40 = fVar40 - fVar35;
                fVar39 = fVar39 - fVar36;
                fVar38 = fVar38 - fVar37;
                if (SQRT(fVar38 * fVar38 + fVar40 * fVar40 + fVar39 * fVar39) <= (float)unaff_x19[1]
                   ) {
                  lVar16 = *(long *)(DAT_0840bbe8 + 0x38);
                  in_stack_000000a0._4_2_ = uVar5;
                  if (lVar16 == 0) {
                    FUN_0338f674(DAT_0840bbe8);
                    lVar16 = *(long *)(lVar15 + 0x38);
                  }
                  FUN_04308cf4(&stack0x000000a8,(long)&stack0x000000a0 + 4,
                               *(undefined8 *)(lVar16 + 0x10));
                }
              }
              uVar12 = uVar12 - 1;
              lVar11 = lVar11 + 2;
            } while (uVar12 != 0);
          }
        }
      }
      goto LAB_06308a6c;
    }
    lVar11 = 0xc;
    do {
      if (0.0 <= *(float *)(&stack0x00000080 + lVar11)) {
        uVar18 = 4;
        pfVar14 = (float *)((ulong)&stack0x00000080 | 0xc);
        goto LAB_06308d78;
      }
      lVar11 = lVar11 + -4;
    } while (lVar11 != -4);
    FUN_062f0ba4(&stack0x00000080,(uint)uVar18 & 0xffff,0);
    goto LAB_06308e90;
  }
  goto LAB_06308ea0;
  while( true ) {
    uVar18 = uVar18 - 1;
    pfVar14 = pfVar14 + -1;
    if (uVar18 == 0) break;
LAB_06308d78:
    if (0.0 <= *pfVar14) break;
  }
  uVar12 = 0;
  pfVar14 = (float *)&stack0x00000080;
  uVar13 = uVar18 & 0xffffffff;
  do {
    if (uVar12 < uVar13) {
      *pfVar14 = 1.0 - *pfVar14;
    }
    else {
      *pfVar14 = 0.0;
      pfVar14[4] = 0.0;
    }
    uVar12 = uVar12 + 1;
    pfVar14 = pfVar14 + 1;
  } while (uVar12 != 4);
  fVar40 = (float)CONCAT13(bStack0000000000000083,
                           CONCAT12(bStack0000000000000082,
                                    CONCAT11(bStack0000000000000081,in_stack_00000080)));
  uVar8 = CONCAT17(bStack0000000000000087,
                   CONCAT16(bStack0000000000000086,
                            CONCAT15(bStack0000000000000085,CONCAT14(bStack0000000000000084,fVar40))
                           ));
  auVar9[8] = in_stack_00000088;
  auVar9._0_8_ = uVar8;
  auVar9[9] = bStack0000000000000089;
  auVar9[10] = bStack000000000000008a;
  auVar9[0xb] = bStack000000000000008b;
  auVar7[0xc] = bStack000000000000008c;
  auVar7._0_12_ = auVar9;
  auVar7[0xd] = bStack000000000000008d;
  auVar7[0xe] = bStack000000000000008e;
  auVar7[0xf] = bStack000000000000008f;
  auVar24 = NEON_ext(auVar7,auVar7,8,1);
  fVar35 = (float)((ulong)uVar8 >> 0x20);
  fVar36 = fVar40 + fVar35;
  fVar37 = auVar24._0_4_ + auVar24._4_4_;
  if (fVar36 + fVar37 == 0.0) {
    if (0 < (int)uVar18) {
      pfVar14 = (float *)&stack0x00000080;
      fVar40 = 1.0 / (float)(int)uVar18;
      uVar18 = uVar13 + 1 & 0x1fffffffe;
      uVar12 = uVar23;
      uVar33 = uVar28;
      do {
        if (uVar12 <= uVar13 - 1) {
          *pfVar14 = fVar40;
        }
        if (uVar33 <= uVar13 - 1) {
          pfVar14[1] = fVar40;
        }
        uVar12 = uVar12 + 2;
        uVar33 = uVar33 + 2;
        uVar18 = uVar18 - 2;
        pfVar14 = pfVar14 + 2;
      } while (uVar18 != 0);
    }
  }
  else {
    fVar36 = fVar36 + fVar37;
    fVar35 = fVar35 / fVar36;
    auVar24._0_8_ = CONCAT44(fVar35,fVar40 / fVar36);
    auVar24._8_4_ = auVar9._8_4_ / fVar36;
    auVar24._12_4_ = auVar7._12_4_ / fVar36;
    iVar30 = -(uint)(auVar21._0_4_ < fVar40 / fVar36);
    iVar31 = -(uint)(auVar21._4_4_ < fVar35);
    iVar32 = -(uint)(fStack0000000000000028 < auVar24._8_4_);
    iVar34 = -(uint)(fStack000000000000002c < auVar24._12_4_);
    iVar22 = -(uint)(0x7f800000 < (uint)(auVar24._0_8_ & 0x7fffffff7fffffff));
    iVar26 = -(uint)(0x7f800000 < (uint)((auVar24._0_8_ & 0x7fffffff7fffffff) >> 0x20));
    iVar27 = -(uint)(0x7f800000 < (uint)ABS(auVar24._8_4_));
    iVar29 = -(uint)(0x7f800000 < (uint)ABS(auVar24._12_4_));
    auVar25[0] = (byte)iVar30 | (byte)iVar22;
    auVar25[1] = (byte)((uint)iVar30 >> 8) | (byte)((uint)iVar22 >> 8);
    auVar25[2] = (byte)((uint)iVar30 >> 0x10) | (byte)((uint)iVar22 >> 0x10);
    auVar25[3] = (byte)((uint)iVar30 >> 0x18) | (byte)((uint)iVar22 >> 0x18);
    auVar25[4] = (byte)iVar31 | (byte)iVar26;
    auVar25[5] = (byte)((uint)iVar31 >> 8) | (byte)((uint)iVar26 >> 8);
    auVar25[6] = (byte)((uint)iVar31 >> 0x10) | (byte)((uint)iVar26 >> 0x10);
    auVar25[7] = (byte)((uint)iVar31 >> 0x18) | (byte)((uint)iVar26 >> 0x18);
    auVar25[8] = (byte)iVar32 | (byte)iVar27;
    auVar25[9] = (byte)((uint)iVar32 >> 8) | (byte)((uint)iVar27 >> 8);
    auVar25[10] = (byte)((uint)iVar32 >> 0x10) | (byte)((uint)iVar27 >> 0x10);
    auVar25[0xb] = (byte)((uint)iVar32 >> 0x18) | (byte)((uint)iVar27 >> 0x18);
    auVar25[0xc] = (byte)iVar34 | (byte)iVar29;
    auVar25[0xd] = (byte)((uint)iVar34 >> 8) | (byte)((uint)iVar29 >> 8);
    auVar25[0xe] = (byte)((uint)iVar34 >> 0x10) | (byte)((uint)iVar29 >> 0x10);
    auVar25[0xf] = (byte)((uint)iVar34 >> 0x18) | (byte)((uint)iVar29 >> 0x18);
    auVar24 = auVar24 ^ (auVar24 ^ auVar21) & auVar25;
    uVar18 = auVar24._0_8_ & 0x7fffffff7fffffff;
    iVar22 = -(uint)(0x7f800000 < (uint)uVar18);
    iVar26 = -(uint)(0x7f800000 < (uint)(uVar18 >> 0x20));
    iVar27 = -(uint)(0x7f800000 < (uint)ABS(auVar24._8_4_));
    iVar29 = -(uint)(0x7f800000 < (uint)ABS(auVar24._12_4_));
    iVar30 = -(uint)(auVar24._0_4_ < 0.0);
    iVar31 = -(uint)(auVar24._4_4_ < 0.0);
    iVar32 = -(uint)(auVar24._8_4_ < 0.0);
    iVar34 = -(uint)(auVar24._12_4_ < 0.0);
    in_stack_00000080 = auVar24[0] & ~((byte)iVar30 | (byte)iVar22);
    bStack0000000000000081 = auVar24[1] & ~((byte)((uint)iVar30 >> 8) | (byte)((uint)iVar22 >> 8));
    bStack0000000000000082 =
         auVar24[2] & ~((byte)((uint)iVar30 >> 0x10) | (byte)((uint)iVar22 >> 0x10));
    bStack0000000000000083 =
         auVar24[3] & ~((byte)((uint)iVar30 >> 0x18) | (byte)((uint)iVar22 >> 0x18));
    bStack0000000000000084 = auVar24[4] & ~((byte)iVar31 | (byte)iVar26);
    bStack0000000000000085 = auVar24[5] & ~((byte)((uint)iVar31 >> 8) | (byte)((uint)iVar26 >> 8));
    bStack0000000000000086 =
         auVar24[6] & ~((byte)((uint)iVar31 >> 0x10) | (byte)((uint)iVar26 >> 0x10));
    bStack0000000000000087 =
         auVar24[7] & ~((byte)((uint)iVar31 >> 0x18) | (byte)((uint)iVar26 >> 0x18));
    in_stack_00000088 = auVar24[8] & ~((byte)iVar32 | (byte)iVar27);
    bStack0000000000000089 = auVar24[9] & ~((byte)((uint)iVar32 >> 8) | (byte)((uint)iVar27 >> 8));
    bStack000000000000008a =
         auVar24[10] & ~((byte)((uint)iVar32 >> 0x10) | (byte)((uint)iVar27 >> 0x10));
    bStack000000000000008b =
         auVar24[0xb] & ~((byte)((uint)iVar32 >> 0x18) | (byte)((uint)iVar27 >> 0x18));
    bStack000000000000008c = auVar24[0xc] & ~((byte)iVar34 | (byte)iVar29);
    bStack000000000000008d = auVar24[0xd] & ~((byte)((uint)iVar34 >> 8) | (byte)((uint)iVar29 >> 8))
    ;
    bStack000000000000008e =
         auVar24[0xe] & ~((byte)((uint)iVar34 >> 0x10) | (byte)((uint)iVar29 >> 0x10));
    bStack000000000000008f =
         auVar24[0xf] & ~((byte)((uint)iVar34 >> 0x18) | (byte)((uint)iVar29 >> 0x18));
  }
LAB_06308e90:
  uVar8 = CONCAT17(bStack0000000000000087,
                   CONCAT16(bStack0000000000000086,
                            CONCAT15(bStack0000000000000085,
                                     CONCAT14(bStack0000000000000084,
                                              CONCAT13(bStack0000000000000083,
                                                       CONCAT12(bStack0000000000000082,
                                                                CONCAT11(bStack0000000000000081,
                                                                         in_stack_00000080)))))));
  auVar10[8] = in_stack_00000088;
  auVar10._0_8_ = uVar8;
  auVar10[9] = bStack0000000000000089;
  auVar10[10] = bStack000000000000008a;
  auVar10[0xb] = bStack000000000000008b;
  auVar10[0xc] = bStack000000000000008c;
  auVar10[0xd] = bStack000000000000008d;
  auVar10[0xe] = bStack000000000000008e;
  auVar10[0xf] = bStack000000000000008f;
  puVar2 = (undefined8 *)(*(long *)(unaff_x19 + 10) + lVar19 * 0x20);
  puVar2[1] = auVar10._8_8_;
  *puVar2 = uVar8;
  puVar2[3] = in_stack_00000098;
  puVar2[2] = in_stack_00000090;
LAB_06308ea0:
  lVar19 = lVar19 + 1;
  if (*unaff_x19 <= lVar19) goto LAB_06308eb0;
  goto LAB_06308994;
}


