/*
FUNCTION_NAME: UnityEngine.Animator$$GetNextAnimatorClipInfo
ENTRY_POINT: 03555b5c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 169
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_18;weak_xr_or_state_hits_18;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_6
*/


void UnityEngine_Animator__GetNextAnimatorClipInfo(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  char cVar13;
  code *pcVar14;
  long lVar15;
  uint uVar16;
  long in_x9;
  long lVar17;
  long lVar18;
  long in_x13;
  long in_x15;
  long *unaff_x19;
  int *unaff_x20;
  undefined8 uVar19;
  long *plVar20;
  long unaff_x22;
  long unaff_x23;
  long lVar21;
  long unaff_x24;
  uint unaff_w25;
  long unaff_x27;
  long *unaff_x28;
  uint uVar22;
  uint unaff_w29;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  ulong uVar26;
  float fVar27;
  uint uVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  float in_s5;
  float in_s6;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float unaff_s14;
  float unaff_s15;
  uint uStack0000000000000028;
  float fStack000000000000002c;
  int iStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  float in_stack_00000040;
  int *in_stack_00000048;
  undefined8 in_stack_00000050;
  int in_stack_00000058;
  undefined8 in_stack_00000068;
  float fStack0000000000000070;
  uint uStack0000000000000074;
  uint in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 in_stack_00000090;
  uint uStack0000000000000098;
  float fStack000000000000009c;
  uint in_stack_000000a0;
  float in_stack_000000a8;
  undefined8 in_stack_000000b8;
  uint uStack00000000000000c0;
  float fStack00000000000000c4;
  float in_stack_000000c8;
  float fStack00000000000000d0;
  int iStack00000000000000d4;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  long in_stack_000000f0;
  undefined8 in_stack_000000f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  long in_stack_00000108;
  undefined8 in_stack_00000110;
  uint uStack0000000000000118;
  uint uStack000000000000011c;
  long in_stack_00000120;
  int iStack0000000000000128;
  uint uStack000000000000012c;
  float in_stack_00000140;
  long in_stack_00000150;
  uint uStack0000000000000158;
  uint uStack000000000000015c;
  uint in_stack_00000160;
  undefined8 in_stack_00000168;
  long *in_stack_00000170;
  undefined8 in_stack_00000178;
  float fStack0000000000000180;
  float fStack0000000000000184;
  float in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  float in_stack_000001a0;
  undefined8 in_stack_000017b0;
  undefined8 in_stack_000017b8;
  float in_stack_000017c0;
  undefined4 in_stack_000017c4;
  
code_r0x03555b5c:
  if (*(uint *)(param_1 + 0x18) <= unaff_w29) goto LAB_035575f4;
  lVar18 = param_1 + in_x15 * in_x13;
  uVar29 = (ulong)(uint)*(float *)(lVar18 + 0x58);
  uVar10 = CONCAT44((float)((ulong)param_2 >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar18 + 0x4c) >> 0x20),
                    (float)param_2 + (float)*(undefined8 *)(lVar18 + 0x4c));
  in_s5 = in_s5 + *(float *)(lVar18 + 0x54);
  in_s6 = in_s6 + *(float *)(lVar18 + 0x58);
  uVar26 = (ulong)(uint)in_s6;
  *(ulong *)(lVar18 + 0x4c) = uVar10;
  *(float *)(lVar18 + 0x54) = in_s5;
  *(float *)(lVar18 + 0x58) = in_s6;
  lVar17 = *(long *)(in_x9 + 0x38);
  if (lVar17 != 0) {
    if (*(uint *)(lVar17 + 0x18) <= *(uint *)(lVar18 + 0x34)) goto LAB_035575f4;
    uVar32 = *(undefined4 *)(lVar17 + (int)*(uint *)(lVar18 + 0x34) * unaff_x22 + 0x11c);
    param_1 = param_1 + in_x15 * in_x13;
    *(float *)(param_1 + 0x70) = in_s5;
    *(undefined4 *)(param_1 + 0x6c) = uVar32;
    lVar17 = *unaff_x28;
    if ((lVar17 != 0) && (lVar18 = *(long *)(lVar17 + 0x50), lVar18 != 0)) {
      if (*(uint *)(lVar18 + 0x18) <= unaff_w29) goto LAB_035575f4;
      lVar17 = *(long *)(lVar17 + 0x38);
      if (lVar17 != 0) {
        uVar28 = *(uint *)(lVar18 + in_x15 * in_x13 + 0x40);
        if (uVar28 < *(uint *)(lVar17 + 0x18)) {
          lVar18 = lVar18 + in_x15 * in_x13;
          *(undefined4 *)(lVar18 + 0x74) = *(undefined4 *)(lVar17 + (int)uVar28 * unaff_x22 + 0x128)
          ;
          *(undefined4 *)(lVar18 + 0x78) = *(undefined4 *)(lVar18 + 0x4c);
          uVar28 = uStack000000000000015c;
          uVar9 = in_stack_00000160;
          in_stack_00000160 = unaff_w29;
          in_s5 = in_stack_00000140;
LAB_03555c04:
          uStack000000000000015c = uVar28;
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_026b82c4(in_stack_00000168._4_4_,0);
          if (((((uVar11 & 1) == 0) && (1 < in_stack_00000168._4_4_ - 0x2010)) &&
              (in_stack_00000168._4_4_ != 0xad)) && (in_stack_00000168._4_4_ != 0x2d)) {
            if ((uStack000000000000011c & 1) == 0) {
              if (uStack000000000000015c != 1) {
LAB_0355686c:
                uStack000000000000011c = 0;
                goto LAB_03555d70;
              }
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar11 = FUN_026b81f8(in_stack_00000168._4_4_,0);
              if ((uVar11 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar11 = FUN_026b63d8(in_stack_00000168._4_4_,0);
                if (((in_stack_00000168._4_4_ != 0x200b) && ((uVar11 & 1) == 0)) &&
                   (*unaff_x20 != 1)) goto LAB_0355686c;
              }
            }
            else if (((uStack000000000000015c != 1) &&
                     ((int)unaff_w25 < (int)(*(uint *)(unaff_x23 + 0x18) - 1))) &&
                    (((int)unaff_w25 < *unaff_x20 &&
                     ((in_stack_00000168._4_4_ == 0x2019 || (in_stack_00000168._4_4_ == 0x27)))))) {
              if (*(uint *)(unaff_x23 + 0x18) <= uStack000000000000015c - 2) goto LAB_035575f4;
              uVar4 = *(undefined2 *)(unaff_x23 + unaff_x27 + -0x438);
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar11 = FUN_026b82c4(uVar4,0);
              unaff_x28 = in_stack_00000170;
              if ((uVar11 & 1) != 0) {
                if (*(uint *)(unaff_x23 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
                uVar4 = *(undefined2 *)(unaff_x23 + unaff_x27 + -0x148);
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar11 = FUN_026b82c4(uVar4,0);
                if ((uVar11 & 1) != 0) goto LAB_03555d68;
              }
            }
            if (unaff_w25 == *unaff_x20 - 1U) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar11 = FUN_026b82c4(in_stack_00000168._4_4_,0);
              iVar8 = iStack0000000000000128;
              if ((uVar11 & 1) == 0) goto LAB_03556070;
            }
            else {
LAB_03556070:
              iVar8 = uStack000000000000015c - 2;
            }
            lVar17 = *unaff_x28;
            if (lVar17 == 0) goto LAB_035574b8;
            lVar18 = *(long *)(lVar17 + 0x40);
            if (lVar18 == 0) goto LAB_035574b8;
            uVar28 = *(uint *)(lVar17 + 0x24);
            iVar7 = *(int *)(lVar18 + 0x18);
            if (iVar7 < (int)(uVar28 + 1)) {
              if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_01ff025c((long *)(lVar17 + 0x40),iVar7 + 1,
                           *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
              lVar17 = *in_stack_00000170;
              if (lVar17 == 0) goto LAB_035574b8;
            }
            lVar17 = *(long *)(lVar17 + 0x40);
            if (lVar17 == 0) goto LAB_035574b8;
            if (*(uint *)(lVar17 + 0x18) <= uVar28) goto LAB_035575f4;
            lVar17 = lVar17 + (long)(int)uVar28 * 0x18;
            *(long **)(lVar17 + 0x20) = unaff_x19;
            *(uint *)(lVar17 + 0x28) = uStack0000000000000158;
            *(int *)(lVar17 + 0x2c) = iVar8;
            *(uint *)(lVar17 + 0x30) = (iVar8 - uStack0000000000000158) + 1;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            lVar17 = unaff_x19[0x6d];
            if (lVar17 == 0) goto LAB_035574b8;
            lVar18 = *(long *)(lVar17 + 0x50);
            unaff_x22 = 0x178;
            *(int *)(lVar17 + 0x24) = *(int *)(lVar17 + 0x24) + 1;
            if (lVar18 == 0) goto LAB_035574b8;
            if (*(uint *)(lVar18 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
            lVar18 = lVar18 + in_x15 * 0x5c;
            uStack000000000000011c = 0;
            iStack00000000000000d4 = iStack00000000000000d4 + 1;
            *(int *)(lVar18 + 0x30) = *(int *)(lVar18 + 0x30) + 1;
            unaff_x23 = in_stack_000000f0;
            unaff_x28 = in_stack_00000170;
          }
          else {
            if ((uStack000000000000011c & 1) == 0) {
              uStack0000000000000158 = unaff_w25;
            }
            if (unaff_w25 == *unaff_x20 - 1U) {
              lVar17 = *unaff_x28;
              if (lVar17 == 0) goto LAB_035574b8;
              lVar18 = *(long *)(lVar17 + 0x40);
              if (lVar18 == 0) goto LAB_035574b8;
              uVar28 = *(uint *)(lVar17 + 0x24);
              iVar8 = *(int *)(lVar18 + 0x18);
              if (iVar8 < (int)(uVar28 + 1)) {
                if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_01ff025c((long *)(lVar17 + 0x40),iVar8 + 1,
                             *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
                lVar17 = *in_stack_00000170;
                if (lVar17 == 0) goto LAB_035574b8;
              }
              lVar17 = *(long *)(lVar17 + 0x40);
              if (lVar17 == 0) goto LAB_035574b8;
              unaff_x22 = 0x178;
              if (*(uint *)(lVar17 + 0x18) <= uVar28) goto LAB_035575f4;
              lVar17 = lVar17 + (long)(int)uVar28 * 0x18;
              *(long **)(lVar17 + 0x20) = unaff_x19;
              *(uint *)(lVar17 + 0x28) = uStack0000000000000158;
              *(uint *)(lVar17 + 0x2c) = unaff_w25;
              *(uint *)(lVar17 + 0x30) = uStack000000000000015c - uStack0000000000000158;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar17 = unaff_x19[0x6d];
              if (lVar17 == 0) goto LAB_035574b8;
              lVar18 = *(long *)(lVar17 + 0x50);
              *(int *)(lVar17 + 0x24) = *(int *)(lVar17 + 0x24) + 1;
              if (lVar18 == 0) goto LAB_035574b8;
              if (*(uint *)(lVar18 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
              lVar18 = lVar18 + in_x15 * 0x5c;
              iStack00000000000000d4 = iStack00000000000000d4 + 1;
              *(int *)(lVar18 + 0x30) = *(int *)(lVar18 + 0x30) + 1;
              unaff_x28 = in_stack_00000170;
            }
LAB_03555d68:
            uStack000000000000011c = 1;
          }
LAB_03555d70:
          if ((*unaff_x28 == 0) || (lVar17 = *(long *)(*unaff_x28 + 0x38), lVar17 == 0))
          goto LAB_035574b8;
          uVar28 = *(uint *)(lVar17 + 0x18);
          if (uVar28 <= unaff_w25) goto LAB_035575f4;
          uVar16 = (uint)in_stack_000000e0;
          uVar22 = (uint)in_stack_00000150;
          if ((*(byte *)(lVar17 + unaff_x24 * unaff_x22 + 400) >> 2 & 1) == 0) {
            if ((uStack0000000000000118 & 1) == 0) {
LAB_03556254:
              uStack0000000000000118 = 0;
            }
            else {
LAB_03555da0:
              if (uVar28 <= uStack000000000000015c - 2) goto LAB_035575f4;
              lVar18 = *unaff_x19;
              uVar28 = *(uint *)(lVar17 + unaff_x27 + -0x330);
              uVar32 = *(undefined4 *)(lVar17 + unaff_x27 + -0x2f8);
LAB_035562ec:
              pcVar14 = *(code **)(lVar18 + 0x8d8);
LAB_035562f4:
              uVar29 = (ulong)uVar28;
              uVar10 = (ulong)(uint)fStack0000000000000070;
              uVar26 = (ulong)uStack0000000000000074;
              (*pcVar14)(in_stack_00000078,uVar10,uVar26,uVar29,fStack0000000000000104,0,
                         in_stack_00000088._4_4_,uVar32);
              puVar5 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar17 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar17 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar17 = *(long *)puVar5;
              }
LAB_03556348:
              uStack0000000000000118 = 0;
              unaff_s15 = 0.0;
              fStack0000000000000104 = *(float *)(*(long *)(lVar17 + 0xb8) + 0x15a8);
              fStack0000000000000100 = 0.0;
            }
          }
          else {
            lVar17 = lVar17 + unaff_x24 * unaff_x22;
            iVar8 = *(int *)(lVar17 + 0x68);
            *(undefined4 *)(lVar17 + 0x16c) = in_stack_000017c4;
            if ((((int)unaff_x19[0x65] < (int)unaff_w25) ||
                ((int)unaff_x19[0x66] < (int)in_stack_00000160)) ||
               (((int)unaff_x19[0x5c] == 5 && (iVar8 + 1 != (int)unaff_x19[0x67])))) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar11 = FUN_026b63d8(in_stack_00000168._4_4_,0);
            if ((in_stack_00000168._4_4_ != 0x200b) && ((uVar11 & 1) == 0)) {
              lVar17 = *unaff_x28;
              if ((lVar17 == 0) || (lVar18 = *(long *)(lVar17 + 0x38), lVar18 == 0))
              goto LAB_035574b8;
              if (*(uint *)(lVar18 + 0x18) <= unaff_w25) goto LAB_035575f4;
              fVar23 = *(float *)(lVar18 + unaff_x24 * unaff_x22 + 0x160);
              if (unaff_s15 <= fVar23) {
                unaff_s15 = fVar23;
              }
              if (fStack0000000000000100 <= ABS(unaff_s14)) {
                fStack0000000000000100 = ABS(unaff_s14);
              }
              if (iVar8 != in_stack_00000068._4_4_) {
                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar17 = *unaff_x28;
                  if (lVar17 == 0) goto LAB_035574b8;
                  lVar18 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                }
                else {
                  lVar18 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                }
                fStack0000000000000104 = *(float *)(lVar18 + 0x15a8);
              }
              lVar17 = *(long *)(lVar17 + 0x38);
              if (lVar17 == 0) goto LAB_035574b8;
              if (*(uint *)(lVar17 + 0x18) <= unaff_w25) goto LAB_035575f4;
              if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
              fVar24 = *(float *)(lVar17 + unaff_x24 * unaff_x22 + 0x14c);
              fVar23 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
              fVar24 = fVar24 + unaff_s15 * fVar23;
              if (fVar24 <= fStack0000000000000104) {
                fStack0000000000000104 = fVar24;
              }
              uVar10 = (ulong)(uint)fStack0000000000000104;
              in_stack_00000068._4_4_ = iVar8;
            }
            if ((uStack0000000000000118 & 1) == 0) {
              uStack0000000000000118 = 0;
              unaff_x23 = in_stack_000000f0;
              if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10))
                  || ((int)uVar22 < (int)unaff_w25)) || ((bool)(bVar1 ^ 1))) goto LAB_03556364;
              if (unaff_w25 == uVar22) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar11 = FUN_026b97f8(in_stack_00000168._4_4_,0);
                if ((uVar11 & 1) != 0) goto LAB_03556254;
              }
              if ((*unaff_x28 == 0) || (lVar17 = *(long *)(*unaff_x28 + 0x38), lVar17 == 0))
              goto LAB_035574b8;
              if (*(uint *)(lVar17 + 0x18) <= unaff_w25) goto LAB_035575f4;
              lVar17 = lVar17 + unaff_x24 * unaff_x22;
              in_stack_00000088._4_4_ = *(float *)(lVar17 + 0x160);
              in_stack_00000078 = *(uint *)(lVar17 + 0x11c);
              uVar26 = (ulong)in_stack_00000078;
              bVar6 = unaff_s15 != 0.0;
              fVar23 = in_stack_00000088._4_4_;
              if (bVar6) {
                fVar23 = unaff_s15;
              }
              unaff_s15 = fVar23;
              in_stack_00000090 = *(undefined4 *)(lVar17 + 0x168);
              uStack0000000000000074 = 0;
              fVar23 = unaff_s14;
              if (bVar6) {
                fVar23 = fStack0000000000000100;
              }
              uVar10 = (ulong)(uint)fVar23;
              fStack0000000000000070 = fStack0000000000000104;
              fStack0000000000000100 = fVar23;
            }
            if (*unaff_x20 == 1) {
              if ((*unaff_x28 != 0) && (lVar17 = *(long *)(*unaff_x28 + 0x38), lVar17 != 0)) {
                if (unaff_w25 < *(uint *)(lVar17 + 0x18)) {
                  lVar17 = lVar17 + unaff_x24 * unaff_x22;
                  lVar18 = *unaff_x19;
                  uVar28 = *(uint *)(lVar17 + 0x128);
                  uVar32 = *(undefined4 *)(lVar17 + 0x160);
                  unaff_x23 = in_stack_000000f0;
                  goto LAB_035562ec;
                }
                goto LAB_035575f4;
              }
              goto LAB_035574b8;
            }
            if ((unaff_w25 == uVar16) || ((int)uVar22 <= (int)unaff_w25)) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar10 = FUN_026b63d8(in_stack_00000168._4_4_,0);
              if ((*unaff_x28 != 0) && (lVar17 = *(long *)(*unaff_x28 + 0x38), lVar17 != 0)) {
                lVar18 = unaff_x24;
                uVar28 = unaff_w25;
                if (in_stack_00000168._4_4_ == 0x200b || (uVar10 & 1) != 0) {
                  lVar18 = in_stack_00000150;
                  uVar28 = uVar22;
                }
                if (uVar28 < *(uint *)(lVar17 + 0x18)) {
                  lVar17 = lVar17 + lVar18 * unaff_x22;
                  uVar28 = *(uint *)(lVar17 + 0x128);
                  uVar32 = *(undefined4 *)(lVar17 + 0x160);
                  pcVar14 = *(code **)(*unaff_x19 + 0x8d8);
                  unaff_x23 = in_stack_000000f0;
                  goto LAB_035562f4;
                }
                goto LAB_035575f4;
              }
              goto LAB_035574b8;
            }
            if (!bVar1) {
              if ((*unaff_x28 != 0) && (lVar17 = *(long *)(*unaff_x28 + 0x38), lVar17 != 0)) {
                uVar28 = *(uint *)(lVar17 + 0x18);
                unaff_x23 = in_stack_000000f0;
                goto LAB_03555da0;
              }
              goto LAB_035574b8;
            }
            if ((int)unaff_w25 < *unaff_x20 + -1) {
              if ((*unaff_x28 == 0) || (lVar17 = *(long *)(*unaff_x28 + 0x38), lVar17 == 0))
              goto LAB_035574b8;
              if (*(uint *)(lVar17 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
              uVar11 = FUN_03567ad8(in_stack_00000090,*(undefined4 *)(lVar17 + unaff_x27),0);
              unaff_x28 = in_stack_00000170;
              if ((uVar11 & 1) == 0) {
                if ((*in_stack_00000170 != 0) &&
                   (lVar17 = *(long *)(*in_stack_00000170 + 0x38), lVar17 != 0)) {
                  if (unaff_w25 < *(uint *)(lVar17 + 0x18)) {
                    lVar17 = lVar17 + unaff_x24 * unaff_x22;
                    uVar29 = (ulong)*(uint *)(lVar17 + 0x128);
                    uVar26 = (ulong)uStack0000000000000074;
                    uVar10 = (ulong)(uint)fStack0000000000000070;
                    (**(code **)(*unaff_x19 + 0x8d8))
                              (in_stack_00000078,uVar10,uVar26,uVar29,fStack0000000000000104,0,
                               in_stack_00000088._4_4_,*(undefined4 *)(lVar17 + 0x160));
                    puVar5 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                    lVar17 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    unaff_x23 = in_stack_000000f0;
                    if (*(int *)(lVar17 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar17 = *(long *)puVar5;
                    }
                    goto LAB_03556348;
                  }
                  goto LAB_035575f4;
                }
                goto LAB_035574b8;
              }
            }
            uStack0000000000000118 = 1;
            unaff_x23 = in_stack_000000f0;
          }
LAB_03556364:
          if ((*unaff_x28 == 0) || (lVar17 = *(long *)(*unaff_x28 + 0x38), lVar17 == 0))
          goto LAB_035574b8;
          if (*(uint *)(lVar17 + 0x18) <= unaff_w25) goto LAB_035575f4;
          if (in_stack_00000108 == 0) goto LAB_035574b8;
          uVar28 = *(uint *)(lVar17 + unaff_x24 * unaff_x22 + 400);
          fVar23 = (float)FUN_03776a30(in_stack_00000108 + 0x50,0);
          if ((uVar28 >> 6 & 1) == 0) {
            if ((uStack000000000000012c & 1) != 0) {
              if ((*unaff_x28 == 0) || (lVar17 = *(long *)(*unaff_x28 + 0x38), lVar17 == 0))
              goto LAB_035574b8;
              if (*(uint *)(lVar17 + 0x18) <= uStack000000000000015c - 2) goto LAB_035575f4;
              uVar28 = *(uint *)(lVar17 + unaff_x27 + -0x330);
              fVar24 = *(float *)(lVar17 + unaff_x27 + -0x30c);
              pcVar14 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
              uVar29 = (ulong)uVar28;
              uVar10 = (ulong)(uint)fStack000000000000009c;
              uVar26 = (ulong)uStack0000000000000098;
              (*pcVar14)(in_stack_000000a0,uVar10,uVar26,uVar29,in_stack_000000a8 * fVar23 + fVar24,
                         0,in_stack_000000a8,in_stack_000000a8);
            }
LAB_03556948:
            uStack000000000000012c = 0;
          }
          else {
            lVar17 = *unaff_x28;
            if ((lVar17 == 0) || (lVar18 = *(long *)(lVar17 + 0x38), lVar18 == 0))
            goto LAB_035574b8;
            if (*(uint *)(lVar18 + 0x18) <= unaff_w25) goto LAB_035575f4;
            *(undefined4 *)(lVar18 + unaff_x24 * unaff_x22 + 0x174) = in_stack_000017c4;
            if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)uVar9)) ||
               (((int)unaff_x19[0x5c] == 5 &&
                (*(int *)(lVar18 + unaff_x24 * unaff_x22 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
                ((int)uVar22 < (int)unaff_w25)) || ((uStack000000000000012c & 1) != 0 || !bVar1)) {
LAB_035564e8:
              if ((uStack000000000000012c & 1) == 0) goto LAB_03556948;
            }
            else {
              if (unaff_w25 == uVar22) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar11 = FUN_026b97f8(in_stack_00000168._4_4_,0);
                if ((uVar11 & 1) != 0) goto LAB_035564e8;
                lVar17 = *unaff_x28;
                if (lVar17 == 0) goto LAB_035574b8;
              }
              lVar17 = *(long *)(lVar17 + 0x38);
              if (lVar17 == 0) goto LAB_035574b8;
              if (*(uint *)(lVar17 + 0x18) <= unaff_w25) goto LAB_035575f4;
              lVar17 = lVar17 + unaff_x24 * unaff_x22;
              in_stack_00000040 = *(float *)(lVar17 + 0x60);
              in_stack_00000038 = *(float *)(lVar17 + 0x14c);
              uVar10 = (ulong)(uint)in_stack_00000038;
              in_stack_000000a0 = *(uint *)(lVar17 + 0x11c);
              uVar26 = (ulong)in_stack_000000a0;
              in_stack_000000a8 = *(float *)(lVar17 + 0x160);
              fStack000000000000009c = fVar23 * in_stack_000000a8 + in_stack_00000038;
              uStack0000000000000098 = 0;
            }
            iVar8 = *unaff_x20;
            if (iVar8 == 1) {
LAB_03556628:
              if ((*unaff_x28 != 0) && (lVar17 = *(long *)(*unaff_x28 + 0x38), lVar17 != 0)) {
                if (unaff_w25 < *(uint *)(lVar17 + 0x18)) {
                  lVar17 = lVar17 + unaff_x24 * unaff_x22;
                  lVar18 = *unaff_x19;
                  uVar28 = *(uint *)(lVar17 + 0x128);
                  fVar24 = *(float *)(lVar17 + 0x14c);
LAB_03556654:
                  pcVar14 = *(code **)(lVar18 + 0x8d8);
                  goto LAB_03556914;
                }
                goto LAB_035575f4;
              }
              goto LAB_035574b8;
            }
            if (unaff_w25 == uVar16) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar10 = FUN_026b63d8(in_stack_00000168._4_4_,0);
              if ((*unaff_x28 != 0) && (lVar17 = *(long *)(*unaff_x28 + 0x38), lVar17 != 0)) {
                uVar28 = *(uint *)(lVar17 + 0x18);
                if (in_stack_00000168._4_4_ == 0x200b || (uVar10 & 1) != 0) {
                  if (uVar28 <= uVar22) goto LAB_035575f4;
                }
                else {
FUN_035568e8:
                  in_stack_00000150 = unaff_x24;
                  if (uVar28 <= unaff_w25) goto LAB_035575f4;
                }
LAB_035568f0:
                lVar17 = lVar17 + in_stack_00000150 * unaff_x22;
                fVar24 = *(float *)(lVar17 + 0x14c);
                uVar28 = *(uint *)(lVar17 + 0x128);
                pcVar14 = *(code **)(*unaff_x19 + 0x8d8);
                goto LAB_03556914;
              }
              goto LAB_035574b8;
            }
            if ((int)unaff_w25 < iVar8) {
              lVar17 = *unaff_x28;
              if ((lVar17 != 0) && (lVar18 = *(long *)(lVar17 + 0x38), lVar18 != 0)) {
                if (uStack000000000000015c < *(uint *)(lVar18 + 0x18)) {
                  if (*(float *)(lVar18 + unaff_x27 + -0x108) == in_stack_00000040) {
                    fVar24 = *(float *)(lVar18 + unaff_x27 + -0x1c);
                    if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar10 = (ulong)(uint)in_stack_00000038;
                    uVar11 = FUN_03567bac(in_s5 + fVar24,uVar10,0);
                    if ((uVar11 & 1) != 0) {
                      iVar8 = *unaff_x20;
                      goto LAB_03556744;
                    }
                    lVar17 = *unaff_x28;
                    if (lVar17 == 0) goto LAB_035574b8;
                  }
                  lVar17 = *(long *)(lVar17 + 0x38);
                  if (lVar17 != 0) {
                    uVar28 = *(uint *)(lVar17 + 0x18);
                    if ((int)unaff_w25 <= (int)uVar22) goto FUN_035568e8;
                    if (uVar22 < uVar28) goto LAB_035568f0;
                    goto LAB_035575f4;
                  }
                  goto LAB_035574b8;
                }
                goto LAB_035575f4;
              }
              goto LAB_035574b8;
            }
LAB_03556744:
            if ((int)unaff_w25 < iVar8) {
              iVar8 = FUN_036d3364(in_stack_00000108,0);
              if (*(uint *)(unaff_x23 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
              lVar17 = *(long *)(unaff_x23 + in_stack_00000120 + -0x130);
              if (lVar17 == 0) goto LAB_035574b8;
              iVar7 = FUN_036d3364(lVar17,0);
              unaff_x27 = in_stack_00000120;
              if (iVar8 != iVar7) goto LAB_03556628;
            }
            if (!bVar1) {
              if ((*unaff_x28 != 0) && (lVar17 = *(long *)(*unaff_x28 + 0x38), lVar17 != 0)) {
                if (uStack000000000000015c - 2 < *(uint *)(lVar17 + 0x18)) {
                  lVar18 = *unaff_x19;
                  uVar28 = *(uint *)(lVar17 + unaff_x27 + -0x330);
                  fVar24 = *(float *)(lVar17 + unaff_x27 + -0x30c);
                  goto LAB_03556654;
                }
                goto LAB_035575f4;
              }
              goto LAB_035574b8;
            }
            uStack000000000000012c = 1;
          }
          if ((*unaff_x28 == 0) || (lVar17 = *(long *)(*unaff_x28 + 0x38), lVar17 == 0))
          goto LAB_035574b8;
          uVar28 = (uint)*(undefined8 *)(lVar17 + 0x18);
          if (uVar28 <= unaff_w25) goto LAB_035575f4;
          if ((*(byte *)(lVar17 + unaff_x24 * unaff_x22 + 0x191) >> 1 & 1) == 0) {
            if ((in_stack_00000110._4_4_ & 1) != 0) {
              uVar26 = (ulong)uStack00000000000000c0;
              uVar10 = (ulong)(uint)fStack00000000000000dc;
              uVar29 = (ulong)(uint)in_stack_000000c8;
              (**(code **)(*unaff_x19 + 0x8e8))
                        (fStack00000000000000d8,uVar10,uVar26,uVar29,fStack00000000000000d0,uVar26);
            }
LAB_035569b4:
            in_stack_00000110._4_4_ = 0;
          }
          else {
            if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)uVar9)) ||
               (((int)unaff_x19[0x5c] == 5 &&
                (*(int *)(lVar17 + unaff_x24 * unaff_x22 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if ((in_stack_00000110._4_4_ & 1) == 0) {
              if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10))
                  || ((int)uVar22 < (int)unaff_w25)) || (!bVar1)) goto LAB_035569b4;
              if (unaff_w25 == uVar22) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar11 = FUN_026b97f8(in_stack_00000168._4_4_,0);
                if ((uVar11 & 1) != 0) goto LAB_035569b4;
              }
              puVar5 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar18 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar18 = *(long *)puVar5;
              }
              unaff_x22 = 0x178;
              if ((*unaff_x28 == 0) || (lVar17 = *(long *)(*unaff_x28 + 0x38), lVar17 == 0))
              goto LAB_035574b8;
              uVar28 = (uint)*(undefined8 *)(lVar17 + 0x18);
              if (uVar28 <= unaff_w25) goto LAB_035575f4;
              lVar18 = *(long *)(lVar18 + 0xb8);
              lVar21 = lVar17 + unaff_x24 * 0x178;
              in_stack_000017b8 = *(undefined8 *)(lVar21 + 0x184);
              in_stack_000017b0 = *(undefined8 *)(lVar21 + 0x17c);
              fStack00000000000000d8 = *(float *)(lVar18 + 0x1598);
              fStack00000000000000dc = *(float *)(lVar18 + 0x159c);
              in_stack_000017c0 = *(float *)(lVar21 + 0x18c);
              in_stack_000000c8 = *(float *)(lVar18 + 0x15a0);
              fStack00000000000000d0 = *(float *)(lVar18 + 0x15a4);
              uStack00000000000000c0 = 0;
            }
            if (uVar28 <= unaff_w25) goto LAB_035575f4;
            lVar17 = lVar17 + unaff_x24 * unaff_x22;
            fVar24 = *(float *)(lVar17 + 0x128);
            fVar30 = *(float *)(lVar17 + 0x188);
            uVar19 = *(undefined8 *)(lVar17 + 0x17c);
            fVar34 = *(float *)(lVar17 + 0x184);
            uVar25 = *(undefined8 *)(lVar17 + 0x184);
            fVar33 = *(float *)(lVar17 + 0x18c);
            fVar23 = *(float *)(lVar17 + 0x11c);
            fVar31 = *(float *)(lVar17 + 0x148);
            fVar27 = *(float *)(lVar17 + 0x150);
            in_stack_00000178 = uVar19;
            fStack0000000000000180 = fVar34;
            fStack0000000000000184 = fVar30;
            in_stack_00000188 = fVar33;
            in_stack_00000190 = in_stack_000017b0;
            in_stack_00000198 = in_stack_000017b8;
            in_stack_000001a0 = in_stack_000017c0;
            uVar10 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
            lVar17 = *(long *)OVRPlugin_Mesh_TypeInfo;
            if ((uVar10 & 1) == 0) {
              if (*(int *)(lVar17 + 0xe0) == 0) {
                thunk_FUN_01a58e78(lVar17);
              }
              fVar24 = fVar24 + (float)in_stack_000017b8;
              uVar26 = (ulong)(uint)fVar24;
              fVar23 = fVar23 - (float)((ulong)in_stack_000017b0 >> 0x20);
              fVar27 = fVar27 - in_stack_000017c0;
              uVar10 = (ulong)(uint)fVar27;
              fVar31 = fVar31 + (float)((ulong)in_stack_000017b8 >> 0x20);
              uVar29 = (ulong)(uint)fVar31;
              if (fVar23 <= fStack00000000000000d8) {
                fStack00000000000000d8 = fVar23;
              }
              if (fVar27 <= fStack00000000000000dc) {
                fStack00000000000000dc = fVar27;
              }
              if (in_stack_000000c8 <= fVar24) {
                in_stack_000000c8 = fVar24;
              }
              if (fStack00000000000000d0 <= fVar31) {
                fStack00000000000000d0 = fVar31;
              }
            }
            else {
              if (*(int *)(lVar17 + 0xe0) == 0) {
                thunk_FUN_01a58e78(lVar17);
              }
              fVar23 = (fVar23 + (in_stack_000000c8 - (float)in_stack_000017b8)) * 0.5;
              uVar29 = (ulong)(uint)fVar23;
              if (fVar27 <= fStack00000000000000dc) {
                fStack00000000000000dc = fVar27;
              }
              uVar10 = (ulong)(uint)fStack00000000000000dc;
              uVar26 = (ulong)uStack00000000000000c0;
              if (fStack00000000000000d0 <= fVar31) {
                fStack00000000000000d0 = fVar31;
              }
              (**(code **)(*unaff_x19 + 0x8e8))
                        (fStack00000000000000d8,uVar10,uVar26,uVar29,fStack00000000000000d0,uVar26);
              fStack00000000000000dc = fVar27 - fVar33;
              in_stack_000000c8 = fVar24 + fVar34;
              uStack00000000000000c0 = 0;
              fStack00000000000000d0 = fVar31 + fVar30;
              fStack00000000000000d8 = fVar23;
              in_stack_000017b0 = uVar19;
              in_stack_000017b8 = uVar25;
              in_stack_000017c0 = fVar33;
            }
            unaff_x22 = 0x178;
            if (((*unaff_x20 == 1) || (unaff_w25 == uVar16)) ||
               (((int)uVar22 <= (int)unaff_w25 || (!bVar1)))) {
              uVar26 = (ulong)uStack00000000000000c0;
              uVar10 = (ulong)(uint)fStack00000000000000dc;
              uVar29 = (ulong)(uint)in_stack_000000c8;
              (**(code **)(*unaff_x19 + 0x8e8))
                        (fStack00000000000000d8,uVar10,uVar26,uVar29,fStack00000000000000d0,uVar26);
              in_stack_00000110._4_4_ = 0;
            }
            else {
              in_stack_00000110._4_4_ = 1;
            }
          }
          puVar5 = OVRPlugin_Media_TypeInfo;
          iVar8 = *unaff_x20;
          uVar28 = uStack000000000000015c + 1;
          unaff_x27 = unaff_x27 + 0x178;
          iStack0000000000000128 = iStack0000000000000128 + 1;
          if (iVar8 <= (int)uStack000000000000015c) {
            lVar17 = *unaff_x28;
            if (lVar17 == 0) goto LAB_035574b8;
            *(int *)(lVar17 + 0x18) = iVar8;
            lVar18 = unaff_x19[0xd4];
            *(uint *)(lVar17 + 0x2c) = uVar9 + 1;
            if (iVar8 < 1 || iStack00000000000000d4 == 0) {
              iStack00000000000000d4 = 1;
            }
            *(int *)(lVar17 + 0x1c) = (int)lVar18;
            *(int *)(lVar17 + 0x24) = iStack00000000000000d4;
            *(int *)(lVar17 + 0x30) = (int)unaff_x19[0x96] + 1;
            if (((int)unaff_x19[99] != 0xff) ||
               (uVar11 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar11 & 1) == 0)) goto LAB_03554724;
            lVar17 = unaff_x19[0xdf];
            if (lVar17 != 0) {
              (**(code **)(lVar17 + 0x18))
                        (*(undefined8 *)(lVar17 + 0x40),*unaff_x28,*(undefined8 *)(lVar17 + 0x28));
            }
            if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
            iVar8 = FUN_03911ee4(unaff_x19[0xe5],0);
            if (iVar8 != 0x19) {
              lVar17 = unaff_x19[0xe5];
              if (lVar17 == 0) goto LAB_035574b8;
              uVar28 = FUN_03911ee4(lVar17,0);
              FUN_03911f20(lVar17,uVar28 | 0x19,0);
            }
            if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
              if ((*unaff_x28 == 0) || (lVar17 = *(long *)(*unaff_x28 + 0x60), lVar17 == 0))
              goto LAB_035574b8;
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              if (*(int *)(lVar17 + 0x18) == 0) goto LAB_035575f4;
              FUN_03596b20(lVar17 + 0x20,1,0);
            }
            if (unaff_x19[0x74] == 0) goto LAB_035574b8;
            FUN_036aa790(unaff_x19[0x74],0);
            if ((unaff_x19[0x6d] == 0) || (lVar17 = *(long *)(unaff_x19[0x6d] + 0x60), lVar17 == 0))
            goto LAB_035574b8;
            if (*(int *)(lVar17 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] == 0) goto LAB_035574b8;
            FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar17 + 0x30),0);
            if ((unaff_x19[0x6d] == 0) || (lVar17 = *(long *)(unaff_x19[0x6d] + 0x60), lVar17 == 0))
            goto LAB_035574b8;
            if (*(int *)(lVar17 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] == 0) goto LAB_035574b8;
            FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar17 + 0x48),0);
            if ((unaff_x19[0x6d] == 0) || (lVar17 = *(long *)(unaff_x19[0x6d] + 0x60), lVar17 == 0))
            goto LAB_035574b8;
            if (*(int *)(lVar17 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] == 0) goto LAB_035574b8;
            FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar17 + 0x50),0);
            if ((unaff_x19[0x6d] == 0) || (lVar17 = *(long *)(unaff_x19[0x6d] + 0x60), lVar17 == 0))
            goto LAB_035574b8;
            if (*(int *)(lVar17 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] == 0) goto LAB_035574b8;
            FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar17 + 0x58),0);
            if (unaff_x19[0x74] == 0) goto LAB_035574b8;
            FUN_036aa280(unaff_x19[0x74],0);
            if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
            FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
            if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
            uVar25 = FUN_0390ef60(unaff_x19[0xe4],0);
            if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
            uVar28 = FUN_0390ed3c(unaff_x19[0xe4],0);
            lVar17 = *unaff_x28;
            if (lVar17 == 0) goto LAB_035574b8;
            lVar21 = 0;
            lVar18 = 0;
            goto LAB_03557110;
          }
          if (*(uint *)(unaff_x23 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
          if ((*unaff_x28 == 0) || (lVar17 = *(long *)(*unaff_x28 + 0x50), lVar17 == 0))
          goto LAB_035574b8;
          unaff_x24 = (long)(int)uStack000000000000015c;
          lVar18 = unaff_x23 + unaff_x24 * unaff_x22;
          in_stack_00000160 = *(uint *)(lVar18 + 100);
          if (*(uint *)(lVar17 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
          in_x15 = (long)(int)in_stack_00000160;
          lVar17 = lVar17 + in_x15 * 0x5c;
          in_stack_00000108 = *(long *)(lVar18 + 0x38);
          uVar3 = *(ushort *)(lVar18 + 0x20);
          uVar16 = *(uint *)(lVar17 + 0x3c);
          in_stack_000000e0 = (long)(int)uVar16;
          uVar22 = *(uint *)(lVar17 + 0x68);
          iVar2 = *(int *)(lVar17 + 0x20);
          iVar8 = *(int *)(lVar17 + 0x28);
          iVar7 = *(int *)(lVar17 + 0x2c);
          in_stack_00000150 = (long)*(int *)(lVar17 + 0x40);
          fVar27 = *(float *)(lVar17 + 0x4c);
          fVar30 = *(float *)(lVar17 + 0x54);
          fVar23 = *(float *)(lVar17 + 0x58);
          fVar35 = *(float *)(lVar17 + 0x5c);
          fVar33 = *(float *)(lVar17 + 0x60);
          fVar34 = *(float *)(lVar17 + 0x6c);
          fVar36 = *(float *)(lVar17 + 0x70);
          fVar24 = *(float *)(lVar17 + 0x74);
          fVar31 = *(float *)(lVar17 + 0x78);
          in_stack_00000168._4_4_ = (uint)uVar3;
          if ((int)uVar22 < 9) {
            switch(uVar22) {
            case 1:
              if ((char)unaff_x19[0x1e] == '\0') {
                in_stack_000000f8._4_4_ = fVar33 + 0.0;
              }
              else {
                in_stack_000000f8._4_4_ = 0.0 - fVar23;
              }
              break;
            case 2:
LAB_03555018:
              in_stack_000000f8._4_4_ = (fVar33 + fVar35 * 0.5) - fVar23 * 0.5;
              break;
            default:
              goto switchD_03554f58_caseD_3;
            case 4:
              in_stack_000000f8._4_4_ = (fVar35 + fVar33) - fVar23;
              if ((char)unaff_x19[0x1e] != '\0') {
                in_stack_000000f8._4_4_ = fVar35 + fVar33;
              }
              break;
            case 8:
              goto switchD_03554f58_caseD_8;
            }
LAB_03555088:
            in_stack_000000e8 = 0;
          }
          else if (uVar22 == 0x10) {
switchD_03554f58_caseD_8:
            if (uVar3 < 0xad) {
              if ((uVar3 != 3) && (uVar3 != 10)) {
LAB_03554fac:
                if (*(uint *)(unaff_x23 + 0x18) <= uVar16) goto LAB_035575f4;
                uVar4 = *(undefined2 *)(in_stack_000000f0 + in_stack_000000e0 * 0x178 + 0x20);
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar10 = FUN_026b8cc4(uVar4,0);
                if ((uVar10 & 1) == 0) {
                  bVar1 = (int)in_stack_00000160 < (int)unaff_x19[0x95];
                }
                else {
                  bVar1 = false;
                }
                if ((fVar23 <= fVar35) && (!bVar1 && uVar22 >> 4 == 0)) {
                  in_stack_000000f8._4_4_ = fVar33;
                  if ((char)unaff_x19[0x1e] != '\0') {
                    in_stack_000000f8._4_4_ = fVar35 + fVar33;
                  }
                  goto LAB_03555088;
                }
                if (((uVar28 == 1) || (in_stack_00000160 != uVar9)) ||
                   (uStack000000000000015c == *(uint *)((long)unaff_x19 + 0x324))) {
                  in_stack_000000f8._4_4_ = fVar33;
                  if ((char)unaff_x19[0x1e] != '\0') {
                    in_stack_000000f8._4_4_ = fVar35 + fVar33;
                  }
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uStack0000000000000028 = FUN_026b97f8(in_stack_00000168._4_4_,0);
                  in_stack_000000e8 = 0;
                }
                else {
                  cVar13 = (char)unaff_x19[0x1e];
                  fVar33 = -fVar23;
                  if (cVar13 != '\0') {
                    fVar33 = fVar23;
                  }
                  if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar16) goto LAB_035575f4;
                  iVar7 = (int)*(char *)(in_stack_000000f0 + in_stack_000000e0 * 0x178 + 0x194) +
                          (-iVar2 - (uStack0000000000000028 & 1)) + iVar7 + -1;
                  if (iVar7 < 1) {
                    fVar23 = 1.0;
                    iVar7 = 1;
                  }
                  else {
                    fVar23 = *(float *)((long)unaff_x19 + 0x2dc);
                  }
                  if (in_stack_00000168._4_4_ == 9) {
LAB_03556e74:
                    fVar23 = 1.0 - fVar23;
                  }
                  else {
                    if (in_stack_00000168._4_4_ != 0xa0) {
                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar10 = FUN_026b97f8(in_stack_00000168._4_4_,0);
                      cVar13 = (char)unaff_x19[0x1e];
                      if ((uVar10 & 1) != 0) goto LAB_03556e74;
                    }
                    iVar7 = (iVar2 - (~uStack0000000000000028 & 1)) + iVar8;
                  }
                  fVar23 = ((fVar35 + fVar33) * fVar23) / (float)iVar7;
                  if (cVar13 == '\0') {
                    in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar23;
                    in_stack_000000e8 =
                         CONCAT44((float)((ulong)in_stack_000000e8 >> 0x20) + 0.0,
                                  (float)in_stack_000000e8 + 0.0);
                  }
                  else {
                    in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar23;
                  }
                }
              }
            }
            else if (((uVar3 != 0xad) && (uVar3 != 0x200b)) && (uVar3 != 0x2060)) goto LAB_03554fac;
          }
          else if (uVar22 == 0x20) {
            fVar23 = fVar34 + fVar24;
            goto LAB_03555018;
          }
switchD_03554f58_caseD_3:
          uVar22 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
          if (uVar22 <= uStack000000000000015c) goto LAB_035575f4;
          lVar17 = in_stack_000000f0 + unaff_x24 * 0x178;
          in_s6 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
          in_s5 = (float)in_stack_000000b8 + (float)in_stack_000000e8;
          fVar23 = (float)((ulong)in_stack_000000b8 >> 0x20) +
                   (float)((ulong)in_stack_000000e8 >> 0x20);
          if (*(char *)(lVar17 + 0x194) == '\0') goto LAB_03555938;
          iVar8 = *(int *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x2c);
          if (iVar8 != 0) goto LAB_0355574c;
          fVar33 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)in_stack_00000160,1.0);
          switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
          case 0:
            lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
            *(undefined4 *)(lVar18 + 0x84) = 0;
            *(undefined4 *)(lVar18 + 0xac) = 0;
            *(undefined4 *)(lVar18 + 0xd4) = 0x3f800000;
            fVar33 = 1.0;
            break;
          case 1:
            fVar31 = *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x70);
            if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
              lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
              fVar24 = (in_stack_000000f8._4_4_ + fVar31) - *(float *)(in_stack_00000080 + 0x230);
              fVar31 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
              ;
              goto LAB_035551cc;
            }
            lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
            fVar24 = fVar24 - fVar34;
            *(float *)(lVar18 + 0x84) = fVar33 + (fVar31 - fVar34) / fVar24;
            *(float *)(lVar18 + 0xac) = fVar33 + (*(float *)(lVar18 + 0x98) - fVar34) / fVar24;
            *(float *)(lVar18 + 0xd4) = fVar33 + (*(float *)(lVar18 + 0xc0) - fVar34) / fVar24;
            fVar33 = fVar33 + (*(float *)(lVar18 + 0xe8) - fVar34) / fVar24;
            break;
          case 2:
            lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
            fVar31 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
            fVar24 = (in_stack_000000f8._4_4_ + *(float *)(lVar18 + 0x70)) -
                     *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
            *(float *)(lVar18 + 0x84) = fVar33 + fVar24 / fVar31;
            *(float *)(lVar18 + 0xac) =
                 fVar33 + ((in_stack_000000f8._4_4_ + *(float *)(lVar18 + 0x98)) -
                          *(float *)(in_stack_00000080 + 0x230)) /
                          (*(float *)(in_stack_00000080 + 0x238) -
                          *(float *)(in_stack_00000080 + 0x230));
            *(float *)(lVar18 + 0xd4) =
                 fVar33 + ((in_stack_000000f8._4_4_ + *(float *)(lVar18 + 0xc0)) -
                          *(float *)(in_stack_00000080 + 0x230)) /
                          (*(float *)(in_stack_00000080 + 0x238) -
                          *(float *)(in_stack_00000080 + 0x230));
            fVar33 = fVar33 + ((in_stack_000000f8._4_4_ + *(float *)(lVar18 + 0xe8)) -
                              *(float *)(in_stack_00000080 + 0x230)) /
                              (*(float *)(in_stack_00000080 + 0x238) -
                              *(float *)(in_stack_00000080 + 0x230));
            break;
          case 3:
            switch((int)unaff_x19[0x62]) {
            case 0:
              lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
              *(undefined4 *)(lVar18 + 0x88) = 0;
              *(undefined4 *)(lVar18 + 0xb0) = 0x3f800000;
              *(undefined4 *)(lVar18 + 0xd8) = 0;
              *(undefined4 *)(lVar18 + 0x100) = 0x3f800000;
              break;
            case 1:
              lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
              fVar31 = fVar31 - fVar36;
              fVar24 = fVar33 + (*(float *)(lVar18 + 0x74) - fVar36) / fVar31;
              fVar31 = fVar33 + (*(float *)(lVar18 + 0x9c) - fVar36) / fVar31;
              *(float *)(lVar18 + 0x88) = fVar24;
              *(float *)(lVar18 + 0xb0) = fVar31;
              *(float *)(lVar18 + 0xd8) = fVar24;
              *(float *)(lVar18 + 0x100) = fVar31;
              break;
            case 2:
              lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
              fVar24 = fVar33 + (*(float *)(lVar18 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                                (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
              *(float *)(lVar18 + 0x88) = fVar24;
              fVar31 = *(float *)(unaff_x19 + 0x9c);
              fVar34 = *(float *)(unaff_x19 + 0x9d);
              *(float *)(lVar18 + 0xd8) = fVar24;
              fVar24 = fVar33 + (*(float *)(lVar18 + 0x9c) - fVar31) / (fVar34 - fVar31);
              *(float *)(lVar18 + 0xb0) = fVar24;
              *(float *)(lVar18 + 0x100) = fVar24;
              break;
            case 3:
              if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
              uVar22 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
            }
            if (uVar22 <= uStack000000000000015c) goto LAB_035575f4;
            lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
            fVar24 = *(float *)(lVar18 + 0x15c);
            fVar31 = (1.0 - (*(float *)(lVar18 + 0x88) + *(float *)(lVar18 + 0xb0)) * fVar24) * 0.5;
            fVar34 = fVar33 + *(float *)(lVar18 + 0x88) * fVar24 + fVar31;
            fVar33 = fVar33 + fVar31 + *(float *)(lVar18 + 0xb0) * fVar24;
            *(float *)(lVar18 + 0x84) = fVar34;
            *(float *)(lVar18 + 0xac) = fVar34;
            *(float *)(lVar18 + 0xd4) = fVar33;
            break;
          default:
            goto switchD_0355512c_default;
          }
          *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xfc) = fVar33;
switchD_0355512c_default:
          switch((int)unaff_x19[0x62]) {
          case 0:
            if (uVar22 <= uStack000000000000015c) goto LAB_035575f4;
            lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
            *(undefined4 *)(lVar18 + 0x88) = 0;
            *(undefined4 *)(lVar18 + 0xb0) = 0x3f800000;
            *(undefined4 *)(lVar18 + 0xd8) = 0x3f800000;
            *(undefined4 *)(lVar18 + 0x100) = 0;
            break;
          case 1:
            if (uStack000000000000015c < uVar22) {
              lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
              fVar27 = fVar27 - fVar30;
              fVar24 = (*(float *)(lVar18 + 0x74) - fVar30) / fVar27;
              fVar27 = (*(float *)(lVar18 + 0x9c) - fVar30) / fVar27;
              *(float *)(lVar18 + 0x88) = fVar24;
              goto UnityEngine_Animator__set_stabilizeFeet;
            }
            goto LAB_035575f4;
          case 2:
            if (uVar22 <= uStack000000000000015c) goto LAB_035575f4;
            lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
            fVar24 = (*(float *)(lVar18 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                     (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
            *(float *)(lVar18 + 0x88) = fVar24;
            fVar27 = (*(float *)(lVar18 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
                     (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
            *(float *)(lVar18 + 0xb0) = fVar27;
            *(float *)(lVar18 + 0xd8) = fVar27;
            *(float *)(lVar18 + 0x100) = fVar24;
            break;
          case 3:
            if (uVar22 <= uStack000000000000015c) goto LAB_035575f4;
            lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
            fVar31 = *(float *)(lVar18 + 0x15c);
            fVar27 = (1.0 - (*(float *)(lVar18 + 0x84) + *(float *)(lVar18 + 0xd4)) / fVar31) * 0.5;
            fVar24 = *(float *)(lVar18 + 0x84) / fVar31 + fVar27;
            fVar27 = fVar27 + *(float *)(lVar18 + 0xd4) / fVar31;
            *(float *)(lVar18 + 0x88) = fVar24;
            *(float *)(lVar18 + 0xb0) = fVar27;
            *(float *)(lVar18 + 0x100) = fVar24;
            *(float *)(lVar18 + 0xd8) = fVar27;
          }
          if (uVar22 <= uStack000000000000015c) goto LAB_035575f4;
          lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
          unaff_s14 = *(float *)(lVar18 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
          if ((*(char *)(lVar18 + 0x5c) == '\0') &&
             ((*(byte *)(in_stack_000000f0 + unaff_x24 * 0x178 + 400) & 1) != 0)) {
            unaff_s14 = -unaff_s14;
          }
          fVar24 = in_stack_00000050._4_4_;
          if (((in_stack_00000058 == 2) || (fVar24 = fStack0000000000000034, in_stack_00000058 == 1)
              ) || (fVar24 = fStack000000000000002c, in_stack_00000058 == 0)) {
            unaff_s14 = fVar24 * unaff_s14;
          }
          lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
          fVar27 = *(float *)(lVar18 + 0x88);
          fVar31 = *(float *)(lVar18 + 0x84);
          fVar24 = -2.1474836e+09;
          if (fVar31 != INFINITY) {
            fVar24 = (float)(int)fVar31;
          }
          fVar33 = *(float *)(lVar18 + 0xd4);
          fVar34 = *(float *)(lVar18 + 0xd8);
          fVar30 = -2.1474836e+09;
          if (fVar27 != INFINITY) {
            fVar30 = (float)(int)fVar27;
          }
          uVar32 = FUN_03591d3c(fVar31 - fVar24,fVar27 - fVar30);
          *(undefined4 *)(lVar18 + 0x84) = uVar32;
          if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
          fVar34 = fVar34 - fVar30;
          *(float *)(lVar18 + 0x88) = unaff_s14;
          uVar32 = FUN_03591d3c(fVar31 - fVar24,fVar34);
          *(undefined4 *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xac) = uVar32;
          if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
          fVar33 = fVar33 - fVar24;
          *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xb0) = unaff_s14;
          fVar24 = (float)FUN_03591d3c(fVar33,fVar34);
          *(float *)(lVar18 + 0xd4) = fVar24;
          if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
          *(float *)(lVar18 + 0xd8) = unaff_s14;
          uVar32 = FUN_03591d3c(fVar33,fVar27 - fVar30);
          *(undefined4 *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xfc) = uVar32;
          uVar22 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
          if (uVar22 <= uStack000000000000015c) goto LAB_035575f4;
          *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x100) = unaff_s14;
          unaff_x20 = in_stack_00000048;
LAB_0355574c:
          if (((int)uStack000000000000015c < (int)unaff_x19[0x65]) &&
             (iStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
            if (((int)in_stack_00000160 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
              if (uVar22 <= uStack000000000000015c) goto LAB_035575f4;
              lVar17 = in_stack_000000f0 + unaff_x24 * 0x178;
              *(ulong *)(lVar17 + 0x70) =
                   CONCAT44(in_s5 + (float)((ulong)*(undefined8 *)(lVar17 + 0x70) >> 0x20),
                            in_s6 + (float)*(undefined8 *)(lVar17 + 0x70));
              *(float *)(lVar17 + 0x78) = fVar23 + *(float *)(lVar17 + 0x78);
              *(ulong *)(lVar17 + 0x98) =
                   CONCAT44(in_s5 + (float)((ulong)*(undefined8 *)(lVar17 + 0x98) >> 0x20),
                            in_s6 + (float)*(undefined8 *)(lVar17 + 0x98));
              *(float *)(lVar17 + 0xa0) = fVar23 + *(float *)(lVar17 + 0xa0);
              *(ulong *)(lVar17 + 0xc0) =
                   CONCAT44(in_s5 + (float)((ulong)*(undefined8 *)(lVar17 + 0xc0) >> 0x20),
                            in_s6 + (float)*(undefined8 *)(lVar17 + 0xc0));
              *(float *)(lVar17 + 200) = fVar23 + *(float *)(lVar17 + 200);
              *(ulong *)(lVar17 + 0xe8) =
                   CONCAT44(in_s5 + (float)((ulong)*(undefined8 *)(lVar17 + 0xe8) >> 0x20),
                            in_s6 + (float)*(undefined8 *)(lVar17 + 0xe8));
              *(float *)(lVar17 + 0xf0) = fVar23 + *(float *)(lVar17 + 0xf0);
              goto UnityEngine_Animator__GetAnimatorClipInfoCount;
            }
            if (((int)in_stack_00000160 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
              if (uStack000000000000015c < uVar22) {
                if (*(int *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x68) == iStack0000000000000030
                   ) {
                  lVar17 = in_stack_000000f0 + unaff_x24 * 0x178;
                  *(ulong *)(lVar17 + 0x70) =
                       CONCAT44(in_s5 + (float)((ulong)*(undefined8 *)(lVar17 + 0x70) >> 0x20),
                                in_s6 + (float)*(undefined8 *)(lVar17 + 0x70));
                  *(float *)(lVar17 + 0x78) = fVar23 + *(float *)(lVar17 + 0x78);
                  *(ulong *)(lVar17 + 0x98) =
                       CONCAT44(in_s5 + (float)((ulong)*(undefined8 *)(lVar17 + 0x98) >> 0x20),
                                in_s6 + (float)*(undefined8 *)(lVar17 + 0x98));
                  *(float *)(lVar17 + 0xa0) = fVar23 + *(float *)(lVar17 + 0xa0);
                  *(ulong *)(lVar17 + 0xc0) =
                       CONCAT44(in_s5 + (float)((ulong)*(undefined8 *)(lVar17 + 0xc0) >> 0x20),
                                in_s6 + (float)*(undefined8 *)(lVar17 + 0xc0));
                  *(float *)(lVar17 + 200) = fVar23 + *(float *)(lVar17 + 200);
                  *(ulong *)(lVar17 + 0xe8) =
                       CONCAT44(in_s5 + (float)((ulong)*(undefined8 *)(lVar17 + 0xe8) >> 0x20),
                                in_s6 + (float)*(undefined8 *)(lVar17 + 0xe8));
                  *(float *)(lVar17 + 0xf0) = fVar23 + *(float *)(lVar17 + 0xf0);
                  goto UnityEngine_Animator__GetAnimatorClipInfoCount;
                }
                goto UnityEngine_Animator__GetAnimatorTransitionInfo;
              }
              goto LAB_035575f4;
            }
          }
UnityEngine_Animator__GetAnimatorTransitionInfo:
          if (uVar22 <= uStack000000000000015c) goto LAB_035575f4;
          if (DAT_0411f172 == '\0') {
            FUN_01ab69ac(PTR_DAT_03cbded8);
            DAT_0411f172 = '\x01';
            uVar22 = *(uint *)(in_stack_000000f0 + 0x18);
          }
          puVar5 = PTR_DAT_03cbded8;
          uVar32 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
          lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
          *(undefined8 *)(lVar18 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
          *(undefined4 *)(lVar18 + 0x78) = uVar32;
          if (uVar22 <= uStack000000000000015c) goto LAB_035575f4;
          uVar32 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
          lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
          *(undefined8 *)(lVar18 + 0x98) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
          *(undefined4 *)(lVar18 + 0xa0) = uVar32;
          uVar32 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
          *(undefined8 *)(lVar18 + 0xc0) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
          *(undefined4 *)(lVar18 + 200) = uVar32;
          uVar32 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
          *(undefined8 *)(lVar18 + 0xe8) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
          *(undefined4 *)(lVar18 + 0xf0) = uVar32;
          *(undefined1 *)(lVar17 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
          if (iVar8 == 0) {
            pcVar14 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
            (*pcVar14)();
          }
          else if (iVar8 == 1) {
            pcVar14 = *(code **)(*unaff_x19 + 0x8c8);
            goto LAB_0355591c;
          }
LAB_03555938:
          unaff_x22 = 0x178;
          if ((*in_stack_00000170 == 0) ||
             (lVar17 = *(long *)(*in_stack_00000170 + 0x38), lVar17 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar17 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
          lVar17 = lVar17 + unaff_x24 * 0x178;
          uVar25 = *(undefined8 *)(lVar17 + 0x11c);
          *(undefined8 *)(lVar17 + 0x11c) =
               CONCAT44(in_s5 + (float)((ulong)uVar25 >> 0x20),in_s6 + (float)uVar25);
          *(float *)(lVar17 + 0x124) = fVar23 + *(float *)(lVar17 + 0x124);
          if ((*in_stack_00000170 == 0) ||
             (lVar17 = *(long *)(*in_stack_00000170 + 0x38), lVar17 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar17 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
          lVar17 = lVar17 + unaff_x24 * 0x178;
          *(ulong *)(lVar17 + 0x110) =
               CONCAT44(in_s5 + (float)((ulong)*(undefined8 *)(lVar17 + 0x110) >> 0x20),
                        in_s6 + (float)*(undefined8 *)(lVar17 + 0x110));
          *(float *)(lVar17 + 0x118) = fVar23 + *(float *)(lVar17 + 0x118);
          if ((*in_stack_00000170 == 0) ||
             (lVar17 = *(long *)(*in_stack_00000170 + 0x38), lVar17 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar17 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
          lVar17 = lVar17 + unaff_x24 * 0x178;
          *(ulong *)(lVar17 + 0x128) =
               CONCAT44(in_s5 + (float)((ulong)*(undefined8 *)(lVar17 + 0x128) >> 0x20),
                        in_s6 + (float)*(undefined8 *)(lVar17 + 0x128));
          *(float *)(lVar17 + 0x130) = fVar23 + *(float *)(lVar17 + 0x130);
          if ((*in_stack_00000170 == 0) ||
             (lVar17 = *(long *)(*in_stack_00000170 + 0x38), lVar17 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar17 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
          lVar17 = lVar17 + unaff_x24 * 0x178;
          *(float *)(lVar17 + 0x134) = in_s6 + *(float *)(lVar17 + 0x134);
          *(ulong *)(lVar17 + 0x138) =
               CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar17 + 0x138) >> 0x20),
                        in_s5 + (float)*(undefined8 *)(lVar17 + 0x138));
          lVar17 = *in_stack_00000170;
          if ((lVar17 == 0) || (lVar18 = *(long *)(lVar17 + 0x38), lVar18 == 0)) goto LAB_035574b8;
          uVar22 = *(uint *)(lVar18 + 0x18);
          if (uVar22 <= uStack000000000000015c) goto LAB_035575f4;
          lVar21 = lVar18 + unaff_x24 * 0x178;
          param_2 = CONCAT44(in_s5,in_s5);
          uVar10 = CONCAT44(in_s6 + (float)((ulong)*(undefined8 *)(lVar21 + 0x140) >> 0x20),
                            in_s6 + (float)*(undefined8 *)(lVar21 + 0x140));
          fVar23 = in_s5 + *(float *)(lVar21 + 0x150);
          uVar26 = (ulong)(uint)fVar23;
          uVar29 = CONCAT44(in_s5 + (float)((ulong)*(undefined8 *)(lVar21 + 0x148) >> 0x20),
                            in_s5 + (float)*(undefined8 *)(lVar21 + 0x148));
          *(float *)(lVar21 + 0x150) = fVar23;
          *(ulong *)(lVar21 + 0x140) = uVar10;
          *(ulong *)(lVar21 + 0x148) = uVar29;
          unaff_w25 = uStack000000000000015c;
          in_stack_00000120 = unaff_x27;
          if (in_stack_00000160 == uVar9) {
            uVar22 = *unaff_x20 - 1;
            unaff_x23 = in_stack_000000f0;
            unaff_x28 = in_stack_00000170;
            uVar9 = in_stack_00000160;
            if (uStack000000000000015c != uVar22) goto LAB_03555c04;
          }
          else {
            lVar17 = *(long *)(lVar17 + 0x50);
            if (lVar17 == 0) goto LAB_035574b8;
            if (*(uint *)(lVar17 + 0x18) <= uVar9) goto LAB_035575f4;
            lVar21 = (long)(int)uVar9;
            lVar15 = lVar17 + lVar21 * 0x5c;
            uVar29 = (ulong)(uint)*(float *)(lVar15 + 0x58);
            fVar23 = in_s5 + *(float *)(lVar15 + 0x54);
            uVar10 = (ulong)(uint)fVar23;
            fVar24 = in_s6 + *(float *)(lVar15 + 0x58);
            uVar26 = (ulong)(uint)fVar24;
            *(ulong *)(lVar15 + 0x4c) =
                 CONCAT44(in_s5 + (float)((ulong)*(undefined8 *)(lVar15 + 0x4c) >> 0x20),
                          in_s5 + (float)*(undefined8 *)(lVar15 + 0x4c));
            *(float *)(lVar15 + 0x54) = fVar23;
            *(float *)(lVar15 + 0x58) = fVar24;
            if (uVar22 <= *(uint *)(lVar15 + 0x34)) goto LAB_035575f4;
            uVar32 = *(undefined4 *)(lVar18 + (long)(int)*(uint *)(lVar15 + 0x34) * 0x178 + 0x11c);
            lVar17 = lVar17 + lVar21 * 0x5c;
            *(float *)(lVar17 + 0x70) = fVar23;
            *(undefined4 *)(lVar17 + 0x6c) = uVar32;
            lVar17 = *in_stack_00000170;
            if ((lVar17 == 0) || (lVar18 = *(long *)(lVar17 + 0x50), lVar18 == 0))
            goto LAB_035574b8;
            if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_035575f4;
            lVar17 = *(long *)(lVar17 + 0x38);
            if (lVar17 == 0) goto LAB_035574b8;
            uVar9 = *(uint *)(lVar18 + lVar21 * 0x5c + 0x40);
            if (*(uint *)(lVar17 + 0x18) <= uVar9) goto LAB_035575f4;
            lVar18 = lVar18 + lVar21 * 0x5c;
            *(undefined4 *)(lVar18 + 0x74) =
                 *(undefined4 *)(lVar17 + (long)(int)uVar9 * 0x178 + 0x128);
            *(undefined4 *)(lVar18 + 0x78) = *(undefined4 *)(lVar18 + 0x4c);
            uVar22 = *unaff_x20 - 1;
          }
          in_x13 = 0x5c;
          unaff_x23 = in_stack_000000f0;
          unaff_x28 = in_stack_00000170;
          uVar9 = in_stack_00000160;
          if (uStack000000000000015c == uVar22) goto code_r0x03555b4c;
          goto LAB_03555c04;
        }
        goto LAB_035575f4;
      }
    }
  }
  goto LAB_035574b8;
code_r0x03555b4c:
  in_x9 = *in_stack_00000170;
  if ((in_x9 == 0) ||
     (param_1 = *(long *)(in_x9 + 0x50), uStack000000000000015c = uVar28,
     unaff_w29 = in_stack_00000160, in_stack_00000140 = in_s5, param_1 == 0)) goto LAB_035574b8;
  goto code_r0x03555b5c;
  while( true ) {
    lVar17 = *unaff_x28;
    lVar18 = lVar18 + 1;
    lVar21 = lVar21 + 0x50;
    if (lVar17 == 0) break;
LAB_03557110:
    uVar11 = lVar18 + 1;
    if ((long)*(int *)(lVar17 + 0x34) <= (long)uVar11) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar17 = *(long *)(lVar17 + 0x60);
    if (lVar17 == 0) break;
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar17 + 0x18) <= uVar11) goto LAB_035575f4;
    FUN_03596a20(lVar17 + lVar21 + 0x70,0);
    lVar17 = unaff_x19[0xe1];
    if (lVar17 == 0) break;
    if (*(uint *)(lVar17 + 0x18) <= uVar11) goto LAB_035575f4;
    uVar19 = *(undefined8 *)(lVar17 + lVar18 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar12 = FUN_036d35a8(uVar19,0,0);
    if ((uVar12 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*unaff_x28 == 0) || (lVar17 = *(long *)(*unaff_x28 + 0x60), lVar17 == 0)) break;
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar17 + 0x18) <= uVar11) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03596b20(lVar17 + lVar21 + 0x70,1,0);
      }
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar17 = *(long *)(lVar17 + lVar18 * 8 + 0x28);
      if (lVar17 == 0) break;
      lVar17 = UnityEngine_Material__GetColorArray(lVar17,0);
      if ((*unaff_x28 == 0) || (lVar15 = *(long *)(*unaff_x28 + 0x60), lVar15 == 0)) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar11) goto LAB_035575f4;
      if (lVar17 == 0) break;
      FUN_036a460c(lVar17,*(undefined8 *)(lVar15 + lVar21 + 0x80),0);
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar17 = *(long *)(lVar17 + lVar18 * 8 + 0x28);
      if (lVar17 == 0) break;
      lVar17 = UnityEngine_Material__GetColorArray(lVar17,0);
      if ((*unaff_x28 == 0) || (lVar15 = *(long *)(*unaff_x28 + 0x60), lVar15 == 0)) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar11) goto LAB_035575f4;
      if (lVar17 == 0) break;
      FUN_036a4810(lVar17,*(undefined8 *)(lVar15 + lVar21 + 0x98),0);
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar17 = *(long *)(lVar17 + lVar18 * 8 + 0x28);
      if (lVar17 == 0) break;
      lVar17 = UnityEngine_Material__GetColorArray(lVar17,0);
      if ((*unaff_x28 == 0) || (lVar15 = *(long *)(*unaff_x28 + 0x60), lVar15 == 0)) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar11) goto LAB_035575f4;
      if (lVar17 == 0) break;
      FUN_036a48bc(lVar17,*(undefined8 *)(lVar15 + lVar21 + 0xa0),0);
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar17 = *(long *)(lVar17 + lVar18 * 8 + 0x28);
      if (lVar17 == 0) break;
      lVar17 = UnityEngine_Material__GetColorArray(lVar17,0);
      if ((*unaff_x28 == 0) || (lVar15 = *(long *)(*unaff_x28 + 0x60), lVar15 == 0)) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar11) goto LAB_035575f4;
      if (lVar17 == 0) break;
      FUN_036a4e24(lVar17,*(undefined8 *)(lVar15 + lVar21 + 0xa8),0);
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar17 = *(long *)(lVar17 + lVar18 * 8 + 0x28);
      if ((lVar17 == 0) || (lVar17 = UnityEngine_Material__GetColorArray(lVar17,0), lVar17 == 0))
      break;
      FUN_036aa280(lVar17,0);
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar17 = *(long *)(lVar17 + lVar18 * 8 + 0x28);
      if (lVar17 == 0) break;
      lVar17 = FUN_037b514c(lVar17,0);
      lVar15 = unaff_x19[0xe1];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar15 = *(long *)(lVar15 + lVar18 * 8 + 0x28);
      if ((lVar15 == 0) || (uVar19 = UnityEngine_Material__GetColorArray(lVar15,0), lVar17 == 0))
      break;
      FUN_0390f3a4(lVar17,uVar19,0);
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar17 = *(long *)(lVar17 + lVar18 * 8 + 0x28);
      if ((lVar17 == 0) || (lVar17 = FUN_037b514c(lVar17,0), lVar17 == 0)) break;
      FUN_0390eec8(uVar25,uVar10,uVar26,uVar29,lVar17,0);
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar17 = *(long *)(lVar17 + lVar18 * 8 + 0x28);
      if ((lVar17 == 0) || (lVar17 = FUN_037b514c(lVar17,0), lVar17 == 0)) break;
      FUN_0390ed78(lVar17,uVar28 & 1,0);
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar11) goto LAB_035575f4;
      plVar20 = *(long **)(lVar17 + lVar18 * 8 + 0x28);
      uVar9 = (**(code **)(*unaff_x19 + 0x2b8))();
      if (plVar20 == (long *)0x0) break;
      (**(code **)(*plVar20 + 0x2c8))(plVar20,uVar9 & 1,*(undefined8 *)(*plVar20 + 0x2d0));
    }
  }
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


