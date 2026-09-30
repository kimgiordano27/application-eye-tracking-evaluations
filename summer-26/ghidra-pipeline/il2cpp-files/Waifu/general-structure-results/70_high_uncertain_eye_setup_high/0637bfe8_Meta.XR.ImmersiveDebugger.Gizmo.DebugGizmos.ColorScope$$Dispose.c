/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos.ColorScope$$Dispose
ENTRY_POINT: 0637bfe8
PROGRAM: Waifu-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos_ColorScope__Dispose
               (undefined8 param_1,long *param_2,long *param_3,int param_4,undefined8 param_5,
               float *param_6,float *param_7,float *param_8,undefined8 param_9,long *param_10,
               long *param_11,long *param_12,int param_13,ulong param_14,long *param_15,
               long *param_16,undefined8 param_17,undefined8 param_18)

{
  uint uVar1;
  uint uVar2;
  int in_w8;
  long lVar3;
  long in_x9;
  float *pfVar4;
  uint in_w11;
  float *pfVar5;
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
  ulong uVar7;
  float *pfVar8;
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
  float unaff_s10;
  float fVar21;
  float unaff_s11;
  float fVar22;
  float unaff_s12;
  float fVar23;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
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
  float in_s31;
  float fVar34;
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
    uVar1 = *(uint *)(in_x9 + (long)(in_w8 + param_4) * 4);
    uVar2 = uVar1 >> 0x1c;
    uVar7 = (ulong)uVar2;
    uVar1 = uVar1 & 0xfffffff;
    if ((in_w11 & 1) == 0) {
      if ((param_14 & 0x100000000) == 0) {
        if (uVar2 == 0) {
          fVar12 = 0.0;
          fVar10 = 0.0;
          fVar9 = 0.0;
        }
        else {
          iVar6 = in_w17 + uVar1;
          fVar9 = 0.0;
          fVar10 = 0.0;
          fVar12 = 0.0;
          do {
            pfVar8 = (float *)(*param_3 + (long)iVar6 * (long)unaff_w25);
            fVar15 = pfVar8[10];
            pfVar5 = (float *)(*param_15 + (long)((int)pfVar8[9] + unaff_w28) * (long)unaff_w26);
            pfVar4 = (float *)(*param_16 + (long)((int)pfVar8[9] + unaff_w28) * 0x10);
            fVar16 = *pfVar4;
            fVar17 = pfVar4[1];
            fVar18 = pfVar4[2];
            fVar19 = pfVar4[3];
            fVar11 = *pfVar8 * *param_7 * in_s31;
            fVar13 = pfVar8[1] * param_7[1] * in_s31;
            fVar14 = pfVar8[2] * param_7[2] * in_s31;
            fVar20 = fVar16 * fVar13 - fVar17 * fVar11;
            fVar21 = fVar17 * fVar14 - fVar18 * fVar13;
            fVar22 = fVar18 * fVar11 - fVar16 * fVar14;
            fVar21 = fVar21 + fVar21;
            fVar22 = fVar22 + fVar22;
            fVar20 = fVar20 + fVar20;
            uVar7 = uVar7 - 1;
            fVar9 = fVar9 + fVar15 * (*pfVar5 +
                                     fVar11 + fVar19 * fVar21 + (fVar17 * fVar20 - fVar18 * fVar22))
            ;
            fVar10 = fVar10 + fVar15 * (pfVar5[1] +
                                       fVar13 + fVar19 * fVar22 +
                                       (fVar18 * fVar21 - fVar16 * fVar20));
            fVar12 = fVar12 + fVar15 * (pfVar5[2] +
                                       fVar14 + fVar19 * fVar20 +
                                       (fVar16 * fVar22 - fVar17 * fVar21));
            iVar6 = iVar6 + 1;
          } while (uVar7 != 0);
        }
        fVar11 = *unaff_x19;
        fVar13 = unaff_x19[1];
        fVar14 = unaff_x19[2];
        fVar15 = unaff_x19[3];
        fVar9 = fVar9 - *param_6;
        fVar10 = fVar10 - param_6[1];
        fVar12 = fVar12 - param_6[2];
        fVar17 = fVar13 * fVar12 - fVar14 * fVar10;
        fVar18 = fVar14 * fVar9 - fVar11 * fVar12;
        fVar16 = fVar11 * fVar10 - fVar13 * fVar9;
        fVar17 = fVar17 + fVar17;
        fVar18 = fVar18 + fVar18;
        fVar16 = fVar16 + fVar16;
        fVar9 = (fVar9 + fVar15 * fVar17 + (fVar13 * fVar16 - fVar14 * fVar18)) / *param_8;
        fVar10 = (fVar10 + fVar15 * fVar18 + (fVar14 * fVar17 - fVar11 * fVar16)) / param_8[1];
        fVar12 = (fVar12 + fVar15 * fVar16 + (fVar11 * fVar18 - fVar13 * fVar17)) / param_8[2];
      }
      else {
        if (uVar2 == 0) {
          fVar11 = *param_7;
          fStack00000000000000ac = param_7[1];
          fStack00000000000000a8 = param_7[2];
          fVar13 = 0.0;
          fVar14 = 0.0;
          fVar15 = 0.0;
          fVar12 = 0.0;
          fVar10 = 0.0;
          fVar9 = 0.0;
        }
        else {
          fStack00000000000000ac = param_7[1];
          fVar11 = *param_7;
          fStack00000000000000a8 = param_7[2];
          iVar6 = in_w17 + uVar1;
          fVar9 = 0.0;
          fVar10 = 0.0;
          fVar12 = 0.0;
          fVar15 = 0.0;
          fVar14 = 0.0;
          fVar13 = 0.0;
          do {
            pfVar5 = (float *)(*param_3 + (long)iVar6 * (long)unaff_w25);
            pfVar4 = (float *)(*param_16 + (long)((int)pfVar5[9] + unaff_w28) * 0x10);
            fVar17 = *pfVar4;
            fVar19 = pfVar4[1];
            fVar21 = pfVar4[2];
            fVar27 = pfVar4[3];
            fVar22 = pfVar5[3] * fVar11;
            fVar23 = pfVar5[4] * fStack00000000000000ac;
            fVar25 = pfVar5[5] * fStack00000000000000a8;
            fVar16 = *pfVar5 * fVar11 * in_s31;
            fVar18 = pfVar5[1] * fStack00000000000000ac * in_s31;
            fVar20 = pfVar5[2] * fStack00000000000000a8 * in_s31;
            fVar26 = fVar17 * fVar18 - fVar19 * fVar16;
            fVar28 = fVar19 * fVar20 - fVar21 * fVar18;
            fVar29 = fVar21 * fVar16 - fVar17 * fVar20;
            fVar30 = fVar17 * fVar23 - fVar19 * fVar22;
            fVar32 = fVar19 * fVar25 - fVar21 * fVar23;
            fVar24 = fVar21 * fVar22 - fVar17 * fVar25;
            fVar28 = fVar28 + fVar28;
            fVar29 = fVar29 + fVar29;
            fVar26 = fVar26 + fVar26;
            fVar32 = fVar32 + fVar32;
            fVar24 = fVar24 + fVar24;
            fVar30 = fVar30 + fVar30;
            fVar31 = pfVar5[10];
            pfVar4 = (float *)(*param_15 + (long)((int)pfVar5[9] + unaff_w28) * (long)unaff_w26);
            uVar7 = uVar7 - 1;
            fVar15 = fVar15 + fVar31 * (fVar22 + fVar27 * fVar32 +
                                       (fVar19 * fVar30 - fVar21 * fVar24));
            fVar14 = fVar14 + fVar31 * (fVar23 + fVar27 * fVar24 +
                                       (fVar21 * fVar32 - fVar17 * fVar30));
            fVar13 = fVar13 + fVar31 * (fVar25 + fVar27 * fVar30 +
                                       (fVar17 * fVar24 - fVar19 * fVar32));
            fVar9 = fVar9 + fVar31 * (*pfVar4 +
                                     fVar16 + fVar27 * fVar28 + (fVar19 * fVar26 - fVar21 * fVar29))
            ;
            fVar10 = fVar10 + fVar31 * (pfVar4[1] +
                                       fVar18 + fVar27 * fVar29 +
                                       (fVar21 * fVar28 - fVar17 * fVar26));
            fVar12 = fVar12 + fVar31 * (pfVar4[2] +
                                       fVar20 + fVar27 * fVar26 +
                                       (fVar17 * fVar29 - fVar19 * fVar28));
            iVar6 = iVar6 + 1;
          } while (uVar7 != 0);
        }
        fVar17 = *unaff_x19;
        fVar19 = unaff_x19[1];
        fVar25 = unaff_x19[2];
        fVar21 = unaff_x19[3];
        fVar9 = fVar9 - *param_6;
        fVar10 = fVar10 - param_6[1];
        fVar12 = fVar12 - param_6[2];
        fVar16 = fVar14 * fVar17 - fVar15 * fVar19;
        fVar18 = fVar13 * fVar19 - fVar14 * fVar25;
        fVar20 = fVar15 * fVar25 - fVar13 * fVar17;
        fVar22 = fVar17 * fVar10 - fVar19 * fVar9;
        fVar23 = fVar19 * fVar12 - fVar25 * fVar10;
        fVar24 = fVar25 * fVar9 - fVar17 * fVar12;
        fVar18 = fVar18 + fVar18;
        fVar20 = fVar20 + fVar20;
        fVar16 = fVar16 + fVar16;
        fVar23 = fVar23 + fVar23;
        fVar24 = fVar24 + fVar24;
        fVar22 = fVar22 + fVar22;
        fVar9 = (fVar9 + fVar21 * fVar23 + (fVar19 * fVar22 - fVar25 * fVar24)) / *param_8;
        fVar10 = (fVar10 + fVar21 * fVar24 + (fVar25 * fVar23 - fVar17 * fVar22)) / param_8[1];
        fVar12 = (fVar12 + fVar21 * fVar22 + (fVar17 * fVar24 - fVar19 * fVar23)) / param_8[2];
        unaff_s12 = unaff_s12 +
                    fVar11 * (fVar15 + fVar21 * fVar18 + (fVar19 * fVar16 - fVar25 * fVar20));
        unaff_s11 = unaff_s11 +
                    fStack00000000000000ac *
                    (fVar14 + fVar21 * fVar20 + (fVar25 * fVar18 - fVar17 * fVar16));
        unaff_s10 = unaff_s10 +
                    fStack00000000000000a8 *
                    (fVar13 + fVar21 * fVar16 + (fVar17 * fVar20 - fVar19 * fVar18));
        in_s31 = in_stack_00000070._4_4_;
      }
    }
    else {
      if (uVar2 == 0) {
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
        fVar9 = param_7[1];
        iVar6 = in_w17 + uVar1;
        fVar10 = param_7[2];
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
          pfVar5 = (float *)(*param_3 + (long)iVar6 * (long)unaff_w25);
          pfVar4 = (float *)(*param_16 + (long)((int)pfVar5[9] + unaff_w28) * 0x10);
          fVar33 = *pfVar4;
          fVar34 = pfVar4[1];
          fVar19 = pfVar4[2];
          fVar20 = pfVar4[3];
          fVar16 = pfVar5[3] * fVar12;
          fVar13 = pfVar5[6] * fVar12;
          fVar29 = pfVar5[5] * fVar10;
          fVar17 = pfVar5[8] * fVar10;
          fVar26 = pfVar5[4] * fVar9;
          fVar21 = *pfVar5 * fVar12 * in_stack_00000070._4_4_;
          fVar22 = pfVar5[1] * fVar9 * in_stack_00000070._4_4_;
          fVar23 = pfVar5[2] * fVar10 * in_stack_00000070._4_4_;
          fVar14 = pfVar5[7] * fVar9;
          fVar24 = fVar34 * fVar23 - fVar19 * fVar22;
          fVar25 = fVar19 * fVar21 - fVar33 * fVar23;
          fVar24 = fVar24 + fVar24;
          fVar25 = fVar25 + fVar25;
          fVar18 = fVar33 * fVar22 - fVar34 * fVar21;
          fVar32 = fVar33 * fVar26 - fVar34 * fVar16;
          fVar11 = fVar34 * fVar29 - fVar19 * fVar26;
          fVar27 = fVar19 * fVar16 - fVar33 * fVar29;
          fVar28 = fVar33 * fVar14 - fVar34 * fVar13;
          fVar30 = fVar34 * fVar17 - fVar19 * fVar14;
          fVar31 = fVar19 * fVar13 - fVar33 * fVar17;
          fVar18 = fVar18 + fVar18;
          fVar11 = fVar11 + fVar11;
          fVar27 = fVar27 + fVar27;
          fVar32 = fVar32 + fVar32;
          fVar30 = fVar30 + fVar30;
          fVar31 = fVar31 + fVar31;
          fVar28 = fVar28 + fVar28;
          pfVar4 = (float *)(*param_15 + (long)((int)pfVar5[9] + unaff_w28) * (long)unaff_w26);
          fVar15 = pfVar5[10];
          uVar7 = uVar7 - 1;
          iVar6 = iVar6 + 1;
          fStack00000000000000a4 =
               fStack00000000000000a4 +
               fVar15 * (fVar16 + fVar20 * fVar11 + (fVar34 * fVar32 - fVar19 * fVar27));
          fStack00000000000000a8 =
               fStack00000000000000a8 +
               fVar15 * (fVar26 + fVar20 * fVar27 + (fVar19 * fVar11 - fVar33 * fVar32));
          fStack00000000000000ac =
               fStack00000000000000ac +
               fVar15 * (fVar29 + fVar20 * fVar32 + (fVar33 * fVar27 - fVar34 * fVar11));
          fStack0000000000000098 =
               fStack0000000000000098 +
               fVar15 * (fVar13 + fVar20 * fVar30 + (fVar34 * fVar28 - fVar19 * fVar31));
          fStack000000000000009c =
               fStack000000000000009c +
               fVar15 * (fVar14 + fVar20 * fVar31 + (fVar19 * fVar30 - fVar33 * fVar28));
          fStack00000000000000a0 =
               fStack00000000000000a0 +
               fVar15 * (fVar17 + fVar20 * fVar28 + (fVar33 * fVar31 - fVar34 * fVar30));
          fStack000000000000008c =
               fStack000000000000008c +
               fVar15 * (*pfVar4 + fVar21 + fVar20 * fVar24 + (fVar34 * fVar18 - fVar19 * fVar25));
          fStack0000000000000090 =
               fStack0000000000000090 +
               fVar15 * (pfVar4[1] + fVar22 + fVar20 * fVar25 + (fVar19 * fVar24 - fVar33 * fVar18))
          ;
          fStack0000000000000094 =
               fStack0000000000000094 +
               fVar15 * (pfVar4[2] + fVar23 + fVar20 * fVar18 + (fVar33 * fVar25 - fVar34 * fVar24))
          ;
        } while (uVar7 != 0);
      }
      fVar18 = *unaff_x19;
      fVar19 = unaff_x19[1];
      fVar20 = unaff_x19[2];
      fVar21 = unaff_x19[3];
      fStack000000000000008c = fStack000000000000008c - *param_6;
      fStack0000000000000090 = fStack0000000000000090 - param_6[1];
      fStack0000000000000094 = fStack0000000000000094 - param_6[2];
      fVar13 = fStack00000000000000ac * fVar19 - fStack00000000000000a8 * fVar20;
      fVar10 = fStack00000000000000a0 * fVar19 - fStack000000000000009c * fVar20;
      fVar10 = fVar10 + fVar10;
      fVar11 = fStack00000000000000a8 * fVar18 - fStack00000000000000a4 * fVar19;
      fVar9 = fStack000000000000009c * fVar18 - fStack0000000000000098 * fVar19;
      fVar15 = fVar18 * fStack0000000000000090 - fVar19 * fStack000000000000008c;
      fVar14 = fStack00000000000000a4 * fVar20 - fStack00000000000000ac * fVar18;
      fVar12 = fStack0000000000000098 * fVar20 - fStack00000000000000a0 * fVar18;
      fVar16 = fVar19 * fStack0000000000000094 - fVar20 * fStack0000000000000090;
      fVar17 = fVar20 * fStack000000000000008c - fVar18 * fStack0000000000000094;
      fVar13 = fVar13 + fVar13;
      fVar14 = fVar14 + fVar14;
      fVar11 = fVar11 + fVar11;
      fVar12 = fVar12 + fVar12;
      fVar9 = fVar9 + fVar9;
      fVar16 = fVar16 + fVar16;
      fVar17 = fVar17 + fVar17;
      fVar15 = fVar15 + fVar15;
      unaff_s11 = unaff_s11 +
                  (fStack00000000000000a8 + fVar21 * fVar14 + (fVar20 * fVar13 - fVar18 * fVar11)) *
                  param_7[1];
      unaff_s12 = unaff_s12 +
                  (fStack00000000000000a4 + fVar21 * fVar13 + (fVar19 * fVar11 - fVar20 * fVar14)) *
                  *param_7;
      param_17._4_4_ =
           param_17._4_4_ +
           (fStack0000000000000098 + fVar21 * fVar10 + (fVar19 * fVar9 - fVar20 * fVar12)) *
           *param_7;
      param_18._4_4_ =
           param_18._4_4_ +
           (fStack000000000000009c + fVar21 * fVar12 + (fVar20 * fVar10 - fVar18 * fVar9)) *
           param_7[1];
      param_18._0_4_ =
           (float)param_18 +
           (fStack00000000000000a0 + fVar21 * fVar9 + (fVar18 * fVar12 - fVar19 * fVar10)) *
           param_7[2];
      fVar9 = (fStack000000000000008c + fVar21 * fVar16 + (fVar19 * fVar15 - fVar20 * fVar17)) /
              *param_8;
      fVar10 = (fStack0000000000000090 + fVar21 * fVar17 + (fVar20 * fVar16 - fVar18 * fVar15)) /
               param_8[1];
      fVar12 = (fStack0000000000000094 + fVar21 * fVar15 + (fVar18 * fVar17 - fVar19 * fVar16)) /
               param_8[2];
      unaff_s10 = unaff_s10 +
                  (fStack00000000000000ac + fVar21 * fVar11 + (fVar18 * fVar14 - fVar19 * fVar13)) *
                  param_7[2];
      in_s31 = in_stack_00000070._4_4_;
    }
    unaff_s15 = unaff_s15 + fVar12;
    unaff_s14 = unaff_s14 + fVar10;
    unaff_s13 = unaff_s13 + fVar9;
    in_w13 = in_w13 + 1;
    do {
      do {
        in_x15 = in_x15 + 1;
        unaff_w23 = unaff_w23 << 1;
        if (in_x15 == 4) {
          if (0 < in_w13) {
            fVar9 = (float)in_w13;
            lVar3 = (long)param_13;
            pfVar4 = (float *)(*param_12 + (long)param_13 * 0xc);
            *pfVar4 = unaff_s13 / fVar9;
            pfVar4[1] = unaff_s14 / fVar9;
            pfVar4[2] = unaff_s15 / fVar9;
            if ((in_w11 & 1) == 0) {
              if ((param_14 & 0x100000000) != 0) {
                pfVar4 = (float *)(*param_11 + lVar3 * 0xc);
                *pfVar4 = unaff_s12 / fVar9;
                pfVar4[1] = unaff_s11 / fVar9;
                pfVar4[2] = unaff_s10 / fVar9;
              }
            }
            else {
              pfVar4 = (float *)(*param_11 + lVar3 * 0xc);
              *pfVar4 = unaff_s12 / fVar9;
              pfVar4[1] = unaff_s11 / fVar9;
              pfVar4[2] = unaff_s10 / fVar9;
              pfVar4 = (float *)(*param_10 + lVar3 * 0x10);
              *pfVar4 = param_17._4_4_ / fVar9;
              pfVar4[1] = param_18._4_4_ / fVar9;
              pfVar4[2] = (float)param_18 / fVar9;
              pfVar4[3] = -1.0;
            }
          }
          return;
        }
      } while (((unaff_w27 >> (ulong)((uint)in_x15 & 0x1f)) >> 0x1c & 1) == 0);
      in_w8 = *(int *)(unaff_x24 + in_x15 * 4);
      in_w17 = *(int *)(unaff_x24 + in_x15 * 4);
      unaff_w28 = *(int *)(unaff_x24 + in_x15 * 4);
    } while ((unaff_w23 & in_w16) == 0);
    in_x9 = *param_2;
  } while( true );
}


