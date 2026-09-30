/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateMultidimensionalArray
ENTRY_POINT: 0500a7e8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateMultidimensionalArray
               (long param_1)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  undefined1 auVar4 [12];
  undefined2 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 uVar8;
  int iVar9;
  int in_w10;
  int iVar10;
  long in_x12;
  long lVar11;
  uint uVar12;
  uint uVar13;
  undefined8 unaff_x20;
  uint uVar14;
  short *psVar15;
  long unaff_x22;
  short *psVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  short sVar20;
  uint uVar21;
  undefined8 unaff_x26;
  int iVar22;
  int unaff_w28;
  ushort *puVar23;
  long unaff_x29;
  undefined1 auVar24 [16];
  
  lVar11 = *(long *)(in_x12 + 0x10);
  if (lVar11 != 0) {
    iVar17 = *(int *)(lVar11 + 0x18);
    if (iVar17 == 0) {
      iVar22 = 0;
    }
    else {
      iVar22 = *(int *)(lVar11 + 0x20);
    }
    uVar12 = 0xffffffff;
    iVar9 = (*(uint *)(unaff_x29 + -0x4c) & (int)*(uint *)(unaff_x29 + -0x4c) >> 0x1f) + unaff_w28;
    if (in_w10 <= iVar9) {
      in_w10 = iVar9;
    }
    if ((iVar22 != 0) && (iVar22 < in_w10)) {
      uVar12 = 0;
      lVar18 = 0;
      uVar7 = 4;
      *(long *)(unaff_x29 + -0x58) = lVar11;
      iVar9 = iVar22;
      while( true ) {
        auVar24._8_8_ = uVar7;
        auVar24._0_8_ = param_1;
        auVar4 = auVar24._0_12_;
        if ((int)uVar7 <= (int)uVar12) {
          uVar6 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675ee10,(int)uVar7 << 1);
          auVar24 = FUN_041b4c48(uVar6,*(undefined8 *)PTR_DAT_0677a100);
          FUN_041b475c(unaff_x29 + -0x18,auVar24._0_8_,auVar24._8_8_,*(undefined8 *)PTR_DAT_0677a0f0
                      );
          auVar24 = FUN_041b4c48(uVar6,*(undefined8 *)PTR_DAT_0677a100);
          auVar4 = auVar24._0_12_;
          lVar11 = *(long *)(unaff_x29 + -0x58);
          *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar24;
        }
        param_1 = auVar4._0_8_;
        if (auVar4._8_4_ <= uVar12) goto LAB_0500b448;
        *(int *)(param_1 + (long)(int)uVar12 * 4) = iVar22;
        if ((int)lVar18 < iVar17 + -1) {
          lVar18 = (long)(int)lVar18 + 1;
          if (*(uint *)(lVar11 + 0x18) <= (uint)lVar18) goto LAB_0500b448;
          iVar9 = *(int *)(lVar11 + lVar18 * 4 + 0x20);
        }
        if ((iVar9 == 0) || (iVar22 = iVar9 + iVar22, in_w10 <= iVar22)) break;
        uVar7 = (ulong)*(uint *)(unaff_x29 + -0x10);
        uVar12 = uVar12 + 1;
      }
      unaff_x26 = *(undefined8 *)(unaff_x29 + -0x70);
    }
    uVar7 = FUN_05015978(unaff_x26,0);
    if ((*(int *)(unaff_x29 + -0x38) != 0) || ((uVar7 & 1) == 0)) {
LAB_0500a8a4:
      uVar6 = FUN_034850a4(*(undefined8 *)(unaff_x29 + -0x28),unaff_x20,
                           *(undefined8 *)PTR_DAT_06770f70);
      *(undefined8 *)(unaff_x29 + -0x58) = uVar6;
      uVar13 = (uint)unaff_x20;
      if (*(int *)(unaff_x29 + -0x38) < (int)uVar13) {
        psVar16 = *(short **)(unaff_x29 + -0x30);
        *(undefined4 *)(unaff_x29 + -0x7c) = 0;
        *(uint *)(unaff_x29 + -0x28) = *(uint *)(unaff_x29 + -0x3c) ^ 1;
        *(uint *)(unaff_x29 + -0x8c) = uVar13 - 2;
        *(long *)(unaff_x29 + -0x88) = (long)(int)uVar13;
        do {
          uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)*(int *)(unaff_x29 + -0x38) * 2);
          if ((uVar2 == 0x3b) || (uVar2 == 0)) break;
          iVar17 = *(int *)(unaff_x29 + -0x4c);
          uVar21 = (uint)uVar2;
          if ((iVar17 < 1) ||
             ((0x30 < uVar2 || ((1L << ((ulong)uVar21 & 0x3f) & 0x1400800000000U) == 0)))) {
            lVar11 = *(long *)(unaff_x29 + -0x48);
          }
          else {
            lVar11 = *(long *)(unaff_x29 + -0x48);
            uVar19 = *(uint *)(unaff_x29 + -0x28);
            iVar22 = iVar17 + 1;
            *(int *)(unaff_x29 + -0x3c) = unaff_w28 - iVar17;
            do {
              sVar20 = *psVar16;
              sVar3 = 0x30;
              if (sVar20 != 0) {
                psVar16 = psVar16 + 1;
                sVar3 = sVar20;
              }
              if (DAT_06b78666 == '\0') {
                FUN_02d6084c(PTR_DAT_067714a8);
                DAT_06b78666 = '\x01';
              }
              uVar14 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar14 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar14) goto LAB_0500b448;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar14 * 2) = sVar3;
                *(uint *)(unaff_x22 + 0x18) = uVar14 + 1;
              }
              else {
                    /* try { // try from 0500a9b8 to 0510aa63 has its CatchHandler @ 0500a9b8
                       catch() { ... } // from try @ 0500a9b8 with catch @ 0500a9b8
                       catch() { ... } // from try @ 0500aa6c with catch @ 0500a9b8
                       catch() { ... } // from try @ 0500ab68 with catch @ 0500a9b8
                       catch() { ... } // from try @ 0500ac28 with catch @ 0500a9b8 */
                FUN_04ea5848(unaff_x22,sVar3,0);
              }
              if ((-1 < (int)uVar12) && (1 < unaff_w28 && (uVar19 & 1) == 0)) {
                if (*(uint *)(unaff_x29 + -0x10) <= uVar12) goto LAB_0500b448;
                if (unaff_w28 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar12 * 4) + 1) {
                  if (lVar11 == 0) goto LAB_0500b44c;
                  lVar18 = *(long *)(lVar11 + 0x40);
                  if (DAT_06b79233 == '\0') {
                    FUN_02d6084c(PTR_DAT_067714a8);
                    DAT_06b79233 = '\x01';
                  }
                  if (lVar18 == 0) goto LAB_0500b44c;
                  if (*(int *)(lVar18 + 0x10) == 1) {
                    uVar19 = *(uint *)(unaff_x22 + 0x18);
                    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar19) goto LAB_0500aa78;
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar19) goto LAB_0500b448;
                    lVar11 = *(long *)(unaff_x22 + 8);
                    uVar5 = FUN_04e87a5c(lVar18,0,0);
                    /* try { // try from 0500aa64 to 0510aa6b has its CatchHandler @ 0500ab38 */
                    *(undefined2 *)(lVar11 + (long)(int)uVar19 * 2) = uVar5;
                    lVar11 = *(long *)(unaff_x29 + -0x48);
                    /* try { // try from 0500aa6c to 0510ab4f has its CatchHandler @ 0500a9b8 */
                    *(uint *)(unaff_x22 + 0x18) = uVar19 + 1;
                  }
                  else {
LAB_0500aa78:
                    FUN_04ea5974(unaff_x22,lVar18,0);
                  }
                  uVar19 = *(uint *)(unaff_x29 + -0x28);
                  uVar12 = uVar12 - 1;
                }
              }
              iVar22 = iVar22 + -1;
              unaff_w28 = unaff_w28 + -1;
            } while (1 < iVar22);
            unaff_w28 = *(int *)(unaff_x29 + -0x3c);
            iVar17 = 0;
          }
          uVar19 = *(int *)(unaff_x29 + -0x38) + 1;
          if (uVar21 < 0x46) {
            switch(uVar2) {
            case 0x22:
            case 0x27:
              if ((int)uVar19 < (int)uVar13) {
                *(int *)(unaff_x29 + -0x3c) = unaff_w28;
                *(int *)(unaff_x29 + -0x4c) = iVar17;
                lVar11 = (ulong)uVar19 << 0x20;
                uVar14 = ~*(uint *)(unaff_x29 + -0x38);
                puVar23 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar19 * 2);
                lVar18 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar19;
                while( true ) {
                  uVar2 = *puVar23;
                  if ((uVar2 == 0) || (uVar2 == uVar21)) break;
                  if (DAT_06b78666 == '\0') {
                    FUN_02d6084c(PTR_DAT_067714a8);
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0500aa64 with catch @ 0500ab38
                        */
                    DAT_06b78666 = '\x01';
                  }
                  uVar19 = *(uint *)(unaff_x22 + 0x18);
                    /* try { // try from 0500ab50 to 0510ab67 has its CatchHandler @ 0500ac20 */
                  if ((int)uVar19 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar19) goto LAB_0500b448;
                    *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar19 * 2) = uVar2;
                    /* try { // try from 0500ab68 to 0510ac0f has its CatchHandler @ 0500a9b8 */
                    *(uint *)(unaff_x22 + 0x18) = uVar19 + 1;
                  }
                  else {
                    FUN_04ea5848(unaff_x22,uVar2,0);
                  }
                  lVar11 = lVar11 + 0x100000000;
                  uVar14 = uVar14 - 1;
                  lVar18 = lVar18 + -1;
                  puVar23 = puVar23 + 1;
                  if (lVar18 == 0) goto LAB_0500b2e8;
                }
                iVar17 = *(int *)(unaff_x29 + -0x4c);
                unaff_w28 = *(int *)(unaff_x29 + -0x3c);
                uVar19 = (*(short *)((lVar11 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar14
                ;
              }
              break;
            case 0x23:
            case 0x30:
              if (iVar17 < 0) {
                iVar17 = iVar17 + 1;
                if (unaff_w28 <= *(int *)(unaff_x29 + -0x78)) {
LAB_0500af80:
                  sVar20 = 0x30;
                  goto LAB_0500af84;
                }
              }
              else {
                sVar20 = *psVar16;
                if (sVar20 == 0) {
                  if (*(int *)(unaff_x29 + -0x74) < unaff_w28) goto LAB_0500af80;
                }
                else {
                  psVar16 = psVar16 + 1;
LAB_0500af84:
                  if (DAT_06b78666 == '\0') {
                    FUN_02d6084c(PTR_DAT_067714a8);
                    DAT_06b78666 = '\x01';
                  }
                  uVar14 = *(uint *)(unaff_x22 + 0x18);
                  uVar21 = *(uint *)(unaff_x29 + -0x28);
                  if ((int)uVar14 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar14) goto LAB_0500b448;
                    *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar14 * 2) = sVar20;
                    *(uint *)(unaff_x22 + 0x18) = uVar14 + 1;
                  }
                  else {
                    FUN_04ea5848(unaff_x22,sVar20,0);
                  }
                  if ((-1 < (int)uVar12) && (1 < unaff_w28 && (uVar21 & 1) == 0)) {
                    if (*(uint *)(unaff_x29 + -0x10) <= uVar12) goto LAB_0500b448;
                    if (unaff_w28 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar12 * 4) + 1)
                    {
                      if (lVar11 == 0) goto LAB_0500b44c;
                      lVar11 = *(long *)(lVar11 + 0x40);
                      if (DAT_06b79233 == '\0') {
                        FUN_02d6084c(PTR_DAT_067714a8);
                        DAT_06b79233 = '\x01';
                      }
                      if (lVar11 == 0) goto LAB_0500b44c;
                      if (*(int *)(lVar11 + 0x10) == 1) {
                        uVar21 = *(uint *)(unaff_x22 + 0x18);
                        if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar21) goto LAB_0500b09c;
                        if (*(uint *)(unaff_x22 + 0x10) <= uVar21) goto LAB_0500b448;
                        lVar18 = *(long *)(unaff_x22 + 8);
                        uVar5 = FUN_04e87a5c(lVar11,0,0);
                        *(undefined2 *)(lVar18 + (long)(int)uVar21 * 2) = uVar5;
                        *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
                      }
                      else {
LAB_0500b09c:
                        FUN_04ea5974(unaff_x22,lVar11,0);
                      }
                      uVar12 = uVar12 - 1;
                    }
                  }
                }
              }
              unaff_w28 = unaff_w28 + -1;
              break;
            case 0x24:
            case 0x26:
            case 0x28:
            case 0x29:
            case 0x2a:
            case 0x2b:
            case 0x2d:
            case 0x2f:
