/*
FUNCTION_NAME: UnityEngine.Animator$$get_parameterCount
ENTRY_POINT: 03555c80
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


void UnityEngine_Animator__get_parameterCount
               (long param_1,undefined1 param_2 [16],ulong param_3,ulong param_4,ulong param_5)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  bool bVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  char cVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  long *unaff_x19;
  int *unaff_x20;
  undefined8 uVar19;
  long *plVar20;
  long unaff_x23;
  long lVar21;
  long unaff_x24;
  uint unaff_w25;
  long unaff_x26;
  long unaff_x27;
  uint uVar22;
  uint unaff_w29;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
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
  uint in_stack_00000118;
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
  
code_r0x03555c80:
  lVar18 = *(long *)(param_1 + 0x40);
  if (lVar18 != 0) {
    uVar27 = *(uint *)(param_1 + 0x24);
    iVar9 = *(int *)(lVar18 + 0x18);
    if (iVar9 < (int)(uVar27 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(param_1 + 0x40),iVar9 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      param_1 = *in_stack_00000170;
      if (param_1 == 0) goto LAB_035574b8;
    }
    lVar18 = *(long *)(param_1 + 0x40);
    if (lVar18 != 0) {
      if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_035575f4;
      lVar18 = lVar18 + (long)(int)uVar27 * 0x18;
      *(long **)(lVar18 + 0x20) = unaff_x19;
      *(uint *)(lVar18 + 0x28) = uStack0000000000000158;
      *(uint *)(lVar18 + 0x2c) = unaff_w25;
      *(uint *)(lVar18 + 0x30) = uStack000000000000015c - uStack0000000000000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar18 = unaff_x19[0x6d];
      if (lVar18 != 0) {
        lVar14 = *(long *)(lVar18 + 0x50);
        *(int *)(lVar18 + 0x24) = *(int *)(lVar18 + 0x24) + 1;
        if (lVar14 != 0) {
          if (unaff_w29 < *(uint *)(lVar14 + 0x18)) {
            lVar14 = lVar14 + unaff_x26 * 0x5c;
            iStack00000000000000d4 = iStack00000000000000d4 + 1;
            *(int *)(lVar14 + 0x30) = *(int *)(lVar14 + 0x30) + 1;
            uVar27 = uStack000000000000015c;
LAB_03555d68:
            uStack000000000000015c = uVar27;
            bVar5 = true;
            uVar10 = in_stack_00000160;
LAB_03555d70:
            if ((*in_stack_00000170 == 0) ||
               (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0)) goto LAB_035574b8;
            uVar27 = *(uint *)(lVar18 + 0x18);
            if (uVar27 <= unaff_w25) goto LAB_035575f4;
            uVar17 = (uint)in_stack_000000e0;
            uVar22 = (uint)in_stack_00000150;
            if ((*(byte *)(lVar18 + unaff_x24 * 0x178 + 400) >> 2 & 1) == 0) {
              if ((in_stack_00000118 & 1) == 0) {
LAB_03556254:
                in_stack_00000118 = 0;
              }
              else {
LAB_03555da0:
                if (uVar27 <= uStack000000000000015c - 2) goto LAB_035575f4;
                lVar14 = *unaff_x19;
                uVar27 = *(uint *)(lVar18 + unaff_x27 + -0x330);
                uVar30 = *(undefined4 *)(lVar18 + unaff_x27 + -0x2f8);
LAB_035562ec:
                pcVar15 = *(code **)(lVar14 + 0x8d8);
LAB_035562f4:
                param_5 = (ulong)uVar27;
                param_3 = (ulong)(uint)fStack0000000000000070;
                param_4 = (ulong)uStack0000000000000074;
                (*pcVar15)(in_stack_00000078,param_3,param_4,param_5,fStack0000000000000104,0,
                           in_stack_00000088._4_4_,uVar30);
                puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*(int *)(lVar18 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar18 = *(long *)puVar6;
                }
LAB_03556348:
                in_stack_00000118 = 0;
                unaff_s15 = 0.0;
                fStack0000000000000104 = *(float *)(*(long *)(lVar18 + 0xb8) + 0x15a8);
                fStack0000000000000100 = 0.0;
              }
            }
            else {
              lVar18 = lVar18 + unaff_x24 * 0x178;
              iVar9 = *(int *)(lVar18 + 0x68);
              *(undefined4 *)(lVar18 + 0x16c) = in_stack_000017c4;
              if ((((int)unaff_x19[0x65] < (int)unaff_w25) ||
                  ((int)unaff_x19[0x66] < (int)unaff_w29)) ||
                 (((int)unaff_x19[0x5c] == 5 && (iVar9 + 1 != (int)unaff_x19[0x67])))) {
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
                lVar18 = *in_stack_00000170;
                if ((lVar18 == 0) || (lVar14 = *(long *)(lVar18 + 0x38), lVar14 == 0))
                goto LAB_035574b8;
                if (*(uint *)(lVar14 + 0x18) <= unaff_w25) goto LAB_035575f4;
                fVar23 = *(float *)(lVar14 + unaff_x24 * 0x178 + 0x160);
                if (unaff_s15 <= fVar23) {
                  unaff_s15 = fVar23;
                }
                if (fStack0000000000000100 <= ABS(unaff_s14)) {
                  fStack0000000000000100 = ABS(unaff_s14);
                }
                if (iVar9 != in_stack_00000068._4_4_) {
                  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar18 = *in_stack_00000170;
                    if (lVar18 == 0) goto LAB_035574b8;
                    lVar14 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                  }
                  else {
                    lVar14 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                  }
                  fStack0000000000000104 = *(float *)(lVar14 + 0x15a8);
                }
                lVar18 = *(long *)(lVar18 + 0x38);
                if (lVar18 == 0) goto LAB_035574b8;
                if (*(uint *)(lVar18 + 0x18) <= unaff_w25) goto LAB_035575f4;
                if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
                fVar24 = *(float *)(lVar18 + unaff_x24 * 0x178 + 0x14c);
                fVar23 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
                fVar24 = fVar24 + unaff_s15 * fVar23;
                if (fVar24 <= fStack0000000000000104) {
                  fStack0000000000000104 = fVar24;
                }
                param_3 = (ulong)(uint)fStack0000000000000104;
                in_stack_00000068._4_4_ = iVar9;
              }
              if ((in_stack_00000118 & 1) == 0) {
                in_stack_00000118 = 0;
                unaff_x23 = in_stack_000000f0;
                if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)
                     ) || ((int)uVar22 < (int)unaff_w25)) || ((bool)(bVar1 ^ 1))) goto LAB_03556364;
                if (unaff_w25 == uVar22) {
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar11 = FUN_026b97f8(in_stack_00000168._4_4_,0);
                  if ((uVar11 & 1) != 0) goto LAB_03556254;
                }
                if ((*in_stack_00000170 == 0) ||
                   (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0)) goto LAB_035574b8;
                if (*(uint *)(lVar18 + 0x18) <= unaff_w25) goto LAB_035575f4;
                lVar18 = lVar18 + unaff_x24 * 0x178;
                in_stack_00000088._4_4_ = *(float *)(lVar18 + 0x160);
                in_stack_00000078 = *(uint *)(lVar18 + 0x11c);
                param_4 = (ulong)in_stack_00000078;
                bVar7 = unaff_s15 != 0.0;
                fVar23 = in_stack_00000088._4_4_;
                if (bVar7) {
                  fVar23 = unaff_s15;
                }
                unaff_s15 = fVar23;
                in_stack_00000090 = *(undefined4 *)(lVar18 + 0x168);
                uStack0000000000000074 = 0;
                fVar23 = unaff_s14;
                if (bVar7) {
                  fVar23 = fStack0000000000000100;
                }
                param_3 = (ulong)(uint)fVar23;
                fStack0000000000000070 = fStack0000000000000104;
                fStack0000000000000100 = fVar23;
              }
              if (*unaff_x20 == 1) {
                if ((*in_stack_00000170 != 0) &&
                   (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 != 0)) {
                  if (unaff_w25 < *(uint *)(lVar18 + 0x18)) {
                    lVar18 = lVar18 + unaff_x24 * 0x178;
                    lVar14 = *unaff_x19;
                    uVar27 = *(uint *)(lVar18 + 0x128);
                    uVar30 = *(undefined4 *)(lVar18 + 0x160);
                    unaff_x23 = in_stack_000000f0;
                    goto LAB_035562ec;
                  }
                  goto LAB_035575f4;
                }
                goto LAB_035574b8;
              }
              if ((unaff_w25 == uVar17) || ((int)uVar22 <= (int)unaff_w25)) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar11 = FUN_026b63d8(in_stack_00000168._4_4_,0);
                if ((*in_stack_00000170 != 0) &&
                   (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 != 0)) {
                  lVar14 = unaff_x24;
                  uVar27 = unaff_w25;
                  if (in_stack_00000168._4_4_ == 0x200b || (uVar11 & 1) != 0) {
                    lVar14 = in_stack_00000150;
                    uVar27 = uVar22;
                  }
                  if (uVar27 < *(uint *)(lVar18 + 0x18)) {
                    lVar18 = lVar18 + lVar14 * 0x178;
                    uVar27 = *(uint *)(lVar18 + 0x128);
                    uVar30 = *(undefined4 *)(lVar18 + 0x160);
                    pcVar15 = *(code **)(*unaff_x19 + 0x8d8);
                    unaff_x23 = in_stack_000000f0;
                    goto LAB_035562f4;
                  }
                  goto LAB_035575f4;
                }
                goto LAB_035574b8;
              }
              if (!bVar1) {
                if ((*in_stack_00000170 != 0) &&
                   (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 != 0)) {
                  uVar27 = *(uint *)(lVar18 + 0x18);
                  unaff_x23 = in_stack_000000f0;
                  goto LAB_03555da0;
                }
                goto LAB_035574b8;
              }
              if ((int)unaff_w25 < *unaff_x20 + -1) {
                if ((*in_stack_00000170 == 0) ||
                   (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0)) goto LAB_035574b8;
                if (*(uint *)(lVar18 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
                uVar11 = FUN_03567ad8(in_stack_00000090,*(undefined4 *)(lVar18 + unaff_x27),0);
                if ((uVar11 & 1) == 0) {
                  if ((*in_stack_00000170 != 0) &&
                     (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 != 0)) {
                    if (unaff_w25 < *(uint *)(lVar18 + 0x18)) {
                      lVar18 = lVar18 + unaff_x24 * 0x178;
                      param_5 = (ulong)*(uint *)(lVar18 + 0x128);
                      param_4 = (ulong)uStack0000000000000074;
                      param_3 = (ulong)(uint)fStack0000000000000070;
                      (**(code **)(*unaff_x19 + 0x8d8))
                                (in_stack_00000078,param_3,param_4,param_5,fStack0000000000000104,0,
                                 in_stack_00000088._4_4_,*(undefined4 *)(lVar18 + 0x160));
                      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                      lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                      unaff_x23 = in_stack_000000f0;
                      if (*(int *)(lVar18 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar18 = *(long *)puVar6;
                      }
                      goto LAB_03556348;
                    }
                    goto LAB_035575f4;
                  }
                  goto LAB_035574b8;
                }
              }
              in_stack_00000118 = 1;
              unaff_x23 = in_stack_000000f0;
            }
LAB_03556364:
            if ((*in_stack_00000170 == 0) ||
               (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar18 + 0x18) <= unaff_w25) goto LAB_035575f4;
            if (in_stack_00000108 == 0) goto LAB_035574b8;
            uVar27 = *(uint *)(lVar18 + unaff_x24 * 0x178 + 400);
            fVar23 = (float)FUN_03776a30(in_stack_00000108 + 0x50,0);
            if ((uVar27 >> 6 & 1) == 0) {
              if ((uStack000000000000012c & 1) != 0) {
                if ((*in_stack_00000170 == 0) ||
                   (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0)) goto LAB_035574b8;
                if (*(uint *)(lVar18 + 0x18) <= uStack000000000000015c - 2) goto LAB_035575f4;
                uVar27 = *(uint *)(lVar18 + unaff_x27 + -0x330);
                fVar24 = *(float *)(lVar18 + unaff_x27 + -0x30c);
                pcVar15 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
                param_5 = (ulong)uVar27;
                param_3 = (ulong)(uint)fStack000000000000009c;
                param_4 = (ulong)uStack0000000000000098;
                (*pcVar15)(in_stack_000000a0,param_3,param_4,param_5,
                           in_stack_000000a8 * fVar23 + fVar24,0,in_stack_000000a8,in_stack_000000a8
                          );
              }
LAB_03556948:
              uStack000000000000012c = 0;
            }
            else {
              lVar18 = *in_stack_00000170;
              if ((lVar18 == 0) || (lVar14 = *(long *)(lVar18 + 0x38), lVar14 == 0))
              goto LAB_035574b8;
              if (*(uint *)(lVar14 + 0x18) <= unaff_w25) goto LAB_035575f4;
              *(undefined4 *)(lVar14 + unaff_x24 * 0x178 + 0x174) = in_stack_000017c4;
              if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)uVar10))
                 || (((int)unaff_x19[0x5c] == 5 &&
                     (*(int *)(lVar14 + unaff_x24 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10))
                  || ((int)uVar22 < (int)unaff_w25)) ||
                 ((uStack000000000000012c & 1) != 0 || !bVar1)) {
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
                  lVar18 = *in_stack_00000170;
                  if (lVar18 == 0) goto LAB_035574b8;
                }
                lVar18 = *(long *)(lVar18 + 0x38);
                if (lVar18 == 0) goto LAB_035574b8;
                if (*(uint *)(lVar18 + 0x18) <= unaff_w25) goto LAB_035575f4;
                lVar18 = lVar18 + unaff_x24 * 0x178;
                in_stack_00000040 = *(float *)(lVar18 + 0x60);
                in_stack_00000038 = *(float *)(lVar18 + 0x14c);
                param_3 = (ulong)(uint)in_stack_00000038;
                in_stack_000000a0 = *(uint *)(lVar18 + 0x11c);
                param_4 = (ulong)in_stack_000000a0;
                in_stack_000000a8 = *(float *)(lVar18 + 0x160);
                fStack000000000000009c = fVar23 * in_stack_000000a8 + in_stack_00000038;
                uStack0000000000000098 = 0;
              }
              iVar9 = *unaff_x20;
              if (iVar9 == 1) {
LAB_03556628:
                if ((*in_stack_00000170 != 0) &&
                   (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 != 0)) {
                  if (unaff_w25 < *(uint *)(lVar18 + 0x18)) {
                    lVar18 = lVar18 + unaff_x24 * 0x178;
                    lVar14 = *unaff_x19;
                    uVar27 = *(uint *)(lVar18 + 0x128);
                    fVar24 = *(float *)(lVar18 + 0x14c);
LAB_03556654:
                    pcVar15 = *(code **)(lVar14 + 0x8d8);
                    goto LAB_03556914;
                  }
                  goto LAB_035575f4;
                }
                goto LAB_035574b8;
              }
              if (unaff_w25 == uVar17) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar11 = FUN_026b63d8(in_stack_00000168._4_4_,0);
                if ((*in_stack_00000170 != 0) &&
                   (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 != 0)) {
                  uVar27 = *(uint *)(lVar18 + 0x18);
                  if (in_stack_00000168._4_4_ == 0x200b || (uVar11 & 1) != 0) {
                    if (uVar27 <= uVar22) goto LAB_035575f4;
                  }
                  else {
FUN_035568e8:
                    in_stack_00000150 = unaff_x24;
                    if (uVar27 <= unaff_w25) goto LAB_035575f4;
                  }
LAB_035568f0:
                  lVar18 = lVar18 + in_stack_00000150 * 0x178;
                  fVar24 = *(float *)(lVar18 + 0x14c);
                  uVar27 = *(uint *)(lVar18 + 0x128);
                  pcVar15 = *(code **)(*unaff_x19 + 0x8d8);
                  goto LAB_03556914;
                }
                goto LAB_035574b8;
              }
              if ((int)unaff_w25 < iVar9) {
                lVar18 = *in_stack_00000170;
                if ((lVar18 != 0) && (lVar14 = *(long *)(lVar18 + 0x38), lVar14 != 0)) {
                  if (uStack000000000000015c < *(uint *)(lVar14 + 0x18)) {
                    if (*(float *)(lVar14 + unaff_x27 + -0x108) == in_stack_00000040) {
                      fVar24 = *(float *)(lVar14 + unaff_x27 + -0x1c);
                      if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      param_3 = (ulong)(uint)in_stack_00000038;
                      uVar11 = FUN_03567bac(in_stack_00000140 + fVar24,param_3,0);
                      if ((uVar11 & 1) != 0) {
                        iVar9 = *unaff_x20;
                        goto LAB_03556744;
                      }
                      lVar18 = *in_stack_00000170;
                      if (lVar18 == 0) goto LAB_035574b8;
                    }
                    lVar18 = *(long *)(lVar18 + 0x38);
                    if (lVar18 != 0) {
                      uVar27 = *(uint *)(lVar18 + 0x18);
                      if ((int)unaff_w25 <= (int)uVar22) goto FUN_035568e8;
                      if (uVar22 < uVar27) goto LAB_035568f0;
                      goto LAB_035575f4;
                    }
                    goto LAB_035574b8;
                  }
                  goto LAB_035575f4;
                }
                goto LAB_035574b8;
              }
LAB_03556744:
              if ((int)unaff_w25 < iVar9) {
                iVar9 = FUN_036d3364(in_stack_00000108,0);
                if (*(uint *)(unaff_x23 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
                lVar18 = *(long *)(unaff_x23 + in_stack_00000120 + -0x130);
                if (lVar18 == 0) goto LAB_035574b8;
                iVar8 = FUN_036d3364(lVar18,0);
                unaff_x27 = in_stack_00000120;
                if (iVar9 != iVar8) goto LAB_03556628;
              }
              if (!bVar1) {
                if ((*in_stack_00000170 != 0) &&
                   (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 != 0)) {
                  if (uStack000000000000015c - 2 < *(uint *)(lVar18 + 0x18)) {
                    lVar14 = *unaff_x19;
                    uVar27 = *(uint *)(lVar18 + unaff_x27 + -0x330);
                    fVar24 = *(float *)(lVar18 + unaff_x27 + -0x30c);
                    goto LAB_03556654;
                  }
                  goto LAB_035575f4;
                }
                goto LAB_035574b8;
              }
              uStack000000000000012c = 1;
            }
            if ((*in_stack_00000170 == 0) ||
               (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0)) goto LAB_035574b8;
            uVar27 = (uint)*(undefined8 *)(lVar18 + 0x18);
            if (uVar27 <= unaff_w25) goto LAB_035575f4;
            if ((*(byte *)(lVar18 + unaff_x24 * 0x178 + 0x191) >> 1 & 1) == 0) {
              if ((in_stack_00000110._4_4_ & 1) != 0) {
                param_4 = (ulong)uStack00000000000000c0;
                param_3 = (ulong)(uint)fStack00000000000000dc;
                param_5 = (ulong)(uint)in_stack_000000c8;
                (**(code **)(*unaff_x19 + 0x8e8))
                          (fStack00000000000000d8,param_3,param_4,param_5,fStack00000000000000d0,
                           param_4);
              }
LAB_035569b4:
              in_stack_00000110._4_4_ = 0;
            }
            else {
              if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)uVar10))
                 || (((int)unaff_x19[0x5c] == 5 &&
                     (*(int *)(lVar18 + unaff_x24 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if ((in_stack_00000110._4_4_ & 1) == 0) {
                if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)
                     ) || ((int)uVar22 < (int)unaff_w25)) || (!bVar1)) goto LAB_035569b4;
                if (unaff_w25 == uVar22) {
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar11 = FUN_026b97f8(in_stack_00000168._4_4_,0);
                  if ((uVar11 & 1) != 0) goto LAB_035569b4;
                }
                puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*(int *)(lVar14 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar14 = *(long *)puVar6;
                }
                if ((*in_stack_00000170 == 0) ||
                   (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0)) goto LAB_035574b8;
                uVar27 = (uint)*(undefined8 *)(lVar18 + 0x18);
                if (uVar27 <= unaff_w25) goto LAB_035575f4;
                lVar14 = *(long *)(lVar14 + 0xb8);
                lVar21 = lVar18 + unaff_x24 * 0x178;
                in_stack_000017b8 = *(undefined8 *)(lVar21 + 0x184);
                in_stack_000017b0 = *(undefined8 *)(lVar21 + 0x17c);
                fStack00000000000000d8 = *(float *)(lVar14 + 0x1598);
                fStack00000000000000dc = *(float *)(lVar14 + 0x159c);
                in_stack_000017c0 = *(float *)(lVar21 + 0x18c);
                in_stack_000000c8 = *(float *)(lVar14 + 0x15a0);
                fStack00000000000000d0 = *(float *)(lVar14 + 0x15a4);
                uStack00000000000000c0 = 0;
              }
              if (uVar27 <= unaff_w25) goto LAB_035575f4;
              lVar18 = lVar18 + unaff_x24 * 0x178;
              fVar24 = *(float *)(lVar18 + 0x128);
              fVar28 = *(float *)(lVar18 + 0x188);
              uVar19 = *(undefined8 *)(lVar18 + 0x17c);
              fVar32 = *(float *)(lVar18 + 0x184);
              uVar25 = *(undefined8 *)(lVar18 + 0x184);
              fVar31 = *(float *)(lVar18 + 0x18c);
              fVar23 = *(float *)(lVar18 + 0x11c);
              fVar29 = *(float *)(lVar18 + 0x148);
              fVar26 = *(float *)(lVar18 + 0x150);
              in_stack_00000178 = uVar19;
              fStack0000000000000180 = fVar32;
              fStack0000000000000184 = fVar28;
              in_stack_00000188 = fVar31;
              in_stack_00000190 = in_stack_000017b0;
              in_stack_00000198 = in_stack_000017b8;
              in_stack_000001a0 = in_stack_000017c0;
              uVar11 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
              lVar18 = *(long *)OVRPlugin_Mesh_TypeInfo;
              if ((uVar11 & 1) == 0) {
                if (*(int *)(lVar18 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(lVar18);
                }
                fVar24 = fVar24 + (float)in_stack_000017b8;
                param_4 = (ulong)(uint)fVar24;
                fVar23 = fVar23 - (float)((ulong)in_stack_000017b0 >> 0x20);
                fVar26 = fVar26 - in_stack_000017c0;
                param_3 = (ulong)(uint)fVar26;
                fVar29 = fVar29 + (float)((ulong)in_stack_000017b8 >> 0x20);
                param_5 = (ulong)(uint)fVar29;
                if (fVar23 <= fStack00000000000000d8) {
                  fStack00000000000000d8 = fVar23;
                }
                if (fVar26 <= fStack00000000000000dc) {
                  fStack00000000000000dc = fVar26;
                }
                if (in_stack_000000c8 <= fVar24) {
                  in_stack_000000c8 = fVar24;
                }
                if (fStack00000000000000d0 <= fVar29) {
                  fStack00000000000000d0 = fVar29;
                }
              }
              else {
                if (*(int *)(lVar18 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(lVar18);
                }
                fVar23 = (fVar23 + (in_stack_000000c8 - (float)in_stack_000017b8)) * 0.5;
                param_5 = (ulong)(uint)fVar23;
                if (fVar26 <= fStack00000000000000dc) {
                  fStack00000000000000dc = fVar26;
                }
                param_3 = (ulong)(uint)fStack00000000000000dc;
                param_4 = (ulong)uStack00000000000000c0;
                if (fStack00000000000000d0 <= fVar29) {
                  fStack00000000000000d0 = fVar29;
                }
                (**(code **)(*unaff_x19 + 0x8e8))
                          (fStack00000000000000d8,param_3,param_4,param_5,fStack00000000000000d0,
                           param_4);
                fStack00000000000000dc = fVar26 - fVar31;
                in_stack_000000c8 = fVar24 + fVar32;
                uStack00000000000000c0 = 0;
                fStack00000000000000d0 = fVar29 + fVar28;
                fStack00000000000000d8 = fVar23;
                in_stack_000017b0 = uVar19;
                in_stack_000017b8 = uVar25;
                in_stack_000017c0 = fVar31;
              }
              if (((*unaff_x20 == 1) || (unaff_w25 == uVar17)) ||
                 (((int)uVar22 <= (int)unaff_w25 || (!bVar1)))) {
                param_4 = (ulong)uStack00000000000000c0;
                param_3 = (ulong)(uint)fStack00000000000000dc;
                param_5 = (ulong)(uint)in_stack_000000c8;
                (**(code **)(*unaff_x19 + 0x8e8))
                          (fStack00000000000000d8,param_3,param_4,param_5,fStack00000000000000d0,
                           param_4);
                in_stack_00000110._4_4_ = 0;
              }
              else {
                in_stack_00000110._4_4_ = 1;
              }
            }
            puVar6 = OVRPlugin_Media_TypeInfo;
            iVar9 = *unaff_x20;
            uVar27 = uStack000000000000015c + 1;
            unaff_x27 = unaff_x27 + 0x178;
            iStack0000000000000128 = iStack0000000000000128 + 1;
            if (iVar9 <= (int)uStack000000000000015c) {
              lVar18 = *in_stack_00000170;
              if (lVar18 == 0) goto LAB_035574b8;
              *(int *)(lVar18 + 0x18) = iVar9;
              lVar14 = unaff_x19[0xd4];
              *(uint *)(lVar18 + 0x2c) = uVar10 + 1;
              if (iVar9 < 1 || iStack00000000000000d4 == 0) {
                iStack00000000000000d4 = 1;
              }
              *(int *)(lVar18 + 0x1c) = (int)lVar14;
              *(int *)(lVar18 + 0x24) = iStack00000000000000d4;
              *(int *)(lVar18 + 0x30) = (int)unaff_x19[0x96] + 1;
              if (((int)unaff_x19[99] != 0xff) ||
                 (uVar11 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar11 & 1) == 0))
              goto LAB_03554724;
              lVar18 = unaff_x19[0xdf];
              if (lVar18 != 0) {
                (**(code **)(lVar18 + 0x18))
                          (*(undefined8 *)(lVar18 + 0x40),*in_stack_00000170,
                           *(undefined8 *)(lVar18 + 0x28));
              }
              if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
              iVar9 = FUN_03911ee4(unaff_x19[0xe5],0);
              if (iVar9 != 0x19) {
                lVar18 = unaff_x19[0xe5];
                if (lVar18 == 0) goto LAB_035574b8;
                uVar27 = FUN_03911ee4(lVar18,0);
                FUN_03911f20(lVar18,uVar27 | 0x19,0);
              }
              if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                if ((*in_stack_00000170 == 0) ||
                   (lVar18 = *(long *)(*in_stack_00000170 + 0x60), lVar18 == 0)) goto LAB_035574b8;
                if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                if (*(int *)(lVar18 + 0x18) == 0) goto LAB_035575f4;
                FUN_03596b20(lVar18 + 0x20,1,0);
              }
              if (unaff_x19[0x74] == 0) goto LAB_035574b8;
              FUN_036aa790(unaff_x19[0x74],0);
              if ((unaff_x19[0x6d] == 0) ||
                 (lVar18 = *(long *)(unaff_x19[0x6d] + 0x60), lVar18 == 0)) goto LAB_035574b8;
              if (*(int *)(lVar18 + 0x18) == 0) goto LAB_035575f4;
              if (unaff_x19[0x74] == 0) goto LAB_035574b8;
              FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar18 + 0x30),0);
              if ((unaff_x19[0x6d] == 0) ||
                 (lVar18 = *(long *)(unaff_x19[0x6d] + 0x60), lVar18 == 0)) goto LAB_035574b8;
              if (*(int *)(lVar18 + 0x18) == 0) goto LAB_035575f4;
              if (unaff_x19[0x74] == 0) goto LAB_035574b8;
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar18 + 0x48),0);
              if ((unaff_x19[0x6d] == 0) ||
                 (lVar18 = *(long *)(unaff_x19[0x6d] + 0x60), lVar18 == 0)) goto LAB_035574b8;
              if (*(int *)(lVar18 + 0x18) == 0) goto LAB_035575f4;
              if (unaff_x19[0x74] == 0) goto LAB_035574b8;
              FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar18 + 0x50),0);
              if ((unaff_x19[0x6d] == 0) ||
                 (lVar18 = *(long *)(unaff_x19[0x6d] + 0x60), lVar18 == 0)) goto LAB_035574b8;
              if (*(int *)(lVar18 + 0x18) == 0) goto LAB_035575f4;
              if (unaff_x19[0x74] == 0) goto LAB_035574b8;
              FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar18 + 0x58),0);
              if (unaff_x19[0x74] == 0) goto LAB_035574b8;
              FUN_036aa280(unaff_x19[0x74],0);
              if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
              FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
              if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
              uVar25 = FUN_0390ef60(unaff_x19[0xe4],0);
              if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
              uVar27 = FUN_0390ed3c(unaff_x19[0xe4],0);
              lVar18 = *in_stack_00000170;
              if (lVar18 == 0) goto LAB_035574b8;
              lVar21 = 0;
              lVar14 = 0;
              goto LAB_03557110;
            }
            if (*(uint *)(unaff_x23 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
            if ((*in_stack_00000170 == 0) ||
               (lVar18 = *(long *)(*in_stack_00000170 + 0x50), lVar18 == 0)) goto LAB_035574b8;
            unaff_x24 = (long)(int)uStack000000000000015c;
            lVar14 = unaff_x23 + unaff_x24 * 0x178;
            in_stack_00000160 = *(uint *)(lVar14 + 100);
            if (*(uint *)(lVar18 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
            unaff_x26 = (long)(int)in_stack_00000160;
            lVar18 = lVar18 + unaff_x26 * 0x5c;
            in_stack_00000108 = *(long *)(lVar14 + 0x38);
            uVar3 = *(ushort *)(lVar14 + 0x20);
            uVar17 = *(uint *)(lVar18 + 0x3c);
            in_stack_000000e0 = (long)(int)uVar17;
            uVar22 = *(uint *)(lVar18 + 0x68);
            iVar2 = *(int *)(lVar18 + 0x20);
            iVar9 = *(int *)(lVar18 + 0x28);
            iVar8 = *(int *)(lVar18 + 0x2c);
            in_stack_00000150 = (long)*(int *)(lVar18 + 0x40);
            fVar26 = *(float *)(lVar18 + 0x4c);
            fVar28 = *(float *)(lVar18 + 0x54);
            fVar23 = *(float *)(lVar18 + 0x58);
            fVar33 = *(float *)(lVar18 + 0x5c);
            fVar31 = *(float *)(lVar18 + 0x60);
            fVar32 = *(float *)(lVar18 + 0x6c);
            fVar34 = *(float *)(lVar18 + 0x70);
            fVar24 = *(float *)(lVar18 + 0x74);
            fVar29 = *(float *)(lVar18 + 0x78);
            in_stack_00000168._4_4_ = (uint)uVar3;
            if ((int)uVar22 < 9) {
              switch(uVar22) {
              case 1:
                if ((char)unaff_x19[0x1e] == '\0') {
                  in_stack_000000f8._4_4_ = fVar31 + 0.0;
                }
                else {
                  in_stack_000000f8._4_4_ = 0.0 - fVar23;
                }
                break;
              case 2:
LAB_03555018:
                in_stack_000000f8._4_4_ = (fVar31 + fVar33 * 0.5) - fVar23 * 0.5;
                break;
              default:
                goto switchD_03554f58_caseD_3;
              case 4:
                in_stack_000000f8._4_4_ = (fVar33 + fVar31) - fVar23;
                if ((char)unaff_x19[0x1e] != '\0') {
                  in_stack_000000f8._4_4_ = fVar33 + fVar31;
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
                  if (*(uint *)(unaff_x23 + 0x18) <= uVar17) goto LAB_035575f4;
                  uVar4 = *(undefined2 *)(in_stack_000000f0 + in_stack_000000e0 * 0x178 + 0x20);
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar11 = FUN_026b8cc4(uVar4,0);
                  if ((uVar11 & 1) == 0) {
                    bVar1 = (int)in_stack_00000160 < (int)unaff_x19[0x95];
                  }
                  else {
                    bVar1 = false;
                  }
                  if ((fVar23 <= fVar33) && (!bVar1 && uVar22 >> 4 == 0)) {
                    in_stack_000000f8._4_4_ = fVar31;
                    if ((char)unaff_x19[0x1e] != '\0') {
                      in_stack_000000f8._4_4_ = fVar33 + fVar31;
                    }
                    goto LAB_03555088;
                  }
                  if (((uVar27 == 1) || (in_stack_00000160 != uVar10)) ||
                     (uStack000000000000015c == *(uint *)((long)unaff_x19 + 0x324))) {
                    in_stack_000000f8._4_4_ = fVar31;
                    if ((char)unaff_x19[0x1e] != '\0') {
                      in_stack_000000f8._4_4_ = fVar33 + fVar31;
                    }
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uStack0000000000000028 = FUN_026b97f8(in_stack_00000168._4_4_,0);
                    in_stack_000000e8 = 0;
                  }
                  else {
                    cVar13 = (char)unaff_x19[0x1e];
                    fVar31 = -fVar23;
                    if (cVar13 != '\0') {
                      fVar31 = fVar23;
                    }
                    if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar17) goto LAB_035575f4;
                    iVar8 = (int)*(char *)(in_stack_000000f0 + in_stack_000000e0 * 0x178 + 0x194) +
                            (-iVar2 - (uStack0000000000000028 & 1)) + iVar8 + -1;
                    if (iVar8 < 1) {
                      fVar23 = 1.0;
                      iVar8 = 1;
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
                        uVar11 = FUN_026b97f8(in_stack_00000168._4_4_,0);
                        cVar13 = (char)unaff_x19[0x1e];
                        if ((uVar11 & 1) != 0) goto LAB_03556e74;
                      }
                      iVar8 = (iVar2 - (~uStack0000000000000028 & 1)) + iVar9;
                    }
                    fVar23 = ((fVar33 + fVar31) * fVar23) / (float)iVar8;
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
              else if (((uVar3 != 0xad) && (uVar3 != 0x200b)) && (uVar3 != 0x2060))
              goto LAB_03554fac;
            }
            else if (uVar22 == 0x20) {
              fVar23 = fVar32 + fVar24;
              goto LAB_03555018;
            }
switchD_03554f58_caseD_3:
            uVar22 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
            if (uVar22 <= uStack000000000000015c) goto LAB_035575f4;
            lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
            fVar31 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
            in_stack_00000140 = (float)in_stack_000000b8 + (float)in_stack_000000e8;
            fVar23 = (float)((ulong)in_stack_000000b8 >> 0x20) +
                     (float)((ulong)in_stack_000000e8 >> 0x20);
            if (*(char *)(lVar18 + 0x194) == '\0') goto LAB_03555938;
            iVar9 = *(int *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x2c);
            if (iVar9 != 0) goto LAB_0355574c;
            fVar33 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)in_stack_00000160,1.0);
            switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
            case 0:
              lVar14 = in_stack_000000f0 + unaff_x24 * 0x178;
              *(undefined4 *)(lVar14 + 0x84) = 0;
              *(undefined4 *)(lVar14 + 0xac) = 0;
              *(undefined4 *)(lVar14 + 0xd4) = 0x3f800000;
              fVar33 = 1.0;
              break;
            case 1:
              fVar29 = *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x70);
              if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
                lVar14 = in_stack_000000f0 + unaff_x24 * 0x178;
                fVar24 = (in_stack_000000f8._4_4_ + fVar29) - *(float *)(in_stack_00000080 + 0x230);
                fVar29 = *(float *)(in_stack_00000080 + 0x238) -
                         *(float *)(in_stack_00000080 + 0x230);
                goto LAB_035551cc;
              }
              lVar14 = in_stack_000000f0 + unaff_x24 * 0x178;
              fVar24 = fVar24 - fVar32;
              *(float *)(lVar14 + 0x84) = fVar33 + (fVar29 - fVar32) / fVar24;
              *(float *)(lVar14 + 0xac) = fVar33 + (*(float *)(lVar14 + 0x98) - fVar32) / fVar24;
              *(float *)(lVar14 + 0xd4) = fVar33 + (*(float *)(lVar14 + 0xc0) - fVar32) / fVar24;
              fVar33 = fVar33 + (*(float *)(lVar14 + 0xe8) - fVar32) / fVar24;
              break;
            case 2:
              lVar14 = in_stack_000000f0 + unaff_x24 * 0x178;
              fVar29 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
              ;
              fVar24 = (in_stack_000000f8._4_4_ + *(float *)(lVar14 + 0x70)) -
                       *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
              *(float *)(lVar14 + 0x84) = fVar33 + fVar24 / fVar29;
              *(float *)(lVar14 + 0xac) =
                   fVar33 + ((in_stack_000000f8._4_4_ + *(float *)(lVar14 + 0x98)) -
                            *(float *)(in_stack_00000080 + 0x230)) /
                            (*(float *)(in_stack_00000080 + 0x238) -
                            *(float *)(in_stack_00000080 + 0x230));
              *(float *)(lVar14 + 0xd4) =
                   fVar33 + ((in_stack_000000f8._4_4_ + *(float *)(lVar14 + 0xc0)) -
                            *(float *)(in_stack_00000080 + 0x230)) /
                            (*(float *)(in_stack_00000080 + 0x238) -
                            *(float *)(in_stack_00000080 + 0x230));
              fVar33 = fVar33 + ((in_stack_000000f8._4_4_ + *(float *)(lVar14 + 0xe8)) -
                                *(float *)(in_stack_00000080 + 0x230)) /
                                (*(float *)(in_stack_00000080 + 0x238) -
                                *(float *)(in_stack_00000080 + 0x230));
              break;
            case 3:
              switch((int)unaff_x19[0x62]) {
              case 0:
                lVar14 = in_stack_000000f0 + unaff_x24 * 0x178;
                *(undefined4 *)(lVar14 + 0x88) = 0;
                *(undefined4 *)(lVar14 + 0xb0) = 0x3f800000;
                *(undefined4 *)(lVar14 + 0xd8) = 0;
                *(undefined4 *)(lVar14 + 0x100) = 0x3f800000;
                break;
              case 1:
                lVar14 = in_stack_000000f0 + unaff_x24 * 0x178;
                fVar29 = fVar29 - fVar34;
                fVar24 = fVar33 + (*(float *)(lVar14 + 0x74) - fVar34) / fVar29;
                fVar29 = fVar33 + (*(float *)(lVar14 + 0x9c) - fVar34) / fVar29;
                *(float *)(lVar14 + 0x88) = fVar24;
                *(float *)(lVar14 + 0xb0) = fVar29;
                *(float *)(lVar14 + 0xd8) = fVar24;
                *(float *)(lVar14 + 0x100) = fVar29;
                break;
              case 2:
                lVar14 = in_stack_000000f0 + unaff_x24 * 0x178;
                fVar24 = fVar33 + (*(float *)(lVar14 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                                  (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
                *(float *)(lVar14 + 0x88) = fVar24;
                fVar29 = *(float *)(unaff_x19 + 0x9c);
                fVar32 = *(float *)(unaff_x19 + 0x9d);
                *(float *)(lVar14 + 0xd8) = fVar24;
                fVar24 = fVar33 + (*(float *)(lVar14 + 0x9c) - fVar29) / (fVar32 - fVar29);
                *(float *)(lVar14 + 0xb0) = fVar24;
                *(float *)(lVar14 + 0x100) = fVar24;
                break;
              case 3:
                if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
                uVar22 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
              }
              if (uVar22 <= uStack000000000000015c) goto LAB_035575f4;
              lVar14 = in_stack_000000f0 + unaff_x24 * 0x178;
              fVar24 = *(float *)(lVar14 + 0x15c);
              fVar29 = (1.0 - (*(float *)(lVar14 + 0x88) + *(float *)(lVar14 + 0xb0)) * fVar24) *
                       0.5;
              fVar32 = fVar33 + *(float *)(lVar14 + 0x88) * fVar24 + fVar29;
              fVar33 = fVar33 + fVar29 + *(float *)(lVar14 + 0xb0) * fVar24;
              *(float *)(lVar14 + 0x84) = fVar32;
              *(float *)(lVar14 + 0xac) = fVar32;
              *(float *)(lVar14 + 0xd4) = fVar33;
              break;
            default:
              goto switchD_0355512c_default;
            }
            *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xfc) = fVar33;
switchD_0355512c_default:
            switch((int)unaff_x19[0x62]) {
            case 0:
              if (uVar22 <= uStack000000000000015c) goto LAB_035575f4;
              lVar14 = in_stack_000000f0 + unaff_x24 * 0x178;
              *(undefined4 *)(lVar14 + 0x88) = 0;
              *(undefined4 *)(lVar14 + 0xb0) = 0x3f800000;
              *(undefined4 *)(lVar14 + 0xd8) = 0x3f800000;
              *(undefined4 *)(lVar14 + 0x100) = 0;
              break;
            case 1:
              if (uStack000000000000015c < uVar22) {
                lVar14 = in_stack_000000f0 + unaff_x24 * 0x178;
                fVar26 = fVar26 - fVar28;
                fVar24 = (*(float *)(lVar14 + 0x74) - fVar28) / fVar26;
                fVar26 = (*(float *)(lVar14 + 0x9c) - fVar28) / fVar26;
                *(float *)(lVar14 + 0x88) = fVar24;
                goto UnityEngine_Animator__set_stabilizeFeet;
              }
              goto LAB_035575f4;
            case 2:
              if (uVar22 <= uStack000000000000015c) goto LAB_035575f4;
              lVar14 = in_stack_000000f0 + unaff_x24 * 0x178;
              fVar24 = (*(float *)(lVar14 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                       (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
              *(float *)(lVar14 + 0x88) = fVar24;
              fVar26 = (*(float *)(lVar14 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
                       (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
              *(float *)(lVar14 + 0xb0) = fVar26;
              *(float *)(lVar14 + 0xd8) = fVar26;
              *(float *)(lVar14 + 0x100) = fVar24;
              break;
            case 3:
              if (uVar22 <= uStack000000000000015c) goto LAB_035575f4;
              lVar14 = in_stack_000000f0 + unaff_x24 * 0x178;
              fVar29 = *(float *)(lVar14 + 0x15c);
              fVar26 = (1.0 - (*(float *)(lVar14 + 0x84) + *(float *)(lVar14 + 0xd4)) / fVar29) *
                       0.5;
              fVar24 = *(float *)(lVar14 + 0x84) / fVar29 + fVar26;
              fVar26 = fVar26 + *(float *)(lVar14 + 0xd4) / fVar29;
              *(float *)(lVar14 + 0x88) = fVar24;
              *(float *)(lVar14 + 0xb0) = fVar26;
              *(float *)(lVar14 + 0x100) = fVar24;
              *(float *)(lVar14 + 0xd8) = fVar26;
            }
            if (uVar22 <= uStack000000000000015c) goto LAB_035575f4;
            lVar14 = in_stack_000000f0 + unaff_x24 * 0x178;
            unaff_s14 = *(float *)(lVar14 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
            if ((*(char *)(lVar14 + 0x5c) == '\0') &&
               ((*(byte *)(in_stack_000000f0 + unaff_x24 * 0x178 + 400) & 1) != 0)) {
              unaff_s14 = -unaff_s14;
            }
            fVar24 = in_stack_00000050._4_4_;
            if (((in_stack_00000058 == 2) ||
                (fVar24 = fStack0000000000000034, in_stack_00000058 == 1)) ||
               (fVar24 = fStack000000000000002c, in_stack_00000058 == 0)) {
              unaff_s14 = fVar24 * unaff_s14;
            }
            lVar14 = in_stack_000000f0 + unaff_x24 * 0x178;
            fVar26 = *(float *)(lVar14 + 0x88);
            fVar29 = *(float *)(lVar14 + 0x84);
            fVar24 = -2.1474836e+09;
            if (fVar29 != INFINITY) {
              fVar24 = (float)(int)fVar29;
            }
            fVar32 = *(float *)(lVar14 + 0xd4);
            fVar33 = *(float *)(lVar14 + 0xd8);
            fVar28 = -2.1474836e+09;
            if (fVar26 != INFINITY) {
              fVar28 = (float)(int)fVar26;
            }
            uVar30 = FUN_03591d3c(fVar29 - fVar24,fVar26 - fVar28);
            *(undefined4 *)(lVar14 + 0x84) = uVar30;
            if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
            fVar33 = fVar33 - fVar28;
            *(float *)(lVar14 + 0x88) = unaff_s14;
            uVar30 = FUN_03591d3c(fVar29 - fVar24,fVar33);
            *(undefined4 *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xac) = uVar30;
            if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
            fVar32 = fVar32 - fVar24;
            *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xb0) = unaff_s14;
            fVar24 = (float)FUN_03591d3c(fVar32,fVar33);
            *(float *)(lVar14 + 0xd4) = fVar24;
            if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
            *(float *)(lVar14 + 0xd8) = unaff_s14;
            uVar30 = FUN_03591d3c(fVar32,fVar26 - fVar28);
            *(undefined4 *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xfc) = uVar30;
            uVar22 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
            if (uVar22 <= uStack000000000000015c) goto LAB_035575f4;
            *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x100) = unaff_s14;
            unaff_x20 = in_stack_00000048;
LAB_0355574c:
            if (((int)uStack000000000000015c < (int)unaff_x19[0x65]) &&
               (iStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
              if (((int)in_stack_00000160 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
                if (uVar22 <= uStack000000000000015c) goto LAB_035575f4;
                lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
                *(ulong *)(lVar18 + 0x70) =
                     CONCAT44(in_stack_00000140 +
                              (float)((ulong)*(undefined8 *)(lVar18 + 0x70) >> 0x20),
                              fVar31 + (float)*(undefined8 *)(lVar18 + 0x70));
                *(float *)(lVar18 + 0x78) = fVar23 + *(float *)(lVar18 + 0x78);
                *(ulong *)(lVar18 + 0x98) =
                     CONCAT44(in_stack_00000140 +
                              (float)((ulong)*(undefined8 *)(lVar18 + 0x98) >> 0x20),
                              fVar31 + (float)*(undefined8 *)(lVar18 + 0x98));
                *(float *)(lVar18 + 0xa0) = fVar23 + *(float *)(lVar18 + 0xa0);
                *(ulong *)(lVar18 + 0xc0) =
                     CONCAT44(in_stack_00000140 +
                              (float)((ulong)*(undefined8 *)(lVar18 + 0xc0) >> 0x20),
                              fVar31 + (float)*(undefined8 *)(lVar18 + 0xc0));
                *(float *)(lVar18 + 200) = fVar23 + *(float *)(lVar18 + 200);
                *(ulong *)(lVar18 + 0xe8) =
                     CONCAT44(in_stack_00000140 +
                              (float)((ulong)*(undefined8 *)(lVar18 + 0xe8) >> 0x20),
                              fVar31 + (float)*(undefined8 *)(lVar18 + 0xe8));
                *(float *)(lVar18 + 0xf0) = fVar23 + *(float *)(lVar18 + 0xf0);
                goto UnityEngine_Animator__GetAnimatorClipInfoCount;
              }
              if (((int)in_stack_00000160 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
                if (uStack000000000000015c < uVar22) {
                  if (*(int *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x68) ==
                      iStack0000000000000030) {
                    lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
                    *(ulong *)(lVar18 + 0x70) =
                         CONCAT44(in_stack_00000140 +
                                  (float)((ulong)*(undefined8 *)(lVar18 + 0x70) >> 0x20),
                                  fVar31 + (float)*(undefined8 *)(lVar18 + 0x70));
                    *(float *)(lVar18 + 0x78) = fVar23 + *(float *)(lVar18 + 0x78);
                    *(ulong *)(lVar18 + 0x98) =
                         CONCAT44(in_stack_00000140 +
                                  (float)((ulong)*(undefined8 *)(lVar18 + 0x98) >> 0x20),
                                  fVar31 + (float)*(undefined8 *)(lVar18 + 0x98));
                    *(float *)(lVar18 + 0xa0) = fVar23 + *(float *)(lVar18 + 0xa0);
                    *(ulong *)(lVar18 + 0xc0) =
                         CONCAT44(in_stack_00000140 +
                                  (float)((ulong)*(undefined8 *)(lVar18 + 0xc0) >> 0x20),
                                  fVar31 + (float)*(undefined8 *)(lVar18 + 0xc0));
                    *(float *)(lVar18 + 200) = fVar23 + *(float *)(lVar18 + 200);
                    *(ulong *)(lVar18 + 0xe8) =
                         CONCAT44(in_stack_00000140 +
                                  (float)((ulong)*(undefined8 *)(lVar18 + 0xe8) >> 0x20),
                                  fVar31 + (float)*(undefined8 *)(lVar18 + 0xe8));
                    *(float *)(lVar18 + 0xf0) = fVar23 + *(float *)(lVar18 + 0xf0);
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
            puVar6 = PTR_DAT_03cbded8;
            uVar30 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
            lVar14 = in_stack_000000f0 + unaff_x24 * 0x178;
            *(undefined8 *)(lVar14 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
            *(undefined4 *)(lVar14 + 0x78) = uVar30;
            if (uVar22 <= uStack000000000000015c) goto LAB_035575f4;
            uVar30 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
            lVar14 = in_stack_000000f0 + unaff_x24 * 0x178;
            *(undefined8 *)(lVar14 + 0x98) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
            *(undefined4 *)(lVar14 + 0xa0) = uVar30;
            uVar30 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
            *(undefined8 *)(lVar14 + 0xc0) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
            *(undefined4 *)(lVar14 + 200) = uVar30;
            uVar30 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
            *(undefined8 *)(lVar14 + 0xe8) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
            *(undefined4 *)(lVar14 + 0xf0) = uVar30;
            *(undefined1 *)(lVar18 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
            if (iVar9 == 0) {
              pcVar15 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
              (*pcVar15)();
            }
            else if (iVar9 == 1) {
              pcVar15 = *(code **)(*unaff_x19 + 0x8c8);
              goto LAB_0355591c;
            }
LAB_03555938:
            if ((*in_stack_00000170 == 0) ||
               (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar18 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
            lVar18 = lVar18 + unaff_x24 * 0x178;
            uVar25 = *(undefined8 *)(lVar18 + 0x11c);
            *(undefined8 *)(lVar18 + 0x11c) =
                 CONCAT44(in_stack_00000140 + (float)((ulong)uVar25 >> 0x20),fVar31 + (float)uVar25)
            ;
            *(float *)(lVar18 + 0x124) = fVar23 + *(float *)(lVar18 + 0x124);
            if ((*in_stack_00000170 == 0) ||
               (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar18 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
            lVar18 = lVar18 + unaff_x24 * 0x178;
            *(ulong *)(lVar18 + 0x110) =
                 CONCAT44(in_stack_00000140 +
                          (float)((ulong)*(undefined8 *)(lVar18 + 0x110) >> 0x20),
                          fVar31 + (float)*(undefined8 *)(lVar18 + 0x110));
            *(float *)(lVar18 + 0x118) = fVar23 + *(float *)(lVar18 + 0x118);
            if ((*in_stack_00000170 == 0) ||
               (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar18 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
            lVar18 = lVar18 + unaff_x24 * 0x178;
            *(ulong *)(lVar18 + 0x128) =
                 CONCAT44(in_stack_00000140 +
                          (float)((ulong)*(undefined8 *)(lVar18 + 0x128) >> 0x20),
                          fVar31 + (float)*(undefined8 *)(lVar18 + 0x128));
            *(float *)(lVar18 + 0x130) = fVar23 + *(float *)(lVar18 + 0x130);
            if ((*in_stack_00000170 == 0) ||
               (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar18 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
            lVar18 = lVar18 + unaff_x24 * 0x178;
            *(float *)(lVar18 + 0x134) = fVar31 + *(float *)(lVar18 + 0x134);
            *(ulong *)(lVar18 + 0x138) =
                 CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar18 + 0x138) >> 0x20),
                          in_stack_00000140 + (float)*(undefined8 *)(lVar18 + 0x138));
            lVar18 = *in_stack_00000170;
            if ((lVar18 == 0) || (lVar14 = *(long *)(lVar18 + 0x38), lVar14 == 0))
            goto LAB_035574b8;
            uVar22 = *(uint *)(lVar14 + 0x18);
            if (uVar22 <= uStack000000000000015c) goto LAB_035575f4;
            lVar21 = lVar14 + unaff_x24 * 0x178;
            param_3 = CONCAT44(fVar31 + (float)((ulong)*(undefined8 *)(lVar21 + 0x140) >> 0x20),
                               fVar31 + (float)*(undefined8 *)(lVar21 + 0x140));
            fVar23 = in_stack_00000140 + *(float *)(lVar21 + 0x150);
            param_4 = (ulong)(uint)fVar23;
            param_5 = CONCAT44(in_stack_00000140 +
                               (float)((ulong)*(undefined8 *)(lVar21 + 0x148) >> 0x20),
                               in_stack_00000140 + (float)*(undefined8 *)(lVar21 + 0x148));
            *(float *)(lVar21 + 0x150) = fVar23;
            *(ulong *)(lVar21 + 0x140) = param_3;
            *(ulong *)(lVar21 + 0x148) = param_5;
            if (in_stack_00000160 == uVar10) {
              uVar10 = *unaff_x20 - 1;
              if (uStack000000000000015c == uVar10) goto LAB_03555b44;
            }
            else {
              lVar18 = *(long *)(lVar18 + 0x50);
              if (lVar18 == 0) goto LAB_035574b8;
              if (*(uint *)(lVar18 + 0x18) <= uVar10) goto LAB_035575f4;
              lVar21 = (long)(int)uVar10;
              lVar16 = lVar18 + lVar21 * 0x5c;
              param_5 = (ulong)(uint)*(float *)(lVar16 + 0x58);
              fVar23 = in_stack_00000140 + *(float *)(lVar16 + 0x54);
              param_3 = (ulong)(uint)fVar23;
              fVar24 = fVar31 + *(float *)(lVar16 + 0x58);
              param_4 = (ulong)(uint)fVar24;
              *(ulong *)(lVar16 + 0x4c) =
                   CONCAT44(in_stack_00000140 +
                            (float)((ulong)*(undefined8 *)(lVar16 + 0x4c) >> 0x20),
                            in_stack_00000140 + (float)*(undefined8 *)(lVar16 + 0x4c));
              *(float *)(lVar16 + 0x54) = fVar23;
              *(float *)(lVar16 + 0x58) = fVar24;
              if (uVar22 <= *(uint *)(lVar16 + 0x34)) goto LAB_035575f4;
              uVar30 = *(undefined4 *)(lVar14 + (long)(int)*(uint *)(lVar16 + 0x34) * 0x178 + 0x11c)
              ;
              lVar18 = lVar18 + lVar21 * 0x5c;
              *(float *)(lVar18 + 0x70) = fVar23;
              *(undefined4 *)(lVar18 + 0x6c) = uVar30;
              lVar18 = *in_stack_00000170;
              if ((lVar18 == 0) || (lVar14 = *(long *)(lVar18 + 0x50), lVar14 == 0))
              goto LAB_035574b8;
              if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_035575f4;
              lVar18 = *(long *)(lVar18 + 0x38);
              if (lVar18 == 0) goto LAB_035574b8;
              uVar10 = *(uint *)(lVar14 + lVar21 * 0x5c + 0x40);
              if (*(uint *)(lVar18 + 0x18) <= uVar10) goto LAB_035575f4;
              lVar14 = lVar14 + lVar21 * 0x5c;
              *(undefined4 *)(lVar14 + 0x74) =
                   *(undefined4 *)(lVar18 + (long)(int)uVar10 * 0x178 + 0x128);
              *(undefined4 *)(lVar14 + 0x78) = *(undefined4 *)(lVar14 + 0x4c);
              uVar10 = *unaff_x20 - 1;
LAB_03555b44:
              if (uStack000000000000015c == uVar10) {
                lVar18 = *in_stack_00000170;
                if ((lVar18 == 0) || (lVar14 = *(long *)(lVar18 + 0x50), lVar14 == 0))
                goto LAB_035574b8;
                if (*(uint *)(lVar14 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
                lVar21 = lVar14 + unaff_x26 * 0x5c;
                param_5 = (ulong)(uint)*(float *)(lVar21 + 0x58);
                param_3 = CONCAT44(in_stack_00000140 +
                                   (float)((ulong)*(undefined8 *)(lVar21 + 0x4c) >> 0x20),
                                   in_stack_00000140 + (float)*(undefined8 *)(lVar21 + 0x4c));
                fVar23 = in_stack_00000140 + *(float *)(lVar21 + 0x54);
                fVar31 = fVar31 + *(float *)(lVar21 + 0x58);
                param_4 = (ulong)(uint)fVar31;
                *(ulong *)(lVar21 + 0x4c) = param_3;
                *(float *)(lVar21 + 0x54) = fVar23;
                *(float *)(lVar21 + 0x58) = fVar31;
                lVar18 = *(long *)(lVar18 + 0x38);
                if (lVar18 == 0) goto LAB_035574b8;
                if (*(uint *)(lVar18 + 0x18) <= *(uint *)(lVar21 + 0x34)) goto LAB_035575f4;
                uVar30 = *(undefined4 *)
                          (lVar18 + (long)(int)*(uint *)(lVar21 + 0x34) * 0x178 + 0x11c);
                lVar14 = lVar14 + unaff_x26 * 0x5c;
                *(float *)(lVar14 + 0x70) = fVar23;
                *(undefined4 *)(lVar14 + 0x6c) = uVar30;
                lVar18 = *in_stack_00000170;
                if ((lVar18 == 0) || (lVar14 = *(long *)(lVar18 + 0x50), lVar14 == 0))
                goto LAB_035574b8;
                if (*(uint *)(lVar14 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
                lVar18 = *(long *)(lVar18 + 0x38);
                if (lVar18 == 0) goto LAB_035574b8;
                uVar10 = *(uint *)(lVar14 + unaff_x26 * 0x5c + 0x40);
                if (*(uint *)(lVar18 + 0x18) <= uVar10) goto LAB_035575f4;
                lVar14 = lVar14 + unaff_x26 * 0x5c;
                *(undefined4 *)(lVar14 + 0x74) =
                     *(undefined4 *)(lVar18 + (long)(int)uVar10 * 0x178 + 0x128);
                *(undefined4 *)(lVar14 + 0x78) = *(undefined4 *)(lVar14 + 0x4c);
              }
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar11 = FUN_026b82c4(in_stack_00000168._4_4_,0);
            unaff_w25 = uStack000000000000015c;
            in_stack_00000120 = unaff_x27;
            unaff_w29 = in_stack_00000160;
            if (((((uVar11 & 1) != 0) || (in_stack_00000168._4_4_ - 0x2010 < 2)) ||
                (in_stack_00000168._4_4_ == 0xad)) || (in_stack_00000168._4_4_ == 0x2d))
            goto LAB_03555c54;
            uVar10 = in_stack_00000160;
            if (bVar5) {
              if (((uVar27 != 1) &&
                  ((int)uStack000000000000015c < (int)(*(uint *)(in_stack_000000f0 + 0x18) - 1))) &&
                 (((int)uStack000000000000015c < *unaff_x20 &&
                  ((in_stack_00000168._4_4_ == 0x2019 || (in_stack_00000168._4_4_ == 0x27)))))) {
                if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c - 1)
                goto LAB_035575f4;
                uVar4 = *(undefined2 *)(in_stack_000000f0 + unaff_x27 + -0x438);
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar11 = FUN_026b82c4(uVar4,0);
                if ((uVar11 & 1) != 0) {
                  if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar27) goto LAB_035575f4;
                  uVar4 = *(undefined2 *)(in_stack_000000f0 + unaff_x27 + -0x148);
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar11 = FUN_026b82c4(uVar4,0);
                  unaff_x23 = in_stack_000000f0;
                  if ((uVar11 & 1) != 0) goto LAB_03555d68;
                }
              }
LAB_03556034:
              if (uStack000000000000015c == *unaff_x20 - 1U) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar11 = FUN_026b82c4(in_stack_00000168._4_4_,0);
                iVar9 = iStack0000000000000128;
                if ((uVar11 & 1) == 0) goto LAB_03556070;
              }
              else {
LAB_03556070:
                iVar9 = uStack000000000000015c - 1;
              }
              lVar18 = *in_stack_00000170;
              if (lVar18 == 0) goto LAB_035574b8;
              lVar14 = *(long *)(lVar18 + 0x40);
              if (lVar14 == 0) goto LAB_035574b8;
              uVar22 = *(uint *)(lVar18 + 0x24);
              iVar8 = *(int *)(lVar14 + 0x18);
              if (iVar8 < (int)(uVar22 + 1)) {
                if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_01ff025c((long *)(lVar18 + 0x40),iVar8 + 1,
                             *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
                lVar18 = *in_stack_00000170;
                if (lVar18 == 0) goto LAB_035574b8;
              }
              lVar18 = *(long *)(lVar18 + 0x40);
              if (lVar18 == 0) goto LAB_035574b8;
              if (*(uint *)(lVar18 + 0x18) <= uVar22) goto LAB_035575f4;
              lVar18 = lVar18 + (long)(int)uVar22 * 0x18;
              *(long **)(lVar18 + 0x20) = unaff_x19;
              *(uint *)(lVar18 + 0x28) = uStack0000000000000158;
              *(int *)(lVar18 + 0x2c) = iVar9;
              *(uint *)(lVar18 + 0x30) = (iVar9 - uStack0000000000000158) + 1;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar18 = unaff_x19[0x6d];
              if (lVar18 == 0) goto LAB_035574b8;
              lVar14 = *(long *)(lVar18 + 0x50);
              *(int *)(lVar18 + 0x24) = *(int *)(lVar18 + 0x24) + 1;
              if (lVar14 == 0) goto LAB_035574b8;
              if (*(uint *)(lVar14 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
              lVar14 = lVar14 + unaff_x26 * 0x5c;
              bVar5 = false;
              iStack00000000000000d4 = iStack00000000000000d4 + 1;
              *(int *)(lVar14 + 0x30) = *(int *)(lVar14 + 0x30) + 1;
              unaff_x23 = in_stack_000000f0;
              uStack000000000000015c = uVar27;
            }
            else {
              if (uVar27 == 1) {
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
                goto LAB_03556034;
              }
LAB_0355686c:
              bVar5 = false;
              unaff_x23 = in_stack_000000f0;
              uStack000000000000015c = uVar27;
            }
            goto LAB_03555d70;
          }
          goto LAB_035575f4;
        }
      }
    }
  }
  goto LAB_035574b8;
LAB_03555c54:
  if (!bVar5) {
    uStack0000000000000158 = uStack000000000000015c;
  }
  unaff_x23 = in_stack_000000f0;
  if (uStack000000000000015c == *unaff_x20 - 1U) goto code_r0x03555c78;
  goto LAB_03555d68;
code_r0x03555c78:
  param_1 = *in_stack_00000170;
  uStack000000000000015c = uVar27;
  if (param_1 == 0) goto LAB_035574b8;
  goto code_r0x03555c80;
  while( true ) {
    lVar18 = *in_stack_00000170;
    lVar14 = lVar14 + 1;
    lVar21 = lVar21 + 0x50;
    if (lVar18 == 0) break;
LAB_03557110:
    uVar11 = lVar14 + 1;
    if ((long)*(int *)(lVar18 + 0x34) <= (long)uVar11) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar18 = *(long *)(lVar18 + 0x60);
    if (lVar18 == 0) break;
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_035575f4;
    FUN_03596a20(lVar18 + lVar21 + 0x70,0);
    lVar18 = unaff_x19[0xe1];
    if (lVar18 == 0) break;
    if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_035575f4;
    uVar19 = *(undefined8 *)(lVar18 + lVar14 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar12 = FUN_036d35a8(uVar19,0,0);
    if ((uVar12 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*in_stack_00000170 == 0) ||
           (lVar18 = *(long *)(*in_stack_00000170 + 0x60), lVar18 == 0)) break;
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar18 + 0x18) <= uVar11) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03596b20(lVar18 + lVar21 + 0x70,1,0);
      }
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar14 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
      if ((*in_stack_00000170 == 0) || (lVar16 = *(long *)(*in_stack_00000170 + 0x60), lVar16 == 0))
      break;
      if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_035575f4;
      if (lVar18 == 0) break;
      FUN_036a460c(lVar18,*(undefined8 *)(lVar16 + lVar21 + 0x80),0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar14 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
      if ((*in_stack_00000170 == 0) || (lVar16 = *(long *)(*in_stack_00000170 + 0x60), lVar16 == 0))
      break;
      if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_035575f4;
      if (lVar18 == 0) break;
      FUN_036a4810(lVar18,*(undefined8 *)(lVar16 + lVar21 + 0x98),0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar14 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
      if ((*in_stack_00000170 == 0) || (lVar16 = *(long *)(*in_stack_00000170 + 0x60), lVar16 == 0))
      break;
      if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_035575f4;
      if (lVar18 == 0) break;
      FUN_036a48bc(lVar18,*(undefined8 *)(lVar16 + lVar21 + 0xa0),0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar14 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
      if ((*in_stack_00000170 == 0) || (lVar16 = *(long *)(*in_stack_00000170 + 0x60), lVar16 == 0))
      break;
      if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_035575f4;
      if (lVar18 == 0) break;
      FUN_036a4e24(lVar18,*(undefined8 *)(lVar16 + lVar21 + 0xa8),0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar14 * 8 + 0x28);
      if ((lVar18 == 0) || (lVar18 = UnityEngine_Material__GetColorArray(lVar18,0), lVar18 == 0))
      break;
      FUN_036aa280(lVar18,0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar14 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = FUN_037b514c(lVar18,0);
      lVar16 = unaff_x19[0xe1];
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar16 = *(long *)(lVar16 + lVar14 * 8 + 0x28);
      if ((lVar16 == 0) || (uVar19 = UnityEngine_Material__GetColorArray(lVar16,0), lVar18 == 0))
      break;
      FUN_0390f3a4(lVar18,uVar19,0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar14 * 8 + 0x28);
      if ((lVar18 == 0) || (lVar18 = FUN_037b514c(lVar18,0), lVar18 == 0)) break;
      FUN_0390eec8(uVar25,param_3,param_4,param_5,lVar18,0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar14 * 8 + 0x28);
      if ((lVar18 == 0) || (lVar18 = FUN_037b514c(lVar18,0), lVar18 == 0)) break;
      FUN_0390ed78(lVar18,uVar27 & 1,0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_035575f4;
      plVar20 = *(long **)(lVar18 + lVar14 * 8 + 0x28);
      uVar10 = (**(code **)(*unaff_x19 + 0x2b8))();
      if (plVar20 == (long *)0x0) break;
      (**(code **)(*plVar20 + 0x2c8))(plVar20,uVar10 & 1,*(undefined8 *)(*plVar20 + 0x2d0));
    }
  }
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


