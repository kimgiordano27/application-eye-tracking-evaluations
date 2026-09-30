/*
FUNCTION_NAME: UnityEngine.Display$$Activate
ENTRY_POINT: 03585714
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_11;validity_or_gating_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_11
*/


float UnityEngine_Display__Activate
                (long param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
                float param_7)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 in_NG;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  undefined1 uVar14;
  long unaff_x19;
  uint *unaff_x21;
  int iVar15;
  ulong unaff_x22;
  long *unaff_x23;
  long *unaff_x25;
  uint unaff_w26;
  uint unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float unaff_s8;
  float fVar22;
  uint uVar23;
  ulong unaff_d10;
  float fVar24;
  undefined4 uVar25;
  float unaff_s11;
  undefined4 uVar26;
  undefined4 uVar27;
  float unaff_s13;
  float fVar28;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  float *in_stack_00000010;
  uint uStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  uint uStack0000000000000028;
  float fStack000000000000002c;
  uint uStack0000000000000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  ulong in_stack_00000040;
  float fStack0000000000000048;
  uint uStack000000000000004c;
  long *in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  uint uStack0000000000000070;
  float fStack0000000000000074;
  long *in_stack_00000078;
  uint uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined8 in_stack_000000c8;
  undefined4 in_stack_000000d0;
  long in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined4 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined4 in_stack_00000130;
  undefined4 in_stack_000001a8;
  uint in_stack_00000c10;
  uint in_stack_00000c14;
  
  uVar5 = in_stack_00000040;
  uVar4 = _uStack0000000000000030;
