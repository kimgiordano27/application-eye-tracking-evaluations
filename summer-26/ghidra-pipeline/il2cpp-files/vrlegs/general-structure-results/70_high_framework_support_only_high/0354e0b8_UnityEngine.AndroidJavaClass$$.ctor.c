/*
FUNCTION_NAME: UnityEngine.AndroidJavaClass$$.ctor
ENTRY_POINT: 0354e0b8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_18;weak_xr_or_state_hits_18;validity_or_gating_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_18
*/


void UnityEngine_AndroidJavaClass___ctor
               (undefined1 param_1 [16],undefined8 param_2,float param_3,long *param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  char cVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  code *pcVar15;
  long lVar16;
  long in_x14;
  long *unaff_x19;
  long unaff_x20;
  uint uVar17;
  undefined8 unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 uVar18;
  uint unaff_w24;
  long unaff_x25;
  int unaff_w26;
  long unaff_x27;
  uint unaff_w28;
  uint uVar19;
  long unaff_x29;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float unaff_s14;
  float unaff_s15;
  uint uStack0000000000000030;
  int iStack0000000000000034;
  float in_stack_00000040;
  undefined8 in_stack_00000048;
  long *in_stack_00000050;
  float fStack0000000000000058;
  int iStack000000000000005c;
  float fStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  int *in_stack_00000090;
  undefined4 uStack0000000000000098;
  float fStack000000000000009c;
  undefined4 in_stack_000000a0;
  float in_stack_000000a8;
  undefined8 in_stack_000000b8;
  undefined4 uStack00000000000000c0;
  float fStack00000000000000c4;
  long in_stack_000000c8;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  int in_stack_000000d8;
  float fStack00000000000000e0;
  float fStack00000000000000e4;
  long in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  long in_stack_00000110;
  uint uStack0000000000000118;
  uint uStack000000000000011c;
  uint uStack0000000000000120;
  int iStack0000000000000124;
  long in_stack_00000128;
  undefined8 in_stack_00000130;
  long in_stack_00000138;
  float in_stack_00000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000168;
  uint in_stack_00000170;
  uint in_stack_00000178;
  uint in_stack_00000180;
  undefined8 in_stack_00000188;
  float fStack0000000000000190;
  float fStack0000000000000194;
  float in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  float in_stack_000001b0;
  undefined8 in_stack_000017c0;
  undefined8 in_stack_000017c8;
  float in_stack_000017d0;
  undefined4 in_stack_000017d4;
  
code_r0x0354e0b8:
  uVar14 = in_stack_00000170;
  if (*(int *)(unaff_x25 + unaff_x29 * unaff_x23 + 0x68) == iStack0000000000000034)
  goto LAB_0354f0d4;
LAB_0354e0cc:
  in_stack_00000170 = uVar14;
  uVar14 = (uint)unaff_x21;
  if (unaff_w24 < uVar14) {
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac();
      DAT_0411f172 = '\x01';
      uVar14 = *(uint *)(unaff_x25 + 0x18);
      param_4 = (long *)PTR_DAT_03cbded8;
    }
    uVar22 = *(undefined4 *)(*(undefined8 **)(*param_4 + 0xb8) + 1);
    lVar11 = unaff_x25 + unaff_x29 * unaff_x23;
    *(undefined8 *)(lVar11 + 0x70) = **(undefined8 **)(*param_4 + 0xb8);
    *(undefined4 *)(lVar11 + 0x78) = uVar22;
    if (unaff_w24 < uVar14) {
      uVar22 = *(undefined4 *)(*(undefined8 **)(*param_4 + 0xb8) + 1);
      lVar11 = unaff_x25 + unaff_x29 * unaff_x23;
      *(undefined8 *)(lVar11 + 0x98) = **(undefined8 **)(*param_4 + 0xb8);
      *(undefined4 *)(lVar11 + 0xa0) = uVar22;
      uVar22 = *(undefined4 *)(*(undefined8 **)(*param_4 + 0xb8) + 1);
      *(undefined8 *)(lVar11 + 0xc0) = **(undefined8 **)(*param_4 + 0xb8);
      *(undefined4 *)(lVar11 + 200) = uVar22;
      uVar22 = *(undefined4 *)(*(undefined8 **)(*param_4 + 0xb8) + 1);
      *(undefined8 *)(lVar11 + 0xe8) = **(undefined8 **)(*param_4 + 0xb8);
      *(undefined4 *)(lVar11 + 0xf0) = uVar22;
      *(undefined1 *)(unaff_x20 + 0x194) = 0;
      param_3 = in_stack_00000140;
      do {
        uVar19 = unaff_w28;
        uVar14 = in_stack_00000170;
        if (unaff_w26 == 0) {
          pcVar15 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
          (*pcVar15)();
        }
        else if (unaff_w26 == 1) {
          pcVar15 = *(code **)(*unaff_x19 + 0x8c8);
          goto LAB_0354e1b4;
        }
        do {
          unaff_w28 = in_stack_00000180;
          in_stack_00000170 = uVar14;
          if ((*unaff_x22 == 0) || (lVar11 = *(long *)(*unaff_x22 + 0x38), lVar11 == 0))
          goto LAB_0354fbf4;
          if (*(uint *)(lVar11 + 0x18) <= unaff_w24)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          lVar11 = lVar11 + unaff_x29 * unaff_x23;
          uVar23 = *(undefined8 *)(lVar11 + 0x11c);
          fVar21 = (float)in_stack_00000150;
          fVar20 = (float)((ulong)in_stack_00000150 >> 0x20);
          *(undefined8 *)(lVar11 + 0x11c) =
               CONCAT44(fVar21 + (float)((ulong)uVar23 >> 0x20),param_3 + (float)uVar23);
          *(float *)(lVar11 + 0x124) = fVar20 + *(float *)(lVar11 + 0x124);
          if ((*unaff_x22 == 0) || (lVar11 = *(long *)(*unaff_x22 + 0x38), lVar11 == 0))
          goto LAB_0354fbf4;
          if (*(uint *)(lVar11 + 0x18) <= unaff_w24)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          lVar11 = lVar11 + unaff_x29 * unaff_x23;
          *(ulong *)(lVar11 + 0x110) =
               CONCAT44(fVar21 + (float)((ulong)*(undefined8 *)(lVar11 + 0x110) >> 0x20),
                        param_3 + (float)*(undefined8 *)(lVar11 + 0x110));
          *(float *)(lVar11 + 0x118) = fVar20 + *(float *)(lVar11 + 0x118);
          if ((*unaff_x22 == 0) || (lVar11 = *(long *)(*unaff_x22 + 0x38), lVar11 == 0))
          goto LAB_0354fbf4;
          if (*(uint *)(lVar11 + 0x18) <= unaff_w24)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          lVar11 = lVar11 + unaff_x29 * unaff_x23;
          *(ulong *)(lVar11 + 0x128) =
               CONCAT44(fVar21 + (float)((ulong)*(undefined8 *)(lVar11 + 0x128) >> 0x20),
                        param_3 + (float)*(undefined8 *)(lVar11 + 0x128));
          *(float *)(lVar11 + 0x130) = fVar20 + *(float *)(lVar11 + 0x130);
          if ((*unaff_x22 == 0) || (lVar11 = *(long *)(*unaff_x22 + 0x38), lVar11 == 0))
          goto LAB_0354fbf4;
          if (*(uint *)(lVar11 + 0x18) <= unaff_w24)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          lVar11 = lVar11 + unaff_x29 * unaff_x23;
          *(float *)(lVar11 + 0x134) = param_3 + *(float *)(lVar11 + 0x134);
          *(ulong *)(lVar11 + 0x138) =
               CONCAT44(fVar20 + (float)((ulong)*(undefined8 *)(lVar11 + 0x138) >> 0x20),
                        fVar21 + (float)*(undefined8 *)(lVar11 + 0x138));
          lVar11 = *unaff_x22;
          if ((lVar11 == 0) || (lVar12 = *(long *)(lVar11 + 0x38), lVar12 == 0)) goto LAB_0354fbf4;
          uVar14 = *(uint *)(lVar12 + 0x18);
          if (uVar14 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          lVar16 = lVar12 + unaff_x29 * unaff_x23;
          *(float *)(lVar16 + 0x150) = fVar21 + *(float *)(lVar16 + 0x150);
          *(ulong *)(lVar16 + 0x140) =
               CONCAT44(param_3 + (float)((ulong)*(undefined8 *)(lVar16 + 0x140) >> 0x20),
                        param_3 + (float)*(undefined8 *)(lVar16 + 0x140));
          *(ulong *)(lVar16 + 0x148) =
               CONCAT44(fVar21 + (float)((ulong)*(undefined8 *)(lVar16 + 0x148) >> 0x20),
                        fVar21 + (float)*(undefined8 *)(lVar16 + 0x148));
          if (unaff_w28 == uVar19) {
            uVar14 = *in_stack_00000090 - 1;
            if (unaff_w24 == uVar14) goto LAB_0354e3ec;
          }
          else {
            lVar11 = *(long *)(lVar11 + 0x50);
            if (lVar11 == 0) goto LAB_0354fbf4;
            if (*(uint *)(lVar11 + 0x18) <= uVar19)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar16 = (long)(int)uVar19;
            lVar13 = lVar11 + lVar16 * unaff_x27;
            fVar20 = fVar21 + *(float *)(lVar13 + 0x54);
            *(ulong *)(lVar13 + 0x4c) =
                 CONCAT44(fVar21 + (float)((ulong)*(undefined8 *)(lVar13 + 0x4c) >> 0x20),
                          fVar21 + (float)*(undefined8 *)(lVar13 + 0x4c));
            *(float *)(lVar13 + 0x54) = fVar20;
            *(float *)(lVar13 + 0x58) = param_3 + *(float *)(lVar13 + 0x58);
            if (uVar14 <= *(uint *)(lVar13 + 0x34))
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            uVar22 = *(undefined4 *)(lVar12 + (int)*(uint *)(lVar13 + 0x34) * unaff_x23 + 0x11c);
            lVar11 = lVar11 + lVar16 * unaff_x27;
            *(float *)(lVar11 + 0x70) = fVar20;
            *(undefined4 *)(lVar11 + 0x6c) = uVar22;
            lVar11 = *unaff_x22;
            if ((lVar11 == 0) || (lVar12 = *(long *)(lVar11 + 0x50), lVar12 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar12 + 0x18) <= uVar19)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar11 = *(long *)(lVar11 + 0x38);
            if (lVar11 == 0) goto LAB_0354fbf4;
            uVar14 = *(uint *)(lVar12 + lVar16 * unaff_x27 + 0x40);
            if (*(uint *)(lVar11 + 0x18) <= uVar14)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar12 = lVar12 + lVar16 * unaff_x27;
            *(undefined4 *)(lVar12 + 0x74) =
                 *(undefined4 *)(lVar11 + (int)uVar14 * unaff_x23 + 0x128);
            *(undefined4 *)(lVar12 + 0x78) = *(undefined4 *)(lVar12 + 0x4c);
            uVar14 = *in_stack_00000090 - 1;
LAB_0354e3ec:
            if (unaff_w24 == uVar14) {
              lVar11 = *unaff_x22;
              if ((lVar11 == 0) || (lVar12 = *(long *)(lVar11 + 0x50), lVar12 == 0))
              goto LAB_0354fbf4;
              if (*(uint *)(lVar12 + 0x18) <= unaff_w28)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              lVar16 = lVar12 + in_x14 * unaff_x27;
              fVar20 = fVar21 + *(float *)(lVar16 + 0x54);
              *(ulong *)(lVar16 + 0x4c) =
                   CONCAT44(fVar21 + (float)((ulong)*(undefined8 *)(lVar16 + 0x4c) >> 0x20),
                            fVar21 + (float)*(undefined8 *)(lVar16 + 0x4c));
              *(float *)(lVar16 + 0x54) = fVar20;
              *(float *)(lVar16 + 0x58) = param_3 + *(float *)(lVar16 + 0x58);
              lVar11 = *(long *)(lVar11 + 0x38);
              if (lVar11 == 0) goto LAB_0354fbf4;
              if (*(uint *)(lVar11 + 0x18) <= *(uint *)(lVar16 + 0x34))
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              uVar22 = *(undefined4 *)(lVar11 + (int)*(uint *)(lVar16 + 0x34) * unaff_x23 + 0x11c);
              lVar12 = lVar12 + in_x14 * unaff_x27;
              *(float *)(lVar12 + 0x70) = fVar20;
              *(undefined4 *)(lVar12 + 0x6c) = uVar22;
              lVar11 = *unaff_x22;
              if ((lVar11 == 0) || (lVar12 = *(long *)(lVar11 + 0x50), lVar12 == 0))
              goto LAB_0354fbf4;
              if (*(uint *)(lVar12 + 0x18) <= unaff_w28)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              lVar11 = *(long *)(lVar11 + 0x38);
              if (lVar11 == 0) goto LAB_0354fbf4;
              uVar14 = *(uint *)(lVar12 + in_x14 * unaff_x27 + 0x40);
              if (*(uint *)(lVar11 + 0x18) <= uVar14)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              lVar12 = lVar12 + in_x14 * unaff_x27;
              *(undefined4 *)(lVar12 + 0x74) =
                   *(undefined4 *)(lVar11 + (int)uVar14 * unaff_x23 + 0x128);
              *(undefined4 *)(lVar12 + 0x78) = *(undefined4 *)(lVar12 + 0x4c);
            }
          }
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar8 = FUN_026b82c4(in_stack_00000178,0);
          if (((((uVar8 & 1) == 0) && (1 < in_stack_00000178 - 0x2010)) &&
              (in_stack_00000178 != 0xad)) && (in_stack_00000178 != 0x2d)) {
            if ((uStack000000000000011c & 1) == 0) {
              if (in_stack_00000170 != 1) {
LAB_0354f144:
                uStack000000000000011c = 0;
                goto LAB_0354e618;
              }
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar8 = FUN_026b81f8(in_stack_00000178,0);
              if ((uVar8 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar8 = FUN_026b63d8(in_stack_00000178,0);
                if (((in_stack_00000178 != 0x200b) && ((uVar8 & 1) == 0)) &&
                   (*in_stack_00000090 != 1)) goto LAB_0354f144;
              }
            }
            else if (((in_stack_00000170 != 1) &&
                     ((int)unaff_w24 < (int)(*(uint *)(unaff_x25 + 0x18) - 1))) &&
                    (((int)unaff_w24 < *in_stack_00000090 &&
                     ((in_stack_00000178 == 0x2019 || (in_stack_00000178 == 0x27)))))) {
              if (*(uint *)(unaff_x25 + 0x18) <= in_stack_00000170 - 2)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              uVar2 = *(undefined2 *)(unaff_x25 + in_stack_00000138 + -0x438);
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar8 = FUN_026b82c4(uVar2,0);
              if ((uVar8 & 1) != 0) {
                if (*(uint *)(unaff_x25 + 0x18) <= in_stack_00000170)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                uVar2 = *(undefined2 *)(unaff_x25 + in_stack_00000138 + -0x148);
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar8 = FUN_026b82c4(uVar2,0);
                if ((uVar8 & 1) != 0) goto LAB_0354e610;
              }
            }
            if (unaff_w24 == *in_stack_00000090 - 1U) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar8 = FUN_026b82c4(in_stack_00000178,0);
              iVar6 = iStack0000000000000124;
              if ((uVar8 & 1) == 0) goto LAB_0354e93c;
            }
            else {
LAB_0354e93c:
              iVar6 = in_stack_00000170 - 2;
            }
            lVar11 = *unaff_x22;
            if (lVar11 == 0) goto LAB_0354fbf4;
            lVar12 = *(long *)(lVar11 + 0x40);
            if (lVar12 == 0) goto LAB_0354fbf4;
            uVar14 = *(uint *)(lVar11 + 0x24);
            iVar7 = *(int *)(lVar12 + 0x18);
            if (iVar7 < (int)(uVar14 + 1)) {
              if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_01ff025c((long *)(lVar11 + 0x40),iVar7 + 1,
                           *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
              lVar11 = *unaff_x22;
              if (lVar11 == 0) goto LAB_0354fbf4;
            }
            lVar11 = *(long *)(lVar11 + 0x40);
            if (lVar11 == 0) goto LAB_0354fbf4;
            if (*(uint *)(lVar11 + 0x18) <= uVar14)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar11 = lVar11 + (long)(int)uVar14 * 0x18;
            *(long **)(lVar11 + 0x20) = unaff_x19;
            *(uint *)(lVar11 + 0x28) = in_stack_00000168._4_4_;
            *(int *)(lVar11 + 0x2c) = iVar6;
            *(uint *)(lVar11 + 0x30) = (iVar6 - in_stack_00000168._4_4_) + 1;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            lVar11 = unaff_x19[0x6d];
            if (lVar11 == 0) goto LAB_0354fbf4;
            lVar12 = *(long *)(lVar11 + 0x50);
            unaff_x23 = 0x178;
            *(int *)(lVar11 + 0x24) = *(int *)(lVar11 + 0x24) + 1;
            if (lVar12 == 0) goto LAB_0354fbf4;
            if (*(uint *)(lVar12 + 0x18) <= unaff_w28)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar12 = lVar12 + in_x14 * 0x5c;
            uStack000000000000011c = 0;
            in_stack_000000d8 = in_stack_000000d8 + 1;
            *(int *)(lVar12 + 0x30) = *(int *)(lVar12 + 0x30) + 1;
            unaff_x25 = in_stack_000000c8;
          }
          else {
            if ((uStack000000000000011c & 1) == 0) {
              in_stack_00000168._4_4_ = unaff_w24;
            }
            if (unaff_w24 == *in_stack_00000090 - 1U) {
              lVar11 = *unaff_x22;
              if (lVar11 == 0) goto LAB_0354fbf4;
              lVar12 = *(long *)(lVar11 + 0x40);
              if (lVar12 == 0) goto LAB_0354fbf4;
              uVar14 = *(uint *)(lVar11 + 0x24);
              iVar6 = *(int *)(lVar12 + 0x18);
              if (iVar6 < (int)(uVar14 + 1)) {
                if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_01ff025c((long *)(lVar11 + 0x40),iVar6 + 1,
                             *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
                lVar11 = *unaff_x22;
                if (lVar11 == 0) goto LAB_0354fbf4;
              }
              lVar11 = *(long *)(lVar11 + 0x40);
              if (lVar11 == 0) goto LAB_0354fbf4;
              unaff_x23 = 0x178;
              if (*(uint *)(lVar11 + 0x18) <= uVar14)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              lVar11 = lVar11 + (long)(int)uVar14 * 0x18;
              *(long **)(lVar11 + 0x20) = unaff_x19;
              *(uint *)(lVar11 + 0x28) = in_stack_00000168._4_4_;
              *(uint *)(lVar11 + 0x2c) = unaff_w24;
              *(uint *)(lVar11 + 0x30) = in_stack_00000170 - in_stack_00000168._4_4_;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar11 = unaff_x19[0x6d];
              if (lVar11 == 0) goto LAB_0354fbf4;
              lVar12 = *(long *)(lVar11 + 0x50);
              *(int *)(lVar11 + 0x24) = *(int *)(lVar11 + 0x24) + 1;
              if (lVar12 == 0) goto LAB_0354fbf4;
              if (*(uint *)(lVar12 + 0x18) <= unaff_w28)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              lVar12 = lVar12 + in_x14 * 0x5c;
              in_stack_000000d8 = in_stack_000000d8 + 1;
              *(int *)(lVar12 + 0x30) = *(int *)(lVar12 + 0x30) + 1;
            }
LAB_0354e610:
            uStack000000000000011c = 1;
          }
LAB_0354e618:
          if ((*unaff_x22 == 0) || (lVar11 = *(long *)(*unaff_x22 + 0x38), lVar11 == 0))
          goto LAB_0354fbf4;
          uVar14 = *(uint *)(lVar11 + 0x18);
          if (uVar14 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar19 = (uint)in_stack_000000e8;
          uVar17 = (uint)in_stack_00000128;
          if ((*(byte *)(lVar11 + unaff_x29 * unaff_x23 + 400) >> 2 & 1) == 0) {
            if ((in_stack_00000130._4_4_ & 1) == 0) {
LAB_0354eb28:
              in_stack_00000130._4_4_ = 0;
            }
            else {
LAB_0354e660:
              if (uVar14 <= in_stack_00000170 - 2)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              lVar12 = *unaff_x19;
              uVar22 = *(undefined4 *)(lVar11 + in_stack_00000138 + -0x330);
              uVar27 = *(undefined4 *)(lVar11 + in_stack_00000138 + -0x2f8);
LAB_0354ebc0:
              pcVar15 = *(code **)(lVar12 + 0x8d8);
LAB_0354ebc8:
              (*pcVar15)(in_stack_00000070,fStack0000000000000068,uStack000000000000006c,uVar22,
                         fStack0000000000000104,0,in_stack_00000080._4_4_,uVar27);
              puVar3 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar11 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar11 = *(long *)puVar3;
              }
LAB_0354ec1c:
              unaff_s15 = 0.0;
              in_stack_00000130._4_4_ = 0;
              fStack0000000000000104 = *(float *)(*(long *)(lVar11 + 0xb8) + 0x15a8);
              fStack0000000000000100 = 0.0;
            }
          }
          else {
            lVar11 = lVar11 + unaff_x29 * unaff_x23;
            iVar6 = *(int *)(lVar11 + 0x68);
            *(undefined4 *)(lVar11 + 0x16c) = in_stack_000017d4;
            if ((((int)unaff_x19[0x65] < (int)unaff_w24) || ((int)unaff_x19[0x66] < (int)unaff_w28))
               || (((int)unaff_x19[0x5c] == 5 && (iVar6 + 1 != (int)unaff_x19[0x67])))) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar8 = FUN_026b63d8(in_stack_00000178,0);
            if ((in_stack_00000178 != 0x200b) && ((uVar8 & 1) == 0)) {
              lVar11 = *unaff_x22;
              if ((lVar11 == 0) || (lVar12 = *(long *)(lVar11 + 0x38), lVar12 == 0))
              goto LAB_0354fbf4;
              if (*(uint *)(lVar12 + 0x18) <= unaff_w24)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              fVar20 = *(float *)(lVar12 + unaff_x29 * 0x178 + 0x160);
              if (unaff_s15 <= fVar20) {
                unaff_s15 = fVar20;
              }
              if (fStack0000000000000100 <= ABS(unaff_s14)) {
                fStack0000000000000100 = ABS(unaff_s14);
              }
              if (iVar6 != iStack000000000000005c) {
                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar11 = *unaff_x22;
                  if (lVar11 == 0) goto LAB_0354fbf4;
                  lVar12 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                }
                else {
                  lVar12 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                }
                fStack0000000000000104 = *(float *)(lVar12 + 0x15a8);
              }
              lVar11 = *(long *)(lVar11 + 0x38);
              if (lVar11 == 0) goto LAB_0354fbf4;
              if (*(uint *)(lVar11 + 0x18) <= unaff_w24)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
              fVar25 = *(float *)(lVar11 + unaff_x29 * 0x178 + 0x14c);
              fVar20 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
              fVar25 = fVar25 + unaff_s15 * fVar20;
              iStack000000000000005c = iVar6;
              if (fVar25 <= fStack0000000000000104) {
                fStack0000000000000104 = fVar25;
              }
            }
            if ((in_stack_00000130._4_4_ & 1) == 0) {
              unaff_x23 = 0x178;
              in_stack_00000130._4_4_ = 0;
              if ((((in_stack_00000178 == 0xd) || ((in_stack_00000178 & 0xfffe) == 10)) ||
                  ((int)uVar17 < (int)unaff_w24)) || ((bool)(bVar5 ^ 1))) goto LAB_0354ec38;
              if (unaff_w24 == uVar17) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar8 = FUN_026b97f8(in_stack_00000178,0);
                if ((uVar8 & 1) != 0) goto LAB_0354eb28;
              }
              if ((*unaff_x22 == 0) || (lVar11 = *(long *)(*unaff_x22 + 0x38), lVar11 == 0))
              goto LAB_0354fbf4;
              if (*(uint *)(lVar11 + 0x18) <= unaff_w24)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              lVar11 = lVar11 + unaff_x29 * 0x178;
              in_stack_00000080._4_4_ = *(float *)(lVar11 + 0x160);
              in_stack_00000070 = *(undefined4 *)(lVar11 + 0x11c);
              bVar4 = unaff_s15 != 0.0;
              fVar20 = in_stack_00000080._4_4_;
              if (bVar4) {
                fVar20 = unaff_s15;
              }
              unaff_s15 = fVar20;
              in_stack_00000088 = *(undefined4 *)(lVar11 + 0x168);
              uStack000000000000006c = 0;
              fVar20 = unaff_s14;
              if (bVar4) {
                fVar20 = fStack0000000000000100;
              }
              fStack0000000000000068 = fStack0000000000000104;
              fStack0000000000000100 = fVar20;
            }
            unaff_x23 = 0x178;
            if (*in_stack_00000090 == 1) {
              if ((*unaff_x22 != 0) && (lVar11 = *(long *)(*unaff_x22 + 0x38), lVar11 != 0)) {
                if (unaff_w24 < *(uint *)(lVar11 + 0x18)) {
                  lVar11 = lVar11 + unaff_x29 * 0x178;
                  lVar12 = *unaff_x19;
                  uVar22 = *(undefined4 *)(lVar11 + 0x128);
                  uVar27 = *(undefined4 *)(lVar11 + 0x160);
                  goto LAB_0354ebc0;
                }
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              }
              goto LAB_0354fbf4;
            }
            if ((unaff_w24 == uVar19) || ((int)uVar17 <= (int)unaff_w24)) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar8 = FUN_026b63d8(in_stack_00000178,0);
              if ((*unaff_x22 != 0) && (lVar11 = *(long *)(*unaff_x22 + 0x38), lVar11 != 0)) {
                lVar12 = unaff_x29;
                uVar14 = unaff_w24;
                if (in_stack_00000178 == 0x200b || (uVar8 & 1) != 0) {
                  lVar12 = in_stack_00000128;
                  uVar14 = uVar17;
                }
                if (uVar14 < *(uint *)(lVar11 + 0x18)) {
                  lVar11 = lVar11 + lVar12 * 0x178;
                  uVar22 = *(undefined4 *)(lVar11 + 0x128);
                  uVar27 = *(undefined4 *)(lVar11 + 0x160);
                  pcVar15 = *(code **)(*unaff_x19 + 0x8d8);
                  goto LAB_0354ebc8;
                }
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              }
              goto LAB_0354fbf4;
            }
            if (!bVar5) {
              if ((*unaff_x22 != 0) && (lVar11 = *(long *)(*unaff_x22 + 0x38), lVar11 != 0)) {
                uVar14 = *(uint *)(lVar11 + 0x18);
                goto LAB_0354e660;
              }
              goto LAB_0354fbf4;
            }
            if ((int)unaff_w24 < *in_stack_00000090 + -1) {
              if ((*unaff_x22 == 0) || (lVar11 = *(long *)(*unaff_x22 + 0x38), lVar11 == 0))
              goto LAB_0354fbf4;
              if (*(uint *)(lVar11 + 0x18) <= in_stack_00000170)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              uVar8 = FUN_03567ad8(in_stack_00000088,*(undefined4 *)(lVar11 + in_stack_00000138),0);
              if ((uVar8 & 1) == 0) {
                if ((*unaff_x22 != 0) && (lVar11 = *(long *)(*unaff_x22 + 0x38), lVar11 != 0)) {
                  if (unaff_w24 < *(uint *)(lVar11 + 0x18)) {
                    lVar11 = lVar11 + unaff_x29 * 0x178;
                    (**(code **)(*unaff_x19 + 0x8d8))
                              (in_stack_00000070,fStack0000000000000068,uStack000000000000006c,
                               *(undefined4 *)(lVar11 + 0x128),fStack0000000000000104,0,
                               in_stack_00000080._4_4_,*(undefined4 *)(lVar11 + 0x160));
                    puVar3 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                    lVar11 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    if (*(int *)(lVar11 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar11 = *(long *)puVar3;
                    }
                    goto LAB_0354ec1c;
                  }
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                }
                goto LAB_0354fbf4;
              }
            }
            in_stack_00000130._4_4_ = 1;
          }
LAB_0354ec38:
          if ((*unaff_x22 == 0) || (lVar11 = *(long *)(*unaff_x22 + 0x38), lVar11 == 0))
          goto LAB_0354fbf4;
          if (*(uint *)(lVar11 + 0x18) <= unaff_w24)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          if (in_stack_00000110 == 0) goto LAB_0354fbf4;
          uVar14 = *(uint *)(lVar11 + unaff_x29 * unaff_x23 + 400);
          fVar20 = (float)FUN_03776a30(in_stack_00000110 + 0x50,0);
          if ((uVar14 >> 6 & 1) == 0) {
            if ((uStack0000000000000120 & 1) != 0) {
              if ((*unaff_x22 == 0) || (lVar11 = *(long *)(*unaff_x22 + 0x38), lVar11 == 0))
              goto LAB_0354fbf4;
              if (*(uint *)(lVar11 + 0x18) <= in_stack_00000170 - 2)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              uVar22 = *(undefined4 *)(lVar11 + in_stack_00000138 + -0x330);
              fVar21 = *(float *)(lVar11 + in_stack_00000138 + -0x30c);
              pcVar15 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
              (*pcVar15)(in_stack_000000a0,fStack000000000000009c,uStack0000000000000098,uVar22,
                         in_stack_000000a8 * fVar20 + fVar21,0,in_stack_000000a8,in_stack_000000a8);
            }
LAB_0354f250:
            uStack0000000000000120 = 0;
          }
          else {
            lVar11 = *unaff_x22;
            if ((lVar11 == 0) || (lVar12 = *(long *)(lVar11 + 0x38), lVar12 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar12 + 0x18) <= unaff_w24)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            *(undefined4 *)(lVar12 + unaff_x29 * unaff_x23 + 0x174) = in_stack_000017d4;
            if ((((int)unaff_x19[0x65] < (int)unaff_w24) || ((int)unaff_x19[0x66] < (int)unaff_w28))
               || (((int)unaff_x19[0x5c] == 5 &&
                   (*(int *)(lVar12 + unaff_x29 * unaff_x23 + 0x68) + 1 != (int)unaff_x19[0x67]))))
            {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if ((((in_stack_00000178 == 0xd) || ((in_stack_00000178 & 0xfffe) == 10)) ||
                ((int)uVar17 < (int)unaff_w24)) || ((uStack0000000000000120 & 1) != 0 || !bVar5)) {
LAB_0354ed84:
              if ((uStack0000000000000120 & 1) == 0) goto LAB_0354f250;
            }
            else {
              if (unaff_w24 == uVar17) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar8 = FUN_026b97f8(in_stack_00000178,0);
                if ((uVar8 & 1) != 0) goto LAB_0354ed84;
                lVar11 = *unaff_x22;
                if (lVar11 == 0) goto LAB_0354fbf4;
              }
              lVar11 = *(long *)(lVar11 + 0x38);
              if (lVar11 == 0) goto LAB_0354fbf4;
              if (*(uint *)(lVar11 + 0x18) <= unaff_w24)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              lVar11 = lVar11 + unaff_x29 * unaff_x23;
              in_stack_00000048._4_4_ = *(float *)(lVar11 + 0x60);
              in_stack_00000040 = *(float *)(lVar11 + 0x14c);
              in_stack_000000a0 = *(undefined4 *)(lVar11 + 0x11c);
              in_stack_000000a8 = *(float *)(lVar11 + 0x160);
              fStack000000000000009c = fVar20 * in_stack_000000a8 + in_stack_00000040;
              uStack0000000000000098 = 0;
            }
            iVar6 = *in_stack_00000090;
            if (iVar6 == 1) {
              if ((*unaff_x22 != 0) && (lVar11 = *(long *)(*unaff_x22 + 0x38), lVar11 != 0)) {
                uVar14 = *(uint *)(lVar11 + 0x18);
LAB_0354ef0c:
                if (unaff_w24 < uVar14) {
                  lVar11 = lVar11 + unaff_x29 * unaff_x23;
                  lVar12 = *unaff_x19;
                  uVar22 = *(undefined4 *)(lVar11 + 0x128);
                  fVar21 = *(float *)(lVar11 + 0x14c);
LAB_0354ef24:
                  pcVar15 = *(code **)(lVar12 + 0x8d8);
                  goto LAB_0354f21c;
                }
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              }
              goto LAB_0354fbf4;
            }
            if (unaff_w24 == uVar19) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar8 = FUN_026b63d8(in_stack_00000178,0);
              if ((*unaff_x22 != 0) && (lVar11 = *(long *)(*unaff_x22 + 0x38), lVar11 != 0)) {
                uVar14 = *(uint *)(lVar11 + 0x18);
                if (in_stack_00000178 == 0x200b || (uVar8 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
                in_stack_00000128 = unaff_x29;
                if (unaff_w24 < uVar14) {
LAB_0354f1f8:
                  lVar11 = lVar11 + in_stack_00000128 * unaff_x23;
                  fVar21 = *(float *)(lVar11 + 0x14c);
                  uVar22 = *(undefined4 *)(lVar11 + 0x128);
                  pcVar15 = *(code **)(*unaff_x19 + 0x8d8);
                  goto LAB_0354f21c;
                }
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              }
              goto LAB_0354fbf4;
            }
            if ((int)unaff_w24 < iVar6) {
              lVar11 = *unaff_x22;
              if ((lVar11 != 0) && (lVar12 = *(long *)(lVar11 + 0x38), lVar12 != 0)) {
                if (in_stack_00000170 < *(uint *)(lVar12 + 0x18)) {
                  if (*(float *)(lVar12 + in_stack_00000138 + -0x108) == in_stack_00000048._4_4_) {
                    fVar25 = *(float *)(lVar12 + in_stack_00000138 + -0x1c);
                    if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar8 = FUN_03567bac(fVar21 + fVar25,in_stack_00000040,0);
                    if ((uVar8 & 1) != 0) {
                      iVar6 = *in_stack_00000090;
                      goto LAB_0354f010;
                    }
                    lVar11 = *unaff_x22;
                    if (lVar11 == 0) goto LAB_0354fbf4;
                  }
                  lVar11 = *(long *)(lVar11 + 0x38);
                  if (lVar11 != 0) {
                    uVar14 = *(uint *)(lVar11 + 0x18);
                    if ((int)unaff_w24 <= (int)uVar17) goto LAB_0354f1f0;
LAB_0354f1e0:
                    if (uVar17 < uVar14) goto LAB_0354f1f8;
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  }
                  goto LAB_0354fbf4;
                }
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              }
              goto LAB_0354fbf4;
            }
LAB_0354f010:
            if ((int)unaff_w24 < iVar6) {
              iVar6 = FUN_036d3364(in_stack_00000110,0);
              if (*(uint *)(unaff_x25 + 0x18) <= in_stack_00000170)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              lVar11 = *(long *)(unaff_x25 + in_stack_00000138 + -0x130);
              if (lVar11 == 0) goto LAB_0354fbf4;
              iVar7 = FUN_036d3364(lVar11,0);
              if (iVar6 != iVar7) {
                if ((*unaff_x22 != 0) && (lVar11 = *(long *)(*unaff_x22 + 0x38), lVar11 != 0)) {
                  uVar14 = *(uint *)(lVar11 + 0x18);
                  goto LAB_0354ef0c;
                }
                goto LAB_0354fbf4;
              }
            }
            if (!bVar5) {
              if ((*unaff_x22 != 0) && (lVar11 = *(long *)(*unaff_x22 + 0x38), lVar11 != 0)) {
                if (in_stack_00000170 - 2 < *(uint *)(lVar11 + 0x18)) {
                  lVar12 = *unaff_x19;
                  uVar22 = *(undefined4 *)(lVar11 + in_stack_00000138 + -0x330);
                  fVar21 = *(float *)(lVar11 + in_stack_00000138 + -0x30c);
                  goto LAB_0354ef24;
                }
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              }
              goto LAB_0354fbf4;
            }
            uStack0000000000000120 = 1;
          }
          if ((*unaff_x22 == 0) || (lVar11 = *(long *)(*unaff_x22 + 0x38), lVar11 == 0))
          goto LAB_0354fbf4;
          uVar14 = (uint)*(undefined8 *)(lVar11 + 0x18);
          if (uVar14 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          if ((*(byte *)(lVar11 + unaff_x29 * unaff_x23 + 0x191) >> 1 & 1) == 0) {
            if ((uStack0000000000000118 & 1) != 0) {
              (**(code **)(*unaff_x19 + 0x8e8))
                        (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                         fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
            }
LAB_0354f604:
            uStack0000000000000118 = 0;
          }
          else {
            if ((((int)unaff_x19[0x65] < (int)unaff_w24) || ((int)unaff_x19[0x66] < (int)unaff_w28))
               || (((int)unaff_x19[0x5c] == 5 &&
                   (*(int *)(lVar11 + unaff_x29 * unaff_x23 + 0x68) + 1 != (int)unaff_x19[0x67]))))
            {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if ((uStack0000000000000118 & 1) == 0) {
              if ((((in_stack_00000178 != 0xd) && ((in_stack_00000178 & 0xfffe) != 10)) &&
                  ((int)unaff_w24 <= (int)uVar17)) && (bVar5)) {
                if (unaff_w24 == uVar17) {
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar8 = FUN_026b97f8(in_stack_00000178,0);
                  if ((uVar8 & 1) != 0) goto LAB_0354f374;
                }
                puVar3 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar12 = *(long *)puVar3;
                }
                unaff_x23 = 0x178;
                if ((*unaff_x22 != 0) && (lVar11 = *(long *)(*unaff_x22 + 0x38), lVar11 != 0)) {
                  uVar14 = (uint)*(undefined8 *)(lVar11 + 0x18);
                  if (unaff_w24 < uVar14) {
                    lVar12 = *(long *)(lVar12 + 0xb8);
                    lVar16 = lVar11 + unaff_x29 * 0x178;
                    in_stack_000017c8 = *(undefined8 *)(lVar16 + 0x184);
                    in_stack_000017c0 = *(undefined8 *)(lVar16 + 0x17c);
                    fStack00000000000000e0 = *(float *)(lVar12 + 0x1598);
                    fStack00000000000000e4 = *(float *)(lVar12 + 0x159c);
                    in_stack_000017d0 = *(float *)(lVar16 + 0x18c);
                    fStack00000000000000d0 = *(float *)(lVar12 + 0x15a0);
                    fStack00000000000000d4 = *(float *)(lVar12 + 0x15a4);
                    uStack00000000000000c0 = 0;
                    goto LAB_0354f400;
                  }
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                }
                goto LAB_0354fbf4;
              }
LAB_0354f374:
              uStack0000000000000118 = 0;
            }
            else {
LAB_0354f400:
              if (uVar14 <= unaff_w24)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              lVar11 = lVar11 + unaff_x29 * unaff_x23;
              fVar20 = *(float *)(lVar11 + 0x128);
              fVar24 = *(float *)(lVar11 + 0x188);
              uVar18 = *(undefined8 *)(lVar11 + 0x17c);
              fVar29 = *(float *)(lVar11 + 0x184);
              uVar23 = *(undefined8 *)(lVar11 + 0x184);
              fVar28 = *(float *)(lVar11 + 0x18c);
              fVar21 = *(float *)(lVar11 + 0x11c);
              fVar25 = *(float *)(lVar11 + 0x148);
              fVar26 = *(float *)(lVar11 + 0x150);
              in_stack_00000188 = uVar18;
              fStack0000000000000190 = fVar29;
              fStack0000000000000194 = fVar24;
              in_stack_00000198 = fVar28;
              in_stack_000001a0 = in_stack_000017c0;
              in_stack_000001a8 = in_stack_000017c8;
              in_stack_000001b0 = in_stack_000017d0;
              uVar8 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
              lVar11 = *(long *)OVRPlugin_Mesh_TypeInfo;
              if ((uVar8 & 1) == 0) {
                if (*(int *)(lVar11 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(lVar11);
                }
                fVar20 = fVar20 + (float)in_stack_000017c8;
                fVar21 = fVar21 - (float)((ulong)in_stack_000017c0 >> 0x20);
                fVar25 = fVar25 + (float)((ulong)in_stack_000017c8 >> 0x20);
                if (fVar21 <= fStack00000000000000e0) {
                  fStack00000000000000e0 = fVar21;
                }
                if (fVar26 - in_stack_000017d0 <= fStack00000000000000e4) {
                  fStack00000000000000e4 = fVar26 - in_stack_000017d0;
                }
                if (fStack00000000000000d0 <= fVar20) {
                  fStack00000000000000d0 = fVar20;
                }
                if (fStack00000000000000d4 <= fVar25) {
                  fStack00000000000000d4 = fVar25;
                }
              }
              else {
                if (*(int *)(lVar11 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(lVar11);
                }
                fVar21 = (fVar21 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
                if (fVar26 <= fStack00000000000000e4) {
                  fStack00000000000000e4 = fVar26;
                }
                if (fStack00000000000000d4 <= fVar25) {
                  fStack00000000000000d4 = fVar25;
                }
                (**(code **)(*unaff_x19 + 0x8e8))
                          (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                           fVar21,fStack00000000000000d4,uStack00000000000000c0);
                fStack00000000000000e4 = fVar26 - fVar28;
                fStack00000000000000d0 = fVar20 + fVar29;
                uStack00000000000000c0 = 0;
                fStack00000000000000d4 = fVar25 + fVar24;
                fStack00000000000000e0 = fVar21;
                in_stack_000017c0 = uVar18;
                in_stack_000017c8 = uVar23;
                in_stack_000017d0 = fVar28;
              }
              unaff_x23 = 0x178;
              if (((*in_stack_00000090 == 1) || (unaff_w24 == uVar19)) ||
                 (((int)uVar17 <= (int)unaff_w24 || (!bVar5)))) {
                (**(code **)(*unaff_x19 + 0x8e8))
                          (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                           fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
                goto LAB_0354f604;
              }
              uStack0000000000000118 = 1;
            }
          }
          puVar3 = OVRPlugin_Media_TypeInfo;
          iVar6 = *in_stack_00000090;
          iStack0000000000000124 = iStack0000000000000124 + 1;
          uVar14 = in_stack_00000170 + 1;
          in_stack_00000138 = in_stack_00000138 + 0x178;
          if (iVar6 <= (int)in_stack_00000170) {
            lVar11 = *unaff_x22;
            if (lVar11 == 0) goto LAB_0354fbf4;
            *(int *)(lVar11 + 0x18) = iVar6;
            lVar12 = unaff_x19[0xd4];
            *(uint *)(lVar11 + 0x2c) = unaff_w28 + 1;
            if (iVar6 < 1 || in_stack_000000d8 == 0) {
              in_stack_000000d8 = 1;
            }
            *(int *)(lVar11 + 0x1c) = (int)lVar12;
            *(int *)(lVar11 + 0x24) = in_stack_000000d8;
            *(int *)(lVar11 + 0x30) = (int)unaff_x19[0x96] + 1;
            if (((int)unaff_x19[99] != 0xff) ||
               (uVar8 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar8 & 1) == 0)) goto LAB_0354d0cc;
            lVar11 = unaff_x19[0xdb];
            if (lVar11 != 0) {
              (**(code **)(lVar11 + 0x18))
                        (*(undefined8 *)(lVar11 + 0x40),*unaff_x22,*(undefined8 *)(lVar11 + 0x28));
            }
            if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
              if ((*unaff_x22 == 0) || (lVar11 = *(long *)(*unaff_x22 + 0x60), lVar11 == 0))
              goto LAB_0354fbf4;
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              if (*(int *)(lVar11 + 0x18) == 0)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              FUN_03596b20(lVar11 + 0x20,1,0);
            }
            if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
            FUN_036aa790(unaff_x19[0x74],0);
            if ((unaff_x19[0x6d] == 0) || (lVar11 = *(long *)(unaff_x19[0x6d] + 0x60), lVar11 == 0))
            goto LAB_0354fbf4;
            if (*(int *)(lVar11 + 0x18) == 0)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
            FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar11 + 0x30),0);
            if ((unaff_x19[0x6d] == 0) || (lVar11 = *(long *)(unaff_x19[0x6d] + 0x60), lVar11 == 0))
            goto LAB_0354fbf4;
            if (*(int *)(lVar11 + 0x18) == 0)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
            FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar11 + 0x48),0);
            if ((unaff_x19[0x6d] == 0) || (lVar11 = *(long *)(unaff_x19[0x6d] + 0x60), lVar11 == 0))
            goto LAB_0354fbf4;
            if (*(int *)(lVar11 + 0x18) == 0)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
            FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar11 + 0x50),0);
            if ((unaff_x19[0x6d] == 0) || (lVar11 = *(long *)(unaff_x19[0x6d] + 0x60), lVar11 == 0))
            goto LAB_0354fbf4;
            if (*(int *)(lVar11 + 0x18) == 0)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
            FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar11 + 0x58),0);
            if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
            FUN_036aa280(unaff_x19[0x74],0);
            lVar11 = *unaff_x22;
            if (lVar11 == 0) goto LAB_0354fbf4;
            lVar16 = 0;
            lVar12 = 0;
            goto LAB_0354f97c;
          }
          if (*(uint *)(unaff_x25 + 0x18) <= in_stack_00000170)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          if ((*unaff_x22 == 0) || (lVar11 = *(long *)(*unaff_x22 + 0x50), lVar11 == 0))
          goto LAB_0354fbf4;
          unaff_x29 = (long)(int)in_stack_00000170;
          lVar12 = unaff_x25 + unaff_x29 * unaff_x23;
          in_stack_00000180 = *(uint *)(lVar12 + 100);
          if (*(uint *)(lVar11 + 0x18) <= in_stack_00000180)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          in_stack_00000110 = *(long *)(lVar12 + 0x38);
          in_x14 = (long)(int)in_stack_00000180;
          lVar11 = lVar11 + in_x14 * 0x5c;
          uVar19 = *(uint *)(lVar11 + 0x68);
          in_stack_00000178 = (uint)*(ushort *)(lVar12 + 0x20);
          uVar17 = *(uint *)(lVar11 + 0x3c);
          in_stack_000000e8 = (long)(int)uVar17;
          iVar1 = *(int *)(lVar11 + 0x20);
          iVar6 = *(int *)(lVar11 + 0x28);
          iVar7 = *(int *)(lVar11 + 0x2c);
          fVar25 = *(float *)(lVar11 + 0x4c);
          in_stack_00000128 = (long)*(int *)(lVar11 + 0x40);
          fVar24 = *(float *)(lVar11 + 0x54);
          fVar21 = *(float *)(lVar11 + 0x58);
          fVar29 = *(float *)(lVar11 + 0x5c);
          fVar30 = *(float *)(lVar11 + 0x60);
          fVar28 = *(float *)(lVar11 + 0x6c);
          fVar31 = *(float *)(lVar11 + 0x70);
          fVar20 = *(float *)(lVar11 + 0x74);
          fVar26 = *(float *)(lVar11 + 0x78);
          if ((int)uVar19 < 9) {
            switch(uVar19) {
            case 1:
              if ((char)unaff_x19[0x1e] == '\0') {
                in_stack_000000f8._4_4_ = fVar30 + 0.0;
              }
              else {
                in_stack_000000f8._4_4_ = 0.0 - fVar21;
              }
              break;
            case 2:
LAB_0354d968:
              in_stack_000000f8._4_4_ = (fVar30 + fVar29 * 0.5) - fVar21 * 0.5;
              break;
            default:
              goto switchD_0354d8a4_caseD_3;
            case 4:
              in_stack_000000f8._4_4_ = (fVar29 + fVar30) - fVar21;
              if ((char)unaff_x19[0x1e] != '\0') {
                in_stack_000000f8._4_4_ = fVar29 + fVar30;
              }
              break;
            case 8:
              goto switchD_0354d8a4_caseD_8;
            }
LAB_0354d9d8:
            in_stack_000000f0 = 0;
          }
          else if (uVar19 == 0x10) {
switchD_0354d8a4_caseD_8:
            if (in_stack_00000178 < 0xad) {
              if ((in_stack_00000178 != 3) && (in_stack_00000178 != 10)) goto FUN_0354d8fc;
            }
            else if ((in_stack_00000178 != 0xad) &&
                    ((in_stack_00000178 != 0x200b && (in_stack_00000178 != 0x2060)))) {
FUN_0354d8fc:
              if (*(uint *)(unaff_x25 + 0x18) <= uVar17)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              uVar2 = *(undefined2 *)(in_stack_000000c8 + in_stack_000000e8 * 0x178 + 0x20);
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar8 = FUN_026b8cc4(uVar2,0);
              if ((uVar8 & 1) == 0) {
                bVar5 = (int)in_stack_00000180 < (int)unaff_x19[0x95];
              }
              else {
                bVar5 = false;
              }
              if ((fVar21 <= fVar29) && (!bVar5 && uVar19 >> 4 == 0)) {
                in_stack_000000f8._4_4_ = fVar30;
                if ((char)unaff_x19[0x1e] != '\0') {
                  in_stack_000000f8._4_4_ = fVar29 + fVar30;
                }
                goto LAB_0354d9d8;
              }
              if (((uVar14 == 1) || (in_stack_00000180 != unaff_w28)) ||
                 (in_stack_00000170 == *(uint *)((long)unaff_x19 + 0x324))) {
                in_stack_000000f8._4_4_ = fVar30;
                if ((char)unaff_x19[0x1e] != '\0') {
                  in_stack_000000f8._4_4_ = fVar29 + fVar30;
                }
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uStack0000000000000030 = FUN_026b97f8(in_stack_00000178,0);
                in_stack_000000f0 = 0;
              }
              else {
                cVar10 = (char)unaff_x19[0x1e];
                fVar30 = -fVar21;
                if (cVar10 != '\0') {
                  fVar30 = fVar21;
                }
                if (*(uint *)(in_stack_000000c8 + 0x18) <= uVar17)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                iVar7 = (int)*(char *)(in_stack_000000c8 + in_stack_000000e8 * 0x178 + 0x194) +
                        (-iVar1 - (uStack0000000000000030 & 1)) + iVar7 + -1;
                if (iVar7 < 1) {
                  fVar21 = 1.0;
                  iVar7 = 1;
                }
                else {
                  fVar21 = *(float *)((long)unaff_x19 + 0x2dc);
                }
                if (in_stack_00000178 == 9) {
LAB_0354f76c:
                  fVar21 = 1.0 - fVar21;
                }
                else {
                  if (in_stack_00000178 != 0xa0) {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar8 = FUN_026b97f8(in_stack_00000178,0);
                    cVar10 = (char)unaff_x19[0x1e];
                    if ((uVar8 & 1) != 0) goto LAB_0354f76c;
                  }
                  iVar7 = (iVar1 - (~uStack0000000000000030 & 1)) + iVar6;
                }
                fVar21 = ((fVar29 + fVar30) * fVar21) / (float)iVar7;
                if (cVar10 == '\0') {
                  in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar21;
                  in_stack_000000f0 =
                       CONCAT44((float)((ulong)in_stack_000000f0 >> 0x20) + 0.0,
                                (float)in_stack_000000f0 + 0.0);
                }
                else {
                  in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar21;
                }
              }
            }
          }
          else if (uVar19 == 0x20) {
            fVar21 = fVar28 + fVar20;
            goto LAB_0354d968;
          }
switchD_0354d8a4_caseD_3:
          unaff_x21 = *(undefined8 *)(in_stack_000000c8 + 0x18);
          uVar17 = (uint)unaff_x21;
          if (uVar17 <= in_stack_00000170)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          unaff_x23 = 0x178;
          unaff_x20 = in_stack_000000c8 + unaff_x29 * 0x178;
          param_3 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
          unaff_x27 = 0x5c;
          param_2 = CONCAT44((float)((ulong)in_stack_000000b8 >> 0x20) +
                             (float)((ulong)in_stack_000000f0 >> 0x20),
                             (float)in_stack_000000b8 + (float)in_stack_000000f0);
          unaff_x25 = in_stack_000000c8;
          unaff_w24 = in_stack_00000170;
          uVar19 = unaff_w28;
          in_stack_00000150 = param_2;
        } while (*(char *)(unaff_x20 + 0x194) == '\0');
        unaff_w26 = *(int *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x2c);
        if (unaff_w26 != 0) goto LAB_0354e05c;
        fVar21 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)in_stack_00000180,1.0);
        switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
        case 0:
          lVar11 = in_stack_000000c8 + unaff_x29 * 0x178;
          *(undefined4 *)(lVar11 + 0x84) = 0;
          *(undefined4 *)(lVar11 + 0xac) = 0;
          *(undefined4 *)(lVar11 + 0xd4) = 0x3f800000;
          fVar21 = 1.0;
          break;
        case 1:
          fVar26 = *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x70);
          if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
            lVar11 = in_stack_000000c8 + unaff_x29 * 0x178;
            fVar20 = (in_stack_000000f8._4_4_ + fVar26) - *(float *)(in_stack_00000078 + 0x230);
            fVar26 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
            goto LAB_0354db24;
          }
          lVar11 = in_stack_000000c8 + unaff_x29 * 0x178;
          fVar20 = fVar20 - fVar28;
          *(float *)(lVar11 + 0x84) = fVar21 + (fVar26 - fVar28) / fVar20;
          *(float *)(lVar11 + 0xac) = fVar21 + (*(float *)(lVar11 + 0x98) - fVar28) / fVar20;
          *(float *)(lVar11 + 0xd4) = fVar21 + (*(float *)(lVar11 + 0xc0) - fVar28) / fVar20;
          fVar21 = fVar21 + (*(float *)(lVar11 + 0xe8) - fVar28) / fVar20;
          break;
        case 2:
          lVar11 = in_stack_000000c8 + unaff_x29 * 0x178;
          fVar26 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
          fVar20 = (in_stack_000000f8._4_4_ + *(float *)(lVar11 + 0x70)) -
                   *(float *)(in_stack_00000078 + 0x230);
