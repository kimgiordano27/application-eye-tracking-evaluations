/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRenderer$$Update
ENTRY_POINT: 0637caa0
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


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRenderer__Update
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
  float fVar22;
  float unaff_s10;
  float fVar23;
  float unaff_s11;
  float fVar24;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
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
    fVar11 = (param_3 + in_s18 + (param_2 * param_8 - in_s17)) / *param_16;
    fVar13 = (param_4 + in_s19 + (param_6 - param_1 * param_8)) / param_16[1];
    fVar17 = (param_5 + param_7 + (in_s20 - param_2 * in_s16)) / param_16[2];
    while( true ) {
      while( true ) {
        unaff_s15 = unaff_s15 + fVar17;
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
          fVar17 = *param_15;
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
            fVar20 = pfVar5[2];
            fVar21 = pfVar5[3];
            fVar16 = pfVar6[3] * fVar17;
            fVar12 = pfVar6[6] * fVar17;
            fVar30 = pfVar6[5] * fVar13;
            fVar18 = pfVar6[8] * fVar13;
            fVar27 = pfVar6[4] * fVar11;
            fVar22 = *pfVar6 * fVar17 * in_stack_00000070._4_4_;
            fVar23 = pfVar6[1] * fVar11 * in_stack_00000070._4_4_;
            fVar24 = pfVar6[2] * fVar13 * in_stack_00000070._4_4_;
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
            fStack00000000000000a4 =
                 fStack00000000000000a4 +
                 fVar15 * (fVar16 + fVar21 * fVar10 + (fVar35 * fVar33 - fVar20 * fVar28));
            fStack00000000000000a8 =
                 fStack00000000000000a8 +
                 fVar15 * (fVar27 + fVar21 * fVar28 + (fVar20 * fVar10 - fVar34 * fVar33));
            fStack00000000000000ac =
                 fStack00000000000000ac +
                 fVar15 * (fVar30 + fVar21 * fVar33 + (fVar34 * fVar28 - fVar35 * fVar10));
            fStack0000000000000098 =
                 fStack0000000000000098 +
                 fVar15 * (fVar12 + fVar21 * fVar31 + (fVar35 * fVar29 - fVar20 * fVar32));
            fStack000000000000009c =
                 fStack000000000000009c +
                 fVar15 * (fVar14 + fVar21 * fVar32 + (fVar20 * fVar31 - fVar34 * fVar29));
            fStack00000000000000a0 =
                 fStack00000000000000a0 +
                 fVar15 * (fVar18 + fVar21 * fVar29 + (fVar34 * fVar32 - fVar35 * fVar31));
            fStack000000000000008c =
                 fStack000000000000008c +
                 fVar15 * (*pfVar5 + fVar22 + fVar21 * fVar25 + (fVar35 * fVar19 - fVar20 * fVar26))
            ;
            fStack0000000000000090 =
                 fStack0000000000000090 +
                 fVar15 * (pfVar5[1] +
                          fVar23 + fVar21 * fVar26 + (fVar20 * fVar25 - fVar34 * fVar19));
            fStack0000000000000094 =
                 fStack0000000000000094 +
                 fVar15 * (pfVar5[2] +
                          fVar24 + fVar21 * fVar19 + (fVar34 * fVar26 - fVar35 * fVar25));
          } while (uVar8 != 0);
        }
        fVar19 = *unaff_x19;
        fVar20 = unaff_x19[1];
        fVar21 = unaff_x19[2];
        fVar22 = unaff_x19[3];
        fStack000000000000008c = fStack000000000000008c - *param_14;
        fStack0000000000000090 = fStack0000000000000090 - param_14[1];
        fStack0000000000000094 = fStack0000000000000094 - param_14[2];
        fVar12 = fStack00000000000000ac * fVar20 - fStack00000000000000a8 * fVar21;
        fVar13 = fStack00000000000000a0 * fVar20 - fStack000000000000009c * fVar21;
        fVar13 = fVar13 + fVar13;
        fVar10 = fStack00000000000000a8 * fVar19 - fStack00000000000000a4 * fVar20;
        fVar11 = fStack000000000000009c * fVar19 - fStack0000000000000098 * fVar20;
        fVar15 = fVar19 * fStack0000000000000090 - fVar20 * fStack000000000000008c;
        fVar14 = fStack00000000000000a4 * fVar21 - fStack00000000000000ac * fVar19;
        fVar17 = fStack0000000000000098 * fVar21 - fStack00000000000000a0 * fVar19;
        fVar16 = fVar20 * fStack0000000000000094 - fVar21 * fStack0000000000000090;
        fVar18 = fVar21 * fStack000000000000008c - fVar19 * fStack0000000000000094;
        fVar12 = fVar12 + fVar12;
        fVar14 = fVar14 + fVar14;
        fVar10 = fVar10 + fVar10;
        fVar17 = fVar17 + fVar17;
        fVar11 = fVar11 + fVar11;
        fVar16 = fVar16 + fVar16;
        fVar18 = fVar18 + fVar18;
        fVar15 = fVar15 + fVar15;
        unaff_s11 = unaff_s11 +
                    (fStack00000000000000a8 + fVar22 * fVar14 + (fVar21 * fVar12 - fVar19 * fVar10))
                    * param_15[1];
        unaff_s12 = unaff_s12 +
                    (fStack00000000000000a4 + fVar22 * fVar12 + (fVar20 * fVar10 - fVar21 * fVar14))
                    * *param_15;
        param_25._4_4_ =
             param_25._4_4_ +
             (fStack0000000000000098 + fVar22 * fVar13 + (fVar20 * fVar11 - fVar21 * fVar17)) *
             *param_15;
        param_26._4_4_ =
             param_26._4_4_ +
             (fStack000000000000009c + fVar22 * fVar17 + (fVar21 * fVar13 - fVar19 * fVar11)) *
             param_15[1];
        param_26._0_4_ =
             (float)param_26 +
             (fStack00000000000000a0 + fVar22 * fVar11 + (fVar19 * fVar17 - fVar20 * fVar13)) *
             param_15[2];
        fVar11 = (fStack000000000000008c + fVar22 * fVar16 + (fVar20 * fVar15 - fVar21 * fVar18)) /
                 *param_16;
        fVar13 = (fStack0000000000000090 + fVar22 * fVar18 + (fVar21 * fVar16 - fVar19 * fVar15)) /
                 param_16[1];
        fVar17 = (fStack0000000000000094 + fVar22 * fVar15 + (fVar19 * fVar18 - fVar20 * fVar16)) /
                 param_16[2];
        unaff_s10 = unaff_s10 +
                    (fStack00000000000000ac + fVar22 * fVar10 + (fVar19 * fVar14 - fVar20 * fVar12))
                    * param_15[2];
        in_s31 = in_stack_00000070._4_4_;
      }
      if ((param_22 & 0x100000000) == 0) break;
      if (uVar3 == 0) {
        fVar10 = *param_15;
        fStack00000000000000ac = param_15[1];
        fStack00000000000000a8 = param_15[2];
        fVar12 = 0.0;
        fVar14 = 0.0;
        fVar15 = 0.0;
        fVar17 = 0.0;
        fVar13 = 0.0;
        fVar11 = 0.0;
      }
      else {
        fStack00000000000000ac = param_15[1];
        fVar10 = *param_15;
        fStack00000000000000a8 = param_15[2];
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
          fVar24 = pfVar6[4] * fStack00000000000000ac;
          fVar26 = pfVar6[5] * fStack00000000000000a8;
          fVar16 = *pfVar6 * fVar10 * in_s31;
          fVar19 = pfVar6[1] * fStack00000000000000ac * in_s31;
          fVar21 = pfVar6[2] * fStack00000000000000a8 * in_s31;
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
          fVar15 = fVar15 + fVar32 * (fVar23 + fVar28 * fVar33 + (fVar20 * fVar31 - fVar22 * fVar25)
                                     );
          fVar14 = fVar14 + fVar32 * (fVar24 + fVar28 * fVar25 + (fVar22 * fVar33 - fVar18 * fVar31)
                                     );
          fVar12 = fVar12 + fVar32 * (fVar26 + fVar28 * fVar31 + (fVar18 * fVar25 - fVar20 * fVar33)
                                     );
          fVar11 = fVar11 + fVar32 * (*pfVar5 +
                                     fVar16 + fVar28 * fVar29 + (fVar20 * fVar27 - fVar22 * fVar30))
          ;
          fVar13 = fVar13 + fVar32 * (pfVar5[1] +
                                     fVar19 + fVar28 * fVar30 + (fVar22 * fVar29 - fVar18 * fVar27))
          ;
          fVar17 = fVar17 + fVar32 * (pfVar5[2] +
                                     fVar21 + fVar28 * fVar27 + (fVar18 * fVar30 - fVar20 * fVar29))
          ;
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
      unaff_s12 = unaff_s12 +
                  fVar10 * (fVar15 + fVar22 * fVar19 + (fVar20 * fVar16 - fVar26 * fVar21));
      unaff_s11 = unaff_s11 +
                  fStack00000000000000ac *
                  (fVar14 + fVar22 * fVar21 + (fVar26 * fVar19 - fVar18 * fVar16));
      unaff_s10 = unaff_s10 +
                  fStack00000000000000a8 *
                  (fVar12 + fVar22 * fVar16 + (fVar18 * fVar21 - fVar20 * fVar19));
      in_s31 = in_stack_00000070._4_4_;
    }
    if (uVar3 == 0) {
      param_5 = 0.0;
      param_4 = 0.0;
      param_3 = 0.0;
    }
    else {
      iVar7 = iVar7 + uVar2;
      param_3 = 0.0;
      param_4 = 0.0;
      param_5 = 0.0;
      do {
        pfVar9 = (float *)(*param_11 + (long)iVar7 * (long)unaff_w25);
        fVar10 = pfVar9[10];
        pfVar6 = (float *)(*param_23 + (long)((int)pfVar9[9] + iVar1) * (long)unaff_w26);
        pfVar5 = (float *)(*param_24 + (long)((int)pfVar9[9] + iVar1) * 0x10);
        fVar12 = *pfVar5;
        fVar14 = pfVar5[1];
        fVar15 = pfVar5[2];
        fVar16 = pfVar5[3];
        fVar11 = *pfVar9 * *param_15 * in_s31;
        fVar13 = pfVar9[1] * param_15[1] * in_s31;
        fVar17 = pfVar9[2] * param_15[2] * in_s31;
        fVar18 = fVar12 * fVar13 - fVar14 * fVar11;
        fVar19 = fVar14 * fVar17 - fVar15 * fVar13;
        fVar20 = fVar15 * fVar11 - fVar12 * fVar17;
        fVar19 = fVar19 + fVar19;
        fVar20 = fVar20 + fVar20;
        fVar18 = fVar18 + fVar18;
        uVar8 = uVar8 - 1;
        param_3 = param_3 + fVar10 * (*pfVar6 +
                                     fVar11 + fVar16 * fVar19 + (fVar14 * fVar18 - fVar15 * fVar20))
        ;
        param_4 = param_4 + fVar10 * (pfVar6[1] +
                                     fVar13 + fVar16 * fVar20 + (fVar15 * fVar19 - fVar12 * fVar18))
        ;
        param_5 = param_5 + fVar10 * (pfVar6[2] +
                                     fVar17 + fVar16 * fVar18 + (fVar12 * fVar20 - fVar14 * fVar19))
        ;
        iVar7 = iVar7 + 1;
      } while (uVar8 != 0);
    }
    param_1 = *unaff_x19;
    param_2 = unaff_x19[1];
    param_6 = unaff_x19[2];
    param_7 = unaff_x19[3];
    param_3 = param_3 - *param_14;
    param_4 = param_4 - param_14[1];
    param_5 = param_5 - param_14[2];
    fVar11 = param_2 * param_5 - param_6 * param_4;
    fVar13 = param_6 * param_3 - param_1 * param_5;
    param_8 = param_1 * param_4 - param_2 * param_3;
    in_s16 = fVar11 + fVar11;
    fVar13 = fVar13 + fVar13;
    param_8 = param_8 + param_8;
    in_s18 = param_7 * in_s16;
    in_s19 = param_7 * fVar13;
    param_7 = param_7 * param_8;
    in_s20 = param_1 * fVar13;
    in_s17 = param_6 * fVar13;
    param_6 = param_6 * in_s16;
  } while( true );
}


