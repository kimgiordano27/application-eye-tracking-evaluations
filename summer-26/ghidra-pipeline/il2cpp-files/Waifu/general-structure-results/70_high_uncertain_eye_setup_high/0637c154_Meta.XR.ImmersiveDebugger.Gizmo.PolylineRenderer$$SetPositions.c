/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetPositions
ENTRY_POINT: 0637c154
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetPositions
               (long param_1,float param_2,undefined1 param_3 [16],float param_4,
               undefined1 param_5 [16],float param_6,float param_7,float param_8,float param_9,
               undefined8 param_10,long *param_11,long *param_12,int param_13,undefined8 param_14,
               float *param_15,float *param_16,float *param_17,undefined8 param_18,long *param_19,
               long *param_20,long *param_21,int param_22,ulong param_23,long *param_24,
               long *param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
               undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
               undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
               undefined8 param_37,undefined8 param_38,undefined8 param_39)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long in_x9;
  int in_w10;
  float *pfVar4;
  float *pfVar5;
  uint in_w11;
  float *in_x12;
  int in_w13;
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
  int iVar6;
  ulong unaff_x29;
  float *pfVar7;
  long unaff_x30;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s8;
  float fVar13;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float in_s16;
  float fVar14;
  float fVar15;
  float in_s17;
  float fVar16;
  float in_s18;
  float fVar17;
  float fVar18;
  float in_s20;
  float fVar19;
  float in_s21;
  float fVar20;
  float in_s22;
  float fVar21;
  float in_s23;
  float in_s24;
  float in_s25;
  float in_s27;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float in_s30;
  float fVar28;
  float fVar29;
  float fVar30;
  float in_s31;
  float fVar31;
  
  do {
    param_9 = param_9 + param_9;
    param_2 = param_2 + param_2;
    fVar17 = in_s18 + in_s18;
    fVar21 = in_s27 + in_s27;
    fVar19 = (in_s21 - in_s24) + (in_s21 - in_s24);
    fVar20 = (in_s22 - in_s25) + (in_s22 - in_s25);
    fVar18 = (in_s20 - in_s23) + (in_s20 - in_s23);
    pfVar4 = (float *)(param_1 + (long)in_w10 * (long)unaff_w26);
    fVar8 = in_x12[10];
    unaff_x29 = unaff_x29 - 1;
    in_w14 = in_w14 + 1;
    param_38._4_4_ =
         param_38._4_4_ +
         fVar8 * (param_7 + unaff_s9 * param_2 + (in_s31 * fVar21 - unaff_s8 * fVar17));
    param_39._0_4_ =
         (float)param_39 +
         fVar8 * (param_34._4_4_ + unaff_s9 * fVar17 + (unaff_s8 * param_2 - in_s30 * fVar21));
    param_39._4_4_ =
         param_39._4_4_ +
         fVar8 * ((float)param_34 + unaff_s9 * fVar21 + (in_s30 * fVar17 - in_s31 * param_2));
    param_37._0_4_ =
         (float)param_37 +
         fVar8 * (param_4 + unaff_s9 * fVar19 + (in_s31 * fVar18 - unaff_s8 * fVar20));
    param_37._4_4_ =
         param_37._4_4_ +
         fVar8 * (param_6 + unaff_s9 * fVar20 + (unaff_s8 * fVar19 - in_s30 * fVar18));
    param_38._0_4_ =
         (float)param_38 +
         fVar8 * (param_8 + unaff_s9 * fVar18 + (in_s30 * fVar20 - in_s31 * fVar19));
    param_35._4_4_ =
         param_35._4_4_ +
         fVar8 * (*pfVar4 + unaff_s10 + unaff_s9 * in_s16 + (in_s31 * param_9 - unaff_s8 * in_s17));
    param_36._0_4_ =
         (float)param_36 +
         fVar8 * (pfVar4[1] + unaff_s11 + unaff_s9 * in_s17 + (unaff_s8 * in_s16 - in_s30 * param_9)
                 );
    param_36._4_4_ =
         param_36._4_4_ +
         fVar8 * (pfVar4[2] + unaff_s12 + unaff_s9 * param_9 + (in_s30 * in_s17 - in_s31 * in_s16));
    if (unaff_x29 == 0) {
      while( true ) {
        fVar23 = *unaff_x19;
        fVar25 = unaff_x19[1];
        fVar27 = unaff_x19[2];
        fVar30 = unaff_x19[3];
        param_35._4_4_ = param_35._4_4_ - *param_15;
        param_36._0_4_ = (float)param_36 - param_15[1];
        param_36._4_4_ = param_36._4_4_ - param_15[2];
        fVar17 = param_39._4_4_ * fVar25 - (float)param_39 * fVar27;
        fVar20 = (float)param_38 * fVar25 - param_37._4_4_ * fVar27;
        fVar20 = fVar20 + fVar20;
        fVar8 = (float)param_39 * fVar23 - param_38._4_4_ * fVar25;
        fVar18 = param_37._4_4_ * fVar23 - (float)param_37 * fVar25;
        fVar10 = fVar23 * (float)param_36 - fVar25 * param_35._4_4_;
        fVar19 = param_38._4_4_ * fVar27 - param_39._4_4_ * fVar23;
        fVar21 = (float)param_37 * fVar27 - (float)param_38 * fVar23;
        fVar12 = fVar25 * param_36._4_4_ - fVar27 * (float)param_36;
        fVar15 = fVar27 * param_35._4_4_ - fVar23 * param_36._4_4_;
        fVar17 = fVar17 + fVar17;
        fVar19 = fVar19 + fVar19;
        fVar8 = fVar8 + fVar8;
        fVar21 = fVar21 + fVar21;
        fVar18 = fVar18 + fVar18;
        fVar12 = fVar12 + fVar12;
        fVar15 = fVar15 + fVar15;
        fVar10 = fVar10 + fVar10;
        param_30._0_4_ =
             (float)param_30 +
             ((float)param_39 + fVar30 * fVar19 + (fVar27 * fVar17 - fVar23 * fVar8)) * param_16[1];
        param_29._4_4_ =
             param_29._4_4_ +
             (param_38._4_4_ + fVar30 * fVar17 + (fVar25 * fVar8 - fVar27 * fVar19)) * *param_16;
        param_26._4_4_ =
             param_26._4_4_ +
             ((float)param_37 + fVar30 * fVar20 + (fVar25 * fVar18 - fVar27 * fVar21)) * *param_16;
        param_27._4_4_ =
             param_27._4_4_ +
             (param_37._4_4_ + fVar30 * fVar21 + (fVar27 * fVar20 - fVar23 * fVar18)) * param_16[1];
        param_27._0_4_ =
             (float)param_27 +
             ((float)param_38 + fVar30 * fVar18 + (fVar23 * fVar21 - fVar25 * fVar20)) * param_16[2]
        ;
        fVar18 = (param_35._4_4_ + fVar30 * fVar12 + (fVar25 * fVar10 - fVar27 * fVar15)) /
                 *param_17;
        fVar20 = ((float)param_36 + fVar30 * fVar15 + (fVar27 * fVar12 - fVar23 * fVar10)) /
                 param_17[1];
        fVar21 = (param_36._4_4_ + fVar30 * fVar10 + (fVar23 * fVar15 - fVar25 * fVar12)) /
                 param_17[2];
        param_30._4_4_ =
             param_30._4_4_ +
             (param_39._4_4_ + fVar30 * fVar8 + (fVar23 * fVar19 - fVar25 * fVar17)) * param_16[2];
        while( true ) {
          param_28._0_4_ = (float)param_28 + fVar21;
          param_28._4_4_ = param_28._4_4_ + fVar20;
          param_29._0_4_ = (float)param_29 + fVar18;
          in_w13 = in_w13 + 1;
          do {
            do {
              in_x15 = in_x15 + 1;
              unaff_w23 = unaff_w23 << 1;
              if (in_x15 == 4) {
                if (0 < in_w13) {
                  fVar8 = (float)in_w13;
                  lVar3 = (long)param_22;
                  pfVar4 = (float *)(*param_21 + (long)param_22 * 0xc);
                  *pfVar4 = (float)param_29 / fVar8;
                  pfVar4[1] = param_28._4_4_ / fVar8;
                  pfVar4[2] = (float)param_28 / fVar8;
                  if ((in_w11 & 1) == 0) {
                    if ((param_23 & 0x100000000) != 0) {
                      pfVar4 = (float *)(*param_20 + lVar3 * 0xc);
                      *pfVar4 = param_29._4_4_ / fVar8;
                      pfVar4[1] = (float)param_30 / fVar8;
                      pfVar4[2] = param_30._4_4_ / fVar8;
                    }
                  }
                  else {
                    pfVar4 = (float *)(*param_20 + lVar3 * 0xc);
                    *pfVar4 = param_29._4_4_ / fVar8;
                    pfVar4[1] = (float)param_30 / fVar8;
                    pfVar4[2] = param_30._4_4_ / fVar8;
                    pfVar4 = (float *)(*param_19 + lVar3 * 0x10);
                    *pfVar4 = param_26._4_4_ / fVar8;
                    pfVar4[1] = param_27._4_4_ / fVar8;
                    pfVar4[2] = (float)param_27 / fVar8;
                    pfVar4[3] = -1.0;
                  }
                }
                return;
              }
            } while (((unaff_w27 >> (ulong)((uint)in_x15 & 0x1f)) >> 0x1c & 1) == 0);
            iVar6 = *(int *)(unaff_x24 + in_x15 * 4);
            unaff_w28 = *(int *)(unaff_x24 + in_x15 * 4);
          } while ((unaff_w23 & in_w16) == 0);
          uVar1 = *(uint *)(*param_11 + (long)(*(int *)(unaff_x24 + in_x15 * 4) + param_13) * 4);
          uVar2 = uVar1 >> 0x1c;
          unaff_x29 = (ulong)uVar2;
          uVar1 = uVar1 & 0xfffffff;
          if ((in_w11 & 1) != 0) break;
          if ((param_23 & 0x100000000) == 0) {
            if (uVar2 == 0) {
              fVar19 = 0.0;
              fVar17 = 0.0;
              fVar8 = 0.0;
            }
            else {
              iVar6 = iVar6 + uVar1;
              fVar8 = 0.0;
              fVar17 = 0.0;
              fVar19 = 0.0;
              do {
                pfVar7 = (float *)(*param_12 + (long)iVar6 * (long)unaff_w25);
                fVar10 = pfVar7[10];
                pfVar5 = (float *)(*param_24 + (long)((int)pfVar7[9] + unaff_w28) * (long)unaff_w26)
                ;
                pfVar4 = (float *)(*param_25 + (long)((int)pfVar7[9] + unaff_w28) * 0x10);
                fVar12 = *pfVar4;
                fVar15 = pfVar4[1];
                fVar23 = pfVar4[2];
                fVar25 = pfVar4[3];
                fVar18 = *pfVar7 * *param_16 * param_32._4_4_;
                fVar20 = pfVar7[1] * param_16[1] * param_32._4_4_;
                fVar21 = pfVar7[2] * param_16[2] * param_32._4_4_;
                fVar27 = fVar12 * fVar20 - fVar15 * fVar18;
                fVar30 = fVar15 * fVar21 - fVar23 * fVar20;
                fVar9 = fVar23 * fVar18 - fVar12 * fVar21;
                fVar30 = fVar30 + fVar30;
                fVar9 = fVar9 + fVar9;
                fVar27 = fVar27 + fVar27;
                unaff_x29 = unaff_x29 - 1;
                fVar8 = fVar8 + fVar10 * (*pfVar5 +
                                         fVar18 + fVar25 * fVar30 +
                                         (fVar15 * fVar27 - fVar23 * fVar9));
                fVar17 = fVar17 + fVar10 * (pfVar5[1] +
                                           fVar20 + fVar25 * fVar9 +
                                           (fVar23 * fVar30 - fVar12 * fVar27));
                fVar19 = fVar19 + fVar10 * (pfVar5[2] +
                                           fVar21 + fVar25 * fVar27 +
                                           (fVar12 * fVar9 - fVar15 * fVar30));
                iVar6 = iVar6 + 1;
              } while (unaff_x29 != 0);
            }
            fVar21 = *unaff_x19;
            fVar10 = unaff_x19[1];
            fVar20 = unaff_x19[2];
            fVar12 = unaff_x19[3];
            fVar8 = fVar8 - *param_15;
            fVar17 = fVar17 - param_15[1];
            fVar19 = fVar19 - param_15[2];
            fVar23 = fVar10 * fVar19 - fVar20 * fVar17;
            fVar25 = fVar20 * fVar8 - fVar21 * fVar19;
            fVar15 = fVar21 * fVar17 - fVar10 * fVar8;
            fVar23 = fVar23 + fVar23;
            fVar25 = fVar25 + fVar25;
            fVar15 = fVar15 + fVar15;
            fVar18 = (fVar8 + fVar12 * fVar23 + (fVar10 * fVar15 - fVar20 * fVar25)) / *param_17;
            fVar20 = (fVar17 + fVar12 * fVar25 + (fVar20 * fVar23 - fVar21 * fVar15)) / param_17[1];
            fVar21 = (fVar19 + fVar12 * fVar15 + (fVar21 * fVar25 - fVar10 * fVar23)) / param_17[2];
          }
          else {
            if (uVar2 == 0) {
              fVar8 = *param_16;
              param_39._4_4_ = param_16[1];
              param_39._0_4_ = param_16[2];
              fVar19 = 0.0;
              fVar10 = 0.0;
              fVar12 = 0.0;
              fVar21 = 0.0;
              fVar20 = 0.0;
              fVar17 = 0.0;
            }
            else {
              param_39._4_4_ = param_16[1];
              fVar8 = *param_16;
              param_39._0_4_ = param_16[2];
              iVar6 = iVar6 + uVar1;
              fVar17 = 0.0;
              fVar20 = 0.0;
              fVar21 = 0.0;
              fVar12 = 0.0;
              fVar10 = 0.0;
              fVar19 = 0.0;
              do {
                pfVar5 = (float *)(*param_12 + (long)iVar6 * (long)unaff_w25);
                pfVar4 = (float *)(*param_25 + (long)((int)pfVar5[9] + unaff_w28) * 0x10);
                fVar15 = *pfVar4;
                fVar25 = pfVar4[1];
                fVar30 = pfVar4[2];
                fVar22 = pfVar4[3];
                fVar9 = pfVar5[3] * fVar8;
                fVar11 = pfVar5[4] * param_39._4_4_;
                fVar14 = pfVar5[5] * (float)param_39;
                fVar18 = *pfVar5 * fVar8 * param_32._4_4_;
                fVar23 = pfVar5[1] * param_39._4_4_ * param_32._4_4_;
                fVar27 = pfVar5[2] * (float)param_39 * param_32._4_4_;
                fVar16 = fVar15 * fVar23 - fVar25 * fVar18;
                fVar24 = fVar25 * fVar27 - fVar30 * fVar23;
                fVar26 = fVar30 * fVar18 - fVar15 * fVar27;
                fVar28 = fVar15 * fVar11 - fVar25 * fVar9;
                fVar31 = fVar25 * fVar14 - fVar30 * fVar11;
                fVar13 = fVar30 * fVar9 - fVar15 * fVar14;
                fVar24 = fVar24 + fVar24;
                fVar26 = fVar26 + fVar26;
                fVar16 = fVar16 + fVar16;
                fVar31 = fVar31 + fVar31;
                fVar13 = fVar13 + fVar13;
                fVar28 = fVar28 + fVar28;
                fVar29 = pfVar5[10];
                pfVar4 = (float *)(*param_24 + (long)((int)pfVar5[9] + unaff_w28) * (long)unaff_w26)
                ;
                unaff_x29 = unaff_x29 - 1;
                fVar12 = fVar12 + fVar29 * (fVar9 + fVar22 * fVar31 +
                                           (fVar25 * fVar28 - fVar30 * fVar13));
                fVar10 = fVar10 + fVar29 * (fVar11 + fVar22 * fVar13 +
                                           (fVar30 * fVar31 - fVar15 * fVar28));
                fVar19 = fVar19 + fVar29 * (fVar14 + fVar22 * fVar28 +
                                           (fVar15 * fVar13 - fVar25 * fVar31));
                fVar17 = fVar17 + fVar29 * (*pfVar4 +
                                           fVar18 + fVar22 * fVar24 +
                                           (fVar25 * fVar16 - fVar30 * fVar26));
                fVar20 = fVar20 + fVar29 * (pfVar4[1] +
                                           fVar23 + fVar22 * fVar26 +
                                           (fVar30 * fVar24 - fVar15 * fVar16));
                fVar21 = fVar21 + fVar29 * (pfVar4[2] +
                                           fVar27 + fVar22 * fVar16 +
                                           (fVar15 * fVar26 - fVar25 * fVar24));
                iVar6 = iVar6 + 1;
              } while (unaff_x29 != 0);
            }
            fVar23 = *unaff_x19;
            fVar27 = unaff_x19[1];
            fVar16 = unaff_x19[2];
            fVar9 = unaff_x19[3];
            fVar17 = fVar17 - *param_15;
            fVar20 = fVar20 - param_15[1];
            fVar21 = fVar21 - param_15[2];
            fVar15 = fVar10 * fVar23 - fVar12 * fVar27;
            fVar25 = fVar19 * fVar27 - fVar10 * fVar16;
            fVar30 = fVar12 * fVar16 - fVar19 * fVar23;
            fVar11 = fVar23 * fVar20 - fVar27 * fVar17;
            fVar13 = fVar27 * fVar21 - fVar16 * fVar20;
            fVar14 = fVar16 * fVar17 - fVar23 * fVar21;
            fVar25 = fVar25 + fVar25;
            fVar30 = fVar30 + fVar30;
            fVar15 = fVar15 + fVar15;
            fVar13 = fVar13 + fVar13;
            fVar14 = fVar14 + fVar14;
            fVar11 = fVar11 + fVar11;
            fVar18 = (fVar17 + fVar9 * fVar13 + (fVar27 * fVar11 - fVar16 * fVar14)) / *param_17;
            fVar20 = (fVar20 + fVar9 * fVar14 + (fVar16 * fVar13 - fVar23 * fVar11)) / param_17[1];
            fVar21 = (fVar21 + fVar9 * fVar11 + (fVar23 * fVar14 - fVar27 * fVar13)) / param_17[2];
            param_29._4_4_ =
                 param_29._4_4_ +
                 fVar8 * (fVar12 + fVar9 * fVar25 + (fVar27 * fVar15 - fVar16 * fVar30));
            param_30._0_4_ =
                 (float)param_30 +
                 param_39._4_4_ * (fVar10 + fVar9 * fVar30 + (fVar16 * fVar25 - fVar23 * fVar15));
            param_30._4_4_ =
                 param_30._4_4_ +
                 (float)param_39 * (fVar19 + fVar9 * fVar15 + (fVar23 * fVar30 - fVar27 * fVar25));
          }
        }
        if (uVar2 != 0) break;
        param_39._4_4_ = 0.0;
        param_39._0_4_ = 0.0;
        param_38._4_4_ = 0.0;
        param_36._4_4_ = 0.0;
        param_36._0_4_ = 0.0;
        param_35._4_4_ = 0.0;
        param_37._0_4_ = 0.0;
        param_37._4_4_ = 0.0;
        param_38._0_4_ = 0.0;
      }
      param_32._0_4_ = *param_16;
      param_31._4_4_ = param_16[1];
      unaff_x30 = *param_12;
      in_w14 = iVar6 + uVar1;
      param_31._0_4_ = param_16[2];
      param_1 = *param_24;
      in_x9 = *param_25;
      param_38._0_4_ = 0.0;
      param_37._4_4_ = 0.0;
      param_37._0_4_ = 0.0;
      param_35._4_4_ = 0.0;
      param_36._0_4_ = 0.0;
      param_36._4_4_ = 0.0;
      param_38._4_4_ = 0.0;
      param_39._0_4_ = 0.0;
      param_39._4_4_ = 0.0;
    }
    in_x12 = (float *)(unaff_x30 + (long)in_w14 * (long)unaff_w25);
    in_w10 = (int)in_x12[9] + unaff_w28;
    pfVar4 = (float *)(in_x9 + (long)in_w10 * 0x10);
    in_s30 = *pfVar4;
    in_s31 = pfVar4[1];
    unaff_s8 = pfVar4[2];
    unaff_s9 = pfVar4[3];
    param_7 = in_x12[3] * (float)param_32;
    param_4 = in_x12[6] * (float)param_32;
    param_34._0_4_ = in_x12[5] * (float)param_31;
    param_8 = in_x12[8] * (float)param_31;
    param_34._4_4_ = in_x12[4] * param_31._4_4_;
    unaff_s10 = *in_x12 * (float)param_32 * param_32._4_4_;
    unaff_s11 = in_x12[1] * param_31._4_4_ * param_32._4_4_;
    unaff_s12 = in_x12[2] * (float)param_31 * param_32._4_4_;
    param_6 = in_x12[7] * param_31._4_4_;
    fVar8 = in_s31 * unaff_s12 - unaff_s8 * unaff_s11;
    fVar17 = unaff_s8 * unaff_s10 - in_s30 * unaff_s12;
    in_s20 = in_s30 * param_6;
    in_s21 = in_s31 * param_8;
    in_s22 = unaff_s8 * param_4;
    in_s23 = in_s31 * param_4;
    in_s24 = unaff_s8 * param_6;
    in_s25 = in_s30 * param_8;
    in_s16 = fVar8 + fVar8;
    in_s17 = fVar17 + fVar17;
    param_9 = in_s30 * unaff_s11 - in_s31 * unaff_s10;
    in_s27 = in_s30 * param_34._4_4_ - in_s31 * param_7;
    param_2 = in_s31 * (float)param_34 - unaff_s8 * param_34._4_4_;
    in_s18 = unaff_s8 * param_7 - in_s30 * (float)param_34;
  } while( true );
}