switchD_0500aae0_caseD_24:
              if (DAT_06b78666 == '\0') {
                FUN_02d6084c(PTR_DAT_067714a8);
                DAT_06b78666 = '\x01';
              }
              uVar14 = *(uint *)(unaff_x22 + 0x18);
              uVar21 = *(uint *)(unaff_x22 + 0x10);
              if ((int)uVar21 <= (int)uVar14) goto LAB_0500ac9c;
LAB_0500ad34:
              if (uVar21 <= uVar14) goto LAB_0500b448;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar14 * 2) = uVar2;
              *(uint *)(unaff_x22 + 0x18) = uVar14 + 1;
              break;
            case 0x25:
              if (lVar11 == 0) goto LAB_0500b44c;
              lVar11 = *(long *)(lVar11 + 0x90);
joined_r0x0500abc8:
              if (DAT_06b79233 == '\0') {
                FUN_02d6084c(PTR_DAT_067714a8);
                DAT_06b79233 = '\x01';
              }
              if (lVar11 == 0) goto LAB_0500b44c;
              if (*(int *)(lVar11 + 0x10) == 1) {
                uVar21 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar21 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (uVar21 < *(uint *)(unaff_x22 + 0x10)) {
                    /* try { // try from 0500ac10 to 0510ac1f has its CatchHandler @ 0500ac20 */
                    lVar18 = *(long *)(unaff_x22 + 8);
                    /* catch() { ... } // from try @ 0500ab50 with catch @ 0500ac20
                       catch() { ... } // from try @ 0500ac10 with catch @ 0500ac20 */
                    uVar5 = FUN_04e87a5c(lVar11,0,0);
                    /* try { // try from 0500ac24 to 0510ac27 has its CatchHandler @ 0500ac30 */
                    /* try { // try from 0500ac28 to 0510ac33 has its CatchHandler @ 0500a9b8 */
                    *(undefined2 *)(lVar18 + (long)(int)uVar21 * 2) = uVar5;
                    *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
                    break;
                  }
                  goto LAB_0500b448;
                }
              }
              FUN_04ea5974(unaff_x22,lVar11,0);
              break;
            case 0x2c:
              break;
            case 0x2e:
              if ((*(uint *)(unaff_x29 + -0x7c) & 1) == 0 && unaff_w28 == 0) {
                if ((*(int *)(unaff_x29 + -0x74) < 0) ||
                   ((*(int *)(unaff_x29 + -0x34) < *(int *)(unaff_x29 + -0x1c) && (*psVar16 != 0))))
                {
                  if (lVar11 == 0) goto LAB_0500b44c;
                  lVar11 = *(long *)(lVar11 + 0x38);
                  if (DAT_06b79233 == '\0') {
                    FUN_02d6084c(PTR_DAT_067714a8);
                    DAT_06b79233 = '\x01';
                  }
                  if (lVar11 == 0) goto LAB_0500b44c;
                  if (*(int *)(lVar11 + 0x10) == 1) {
                    uVar21 = *(uint *)(unaff_x22 + 0x18);
                    if ((int)uVar21 < (int)*(uint *)(unaff_x22 + 0x10)) {
                      if (uVar21 < *(uint *)(unaff_x22 + 0x10)) {
                        lVar18 = *(long *)(unaff_x22 + 8);
                        uVar5 = FUN_04e87a5c(lVar11,0,0);
                        *(undefined2 *)(lVar18 + (long)(int)uVar21 * 2) = uVar5;
                        *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
                        unaff_w28 = 0;
                        *(undefined4 *)(unaff_x29 + -0x7c) = 1;
                        break;
                      }
                      goto LAB_0500b448;
                    }
                  }
                  FUN_04ea5974(unaff_x22,lVar11,0);
                  unaff_w28 = 0;
                  *(undefined4 *)(unaff_x29 + -0x7c) = 1;
                }
                else {
                  *(undefined4 *)(unaff_x29 + -0x7c) = 0;
                  unaff_w28 = 0;
                }
              }
              break;
            default:
              if (uVar2 != 0x45) goto switchD_0500aae0_caseD_24;
