/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.TransferOwnershipOnSelect$$LateUpdate
ENTRY_POINT: 063804b4
PROGRAM: Waifu-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_TransferOwnershipOnSelect__LateUpdate
               (long param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,undefined8 param_9,long *param_10,long *param_11,
               int param_12,undefined8 param_13,float *param_14,float *param_15,float *param_16,
               undefined8 param_17,long *param_18,long *param_19,long *param_20,int param_21,
               ulong param_22,long *param_23,long *param_24,undefined8 param_25,undefined8 param_26,
               undefined8 param_27,undefined8 param_28,undefined8 param_29,undefined8 param_30,
               undefined8 param_31,undefined8 param_32,undefined8 param_33,undefined8 param_34,
               undefined8 param_35,undefined8 param_36,undefined8 param_37,undefined8 param_38)

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
  float *in_x17;
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
  float unaff_s10;
  float fVar14;
  float unaff_s11;
  float fVar15;
  float unaff_s12;
  float fVar16;
  float unaff_s14;
  float unaff_s15;
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
    fVar27 = *in_x17;
    fVar30 = in_x17[1];
    fVar12 = in_x17[2];
    fVar13 = in_x17[3];
    param_4 = param_4 * param_2;
    param_2 = unaff_s15 * param_2;
    param_8 = param_8 * param_5;
    fVar10 = unaff_s10 * param_5;
    param_6 = param_6 * param_3;
    fVar14 = unaff_s11 * param_31._4_4_;
    fVar15 = unaff_s12 * param_31._4_4_;
    fVar16 = param_7 * param_5 * param_31._4_4_;
    param_3 = unaff_s14 * param_3;
    fVar17 = fVar30 * fVar16 - fVar12 * fVar15;
    fVar18 = fVar12 * fVar14 - fVar27 * fVar16;
                    /* try { // try from 06380518 to 06480523 has its CatchHandler @ 06380980 */
                    /* try { // try from 06380530 to 06480543 has its CatchHandler @ 0638097c */
    fVar17 = fVar17 + fVar17;
    fVar18 = fVar18 + fVar18;
    fVar11 = fVar27 * fVar15 - fVar30 * fVar14;
    fVar23 = fVar27 * param_6 - fVar30 * param_4;
    fVar8 = fVar30 * param_8 - fVar12 * param_6;
                    /* try { // try from 06380550 to 06480563 has its CatchHandler @ 0638096c */
    fVar19 = fVar12 * param_4 - fVar27 * param_8;
    fVar20 = fVar27 * param_3 - fVar30 * param_2;
    fVar21 = fVar30 * fVar10 - fVar12 * param_3;
    fVar22 = fVar12 * param_2 - fVar27 * fVar10;
    fVar11 = fVar11 + fVar11;
    fVar8 = fVar8 + fVar8;
    fVar19 = fVar19 + fVar19;
    fVar23 = fVar23 + fVar23;
    fVar21 = fVar21 + fVar21;
    fVar22 = fVar22 + fVar22;
    fVar20 = fVar20 + fVar20;
                    /* try { // try from 06380598 to 064805ab has its CatchHandler @ 0638095c */
    pfVar4 = (float *)(param_1 + (long)in_w10 * (long)unaff_w26);
    fVar9 = in_x12[10];
    unaff_x29 = unaff_x29 - 1;
    in_w14 = in_w14 + 1;
    param_37._4_4_ =
         param_37._4_4_ + fVar9 * (param_4 + fVar13 * fVar8 + (fVar30 * fVar23 - fVar12 * fVar19));
    param_38._0_4_ =
         (float)param_38 + fVar9 * (param_6 + fVar13 * fVar19 + (fVar12 * fVar8 - fVar27 * fVar23));
    param_38._4_4_ =
         param_38._4_4_ + fVar9 * (param_8 + fVar13 * fVar23 + (fVar27 * fVar19 - fVar30 * fVar8));
    param_36._0_4_ =
         (float)param_36 + fVar9 * (param_2 + fVar13 * fVar21 + (fVar30 * fVar20 - fVar12 * fVar22))
    ;
    param_36._4_4_ =
         param_36._4_4_ + fVar9 * (param_3 + fVar13 * fVar22 + (fVar12 * fVar21 - fVar27 * fVar20));
    param_37._0_4_ =
         (float)param_37 + fVar9 * (fVar10 + fVar13 * fVar20 + (fVar27 * fVar22 - fVar30 * fVar21));
    param_34._4_4_ =
         param_34._4_4_ +
         fVar9 * (*pfVar4 + fVar14 + fVar13 * fVar17 + (fVar30 * fVar11 - fVar12 * fVar18));
    param_35._0_4_ =
         (float)param_35 +
         fVar9 * (pfVar4[1] + fVar15 + fVar13 * fVar18 + (fVar12 * fVar17 - fVar27 * fVar11));
    param_35._4_4_ =
         param_35._4_4_ +
         fVar9 * (pfVar4[2] + fVar16 + fVar13 * fVar11 + (fVar27 * fVar18 - fVar30 * fVar17));
    if (unaff_x29 == 0) {
      while( true ) {
        fVar17 = *unaff_x19;
        fVar18 = unaff_x19[1];
        fVar19 = unaff_x19[2];
        fVar20 = unaff_x19[3];
        param_34._4_4_ = param_34._4_4_ - *param_14;
        param_35._0_4_ = (float)param_35 - param_14[1];
        param_35._4_4_ = param_35._4_4_ - param_14[2];
        fVar9 = param_38._4_4_ * fVar18 - (float)param_38 * fVar19;
        fVar12 = (float)param_37 * fVar18 - param_36._4_4_ * fVar19;
        fVar12 = fVar12 + fVar12;
        fVar8 = (float)param_38 * fVar17 - param_37._4_4_ * fVar18;
        fVar10 = param_36._4_4_ * fVar17 - (float)param_36 * fVar18;
        fVar14 = fVar17 * (float)param_35 - fVar18 * param_34._4_4_;
        fVar11 = param_37._4_4_ * fVar19 - param_38._4_4_ * fVar17;
        fVar13 = (float)param_36 * fVar19 - (float)param_37 * fVar17;
        fVar15 = fVar18 * param_35._4_4_ - fVar19 * (float)param_35;
        fVar16 = fVar19 * param_34._4_4_ - fVar17 * param_35._4_4_;
        fVar9 = fVar9 + fVar9;
        fVar11 = fVar11 + fVar11;
        fVar8 = fVar8 + fVar8;
        fVar13 = fVar13 + fVar13;
        fVar10 = fVar10 + fVar10;
        fVar15 = fVar15 + fVar15;
        fVar16 = fVar16 + fVar16;
        fVar14 = fVar14 + fVar14;
        param_29._0_4_ =
             (float)param_29 +
             ((float)param_38 + fVar20 * fVar11 + (fVar19 * fVar9 - fVar17 * fVar8)) * param_15[1];
        param_28._4_4_ =
             param_28._4_4_ +
             (param_37._4_4_ + fVar20 * fVar9 + (fVar18 * fVar8 - fVar19 * fVar11)) * *param_15;
        param_25._4_4_ =
             param_25._4_4_ +
             ((float)param_36 + fVar20 * fVar12 + (fVar18 * fVar10 - fVar19 * fVar13)) * *param_15;
        param_26._4_4_ =
             param_26._4_4_ +
             (param_36._4_4_ + fVar20 * fVar13 + (fVar19 * fVar12 - fVar17 * fVar10)) * param_15[1];
        param_26._0_4_ =
             (float)param_26 +
             ((float)param_37 + fVar20 * fVar10 + (fVar17 * fVar13 - fVar18 * fVar12)) * param_15[2]
        ;
        fVar10 = (param_34._4_4_ + fVar20 * fVar15 + (fVar18 * fVar14 - fVar19 * fVar16)) /
                 *param_16;
        fVar12 = ((float)param_35 + fVar20 * fVar16 + (fVar19 * fVar15 - fVar17 * fVar14)) /
                 param_16[1];
        fVar13 = (param_35._4_4_ + fVar20 * fVar14 + (fVar17 * fVar16 - fVar18 * fVar15)) /
                 param_16[2];
        param_29._4_4_ =
             param_29._4_4_ +
             (param_38._4_4_ + fVar20 * fVar8 + (fVar17 * fVar11 - fVar18 * fVar9)) * param_15[2];
        while( true ) {
          param_27._0_4_ = (float)param_27 + fVar13;
          param_27._4_4_ = param_27._4_4_ + fVar12;
          param_28._0_4_ = (float)param_28 + fVar10;
          in_w13 = in_w13 + 1;
          do {
            do {
              in_x15 = in_x15 + 1;
              unaff_w23 = unaff_w23 << 1;
              if (in_x15 == 4) {
                if (0 < in_w13) {
                  fVar8 = (float)in_w13;
                  lVar3 = (long)param_21;
                  pfVar4 = (float *)(*param_20 + (long)param_21 * 0xc);
                  *pfVar4 = (float)param_28 / fVar8;
                  pfVar4[1] = param_27._4_4_ / fVar8;
                  pfVar4[2] = (float)param_27 / fVar8;
                  if ((in_w11 & 1) == 0) {
                    if ((param_22 & 0x100000000) != 0) {
                      pfVar4 = (float *)(*param_19 + lVar3 * 0xc);
                      *pfVar4 = param_28._4_4_ / fVar8;
                      pfVar4[1] = (float)param_29 / fVar8;
                      pfVar4[2] = param_29._4_4_ / fVar8;
                    }
                  }
                  else {
                    pfVar4 = (float *)(*param_19 + lVar3 * 0xc);
                    *pfVar4 = param_28._4_4_ / fVar8;
                    pfVar4[1] = (float)param_29 / fVar8;
                    pfVar4[2] = param_29._4_4_ / fVar8;
                    pfVar4 = (float *)(*param_18 + lVar3 * 0x10);
                    *pfVar4 = param_25._4_4_ / fVar8;
                    pfVar4[1] = param_26._4_4_ / fVar8;
                    pfVar4[2] = (float)param_26 / fVar8;
                    pfVar4[3] = -1.0;
                  }
                }
                return;
              }
            } while (((unaff_w27 >> (ulong)((uint)in_x15 & 0x1f)) >> 0x1c & 1) == 0);
            iVar6 = *(int *)(unaff_x24 + in_x15 * 4);
            unaff_w28 = *(int *)(unaff_x24 + in_x15 * 4);
          } while ((unaff_w23 & in_w16) == 0);
          uVar1 = *(uint *)(*param_10 + (long)(*(int *)(unaff_x24 + in_x15 * 4) + param_12) * 4);
          uVar2 = uVar1 >> 0x1c;
          unaff_x29 = (ulong)uVar2;
          uVar1 = uVar1 & 0xfffffff;
          if ((in_w11 & 1) != 0) break;
          if ((param_22 & 0x100000000) == 0) {
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
                pfVar7 = (float *)(*param_11 + (long)iVar6 * (long)unaff_w25);
                fVar14 = pfVar7[10];
                pfVar5 = (float *)(*param_23 + (long)((int)pfVar7[9] + unaff_w28) * (long)unaff_w26)
                ;
                pfVar4 = (float *)(*param_24 + (long)((int)pfVar7[9] + unaff_w28) * 0x10);
                fVar15 = *pfVar4;
                fVar16 = pfVar4[1];
                fVar17 = pfVar4[2];
                fVar18 = pfVar4[3];
                fVar10 = *pfVar7 * *param_15 * param_31._4_4_;
                fVar12 = pfVar7[1] * param_15[1] * param_31._4_4_;
                fVar13 = pfVar7[2] * param_15[2] * param_31._4_4_;
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
            fVar8 = fVar8 - *param_14;
            fVar9 = fVar9 - param_14[1];
            fVar11 = fVar11 - param_14[2];
            fVar17 = fVar14 * fVar11 - fVar12 * fVar9;
            fVar18 = fVar12 * fVar8 - fVar13 * fVar11;
            fVar16 = fVar13 * fVar9 - fVar14 * fVar8;
            fVar17 = fVar17 + fVar17;
            fVar18 = fVar18 + fVar18;
            fVar16 = fVar16 + fVar16;
            fVar10 = (fVar8 + fVar15 * fVar17 + (fVar14 * fVar16 - fVar12 * fVar18)) / *param_16;
            fVar12 = (fVar9 + fVar15 * fVar18 + (fVar12 * fVar17 - fVar13 * fVar16)) / param_16[1];
            fVar13 = (fVar11 + fVar15 * fVar16 + (fVar13 * fVar18 - fVar14 * fVar17)) / param_16[2];
          }
          else {
            if (uVar2 == 0) {
              fVar8 = *param_15;
              param_38._4_4_ = param_15[1];
              param_38._0_4_ = param_15[2];
              fVar11 = 0.0;
              fVar14 = 0.0;
              fVar15 = 0.0;
              fVar13 = 0.0;
              fVar12 = 0.0;
              fVar9 = 0.0;
            }
            else {
              param_38._4_4_ = param_15[1];
              fVar8 = *param_15;
              param_38._0_4_ = param_15[2];
              iVar6 = iVar6 + uVar1;
              fVar9 = 0.0;
              fVar12 = 0.0;
              fVar13 = 0.0;
              fVar15 = 0.0;
              fVar14 = 0.0;
              fVar11 = 0.0;
              do {
                pfVar5 = (float *)(*param_11 + (long)iVar6 * (long)unaff_w25);
                pfVar4 = (float *)(*param_24 + (long)((int)pfVar5[9] + unaff_w28) * 0x10);
                fVar16 = *pfVar4;
                fVar18 = pfVar4[1];
                fVar20 = pfVar4[2];
                fVar24 = pfVar4[3];
                fVar21 = pfVar5[3] * fVar8;
                fVar22 = pfVar5[4] * param_38._4_4_;
                fVar27 = pfVar5[5] * (float)param_38;
                fVar10 = *pfVar5 * fVar8 * param_31._4_4_;
                fVar17 = pfVar5[1] * param_38._4_4_ * param_31._4_4_;
                fVar19 = pfVar5[2] * (float)param_38 * param_31._4_4_;
                fVar30 = fVar16 * fVar17 - fVar18 * fVar10;
                fVar25 = fVar18 * fVar19 - fVar20 * fVar17;
                fVar26 = fVar20 * fVar10 - fVar16 * fVar19;
                fVar28 = fVar16 * fVar22 - fVar18 * fVar21;
                fVar31 = fVar18 * fVar27 - fVar20 * fVar22;
                fVar23 = fVar20 * fVar21 - fVar16 * fVar27;
                fVar25 = fVar25 + fVar25;
                fVar26 = fVar26 + fVar26;
                fVar30 = fVar30 + fVar30;
                fVar31 = fVar31 + fVar31;
                fVar23 = fVar23 + fVar23;
                fVar28 = fVar28 + fVar28;
                fVar29 = pfVar5[10];
                pfVar4 = (float *)(*param_23 + (long)((int)pfVar5[9] + unaff_w28) * (long)unaff_w26)
                ;
                unaff_x29 = unaff_x29 - 1;
                fVar15 = fVar15 + fVar29 * (fVar21 + fVar24 * fVar31 +
                                           (fVar18 * fVar28 - fVar20 * fVar23));
                fVar14 = fVar14 + fVar29 * (fVar22 + fVar24 * fVar23 +
                                           (fVar20 * fVar31 - fVar16 * fVar28));
                fVar11 = fVar11 + fVar29 * (fVar27 + fVar24 * fVar28 +
                                           (fVar16 * fVar23 - fVar18 * fVar31));
                fVar9 = fVar9 + fVar29 * (*pfVar4 +
                                         fVar10 + fVar24 * fVar25 +
                                         (fVar18 * fVar30 - fVar20 * fVar26));
                fVar12 = fVar12 + fVar29 * (pfVar4[1] +
                                           fVar17 + fVar24 * fVar26 +
                                           (fVar20 * fVar25 - fVar16 * fVar30));
                fVar13 = fVar13 + fVar29 * (pfVar4[2] +
                                           fVar19 + fVar24 * fVar30 +
                                           (fVar16 * fVar26 - fVar18 * fVar25));
                iVar6 = iVar6 + 1;
              } while (unaff_x29 != 0);
            }
            fVar17 = *unaff_x19;
            fVar19 = unaff_x19[1];
            fVar30 = unaff_x19[2];
            fVar21 = unaff_x19[3];
            fVar9 = fVar9 - *param_14;
            fVar12 = fVar12 - param_14[1];
            fVar13 = fVar13 - param_14[2];
            fVar16 = fVar14 * fVar17 - fVar15 * fVar19;
            fVar18 = fVar11 * fVar19 - fVar14 * fVar30;
            fVar20 = fVar15 * fVar30 - fVar11 * fVar17;
            fVar22 = fVar17 * fVar12 - fVar19 * fVar9;
            fVar23 = fVar19 * fVar13 - fVar30 * fVar12;
            fVar27 = fVar30 * fVar9 - fVar17 * fVar13;
            fVar18 = fVar18 + fVar18;
            fVar20 = fVar20 + fVar20;
            fVar16 = fVar16 + fVar16;
            fVar23 = fVar23 + fVar23;
            fVar27 = fVar27 + fVar27;
            fVar22 = fVar22 + fVar22;
            fVar10 = (fVar9 + fVar21 * fVar23 + (fVar19 * fVar22 - fVar30 * fVar27)) / *param_16;
            fVar12 = (fVar12 + fVar21 * fVar27 + (fVar30 * fVar23 - fVar17 * fVar22)) / param_16[1];
            fVar13 = (fVar13 + fVar21 * fVar22 + (fVar17 * fVar27 - fVar19 * fVar23)) / param_16[2];
            param_28._4_4_ =
                 param_28._4_4_ +
                 fVar8 * (fVar15 + fVar21 * fVar18 + (fVar19 * fVar16 - fVar30 * fVar20));
            param_29._0_4_ =
                 (float)param_29 +
                 param_38._4_4_ * (fVar14 + fVar21 * fVar20 + (fVar30 * fVar18 - fVar17 * fVar16));
            param_29._4_4_ =
                 param_29._4_4_ +
                 (float)param_38 * (fVar11 + fVar21 * fVar16 + (fVar17 * fVar20 - fVar19 * fVar18));
          }
        }
        if (uVar2 != 0) break;
        param_38._4_4_ = 0.0;
        param_38._0_4_ = 0.0;
        param_37._4_4_ = 0.0;
        param_35._4_4_ = 0.0;
        param_35._0_4_ = 0.0;
        param_34._4_4_ = 0.0;
        param_36._0_4_ = 0.0;
        param_36._4_4_ = 0.0;
        param_37._0_4_ = 0.0;
      }
      param_31._0_4_ = *param_15;
      param_30._4_4_ = param_15[1];
      unaff_x30 = *param_11;
      in_w14 = iVar6 + uVar1;
      param_30._0_4_ = param_15[2];
      param_1 = *param_23;
      in_x9 = *param_24;
      param_37._0_4_ = 0.0;
      param_36._4_4_ = 0.0;
      param_36._0_4_ = 0.0;
      param_34._4_4_ = 0.0;
      param_35._0_4_ = 0.0;
      param_35._4_4_ = 0.0;
      param_37._4_4_ = 0.0;
      param_38._0_4_ = 0.0;
      param_38._4_4_ = 0.0;
    }
    in_x12 = (float *)(unaff_x30 + (long)in_w14 * (long)unaff_w25);
    param_7 = in_x12[2];
    param_4 = in_x12[3];
    unaff_s15 = in_x12[6];
    unaff_s14 = in_x12[7];
    unaff_s11 = *in_x12 * (float)param_31;
    in_w10 = (int)in_x12[9] + unaff_w28;
    in_x17 = (float *)(in_x9 + (long)in_w10 * 0x10);
    param_6 = in_x12[4];
    param_8 = in_x12[5];
    unaff_s12 = in_x12[1] * param_30._4_4_;
    unaff_s10 = in_x12[8];
    param_2 = (float)param_31;
    param_5 = (float)param_30;
    param_3 = param_30._4_4_;
  } while( true );
}


