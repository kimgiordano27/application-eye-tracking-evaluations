/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$get_Copies
ENTRY_POINT: 0637c05c
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


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__get_Copies
               (long param_1,undefined8 param_2,long *param_3,long *param_4,int param_5,
               undefined8 param_6,float *param_7,float *param_8,float *param_9,undefined8 param_10,
               long *param_11,long *param_12,long *param_13,int param_14,ulong param_15,
               long *param_16,long *param_17,undefined8 param_18,undefined8 param_19,
               undefined8 param_20,undefined8 param_21,undefined8 param_22,undefined8 param_23,
               undefined8 param_24,undefined8 param_25,undefined8 param_26,undefined8 param_27,
               float param_28,undefined8 param_29,float param_30)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long in_x9;
  float *pfVar4;
  uint in_w11;
  float *pfVar5;
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
  float fStack0000000000000094;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  
  do {
    fStack0000000000000094 = 0.0;
    fStack00000000000000a4 = 0.0;
    fStack00000000000000a8 = 0.0;
    fStack00000000000000ac = 0.0;
    do {
      pfVar5 = (float *)(unaff_x30 + (long)in_w14 * (long)unaff_w25);
      pfVar4 = (float *)(in_x9 + (long)((int)pfVar5[9] + unaff_w28) * 0x10);
      fVar29 = *pfVar4;
      fVar30 = pfVar4[1];
      fVar15 = pfVar4[2];
      fVar16 = pfVar4[3];
      fVar12 = pfVar5[3] * (float)param_24;
      fVar9 = pfVar5[6] * (float)param_24;
      fVar25 = pfVar5[5] * (float)param_23;
      fVar13 = pfVar5[8] * (float)param_23;
      fVar22 = pfVar5[4] * param_23._4_4_;
      fVar17 = *pfVar5 * (float)param_24 * param_24._4_4_;
      fVar18 = pfVar5[1] * param_23._4_4_ * param_24._4_4_;
      fVar19 = pfVar5[2] * (float)param_23 * param_24._4_4_;
      fVar10 = pfVar5[7] * param_23._4_4_;
      fVar20 = fVar30 * fVar19 - fVar15 * fVar18;
      fVar21 = fVar15 * fVar17 - fVar29 * fVar19;
      fVar20 = fVar20 + fVar20;
      fVar21 = fVar21 + fVar21;
      fVar14 = fVar29 * fVar18 - fVar30 * fVar17;
      fVar28 = fVar29 * fVar22 - fVar30 * fVar12;
      fVar8 = fVar30 * fVar25 - fVar15 * fVar22;
      fVar23 = fVar15 * fVar12 - fVar29 * fVar25;
      fVar24 = fVar29 * fVar10 - fVar30 * fVar9;
      fVar26 = fVar30 * fVar13 - fVar15 * fVar10;
      fVar27 = fVar15 * fVar9 - fVar29 * fVar13;
      fVar14 = fVar14 + fVar14;
      fVar8 = fVar8 + fVar8;
      fVar23 = fVar23 + fVar23;
      fVar28 = fVar28 + fVar28;
      fVar26 = fVar26 + fVar26;
      fVar27 = fVar27 + fVar27;
      fVar24 = fVar24 + fVar24;
      pfVar4 = (float *)(param_1 + (long)((int)pfVar5[9] + unaff_w28) * (long)unaff_w26);
      fVar11 = pfVar5[10];
      unaff_x29 = unaff_x29 - 1;
      in_w14 = in_w14 + 1;
      fStack00000000000000a4 =
           fStack00000000000000a4 +
           fVar11 * (fVar12 + fVar16 * fVar8 + (fVar30 * fVar28 - fVar15 * fVar23));
      fStack00000000000000a8 =
           fStack00000000000000a8 +
           fVar11 * (fVar22 + fVar16 * fVar23 + (fVar15 * fVar8 - fVar29 * fVar28));
      fStack00000000000000ac =
           fStack00000000000000ac +
           fVar11 * (fVar25 + fVar16 * fVar28 + (fVar29 * fVar23 - fVar30 * fVar8));
      param_29._0_4_ =
           (float)param_29 +
           fVar11 * (fVar9 + fVar16 * fVar26 + (fVar30 * fVar24 - fVar15 * fVar27));
      param_29._4_4_ =
           param_29._4_4_ +
           fVar11 * (fVar10 + fVar16 * fVar27 + (fVar15 * fVar26 - fVar29 * fVar24));
      param_30 = param_30 +
                 fVar11 * (fVar13 + fVar16 * fVar24 + (fVar29 * fVar27 - fVar30 * fVar26));
      param_27._4_4_ =
           param_27._4_4_ +
           fVar11 * (*pfVar4 + fVar17 + fVar16 * fVar20 + (fVar30 * fVar14 - fVar15 * fVar21));
      param_28 = param_28 +
                 fVar11 * (pfVar4[1] +
                          fVar18 + fVar16 * fVar21 + (fVar15 * fVar20 - fVar29 * fVar14));
      fStack0000000000000094 =
           fStack0000000000000094 +
           fVar11 * (pfVar4[2] + fVar19 + fVar16 * fVar14 + (fVar29 * fVar21 - fVar30 * fVar20));
    } while (unaff_x29 != 0);
    while( true ) {
      fVar17 = *unaff_x19;
      fVar18 = unaff_x19[1];
      fVar19 = unaff_x19[2];
      fVar20 = unaff_x19[3];
      param_27._4_4_ = param_27._4_4_ - *param_7;
      param_28 = param_28 - param_7[1];
      fStack0000000000000094 = fStack0000000000000094 - param_7[2];
      fVar9 = fStack00000000000000ac * fVar18 - fStack00000000000000a8 * fVar19;
      fVar12 = param_30 * fVar18 - param_29._4_4_ * fVar19;
      fVar12 = fVar12 + fVar12;
      fVar8 = fStack00000000000000a8 * fVar17 - fStack00000000000000a4 * fVar18;
      fVar10 = param_29._4_4_ * fVar17 - (float)param_29 * fVar18;
      fVar14 = fVar17 * param_28 - fVar18 * param_27._4_4_;
      fVar11 = fStack00000000000000a4 * fVar19 - fStack00000000000000ac * fVar17;
      fVar13 = (float)param_29 * fVar19 - param_30 * fVar17;
      fVar15 = fVar18 * fStack0000000000000094 - fVar19 * param_28;
      fVar16 = fVar19 * param_27._4_4_ - fVar17 * fStack0000000000000094;
      fVar9 = fVar9 + fVar9;
      fVar11 = fVar11 + fVar11;
      fVar8 = fVar8 + fVar8;
      fVar13 = fVar13 + fVar13;
      fVar10 = fVar10 + fVar10;
      fVar15 = fVar15 + fVar15;
      fVar16 = fVar16 + fVar16;
      fVar14 = fVar14 + fVar14;
      param_22._0_4_ =
           (float)param_22 +
           (fStack00000000000000a8 + fVar20 * fVar11 + (fVar19 * fVar9 - fVar17 * fVar8)) *
           param_8[1];
      param_21._4_4_ =
           param_21._4_4_ +
           (fStack00000000000000a4 + fVar20 * fVar9 + (fVar18 * fVar8 - fVar19 * fVar11)) * *param_8
      ;
      param_18._4_4_ =
           param_18._4_4_ +
           ((float)param_29 + fVar20 * fVar12 + (fVar18 * fVar10 - fVar19 * fVar13)) * *param_8;
      param_19._4_4_ =
           param_19._4_4_ +
           (param_29._4_4_ + fVar20 * fVar13 + (fVar19 * fVar12 - fVar17 * fVar10)) * param_8[1];
      param_19._0_4_ =
           (float)param_19 +
           (param_30 + fVar20 * fVar10 + (fVar17 * fVar13 - fVar18 * fVar12)) * param_8[2];
      fVar10 = (param_27._4_4_ + fVar20 * fVar15 + (fVar18 * fVar14 - fVar19 * fVar16)) / *param_9;
      fVar12 = (param_28 + fVar20 * fVar16 + (fVar19 * fVar15 - fVar17 * fVar14)) / param_9[1];
      fVar13 = (fStack0000000000000094 + fVar20 * fVar14 + (fVar17 * fVar16 - fVar18 * fVar15)) /
               param_9[2];
      param_22._4_4_ =
           param_22._4_4_ +
           (fStack00000000000000ac + fVar20 * fVar8 + (fVar17 * fVar11 - fVar18 * fVar9)) *
           param_8[2];
      while( true ) {
        param_20._0_4_ = (float)param_20 + fVar13;
        param_20._4_4_ = param_20._4_4_ + fVar12;
        param_21._0_4_ = (float)param_21 + fVar10;
        in_w13 = in_w13 + 1;
        do {
          do {
            in_x15 = in_x15 + 1;
            unaff_w23 = unaff_w23 << 1;
            if (in_x15 == 4) {
              if (0 < in_w13) {
                fVar8 = (float)in_w13;
                lVar3 = (long)param_14;
                pfVar4 = (float *)(*param_13 + (long)param_14 * 0xc);
                *pfVar4 = (float)param_21 / fVar8;
                pfVar4[1] = param_20._4_4_ / fVar8;
                pfVar4[2] = (float)param_20 / fVar8;
                if ((in_w11 & 1) == 0) {
                  if ((param_15 & 0x100000000) != 0) {
                    pfVar4 = (float *)(*param_12 + lVar3 * 0xc);
                    *pfVar4 = param_21._4_4_ / fVar8;
                    pfVar4[1] = (float)param_22 / fVar8;
                    pfVar4[2] = param_22._4_4_ / fVar8;
                  }
                }
                else {
                  pfVar4 = (float *)(*param_12 + lVar3 * 0xc);
                  *pfVar4 = param_21._4_4_ / fVar8;
                  pfVar4[1] = (float)param_22 / fVar8;
                  pfVar4[2] = param_22._4_4_ / fVar8;
                  pfVar4 = (float *)(*param_11 + lVar3 * 0x10);
                  *pfVar4 = param_18._4_4_ / fVar8;
                  pfVar4[1] = param_19._4_4_ / fVar8;
                  pfVar4[2] = (float)param_19 / fVar8;
                  pfVar4[3] = -1.0;
                }
              }
              return;
            }
          } while (((unaff_w27 >> (ulong)((uint)in_x15 & 0x1f)) >> 0x1c & 1) == 0);
          iVar6 = *(int *)(unaff_x24 + in_x15 * 4);
          unaff_w28 = *(int *)(unaff_x24 + in_x15 * 4);
        } while ((unaff_w23 & in_w16) == 0);
        uVar1 = *(uint *)(*param_3 + (long)(*(int *)(unaff_x24 + in_x15 * 4) + param_5) * 4);
        uVar2 = uVar1 >> 0x1c;
        unaff_x29 = (ulong)uVar2;
        uVar1 = uVar1 & 0xfffffff;
        if ((in_w11 & 1) != 0) break;
        if ((param_15 & 0x100000000) == 0) {
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
              pfVar7 = (float *)(*param_4 + (long)iVar6 * (long)unaff_w25);
              fVar14 = pfVar7[10];
              pfVar5 = (float *)(*param_16 + (long)((int)pfVar7[9] + unaff_w28) * (long)unaff_w26);
              pfVar4 = (float *)(*param_17 + (long)((int)pfVar7[9] + unaff_w28) * 0x10);
              fVar15 = *pfVar4;
              fVar16 = pfVar4[1];
              fVar17 = pfVar4[2];
              fVar18 = pfVar4[3];
              fVar10 = *pfVar7 * *param_8 * param_24._4_4_;
              fVar12 = pfVar7[1] * param_8[1] * param_24._4_4_;
              fVar13 = pfVar7[2] * param_8[2] * param_24._4_4_;
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
          fVar8 = fVar8 - *param_7;
          fVar9 = fVar9 - param_7[1];
          fVar11 = fVar11 - param_7[2];
          fVar17 = fVar14 * fVar11 - fVar12 * fVar9;
          fVar18 = fVar12 * fVar8 - fVar13 * fVar11;
          fVar16 = fVar13 * fVar9 - fVar14 * fVar8;
          fVar17 = fVar17 + fVar17;
          fVar18 = fVar18 + fVar18;
          fVar16 = fVar16 + fVar16;
          fVar10 = (fVar8 + fVar15 * fVar17 + (fVar14 * fVar16 - fVar12 * fVar18)) / *param_9;
          fVar12 = (fVar9 + fVar15 * fVar18 + (fVar12 * fVar17 - fVar13 * fVar16)) / param_9[1];
          fVar13 = (fVar11 + fVar15 * fVar16 + (fVar13 * fVar18 - fVar14 * fVar17)) / param_9[2];
        }
        else {
          if (uVar2 == 0) {
            fVar8 = *param_8;
            fStack00000000000000ac = param_8[1];
            fStack00000000000000a8 = param_8[2];
            fVar11 = 0.0;
            fVar14 = 0.0;
            fVar15 = 0.0;
            fVar13 = 0.0;
            fVar12 = 0.0;
            fVar9 = 0.0;
          }
          else {
            fStack00000000000000ac = param_8[1];
            fVar8 = *param_8;
            fStack00000000000000a8 = param_8[2];
            iVar6 = iVar6 + uVar1;
            fVar9 = 0.0;
            fVar12 = 0.0;
            fVar13 = 0.0;
            fVar15 = 0.0;
            fVar14 = 0.0;
            fVar11 = 0.0;
            do {
              pfVar5 = (float *)(*param_4 + (long)iVar6 * (long)unaff_w25);
              pfVar4 = (float *)(*param_17 + (long)((int)pfVar5[9] + unaff_w28) * 0x10);
              fVar16 = *pfVar4;
              fVar18 = pfVar4[1];
              fVar20 = pfVar4[2];
              fVar26 = pfVar4[3];
              fVar21 = pfVar5[3] * fVar8;
              fVar22 = pfVar5[4] * fStack00000000000000ac;
              fVar24 = pfVar5[5] * fStack00000000000000a8;
              fVar10 = *pfVar5 * fVar8 * param_24._4_4_;
              fVar17 = pfVar5[1] * fStack00000000000000ac * param_24._4_4_;
              fVar19 = pfVar5[2] * fStack00000000000000a8 * param_24._4_4_;
              fVar25 = fVar16 * fVar17 - fVar18 * fVar10;
              fVar27 = fVar18 * fVar19 - fVar20 * fVar17;
              fVar28 = fVar20 * fVar10 - fVar16 * fVar19;
              fVar29 = fVar16 * fVar22 - fVar18 * fVar21;
              fVar31 = fVar18 * fVar24 - fVar20 * fVar22;
              fVar23 = fVar20 * fVar21 - fVar16 * fVar24;
              fVar27 = fVar27 + fVar27;
              fVar28 = fVar28 + fVar28;
              fVar25 = fVar25 + fVar25;
              fVar31 = fVar31 + fVar31;
              fVar23 = fVar23 + fVar23;
              fVar29 = fVar29 + fVar29;
              fVar30 = pfVar5[10];
              pfVar4 = (float *)(*param_16 + (long)((int)pfVar5[9] + unaff_w28) * (long)unaff_w26);
              unaff_x29 = unaff_x29 - 1;
              fVar15 = fVar15 + fVar30 * (fVar21 + fVar26 * fVar31 +
                                         (fVar18 * fVar29 - fVar20 * fVar23));
              fVar14 = fVar14 + fVar30 * (fVar22 + fVar26 * fVar23 +
                                         (fVar20 * fVar31 - fVar16 * fVar29));
              fVar11 = fVar11 + fVar30 * (fVar24 + fVar26 * fVar29 +
                                         (fVar16 * fVar23 - fVar18 * fVar31));
              fVar9 = fVar9 + fVar30 * (*pfVar4 +
                                       fVar10 + fVar26 * fVar27 +
                                       (fVar18 * fVar25 - fVar20 * fVar28));
              fVar12 = fVar12 + fVar30 * (pfVar4[1] +
                                         fVar17 + fVar26 * fVar28 +
                                         (fVar20 * fVar27 - fVar16 * fVar25));
              fVar13 = fVar13 + fVar30 * (pfVar4[2] +
                                         fVar19 + fVar26 * fVar25 +
                                         (fVar16 * fVar28 - fVar18 * fVar27));
              iVar6 = iVar6 + 1;
            } while (unaff_x29 != 0);
          }
          fVar17 = *unaff_x19;
          fVar19 = unaff_x19[1];
          fVar25 = unaff_x19[2];
          fVar21 = unaff_x19[3];
          fVar9 = fVar9 - *param_7;
          fVar12 = fVar12 - param_7[1];
          fVar13 = fVar13 - param_7[2];
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
          fVar10 = (fVar9 + fVar21 * fVar23 + (fVar19 * fVar22 - fVar25 * fVar24)) / *param_9;
          fVar12 = (fVar12 + fVar21 * fVar24 + (fVar25 * fVar23 - fVar17 * fVar22)) / param_9[1];
          fVar13 = (fVar13 + fVar21 * fVar22 + (fVar17 * fVar24 - fVar19 * fVar23)) / param_9[2];
          param_21._4_4_ =
               param_21._4_4_ +
               fVar8 * (fVar15 + fVar21 * fVar18 + (fVar19 * fVar16 - fVar25 * fVar20));
          param_22._0_4_ =
               (float)param_22 +
               fStack00000000000000ac *
               (fVar14 + fVar21 * fVar20 + (fVar25 * fVar18 - fVar17 * fVar16));
          param_22._4_4_ =
               param_22._4_4_ +
               fStack00000000000000a8 *
               (fVar11 + fVar21 * fVar16 + (fVar17 * fVar20 - fVar19 * fVar18));
        }
      }
      if (uVar2 != 0) break;
      fStack00000000000000ac = 0.0;
      fStack00000000000000a8 = 0.0;
      fStack00000000000000a4 = 0.0;
      fStack0000000000000094 = 0.0;
      param_28 = 0.0;
      param_27._4_4_ = 0.0;
      param_29._0_4_ = 0.0;
      param_29._4_4_ = 0.0;
      param_30 = 0.0;
    }
    param_24._0_4_ = *param_8;
    param_23._4_4_ = param_8[1];
    unaff_x30 = *param_4;
    in_w14 = iVar6 + uVar1;
    param_23._0_4_ = param_8[2];
    param_1 = *param_16;
    in_x9 = *param_17;
    param_30 = 0.0;
    param_29._4_4_ = 0.0;
    param_29._0_4_ = 0.0;
    param_27._4_4_ = 0.0;
    param_28 = 0.0;
  } while( true );
}


