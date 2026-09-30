/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetColor
ENTRY_POINT: 0637c594
PROGRAM: Waifu-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetColor
               (ulong param_1,float param_2,float param_3,float param_4,float param_5,
               undefined8 param_6,long *param_7,long *param_8,int param_9,float *param_10,
               float *param_11,float *param_12,float *param_13,undefined8 param_14,long *param_15,
               long *param_16,long *param_17,int param_18,ulong param_19,long *param_20,
               long *param_21,undefined8 param_22,undefined8 param_23)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long in_x9;
  float *pfVar4;
  long in_x10;
  uint in_w11;
  float *pfVar5;
  long in_x12;
  int in_w13;
  int iVar6;
  int in_w14;
  long in_x15;
  uint in_w16;
  float *unaff_x19;
  uint unaff_w23;
  long unaff_x24;
  int unaff_w25;
  int unaff_w26;
  uint unaff_w27;
  int unaff_w28;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float in_s7;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_s10;
  float fVar15;
  float unaff_s11;
  float fVar16;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar17;
  float in_s16;
  float fVar18;
  float fVar19;
  float in_s17;
  float fVar20;
  float fVar21;
  float fVar22;
  float in_s18;
  float fVar23;
  float in_s19;
  float fVar24;
  float fVar25;
  float in_s20;
  float fVar26;
  float in_s21;
  float in_s22;
  float in_s23;
  float in_s24;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float in_s31;
  undefined8 in_stack_00000070;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  float fStack0000000000000098;
  float fStack000000000000009c;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  
  do {
    param_3 = param_3 * in_s31;
    param_4 = param_4 * in_s31;
    fVar27 = in_s7 * param_3 - in_s16 * param_2;
    fVar28 = in_s16 * param_4 - in_s17 * param_3;
    fVar30 = in_s17 * param_2 - in_s7 * param_4;
    fVar28 = fVar28 + fVar28;
    fVar30 = fVar30 + fVar30;
    fVar27 = fVar27 + fVar27;
    param_1 = param_1 - 1;
    in_s18 = in_s18 + param_5 * (*param_10 +
                                param_2 + in_s24 * fVar28 + (in_s16 * fVar27 - in_s17 * fVar30));
    in_s21 = in_s21 + param_5 * (param_10[1] +
                                param_3 + in_s24 * fVar30 + (in_s17 * fVar28 - in_s7 * fVar27));
    in_s20 = in_s20 + param_5 * (param_10[2] +
                                param_4 + in_s24 * fVar27 + (in_s7 * fVar30 - in_s16 * fVar28));
    in_w14 = in_w14 + 1;
    if (param_1 == 0) {
      while( true ) {
        fVar27 = *unaff_x19;
        fVar28 = unaff_x19[1];
        fVar9 = unaff_x19[2];
        fVar10 = unaff_x19[3];
        fVar30 = in_s18 - *param_11;
        fVar7 = in_s21 - param_11[1];
        fVar8 = in_s20 - param_11[2];
        fVar18 = fVar28 * fVar8 - fVar9 * fVar7;
        fVar20 = fVar9 * fVar30 - fVar27 * fVar8;
        fVar11 = fVar27 * fVar7 - fVar28 * fVar30;
        fVar18 = fVar18 + fVar18;
        fVar20 = fVar20 + fVar20;
        fVar11 = fVar11 + fVar11;
        fVar30 = (fVar30 + fVar10 * fVar18 + (fVar28 * fVar11 - fVar9 * fVar20)) / *param_13;
        fVar7 = (fVar7 + fVar10 * fVar20 + (fVar9 * fVar18 - fVar27 * fVar11)) / param_13[1];
        fVar27 = (fVar8 + fVar10 * fVar11 + (fVar27 * fVar20 - fVar28 * fVar18)) / param_13[2];
        while( true ) {
          while( true ) {
            unaff_s15 = unaff_s15 + fVar27;
            unaff_s14 = unaff_s14 + fVar7;
            unaff_s13 = unaff_s13 + fVar30;
            in_w13 = in_w13 + 1;
            do {
              do {
                in_x15 = in_x15 + 1;
                unaff_w23 = unaff_w23 << 1;
                if (in_x15 == 4) {
                  if (0 < in_w13) {
                    fVar27 = (float)in_w13;
                    lVar3 = (long)param_18;
                    pfVar4 = (float *)(*param_17 + (long)param_18 * 0xc);
                    *pfVar4 = unaff_s13 / fVar27;
                    pfVar4[1] = unaff_s14 / fVar27;
                    pfVar4[2] = unaff_s15 / fVar27;
                    if ((in_w11 & 1) == 0) {
                      if ((param_19 & 0x100000000) != 0) {
                        pfVar4 = (float *)(*param_16 + lVar3 * 0xc);
                        *pfVar4 = unaff_s12 / fVar27;
                        pfVar4[1] = unaff_s11 / fVar27;
                        pfVar4[2] = unaff_s10 / fVar27;
                      }
                    }
                    else {
                      pfVar4 = (float *)(*param_16 + lVar3 * 0xc);
                      *pfVar4 = unaff_s12 / fVar27;
                      pfVar4[1] = unaff_s11 / fVar27;
                      pfVar4[2] = unaff_s10 / fVar27;
                      pfVar4 = (float *)(*param_15 + lVar3 * 0x10);
                      *pfVar4 = param_22._4_4_ / fVar27;
                      pfVar4[1] = param_23._4_4_ / fVar27;
                      pfVar4[2] = (float)param_23 / fVar27;
                      pfVar4[3] = -1.0;
                    }
                  }
                  return;
                }
              } while (((unaff_w27 >> (ulong)((uint)in_x15 & 0x1f)) >> 0x1c & 1) == 0);
              iVar6 = *(int *)(unaff_x24 + in_x15 * 4);
              unaff_w28 = *(int *)(unaff_x24 + in_x15 * 4);
            } while ((unaff_w23 & in_w16) == 0);
            uVar1 = *(uint *)(*param_7 + (long)(*(int *)(unaff_x24 + in_x15 * 4) + param_9) * 4);
            uVar2 = uVar1 >> 0x1c;
            param_1 = (ulong)uVar2;
            uVar1 = uVar1 & 0xfffffff;
            if ((in_w11 & 1) == 0) break;
            if (uVar2 == 0) {
              fStack00000000000000ac = 0.0;
              fStack00000000000000a8 = 0.0;
              fStack00000000000000a4 = 0.0;
              fStack0000000000000094 = 0.0;
              fStack0000000000000090 = 0.0;
              fStack000000000000008c = 0.0;
              fStack0000000000000098 = 0.0;
              fStack000000000000009c = 0.0;
              fStack00000000000000a0 = 0.0;
            }
            else {
              fVar30 = *param_12;
              fVar27 = param_12[1];
              iVar6 = iVar6 + uVar1;
              fVar28 = param_12[2];
              fStack00000000000000a0 = 0.0;
              fStack000000000000009c = 0.0;
              fStack0000000000000098 = 0.0;
              fStack000000000000008c = 0.0;
              fStack0000000000000090 = 0.0;
              fStack0000000000000094 = 0.0;
              fStack00000000000000a4 = 0.0;
              fStack00000000000000a8 = 0.0;
              fStack00000000000000ac = 0.0;
              do {
                pfVar5 = (float *)(*param_8 + (long)iVar6 * (long)unaff_w25);
                pfVar4 = (float *)(*param_21 + (long)((int)pfVar5[9] + unaff_w28) * 0x10);
                fVar31 = *pfVar4;
                fVar32 = pfVar4[1];
                fVar12 = pfVar4[2];
                fVar13 = pfVar4[3];
                fVar11 = pfVar5[3] * fVar30;
                fVar8 = pfVar5[6] * fVar30;
                fVar24 = pfVar5[5] * fVar28;
                fVar18 = pfVar5[8] * fVar28;
                fVar21 = pfVar5[4] * fVar27;
                fVar14 = *pfVar5 * fVar30 * in_stack_00000070._4_4_;
                fVar15 = pfVar5[1] * fVar27 * in_stack_00000070._4_4_;
                fVar16 = pfVar5[2] * fVar28 * in_stack_00000070._4_4_;
                fVar9 = pfVar5[7] * fVar27;
                fVar17 = fVar32 * fVar16 - fVar12 * fVar15;
                fVar19 = fVar12 * fVar14 - fVar31 * fVar16;
                fVar17 = fVar17 + fVar17;
                fVar19 = fVar19 + fVar19;
                fVar20 = fVar31 * fVar15 - fVar32 * fVar14;
                fVar29 = fVar31 * fVar21 - fVar32 * fVar11;
                fVar7 = fVar32 * fVar24 - fVar12 * fVar21;
                fVar22 = fVar12 * fVar11 - fVar31 * fVar24;
                fVar23 = fVar31 * fVar9 - fVar32 * fVar8;
                fVar25 = fVar32 * fVar18 - fVar12 * fVar9;
                fVar26 = fVar12 * fVar8 - fVar31 * fVar18;
                fVar20 = fVar20 + fVar20;
                fVar7 = fVar7 + fVar7;
                fVar22 = fVar22 + fVar22;
                fVar29 = fVar29 + fVar29;
                fVar25 = fVar25 + fVar25;
                fVar26 = fVar26 + fVar26;
                fVar23 = fVar23 + fVar23;
                pfVar4 = (float *)(*param_20 + (long)((int)pfVar5[9] + unaff_w28) * (long)unaff_w26)
                ;
                fVar10 = pfVar5[10];
                param_1 = param_1 - 1;
                iVar6 = iVar6 + 1;
                fStack00000000000000a4 =
                     fStack00000000000000a4 +
                     fVar10 * (fVar11 + fVar13 * fVar7 + (fVar32 * fVar29 - fVar12 * fVar22));
                fStack00000000000000a8 =
                     fStack00000000000000a8 +
                     fVar10 * (fVar21 + fVar13 * fVar22 + (fVar12 * fVar7 - fVar31 * fVar29));
                fStack00000000000000ac =
                     fStack00000000000000ac +
                     fVar10 * (fVar24 + fVar13 * fVar29 + (fVar31 * fVar22 - fVar32 * fVar7));
                fStack0000000000000098 =
                     fStack0000000000000098 +
                     fVar10 * (fVar8 + fVar13 * fVar25 + (fVar32 * fVar23 - fVar12 * fVar26));
                fStack000000000000009c =
                     fStack000000000000009c +
                     fVar10 * (fVar9 + fVar13 * fVar26 + (fVar12 * fVar25 - fVar31 * fVar23));
                fStack00000000000000a0 =
                     fStack00000000000000a0 +
                     fVar10 * (fVar18 + fVar13 * fVar23 + (fVar31 * fVar26 - fVar32 * fVar25));
                fStack000000000000008c =
                     fStack000000000000008c +
                     fVar10 * (*pfVar4 +
                              fVar14 + fVar13 * fVar17 + (fVar32 * fVar20 - fVar12 * fVar19));
                fStack0000000000000090 =
                     fStack0000000000000090 +
                     fVar10 * (pfVar4[1] +
                              fVar15 + fVar13 * fVar19 + (fVar12 * fVar17 - fVar31 * fVar20));
                fStack0000000000000094 =
                     fStack0000000000000094 +
                     fVar10 * (pfVar4[2] +
                              fVar16 + fVar13 * fVar20 + (fVar31 * fVar19 - fVar32 * fVar17));
              } while (param_1 != 0);
            }
            fVar20 = *unaff_x19;
            fVar12 = unaff_x19[1];
            fVar13 = unaff_x19[2];
            fVar14 = unaff_x19[3];
            fStack000000000000008c = fStack000000000000008c - *param_11;
            fStack0000000000000090 = fStack0000000000000090 - param_11[1];
            fStack0000000000000094 = fStack0000000000000094 - param_11[2];
            fVar8 = fStack00000000000000ac * fVar12 - fStack00000000000000a8 * fVar13;
            fVar30 = fStack00000000000000a0 * fVar12 - fStack000000000000009c * fVar13;
            fVar30 = fVar30 + fVar30;
            fVar28 = fStack00000000000000a8 * fVar20 - fStack00000000000000a4 * fVar12;
            fVar27 = fStack000000000000009c * fVar20 - fStack0000000000000098 * fVar12;
            fVar10 = fVar20 * fStack0000000000000090 - fVar12 * fStack000000000000008c;
            fVar9 = fStack00000000000000a4 * fVar13 - fStack00000000000000ac * fVar20;
            fVar7 = fStack0000000000000098 * fVar13 - fStack00000000000000a0 * fVar20;
            fVar11 = fVar12 * fStack0000000000000094 - fVar13 * fStack0000000000000090;
            fVar18 = fVar13 * fStack000000000000008c - fVar20 * fStack0000000000000094;
            fVar8 = fVar8 + fVar8;
            fVar9 = fVar9 + fVar9;
            fVar28 = fVar28 + fVar28;
            fVar7 = fVar7 + fVar7;
            fVar27 = fVar27 + fVar27;
            fVar11 = fVar11 + fVar11;
            fVar18 = fVar18 + fVar18;
            fVar10 = fVar10 + fVar10;
            unaff_s11 = unaff_s11 +
                        (fStack00000000000000a8 + fVar14 * fVar9 +
                        (fVar13 * fVar8 - fVar20 * fVar28)) * param_12[1];
            unaff_s12 = unaff_s12 +
                        (fStack00000000000000a4 + fVar14 * fVar8 +
                        (fVar12 * fVar28 - fVar13 * fVar9)) * *param_12;
            param_22._4_4_ =
                 param_22._4_4_ +
                 (fStack0000000000000098 + fVar14 * fVar30 + (fVar12 * fVar27 - fVar13 * fVar7)) *
                 *param_12;
            param_23._4_4_ =
                 param_23._4_4_ +
                 (fStack000000000000009c + fVar14 * fVar7 + (fVar13 * fVar30 - fVar20 * fVar27)) *
                 param_12[1];
            param_23._0_4_ =
                 (float)param_23 +
                 (fStack00000000000000a0 + fVar14 * fVar27 + (fVar20 * fVar7 - fVar12 * fVar30)) *
                 param_12[2];
            fVar30 = (fStack000000000000008c + fVar14 * fVar11 + (fVar12 * fVar10 - fVar13 * fVar18)
                     ) / *param_13;
            fVar7 = (fStack0000000000000090 + fVar14 * fVar18 + (fVar13 * fVar11 - fVar20 * fVar10))
                    / param_13[1];
            fVar27 = (fStack0000000000000094 + fVar14 * fVar10 + (fVar20 * fVar18 - fVar12 * fVar11)
                     ) / param_13[2];
            unaff_s10 = unaff_s10 +
                        (fStack00000000000000ac + fVar14 * fVar28 +
                        (fVar20 * fVar9 - fVar12 * fVar8)) * param_12[2];
            in_s31 = in_stack_00000070._4_4_;
          }
          if ((param_19 & 0x100000000) == 0) break;
          if (uVar2 == 0) {
            fVar28 = *param_12;
            fStack00000000000000ac = param_12[1];
            fStack00000000000000a8 = param_12[2];
            fVar8 = 0.0;
            fVar9 = 0.0;
            fVar10 = 0.0;
            fVar11 = 0.0;
            fVar7 = 0.0;
            fVar27 = 0.0;
          }
          else {
            fStack00000000000000ac = param_12[1];
            fVar28 = *param_12;
            fStack00000000000000a8 = param_12[2];
            iVar6 = iVar6 + uVar1;
            fVar27 = 0.0;
            fVar7 = 0.0;
            fVar11 = 0.0;
            fVar10 = 0.0;
            fVar9 = 0.0;
            fVar8 = 0.0;
            do {
              pfVar5 = (float *)(*param_8 + (long)iVar6 * (long)unaff_w25);
              pfVar4 = (float *)(*param_21 + (long)((int)pfVar5[9] + unaff_w28) * 0x10);
              fVar18 = *pfVar4;
              fVar12 = pfVar4[1];
              fVar14 = pfVar4[2];
              fVar22 = pfVar4[3];
              fVar15 = pfVar5[3] * fVar28;
              fVar16 = pfVar5[4] * fStack00000000000000ac;
              fVar19 = pfVar5[5] * fStack00000000000000a8;
              fVar30 = *pfVar5 * fVar28 * in_s31;
              fVar20 = pfVar5[1] * fStack00000000000000ac * in_s31;
              fVar13 = pfVar5[2] * fStack00000000000000a8 * in_s31;
              fVar21 = fVar18 * fVar20 - fVar12 * fVar30;
              fVar23 = fVar12 * fVar13 - fVar14 * fVar20;
              fVar24 = fVar14 * fVar30 - fVar18 * fVar13;
              fVar25 = fVar18 * fVar16 - fVar12 * fVar15;
              fVar29 = fVar12 * fVar19 - fVar14 * fVar16;
              fVar17 = fVar14 * fVar15 - fVar18 * fVar19;
              fVar23 = fVar23 + fVar23;
              fVar24 = fVar24 + fVar24;
              fVar21 = fVar21 + fVar21;
              fVar29 = fVar29 + fVar29;
              fVar17 = fVar17 + fVar17;
              fVar25 = fVar25 + fVar25;
              fVar26 = pfVar5[10];
              pfVar4 = (float *)(*param_20 + (long)((int)pfVar5[9] + unaff_w28) * (long)unaff_w26);
              param_1 = param_1 - 1;
              fVar10 = fVar10 + fVar26 * (fVar15 + fVar22 * fVar29 +
                                         (fVar12 * fVar25 - fVar14 * fVar17));
              fVar9 = fVar9 + fVar26 * (fVar16 + fVar22 * fVar17 +
                                       (fVar14 * fVar29 - fVar18 * fVar25));
              fVar8 = fVar8 + fVar26 * (fVar19 + fVar22 * fVar25 +
                                       (fVar18 * fVar17 - fVar12 * fVar29));
              fVar27 = fVar27 + fVar26 * (*pfVar4 +
                                         fVar30 + fVar22 * fVar23 +
                                         (fVar12 * fVar21 - fVar14 * fVar24));
              fVar7 = fVar7 + fVar26 * (pfVar4[1] +
                                       fVar20 + fVar22 * fVar24 +
                                       (fVar14 * fVar23 - fVar18 * fVar21));
              fVar11 = fVar11 + fVar26 * (pfVar4[2] +
                                         fVar13 + fVar22 * fVar21 +
                                         (fVar18 * fVar24 - fVar12 * fVar23));
              iVar6 = iVar6 + 1;
            } while (param_1 != 0);
          }
          fVar20 = *unaff_x19;
          fVar13 = unaff_x19[1];
          fVar21 = unaff_x19[2];
          fVar15 = unaff_x19[3];
          fVar27 = fVar27 - *param_11;
          fVar7 = fVar7 - param_11[1];
          fVar11 = fVar11 - param_11[2];
          fVar18 = fVar9 * fVar20 - fVar10 * fVar13;
          fVar12 = fVar8 * fVar13 - fVar9 * fVar21;
          fVar14 = fVar10 * fVar21 - fVar8 * fVar20;
          fVar16 = fVar20 * fVar7 - fVar13 * fVar27;
          fVar17 = fVar13 * fVar11 - fVar21 * fVar7;
          fVar19 = fVar21 * fVar27 - fVar20 * fVar11;
          fVar12 = fVar12 + fVar12;
          fVar14 = fVar14 + fVar14;
          fVar18 = fVar18 + fVar18;
          fVar17 = fVar17 + fVar17;
          fVar19 = fVar19 + fVar19;
          fVar16 = fVar16 + fVar16;
          fVar30 = (fVar27 + fVar15 * fVar17 + (fVar13 * fVar16 - fVar21 * fVar19)) / *param_13;
          fVar7 = (fVar7 + fVar15 * fVar19 + (fVar21 * fVar17 - fVar20 * fVar16)) / param_13[1];
          fVar27 = (fVar11 + fVar15 * fVar16 + (fVar20 * fVar19 - fVar13 * fVar17)) / param_13[2];
          unaff_s12 = unaff_s12 +
                      fVar28 * (fVar10 + fVar15 * fVar12 + (fVar13 * fVar18 - fVar21 * fVar14));
          unaff_s11 = unaff_s11 +
                      fStack00000000000000ac *
                      (fVar9 + fVar15 * fVar14 + (fVar21 * fVar12 - fVar20 * fVar18));
          unaff_s10 = unaff_s10 +
                      fStack00000000000000a8 *
                      (fVar8 + fVar15 * fVar18 + (fVar20 * fVar14 - fVar13 * fVar12));
          in_s31 = in_stack_00000070._4_4_;
        }
        if (uVar2 != 0) break;
        in_s20 = 0.0;
        in_s21 = 0.0;
        in_s18 = 0.0;
      }
      in_x9 = *param_8;
      in_s19 = *param_12;
      in_s22 = param_12[1];
      in_s23 = param_12[2];
      in_x10 = *param_20;
      in_x12 = *param_21;
      in_w14 = iVar6 + uVar1;
      in_s18 = 0.0;
      in_s21 = 0.0;
      in_s20 = 0.0;
    }
    pfVar5 = (float *)(in_x9 + (long)in_w14 * (long)unaff_w25);
    param_5 = pfVar5[10];
    param_10 = (float *)(in_x10 + (long)((int)pfVar5[9] + unaff_w28) * (long)unaff_w26);
    pfVar4 = (float *)(in_x12 + (long)((int)pfVar5[9] + unaff_w28) * 0x10);
    in_s7 = *pfVar4;
    in_s16 = pfVar4[1];
    in_s17 = pfVar4[2];
    in_s24 = pfVar4[3];
    param_3 = pfVar5[1] * in_s22;
    param_4 = pfVar5[2] * in_s23;
    param_2 = *pfVar5 * in_s19 * in_s31;
  } while( true );
}


