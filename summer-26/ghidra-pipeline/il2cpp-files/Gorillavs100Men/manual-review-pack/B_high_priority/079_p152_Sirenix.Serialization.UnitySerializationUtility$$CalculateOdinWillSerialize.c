/*
FUNCTION_NAME: Sirenix.Serialization.UnitySerializationUtility$$CalculateOdinWillSerialize
ENTRY_POINT: 03831588
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void Sirenix_Serialization_UnitySerializationUtility__CalculateOdinWillSerialize
               (undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  short *psVar13;
  long lVar14;
  uint uVar15;
  int unaff_w19;
  undefined4 unaff_w20;
  ushort *puVar16;
  int unaff_w21;
  long unaff_x22;
  long lVar17;
  long unaff_x23;
  undefined4 unaff_w24;
  short *psVar18;
  short sVar19;
  int unaff_w26;
  uint unaff_w27;
  int iVar20;
  uint uVar21;
  int unaff_w28;
  long unaff_x29;
  undefined1 auVar22 [16];
  
  do {
    uVar8 = RootMotion_Dynamics_Muscle__get_colliders(*param_1,param_3);
    auVar22 = FUN_02a57f94(uVar8,*(undefined8 *)PTR_DAT_046988f0);
    FUN_02a57a80(unaff_x29 + -0x18,auVar22._0_8_,auVar22._8_8_,*(undefined8 *)PTR_DAT_046988e0);
    auVar22 = FUN_02a57f94(uVar8,*(undefined8 *)PTR_DAT_046988f0);
    uVar9 = auVar22._8_8_;
    iVar11 = *(int *)(unaff_x29 + -0x74);
    lVar14 = *(long *)(unaff_x29 + -0x70);
    uVar15 = *(uint *)(unaff_x29 + -0x58);
    *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar22;
    do {
      if ((uint)uVar9 <= uVar15) goto LAB_03831644;
      *(int *)(auVar22._0_8_ + (long)(int)uVar15 * 4) = unaff_w28;
      param_1 = (undefined8 *)StringLiteral_9132;
      if ((int)unaff_x23 < unaff_w19) {
        unaff_x23 = (long)(int)unaff_x23 + 1;
        if (*(uint *)(lVar14 + 0x18) <= (uint)unaff_x23) goto LAB_03831644;
        unaff_w26 = *(int *)(lVar14 + unaff_x23 * 4 + 0x20);
      }
      if ((unaff_w26 == 0) || (unaff_w28 = unaff_w26 + unaff_w28, iVar11 <= unaff_w28)) {
        uVar8 = *(undefined8 *)(unaff_x29 + -0x50);
        *(undefined4 *)(unaff_x29 + -0x5c) = unaff_w20;
        iVar11 = *(int *)(*(long *)(unaff_x29 + -0x80) + 8);
        *(undefined4 *)(unaff_x29 + -0x94) = unaff_w24;
        if ((iVar11 != 0) && (unaff_w27 == 0)) {
          if (*(long *)(unaff_x29 + -0x40) == 0) goto LAB_0383165c;
          lVar14 = *(long *)(*(long *)(unaff_x29 + -0x40) + 0x30);
          if (DAT_0491f803 == '\0') {
            FUN_020612a4(PTR_DAT_04692638);
            DAT_0491f803 = '\x01';
          }
          if (lVar14 == 0) goto LAB_0383165c;
          if (*(int *)(lVar14 + 0x10) == 1) {
            uVar3 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar3 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar3 < *(uint *)(unaff_x22 + 0x10)) {
                lVar17 = *(long *)(unaff_x22 + 8);
                uVar6 = FUN_0372ef60(lVar14,0,0);
                *(undefined2 *)(lVar17 + (long)(int)uVar3 * 2) = uVar6;
                *(uint *)(unaff_x22 + 0x18) = uVar3 + 1;
                goto LAB_03830a54;
              }
              goto LAB_03831644;
            }
          }
          FUN_038b8f2c();
        }
LAB_03830a54:
        uVar7 = FUN_024e074c(*(undefined8 *)(unaff_x29 + -0x20),uVar8,
                             *(undefined8 *)PTR_DAT_04691998);
        *(undefined8 *)(unaff_x29 + -0x58) = uVar7;
        if ((int)uVar8 <= (int)unaff_w27) goto LAB_038314f0;
        psVar18 = *(short **)(unaff_x29 + -0x30);
        uVar3 = *(uint *)(unaff_x29 + -0x34) ^ 1;
        iVar11 = (int)*(undefined8 *)(unaff_x29 + -0x50);
        *(int *)(unaff_x29 + -0x98) = iVar11 + -2;
        *(undefined4 *)(unaff_x29 + -0x74) = 0;
        *(int *)(unaff_x29 + -0x70) = -iVar11;
        goto LAB_03830a98;
      }
      uVar3 = *(uint *)(unaff_x29 + -0x10);
      uVar9 = (ulong)uVar3;
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)uVar3);
    param_3 = (ulong)(uVar3 << 1);
    *(uint *)(unaff_x29 + -0x58) = uVar15;
  } while( true );
LAB_03830a98:
  uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2);
  if ((uVar2 == 0x3b) || (*(uint *)(unaff_x29 + -0x20) = unaff_w27, uVar2 == 0)) goto LAB_038314f0;
  iVar11 = *(int *)(unaff_x29 + -0x44);
  if ((iVar11 < 1) || ((0x30 < uVar2 || ((1L << ((ulong)uVar2 & 0x3f) & 0x1400800000000U) == 0)))) {
    lVar14 = *(long *)(unaff_x29 + -0x40);
  }
  else {
    lVar14 = *(long *)(unaff_x29 + -0x40);
    iVar20 = iVar11 + 1;
    if (0 < iVar11) {
      iVar11 = 1;
    }
    *(int *)(unaff_x29 + -0x34) = iVar11 + -1;
    do {
      sVar19 = *psVar18;
      sVar5 = 0x30;
      if (sVar19 != 0) {
        psVar18 = psVar18 + 1;
        sVar5 = sVar19;
      }
      if (DAT_0491f804 == '\0') {
        FUN_020612a4(PTR_DAT_04692638);
        DAT_0491f804 = '\x01';
      }
      uVar21 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar21 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar21) goto LAB_03831644;
        *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar21 * 2) = sVar5;
      }
      else {
        FUN_038b8e00();
      }
      if (((uVar3 & 1) == 0 && 1 < unaff_w21) && (-1 < (int)uVar15)) {
        if (*(uint *)(unaff_x29 + -0x10) <= uVar15) goto LAB_03831644;
        if (unaff_w21 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar15 * 4) + 1) {
          if (lVar14 == 0) goto LAB_0383165c;
          lVar17 = *(long *)(lVar14 + 0x40);
          if (DAT_0491f803 == '\0') {
            FUN_020612a4(PTR_DAT_04692638);
            DAT_0491f803 = '\x01';
          }
          if (lVar17 == 0) goto LAB_0383165c;
          if (*(int *)(lVar17 + 0x10) == 1) {
            uVar21 = *(uint *)(unaff_x22 + 0x18);
            if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar21) goto LAB_03830c20;
            if (*(uint *)(unaff_x22 + 0x10) <= uVar21) goto LAB_03831644;
            lVar14 = *(long *)(unaff_x22 + 8);
            uVar6 = FUN_0372ef60(lVar17,0,0);
            *(undefined2 *)(lVar14 + (long)(int)uVar21 * 2) = uVar6;
            lVar14 = *(long *)(unaff_x29 + -0x40);
            *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
          }
          else {
LAB_03830c20:
            FUN_038b8f2c();
          }
          uVar15 = uVar15 - 1;
        }
      }
      iVar20 = iVar20 + -1;
      unaff_w21 = unaff_w21 + -1;
    } while (1 < iVar20);
    iVar11 = *(int *)(unaff_x29 + -0x34);
  }
  *(int *)(unaff_x29 + -0x44) = iVar11;
  unaff_w27 = *(int *)(unaff_x29 + -0x20) + 1;
  uVar21 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
  if (uVar2 < 0x46) {
    if (uVar2 < 0x27) {
      iVar20 = *(int *)(unaff_x29 + -0x5c);
      if (uVar2 < 0x24) {
        if (uVar2 == 0x22) goto LAB_03830e8c;
        iVar20 = *(int *)(unaff_x29 + -0x5c);
        if (uVar2 != 0x23) goto LAB_03830d10;
LAB_03830e78:
        if (iVar11 < 0) {
          iVar11 = iVar11 + 1;
          if (unaff_w21 <= *(int *)(unaff_x29 + -0x8c)) {
LAB_038311f8:
            sVar19 = 0x30;
            goto LAB_038311fc;
          }
          *(int *)(unaff_x29 + -0x44) = iVar11;
        }
        else {
          sVar19 = *psVar18;
          if (sVar19 == 0) {
            if (*(int *)(unaff_x29 + -0x90) < unaff_w21) goto LAB_038311f8;
          }
          else {
            psVar18 = psVar18 + 1;
LAB_038311fc:
            if (DAT_0491f804 == '\0') {
              FUN_020612a4(PTR_DAT_04692638);
              DAT_0491f804 = '\x01';
            }
            uVar4 = *(uint *)(unaff_x22 + 0x18);
            uVar12 = *(uint *)(unaff_x22 + 0x10);
            *(int *)(unaff_x29 + -0x44) = iVar11;
            if ((int)uVar4 < (int)uVar12) {
              if (uVar12 <= uVar4) goto LAB_03831644;
              *(uint *)(unaff_x22 + 0x18) = uVar4 + 1;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar4 * 2) = sVar19;
            }
            else {
              FUN_038b8e00();
            }
            if (((uVar3 & 1) == 0 && 1 < unaff_w21) && (-1 < (int)uVar15)) {
              if (*(uint *)(unaff_x29 + -0x10) <= uVar15) goto LAB_03831644;
              if (unaff_w21 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar15 * 4) + 1) {
                if (*(long *)(unaff_x29 + -0x40) == 0) goto LAB_0383165c;
                lVar14 = *(long *)(*(long *)(unaff_x29 + -0x40) + 0x40);
                if (DAT_0491f803 == '\0') {
                  FUN_020612a4(PTR_DAT_04692638);
                  DAT_0491f803 = '\x01';
                }
                if (lVar14 == 0) goto LAB_0383165c;
                if (*(int *)(lVar14 + 0x10) == 1) {
                  uVar12 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar12) goto LAB_038313cc;
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_03831644;
                  lVar17 = *(long *)(unaff_x22 + 8);
                  uVar6 = FUN_0372ef60(lVar14,0,0);
                  *(undefined2 *)(lVar17 + (long)(int)uVar12 * 2) = uVar6;
                  *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
                }
                else {
LAB_038313cc:
                  FUN_038b8f2c();
                }
                uVar15 = uVar15 - 1;
              }
            }
          }
        }
        unaff_w21 = unaff_w21 + -1;
        goto LAB_038314e4;
      }
      if (uVar2 == 0x24) goto LAB_03830d94;
      if (uVar2 == 0x25) {
        if (lVar14 != 0) {
          lVar14 = *(long *)(lVar14 + 0x90);
          goto LAB_03830fdc;
        }
        goto LAB_0383165c;
      }
      if (uVar2 != 0x26) goto LAB_03830d10;
    }
    else if (uVar2 < 0x2e) {
      if (uVar2 == 0x27) {
LAB_03830e8c:
        if ((int)unaff_w27 < (int)uVar21) {
          lVar14 = (ulong)unaff_w27 << 0x20;
          puVar16 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2);
          uVar12 = ~*(uint *)(unaff_x29 + -0x20);
          while ((uVar1 = *puVar16, uVar1 != 0 && (uVar1 != uVar2))) {
            if (DAT_0491f804 == '\0') {
              FUN_020612a4(PTR_DAT_04692638);
              DAT_0491f804 = '\x01';
            }
            uVar21 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar21 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar21) goto LAB_03831644;
              *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar21 * 2) = uVar1;
            }
            else {
              FUN_038b8e00();
            }
            uVar12 = uVar12 - 1;
            puVar16 = puVar16 + 1;
            lVar14 = lVar14 + 0x100000000;
            if (*(uint *)(unaff_x29 + -0x70) == uVar12) goto LAB_038314f0;
          }
          uVar21 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
          unaff_w27 = (*(short *)((lVar14 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar12;
        }
        goto LAB_038314e4;
      }
      if (uVar2 == 0x2c) goto LAB_038314e4;
      iVar20 = *(int *)(unaff_x29 + -0x5c);
      if (uVar2 != 0x2d) goto LAB_03830d10;
    }
    else {
      iVar20 = *(int *)(unaff_x29 + -0x5c);
      if (uVar2 == 0x2e) {
        if ((*(uint *)(unaff_x29 + -0x74) & 1) != 0 || unaff_w21 != 0) goto LAB_038314e4;
        if ((*(int *)(unaff_x29 + -0x90) < 0) ||
           ((iVar20 < *(int *)(unaff_x29 + -0x94) && (*psVar18 != 0)))) {
          if (lVar14 == 0) goto LAB_0383165c;
          lVar14 = *(long *)(lVar14 + 0x38);
          if (DAT_0491f803 == '\0') {
            FUN_020612a4(PTR_DAT_04692638);
            DAT_0491f803 = '\x01';
          }
          if (lVar14 == 0) goto LAB_0383165c;
          if (*(int *)(lVar14 + 0x10) == 1) {
            uVar12 = *(uint *)(unaff_x22 + 0x18);
            if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar12) goto LAB_038314c8;
            if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_03831644;
            lVar17 = *(long *)(unaff_x22 + 8);
            uVar6 = FUN_0372ef60(lVar14,0,0);
            *(undefined2 *)(lVar17 + (long)(int)uVar12 * 2) = uVar6;
            *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
          }
          else {
LAB_038314c8:
            FUN_038b8f2c();
          }
          unaff_w21 = 0;
          *(undefined4 *)(unaff_x29 + -0x74) = 1;
        }
        else {
          *(undefined4 *)(unaff_x29 + -0x74) = 0;
          unaff_w21 = 0;
        }
        goto LAB_038314e4;
      }
      if (uVar2 != 0x2f) {
        if (uVar2 == 0x30) goto LAB_03830e78;
LAB_03830d10:
        if (uVar2 == 0x45) goto LAB_03830d18;
      }
    }
LAB_03830d94:
    if (DAT_0491f804 == '\0') {
      FUN_020612a4(PTR_DAT_04692638);
      DAT_0491f804 = '\x01';
    }
    uVar12 = *(uint *)(unaff_x22 + 0x18);
    if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
      if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_03831644;
      *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
      *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = uVar2;
    }
    else {
LAB_03830dec:
      FUN_038b8e00();
    }
  }
  else if (uVar2 == 0x5c) {
    if (((int)unaff_w27 < (int)uVar21) &&
       (sVar19 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2), sVar19 != 0))
    {
      if (DAT_0491f804 == '\0') {
        FUN_020612a4(PTR_DAT_04692638);
        DAT_0491f804 = '\x01';
      }
      uVar12 = *(uint *)(unaff_x22 + 0x18);
      unaff_w27 = *(int *)(unaff_x29 + -0x20) + 2;
      if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar12) goto LAB_03830dec;
      if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_03831644;
      *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
      *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = sVar19;
    }
  }
  else {
    iVar20 = *(int *)(unaff_x29 + -0x5c);
    if (uVar2 == 0x65) {
LAB_03830d18:
      if ((*(uint *)(unaff_x29 + -0x24) & 1) == 0) {
        if (DAT_0491f804 == '\0') {
          FUN_020612a4(PTR_DAT_04692638);
          DAT_0491f804 = '\x01';
        }
        uVar12 = *(uint *)(unaff_x22 + 0x18);
        iVar11 = *(int *)(unaff_x29 + -0x20);
        if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_03831644;
          *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = uVar2;
        }
        else {
          FUN_038b8e00();
        }
        if ((int)unaff_w27 < (int)uVar21) {
          sVar19 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2);
          if ((sVar19 == 0x2d) || (sVar19 == 0x2b)) {
            if (DAT_0491f804 == '\0') {
              FUN_020612a4(PTR_DAT_04692638);
              DAT_0491f804 = '\x01';
            }
            uVar12 = *(uint *)(unaff_x22 + 0x18);
            unaff_w27 = iVar11 + 2;
            if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_03831644;
              *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = sVar19;
            }
            else {
              FUN_038b8e00();
            }
          }
          if ((int)unaff_w27 < (int)uVar21) {
            psVar13 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2);
            lVar14 = *(long *)(unaff_x29 + -0x68) - (long)(int)unaff_w27;
            while (*psVar13 == 0x30) {
              if (DAT_0491f804 == '\0') {
                FUN_020612a4(PTR_DAT_04692638);
                DAT_0491f804 = '\x01';
              }
              uVar21 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar21 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar21) goto LAB_03831644;
                *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
                *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar21 * 2) = 0x30;
              }
              else {
                FUN_038b8e00();
              }
              lVar14 = lVar14 + -1;
              unaff_w27 = unaff_w27 + 1;
              psVar13 = psVar13 + 1;
              if (lVar14 == 0) goto LAB_038314f0;
            }
            uVar21 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
          }
        }
      }
      else {
        if (((int)unaff_w27 < (int)uVar21) &&
           (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2) == 0x30)) {
          uVar10 = 0;
          uVar12 = *(int *)(unaff_x29 + -0x20) + 2;
          goto LAB_03830d48;
        }
        uVar12 = *(int *)(unaff_x29 + -0x20) + 2;
        if ((int)uVar21 <= (int)uVar12) {
LAB_03831450:
          if (DAT_0491f804 == '\0') {
            FUN_020612a4(PTR_DAT_04692638);
            DAT_0491f804 = '\x01';
          }
          uVar12 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_03831644;
            *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
            *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = uVar2;
          }
          else {
            FUN_038b8e00();
          }
          *(undefined4 *)(unaff_x29 + -0x24) = 1;
          goto LAB_038314e4;
        }
        sVar19 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2);
        if (sVar19 == 0x2d) {
          if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar12 * 2) != 0x30)
          goto LAB_03831450;
          uVar10 = 0;
        }
        else {
          if ((sVar19 != 0x2b) ||
             (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar12 * 2) != 0x30))
          goto LAB_03831450;
          uVar10 = 1;
        }
LAB_03830d48:
        unaff_w27 = uVar12;
        if ((int)uVar12 < (int)uVar21) {
          psVar13 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar12 * 2);
          do {
            unaff_w27 = uVar12;
            if (*psVar13 != 0x30) break;
            uVar12 = uVar12 + 1;
            psVar13 = psVar13 + 1;
            unaff_w27 = uVar21;
          } while (uVar21 != uVar12);
        }
        if (**(short **)(unaff_x29 + -0x30) == 0) {
          iVar20 = 0;
        }
        else {
          iVar20 = *(int *)(*(long *)(unaff_x29 + -0x80) + 4) - iVar20;
        }
        if (*(int *)(*(long *)PTR_DAT_046923c0 + 0xe4) == 0) {
          *(int *)(unaff_x29 + -0x24) = iVar20;
          *(undefined4 *)(unaff_x29 + -0x20) = uVar10;
          thunk_FUN_020b5864();
        }
        FUN_038367b8();
      }
      *(undefined4 *)(unaff_x29 + -0x24) = 0;
    }
    else {
      if (uVar2 != 0x2030) goto LAB_03830d94;
      if (lVar14 == 0) goto LAB_0383165c;
      lVar14 = *(long *)(lVar14 + 0x98);
LAB_03830fdc:
      if (DAT_0491f803 == '\0') {
        FUN_020612a4(PTR_DAT_04692638);
        DAT_0491f803 = '\x01';
      }
      if (lVar14 == 0) goto LAB_0383165c;
      if (*(int *)(lVar14 + 0x10) == 1) {
        uVar12 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (uVar12 < *(uint *)(unaff_x22 + 0x10)) {
            lVar17 = *(long *)(unaff_x22 + 8);
            uVar6 = FUN_0372ef60(lVar14,0,0);
            *(undefined2 *)(lVar17 + (long)(int)uVar12 * 2) = uVar6;
            *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
            goto LAB_038314e4;
          }
          goto LAB_03831644;
        }
      }
      FUN_038b8f2c();
    }
  }
LAB_038314e4:
  if ((int)uVar21 <= (int)unaff_w27) goto LAB_038314f0;
  goto LAB_03830a98;
LAB_0383165c:
  if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_0206154c();
  }
  goto LAB_03831674;
LAB_03831644:
  if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_02061554();
  }
  goto LAB_03831674;
LAB_038314f0:
  if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_03831674:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