LAB_0500accc:
              if ((*(uint *)(unaff_x29 + -0x5c) & 1) == 0) {
                iVar22 = *(int *)(unaff_x29 + -0x38);
                if (DAT_06b78666 == '\0') {
                  FUN_02d6084c(PTR_DAT_067714a8);
                  DAT_06b78666 = '\x01';
                }
                uVar14 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar14 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar14) goto LAB_0500b448;
                  *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar14 * 2) = uVar2;
                  *(uint *)(unaff_x22 + 0x18) = uVar14 + 1;
                }
                else {
                  FUN_04ea5848(unaff_x22,uVar21,0);
                }
                if ((int)uVar19 < (int)uVar13) {
                  sVar20 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar19 * 2);
                  if ((sVar20 == 0x2d) || (sVar20 == 0x2b)) {
                    if (DAT_06b78666 == '\0') {
                      FUN_02d6084c(PTR_DAT_067714a8);
                      DAT_06b78666 = '\x01';
                    }
                    uVar21 = *(uint *)(unaff_x22 + 0x18);
                    uVar19 = iVar22 + 2;
                    if ((int)uVar21 < (int)*(uint *)(unaff_x22 + 0x10)) {
                      if (*(uint *)(unaff_x22 + 0x10) <= uVar21) goto LAB_0500b448;
                      *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar21 * 2) = sVar20;
                      *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
                    }
                    else {
                      FUN_04ea5848(unaff_x22,sVar20,0);
                    }
                  }
                  if ((int)uVar19 < (int)uVar13) {
                    psVar15 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar19 * 2);
                    lVar11 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar19;
                    while (*psVar15 == 0x30) {
                      if (DAT_06b78666 == '\0') {
                        FUN_02d6084c(PTR_DAT_067714a8);
                        DAT_06b78666 = '\x01';
                      }
                      uVar21 = *(uint *)(unaff_x22 + 0x18);
                      if ((int)uVar21 < (int)*(uint *)(unaff_x22 + 0x10)) {
                        if (*(uint *)(unaff_x22 + 0x10) <= uVar21) goto LAB_0500b448;
                        *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar21 * 2) = 0x30;
                        *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
                      }
                      else {
                        FUN_04ea5848(unaff_x22,0x30,0);
                      }
                      uVar19 = uVar19 + 1;
                      lVar11 = lVar11 + -1;
                      psVar15 = psVar15 + 1;
                      if (lVar11 == 0) goto LAB_0500b2e8;
                    }
                    *(undefined4 *)(unaff_x29 + -0x5c) = 0;
                    break;
                  }
                }
              }
              else {
                iVar22 = *(int *)(unaff_x29 + -0x38);
                if (((int)uVar19 < (int)uVar13) &&
                   (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar19 * 2) == 0x30)) {
                  uVar8 = 0;
                  iVar9 = 1;
                  goto LAB_0500b1b4;
                }
                iVar9 = iVar22 + 2;
                if ((int)uVar13 <= iVar9) {
LAB_0500b1f4:
                  if (DAT_06b78666 == '\0') {
                    FUN_02d6084c(PTR_DAT_067714a8);
                    DAT_06b78666 = '\x01';
                  }
                  uVar21 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)uVar21 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar21) goto LAB_0500b448;
                    *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar21 * 2) = uVar2;
                    *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
                  }
                  else {
                    FUN_04ea5848(unaff_x22,uVar2,0);
                  }
                  *(undefined4 *)(unaff_x29 + -0x5c) = 1;
                  break;
                }
                sVar20 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar19 * 2);
                if (sVar20 == 0x2d) {
                  if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar9 * 2) != 0x30)
                  goto LAB_0500b1f4;
                  iVar9 = 0;
                  uVar8 = 0;
                }
                else {
                  if ((sVar20 != 0x2b) ||
                     (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar9 * 2) != 0x30))
                  goto LAB_0500b1f4;
                  iVar9 = 0;
                  uVar8 = 1;
                }
