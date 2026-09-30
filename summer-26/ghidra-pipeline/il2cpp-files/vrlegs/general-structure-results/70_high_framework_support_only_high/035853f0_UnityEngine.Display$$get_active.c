/*
FUNCTION_NAME: UnityEngine.Display$$get_active
ENTRY_POINT: 035853f0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_13;validity_or_gating_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_11
*/


float UnityEngine_Display__get_active(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint in_w8;
  uint uVar11;
  undefined1 uVar12;
  undefined8 *in_x9;
  long lVar13;
  long lVar14;
  long unaff_x19;
  uint unaff_w20;
  uint *unaff_x21;
  int iVar15;
  ulong unaff_x22;
  long *unaff_x23;
  uint unaff_w24;
  long *unaff_x25;
  uint unaff_w26;
  uint unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float unaff_s8;
  float unaff_s9;
  uint uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
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
  
  uVar4 = in_stack_00000040;
  uVar3 = _uStack0000000000000030;
  uStack00000000000000c0 = in_w8;
code_r0x035853f0:
  uVar9 = FUN_0219f8b8(param_1,param_2,param_3,*in_x9);
  uVar25 = 0;
  if ((uVar9 & 1) == 0) {
    uVar26 = 0;
    uVar24 = 0;
    uVar28 = 0;
  }
  else {
                    /* try { // try from 03585408 to 03685413 has its CatchHandler @ 03584b88 */
                    /* try { // try from 03585414 to 0368541b has its CatchHandler @ 0358541c */
    if (in_stack_000000f8 == 0) {
LAB_03586310:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
                    /* catch() { ... } // from try @ 035852f8 with catch @ 0358541c
                       catch() { ... } // from try @ 035853e0 with catch @ 0358541c
                       catch() { ... } // from try @ 03585414 with catch @ 0358541c */
    uVar25 = *(undefined4 *)(in_stack_000000f8 + 0x14);
    uVar26 = *(undefined4 *)(in_stack_000000f8 + 0x18);
    uVar24 = *(uint *)(in_stack_000000f8 + 0x1c);
    uVar28 = *(undefined4 *)(in_stack_000000f8 + 0x20);
    if ((*(byte *)(in_stack_000000f8 + 0x39) & 1) != 0) {
      fStack0000000000000074 = 0.0;
    }
  }
  uVar11 = *unaff_x21;
LAB_03585478:
  uVar9 = (ulong)uVar24;
  iVar15 = (int)unaff_x22;
  if (0 < (int)uVar11) {
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0)) goto LAB_03586310;
    if (*(uint *)(lVar13 + 0x18) <= uVar11 - 1) goto UnityEngine_LightProbesQuery__get_IsCreated;
    lVar13 = *(long *)(lVar13 + (ulong)(uVar11 - 1) * (unaff_x22 & 0xffffffff) + 0x30);
    if ((((lVar13 == 0) || (*unaff_x23 == 0)) ||
        (lVar14 = *(long *)(*unaff_x23 + 0x128), lVar14 == 0)) ||
       (lVar14 = *(long *)(lVar14 + 0x18), lVar14 == 0)) goto LAB_03586310;
    uStack00000000000000c0 = *(uint *)(lVar13 + 0x28) | unaff_w24 << 0x10;
    uVar10 = FUN_0219f8b8(lVar14,&stack0x000000c0,&stack0x000000f8,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
    if ((uVar10 & 1) != 0) {
      if ((in_stack_000000f8 == 0) ||
         (FUN_03571cb4(uVar25,uVar26,uVar9,uVar28,*(undefined4 *)(in_stack_000000f8 + 0x28),
                       *(undefined4 *)(in_stack_000000f8 + 0x2c),
                       *(undefined4 *)(in_stack_000000f8 + 0x30),
                       *(undefined4 *)(in_stack_000000f8 + 0x34),0), in_stack_000000f8 == 0))
      goto LAB_03586310;
      if ((*(byte *)(in_stack_000000f8 + 0x39) & 1) != 0) {
        fStack0000000000000074 = 0.0;
      }
    }
  }
  *(int *)(unaff_x19 + 0x2fc) = (int)uVar9;
  fVar19 = unaff_s15;
  unaff_s15 = unaff_s14;
  uVar24 = in_stack_00000c10;
  do {
    fStack0000000000000060 = 0.0;
    fVar27 = *(float *)(unaff_x19 + 0x2b0);
    if (fVar27 != 0.0) {
      if ((*unaff_x25 == 0) || (lVar13 = *(long *)(*unaff_x25 + 0x20), lVar13 == 0))
      goto LAB_03586310;
      FUN_03776e6c(&stack0x000000c0,lVar13,0);
      in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
      in_stack_00000108 = in_stack_000000c8;
      in_stack_00000110 = in_stack_000000d0;
      fVar17 = (float)FUN_03776c94(&stack0x00000100,0);
      if ((*unaff_x25 == 0) || (lVar13 = *(long *)(*unaff_x25 + 0x20), lVar13 == 0))
      goto LAB_03586310;
      FUN_03776e6c(&stack0x000000c0,lVar13,0);
      in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
      in_stack_00000108 = in_stack_000000c8;
      in_stack_00000110 = in_stack_000000d0;
      fVar18 = (float)FUN_03776ca4(&stack0x00000100,0);
      fStack0000000000000060 =
           (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
           (fVar27 * 0.5 - unaff_s15 * (fVar17 * 0.5 + fVar18));
      *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x640) + fStack0000000000000060;
    }
    iVar7 = *(int *)(unaff_x19 + 0x644);
    fVar27 = 0.0;
    if (((unaff_w20 == 0) && (fVar27 = 0.0, iVar7 == 0)) &&
       ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0)) {
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar27 = *(float *)(*unaff_x23 + 0x1b4);
    }
    lVar13 = *in_stack_00000078;
    if (lVar13 == 0) goto LAB_03586310;
    uVar11 = *unaff_x21;
    lVar14 = (long)(int)uVar11;
    if (*(uint *)(lVar13 + 0x18) <= uVar11) goto UnityEngine_LightProbesQuery__get_IsCreated;
    fVar17 = *(float *)(unaff_x19 + 0x4d8);
    fVar18 = *(float *)(unaff_x19 + 0x61c);
    fVar22 = unaff_s8 * unaff_s15;
    *(float *)(lVar13 + lVar14 * unaff_x22 + 0x14c) = (0.0 - fVar17) + fVar18;
    if (iVar7 == 0) {
      fVar22 = fVar22 / fStack0000000000000068;
      fVar20 = (unaff_s9 * unaff_s15) / fStack0000000000000068;
    }
    else {
      fVar20 = unaff_s9 * unaff_s15;
    }
    fVar22 = fVar18 + fVar22;
    if ((unaff_w29 == 0) || (uVar11 == *(uint *)(unaff_x19 + 0x498))) {
      fVar20 = fVar18 + fVar20;
      fVar29 = fVar22;
      fVar16 = fVar20;
      if (fVar18 != 0.0) {
        fVar29 = (fVar22 - fVar18) / *(float *)(unaff_x19 + 0x404);
        fVar16 = (fVar20 - fVar18) / *(float *)(unaff_x19 + 0x404);
        if (fVar29 <= fVar22) {
          fVar29 = fVar22;
        }
        if (fVar20 <= fVar16) {
          fVar16 = fVar20;
        }
      }
      lVar13 = lVar13 + lVar14 * unaff_x22;
      fVar18 = fVar29;
      if (fVar29 <= *(float *)(unaff_x19 + 0x4c8)) {
        fVar18 = *(float *)(unaff_x19 + 0x4c8);
      }
      fVar23 = fVar16;
      if (*(float *)(unaff_x19 + 0x4cc) <= fVar16) {
        fVar23 = *(float *)(unaff_x19 + 0x4cc);
      }
      *(float *)(unaff_x19 + 0x4cc) = fVar23;
      *(float *)(unaff_x19 + 0x4c8) = fVar18;
      *(float *)(lVar13 + 0x154) = fVar29;
      *(float *)(lVar13 + 0x158) = fVar16;
      *(float *)(lVar13 + 0x148) = fVar22 - fVar17;
      *(float *)(unaff_x19 + 0x4c0) = fVar22 - fVar17;
      *(float *)(lVar13 + 0x150) = fVar20 - fVar17;
      *(float *)(unaff_x19 + 0x4c4) = fVar20 - fVar17;
      if ((*(int *)(unaff_x19 + 0x4a8) == 0) || (*(char *)(unaff_x19 + 0x33c) != '\0')) {
        *(float *)(unaff_x19 + 0x4b8) = fVar18;
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03586310;
        fVar18 = *(float *)(unaff_x19 + 0x4bc);
        fVar17 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x100) + 0x50,0);
        fStack0000000000000068 = (unaff_s15 * fVar17) / fStack0000000000000068;
        fVar17 = *(float *)(unaff_x19 + 0x4d8);
        if (fVar18 <= fStack0000000000000068) {
          fVar18 = fStack0000000000000068;
        }
        *(float *)(unaff_x19 + 0x4bc) = fVar18;
      }
    }
    else {
      fVar18 = *(float *)(unaff_x19 + 0x4c8);
      lVar13 = lVar13 + lVar14 * unaff_x22;
      *(float *)(lVar13 + 0x154) = fVar18;
      fVar20 = *(float *)(unaff_x19 + 0x4cc);
      fVar18 = fVar18 - fVar17;
      *(float *)(lVar13 + 0x148) = fVar18;
      *(float *)(lVar13 + 0x158) = fVar20;
      *(float *)(unaff_x19 + 0x4c0) = fVar18;
      fVar20 = fVar20 - fVar17;
      *(float *)(lVar13 + 0x150) = fVar20;
      *(float *)(unaff_x19 + 0x4c4) = fVar20;
    }
    in_stack_00000c10 = uVar24;
    if (fVar17 == 0.0) {
      if ((unaff_w29 == 0) || (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498))) {
        fVar17 = *(float *)(unaff_x19 + 0x4b4);
        if (*(float *)(unaff_x19 + 0x4b4) <= fVar22) {
          fVar17 = fVar22;
        }
        *(float *)(unaff_x19 + 0x4b4) = fVar17;
        goto LAB_035857b0;
      }
      bVar6 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
      if (unaff_w28 == 9) goto LAB_035857c4;