code_r0x03585714:
  fVar19 = param_5;
  if (!(bool)in_NG) {
    fVar19 = param_7;
  }
  *(float *)(unaff_x19 + 0x4cc) = fVar19;
  *(float *)(unaff_x19 + 0x4c8) = param_3;
  *(float *)(param_1 + 0x154) = param_6;
  *(float *)(param_1 + 0x158) = param_5;
  *(float *)(param_1 + 0x148) = unaff_s8 - param_2;
  *(float *)(unaff_x19 + 0x4c0) = unaff_s8 - param_2;
  *(float *)(param_1 + 0x150) = param_4;
  *(float *)(unaff_x19 + 0x4c4) = param_4;
  fVar19 = unaff_s15;
  uVar9 = in_stack_00000c10;
  if ((*(int *)(unaff_x19 + 0x4a8) == 0) || (*(char *)(unaff_x19 + 0x33c) != '\0')) {
    *(float *)(unaff_x19 + 0x4b8) = param_3;
    if (*(long *)(unaff_x19 + 0x100) == 0) {
LAB_03586310:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    fVar22 = *(float *)(unaff_x19 + 0x4bc);
    fVar18 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x100) + 0x50,0);
    fStack0000000000000068 = (unaff_s14 * fVar18) / fStack0000000000000068;
    param_2 = *(float *)(unaff_x19 + 0x4d8);
    if (fVar22 <= fStack0000000000000068) {
      fVar22 = fStack0000000000000068;
    }
    *(float *)(unaff_x19 + 0x4bc) = fVar22;
  }
  do {
    unaff_s15 = unaff_s14;
    iVar15 = (int)unaff_x22;
    in_stack_00000c10 = uVar9;
    if (param_2 == 0.0) {
      if ((unaff_w29 == 0) || (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498))) {
        fVar22 = *(float *)(unaff_x19 + 0x4b4);
        if (*(float *)(unaff_x19 + 0x4b4) <= unaff_s8) {
          fVar22 = unaff_s8;
        }
        *(float *)(unaff_x19 + 0x4b4) = fVar22;
        goto LAB_035857b0;
      }
      bVar7 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
      if (unaff_w28 == 9) goto LAB_035857c4;
LAB_03585804:
      if ((((uStack000000000000004c | unaff_w26 ^ 0xffffffff) & 1) == 0) ||
         (*(int *)(unaff_x19 + 0x644) == 1)) goto UnityEngine_Display__Activate;
LAB_03585998:
      fVar19 = *(float *)(unaff_x19 + 0x640);
      if (*(float *)(unaff_x19 + 0x2b0) == 0.0) {
        fVar22 = (float)FUN_03776cb4(&stack0x00000120,0);
        if (*unaff_x23 == 0) goto LAB_03586310;
        fVar22 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                 (*(float *)(unaff_x19 + 0x2ac) +
                 unaff_s15 * ((float)unaff_d10 + fVar22) +
                 fStack0000000000000058 *
                 (unaff_s11 + fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
      }
      else {
        if (*unaff_x23 == 0) goto LAB_03586310;
        fVar22 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                 (*(float *)(unaff_x19 + 0x2ac) +
                 (*(float *)(unaff_x19 + 0x2b0) - fStack0000000000000060) +
                 fStack0000000000000058 * (fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)))
        ;
      }
      fVar19 = fVar19 + fVar22;
      *(float *)(unaff_x19 + 0x640) = fVar19;
      if ((unaff_w28 == 0x200b) || (unaff_w29 != 0)) {
        fVar19 = fVar19 + fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b4);
        *(float *)(unaff_x19 + 0x640) = fVar19;
      }
      if (unaff_w28 == 0xd) {
        if (fStack0000000000000064 <= fStack000000000000006c + fVar19) {
          fStack0000000000000064 = fStack000000000000006c + fVar19;
        }
        fStack000000000000006c = 0.0;
        fVar19 = *(float *)(unaff_x19 + 0x40c) + 0.0;
LAB_03585a9c:
        bVar7 = false;
        *(float *)(unaff_x19 + 0x640) = fVar19;
LAB_03585aa4:
        if (*unaff_x21 == uStack0000000000000070) goto LAB_03585b64;
      }
      else {
        bVar7 = unaff_w28 == 10;
        if (((0xb < unaff_w28) || ((1 << (ulong)(unaff_w28 & 0x1f) & 0xc08U) == 0)) &&
           (1 < unaff_w28 - 0x2028)) goto LAB_03585aa4;
LAB_03585b64:
        if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
          fVar19 = *(float *)(unaff_x19 + 0x4c8);
          fVar22 = *(float *)(unaff_x19 + 0x4d0);
          if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          fVar19 = fVar19 - fVar22;
          if (((fStack000000000000001c < ABS(fVar19)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
             (*(char *)(unaff_x19 + 0x33c) == '\0')) {
            *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar19;
            *(float *)(unaff_x19 + 0x4d8) = fVar19 + *(float *)(unaff_x19 + 0x4d8);
          }
        }
        fVar19 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
        fStack0000000000000038 = *(float *)(unaff_x19 + 0x4c4);
        if (fVar19 <= *(float *)(unaff_x19 + 0x4c4)) {
          fStack0000000000000038 = fVar19;
        }
        fVar22 = in_stack_00000040._4_4_ +
                 fStack0000000000000048 + fStack000000000000006c + fStack000000000000005c;
        fVar19 = fStack0000000000000064;
        if (fStack0000000000000064 <= fVar22) {
          fVar19 = fVar22;
        }
        *(float *)(unaff_x19 + 0x4c4) = fStack0000000000000038;
        fStack000000000000006c = fVar19;
        if (*(uint *)(unaff_x19 + 0x494) != uStack0000000000000070) {
          fStack000000000000006c = unaff_s13;
          fStack0000000000000064 = fVar19;
        }
        fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fStack0000000000000038;
        *(undefined1 *)(unaff_x19 + 0x33c) = 0;
        if (bVar7) {
LAB_03585e8c:
          FUN_0358c4f0();
          FUN_0358c4f0();
          uVar9 = *(uint *)(unaff_x19 + 0x494);
          lVar11 = *(long *)(unaff_x19 + 0x488);
          iVar8 = uVar9 + 1;
          *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
          *(int *)(unaff_x19 + 0x498) = iVar8;
          if (lVar11 != 0) {
            if (*(uint *)(lVar11 + 0x18) <= uVar9) goto UnityEngine_LightProbesQuery__get_IsCreated;
            fVar19 = *(float *)(lVar11 + (long)(int)uVar9 * unaff_x22 + 0x154);
            if (*(float *)(unaff_x19 + 0x2c0) == DAT_00d38ba4) {
              fVar22 = 0.0;
              if (!(bool)(unaff_w28 != 0x2029 & (bVar7 ^ 1U))) {
                fVar22 = *(float *)(unaff_x19 + 0x2cc);
              }
              uVar14 = 0;
              fVar22 = fVar19 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                       fStack0000000000000020 *
                       (fStack0000000000000024 + *(float *)(unaff_x19 + 700)) +
                       fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar22) +
                       *(float *)(unaff_x19 + 0x4d8);
            }
            else {
              fVar22 = 0.0;
              if (!(bool)(unaff_w28 != 0x2029 & (bVar7 ^ 1U))) {
                fVar22 = *(float *)(unaff_x19 + 0x2cc);
              }
              uVar14 = 1;
              fVar22 = *(float *)(unaff_x19 + 0x4d8) +
                       *(float *)(unaff_x19 + 0x2c0) +
                       fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar22);
            }
            *(float *)(unaff_x19 + 0x4d8) = fVar22;
            *(undefined1 *)(unaff_x19 + 0x2c4) = uVar14;
            puVar3 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar11 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar11 = *(long *)puVar3;
              iVar8 = *unaff_x21 + 1;
            }
            uVar20 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x15a8);
            *(float *)(unaff_x19 + 0x640) =
                 *(float *)(unaff_x19 + 0x408) + unaff_s13 + *(float *)(unaff_x19 + 0x40c);
            uVar20 = NEON_rev64(uVar20,4);
            *(float *)(unaff_x19 + 0x4d0) = fVar19;
            *(undefined8 *)(unaff_x19 + 0x4c8) = uVar20;
            *(int *)(unaff_x19 + 0x494) = iVar8;
            goto LAB_03586300;
          }
          goto LAB_03586310;
        }
        if ((int)unaff_w28 < 0x2028) {
          if (unaff_w28 == 3) {
            if (*(long *)(unaff_x19 + 0x478) == 0) goto LAB_03586310;
            unaff_w27 = *(uint *)(*(long *)(unaff_x19 + 0x478) + 0x18);
            unaff_w28 = 3;
          }
          else if ((unaff_w28 == 0xb) || (unaff_w28 == 0x2d)) goto LAB_03585e8c;
        }
        else if (unaff_w28 - 0x2028 < 2) goto LAB_03585e8c;
      }
      if (((uVar4 & 0x100000000) != 0) || ((*(uint *)(unaff_x19 + 0x2e0) | 2) == 3)) {
        if ((unaff_w29 == 0) &&
           (((unaff_w28 != 0x2d && (unaff_w28 != 0x200b)) && (unaff_w28 != 0xad)))) {
          if (*(char *)(unaff_x19 + 0x2da) == '\0') {
LAB_03585d14:
            if (((((0x2bfd < unaff_w28 - 0xac01) && (0xfd < unaff_w28 - 0x1101)) &&
                 (0x1d < unaff_w28 - 0xa961)) || (uVar12 = FUN_03597a54(0), (uVar12 & 1) != 0)) &&
               ((((0xed < unaff_w28 - 0xff01 && (0x1d < unaff_w28 - 0xfe31)) &&
                 (0x717d < unaff_w28 - 0x2e81)) && (0x1fd < unaff_w28 - 0xf901))))
            goto LAB_03585adc;
            lVar11 = FUN_035978e8(0);
            if ((lVar11 == 0) || (*(long *)(lVar11 + 0x10) == 0)) goto LAB_03586310;
            uStack00000000000000c0 = unaff_w28;
            uVar9 = FUN_0219c130(*(long *)(lVar11 + 0x10),&stack0x000000c0,
                                 *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
            if ((int)uStack0000000000000070 <= (int)*unaff_x21) {
              if (((uStack0000000000000030 | uVar9 ^ 0xffffffff) & 1) != 0) {
LAB_035862b0:
                FUN_0358c4f0();
              }
LAB_035862c4:
              uStack0000000000000030 = 0;
              uStack0000000000000028 = 1;
              goto LAB_035862f4;
            }
            lVar11 = FUN_035978e8(0);
            if ((lVar11 == 0) || (lVar16 = *in_stack_00000078, lVar16 == 0)) goto LAB_03586310;
            if (*(uint *)(lVar16 + 0x18) <= *unaff_x21 + 1)
            goto UnityEngine_LightProbesQuery__get_IsCreated;
            if (*(long *)(lVar11 + 0x18) == 0) goto LAB_03586310;
            uStack00000000000000c0 =
                 (uint)*(ushort *)(lVar16 + (long)(int)(*unaff_x21 + 1) * (long)iVar15 + 0x20);
            uVar12 = FUN_0219c130(*(long *)(lVar11 + 0x18),&stack0x000000c0,
                                  *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
            if (((uStack0000000000000030 | uVar9 ^ 0xffffffff) & 1) == 0) goto LAB_035862c4;
            if ((uVar12 & 1) == 0) goto LAB_035862b0;
            if ((uStack0000000000000030 & 1) == 0) goto LAB_035862c4;
            if (unaff_w29 != 0) {
              FUN_0358c4f0();
            }
            FUN_0358c4f0();
            uStack0000000000000028 = 1;
LAB_03585ccc:
            uStack0000000000000030 = 1;
          }
          else {
LAB_03585adc:
            if ((uStack0000000000000028 & 1) == 0) {
              if ((uStack0000000000000030 & 1) != 0) {
                if ((((uStack000000000000004c | unaff_w26 ^ 0xffffffff) & 1) == 0) ||
                   (unaff_w29 != 0)) {
                  FUN_0358c4f0();
                }
                FUN_0358c4f0();
                uStack0000000000000028 = 0;
                goto LAB_03585ccc;
              }
              uStack0000000000000028 = 0;
              uStack0000000000000030 = 0;
            }
            else {
              lVar11 = FUN_035978e8(0);
              if ((lVar11 == 0) || (*(long *)(lVar11 + 0x10) == 0)) goto LAB_03586310;
              uStack00000000000000c0 = unaff_w28;
              uVar12 = FUN_0219c130(*(long *)(lVar11 + 0x10),&stack0x000000c0,
                                    *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
              if ((uVar12 & 1) == 0) {
                FUN_0358c4f0();
              }
              uStack0000000000000028 = 0;
            }
          }
        }
        else {
          if (*(char *)(unaff_x19 + 0x2da) != '\0') goto LAB_03585adc;
          if (((unaff_w28 - 0x2007 < 0x29) &&
              ((1L << ((ulong)(unaff_w28 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
             ((unaff_w28 == 0xa0 || (unaff_w28 == 0x2060)))) goto LAB_03585d14;
          FUN_0358c4f0();
          uStack0000000000000028 = 0;
          uStack0000000000000030 = 0;
          in_stack_000001a8 = 0xffffffff;
        }
      }
LAB_035862f4:
      *unaff_x21 = *unaff_x21 + 1;
    }
    else {
LAB_035857b0:
      bVar7 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
      if (unaff_w28 == 9) {
LAB_035857c4:
        bVar2 = true;
      }
      else {
        if ((((unaff_w29 != 0) || (unaff_w28 == 3)) || (unaff_w28 == 0x200b)) || (unaff_w28 == 0xad)
           ) goto LAB_03585804;
UnityEngine_Display__Activate:
        bVar2 = false;
      }
      fVar18 = *(float *)(unaff_x19 + 0x360);
      fVar21 = *(float *)(unaff_x19 + 0x640);
      fVar22 = (fStack000000000000003c - *(float *)(unaff_x19 + 0x350)) -
               *(float *)(unaff_x19 + 0x354);
      bVar6 = true;
      if ((fVar18 <= fVar22) && (bVar6 = false, !NAN(fVar18))) {
        bVar6 = fVar18 == -1.0;
      }
      if (!bVar6) {
        fVar22 = fVar18;
      }
      fVar18 = (float)FUN_03776cb4(&stack0x00000120,0);
      if (unaff_w26 == 0) {
        fVar19 = unaff_s15;
      }
      fVar24 = 1.0;
      if (!bVar7) {
        fVar24 = DAT_00d38acc;
      }
      fStack000000000000005c = ABS(fVar21) + fVar19 * fVar18 * (1.0 - *(float *)(unaff_x19 + 0x2d4))
      ;
      if ((fStack000000000000005c <= fVar24 * fVar22 || (uVar5 & 1) != 0) ||
         (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498))) {
        fStack0000000000000048 = *(float *)(unaff_x19 + 0x350);
        in_stack_00000040._4_4_ = *(float *)(unaff_x19 + 0x354);
        if (!bVar2) goto LAB_03585998;
        if (*unaff_x23 != 0) {
          memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
          fVar19 = (float)FUN_03776a48(&stack0x00000140,0);
          if (*unaff_x23 != 0) {
            fVar18 = *(float *)(unaff_x19 + 0x640);
            fVar22 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x23 + 0x1b9));
            fVar22 = unaff_s15 * fVar19 * fVar22;
            fVar19 = fVar22 * (float)(int)(fVar18 / fVar22);
            if (fVar19 <= fVar18) {
              fVar19 = fVar18 + fVar22;
            }
            goto LAB_03585a9c;
          }
        }
        goto LAB_03586310;
      }
      unaff_w27 = FUN_0358c15c();
      lVar11 = *(long *)(unaff_x19 + 0x488);
      if (lVar11 == 0) goto LAB_03586310;
      uVar13 = *(uint *)(unaff_x19 + 0x494);
      in_stack_00000c10 = uVar13 - 1;
      if (*(uint *)(lVar11 + 0x18) <= in_stack_00000c10)
      goto UnityEngine_LightProbesQuery__get_IsCreated;
      if (((uStack000000000000004c & 1) == 0 &&
           *(short *)(lVar11 + (long)(int)in_stack_00000c10 * (long)iVar15 + 0x20) == 0xad) &&
         (*(int *)(unaff_x19 + 0x2e0) == 0)) {
        uStack000000000000004c = 0;
        in_stack_00000c14 = 0x2d;
        *unaff_x21 = in_stack_00000c10;
        unaff_w27 = unaff_w27 - 1;
      }
      else {
        if (*(uint *)(lVar11 + 0x18) <= uVar13) goto UnityEngine_LightProbesQuery__get_IsCreated;
        if (*(short *)(lVar11 + (long)(int)uVar13 * unaff_x22 + 0x20) == 0xad) {
          uStack000000000000004c = 1;
          in_stack_00000c10 = uVar9;
        }
        else {
          if ((uStack0000000000000030 & uStack0000000000000018 & 1) != 0) {
            fVar19 = *(float *)(unaff_x19 + 0x2d4);
            fVar18 = *(float *)(unaff_x19 + 0x2d0) / 100.0;
            if ((fVar19 < fVar18) && (*(int *)(unaff_x19 + 0x244) < *(int *)(unaff_x19 + 0x248))) {
              fVar21 = fStack000000000000005c;
              if (0.0 < fVar19) {
                fVar21 = fStack000000000000005c / (1.0 - fVar19);
              }
              fVar19 = fVar19 + (fStack000000000000005c - fVar24 * (fVar22 + DAT_00d38cc4)) / fVar21
              ;
              if (fVar18 <= fVar19) {
                fVar19 = fVar18;
              }
              *(float *)(unaff_x19 + 0x2d4) = fVar19;
LAB_035863e8:
              if (DAT_0411f1e3 == '\0') {
                FUN_01ab69ac(PTR_DAT_03cbeb70);
                DAT_0411f1e3 = '\x01';
              }
              return **(float **)(*(long *)PTR_DAT_03cbeb70 + 0xb8);
            }
            if ((*(float *)(unaff_x19 + 0x250) < *in_stack_00000010) &&
               (*(int *)(unaff_x19 + 0x244) < *(int *)(unaff_x19 + 0x248))) {
              *(float *)(unaff_x19 + 0x23c) = *in_stack_00000010;
              fVar19 = (*in_stack_00000010 - *(float *)(unaff_x19 + 0x240)) * 0.5;
              if (fVar19 <= DAT_00d38b84) {
                fVar19 = DAT_00d38b84;
              }
              fVar19 = *in_stack_00000010 - fVar19;
              *in_stack_00000010 = fVar19;
              fVar22 = fVar19 * 20.0 + 0.5;
              fVar19 = DAT_00d38e60;
              if (fVar22 != INFINITY) {
                fVar19 = (float)(int)fVar22 / 20.0;
              }
              if (fVar19 <= *(float *)(unaff_x19 + 0x250)) {
                fVar19 = *(float *)(unaff_x19 + 0x250);
              }
              *in_stack_00000010 = fVar19;
              goto LAB_035863e8;
            }
          }
          if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
            fVar19 = *(float *)(unaff_x19 + 0x4c8);
            fVar22 = *(float *)(unaff_x19 + 0x4d0);
            if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            fVar19 = fVar19 - fVar22;
            if (((fStack000000000000001c < ABS(fVar19)) && (*(char *)(unaff_x19 + 0x2c4) == '\0'))
               && (*(char *)(unaff_x19 + 0x33c) == '\0')) {
              *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar19;
              *(float *)(unaff_x19 + 0x4d8) = fVar19 + *(float *)(unaff_x19 + 0x4d8);
            }
          }
          fVar18 = *(float *)(unaff_x19 + 0x640);
          fVar22 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
          fVar19 = *(float *)(unaff_x19 + 0x4c4);
          if (fVar22 <= *(float *)(unaff_x19 + 0x4c4)) {
            fVar19 = fVar22;
          }
          *(undefined4 *)(unaff_x19 + 0x498) = *(undefined4 *)(unaff_x19 + 0x494);
          *(float *)(unaff_x19 + 0x4c4) = fVar19;
          *(undefined4 *)(unaff_x19 + 0x4ac) = 0;
          if ((uVar4 & 0x100000000) == 0) {
            fVar22 = (*(float *)(unaff_x19 + 0x4c8) - *(float *)(unaff_x19 + 0x4d8)) - fVar22;
            if (fStack0000000000000038 <= fVar22) {
              fStack0000000000000038 = fVar22;
            }
          }
          else {
            fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fVar19;
          }
          FUN_0358c4f0();
          lVar11 = *(long *)(unaff_x19 + 0x488);
          *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
          if (lVar11 == 0) goto LAB_03586310;
          if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x494))
          goto UnityEngine_LightProbesQuery__get_IsCreated;
          fVar19 = *(float *)(unaff_x19 + 0x2c0);
          fVar22 = *(float *)(lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 + 0x154);
          bVar7 = fVar19 != DAT_00d38ba4;
          if (bVar7) {
            fVar21 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
          }
          else {
            fVar21 = fVar22 + (unaff_s13 - *(float *)(unaff_x19 + 0x4cc)) +
                     fStack0000000000000020 * (fStack0000000000000024 + *(float *)(unaff_x19 + 700))
            ;
            fVar19 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
          }
          *(bool *)(unaff_x19 + 0x2c4) = bVar7;
          *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) + fVar19 + fVar21;
          puVar3 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar11 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar11 = *(long *)puVar3;
          }
          uStack000000000000004c = 0;
          fStack000000000000006c = fStack000000000000006c + fVar18;
          uVar20 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x40c) + unaff_s13;
          uVar20 = NEON_rev64(uVar20,4);
          *(float *)(unaff_x19 + 0x4d0) = fVar22;
          *(undefined8 *)(unaff_x19 + 0x4c8) = uVar20;
          uStack0000000000000030 = 1;
          in_stack_00000c10 = uVar9;
        }
      }
    }