LAB_0500b1b4:
                uVar21 = iVar22 + 2;
                iVar10 = iVar9;
                uVar19 = uVar21;
                if ((int)uVar21 < (int)uVar13) {
                  iVar1 = *(int *)(unaff_x29 + -0x8c) + iVar9;
                  do {
                    iVar10 = iVar9;
                    uVar19 = uVar21;
                    if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar21 * 2) != 0x30)
                    break;
                    uVar21 = uVar21 + 1;
                    iVar9 = iVar9 + 1;
                    iVar10 = iVar1 - iVar22;
                    uVar19 = uVar13;
                  } while (uVar13 != uVar21);
                }
                if (9 < iVar10) {
                  iVar10 = 10;
                }
                if (**(short **)(unaff_x29 + -0x30) == 0) {
                  iVar22 = 0;
                }
                else {
                  iVar22 = *(int *)(*(long *)(unaff_x29 + -0x70) + 4) - *(int *)(unaff_x29 + -0x34);
                }
                if (*(int *)(*(long *)PTR_DAT_06777060 + 0xe4) == 0) {
                  *(undefined4 *)(unaff_x29 + -0x38) = uVar8;
                  thunk_FUN_02dbd7b4();
                  uVar8 = *(undefined4 *)(unaff_x29 + -0x38);
                }
                FUN_0501029c(unaff_x22,*(undefined8 *)(unaff_x29 + -0x48),iVar22,uVar2,iVar10,uVar8)
                ;
              }
              *(undefined4 *)(unaff_x29 + -0x5c) = 0;
            }
          }
          else {
            if (uVar2 != 0x5c) {
              if (uVar2 == 0x65) goto LAB_0500accc;
              if (uVar2 != 0x2030) goto switchD_0500aae0_caseD_24;
              if (lVar11 != 0) {
                lVar11 = *(long *)(lVar11 + 0x98);
                goto joined_r0x0500abc8;
              }
              goto LAB_0500b44c;
            }
            if (((int)uVar13 <= (int)uVar19) ||
               (uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar19 * 2),
               uVar2 == 0)) goto switchD_0500aae0_caseD_2c;
            if (DAT_06b78666 == '\0') {
              FUN_02d6084c(PTR_DAT_067714a8);
              DAT_06b78666 = '\x01';
            }
            uVar14 = *(uint *)(unaff_x22 + 0x18);
            uVar21 = *(uint *)(unaff_x22 + 0x10);
            uVar19 = *(int *)(unaff_x29 + -0x38) + 2;
            if ((int)uVar14 < (int)uVar21) goto LAB_0500ad34;
