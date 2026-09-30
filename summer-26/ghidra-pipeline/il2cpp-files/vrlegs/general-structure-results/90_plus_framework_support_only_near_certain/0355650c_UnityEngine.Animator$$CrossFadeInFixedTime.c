/*
FUNCTION_NAME: UnityEngine.Animator$$CrossFadeInFixedTime
ENTRY_POINT: 0355650c
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


void UnityEngine_Animator__CrossFadeInFixedTime
               (undefined1 param_1 [16],ulong param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  char cVar14;
  int in_w8;
  code *pcVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *unaff_x19;
  int *unaff_x20;
  undefined8 uVar19;
  long *plVar20;
  long unaff_x22;
  long unaff_x23;
  long lVar21;
  long unaff_x24;
  long lVar22;
  uint unaff_w25;
  long unaff_x27;
  long *unaff_x28;
  uint uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
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
  undefined8 in_stack_00000118;
  long in_stack_00000120;
  int iStack0000000000000128;
  uint uStack000000000000012c;
  uint in_stack_00000130;
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
  
  uVar29 = uStack000000000000015c;
code_r0x0355650c:
  uStack000000000000015c = uVar29;
  uVar29 = uStack000000000000015c;
  if ((in_stack_00000130 & 1) == 0) {
    if ((*unaff_x28 != 0) && (lVar16 = *(long *)(*unaff_x28 + 0x38), lVar16 != 0)) {
      uVar23 = *(uint *)(lVar16 + 0x18);
LAB_03555da0:
      uStack000000000000015c = uVar29;
      if (uStack000000000000015c - 2 < uVar23) {
        lVar22 = *unaff_x19;
        uVar11 = *(uint *)(lVar16 + unaff_x27 + -0x330);
        uVar24 = *(undefined4 *)(lVar16 + unaff_x27 + -0x2f8);
LAB_035562ec:
        pcVar15 = *(code **)(lVar22 + 0x8d8);
LAB_035562f4:
        param_4 = (ulong)uVar11;
        param_2 = (ulong)(uint)fStack0000000000000070;
        param_3 = (ulong)uStack0000000000000074;
        (*pcVar15)(in_stack_00000078,param_2,param_3,param_4,fStack0000000000000104,0,
                   in_stack_00000088._4_4_,uVar24);
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar16 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar16 = *(long *)puVar7;
        }
LAB_03556348:
        bVar8 = false;
        unaff_s15 = 0.0;
        fStack0000000000000104 = *(float *)(*(long *)(lVar16 + 0xb8) + 0x15a8);
        fStack0000000000000100 = 0.0;
        uVar29 = uStack000000000000015c;
        uVar11 = in_stack_00000160;
LAB_03556364:
        uStack000000000000015c = uVar29;
        if ((*unaff_x28 == 0) || (lVar16 = *(long *)(*unaff_x28 + 0x38), lVar16 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar16 + 0x18) <= unaff_w25) goto LAB_035575f4;
        if (in_stack_00000108 == 0) goto LAB_035574b8;
        uVar29 = *(uint *)(lVar16 + unaff_x24 * unaff_x22 + 400);
        fVar25 = (float)FUN_03776a30(in_stack_00000108 + 0x50,0);
        uVar23 = (uint)in_stack_00000150;
        if ((uVar29 >> 6 & 1) == 0) {
          if ((uStack000000000000012c & 1) != 0) {
            if ((*unaff_x28 == 0) || (lVar16 = *(long *)(*unaff_x28 + 0x38), lVar16 == 0))
            goto LAB_035574b8;
            if (*(uint *)(lVar16 + 0x18) <= uStack000000000000015c - 2) goto LAB_035575f4;
            uVar29 = *(uint *)(lVar16 + unaff_x27 + -0x330);
            fVar26 = *(float *)(lVar16 + unaff_x27 + -0x30c);
            pcVar15 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
            param_4 = (ulong)uVar29;
            param_2 = (ulong)(uint)fStack000000000000009c;
            param_3 = (ulong)uStack0000000000000098;
            (*pcVar15)(in_stack_000000a0,param_2,param_3,param_4,in_stack_000000a8 * fVar25 + fVar26
                       ,0,in_stack_000000a8,in_stack_000000a8);
          }
LAB_03556948:
          uStack000000000000012c = 0;
        }
        else {
          lVar16 = *unaff_x28;
          if ((lVar16 == 0) || (lVar22 = *(long *)(lVar16 + 0x38), lVar22 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar22 + 0x18) <= unaff_w25) goto LAB_035575f4;
          *(undefined4 *)(lVar22 + unaff_x24 * unaff_x22 + 0x174) = in_stack_000017c4;
          if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)uVar11)) ||
             (((int)unaff_x19[0x5c] == 5 &&
              (*(int *)(lVar22 + unaff_x24 * unaff_x22 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
              ((int)uVar23 < (int)unaff_w25)) || ((uStack000000000000012c & 1) != 0 || !bVar1)) {
LAB_035564e8:
            if ((uStack000000000000012c & 1) == 0) goto LAB_03556948;
          }
          else {
            if (unaff_w25 == uVar23) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar12 = FUN_026b97f8(in_stack_00000168._4_4_,0);
              if ((uVar12 & 1) != 0) goto LAB_035564e8;
              lVar16 = *unaff_x28;
              if (lVar16 == 0) goto LAB_035574b8;
            }
            lVar16 = *(long *)(lVar16 + 0x38);
            if (lVar16 == 0) goto LAB_035574b8;
            if (*(uint *)(lVar16 + 0x18) <= unaff_w25) goto LAB_035575f4;
            lVar16 = lVar16 + unaff_x24 * unaff_x22;
            in_stack_00000040 = *(float *)(lVar16 + 0x60);
            in_stack_00000038 = *(float *)(lVar16 + 0x14c);
            param_2 = (ulong)(uint)in_stack_00000038;
            in_stack_000000a0 = *(uint *)(lVar16 + 0x11c);
            param_3 = (ulong)in_stack_000000a0;
            in_stack_000000a8 = *(float *)(lVar16 + 0x160);
            fStack000000000000009c = fVar25 * in_stack_000000a8 + in_stack_00000038;
            uStack0000000000000098 = 0;
          }
          iVar10 = *unaff_x20;
          if (iVar10 == 1) {
LAB_03556628:
            if ((*unaff_x28 != 0) && (lVar16 = *(long *)(*unaff_x28 + 0x38), lVar16 != 0)) {
              if (unaff_w25 < *(uint *)(lVar16 + 0x18)) {
                lVar16 = lVar16 + unaff_x24 * unaff_x22;
                lVar22 = *unaff_x19;
                uVar29 = *(uint *)(lVar16 + 0x128);
                fVar26 = *(float *)(lVar16 + 0x14c);
LAB_03556654:
                pcVar15 = *(code **)(lVar22 + 0x8d8);
                goto LAB_03556914;
              }
              goto LAB_035575f4;
            }
            goto LAB_035574b8;
          }
          if (unaff_w25 == (uint)in_stack_000000e0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar12 = FUN_026b63d8(in_stack_00000168._4_4_,0);
            if ((*unaff_x28 != 0) && (lVar16 = *(long *)(*unaff_x28 + 0x38), lVar16 != 0)) {
              uVar29 = *(uint *)(lVar16 + 0x18);
              if (in_stack_00000168._4_4_ == 0x200b || (uVar12 & 1) != 0) {
                if (uVar29 <= uVar23) goto LAB_035575f4;
              }
              else {
FUN_035568e8:
                in_stack_00000150 = unaff_x24;
                if (uVar29 <= unaff_w25) goto LAB_035575f4;
              }
LAB_035568f0:
              lVar16 = lVar16 + in_stack_00000150 * unaff_x22;
              fVar26 = *(float *)(lVar16 + 0x14c);
              uVar29 = *(uint *)(lVar16 + 0x128);
              pcVar15 = *(code **)(*unaff_x19 + 0x8d8);
              goto LAB_03556914;
            }
            goto LAB_035574b8;
          }
          if ((int)unaff_w25 < iVar10) {
            lVar16 = *unaff_x28;
            if ((lVar16 != 0) && (lVar22 = *(long *)(lVar16 + 0x38), lVar22 != 0)) {
              if (uStack000000000000015c < *(uint *)(lVar22 + 0x18)) {
                if (*(float *)(lVar22 + unaff_x27 + -0x108) == in_stack_00000040) {
                  fVar26 = *(float *)(lVar22 + unaff_x27 + -0x1c);
                  if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  param_2 = (ulong)(uint)in_stack_00000038;
                  uVar12 = FUN_03567bac(in_stack_00000140 + fVar26,param_2,0);
                  if ((uVar12 & 1) != 0) {
                    iVar10 = *unaff_x20;
                    goto LAB_03556744;
                  }
                  lVar16 = *unaff_x28;
                  if (lVar16 == 0) goto LAB_035574b8;
                }
                lVar16 = *(long *)(lVar16 + 0x38);
                if (lVar16 != 0) {
                  uVar29 = *(uint *)(lVar16 + 0x18);
                  if ((int)unaff_w25 <= (int)uVar23) goto FUN_035568e8;
                  if (uVar23 < uVar29) goto LAB_035568f0;
                  goto LAB_035575f4;
                }
                goto LAB_035574b8;
              }
              goto LAB_035575f4;
            }
            goto LAB_035574b8;
          }
LAB_03556744:
          if ((int)unaff_w25 < iVar10) {
            iVar10 = FUN_036d3364(in_stack_00000108,0);
            if (*(uint *)(unaff_x23 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
            lVar16 = *(long *)(unaff_x23 + in_stack_00000120 + -0x130);
            if (lVar16 == 0) goto LAB_035574b8;
            iVar9 = FUN_036d3364(lVar16,0);
            unaff_x27 = in_stack_00000120;
            if (iVar10 != iVar9) goto LAB_03556628;
          }
          if (!bVar1) {
            if ((*unaff_x28 != 0) && (lVar16 = *(long *)(*unaff_x28 + 0x38), lVar16 != 0)) {
              if (uStack000000000000015c - 2 < *(uint *)(lVar16 + 0x18)) {
                lVar22 = *unaff_x19;
                uVar29 = *(uint *)(lVar16 + unaff_x27 + -0x330);
                fVar26 = *(float *)(lVar16 + unaff_x27 + -0x30c);
                goto LAB_03556654;
              }
              goto LAB_035575f4;
            }
            goto LAB_035574b8;
          }
          uStack000000000000012c = 1;
        }
        if ((*unaff_x28 == 0) || (lVar16 = *(long *)(*unaff_x28 + 0x38), lVar16 == 0))
        goto LAB_035574b8;
        uVar29 = (uint)*(undefined8 *)(lVar16 + 0x18);
        if (uVar29 <= unaff_w25) goto LAB_035575f4;
        if ((*(byte *)(lVar16 + unaff_x24 * unaff_x22 + 0x191) >> 1 & 1) == 0) {
          if ((in_stack_00000110._4_4_ & 1) != 0) {
            param_3 = (ulong)uStack00000000000000c0;
            param_2 = (ulong)(uint)fStack00000000000000dc;
            param_4 = (ulong)(uint)in_stack_000000c8;
            (**(code **)(*unaff_x19 + 0x8e8))
                      (fStack00000000000000d8,param_2,param_3,param_4,fStack00000000000000d0,param_3
                      );
          }
LAB_035569b4:
          in_stack_00000110._4_4_ = 0;
        }
        else {
          if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)uVar11)) ||
             (((int)unaff_x19[0x5c] == 5 &&
              (*(int *)(lVar16 + unaff_x24 * unaff_x22 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((in_stack_00000110._4_4_ & 1) == 0) {
            if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
                ((int)uVar23 < (int)unaff_w25)) || (!bVar1)) goto LAB_035569b4;
            if (unaff_w25 == uVar23) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar12 = FUN_026b97f8(in_stack_00000168._4_4_,0);
              if ((uVar12 & 1) != 0) goto LAB_035569b4;
            }
            puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar22 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar22 = *(long *)puVar7;
            }
            unaff_x22 = 0x178;
            if ((*unaff_x28 == 0) || (lVar16 = *(long *)(*unaff_x28 + 0x38), lVar16 == 0))
            goto LAB_035574b8;
            uVar29 = (uint)*(undefined8 *)(lVar16 + 0x18);
            if (uVar29 <= unaff_w25) goto LAB_035575f4;
            lVar22 = *(long *)(lVar22 + 0xb8);
            lVar21 = lVar16 + unaff_x24 * 0x178;
            in_stack_000017b8 = *(undefined8 *)(lVar21 + 0x184);
            in_stack_000017b0 = *(undefined8 *)(lVar21 + 0x17c);
            fStack00000000000000d8 = *(float *)(lVar22 + 0x1598);
            fStack00000000000000dc = *(float *)(lVar22 + 0x159c);
            in_stack_000017c0 = *(float *)(lVar21 + 0x18c);
            in_stack_000000c8 = *(float *)(lVar22 + 0x15a0);
            fStack00000000000000d0 = *(float *)(lVar22 + 0x15a4);
            uStack00000000000000c0 = 0;
          }
          if (uVar29 <= unaff_w25) goto LAB_035575f4;
          lVar16 = lVar16 + unaff_x24 * unaff_x22;
          fVar26 = *(float *)(lVar16 + 0x128);
          fVar30 = *(float *)(lVar16 + 0x188);
          uVar19 = *(undefined8 *)(lVar16 + 0x17c);
          fVar33 = *(float *)(lVar16 + 0x184);
          uVar27 = *(undefined8 *)(lVar16 + 0x184);
          fVar32 = *(float *)(lVar16 + 0x18c);
          fVar25 = *(float *)(lVar16 + 0x11c);
          fVar31 = *(float *)(lVar16 + 0x148);
          fVar28 = *(float *)(lVar16 + 0x150);
          in_stack_00000178 = uVar19;
          fStack0000000000000180 = fVar33;
          fStack0000000000000184 = fVar30;
          in_stack_00000188 = fVar32;
          in_stack_00000190 = in_stack_000017b0;
          in_stack_00000198 = in_stack_000017b8;
          in_stack_000001a0 = in_stack_000017c0;
          uVar12 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
          lVar16 = *(long *)OVRPlugin_Mesh_TypeInfo;
          if ((uVar12 & 1) == 0) {
            if (*(int *)(lVar16 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar16);
            }
            fVar26 = fVar26 + (float)in_stack_000017b8;
            param_3 = (ulong)(uint)fVar26;
            fVar25 = fVar25 - (float)((ulong)in_stack_000017b0 >> 0x20);
            fVar28 = fVar28 - in_stack_000017c0;
            param_2 = (ulong)(uint)fVar28;
            fVar31 = fVar31 + (float)((ulong)in_stack_000017b8 >> 0x20);
            param_4 = (ulong)(uint)fVar31;
            if (fVar25 <= fStack00000000000000d8) {
              fStack00000000000000d8 = fVar25;
            }
            if (fVar28 <= fStack00000000000000dc) {
              fStack00000000000000dc = fVar28;
            }
            if (in_stack_000000c8 <= fVar26) {
              in_stack_000000c8 = fVar26;
            }
            if (fStack00000000000000d0 <= fVar31) {
              fStack00000000000000d0 = fVar31;
            }
          }
          else {
            if (*(int *)(lVar16 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar16);
            }
            fVar25 = (fVar25 + (in_stack_000000c8 - (float)in_stack_000017b8)) * 0.5;
            param_4 = (ulong)(uint)fVar25;
            if (fVar28 <= fStack00000000000000dc) {
              fStack00000000000000dc = fVar28;
            }
            param_2 = (ulong)(uint)fStack00000000000000dc;
            param_3 = (ulong)uStack00000000000000c0;
            if (fStack00000000000000d0 <= fVar31) {
              fStack00000000000000d0 = fVar31;
            }
            (**(code **)(*unaff_x19 + 0x8e8))
                      (fStack00000000000000d8,param_2,param_3,param_4,fStack00000000000000d0,param_3
                      );
            fStack00000000000000dc = fVar28 - fVar32;
            in_stack_000000c8 = fVar26 + fVar33;
            uStack00000000000000c0 = 0;
            fStack00000000000000d0 = fVar31 + fVar30;
            fStack00000000000000d8 = fVar25;
            in_stack_000017b0 = uVar19;
            in_stack_000017b8 = uVar27;
            in_stack_000017c0 = fVar32;
          }
          unaff_x22 = 0x178;
          if (((*unaff_x20 == 1) || (unaff_w25 == (uint)in_stack_000000e0)) ||
             (((int)uVar23 <= (int)unaff_w25 || (!bVar1)))) {
            param_3 = (ulong)uStack00000000000000c0;
            param_2 = (ulong)(uint)fStack00000000000000dc;
            param_4 = (ulong)(uint)in_stack_000000c8;
            (**(code **)(*unaff_x19 + 0x8e8))
                      (fStack00000000000000d8,param_2,param_3,param_4,fStack00000000000000d0,param_3
                      );
            in_stack_00000110._4_4_ = 0;
          }
          else {
            in_stack_00000110._4_4_ = 1;
          }
        }
        puVar7 = OVRPlugin_Media_TypeInfo;
        iVar10 = *unaff_x20;
        uVar29 = uStack000000000000015c + 1;
        unaff_x27 = unaff_x27 + 0x178;
        iStack0000000000000128 = iStack0000000000000128 + 1;
        if (iVar10 <= (int)uStack000000000000015c) {
          lVar16 = *unaff_x28;
          if (lVar16 == 0) goto LAB_035574b8;
          *(int *)(lVar16 + 0x18) = iVar10;
          lVar22 = unaff_x19[0xd4];
          *(uint *)(lVar16 + 0x2c) = uVar11 + 1;
          if (iVar10 < 1 || iStack00000000000000d4 == 0) {
            iStack00000000000000d4 = 1;
          }
          *(int *)(lVar16 + 0x1c) = (int)lVar22;
          *(int *)(lVar16 + 0x24) = iStack00000000000000d4;
          *(int *)(lVar16 + 0x30) = (int)unaff_x19[0x96] + 1;
          if (((int)unaff_x19[99] != 0xff) ||
             (uVar12 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar12 & 1) == 0)) goto LAB_03554724;
          lVar16 = unaff_x19[0xdf];
          if (lVar16 != 0) {
            (**(code **)(lVar16 + 0x18))
                      (*(undefined8 *)(lVar16 + 0x40),*unaff_x28,*(undefined8 *)(lVar16 + 0x28));
          }
          if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
          iVar10 = FUN_03911ee4(unaff_x19[0xe5],0);
          if (iVar10 != 0x19) {
            lVar16 = unaff_x19[0xe5];
            if (lVar16 == 0) goto LAB_035574b8;
            uVar29 = FUN_03911ee4(lVar16,0);
            FUN_03911f20(lVar16,uVar29 | 0x19,0);
          }
          if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
            if ((*unaff_x28 == 0) || (lVar16 = *(long *)(*unaff_x28 + 0x60), lVar16 == 0))
            goto LAB_035574b8;
            if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            if (*(int *)(lVar16 + 0x18) == 0) goto LAB_035575f4;
            FUN_03596b20(lVar16 + 0x20,1,0);
          }
          if (unaff_x19[0x74] == 0) goto LAB_035574b8;
          FUN_036aa790(unaff_x19[0x74],0);
          if ((unaff_x19[0x6d] == 0) || (lVar16 = *(long *)(unaff_x19[0x6d] + 0x60), lVar16 == 0))
          goto LAB_035574b8;
          if (*(int *)(lVar16 + 0x18) == 0) goto LAB_035575f4;
          if (unaff_x19[0x74] == 0) goto LAB_035574b8;
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar16 + 0x30),0);
          if ((unaff_x19[0x6d] == 0) || (lVar16 = *(long *)(unaff_x19[0x6d] + 0x60), lVar16 == 0))
          goto LAB_035574b8;
          if (*(int *)(lVar16 + 0x18) == 0) goto LAB_035575f4;
          if (unaff_x19[0x74] == 0) goto LAB_035574b8;
          FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar16 + 0x48),0);
          if ((unaff_x19[0x6d] == 0) || (lVar16 = *(long *)(unaff_x19[0x6d] + 0x60), lVar16 == 0))
          goto LAB_035574b8;
          if (*(int *)(lVar16 + 0x18) == 0) goto LAB_035575f4;
          if (unaff_x19[0x74] == 0) goto LAB_035574b8;
          FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar16 + 0x50),0);
          if ((unaff_x19[0x6d] == 0) || (lVar16 = *(long *)(unaff_x19[0x6d] + 0x60), lVar16 == 0))
          goto LAB_035574b8;
          if (*(int *)(lVar16 + 0x18) == 0) goto LAB_035575f4;
          if (unaff_x19[0x74] == 0) goto LAB_035574b8;
          FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar16 + 0x58),0);
          if (unaff_x19[0x74] == 0) goto LAB_035574b8;
          FUN_036aa280(unaff_x19[0x74],0);
          if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
          FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
          if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
          uVar27 = FUN_0390ef60(unaff_x19[0xe4],0);
          if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
          uVar29 = FUN_0390ed3c(unaff_x19[0xe4],0);
          lVar16 = *unaff_x28;
          if (lVar16 == 0) goto LAB_035574b8;
          lVar21 = 0;
          lVar22 = 0;
          goto LAB_03557110;
        }
        if (*(uint *)(unaff_x23 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
        if ((*unaff_x28 == 0) || (lVar16 = *(long *)(*unaff_x28 + 0x50), lVar16 == 0))
        goto LAB_035574b8;
        unaff_x24 = (long)(int)uStack000000000000015c;
        lVar22 = unaff_x23 + unaff_x24 * unaff_x22;
        in_stack_00000160 = *(uint *)(lVar22 + 100);
        if (*(uint *)(lVar16 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
        lVar21 = (long)(int)in_stack_00000160;
        lVar16 = lVar16 + lVar21 * 0x5c;
        in_stack_00000108 = *(long *)(lVar22 + 0x38);
        uVar3 = *(ushort *)(lVar22 + 0x20);
        uVar5 = *(uint *)(lVar16 + 0x3c);
        in_stack_000000e0 = (long)(int)uVar5;
        uVar23 = *(uint *)(lVar16 + 0x68);
        iVar2 = *(int *)(lVar16 + 0x20);
        iVar10 = *(int *)(lVar16 + 0x28);
        iVar9 = *(int *)(lVar16 + 0x2c);
        uVar6 = *(uint *)(lVar16 + 0x40);
        in_stack_00000150 = (long)(int)uVar6;
        fVar28 = *(float *)(lVar16 + 0x4c);
        fVar30 = *(float *)(lVar16 + 0x54);
        fVar25 = *(float *)(lVar16 + 0x58);
        fVar34 = *(float *)(lVar16 + 0x5c);
        fVar32 = *(float *)(lVar16 + 0x60);
        fVar33 = *(float *)(lVar16 + 0x6c);
        fVar35 = *(float *)(lVar16 + 0x70);
        fVar26 = *(float *)(lVar16 + 0x74);
        fVar31 = *(float *)(lVar16 + 0x78);
        in_stack_00000168._4_4_ = (uint)uVar3;
        if ((int)uVar23 < 9) {
          switch(uVar23) {
          case 1:
            if ((char)unaff_x19[0x1e] == '\0') {
              in_stack_000000f8._4_4_ = fVar32 + 0.0;
            }
            else {
              in_stack_000000f8._4_4_ = 0.0 - fVar25;
            }
            break;
          case 2:
LAB_03555018:
            in_stack_000000f8._4_4_ = (fVar32 + fVar34 * 0.5) - fVar25 * 0.5;
            break;
          default:
            goto switchD_03554f58_caseD_3;
          case 4:
            in_stack_000000f8._4_4_ = (fVar34 + fVar32) - fVar25;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000f8._4_4_ = fVar34 + fVar32;
            }
            break;
          case 8:
            goto switchD_03554f58_caseD_8;
          }
LAB_03555088:
          in_stack_000000e8 = 0;
        }
        else if (uVar23 == 0x10) {
switchD_03554f58_caseD_8:
          if (uVar3 < 0xad) {
            if ((uVar3 != 3) && (uVar3 != 10)) {
LAB_03554fac:
              if (*(uint *)(unaff_x23 + 0x18) <= uVar5) goto LAB_035575f4;
              uVar4 = *(undefined2 *)(in_stack_000000f0 + in_stack_000000e0 * 0x178 + 0x20);
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar12 = FUN_026b8cc4(uVar4,0);
              if ((uVar12 & 1) == 0) {
                bVar1 = (int)in_stack_00000160 < (int)unaff_x19[0x95];
              }
              else {
                bVar1 = false;
              }
              if ((fVar25 <= fVar34) && (!bVar1 && uVar23 >> 4 == 0)) {
                in_stack_000000f8._4_4_ = fVar32;
                if ((char)unaff_x19[0x1e] != '\0') {
                  in_stack_000000f8._4_4_ = fVar34 + fVar32;
                }
                goto LAB_03555088;
              }
              if (((uVar29 == 1) || (in_stack_00000160 != uVar11)) ||
                 (uStack000000000000015c == *(uint *)((long)unaff_x19 + 0x324))) {
                in_stack_000000f8._4_4_ = fVar32;
                if ((char)unaff_x19[0x1e] != '\0') {
                  in_stack_000000f8._4_4_ = fVar34 + fVar32;
                }
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uStack0000000000000028 = FUN_026b97f8(in_stack_00000168._4_4_,0);
                in_stack_000000e8 = 0;
              }
              else {
                cVar14 = (char)unaff_x19[0x1e];
                fVar32 = -fVar25;
                if (cVar14 != '\0') {
                  fVar32 = fVar25;
                }
                if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar5) goto LAB_035575f4;
                iVar9 = (int)*(char *)(in_stack_000000f0 + in_stack_000000e0 * 0x178 + 0x194) +
                        (-iVar2 - (uStack0000000000000028 & 1)) + iVar9 + -1;
                if (iVar9 < 1) {
                  fVar25 = 1.0;
                  iVar9 = 1;
                }
                else {
                  fVar25 = *(float *)((long)unaff_x19 + 0x2dc);
                }
                if (in_stack_00000168._4_4_ == 9) {
LAB_03556e74:
                  fVar25 = 1.0 - fVar25;
                }
                else {
                  if (in_stack_00000168._4_4_ != 0xa0) {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar12 = FUN_026b97f8(in_stack_00000168._4_4_,0);
                    cVar14 = (char)unaff_x19[0x1e];
                    if ((uVar12 & 1) != 0) goto LAB_03556e74;
                  }
                  iVar9 = (iVar2 - (~uStack0000000000000028 & 1)) + iVar10;
                }
                fVar25 = ((fVar34 + fVar32) * fVar25) / (float)iVar9;
                if (cVar14 == '\0') {
                  in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar25;
                  in_stack_000000e8 =
                       CONCAT44((float)((ulong)in_stack_000000e8 >> 0x20) + 0.0,
                                (float)in_stack_000000e8 + 0.0);
                }
                else {
                  in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar25;
                }
              }
            }
          }
          else if (((uVar3 != 0xad) && (uVar3 != 0x200b)) && (uVar3 != 0x2060)) goto LAB_03554fac;
        }
        else if (uVar23 == 0x20) {
          fVar25 = fVar33 + fVar26;
          goto LAB_03555018;
        }
switchD_03554f58_caseD_3:
        uVar23 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
        if (uVar23 <= uStack000000000000015c) goto LAB_035575f4;
        lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
        fVar32 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
        in_stack_00000140 = (float)in_stack_000000b8 + (float)in_stack_000000e8;
        fVar25 = (float)((ulong)in_stack_000000b8 >> 0x20) +
                 (float)((ulong)in_stack_000000e8 >> 0x20);
        if (*(char *)(lVar16 + 0x194) == '\0') goto LAB_03555938;
        iVar10 = *(int *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x2c);
        if (iVar10 != 0) goto LAB_0355574c;
        fVar34 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)in_stack_00000160,1.0);
        switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
        case 0:
          lVar22 = in_stack_000000f0 + unaff_x24 * 0x178;
          *(undefined4 *)(lVar22 + 0x84) = 0;
          *(undefined4 *)(lVar22 + 0xac) = 0;
          *(undefined4 *)(lVar22 + 0xd4) = 0x3f800000;
          fVar34 = 1.0;
          break;
        case 1:
          fVar31 = *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x70);
          if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
            lVar22 = in_stack_000000f0 + unaff_x24 * 0x178;
            fVar26 = (in_stack_000000f8._4_4_ + fVar31) - *(float *)(in_stack_00000080 + 0x230);
            fVar31 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
            goto LAB_035551cc;
          }
          lVar22 = in_stack_000000f0 + unaff_x24 * 0x178;
          fVar26 = fVar26 - fVar33;
          *(float *)(lVar22 + 0x84) = fVar34 + (fVar31 - fVar33) / fVar26;
          *(float *)(lVar22 + 0xac) = fVar34 + (*(float *)(lVar22 + 0x98) - fVar33) / fVar26;
          *(float *)(lVar22 + 0xd4) = fVar34 + (*(float *)(lVar22 + 0xc0) - fVar33) / fVar26;
          fVar34 = fVar34 + (*(float *)(lVar22 + 0xe8) - fVar33) / fVar26;
          break;
        case 2:
          lVar22 = in_stack_000000f0 + unaff_x24 * 0x178;
          fVar31 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
          fVar26 = (in_stack_000000f8._4_4_ + *(float *)(lVar22 + 0x70)) -
                   *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
          *(float *)(lVar22 + 0x84) = fVar34 + fVar26 / fVar31;
          *(float *)(lVar22 + 0xac) =
               fVar34 + ((in_stack_000000f8._4_4_ + *(float *)(lVar22 + 0x98)) -
                        *(float *)(in_stack_00000080 + 0x230)) /
                        (*(float *)(in_stack_00000080 + 0x238) -
                        *(float *)(in_stack_00000080 + 0x230));
          *(float *)(lVar22 + 0xd4) =
               fVar34 + ((in_stack_000000f8._4_4_ + *(float *)(lVar22 + 0xc0)) -
                        *(float *)(in_stack_00000080 + 0x230)) /
                        (*(float *)(in_stack_00000080 + 0x238) -
                        *(float *)(in_stack_00000080 + 0x230));
          fVar34 = fVar34 + ((in_stack_000000f8._4_4_ + *(float *)(lVar22 + 0xe8)) -
                            *(float *)(in_stack_00000080 + 0x230)) /
                            (*(float *)(in_stack_00000080 + 0x238) -
                            *(float *)(in_stack_00000080 + 0x230));
          break;
        case 3:
          switch((int)unaff_x19[0x62]) {
          case 0:
            lVar22 = in_stack_000000f0 + unaff_x24 * 0x178;
            *(undefined4 *)(lVar22 + 0x88) = 0;
            *(undefined4 *)(lVar22 + 0xb0) = 0x3f800000;
            *(undefined4 *)(lVar22 + 0xd8) = 0;
            *(undefined4 *)(lVar22 + 0x100) = 0x3f800000;
            break;
          case 1:
            lVar22 = in_stack_000000f0 + unaff_x24 * 0x178;
            fVar31 = fVar31 - fVar35;
            fVar26 = fVar34 + (*(float *)(lVar22 + 0x74) - fVar35) / fVar31;
            fVar31 = fVar34 + (*(float *)(lVar22 + 0x9c) - fVar35) / fVar31;
            *(float *)(lVar22 + 0x88) = fVar26;
            *(float *)(lVar22 + 0xb0) = fVar31;
            *(float *)(lVar22 + 0xd8) = fVar26;
            *(float *)(lVar22 + 0x100) = fVar31;
            break;
          case 2:
            lVar22 = in_stack_000000f0 + unaff_x24 * 0x178;
            fVar26 = fVar34 + (*(float *)(lVar22 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                              (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
            *(float *)(lVar22 + 0x88) = fVar26;
            fVar31 = *(float *)(unaff_x19 + 0x9c);
            fVar33 = *(float *)(unaff_x19 + 0x9d);
            *(float *)(lVar22 + 0xd8) = fVar26;
            fVar26 = fVar34 + (*(float *)(lVar22 + 0x9c) - fVar31) / (fVar33 - fVar31);
            *(float *)(lVar22 + 0xb0) = fVar26;
            *(float *)(lVar22 + 0x100) = fVar26;
            break;
          case 3:
            if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
            uVar23 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
          }
          if (uVar23 <= uStack000000000000015c) goto LAB_035575f4;
          lVar22 = in_stack_000000f0 + unaff_x24 * 0x178;
          fVar26 = *(float *)(lVar22 + 0x15c);
          fVar31 = (1.0 - (*(float *)(lVar22 + 0x88) + *(float *)(lVar22 + 0xb0)) * fVar26) * 0.5;
          fVar33 = fVar34 + *(float *)(lVar22 + 0x88) * fVar26 + fVar31;
          fVar34 = fVar34 + fVar31 + *(float *)(lVar22 + 0xb0) * fVar26;
          *(float *)(lVar22 + 0x84) = fVar33;
          *(float *)(lVar22 + 0xac) = fVar33;
          *(float *)(lVar22 + 0xd4) = fVar34;
          break;
        default:
          goto switchD_0355512c_default;
        }
        *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xfc) = fVar34;
switchD_0355512c_default:
        switch((int)unaff_x19[0x62]) {
        case 0:
          if (uVar23 <= uStack000000000000015c) goto LAB_035575f4;
          lVar22 = in_stack_000000f0 + unaff_x24 * 0x178;
          *(undefined4 *)(lVar22 + 0x88) = 0;
          *(undefined4 *)(lVar22 + 0xb0) = 0x3f800000;
          *(undefined4 *)(lVar22 + 0xd8) = 0x3f800000;
          *(undefined4 *)(lVar22 + 0x100) = 0;
          break;
        case 1:
          if (uStack000000000000015c < uVar23) {
            lVar22 = in_stack_000000f0 + unaff_x24 * 0x178;
            fVar28 = fVar28 - fVar30;
            fVar26 = (*(float *)(lVar22 + 0x74) - fVar30) / fVar28;
            fVar28 = (*(float *)(lVar22 + 0x9c) - fVar30) / fVar28;
            *(float *)(lVar22 + 0x88) = fVar26;
            goto UnityEngine_Animator__set_stabilizeFeet;
          }
          goto LAB_035575f4;
        case 2:
          if (uVar23 <= uStack000000000000015c) goto LAB_035575f4;
          lVar22 = in_stack_000000f0 + unaff_x24 * 0x178;
          fVar26 = (*(float *)(lVar22 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                   (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
          *(float *)(lVar22 + 0x88) = fVar26;
          fVar28 = (*(float *)(lVar22 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
                   (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
          *(float *)(lVar22 + 0xb0) = fVar28;
          *(float *)(lVar22 + 0xd8) = fVar28;
          *(float *)(lVar22 + 0x100) = fVar26;
          break;
        case 3:
          if (uVar23 <= uStack000000000000015c) goto LAB_035575f4;
          lVar22 = in_stack_000000f0 + unaff_x24 * 0x178;
          fVar31 = *(float *)(lVar22 + 0x15c);
          fVar28 = (1.0 - (*(float *)(lVar22 + 0x84) + *(float *)(lVar22 + 0xd4)) / fVar31) * 0.5;
          fVar26 = *(float *)(lVar22 + 0x84) / fVar31 + fVar28;
          fVar28 = fVar28 + *(float *)(lVar22 + 0xd4) / fVar31;
          *(float *)(lVar22 + 0x88) = fVar26;
          *(float *)(lVar22 + 0xb0) = fVar28;
          *(float *)(lVar22 + 0x100) = fVar26;
          *(float *)(lVar22 + 0xd8) = fVar28;
        }
        if (uVar23 <= uStack000000000000015c) goto LAB_035575f4;
        lVar22 = in_stack_000000f0 + unaff_x24 * 0x178;
        unaff_s14 = *(float *)(lVar22 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
        if ((*(char *)(lVar22 + 0x5c) == '\0') &&
           ((*(byte *)(in_stack_000000f0 + unaff_x24 * 0x178 + 400) & 1) != 0)) {
          unaff_s14 = -unaff_s14;
        }
        fVar26 = in_stack_00000050._4_4_;
        if (((in_stack_00000058 == 2) || (fVar26 = fStack0000000000000034, in_stack_00000058 == 1))
           || (fVar26 = fStack000000000000002c, in_stack_00000058 == 0)) {
          unaff_s14 = fVar26 * unaff_s14;
        }
        lVar22 = in_stack_000000f0 + unaff_x24 * 0x178;
        fVar28 = *(float *)(lVar22 + 0x88);
        fVar31 = *(float *)(lVar22 + 0x84);
        fVar26 = -2.1474836e+09;
        if (fVar31 != INFINITY) {
          fVar26 = (float)(int)fVar31;
        }
        fVar33 = *(float *)(lVar22 + 0xd4);
        fVar34 = *(float *)(lVar22 + 0xd8);
        fVar30 = -2.1474836e+09;
        if (fVar28 != INFINITY) {
          fVar30 = (float)(int)fVar28;
        }
        uVar24 = FUN_03591d3c(fVar31 - fVar26,fVar28 - fVar30);
        *(undefined4 *)(lVar22 + 0x84) = uVar24;
        if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
        fVar34 = fVar34 - fVar30;
        *(float *)(lVar22 + 0x88) = unaff_s14;
        uVar24 = FUN_03591d3c(fVar31 - fVar26,fVar34);
        *(undefined4 *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xac) = uVar24;
        if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
        fVar33 = fVar33 - fVar26;
        *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xb0) = unaff_s14;
        fVar26 = (float)FUN_03591d3c(fVar33,fVar34);
        *(float *)(lVar22 + 0xd4) = fVar26;
        if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
        *(float *)(lVar22 + 0xd8) = unaff_s14;
        uVar24 = FUN_03591d3c(fVar33,fVar28 - fVar30);
        *(undefined4 *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xfc) = uVar24;
        uVar23 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
        if (uVar23 <= uStack000000000000015c) goto LAB_035575f4;
        *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x100) = unaff_s14;
        unaff_x20 = in_stack_00000048;
LAB_0355574c:
        if (((int)uStack000000000000015c < (int)unaff_x19[0x65]) &&
           (iStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
          if (((int)in_stack_00000160 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
            if (uVar23 <= uStack000000000000015c) goto LAB_035575f4;
            lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
            *(ulong *)(lVar16 + 0x70) =
                 CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar16 + 0x70) >> 0x20)
                          ,fVar32 + (float)*(undefined8 *)(lVar16 + 0x70));
            *(float *)(lVar16 + 0x78) = fVar25 + *(float *)(lVar16 + 0x78);
            *(ulong *)(lVar16 + 0x98) =
                 CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar16 + 0x98) >> 0x20)
                          ,fVar32 + (float)*(undefined8 *)(lVar16 + 0x98));
            *(float *)(lVar16 + 0xa0) = fVar25 + *(float *)(lVar16 + 0xa0);
            *(ulong *)(lVar16 + 0xc0) =
                 CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar16 + 0xc0) >> 0x20)
                          ,fVar32 + (float)*(undefined8 *)(lVar16 + 0xc0));
            *(float *)(lVar16 + 200) = fVar25 + *(float *)(lVar16 + 200);
            *(ulong *)(lVar16 + 0xe8) =
                 CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar16 + 0xe8) >> 0x20)
                          ,fVar32 + (float)*(undefined8 *)(lVar16 + 0xe8));
            *(float *)(lVar16 + 0xf0) = fVar25 + *(float *)(lVar16 + 0xf0);
            goto UnityEngine_Animator__GetAnimatorClipInfoCount;
          }
          if (((int)in_stack_00000160 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
            if (uStack000000000000015c < uVar23) {
              if (*(int *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x68) == iStack0000000000000030)
              {
                lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
                *(ulong *)(lVar16 + 0x70) =
                     CONCAT44(in_stack_00000140 +
                              (float)((ulong)*(undefined8 *)(lVar16 + 0x70) >> 0x20),
                              fVar32 + (float)*(undefined8 *)(lVar16 + 0x70));
                *(float *)(lVar16 + 0x78) = fVar25 + *(float *)(lVar16 + 0x78);
                *(ulong *)(lVar16 + 0x98) =
                     CONCAT44(in_stack_00000140 +
                              (float)((ulong)*(undefined8 *)(lVar16 + 0x98) >> 0x20),
                              fVar32 + (float)*(undefined8 *)(lVar16 + 0x98));
                *(float *)(lVar16 + 0xa0) = fVar25 + *(float *)(lVar16 + 0xa0);
                *(ulong *)(lVar16 + 0xc0) =
                     CONCAT44(in_stack_00000140 +
                              (float)((ulong)*(undefined8 *)(lVar16 + 0xc0) >> 0x20),
                              fVar32 + (float)*(undefined8 *)(lVar16 + 0xc0));
                *(float *)(lVar16 + 200) = fVar25 + *(float *)(lVar16 + 200);
                *(ulong *)(lVar16 + 0xe8) =
                     CONCAT44(in_stack_00000140 +
                              (float)((ulong)*(undefined8 *)(lVar16 + 0xe8) >> 0x20),
                              fVar32 + (float)*(undefined8 *)(lVar16 + 0xe8));
                *(float *)(lVar16 + 0xf0) = fVar25 + *(float *)(lVar16 + 0xf0);
                goto UnityEngine_Animator__GetAnimatorClipInfoCount;
              }
              goto UnityEngine_Animator__GetAnimatorTransitionInfo;
            }
            goto LAB_035575f4;
          }
        }
UnityEngine_Animator__GetAnimatorTransitionInfo:
        if (uVar23 <= uStack000000000000015c) goto LAB_035575f4;
        if (DAT_0411f172 == '\0') {
          FUN_01ab69ac(PTR_DAT_03cbded8);
          DAT_0411f172 = '\x01';
          uVar23 = *(uint *)(in_stack_000000f0 + 0x18);
        }
        puVar7 = PTR_DAT_03cbded8;
        uVar24 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
        lVar22 = in_stack_000000f0 + unaff_x24 * 0x178;
        *(undefined8 *)(lVar22 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
        *(undefined4 *)(lVar22 + 0x78) = uVar24;
        if (uVar23 <= uStack000000000000015c) goto LAB_035575f4;
        uVar24 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
        lVar22 = in_stack_000000f0 + unaff_x24 * 0x178;
        *(undefined8 *)(lVar22 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
        *(undefined4 *)(lVar22 + 0xa0) = uVar24;
        uVar24 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
        *(undefined8 *)(lVar22 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
        *(undefined4 *)(lVar22 + 200) = uVar24;
        uVar24 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
        *(undefined8 *)(lVar22 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
        *(undefined4 *)(lVar22 + 0xf0) = uVar24;
        *(undefined1 *)(lVar16 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
        if (iVar10 == 0) {
          pcVar15 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
          (*pcVar15)();
        }
        else if (iVar10 == 1) {
          pcVar15 = *(code **)(*unaff_x19 + 0x8c8);
          goto LAB_0355591c;
        }
LAB_03555938:
        if ((*in_stack_00000170 == 0) ||
           (lVar16 = *(long *)(*in_stack_00000170 + 0x38), lVar16 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar16 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
        lVar16 = lVar16 + unaff_x24 * 0x178;
        uVar27 = *(undefined8 *)(lVar16 + 0x11c);
        *(undefined8 *)(lVar16 + 0x11c) =
             CONCAT44(in_stack_00000140 + (float)((ulong)uVar27 >> 0x20),fVar32 + (float)uVar27);
        *(float *)(lVar16 + 0x124) = fVar25 + *(float *)(lVar16 + 0x124);
        if ((*in_stack_00000170 == 0) ||
           (lVar16 = *(long *)(*in_stack_00000170 + 0x38), lVar16 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar16 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
        lVar16 = lVar16 + unaff_x24 * 0x178;
        *(ulong *)(lVar16 + 0x110) =
             CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar16 + 0x110) >> 0x20),
                      fVar32 + (float)*(undefined8 *)(lVar16 + 0x110));
        *(float *)(lVar16 + 0x118) = fVar25 + *(float *)(lVar16 + 0x118);
        if ((*in_stack_00000170 == 0) ||
           (lVar16 = *(long *)(*in_stack_00000170 + 0x38), lVar16 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar16 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
        lVar16 = lVar16 + unaff_x24 * 0x178;
        *(ulong *)(lVar16 + 0x128) =
             CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar16 + 0x128) >> 0x20),
                      fVar32 + (float)*(undefined8 *)(lVar16 + 0x128));
        *(float *)(lVar16 + 0x130) = fVar25 + *(float *)(lVar16 + 0x130);
        if ((*in_stack_00000170 == 0) ||
           (lVar16 = *(long *)(*in_stack_00000170 + 0x38), lVar16 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar16 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
        lVar16 = lVar16 + unaff_x24 * 0x178;
        *(float *)(lVar16 + 0x134) = fVar32 + *(float *)(lVar16 + 0x134);
        *(ulong *)(lVar16 + 0x138) =
             CONCAT44(fVar25 + (float)((ulong)*(undefined8 *)(lVar16 + 0x138) >> 0x20),
                      in_stack_00000140 + (float)*(undefined8 *)(lVar16 + 0x138));
        lVar16 = *in_stack_00000170;
        if ((lVar16 == 0) || (lVar22 = *(long *)(lVar16 + 0x38), lVar22 == 0)) goto LAB_035574b8;
        uVar23 = *(uint *)(lVar22 + 0x18);
        if (uVar23 <= uStack000000000000015c) goto LAB_035575f4;
        lVar17 = lVar22 + unaff_x24 * 0x178;
        param_2 = CONCAT44(fVar32 + (float)((ulong)*(undefined8 *)(lVar17 + 0x140) >> 0x20),
                           fVar32 + (float)*(undefined8 *)(lVar17 + 0x140));
        fVar25 = in_stack_00000140 + *(float *)(lVar17 + 0x150);
        param_3 = (ulong)(uint)fVar25;
        param_4 = CONCAT44(in_stack_00000140 +
                           (float)((ulong)*(undefined8 *)(lVar17 + 0x148) >> 0x20),
                           in_stack_00000140 + (float)*(undefined8 *)(lVar17 + 0x148));
        *(float *)(lVar17 + 0x150) = fVar25;
        *(ulong *)(lVar17 + 0x140) = param_2;
        *(ulong *)(lVar17 + 0x148) = param_4;
        if (in_stack_00000160 == uVar11) {
          uVar11 = *unaff_x20 - 1;
          if (uStack000000000000015c == uVar11) goto LAB_03555b44;
        }
        else {
          lVar16 = *(long *)(lVar16 + 0x50);
          if (lVar16 == 0) goto LAB_035574b8;
          if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_035575f4;
          lVar17 = (long)(int)uVar11;
          lVar18 = lVar16 + lVar17 * 0x5c;
          param_4 = (ulong)(uint)*(float *)(lVar18 + 0x58);
          fVar25 = in_stack_00000140 + *(float *)(lVar18 + 0x54);
          param_2 = (ulong)(uint)fVar25;
          fVar26 = fVar32 + *(float *)(lVar18 + 0x58);
          param_3 = (ulong)(uint)fVar26;
          *(ulong *)(lVar18 + 0x4c) =
               CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar18 + 0x4c) >> 0x20),
                        in_stack_00000140 + (float)*(undefined8 *)(lVar18 + 0x4c));
          *(float *)(lVar18 + 0x54) = fVar25;
          *(float *)(lVar18 + 0x58) = fVar26;
          if (uVar23 <= *(uint *)(lVar18 + 0x34)) goto LAB_035575f4;
          uVar24 = *(undefined4 *)(lVar22 + (long)(int)*(uint *)(lVar18 + 0x34) * 0x178 + 0x11c);
          lVar16 = lVar16 + lVar17 * 0x5c;
          *(float *)(lVar16 + 0x70) = fVar25;
          *(undefined4 *)(lVar16 + 0x6c) = uVar24;
          lVar16 = *in_stack_00000170;
          if ((lVar16 == 0) || (lVar22 = *(long *)(lVar16 + 0x50), lVar22 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar22 + 0x18) <= uVar11) goto LAB_035575f4;
          lVar16 = *(long *)(lVar16 + 0x38);
          if (lVar16 == 0) goto LAB_035574b8;
          uVar11 = *(uint *)(lVar22 + lVar17 * 0x5c + 0x40);
          if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_035575f4;
          lVar22 = lVar22 + lVar17 * 0x5c;
          *(undefined4 *)(lVar22 + 0x74) =
               *(undefined4 *)(lVar16 + (long)(int)uVar11 * 0x178 + 0x128);
          *(undefined4 *)(lVar22 + 0x78) = *(undefined4 *)(lVar22 + 0x4c);
          uVar11 = *unaff_x20 - 1;
LAB_03555b44:
          if (uStack000000000000015c == uVar11) {
            lVar16 = *in_stack_00000170;
            if ((lVar16 == 0) || (lVar22 = *(long *)(lVar16 + 0x50), lVar22 == 0))
            goto LAB_035574b8;
            if (*(uint *)(lVar22 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
            lVar17 = lVar22 + lVar21 * 0x5c;
            param_4 = (ulong)(uint)*(float *)(lVar17 + 0x58);
            param_2 = CONCAT44(in_stack_00000140 +
                               (float)((ulong)*(undefined8 *)(lVar17 + 0x4c) >> 0x20),
                               in_stack_00000140 + (float)*(undefined8 *)(lVar17 + 0x4c));
            fVar25 = in_stack_00000140 + *(float *)(lVar17 + 0x54);
            fVar32 = fVar32 + *(float *)(lVar17 + 0x58);
            param_3 = (ulong)(uint)fVar32;
            *(ulong *)(lVar17 + 0x4c) = param_2;
            *(float *)(lVar17 + 0x54) = fVar25;
            *(float *)(lVar17 + 0x58) = fVar32;
            lVar16 = *(long *)(lVar16 + 0x38);
            if (lVar16 == 0) goto LAB_035574b8;
            if (*(uint *)(lVar16 + 0x18) <= *(uint *)(lVar17 + 0x34)) goto LAB_035575f4;
            uVar24 = *(undefined4 *)(lVar16 + (long)(int)*(uint *)(lVar17 + 0x34) * 0x178 + 0x11c);
            lVar22 = lVar22 + lVar21 * 0x5c;
            *(float *)(lVar22 + 0x70) = fVar25;
            *(undefined4 *)(lVar22 + 0x6c) = uVar24;
            lVar16 = *in_stack_00000170;
            if ((lVar16 == 0) || (lVar22 = *(long *)(lVar16 + 0x50), lVar22 == 0))
            goto LAB_035574b8;
            if (*(uint *)(lVar22 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
            lVar16 = *(long *)(lVar16 + 0x38);
            if (lVar16 == 0) goto LAB_035574b8;
            uVar11 = *(uint *)(lVar22 + lVar21 * 0x5c + 0x40);
            if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_035575f4;
            lVar22 = lVar22 + lVar21 * 0x5c;
            *(undefined4 *)(lVar22 + 0x74) =
                 *(undefined4 *)(lVar16 + (long)(int)uVar11 * 0x178 + 0x128);
            *(undefined4 *)(lVar22 + 0x78) = *(undefined4 *)(lVar22 + 0x4c);
          }
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar12 = FUN_026b82c4(in_stack_00000168._4_4_,0);
        if (((((uVar12 & 1) == 0) && (1 < in_stack_00000168._4_4_ - 0x2010)) &&
            (in_stack_00000168._4_4_ != 0xad)) && (in_stack_00000168._4_4_ != 0x2d)) {
          if ((in_stack_00000118._4_4_ & 1) == 0) {
            if (uVar29 != 1) {
LAB_0355686c:
              in_stack_00000118._4_4_ = 0;
              goto LAB_03555d70;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar12 = FUN_026b81f8(in_stack_00000168._4_4_,0);
            if ((uVar12 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar12 = FUN_026b63d8(in_stack_00000168._4_4_,0);
              if (((in_stack_00000168._4_4_ != 0x200b) && ((uVar12 & 1) == 0)) && (*unaff_x20 != 1))
              goto LAB_0355686c;
            }
          }
          else if (((uVar29 != 1) &&
                   ((int)uStack000000000000015c < (int)(*(uint *)(in_stack_000000f0 + 0x18) - 1)))
                  && (((int)uStack000000000000015c < *unaff_x20 &&
                      ((in_stack_00000168._4_4_ == 0x2019 || (in_stack_00000168._4_4_ == 0x27))))))
          {
            if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c - 1)
            goto LAB_035575f4;
            uVar4 = *(undefined2 *)(in_stack_000000f0 + unaff_x27 + -0x438);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar12 = FUN_026b82c4(uVar4,0);
            if ((uVar12 & 1) != 0) {
              if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar29) goto LAB_035575f4;
              uVar4 = *(undefined2 *)(in_stack_000000f0 + unaff_x27 + -0x148);
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar12 = FUN_026b82c4(uVar4,0);
              if ((uVar12 & 1) != 0) goto LAB_03555d68;
            }
          }
          if (uStack000000000000015c == *unaff_x20 - 1U) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar12 = FUN_026b82c4(in_stack_00000168._4_4_,0);
            iVar10 = iStack0000000000000128;
            if ((uVar12 & 1) == 0) goto LAB_03556070;
          }
          else {
LAB_03556070:
            iVar10 = uStack000000000000015c - 1;
          }
          lVar16 = *in_stack_00000170;
          if (lVar16 == 0) goto LAB_035574b8;
          lVar22 = *(long *)(lVar16 + 0x40);
          if (lVar22 == 0) goto LAB_035574b8;
          uVar11 = *(uint *)(lVar16 + 0x24);
          iVar9 = *(int *)(lVar22 + 0x18);
          if (iVar9 < (int)(uVar11 + 1)) {
            if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_01ff025c((long *)(lVar16 + 0x40),iVar9 + 1,
                         *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
            lVar16 = *in_stack_00000170;
            if (lVar16 == 0) goto LAB_035574b8;
          }
          lVar16 = *(long *)(lVar16 + 0x40);
          if (lVar16 == 0) goto LAB_035574b8;
          if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_035575f4;
          lVar16 = lVar16 + (long)(int)uVar11 * 0x18;
          *(long **)(lVar16 + 0x20) = unaff_x19;
          *(uint *)(lVar16 + 0x28) = uStack0000000000000158;
          *(int *)(lVar16 + 0x2c) = iVar10;
          *(uint *)(lVar16 + 0x30) = (iVar10 - uStack0000000000000158) + 1;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          lVar16 = unaff_x19[0x6d];
          if (lVar16 == 0) goto LAB_035574b8;
          lVar22 = *(long *)(lVar16 + 0x50);
          *(int *)(lVar16 + 0x24) = *(int *)(lVar16 + 0x24) + 1;
          if (lVar22 == 0) goto LAB_035574b8;
          if (*(uint *)(lVar22 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
          lVar22 = lVar22 + lVar21 * 0x5c;
          in_stack_00000118._4_4_ = 0;
          iStack00000000000000d4 = iStack00000000000000d4 + 1;
          *(int *)(lVar22 + 0x30) = *(int *)(lVar22 + 0x30) + 1;
        }
        else {
          if ((in_stack_00000118._4_4_ & 1) == 0) {
            uStack0000000000000158 = uStack000000000000015c;
          }
          if (uStack000000000000015c == *unaff_x20 - 1U) {
            lVar16 = *in_stack_00000170;
            if (lVar16 == 0) goto LAB_035574b8;
            lVar22 = *(long *)(lVar16 + 0x40);
            if (lVar22 == 0) goto LAB_035574b8;
            uVar11 = *(uint *)(lVar16 + 0x24);
            iVar10 = *(int *)(lVar22 + 0x18);
            if (iVar10 < (int)(uVar11 + 1)) {
              if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_01ff025c((long *)(lVar16 + 0x40),iVar10 + 1,
                           *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
              lVar16 = *in_stack_00000170;
              if (lVar16 == 0) goto LAB_035574b8;
            }
            lVar16 = *(long *)(lVar16 + 0x40);
            if (lVar16 == 0) goto LAB_035574b8;
            if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_035575f4;
            lVar16 = lVar16 + (long)(int)uVar11 * 0x18;
            *(long **)(lVar16 + 0x20) = unaff_x19;
            *(uint *)(lVar16 + 0x28) = uStack0000000000000158;
            *(uint *)(lVar16 + 0x2c) = uStack000000000000015c;
            *(uint *)(lVar16 + 0x30) = uVar29 - uStack0000000000000158;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            lVar16 = unaff_x19[0x6d];
            if (lVar16 == 0) goto LAB_035574b8;
            lVar22 = *(long *)(lVar16 + 0x50);
            *(int *)(lVar16 + 0x24) = *(int *)(lVar16 + 0x24) + 1;
            if (lVar22 == 0) goto LAB_035574b8;
            if (*(uint *)(lVar22 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
            lVar22 = lVar22 + lVar21 * 0x5c;
            iStack00000000000000d4 = iStack00000000000000d4 + 1;
            *(int *)(lVar22 + 0x30) = *(int *)(lVar22 + 0x30) + 1;
          }
LAB_03555d68:
          in_stack_00000118._4_4_ = 1;
        }
LAB_03555d70:
        unaff_x22 = 0x178;
        if ((*in_stack_00000170 == 0) ||
           (lVar16 = *(long *)(*in_stack_00000170 + 0x38), lVar16 == 0)) goto LAB_035574b8;
        uVar23 = *(uint *)(lVar16 + 0x18);
        if (uVar23 <= uStack000000000000015c) goto LAB_035575f4;
        unaff_x23 = in_stack_000000f0;
        unaff_w25 = uStack000000000000015c;
        in_stack_00000120 = unaff_x27;
        uVar11 = in_stack_00000160;
        if ((*(byte *)(lVar16 + unaff_x24 * 0x178 + 400) >> 2 & 1) == 0) {
          unaff_x28 = in_stack_00000170;
          if (!bVar8) goto LAB_03556254;
          goto LAB_03555da0;
        }
        lVar16 = lVar16 + unaff_x24 * 0x178;
        iVar10 = *(int *)(lVar16 + 0x68);
        *(undefined4 *)(lVar16 + 0x16c) = in_stack_000017c4;
        if ((((int)unaff_x19[0x65] < (int)uStack000000000000015c) ||
            ((int)unaff_x19[0x66] < (int)in_stack_00000160)) ||
           (((int)unaff_x19[0x5c] == 5 && (iVar10 + 1 != (int)unaff_x19[0x67])))) {
          in_stack_00000130 = 0;
        }
        else {
          in_stack_00000130 = 1;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar12 = FUN_026b63d8(in_stack_00000168._4_4_,0);
        if ((in_stack_00000168._4_4_ != 0x200b) && ((uVar12 & 1) == 0)) {
          lVar16 = *in_stack_00000170;
          if ((lVar16 == 0) || (lVar22 = *(long *)(lVar16 + 0x38), lVar22 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar22 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
          fVar25 = *(float *)(lVar22 + unaff_x24 * 0x178 + 0x160);
          if (unaff_s15 <= fVar25) {
            unaff_s15 = fVar25;
          }
          if (fStack0000000000000100 <= ABS(unaff_s14)) {
            fStack0000000000000100 = ABS(unaff_s14);
          }
          if (iVar10 != in_stack_00000068._4_4_) {
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar16 = *in_stack_00000170;
              if (lVar16 == 0) goto LAB_035574b8;
              lVar22 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
            }
            else {
              lVar22 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
            }
            fStack0000000000000104 = *(float *)(lVar22 + 0x15a8);
          }
          lVar16 = *(long *)(lVar16 + 0x38);
          if (lVar16 == 0) goto LAB_035574b8;
          if (*(uint *)(lVar16 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
          if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
          fVar26 = *(float *)(lVar16 + unaff_x24 * 0x178 + 0x14c);
          fVar25 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
          fVar26 = fVar26 + unaff_s15 * fVar25;
          if (fVar26 <= fStack0000000000000104) {
            fStack0000000000000104 = fVar26;
          }
          param_2 = (ulong)(uint)fStack0000000000000104;
          in_stack_00000068._4_4_ = iVar10;
        }
        if (!bVar8) goto code_r0x035561ec;
        goto LAB_035562b4;
      }
      goto LAB_035575f4;
    }
    goto LAB_035574b8;
  }
  if (in_w8 <= (int)unaff_w25) {
LAB_0355655c:
    bVar8 = true;
    uVar11 = in_stack_00000160;
    goto LAB_03556364;
  }
  if ((*unaff_x28 != 0) && (lVar16 = *(long *)(*unaff_x28 + 0x38), lVar16 != 0)) {
    if (uStack000000000000015c < *(uint *)(lVar16 + 0x18)) {
      uVar12 = FUN_03567ad8(in_stack_00000090,*(undefined4 *)(lVar16 + unaff_x27),0);
      unaff_x28 = in_stack_00000170;
      if ((uVar12 & 1) != 0) goto LAB_0355655c;
      if ((*in_stack_00000170 == 0) || (lVar16 = *(long *)(*in_stack_00000170 + 0x38), lVar16 == 0))
      goto LAB_035574b8;
      if (unaff_w25 < *(uint *)(lVar16 + 0x18)) {
        lVar16 = lVar16 + unaff_x24 * unaff_x22;
        param_4 = (ulong)*(uint *)(lVar16 + 0x128);
        param_3 = (ulong)uStack0000000000000074;
        param_2 = (ulong)(uint)fStack0000000000000070;
        (**(code **)(*unaff_x19 + 0x8d8))
                  (in_stack_00000078,param_2,param_3,param_4,fStack0000000000000104,0,
                   in_stack_00000088._4_4_,*(undefined4 *)(lVar16 + 0x160));
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar16 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar16 + 0xe0) != 0) goto LAB_03556348;
        thunk_FUN_01a58e78();
        lVar16 = *(long *)puVar7;
        goto LAB_03556348;
      }
    }
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  goto LAB_035574b8;
code_r0x035561ec:
  bVar8 = false;
  unaff_x28 = in_stack_00000170;
  if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
      ((int)uVar6 < (int)uStack000000000000015c)) || (in_stack_00000130 != 1)) goto LAB_03556364;
  if (uStack000000000000015c == uVar6) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar12 = FUN_026b97f8(in_stack_00000168._4_4_,0);
    if ((uVar12 & 1) != 0) {
LAB_03556254:
      bVar8 = false;
      unaff_x28 = in_stack_00000170;
      goto LAB_03556364;
    }
  }
  if ((*in_stack_00000170 == 0) || (lVar16 = *(long *)(*in_stack_00000170 + 0x38), lVar16 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar16 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
  lVar16 = lVar16 + unaff_x24 * 0x178;
  in_stack_00000088._4_4_ = *(float *)(lVar16 + 0x160);
  in_stack_00000078 = *(uint *)(lVar16 + 0x11c);
  param_3 = (ulong)in_stack_00000078;
  bVar8 = unaff_s15 != 0.0;
  fVar25 = in_stack_00000088._4_4_;
  if (bVar8) {
    fVar25 = unaff_s15;
  }
  unaff_s15 = fVar25;
  in_stack_00000090 = *(undefined4 *)(lVar16 + 0x168);
  uStack0000000000000074 = 0;
  fVar25 = unaff_s14;
  if (bVar8) {
    fVar25 = fStack0000000000000100;
  }
  param_2 = (ulong)(uint)fVar25;
  fStack0000000000000070 = fStack0000000000000104;
  fStack0000000000000100 = fVar25;
LAB_035562b4:
  in_w8 = *unaff_x20 + -1;
  if (in_w8 == 0) goto code_r0x035562c0;
  if ((uStack000000000000015c != uVar5) &&
     (unaff_x28 = in_stack_00000170, (int)uStack000000000000015c < (int)uVar6))
  goto code_r0x0355650c;
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar12 = FUN_026b63d8(in_stack_00000168._4_4_,0);
  if ((*in_stack_00000170 == 0) || (lVar16 = *(long *)(*in_stack_00000170 + 0x38), lVar16 == 0))
  goto LAB_035574b8;
  lVar22 = unaff_x24;
  if (in_stack_00000168._4_4_ == 0x200b || (uVar12 & 1) != 0) {
    lVar22 = in_stack_00000150;
    uStack000000000000015c = uVar6;
  }
  if (*(uint *)(lVar16 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
  lVar16 = lVar16 + lVar22 * 0x178;
  uVar11 = *(uint *)(lVar16 + 0x128);
  uVar24 = *(undefined4 *)(lVar16 + 0x160);
  pcVar15 = *(code **)(*unaff_x19 + 0x8d8);
  unaff_x28 = in_stack_00000170;
  uStack000000000000015c = uVar29;
  goto LAB_035562f4;
code_r0x035562c0:
  if ((*in_stack_00000170 == 0) || (lVar16 = *(long *)(*in_stack_00000170 + 0x38), lVar16 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar16 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
  lVar16 = lVar16 + unaff_x24 * 0x178;
  lVar22 = *unaff_x19;
  uVar11 = *(uint *)(lVar16 + 0x128);
  uVar24 = *(undefined4 *)(lVar16 + 0x160);
  unaff_x28 = in_stack_00000170;
  uStack000000000000015c = uVar29;
  goto LAB_035562ec;
  while( true ) {
    lVar16 = *unaff_x28;
    lVar22 = lVar22 + 1;
    lVar21 = lVar21 + 0x50;
    if (lVar16 == 0) break;
LAB_03557110:
    uVar12 = lVar22 + 1;
    if ((long)*(int *)(lVar16 + 0x34) <= (long)uVar12) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar16 = *(long *)(lVar16 + 0x60);
    if (lVar16 == 0) break;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_035575f4;
    FUN_03596a20(lVar16 + lVar21 + 0x70,0);
    lVar16 = unaff_x19[0xe1];
    if (lVar16 == 0) break;
    if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_035575f4;
    uVar19 = *(undefined8 *)(lVar16 + lVar22 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar13 = FUN_036d35a8(uVar19,0,0);
    if ((uVar13 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*unaff_x28 == 0) || (lVar16 = *(long *)(*unaff_x28 + 0x60), lVar16 == 0)) break;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_035575f4;
        FUN_03596b20(lVar16 + lVar21 + 0x70,1,0);
      }
      lVar16 = unaff_x19[0xe1];
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar16 = *(long *)(lVar16 + lVar22 * 8 + 0x28);
      if (lVar16 == 0) break;
      lVar16 = UnityEngine_Material__GetColorArray(lVar16,0);
      if ((*unaff_x28 == 0) || (lVar17 = *(long *)(*unaff_x28 + 0x60), lVar17 == 0)) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_035575f4;
      if (lVar16 == 0) break;
      FUN_036a460c(lVar16,*(undefined8 *)(lVar17 + lVar21 + 0x80),0);
      lVar16 = unaff_x19[0xe1];
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar16 = *(long *)(lVar16 + lVar22 * 8 + 0x28);
      if (lVar16 == 0) break;
      lVar16 = UnityEngine_Material__GetColorArray(lVar16,0);
      if ((*unaff_x28 == 0) || (lVar17 = *(long *)(*unaff_x28 + 0x60), lVar17 == 0)) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_035575f4;
      if (lVar16 == 0) break;
      FUN_036a4810(lVar16,*(undefined8 *)(lVar17 + lVar21 + 0x98),0);
      lVar16 = unaff_x19[0xe1];
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar16 = *(long *)(lVar16 + lVar22 * 8 + 0x28);
      if (lVar16 == 0) break;
      lVar16 = UnityEngine_Material__GetColorArray(lVar16,0);
      if ((*unaff_x28 == 0) || (lVar17 = *(long *)(*unaff_x28 + 0x60), lVar17 == 0)) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_035575f4;
      if (lVar16 == 0) break;
      FUN_036a48bc(lVar16,*(undefined8 *)(lVar17 + lVar21 + 0xa0),0);
      lVar16 = unaff_x19[0xe1];
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar16 = *(long *)(lVar16 + lVar22 * 8 + 0x28);
      if (lVar16 == 0) break;
      lVar16 = UnityEngine_Material__GetColorArray(lVar16,0);
      if ((*unaff_x28 == 0) || (lVar17 = *(long *)(*unaff_x28 + 0x60), lVar17 == 0)) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_035575f4;
      if (lVar16 == 0) break;
      FUN_036a4e24(lVar16,*(undefined8 *)(lVar17 + lVar21 + 0xa8),0);
      lVar16 = unaff_x19[0xe1];
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar16 = *(long *)(lVar16 + lVar22 * 8 + 0x28);
      if ((lVar16 == 0) || (lVar16 = UnityEngine_Material__GetColorArray(lVar16,0), lVar16 == 0))
      break;
      FUN_036aa280(lVar16,0);
      lVar16 = unaff_x19[0xe1];
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar16 = *(long *)(lVar16 + lVar22 * 8 + 0x28);
      if (lVar16 == 0) break;
      lVar16 = FUN_037b514c(lVar16,0);
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar17 = *(long *)(lVar17 + lVar22 * 8 + 0x28);
      if ((lVar17 == 0) || (uVar19 = UnityEngine_Material__GetColorArray(lVar17,0), lVar16 == 0))
      break;
      FUN_0390f3a4(lVar16,uVar19,0);
      lVar16 = unaff_x19[0xe1];
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar16 = *(long *)(lVar16 + lVar22 * 8 + 0x28);
      if ((lVar16 == 0) || (lVar16 = FUN_037b514c(lVar16,0), lVar16 == 0)) break;
      FUN_0390eec8(uVar27,param_2,param_3,param_4,lVar16,0);
      lVar16 = unaff_x19[0xe1];
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar16 = *(long *)(lVar16 + lVar22 * 8 + 0x28);
      if ((lVar16 == 0) || (lVar16 = FUN_037b514c(lVar16,0), lVar16 == 0)) break;
      FUN_0390ed78(lVar16,uVar29 & 1,0);
      lVar16 = unaff_x19[0xe1];
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_035575f4;
      plVar20 = *(long **)(lVar16 + lVar22 * 8 + 0x28);
      uVar11 = (**(code **)(*unaff_x19 + 0x2b8))();
      if (plVar20 == (long *)0x0) break;
      (**(code **)(*plVar20 + 0x2c8))(plVar20,uVar11 & 1,*(undefined8 *)(*plVar20 + 0x2d0));
    }
  }
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


