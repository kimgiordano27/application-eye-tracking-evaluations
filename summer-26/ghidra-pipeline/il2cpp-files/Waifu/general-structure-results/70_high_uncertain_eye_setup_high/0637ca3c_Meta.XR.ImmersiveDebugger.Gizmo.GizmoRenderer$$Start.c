/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRenderer$$Start
ENTRY_POINT: 0637ca3c
PROGRAM: Waifu-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRenderer__Start
               (undefined8 param_1,long *param_2,long *param_3,int param_4,undefined8 param_5,
               float *param_6,float *param_7,float *param_8,undefined8 param_9,long *param_10,
               long *param_11,long *param_12,int param_13,ulong param_14,long *param_15,
               long *param_16,undefined8 param_17,undefined8 param_18)

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
  float unaff_s10;
  float fVar21;
  float unaff_s11;
  float fVar22;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float in_s18;
  float fVar29;
  float fVar30;
  float fVar31;
  float in_s20;
  float fVar32;
  float in_s21;
  float fVar33;
  float fVar34;
  float fVar35;
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
    fVar10 = *unaff_x19;
    fVar11 = unaff_x19[1];
    fVar15 = unaff_x19[2];
    fVar16 = unaff_x19[3];
    fVar12 = in_s18 - *param_6;
    fVar13 = in_s21 - param_6[1];
    fVar14 = in_s20 - param_6[2];
    fVar24 = fVar11 * fVar14 - fVar15 * fVar13;
    fVar26 = fVar15 * fVar12 - fVar10 * fVar14;
    fVar17 = fVar10 * fVar13 - fVar11 * fVar12;
    fVar24 = fVar24 + fVar24;
    fVar26 = fVar26 + fVar26;
    fVar17 = fVar17 + fVar17;
    fVar12 = (fVar12 + fVar16 * fVar24 + (fVar11 * fVar17 - fVar15 * fVar26)) / *param_8;
    fVar13 = (fVar13 + fVar16 * fVar26 + (fVar15 * fVar24 - fVar10 * fVar17)) / param_8[1];
    fVar10 = (fVar14 + fVar16 * fVar17 + (fVar10 * fVar26 - fVar11 * fVar24)) / param_8[2];
    while( true ) {
      while( true ) {
        unaff_s15 = unaff_s15 + fVar10;
        unaff_s14 = unaff_s14 + fVar13;
        unaff_s13 = unaff_s13 + fVar12;
        in_w13 = in_w13 + 1;
        do {
          do {
            in_x15 = in_x15 + 1;
            unaff_w23 = unaff_w23 << 1;
            if (in_x15 == 4) {
              if (0 < in_w13) {
                fVar10 = (float)in_w13;
                lVar4 = (long)param_13;
                pfVar5 = (float *)(*param_12 + (long)param_13 * 0xc);
                *pfVar5 = unaff_s13 / fVar10;
                pfVar5[1] = unaff_s14 / fVar10;
                pfVar5[2] = unaff_s15 / fVar10;
                if ((in_w11 & 1) == 0) {
                  if ((param_14 & 0x100000000) != 0) {
                    pfVar5 = (float *)(*param_11 + lVar4 * 0xc);
                    *pfVar5 = unaff_s12 / fVar10;
                    pfVar5[1] = unaff_s11 / fVar10;
                    pfVar5[2] = unaff_s10 / fVar10;
                  }
                }
                else {
                  pfVar5 = (float *)(*param_11 + lVar4 * 0xc);
                  *pfVar5 = unaff_s12 / fVar10;
                  pfVar5[1] = unaff_s11 / fVar10;
                  pfVar5[2] = unaff_s10 / fVar10;
                  pfVar5 = (float *)(*param_10 + lVar4 * 0x10);
                  *pfVar5 = param_17._4_4_ / fVar10;
                  pfVar5[1] = param_18._4_4_ / fVar10;
                  pfVar5[2] = (float)param_18 / fVar10;
                  pfVar5[3] = -1.0;
                }
              }
              return;
            }
          } while (((unaff_w27 >> (ulong)((uint)in_x15 & 0x1f)) >> 0x1c & 1) == 0);
          iVar7 = *(int *)(unaff_x24 + in_x15 * 4);
          iVar1 = *(int *)(unaff_x24 + in_x15 * 4);
        } while ((unaff_w23 & in_w16) == 0);
        uVar2 = *(uint *)(*param_2 + (long)(*(int *)(unaff_x24 + in_x15 * 4) + param_4) * 4);
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
          fVar12 = *param_7;
          fVar10 = param_7[1];
          iVar7 = iVar7 + uVar2;
          fVar11 = param_7[2];
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
            pfVar6 = (float *)(*param_3 + (long)iVar7 * (long)unaff_w25);
            pfVar5 = (float *)(*param_16 + (long)((int)pfVar6[9] + iVar1) * 0x10);
            fVar34 = *pfVar5;
            fVar35 = pfVar5[1];
            fVar18 = pfVar5[2];
            fVar19 = pfVar5[3];
            fVar17 = pfVar6[3] * fVar12;
            fVar14 = pfVar6[6] * fVar12;
            fVar30 = pfVar6[5] * fVar11;
            fVar24 = pfVar6[8] * fVar11;
            fVar27 = pfVar6[4] * fVar10;
            fVar20 = *pfVar6 * fVar12 * in_stack_00000070._4_4_;
            fVar21 = pfVar6[1] * fVar10 * in_stack_00000070._4_4_;
            fVar22 = pfVar6[2] * fVar11 * in_stack_00000070._4_4_;
            fVar15 = pfVar6[7] * fVar10;
            fVar23 = fVar35 * fVar22 - fVar18 * fVar21;
            fVar25 = fVar18 * fVar20 - fVar34 * fVar22;
            fVar23 = fVar23 + fVar23;
            fVar25 = fVar25 + fVar25;
            fVar26 = fVar34 * fVar21 - fVar35 * fVar20;
            fVar33 = fVar34 * fVar27 - fVar35 * fVar17;
            fVar13 = fVar35 * fVar30 - fVar18 * fVar27;
            fVar28 = fVar18 * fVar17 - fVar34 * fVar30;
            fVar29 = fVar34 * fVar15 - fVar35 * fVar14;
            fVar31 = fVar35 * fVar24 - fVar18 * fVar15;
            fVar32 = fVar18 * fVar14 - fVar34 * fVar24;
            fVar26 = fVar26 + fVar26;
            fVar13 = fVar13 + fVar13;
            fVar28 = fVar28 + fVar28;
            fVar33 = fVar33 + fVar33;
            fVar31 = fVar31 + fVar31;
            fVar32 = fVar32 + fVar32;
            fVar29 = fVar29 + fVar29;
            pfVar5 = (float *)(*param_15 + (long)((int)pfVar6[9] + iVar1) * (long)unaff_w26);
            fVar16 = pfVar6[10];
            uVar8 = uVar8 - 1;
            iVar7 = iVar7 + 1;
            fStack00000000000000a4 =
                 fStack00000000000000a4 +
                 fVar16 * (fVar17 + fVar19 * fVar13 + (fVar35 * fVar33 - fVar18 * fVar28));
            fStack00000000000000a8 =
                 fStack00000000000000a8 +
                 fVar16 * (fVar27 + fVar19 * fVar28 + (fVar18 * fVar13 - fVar34 * fVar33));
            fStack00000000000000ac =
                 fStack00000000000000ac +
                 fVar16 * (fVar30 + fVar19 * fVar33 + (fVar34 * fVar28 - fVar35 * fVar13));
            fStack0000000000000098 =
                 fStack0000000000000098 +
                 fVar16 * (fVar14 + fVar19 * fVar31 + (fVar35 * fVar29 - fVar18 * fVar32));
            fStack000000000000009c =
                 fStack000000000000009c +
                 fVar16 * (fVar15 + fVar19 * fVar32 + (fVar18 * fVar31 - fVar34 * fVar29));
            fStack00000000000000a0 =
                 fStack00000000000000a0 +
                 fVar16 * (fVar24 + fVar19 * fVar29 + (fVar34 * fVar32 - fVar35 * fVar31));
            fStack000000000000008c =
                 fStack000000000000008c +
                 fVar16 * (*pfVar5 + fVar20 + fVar19 * fVar23 + (fVar35 * fVar26 - fVar18 * fVar25))
            ;
            fStack0000000000000090 =
                 fStack0000000000000090 +
                 fVar16 * (pfVar5[1] +
                          fVar21 + fVar19 * fVar25 + (fVar18 * fVar23 - fVar34 * fVar26));
            fStack0000000000000094 =
                 fStack0000000000000094 +
                 fVar16 * (pfVar5[2] +
                          fVar22 + fVar19 * fVar26 + (fVar34 * fVar25 - fVar35 * fVar23));
          } while (uVar8 != 0);
        }
        fVar26 = *unaff_x19;
        fVar18 = unaff_x19[1];
        fVar19 = unaff_x19[2];
        fVar20 = unaff_x19[3];
        fStack000000000000008c = fStack000000000000008c - *param_6;
        fStack0000000000000090 = fStack0000000000000090 - param_6[1];
        fStack0000000000000094 = fStack0000000000000094 - param_6[2];
        fVar14 = fStack00000000000000ac * fVar18 - fStack00000000000000a8 * fVar19;
        fVar12 = fStack00000000000000a0 * fVar18 - fStack000000000000009c * fVar19;
        fVar12 = fVar12 + fVar12;
        fVar11 = fStack00000000000000a8 * fVar26 - fStack00000000000000a4 * fVar18;
        fVar10 = fStack000000000000009c * fVar26 - fStack0000000000000098 * fVar18;
        fVar16 = fVar26 * fStack0000000000000090 - fVar18 * fStack000000000000008c;
        fVar15 = fStack00000000000000a4 * fVar19 - fStack00000000000000ac * fVar26;
        fVar13 = fStack0000000000000098 * fVar19 - fStack00000000000000a0 * fVar26;
        fVar17 = fVar18 * fStack0000000000000094 - fVar19 * fStack0000000000000090;
        fVar24 = fVar19 * fStack000000000000008c - fVar26 * fStack0000000000000094;
        fVar14 = fVar14 + fVar14;
        fVar15 = fVar15 + fVar15;
        fVar11 = fVar11 + fVar11;
        fVar13 = fVar13 + fVar13;
        fVar10 = fVar10 + fVar10;
        fVar17 = fVar17 + fVar17;
        fVar24 = fVar24 + fVar24;
        fVar16 = fVar16 + fVar16;
        unaff_s11 = unaff_s11 +
                    (fStack00000000000000a8 + fVar20 * fVar15 + (fVar19 * fVar14 - fVar26 * fVar11))
                    * param_7[1];
        unaff_s12 = unaff_s12 +
                    (fStack00000000000000a4 + fVar20 * fVar14 + (fVar18 * fVar11 - fVar19 * fVar15))
                    * *param_7;
        param_17._4_4_ =
             param_17._4_4_ +
             (fStack0000000000000098 + fVar20 * fVar12 + (fVar18 * fVar10 - fVar19 * fVar13)) *
             *param_7;
        param_18._4_4_ =
             param_18._4_4_ +
             (fStack000000000000009c + fVar20 * fVar13 + (fVar19 * fVar12 - fVar26 * fVar10)) *
             param_7[1];
        param_18._0_4_ =
             (float)param_18 +
             (fStack00000000000000a0 + fVar20 * fVar10 + (fVar26 * fVar13 - fVar18 * fVar12)) *
             param_7[2];
        fVar12 = (fStack000000000000008c + fVar20 * fVar17 + (fVar18 * fVar16 - fVar19 * fVar24)) /
                 *param_8;
        fVar13 = (fStack0000000000000090 + fVar20 * fVar24 + (fVar19 * fVar17 - fVar26 * fVar16)) /
                 param_8[1];
        fVar10 = (fStack0000000000000094 + fVar20 * fVar16 + (fVar26 * fVar24 - fVar18 * fVar17)) /
                 param_8[2];
        unaff_s10 = unaff_s10 +
                    (fStack00000000000000ac + fVar20 * fVar11 + (fVar26 * fVar15 - fVar18 * fVar14))
                    * param_7[2];
        in_s31 = in_stack_00000070._4_4_;
      }
      if ((param_14 & 0x100000000) == 0) break;
      if (uVar3 == 0) {
        fVar11 = *param_7;
        fStack00000000000000ac = param_7[1];
        fStack00000000000000a8 = param_7[2];
        fVar14 = 0.0;
        fVar15 = 0.0;
        fVar16 = 0.0;
        fVar17 = 0.0;
        fVar13 = 0.0;
        fVar10 = 0.0;
      }
      else {
        fStack00000000000000ac = param_7[1];
        fVar11 = *param_7;
        fStack00000000000000a8 = param_7[2];
        iVar7 = iVar7 + uVar2;
        fVar10 = 0.0;
        fVar13 = 0.0;
        fVar17 = 0.0;
        fVar16 = 0.0;
        fVar15 = 0.0;
        fVar14 = 0.0;
        do {
          pfVar6 = (float *)(*param_3 + (long)iVar7 * (long)unaff_w25);
          pfVar5 = (float *)(*param_16 + (long)((int)pfVar6[9] + iVar1) * 0x10);
          fVar24 = *pfVar5;
          fVar18 = pfVar5[1];
          fVar20 = pfVar5[2];
          fVar28 = pfVar5[3];
          fVar21 = pfVar6[3] * fVar11;
          fVar22 = pfVar6[4] * fStack00000000000000ac;
          fVar25 = pfVar6[5] * fStack00000000000000a8;
          fVar12 = *pfVar6 * fVar11 * in_s31;
          fVar26 = pfVar6[1] * fStack00000000000000ac * in_s31;
          fVar19 = pfVar6[2] * fStack00000000000000a8 * in_s31;
          fVar27 = fVar24 * fVar26 - fVar18 * fVar12;
          fVar29 = fVar18 * fVar19 - fVar20 * fVar26;
          fVar30 = fVar20 * fVar12 - fVar24 * fVar19;
          fVar31 = fVar24 * fVar22 - fVar18 * fVar21;
          fVar33 = fVar18 * fVar25 - fVar20 * fVar22;
          fVar23 = fVar20 * fVar21 - fVar24 * fVar25;
          fVar29 = fVar29 + fVar29;
          fVar30 = fVar30 + fVar30;
          fVar27 = fVar27 + fVar27;
          fVar33 = fVar33 + fVar33;
          fVar23 = fVar23 + fVar23;
          fVar31 = fVar31 + fVar31;
          fVar32 = pfVar6[10];
          pfVar5 = (float *)(*param_15 + (long)((int)pfVar6[9] + iVar1) * (long)unaff_w26);
          uVar8 = uVar8 - 1;
          fVar16 = fVar16 + fVar32 * (fVar21 + fVar28 * fVar33 + (fVar18 * fVar31 - fVar20 * fVar23)
                                     );
          fVar15 = fVar15 + fVar32 * (fVar22 + fVar28 * fVar23 + (fVar20 * fVar33 - fVar24 * fVar31)
                                     );
          fVar14 = fVar14 + fVar32 * (fVar25 + fVar28 * fVar31 + (fVar24 * fVar23 - fVar18 * fVar33)
                                     );
          fVar10 = fVar10 + fVar32 * (*pfVar5 +
                                     fVar12 + fVar28 * fVar29 + (fVar18 * fVar27 - fVar20 * fVar30))
          ;
          fVar13 = fVar13 + fVar32 * (pfVar5[1] +
                                     fVar26 + fVar28 * fVar30 + (fVar20 * fVar29 - fVar24 * fVar27))
          ;
          fVar17 = fVar17 + fVar32 * (pfVar5[2] +
                                     fVar19 + fVar28 * fVar27 + (fVar24 * fVar30 - fVar18 * fVar29))
          ;
          iVar7 = iVar7 + 1;
        } while (uVar8 != 0);
      }
      fVar26 = *unaff_x19;
      fVar19 = unaff_x19[1];
      fVar27 = unaff_x19[2];
      fVar21 = unaff_x19[3];
      fVar10 = fVar10 - *param_6;
      fVar13 = fVar13 - param_6[1];
      fVar17 = fVar17 - param_6[2];
      fVar24 = fVar15 * fVar26 - fVar16 * fVar19;
      fVar18 = fVar14 * fVar19 - fVar15 * fVar27;
      fVar20 = fVar16 * fVar27 - fVar14 * fVar26;
      fVar22 = fVar26 * fVar13 - fVar19 * fVar10;
      fVar23 = fVar19 * fVar17 - fVar27 * fVar13;
      fVar25 = fVar27 * fVar10 - fVar26 * fVar17;
      fVar18 = fVar18 + fVar18;
      fVar20 = fVar20 + fVar20;
      fVar24 = fVar24 + fVar24;
      fVar23 = fVar23 + fVar23;
      fVar25 = fVar25 + fVar25;
      fVar22 = fVar22 + fVar22;
      fVar12 = (fVar10 + fVar21 * fVar23 + (fVar19 * fVar22 - fVar27 * fVar25)) / *param_8;
      fVar13 = (fVar13 + fVar21 * fVar25 + (fVar27 * fVar23 - fVar26 * fVar22)) / param_8[1];
      fVar10 = (fVar17 + fVar21 * fVar22 + (fVar26 * fVar25 - fVar19 * fVar23)) / param_8[2];
      unaff_s12 = unaff_s12 +
                  fVar11 * (fVar16 + fVar21 * fVar18 + (fVar19 * fVar24 - fVar27 * fVar20));
      unaff_s11 = unaff_s11 +
                  fStack00000000000000ac *
                  (fVar15 + fVar21 * fVar20 + (fVar27 * fVar18 - fVar26 * fVar24));
      unaff_s10 = unaff_s10 +
                  fStack00000000000000a8 *
                  (fVar14 + fVar21 * fVar24 + (fVar26 * fVar20 - fVar19 * fVar18));
      in_s31 = in_stack_00000070._4_4_;
    }
    if (uVar3 == 0) {
      in_s20 = 0.0;
      in_s21 = 0.0;
      in_s18 = 0.0;
    }
    else {
      iVar7 = iVar7 + uVar2;
      in_s18 = 0.0;
      in_s21 = 0.0;
      in_s20 = 0.0;
      do {
        pfVar9 = (float *)(*param_3 + (long)iVar7 * (long)unaff_w25);
        fVar13 = pfVar9[10];
        pfVar6 = (float *)(*param_15 + (long)((int)pfVar9[9] + iVar1) * (long)unaff_w26);
        pfVar5 = (float *)(*param_16 + (long)((int)pfVar9[9] + iVar1) * 0x10);
        fVar14 = *pfVar5;
        fVar15 = pfVar5[1];
        fVar16 = pfVar5[2];
        fVar17 = pfVar5[3];
        fVar10 = *pfVar9 * *param_7 * in_s31;
        fVar11 = pfVar9[1] * param_7[1] * in_s31;
        fVar12 = pfVar9[2] * param_7[2] * in_s31;
        fVar24 = fVar14 * fVar11 - fVar15 * fVar10;
        fVar26 = fVar15 * fVar12 - fVar16 * fVar11;
        fVar18 = fVar16 * fVar10 - fVar14 * fVar12;
        fVar26 = fVar26 + fVar26;
        fVar18 = fVar18 + fVar18;
        fVar24 = fVar24 + fVar24;
        uVar8 = uVar8 - 1;
        in_s18 = in_s18 + fVar13 * (*pfVar6 +
                                   fVar10 + fVar17 * fVar26 + (fVar15 * fVar24 - fVar16 * fVar18));
        in_s21 = in_s21 + fVar13 * (pfVar6[1] +
                                   fVar11 + fVar17 * fVar18 + (fVar16 * fVar26 - fVar14 * fVar24));
        in_s20 = in_s20 + fVar13 * (pfVar6[2] +
                                   fVar12 + fVar17 * fVar24 + (fVar14 * fVar18 - fVar15 * fVar26));
        iVar7 = iVar7 + 1;
      } while (uVar8 != 0);
    }
  } while( true );
}