LAB_0354db24:
          *(float *)(lVar11 + 0x84) = fVar21 + fVar20 / fVar26;
          *(float *)(lVar11 + 0xac) =
               fVar21 + ((in_stack_000000f8._4_4_ + *(float *)(lVar11 + 0x98)) -
                        *(float *)(in_stack_00000078 + 0x230)) /
                        (*(float *)(in_stack_00000078 + 0x238) -
                        *(float *)(in_stack_00000078 + 0x230));
          *(float *)(lVar11 + 0xd4) =
               fVar21 + ((in_stack_000000f8._4_4_ + *(float *)(lVar11 + 0xc0)) -
                        *(float *)(in_stack_00000078 + 0x230)) /
                        (*(float *)(in_stack_00000078 + 0x238) -
                        *(float *)(in_stack_00000078 + 0x230));
          fVar21 = fVar21 + ((in_stack_000000f8._4_4_ + *(float *)(lVar11 + 0xe8)) -
                            *(float *)(in_stack_00000078 + 0x230)) /
                            (*(float *)(in_stack_00000078 + 0x238) -
                            *(float *)(in_stack_00000078 + 0x230));
          break;
        case 3:
          switch((int)unaff_x19[0x62]) {
          case 0:
            lVar11 = in_stack_000000c8 + unaff_x29 * 0x178;
            *(undefined4 *)(lVar11 + 0x88) = 0;
            *(undefined4 *)(lVar11 + 0xb0) = 0x3f800000;
            *(undefined4 *)(lVar11 + 0xd8) = 0;
            *(undefined4 *)(lVar11 + 0x100) = 0x3f800000;
            break;
          case 1:
            lVar11 = in_stack_000000c8 + unaff_x29 * 0x178;
            fVar26 = fVar26 - fVar31;
            fVar20 = fVar21 + (*(float *)(lVar11 + 0x74) - fVar31) / fVar26;
            fVar26 = fVar21 + (*(float *)(lVar11 + 0x9c) - fVar31) / fVar26;
            *(float *)(lVar11 + 0x88) = fVar20;
            *(float *)(lVar11 + 0xb0) = fVar26;
            *(float *)(lVar11 + 0xd8) = fVar20;
            *(float *)(lVar11 + 0x100) = fVar26;
            break;
          case 2:
            lVar11 = in_stack_000000c8 + unaff_x29 * 0x178;
            fVar20 = fVar21 + (*(float *)(lVar11 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                              (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
            *(float *)(lVar11 + 0x88) = fVar20;
            fVar26 = *(float *)(unaff_x19 + 0x9c);
            fVar28 = *(float *)(unaff_x19 + 0x9d);
            *(float *)(lVar11 + 0xd8) = fVar20;
            fVar20 = fVar21 + (*(float *)(lVar11 + 0x9c) - fVar26) / (fVar28 - fVar26);
            *(float *)(lVar11 + 0xb0) = fVar20;
            *(float *)(lVar11 + 0x100) = fVar20;
            break;
          case 3:
            if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
            uVar17 = (uint)*(undefined8 *)(in_stack_000000c8 + 0x18);
          }
          if (uVar17 <= in_stack_00000170)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          lVar11 = in_stack_000000c8 + unaff_x29 * 0x178;
          fVar20 = *(float *)(lVar11 + 0x15c);
          fVar26 = (1.0 - (*(float *)(lVar11 + 0x88) + *(float *)(lVar11 + 0xb0)) * fVar20) * 0.5;
          fVar28 = fVar21 + *(float *)(lVar11 + 0x88) * fVar20 + fVar26;
          fVar21 = fVar21 + fVar26 + *(float *)(lVar11 + 0xb0) * fVar20;
          *(float *)(lVar11 + 0x84) = fVar28;
          *(float *)(lVar11 + 0xac) = fVar28;
          *(float *)(lVar11 + 0xd4) = fVar21;
          break;
        default:
          goto switchD_0354da88_default;
        }
        *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xfc) = fVar21;
switchD_0354da88_default:
        switch((int)unaff_x19[0x62]) {
        case 0:
          if (uVar17 <= in_stack_00000170)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          lVar11 = in_stack_000000c8 + unaff_x29 * 0x178;
          *(undefined4 *)(lVar11 + 0x88) = 0;
          *(undefined4 *)(lVar11 + 0xb0) = 0x3f800000;
          *(undefined4 *)(lVar11 + 0xd8) = 0x3f800000;
          *(undefined4 *)(lVar11 + 0x100) = 0;
          break;
        case 1:
          if (in_stack_00000170 < uVar17) {
            lVar11 = in_stack_000000c8 + unaff_x29 * 0x178;
            fVar25 = fVar25 - fVar24;
            fVar21 = (*(float *)(lVar11 + 0x74) - fVar24) / fVar25;
            fVar25 = (*(float *)(lVar11 + 0x9c) - fVar24) / fVar25;
            *(float *)(lVar11 + 0x88) = fVar21;
            goto LAB_0354de84;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        case 2:
          if (uVar17 <= in_stack_00000170)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          lVar11 = in_stack_000000c8 + unaff_x29 * 0x178;
          fVar21 = (*(float *)(lVar11 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                   (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
          *(float *)(lVar11 + 0x88) = fVar21;
          fVar25 = (*(float *)(lVar11 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
                   (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
          *(float *)(lVar11 + 0xb0) = fVar25;
          *(float *)(lVar11 + 0xd8) = fVar25;
          *(float *)(lVar11 + 0x100) = fVar21;
          break;
        case 3:
          if (uVar17 <= in_stack_00000170)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          lVar11 = in_stack_000000c8 + unaff_x29 * 0x178;
          fVar25 = *(float *)(lVar11 + 0x15c);
          fVar20 = (1.0 - (*(float *)(lVar11 + 0x84) + *(float *)(lVar11 + 0xd4)) / fVar25) * 0.5;
          fVar21 = *(float *)(lVar11 + 0x84) / fVar25 + fVar20;
          fVar20 = fVar20 + *(float *)(lVar11 + 0xd4) / fVar25;
          *(float *)(lVar11 + 0x88) = fVar21;
          *(float *)(lVar11 + 0xb0) = fVar20;
          *(float *)(lVar11 + 0x100) = fVar21;
          *(float *)(lVar11 + 0xd8) = fVar20;
        }
        if (uVar17 <= in_stack_00000170) break;
        lVar11 = in_stack_000000c8 + unaff_x29 * 0x178;
        unaff_s14 = fStack0000000000000058 * *(float *)(lVar11 + 0x160) *
                    (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
        if ((*(char *)(lVar11 + 0x5c) == '\0') &&
           ((*(byte *)(in_stack_000000c8 + unaff_x29 * 0x178 + 400) & 1) != 0)) {
          unaff_s14 = -unaff_s14;
        }
        lVar11 = in_stack_000000c8 + unaff_x29 * 0x178;
        fVar20 = *(float *)(lVar11 + 0x88);
        fVar25 = *(float *)(lVar11 + 0x84);
        fVar21 = -2.1474836e+09;
        if (fVar25 != INFINITY) {
          fVar21 = (float)(int)fVar25;
        }
        fVar24 = *(float *)(lVar11 + 0xd4);
        fVar28 = *(float *)(lVar11 + 0xd8);
        fVar26 = -2.1474836e+09;
        if (fVar20 != INFINITY) {
          fVar26 = (float)(int)fVar20;
        }
        uVar22 = FUN_03591d3c(fVar25 - fVar21,fVar20 - fVar26);
        *(undefined4 *)(lVar11 + 0x84) = uVar22;
        if (*(uint *)(in_stack_000000c8 + 0x18) <= in_stack_00000170) break;
        fVar28 = fVar28 - fVar26;
        *(float *)(lVar11 + 0x88) = unaff_s14;
        uVar22 = FUN_03591d3c(fVar25 - fVar21,fVar28);
        *(undefined4 *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xac) = uVar22;
        if (*(uint *)(in_stack_000000c8 + 0x18) <= in_stack_00000170) break;
        fVar24 = fVar24 - fVar21;
        *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xb0) = unaff_s14;
        fVar21 = (float)FUN_03591d3c(fVar24,fVar28);
        *(float *)(lVar11 + 0xd4) = fVar21;
        if (*(uint *)(in_stack_000000c8 + 0x18) <= in_stack_00000170) break;
        *(float *)(lVar11 + 0xd8) = unaff_s14;
        uVar22 = FUN_03591d3c(fVar24,fVar20 - fVar26);
        *(undefined4 *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xfc) = uVar22;
        unaff_x21 = *(undefined8 *)(in_stack_000000c8 + 0x18);
        if ((uint)unaff_x21 <= in_stack_00000170) break;
        *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x100) = unaff_s14;
        unaff_x22 = in_stack_00000050;
LAB_0354e05c:
        unaff_x27 = 0x5c;
        unaff_x23 = 0x178;
        param_4 = (long *)PTR_DAT_03cbded8;
        in_stack_00000140 = param_3;
        if (((int)unaff_x19[0x65] <= (int)in_stack_00000170) ||
           (*(int *)((long)unaff_x19 + 0x32c) <= in_stack_000000d8)) goto LAB_0354e0cc;
        if (((int)unaff_x19[0x66] <= (int)in_stack_00000180) || ((int)unaff_x19[0x5c] == 5))
        goto LAB_0354e094;
        bVar5 = (uint)unaff_x21 <= in_stack_00000170;
        in_stack_00000170 = uVar14;
        if (bVar5) break;
LAB_0354f0d4:
        lVar11 = unaff_x25 + unaff_x29 * unaff_x23;
        fVar21 = (float)param_2;
        fVar20 = (float)((ulong)param_2 >> 0x20);
        *(ulong *)(lVar11 + 0x70) =
             CONCAT44(fVar21 + (float)((ulong)*(undefined8 *)(lVar11 + 0x70) >> 0x20),
                      param_3 + (float)*(undefined8 *)(lVar11 + 0x70));
        *(float *)(lVar11 + 0x78) = fVar20 + *(float *)(lVar11 + 0x78);
        *(ulong *)(lVar11 + 0x98) =
             CONCAT44(fVar21 + (float)((ulong)*(undefined8 *)(lVar11 + 0x98) >> 0x20),
                      param_3 + (float)*(undefined8 *)(lVar11 + 0x98));
        *(float *)(lVar11 + 0xa0) = fVar20 + *(float *)(lVar11 + 0xa0);
        *(ulong *)(lVar11 + 0xc0) =
             CONCAT44(fVar21 + (float)((ulong)*(undefined8 *)(lVar11 + 0xc0) >> 0x20),
                      param_3 + (float)*(undefined8 *)(lVar11 + 0xc0));
        *(float *)(lVar11 + 200) = fVar20 + *(float *)(lVar11 + 200);
        *(ulong *)(lVar11 + 0xe8) =
             CONCAT44(fVar21 + (float)((ulong)*(undefined8 *)(lVar11 + 0xe8) >> 0x20),
                      param_3 + (float)*(undefined8 *)(lVar11 + 0xe8));
        *(float *)(lVar11 + 0xf0) = fVar20 + *(float *)(lVar11 + 0xf0);
        param_3 = in_stack_00000140;
      } while( true );
    }
  }
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354e094:
  if (((int)unaff_x19[0x66] <= (int)in_stack_00000180) || ((int)unaff_x19[0x5c] != 5))
  goto LAB_0354e0cc;
  bVar5 = in_stack_00000170 < (uint)unaff_x21;
  in_stack_00000170 = uVar14;
  if (bVar5) goto code_r0x0354e0b8;
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  while( true ) {
    lVar11 = *unaff_x22;
    lVar12 = lVar12 + 1;
    lVar16 = lVar16 + 0x50;
    if (lVar11 == 0) break;
LAB_0354f97c:
    uVar8 = lVar12 + 1;
    if ((long)*(int *)(lVar11 + 0x34) <= (long)uVar8) {
LAB_0354d0cc:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar11 = *(long *)(lVar11 + 0x60);
    if (lVar11 == 0) break;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar11 + 0x18) <= uVar8)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    FUN_03596a20(lVar11 + lVar16 + 0x70,0);
    lVar11 = unaff_x19[0xe1];
    if (lVar11 == 0) break;
    if (*(uint *)(lVar11 + 0x18) <= uVar8)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar23 = *(undefined8 *)(lVar11 + lVar12 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar9 = FUN_036d35a8(uVar23,0,0);
    if ((uVar9 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*unaff_x22 == 0) || (lVar11 = *(long *)(*unaff_x22 + 0x60), lVar11 == 0)) break;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar11 + 0x18) <= uVar8) {
UnityEngine_Android_AndroidApp__AcquireContextAndActivity:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03596b20(lVar11 + lVar16 + 0x70,1,0);
      }
      lVar11 = unaff_x19[0xe1];
      if (lVar11 == 0) break;
      if (*(uint *)(lVar11 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x28);
      if (lVar11 == 0) break;
      lVar11 = FUN_0359d5ac(lVar11,0);
      if ((*unaff_x22 == 0) || (lVar13 = *(long *)(*unaff_x22 + 0x60), lVar13 == 0)) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar11 == 0) break;
      FUN_036a460c(lVar11,*(undefined8 *)(lVar13 + lVar16 + 0x80),0);
      lVar11 = unaff_x19[0xe1];
      if (lVar11 == 0) break;
      if (*(uint *)(lVar11 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x28);
      if (lVar11 == 0) break;
      lVar11 = FUN_0359d5ac(lVar11,0);
      if ((*unaff_x22 == 0) || (lVar13 = *(long *)(*unaff_x22 + 0x60), lVar13 == 0)) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar11 == 0) break;
      FUN_036a4810(lVar11,*(undefined8 *)(lVar13 + lVar16 + 0x98),0);
      lVar11 = unaff_x19[0xe1];
      if (lVar11 == 0) break;
      if (*(uint *)(lVar11 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x28);
      if (lVar11 == 0) break;
      lVar11 = FUN_0359d5ac(lVar11,0);
      if ((*unaff_x22 == 0) || (lVar13 = *(long *)(*unaff_x22 + 0x60), lVar13 == 0)) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar11 == 0) break;
      FUN_036a48bc(lVar11,*(undefined8 *)(lVar13 + lVar16 + 0xa0),0);
      lVar11 = unaff_x19[0xe1];
      if (lVar11 == 0) break;
      if (*(uint *)(lVar11 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x28);
      if (lVar11 == 0) break;
      lVar11 = FUN_0359d5ac(lVar11,0);
      if ((*unaff_x22 == 0) || (lVar13 = *(long *)(*unaff_x22 + 0x60), lVar13 == 0)) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar11 == 0) break;
      FUN_036a4e24(lVar11,*(undefined8 *)(lVar13 + lVar16 + 0xa8),0);
      lVar11 = unaff_x19[0xe1];
      if (lVar11 == 0) break;
      if (*(uint *)(lVar11 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x28);
      if ((lVar11 == 0) || (lVar11 = FUN_0359d5ac(lVar11,0), lVar11 == 0)) break;
      FUN_036aa280(lVar11,0);
    }
  }
LAB_0354fbf4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


