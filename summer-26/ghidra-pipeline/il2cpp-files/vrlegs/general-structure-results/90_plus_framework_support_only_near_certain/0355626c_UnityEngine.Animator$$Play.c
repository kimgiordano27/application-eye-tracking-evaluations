/*
FUNCTION_NAME: UnityEngine.Animator$$Play
ENTRY_POINT: 0355626c
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


void UnityEngine_Animator__Play(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  float fVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  char cVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long *unaff_x19;
  int *unaff_x20;
  undefined8 uVar23;
  long *plVar24;
  long unaff_x22;
  long unaff_x23;
  long lVar25;
  long unaff_x24;
  uint unaff_w25;
  long unaff_x27;
  long *unaff_x28;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  ulong uVar31;
  uint uVar32;
  float fVar33;
  uint uVar34;
  ulong in_d3;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
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
  long in_stack_00000080;
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
  
code_r0x0355626c:
  fVar10 = fStack0000000000000104;
  if (*(uint *)(param_1 + 0x18) <= unaff_w25) goto LAB_035575f4;
  param_1 = param_1 + unaff_x24 * unaff_x22;
  fVar27 = *(float *)(param_1 + 0x160);
  uVar32 = *(uint *)(param_1 + 0x11c);
  uVar14 = (ulong)uVar32;
  bVar11 = unaff_s15 != 0.0;
  fVar28 = fVar27;
  if (bVar11) {
    fVar28 = unaff_s15;
  }
  unaff_s15 = fVar28;
  uVar3 = *(undefined4 *)(param_1 + 0x168);
  fVar28 = unaff_s14;
  if (bVar11) {
    fVar28 = fStack0000000000000100;
  }
  uVar31 = (ulong)(uint)fVar28;
  fStack0000000000000100 = fVar28;
  uVar34 = uStack000000000000015c;
LAB_035562b4:
  uStack000000000000015c = uVar34;
  if (*unaff_x20 == 1) {
    if ((*unaff_x28 == 0) || (lVar18 = *(long *)(*unaff_x28 + 0x38), lVar18 == 0))
    goto LAB_035574b8;
    if (unaff_w25 < *(uint *)(lVar18 + 0x18)) {
      lVar18 = lVar18 + unaff_x24 * unaff_x22;
      lVar21 = *unaff_x19;
      uVar34 = *(uint *)(lVar18 + 0x128);
      uVar37 = *(undefined4 *)(lVar18 + 0x160);
      goto LAB_035562ec;
    }
    goto LAB_035575f4;
  }
  if ((unaff_w25 != (uint)in_stack_000000e0) && ((int)unaff_w25 < (int)(uint)in_stack_00000150)) {
    uVar34 = uStack000000000000015c;
    if ((in_stack_00000130 & 1) == 0) {
      if ((*unaff_x28 != 0) && (lVar18 = *(long *)(*unaff_x28 + 0x38), lVar18 != 0)) {
        uVar26 = *(uint *)(lVar18 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)unaff_w25 < *unaff_x20 + -1) {
      if ((*unaff_x28 == 0) || (lVar18 = *(long *)(*unaff_x28 + 0x38), lVar18 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
      uVar15 = FUN_03567ad8(uVar3,*(undefined4 *)(lVar18 + unaff_x27),0);
      unaff_x28 = in_stack_00000170;
      if ((uVar15 & 1) == 0) {
        if ((*in_stack_00000170 == 0) ||
           (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0)) goto LAB_035574b8;
        if (unaff_w25 < *(uint *)(lVar18 + 0x18)) {
          lVar18 = lVar18 + unaff_x24 * unaff_x22;
          in_d3 = (ulong)*(uint *)(lVar18 + 0x128);
          uVar14 = 0;
          uVar31 = (ulong)(uint)fVar10;
          (**(code **)(*unaff_x19 + 0x8d8))
                    (uVar32,uVar31,0,in_d3,fStack0000000000000104,0,fVar27,
                     *(undefined4 *)(lVar18 + 0x160));
          puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar18 + 0xe0) != 0) goto LAB_03556348;
          thunk_FUN_01a58e78();
          lVar18 = *(long *)puVar9;
          goto LAB_03556348;
        }
        goto LAB_035575f4;
      }
    }
    bVar11 = true;
    uVar8 = in_stack_00000160;
LAB_03556364:
    uStack000000000000015c = uVar34;
    if ((*unaff_x28 == 0) || (lVar18 = *(long *)(*unaff_x28 + 0x38), lVar18 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar18 + 0x18) <= unaff_w25) goto LAB_035575f4;
    if (in_stack_00000108 == 0) goto LAB_035574b8;
    uVar34 = *(uint *)(lVar18 + unaff_x24 * unaff_x22 + 400);
    fVar28 = (float)FUN_03776a30(in_stack_00000108 + 0x50,0);
    uVar26 = (uint)in_stack_00000150;
    if ((uVar34 >> 6 & 1) == 0) {
      if ((uStack000000000000012c & 1) != 0) {
        if ((*unaff_x28 == 0) || (lVar18 = *(long *)(*unaff_x28 + 0x38), lVar18 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar18 + 0x18) <= uStack000000000000015c - 2) goto LAB_035575f4;
        uVar34 = *(uint *)(lVar18 + unaff_x27 + -0x330);
        fVar29 = *(float *)(lVar18 + unaff_x27 + -0x30c);
        pcVar19 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
        in_d3 = (ulong)uVar34;
        uVar31 = (ulong)(uint)fStack000000000000009c;
        uVar14 = (ulong)uStack0000000000000098;
        (*pcVar19)(in_stack_000000a0,uVar31,uVar14,in_d3,in_stack_000000a8 * fVar28 + fVar29,0,
                   in_stack_000000a8,in_stack_000000a8);
      }
LAB_03556948:
      uStack000000000000012c = 0;
    }
    else {
      lVar18 = *unaff_x28;
      if ((lVar18 == 0) || (lVar21 = *(long *)(lVar18 + 0x38), lVar21 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar21 + 0x18) <= unaff_w25) goto LAB_035575f4;
      *(undefined4 *)(lVar21 + unaff_x24 * unaff_x22 + 0x174) = in_stack_000017c4;
      if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)uVar8)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar21 + unaff_x24 * unaff_x22 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
          ((int)uVar26 < (int)unaff_w25)) || ((uStack000000000000012c & 1) != 0 || !bVar1)) {
LAB_035564e8:
        if ((uStack000000000000012c & 1) == 0) goto LAB_03556948;
      }
      else {
        if (unaff_w25 == uVar26) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar15 = FUN_026b97f8(in_stack_00000168._4_4_,0);
          if ((uVar15 & 1) != 0) goto LAB_035564e8;
          lVar18 = *unaff_x28;
          if (lVar18 == 0) goto LAB_035574b8;
        }
        lVar18 = *(long *)(lVar18 + 0x38);
        if (lVar18 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar18 + 0x18) <= unaff_w25) goto LAB_035575f4;
        lVar18 = lVar18 + unaff_x24 * unaff_x22;
        in_stack_00000040 = *(float *)(lVar18 + 0x60);
        in_stack_00000038 = *(float *)(lVar18 + 0x14c);
        uVar31 = (ulong)(uint)in_stack_00000038;
        in_stack_000000a0 = *(uint *)(lVar18 + 0x11c);
        uVar14 = (ulong)in_stack_000000a0;
        in_stack_000000a8 = *(float *)(lVar18 + 0x160);
        fStack000000000000009c = fVar28 * in_stack_000000a8 + in_stack_00000038;
        uStack0000000000000098 = 0;
      }
      iVar13 = *unaff_x20;
      if (iVar13 == 1) {
LAB_03556628:
        if ((*unaff_x28 != 0) && (lVar18 = *(long *)(*unaff_x28 + 0x38), lVar18 != 0)) {
          if (unaff_w25 < *(uint *)(lVar18 + 0x18)) {
            lVar18 = lVar18 + unaff_x24 * unaff_x22;
            lVar21 = *unaff_x19;
            uVar34 = *(uint *)(lVar18 + 0x128);
            fVar29 = *(float *)(lVar18 + 0x14c);
LAB_03556654:
            pcVar19 = *(code **)(lVar21 + 0x8d8);
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
        uVar14 = FUN_026b63d8(in_stack_00000168._4_4_,0);
        if ((*unaff_x28 != 0) && (lVar18 = *(long *)(*unaff_x28 + 0x38), lVar18 != 0)) {
          uVar34 = *(uint *)(lVar18 + 0x18);
          if (in_stack_00000168._4_4_ == 0x200b || (uVar14 & 1) != 0) {
            if (uVar34 <= uVar26) goto LAB_035575f4;
          }
          else {
FUN_035568e8:
            in_stack_00000150 = unaff_x24;
            if (uVar34 <= unaff_w25) goto LAB_035575f4;
          }
LAB_035568f0:
          lVar18 = lVar18 + in_stack_00000150 * unaff_x22;
          fVar29 = *(float *)(lVar18 + 0x14c);
          uVar34 = *(uint *)(lVar18 + 0x128);
          pcVar19 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035574b8;
      }
      if ((int)unaff_w25 < iVar13) {
        lVar18 = *unaff_x28;
        if ((lVar18 != 0) && (lVar21 = *(long *)(lVar18 + 0x38), lVar21 != 0)) {
          if (uStack000000000000015c < *(uint *)(lVar21 + 0x18)) {
            if (*(float *)(lVar21 + unaff_x27 + -0x108) == in_stack_00000040) {
              fVar29 = *(float *)(lVar21 + unaff_x27 + -0x1c);
              if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar31 = (ulong)(uint)in_stack_00000038;
              uVar15 = FUN_03567bac(in_stack_00000140 + fVar29,uVar31,0);
              if ((uVar15 & 1) != 0) {
                iVar13 = *unaff_x20;
                goto LAB_03556744;
              }
              lVar18 = *unaff_x28;
              if (lVar18 == 0) goto LAB_035574b8;
            }
            lVar18 = *(long *)(lVar18 + 0x38);
            if (lVar18 != 0) {
              uVar34 = *(uint *)(lVar18 + 0x18);
              if ((int)unaff_w25 <= (int)uVar26) goto FUN_035568e8;
              if (uVar26 < uVar34) goto LAB_035568f0;
              goto LAB_035575f4;
            }
            goto LAB_035574b8;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
LAB_03556744:
      if ((int)unaff_w25 < iVar13) {
        iVar13 = FUN_036d3364(in_stack_00000108,0);
        if (*(uint *)(unaff_x23 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
        lVar18 = *(long *)(unaff_x23 + in_stack_00000120 + -0x130);
        if (lVar18 == 0) goto LAB_035574b8;
        iVar12 = FUN_036d3364(lVar18,0);
        unaff_x27 = in_stack_00000120;
        if (iVar13 != iVar12) goto LAB_03556628;
      }
      if (!bVar1) {
        if ((*unaff_x28 != 0) && (lVar18 = *(long *)(*unaff_x28 + 0x38), lVar18 != 0)) {
          if (uStack000000000000015c - 2 < *(uint *)(lVar18 + 0x18)) {
            lVar21 = *unaff_x19;
            uVar34 = *(uint *)(lVar18 + unaff_x27 + -0x330);
            fVar29 = *(float *)(lVar18 + unaff_x27 + -0x30c);
            goto LAB_03556654;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      uStack000000000000012c = 1;
    }
    if ((*unaff_x28 == 0) || (lVar18 = *(long *)(*unaff_x28 + 0x38), lVar18 == 0))
    goto LAB_035574b8;
    uVar34 = (uint)*(undefined8 *)(lVar18 + 0x18);
    if (uVar34 <= unaff_w25) goto LAB_035575f4;
    if ((*(byte *)(lVar18 + unaff_x24 * unaff_x22 + 0x191) >> 1 & 1) == 0) {
      if ((in_stack_00000110._4_4_ & 1) != 0) {
        uVar14 = (ulong)uStack00000000000000c0;
        uVar31 = (ulong)(uint)fStack00000000000000dc;
        in_d3 = (ulong)(uint)in_stack_000000c8;
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,uVar31,uVar14,in_d3,fStack00000000000000d0,uVar14);
      }
LAB_035569b4:
      in_stack_00000110._4_4_ = 0;
    }
    else {
      if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)uVar8)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar18 + unaff_x24 * unaff_x22 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((in_stack_00000110._4_4_ & 1) == 0) {
        if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
            ((int)uVar26 < (int)unaff_w25)) || (!bVar1)) goto LAB_035569b4;
        if (unaff_w25 == uVar26) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar15 = FUN_026b97f8(in_stack_00000168._4_4_,0);
          if ((uVar15 & 1) != 0) goto LAB_035569b4;
        }
        puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar21 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar21 = *(long *)puVar9;
        }
        unaff_x22 = 0x178;
        if ((*unaff_x28 == 0) || (lVar18 = *(long *)(*unaff_x28 + 0x38), lVar18 == 0))
        goto LAB_035574b8;
        uVar34 = (uint)*(undefined8 *)(lVar18 + 0x18);
        if (uVar34 <= unaff_w25) goto LAB_035575f4;
        lVar21 = *(long *)(lVar21 + 0xb8);
        lVar25 = lVar18 + unaff_x24 * 0x178;
        in_stack_000017b8 = *(undefined8 *)(lVar25 + 0x184);
        in_stack_000017b0 = *(undefined8 *)(lVar25 + 0x17c);
        fStack00000000000000d8 = *(float *)(lVar21 + 0x1598);
        fStack00000000000000dc = *(float *)(lVar21 + 0x159c);
        in_stack_000017c0 = *(float *)(lVar25 + 0x18c);
        in_stack_000000c8 = *(float *)(lVar21 + 0x15a0);
        fStack00000000000000d0 = *(float *)(lVar21 + 0x15a4);
        uStack00000000000000c0 = 0;
      }
      if (uVar34 <= unaff_w25) goto LAB_035575f4;
      lVar18 = lVar18 + unaff_x24 * unaff_x22;
      fVar29 = *(float *)(lVar18 + 0x128);
      fVar35 = *(float *)(lVar18 + 0x188);
      uVar23 = *(undefined8 *)(lVar18 + 0x17c);
      fVar39 = *(float *)(lVar18 + 0x184);
      uVar30 = *(undefined8 *)(lVar18 + 0x184);
      fVar38 = *(float *)(lVar18 + 0x18c);
      fVar28 = *(float *)(lVar18 + 0x11c);
      fVar36 = *(float *)(lVar18 + 0x148);
      fVar33 = *(float *)(lVar18 + 0x150);
      in_stack_00000178 = uVar23;
      fStack0000000000000180 = fVar39;
      fStack0000000000000184 = fVar35;
      in_stack_00000188 = fVar38;
      in_stack_00000190 = in_stack_000017b0;
      in_stack_00000198 = in_stack_000017b8;
      in_stack_000001a0 = in_stack_000017c0;
      uVar14 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
      lVar18 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar14 & 1) == 0) {
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar18);
        }
        fVar29 = fVar29 + (float)in_stack_000017b8;
        uVar14 = (ulong)(uint)fVar29;
        fVar28 = fVar28 - (float)((ulong)in_stack_000017b0 >> 0x20);
        fVar33 = fVar33 - in_stack_000017c0;
        uVar31 = (ulong)(uint)fVar33;
        fVar36 = fVar36 + (float)((ulong)in_stack_000017b8 >> 0x20);
        in_d3 = (ulong)(uint)fVar36;
        if (fVar28 <= fStack00000000000000d8) {
          fStack00000000000000d8 = fVar28;
        }
        if (fVar33 <= fStack00000000000000dc) {
          fStack00000000000000dc = fVar33;
        }
        if (in_stack_000000c8 <= fVar29) {
          in_stack_000000c8 = fVar29;
        }
        if (fStack00000000000000d0 <= fVar36) {
          fStack00000000000000d0 = fVar36;
        }
      }
      else {
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar18);
        }
        fVar28 = (fVar28 + (in_stack_000000c8 - (float)in_stack_000017b8)) * 0.5;
        in_d3 = (ulong)(uint)fVar28;
        if (fVar33 <= fStack00000000000000dc) {
          fStack00000000000000dc = fVar33;
        }
        uVar31 = (ulong)(uint)fStack00000000000000dc;
        uVar14 = (ulong)uStack00000000000000c0;
        if (fStack00000000000000d0 <= fVar36) {
          fStack00000000000000d0 = fVar36;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,uVar31,uVar14,in_d3,fStack00000000000000d0,uVar14);
        fStack00000000000000dc = fVar33 - fVar38;
        in_stack_000000c8 = fVar29 + fVar39;
        uStack00000000000000c0 = 0;
        fStack00000000000000d0 = fVar36 + fVar35;
        fStack00000000000000d8 = fVar28;
        in_stack_000017b0 = uVar23;
        in_stack_000017b8 = uVar30;
        in_stack_000017c0 = fVar38;
      }
      unaff_x22 = 0x178;
      if (((*unaff_x20 == 1) || (unaff_w25 == (uint)in_stack_000000e0)) ||
         (((int)uVar26 <= (int)unaff_w25 || (!bVar1)))) {
        uVar14 = (ulong)uStack00000000000000c0;
        uVar31 = (ulong)(uint)fStack00000000000000dc;
        in_d3 = (ulong)(uint)in_stack_000000c8;
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,uVar31,uVar14,in_d3,fStack00000000000000d0,uVar14);
        in_stack_00000110._4_4_ = 0;
      }
      else {
        in_stack_00000110._4_4_ = 1;
      }
    }
    puVar9 = OVRPlugin_Media_TypeInfo;
    iVar13 = *unaff_x20;
    uVar34 = uStack000000000000015c + 1;
    unaff_x27 = unaff_x27 + 0x178;
    iStack0000000000000128 = iStack0000000000000128 + 1;
    if (iVar13 <= (int)uStack000000000000015c) {
      lVar18 = *unaff_x28;
      if (lVar18 == 0) goto LAB_035574b8;
      *(int *)(lVar18 + 0x18) = iVar13;
      lVar21 = unaff_x19[0xd4];
      *(uint *)(lVar18 + 0x2c) = uVar8 + 1;
      if (iVar13 < 1 || iStack00000000000000d4 == 0) {
        iStack00000000000000d4 = 1;
      }
      *(int *)(lVar18 + 0x1c) = (int)lVar21;
      *(int *)(lVar18 + 0x24) = iStack00000000000000d4;
      *(int *)(lVar18 + 0x30) = (int)unaff_x19[0x96] + 1;
      if (((int)unaff_x19[99] != 0xff) ||
         (uVar15 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar15 & 1) == 0)) goto LAB_03554724;
      lVar18 = unaff_x19[0xdf];
      if (lVar18 != 0) {
        (**(code **)(lVar18 + 0x18))
                  (*(undefined8 *)(lVar18 + 0x40),*unaff_x28,*(undefined8 *)(lVar18 + 0x28));
      }
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      iVar13 = FUN_03911ee4(unaff_x19[0xe5],0);
      if (iVar13 != 0x19) {
        lVar18 = unaff_x19[0xe5];
        if (lVar18 == 0) goto LAB_035574b8;
        uVar32 = FUN_03911ee4(lVar18,0);
        FUN_03911f20(lVar18,uVar32 | 0x19,0);
      }
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*unaff_x28 == 0) || (lVar18 = *(long *)(*unaff_x28 + 0x60), lVar18 == 0))
        goto LAB_035574b8;
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(int *)(lVar18 + 0x18) == 0) goto LAB_035575f4;
        FUN_03596b20(lVar18 + 0x20,1,0);
      }
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] == 0) || (lVar18 = *(long *)(unaff_x19[0x6d] + 0x60), lVar18 == 0))
      goto LAB_035574b8;
      if (*(int *)(lVar18 + 0x18) == 0) goto LAB_035575f4;
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar18 + 0x30),0);
      if ((unaff_x19[0x6d] == 0) || (lVar18 = *(long *)(unaff_x19[0x6d] + 0x60), lVar18 == 0))
      goto LAB_035574b8;
      if (*(int *)(lVar18 + 0x18) == 0) goto LAB_035575f4;
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar18 + 0x48),0);
      if ((unaff_x19[0x6d] == 0) || (lVar18 = *(long *)(unaff_x19[0x6d] + 0x60), lVar18 == 0))
      goto LAB_035574b8;
      if (*(int *)(lVar18 + 0x18) == 0) goto LAB_035575f4;
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar18 + 0x50),0);
      if ((unaff_x19[0x6d] == 0) || (lVar18 = *(long *)(unaff_x19[0x6d] + 0x60), lVar18 == 0))
      goto LAB_035574b8;
      if (*(int *)(lVar18 + 0x18) == 0) goto LAB_035575f4;
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar18 + 0x58),0);
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036aa280(unaff_x19[0x74],0);
      if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
      FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
      if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
      uVar30 = FUN_0390ef60(unaff_x19[0xe4],0);
      if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
      uVar32 = FUN_0390ed3c(unaff_x19[0xe4],0);
      lVar18 = *unaff_x28;
      if (lVar18 == 0) goto LAB_035574b8;
      lVar25 = 0;
      lVar21 = 0;
      goto LAB_03557110;
    }
    if (*(uint *)(unaff_x23 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    if ((*unaff_x28 == 0) || (lVar18 = *(long *)(*unaff_x28 + 0x50), lVar18 == 0))
    goto LAB_035574b8;
    unaff_x24 = (long)(int)uStack000000000000015c;
    lVar21 = unaff_x23 + unaff_x24 * unaff_x22;
    in_stack_00000160 = *(uint *)(lVar21 + 100);
    if (*(uint *)(lVar18 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
    lVar25 = (long)(int)in_stack_00000160;
    lVar18 = lVar18 + lVar25 * 0x5c;
    in_stack_00000108 = *(long *)(lVar21 + 0x38);
    uVar4 = *(ushort *)(lVar21 + 0x20);
    uVar6 = *(uint *)(lVar18 + 0x3c);
    in_stack_000000e0 = (long)(int)uVar6;
    uVar26 = *(uint *)(lVar18 + 0x68);
    iVar2 = *(int *)(lVar18 + 0x20);
    iVar13 = *(int *)(lVar18 + 0x28);
    iVar12 = *(int *)(lVar18 + 0x2c);
    uVar7 = *(uint *)(lVar18 + 0x40);
    in_stack_00000150 = (long)(int)uVar7;
    fVar33 = *(float *)(lVar18 + 0x4c);
    fVar35 = *(float *)(lVar18 + 0x54);
    fVar28 = *(float *)(lVar18 + 0x58);
    fVar40 = *(float *)(lVar18 + 0x5c);
    fVar38 = *(float *)(lVar18 + 0x60);
    fVar39 = *(float *)(lVar18 + 0x6c);
    fVar41 = *(float *)(lVar18 + 0x70);
    fVar29 = *(float *)(lVar18 + 0x74);
    fVar36 = *(float *)(lVar18 + 0x78);
    in_stack_00000168._4_4_ = (uint)uVar4;
    if ((int)uVar26 < 9) {
      switch(uVar26) {
      case 1:
        if ((char)unaff_x19[0x1e] == '\0') {
          in_stack_000000f8._4_4_ = fVar38 + 0.0;
        }
        else {
          in_stack_000000f8._4_4_ = 0.0 - fVar28;
        }
        break;
      case 2:
LAB_03555018:
        in_stack_000000f8._4_4_ = (fVar38 + fVar40 * 0.5) - fVar28 * 0.5;
        break;
      default:
        goto switchD_03554f58_caseD_3;
      case 4:
        in_stack_000000f8._4_4_ = (fVar40 + fVar38) - fVar28;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar40 + fVar38;
        }
        break;
      case 8:
        goto switchD_03554f58_caseD_8;
      }
LAB_03555088:
      in_stack_000000e8 = 0;
    }
    else if (uVar26 == 0x10) {
switchD_03554f58_caseD_8:
      if (uVar4 < 0xad) {
        if ((uVar4 != 3) && (uVar4 != 10)) {
LAB_03554fac:
          if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_035575f4;
          uVar5 = *(undefined2 *)(in_stack_000000f0 + in_stack_000000e0 * 0x178 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar14 = FUN_026b8cc4(uVar5,0);
          if ((uVar14 & 1) == 0) {
            bVar1 = (int)in_stack_00000160 < (int)unaff_x19[0x95];
          }
          else {
            bVar1 = false;
          }
          if ((fVar28 <= fVar40) && (!bVar1 && uVar26 >> 4 == 0)) {
            in_stack_000000f8._4_4_ = fVar38;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000f8._4_4_ = fVar40 + fVar38;
            }
            goto LAB_03555088;
          }
          if (((uVar34 == 1) || (in_stack_00000160 != uVar8)) ||
             (uStack000000000000015c == *(uint *)((long)unaff_x19 + 0x324))) {
            in_stack_000000f8._4_4_ = fVar38;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000f8._4_4_ = fVar40 + fVar38;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uStack0000000000000028 = FUN_026b97f8(in_stack_00000168._4_4_,0);
            in_stack_000000e8 = 0;
          }
          else {
            cVar17 = (char)unaff_x19[0x1e];
            fVar38 = -fVar28;
            if (cVar17 != '\0') {
              fVar38 = fVar28;
            }
            if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar6) goto LAB_035575f4;
            iVar12 = (int)*(char *)(in_stack_000000f0 + in_stack_000000e0 * 0x178 + 0x194) +
                     (-iVar2 - (uStack0000000000000028 & 1)) + iVar12 + -1;
            if (iVar12 < 1) {
              fVar28 = 1.0;
              iVar12 = 1;
            }
            else {
              fVar28 = *(float *)((long)unaff_x19 + 0x2dc);
            }
            if (in_stack_00000168._4_4_ == 9) {
LAB_03556e74:
              fVar28 = 1.0 - fVar28;
            }
            else {
              if (in_stack_00000168._4_4_ != 0xa0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar14 = FUN_026b97f8(in_stack_00000168._4_4_,0);
                cVar17 = (char)unaff_x19[0x1e];
                if ((uVar14 & 1) != 0) goto LAB_03556e74;
              }
              iVar12 = (iVar2 - (~uStack0000000000000028 & 1)) + iVar13;
            }
            fVar28 = ((fVar40 + fVar38) * fVar28) / (float)iVar12;
            if (cVar17 == '\0') {
              in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar28;
              in_stack_000000e8 =
                   CONCAT44((float)((ulong)in_stack_000000e8 >> 0x20) + 0.0,
                            (float)in_stack_000000e8 + 0.0);
            }
            else {
              in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar28;
            }
          }
        }
      }
      else if (((uVar4 != 0xad) && (uVar4 != 0x200b)) && (uVar4 != 0x2060)) goto LAB_03554fac;
    }
    else if (uVar26 == 0x20) {
      fVar28 = fVar39 + fVar29;
      goto LAB_03555018;
    }
switchD_03554f58_caseD_3:
    uVar26 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
    if (uVar26 <= uStack000000000000015c) goto LAB_035575f4;
    lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar38 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
    in_stack_00000140 = (float)in_stack_000000b8 + (float)in_stack_000000e8;
    fVar28 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)((ulong)in_stack_000000e8 >> 0x20);
    if (*(char *)(lVar18 + 0x194) == '\0') goto LAB_03555938;
    iVar13 = *(int *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x2c);
    if (iVar13 != 0) goto LAB_0355574c;
    fVar40 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)in_stack_00000160,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
    case 0:
      lVar21 = in_stack_000000f0 + unaff_x24 * 0x178;
      *(undefined4 *)(lVar21 + 0x84) = 0;
      *(undefined4 *)(lVar21 + 0xac) = 0;
      *(undefined4 *)(lVar21 + 0xd4) = 0x3f800000;
      fVar40 = 1.0;
      break;
    case 1:
      fVar36 = *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
        lVar21 = in_stack_000000f0 + unaff_x24 * 0x178;
        fVar29 = (in_stack_000000f8._4_4_ + fVar36) - *(float *)(in_stack_00000080 + 0x230);
        fVar36 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
        goto LAB_035551cc;
      }
      lVar21 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar29 = fVar29 - fVar39;
      *(float *)(lVar21 + 0x84) = fVar40 + (fVar36 - fVar39) / fVar29;
      *(float *)(lVar21 + 0xac) = fVar40 + (*(float *)(lVar21 + 0x98) - fVar39) / fVar29;
      *(float *)(lVar21 + 0xd4) = fVar40 + (*(float *)(lVar21 + 0xc0) - fVar39) / fVar29;
      fVar40 = fVar40 + (*(float *)(lVar21 + 0xe8) - fVar39) / fVar29;
      break;
    case 2:
      lVar21 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar36 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      fVar29 = (in_stack_000000f8._4_4_ + *(float *)(lVar21 + 0x70)) -
               *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
      *(float *)(lVar21 + 0x84) = fVar40 + fVar29 / fVar36;
      *(float *)(lVar21 + 0xac) =
           fVar40 + ((in_stack_000000f8._4_4_ + *(float *)(lVar21 + 0x98)) -
                    *(float *)(in_stack_00000080 + 0x230)) /
                    (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
      *(float *)(lVar21 + 0xd4) =
           fVar40 + ((in_stack_000000f8._4_4_ + *(float *)(lVar21 + 0xc0)) -
                    *(float *)(in_stack_00000080 + 0x230)) /
                    (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
      fVar40 = fVar40 + ((in_stack_000000f8._4_4_ + *(float *)(lVar21 + 0xe8)) -
                        *(float *)(in_stack_00000080 + 0x230)) /
                        (*(float *)(in_stack_00000080 + 0x238) -
                        *(float *)(in_stack_00000080 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x62]) {
      case 0:
        lVar21 = in_stack_000000f0 + unaff_x24 * 0x178;
        *(undefined4 *)(lVar21 + 0x88) = 0;
        *(undefined4 *)(lVar21 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar21 + 0xd8) = 0;
        *(undefined4 *)(lVar21 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar21 = in_stack_000000f0 + unaff_x24 * 0x178;
        fVar36 = fVar36 - fVar41;
        fVar29 = fVar40 + (*(float *)(lVar21 + 0x74) - fVar41) / fVar36;
        fVar36 = fVar40 + (*(float *)(lVar21 + 0x9c) - fVar41) / fVar36;
        *(float *)(lVar21 + 0x88) = fVar29;
        *(float *)(lVar21 + 0xb0) = fVar36;
        *(float *)(lVar21 + 0xd8) = fVar29;
        *(float *)(lVar21 + 0x100) = fVar36;
        break;
      case 2:
        lVar21 = in_stack_000000f0 + unaff_x24 * 0x178;
        fVar29 = fVar40 + (*(float *)(lVar21 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                          (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
        *(float *)(lVar21 + 0x88) = fVar29;
        fVar36 = *(float *)(unaff_x19 + 0x9c);
        fVar39 = *(float *)(unaff_x19 + 0x9d);
        *(float *)(lVar21 + 0xd8) = fVar29;
        fVar29 = fVar40 + (*(float *)(lVar21 + 0x9c) - fVar36) / (fVar39 - fVar36);
        *(float *)(lVar21 + 0xb0) = fVar29;
        *(float *)(lVar21 + 0x100) = fVar29;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar26 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
      }
      if (uVar26 <= uStack000000000000015c) goto LAB_035575f4;
      lVar21 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar29 = *(float *)(lVar21 + 0x15c);
      fVar36 = (1.0 - (*(float *)(lVar21 + 0x88) + *(float *)(lVar21 + 0xb0)) * fVar29) * 0.5;
      fVar39 = fVar40 + *(float *)(lVar21 + 0x88) * fVar29 + fVar36;
      fVar40 = fVar40 + fVar36 + *(float *)(lVar21 + 0xb0) * fVar29;
      *(float *)(lVar21 + 0x84) = fVar39;
      *(float *)(lVar21 + 0xac) = fVar39;
      *(float *)(lVar21 + 0xd4) = fVar40;
      break;
    default:
      goto switchD_0355512c_default;
    }
    *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xfc) = fVar40;
switchD_0355512c_default:
    switch((int)unaff_x19[0x62]) {
    case 0:
      if (uVar26 <= uStack000000000000015c) goto LAB_035575f4;
      lVar21 = in_stack_000000f0 + unaff_x24 * 0x178;
      *(undefined4 *)(lVar21 + 0x88) = 0;
      *(undefined4 *)(lVar21 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar21 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar21 + 0x100) = 0;
      break;
    case 1:
      if (uStack000000000000015c < uVar26) {
        lVar21 = in_stack_000000f0 + unaff_x24 * 0x178;
        fVar33 = fVar33 - fVar35;
        fVar29 = (*(float *)(lVar21 + 0x74) - fVar35) / fVar33;
        fVar33 = (*(float *)(lVar21 + 0x9c) - fVar35) / fVar33;
        *(float *)(lVar21 + 0x88) = fVar29;
        goto UnityEngine_Animator__set_stabilizeFeet;
      }
      goto LAB_035575f4;
    case 2:
      if (uVar26 <= uStack000000000000015c) goto LAB_035575f4;
      lVar21 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar29 = (*(float *)(lVar21 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar21 + 0x88) = fVar29;
      fVar33 = (*(float *)(lVar21 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
      *(float *)(lVar21 + 0xb0) = fVar33;
      *(float *)(lVar21 + 0xd8) = fVar33;
      *(float *)(lVar21 + 0x100) = fVar29;
      break;
    case 3:
      if (uVar26 <= uStack000000000000015c) goto LAB_035575f4;
      lVar21 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar36 = *(float *)(lVar21 + 0x15c);
      fVar33 = (1.0 - (*(float *)(lVar21 + 0x84) + *(float *)(lVar21 + 0xd4)) / fVar36) * 0.5;
      fVar29 = *(float *)(lVar21 + 0x84) / fVar36 + fVar33;
      fVar33 = fVar33 + *(float *)(lVar21 + 0xd4) / fVar36;
      *(float *)(lVar21 + 0x88) = fVar29;
      *(float *)(lVar21 + 0xb0) = fVar33;
      *(float *)(lVar21 + 0x100) = fVar29;
      *(float *)(lVar21 + 0xd8) = fVar33;
    }
    if (uVar26 <= uStack000000000000015c) goto LAB_035575f4;
    lVar21 = in_stack_000000f0 + unaff_x24 * 0x178;
    unaff_s14 = *(float *)(lVar21 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    if ((*(char *)(lVar21 + 0x5c) == '\0') &&
       ((*(byte *)(in_stack_000000f0 + unaff_x24 * 0x178 + 400) & 1) != 0)) {
      unaff_s14 = -unaff_s14;
    }
    fVar29 = in_stack_00000050._4_4_;
    if (((in_stack_00000058 == 2) || (fVar29 = fStack0000000000000034, in_stack_00000058 == 1)) ||
       (fVar29 = fStack000000000000002c, in_stack_00000058 == 0)) {
      unaff_s14 = fVar29 * unaff_s14;
    }
    lVar21 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar33 = *(float *)(lVar21 + 0x88);
    fVar36 = *(float *)(lVar21 + 0x84);
    fVar29 = -2.1474836e+09;
    if (fVar36 != INFINITY) {
      fVar29 = (float)(int)fVar36;
    }
    fVar39 = *(float *)(lVar21 + 0xd4);
    fVar40 = *(float *)(lVar21 + 0xd8);
    fVar35 = -2.1474836e+09;
    if (fVar33 != INFINITY) {
      fVar35 = (float)(int)fVar33;
    }
    uVar37 = FUN_03591d3c(fVar36 - fVar29,fVar33 - fVar35);
    *(undefined4 *)(lVar21 + 0x84) = uVar37;
    if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    fVar40 = fVar40 - fVar35;
    *(float *)(lVar21 + 0x88) = unaff_s14;
    uVar37 = FUN_03591d3c(fVar36 - fVar29,fVar40);
    *(undefined4 *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xac) = uVar37;
    if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    fVar39 = fVar39 - fVar29;
    *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xb0) = unaff_s14;
    fVar29 = (float)FUN_03591d3c(fVar39,fVar40);
    *(float *)(lVar21 + 0xd4) = fVar29;
    if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    *(float *)(lVar21 + 0xd8) = unaff_s14;
    uVar37 = FUN_03591d3c(fVar39,fVar33 - fVar35);
    *(undefined4 *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xfc) = uVar37;
    uVar26 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
    if (uVar26 <= uStack000000000000015c) goto LAB_035575f4;
    *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x100) = unaff_s14;
    unaff_x20 = in_stack_00000048;
LAB_0355574c:
    if (((int)uStack000000000000015c < (int)unaff_x19[0x65]) &&
       (iStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
      if (((int)in_stack_00000160 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
        if (uVar26 <= uStack000000000000015c) goto LAB_035575f4;
        lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
        *(ulong *)(lVar18 + 0x70) =
             CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar18 + 0x70) >> 0x20),
                      fVar38 + (float)*(undefined8 *)(lVar18 + 0x70));
        *(float *)(lVar18 + 0x78) = fVar28 + *(float *)(lVar18 + 0x78);
        *(ulong *)(lVar18 + 0x98) =
             CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar18 + 0x98) >> 0x20),
                      fVar38 + (float)*(undefined8 *)(lVar18 + 0x98));
        *(float *)(lVar18 + 0xa0) = fVar28 + *(float *)(lVar18 + 0xa0);
        *(ulong *)(lVar18 + 0xc0) =
             CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar18 + 0xc0) >> 0x20),
                      fVar38 + (float)*(undefined8 *)(lVar18 + 0xc0));
        *(float *)(lVar18 + 200) = fVar28 + *(float *)(lVar18 + 200);
        *(ulong *)(lVar18 + 0xe8) =
             CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar18 + 0xe8) >> 0x20),
                      fVar38 + (float)*(undefined8 *)(lVar18 + 0xe8));
        *(float *)(lVar18 + 0xf0) = fVar28 + *(float *)(lVar18 + 0xf0);
        goto UnityEngine_Animator__GetAnimatorClipInfoCount;
      }
      if (((int)in_stack_00000160 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
        if (uStack000000000000015c < uVar26) {
          if (*(int *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x68) == iStack0000000000000030) {
            lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
            *(ulong *)(lVar18 + 0x70) =
                 CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar18 + 0x70) >> 0x20)
                          ,fVar38 + (float)*(undefined8 *)(lVar18 + 0x70));
            *(float *)(lVar18 + 0x78) = fVar28 + *(float *)(lVar18 + 0x78);
            *(ulong *)(lVar18 + 0x98) =
                 CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar18 + 0x98) >> 0x20)
                          ,fVar38 + (float)*(undefined8 *)(lVar18 + 0x98));
            *(float *)(lVar18 + 0xa0) = fVar28 + *(float *)(lVar18 + 0xa0);
            *(ulong *)(lVar18 + 0xc0) =
                 CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar18 + 0xc0) >> 0x20)
                          ,fVar38 + (float)*(undefined8 *)(lVar18 + 0xc0));
            *(float *)(lVar18 + 200) = fVar28 + *(float *)(lVar18 + 200);
            *(ulong *)(lVar18 + 0xe8) =
                 CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar18 + 0xe8) >> 0x20)
                          ,fVar38 + (float)*(undefined8 *)(lVar18 + 0xe8));
            *(float *)(lVar18 + 0xf0) = fVar28 + *(float *)(lVar18 + 0xf0);
            goto UnityEngine_Animator__GetAnimatorClipInfoCount;
          }
          goto UnityEngine_Animator__GetAnimatorTransitionInfo;
        }
        goto LAB_035575f4;
      }
    }
UnityEngine_Animator__GetAnimatorTransitionInfo:
    if (uVar26 <= uStack000000000000015c) goto LAB_035575f4;
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbded8);
      DAT_0411f172 = '\x01';
      uVar26 = *(uint *)(in_stack_000000f0 + 0x18);
    }
    puVar9 = PTR_DAT_03cbded8;
    uVar37 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
    lVar21 = in_stack_000000f0 + unaff_x24 * 0x178;
    *(undefined8 *)(lVar21 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
    *(undefined4 *)(lVar21 + 0x78) = uVar37;
    if (uVar26 <= uStack000000000000015c) goto LAB_035575f4;
    uVar37 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
    lVar21 = in_stack_000000f0 + unaff_x24 * 0x178;
    *(undefined8 *)(lVar21 + 0x98) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
    *(undefined4 *)(lVar21 + 0xa0) = uVar37;
    uVar37 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
    *(undefined8 *)(lVar21 + 0xc0) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
    *(undefined4 *)(lVar21 + 200) = uVar37;
    uVar37 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
    *(undefined8 *)(lVar21 + 0xe8) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
    *(undefined4 *)(lVar21 + 0xf0) = uVar37;
    *(undefined1 *)(lVar18 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
    if (iVar13 == 0) {
      pcVar19 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
      (*pcVar19)();
    }
    else if (iVar13 == 1) {
      pcVar19 = *(code **)(*unaff_x19 + 0x8c8);
      goto LAB_0355591c;
    }
LAB_03555938:
    if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar18 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    lVar18 = lVar18 + unaff_x24 * 0x178;
    uVar30 = *(undefined8 *)(lVar18 + 0x11c);
    *(undefined8 *)(lVar18 + 0x11c) =
         CONCAT44(in_stack_00000140 + (float)((ulong)uVar30 >> 0x20),fVar38 + (float)uVar30);
    *(float *)(lVar18 + 0x124) = fVar28 + *(float *)(lVar18 + 0x124);
    if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar18 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    lVar18 = lVar18 + unaff_x24 * 0x178;
    *(ulong *)(lVar18 + 0x110) =
         CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar18 + 0x110) >> 0x20),
                  fVar38 + (float)*(undefined8 *)(lVar18 + 0x110));
    *(float *)(lVar18 + 0x118) = fVar28 + *(float *)(lVar18 + 0x118);
    if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar18 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    lVar18 = lVar18 + unaff_x24 * 0x178;
    *(ulong *)(lVar18 + 0x128) =
         CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar18 + 0x128) >> 0x20),
                  fVar38 + (float)*(undefined8 *)(lVar18 + 0x128));
    *(float *)(lVar18 + 0x130) = fVar28 + *(float *)(lVar18 + 0x130);
    if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar18 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    lVar18 = lVar18 + unaff_x24 * 0x178;
    *(float *)(lVar18 + 0x134) = fVar38 + *(float *)(lVar18 + 0x134);
    *(ulong *)(lVar18 + 0x138) =
         CONCAT44(fVar28 + (float)((ulong)*(undefined8 *)(lVar18 + 0x138) >> 0x20),
                  in_stack_00000140 + (float)*(undefined8 *)(lVar18 + 0x138));
    lVar18 = *in_stack_00000170;
    if ((lVar18 == 0) || (lVar21 = *(long *)(lVar18 + 0x38), lVar21 == 0)) goto LAB_035574b8;
    uVar26 = *(uint *)(lVar21 + 0x18);
    if (uVar26 <= uStack000000000000015c) goto LAB_035575f4;
    lVar20 = lVar21 + unaff_x24 * 0x178;
    uVar31 = CONCAT44(fVar38 + (float)((ulong)*(undefined8 *)(lVar20 + 0x140) >> 0x20),
                      fVar38 + (float)*(undefined8 *)(lVar20 + 0x140));
    fVar28 = in_stack_00000140 + *(float *)(lVar20 + 0x150);
    uVar14 = (ulong)(uint)fVar28;
    in_d3 = CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar20 + 0x148) >> 0x20),
                     in_stack_00000140 + (float)*(undefined8 *)(lVar20 + 0x148));
    *(float *)(lVar20 + 0x150) = fVar28;
    *(ulong *)(lVar20 + 0x140) = uVar31;
    *(ulong *)(lVar20 + 0x148) = in_d3;
    if (in_stack_00000160 == uVar8) {
      uVar26 = *unaff_x20 - 1;
      if (uStack000000000000015c == uVar26) goto LAB_03555b44;
    }
    else {
      lVar18 = *(long *)(lVar18 + 0x50);
      if (lVar18 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= uVar8) goto LAB_035575f4;
      lVar20 = (long)(int)uVar8;
      lVar22 = lVar18 + lVar20 * 0x5c;
      in_d3 = (ulong)(uint)*(float *)(lVar22 + 0x58);
      fVar28 = in_stack_00000140 + *(float *)(lVar22 + 0x54);
      uVar31 = (ulong)(uint)fVar28;
      fVar29 = fVar38 + *(float *)(lVar22 + 0x58);
      uVar14 = (ulong)(uint)fVar29;
      *(ulong *)(lVar22 + 0x4c) =
           CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar22 + 0x4c) >> 0x20),
                    in_stack_00000140 + (float)*(undefined8 *)(lVar22 + 0x4c));
      *(float *)(lVar22 + 0x54) = fVar28;
      *(float *)(lVar22 + 0x58) = fVar29;
      if (uVar26 <= *(uint *)(lVar22 + 0x34)) goto LAB_035575f4;
      uVar37 = *(undefined4 *)(lVar21 + (long)(int)*(uint *)(lVar22 + 0x34) * 0x178 + 0x11c);
      lVar18 = lVar18 + lVar20 * 0x5c;
      *(float *)(lVar18 + 0x70) = fVar28;
      *(undefined4 *)(lVar18 + 0x6c) = uVar37;
      lVar18 = *in_stack_00000170;
      if ((lVar18 == 0) || (lVar21 = *(long *)(lVar18 + 0x50), lVar21 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar21 + 0x18) <= uVar8) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + 0x38);
      if (lVar18 == 0) goto LAB_035574b8;
      uVar26 = *(uint *)(lVar21 + lVar20 * 0x5c + 0x40);
      if (*(uint *)(lVar18 + 0x18) <= uVar26) goto LAB_035575f4;
      lVar21 = lVar21 + lVar20 * 0x5c;
      *(undefined4 *)(lVar21 + 0x74) = *(undefined4 *)(lVar18 + (long)(int)uVar26 * 0x178 + 0x128);
      *(undefined4 *)(lVar21 + 0x78) = *(undefined4 *)(lVar21 + 0x4c);
      uVar26 = *unaff_x20 - 1;
LAB_03555b44:
      if (uStack000000000000015c == uVar26) {
        lVar18 = *in_stack_00000170;
        if ((lVar18 == 0) || (lVar21 = *(long *)(lVar18 + 0x50), lVar21 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar21 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
        lVar20 = lVar21 + lVar25 * 0x5c;
        in_d3 = (ulong)(uint)*(float *)(lVar20 + 0x58);
        uVar31 = CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar20 + 0x4c) >> 0x20)
                          ,in_stack_00000140 + (float)*(undefined8 *)(lVar20 + 0x4c));
        fVar28 = in_stack_00000140 + *(float *)(lVar20 + 0x54);
        fVar38 = fVar38 + *(float *)(lVar20 + 0x58);
        uVar14 = (ulong)(uint)fVar38;
        *(ulong *)(lVar20 + 0x4c) = uVar31;
        *(float *)(lVar20 + 0x54) = fVar28;
        *(float *)(lVar20 + 0x58) = fVar38;
        lVar18 = *(long *)(lVar18 + 0x38);
        if (lVar18 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar18 + 0x18) <= *(uint *)(lVar20 + 0x34)) goto LAB_035575f4;
        uVar37 = *(undefined4 *)(lVar18 + (long)(int)*(uint *)(lVar20 + 0x34) * 0x178 + 0x11c);
        lVar21 = lVar21 + lVar25 * 0x5c;
        *(float *)(lVar21 + 0x70) = fVar28;
        *(undefined4 *)(lVar21 + 0x6c) = uVar37;
        lVar18 = *in_stack_00000170;
        if ((lVar18 == 0) || (lVar21 = *(long *)(lVar18 + 0x50), lVar21 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar21 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
        lVar18 = *(long *)(lVar18 + 0x38);
        if (lVar18 == 0) goto LAB_035574b8;
        uVar26 = *(uint *)(lVar21 + lVar25 * 0x5c + 0x40);
        if (*(uint *)(lVar18 + 0x18) <= uVar26) goto LAB_035575f4;
        lVar21 = lVar21 + lVar25 * 0x5c;
        *(undefined4 *)(lVar21 + 0x74) = *(undefined4 *)(lVar18 + (long)(int)uVar26 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar21 + 0x78) = *(undefined4 *)(lVar21 + 0x4c);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar15 = FUN_026b82c4(in_stack_00000168._4_4_,0);
    if (((((uVar15 & 1) == 0) && (1 < in_stack_00000168._4_4_ - 0x2010)) &&
        (in_stack_00000168._4_4_ != 0xad)) && (in_stack_00000168._4_4_ != 0x2d)) {
      if ((in_stack_00000118._4_4_ & 1) == 0) {
        if (uVar34 != 1) {
LAB_0355686c:
          in_stack_00000118._4_4_ = 0;
          goto LAB_03555d70;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar15 = FUN_026b81f8(in_stack_00000168._4_4_,0);
        if ((uVar15 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar15 = FUN_026b63d8(in_stack_00000168._4_4_,0);
          if (((in_stack_00000168._4_4_ != 0x200b) && ((uVar15 & 1) == 0)) && (*unaff_x20 != 1))
          goto LAB_0355686c;
        }
      }
      else if (((uVar34 != 1) &&
               ((int)uStack000000000000015c < (int)(*(uint *)(in_stack_000000f0 + 0x18) - 1))) &&
              (((int)uStack000000000000015c < *unaff_x20 &&
               ((in_stack_00000168._4_4_ == 0x2019 || (in_stack_00000168._4_4_ == 0x27)))))) {
        if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c - 1) goto LAB_035575f4;
        uVar5 = *(undefined2 *)(in_stack_000000f0 + unaff_x27 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar15 = FUN_026b82c4(uVar5,0);
        if ((uVar15 & 1) != 0) {
          if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar34) goto LAB_035575f4;
          uVar5 = *(undefined2 *)(in_stack_000000f0 + unaff_x27 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar15 = FUN_026b82c4(uVar5,0);
          if ((uVar15 & 1) != 0) goto LAB_03555d68;
        }
      }
      if (uStack000000000000015c == *unaff_x20 - 1U) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar15 = FUN_026b82c4(in_stack_00000168._4_4_,0);
        iVar13 = iStack0000000000000128;
        if ((uVar15 & 1) == 0) goto LAB_03556070;
      }
      else {
LAB_03556070:
        iVar13 = uStack000000000000015c - 1;
      }
      lVar18 = *in_stack_00000170;
      if (lVar18 == 0) goto LAB_035574b8;
      lVar21 = *(long *)(lVar18 + 0x40);
      if (lVar21 == 0) goto LAB_035574b8;
      uVar26 = *(uint *)(lVar18 + 0x24);
      iVar12 = *(int *)(lVar21 + 0x18);
      if (iVar12 < (int)(uVar26 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar18 + 0x40),iVar12 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar18 = *in_stack_00000170;
        if (lVar18 == 0) goto LAB_035574b8;
      }
      lVar18 = *(long *)(lVar18 + 0x40);
      if (lVar18 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= uVar26) goto LAB_035575f4;
      lVar18 = lVar18 + (long)(int)uVar26 * 0x18;
      *(long **)(lVar18 + 0x20) = unaff_x19;
      *(uint *)(lVar18 + 0x28) = uStack0000000000000158;
      *(int *)(lVar18 + 0x2c) = iVar13;
      *(uint *)(lVar18 + 0x30) = (iVar13 - uStack0000000000000158) + 1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar18 = unaff_x19[0x6d];
      if (lVar18 == 0) goto LAB_035574b8;
      lVar21 = *(long *)(lVar18 + 0x50);
      *(int *)(lVar18 + 0x24) = *(int *)(lVar18 + 0x24) + 1;
      if (lVar21 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar21 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
      lVar21 = lVar21 + lVar25 * 0x5c;
      in_stack_00000118._4_4_ = 0;
      iStack00000000000000d4 = iStack00000000000000d4 + 1;
      *(int *)(lVar21 + 0x30) = *(int *)(lVar21 + 0x30) + 1;
    }
    else {
      if ((in_stack_00000118._4_4_ & 1) == 0) {
        uStack0000000000000158 = uStack000000000000015c;
      }
      if (uStack000000000000015c == *unaff_x20 - 1U) {
        lVar18 = *in_stack_00000170;
        if (lVar18 == 0) goto LAB_035574b8;
        lVar21 = *(long *)(lVar18 + 0x40);
        if (lVar21 == 0) goto LAB_035574b8;
        uVar26 = *(uint *)(lVar18 + 0x24);
        iVar13 = *(int *)(lVar21 + 0x18);
        if (iVar13 < (int)(uVar26 + 1)) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff025c((long *)(lVar18 + 0x40),iVar13 + 1,
                       *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
          lVar18 = *in_stack_00000170;
          if (lVar18 == 0) goto LAB_035574b8;
        }
        lVar18 = *(long *)(lVar18 + 0x40);
        if (lVar18 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar18 + 0x18) <= uVar26) goto LAB_035575f4;
        lVar18 = lVar18 + (long)(int)uVar26 * 0x18;
        *(long **)(lVar18 + 0x20) = unaff_x19;
        *(uint *)(lVar18 + 0x28) = uStack0000000000000158;
        *(uint *)(lVar18 + 0x2c) = uStack000000000000015c;
        *(uint *)(lVar18 + 0x30) = uVar34 - uStack0000000000000158;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar18 = unaff_x19[0x6d];
        if (lVar18 == 0) goto LAB_035574b8;
        lVar21 = *(long *)(lVar18 + 0x50);
        *(int *)(lVar18 + 0x24) = *(int *)(lVar18 + 0x24) + 1;
        if (lVar21 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar21 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
        lVar21 = lVar21 + lVar25 * 0x5c;
        iStack00000000000000d4 = iStack00000000000000d4 + 1;
        *(int *)(lVar21 + 0x30) = *(int *)(lVar21 + 0x30) + 1;
      }
LAB_03555d68:
      in_stack_00000118._4_4_ = 1;
    }
LAB_03555d70:
    unaff_x22 = 0x178;
    if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
    goto LAB_035574b8;
    uVar26 = *(uint *)(lVar18 + 0x18);
    if (uVar26 <= uStack000000000000015c) goto LAB_035575f4;
    unaff_x23 = in_stack_000000f0;
    unaff_w25 = uStack000000000000015c;
    in_stack_00000120 = unaff_x27;
    uVar8 = in_stack_00000160;
    if ((*(byte *)(lVar18 + unaff_x24 * 0x178 + 400) >> 2 & 1) == 0) {
      unaff_x28 = in_stack_00000170;
      if (!bVar11) goto LAB_03556254;
LAB_03555da0:
      uStack000000000000015c = uVar34;
      if (uVar26 <= uStack000000000000015c - 2) goto LAB_035575f4;
      lVar21 = *unaff_x19;
      uVar34 = *(uint *)(lVar18 + unaff_x27 + -0x330);
      uVar37 = *(undefined4 *)(lVar18 + unaff_x27 + -0x2f8);
LAB_035562ec:
      pcVar19 = *(code **)(lVar21 + 0x8d8);
LAB_035562f4:
      in_d3 = (ulong)uVar34;
      uVar31 = (ulong)(uint)fVar10;
      uVar14 = 0;
      (*pcVar19)(uVar32,uVar31,0,in_d3,fStack0000000000000104,0,fVar27,uVar37);
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar18 = *(long *)puVar9;
      }
LAB_03556348:
      bVar11 = false;
      unaff_s15 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar18 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
      uVar34 = uStack000000000000015c;
      uVar8 = in_stack_00000160;
      goto LAB_03556364;
    }
    lVar18 = lVar18 + unaff_x24 * 0x178;
    iVar13 = *(int *)(lVar18 + 0x68);
    *(undefined4 *)(lVar18 + 0x16c) = in_stack_000017c4;
    if ((((int)unaff_x19[0x65] < (int)uStack000000000000015c) ||
        ((int)unaff_x19[0x66] < (int)in_stack_00000160)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar13 + 1 != (int)unaff_x19[0x67])))) {
      in_stack_00000130 = 0;
    }
    else {
      in_stack_00000130 = 1;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar15 = FUN_026b63d8(in_stack_00000168._4_4_,0);
    if ((in_stack_00000168._4_4_ != 0x200b) && ((uVar15 & 1) == 0)) {
      lVar18 = *in_stack_00000170;
      if ((lVar18 == 0) || (lVar21 = *(long *)(lVar18 + 0x38), lVar21 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar21 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
      fVar28 = *(float *)(lVar21 + unaff_x24 * 0x178 + 0x160);
      if (unaff_s15 <= fVar28) {
        unaff_s15 = fVar28;
      }
      if (fStack0000000000000100 <= ABS(unaff_s14)) {
        fStack0000000000000100 = ABS(unaff_s14);
      }
      if (iVar13 != in_stack_00000068._4_4_) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar18 = *in_stack_00000170;
          if (lVar18 == 0) goto LAB_035574b8;
          lVar21 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar21 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar21 + 0x15a8);
      }
      lVar18 = *(long *)(lVar18 + 0x38);
      if (lVar18 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar29 = *(float *)(lVar18 + unaff_x24 * 0x178 + 0x14c);
      fVar28 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar29 = fVar29 + unaff_s15 * fVar28;
      if (fVar29 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar29;
      }
      uVar31 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar13;
    }
    unaff_x28 = in_stack_00000170;
    if (!bVar11) goto code_r0x035561ec;
    goto LAB_035562b4;
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar14 = FUN_026b63d8(in_stack_00000168._4_4_,0);
  if ((*unaff_x28 != 0) && (lVar18 = *(long *)(*unaff_x28 + 0x38), lVar18 != 0)) {
    lVar21 = unaff_x24;
    uVar34 = unaff_w25;
    if (in_stack_00000168._4_4_ == 0x200b || (uVar14 & 1) != 0) {
      lVar21 = in_stack_00000150;
      uVar34 = (uint)in_stack_00000150;
    }
    if (uVar34 < *(uint *)(lVar18 + 0x18)) {
      lVar18 = lVar18 + lVar21 * unaff_x22;
      uVar34 = *(uint *)(lVar18 + 0x128);
      uVar37 = *(undefined4 *)(lVar18 + 0x160);
      pcVar19 = *(code **)(*unaff_x19 + 0x8d8);
      goto LAB_035562f4;
    }
    goto LAB_035575f4;
  }
  goto LAB_035574b8;
code_r0x035561ec:
  bVar11 = false;
  if ((((in_stack_00000168._4_4_ != 0xd) && ((in_stack_00000168._4_4_ & 0xfffe) != 10)) &&
      ((int)uStack000000000000015c <= (int)uVar7)) && (in_stack_00000130 == 1)) {
    if (uStack000000000000015c == uVar7) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar15 = FUN_026b97f8(in_stack_00000168._4_4_,0);
      if ((uVar15 & 1) != 0) {
LAB_03556254:
        bVar11 = false;
        unaff_x28 = in_stack_00000170;
        goto LAB_03556364;
      }
    }
    if ((*in_stack_00000170 == 0) ||
       (param_1 = *(long *)(*in_stack_00000170 + 0x38), uStack000000000000015c = uVar34,
       param_1 == 0)) goto LAB_035574b8;
    goto code_r0x0355626c;
  }
  goto LAB_03556364;
  while( true ) {
    lVar18 = *unaff_x28;
    lVar21 = lVar21 + 1;
    lVar25 = lVar25 + 0x50;
    if (lVar18 == 0) break;
LAB_03557110:
    uVar15 = lVar21 + 1;
    if ((long)*(int *)(lVar18 + 0x34) <= (long)uVar15) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar18 = *(long *)(lVar18 + 0x60);
    if (lVar18 == 0) break;
    if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_035575f4;
    FUN_03596a20(lVar18 + lVar25 + 0x70,0);
    lVar18 = unaff_x19[0xe1];
    if (lVar18 == 0) break;
    if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_035575f4;
    uVar23 = *(undefined8 *)(lVar18 + lVar21 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar16 = FUN_036d35a8(uVar23,0,0);
    if ((uVar16 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*unaff_x28 == 0) || (lVar18 = *(long *)(*unaff_x28 + 0x60), lVar18 == 0)) break;
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar18 + 0x18) <= uVar15) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03596b20(lVar18 + lVar25 + 0x70,1,0);
      }
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar21 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
      if ((*unaff_x28 == 0) || (lVar20 = *(long *)(*unaff_x28 + 0x60), lVar20 == 0)) break;
      if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_035575f4;
      if (lVar18 == 0) break;
      FUN_036a460c(lVar18,*(undefined8 *)(lVar20 + lVar25 + 0x80),0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar21 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
      if ((*unaff_x28 == 0) || (lVar20 = *(long *)(*unaff_x28 + 0x60), lVar20 == 0)) break;
      if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_035575f4;
      if (lVar18 == 0) break;
      FUN_036a4810(lVar18,*(undefined8 *)(lVar20 + lVar25 + 0x98),0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar21 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
      if ((*unaff_x28 == 0) || (lVar20 = *(long *)(*unaff_x28 + 0x60), lVar20 == 0)) break;
      if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_035575f4;
      if (lVar18 == 0) break;
      FUN_036a48bc(lVar18,*(undefined8 *)(lVar20 + lVar25 + 0xa0),0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar21 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
      if ((*unaff_x28 == 0) || (lVar20 = *(long *)(*unaff_x28 + 0x60), lVar20 == 0)) break;
      if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_035575f4;
      if (lVar18 == 0) break;
      FUN_036a4e24(lVar18,*(undefined8 *)(lVar20 + lVar25 + 0xa8),0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar21 * 8 + 0x28);
      if ((lVar18 == 0) || (lVar18 = UnityEngine_Material__GetColorArray(lVar18,0), lVar18 == 0))
      break;
      FUN_036aa280(lVar18,0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar21 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = FUN_037b514c(lVar18,0);
      lVar20 = unaff_x19[0xe1];
      if (lVar20 == 0) break;
      if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_035575f4;
      lVar20 = *(long *)(lVar20 + lVar21 * 8 + 0x28);
      if ((lVar20 == 0) || (uVar23 = UnityEngine_Material__GetColorArray(lVar20,0), lVar18 == 0))
      break;
      FUN_0390f3a4(lVar18,uVar23,0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar21 * 8 + 0x28);
      if ((lVar18 == 0) || (lVar18 = FUN_037b514c(lVar18,0), lVar18 == 0)) break;
      FUN_0390eec8(uVar30,uVar31,uVar14,in_d3,lVar18,0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar21 * 8 + 0x28);
      if ((lVar18 == 0) || (lVar18 = FUN_037b514c(lVar18,0), lVar18 == 0)) break;
      FUN_0390ed78(lVar18,uVar32 & 1,0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_035575f4;
      plVar24 = *(long **)(lVar18 + lVar21 * 8 + 0x28);
      uVar34 = (**(code **)(*unaff_x19 + 0x2b8))();
      if (plVar24 == (long *)0x0) break;
      (**(code **)(*plVar24 + 0x2c8))(plVar24,uVar34 & 1,*(undefined8 *)(*plVar24 + 0x2d0));
    }
  }
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


