/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetTransform
ENTRY_POINT: 0637c95c
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


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetTransform
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,undefined8 param_9,long *param_10,long *param_11,
               int param_12,undefined8 param_13,float *param_14,float *param_15,float *param_16,
               undefined8 param_17,long *param_18,long *param_19,long *param_20,int param_21,
               ulong param_22,long *param_23,long *param_24,undefined8 param_25,undefined8 param_26)

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
  float unaff_s10;
  float fVar22;
  float unaff_s11;
  float fVar23;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar24;
  float in_s16;
  float fVar25;
  float in_s17;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float in_s20;
  float fVar32;
  float in_s21;
  float in_s22;
  float in_s23;
  float in_s24;
  float in_s25;
  float fVar33;
  float in_s27;
  float fVar34;
  float fVar35;
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
    fVar26 = in_s17 + in_s17;
    param_8 = param_8 + param_8;
    fVar11 = (param_6 + param_7 * in_s16 + (param_4 * param_8 - in_s27 * fVar26)) / *param_16;
    fVar13 = (in_s24 + param_7 * fVar26 + (in_s27 * in_s16 - param_2 * param_8)) / param_16[1];
    fVar26 = (in_s25 + param_7 * param_8 + (param_2 * fVar26 - param_4 * in_s16)) / param_16[2];
    unaff_s12 = unaff_s12 +
                in_s20 * (in_s23 + param_7 * param_3 + (param_4 * param_1 - in_s27 * param_5));
    unaff_s11 = unaff_s11 +
                fStack00000000000000ac *
                (in_s22 + param_7 * param_5 + (in_s27 * param_3 - param_2 * param_1));
    unaff_s10 = unaff_s10 +
                fStack00000000000000a8 *
                (in_s21 + param_7 * param_1 + (param_2 * param_5 - param_4 * param_3));
    while( true ) {
      while( true ) {
        unaff_s15 = unaff_s15 + fVar26;
        unaff_s14 = unaff_s14 + fVar13;
        unaff_s13 = unaff_s13 + fVar11;
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
                *pfVar5 = unaff_s13 / fVar11;
                pfVar5[1] = unaff_s14 / fVar11;
                pfVar5[2] = unaff_s15 / fVar11;
                if ((in_w11 & 1) == 0) {
                  if ((param_22 & 0x100000000) != 0) {
                    pfVar5 = (float *)(*param_19 + lVar4 * 0xc);
                    *pfVar5 = unaff_s12 / fVar11;
                    pfVar5[1] = unaff_s11 / fVar11;
                    pfVar5[2] = unaff_s10 / fVar11;
                  }
                }
                else {
                  pfVar5 = (float *)(*param_19 + lVar4 * 0xc);
                  *pfVar5 = unaff_s12 / fVar11;
                  pfVar5[1] = unaff_s11 / fVar11;
                  pfVar5[2] = unaff_s10 / fVar11;
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
        if ((in_w11 & 1) == 0) break;
        if (uVar3 == 0) {
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
          fVar26 = *param_15;
          fVar11 = param_15[1];
          iVar7 = iVar7 + uVar2;
          fVar13 = param_15[2];
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
            pfVar6 = (float *)(*param_11 + (long)iVar7 * (long)unaff_w25);
            pfVar5 = (float *)(*param_24 + (long)((int)pfVar6[9] + iVar1) * 0x10);
            fVar34 = *pfVar5;
            fVar35 = pfVar5[1];
            fVar19 = pfVar5[2];
            fVar20 = pfVar5[3];
            fVar16 = pfVar6[3] * fVar26;
            fVar12 = pfVar6[6] * fVar26;
            fVar30 = pfVar6[5] * fVar13;
            fVar17 = pfVar6[8] * fVar13;
            fVar27 = pfVar6[4] * fVar11;
            fVar21 = *pfVar6 * fVar26 * in_stack_00000070._4_4_;
            fVar22 = pfVar6[1] * fVar11 * in_stack_00000070._4_4_;
            fVar23 = pfVar6[2] * fVar13 * in_stack_00000070._4_4_;
            fVar14 = pfVar6[7] * fVar11;
            fVar24 = fVar35 * fVar23 - fVar19 * fVar22;
            fVar25 = fVar19 * fVar21 - fVar34 * fVar23;
            fVar24 = fVar24 + fVar24;
            fVar25 = fVar25 + fVar25;
            fVar18 = fVar34 * fVar22 - fVar35 * fVar21;
            fVar33 = fVar34 * fVar27 - fVar35 * fVar16;
            fVar10 = fVar35 * fVar30 - fVar19 * fVar27;
            fVar28 = fVar19 * fVar16 - fVar34 * fVar30;
            fVar29 = fVar34 * fVar14 - fVar35 * fVar12;
            fVar31 = fVar35 * fVar17 - fVar19 * fVar14;
            fVar32 = fVar19 * fVar12 - fVar34 * fVar17;
            fVar18 = fVar18 + fVar18;
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
            fStack00000000000000a4 =
                 fStack00000000000000a4 +
                 fVar15 * (fVar16 + fVar20 * fVar10 + (fVar35 * fVar33 - fVar19 * fVar28));
            fStack00000000000000a8 =
                 fStack00000000000000a8 +
                 fVar15 * (fVar27 + fVar20 * fVar28 + (fVar19 * fVar10 - fVar34 * fVar33));
            fStack00000000000000ac =
                 fStack00000000000000ac +
                 fVar15 * (fVar30 + fVar20 * fVar33 + (fVar34 * fVar28 - fVar35 * fVar10));
            fStack0000000000000098 =
                 fStack0000000000000098 +
                 fVar15 * (fVar12 + fVar20 * fVar31 + (fVar35 * fVar29 - fVar19 * fVar32));
            fStack000000000000009c =
                 fStack000000000000009c +
                 fVar15 * (fVar14 + fVar20 * fVar32 + (fVar19 * fVar31 - fVar34 * fVar29));
            fStack00000000000000a0 =
                 fStack00000000000000a0 +
                 fVar15 * (fVar17 + fVar20 * fVar29 + (fVar34 * fVar32 - fVar35 * fVar31));
            fStack000000000000008c =
                 fStack000000000000008c +
                 fVar15 * (*pfVar5 + fVar21 + fVar20 * fVar24 + (fVar35 * fVar18 - fVar19 * fVar25))
            ;
            fStack0000000000000090 =
                 fStack0000000000000090 +
                 fVar15 * (pfVar5[1] +
                          fVar22 + fVar20 * fVar25 + (fVar19 * fVar24 - fVar34 * fVar18));
            fStack0000000000000094 =
                 fStack0000000000000094 +
                 fVar15 * (pfVar5[2] +
                          fVar23 + fVar20 * fVar18 + (fVar34 * fVar25 - fVar35 * fVar24));
          } while (uVar8 != 0);
        }
        fVar18 = *unaff_x19;
        fVar19 = unaff_x19[1];
        fVar20 = unaff_x19[2];
        fVar21 = unaff_x19[3];
        fStack000000000000008c = fStack000000000000008c - *param_14;
        fStack0000000000000090 = fStack0000000000000090 - param_14[1];
        fStack0000000000000094 = fStack0000000000000094 - param_14[2];
        fVar12 = fStack00000000000000ac * fVar19 - fStack00000000000000a8 * fVar20;
        fVar13 = fStack00000000000000a0 * fVar19 - fStack000000000000009c * fVar20;
        fVar13 = fVar13 + fVar13;
        fVar10 = fStack00000000000000a8 * fVar18 - fStack00000000000000a4 * fVar19;
        fVar11 = fStack000000000000009c * fVar18 - fStack0000000000000098 * fVar19;
        fVar15 = fVar18 * fStack0000000000000090 - fVar19 * fStack000000000000008c;
        fVar14 = fStack00000000000000a4 * fVar20 - fStack00000000000000ac * fVar18;
        fVar26 = fStack0000000000000098 * fVar20 - fStack00000000000000a0 * fVar18;
        fVar16 = fVar19 * fStack0000000000000094 - fVar20 * fStack0000000000000090;
        fVar17 = fVar20 * fStack000000000000008c - fVar18 * fStack0000000000000094;
        fVar12 = fVar12 + fVar12;
        fVar14 = fVar14 + fVar14;
        fVar10 = fVar10 + fVar10;
        fVar26 = fVar26 + fVar26;
        fVar11 = fVar11 + fVar11;
        fVar16 = fVar16 + fVar16;
        fVar17 = fVar17 + fVar17;
        fVar15 = fVar15 + fVar15;
        unaff_s11 = unaff_s11 +
                    (fStack00000000000000a8 + fVar21 * fVar14 + (fVar20 * fVar12 - fVar18 * fVar10))
                    * param_15[1];
        unaff_s12 = unaff_s12 +
                    (fStack00000000000000a4 + fVar21 * fVar12 + (fVar19 * fVar10 - fVar20 * fVar14))
                    * *param_15;
        param_25._4_4_ =
             param_25._4_4_ +
             (fStack0000000000000098 + fVar21 * fVar13 + (fVar19 * fVar11 - fVar20 * fVar26)) *
             *param_15;
        param_26._4_4_ =
             param_26._4_4_ +
             (fStack000000000000009c + fVar21 * fVar26 + (fVar20 * fVar13 - fVar18 * fVar11)) *
             param_15[1];
        param_26._0_4_ =
             (float)param_26 +
             (fStack00000000000000a0 + fVar21 * fVar11 + (fVar18 * fVar26 - fVar19 * fVar13)) *
             param_15[2];
        fVar11 = (fStack000000000000008c + fVar21 * fVar16 + (fVar19 * fVar15 - fVar20 * fVar17)) /
                 *param_16;
        fVar13 = (fStack0000000000000090 + fVar21 * fVar17 + (fVar20 * fVar16 - fVar18 * fVar15)) /
                 param_16[1];
        fVar26 = (fStack0000000000000094 + fVar21 * fVar15 + (fVar18 * fVar17 - fVar19 * fVar16)) /
                 param_16[2];
        unaff_s10 = unaff_s10 +
                    (fStack00000000000000ac + fVar21 * fVar10 + (fVar18 * fVar14 - fVar19 * fVar12))
                    * param_15[2];
      }
      if ((param_22 & 0x100000000) != 0) break;
      if (uVar3 == 0) {
        fVar26 = 0.0;
        fVar13 = 0.0;
        fVar11 = 0.0;
      }
      else {
        iVar7 = iVar7 + uVar2;
        fVar11 = 0.0;
        fVar13 = 0.0;
        fVar26 = 0.0;
        do {
          pfVar9 = (float *)(*param_11 + (long)iVar7 * (long)unaff_w25);
          fVar15 = pfVar9[10];
          pfVar6 = (float *)(*param_23 + (long)((int)pfVar9[9] + iVar1) * (long)unaff_w26);
          pfVar5 = (float *)(*param_24 + (long)((int)pfVar9[9] + iVar1) * 0x10);
          fVar16 = *pfVar5;
          fVar17 = pfVar5[1];
          fVar18 = pfVar5[2];
          fVar19 = pfVar5[3];
          fVar10 = *pfVar9 * *param_15 * in_stack_00000070._4_4_;
          fVar12 = pfVar9[1] * param_15[1] * in_stack_00000070._4_4_;
          fVar14 = pfVar9[2] * param_15[2] * in_stack_00000070._4_4_;
          fVar20 = fVar16 * fVar12 - fVar17 * fVar10;
          fVar21 = fVar17 * fVar14 - fVar18 * fVar12;
          fVar22 = fVar18 * fVar10 - fVar16 * fVar14;
          fVar21 = fVar21 + fVar21;
          fVar22 = fVar22 + fVar22;
          fVar20 = fVar20 + fVar20;
          uVar8 = uVar8 - 1;
          fVar11 = fVar11 + fVar15 * (*pfVar6 +
                                     fVar10 + fVar19 * fVar21 + (fVar17 * fVar20 - fVar18 * fVar22))
          ;
          fVar13 = fVar13 + fVar15 * (pfVar6[1] +
                                     fVar12 + fVar19 * fVar22 + (fVar18 * fVar21 - fVar16 * fVar20))
          ;
          fVar26 = fVar26 + fVar15 * (pfVar6[2] +
                                     fVar14 + fVar19 * fVar20 + (fVar16 * fVar22 - fVar17 * fVar21))
          ;
          iVar7 = iVar7 + 1;
        } while (uVar8 != 0);
      }
      fVar10 = *unaff_x19;
      fVar12 = unaff_x19[1];
      fVar14 = unaff_x19[2];
      fVar15 = unaff_x19[3];
      fVar11 = fVar11 - *param_14;
      fVar13 = fVar13 - param_14[1];
      fVar26 = fVar26 - param_14[2];
      fVar17 = fVar12 * fVar26 - fVar14 * fVar13;
      fVar18 = fVar14 * fVar11 - fVar10 * fVar26;
      fVar16 = fVar10 * fVar13 - fVar12 * fVar11;
      fVar17 = fVar17 + fVar17;
      fVar18 = fVar18 + fVar18;
      fVar16 = fVar16 + fVar16;
      fVar11 = (fVar11 + fVar15 * fVar17 + (fVar12 * fVar16 - fVar14 * fVar18)) / *param_16;
      fVar13 = (fVar13 + fVar15 * fVar18 + (fVar14 * fVar17 - fVar10 * fVar16)) / param_16[1];
      fVar26 = (fVar26 + fVar15 * fVar16 + (fVar10 * fVar18 - fVar12 * fVar17)) / param_16[2];
    }
    if (uVar3 == 0) {
      in_s20 = *param_15;
      fStack00000000000000ac = param_15[1];
      fStack00000000000000a8 = param_15[2];
      in_s21 = 0.0;
      in_s22 = 0.0;
      in_s23 = 0.0;
      fVar11 = 0.0;
      fVar13 = 0.0;
      param_6 = 0.0;
    }
    else {
      fStack00000000000000ac = param_15[1];
      in_s20 = *param_15;
      fStack00000000000000a8 = param_15[2];
      iVar7 = iVar7 + uVar2;
      param_6 = 0.0;
      fVar13 = 0.0;
      fVar11 = 0.0;
      in_s23 = 0.0;
      in_s22 = 0.0;
      in_s21 = 0.0;
      do {
        pfVar6 = (float *)(*param_11 + (long)iVar7 * (long)unaff_w25);
        pfVar5 = (float *)(*param_24 + (long)((int)pfVar6[9] + iVar1) * 0x10);
        fVar10 = *pfVar5;
        fVar14 = pfVar5[1];
        fVar16 = pfVar5[2];
        fVar22 = pfVar5[3];
        fVar17 = pfVar6[3] * in_s20;
        fVar18 = pfVar6[4] * fStack00000000000000ac;
        fVar20 = pfVar6[5] * fStack00000000000000a8;
        fVar26 = *pfVar6 * in_s20 * in_stack_00000070._4_4_;
        fVar12 = pfVar6[1] * fStack00000000000000ac * in_stack_00000070._4_4_;
        fVar15 = pfVar6[2] * fStack00000000000000a8 * in_stack_00000070._4_4_;
        fVar21 = fVar10 * fVar12 - fVar14 * fVar26;
        fVar23 = fVar14 * fVar15 - fVar16 * fVar12;
        fVar24 = fVar16 * fVar26 - fVar10 * fVar15;
        fVar25 = fVar10 * fVar18 - fVar14 * fVar17;
        fVar28 = fVar14 * fVar20 - fVar16 * fVar18;
        fVar19 = fVar16 * fVar17 - fVar10 * fVar20;
        fVar23 = fVar23 + fVar23;
        fVar24 = fVar24 + fVar24;
        fVar21 = fVar21 + fVar21;
        fVar28 = fVar28 + fVar28;
        fVar19 = fVar19 + fVar19;
        fVar25 = fVar25 + fVar25;
        fVar27 = pfVar6[10];
        pfVar5 = (float *)(*param_23 + (long)((int)pfVar6[9] + iVar1) * (long)unaff_w26);
        uVar8 = uVar8 - 1;
        in_s23 = in_s23 + fVar27 * (fVar17 + fVar22 * fVar28 + (fVar14 * fVar25 - fVar16 * fVar19));
        in_s22 = in_s22 + fVar27 * (fVar18 + fVar22 * fVar19 + (fVar16 * fVar28 - fVar10 * fVar25));
        in_s21 = in_s21 + fVar27 * (fVar20 + fVar22 * fVar25 + (fVar10 * fVar19 - fVar14 * fVar28));
        param_6 = param_6 + fVar27 * (*pfVar5 +
                                     fVar26 + fVar22 * fVar23 + (fVar14 * fVar21 - fVar16 * fVar24))
        ;
        fVar13 = fVar13 + fVar27 * (pfVar5[1] +
                                   fVar12 + fVar22 * fVar24 + (fVar16 * fVar23 - fVar10 * fVar21));
        fVar11 = fVar11 + fVar27 * (pfVar5[2] +
                                   fVar15 + fVar22 * fVar21 + (fVar10 * fVar24 - fVar14 * fVar23));
        iVar7 = iVar7 + 1;
      } while (uVar8 != 0);
    }
    param_2 = *unaff_x19;
    param_4 = unaff_x19[1];
    in_s27 = unaff_x19[2];
    param_7 = unaff_x19[3];
    param_6 = param_6 - *param_14;
    in_s24 = fVar13 - param_14[1];
    in_s25 = fVar11 - param_14[2];
    param_1 = in_s22 * param_2 - in_s23 * param_4;
    param_3 = in_s21 * param_4 - in_s22 * in_s27;
    param_5 = in_s23 * in_s27 - in_s21 * param_2;
    param_8 = param_2 * in_s24 - param_4 * param_6;
    fVar11 = param_4 * in_s25 - in_s27 * in_s24;
    in_s17 = in_s27 * param_6 - param_2 * in_s25;
    param_3 = param_3 + param_3;
    param_5 = param_5 + param_5;
    param_1 = param_1 + param_1;
    in_s16 = fVar11 + fVar11;
  } while( true );
}


