/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetDrawCount
ENTRY_POINT: 0637c544
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


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetDrawCount
               (undefined8 param_1,long *param_2,long *param_3,int param_4,uint param_5,
               float *param_6,float *param_7,float *param_8,undefined8 param_9,long *param_10,
               long *param_11,long *param_12,int param_13,ulong param_14,long *param_15,
               long *param_16,undefined8 param_17,undefined8 param_18)

{
  uint uVar1;
  float *pfVar2;
  ulong uVar3;
  long lVar4;
  long in_x9;
  float *pfVar5;
  long in_x10;
  uint in_w11;
  long *in_x12;
  int in_w13;
  int iVar6;
  long in_x15;
  uint in_w16;
  int in_w17;
  float *unaff_x19;
  uint unaff_w23;
  long unaff_x24;
  int unaff_w25;
  int unaff_w26;
  uint unaff_w27;
  int unaff_w28;
  ulong unaff_x29;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s10;
  float unaff_s11;
  float fVar13;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float in_s19;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float in_s22;
  float in_s23;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
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
    uVar3 = unaff_x29 & 0xffffffff;
    iVar6 = in_w17 + param_5;
    fVar20 = 0.0;
    fVar26 = 0.0;
    fVar24 = 0.0;
    do {
      pfVar7 = (float *)(in_x9 + (long)iVar6 * (long)unaff_w25);
      fVar11 = pfVar7[10];
      pfVar2 = (float *)(in_x10 + (long)((int)pfVar7[9] + unaff_w28) * (long)unaff_w26);
      pfVar5 = (float *)(*in_x12 + (long)((int)pfVar7[9] + unaff_w28) * 0x10);
      fVar12 = *pfVar5;
      fVar15 = pfVar5[1];
      fVar17 = pfVar5[2];
      fVar27 = pfVar5[3];
      fVar8 = *pfVar7 * in_s19 * in_s31;
      fVar9 = pfVar7[1] * in_s22 * in_s31;
      fVar10 = pfVar7[2] * in_s23 * in_s31;
      fVar28 = fVar12 * fVar9 - fVar15 * fVar8;
      fVar29 = fVar15 * fVar10 - fVar17 * fVar9;
      fVar31 = fVar17 * fVar8 - fVar12 * fVar10;
      fVar29 = fVar29 + fVar29;
      fVar31 = fVar31 + fVar31;
      fVar28 = fVar28 + fVar28;
      uVar3 = uVar3 - 1;
      fVar20 = fVar20 + fVar11 * (*pfVar2 +
                                 fVar8 + fVar27 * fVar29 + (fVar15 * fVar28 - fVar17 * fVar31));
      fVar26 = fVar26 + fVar11 * (pfVar2[1] +
                                 fVar9 + fVar27 * fVar31 + (fVar17 * fVar29 - fVar12 * fVar28));
      fVar24 = fVar24 + fVar11 * (pfVar2[2] +
                                 fVar10 + fVar27 * fVar28 + (fVar12 * fVar31 - fVar15 * fVar29));
      iVar6 = iVar6 + 1;
    } while (uVar3 != 0);
    while( true ) {
      fVar8 = *unaff_x19;
      fVar9 = unaff_x19[1];
      fVar10 = unaff_x19[2];
      fVar11 = unaff_x19[3];
      fVar20 = fVar20 - *param_6;
      fVar26 = fVar26 - param_6[1];
      fVar24 = fVar24 - param_6[2];
      fVar15 = fVar9 * fVar24 - fVar10 * fVar26;
      fVar17 = fVar10 * fVar20 - fVar8 * fVar24;
      fVar12 = fVar8 * fVar26 - fVar9 * fVar20;
      fVar15 = fVar15 + fVar15;
      fVar17 = fVar17 + fVar17;
      fVar12 = fVar12 + fVar12;
      fVar20 = (fVar20 + fVar11 * fVar15 + (fVar9 * fVar12 - fVar10 * fVar17)) / *param_8;
      fVar26 = (fVar26 + fVar11 * fVar17 + (fVar10 * fVar15 - fVar8 * fVar12)) / param_8[1];
      fVar24 = (fVar24 + fVar11 * fVar12 + (fVar8 * fVar17 - fVar9 * fVar15)) / param_8[2];
      while( true ) {
        while( true ) {
          unaff_s15 = unaff_s15 + fVar24;
          unaff_s14 = unaff_s14 + fVar26;
          unaff_s13 = unaff_s13 + fVar20;
          in_w13 = in_w13 + 1;
          do {
            do {
              in_x15 = in_x15 + 1;
              unaff_w23 = unaff_w23 << 1;
              if (in_x15 == 4) {
                if (0 < in_w13) {
                  fVar20 = (float)in_w13;
                  lVar4 = (long)param_13;
                  pfVar5 = (float *)(*param_12 + (long)param_13 * 0xc);
                  *pfVar5 = unaff_s13 / fVar20;
                  pfVar5[1] = unaff_s14 / fVar20;
                  pfVar5[2] = unaff_s15 / fVar20;
                  if ((in_w11 & 1) == 0) {
                    if ((param_14 & 0x100000000) != 0) {
                      pfVar5 = (float *)(*param_11 + lVar4 * 0xc);
                      *pfVar5 = unaff_s12 / fVar20;
                      pfVar5[1] = unaff_s11 / fVar20;
                      pfVar5[2] = unaff_s10 / fVar20;
                    }
                  }
                  else {
                    pfVar5 = (float *)(*param_11 + lVar4 * 0xc);
                    *pfVar5 = unaff_s12 / fVar20;
                    pfVar5[1] = unaff_s11 / fVar20;
                    pfVar5[2] = unaff_s10 / fVar20;
                    pfVar5 = (float *)(*param_10 + lVar4 * 0x10);
                    *pfVar5 = param_17._4_4_ / fVar20;
                    pfVar5[1] = param_18._4_4_ / fVar20;
                    pfVar5[2] = (float)param_18 / fVar20;
                    pfVar5[3] = -1.0;
                  }
                }
                return;
              }
            } while (((unaff_w27 >> (ulong)((uint)in_x15 & 0x1f)) >> 0x1c & 1) == 0);
            in_w17 = *(int *)(unaff_x24 + in_x15 * 4);
            unaff_w28 = *(int *)(unaff_x24 + in_x15 * 4);
          } while ((unaff_w23 & in_w16) == 0);
          param_5 = *(uint *)(*param_2 + (long)(*(int *)(unaff_x24 + in_x15 * 4) + param_4) * 4);
          uVar1 = param_5 >> 0x1c;
          unaff_x29 = (ulong)uVar1;
          param_5 = param_5 & 0xfffffff;
          if ((in_w11 & 1) == 0) break;
          if (uVar1 == 0) {
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
            fVar24 = *param_7;
            fVar20 = param_7[1];
            iVar6 = in_w17 + param_5;
            fVar26 = param_7[2];
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
              pfVar2 = (float *)(*param_3 + (long)iVar6 * (long)unaff_w25);
              pfVar5 = (float *)(*param_16 + (long)((int)pfVar2[9] + unaff_w28) * 0x10);
              fVar32 = *pfVar5;
              fVar33 = pfVar5[1];
              fVar27 = pfVar5[2];
              fVar28 = pfVar5[3];
              fVar12 = pfVar2[3] * fVar24;
              fVar9 = pfVar2[6] * fVar24;
              fVar22 = pfVar2[5] * fVar26;
              fVar15 = pfVar2[8] * fVar26;
              fVar18 = pfVar2[4] * fVar20;
              fVar29 = *pfVar2 * fVar24 * in_stack_00000070._4_4_;
              fVar31 = pfVar2[1] * fVar20 * in_stack_00000070._4_4_;
              fVar13 = pfVar2[2] * fVar26 * in_stack_00000070._4_4_;
              fVar10 = pfVar2[7] * fVar20;
              fVar14 = fVar33 * fVar13 - fVar27 * fVar31;
              fVar16 = fVar27 * fVar29 - fVar32 * fVar13;
              fVar14 = fVar14 + fVar14;
              fVar16 = fVar16 + fVar16;
              fVar17 = fVar32 * fVar31 - fVar33 * fVar29;
              fVar30 = fVar32 * fVar18 - fVar33 * fVar12;
              fVar8 = fVar33 * fVar22 - fVar27 * fVar18;
              fVar19 = fVar27 * fVar12 - fVar32 * fVar22;
              fVar21 = fVar32 * fVar10 - fVar33 * fVar9;
              fVar23 = fVar33 * fVar15 - fVar27 * fVar10;
              fVar25 = fVar27 * fVar9 - fVar32 * fVar15;
              fVar17 = fVar17 + fVar17;
              fVar8 = fVar8 + fVar8;
              fVar19 = fVar19 + fVar19;
              fVar30 = fVar30 + fVar30;
              fVar23 = fVar23 + fVar23;
              fVar25 = fVar25 + fVar25;
              fVar21 = fVar21 + fVar21;
              pfVar5 = (float *)(*param_15 + (long)((int)pfVar2[9] + unaff_w28) * (long)unaff_w26);
              fVar11 = pfVar2[10];
              unaff_x29 = unaff_x29 - 1;
              iVar6 = iVar6 + 1;
              fStack00000000000000a4 =
                   fStack00000000000000a4 +
                   fVar11 * (fVar12 + fVar28 * fVar8 + (fVar33 * fVar30 - fVar27 * fVar19));
              fStack00000000000000a8 =
                   fStack00000000000000a8 +
                   fVar11 * (fVar18 + fVar28 * fVar19 + (fVar27 * fVar8 - fVar32 * fVar30));
              fStack00000000000000ac =
                   fStack00000000000000ac +
                   fVar11 * (fVar22 + fVar28 * fVar30 + (fVar32 * fVar19 - fVar33 * fVar8));
              fStack0000000000000098 =
                   fStack0000000000000098 +
                   fVar11 * (fVar9 + fVar28 * fVar23 + (fVar33 * fVar21 - fVar27 * fVar25));
              fStack000000000000009c =
                   fStack000000000000009c +
                   fVar11 * (fVar10 + fVar28 * fVar25 + (fVar27 * fVar23 - fVar32 * fVar21));
              fStack00000000000000a0 =
                   fStack00000000000000a0 +
                   fVar11 * (fVar15 + fVar28 * fVar21 + (fVar32 * fVar25 - fVar33 * fVar23));
              fStack000000000000008c =
                   fStack000000000000008c +
                   fVar11 * (*pfVar5 +
                            fVar29 + fVar28 * fVar14 + (fVar33 * fVar17 - fVar27 * fVar16));
              fStack0000000000000090 =
                   fStack0000000000000090 +
                   fVar11 * (pfVar5[1] +
                            fVar31 + fVar28 * fVar16 + (fVar27 * fVar14 - fVar32 * fVar17));
              fStack0000000000000094 =
                   fStack0000000000000094 +
                   fVar11 * (pfVar5[2] +
                            fVar13 + fVar28 * fVar17 + (fVar32 * fVar16 - fVar33 * fVar14));
            } while (unaff_x29 != 0);
          }
          fVar17 = *unaff_x19;
          fVar27 = unaff_x19[1];
          fVar28 = unaff_x19[2];
          fVar29 = unaff_x19[3];
          fStack000000000000008c = fStack000000000000008c - *param_6;
          fStack0000000000000090 = fStack0000000000000090 - param_6[1];
          fStack0000000000000094 = fStack0000000000000094 - param_6[2];
          fVar9 = fStack00000000000000ac * fVar27 - fStack00000000000000a8 * fVar28;
          fVar26 = fStack00000000000000a0 * fVar27 - fStack000000000000009c * fVar28;
          fVar26 = fVar26 + fVar26;
          fVar8 = fStack00000000000000a8 * fVar17 - fStack00000000000000a4 * fVar27;
          fVar20 = fStack000000000000009c * fVar17 - fStack0000000000000098 * fVar27;
          fVar11 = fVar17 * fStack0000000000000090 - fVar27 * fStack000000000000008c;
          fVar10 = fStack00000000000000a4 * fVar28 - fStack00000000000000ac * fVar17;
          fVar24 = fStack0000000000000098 * fVar28 - fStack00000000000000a0 * fVar17;
          fVar12 = fVar27 * fStack0000000000000094 - fVar28 * fStack0000000000000090;
          fVar15 = fVar28 * fStack000000000000008c - fVar17 * fStack0000000000000094;
          fVar9 = fVar9 + fVar9;
          fVar10 = fVar10 + fVar10;
          fVar8 = fVar8 + fVar8;
          fVar24 = fVar24 + fVar24;
          fVar20 = fVar20 + fVar20;
          fVar12 = fVar12 + fVar12;
          fVar15 = fVar15 + fVar15;
          fVar11 = fVar11 + fVar11;
          unaff_s11 = unaff_s11 +
                      (fStack00000000000000a8 + fVar29 * fVar10 + (fVar28 * fVar9 - fVar17 * fVar8))
                      * param_7[1];
          unaff_s12 = unaff_s12 +
                      (fStack00000000000000a4 + fVar29 * fVar9 + (fVar27 * fVar8 - fVar28 * fVar10))
                      * *param_7;
          param_17._4_4_ =
               param_17._4_4_ +
               (fStack0000000000000098 + fVar29 * fVar26 + (fVar27 * fVar20 - fVar28 * fVar24)) *
               *param_7;
          param_18._4_4_ =
               param_18._4_4_ +
               (fStack000000000000009c + fVar29 * fVar24 + (fVar28 * fVar26 - fVar17 * fVar20)) *
               param_7[1];
          param_18._0_4_ =
               (float)param_18 +
               (fStack00000000000000a0 + fVar29 * fVar20 + (fVar17 * fVar24 - fVar27 * fVar26)) *
               param_7[2];
          fVar20 = (fStack000000000000008c + fVar29 * fVar12 + (fVar27 * fVar11 - fVar28 * fVar15))
                   / *param_8;
          fVar26 = (fStack0000000000000090 + fVar29 * fVar15 + (fVar28 * fVar12 - fVar17 * fVar11))
                   / param_8[1];
          fVar24 = (fStack0000000000000094 + fVar29 * fVar11 + (fVar17 * fVar15 - fVar27 * fVar12))
                   / param_8[2];
          unaff_s10 = unaff_s10 +
                      (fStack00000000000000ac + fVar29 * fVar8 + (fVar17 * fVar10 - fVar27 * fVar9))
                      * param_7[2];
          in_s31 = in_stack_00000070._4_4_;
        }
        if ((param_14 & 0x100000000) == 0) break;
        if (uVar1 == 0) {
          fVar8 = *param_7;
          fStack00000000000000ac = param_7[1];
          fStack00000000000000a8 = param_7[2];
          fVar9 = 0.0;
          fVar10 = 0.0;
          fVar11 = 0.0;
          fVar24 = 0.0;
          fVar26 = 0.0;
          fVar20 = 0.0;
        }
        else {
          fStack00000000000000ac = param_7[1];
          fVar8 = *param_7;
          fStack00000000000000a8 = param_7[2];
          iVar6 = in_w17 + param_5;
          fVar20 = 0.0;
          fVar26 = 0.0;
          fVar24 = 0.0;
          fVar11 = 0.0;
          fVar10 = 0.0;
          fVar9 = 0.0;
          do {
            pfVar2 = (float *)(*param_3 + (long)iVar6 * (long)unaff_w25);
            pfVar5 = (float *)(*param_16 + (long)((int)pfVar2[9] + unaff_w28) * 0x10);
            fVar15 = *pfVar5;
            fVar27 = pfVar5[1];
            fVar29 = pfVar5[2];
            fVar19 = pfVar5[3];
            fVar31 = pfVar2[3] * fVar8;
            fVar13 = pfVar2[4] * fStack00000000000000ac;
            fVar16 = pfVar2[5] * fStack00000000000000a8;
            fVar12 = *pfVar2 * fVar8 * in_s31;
            fVar17 = pfVar2[1] * fStack00000000000000ac * in_s31;
            fVar28 = pfVar2[2] * fStack00000000000000a8 * in_s31;
            fVar18 = fVar15 * fVar17 - fVar27 * fVar12;
            fVar21 = fVar27 * fVar28 - fVar29 * fVar17;
            fVar22 = fVar29 * fVar12 - fVar15 * fVar28;
            fVar23 = fVar15 * fVar13 - fVar27 * fVar31;
            fVar30 = fVar27 * fVar16 - fVar29 * fVar13;
            fVar14 = fVar29 * fVar31 - fVar15 * fVar16;
            fVar21 = fVar21 + fVar21;
            fVar22 = fVar22 + fVar22;
            fVar18 = fVar18 + fVar18;
            fVar30 = fVar30 + fVar30;
            fVar14 = fVar14 + fVar14;
            fVar23 = fVar23 + fVar23;
            fVar25 = pfVar2[10];
            pfVar5 = (float *)(*param_15 + (long)((int)pfVar2[9] + unaff_w28) * (long)unaff_w26);
            unaff_x29 = unaff_x29 - 1;
            fVar11 = fVar11 + fVar25 * (fVar31 + fVar19 * fVar30 +
                                       (fVar27 * fVar23 - fVar29 * fVar14));
            fVar10 = fVar10 + fVar25 * (fVar13 + fVar19 * fVar14 +
                                       (fVar29 * fVar30 - fVar15 * fVar23));
            fVar9 = fVar9 + fVar25 * (fVar16 + fVar19 * fVar23 + (fVar15 * fVar14 - fVar27 * fVar30)
                                     );
            fVar20 = fVar20 + fVar25 * (*pfVar5 +
                                       fVar12 + fVar19 * fVar21 +
                                       (fVar27 * fVar18 - fVar29 * fVar22));
            fVar26 = fVar26 + fVar25 * (pfVar5[1] +
                                       fVar17 + fVar19 * fVar22 +
                                       (fVar29 * fVar21 - fVar15 * fVar18));
            fVar24 = fVar24 + fVar25 * (pfVar5[2] +
                                       fVar28 + fVar19 * fVar18 +
                                       (fVar15 * fVar22 - fVar27 * fVar21));
            iVar6 = iVar6 + 1;
          } while (unaff_x29 != 0);
        }
        fVar15 = *unaff_x19;
        fVar27 = unaff_x19[1];
        fVar16 = unaff_x19[2];
        fVar29 = unaff_x19[3];
        fVar20 = fVar20 - *param_6;
        fVar26 = fVar26 - param_6[1];
        fVar24 = fVar24 - param_6[2];
        fVar12 = fVar10 * fVar15 - fVar11 * fVar27;
        fVar17 = fVar9 * fVar27 - fVar10 * fVar16;
        fVar28 = fVar11 * fVar16 - fVar9 * fVar15;
        fVar31 = fVar15 * fVar26 - fVar27 * fVar20;
        fVar13 = fVar27 * fVar24 - fVar16 * fVar26;
        fVar14 = fVar16 * fVar20 - fVar15 * fVar24;
        fVar17 = fVar17 + fVar17;
        fVar28 = fVar28 + fVar28;
        fVar12 = fVar12 + fVar12;
        fVar13 = fVar13 + fVar13;
        fVar14 = fVar14 + fVar14;
        fVar31 = fVar31 + fVar31;
        fVar20 = (fVar20 + fVar29 * fVar13 + (fVar27 * fVar31 - fVar16 * fVar14)) / *param_8;
        fVar26 = (fVar26 + fVar29 * fVar14 + (fVar16 * fVar13 - fVar15 * fVar31)) / param_8[1];
        fVar24 = (fVar24 + fVar29 * fVar31 + (fVar15 * fVar14 - fVar27 * fVar13)) / param_8[2];
        unaff_s12 = unaff_s12 +
                    fVar8 * (fVar11 + fVar29 * fVar17 + (fVar27 * fVar12 - fVar16 * fVar28));
        unaff_s11 = unaff_s11 +
                    fStack00000000000000ac *
                    (fVar10 + fVar29 * fVar28 + (fVar16 * fVar17 - fVar15 * fVar12));
        unaff_s10 = unaff_s10 +
                    fStack00000000000000a8 *
                    (fVar9 + fVar29 * fVar12 + (fVar15 * fVar28 - fVar27 * fVar17));
        in_s31 = in_stack_00000070._4_4_;
      }
      if (uVar1 != 0) break;
      fVar24 = 0.0;
      fVar26 = 0.0;
      fVar20 = 0.0;
    }
    in_x9 = *param_3;
    in_s19 = *param_7;
    in_s22 = param_7[1];
    in_s23 = param_7[2];
    in_x10 = *param_15;
    in_x12 = param_16;
  } while( true );
}


