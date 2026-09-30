/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$get_LineScaleFactor
ENTRY_POINT: 0637c090
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


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__get_LineScaleFactor
               (long param_1,float param_2,float param_3,float param_4,float param_5,
               undefined1 param_6 [16],float param_7,undefined8 param_8,long *param_9,long *param_10
               ,int param_11,undefined8 param_12,float *param_13,float *param_14,float *param_15,
               undefined8 param_16,long *param_17,long *param_18,long *param_19,int param_20,
               ulong param_21,long *param_22,long *param_23,undefined8 param_24,undefined8 param_25,
               undefined8 param_26,undefined8 param_27,undefined8 param_28,undefined8 param_29,
               undefined8 param_30,undefined8 param_31,undefined8 param_32,undefined8 param_33,
               undefined8 param_34,undefined8 param_35,undefined8 param_36,undefined8 param_37)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long in_x9;
  float in_w10;
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
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  do {
    pfVar4 = (float *)(in_x9 + (long)((int)in_w10 + unaff_w28) * 0x10);
    fVar28 = *pfVar4;
    fVar30 = pfVar4[1];
    fVar14 = pfVar4[2];
    fVar15 = pfVar4[3];
    param_4 = param_4 * param_2;
    fVar9 = in_x12[6] * param_2;
    fVar24 = in_x12[5] * (float)param_29;
    fVar12 = in_x12[8] * (float)param_29;
    fVar21 = in_x12[4] * param_29._4_4_;
    fVar16 = param_3 * param_2 * param_30._4_4_;
    fVar17 = param_5 * param_29._4_4_ * param_30._4_4_;
    fVar18 = param_7 * (float)param_29 * param_30._4_4_;
    fVar10 = in_x12[7] * param_29._4_4_;
    fVar19 = fVar30 * fVar18 - fVar14 * fVar17;
    fVar20 = fVar14 * fVar16 - fVar28 * fVar18;
    fVar19 = fVar19 + fVar19;
    fVar20 = fVar20 + fVar20;
    fVar13 = fVar28 * fVar17 - fVar30 * fVar16;
    fVar27 = fVar28 * fVar21 - fVar30 * param_4;
    fVar8 = fVar30 * fVar24 - fVar14 * fVar21;
    fVar22 = fVar14 * param_4 - fVar28 * fVar24;
    fVar23 = fVar28 * fVar10 - fVar30 * fVar9;
    fVar25 = fVar30 * fVar12 - fVar14 * fVar10;
    fVar26 = fVar14 * fVar9 - fVar28 * fVar12;
    fVar13 = fVar13 + fVar13;
    fVar8 = fVar8 + fVar8;
    fVar22 = fVar22 + fVar22;
    fVar27 = fVar27 + fVar27;
    fVar25 = fVar25 + fVar25;
    fVar26 = fVar26 + fVar26;
    fVar23 = fVar23 + fVar23;
    pfVar4 = (float *)(param_1 + (long)((int)in_w10 + unaff_w28) * (long)unaff_w26);
    fVar11 = in_x12[10];
    unaff_x29 = unaff_x29 - 1;
    in_w14 = in_w14 + 1;
    param_36._4_4_ =
         param_36._4_4_ + fVar11 * (param_4 + fVar15 * fVar8 + (fVar30 * fVar27 - fVar14 * fVar22));
    param_37._0_4_ =
         (float)param_37 + fVar11 * (fVar21 + fVar15 * fVar22 + (fVar14 * fVar8 - fVar28 * fVar27));
    param_37._4_4_ =
         param_37._4_4_ + fVar11 * (fVar24 + fVar15 * fVar27 + (fVar28 * fVar22 - fVar30 * fVar8));
    param_35._0_4_ =
         (float)param_35 + fVar11 * (fVar9 + fVar15 * fVar25 + (fVar30 * fVar23 - fVar14 * fVar26));
    param_35._4_4_ =
         param_35._4_4_ + fVar11 * (fVar10 + fVar15 * fVar26 + (fVar14 * fVar25 - fVar28 * fVar23));
    param_36._0_4_ =
         (float)param_36 + fVar11 * (fVar12 + fVar15 * fVar23 + (fVar28 * fVar26 - fVar30 * fVar25))
    ;
    param_33._4_4_ =
         param_33._4_4_ +
         fVar11 * (*pfVar4 + fVar16 + fVar15 * fVar19 + (fVar30 * fVar13 - fVar14 * fVar20));
    param_34._0_4_ =
         (float)param_34 +
         fVar11 * (pfVar4[1] + fVar17 + fVar15 * fVar20 + (fVar14 * fVar19 - fVar28 * fVar13));
    param_34._4_4_ =
         param_34._4_4_ +
         fVar11 * (pfVar4[2] + fVar18 + fVar15 * fVar13 + (fVar28 * fVar20 - fVar30 * fVar19));
    if (unaff_x29 == 0) {
      while( true ) {
        fVar17 = *unaff_x19;
        fVar18 = unaff_x19[1];
        fVar19 = unaff_x19[2];
        fVar20 = unaff_x19[3];
        param_33._4_4_ = param_33._4_4_ - *param_13;
        param_34._0_4_ = (float)param_34 - param_13[1];
        param_34._4_4_ = param_34._4_4_ - param_13[2];
        fVar9 = param_37._4_4_ * fVar18 - (float)param_37 * fVar19;
        fVar12 = (float)param_36 * fVar18 - param_35._4_4_ * fVar19;
        fVar12 = fVar12 + fVar12;
        fVar8 = (float)param_37 * fVar17 - param_36._4_4_ * fVar18;
        fVar10 = param_35._4_4_ * fVar17 - (float)param_35 * fVar18;
        fVar14 = fVar17 * (float)param_34 - fVar18 * param_33._4_4_;
        fVar11 = param_36._4_4_ * fVar19 - param_37._4_4_ * fVar17;
        fVar13 = (float)param_35 * fVar19 - (float)param_36 * fVar17;
        fVar15 = fVar18 * param_34._4_4_ - fVar19 * (float)param_34;
        fVar16 = fVar19 * param_33._4_4_ - fVar17 * param_34._4_4_;
        fVar9 = fVar9 + fVar9;
        fVar11 = fVar11 + fVar11;
        fVar8 = fVar8 + fVar8;
        fVar13 = fVar13 + fVar13;
        fVar10 = fVar10 + fVar10;
        fVar15 = fVar15 + fVar15;
        fVar16 = fVar16 + fVar16;
        fVar14 = fVar14 + fVar14;
        param_28._0_4_ =
             (float)param_28 +
             ((float)param_37 + fVar20 * fVar11 + (fVar19 * fVar9 - fVar17 * fVar8)) * param_14[1];
        param_27._4_4_ =
             param_27._4_4_ +
             (param_36._4_4_ + fVar20 * fVar9 + (fVar18 * fVar8 - fVar19 * fVar11)) * *param_14;
        param_24._4_4_ =
             param_24._4_4_ +
             ((float)param_35 + fVar20 * fVar12 + (fVar18 * fVar10 - fVar19 * fVar13)) * *param_14;
        param_25._4_4_ =
             param_25._4_4_ +
             (param_35._4_4_ + fVar20 * fVar13 + (fVar19 * fVar12 - fVar17 * fVar10)) * param_14[1];
        param_25._0_4_ =
             (float)param_25 +
             ((float)param_36 + fVar20 * fVar10 + (fVar17 * fVar13 - fVar18 * fVar12)) * param_14[2]
        ;
        fVar10 = (param_33._4_4_ + fVar20 * fVar15 + (fVar18 * fVar14 - fVar19 * fVar16)) /
                 *param_15;
        fVar12 = ((float)param_34 + fVar20 * fVar16 + (fVar19 * fVar15 - fVar17 * fVar14)) /
                 param_15[1];
        fVar13 = (param_34._4_4_ + fVar20 * fVar14 + (fVar17 * fVar16 - fVar18 * fVar15)) /
                 param_15[2];
        param_28._4_4_ =
             param_28._4_4_ +
             (param_37._4_4_ + fVar20 * fVar8 + (fVar17 * fVar11 - fVar18 * fVar9)) * param_14[2];
        while( true ) {
          param_26._0_4_ = (float)param_26 + fVar13;
          param_26._4_4_ = param_26._4_4_ + fVar12;
          param_27._0_4_ = (float)param_27 + fVar10;
          in_w13 = in_w13 + 1;
          do {
            do {
              in_x15 = in_x15 + 1;
              unaff_w23 = unaff_w23 << 1;
              if (in_x15 == 4) {
                if (0 < in_w13) {
                  fVar8 = (float)in_w13;
                  lVar3 = (long)param_20;
                  pfVar4 = (float *)(*param_19 + (long)param_20 * 0xc);
                  *pfVar4 = (float)param_27 / fVar8;
                  pfVar4[1] = param_26._4_4_ / fVar8;
                  pfVar4[2] = (float)param_26 / fVar8;
                  if ((in_w11 & 1) == 0) {
                    if ((param_21 & 0x100000000) != 0) {
                      pfVar4 = (float *)(*param_18 + lVar3 * 0xc);
                      *pfVar4 = param_27._4_4_ / fVar8;
                      pfVar4[1] = (float)param_28 / fVar8;
                      pfVar4[2] = param_28._4_4_ / fVar8;
                    }
                  }
                  else {
                    pfVar4 = (float *)(*param_18 + lVar3 * 0xc);
                    *pfVar4 = param_27._4_4_ / fVar8;
                    pfVar4[1] = (float)param_28 / fVar8;
                    pfVar4[2] = param_28._4_4_ / fVar8;
                    pfVar4 = (float *)(*param_17 + lVar3 * 0x10);
                    *pfVar4 = param_24._4_4_ / fVar8;
                    pfVar4[1] = param_25._4_4_ / fVar8;
                    pfVar4[2] = (float)param_25 / fVar8;
                    pfVar4[3] = -1.0;
                  }
                }
                return;
              }
            } while (((unaff_w27 >> (ulong)((uint)in_x15 & 0x1f)) >> 0x1c & 1) == 0);
            iVar6 = *(int *)(unaff_x24 + in_x15 * 4);
            unaff_w28 = *(int *)(unaff_x24 + in_x15 * 4);
          } while ((unaff_w23 & in_w16) == 0);
          uVar1 = *(uint *)(*param_9 + (long)(*(int *)(unaff_x24 + in_x15 * 4) + param_11) * 4);
          uVar2 = uVar1 >> 0x1c;
          unaff_x29 = (ulong)uVar2;
          uVar1 = uVar1 & 0xfffffff;
          if ((in_w11 & 1) != 0) break;
          if ((param_21 & 0x100000000) == 0) {
            if (uVar2 == 0) {
              fVar11 = 0.0;
              fVar9 = 0.0;
              fVar8 = 0.0;
            }
            else {
              iVar6 = iVar6 + uVar1;
              fVar8 = 0.0;
              fVar9 = 0.0;
              fVar11 = 0.0;
              do {
                pfVar7 = (float *)(*param_10 + (long)iVar6 * (long)unaff_w25);
                fVar14 = pfVar7[10];
                pfVar5 = (float *)(*param_22 + (long)((int)pfVar7[9] + unaff_w28) * (long)unaff_w26)
                ;
                pfVar4 = (float *)(*param_23 + (long)((int)pfVar7[9] + unaff_w28) * 0x10);
                fVar15 = *pfVar4;
                fVar16 = pfVar4[1];
                fVar17 = pfVar4[2];
                fVar18 = pfVar4[3];
                fVar10 = *pfVar7 * *param_14 * param_30._4_4_;
                fVar12 = pfVar7[1] * param_14[1] * param_30._4_4_;
                fVar13 = pfVar7[2] * param_14[2] * param_30._4_4_;
                fVar19 = fVar15 * fVar12 - fVar16 * fVar10;
                fVar20 = fVar16 * fVar13 - fVar17 * fVar12;
                fVar21 = fVar17 * fVar10 - fVar15 * fVar13;
                fVar20 = fVar20 + fVar20;
                fVar21 = fVar21 + fVar21;
                fVar19 = fVar19 + fVar19;
                unaff_x29 = unaff_x29 - 1;
                fVar8 = fVar8 + fVar14 * (*pfVar5 +
                                         fVar10 + fVar18 * fVar20 +
                                         (fVar16 * fVar19 - fVar17 * fVar21));
                fVar9 = fVar9 + fVar14 * (pfVar5[1] +
                                         fVar12 + fVar18 * fVar21 +
                                         (fVar17 * fVar20 - fVar15 * fVar19));
                fVar11 = fVar11 + fVar14 * (pfVar5[2] +
                                           fVar13 + fVar18 * fVar19 +
                                           (fVar15 * fVar21 - fVar16 * fVar20));
                iVar6 = iVar6 + 1;
              } while (unaff_x29 != 0);
            }
            fVar13 = *unaff_x19;
            fVar14 = unaff_x19[1];
            fVar12 = unaff_x19[2];
            fVar15 = unaff_x19[3];
            fVar8 = fVar8 - *param_13;
            fVar9 = fVar9 - param_13[1];
            fVar11 = fVar11 - param_13[2];
            fVar17 = fVar14 * fVar11 - fVar12 * fVar9;
            fVar18 = fVar12 * fVar8 - fVar13 * fVar11;
            fVar16 = fVar13 * fVar9 - fVar14 * fVar8;
            fVar17 = fVar17 + fVar17;
            fVar18 = fVar18 + fVar18;
            fVar16 = fVar16 + fVar16;
            fVar10 = (fVar8 + fVar15 * fVar17 + (fVar14 * fVar16 - fVar12 * fVar18)) / *param_15;
            fVar12 = (fVar9 + fVar15 * fVar18 + (fVar12 * fVar17 - fVar13 * fVar16)) / param_15[1];
            fVar13 = (fVar11 + fVar15 * fVar16 + (fVar13 * fVar18 - fVar14 * fVar17)) / param_15[2];
          }
          else {
            if (uVar2 == 0) {
              fVar8 = *param_14;
              param_37._4_4_ = param_14[1];
              param_37._0_4_ = param_14[2];
              fVar11 = 0.0;
              fVar14 = 0.0;
              fVar15 = 0.0;
              fVar13 = 0.0;
              fVar12 = 0.0;
              fVar9 = 0.0;
            }
            else {
              param_37._4_4_ = param_14[1];
              fVar8 = *param_14;
              param_37._0_4_ = param_14[2];
              iVar6 = iVar6 + uVar1;
              fVar9 = 0.0;
              fVar12 = 0.0;
              fVar13 = 0.0;
              fVar15 = 0.0;
              fVar14 = 0.0;
              fVar11 = 0.0;
              do {
                pfVar5 = (float *)(*param_10 + (long)iVar6 * (long)unaff_w25);
                pfVar4 = (float *)(*param_23 + (long)((int)pfVar5[9] + unaff_w28) * 0x10);
                fVar16 = *pfVar4;
                fVar18 = pfVar4[1];
                fVar20 = pfVar4[2];
                fVar26 = pfVar4[3];
                fVar21 = pfVar5[3] * fVar8;
                fVar22 = pfVar5[4] * param_37._4_4_;
                fVar24 = pfVar5[5] * (float)param_37;
                fVar10 = *pfVar5 * fVar8 * param_30._4_4_;
                fVar17 = pfVar5[1] * param_37._4_4_ * param_30._4_4_;
                fVar19 = pfVar5[2] * (float)param_37 * param_30._4_4_;
                fVar25 = fVar16 * fVar17 - fVar18 * fVar10;
                fVar27 = fVar18 * fVar19 - fVar20 * fVar17;
                fVar28 = fVar20 * fVar10 - fVar16 * fVar19;
                fVar30 = fVar16 * fVar22 - fVar18 * fVar21;
                fVar31 = fVar18 * fVar24 - fVar20 * fVar22;
                fVar23 = fVar20 * fVar21 - fVar16 * fVar24;
                fVar27 = fVar27 + fVar27;
                fVar28 = fVar28 + fVar28;
                fVar25 = fVar25 + fVar25;
                fVar31 = fVar31 + fVar31;
                fVar23 = fVar23 + fVar23;
                fVar30 = fVar30 + fVar30;
                fVar29 = pfVar5[10];
                pfVar4 = (float *)(*param_22 + (long)((int)pfVar5[9] + unaff_w28) * (long)unaff_w26)
                ;
                unaff_x29 = unaff_x29 - 1;
                fVar15 = fVar15 + fVar29 * (fVar21 + fVar26 * fVar31 +
                                           (fVar18 * fVar30 - fVar20 * fVar23));
                fVar14 = fVar14 + fVar29 * (fVar22 + fVar26 * fVar23 +
                                           (fVar20 * fVar31 - fVar16 * fVar30));
                fVar11 = fVar11 + fVar29 * (fVar24 + fVar26 * fVar30 +
                                           (fVar16 * fVar23 - fVar18 * fVar31));
                fVar9 = fVar9 + fVar29 * (*pfVar4 +
                                         fVar10 + fVar26 * fVar27 +
                                         (fVar18 * fVar25 - fVar20 * fVar28));
                fVar12 = fVar12 + fVar29 * (pfVar4[1] +
                                           fVar17 + fVar26 * fVar28 +
                                           (fVar20 * fVar27 - fVar16 * fVar25));
                fVar13 = fVar13 + fVar29 * (pfVar4[2] +
                                           fVar19 + fVar26 * fVar25 +
                                           (fVar16 * fVar28 - fVar18 * fVar27));
                iVar6 = iVar6 + 1;
              } while (unaff_x29 != 0);
            }
            fVar17 = *unaff_x19;
            fVar19 = unaff_x19[1];
            fVar25 = unaff_x19[2];
            fVar21 = unaff_x19[3];
            fVar9 = fVar9 - *param_13;
            fVar12 = fVar12 - param_13[1];
            fVar13 = fVar13 - param_13[2];
            fVar16 = fVar14 * fVar17 - fVar15 * fVar19;
            fVar18 = fVar11 * fVar19 - fVar14 * fVar25;
            fVar20 = fVar15 * fVar25 - fVar11 * fVar17;
            fVar22 = fVar17 * fVar12 - fVar19 * fVar9;
            fVar23 = fVar19 * fVar13 - fVar25 * fVar12;
            fVar24 = fVar25 * fVar9 - fVar17 * fVar13;
            fVar18 = fVar18 + fVar18;
            fVar20 = fVar20 + fVar20;
            fVar16 = fVar16 + fVar16;
            fVar23 = fVar23 + fVar23;
            fVar24 = fVar24 + fVar24;
            fVar22 = fVar22 + fVar22;
            fVar10 = (fVar9 + fVar21 * fVar23 + (fVar19 * fVar22 - fVar25 * fVar24)) / *param_15;
            fVar12 = (fVar12 + fVar21 * fVar24 + (fVar25 * fVar23 - fVar17 * fVar22)) / param_15[1];
            fVar13 = (fVar13 + fVar21 * fVar22 + (fVar17 * fVar24 - fVar19 * fVar23)) / param_15[2];
            param_27._4_4_ =
                 param_27._4_4_ +
                 fVar8 * (fVar15 + fVar21 * fVar18 + (fVar19 * fVar16 - fVar25 * fVar20));
            param_28._0_4_ =
                 (float)param_28 +
                 param_37._4_4_ * (fVar14 + fVar21 * fVar20 + (fVar25 * fVar18 - fVar17 * fVar16));
            param_28._4_4_ =
                 param_28._4_4_ +
                 (float)param_37 * (fVar11 + fVar21 * fVar16 + (fVar17 * fVar20 - fVar19 * fVar18));
          }
        }
        if (uVar2 != 0) break;
        param_37._4_4_ = 0.0;
        param_37._0_4_ = 0.0;
        param_36._4_4_ = 0.0;
        param_34._4_4_ = 0.0;
        param_34._0_4_ = 0.0;
        param_33._4_4_ = 0.0;
        param_35._0_4_ = 0.0;
        param_35._4_4_ = 0.0;
        param_36._0_4_ = 0.0;
      }
      param_30._0_4_ = *param_14;
      param_29._4_4_ = param_14[1];
      unaff_x30 = *param_10;
      in_w14 = iVar6 + uVar1;
      param_29._0_4_ = param_14[2];
      param_1 = *param_22;
      in_x9 = *param_23;
      param_36._0_4_ = 0.0;
      param_35._4_4_ = 0.0;
      param_35._0_4_ = 0.0;
      param_33._4_4_ = 0.0;
      param_34._0_4_ = 0.0;
      param_34._4_4_ = 0.0;
      param_36._4_4_ = 0.0;
      param_37._0_4_ = 0.0;
      param_37._4_4_ = 0.0;
    }
    in_x12 = (float *)(unaff_x30 + (long)in_w14 * (long)unaff_w25);
    param_3 = *in_x12;
    param_5 = in_x12[1];
    in_w10 = in_x12[9];
    param_7 = in_x12[2];
    param_4 = in_x12[3];
    param_2 = (float)param_30;
  } while( true );
}


