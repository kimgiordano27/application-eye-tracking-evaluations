/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetColors
ENTRY_POINT: 0637c66c
PROGRAM: Waifu-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetColors
               (float param_1,undefined8 param_2,long *param_3,long *param_4,int param_5,
               undefined8 param_6,float *param_7,float *param_8,float *param_9,undefined8 param_10,
               long *param_11,long *param_12,long *param_13,int param_14,ulong param_15,
               long *param_16,long *param_17,undefined8 param_18,undefined8 param_19,
               undefined8 param_20,undefined8 param_21,undefined8 param_22,undefined8 param_23,
               undefined8 param_24)

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
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
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
    fStack0000000000000090 = 0.0;
    fStack000000000000008c = 0.0;
    fStack0000000000000098 = 0.0;
    fStack000000000000009c = 0.0;
    fStack00000000000000a0 = 0.0;
    fStack0000000000000094 = param_1;
    while( true ) {
      fVar30 = *unaff_x19;
      fVar31 = unaff_x19[1];
      fVar32 = unaff_x19[2];
      fVar34 = unaff_x19[3];
      fStack000000000000008c = fStack000000000000008c - *param_7;
      fStack0000000000000090 = fStack0000000000000090 - param_7[1];
      fStack0000000000000094 = fStack0000000000000094 - param_7[2];
      fVar11 = fStack00000000000000ac * fVar31 - fStack00000000000000a8 * fVar32;
      fVar14 = fStack00000000000000a0 * fVar31 - fStack000000000000009c * fVar32;
      fVar14 = fVar14 + fVar14;
      fVar10 = fStack00000000000000a8 * fVar30 - fStack00000000000000a4 * fVar31;
      fVar13 = fStack000000000000009c * fVar30 - fStack0000000000000098 * fVar31;
      fVar16 = fVar30 * fStack0000000000000090 - fVar31 * fStack000000000000008c;
      fVar12 = fStack00000000000000a4 * fVar32 - fStack00000000000000ac * fVar30;
      fVar15 = fStack0000000000000098 * fVar32 - fStack00000000000000a0 * fVar30;
      fVar17 = fVar31 * fStack0000000000000094 - fVar32 * fStack0000000000000090;
      fVar21 = fVar32 * fStack000000000000008c - fVar30 * fStack0000000000000094;
      fVar11 = fVar11 + fVar11;
      fVar12 = fVar12 + fVar12;
      fVar10 = fVar10 + fVar10;
      fVar15 = fVar15 + fVar15;
      fVar13 = fVar13 + fVar13;
      fVar17 = fVar17 + fVar17;
      fVar21 = fVar21 + fVar21;
      fVar16 = fVar16 + fVar16;
      param_22._0_4_ =
           (float)param_22 +
           (fStack00000000000000a8 + fVar34 * fVar12 + (fVar32 * fVar11 - fVar30 * fVar10)) *
           param_8[1];
      param_21._4_4_ =
           param_21._4_4_ +
           (fStack00000000000000a4 + fVar34 * fVar11 + (fVar31 * fVar10 - fVar32 * fVar12)) *
           *param_8;
      param_18._4_4_ =
           param_18._4_4_ +
           (fStack0000000000000098 + fVar34 * fVar14 + (fVar31 * fVar13 - fVar32 * fVar15)) *
           *param_8;
      param_19._4_4_ =
           param_19._4_4_ +
           (fStack000000000000009c + fVar34 * fVar15 + (fVar32 * fVar14 - fVar30 * fVar13)) *
           param_8[1];
      param_19._0_4_ =
           (float)param_19 +
           (fStack00000000000000a0 + fVar34 * fVar13 + (fVar30 * fVar15 - fVar31 * fVar14)) *
           param_8[2];
      fVar13 = (fStack000000000000008c + fVar34 * fVar17 + (fVar31 * fVar16 - fVar32 * fVar21)) /
               *param_9;
      fVar14 = (fStack0000000000000090 + fVar34 * fVar21 + (fVar32 * fVar17 - fVar30 * fVar16)) /
               param_9[1];
      fVar15 = (fStack0000000000000094 + fVar34 * fVar16 + (fVar30 * fVar21 - fVar31 * fVar17)) /
               param_9[2];
      param_22._4_4_ =
           param_22._4_4_ +
           (fStack00000000000000ac + fVar34 * fVar10 + (fVar30 * fVar12 - fVar31 * fVar11)) *
           param_8[2];
      while( true ) {
        param_20._0_4_ = (float)param_20 + fVar15;
        param_20._4_4_ = param_20._4_4_ + fVar14;
        param_21._0_4_ = (float)param_21 + fVar13;
        in_w13 = in_w13 + 1;
        do {
          do {
            in_x15 = in_x15 + 1;
            unaff_w23 = unaff_w23 << 1;
            if (in_x15 == 4) {
              if (0 < in_w13) {
                fVar10 = (float)in_w13;
                lVar4 = (long)param_14;
                pfVar5 = (float *)(*param_13 + (long)param_14 * 0xc);
                *pfVar5 = (float)param_21 / fVar10;
                pfVar5[1] = param_20._4_4_ / fVar10;
                pfVar5[2] = (float)param_20 / fVar10;
                if ((in_w11 & 1) == 0) {
                  if ((param_15 & 0x100000000) != 0) {
                    pfVar5 = (float *)(*param_12 + lVar4 * 0xc);
                    *pfVar5 = param_21._4_4_ / fVar10;
                    pfVar5[1] = (float)param_22 / fVar10;
                    pfVar5[2] = param_22._4_4_ / fVar10;
                  }
                }
                else {
                  pfVar5 = (float *)(*param_12 + lVar4 * 0xc);
                  *pfVar5 = param_21._4_4_ / fVar10;
                  pfVar5[1] = (float)param_22 / fVar10;
                  pfVar5[2] = param_22._4_4_ / fVar10;
                  pfVar5 = (float *)(*param_11 + lVar4 * 0x10);
                  *pfVar5 = param_18._4_4_ / fVar10;
                  pfVar5[1] = param_19._4_4_ / fVar10;
                  pfVar5[2] = (float)param_19 / fVar10;
                  pfVar5[3] = -1.0;
                }
              }
              return;
            }
          } while (((unaff_w27 >> (ulong)((uint)in_x15 & 0x1f)) >> 0x1c & 1) == 0);
          iVar7 = *(int *)(unaff_x24 + in_x15 * 4);
          iVar1 = *(int *)(unaff_x24 + in_x15 * 4);
        } while ((unaff_w23 & in_w16) == 0);
        uVar2 = *(uint *)(*param_3 + (long)(*(int *)(unaff_x24 + in_x15 * 4) + param_5) * 4);
        uVar3 = uVar2 >> 0x1c;
        uVar8 = (ulong)uVar3;
        uVar2 = uVar2 & 0xfffffff;
        if ((in_w11 & 1) != 0) break;
        if ((param_15 & 0x100000000) == 0) {
          if (uVar3 == 0) {
            fVar12 = 0.0;
            fVar11 = 0.0;
            fVar10 = 0.0;
          }
          else {
            iVar7 = iVar7 + uVar2;
            fVar10 = 0.0;
            fVar11 = 0.0;
            fVar12 = 0.0;
            do {
              pfVar9 = (float *)(*param_4 + (long)iVar7 * (long)unaff_w25);
              fVar16 = pfVar9[10];
              pfVar6 = (float *)(*param_16 + (long)((int)pfVar9[9] + iVar1) * (long)unaff_w26);
              pfVar5 = (float *)(*param_17 + (long)((int)pfVar9[9] + iVar1) * 0x10);
              fVar17 = *pfVar5;
              fVar21 = pfVar5[1];
              fVar30 = pfVar5[2];
              fVar31 = pfVar5[3];
              fVar13 = *pfVar9 * *param_8 * param_24._4_4_;
              fVar14 = pfVar9[1] * param_8[1] * param_24._4_4_;
              fVar15 = pfVar9[2] * param_8[2] * param_24._4_4_;
              fVar32 = fVar17 * fVar14 - fVar21 * fVar13;
              fVar34 = fVar21 * fVar15 - fVar30 * fVar14;
              fVar18 = fVar30 * fVar13 - fVar17 * fVar15;
              fVar34 = fVar34 + fVar34;
              fVar18 = fVar18 + fVar18;
              fVar32 = fVar32 + fVar32;
              uVar8 = uVar8 - 1;
              fVar10 = fVar10 + fVar16 * (*pfVar6 +
                                         fVar13 + fVar31 * fVar34 +
                                         (fVar21 * fVar32 - fVar30 * fVar18));
              fVar11 = fVar11 + fVar16 * (pfVar6[1] +
                                         fVar14 + fVar31 * fVar18 +
                                         (fVar30 * fVar34 - fVar17 * fVar32));
              fVar12 = fVar12 + fVar16 * (pfVar6[2] +
                                         fVar15 + fVar31 * fVar32 +
                                         (fVar17 * fVar18 - fVar21 * fVar34));
              iVar7 = iVar7 + 1;
            } while (uVar8 != 0);
          }
          fVar15 = *unaff_x19;
          fVar16 = unaff_x19[1];
          fVar14 = unaff_x19[2];
          fVar17 = unaff_x19[3];
          fVar10 = fVar10 - *param_7;
          fVar11 = fVar11 - param_7[1];
          fVar12 = fVar12 - param_7[2];
          fVar30 = fVar16 * fVar12 - fVar14 * fVar11;
          fVar31 = fVar14 * fVar10 - fVar15 * fVar12;
          fVar21 = fVar15 * fVar11 - fVar16 * fVar10;
          fVar30 = fVar30 + fVar30;
          fVar31 = fVar31 + fVar31;
          fVar21 = fVar21 + fVar21;
          fVar13 = (fVar10 + fVar17 * fVar30 + (fVar16 * fVar21 - fVar14 * fVar31)) / *param_9;
          fVar14 = (fVar11 + fVar17 * fVar31 + (fVar14 * fVar30 - fVar15 * fVar21)) / param_9[1];
          fVar15 = (fVar12 + fVar17 * fVar21 + (fVar15 * fVar31 - fVar16 * fVar30)) / param_9[2];
        }
        else {
          if (uVar3 == 0) {
            fVar10 = *param_8;
            fStack00000000000000ac = param_8[1];
            fStack00000000000000a8 = param_8[2];
            fVar12 = 0.0;
            fVar16 = 0.0;
            fVar17 = 0.0;
            fVar15 = 0.0;
            fVar14 = 0.0;
            fVar11 = 0.0;
          }
          else {
            fStack00000000000000ac = param_8[1];
            fVar10 = *param_8;
            fStack00000000000000a8 = param_8[2];
            iVar7 = iVar7 + uVar2;
            fVar11 = 0.0;
            fVar14 = 0.0;
            fVar15 = 0.0;
            fVar17 = 0.0;
            fVar16 = 0.0;
            fVar12 = 0.0;
            do {
              pfVar6 = (float *)(*param_4 + (long)iVar7 * (long)unaff_w25);
              pfVar5 = (float *)(*param_17 + (long)((int)pfVar6[9] + iVar1) * 0x10);
              fVar21 = *pfVar5;
              fVar31 = pfVar5[1];
              fVar34 = pfVar5[2];
              fVar24 = pfVar5[3];
              fVar18 = pfVar6[3] * fVar10;
              fVar19 = pfVar6[4] * fStack00000000000000ac;
              fVar22 = pfVar6[5] * fStack00000000000000a8;
              fVar13 = *pfVar6 * fVar10 * param_24._4_4_;
              fVar30 = pfVar6[1] * fStack00000000000000ac * param_24._4_4_;
              fVar32 = pfVar6[2] * fStack00000000000000a8 * param_24._4_4_;
              fVar23 = fVar21 * fVar30 - fVar31 * fVar13;
              fVar25 = fVar31 * fVar32 - fVar34 * fVar30;
              fVar26 = fVar34 * fVar13 - fVar21 * fVar32;
              fVar27 = fVar21 * fVar19 - fVar31 * fVar18;
              fVar29 = fVar31 * fVar22 - fVar34 * fVar19;
              fVar20 = fVar34 * fVar18 - fVar21 * fVar22;
              fVar25 = fVar25 + fVar25;
              fVar26 = fVar26 + fVar26;
              fVar23 = fVar23 + fVar23;
              fVar29 = fVar29 + fVar29;
              fVar20 = fVar20 + fVar20;
              fVar27 = fVar27 + fVar27;
              fVar28 = pfVar6[10];
              pfVar5 = (float *)(*param_16 + (long)((int)pfVar6[9] + iVar1) * (long)unaff_w26);
              uVar8 = uVar8 - 1;
              fVar17 = fVar17 + fVar28 * (fVar18 + fVar24 * fVar29 +
                                         (fVar31 * fVar27 - fVar34 * fVar20));
              fVar16 = fVar16 + fVar28 * (fVar19 + fVar24 * fVar20 +
                                         (fVar34 * fVar29 - fVar21 * fVar27));
              fVar12 = fVar12 + fVar28 * (fVar22 + fVar24 * fVar27 +
                                         (fVar21 * fVar20 - fVar31 * fVar29));
              fVar11 = fVar11 + fVar28 * (*pfVar5 +
                                         fVar13 + fVar24 * fVar25 +
                                         (fVar31 * fVar23 - fVar34 * fVar26));
              fVar14 = fVar14 + fVar28 * (pfVar5[1] +
                                         fVar30 + fVar24 * fVar26 +
                                         (fVar34 * fVar25 - fVar21 * fVar23));
              fVar15 = fVar15 + fVar28 * (pfVar5[2] +
                                         fVar32 + fVar24 * fVar23 +
                                         (fVar21 * fVar26 - fVar31 * fVar25));
              iVar7 = iVar7 + 1;
            } while (uVar8 != 0);
          }
          fVar30 = *unaff_x19;
          fVar32 = unaff_x19[1];
          fVar23 = unaff_x19[2];
          fVar18 = unaff_x19[3];
          fVar11 = fVar11 - *param_7;
          fVar14 = fVar14 - param_7[1];
          fVar15 = fVar15 - param_7[2];
          fVar21 = fVar16 * fVar30 - fVar17 * fVar32;
          fVar31 = fVar12 * fVar32 - fVar16 * fVar23;
          fVar34 = fVar17 * fVar23 - fVar12 * fVar30;
          fVar19 = fVar30 * fVar14 - fVar32 * fVar11;
          fVar20 = fVar32 * fVar15 - fVar23 * fVar14;
          fVar22 = fVar23 * fVar11 - fVar30 * fVar15;
          fVar31 = fVar31 + fVar31;
          fVar34 = fVar34 + fVar34;
          fVar21 = fVar21 + fVar21;
          fVar20 = fVar20 + fVar20;
          fVar22 = fVar22 + fVar22;
          fVar19 = fVar19 + fVar19;
          fVar13 = (fVar11 + fVar18 * fVar20 + (fVar32 * fVar19 - fVar23 * fVar22)) / *param_9;
          fVar14 = (fVar14 + fVar18 * fVar22 + (fVar23 * fVar20 - fVar30 * fVar19)) / param_9[1];
          fVar15 = (fVar15 + fVar18 * fVar19 + (fVar30 * fVar22 - fVar32 * fVar20)) / param_9[2];
          param_21._4_4_ =
               param_21._4_4_ +
               fVar10 * (fVar17 + fVar18 * fVar31 + (fVar32 * fVar21 - fVar23 * fVar34));
          param_22._0_4_ =
               (float)param_22 +
               fStack00000000000000ac *
               (fVar16 + fVar18 * fVar34 + (fVar23 * fVar31 - fVar30 * fVar21));
          param_22._4_4_ =
               param_22._4_4_ +
               fStack00000000000000a8 *
               (fVar12 + fVar18 * fVar21 + (fVar30 * fVar34 - fVar32 * fVar31));
        }
      }
      if (uVar3 == 0) break;
      fVar13 = *param_8;
      fVar10 = param_8[1];
      iVar7 = iVar7 + uVar2;
      fVar11 = param_8[2];
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
        pfVar6 = (float *)(*param_4 + (long)iVar7 * (long)unaff_w25);
        pfVar5 = (float *)(*param_17 + (long)((int)pfVar6[9] + iVar1) * 0x10);
        fVar33 = *pfVar5;
        fVar35 = pfVar5[1];
        fVar31 = pfVar5[2];
        fVar32 = pfVar5[3];
        fVar17 = pfVar6[3] * fVar13;
        fVar14 = pfVar6[6] * fVar13;
        fVar26 = pfVar6[5] * fVar11;
        fVar21 = pfVar6[8] * fVar11;
        fVar23 = pfVar6[4] * fVar10;
        fVar34 = *pfVar6 * fVar13 * param_24._4_4_;
        fVar18 = pfVar6[1] * fVar10 * param_24._4_4_;
        fVar19 = pfVar6[2] * fVar11 * param_24._4_4_;
        fVar15 = pfVar6[7] * fVar10;
        fVar20 = fVar35 * fVar19 - fVar31 * fVar18;
        fVar22 = fVar31 * fVar34 - fVar33 * fVar19;
        fVar20 = fVar20 + fVar20;
        fVar22 = fVar22 + fVar22;
        fVar30 = fVar33 * fVar18 - fVar35 * fVar34;
        fVar29 = fVar33 * fVar23 - fVar35 * fVar17;
        fVar12 = fVar35 * fVar26 - fVar31 * fVar23;
        fVar24 = fVar31 * fVar17 - fVar33 * fVar26;
        fVar25 = fVar33 * fVar15 - fVar35 * fVar14;
        fVar27 = fVar35 * fVar21 - fVar31 * fVar15;
        fVar28 = fVar31 * fVar14 - fVar33 * fVar21;
        fVar30 = fVar30 + fVar30;
        fVar12 = fVar12 + fVar12;
        fVar24 = fVar24 + fVar24;
        fVar29 = fVar29 + fVar29;
        fVar27 = fVar27 + fVar27;
        fVar28 = fVar28 + fVar28;
        fVar25 = fVar25 + fVar25;
        pfVar5 = (float *)(*param_16 + (long)((int)pfVar6[9] + iVar1) * (long)unaff_w26);
        fVar16 = pfVar6[10];
        uVar8 = uVar8 - 1;
        iVar7 = iVar7 + 1;
        fStack00000000000000a4 =
             fStack00000000000000a4 +
             fVar16 * (fVar17 + fVar32 * fVar12 + (fVar35 * fVar29 - fVar31 * fVar24));
        fStack00000000000000a8 =
             fStack00000000000000a8 +
             fVar16 * (fVar23 + fVar32 * fVar24 + (fVar31 * fVar12 - fVar33 * fVar29));
        fStack00000000000000ac =
             fStack00000000000000ac +
             fVar16 * (fVar26 + fVar32 * fVar29 + (fVar33 * fVar24 - fVar35 * fVar12));
        fStack0000000000000098 =
             fStack0000000000000098 +
             fVar16 * (fVar14 + fVar32 * fVar27 + (fVar35 * fVar25 - fVar31 * fVar28));
        fStack000000000000009c =
             fStack000000000000009c +
             fVar16 * (fVar15 + fVar32 * fVar28 + (fVar31 * fVar27 - fVar33 * fVar25));
        fStack00000000000000a0 =
             fStack00000000000000a0 +
             fVar16 * (fVar21 + fVar32 * fVar25 + (fVar33 * fVar28 - fVar35 * fVar27));
        fStack000000000000008c =
             fStack000000000000008c +
             fVar16 * (*pfVar5 + fVar34 + fVar32 * fVar20 + (fVar35 * fVar30 - fVar31 * fVar22));
        fStack0000000000000090 =
             fStack0000000000000090 +
             fVar16 * (pfVar5[1] + fVar18 + fVar32 * fVar22 + (fVar31 * fVar20 - fVar33 * fVar30));
        fStack0000000000000094 =
             fStack0000000000000094 +
             fVar16 * (pfVar5[2] + fVar19 + fVar32 * fVar30 + (fVar33 * fVar22 - fVar35 * fVar20));
      } while (uVar8 != 0);
    }
    fStack00000000000000ac = 0.0;
    fStack00000000000000a8 = 0.0;
    fStack00000000000000a4 = 0.0;
    param_1 = 0.0;
  } while( true );
}