LAB_03586300:
    do {
      lVar11 = *(long *)(unaff_x19 + 0x478);
      unaff_w27 = unaff_w27 + 1;
      if (lVar11 == 0) goto LAB_03586310;
      if ((int)*(uint *)(lVar11 + 0x18) <= (int)unaff_w27) {
LAB_03586314:
        if ((((*(float *)(unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x240) <= DAT_00d389f8) ||
             ((_uStack0000000000000018 & 1) == 0)) ||
            (fVar19 = *in_stack_00000010, *(float *)(unaff_x19 + 0x254) <= fVar19)) ||
           (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
          fVar19 = *(float *)(unaff_x19 + 0x340);
          fVar22 = *(float *)(unaff_x19 + 0x348);
          if (fVar19 <= 0.0) {
            fVar19 = 0.0;
          }
          if (fVar22 <= 0.0) {
            fVar22 = 0.0;
          }
          *(undefined1 *)(unaff_x19 + 0x24c) = 1;
          fVar22 = (fStack000000000000006c + fVar19 + fVar22) * 100.0 + 1.0;
          fVar19 = DAT_00d387f8;
          if (fVar22 != INFINITY) {
            fVar19 = (float)(int)fVar22 / 100.0;
          }
          *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
          return fVar19;
        }
        if (*(float *)(unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x2d0) / 100.0) {
          *(undefined4 *)(unaff_x19 + 0x2d4) = 0;
          fVar19 = *in_stack_00000010;
        }
        *(float *)(unaff_x19 + 0x240) = fVar19;
        fVar19 = (*(float *)(unaff_x19 + 0x23c) - *in_stack_00000010) * 0.5;
        if (fVar19 <= DAT_00d38b84) {
          fVar19 = DAT_00d38b84;
        }
        fVar19 = *in_stack_00000010 + fVar19;
        *in_stack_00000010 = fVar19;
        fVar22 = fVar19 * 20.0 + 0.5;
        fVar19 = DAT_00d38e60;
        if (fVar22 != INFINITY) {
          fVar19 = (float)(int)fVar22 / 20.0;
        }
        if (*(float *)(unaff_x19 + 0x254) <= fVar19) {
          fVar19 = *(float *)(unaff_x19 + 0x254);
        }
        *in_stack_00000010 = fVar19;
        goto LAB_035863e8;
      }
      if (*(uint *)(lVar11 + 0x18) <= unaff_w27) goto UnityEngine_LightProbesQuery__get_IsCreated;
      unaff_w28 = *(uint *)(lVar11 + (long)(int)unaff_w27 * 0xc + 0x20);
      if (unaff_w28 == 0) goto LAB_03586314;
      if ((unaff_w28 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) {
        *(undefined1 *)(unaff_x19 + 0x431) = 1;
        *(undefined4 *)(unaff_x19 + 0x644) = 0;
        uVar12 = FUN_03586568();
        if (((uVar12 & 1) != 0) &&
           (unaff_w27 = in_stack_00000118._4_4_, *(int *)(unaff_x19 + 0x644) == 0))
        goto LAB_03586300;
      }
      else {
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar11 == 0))
        goto LAB_03586310;
        if (*(uint *)(lVar11 + 0x18) <= *unaff_x21)
        goto UnityEngine_LightProbesQuery__get_IsCreated;
        lVar11 = lVar11 + (long)(int)*unaff_x21 * unaff_x22;
        *(undefined4 *)(unaff_x19 + 0x644) = *(undefined4 *)(lVar11 + 0x2c);
        *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar11 + 0x58);
        *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(lVar11 + 0x38);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar11 == 0)) goto LAB_03586310;
      uVar9 = *unaff_x21;
      if (*(uint *)(lVar11 + 0x18) <= uVar9) goto UnityEngine_LightProbesQuery__get_IsCreated;
      lVar16 = (long)(int)uVar9;
      cVar1 = *(char *)(lVar11 + lVar16 * unaff_x22 + 0x5c);
      *(undefined1 *)(unaff_x19 + 0x431) = 0;
      uVar25 = *(undefined4 *)(unaff_x19 + 0x120);
      if (in_stack_00000c10 == uVar9) {
        *(undefined4 *)(unaff_x19 + 0x644) = 0;
        if (in_stack_00000c14 == 0x2026) {
          lVar11 = *in_stack_00000078;
          if (lVar11 != 0) {
            if (uVar9 < *(uint *)(lVar11 + 0x18)) {
              *(undefined8 *)(lVar11 + lVar16 * unaff_x22 + 0x30) =
                   *(undefined8 *)(unaff_x19 + 0x650);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar11 = *in_stack_00000078;
              if (lVar11 != 0) {
                if (*unaff_x21 < *(uint *)(lVar11 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)*unaff_x21 * unaff_x22;
                  *(undefined4 *)(lVar11 + 0x2c) = 0;
                  *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)(unaff_x19 + 0x658);
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  lVar11 = *(long *)(unaff_x19 + 0x488);
                  if (lVar11 != 0) {
                    if (*(uint *)(unaff_x19 + 0x494) < *(uint *)(lVar11 + 0x18)) {
                      *(undefined8 *)
                       (lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 + 0x50) =
                           *(undefined8 *)(unaff_x19 + 0x660);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                      lVar11 = *in_stack_00000078;
                      if (lVar11 != 0) {
                        uVar9 = *unaff_x21;
                        if (uVar9 < *(uint *)(lVar11 + 0x18)) {
                          bVar7 = true;
                          in_stack_00000c10 = uVar9 + 1;
                          *(undefined4 *)(lVar11 + (long)(int)uVar9 * unaff_x22 + 0x58) =
                               *(undefined4 *)(unaff_x19 + 0x668);
                          unaff_w28 = 0x2026;
                          *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
                          in_stack_00000c14 = 3;
                          goto LAB_03584c20;
                        }
                        goto UnityEngine_LightProbesQuery__get_IsCreated;
                      }
                      goto LAB_03586310;
                    }
                    goto UnityEngine_LightProbesQuery__get_IsCreated;
                  }
                  goto LAB_03586310;
                }
                goto UnityEngine_LightProbesQuery__get_IsCreated;
              }
              goto LAB_03586310;
            }
            goto UnityEngine_LightProbesQuery__get_IsCreated;
          }
          goto LAB_03586310;
        }
        if (in_stack_00000c14 != 3) {
          bVar7 = true;
          unaff_w28 = in_stack_00000c14;
          goto LAB_03584c20;
        }
        lVar11 = *in_stack_00000078;
        if (((lVar11 == 0) || (*unaff_x23 == 0)) ||
           (lVar10 = FUN_03568ac0(*unaff_x23,0), lVar10 == 0)) goto LAB_03586310;
        FUN_0219b634(lVar10,&stack0x00000c1c,&stack0x000000c0,*(undefined8 *)OVRPlugin_Hand_TypeInfo
                    );
        if (*(uint *)(lVar11 + 0x18) <= uVar9) goto UnityEngine_LightProbesQuery__get_IsCreated;
        *(ulong *)(lVar11 + lVar16 * unaff_x22 + 0x30) =
             CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        bVar7 = true;
        unaff_w28 = 3;
        *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
      }
      else {
        bVar7 = false;
LAB_03584c20:
        if ((unaff_w28 != 3) && ((int)uVar9 < *(int *)(unaff_x19 + 0x324))) {
          lVar11 = *in_stack_00000078;
          if (lVar11 == 0) goto LAB_03586310;
          if (*(uint *)(lVar11 + 0x18) <= uVar9) goto UnityEngine_LightProbesQuery__get_IsCreated;
          lVar11 = lVar11 + (long)(int)uVar9 * (long)iVar15;
          *(undefined1 *)(lVar11 + 0x194) = 0;
          *(undefined2 *)(lVar11 + 0x20) = 0x200b;
          *(undefined4 *)(lVar11 + 100) = 0;
          *unaff_x21 = uVar9 + 1;
          goto LAB_03586300;
        }
      }
      iVar8 = *(int *)(unaff_x19 + 0x644);
      if (iVar8 == 0) {
        uVar9 = *(uint *)(unaff_x19 + 0x25c);
        if ((uVar9 >> 4 & 1) == 0) {
          if ((uVar9 >> 3 & 1) == 0) {
            fStack0000000000000068 = 1.0;
            if ((uVar9 >> 5 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar12 = FUN_026b812c(unaff_w28,0);
              fStack0000000000000068 = 1.0;
              if ((uVar12 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar9 = FUN_026b8410(unaff_w28,0);
                fStack0000000000000068 = in_stack_00000008._4_4_;
                goto LAB_03584f98;
              }
            }
          }
          else {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar12 = FUN_026b8070(unaff_w28,0);
            fStack0000000000000068 = 1.0;
            if ((uVar12 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar9 = FUN_026b8594(unaff_w28,0);
              goto LAB_03584f98;
            }
          }
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar12 = FUN_026b812c(unaff_w28,0);
          fStack0000000000000068 = 1.0;
          if ((uVar12 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar9 = FUN_026b8410(unaff_w28,0);
LAB_03584f98:
            unaff_w28 = uVar9 & 0xffff;
          }
        }
        iVar8 = *(int *)(unaff_x19 + 0x644);
      }
      else {
        fStack0000000000000068 = 1.0;
      }
      if (iVar8 != 0) {
        if (iVar8 != 1) {
          unaff_w26 = (uint)(unaff_w28 == 0xad);
          lVar11 = *in_stack_00000078;
          fVar21 = 0.0;
          unaff_s14 = 0.0;
          if (unaff_w28 != 0xad && unaff_w28 != 3) {
            unaff_s14 = unaff_s15;
          }
          if (lVar11 == 0) goto LAB_03586310;
          uVar9 = *unaff_x21;
          param_4 = 0.0;
          goto LAB_035852ec;
        }
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar11 == 0))
        goto LAB_03586310;
        if (*(uint *)(lVar11 + 0x18) <= *unaff_x21)
        goto UnityEngine_LightProbesQuery__get_IsCreated;
        *(undefined8 *)(unaff_x19 + 0x698) =
             *(undefined8 *)(lVar11 + (long)(int)*unaff_x21 * unaff_x22 + 0x40);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000050);
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar11 == 0))
        goto LAB_03586310;
        if (*(uint *)(lVar11 + 0x18) <= *unaff_x21)
        goto UnityEngine_LightProbesQuery__get_IsCreated;
        *(undefined4 *)(unaff_x19 + 0x6a4) =
             *(undefined4 *)(lVar11 + (long)(int)*unaff_x21 * unaff_x22 + 0x48);
        if ((*(long *)(unaff_x19 + 0x698) == 0) ||
           (lVar11 = UnityEngine_Material__DisableKeyword(*(long *)(unaff_x19 + 0x698),0),
           lVar11 == 0)) goto LAB_03586310;
        FUN_02215a88(lVar11,*(undefined4 *)(unaff_x19 + 0x6a4),&stack0x000000c0,
                     *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
        lVar11 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
        if (lVar11 != 0) {
          if (unaff_w28 == 0x3c) {
            unaff_w28 = *(int *)(unaff_x19 + 0x6a4) + 0xe000;
          }
          if (*in_stack_00000050 == 0) goto LAB_03586310;
          memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
          iVar8 = FUN_03776950(&stack0x00000140,0);
          fVar19 = *(float *)(unaff_x19 + 0x1e8);
          if (iVar8 < 1) {
            if (*unaff_x23 == 0) goto LAB_03586310;
            memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
            iVar8 = FUN_03776950(&stack0x00000140,0);
            if (*unaff_x23 == 0) goto LAB_03586310;
            memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
            fVar22 = (float)FUN_03776960(&stack0x00000140,0);
            param_4 = fStack000000000000002c;
            if (*(char *)(unaff_x19 + 0x305) != '\0') {
              param_4 = 1.0;
            }
            if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03586310;
            memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
            fVar18 = (float)FUN_03776980(&stack0x00000140,0);
            if (*(long *)(lVar11 + 0x20) == 0) goto LAB_03586310;
            FUN_03776e6c(&stack0x000000c0,*(long *)(lVar11 + 0x20),0);
            in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
            in_stack_00000108 = in_stack_000000c8;
            in_stack_00000110 = in_stack_000000d0;
            fVar24 = (float)FUN_03776c9c(&stack0x00000100,0);
            if (*(long *)(lVar11 + 0x20) == 0) goto LAB_03586310;
            fVar28 = *(float *)(lVar11 + 0x2c);
            fVar17 = (float)FUN_03776ea8(*(long *)(lVar11 + 0x20),0);
            if (*unaff_x23 == 0) goto LAB_03586310;
            memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
            fVar21 = (float)FUN_03776980(&stack0x00000140,0);
            if (*unaff_x23 == 0) goto LAB_03586310;
            param_4 = (fVar19 / (float)iVar8) * fVar22 * param_4;
            unaff_s15 = param_4 * (fVar18 / fVar24) * fVar28 * fVar17;
            param_4 = param_4 / unaff_s15;
            fVar21 = param_4 * fVar21;
            memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
            fVar19 = (float)FUN_037769c0(&stack0x00000140,0);
            param_4 = param_4 * fVar19;
          }
          else {
            if (*in_stack_00000050 == 0) goto LAB_03586310;
            memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
            iVar8 = FUN_03776950(&stack0x00000140,0);
            if (*in_stack_00000050 == 0) goto LAB_03586310;
            memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
            fVar22 = (float)FUN_03776960(&stack0x00000140,0);
            if (*(long *)(lVar11 + 0x20) == 0) goto LAB_03586310;
            fVar24 = *(float *)(lVar11 + 0x2c);
            fVar18 = fStack000000000000002c;
            if (*(char *)(unaff_x19 + 0x305) != '\0') {
              fVar18 = 1.0;
            }
            fVar17 = (float)FUN_03776ea8(*(long *)(lVar11 + 0x20),0);
            if (*(long *)(unaff_x19 + 0x698) == 0) goto LAB_03586310;
            memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0x698) + 0x48),0x60);
            fVar21 = (float)FUN_03776980(&stack0x00000140,0);
            if (*in_stack_00000050 == 0) goto LAB_03586310;
            unaff_s15 = (fVar19 / (float)iVar8) * fVar22 * fVar18 * fVar24 * fVar17;
            memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
            param_4 = (float)FUN_037769c0(&stack0x00000140,0);
          }
          *unaff_x25 = lVar11;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          unaff_s13 = 0.0;
          lVar11 = *in_stack_00000078;
          if (lVar11 == 0) goto LAB_03586310;
          uVar9 = *unaff_x21;
          if (*(uint *)(lVar11 + 0x18) <= uVar9) goto UnityEngine_LightProbesQuery__get_IsCreated;
          lVar16 = lVar11 + (long)(int)uVar9 * unaff_x22;
          *(undefined4 *)(lVar16 + 0x2c) = 1;
          *(float *)(lVar16 + 0x160) = unaff_s15;
          *(undefined4 *)(unaff_x19 + 0x120) = uVar25;
          goto LAB_035852d0;
        }
        goto LAB_03586300;
      }
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar11 == 0)) goto LAB_03586310;
      if (*(uint *)(lVar11 + 0x18) <= *unaff_x21) goto UnityEngine_LightProbesQuery__get_IsCreated;
      *unaff_x25 = *(long *)(lVar11 + (long)(int)*unaff_x21 * unaff_x22 + 0x30);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    } while (*unaff_x25 == 0);
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar11 == 0)) goto LAB_03586310;
    uVar13 = *unaff_x21;
    uVar9 = *(uint *)(lVar11 + 0x18);
    if (uVar9 <= uVar13) goto UnityEngine_LightProbesQuery__get_IsCreated;
    *(undefined4 *)(unaff_x19 + 0x120) =
         *(undefined4 *)(lVar11 + (long)(int)uVar13 * unaff_x22 + 0x58);
    if (bVar7) {
      lVar16 = *(long *)(unaff_x19 + 0x478);
      if (lVar16 == 0) goto LAB_03586310;
      if (*(uint *)(lVar16 + 0x18) <= unaff_w27) goto UnityEngine_LightProbesQuery__get_IsCreated;
      if ((*(int *)(lVar16 + (long)(int)unaff_w27 * 0xc + 0x20) != 10) ||
         (uVar13 == *(uint *)(unaff_x19 + 0x498))) goto LAB_03585044;
      if (uVar9 <= uVar13 - 1) goto UnityEngine_LightProbesQuery__get_IsCreated;
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar19 = *(float *)(lVar11 + (long)(int)(uVar13 - 1) * (long)iVar15 + 0x60);
      iVar8 = FUN_03776950(*unaff_x23 + 0x50,0);
      lVar11 = *unaff_x23;
    }
    else {
LAB_03585044:
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar19 = *(float *)(unaff_x19 + 0x1e8);
      iVar8 = FUN_03776950(*unaff_x23 + 0x50,0);
      lVar11 = *(long *)(unaff_x19 + 0x100);
    }
    if (lVar11 == 0) goto LAB_03586310;
    fVar18 = (float)FUN_03776960(lVar11 + 0x50,0);
    fVar22 = fStack000000000000002c;
    if (*(char *)(unaff_x19 + 0x305) != '\0') {
      fVar22 = 1.0;
    }
    param_4 = 0.0;
    fVar21 = 0.0;
    if (!(bool)(bVar7 & unaff_w28 == 0x2026)) {
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar21 = (float)FUN_03776980(*unaff_x23 + 0x50,0);
      if (*unaff_x23 == 0) goto LAB_03586310;
      param_4 = (float)FUN_037769c0(*unaff_x23 + 0x50,0);
    }
    if ((*unaff_x25 == 0) || (lVar11 = *(long *)(unaff_x19 + 0x488), lVar11 == 0))
    goto LAB_03586310;
    uVar9 = *(uint *)(unaff_x19 + 0x494);
    if (*(uint *)(lVar11 + 0x18) <= uVar9) {
UnityEngine_LightProbesQuery__get_IsCreated:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    unaff_s15 = ((fStack0000000000000068 * fVar19) / (float)iVar8) * fVar18 * fVar22 *
                *(float *)(unaff_x19 + 0x404) * *(float *)(*unaff_x25 + 0x2c);
    *(undefined4 *)(lVar11 + (long)(int)uVar9 * unaff_x22 + 0x2c) = 0;
LAB_035852d0:
    unaff_w26 = (uint)(unaff_w28 == 0xad);
    unaff_s14 = unaff_s13;
    if (unaff_w28 != 0xad && unaff_w28 != 3) {
      unaff_s14 = unaff_s15;
    }
LAB_035852ec:
    if (*(uint *)(lVar11 + 0x18) <= uVar9) goto UnityEngine_LightProbesQuery__get_IsCreated;
    *(short *)(lVar11 + (long)(int)uVar9 * (long)iVar15 + 0x20) = (short)unaff_w28;
    if ((*unaff_x25 == 0) || (lVar11 = *(long *)(*unaff_x25 + 0x20), lVar11 == 0))
    goto LAB_03586310;
    FUN_03776e6c(&stack0x000000c0,lVar11,0);
    in_stack_00000120 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
    in_stack_00000128 = in_stack_000000c8;
    in_stack_00000130 = in_stack_000000d0;
    if ((int)unaff_w28 < 0x10000) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar9 = FUN_026b63d8(unaff_w28,0);
      unaff_w29 = uVar9 & 1;
    }
    else {
      unaff_w29 = 0;
    }
    fStack0000000000000074 = *(float *)(unaff_x19 + 0x2a8);
    *(undefined4 *)(unaff_x19 + 0x2fc) = 0;
    if (*(char *)(unaff_x19 + 0x2f9) == '\0') {
      unaff_d10 = 0;
    }
    else {
      if (*unaff_x25 == 0) goto LAB_03586310;
      uVar13 = *unaff_x21;
      uVar9 = *(uint *)(*unaff_x25 + 0x28);
      if ((int)uVar13 < (int)uStack0000000000000070) {
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar11 == 0))
        goto LAB_03586310;
        if (*(uint *)(lVar11 + 0x18) <= uVar13 + 1)
        goto UnityEngine_LightProbesQuery__get_IsCreated;
        lVar11 = *(long *)(lVar11 + (long)(int)(uVar13 + 1) * (long)iVar15 + 0x30);
        if ((((lVar11 == 0) || (*unaff_x23 == 0)) ||
            (lVar16 = *(long *)(*unaff_x23 + 0x128), lVar16 == 0)) ||
           (lVar16 = *(long *)(lVar16 + 0x18), lVar16 == 0)) goto LAB_03586310;
        uStack00000000000000c0 = uVar9 | *(int *)(lVar11 + 0x28) << 0x10;
        uVar12 = FUN_0219f8b8(lVar16,&stack0x000000c0,&stack0x000000f8,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
        uVar25 = 0;
        if ((uVar12 & 1) == 0) {
          uVar26 = 0;
          uVar23 = 0;
          uVar27 = 0;
        }
        else {
          if (in_stack_000000f8 == 0) goto LAB_03586310;
          uVar25 = *(undefined4 *)(in_stack_000000f8 + 0x14);
          uVar26 = *(undefined4 *)(in_stack_000000f8 + 0x18);
          uVar23 = *(uint *)(in_stack_000000f8 + 0x1c);
          uVar27 = *(undefined4 *)(in_stack_000000f8 + 0x20);
          if ((*(byte *)(in_stack_000000f8 + 0x39) & 1) != 0) {
            fStack0000000000000074 = 0.0;
          }
        }
        uVar13 = *unaff_x21;
      }
      else {
        uVar25 = 0;
        uVar26 = 0;
        uVar23 = 0;
        uVar27 = 0;
      }
      unaff_d10 = (ulong)uVar23;
      if (0 < (int)uVar13) {
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar11 == 0))
        goto LAB_03586310;
        if (*(uint *)(lVar11 + 0x18) <= uVar13 - 1)
        goto UnityEngine_LightProbesQuery__get_IsCreated;
        lVar11 = *(long *)(lVar11 + (ulong)(uVar13 - 1) * (unaff_x22 & 0xffffffff) + 0x30);
        if (((lVar11 == 0) || (*unaff_x23 == 0)) ||
           ((lVar16 = *(long *)(*unaff_x23 + 0x128), lVar16 == 0 ||
            (lVar16 = *(long *)(lVar16 + 0x18), lVar16 == 0)))) goto LAB_03586310;
        uStack00000000000000c0 = *(uint *)(lVar11 + 0x28) | uVar9 << 0x10;
        uVar12 = FUN_0219f8b8(lVar16,&stack0x000000c0,&stack0x000000f8,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
        if ((uVar12 & 1) != 0) {
          if ((in_stack_000000f8 == 0) ||
             (FUN_03571cb4(uVar25,uVar26,unaff_d10,uVar27,*(undefined4 *)(in_stack_000000f8 + 0x28),
                           *(undefined4 *)(in_stack_000000f8 + 0x2c),
                           *(undefined4 *)(in_stack_000000f8 + 0x30),
                           *(undefined4 *)(in_stack_000000f8 + 0x34),0), in_stack_000000f8 == 0))
          goto LAB_03586310;
          if ((*(byte *)(in_stack_000000f8 + 0x39) & 1) != 0) {
            fStack0000000000000074 = 0.0;
          }
        }
      }
      unaff_s13 = 0.0;
      *(int *)(unaff_x19 + 0x2fc) = (int)unaff_d10;
    }
    fStack0000000000000060 = 0.0;
    fVar19 = *(float *)(unaff_x19 + 0x2b0);
    if (fVar19 != 0.0) {
      if ((*unaff_x25 == 0) || (lVar11 = *(long *)(*unaff_x25 + 0x20), lVar11 == 0))
      goto LAB_03586310;
      FUN_03776e6c(&stack0x000000c0,lVar11,0);
      in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
      in_stack_00000108 = in_stack_000000c8;
      in_stack_00000110 = in_stack_000000d0;
      fVar22 = (float)FUN_03776c94(&stack0x00000100,0);
      if ((*unaff_x25 == 0) || (lVar11 = *(long *)(*unaff_x25 + 0x20), lVar11 == 0))
      goto LAB_03586310;
      FUN_03776e6c(&stack0x000000c0,lVar11,0);
      in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
      in_stack_00000108 = in_stack_000000c8;
      in_stack_00000110 = in_stack_000000d0;
      fVar18 = (float)FUN_03776ca4(&stack0x00000100,0);
      fStack0000000000000060 =
           (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
           (fVar19 * 0.5 - unaff_s14 * (fVar22 * 0.5 + fVar18));
      *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x640) + fStack0000000000000060;
    }
    iVar15 = *(int *)(unaff_x19 + 0x644);
    unaff_s11 = 0.0;
    if (((cVar1 == '\0') && (unaff_s11 = 0.0, iVar15 == 0)) &&
       ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0)) {
      if (*unaff_x23 == 0) goto LAB_03586310;
      unaff_s11 = *(float *)(*unaff_x23 + 0x1b4);
    }
    param_1 = *in_stack_00000078;
    if (param_1 == 0) goto LAB_03586310;
    uVar9 = *unaff_x21;
    lVar11 = (long)(int)uVar9;
    if (*(uint *)(param_1 + 0x18) <= uVar9) goto UnityEngine_LightProbesQuery__get_IsCreated;
    param_2 = *(float *)(unaff_x19 + 0x4d8);
    fVar19 = *(float *)(unaff_x19 + 0x61c);
    fVar21 = fVar21 * unaff_s14;
    *(float *)(param_1 + lVar11 * unaff_x22 + 0x14c) = (unaff_s13 - param_2) + fVar19;
    if (iVar15 == 0) {
      fVar21 = fVar21 / fStack0000000000000068;
      param_4 = (param_4 * unaff_s14) / fStack0000000000000068;
    }
    else {
      param_4 = param_4 * unaff_s14;
    }
    unaff_s8 = fVar19 + fVar21;
    if ((unaff_w29 == 0) || (uVar9 == *(uint *)(unaff_x19 + 0x498))) break;
    fVar19 = *(float *)(unaff_x19 + 0x4c8);
    param_1 = param_1 + lVar11 * unaff_x22;
    *(float *)(param_1 + 0x154) = fVar19;
    fVar22 = *(float *)(unaff_x19 + 0x4cc);
    fVar19 = fVar19 - param_2;
    *(float *)(param_1 + 0x148) = fVar19;
    *(float *)(param_1 + 0x158) = fVar22;
    *(float *)(unaff_x19 + 0x4c0) = fVar19;
    fVar22 = fVar22 - param_2;
    *(float *)(param_1 + 0x150) = fVar22;
    *(float *)(unaff_x19 + 0x4c4) = fVar22;
    fVar19 = unaff_s15;
    uVar9 = in_stack_00000c10;
  } while( true );
  param_4 = fVar19 + param_4;
  param_6 = unaff_s8;
  param_5 = param_4;
  if (fVar19 != 0.0) {
    param_6 = (unaff_s8 - fVar19) / *(float *)(unaff_x19 + 0x404);
    param_5 = (param_4 - fVar19) / *(float *)(unaff_x19 + 0x404);
    if (param_6 <= unaff_s8) {
      param_6 = unaff_s8;
    }
    if (param_4 <= param_5) {
      param_5 = param_4;
    }
  }
  param_7 = *(float *)(unaff_x19 + 0x4cc);
  param_1 = param_1 + lVar11 * unaff_x22;
  param_4 = param_4 - param_2;
  param_3 = param_6;
  if (param_6 <= *(float *)(unaff_x19 + 0x4c8)) {
    param_3 = *(float *)(unaff_x19 + 0x4c8);
  }
  in_NG = false;
  if (!NAN(param_5) && !NAN(param_7)) {
    in_NG = param_5 < param_7;
  }
  goto code_r0x03585714;
}


