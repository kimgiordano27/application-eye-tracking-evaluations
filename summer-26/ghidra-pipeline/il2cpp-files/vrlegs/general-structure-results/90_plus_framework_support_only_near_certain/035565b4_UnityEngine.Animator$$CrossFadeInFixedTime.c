/*
FUNCTION_NAME: UnityEngine.Animator$$CrossFadeInFixedTime
ENTRY_POINT: 035565b4
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


void UnityEngine_Animator__CrossFadeInFixedTime(long param_1)

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
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  char cVar15;
  code *pcVar16;
  long lVar17;
  uint in_w9;
  long lVar18;
  long in_x10;
  long lVar19;
  long lVar20;
  long *unaff_x19;
  int *unaff_x20;
  undefined8 uVar21;
  long *plVar22;
  long unaff_x22;
  long unaff_x23;
  long lVar23;
  long unaff_x24;
  uint unaff_w25;
  long unaff_x27;
  long *unaff_x28;
  uint uVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  ulong uVar28;
  float fVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float unaff_s14;
  float fVar40;
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
  
  uVar30 = uStack000000000000015c;
code_r0x035565b4:
  uStack000000000000015c = uVar30;
  lVar18 = in_x10;
  if ((uint)lVar18 < in_w9) {
LAB_035567c8:
    param_1 = param_1 + lVar18 * unaff_x22;
    uVar31 = *(uint *)(param_1 + 0x128);
    uVar35 = *(undefined4 *)(param_1 + 0x160);
    pcVar16 = *(code **)(*unaff_x19 + 0x8d8);
    lVar18 = unaff_x24;
LAB_035562f4:
    uVar32 = (ulong)uVar31;
    uVar12 = (ulong)(uint)fStack0000000000000070;
    uVar28 = (ulong)uStack0000000000000074;
    (*pcVar16)(in_stack_00000078,uVar12,uVar28,uVar32,fStack0000000000000104,0,
               in_stack_00000088._4_4_,uVar35);
    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    lVar11 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    uVar30 = uStack000000000000015c;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar11 = *(long *)puVar7;
    }
LAB_03556348:
    uStack000000000000015c = uVar30;
    bVar8 = false;
    fVar40 = 0.0;
    fStack0000000000000104 = *(float *)(*(long *)(lVar11 + 0xb8) + 0x15a8);
    fStack0000000000000100 = 0.0;
    uVar30 = uStack000000000000015c;
    uVar31 = in_stack_00000160;
LAB_03556364:
    uStack000000000000015c = uVar30;
    if ((*unaff_x28 == 0) || (lVar11 = *(long *)(*unaff_x28 + 0x38), lVar11 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar11 + 0x18) <= unaff_w25) goto LAB_035575f4;
    if (in_stack_00000108 == 0) goto LAB_035574b8;
    uVar30 = *(uint *)(lVar11 + lVar18 * unaff_x22 + 400);
    fVar25 = (float)FUN_03776a30(in_stack_00000108 + 0x50,0);
    uVar24 = (uint)in_stack_00000150;
    if ((uVar30 >> 6 & 1) == 0) {
      if ((uStack000000000000012c & 1) != 0) {
        if ((*unaff_x28 == 0) || (lVar11 = *(long *)(*unaff_x28 + 0x38), lVar11 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar11 + 0x18) <= uStack000000000000015c - 2) goto LAB_035575f4;
        uVar30 = *(uint *)(lVar11 + unaff_x27 + -0x330);
        fVar26 = *(float *)(lVar11 + unaff_x27 + -0x30c);
        pcVar16 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
        uVar32 = (ulong)uVar30;
        uVar12 = (ulong)(uint)fStack000000000000009c;
        uVar28 = (ulong)uStack0000000000000098;
        (*pcVar16)(in_stack_000000a0,uVar12,uVar28,uVar32,in_stack_000000a8 * fVar25 + fVar26,0,
                   in_stack_000000a8,in_stack_000000a8);
      }
LAB_03556948:
      uStack000000000000012c = 0;
    }
    else {
      lVar11 = *unaff_x28;
      if ((lVar11 == 0) || (lVar23 = *(long *)(lVar11 + 0x38), lVar23 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar23 + 0x18) <= unaff_w25) goto LAB_035575f4;
      *(undefined4 *)(lVar23 + lVar18 * unaff_x22 + 0x174) = in_stack_000017c4;
      if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)uVar31)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar23 + lVar18 * unaff_x22 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
          ((int)uVar24 < (int)unaff_w25)) || ((uStack000000000000012c & 1) != 0 || !bVar1)) {
LAB_035564e8:
        if ((uStack000000000000012c & 1) == 0) goto LAB_03556948;
      }
      else {
        if (unaff_w25 == uVar24) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar13 = FUN_026b97f8(in_stack_00000168._4_4_,0);
          if ((uVar13 & 1) != 0) goto LAB_035564e8;
          lVar11 = *unaff_x28;
          if (lVar11 == 0) goto LAB_035574b8;
        }
        lVar11 = *(long *)(lVar11 + 0x38);
        if (lVar11 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar11 + 0x18) <= unaff_w25) goto LAB_035575f4;
        lVar11 = lVar11 + lVar18 * unaff_x22;
        in_stack_00000040 = *(float *)(lVar11 + 0x60);
        in_stack_00000038 = *(float *)(lVar11 + 0x14c);
        uVar12 = (ulong)(uint)in_stack_00000038;
        in_stack_000000a0 = *(uint *)(lVar11 + 0x11c);
        uVar28 = (ulong)in_stack_000000a0;
        in_stack_000000a8 = *(float *)(lVar11 + 0x160);
        fStack000000000000009c = fVar25 * in_stack_000000a8 + in_stack_00000038;
        uStack0000000000000098 = 0;
      }
      iVar10 = *unaff_x20;
      if (iVar10 == 1) {
LAB_03556628:
        if ((*unaff_x28 != 0) && (lVar11 = *(long *)(*unaff_x28 + 0x38), lVar11 != 0)) {
          if (unaff_w25 < *(uint *)(lVar11 + 0x18)) {
            lVar11 = lVar11 + lVar18 * unaff_x22;
            lVar23 = *unaff_x19;
            uVar30 = *(uint *)(lVar11 + 0x128);
            fVar26 = *(float *)(lVar11 + 0x14c);
LAB_03556654:
            pcVar16 = *(code **)(lVar23 + 0x8d8);
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
        if ((*unaff_x28 != 0) && (lVar11 = *(long *)(*unaff_x28 + 0x38), lVar11 != 0)) {
          uVar30 = *(uint *)(lVar11 + 0x18);
          if (in_stack_00000168._4_4_ == 0x200b || (uVar12 & 1) != 0) {
            if (uVar30 <= uVar24) goto LAB_035575f4;
          }
          else {
FUN_035568e8:
            in_stack_00000150 = lVar18;
            if (uVar30 <= unaff_w25) goto LAB_035575f4;
          }
LAB_035568f0:
          lVar11 = lVar11 + in_stack_00000150 * unaff_x22;
          fVar26 = *(float *)(lVar11 + 0x14c);
          uVar30 = *(uint *)(lVar11 + 0x128);
          pcVar16 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035574b8;
      }
      if ((int)unaff_w25 < iVar10) {
        lVar11 = *unaff_x28;
        if ((lVar11 != 0) && (lVar23 = *(long *)(lVar11 + 0x38), lVar23 != 0)) {
          if (uStack000000000000015c < *(uint *)(lVar23 + 0x18)) {
            if (*(float *)(lVar23 + unaff_x27 + -0x108) == in_stack_00000040) {
              fVar26 = *(float *)(lVar23 + unaff_x27 + -0x1c);
              if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar12 = (ulong)(uint)in_stack_00000038;
              uVar13 = FUN_03567bac(in_stack_00000140 + fVar26,uVar12,0);
              if ((uVar13 & 1) != 0) {
                iVar10 = *unaff_x20;
                goto LAB_03556744;
              }
              lVar11 = *unaff_x28;
              if (lVar11 == 0) goto LAB_035574b8;
            }
            lVar11 = *(long *)(lVar11 + 0x38);
            if (lVar11 != 0) {
              uVar30 = *(uint *)(lVar11 + 0x18);
              if ((int)unaff_w25 <= (int)uVar24) goto FUN_035568e8;
              if (uVar24 < uVar30) goto LAB_035568f0;
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
        lVar11 = *(long *)(unaff_x23 + in_stack_00000120 + -0x130);
        if (lVar11 == 0) goto LAB_035574b8;
        iVar9 = FUN_036d3364(lVar11,0);
        unaff_x27 = in_stack_00000120;
        if (iVar10 != iVar9) goto LAB_03556628;
      }
      if (!bVar1) {
        if ((*unaff_x28 != 0) && (lVar11 = *(long *)(*unaff_x28 + 0x38), lVar11 != 0)) {
          if (uStack000000000000015c - 2 < *(uint *)(lVar11 + 0x18)) {
            lVar23 = *unaff_x19;
            uVar30 = *(uint *)(lVar11 + unaff_x27 + -0x330);
            fVar26 = *(float *)(lVar11 + unaff_x27 + -0x30c);
            goto LAB_03556654;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      uStack000000000000012c = 1;
    }
    if ((*unaff_x28 == 0) || (lVar11 = *(long *)(*unaff_x28 + 0x38), lVar11 == 0))
    goto LAB_035574b8;
    uVar30 = (uint)*(undefined8 *)(lVar11 + 0x18);
    if (uVar30 <= unaff_w25) goto LAB_035575f4;
    if ((*(byte *)(lVar11 + lVar18 * unaff_x22 + 0x191) >> 1 & 1) == 0) {
      if ((in_stack_00000110._4_4_ & 1) != 0) {
        uVar28 = (ulong)uStack00000000000000c0;
        uVar12 = (ulong)(uint)fStack00000000000000dc;
        uVar32 = (ulong)(uint)in_stack_000000c8;
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,uVar12,uVar28,uVar32,fStack00000000000000d0,uVar28);
      }
LAB_035569b4:
      in_stack_00000110._4_4_ = 0;
    }
    else {
      if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)uVar31)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar11 + lVar18 * unaff_x22 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((in_stack_00000110._4_4_ & 1) == 0) {
        if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
            ((int)uVar24 < (int)unaff_w25)) || (!bVar1)) goto LAB_035569b4;
        if (unaff_w25 == uVar24) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar13 = FUN_026b97f8(in_stack_00000168._4_4_,0);
          if ((uVar13 & 1) != 0) goto LAB_035569b4;
        }
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar23 = *(long *)puVar7;
        }
        unaff_x22 = 0x178;
        if ((*unaff_x28 == 0) || (lVar11 = *(long *)(*unaff_x28 + 0x38), lVar11 == 0))
        goto LAB_035574b8;
        uVar30 = (uint)*(undefined8 *)(lVar11 + 0x18);
        if (uVar30 <= unaff_w25) goto LAB_035575f4;
        lVar23 = *(long *)(lVar23 + 0xb8);
        lVar17 = lVar11 + lVar18 * 0x178;
        in_stack_000017b8 = *(undefined8 *)(lVar17 + 0x184);
        in_stack_000017b0 = *(undefined8 *)(lVar17 + 0x17c);
        fStack00000000000000d8 = *(float *)(lVar23 + 0x1598);
        fStack00000000000000dc = *(float *)(lVar23 + 0x159c);
        in_stack_000017c0 = *(float *)(lVar17 + 0x18c);
        in_stack_000000c8 = *(float *)(lVar23 + 0x15a0);
        fStack00000000000000d0 = *(float *)(lVar23 + 0x15a4);
        uStack00000000000000c0 = 0;
      }
      if (uVar30 <= unaff_w25) goto LAB_035575f4;
      lVar11 = lVar11 + lVar18 * unaff_x22;
      fVar26 = *(float *)(lVar11 + 0x128);
      fVar33 = *(float *)(lVar11 + 0x188);
      uVar21 = *(undefined8 *)(lVar11 + 0x17c);
      fVar37 = *(float *)(lVar11 + 0x184);
      uVar27 = *(undefined8 *)(lVar11 + 0x184);
      fVar36 = *(float *)(lVar11 + 0x18c);
      fVar25 = *(float *)(lVar11 + 0x11c);
      fVar34 = *(float *)(lVar11 + 0x148);
      fVar29 = *(float *)(lVar11 + 0x150);
      in_stack_00000178 = uVar21;
      fStack0000000000000180 = fVar37;
      fStack0000000000000184 = fVar33;
      in_stack_00000188 = fVar36;
      in_stack_00000190 = in_stack_000017b0;
      in_stack_00000198 = in_stack_000017b8;
      in_stack_000001a0 = in_stack_000017c0;
      uVar12 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
      lVar18 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar12 & 1) == 0) {
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar18);
        }
        fVar26 = fVar26 + (float)in_stack_000017b8;
        uVar28 = (ulong)(uint)fVar26;
        fVar25 = fVar25 - (float)((ulong)in_stack_000017b0 >> 0x20);
        fVar29 = fVar29 - in_stack_000017c0;
        uVar12 = (ulong)(uint)fVar29;
        fVar34 = fVar34 + (float)((ulong)in_stack_000017b8 >> 0x20);
        uVar32 = (ulong)(uint)fVar34;
        if (fVar25 <= fStack00000000000000d8) {
          fStack00000000000000d8 = fVar25;
        }
        if (fVar29 <= fStack00000000000000dc) {
          fStack00000000000000dc = fVar29;
        }
        if (in_stack_000000c8 <= fVar26) {
          in_stack_000000c8 = fVar26;
        }
        if (fStack00000000000000d0 <= fVar34) {
          fStack00000000000000d0 = fVar34;
        }
      }
      else {
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar18);
        }
        fVar25 = (fVar25 + (in_stack_000000c8 - (float)in_stack_000017b8)) * 0.5;
        uVar32 = (ulong)(uint)fVar25;
        if (fVar29 <= fStack00000000000000dc) {
          fStack00000000000000dc = fVar29;
        }
        uVar12 = (ulong)(uint)fStack00000000000000dc;
        uVar28 = (ulong)uStack00000000000000c0;
        if (fStack00000000000000d0 <= fVar34) {
          fStack00000000000000d0 = fVar34;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,uVar12,uVar28,uVar32,fStack00000000000000d0,uVar28);
        fStack00000000000000dc = fVar29 - fVar36;
        in_stack_000000c8 = fVar26 + fVar37;
        uStack00000000000000c0 = 0;
        fStack00000000000000d0 = fVar34 + fVar33;
        fStack00000000000000d8 = fVar25;
        in_stack_000017b0 = uVar21;
        in_stack_000017b8 = uVar27;
        in_stack_000017c0 = fVar36;
      }
      unaff_x22 = 0x178;
      if (((*unaff_x20 == 1) || (unaff_w25 == (uint)in_stack_000000e0)) ||
         (((int)uVar24 <= (int)unaff_w25 || (!bVar1)))) {
        uVar28 = (ulong)uStack00000000000000c0;
        uVar12 = (ulong)(uint)fStack00000000000000dc;
        uVar32 = (ulong)(uint)in_stack_000000c8;
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,uVar12,uVar28,uVar32,fStack00000000000000d0,uVar28);
        in_stack_00000110._4_4_ = 0;
      }
      else {
        in_stack_00000110._4_4_ = 1;
      }
    }
    puVar7 = OVRPlugin_Media_TypeInfo;
    iVar10 = *unaff_x20;
    uVar30 = uStack000000000000015c + 1;
    unaff_x27 = unaff_x27 + 0x178;
    iStack0000000000000128 = iStack0000000000000128 + 1;
    if (iVar10 <= (int)uStack000000000000015c) {
      lVar18 = *unaff_x28;
      if (lVar18 == 0) goto LAB_035574b8;
      *(int *)(lVar18 + 0x18) = iVar10;
      lVar11 = unaff_x19[0xd4];
      *(uint *)(lVar18 + 0x2c) = uVar31 + 1;
      if (iVar10 < 1 || iStack00000000000000d4 == 0) {
        iStack00000000000000d4 = 1;
      }
      *(int *)(lVar18 + 0x1c) = (int)lVar11;
      *(int *)(lVar18 + 0x24) = iStack00000000000000d4;
      *(int *)(lVar18 + 0x30) = (int)unaff_x19[0x96] + 1;
      if (((int)unaff_x19[99] != 0xff) ||
         (uVar13 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar13 & 1) == 0)) goto LAB_03554724;
      lVar18 = unaff_x19[0xdf];
      if (lVar18 != 0) {
        (**(code **)(lVar18 + 0x18))
                  (*(undefined8 *)(lVar18 + 0x40),*unaff_x28,*(undefined8 *)(lVar18 + 0x28));
      }
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      iVar10 = FUN_03911ee4(unaff_x19[0xe5],0);
      if (iVar10 != 0x19) {
        lVar18 = unaff_x19[0xe5];
        if (lVar18 == 0) goto LAB_035574b8;
        uVar30 = FUN_03911ee4(lVar18,0);
        FUN_03911f20(lVar18,uVar30 | 0x19,0);
      }
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*unaff_x28 == 0) || (lVar18 = *(long *)(*unaff_x28 + 0x60), lVar18 == 0))
        goto LAB_035574b8;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
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
      uVar27 = FUN_0390ef60(unaff_x19[0xe4],0);
      if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
      uVar30 = FUN_0390ed3c(unaff_x19[0xe4],0);
      lVar18 = *unaff_x28;
      if (lVar18 == 0) goto LAB_035574b8;
      lVar23 = 0;
      lVar11 = 0;
      goto LAB_03557110;
    }
    if (*(uint *)(unaff_x23 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    if ((*unaff_x28 == 0) || (lVar11 = *(long *)(*unaff_x28 + 0x50), lVar11 == 0))
    goto LAB_035574b8;
    lVar18 = (long)(int)uStack000000000000015c;
    lVar23 = unaff_x23 + lVar18 * unaff_x22;
    in_stack_00000160 = *(uint *)(lVar23 + 100);
    if (*(uint *)(lVar11 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
    lVar17 = (long)(int)in_stack_00000160;
    lVar11 = lVar11 + lVar17 * 0x5c;
    in_stack_00000108 = *(long *)(lVar23 + 0x38);
    uVar3 = *(ushort *)(lVar23 + 0x20);
    uVar5 = *(uint *)(lVar11 + 0x3c);
    in_stack_000000e0 = (long)(int)uVar5;
    uVar24 = *(uint *)(lVar11 + 0x68);
    iVar2 = *(int *)(lVar11 + 0x20);
    iVar10 = *(int *)(lVar11 + 0x28);
    iVar9 = *(int *)(lVar11 + 0x2c);
    uVar6 = *(uint *)(lVar11 + 0x40);
    in_stack_00000150 = (long)(int)uVar6;
    fVar29 = *(float *)(lVar11 + 0x4c);
    fVar33 = *(float *)(lVar11 + 0x54);
    fVar25 = *(float *)(lVar11 + 0x58);
    fVar38 = *(float *)(lVar11 + 0x5c);
    fVar36 = *(float *)(lVar11 + 0x60);
    fVar37 = *(float *)(lVar11 + 0x6c);
    fVar39 = *(float *)(lVar11 + 0x70);
    fVar26 = *(float *)(lVar11 + 0x74);
    fVar34 = *(float *)(lVar11 + 0x78);
    in_stack_00000168._4_4_ = (uint)uVar3;
    if ((int)uVar24 < 9) {
      switch(uVar24) {
      case 1:
        if ((char)unaff_x19[0x1e] == '\0') {
          in_stack_000000f8._4_4_ = fVar36 + 0.0;
        }
        else {
          in_stack_000000f8._4_4_ = 0.0 - fVar25;
        }
        break;
      case 2:
LAB_03555018:
        in_stack_000000f8._4_4_ = (fVar36 + fVar38 * 0.5) - fVar25 * 0.5;
        break;
      default:
        goto switchD_03554f58_caseD_3;
      case 4:
        in_stack_000000f8._4_4_ = (fVar38 + fVar36) - fVar25;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar38 + fVar36;
        }
        break;
      case 8:
        goto switchD_03554f58_caseD_8;
      }
LAB_03555088:
      in_stack_000000e8 = 0;
    }
    else if (uVar24 == 0x10) {
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
          if ((fVar25 <= fVar38) && (!bVar1 && uVar24 >> 4 == 0)) {
            in_stack_000000f8._4_4_ = fVar36;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000f8._4_4_ = fVar38 + fVar36;
            }
            goto LAB_03555088;
          }
          if (((uVar30 == 1) || (in_stack_00000160 != uVar31)) ||
             (uStack000000000000015c == *(uint *)((long)unaff_x19 + 0x324))) {
            in_stack_000000f8._4_4_ = fVar36;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000f8._4_4_ = fVar38 + fVar36;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uStack0000000000000028 = FUN_026b97f8(in_stack_00000168._4_4_,0);
            in_stack_000000e8 = 0;
          }
          else {
            cVar15 = (char)unaff_x19[0x1e];
            fVar36 = -fVar25;
            if (cVar15 != '\0') {
              fVar36 = fVar25;
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
                cVar15 = (char)unaff_x19[0x1e];
                if ((uVar12 & 1) != 0) goto LAB_03556e74;
              }
              iVar9 = (iVar2 - (~uStack0000000000000028 & 1)) + iVar10;
            }
            fVar25 = ((fVar38 + fVar36) * fVar25) / (float)iVar9;
            if (cVar15 == '\0') {
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
    else if (uVar24 == 0x20) {
      fVar25 = fVar37 + fVar26;
      goto LAB_03555018;
    }
switchD_03554f58_caseD_3:
    uVar24 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
    if (uVar24 <= uStack000000000000015c) goto LAB_035575f4;
    lVar11 = in_stack_000000f0 + lVar18 * 0x178;
    fVar36 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
    in_stack_00000140 = (float)in_stack_000000b8 + (float)in_stack_000000e8;
    fVar25 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)((ulong)in_stack_000000e8 >> 0x20);
    if (*(char *)(lVar11 + 0x194) == '\0') goto LAB_03555938;
    iVar10 = *(int *)(in_stack_000000f0 + lVar18 * 0x178 + 0x2c);
    if (iVar10 != 0) goto LAB_0355574c;
    fVar38 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)in_stack_00000160,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
    case 0:
      lVar23 = in_stack_000000f0 + lVar18 * 0x178;
      *(undefined4 *)(lVar23 + 0x84) = 0;
      *(undefined4 *)(lVar23 + 0xac) = 0;
      *(undefined4 *)(lVar23 + 0xd4) = 0x3f800000;
      fVar38 = 1.0;
      break;
    case 1:
      fVar34 = *(float *)(in_stack_000000f0 + lVar18 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
        lVar23 = in_stack_000000f0 + lVar18 * 0x178;
        fVar26 = (in_stack_000000f8._4_4_ + fVar34) - *(float *)(in_stack_00000080 + 0x230);
        fVar34 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
        goto LAB_035551cc;
      }
      lVar23 = in_stack_000000f0 + lVar18 * 0x178;
      fVar26 = fVar26 - fVar37;
      *(float *)(lVar23 + 0x84) = fVar38 + (fVar34 - fVar37) / fVar26;
      *(float *)(lVar23 + 0xac) = fVar38 + (*(float *)(lVar23 + 0x98) - fVar37) / fVar26;
      *(float *)(lVar23 + 0xd4) = fVar38 + (*(float *)(lVar23 + 0xc0) - fVar37) / fVar26;
      fVar38 = fVar38 + (*(float *)(lVar23 + 0xe8) - fVar37) / fVar26;
      break;
    case 2:
      lVar23 = in_stack_000000f0 + lVar18 * 0x178;
      fVar34 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      fVar26 = (in_stack_000000f8._4_4_ + *(float *)(lVar23 + 0x70)) -
               *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
      *(float *)(lVar23 + 0x84) = fVar38 + fVar26 / fVar34;
      *(float *)(lVar23 + 0xac) =
           fVar38 + ((in_stack_000000f8._4_4_ + *(float *)(lVar23 + 0x98)) -
                    *(float *)(in_stack_00000080 + 0x230)) /
                    (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
      *(float *)(lVar23 + 0xd4) =
           fVar38 + ((in_stack_000000f8._4_4_ + *(float *)(lVar23 + 0xc0)) -
                    *(float *)(in_stack_00000080 + 0x230)) /
                    (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
      fVar38 = fVar38 + ((in_stack_000000f8._4_4_ + *(float *)(lVar23 + 0xe8)) -
                        *(float *)(in_stack_00000080 + 0x230)) /
                        (*(float *)(in_stack_00000080 + 0x238) -
                        *(float *)(in_stack_00000080 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x62]) {
      case 0:
        lVar23 = in_stack_000000f0 + lVar18 * 0x178;
        *(undefined4 *)(lVar23 + 0x88) = 0;
        *(undefined4 *)(lVar23 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar23 + 0xd8) = 0;
        *(undefined4 *)(lVar23 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar23 = in_stack_000000f0 + lVar18 * 0x178;
        fVar34 = fVar34 - fVar39;
        fVar26 = fVar38 + (*(float *)(lVar23 + 0x74) - fVar39) / fVar34;
        fVar34 = fVar38 + (*(float *)(lVar23 + 0x9c) - fVar39) / fVar34;
        *(float *)(lVar23 + 0x88) = fVar26;
        *(float *)(lVar23 + 0xb0) = fVar34;
        *(float *)(lVar23 + 0xd8) = fVar26;
        *(float *)(lVar23 + 0x100) = fVar34;
        break;
      case 2:
        lVar23 = in_stack_000000f0 + lVar18 * 0x178;
        fVar26 = fVar38 + (*(float *)(lVar23 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                          (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
        *(float *)(lVar23 + 0x88) = fVar26;
        fVar34 = *(float *)(unaff_x19 + 0x9c);
        fVar37 = *(float *)(unaff_x19 + 0x9d);
        *(float *)(lVar23 + 0xd8) = fVar26;
        fVar26 = fVar38 + (*(float *)(lVar23 + 0x9c) - fVar34) / (fVar37 - fVar34);
        *(float *)(lVar23 + 0xb0) = fVar26;
        *(float *)(lVar23 + 0x100) = fVar26;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar24 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
      }
      if (uVar24 <= uStack000000000000015c) goto LAB_035575f4;
      lVar23 = in_stack_000000f0 + lVar18 * 0x178;
      fVar26 = *(float *)(lVar23 + 0x15c);
      fVar34 = (1.0 - (*(float *)(lVar23 + 0x88) + *(float *)(lVar23 + 0xb0)) * fVar26) * 0.5;
      fVar37 = fVar38 + *(float *)(lVar23 + 0x88) * fVar26 + fVar34;
      fVar38 = fVar38 + fVar34 + *(float *)(lVar23 + 0xb0) * fVar26;
      *(float *)(lVar23 + 0x84) = fVar37;
      *(float *)(lVar23 + 0xac) = fVar37;
      *(float *)(lVar23 + 0xd4) = fVar38;
      break;
    default:
      goto switchD_0355512c_default;
    }
    *(float *)(in_stack_000000f0 + lVar18 * 0x178 + 0xfc) = fVar38;
switchD_0355512c_default:
    switch((int)unaff_x19[0x62]) {
    case 0:
      if (uVar24 <= uStack000000000000015c) goto LAB_035575f4;
      lVar23 = in_stack_000000f0 + lVar18 * 0x178;
      *(undefined4 *)(lVar23 + 0x88) = 0;
      *(undefined4 *)(lVar23 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar23 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar23 + 0x100) = 0;
      break;
    case 1:
      if (uStack000000000000015c < uVar24) {
        lVar23 = in_stack_000000f0 + lVar18 * 0x178;
        fVar29 = fVar29 - fVar33;
        fVar26 = (*(float *)(lVar23 + 0x74) - fVar33) / fVar29;
        fVar29 = (*(float *)(lVar23 + 0x9c) - fVar33) / fVar29;
        *(float *)(lVar23 + 0x88) = fVar26;
        goto UnityEngine_Animator__set_stabilizeFeet;
      }
      goto LAB_035575f4;
    case 2:
      if (uVar24 <= uStack000000000000015c) goto LAB_035575f4;
      lVar23 = in_stack_000000f0 + lVar18 * 0x178;
      fVar26 = (*(float *)(lVar23 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar23 + 0x88) = fVar26;
      fVar29 = (*(float *)(lVar23 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
      *(float *)(lVar23 + 0xb0) = fVar29;
      *(float *)(lVar23 + 0xd8) = fVar29;
      *(float *)(lVar23 + 0x100) = fVar26;
      break;
    case 3:
      if (uVar24 <= uStack000000000000015c) goto LAB_035575f4;
      lVar23 = in_stack_000000f0 + lVar18 * 0x178;
      fVar34 = *(float *)(lVar23 + 0x15c);
      fVar29 = (1.0 - (*(float *)(lVar23 + 0x84) + *(float *)(lVar23 + 0xd4)) / fVar34) * 0.5;
      fVar26 = *(float *)(lVar23 + 0x84) / fVar34 + fVar29;
      fVar29 = fVar29 + *(float *)(lVar23 + 0xd4) / fVar34;
      *(float *)(lVar23 + 0x88) = fVar26;
      *(float *)(lVar23 + 0xb0) = fVar29;
      *(float *)(lVar23 + 0x100) = fVar26;
      *(float *)(lVar23 + 0xd8) = fVar29;
    }
    if (uVar24 <= uStack000000000000015c) goto LAB_035575f4;
    lVar23 = in_stack_000000f0 + lVar18 * 0x178;
    unaff_s14 = *(float *)(lVar23 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    if ((*(char *)(lVar23 + 0x5c) == '\0') &&
       ((*(byte *)(in_stack_000000f0 + lVar18 * 0x178 + 400) & 1) != 0)) {
      unaff_s14 = -unaff_s14;
    }
    fVar26 = in_stack_00000050._4_4_;
    if (((in_stack_00000058 == 2) || (fVar26 = fStack0000000000000034, in_stack_00000058 == 1)) ||
       (fVar26 = fStack000000000000002c, in_stack_00000058 == 0)) {
      unaff_s14 = fVar26 * unaff_s14;
    }
    lVar23 = in_stack_000000f0 + lVar18 * 0x178;
    fVar29 = *(float *)(lVar23 + 0x88);
    fVar34 = *(float *)(lVar23 + 0x84);
    fVar26 = -2.1474836e+09;
    if (fVar34 != INFINITY) {
      fVar26 = (float)(int)fVar34;
    }
    fVar37 = *(float *)(lVar23 + 0xd4);
    fVar38 = *(float *)(lVar23 + 0xd8);
    fVar33 = -2.1474836e+09;
    if (fVar29 != INFINITY) {
      fVar33 = (float)(int)fVar29;
    }
    uVar35 = FUN_03591d3c(fVar34 - fVar26,fVar29 - fVar33);
    *(undefined4 *)(lVar23 + 0x84) = uVar35;
    if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    fVar38 = fVar38 - fVar33;
    *(float *)(lVar23 + 0x88) = unaff_s14;
    uVar35 = FUN_03591d3c(fVar34 - fVar26,fVar38);
    *(undefined4 *)(in_stack_000000f0 + lVar18 * 0x178 + 0xac) = uVar35;
    if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    fVar37 = fVar37 - fVar26;
    *(float *)(in_stack_000000f0 + lVar18 * 0x178 + 0xb0) = unaff_s14;
    fVar26 = (float)FUN_03591d3c(fVar37,fVar38);
    *(float *)(lVar23 + 0xd4) = fVar26;
    if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    *(float *)(lVar23 + 0xd8) = unaff_s14;
    uVar35 = FUN_03591d3c(fVar37,fVar29 - fVar33);
    *(undefined4 *)(in_stack_000000f0 + lVar18 * 0x178 + 0xfc) = uVar35;
    uVar24 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
    if (uVar24 <= uStack000000000000015c) goto LAB_035575f4;
    *(float *)(in_stack_000000f0 + lVar18 * 0x178 + 0x100) = unaff_s14;
    unaff_x20 = in_stack_00000048;
LAB_0355574c:
    if (((int)uStack000000000000015c < (int)unaff_x19[0x65]) &&
       (iStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
      if (((int)in_stack_00000160 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
        if (uVar24 <= uStack000000000000015c) goto LAB_035575f4;
        lVar11 = in_stack_000000f0 + lVar18 * 0x178;
        *(ulong *)(lVar11 + 0x70) =
             CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar11 + 0x70) >> 0x20),
                      fVar36 + (float)*(undefined8 *)(lVar11 + 0x70));
        *(float *)(lVar11 + 0x78) = fVar25 + *(float *)(lVar11 + 0x78);
        *(ulong *)(lVar11 + 0x98) =
             CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar11 + 0x98) >> 0x20),
                      fVar36 + (float)*(undefined8 *)(lVar11 + 0x98));
        *(float *)(lVar11 + 0xa0) = fVar25 + *(float *)(lVar11 + 0xa0);
        *(ulong *)(lVar11 + 0xc0) =
             CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar11 + 0xc0) >> 0x20),
                      fVar36 + (float)*(undefined8 *)(lVar11 + 0xc0));
        *(float *)(lVar11 + 200) = fVar25 + *(float *)(lVar11 + 200);
        *(ulong *)(lVar11 + 0xe8) =
             CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar11 + 0xe8) >> 0x20),
                      fVar36 + (float)*(undefined8 *)(lVar11 + 0xe8));
        *(float *)(lVar11 + 0xf0) = fVar25 + *(float *)(lVar11 + 0xf0);
        goto UnityEngine_Animator__GetAnimatorClipInfoCount;
      }
      if (((int)in_stack_00000160 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
        if (uStack000000000000015c < uVar24) {
          if (*(int *)(in_stack_000000f0 + lVar18 * 0x178 + 0x68) == iStack0000000000000030) {
            lVar11 = in_stack_000000f0 + lVar18 * 0x178;
            *(ulong *)(lVar11 + 0x70) =
                 CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar11 + 0x70) >> 0x20)
                          ,fVar36 + (float)*(undefined8 *)(lVar11 + 0x70));
            *(float *)(lVar11 + 0x78) = fVar25 + *(float *)(lVar11 + 0x78);
            *(ulong *)(lVar11 + 0x98) =
                 CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar11 + 0x98) >> 0x20)
                          ,fVar36 + (float)*(undefined8 *)(lVar11 + 0x98));
            *(float *)(lVar11 + 0xa0) = fVar25 + *(float *)(lVar11 + 0xa0);
            *(ulong *)(lVar11 + 0xc0) =
                 CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar11 + 0xc0) >> 0x20)
                          ,fVar36 + (float)*(undefined8 *)(lVar11 + 0xc0));
            *(float *)(lVar11 + 200) = fVar25 + *(float *)(lVar11 + 200);
            *(ulong *)(lVar11 + 0xe8) =
                 CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar11 + 0xe8) >> 0x20)
                          ,fVar36 + (float)*(undefined8 *)(lVar11 + 0xe8));
            *(float *)(lVar11 + 0xf0) = fVar25 + *(float *)(lVar11 + 0xf0);
            goto UnityEngine_Animator__GetAnimatorClipInfoCount;
          }
          goto UnityEngine_Animator__GetAnimatorTransitionInfo;
        }
        goto LAB_035575f4;
      }
    }
UnityEngine_Animator__GetAnimatorTransitionInfo:
    if (uVar24 <= uStack000000000000015c) goto LAB_035575f4;
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbded8);
      DAT_0411f172 = '\x01';
      uVar24 = *(uint *)(in_stack_000000f0 + 0x18);
    }
    puVar7 = PTR_DAT_03cbded8;
    uVar35 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
    lVar23 = in_stack_000000f0 + lVar18 * 0x178;
    *(undefined8 *)(lVar23 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
    *(undefined4 *)(lVar23 + 0x78) = uVar35;
    if (uVar24 <= uStack000000000000015c) goto LAB_035575f4;
    uVar35 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
    lVar23 = in_stack_000000f0 + lVar18 * 0x178;
    *(undefined8 *)(lVar23 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
    *(undefined4 *)(lVar23 + 0xa0) = uVar35;
    uVar35 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
    *(undefined8 *)(lVar23 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
    *(undefined4 *)(lVar23 + 200) = uVar35;
    uVar35 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
    *(undefined8 *)(lVar23 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
    *(undefined4 *)(lVar23 + 0xf0) = uVar35;
    *(undefined1 *)(lVar11 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
    if (iVar10 == 0) {
      pcVar16 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
      (*pcVar16)();
    }
    else if (iVar10 == 1) {
      pcVar16 = *(code **)(*unaff_x19 + 0x8c8);
      goto LAB_0355591c;
    }
LAB_03555938:
    if ((*in_stack_00000170 != 0) && (lVar11 = *(long *)(*in_stack_00000170 + 0x38), lVar11 != 0)) {
      if (uStack000000000000015c < *(uint *)(lVar11 + 0x18)) {
        lVar11 = lVar11 + lVar18 * 0x178;
        uVar27 = *(undefined8 *)(lVar11 + 0x11c);
        *(undefined8 *)(lVar11 + 0x11c) =
             CONCAT44(in_stack_00000140 + (float)((ulong)uVar27 >> 0x20),fVar36 + (float)uVar27);
        *(float *)(lVar11 + 0x124) = fVar25 + *(float *)(lVar11 + 0x124);
        if ((*in_stack_00000170 != 0) &&
           (lVar11 = *(long *)(*in_stack_00000170 + 0x38), lVar11 != 0)) {
          if (uStack000000000000015c < *(uint *)(lVar11 + 0x18)) {
            lVar11 = lVar11 + lVar18 * 0x178;
            *(ulong *)(lVar11 + 0x110) =
                 CONCAT44(in_stack_00000140 +
                          (float)((ulong)*(undefined8 *)(lVar11 + 0x110) >> 0x20),
                          fVar36 + (float)*(undefined8 *)(lVar11 + 0x110));
            *(float *)(lVar11 + 0x118) = fVar25 + *(float *)(lVar11 + 0x118);
            if ((*in_stack_00000170 != 0) &&
               (lVar11 = *(long *)(*in_stack_00000170 + 0x38), lVar11 != 0)) {
              if (*(uint *)(lVar11 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
              lVar11 = lVar11 + lVar18 * 0x178;
              *(ulong *)(lVar11 + 0x128) =
                   CONCAT44(in_stack_00000140 +
                            (float)((ulong)*(undefined8 *)(lVar11 + 0x128) >> 0x20),
                            fVar36 + (float)*(undefined8 *)(lVar11 + 0x128));
              *(float *)(lVar11 + 0x130) = fVar25 + *(float *)(lVar11 + 0x130);
              if ((*in_stack_00000170 == 0) ||
                 (lVar11 = *(long *)(*in_stack_00000170 + 0x38), lVar11 == 0)) goto LAB_035574b8;
              if (*(uint *)(lVar11 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
              lVar11 = lVar11 + lVar18 * 0x178;
              *(float *)(lVar11 + 0x134) = fVar36 + *(float *)(lVar11 + 0x134);
              *(ulong *)(lVar11 + 0x138) =
                   CONCAT44(fVar25 + (float)((ulong)*(undefined8 *)(lVar11 + 0x138) >> 0x20),
                            in_stack_00000140 + (float)*(undefined8 *)(lVar11 + 0x138));
              lVar11 = *in_stack_00000170;
              if ((lVar11 == 0) || (lVar23 = *(long *)(lVar11 + 0x38), lVar23 == 0))
              goto LAB_035574b8;
              uVar24 = *(uint *)(lVar23 + 0x18);
              if (uVar24 <= uStack000000000000015c) goto LAB_035575f4;
              lVar19 = lVar23 + lVar18 * 0x178;
              uVar12 = CONCAT44(fVar36 + (float)((ulong)*(undefined8 *)(lVar19 + 0x140) >> 0x20),
                                fVar36 + (float)*(undefined8 *)(lVar19 + 0x140));
              fVar25 = in_stack_00000140 + *(float *)(lVar19 + 0x150);
              uVar28 = (ulong)(uint)fVar25;
              uVar32 = CONCAT44(in_stack_00000140 +
                                (float)((ulong)*(undefined8 *)(lVar19 + 0x148) >> 0x20),
                                in_stack_00000140 + (float)*(undefined8 *)(lVar19 + 0x148));
              *(float *)(lVar19 + 0x150) = fVar25;
              *(ulong *)(lVar19 + 0x140) = uVar12;
              *(ulong *)(lVar19 + 0x148) = uVar32;
              if (in_stack_00000160 == uVar31) {
                uVar31 = *unaff_x20 - 1;
                if (uStack000000000000015c == uVar31) goto LAB_03555b44;
              }
              else {
                lVar11 = *(long *)(lVar11 + 0x50);
                if (lVar11 == 0) goto LAB_035574b8;
                if (*(uint *)(lVar11 + 0x18) <= uVar31) goto LAB_035575f4;
                lVar19 = (long)(int)uVar31;
                lVar20 = lVar11 + lVar19 * 0x5c;
                uVar32 = (ulong)(uint)*(float *)(lVar20 + 0x58);
                fVar25 = in_stack_00000140 + *(float *)(lVar20 + 0x54);
                uVar12 = (ulong)(uint)fVar25;
                fVar26 = fVar36 + *(float *)(lVar20 + 0x58);
                uVar28 = (ulong)(uint)fVar26;
                *(ulong *)(lVar20 + 0x4c) =
                     CONCAT44(in_stack_00000140 +
                              (float)((ulong)*(undefined8 *)(lVar20 + 0x4c) >> 0x20),
                              in_stack_00000140 + (float)*(undefined8 *)(lVar20 + 0x4c));
                *(float *)(lVar20 + 0x54) = fVar25;
                *(float *)(lVar20 + 0x58) = fVar26;
                if (uVar24 <= *(uint *)(lVar20 + 0x34)) goto LAB_035575f4;
                uVar35 = *(undefined4 *)
                          (lVar23 + (long)(int)*(uint *)(lVar20 + 0x34) * 0x178 + 0x11c);
                lVar11 = lVar11 + lVar19 * 0x5c;
                *(float *)(lVar11 + 0x70) = fVar25;
                *(undefined4 *)(lVar11 + 0x6c) = uVar35;
                lVar11 = *in_stack_00000170;
                if ((lVar11 == 0) || (lVar23 = *(long *)(lVar11 + 0x50), lVar23 == 0))
                goto LAB_035574b8;
                if (*(uint *)(lVar23 + 0x18) <= uVar31) goto LAB_035575f4;
                lVar11 = *(long *)(lVar11 + 0x38);
                if (lVar11 == 0) goto LAB_035574b8;
                uVar31 = *(uint *)(lVar23 + lVar19 * 0x5c + 0x40);
                if (*(uint *)(lVar11 + 0x18) <= uVar31) goto LAB_035575f4;
                lVar23 = lVar23 + lVar19 * 0x5c;
                *(undefined4 *)(lVar23 + 0x74) =
                     *(undefined4 *)(lVar11 + (long)(int)uVar31 * 0x178 + 0x128);
                *(undefined4 *)(lVar23 + 0x78) = *(undefined4 *)(lVar23 + 0x4c);
                uVar31 = *unaff_x20 - 1;
LAB_03555b44:
                if (uStack000000000000015c == uVar31) {
                  lVar11 = *in_stack_00000170;
                  if ((lVar11 == 0) || (lVar23 = *(long *)(lVar11 + 0x50), lVar23 == 0))
                  goto LAB_035574b8;
                  if (*(uint *)(lVar23 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
                  lVar19 = lVar23 + lVar17 * 0x5c;
                  uVar32 = (ulong)(uint)*(float *)(lVar19 + 0x58);
                  uVar12 = CONCAT44(in_stack_00000140 +
                                    (float)((ulong)*(undefined8 *)(lVar19 + 0x4c) >> 0x20),
                                    in_stack_00000140 + (float)*(undefined8 *)(lVar19 + 0x4c));
                  fVar25 = in_stack_00000140 + *(float *)(lVar19 + 0x54);
                  fVar36 = fVar36 + *(float *)(lVar19 + 0x58);
                  uVar28 = (ulong)(uint)fVar36;
                  *(ulong *)(lVar19 + 0x4c) = uVar12;
                  *(float *)(lVar19 + 0x54) = fVar25;
                  *(float *)(lVar19 + 0x58) = fVar36;
                  lVar11 = *(long *)(lVar11 + 0x38);
                  if (lVar11 == 0) goto LAB_035574b8;
                  if (*(uint *)(lVar11 + 0x18) <= *(uint *)(lVar19 + 0x34)) goto LAB_035575f4;
                  uVar35 = *(undefined4 *)
                            (lVar11 + (long)(int)*(uint *)(lVar19 + 0x34) * 0x178 + 0x11c);
                  lVar23 = lVar23 + lVar17 * 0x5c;
                  *(float *)(lVar23 + 0x70) = fVar25;
                  *(undefined4 *)(lVar23 + 0x6c) = uVar35;
                  lVar11 = *in_stack_00000170;
                  if ((lVar11 == 0) || (lVar23 = *(long *)(lVar11 + 0x50), lVar23 == 0))
                  goto LAB_035574b8;
                  if (*(uint *)(lVar23 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
                  lVar11 = *(long *)(lVar11 + 0x38);
                  if (lVar11 == 0) goto LAB_035574b8;
                  uVar31 = *(uint *)(lVar23 + lVar17 * 0x5c + 0x40);
                  if (*(uint *)(lVar11 + 0x18) <= uVar31) goto LAB_035575f4;
                  lVar23 = lVar23 + lVar17 * 0x5c;
                  *(undefined4 *)(lVar23 + 0x74) =
                       *(undefined4 *)(lVar11 + (long)(int)uVar31 * 0x178 + 0x128);
                  *(undefined4 *)(lVar23 + 0x78) = *(undefined4 *)(lVar23 + 0x4c);
                }
              }
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar13 = FUN_026b82c4(in_stack_00000168._4_4_,0);
              if (((((uVar13 & 1) == 0) && (1 < in_stack_00000168._4_4_ - 0x2010)) &&
                  (in_stack_00000168._4_4_ != 0xad)) && (in_stack_00000168._4_4_ != 0x2d)) {
                if ((in_stack_00000118._4_4_ & 1) == 0) {
                  if (uVar30 != 1) {
LAB_0355686c:
                    in_stack_00000118._4_4_ = 0;
                    goto LAB_03555d70;
                  }
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar13 = FUN_026b81f8(in_stack_00000168._4_4_,0);
                  if ((uVar13 & 1) != 0) {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar13 = FUN_026b63d8(in_stack_00000168._4_4_,0);
                    if (((in_stack_00000168._4_4_ != 0x200b) && ((uVar13 & 1) == 0)) &&
                       (*unaff_x20 != 1)) goto LAB_0355686c;
                  }
                }
                else if (((uVar30 != 1) &&
                         ((int)uStack000000000000015c <
                          (int)(*(uint *)(in_stack_000000f0 + 0x18) - 1))) &&
                        (((int)uStack000000000000015c < *unaff_x20 &&
                         ((in_stack_00000168._4_4_ == 0x2019 || (in_stack_00000168._4_4_ == 0x27))))
                        )) {
                  if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c - 1)
                  goto LAB_035575f4;
                  uVar4 = *(undefined2 *)(in_stack_000000f0 + unaff_x27 + -0x438);
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar13 = FUN_026b82c4(uVar4,0);
                  if ((uVar13 & 1) != 0) {
                    if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar30) goto LAB_035575f4;
                    uVar4 = *(undefined2 *)(in_stack_000000f0 + unaff_x27 + -0x148);
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar13 = FUN_026b82c4(uVar4,0);
                    if ((uVar13 & 1) != 0) goto LAB_03555d68;
                  }
                }
                if (uStack000000000000015c == *unaff_x20 - 1U) {
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar13 = FUN_026b82c4(in_stack_00000168._4_4_,0);
                  iVar10 = iStack0000000000000128;
                  if ((uVar13 & 1) == 0) goto LAB_03556070;
                }
                else {
LAB_03556070:
                  iVar10 = uStack000000000000015c - 1;
                }
                lVar11 = *in_stack_00000170;
                if (lVar11 == 0) goto LAB_035574b8;
                lVar23 = *(long *)(lVar11 + 0x40);
                if (lVar23 == 0) goto LAB_035574b8;
                uVar31 = *(uint *)(lVar11 + 0x24);
                iVar9 = *(int *)(lVar23 + 0x18);
                if (iVar9 < (int)(uVar31 + 1)) {
                  if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  FUN_01ff025c((long *)(lVar11 + 0x40),iVar9 + 1,
                               *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
                  lVar11 = *in_stack_00000170;
                  if (lVar11 == 0) goto LAB_035574b8;
                }
                lVar11 = *(long *)(lVar11 + 0x40);
                if (lVar11 == 0) goto LAB_035574b8;
                if (*(uint *)(lVar11 + 0x18) <= uVar31) goto LAB_035575f4;
                lVar11 = lVar11 + (long)(int)uVar31 * 0x18;
                *(long **)(lVar11 + 0x20) = unaff_x19;
                *(uint *)(lVar11 + 0x28) = uStack0000000000000158;
                *(int *)(lVar11 + 0x2c) = iVar10;
                *(uint *)(lVar11 + 0x30) = (iVar10 - uStack0000000000000158) + 1;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                lVar11 = unaff_x19[0x6d];
                if (lVar11 == 0) goto LAB_035574b8;
                lVar23 = *(long *)(lVar11 + 0x50);
                *(int *)(lVar11 + 0x24) = *(int *)(lVar11 + 0x24) + 1;
                if (lVar23 == 0) goto LAB_035574b8;
                if (*(uint *)(lVar23 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
                lVar23 = lVar23 + lVar17 * 0x5c;
                in_stack_00000118._4_4_ = 0;
                iStack00000000000000d4 = iStack00000000000000d4 + 1;
                *(int *)(lVar23 + 0x30) = *(int *)(lVar23 + 0x30) + 1;
              }
              else {
                if ((in_stack_00000118._4_4_ & 1) == 0) {
                  uStack0000000000000158 = uStack000000000000015c;
                }
                if (uStack000000000000015c == *unaff_x20 - 1U) {
                  lVar11 = *in_stack_00000170;
                  if (lVar11 == 0) goto LAB_035574b8;
                  lVar23 = *(long *)(lVar11 + 0x40);
                  if (lVar23 == 0) goto LAB_035574b8;
                  uVar31 = *(uint *)(lVar11 + 0x24);
                  iVar10 = *(int *)(lVar23 + 0x18);
                  if (iVar10 < (int)(uVar31 + 1)) {
                    if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    FUN_01ff025c((long *)(lVar11 + 0x40),iVar10 + 1,
                                 *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
                    lVar11 = *in_stack_00000170;
                    if (lVar11 == 0) goto LAB_035574b8;
                  }
                  lVar11 = *(long *)(lVar11 + 0x40);
                  if (lVar11 == 0) goto LAB_035574b8;
                  if (*(uint *)(lVar11 + 0x18) <= uVar31) goto LAB_035575f4;
                  lVar11 = lVar11 + (long)(int)uVar31 * 0x18;
                  *(long **)(lVar11 + 0x20) = unaff_x19;
                  *(uint *)(lVar11 + 0x28) = uStack0000000000000158;
                  *(uint *)(lVar11 + 0x2c) = uStack000000000000015c;
                  *(uint *)(lVar11 + 0x30) = uVar30 - uStack0000000000000158;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  lVar11 = unaff_x19[0x6d];
                  if (lVar11 == 0) goto LAB_035574b8;
                  lVar23 = *(long *)(lVar11 + 0x50);
                  *(int *)(lVar11 + 0x24) = *(int *)(lVar11 + 0x24) + 1;
                  if (lVar23 == 0) goto LAB_035574b8;
                  if (*(uint *)(lVar23 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
                  lVar23 = lVar23 + lVar17 * 0x5c;
                  iStack00000000000000d4 = iStack00000000000000d4 + 1;
                  *(int *)(lVar23 + 0x30) = *(int *)(lVar23 + 0x30) + 1;
                }
LAB_03555d68:
                in_stack_00000118._4_4_ = 1;
              }
LAB_03555d70:
              unaff_x22 = 0x178;
              if ((*in_stack_00000170 == 0) ||
                 (lVar11 = *(long *)(*in_stack_00000170 + 0x38), lVar11 == 0)) goto LAB_035574b8;
              uVar24 = *(uint *)(lVar11 + 0x18);
              if (uVar24 <= uStack000000000000015c) goto LAB_035575f4;
              unaff_x23 = in_stack_000000f0;
              unaff_x28 = in_stack_00000170;
              unaff_w25 = uStack000000000000015c;
              in_stack_00000120 = unaff_x27;
              uVar31 = in_stack_00000160;
              if ((*(byte *)(lVar11 + lVar18 * 0x178 + 400) >> 2 & 1) == 0) {
                if (!bVar8) goto LAB_03556254;
                goto LAB_03555da0;
              }
              lVar11 = lVar11 + lVar18 * 0x178;
              iVar10 = *(int *)(lVar11 + 0x68);
              *(undefined4 *)(lVar11 + 0x16c) = in_stack_000017c4;
              if ((((int)unaff_x19[0x65] < (int)uStack000000000000015c) ||
                  ((int)unaff_x19[0x66] < (int)in_stack_00000160)) ||
                 (((int)unaff_x19[0x5c] == 5 && (iVar10 + 1 != (int)unaff_x19[0x67])))) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar13 = FUN_026b63d8(in_stack_00000168._4_4_,0);
              if ((in_stack_00000168._4_4_ != 0x200b) && ((uVar13 & 1) == 0)) {
                lVar11 = *in_stack_00000170;
                if ((lVar11 == 0) || (lVar23 = *(long *)(lVar11 + 0x38), lVar23 == 0))
                goto LAB_035574b8;
                if (*(uint *)(lVar23 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
                fVar25 = *(float *)(lVar23 + lVar18 * 0x178 + 0x160);
                if (fVar40 <= fVar25) {
                  fVar40 = fVar25;
                }
                if (fStack0000000000000100 <= ABS(unaff_s14)) {
                  fStack0000000000000100 = ABS(unaff_s14);
                }
                if (iVar10 != in_stack_00000068._4_4_) {
                  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar11 = *in_stack_00000170;
                    if (lVar11 == 0) goto LAB_035574b8;
                    lVar23 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                  }
                  else {
                    lVar23 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                  }
                  fStack0000000000000104 = *(float *)(lVar23 + 0x15a8);
                }
                lVar11 = *(long *)(lVar11 + 0x38);
                if (lVar11 == 0) goto LAB_035574b8;
                if (*(uint *)(lVar11 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
                if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
                fVar26 = *(float *)(lVar11 + lVar18 * 0x178 + 0x14c);
                fVar25 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
                fVar26 = fVar26 + fVar40 * fVar25;
                if (fVar26 <= fStack0000000000000104) {
                  fStack0000000000000104 = fVar26;
                }
                uVar12 = (ulong)(uint)fStack0000000000000104;
                in_stack_00000068._4_4_ = iVar10;
              }
              if (!bVar8) goto code_r0x035561ec;
              goto LAB_035562b4;
            }
            goto LAB_035574b8;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      goto LAB_035575f4;
    }
    goto LAB_035574b8;
  }
  goto LAB_035575f4;
code_r0x035561ec:
  bVar8 = false;
  if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
      ((int)uVar6 < (int)uStack000000000000015c)) || ((bool)(bVar1 ^ 1))) goto LAB_03556364;
  if (uStack000000000000015c == uVar6) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar13 = FUN_026b97f8(in_stack_00000168._4_4_,0);
    if ((uVar13 & 1) != 0) {
LAB_03556254:
      bVar8 = false;
      goto LAB_03556364;
    }
  }
  if ((*in_stack_00000170 == 0) || (lVar11 = *(long *)(*in_stack_00000170 + 0x38), lVar11 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar11 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
  lVar11 = lVar11 + lVar18 * 0x178;
  in_stack_00000088._4_4_ = *(float *)(lVar11 + 0x160);
  in_stack_00000078 = *(uint *)(lVar11 + 0x11c);
  uVar28 = (ulong)in_stack_00000078;
  bVar8 = fVar40 != 0.0;
  fVar25 = in_stack_00000088._4_4_;
  if (bVar8) {
    fVar25 = fVar40;
  }
  fVar40 = fVar25;
  in_stack_00000090 = *(undefined4 *)(lVar11 + 0x168);
  uStack0000000000000074 = 0;
  fVar25 = unaff_s14;
  if (bVar8) {
    fVar25 = fStack0000000000000100;
  }
  uVar12 = (ulong)(uint)fVar25;
  fStack0000000000000070 = fStack0000000000000104;
  fStack0000000000000100 = fVar25;
LAB_035562b4:
  if (*unaff_x20 == 1) {
    if ((*in_stack_00000170 == 0) || (lVar11 = *(long *)(*in_stack_00000170 + 0x38), lVar11 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar11 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    lVar11 = lVar11 + lVar18 * 0x178;
    lVar23 = *unaff_x19;
    uVar31 = *(uint *)(lVar11 + 0x128);
    uVar35 = *(undefined4 *)(lVar11 + 0x160);
  }
  else {
    if ((uStack000000000000015c == uVar5) || ((int)uVar6 <= (int)uStack000000000000015c)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar12 = FUN_026b63d8(in_stack_00000168._4_4_,0);
      if ((*in_stack_00000170 == 0) ||
         (param_1 = *(long *)(*in_stack_00000170 + 0x38), param_1 == 0)) goto LAB_035574b8;
      in_w9 = *(uint *)(param_1 + 0x18);
      in_x10 = in_stack_00000150;
      unaff_x24 = lVar18;
      if (in_stack_00000168._4_4_ == 0x200b || (uVar12 & 1) != 0) goto code_r0x035565b4;
      bVar8 = uStack000000000000015c < in_w9;
      uStack000000000000015c = uVar30;
      if (bVar8) goto LAB_035567c8;
      goto LAB_035575f4;
    }
    if (bVar1) {
      if ((int)uStack000000000000015c < *unaff_x20 + -1) {
        if ((*in_stack_00000170 == 0) ||
           (lVar11 = *(long *)(*in_stack_00000170 + 0x38), lVar11 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar11 + 0x18) <= uVar30) goto LAB_035575f4;
        uVar13 = FUN_03567ad8(in_stack_00000090,*(undefined4 *)(lVar11 + unaff_x27),0);
        if ((uVar13 & 1) == 0) goto LAB_03556d34;
      }
      bVar8 = true;
      goto LAB_03556364;
    }
    if ((*in_stack_00000170 == 0) || (lVar11 = *(long *)(*in_stack_00000170 + 0x38), lVar11 == 0))
    goto LAB_035574b8;
    uVar24 = *(uint *)(lVar11 + 0x18);
LAB_03555da0:
    if (uVar24 <= uStack000000000000015c - 1) goto LAB_035575f4;
    lVar23 = *unaff_x19;
    uVar31 = *(uint *)(lVar11 + unaff_x27 + -0x330);
    uVar35 = *(undefined4 *)(lVar11 + unaff_x27 + -0x2f8);
  }
  pcVar16 = *(code **)(lVar23 + 0x8d8);
  uStack000000000000015c = uVar30;
  goto LAB_035562f4;
LAB_03556d34:
  if ((*in_stack_00000170 == 0) || (lVar11 = *(long *)(*in_stack_00000170 + 0x38), lVar11 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar11 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
  lVar11 = lVar11 + lVar18 * 0x178;
  uVar32 = (ulong)*(uint *)(lVar11 + 0x128);
  uVar28 = (ulong)uStack0000000000000074;
  uVar12 = (ulong)(uint)fStack0000000000000070;
  (**(code **)(*unaff_x19 + 0x8d8))
            (in_stack_00000078,uVar12,uVar28,uVar32,fStack0000000000000104,0,in_stack_00000088._4_4_
             ,*(undefined4 *)(lVar11 + 0x160));
  puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  lVar11 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar11 = *(long *)puVar7;
  }
  goto LAB_03556348;
  while( true ) {
    lVar18 = *unaff_x28;
    lVar11 = lVar11 + 1;
    lVar23 = lVar23 + 0x50;
    if (lVar18 == 0) break;
LAB_03557110:
    uVar13 = lVar11 + 1;
    if ((long)*(int *)(lVar18 + 0x34) <= (long)uVar13) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar18 = *(long *)(lVar18 + 0x60);
    if (lVar18 == 0) break;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar18 + 0x18) <= uVar13) goto LAB_035575f4;
    FUN_03596a20(lVar18 + lVar23 + 0x70,0);
    lVar18 = unaff_x19[0xe1];
    if (lVar18 == 0) break;
    if (*(uint *)(lVar18 + 0x18) <= uVar13) goto LAB_035575f4;
    uVar21 = *(undefined8 *)(lVar18 + lVar11 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar14 = FUN_036d35a8(uVar21,0,0);
    if ((uVar14 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*unaff_x28 == 0) || (lVar18 = *(long *)(*unaff_x28 + 0x60), lVar18 == 0)) break;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar18 + 0x18) <= uVar13) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03596b20(lVar18 + lVar23 + 0x70,1,0);
      }
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar11 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
      if ((*unaff_x28 == 0) || (lVar17 = *(long *)(*unaff_x28 + 0x60), lVar17 == 0)) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar13) goto LAB_035575f4;
      if (lVar18 == 0) break;
      FUN_036a460c(lVar18,*(undefined8 *)(lVar17 + lVar23 + 0x80),0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar11 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
      if ((*unaff_x28 == 0) || (lVar17 = *(long *)(*unaff_x28 + 0x60), lVar17 == 0)) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar13) goto LAB_035575f4;
      if (lVar18 == 0) break;
      FUN_036a4810(lVar18,*(undefined8 *)(lVar17 + lVar23 + 0x98),0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar11 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
      if ((*unaff_x28 == 0) || (lVar17 = *(long *)(*unaff_x28 + 0x60), lVar17 == 0)) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar13) goto LAB_035575f4;
      if (lVar18 == 0) break;
      FUN_036a48bc(lVar18,*(undefined8 *)(lVar17 + lVar23 + 0xa0),0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar11 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
      if ((*unaff_x28 == 0) || (lVar17 = *(long *)(*unaff_x28 + 0x60), lVar17 == 0)) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar13) goto LAB_035575f4;
      if (lVar18 == 0) break;
      FUN_036a4e24(lVar18,*(undefined8 *)(lVar17 + lVar23 + 0xa8),0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar11 * 8 + 0x28);
      if ((lVar18 == 0) || (lVar18 = UnityEngine_Material__GetColorArray(lVar18,0), lVar18 == 0))
      break;
      FUN_036aa280(lVar18,0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar11 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = FUN_037b514c(lVar18,0);
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar17 = *(long *)(lVar17 + lVar11 * 8 + 0x28);
      if ((lVar17 == 0) || (uVar21 = UnityEngine_Material__GetColorArray(lVar17,0), lVar18 == 0))
      break;
      FUN_0390f3a4(lVar18,uVar21,0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar11 * 8 + 0x28);
      if ((lVar18 == 0) || (lVar18 = FUN_037b514c(lVar18,0), lVar18 == 0)) break;
      FUN_0390eec8(uVar27,uVar12,uVar28,uVar32,lVar18,0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar11 * 8 + 0x28);
      if ((lVar18 == 0) || (lVar18 = FUN_037b514c(lVar18,0), lVar18 == 0)) break;
      FUN_0390ed78(lVar18,uVar30 & 1,0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar13) goto LAB_035575f4;
      plVar22 = *(long **)(lVar18 + lVar11 * 8 + 0x28);
      uVar31 = (**(code **)(*unaff_x19 + 0x2b8))();
      if (plVar22 == (long *)0x0) break;
      (**(code **)(*plVar22 + 0x2c8))(plVar22,uVar31 & 1,*(undefined8 *)(*plVar22 + 0x2d0));
    }
  }
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