LAB_0500ac9c:
            FUN_04ea5848(unaff_x22,uVar2,0);
          }
switchD_0500aae0_caseD_2c:
          *(int *)(unaff_x29 + -0x4c) = iVar17;
          *(uint *)(unaff_x29 + -0x38) = uVar19;
        } while ((int)uVar19 < (int)uVar13);
      }
LAB_0500b2e8:
      if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    if (*(long *)(unaff_x29 + -0x48) != 0) {
      lVar11 = *(long *)(*(long *)(unaff_x29 + -0x48) + 0x30);
      if (DAT_06b79233 == '\0') {
        FUN_02d6084c(PTR_DAT_067714a8);
        DAT_06b79233 = '\x01';
      }
      if (lVar11 != 0) {
        if (*(int *)(lVar11 + 0x10) == 1) {
          uVar13 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar13 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar13) {
LAB_0500b448:
                    /* WARNING: Subroutine does not return */
              FUN_02d60af0();
            }
            lVar18 = *(long *)(unaff_x22 + 8);
            uVar5 = FUN_04e87a5c(lVar11,0,0);
            *(undefined2 *)(lVar18 + (long)(int)uVar13 * 2) = uVar5;
            *(uint *)(unaff_x22 + 0x18) = uVar13 + 1;
            goto LAB_0500a8a4;
          }
        }
        FUN_04ea5974(unaff_x22,lVar11,0);
        goto LAB_0500a8a4;
      }
    }
  }
LAB_0500b44c:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


