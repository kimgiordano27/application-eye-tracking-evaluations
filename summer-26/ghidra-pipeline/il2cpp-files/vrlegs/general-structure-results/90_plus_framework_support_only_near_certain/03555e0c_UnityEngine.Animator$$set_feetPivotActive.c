/*
FUNCTION_NAME: UnityEngine.Animator$$set_feetPivotActive
ENTRY_POINT: 03555e0c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 169
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_18;weak_xr_or_state_hits_20;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_6
*/


void UnityEngine_Animator__set_feetPivotActive
               (long *param_1,undefined1 param_2 [16],ulong param_3,ulong param_4,ulong param_5)

{
  int iVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  char cVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *unaff_x19;
  int *unaff_x21;
  undefined8 uVar18;
  long *plVar19;
  long unaff_x22;
  int unaff_w23;
  long lVar20;
  long unaff_x24;
  uint unaff_w25;
  long unaff_x27;
  long *unaff_x28;
  uint uVar21;
  uint unaff_w29;
  undefined4 uVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
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
  
  do {
    if (*(int *)(*param_1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar10 = FUN_026b63d8(in_stack_00000168._4_4_,0);
    if ((in_stack_00000168._4_4_ != 0x200b) && ((uVar10 & 1) == 0)) {
      lVar13 = *unaff_x28;
      if ((lVar13 == 0) || (lVar16 = *(long *)(lVar13 + 0x38), lVar16 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar16 + 0x18) <= unaff_w25) goto LAB_035575f4;
      fVar23 = *(float *)(lVar16 + unaff_x24 * unaff_x22 + 0x160);
      if (unaff_s15 <= fVar23) {
        unaff_s15 = fVar23;
      }
      if (fStack0000000000000100 <= ABS(unaff_s14)) {
        fStack0000000000000100 = ABS(unaff_s14);
      }
      if (unaff_w23 != in_stack_00000068._4_4_) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar13 = *unaff_x28;
          if (lVar13 == 0) goto LAB_035574b8;
          lVar16 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar16 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar16 + 0x15a8);
      }
      lVar13 = *(long *)(lVar13 + 0x38);
      if (lVar13 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar13 + 0x18) <= unaff_w25) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar30 = *(float *)(lVar13 + unaff_x24 * unaff_x22 + 0x14c);
      fVar23 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar30 = fVar30 + unaff_s15 * fVar23;
      if (fVar30 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar30;
      }
      param_3 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = unaff_w23;
    }
    uVar26 = (uint)in_stack_00000150;
    uVar9 = in_stack_00000160;
    if ((unaff_w29 & 1) == 0) {
      unaff_w29 = 0;
      if ((((in_stack_00000168._4_4_ != 0xd) && ((in_stack_00000168._4_4_ & 0xfffe) != 10)) &&
          ((int)unaff_w25 <= (int)uVar26)) && (((in_stack_00000130 ^ 1) & 1) == 0)) {
        if (unaff_w25 == uVar26) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar10 = FUN_026b97f8(in_stack_00000168._4_4_,0);
          if ((uVar10 & 1) != 0) goto LAB_03556254;
        }
        if ((*unaff_x28 == 0) || (lVar13 = *(long *)(*unaff_x28 + 0x38), lVar13 == 0))
        goto LAB_035574b8;
        if (unaff_w25 < *(uint *)(lVar13 + 0x18)) {
          lVar13 = lVar13 + unaff_x24 * unaff_x22;
          in_stack_00000088._4_4_ = *(float *)(lVar13 + 0x160);
          in_stack_00000078 = *(uint *)(lVar13 + 0x11c);
          param_4 = (ulong)in_stack_00000078;
          bVar6 = unaff_s15 != 0.0;
          fVar23 = in_stack_00000088._4_4_;
          if (bVar6) {
            fVar23 = unaff_s15;
          }
          unaff_s15 = fVar23;
          in_stack_00000090 = *(undefined4 *)(lVar13 + 0x168);
          uStack0000000000000074 = 0;
          fVar23 = unaff_s14;
          if (bVar6) {
            fVar23 = fStack0000000000000100;
          }
          param_3 = (ulong)(uint)fVar23;
          fStack0000000000000070 = fStack0000000000000104;
          fStack0000000000000100 = fVar23;
          goto LAB_035562b4;
        }
        goto LAB_035575f4;
      }
    }
    else {
LAB_035562b4:
      if (*unaff_x21 == 1) {
        if ((*unaff_x28 == 0) || (lVar13 = *(long *)(*unaff_x28 + 0x38), lVar13 == 0))
        goto LAB_035574b8;
        if (unaff_w25 < *(uint *)(lVar13 + 0x18)) {
          lVar13 = lVar13 + unaff_x24 * unaff_x22;
          lVar16 = *unaff_x19;
          uVar9 = *(uint *)(lVar13 + 0x128);
          uVar22 = *(undefined4 *)(lVar13 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      if ((unaff_w25 == (uint)in_stack_000000e0) || ((int)uVar26 <= (int)unaff_w25)) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar10 = FUN_026b63d8(in_stack_00000168._4_4_,0);
        if ((*unaff_x28 == 0) || (lVar13 = *(long *)(*unaff_x28 + 0x38), lVar13 == 0))
        goto LAB_035574b8;
        lVar16 = unaff_x24;
        uVar9 = unaff_w25;
        if (in_stack_00000168._4_4_ == 0x200b || (uVar10 & 1) != 0) {
          lVar16 = in_stack_00000150;
          uVar9 = uVar26;
        }
        if (uVar9 < *(uint *)(lVar13 + 0x18)) {
          lVar13 = lVar13 + lVar16 * unaff_x22;
          uVar9 = *(uint *)(lVar13 + 0x128);
          uVar22 = *(undefined4 *)(lVar13 + 0x160);
          pcVar14 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      if ((in_stack_00000130 & 1) == 0) {
        if ((*unaff_x28 != 0) && (lVar13 = *(long *)(*unaff_x28 + 0x38), lVar13 != 0)) {
          uVar9 = *(uint *)(lVar13 + 0x18);
          goto LAB_03555da0;
        }
        goto LAB_035574b8;
      }
      if ((int)unaff_w25 < *unaff_x21 + -1) {
        if ((*unaff_x28 == 0) || (lVar13 = *(long *)(*unaff_x28 + 0x38), lVar13 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar13 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
        uVar10 = FUN_03567ad8(in_stack_00000090,*(undefined4 *)(lVar13 + unaff_x27),0);
        unaff_x28 = in_stack_00000170;
        if ((uVar10 & 1) == 0) {
          if ((*in_stack_00000170 == 0) ||
             (lVar13 = *(long *)(*in_stack_00000170 + 0x38), lVar13 == 0)) goto LAB_035574b8;
          if (unaff_w25 < *(uint *)(lVar13 + 0x18)) {
            lVar13 = lVar13 + unaff_x24 * unaff_x22;
            param_5 = (ulong)*(uint *)(lVar13 + 0x128);
            param_4 = (ulong)uStack0000000000000074;
            param_3 = (ulong)(uint)fStack0000000000000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (in_stack_00000078,param_3,param_4,param_5,fStack0000000000000104,0,
                       in_stack_00000088._4_4_,*(undefined4 *)(lVar13 + 0x160));
            puVar5 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar13 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar13 + 0xe0) != 0) goto LAB_03556348;
            thunk_FUN_01a58e78();
            lVar13 = *(long *)puVar5;
            goto LAB_03556348;
          }
          goto LAB_035575f4;
        }
      }
      unaff_w29 = 1;
    }
LAB_03556364:
    if ((*unaff_x28 == 0) || (lVar13 = *(long *)(*unaff_x28 + 0x38), lVar13 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar13 + 0x18) <= unaff_w25) goto LAB_035575f4;
    if (in_stack_00000108 == 0) goto LAB_035574b8;
    uVar26 = *(uint *)(lVar13 + unaff_x24 * unaff_x22 + 400);
    fVar23 = (float)FUN_03776a30(in_stack_00000108 + 0x50,0);
    uVar21 = (uint)in_stack_00000150;
    if ((uVar26 >> 6 & 1) == 0) {
      if ((uStack000000000000012c & 1) != 0) {
        if ((*unaff_x28 == 0) || (lVar13 = *(long *)(*unaff_x28 + 0x38), lVar13 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar13 + 0x18) <= uStack000000000000015c - 2) goto LAB_035575f4;
        uVar26 = *(uint *)(lVar13 + unaff_x27 + -0x330);
        fVar30 = *(float *)(lVar13 + unaff_x27 + -0x30c);
        pcVar14 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
        param_5 = (ulong)uVar26;
        param_3 = (ulong)(uint)fStack000000000000009c;
        param_4 = (ulong)uStack0000000000000098;
        (*pcVar14)(in_stack_000000a0,param_3,param_4,param_5,in_stack_000000a8 * fVar23 + fVar30,0,
                   in_stack_000000a8,in_stack_000000a8);
      }
LAB_03556948:
      uStack000000000000012c = 0;
    }
    else {
      lVar13 = *unaff_x28;
      if ((lVar13 == 0) || (lVar16 = *(long *)(lVar13 + 0x38), lVar16 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar16 + 0x18) <= unaff_w25) goto LAB_035575f4;
      *(undefined4 *)(lVar16 + unaff_x24 * unaff_x22 + 0x174) = in_stack_000017c4;
      if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)uVar9)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar16 + unaff_x24 * unaff_x22 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
          ((int)uVar21 < (int)unaff_w25)) || ((uStack000000000000012c & 1) != 0 || !bVar6)) {
LAB_035564e8:
        if ((uStack000000000000012c & 1) == 0) goto LAB_03556948;
      }
      else {
        if (unaff_w25 == uVar21) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar10 = FUN_026b97f8(in_stack_00000168._4_4_,0);
          if ((uVar10 & 1) != 0) goto LAB_035564e8;
          lVar13 = *unaff_x28;
          if (lVar13 == 0) goto LAB_035574b8;
        }
        lVar13 = *(long *)(lVar13 + 0x38);
        if (lVar13 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar13 + 0x18) <= unaff_w25) goto LAB_035575f4;
        lVar13 = lVar13 + unaff_x24 * unaff_x22;
        in_stack_00000040 = *(float *)(lVar13 + 0x60);
        in_stack_00000038 = *(float *)(lVar13 + 0x14c);
        param_3 = (ulong)(uint)in_stack_00000038;
        in_stack_000000a0 = *(uint *)(lVar13 + 0x11c);
        param_4 = (ulong)in_stack_000000a0;
        in_stack_000000a8 = *(float *)(lVar13 + 0x160);
        fStack000000000000009c = fVar23 * in_stack_000000a8 + in_stack_00000038;
        uStack0000000000000098 = 0;
      }
      iVar8 = *unaff_x21;
      if (iVar8 == 1) {
LAB_03556628:
        if ((*unaff_x28 != 0) && (lVar13 = *(long *)(*unaff_x28 + 0x38), lVar13 != 0)) {
          if (unaff_w25 < *(uint *)(lVar13 + 0x18)) {
            lVar13 = lVar13 + unaff_x24 * unaff_x22;
            lVar16 = *unaff_x19;
            uVar26 = *(uint *)(lVar13 + 0x128);
            fVar30 = *(float *)(lVar13 + 0x14c);
LAB_03556654:
            pcVar14 = *(code **)(lVar16 + 0x8d8);
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
        uVar10 = FUN_026b63d8(in_stack_00000168._4_4_,0);
        if ((*unaff_x28 != 0) && (lVar13 = *(long *)(*unaff_x28 + 0x38), lVar13 != 0)) {
          uVar26 = *(uint *)(lVar13 + 0x18);
          if (in_stack_00000168._4_4_ == 0x200b || (uVar10 & 1) != 0) {
            if (uVar26 <= uVar21) goto LAB_035575f4;
          }
          else {
FUN_035568e8:
            in_stack_00000150 = unaff_x24;
            if (uVar26 <= unaff_w25) goto LAB_035575f4;
          }
LAB_035568f0:
          lVar13 = lVar13 + in_stack_00000150 * unaff_x22;
          fVar30 = *(float *)(lVar13 + 0x14c);
          uVar26 = *(uint *)(lVar13 + 0x128);
          pcVar14 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035574b8;
      }
      if ((int)unaff_w25 < iVar8) {
        lVar13 = *unaff_x28;
        if ((lVar13 != 0) && (lVar16 = *(long *)(lVar13 + 0x38), lVar16 != 0)) {
          if (uStack000000000000015c < *(uint *)(lVar16 + 0x18)) {
            if (*(float *)(lVar16 + unaff_x27 + -0x108) == in_stack_00000040) {
              fVar30 = *(float *)(lVar16 + unaff_x27 + -0x1c);
              if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              param_3 = (ulong)(uint)in_stack_00000038;
              uVar10 = FUN_03567bac(in_stack_00000140 + fVar30,param_3,0);
              if ((uVar10 & 1) != 0) {
                iVar8 = *unaff_x21;
                goto LAB_03556744;
              }
              lVar13 = *unaff_x28;
              if (lVar13 == 0) goto LAB_035574b8;
            }
            lVar13 = *(long *)(lVar13 + 0x38);
            if (lVar13 != 0) {
              uVar26 = *(uint *)(lVar13 + 0x18);
              if ((int)unaff_w25 <= (int)uVar21) goto FUN_035568e8;
              if (uVar21 < uVar26) goto LAB_035568f0;
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
        if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
        lVar13 = *(long *)(in_stack_000000f0 + in_stack_00000120 + -0x130);
        if (lVar13 == 0) goto LAB_035574b8;
        iVar7 = FUN_036d3364(lVar13,0);
        unaff_x27 = in_stack_00000120;
        if (iVar8 != iVar7) goto LAB_03556628;
      }
      if (!bVar6) {
        if ((*unaff_x28 != 0) && (lVar13 = *(long *)(*unaff_x28 + 0x38), lVar13 != 0)) {
          if (uStack000000000000015c - 2 < *(uint *)(lVar13 + 0x18)) {
            lVar16 = *unaff_x19;
            uVar26 = *(uint *)(lVar13 + unaff_x27 + -0x330);
            fVar30 = *(float *)(lVar13 + unaff_x27 + -0x30c);
            goto LAB_03556654;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      uStack000000000000012c = 1;
    }
    if ((*unaff_x28 == 0) || (lVar13 = *(long *)(*unaff_x28 + 0x38), lVar13 == 0))
    goto LAB_035574b8;
    uVar26 = (uint)*(undefined8 *)(lVar13 + 0x18);
    if (uVar26 <= unaff_w25) goto LAB_035575f4;
    if ((*(byte *)(lVar13 + unaff_x24 * unaff_x22 + 0x191) >> 1 & 1) == 0) {
      if ((in_stack_00000110._4_4_ & 1) != 0) {
        param_4 = (ulong)uStack00000000000000c0;
        param_3 = (ulong)(uint)fStack00000000000000dc;
        param_5 = (ulong)(uint)in_stack_000000c8;
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,param_3,param_4,param_5,fStack00000000000000d0,param_4);
      }
LAB_035569b4:
      in_stack_00000110._4_4_ = 0;
    }
    else {
      if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)uVar9)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar13 + unaff_x24 * unaff_x22 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((in_stack_00000110._4_4_ & 1) == 0) {
        if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
            ((int)uVar21 < (int)unaff_w25)) || (!bVar6)) goto LAB_035569b4;
        if (unaff_w25 == uVar21) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar10 = FUN_026b97f8(in_stack_00000168._4_4_,0);
          if ((uVar10 & 1) != 0) goto LAB_035569b4;
        }
        puVar5 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar16 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar16 = *(long *)puVar5;
        }
        unaff_x22 = 0x178;
        if ((*unaff_x28 == 0) || (lVar13 = *(long *)(*unaff_x28 + 0x38), lVar13 == 0))
        goto LAB_035574b8;
        uVar26 = (uint)*(undefined8 *)(lVar13 + 0x18);
        if (uVar26 <= unaff_w25) goto LAB_035575f4;
        lVar16 = *(long *)(lVar16 + 0xb8);
        lVar20 = lVar13 + unaff_x24 * 0x178;
        in_stack_000017b8 = *(undefined8 *)(lVar20 + 0x184);
        in_stack_000017b0 = *(undefined8 *)(lVar20 + 0x17c);
        fStack00000000000000d8 = *(float *)(lVar16 + 0x1598);
        fStack00000000000000dc = *(float *)(lVar16 + 0x159c);
        in_stack_000017c0 = *(float *)(lVar20 + 0x18c);
        in_stack_000000c8 = *(float *)(lVar16 + 0x15a0);
        fStack00000000000000d0 = *(float *)(lVar16 + 0x15a4);
        uStack00000000000000c0 = 0;
      }
      if (uVar26 <= unaff_w25) goto LAB_035575f4;
      lVar13 = lVar13 + unaff_x24 * unaff_x22;
      fVar30 = *(float *)(lVar13 + 0x128);
      fVar27 = *(float *)(lVar13 + 0x188);
      uVar18 = *(undefined8 *)(lVar13 + 0x17c);
      fVar31 = *(float *)(lVar13 + 0x184);
      uVar24 = *(undefined8 *)(lVar13 + 0x184);
      fVar29 = *(float *)(lVar13 + 0x18c);
      fVar23 = *(float *)(lVar13 + 0x11c);
      fVar28 = *(float *)(lVar13 + 0x148);
      fVar25 = *(float *)(lVar13 + 0x150);
      in_stack_00000178 = uVar18;
      fStack0000000000000180 = fVar31;
      fStack0000000000000184 = fVar27;
      in_stack_00000188 = fVar29;
      in_stack_00000190 = in_stack_000017b0;
      in_stack_00000198 = in_stack_000017b8;
      in_stack_000001a0 = in_stack_000017c0;
      uVar10 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
      lVar13 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar10 & 1) == 0) {
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar13);
        }
        fVar30 = fVar30 + (float)in_stack_000017b8;
        param_4 = (ulong)(uint)fVar30;
        fVar23 = fVar23 - (float)((ulong)in_stack_000017b0 >> 0x20);
        fVar25 = fVar25 - in_stack_000017c0;
        param_3 = (ulong)(uint)fVar25;
        fVar28 = fVar28 + (float)((ulong)in_stack_000017b8 >> 0x20);
        param_5 = (ulong)(uint)fVar28;
        if (fVar23 <= fStack00000000000000d8) {
          fStack00000000000000d8 = fVar23;
        }
        if (fVar25 <= fStack00000000000000dc) {
          fStack00000000000000dc = fVar25;
        }
        if (in_stack_000000c8 <= fVar30) {
          in_stack_000000c8 = fVar30;
        }
        if (fStack00000000000000d0 <= fVar28) {
          fStack00000000000000d0 = fVar28;
        }
      }
      else {
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar13);
        }
        fVar23 = (fVar23 + (in_stack_000000c8 - (float)in_stack_000017b8)) * 0.5;
        param_5 = (ulong)(uint)fVar23;
        if (fVar25 <= fStack00000000000000dc) {
          fStack00000000000000dc = fVar25;
        }
        param_3 = (ulong)(uint)fStack00000000000000dc;
        param_4 = (ulong)uStack00000000000000c0;
        if (fStack00000000000000d0 <= fVar28) {
          fStack00000000000000d0 = fVar28;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,param_3,param_4,param_5,fStack00000000000000d0,param_4);
        fStack00000000000000dc = fVar25 - fVar29;
        in_stack_000000c8 = fVar30 + fVar31;
        uStack00000000000000c0 = 0;
        fStack00000000000000d0 = fVar28 + fVar27;
        fStack00000000000000d8 = fVar23;
        in_stack_000017b0 = uVar18;
        in_stack_000017b8 = uVar24;
        in_stack_000017c0 = fVar29;
      }
      unaff_x22 = 0x178;
      if (((*unaff_x21 == 1) || (unaff_w25 == (uint)in_stack_000000e0)) ||
         (((int)uVar21 <= (int)unaff_w25 || (!bVar6)))) {
        param_4 = (ulong)uStack00000000000000c0;
        param_3 = (ulong)(uint)fStack00000000000000dc;
        param_5 = (ulong)(uint)in_stack_000000c8;
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,param_3,param_4,param_5,fStack00000000000000d0,param_4);
        in_stack_00000110._4_4_ = 0;
      }
      else {
        in_stack_00000110._4_4_ = 1;
      }
    }
    puVar5 = OVRPlugin_Media_TypeInfo;
    iVar8 = *unaff_x21;
    uVar26 = uStack000000000000015c + 1;
    unaff_x27 = unaff_x27 + 0x178;
    iStack0000000000000128 = iStack0000000000000128 + 1;
    if (iVar8 <= (int)uStack000000000000015c) {
      lVar13 = *unaff_x28;
      if (lVar13 == 0) goto LAB_035574b8;
      *(int *)(lVar13 + 0x18) = iVar8;
      lVar16 = unaff_x19[0xd4];
      *(uint *)(lVar13 + 0x2c) = uVar9 + 1;
      if (iVar8 < 1 || iStack00000000000000d4 == 0) {
        iStack00000000000000d4 = 1;
      }
      *(int *)(lVar13 + 0x1c) = (int)lVar16;
      *(int *)(lVar13 + 0x24) = iStack00000000000000d4;
      *(int *)(lVar13 + 0x30) = (int)unaff_x19[0x96] + 1;
      if (((int)unaff_x19[99] != 0xff) ||
         (uVar10 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar10 & 1) == 0)) goto LAB_03554724;
      lVar13 = unaff_x19[0xdf];
      if (lVar13 != 0) {
        (**(code **)(lVar13 + 0x18))
                  (*(undefined8 *)(lVar13 + 0x40),*unaff_x28,*(undefined8 *)(lVar13 + 0x28));
      }
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      iVar8 = FUN_03911ee4(unaff_x19[0xe5],0);
      if (iVar8 != 0x19) {
        lVar13 = unaff_x19[0xe5];
        if (lVar13 == 0) goto LAB_035574b8;
        uVar9 = FUN_03911ee4(lVar13,0);
        FUN_03911f20(lVar13,uVar9 | 0x19,0);
      }
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*unaff_x28 == 0) || (lVar13 = *(long *)(*unaff_x28 + 0x60), lVar13 == 0))
        goto LAB_035574b8;
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(int *)(lVar13 + 0x18) == 0) goto LAB_035575f4;
        FUN_03596b20(lVar13 + 0x20,1,0);
      }
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] == 0) || (lVar13 = *(long *)(unaff_x19[0x6d] + 0x60), lVar13 == 0))
      goto LAB_035574b8;
      if (*(int *)(lVar13 + 0x18) == 0) goto LAB_035575f4;
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar13 + 0x30),0);
      if ((unaff_x19[0x6d] == 0) || (lVar13 = *(long *)(unaff_x19[0x6d] + 0x60), lVar13 == 0))
      goto LAB_035574b8;
      if (*(int *)(lVar13 + 0x18) == 0) goto LAB_035575f4;
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar13 + 0x48),0);
      if ((unaff_x19[0x6d] == 0) || (lVar13 = *(long *)(unaff_x19[0x6d] + 0x60), lVar13 == 0))
      goto LAB_035574b8;
      if (*(int *)(lVar13 + 0x18) == 0) goto LAB_035575f4;
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar13 + 0x50),0);
      if ((unaff_x19[0x6d] == 0) || (lVar13 = *(long *)(unaff_x19[0x6d] + 0x60), lVar13 == 0))
      goto LAB_035574b8;
      if (*(int *)(lVar13 + 0x18) == 0) goto LAB_035575f4;
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar13 + 0x58),0);
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036aa280(unaff_x19[0x74],0);
      if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
      FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
      if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
      uVar24 = FUN_0390ef60(unaff_x19[0xe4],0);
      if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
      uVar9 = FUN_0390ed3c(unaff_x19[0xe4],0);
      lVar13 = *unaff_x28;
      if (lVar13 == 0) goto LAB_035574b8;
      lVar20 = 0;
      lVar16 = 0;
      break;
    }
    if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    if ((*unaff_x28 == 0) || (lVar13 = *(long *)(*unaff_x28 + 0x50), lVar13 == 0))
    goto LAB_035574b8;
    unaff_x24 = (long)(int)uStack000000000000015c;
    lVar16 = in_stack_000000f0 + unaff_x24 * unaff_x22;
    in_stack_00000160 = *(uint *)(lVar16 + 100);
    if (*(uint *)(lVar13 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
    lVar20 = (long)(int)in_stack_00000160;
    lVar13 = lVar13 + lVar20 * 0x5c;
    in_stack_00000108 = *(long *)(lVar16 + 0x38);
    uVar2 = *(ushort *)(lVar16 + 0x20);
    uVar4 = *(uint *)(lVar13 + 0x3c);
    in_stack_000000e0 = (long)(int)uVar4;
    uVar21 = *(uint *)(lVar13 + 0x68);
    iVar1 = *(int *)(lVar13 + 0x20);
    iVar8 = *(int *)(lVar13 + 0x28);
    iVar7 = *(int *)(lVar13 + 0x2c);
    in_stack_00000150 = (long)*(int *)(lVar13 + 0x40);
    fVar25 = *(float *)(lVar13 + 0x4c);
    fVar27 = *(float *)(lVar13 + 0x54);
    fVar23 = *(float *)(lVar13 + 0x58);
    fVar32 = *(float *)(lVar13 + 0x5c);
    fVar29 = *(float *)(lVar13 + 0x60);
    fVar31 = *(float *)(lVar13 + 0x6c);
    fVar33 = *(float *)(lVar13 + 0x70);
    fVar30 = *(float *)(lVar13 + 0x74);
    fVar28 = *(float *)(lVar13 + 0x78);
    in_stack_00000168._4_4_ = (uint)uVar2;
    if ((int)uVar21 < 9) {
      switch(uVar21) {
      case 1:
        if ((char)unaff_x19[0x1e] == '\0') {
          in_stack_000000f8._4_4_ = fVar29 + 0.0;
        }
        else {
          in_stack_000000f8._4_4_ = 0.0 - fVar23;
        }
        break;
      case 2:
LAB_03555018:
        in_stack_000000f8._4_4_ = (fVar29 + fVar32 * 0.5) - fVar23 * 0.5;
        break;
      default:
        goto switchD_03554f58_caseD_3;
      case 4:
        in_stack_000000f8._4_4_ = (fVar32 + fVar29) - fVar23;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar32 + fVar29;
        }
        break;
      case 8:
        goto switchD_03554f58_caseD_8;
      }
LAB_03555088:
      in_stack_000000e8 = 0;
    }
    else if (uVar21 == 0x10) {
switchD_03554f58_caseD_8:
      if (uVar2 < 0xad) {
        if ((uVar2 != 3) && (uVar2 != 10)) {
LAB_03554fac:
          if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar4) goto LAB_035575f4;
          uVar3 = *(undefined2 *)(in_stack_000000f0 + in_stack_000000e0 * 0x178 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar10 = FUN_026b8cc4(uVar3,0);
          if ((uVar10 & 1) == 0) {
            bVar6 = (int)in_stack_00000160 < (int)unaff_x19[0x95];
          }
          else {
            bVar6 = false;
          }
          if ((fVar23 <= fVar32) && (!bVar6 && uVar21 >> 4 == 0)) {
            in_stack_000000f8._4_4_ = fVar29;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000f8._4_4_ = fVar32 + fVar29;
            }
            goto LAB_03555088;
          }
          if (((uVar26 == 1) || (in_stack_00000160 != uVar9)) ||
             (uStack000000000000015c == *(uint *)((long)unaff_x19 + 0x324))) {
            in_stack_000000f8._4_4_ = fVar29;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000f8._4_4_ = fVar32 + fVar29;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uStack0000000000000028 = FUN_026b97f8(in_stack_00000168._4_4_,0);
            in_stack_000000e8 = 0;
          }
          else {
            cVar12 = (char)unaff_x19[0x1e];
            fVar29 = -fVar23;
            if (cVar12 != '\0') {
              fVar29 = fVar23;
            }
            if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar4) goto LAB_035575f4;
            iVar7 = (int)*(char *)(in_stack_000000f0 + in_stack_000000e0 * 0x178 + 0x194) +
                    (-iVar1 - (uStack0000000000000028 & 1)) + iVar7 + -1;
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
                cVar12 = (char)unaff_x19[0x1e];
                if ((uVar10 & 1) != 0) goto LAB_03556e74;
              }
              iVar7 = (iVar1 - (~uStack0000000000000028 & 1)) + iVar8;
            }
            fVar23 = ((fVar32 + fVar29) * fVar23) / (float)iVar7;
            if (cVar12 == '\0') {
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
      else if (((uVar2 != 0xad) && (uVar2 != 0x200b)) && (uVar2 != 0x2060)) goto LAB_03554fac;
    }
    else if (uVar21 == 0x20) {
      fVar23 = fVar31 + fVar30;
      goto LAB_03555018;
    }
switchD_03554f58_caseD_3:
    uVar21 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
    if (uVar21 <= uStack000000000000015c) goto LAB_035575f4;
    lVar13 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar29 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
    in_stack_00000140 = (float)in_stack_000000b8 + (float)in_stack_000000e8;
    fVar23 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)((ulong)in_stack_000000e8 >> 0x20);
    if (*(char *)(lVar13 + 0x194) == '\0') goto LAB_03555938;
    iVar8 = *(int *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x2c);
    if (iVar8 != 0) goto LAB_0355574c;
    fVar32 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)in_stack_00000160,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
    case 0:
      lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
      *(undefined4 *)(lVar16 + 0x84) = 0;
      *(undefined4 *)(lVar16 + 0xac) = 0;
      *(undefined4 *)(lVar16 + 0xd4) = 0x3f800000;
      fVar32 = 1.0;
      break;
    case 1:
      fVar28 = *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
        lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
        fVar30 = (in_stack_000000f8._4_4_ + fVar28) - *(float *)(in_stack_00000080 + 0x230);
        fVar28 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
        goto LAB_035551cc;
      }
      lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar30 = fVar30 - fVar31;
      *(float *)(lVar16 + 0x84) = fVar32 + (fVar28 - fVar31) / fVar30;
      *(float *)(lVar16 + 0xac) = fVar32 + (*(float *)(lVar16 + 0x98) - fVar31) / fVar30;
      *(float *)(lVar16 + 0xd4) = fVar32 + (*(float *)(lVar16 + 0xc0) - fVar31) / fVar30;
      fVar32 = fVar32 + (*(float *)(lVar16 + 0xe8) - fVar31) / fVar30;
      break;
    case 2:
      lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar28 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      fVar30 = (in_stack_000000f8._4_4_ + *(float *)(lVar16 + 0x70)) -
               *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
      *(float *)(lVar16 + 0x84) = fVar32 + fVar30 / fVar28;
      *(float *)(lVar16 + 0xac) =
           fVar32 + ((in_stack_000000f8._4_4_ + *(float *)(lVar16 + 0x98)) -
                    *(float *)(in_stack_00000080 + 0x230)) /
                    (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
      *(float *)(lVar16 + 0xd4) =
           fVar32 + ((in_stack_000000f8._4_4_ + *(float *)(lVar16 + 0xc0)) -
                    *(float *)(in_stack_00000080 + 0x230)) /
                    (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
      fVar32 = fVar32 + ((in_stack_000000f8._4_4_ + *(float *)(lVar16 + 0xe8)) -
                        *(float *)(in_stack_00000080 + 0x230)) /
                        (*(float *)(in_stack_00000080 + 0x238) -
                        *(float *)(in_stack_00000080 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x62]) {
      case 0:
        lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
        *(undefined4 *)(lVar16 + 0x88) = 0;
        *(undefined4 *)(lVar16 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar16 + 0xd8) = 0;
        *(undefined4 *)(lVar16 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
        fVar28 = fVar28 - fVar33;
        fVar30 = fVar32 + (*(float *)(lVar16 + 0x74) - fVar33) / fVar28;
        fVar28 = fVar32 + (*(float *)(lVar16 + 0x9c) - fVar33) / fVar28;
        *(float *)(lVar16 + 0x88) = fVar30;
        *(float *)(lVar16 + 0xb0) = fVar28;
        *(float *)(lVar16 + 0xd8) = fVar30;
        *(float *)(lVar16 + 0x100) = fVar28;
        break;
      case 2:
        lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
        fVar30 = fVar32 + (*(float *)(lVar16 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                          (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
        *(float *)(lVar16 + 0x88) = fVar30;
        fVar28 = *(float *)(unaff_x19 + 0x9c);
        fVar31 = *(float *)(unaff_x19 + 0x9d);
        *(float *)(lVar16 + 0xd8) = fVar30;
        fVar30 = fVar32 + (*(float *)(lVar16 + 0x9c) - fVar28) / (fVar31 - fVar28);
        *(float *)(lVar16 + 0xb0) = fVar30;
        *(float *)(lVar16 + 0x100) = fVar30;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar21 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
      }
      if (uVar21 <= uStack000000000000015c) goto LAB_035575f4;
      lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar30 = *(float *)(lVar16 + 0x15c);
      fVar28 = (1.0 - (*(float *)(lVar16 + 0x88) + *(float *)(lVar16 + 0xb0)) * fVar30) * 0.5;
      fVar31 = fVar32 + *(float *)(lVar16 + 0x88) * fVar30 + fVar28;
      fVar32 = fVar32 + fVar28 + *(float *)(lVar16 + 0xb0) * fVar30;
      *(float *)(lVar16 + 0x84) = fVar31;
      *(float *)(lVar16 + 0xac) = fVar31;
      *(float *)(lVar16 + 0xd4) = fVar32;
      break;
    default:
      goto switchD_0355512c_default;
    }
    *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xfc) = fVar32;
switchD_0355512c_default:
    switch((int)unaff_x19[0x62]) {
    case 0:
      if (uVar21 <= uStack000000000000015c) goto LAB_035575f4;
      lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
      *(undefined4 *)(lVar16 + 0x88) = 0;
      *(undefined4 *)(lVar16 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar16 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar16 + 0x100) = 0;
      break;
    case 1:
      if (uStack000000000000015c < uVar21) {
        lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
        fVar25 = fVar25 - fVar27;
        fVar30 = (*(float *)(lVar16 + 0x74) - fVar27) / fVar25;
        fVar25 = (*(float *)(lVar16 + 0x9c) - fVar27) / fVar25;
        *(float *)(lVar16 + 0x88) = fVar30;
        goto UnityEngine_Animator__set_stabilizeFeet;
      }
      goto LAB_035575f4;
    case 2:
      if (uVar21 <= uStack000000000000015c) goto LAB_035575f4;
      lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar30 = (*(float *)(lVar16 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar16 + 0x88) = fVar30;
      fVar25 = (*(float *)(lVar16 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
      *(float *)(lVar16 + 0xb0) = fVar25;
      *(float *)(lVar16 + 0xd8) = fVar25;
      *(float *)(lVar16 + 0x100) = fVar30;
      break;
    case 3:
      if (uVar21 <= uStack000000000000015c) goto LAB_035575f4;
      lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar28 = *(float *)(lVar16 + 0x15c);
      fVar25 = (1.0 - (*(float *)(lVar16 + 0x84) + *(float *)(lVar16 + 0xd4)) / fVar28) * 0.5;
      fVar30 = *(float *)(lVar16 + 0x84) / fVar28 + fVar25;
      fVar25 = fVar25 + *(float *)(lVar16 + 0xd4) / fVar28;
      *(float *)(lVar16 + 0x88) = fVar30;
      *(float *)(lVar16 + 0xb0) = fVar25;
      *(float *)(lVar16 + 0x100) = fVar30;
      *(float *)(lVar16 + 0xd8) = fVar25;
    }
    if (uVar21 <= uStack000000000000015c) goto LAB_035575f4;
    lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
    unaff_s14 = *(float *)(lVar16 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    if ((*(char *)(lVar16 + 0x5c) == '\0') &&
       ((*(byte *)(in_stack_000000f0 + unaff_x24 * 0x178 + 400) & 1) != 0)) {
      unaff_s14 = -unaff_s14;
    }
    fVar30 = in_stack_00000050._4_4_;
    if (((in_stack_00000058 == 2) || (fVar30 = fStack0000000000000034, in_stack_00000058 == 1)) ||
       (fVar30 = fStack000000000000002c, in_stack_00000058 == 0)) {
      unaff_s14 = fVar30 * unaff_s14;
    }
    lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar25 = *(float *)(lVar16 + 0x88);
    fVar28 = *(float *)(lVar16 + 0x84);
    fVar30 = -2.1474836e+09;
    if (fVar28 != INFINITY) {
      fVar30 = (float)(int)fVar28;
    }
    fVar31 = *(float *)(lVar16 + 0xd4);
    fVar32 = *(float *)(lVar16 + 0xd8);
    fVar27 = -2.1474836e+09;
    if (fVar25 != INFINITY) {
      fVar27 = (float)(int)fVar25;
    }
    uVar22 = FUN_03591d3c(fVar28 - fVar30,fVar25 - fVar27);
    *(undefined4 *)(lVar16 + 0x84) = uVar22;
    if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    fVar32 = fVar32 - fVar27;
    *(float *)(lVar16 + 0x88) = unaff_s14;
    uVar22 = FUN_03591d3c(fVar28 - fVar30,fVar32);
    *(undefined4 *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xac) = uVar22;
    if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    fVar31 = fVar31 - fVar30;
    *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xb0) = unaff_s14;
    fVar30 = (float)FUN_03591d3c(fVar31,fVar32);
    *(float *)(lVar16 + 0xd4) = fVar30;
    if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    *(float *)(lVar16 + 0xd8) = unaff_s14;
    uVar22 = FUN_03591d3c(fVar31,fVar25 - fVar27);
    *(undefined4 *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xfc) = uVar22;
    uVar21 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
    if (uVar21 <= uStack000000000000015c) goto LAB_035575f4;
    *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x100) = unaff_s14;
    unaff_x21 = in_stack_00000048;
LAB_0355574c:
    if (((int)uStack000000000000015c < (int)unaff_x19[0x65]) &&
       (iStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
      if (((int)unaff_x19[0x66] <= (int)in_stack_00000160) || ((int)unaff_x19[0x5c] == 5)) {
        if (((int)in_stack_00000160 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
          if (uStack000000000000015c < uVar21) {
            if (*(int *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x68) == iStack0000000000000030) {
              lVar13 = in_stack_000000f0 + unaff_x24 * 0x178;
              *(ulong *)(lVar13 + 0x70) =
                   CONCAT44(in_stack_00000140 +
                            (float)((ulong)*(undefined8 *)(lVar13 + 0x70) >> 0x20),
                            fVar29 + (float)*(undefined8 *)(lVar13 + 0x70));
              *(float *)(lVar13 + 0x78) = fVar23 + *(float *)(lVar13 + 0x78);
              *(ulong *)(lVar13 + 0x98) =
                   CONCAT44(in_stack_00000140 +
                            (float)((ulong)*(undefined8 *)(lVar13 + 0x98) >> 0x20),
                            fVar29 + (float)*(undefined8 *)(lVar13 + 0x98));
              *(float *)(lVar13 + 0xa0) = fVar23 + *(float *)(lVar13 + 0xa0);
              *(ulong *)(lVar13 + 0xc0) =
                   CONCAT44(in_stack_00000140 +
                            (float)((ulong)*(undefined8 *)(lVar13 + 0xc0) >> 0x20),
                            fVar29 + (float)*(undefined8 *)(lVar13 + 0xc0));
              *(float *)(lVar13 + 200) = fVar23 + *(float *)(lVar13 + 200);
              *(ulong *)(lVar13 + 0xe8) =
                   CONCAT44(in_stack_00000140 +
                            (float)((ulong)*(undefined8 *)(lVar13 + 0xe8) >> 0x20),
                            fVar29 + (float)*(undefined8 *)(lVar13 + 0xe8));
              *(float *)(lVar13 + 0xf0) = fVar23 + *(float *)(lVar13 + 0xf0);
              goto UnityEngine_Animator__GetAnimatorClipInfoCount;
            }
            goto UnityEngine_Animator__GetAnimatorTransitionInfo;
          }
          goto LAB_035575f4;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      if (uVar21 <= uStack000000000000015c) goto LAB_035575f4;
      lVar13 = in_stack_000000f0 + unaff_x24 * 0x178;
      *(ulong *)(lVar13 + 0x70) =
           CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar13 + 0x70) >> 0x20),
                    fVar29 + (float)*(undefined8 *)(lVar13 + 0x70));
      *(float *)(lVar13 + 0x78) = fVar23 + *(float *)(lVar13 + 0x78);
      *(ulong *)(lVar13 + 0x98) =
           CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar13 + 0x98) >> 0x20),
                    fVar29 + (float)*(undefined8 *)(lVar13 + 0x98));
      *(float *)(lVar13 + 0xa0) = fVar23 + *(float *)(lVar13 + 0xa0);
      *(ulong *)(lVar13 + 0xc0) =
           CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar13 + 0xc0) >> 0x20),
                    fVar29 + (float)*(undefined8 *)(lVar13 + 0xc0));
      *(float *)(lVar13 + 200) = fVar23 + *(float *)(lVar13 + 200);
      *(ulong *)(lVar13 + 0xe8) =
           CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar13 + 0xe8) >> 0x20),
                    fVar29 + (float)*(undefined8 *)(lVar13 + 0xe8));
      *(float *)(lVar13 + 0xf0) = fVar23 + *(float *)(lVar13 + 0xf0);
    }
    else {
UnityEngine_Animator__GetAnimatorTransitionInfo:
      if (uVar21 <= uStack000000000000015c) goto LAB_035575f4;
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cbded8);
        DAT_0411f172 = '\x01';
        uVar21 = *(uint *)(in_stack_000000f0 + 0x18);
      }
      puVar5 = PTR_DAT_03cbded8;
      uVar22 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
      lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
      *(undefined8 *)(lVar16 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
      *(undefined4 *)(lVar16 + 0x78) = uVar22;
      if (uVar21 <= uStack000000000000015c) goto LAB_035575f4;
      uVar22 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
      lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
      *(undefined8 *)(lVar16 + 0x98) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
      *(undefined4 *)(lVar16 + 0xa0) = uVar22;
      uVar22 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
      *(undefined8 *)(lVar16 + 0xc0) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
      *(undefined4 *)(lVar16 + 200) = uVar22;
      uVar22 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
      *(undefined8 *)(lVar16 + 0xe8) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
      *(undefined4 *)(lVar16 + 0xf0) = uVar22;
      *(undefined1 *)(lVar13 + 0x194) = 0;
    }
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
    if ((*in_stack_00000170 == 0) || (lVar13 = *(long *)(*in_stack_00000170 + 0x38), lVar13 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar13 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    lVar13 = lVar13 + unaff_x24 * 0x178;
    uVar24 = *(undefined8 *)(lVar13 + 0x11c);
    *(undefined8 *)(lVar13 + 0x11c) =
         CONCAT44(in_stack_00000140 + (float)((ulong)uVar24 >> 0x20),fVar29 + (float)uVar24);
    *(float *)(lVar13 + 0x124) = fVar23 + *(float *)(lVar13 + 0x124);
    if ((*in_stack_00000170 == 0) || (lVar13 = *(long *)(*in_stack_00000170 + 0x38), lVar13 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar13 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    lVar13 = lVar13 + unaff_x24 * 0x178;
    *(ulong *)(lVar13 + 0x110) =
         CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar13 + 0x110) >> 0x20),
                  fVar29 + (float)*(undefined8 *)(lVar13 + 0x110));
    *(float *)(lVar13 + 0x118) = fVar23 + *(float *)(lVar13 + 0x118);
    if ((*in_stack_00000170 == 0) || (lVar13 = *(long *)(*in_stack_00000170 + 0x38), lVar13 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar13 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    lVar13 = lVar13 + unaff_x24 * 0x178;
    *(ulong *)(lVar13 + 0x128) =
         CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar13 + 0x128) >> 0x20),
                  fVar29 + (float)*(undefined8 *)(lVar13 + 0x128));
    *(float *)(lVar13 + 0x130) = fVar23 + *(float *)(lVar13 + 0x130);
    if ((*in_stack_00000170 == 0) || (lVar13 = *(long *)(*in_stack_00000170 + 0x38), lVar13 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar13 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    lVar13 = lVar13 + unaff_x24 * 0x178;
    *(float *)(lVar13 + 0x134) = fVar29 + *(float *)(lVar13 + 0x134);
    *(ulong *)(lVar13 + 0x138) =
         CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar13 + 0x138) >> 0x20),
                  in_stack_00000140 + (float)*(undefined8 *)(lVar13 + 0x138));
    lVar13 = *in_stack_00000170;
    if ((lVar13 == 0) || (lVar16 = *(long *)(lVar13 + 0x38), lVar16 == 0)) goto LAB_035574b8;
    uVar21 = *(uint *)(lVar16 + 0x18);
    if (uVar21 <= uStack000000000000015c) goto LAB_035575f4;
    lVar15 = lVar16 + unaff_x24 * 0x178;
    param_3 = CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar15 + 0x140) >> 0x20),
                       fVar29 + (float)*(undefined8 *)(lVar15 + 0x140));
    fVar23 = in_stack_00000140 + *(float *)(lVar15 + 0x150);
    param_4 = (ulong)(uint)fVar23;
    param_5 = CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar15 + 0x148) >> 0x20),
                       in_stack_00000140 + (float)*(undefined8 *)(lVar15 + 0x148));
    *(float *)(lVar15 + 0x150) = fVar23;
    *(ulong *)(lVar15 + 0x140) = param_3;
    *(ulong *)(lVar15 + 0x148) = param_5;
    if (in_stack_00000160 == uVar9) {
      uVar9 = *unaff_x21 - 1;
      if (uStack000000000000015c == uVar9) goto LAB_03555b44;
    }
    else {
      lVar13 = *(long *)(lVar13 + 0x50);
      if (lVar13 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_035575f4;
      lVar15 = (long)(int)uVar9;
      lVar17 = lVar13 + lVar15 * 0x5c;
      param_5 = (ulong)(uint)*(float *)(lVar17 + 0x58);
      fVar23 = in_stack_00000140 + *(float *)(lVar17 + 0x54);
      param_3 = (ulong)(uint)fVar23;
      fVar30 = fVar29 + *(float *)(lVar17 + 0x58);
      param_4 = (ulong)(uint)fVar30;
      *(ulong *)(lVar17 + 0x4c) =
           CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar17 + 0x4c) >> 0x20),
                    in_stack_00000140 + (float)*(undefined8 *)(lVar17 + 0x4c));
      *(float *)(lVar17 + 0x54) = fVar23;
      *(float *)(lVar17 + 0x58) = fVar30;
      if (uVar21 <= *(uint *)(lVar17 + 0x34)) goto LAB_035575f4;
      uVar22 = *(undefined4 *)(lVar16 + (long)(int)*(uint *)(lVar17 + 0x34) * 0x178 + 0x11c);
      lVar13 = lVar13 + lVar15 * 0x5c;
      *(float *)(lVar13 + 0x70) = fVar23;
      *(undefined4 *)(lVar13 + 0x6c) = uVar22;
      lVar13 = *in_stack_00000170;
      if ((lVar13 == 0) || (lVar16 = *(long *)(lVar13 + 0x50), lVar16 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_035575f4;
      lVar13 = *(long *)(lVar13 + 0x38);
      if (lVar13 == 0) goto LAB_035574b8;
      uVar9 = *(uint *)(lVar16 + lVar15 * 0x5c + 0x40);
      if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_035575f4;
      lVar16 = lVar16 + lVar15 * 0x5c;
      *(undefined4 *)(lVar16 + 0x74) = *(undefined4 *)(lVar13 + (long)(int)uVar9 * 0x178 + 0x128);
      *(undefined4 *)(lVar16 + 0x78) = *(undefined4 *)(lVar16 + 0x4c);
      uVar9 = *unaff_x21 - 1;
LAB_03555b44:
      if (uStack000000000000015c == uVar9) {
        lVar13 = *in_stack_00000170;
        if ((lVar13 == 0) || (lVar16 = *(long *)(lVar13 + 0x50), lVar16 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar16 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
        lVar15 = lVar16 + lVar20 * 0x5c;
        param_5 = (ulong)(uint)*(float *)(lVar15 + 0x58);
        param_3 = CONCAT44(in_stack_00000140 +
                           (float)((ulong)*(undefined8 *)(lVar15 + 0x4c) >> 0x20),
                           in_stack_00000140 + (float)*(undefined8 *)(lVar15 + 0x4c));
        fVar23 = in_stack_00000140 + *(float *)(lVar15 + 0x54);
        fVar29 = fVar29 + *(float *)(lVar15 + 0x58);
        param_4 = (ulong)(uint)fVar29;
        *(ulong *)(lVar15 + 0x4c) = param_3;
        *(float *)(lVar15 + 0x54) = fVar23;
        *(float *)(lVar15 + 0x58) = fVar29;
        lVar13 = *(long *)(lVar13 + 0x38);
        if (lVar13 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar13 + 0x18) <= *(uint *)(lVar15 + 0x34)) goto LAB_035575f4;
        uVar22 = *(undefined4 *)(lVar13 + (long)(int)*(uint *)(lVar15 + 0x34) * 0x178 + 0x11c);
        lVar16 = lVar16 + lVar20 * 0x5c;
        *(float *)(lVar16 + 0x70) = fVar23;
        *(undefined4 *)(lVar16 + 0x6c) = uVar22;
        lVar13 = *in_stack_00000170;
        if ((lVar13 == 0) || (lVar16 = *(long *)(lVar13 + 0x50), lVar16 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar16 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
        lVar13 = *(long *)(lVar13 + 0x38);
        if (lVar13 == 0) goto LAB_035574b8;
        uVar9 = *(uint *)(lVar16 + lVar20 * 0x5c + 0x40);
        if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_035575f4;
        lVar16 = lVar16 + lVar20 * 0x5c;
        *(undefined4 *)(lVar16 + 0x74) = *(undefined4 *)(lVar13 + (long)(int)uVar9 * 0x178 + 0x128);
        *(undefined4 *)(lVar16 + 0x78) = *(undefined4 *)(lVar16 + 0x4c);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar10 = FUN_026b82c4(in_stack_00000168._4_4_,0);
    if (((((uVar10 & 1) == 0) && (1 < in_stack_00000168._4_4_ - 0x2010)) &&
        (in_stack_00000168._4_4_ != 0xad)) && (in_stack_00000168._4_4_ != 0x2d)) {
      if ((in_stack_00000118._4_4_ & 1) == 0) {
        if (uVar26 != 1) {
LAB_0355686c:
          in_stack_00000118._4_4_ = 0;
          goto LAB_03555d70;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar10 = FUN_026b81f8(in_stack_00000168._4_4_,0);
        if ((uVar10 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar10 = FUN_026b63d8(in_stack_00000168._4_4_,0);
          if (((in_stack_00000168._4_4_ != 0x200b) && ((uVar10 & 1) == 0)) && (*unaff_x21 != 1))
          goto LAB_0355686c;
        }
      }
      else if (((uVar26 != 1) &&
               ((int)uStack000000000000015c < (int)(*(uint *)(in_stack_000000f0 + 0x18) - 1))) &&
              (((int)uStack000000000000015c < *unaff_x21 &&
               ((in_stack_00000168._4_4_ == 0x2019 || (in_stack_00000168._4_4_ == 0x27)))))) {
        if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c - 1) goto LAB_035575f4;
        uVar3 = *(undefined2 *)(in_stack_000000f0 + unaff_x27 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar10 = FUN_026b82c4(uVar3,0);
        if ((uVar10 & 1) != 0) {
          if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar26) goto LAB_035575f4;
          uVar3 = *(undefined2 *)(in_stack_000000f0 + unaff_x27 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar10 = FUN_026b82c4(uVar3,0);
          if ((uVar10 & 1) != 0) goto LAB_03555d68;
        }
      }
      if (uStack000000000000015c == *unaff_x21 - 1U) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar10 = FUN_026b82c4(in_stack_00000168._4_4_,0);
        iVar8 = iStack0000000000000128;
        if ((uVar10 & 1) == 0) goto LAB_03556070;
      }
      else {
LAB_03556070:
        iVar8 = uStack000000000000015c - 1;
      }
      lVar13 = *in_stack_00000170;
      if (lVar13 == 0) goto LAB_035574b8;
      lVar16 = *(long *)(lVar13 + 0x40);
      if (lVar16 == 0) goto LAB_035574b8;
      uVar9 = *(uint *)(lVar13 + 0x24);
      iVar7 = *(int *)(lVar16 + 0x18);
      if (iVar7 < (int)(uVar9 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar13 + 0x40),iVar7 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo)
        ;
        lVar13 = *in_stack_00000170;
        if (lVar13 == 0) goto LAB_035574b8;
      }
      lVar13 = *(long *)(lVar13 + 0x40);
      if (lVar13 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_035575f4;
      lVar13 = lVar13 + (long)(int)uVar9 * 0x18;
      *(long **)(lVar13 + 0x20) = unaff_x19;
      *(uint *)(lVar13 + 0x28) = uStack0000000000000158;
      *(int *)(lVar13 + 0x2c) = iVar8;
      *(uint *)(lVar13 + 0x30) = (iVar8 - uStack0000000000000158) + 1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar13 = unaff_x19[0x6d];
      if (lVar13 == 0) goto LAB_035574b8;
      lVar16 = *(long *)(lVar13 + 0x50);
      *(int *)(lVar13 + 0x24) = *(int *)(lVar13 + 0x24) + 1;
      if (lVar16 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar16 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
      lVar16 = lVar16 + lVar20 * 0x5c;
      in_stack_00000118._4_4_ = 0;
      iStack00000000000000d4 = iStack00000000000000d4 + 1;
      *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + 1;
    }
    else {
      if ((in_stack_00000118._4_4_ & 1) == 0) {
        uStack0000000000000158 = uStack000000000000015c;
      }
      if (uStack000000000000015c == *unaff_x21 - 1U) {
        lVar13 = *in_stack_00000170;
        if (lVar13 == 0) goto LAB_035574b8;
        lVar16 = *(long *)(lVar13 + 0x40);
        if (lVar16 == 0) goto LAB_035574b8;
        uVar9 = *(uint *)(lVar13 + 0x24);
        iVar8 = *(int *)(lVar16 + 0x18);
        if (iVar8 < (int)(uVar9 + 1)) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff025c((long *)(lVar13 + 0x40),iVar8 + 1,
                       *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
          lVar13 = *in_stack_00000170;
          if (lVar13 == 0) goto LAB_035574b8;
        }
        lVar13 = *(long *)(lVar13 + 0x40);
        if (lVar13 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_035575f4;
        lVar13 = lVar13 + (long)(int)uVar9 * 0x18;
        *(long **)(lVar13 + 0x20) = unaff_x19;
        *(uint *)(lVar13 + 0x28) = uStack0000000000000158;
        *(uint *)(lVar13 + 0x2c) = uStack000000000000015c;
        *(uint *)(lVar13 + 0x30) = uVar26 - uStack0000000000000158;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar13 = unaff_x19[0x6d];
        if (lVar13 == 0) goto LAB_035574b8;
        lVar16 = *(long *)(lVar13 + 0x50);
        *(int *)(lVar13 + 0x24) = *(int *)(lVar13 + 0x24) + 1;
        if (lVar16 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar16 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
        lVar16 = lVar16 + lVar20 * 0x5c;
        iStack00000000000000d4 = iStack00000000000000d4 + 1;
        *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + 1;
      }
LAB_03555d68:
      in_stack_00000118._4_4_ = 1;
    }
LAB_03555d70:
    unaff_x22 = 0x178;
    if ((*in_stack_00000170 == 0) || (lVar13 = *(long *)(*in_stack_00000170 + 0x38), lVar13 == 0))
    goto LAB_035574b8;
    uVar9 = *(uint *)(lVar13 + 0x18);
    if (uVar9 <= uStack000000000000015c) goto LAB_035575f4;
    unaff_w25 = uStack000000000000015c;
    in_stack_00000120 = unaff_x27;
    if ((*(byte *)(lVar13 + unaff_x24 * 0x178 + 400) >> 2 & 1) == 0) {
      unaff_x28 = in_stack_00000170;
      uStack000000000000015c = uVar26;
      if (unaff_w29 == 0) {
LAB_03556254:
        unaff_w29 = 0;
        uVar9 = in_stack_00000160;
      }
      else {
LAB_03555da0:
        if (uVar9 <= uStack000000000000015c - 2) goto LAB_035575f4;
        lVar16 = *unaff_x19;
        uVar9 = *(uint *)(lVar13 + unaff_x27 + -0x330);
        uVar22 = *(undefined4 *)(lVar13 + unaff_x27 + -0x2f8);
LAB_035562ec:
        pcVar14 = *(code **)(lVar16 + 0x8d8);
LAB_035562f4:
        param_5 = (ulong)uVar9;
        param_3 = (ulong)(uint)fStack0000000000000070;
        param_4 = (ulong)uStack0000000000000074;
        (*pcVar14)(in_stack_00000078,param_3,param_4,param_5,fStack0000000000000104,0,
                   in_stack_00000088._4_4_,uVar22);
        puVar5 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar13 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar13 = *(long *)puVar5;
        }
LAB_03556348:
        unaff_w29 = 0;
        unaff_s15 = 0.0;
        fStack0000000000000104 = *(float *)(*(long *)(lVar13 + 0xb8) + 0x15a8);
        fStack0000000000000100 = 0.0;
        uVar9 = in_stack_00000160;
      }
      goto LAB_03556364;
    }
    lVar13 = lVar13 + unaff_x24 * 0x178;
    unaff_w23 = *(int *)(lVar13 + 0x68);
    *(undefined4 *)(lVar13 + 0x16c) = in_stack_000017c4;
    param_1 = (long *)PTR_DAT_03cc02b0;
    if ((((int)unaff_x19[0x65] < (int)uStack000000000000015c) ||
        ((int)unaff_x19[0x66] < (int)in_stack_00000160)) ||
       (((int)unaff_x19[0x5c] == 5 && (unaff_w23 + 1 != (int)unaff_x19[0x67])))) {
      in_stack_00000130 = 0;
      unaff_x28 = in_stack_00000170;
      uStack000000000000015c = uVar26;
    }
    else {
      in_stack_00000130 = 1;
      unaff_x28 = in_stack_00000170;
      uStack000000000000015c = uVar26;
    }
  } while( true );
  while( true ) {
    lVar13 = *unaff_x28;
    lVar16 = lVar16 + 1;
    lVar20 = lVar20 + 0x50;
    if (lVar13 == 0) break;
    uVar10 = lVar16 + 1;
    if ((long)*(int *)(lVar13 + 0x34) <= (long)uVar10) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar13 = *(long *)(lVar13 + 0x60);
    if (lVar13 == 0) break;
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_035575f4;
    FUN_03596a20(lVar13 + lVar20 + 0x70,0);
    lVar13 = unaff_x19[0xe1];
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_035575f4;
    uVar18 = *(undefined8 *)(lVar13 + lVar16 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar11 = FUN_036d35a8(uVar18,0,0);
    if ((uVar11 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*unaff_x28 == 0) || (lVar13 = *(long *)(*unaff_x28 + 0x60), lVar13 == 0)) break;
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar10) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03596b20(lVar13 + lVar20 + 0x70,1,0);
      }
      lVar13 = unaff_x19[0xe1];
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_035575f4;
      lVar13 = *(long *)(lVar13 + lVar16 * 8 + 0x28);
      if (lVar13 == 0) break;
      lVar13 = UnityEngine_Material__GetColorArray(lVar13,0);
      if ((*unaff_x28 == 0) || (lVar15 = *(long *)(*unaff_x28 + 0x60), lVar15 == 0)) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar10) goto LAB_035575f4;
      if (lVar13 == 0) break;
      FUN_036a460c(lVar13,*(undefined8 *)(lVar15 + lVar20 + 0x80),0);
      lVar13 = unaff_x19[0xe1];
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_035575f4;
      lVar13 = *(long *)(lVar13 + lVar16 * 8 + 0x28);
      if (lVar13 == 0) break;
      lVar13 = UnityEngine_Material__GetColorArray(lVar13,0);
      if ((*unaff_x28 == 0) || (lVar15 = *(long *)(*unaff_x28 + 0x60), lVar15 == 0)) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar10) goto LAB_035575f4;
      if (lVar13 == 0) break;
      FUN_036a4810(lVar13,*(undefined8 *)(lVar15 + lVar20 + 0x98),0);
      lVar13 = unaff_x19[0xe1];
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_035575f4;
      lVar13 = *(long *)(lVar13 + lVar16 * 8 + 0x28);
      if (lVar13 == 0) break;
      lVar13 = UnityEngine_Material__GetColorArray(lVar13,0);
      if ((*unaff_x28 == 0) || (lVar15 = *(long *)(*unaff_x28 + 0x60), lVar15 == 0)) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar10) goto LAB_035575f4;
      if (lVar13 == 0) break;
      FUN_036a48bc(lVar13,*(undefined8 *)(lVar15 + lVar20 + 0xa0),0);
      lVar13 = unaff_x19[0xe1];
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_035575f4;
      lVar13 = *(long *)(lVar13 + lVar16 * 8 + 0x28);
      if (lVar13 == 0) break;
      lVar13 = UnityEngine_Material__GetColorArray(lVar13,0);
      if ((*unaff_x28 == 0) || (lVar15 = *(long *)(*unaff_x28 + 0x60), lVar15 == 0)) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar10) goto LAB_035575f4;
      if (lVar13 == 0) break;
      FUN_036a4e24(lVar13,*(undefined8 *)(lVar15 + lVar20 + 0xa8),0);
      lVar13 = unaff_x19[0xe1];
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_035575f4;
      lVar13 = *(long *)(lVar13 + lVar16 * 8 + 0x28);
      if ((lVar13 == 0) || (lVar13 = UnityEngine_Material__GetColorArray(lVar13,0), lVar13 == 0))
      break;
      FUN_036aa280(lVar13,0);
      lVar13 = unaff_x19[0xe1];
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_035575f4;
      lVar13 = *(long *)(lVar13 + lVar16 * 8 + 0x28);
      if (lVar13 == 0) break;
      lVar13 = FUN_037b514c(lVar13,0);
      lVar15 = unaff_x19[0xe1];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar10) goto LAB_035575f4;
      lVar15 = *(long *)(lVar15 + lVar16 * 8 + 0x28);
      if ((lVar15 == 0) || (uVar18 = UnityEngine_Material__GetColorArray(lVar15,0), lVar13 == 0))
      break;
      FUN_0390f3a4(lVar13,uVar18,0);
      lVar13 = unaff_x19[0xe1];
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_035575f4;
      lVar13 = *(long *)(lVar13 + lVar16 * 8 + 0x28);
      if ((lVar13 == 0) || (lVar13 = FUN_037b514c(lVar13,0), lVar13 == 0)) break;
      FUN_0390eec8(uVar24,param_3,param_4,param_5,lVar13,0);
      lVar13 = unaff_x19[0xe1];
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_035575f4;
      lVar13 = *(long *)(lVar13 + lVar16 * 8 + 0x28);
      if ((lVar13 == 0) || (lVar13 = FUN_037b514c(lVar13,0), lVar13 == 0)) break;
      FUN_0390ed78(lVar13,uVar9 & 1,0);
      lVar13 = unaff_x19[0xe1];
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_035575f4;
      plVar19 = *(long **)(lVar13 + lVar16 * 8 + 0x28);
      uVar26 = (**(code **)(*unaff_x19 + 0x2b8))();
      if (plVar19 == (long *)0x0) break;
      (**(code **)(*plVar19 + 0x2c8))(plVar19,uVar26 & 1,*(undefined8 *)(*plVar19 + 0x2d0));
    }
  }
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


