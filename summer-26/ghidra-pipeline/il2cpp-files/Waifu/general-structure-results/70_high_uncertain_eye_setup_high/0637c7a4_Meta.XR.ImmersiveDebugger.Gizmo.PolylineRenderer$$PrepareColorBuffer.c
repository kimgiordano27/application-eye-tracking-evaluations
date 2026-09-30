/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$PrepareColorBuffer
ENTRY_POINT: 0637c7a4
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__PrepareColorBuffer
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,undefined8 param_9,long *param_10,long *param_11,
               int param_12,undefined8 param_13,float *param_14,float *param_15,float *param_16,
               undefined8 param_17,long *param_18,long *param_19,long *param_20,int param_21,
               ulong param_22,long *param_23,long *param_24,undefined8 param_25,undefined8 param_26,
               undefined8 param_27,undefined8 param_28,undefined8 param_29,undefined8 param_30,
               undefined8 param_31,undefined8 param_32,undefined8 param_33,undefined8 param_34,
               undefined8 param_35,undefined8 param_36,undefined8 param_37,undefined8 param_38)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  float *pfVar5;
  uint in_w11;
  float *pfVar6;
  int in_w13;
  int iVar7;
  long in_x15;
  uint in_w16;
  float *unaff_x19;
  uint unaff_w23;
  long unaff_x24;
  int unaff_w25;
  int unaff_w26;
  uint unaff_w27;
  ulong uVar8;
  float *pfVar9;
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
  float unaff_s8;
  float fVar21;
  float unaff_s9;
  float fVar22;
  float fVar23;
  float fVar24;
  float unaff_s15;
  float fVar25;
  float in_s16;
  float fVar26;
  float in_s17;
  float fVar27;
  float fVar28;
  float in_s18;
  float fVar29;
  float in_s19;
  float fVar30;
  float fVar31;
  float in_s20;
  float fVar32;
  float in_s21;
  float in_s22;
  float in_s23;
  float in_s24;
  float in_s25;
  float in_s26;
  float fVar33;
  float in_s27;
  float in_s28;
  float in_s29;
  float fVar34;
  float in_s30;
  float fVar35;
  float in_s31;
  
  param_37._4_4_ = param_5;
  param_36._0_4_ = in_s17;
  param_36._4_4_ = in_s18;
  param_37._0_4_ = unaff_s15;
  do {
    param_29._0_4_ = (float)param_29 + ((float)param_38 + in_s25 + (in_s22 - param_1)) * param_15[1]
    ;
    param_28._4_4_ = param_28._4_4_ + (param_37._4_4_ + in_s24 + (in_s21 - param_3)) * *param_15;
    param_25._4_4_ =
         param_25._4_4_ + ((float)param_36 + in_s20 + (in_s28 * param_4 - param_6)) * *param_15;
    param_26._4_4_ =
         param_26._4_4_ + (param_36._4_4_ + in_s31 + (unaff_s9 - in_s27 * param_4)) * param_15[1];
    param_26._0_4_ =
         (float)param_26 + ((float)param_37 + in_s30 * param_4 + (unaff_s8 - in_s23)) * param_15[2];
    fVar11 = (param_34._4_4_ + in_s30 * param_8 + (in_s28 * param_7 - in_s29 * in_s16)) / *param_16;
    fVar13 = ((float)param_35 + in_s30 * in_s16 + (in_s29 * param_8 - in_s27 * param_7)) /
             param_16[1];
    fVar17 = (param_35._4_4_ + in_s30 * param_7 + (in_s27 * in_s16 - in_s28 * param_8)) /
             param_16[2];
    param_29._4_4_ = param_29._4_4_ + (param_38._4_4_ + in_s19 + (in_s26 - param_2)) * param_15[2];
    while( true ) {
      param_27._0_4_ = (float)param_27 + fVar17;
      param_27._4_4_ = param_27._4_4_ + fVar13;
      param_28._0_4_ = (float)param_28 + fVar11;
      in_w13 = in_w13 + 1;
      do {
        do {
          in_x15 = in_x15 + 1;
          unaff_w23 = unaff_w23 << 1;
          if (in_x15 == 4) {
            if (0 < in_w13) {
              fVar11 = (float)in_w13;
              lVar4 = (long)param_21;
              pfVar5 = (float *)(*param_20 + (long)param_21 * 0xc);
              *pfVar5 = (float)param_28 / fVar11;
              pfVar5[1] = param_27._4_4_ / fVar11;
              pfVar5[2] = (float)param_27 / fVar11;
              if ((in_w11 & 1) == 0) {
                if ((param_22 & 0x100000000) != 0) {
                  pfVar5 = (float *)(*param_19 + lVar4 * 0xc);
                  *pfVar5 = param_28._4_4_ / fVar11;
                  pfVar5[1] = (float)param_29 / fVar11;
                  pfVar5[2] = param_29._4_4_ / fVar11;
                }
              }
              else {
                pfVar5 = (float *)(*param_19 + lVar4 * 0xc);
                *pfVar5 = param_28._4_4_ / fVar11;
                pfVar5[1] = (float)param_29 / fVar11;
                pfVar5[2] = param_29._4_4_ / fVar11;
                pfVar5 = (float *)(*param_18 + lVar4 * 0x10);
                *pfVar5 = param_25._4_4_ / fVar11;
                pfVar5[1] = param_26._4_4_ / fVar11;
                pfVar5[2] = (float)param_26 / fVar11;
                pfVar5[3] = -1.0;
              }
            }
            return;
          }
        } while (((unaff_w27 >> (ulong)((uint)in_x15 & 0x1f)) >> 0x1c & 1) == 0);
        iVar7 = *(int *)(unaff_x24 + in_x15 * 4);
        iVar1 = *(int *)(unaff_x24 + in_x15 * 4);
      } while ((unaff_w23 & in_w16) == 0);
      uVar2 = *(uint *)(*param_10 + (long)(*(int *)(unaff_x24 + in_x15 * 4) + param_12) * 4);
      uVar3 = uVar2 >> 0x1c;
      uVar8 = (ulong)uVar3;
      uVar2 = uVar2 & 0xfffffff;
      if ((in_w11 & 1) != 0) break;
      if ((param_22 & 0x100000000) == 0) {
        if (uVar3 == 0) {
          fVar17 = 0.0;
          fVar13 = 0.0;
          fVar11 = 0.0;
        }
        else {
          iVar7 = iVar7 + uVar2;
          fVar11 = 0.0;
          fVar13 = 0.0;
          fVar17 = 0.0;
          do {
            pfVar9 = (float *)(*param_11 + (long)iVar7 * (long)unaff_w25);
            fVar15 = pfVar9[10];
            pfVar6 = (float *)(*param_23 + (long)((int)pfVar9[9] + iVar1) * (long)unaff_w26);
            pfVar5 = (float *)(*param_24 + (long)((int)pfVar9[9] + iVar1) * 0x10);
            fVar16 = *pfVar5;
            fVar18 = pfVar5[1];
            fVar19 = pfVar5[2];
            fVar20 = pfVar5[3];
            fVar10 = *pfVar9 * *param_15 * param_31._4_4_;
            fVar12 = pfVar9[1] * param_15[1] * param_31._4_4_;
            fVar14 = pfVar9[2] * param_15[2] * param_31._4_4_;
            fVar21 = fVar16 * fVar12 - fVar18 * fVar10;
            fVar22 = fVar18 * fVar14 - fVar19 * fVar12;
            fVar23 = fVar19 * fVar10 - fVar16 * fVar14;
            fVar22 = fVar22 + fVar22;
            fVar23 = fVar23 + fVar23;
            fVar21 = fVar21 + fVar21;
            uVar8 = uVar8 - 1;
            fVar11 = fVar11 + fVar15 * (*pfVar6 +
                                       fVar10 + fVar20 * fVar22 +
                                       (fVar18 * fVar21 - fVar19 * fVar23));
            fVar13 = fVar13 + fVar15 * (pfVar6[1] +
                                       fVar12 + fVar20 * fVar23 +
                                       (fVar19 * fVar22 - fVar16 * fVar21));
            fVar17 = fVar17 + fVar15 * (pfVar6[2] +
                                       fVar14 + fVar20 * fVar21 +
                                       (fVar16 * fVar23 - fVar18 * fVar22));
            iVar7 = iVar7 + 1;
          } while (uVar8 != 0);
        }
        fVar10 = *unaff_x19;
        fVar12 = unaff_x19[1];
        fVar14 = unaff_x19[2];
        fVar15 = unaff_x19[3];
        fVar11 = fVar11 - *param_14;
        fVar13 = fVar13 - param_14[1];
        fVar17 = fVar17 - param_14[2];
        fVar18 = fVar12 * fVar17 - fVar14 * fVar13;
        fVar19 = fVar14 * fVar11 - fVar10 * fVar17;
        fVar16 = fVar10 * fVar13 - fVar12 * fVar11;
        fVar18 = fVar18 + fVar18;
        fVar19 = fVar19 + fVar19;
        fVar16 = fVar16 + fVar16;
        fVar11 = (fVar11 + fVar15 * fVar18 + (fVar12 * fVar16 - fVar14 * fVar19)) / *param_16;
        fVar13 = (fVar13 + fVar15 * fVar19 + (fVar14 * fVar18 - fVar10 * fVar16)) / param_16[1];
        fVar17 = (fVar17 + fVar15 * fVar16 + (fVar10 * fVar19 - fVar12 * fVar18)) / param_16[2];
      }
      else {
        if (uVar3 == 0) {
          fVar10 = *param_15;
          param_38._4_4_ = param_15[1];
          param_38._0_4_ = param_15[2];
          fVar12 = 0.0;
          fVar14 = 0.0;
          fVar15 = 0.0;
          fVar17 = 0.0;
          fVar13 = 0.0;
          fVar11 = 0.0;
        }
        else {
          param_38._4_4_ = param_15[1];
          fVar10 = *param_15;
          param_38._0_4_ = param_15[2];
          iVar7 = iVar7 + uVar2;
          fVar11 = 0.0;
          fVar13 = 0.0;
          fVar17 = 0.0;
          fVar15 = 0.0;
          fVar14 = 0.0;
          fVar12 = 0.0;
          do {
            pfVar6 = (float *)(*param_11 + (long)iVar7 * (long)unaff_w25);
            pfVar5 = (float *)(*param_24 + (long)((int)pfVar6[9] + iVar1) * 0x10);
            fVar18 = *pfVar5;
            fVar20 = pfVar5[1];
            fVar22 = pfVar5[2];
            fVar28 = pfVar5[3];
            fVar23 = pfVar6[3] * fVar10;
            fVar24 = pfVar6[4] * param_38._4_4_;
            fVar26 = pfVar6[5] * (float)param_38;
            fVar16 = *pfVar6 * fVar10 * param_31._4_4_;
            fVar19 = pfVar6[1] * param_38._4_4_ * param_31._4_4_;
            fVar21 = pfVar6[2] * (float)param_38 * param_31._4_4_;
            fVar27 = fVar18 * fVar19 - fVar20 * fVar16;
            fVar29 = fVar20 * fVar21 - fVar22 * fVar19;
            fVar30 = fVar22 * fVar16 - fVar18 * fVar21;
            fVar31 = fVar18 * fVar24 - fVar20 * fVar23;
            fVar33 = fVar20 * fVar26 - fVar22 * fVar24;
            fVar25 = fVar22 * fVar23 - fVar18 * fVar26;
            fVar29 = fVar29 + fVar29;
            fVar30 = fVar30 + fVar30;
            fVar27 = fVar27 + fVar27;
            fVar33 = fVar33 + fVar33;
            fVar25 = fVar25 + fVar25;
            fVar31 = fVar31 + fVar31;
            fVar32 = pfVar6[10];
            pfVar5 = (float *)(*param_23 + (long)((int)pfVar6[9] + iVar1) * (long)unaff_w26);
            uVar8 = uVar8 - 1;
            fVar15 = fVar15 + fVar32 * (fVar23 + fVar28 * fVar33 +
                                       (fVar20 * fVar31 - fVar22 * fVar25));
            fVar14 = fVar14 + fVar32 * (fVar24 + fVar28 * fVar25 +
                                       (fVar22 * fVar33 - fVar18 * fVar31));
            fVar12 = fVar12 + fVar32 * (fVar26 + fVar28 * fVar31 +
                                       (fVar18 * fVar25 - fVar20 * fVar33));
            fVar11 = fVar11 + fVar32 * (*pfVar5 +
                                       fVar16 + fVar28 * fVar29 +
                                       (fVar20 * fVar27 - fVar22 * fVar30));
            fVar13 = fVar13 + fVar32 * (pfVar5[1] +
                                       fVar19 + fVar28 * fVar30 +
                                       (fVar22 * fVar29 - fVar18 * fVar27));
            fVar17 = fVar17 + fVar32 * (pfVar5[2] +
                                       fVar21 + fVar28 * fVar27 +
                                       (fVar18 * fVar30 - fVar20 * fVar29));
            iVar7 = iVar7 + 1;
          } while (uVar8 != 0);
        }
        fVar18 = *unaff_x19;
        fVar20 = unaff_x19[1];
        fVar26 = unaff_x19[2];
        fVar22 = unaff_x19[3];
        fVar11 = fVar11 - *param_14;
        fVar13 = fVar13 - param_14[1];
        fVar17 = fVar17 - param_14[2];
        fVar16 = fVar14 * fVar18 - fVar15 * fVar20;
        fVar19 = fVar12 * fVar20 - fVar14 * fVar26;
        fVar21 = fVar15 * fVar26 - fVar12 * fVar18;
        fVar23 = fVar18 * fVar13 - fVar20 * fVar11;
        fVar24 = fVar20 * fVar17 - fVar26 * fVar13;
        fVar25 = fVar26 * fVar11 - fVar18 * fVar17;
        fVar19 = fVar19 + fVar19;
        fVar21 = fVar21 + fVar21;
        fVar16 = fVar16 + fVar16;
        fVar24 = fVar24 + fVar24;
        fVar25 = fVar25 + fVar25;
        fVar23 = fVar23 + fVar23;
        fVar11 = (fVar11 + fVar22 * fVar24 + (fVar20 * fVar23 - fVar26 * fVar25)) / *param_16;
        fVar13 = (fVar13 + fVar22 * fVar25 + (fVar26 * fVar24 - fVar18 * fVar23)) / param_16[1];
        fVar17 = (fVar17 + fVar22 * fVar23 + (fVar18 * fVar25 - fVar20 * fVar24)) / param_16[2];
        param_28._4_4_ =
             param_28._4_4_ +
             fVar10 * (fVar15 + fVar22 * fVar19 + (fVar20 * fVar16 - fVar26 * fVar21));
        param_29._0_4_ =
             (float)param_29 +
             param_38._4_4_ * (fVar14 + fVar22 * fVar21 + (fVar26 * fVar19 - fVar18 * fVar16));
        param_29._4_4_ =
             param_29._4_4_ +
             (float)param_38 * (fVar12 + fVar22 * fVar16 + (fVar18 * fVar21 - fVar20 * fVar19));
      }
    }
    if (uVar3 == 0) {
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
    else {
      fVar17 = *param_15;
      fVar11 = param_15[1];
      iVar7 = iVar7 + uVar2;
      fVar13 = param_15[2];
      param_37._0_4_ = 0.0;
      param_36._4_4_ = 0.0;
      param_36._0_4_ = 0.0;
      param_34._4_4_ = 0.0;
      param_35._0_4_ = 0.0;
      param_35._4_4_ = 0.0;
      param_37._4_4_ = 0.0;
      param_38._0_4_ = 0.0;
      param_38._4_4_ = 0.0;
      do {
        pfVar6 = (float *)(*param_11 + (long)iVar7 * (long)unaff_w25);
        pfVar5 = (float *)(*param_24 + (long)((int)pfVar6[9] + iVar1) * 0x10);
        fVar34 = *pfVar5;
        fVar35 = pfVar5[1];
        fVar20 = pfVar5[2];
        fVar21 = pfVar5[3];
        fVar16 = pfVar6[3] * fVar17;
        fVar12 = pfVar6[6] * fVar17;
        fVar30 = pfVar6[5] * fVar13;
        fVar18 = pfVar6[8] * fVar13;
        fVar27 = pfVar6[4] * fVar11;
        fVar22 = *pfVar6 * fVar17 * param_31._4_4_;
        fVar23 = pfVar6[1] * fVar11 * param_31._4_4_;
        fVar24 = pfVar6[2] * fVar13 * param_31._4_4_;
        fVar14 = pfVar6[7] * fVar11;
        fVar25 = fVar35 * fVar24 - fVar20 * fVar23;
        fVar26 = fVar20 * fVar22 - fVar34 * fVar24;
        fVar25 = fVar25 + fVar25;
        fVar26 = fVar26 + fVar26;
        fVar19 = fVar34 * fVar23 - fVar35 * fVar22;
        fVar33 = fVar34 * fVar27 - fVar35 * fVar16;
        fVar10 = fVar35 * fVar30 - fVar20 * fVar27;
        fVar28 = fVar20 * fVar16 - fVar34 * fVar30;
        fVar29 = fVar34 * fVar14 - fVar35 * fVar12;
        fVar31 = fVar35 * fVar18 - fVar20 * fVar14;
        fVar32 = fVar20 * fVar12 - fVar34 * fVar18;
        fVar19 = fVar19 + fVar19;
        fVar10 = fVar10 + fVar10;
        fVar28 = fVar28 + fVar28;
        fVar33 = fVar33 + fVar33;
        fVar31 = fVar31 + fVar31;
        fVar32 = fVar32 + fVar32;
        fVar29 = fVar29 + fVar29;
        pfVar5 = (float *)(*param_23 + (long)((int)pfVar6[9] + iVar1) * (long)unaff_w26);
        fVar15 = pfVar6[10];
        uVar8 = uVar8 - 1;
        iVar7 = iVar7 + 1;
        param_37._4_4_ =
             param_37._4_4_ +
             fVar15 * (fVar16 + fVar21 * fVar10 + (fVar35 * fVar33 - fVar20 * fVar28));
        param_38._0_4_ =
             (float)param_38 +
             fVar15 * (fVar27 + fVar21 * fVar28 + (fVar20 * fVar10 - fVar34 * fVar33));
        param_38._4_4_ =
             param_38._4_4_ +
             fVar15 * (fVar30 + fVar21 * fVar33 + (fVar34 * fVar28 - fVar35 * fVar10));
        param_36._0_4_ =
             (float)param_36 +
             fVar15 * (fVar12 + fVar21 * fVar31 + (fVar35 * fVar29 - fVar20 * fVar32));
        param_36._4_4_ =
             param_36._4_4_ +
             fVar15 * (fVar14 + fVar21 * fVar32 + (fVar20 * fVar31 - fVar34 * fVar29));
        param_37._0_4_ =
             (float)param_37 +
             fVar15 * (fVar18 + fVar21 * fVar29 + (fVar34 * fVar32 - fVar35 * fVar31));
        param_34._4_4_ =
             param_34._4_4_ +
             fVar15 * (*pfVar5 + fVar22 + fVar21 * fVar25 + (fVar35 * fVar19 - fVar20 * fVar26));
        param_35._0_4_ =
             (float)param_35 +
             fVar15 * (pfVar5[1] + fVar23 + fVar21 * fVar26 + (fVar20 * fVar25 - fVar34 * fVar19));
        param_35._4_4_ =
             param_35._4_4_ +
             fVar15 * (pfVar5[2] + fVar24 + fVar21 * fVar19 + (fVar34 * fVar26 - fVar35 * fVar25));
      } while (uVar8 != 0);
    }
    in_s27 = *unaff_x19;
    in_s28 = unaff_x19[1];
    in_s29 = unaff_x19[2];
    in_s30 = unaff_x19[3];
    param_34._4_4_ = param_34._4_4_ - *param_14;
    param_35._0_4_ = (float)param_35 - param_14[1];
    param_35._4_4_ = param_35._4_4_ - param_14[2];
    param_2 = param_38._4_4_ * in_s28 - (float)param_38 * in_s29;
    fVar11 = (float)param_37 * in_s28 - param_36._4_4_ * in_s29;
    fVar11 = fVar11 + fVar11;
    param_1 = (float)param_38 * in_s27 - param_37._4_4_ * in_s28;
    param_4 = param_36._4_4_ * in_s27 - (float)param_36 * in_s28;
    param_7 = in_s27 * (float)param_35 - in_s28 * param_34._4_4_;
    in_s20 = in_s30 * fVar11;
    unaff_s9 = in_s29 * fVar11;
    in_s23 = in_s28 * fVar11;
    param_3 = param_37._4_4_ * in_s29 - param_38._4_4_ * in_s27;
    param_6 = (float)param_36 * in_s29 - (float)param_37 * in_s27;
    param_8 = in_s28 * param_35._4_4_ - in_s29 * (float)param_35;
    fVar11 = in_s29 * param_34._4_4_ - in_s27 * param_35._4_4_;
    param_2 = param_2 + param_2;
    param_3 = param_3 + param_3;
    param_1 = param_1 + param_1;
    param_6 = param_6 + param_6;
    param_4 = param_4 + param_4;
    param_8 = param_8 + param_8;
    in_s16 = fVar11 + fVar11;
    param_7 = param_7 + param_7;
    in_s24 = in_s30 * param_2;
    in_s25 = in_s30 * param_3;
    in_s19 = in_s30 * param_1;
    in_s26 = in_s27 * param_3;
    in_s21 = in_s28 * param_1;
    in_s22 = in_s29 * param_2;
    param_2 = in_s28 * param_2;
    param_3 = in_s29 * param_3;
    param_1 = in_s27 * param_1;
    in_s31 = in_s30 * param_6;
    unaff_s8 = in_s27 * param_6;
    param_6 = in_s29 * param_6;
  } while( true );
}