LAB_03585804:
      if ((((uStack000000000000004c | unaff_w26 ^ 0xffffffff) & 1) == 0) ||
         (*(int *)(unaff_x19 + 0x644) == 1)) goto UnityEngine_Display__Activate;
LAB_03585998:
      fVar19 = *(float *)(unaff_x19 + 0x640);
      if (*(float *)(unaff_x19 + 0x2b0) == 0.0) {
        fVar17 = (float)FUN_03776cb4(&stack0x00000120,0);
        if (*unaff_x23 == 0) goto LAB_03586310;
        fVar27 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                 (*(float *)(unaff_x19 + 0x2ac) +
                 unaff_s15 * ((float)uVar9 + fVar17) +
                 fStack0000000000000058 *
                 (fVar27 + fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
      }
      else {
        if (*unaff_x23 == 0) goto LAB_03586310;
        fVar27 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                 (*(float *)(unaff_x19 + 0x2ac) +
                 (*(float *)(unaff_x19 + 0x2b0) - fStack0000000000000060) +
                 fStack0000000000000058 * (fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)))
        ;
      }
      fVar19 = fVar19 + fVar27;
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
        bVar6 = false;
        *(float *)(unaff_x19 + 0x640) = fVar19;
LAB_03585aa4:
        if (*unaff_x21 == uStack0000000000000070) goto LAB_03585b64;
      }
      else {
        bVar6 = unaff_w28 == 10;
        if (((0xb < unaff_w28) || ((1 << (ulong)(unaff_w28 & 0x1f) & 0xc08U) == 0)) &&
           (1 < unaff_w28 - 0x2028)) goto LAB_03585aa4;
LAB_03585b64:
        if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
          fVar19 = *(float *)(unaff_x19 + 0x4c8);
          fVar27 = *(float *)(unaff_x19 + 0x4d0);
          if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          fVar19 = fVar19 - fVar27;
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
        fVar27 = in_stack_00000040._4_4_ +
                 fStack0000000000000048 + fStack000000000000006c + fStack000000000000005c;
        fVar19 = fStack0000000000000064;
        if (fStack0000000000000064 <= fVar27) {
          fVar19 = fVar27;
        }
        *(float *)(unaff_x19 + 0x4c4) = fStack0000000000000038;
        fStack000000000000006c = fVar19;
        if (*(uint *)(unaff_x19 + 0x494) != uStack0000000000000070) {
          fStack000000000000006c = 0.0;
          fStack0000000000000064 = fVar19;
        }
        fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fStack0000000000000038;
        *(undefined1 *)(unaff_x19 + 0x33c) = 0;
        if (bVar6) {
LAB_03585e8c:
          FUN_0358c4f0();
          FUN_0358c4f0();
          uVar24 = *(uint *)(unaff_x19 + 0x494);
          lVar13 = *(long *)(unaff_x19 + 0x488);
          iVar7 = uVar24 + 1;
          *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
          *(int *)(unaff_x19 + 0x498) = iVar7;
          if (lVar13 != 0) {
            if (uVar24 < *(uint *)(lVar13 + 0x18)) {
              fVar19 = *(float *)(lVar13 + (long)(int)uVar24 * unaff_x22 + 0x154);
              if (*(float *)(unaff_x19 + 0x2c0) == DAT_00d38ba4) {
                fVar27 = 0.0;
                if (!(bool)(unaff_w28 != 0x2029 & (bVar6 ^ 1U))) {
                  fVar27 = *(float *)(unaff_x19 + 0x2cc);
                }
                uVar12 = 0;
                fVar27 = fVar19 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                         fStack0000000000000020 *
                         (fStack0000000000000024 + *(float *)(unaff_x19 + 700)) +
                         fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar27) +
                         *(float *)(unaff_x19 + 0x4d8);
              }
              else {
                fVar27 = 0.0;
                if (!(bool)(unaff_w28 != 0x2029 & (bVar6 ^ 1U))) {
                  fVar27 = *(float *)(unaff_x19 + 0x2cc);
                }
                uVar12 = 1;
                fVar27 = *(float *)(unaff_x19 + 0x4d8) +
                         *(float *)(unaff_x19 + 0x2c0) +
                         fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar27);
              }
              *(float *)(unaff_x19 + 0x4d8) = fVar27;
              *(undefined1 *)(unaff_x19 + 0x2c4) = uVar12;
              puVar2 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar13 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar13 = *(long *)puVar2;
                iVar7 = *unaff_x21 + 1;
              }
              uVar21 = *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x15a8);
              *(float *)(unaff_x19 + 0x640) =
                   *(float *)(unaff_x19 + 0x408) + 0.0 + *(float *)(unaff_x19 + 0x40c);
              uVar21 = NEON_rev64(uVar21,4);
              *(float *)(unaff_x19 + 0x4d0) = fVar19;
              *(undefined8 *)(unaff_x19 + 0x4c8) = uVar21;
              *(int *)(unaff_x19 + 0x494) = iVar7;
              goto LAB_03586300;
            }
            goto UnityEngine_LightProbesQuery__get_IsCreated;
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
      if (((uVar3 & 0x100000000) != 0) || ((*(uint *)(unaff_x19 + 0x2e0) | 2) == 3)) {
        if ((unaff_w29 == 0) &&
           (((unaff_w28 != 0x2d && (unaff_w28 != 0x200b)) && (unaff_w28 != 0xad)))) {
          if (*(char *)(unaff_x19 + 0x2da) == '\0') {
LAB_03585d14:
            if (((((0x2bfd < unaff_w28 - 0xac01) && (0xfd < unaff_w28 - 0x1101)) &&
                 (0x1d < unaff_w28 - 0xa961)) || (uVar9 = FUN_03597a54(0), (uVar9 & 1) != 0)) &&
               ((((0xed < unaff_w28 - 0xff01 && (0x1d < unaff_w28 - 0xfe31)) &&
                 (0x717d < unaff_w28 - 0x2e81)) && (0x1fd < unaff_w28 - 0xf901))))
            goto LAB_03585adc;
            lVar13 = FUN_035978e8(0);
            if ((lVar13 == 0) || (*(long *)(lVar13 + 0x10) == 0)) goto LAB_03586310;
            uStack00000000000000c0 = unaff_w28;
            uVar24 = FUN_0219c130(*(long *)(lVar13 + 0x10),&stack0x000000c0,
                                  *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
            if ((int)uStack0000000000000070 <= (int)*unaff_x21) {
              if (((uStack0000000000000030 | uVar24 ^ 0xffffffff) & 1) != 0) {
LAB_035862b0:
                FUN_0358c4f0();
              }
LAB_035862c4:
              uStack0000000000000030 = 0;
              uStack0000000000000028 = 1;
              goto LAB_035862f4;
            }
            lVar13 = FUN_035978e8(0);
            if ((lVar13 == 0) || (lVar14 = *in_stack_00000078, lVar14 == 0)) goto LAB_03586310;
            if (*(uint *)(lVar14 + 0x18) <= *unaff_x21 + 1)
            goto UnityEngine_LightProbesQuery__get_IsCreated;
            if (*(long *)(lVar13 + 0x18) == 0) goto LAB_03586310;
            uStack00000000000000c0 =
                 (uint)*(ushort *)(lVar14 + (long)(int)(*unaff_x21 + 1) * (long)iVar15 + 0x20);
            uVar9 = FUN_0219c130(*(long *)(lVar13 + 0x18),&stack0x000000c0,
                                 *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
            if (((uStack0000000000000030 | uVar24 ^ 0xffffffff) & 1) == 0) goto LAB_035862c4;
            if ((uVar9 & 1) == 0) goto LAB_035862b0;
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
              lVar13 = FUN_035978e8(0);
              if ((lVar13 == 0) || (*(long *)(lVar13 + 0x10) == 0)) goto LAB_03586310;
              uStack00000000000000c0 = unaff_w28;
              uVar9 = FUN_0219c130(*(long *)(lVar13 + 0x10),&stack0x000000c0,
                                   *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
              if ((uVar9 & 1) == 0) {
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
      bVar6 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
      if (unaff_w28 == 9) {
LAB_035857c4:
        bVar1 = true;
      }
      else {
        if ((((unaff_w29 != 0) || (unaff_w28 == 3)) || (unaff_w28 == 0x200b)) || (unaff_w28 == 0xad)
           ) goto LAB_03585804;
UnityEngine_Display__Activate:
        bVar1 = false;
      }
      fVar18 = *(float *)(unaff_x19 + 0x360);
      fVar22 = *(float *)(unaff_x19 + 0x640);
      fVar17 = (fStack000000000000003c - *(float *)(unaff_x19 + 0x350)) -
               *(float *)(unaff_x19 + 0x354);
      bVar5 = true;
      if ((fVar18 <= fVar17) && (bVar5 = false, !NAN(fVar18))) {
        bVar5 = fVar18 == -1.0;
      }
      if (!bVar5) {
        fVar17 = fVar18;
      }
      fVar18 = (float)FUN_03776cb4(&stack0x00000120,0);
      if (unaff_w26 == 0) {
        fVar19 = unaff_s15;
      }
      fVar20 = 1.0;
      if (!bVar6) {
        fVar20 = DAT_00d38acc;
      }
      fStack000000000000005c = ABS(fVar22) + fVar19 * fVar18 * (1.0 - *(float *)(unaff_x19 + 0x2d4))
      ;
      if ((fStack000000000000005c <= fVar20 * fVar17 || (uVar4 & 1) != 0) ||
         (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498))) {
        fStack0000000000000048 = *(float *)(unaff_x19 + 0x350);
        in_stack_00000040._4_4_ = *(float *)(unaff_x19 + 0x354);
        if (!bVar1) goto LAB_03585998;
        if (*unaff_x23 != 0) {
          memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
          fVar19 = (float)FUN_03776a48(&stack0x00000140,0);
          if (*unaff_x23 != 0) {
            fVar17 = *(float *)(unaff_x19 + 0x640);
            fVar27 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x23 + 0x1b9));
            fVar27 = unaff_s15 * fVar19 * fVar27;
            fVar19 = fVar27 * (float)(int)(fVar17 / fVar27);
            if (fVar19 <= fVar17) {
              fVar19 = fVar17 + fVar27;
            }
            goto LAB_03585a9c;
          }
        }
        goto LAB_03586310;
      }
      unaff_w27 = FUN_0358c15c();
      lVar13 = *(long *)(unaff_x19 + 0x488);
      if (lVar13 == 0) goto LAB_03586310;
      uVar11 = *(uint *)(unaff_x19 + 0x494);
      in_stack_00000c10 = uVar11 - 1;
      if (*(uint *)(lVar13 + 0x18) <= in_stack_00000c10)
      goto UnityEngine_LightProbesQuery__get_IsCreated;
      if (((uStack000000000000004c & 1) == 0 &&
           *(short *)(lVar13 + (long)(int)in_stack_00000c10 * (long)iVar15 + 0x20) == 0xad) &&
         (*(int *)(unaff_x19 + 0x2e0) == 0)) {
        uStack000000000000004c = 0;
        in_stack_00000c14 = 0x2d;
        *unaff_x21 = in_stack_00000c10;
        unaff_w27 = unaff_w27 - 1;
      }
      else {
        if (*(uint *)(lVar13 + 0x18) <= uVar11) goto UnityEngine_LightProbesQuery__get_IsCreated;
        if (*(short *)(lVar13 + (long)(int)uVar11 * unaff_x22 + 0x20) == 0xad) {
          uStack000000000000004c = 1;
          in_stack_00000c10 = uVar24;
        }
        else {
          if ((uStack0000000000000030 & uStack0000000000000018 & 1) != 0) {
            fVar19 = *(float *)(unaff_x19 + 0x2d4);
            fVar27 = *(float *)(unaff_x19 + 0x2d0) / 100.0;
            if ((fVar19 < fVar27) && (*(int *)(unaff_x19 + 0x244) < *(int *)(unaff_x19 + 0x248))) {
              fVar18 = fStack000000000000005c;
              if (0.0 < fVar19) {
                fVar18 = fStack000000000000005c / (1.0 - fVar19);
              }
              fVar19 = fVar19 + (fStack000000000000005c - fVar20 * (fVar17 + DAT_00d38cc4)) / fVar18
              ;
              if (fVar27 <= fVar19) {
                fVar19 = fVar27;
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
              fVar27 = fVar19 * 20.0 + 0.5;
              fVar19 = DAT_00d38e60;
              if (fVar27 != INFINITY) {
                fVar19 = (float)(int)fVar27 / 20.0;
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
            fVar27 = *(float *)(unaff_x19 + 0x4d0);
            if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            fVar19 = fVar19 - fVar27;
            if (((fStack000000000000001c < ABS(fVar19)) && (*(char *)(unaff_x19 + 0x2c4) == '\0'))
               && (*(char *)(unaff_x19 + 0x33c) == '\0')) {
              *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar19;
              *(float *)(unaff_x19 + 0x4d8) = fVar19 + *(float *)(unaff_x19 + 0x4d8);
            }
          }
          fVar17 = *(float *)(unaff_x19 + 0x640);
          fVar27 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
          fVar19 = *(float *)(unaff_x19 + 0x4c4);
          if (fVar27 <= *(float *)(unaff_x19 + 0x4c4)) {
            fVar19 = fVar27;
          }
          *(undefined4 *)(unaff_x19 + 0x498) = *(undefined4 *)(unaff_x19 + 0x494);
          *(float *)(unaff_x19 + 0x4c4) = fVar19;
          *(undefined4 *)(unaff_x19 + 0x4ac) = 0;
          if ((uVar3 & 0x100000000) == 0) {
            fVar27 = (*(float *)(unaff_x19 + 0x4c8) - *(float *)(unaff_x19 + 0x4d8)) - fVar27;
            if (fStack0000000000000038 <= fVar27) {
              fStack0000000000000038 = fVar27;
            }
          }
          else {
            fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fVar19;
          }
          FUN_0358c4f0();
          lVar13 = *(long *)(unaff_x19 + 0x488);
          *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
          if (lVar13 == 0) goto LAB_03586310;
          if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x494))
          goto UnityEngine_LightProbesQuery__get_IsCreated;
          fVar19 = *(float *)(unaff_x19 + 0x2c0);
          fVar27 = *(float *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 + 0x154);
          bVar6 = fVar19 != DAT_00d38ba4;
          if (bVar6) {
            fVar18 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
          }
          else {
            fVar18 = fVar27 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                     fStack0000000000000020 * (fStack0000000000000024 + *(float *)(unaff_x19 + 700))
            ;
            fVar19 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
          }
          *(bool *)(unaff_x19 + 0x2c4) = bVar6;
          *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) + fVar19 + fVar18;
          puVar2 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar13 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar13 = *(long *)puVar2;
          }
          uStack000000000000004c = 0;
          fStack000000000000006c = fStack000000000000006c + fVar17;
          uVar21 = *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x40c) + 0.0;
          uVar21 = NEON_rev64(uVar21,4);
          *(float *)(unaff_x19 + 0x4d0) = fVar27;
          *(undefined8 *)(unaff_x19 + 0x4c8) = uVar21;
          uStack0000000000000030 = 1;
          in_stack_00000c10 = uVar24;
        }
      }
    }
LAB_03586300:
    do {
      lVar13 = *(long *)(unaff_x19 + 0x478);
      unaff_w27 = unaff_w27 + 1;
      if (lVar13 == 0) goto LAB_03586310;
      if ((int)*(uint *)(lVar13 + 0x18) <= (int)unaff_w27) {
LAB_03586314:
        if ((((*(float *)(unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x240) <= DAT_00d389f8) ||
             ((_uStack0000000000000018 & 1) == 0)) ||
            (fVar19 = *in_stack_00000010, *(float *)(unaff_x19 + 0x254) <= fVar19)) ||
           (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
          fVar19 = *(float *)(unaff_x19 + 0x340);
          fVar27 = *(float *)(unaff_x19 + 0x348);
          if (fVar19 <= 0.0) {
            fVar19 = 0.0;
          }
          if (fVar27 <= 0.0) {
            fVar27 = 0.0;
          }
          *(undefined1 *)(unaff_x19 + 0x24c) = 1;
          fVar27 = (fStack000000000000006c + fVar19 + fVar27) * 100.0 + 1.0;
          fVar19 = DAT_00d387f8;
          if (fVar27 != INFINITY) {
            fVar19 = (float)(int)fVar27 / 100.0;
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
        fVar27 = fVar19 * 20.0 + 0.5;
        fVar19 = DAT_00d38e60;
        if (fVar27 != INFINITY) {
          fVar19 = (float)(int)fVar27 / 20.0;
        }
        if (*(float *)(unaff_x19 + 0x254) <= fVar19) {
          fVar19 = *(float *)(unaff_x19 + 0x254);
        }
        *in_stack_00000010 = fVar19;
        goto LAB_035863e8;
      }
      if (*(uint *)(lVar13 + 0x18) <= unaff_w27) goto UnityEngine_LightProbesQuery__get_IsCreated;
      unaff_w28 = *(uint *)(lVar13 + (long)(int)unaff_w27 * 0xc + 0x20);
      if (unaff_w28 == 0) goto LAB_03586314;
      if ((unaff_w28 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) {
        *(undefined1 *)(unaff_x19 + 0x431) = 1;
        *(undefined4 *)(unaff_x19 + 0x644) = 0;
        uVar9 = FUN_03586568();
        if (((uVar9 & 1) != 0) &&
           (unaff_w27 = in_stack_00000118._4_4_, *(int *)(unaff_x19 + 0x644) == 0))
        goto LAB_03586300;
      }
      else {
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0))
        goto LAB_03586310;
        if (*(uint *)(lVar13 + 0x18) <= *unaff_x21)
        goto UnityEngine_LightProbesQuery__get_IsCreated;
        lVar13 = lVar13 + (long)(int)*unaff_x21 * unaff_x22;
        *(undefined4 *)(unaff_x19 + 0x644) = *(undefined4 *)(lVar13 + 0x2c);
        *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar13 + 0x58);
        *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(lVar13 + 0x38);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0)) goto LAB_03586310;
      uVar24 = *unaff_x21;
      if (*(uint *)(lVar13 + 0x18) <= uVar24) goto UnityEngine_LightProbesQuery__get_IsCreated;
      lVar14 = (long)(int)uVar24;
      unaff_w20 = (uint)*(byte *)(lVar13 + lVar14 * unaff_x22 + 0x5c);
      *(undefined1 *)(unaff_x19 + 0x431) = 0;
      uVar25 = *(undefined4 *)(unaff_x19 + 0x120);
      if (in_stack_00000c10 == uVar24) {
        *(undefined4 *)(unaff_x19 + 0x644) = 0;
        if (in_stack_00000c14 == 0x2026) {
          lVar13 = *in_stack_00000078;
          if (lVar13 != 0) {
            if (uVar24 < *(uint *)(lVar13 + 0x18)) {
              *(undefined8 *)(lVar13 + lVar14 * unaff_x22 + 0x30) =
                   *(undefined8 *)(unaff_x19 + 0x650);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar13 = *in_stack_00000078;
              if (lVar13 != 0) {
                if (*unaff_x21 < *(uint *)(lVar13 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)*unaff_x21 * unaff_x22;
                  *(undefined4 *)(lVar13 + 0x2c) = 0;
                  *(undefined8 *)(lVar13 + 0x38) = *(undefined8 *)(unaff_x19 + 0x658);
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  lVar13 = *(long *)(unaff_x19 + 0x488);
                  if (lVar13 != 0) {
                    if (*(uint *)(unaff_x19 + 0x494) < *(uint *)(lVar13 + 0x18)) {
                      *(undefined8 *)
                       (lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 + 0x50) =
                           *(undefined8 *)(unaff_x19 + 0x660);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                      lVar13 = *in_stack_00000078;
                      if (lVar13 != 0) {
                        uVar24 = *unaff_x21;
                        if (uVar24 < *(uint *)(lVar13 + 0x18)) {
                          bVar6 = true;
                          in_stack_00000c10 = uVar24 + 1;
                          *(undefined4 *)(lVar13 + (long)(int)uVar24 * unaff_x22 + 0x58) =
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
          bVar6 = true;
          unaff_w28 = in_stack_00000c14;
          goto LAB_03584c20;
        }
        lVar13 = *in_stack_00000078;
        if (((lVar13 == 0) || (*unaff_x23 == 0)) || (lVar8 = FUN_03568ac0(*unaff_x23,0), lVar8 == 0)
           ) goto LAB_03586310;
        FUN_0219b634(lVar8,&stack0x00000c1c,&stack0x000000c0,*(undefined8 *)OVRPlugin_Hand_TypeInfo)
        ;
        if (*(uint *)(lVar13 + 0x18) <= uVar24) goto UnityEngine_LightProbesQuery__get_IsCreated;
        *(ulong *)(lVar13 + lVar14 * unaff_x22 + 0x30) =
             CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        bVar6 = true;
        unaff_w28 = 3;
        *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
      }
      else {
        bVar6 = false;
LAB_03584c20:
        if ((unaff_w28 != 3) && ((int)uVar24 < *(int *)(unaff_x19 + 0x324))) {
          lVar13 = *in_stack_00000078;
          if (lVar13 == 0) goto LAB_03586310;
          if (*(uint *)(lVar13 + 0x18) <= uVar24) goto UnityEngine_LightProbesQuery__get_IsCreated;
          lVar13 = lVar13 + (long)(int)uVar24 * (long)iVar15;
          *(undefined1 *)(lVar13 + 0x194) = 0;
          *(undefined2 *)(lVar13 + 0x20) = 0x200b;
          *(undefined4 *)(lVar13 + 100) = 0;
          *unaff_x21 = uVar24 + 1;
          goto LAB_03586300;
        }
      }
      iVar7 = *(int *)(unaff_x19 + 0x644);
      if (iVar7 == 0) {
        uVar24 = *(uint *)(unaff_x19 + 0x25c);
        if ((uVar24 >> 4 & 1) == 0) {
          if ((uVar24 >> 3 & 1) == 0) {
            fStack0000000000000068 = 1.0;
            if ((uVar24 >> 5 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar9 = FUN_026b812c(unaff_w28,0);
              fStack0000000000000068 = 1.0;
              if ((uVar9 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar24 = FUN_026b8410(unaff_w28,0);
                fStack0000000000000068 = in_stack_00000008._4_4_;
                goto LAB_03584f98;
              }
            }
          }
          else {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar9 = FUN_026b8070(unaff_w28,0);
            fStack0000000000000068 = 1.0;
            if ((uVar9 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar24 = FUN_026b8594(unaff_w28,0);
              goto LAB_03584f98;
            }
          }
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar9 = FUN_026b812c(unaff_w28,0);
          fStack0000000000000068 = 1.0;
          if ((uVar9 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar24 = FUN_026b8410(unaff_w28,0);
LAB_03584f98:
            unaff_w28 = uVar24 & 0xffff;
          }
        }
        iVar7 = *(int *)(unaff_x19 + 0x644);
      }
      else {
        fStack0000000000000068 = 1.0;
      }
      if (iVar7 != 0) {
        if (iVar7 != 1) {
          unaff_w26 = (uint)(unaff_w28 == 0xad);
          lVar13 = *in_stack_00000078;
          unaff_s8 = 0.0;
          unaff_s14 = 0.0;
          if (unaff_w28 != 0xad && unaff_w28 != 3) {
            unaff_s14 = unaff_s15;
          }
          if (lVar13 == 0) goto LAB_03586310;
          uVar24 = *unaff_x21;
          unaff_s9 = 0.0;
          goto LAB_035852ec;
        }
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0))
        goto LAB_03586310;
        if (*(uint *)(lVar13 + 0x18) <= *unaff_x21)
        goto UnityEngine_LightProbesQuery__get_IsCreated;
        *(undefined8 *)(unaff_x19 + 0x698) =
             *(undefined8 *)(lVar13 + (long)(int)*unaff_x21 * unaff_x22 + 0x40);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000050);
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0))
        goto LAB_03586310;
        if (*(uint *)(lVar13 + 0x18) <= *unaff_x21)
        goto UnityEngine_LightProbesQuery__get_IsCreated;
        *(undefined4 *)(unaff_x19 + 0x6a4) =
             *(undefined4 *)(lVar13 + (long)(int)*unaff_x21 * unaff_x22 + 0x48);
        if ((*(long *)(unaff_x19 + 0x698) == 0) ||
           (lVar13 = UnityEngine_Material__DisableKeyword(*(long *)(unaff_x19 + 0x698),0),
           lVar13 == 0)) goto LAB_03586310;
        FUN_02215a88(lVar13,*(undefined4 *)(unaff_x19 + 0x6a4),&stack0x000000c0,
                     *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
        lVar13 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
        if (lVar13 != 0) {
          if (unaff_w28 == 0x3c) {
            unaff_w28 = *(int *)(unaff_x19 + 0x6a4) + 0xe000;
          }
          if (*in_stack_00000050 == 0) goto LAB_03586310;
          memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
          iVar7 = FUN_03776950(&stack0x00000140,0);
          fVar19 = *(float *)(unaff_x19 + 0x1e8);
          if (iVar7 < 1) {
            if (*unaff_x23 == 0) goto LAB_03586310;
            memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
            iVar7 = FUN_03776950(&stack0x00000140,0);
            if (*unaff_x23 == 0) goto LAB_03586310;
            memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
            fVar17 = (float)FUN_03776960(&stack0x00000140,0);
            fVar27 = fStack000000000000002c;
            if (*(char *)(unaff_x19 + 0x305) != '\0') {
              fVar27 = 1.0;
            }
            if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03586310;
            memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
            fVar18 = (float)FUN_03776980(&stack0x00000140,0);
            if (*(long *)(lVar13 + 0x20) == 0) goto LAB_03586310;
            FUN_03776e6c(&stack0x000000c0,*(long *)(lVar13 + 0x20),0);
            in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
            in_stack_00000108 = in_stack_000000c8;
            in_stack_00000110 = in_stack_000000d0;
            fVar22 = (float)FUN_03776c9c(&stack0x00000100,0);
            if (*(long *)(lVar13 + 0x20) == 0) goto LAB_03586310;
            fVar29 = *(float *)(lVar13 + 0x2c);
            fVar20 = (float)FUN_03776ea8(*(long *)(lVar13 + 0x20),0);
            if (*unaff_x23 == 0) goto LAB_03586310;
            memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
            fVar16 = (float)FUN_03776980(&stack0x00000140,0);
            if (*unaff_x23 == 0) goto LAB_03586310;
            fVar27 = (fVar19 / (float)iVar7) * fVar17 * fVar27;
            unaff_s15 = fVar27 * (fVar18 / fVar22) * fVar29 * fVar20;
            fVar27 = fVar27 / unaff_s15;
            unaff_s8 = fVar27 * fVar16;
            memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
            fVar19 = (float)FUN_037769c0(&stack0x00000140,0);
            unaff_s9 = fVar27 * fVar19;
          }
          else {
            if (*in_stack_00000050 == 0) goto LAB_03586310;
            memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
            iVar7 = FUN_03776950(&stack0x00000140,0);
            if (*in_stack_00000050 == 0) goto LAB_03586310;
            memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
            fVar27 = (float)FUN_03776960(&stack0x00000140,0);
            if (*(long *)(lVar13 + 0x20) == 0) goto LAB_03586310;
            fVar18 = *(float *)(lVar13 + 0x2c);
            fVar17 = fStack000000000000002c;
            if (*(char *)(unaff_x19 + 0x305) != '\0') {
              fVar17 = 1.0;
            }
            fVar22 = (float)FUN_03776ea8(*(long *)(lVar13 + 0x20),0);
            if (*(long *)(unaff_x19 + 0x698) == 0) goto LAB_03586310;
            memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0x698) + 0x48),0x60);
            unaff_s8 = (float)FUN_03776980(&stack0x00000140,0);
            if (*in_stack_00000050 == 0) goto LAB_03586310;
            unaff_s15 = (fVar19 / (float)iVar7) * fVar27 * fVar17 * fVar18 * fVar22;
            memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
            unaff_s9 = (float)FUN_037769c0(&stack0x00000140,0);
          }
          *unaff_x25 = lVar13;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          lVar13 = *in_stack_00000078;
          if (lVar13 == 0) goto LAB_03586310;
          uVar24 = *unaff_x21;
          if (*(uint *)(lVar13 + 0x18) <= uVar24) goto UnityEngine_LightProbesQuery__get_IsCreated;
          lVar14 = lVar13 + (long)(int)uVar24 * unaff_x22;
          *(undefined4 *)(lVar14 + 0x2c) = 1;
          *(float *)(lVar14 + 0x160) = unaff_s15;
          *(undefined4 *)(unaff_x19 + 0x120) = uVar25;
          goto LAB_035852d0;
        }
        goto LAB_03586300;
      }
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0)) goto LAB_03586310;
      if (*(uint *)(lVar13 + 0x18) <= *unaff_x21) goto UnityEngine_LightProbesQuery__get_IsCreated;
      *unaff_x25 = *(long *)(lVar13 + (long)(int)*unaff_x21 * unaff_x22 + 0x30);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    } while (*unaff_x25 == 0);
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0)) goto LAB_03586310;
    uVar11 = *unaff_x21;
    uVar24 = *(uint *)(lVar13 + 0x18);
    if (uVar24 <= uVar11) goto UnityEngine_LightProbesQuery__get_IsCreated;
    *(undefined4 *)(unaff_x19 + 0x120) =
         *(undefined4 *)(lVar13 + (long)(int)uVar11 * unaff_x22 + 0x58);
    if (bVar6) {
      lVar14 = *(long *)(unaff_x19 + 0x478);
      if (lVar14 == 0) goto LAB_03586310;
      if (*(uint *)(lVar14 + 0x18) <= unaff_w27) goto UnityEngine_LightProbesQuery__get_IsCreated;
      if ((*(int *)(lVar14 + (long)(int)unaff_w27 * 0xc + 0x20) != 10) ||
         (uVar11 == *(uint *)(unaff_x19 + 0x498))) goto LAB_03585044;
      if (uVar24 <= uVar11 - 1) goto UnityEngine_LightProbesQuery__get_IsCreated;
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar19 = *(float *)(lVar13 + (long)(int)(uVar11 - 1) * (long)iVar15 + 0x60);
      iVar7 = FUN_03776950(*unaff_x23 + 0x50,0);
      lVar13 = *unaff_x23;
    }
    else {
LAB_03585044:
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar19 = *(float *)(unaff_x19 + 0x1e8);
      iVar7 = FUN_03776950(*unaff_x23 + 0x50,0);
      lVar13 = *(long *)(unaff_x19 + 0x100);
    }
    if (lVar13 == 0) goto LAB_03586310;
    fVar17 = (float)FUN_03776960(lVar13 + 0x50,0);
    fVar27 = fStack000000000000002c;
    if (*(char *)(unaff_x19 + 0x305) != '\0') {
      fVar27 = 1.0;
    }
    unaff_s9 = 0.0;
    unaff_s8 = 0.0;
    if (!(bool)(bVar6 & unaff_w28 == 0x2026)) {
      if (*unaff_x23 == 0) goto LAB_03586310;
      unaff_s8 = (float)FUN_03776980(*unaff_x23 + 0x50,0);
      if (*unaff_x23 == 0) goto LAB_03586310;
      unaff_s9 = (float)FUN_037769c0(*unaff_x23 + 0x50,0);
    }
    if ((*unaff_x25 == 0) || (lVar13 = *(long *)(unaff_x19 + 0x488), lVar13 == 0))
    goto LAB_03586310;
    uVar24 = *(uint *)(unaff_x19 + 0x494);
    if (*(uint *)(lVar13 + 0x18) <= uVar24) goto UnityEngine_LightProbesQuery__get_IsCreated;
    unaff_s15 = ((fStack0000000000000068 * fVar19) / (float)iVar7) * fVar17 * fVar27 *
                *(float *)(unaff_x19 + 0x404) * *(float *)(*unaff_x25 + 0x2c);
    *(undefined4 *)(lVar13 + (long)(int)uVar24 * unaff_x22 + 0x2c) = 0;
LAB_035852d0:
    unaff_w26 = (uint)(unaff_w28 == 0xad);
    unaff_s14 = 0.0;
    if (unaff_w28 != 0xad && unaff_w28 != 3) {
      unaff_s14 = unaff_s15;
    }
LAB_035852ec:
    if (*(uint *)(lVar13 + 0x18) <= uVar24) goto UnityEngine_LightProbesQuery__get_IsCreated;
    *(short *)(lVar13 + (long)(int)uVar24 * (long)iVar15 + 0x20) = (short)unaff_w28;
    if ((*unaff_x25 == 0) || (lVar13 = *(long *)(*unaff_x25 + 0x20), lVar13 == 0))
    goto LAB_03586310;
    FUN_03776e6c(&stack0x000000c0,lVar13,0);
    in_stack_00000120 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
    in_stack_00000128 = in_stack_000000c8;
    in_stack_00000130 = in_stack_000000d0;
    if ((int)unaff_w28 < 0x10000) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar24 = FUN_026b63d8(unaff_w28,0);
      unaff_w29 = uVar24 & 1;
    }
    else {
      unaff_w29 = 0;
    }
    fStack0000000000000074 = *(float *)(unaff_x19 + 0x2a8);
    *(undefined4 *)(unaff_x19 + 0x2fc) = 0;
    if (*(char *)(unaff_x19 + 0x2f9) != '\0') break;
    uVar9 = 0;
    fVar19 = unaff_s15;
    unaff_s15 = unaff_s14;
    uVar24 = in_stack_00000c10;
  } while( true );
  if (*unaff_x25 == 0) goto LAB_03586310;
  uVar11 = *unaff_x21;
  unaff_w24 = *(uint *)(*unaff_x25 + 0x28);
  if ((int)uVar11 < (int)uStack0000000000000070) goto code_r0x03585394;
  uVar25 = 0;
  uVar26 = 0;
  uVar24 = 0;
  uVar28 = 0;
  goto LAB_03585478;
code_r0x03585394:
  if ((*(long *)(unaff_x19 + 0x368) == 0) ||
     (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0)) goto LAB_03586310;
  if (*(uint *)(lVar13 + 0x18) <= uVar11 + 1) {
UnityEngine_LightProbesQuery__get_IsCreated:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  lVar13 = *(long *)(lVar13 + (long)(int)(uVar11 + 1) * (long)iVar15 + 0x30);
  if ((((lVar13 == 0) || (*unaff_x23 == 0)) || (lVar14 = *(long *)(*unaff_x23 + 0x128), lVar14 == 0)
      ) || (param_1 = *(long *)(lVar14 + 0x18), param_1 == 0)) goto LAB_03586310;
  param_2 = (undefined8 *)&stack0x000000c0;
  param_3 = &stack0x000000f8;
  uStack00000000000000c0 = unaff_w24 | *(int *)(lVar13 + 0x28) << 0x10;
  in_x9 = (undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo;
  goto code_r0x035853f0;
}


