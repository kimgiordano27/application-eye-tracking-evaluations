/*
FUNCTION_NAME: UnityEngine.Animator$$CrossFade
ENTRY_POINT: 035567dc
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


void UnityEngine_Animator__CrossFade(void)

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
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  char cVar16;
  code *pcVar17;
  long lVar18;
  long in_x10;
  long lVar19;
  long *unaff_x19;
  int *unaff_x20;
  undefined8 uVar20;
  long *plVar21;
  long unaff_x22;
  long unaff_x23;
  long lVar22;
  long unaff_x24;
  long lVar23;
  uint unaff_w25;
  long unaff_x27;
  long *unaff_x28;
  uint uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  ulong uVar29;
  float fVar30;
  uint uVar31;
  ulong in_d3;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000000;
  float fStack0000000000000008;
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
  
code_r0x035567dc:
  pcVar17 = *(code **)(in_x10 + 0x8d8);
LAB_035562f4:
  uVar13 = (ulong)(uint)fStack0000000000000070;
  fStack0000000000000008 = fStack0000000000000100;
  uVar29 = (ulong)uStack0000000000000074;
  fStack0000000000000000 = unaff_s15;
  (*pcVar17)(in_stack_00000078,uVar13,uVar29,in_d3,fStack0000000000000104,0,in_stack_00000088._4_4_)
  ;
  puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  uVar31 = uStack000000000000015c;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar12 = *(long *)puVar7;
  }
LAB_03556348:
  uStack000000000000015c = uVar31;
  bVar8 = false;
  unaff_s15 = 0.0;
  fStack0000000000000104 = *(float *)(*(long *)(lVar12 + 0xb8) + 0x15a8);
  fStack0000000000000100 = 0.0;
  uVar31 = uStack000000000000015c;
  uVar11 = in_stack_00000160;
LAB_03556364:
  uStack000000000000015c = uVar31;
  if ((*unaff_x28 == 0) || (lVar12 = *(long *)(*unaff_x28 + 0x38), lVar12 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar12 + 0x18) <= unaff_w25) goto LAB_035575f4;
  if (in_stack_00000108 == 0) goto LAB_035574b8;
  uVar31 = *(uint *)(lVar12 + unaff_x24 * unaff_x22 + 400);
  fVar26 = (float)FUN_03776a30(in_stack_00000108 + 0x50,0);
  uVar24 = (uint)in_stack_00000150;
  if ((uVar31 >> 6 & 1) == 0) {
    if ((uStack000000000000012c & 1) != 0) {
      if ((*unaff_x28 == 0) || (lVar12 = *(long *)(*unaff_x28 + 0x38), lVar12 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar12 + 0x18) <= uStack000000000000015c - 2) goto LAB_035575f4;
      uVar31 = *(uint *)(lVar12 + unaff_x27 + -0x330);
      fVar27 = *(float *)(lVar12 + unaff_x27 + -0x30c);
      pcVar17 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      in_d3 = (ulong)uVar31;
      uVar13 = (ulong)(uint)fStack000000000000009c;
      uVar29 = (ulong)uStack0000000000000098;
      fStack0000000000000000 = in_stack_000000a8;
      fStack0000000000000008 = unaff_s14;
      (*pcVar17)(in_stack_000000a0,uVar13,uVar29,in_d3,in_stack_000000a8 * fVar26 + fVar27,0,
                 in_stack_000000a8,in_stack_000000a8);
    }
LAB_03556948:
    uStack000000000000012c = 0;
  }
  else {
    lVar12 = *unaff_x28;
    if ((lVar12 == 0) || (lVar23 = *(long *)(lVar12 + 0x38), lVar23 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar23 + 0x18) <= unaff_w25) goto LAB_035575f4;
    *(undefined4 *)(lVar23 + unaff_x24 * unaff_x22 + 0x174) = in_stack_000017c4;
    if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)uVar11)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar23 + unaff_x24 * unaff_x22 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
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
        uVar14 = FUN_026b97f8(in_stack_00000168._4_4_,0);
        if ((uVar14 & 1) != 0) goto LAB_035564e8;
        lVar12 = *unaff_x28;
        if (lVar12 == 0) goto LAB_035574b8;
      }
      lVar12 = *(long *)(lVar12 + 0x38);
      if (lVar12 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar12 + 0x18) <= unaff_w25) goto LAB_035575f4;
      lVar12 = lVar12 + unaff_x24 * unaff_x22;
      in_stack_00000040 = *(float *)(lVar12 + 0x60);
      in_stack_00000038 = *(float *)(lVar12 + 0x14c);
      uVar13 = (ulong)(uint)in_stack_00000038;
      in_stack_000000a0 = *(uint *)(lVar12 + 0x11c);
      uVar29 = (ulong)in_stack_000000a0;
      in_stack_000000a8 = *(float *)(lVar12 + 0x160);
      fStack000000000000009c = fVar26 * in_stack_000000a8 + in_stack_00000038;
      uStack0000000000000098 = 0;
    }
    iVar10 = *unaff_x20;
    if (iVar10 == 1) {
LAB_03556628:
      if ((*unaff_x28 != 0) && (lVar12 = *(long *)(*unaff_x28 + 0x38), lVar12 != 0)) {
        if (unaff_w25 < *(uint *)(lVar12 + 0x18)) {
          lVar12 = lVar12 + unaff_x24 * unaff_x22;
          lVar23 = *unaff_x19;
          uVar31 = *(uint *)(lVar12 + 0x128);
          fVar27 = *(float *)(lVar12 + 0x14c);
LAB_03556654:
          pcVar17 = *(code **)(lVar23 + 0x8d8);
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
      uVar13 = FUN_026b63d8(in_stack_00000168._4_4_,0);
      if ((*unaff_x28 != 0) && (lVar12 = *(long *)(*unaff_x28 + 0x38), lVar12 != 0)) {
        uVar31 = *(uint *)(lVar12 + 0x18);
        if (in_stack_00000168._4_4_ == 0x200b || (uVar13 & 1) != 0) {
          if (uVar31 <= uVar24) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          in_stack_00000150 = unaff_x24;
          if (uVar31 <= unaff_w25) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar12 = lVar12 + in_stack_00000150 * unaff_x22;
        fVar27 = *(float *)(lVar12 + 0x14c);
        uVar31 = *(uint *)(lVar12 + 0x128);
        pcVar17 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)unaff_w25 < iVar10) {
      lVar12 = *unaff_x28;
      if ((lVar12 != 0) && (lVar23 = *(long *)(lVar12 + 0x38), lVar23 != 0)) {
        if (uStack000000000000015c < *(uint *)(lVar23 + 0x18)) {
          if (*(float *)(lVar23 + unaff_x27 + -0x108) == in_stack_00000040) {
            fVar27 = *(float *)(lVar23 + unaff_x27 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar13 = (ulong)(uint)in_stack_00000038;
            uVar14 = FUN_03567bac(in_stack_00000140 + fVar27,uVar13,0);
            if ((uVar14 & 1) != 0) {
              iVar10 = *unaff_x20;
              goto LAB_03556744;
            }
            lVar12 = *unaff_x28;
            if (lVar12 == 0) goto LAB_035574b8;
          }
          lVar12 = *(long *)(lVar12 + 0x38);
          if (lVar12 != 0) {
            uVar31 = *(uint *)(lVar12 + 0x18);
            if ((int)unaff_w25 <= (int)uVar24) goto FUN_035568e8;
            if (uVar24 < uVar31) goto LAB_035568f0;
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
      lVar12 = *(long *)(unaff_x23 + in_stack_00000120 + -0x130);
      if (lVar12 == 0) goto LAB_035574b8;
      iVar9 = FUN_036d3364(lVar12,0);
      unaff_x27 = in_stack_00000120;
      if (iVar10 != iVar9) goto LAB_03556628;
    }
    if (!bVar1) {
      if ((*unaff_x28 != 0) && (lVar12 = *(long *)(*unaff_x28 + 0x38), lVar12 != 0)) {
        if (uStack000000000000015c - 2 < *(uint *)(lVar12 + 0x18)) {
          lVar23 = *unaff_x19;
          uVar31 = *(uint *)(lVar12 + unaff_x27 + -0x330);
          fVar27 = *(float *)(lVar12 + unaff_x27 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    uStack000000000000012c = 1;
  }
  if ((*unaff_x28 == 0) || (lVar12 = *(long *)(*unaff_x28 + 0x38), lVar12 == 0)) goto LAB_035574b8;
  uVar31 = (uint)*(undefined8 *)(lVar12 + 0x18);
  if (uVar31 <= unaff_w25) goto LAB_035575f4;
  if ((*(byte *)(lVar12 + unaff_x24 * unaff_x22 + 0x191) >> 1 & 1) == 0) {
    if ((in_stack_00000110._4_4_ & 1) != 0) {
      uVar29 = (ulong)uStack00000000000000c0;
      uVar13 = (ulong)(uint)fStack00000000000000dc;
      in_d3 = (ulong)(uint)in_stack_000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar13,uVar29,in_d3,fStack00000000000000d0,uVar29);
    }
LAB_035569b4:
    in_stack_00000110._4_4_ = 0;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)uVar11)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar12 + unaff_x24 * unaff_x22 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
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
        uVar14 = FUN_026b97f8(in_stack_00000168._4_4_,0);
        if ((uVar14 & 1) != 0) goto LAB_035569b4;
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar23 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar23 = *(long *)puVar7;
      }
      unaff_x22 = 0x178;
      if ((*unaff_x28 == 0) || (lVar12 = *(long *)(*unaff_x28 + 0x38), lVar12 == 0))
      goto LAB_035574b8;
      uVar31 = (uint)*(undefined8 *)(lVar12 + 0x18);
      if (uVar31 <= unaff_w25) goto LAB_035575f4;
      lVar23 = *(long *)(lVar23 + 0xb8);
      lVar22 = lVar12 + unaff_x24 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar22 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar22 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar23 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar23 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar22 + 0x18c);
      in_stack_000000c8 = *(float *)(lVar23 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar23 + 0x15a4);
      uStack00000000000000c0 = 0;
    }
    if (uVar31 <= unaff_w25) goto LAB_035575f4;
    lVar12 = lVar12 + unaff_x24 * unaff_x22;
    fVar27 = *(float *)(lVar12 + 0x128);
    fVar32 = *(float *)(lVar12 + 0x188);
    uVar20 = *(undefined8 *)(lVar12 + 0x17c);
    fVar35 = *(float *)(lVar12 + 0x184);
    uVar28 = *(undefined8 *)(lVar12 + 0x184);
    fVar34 = *(float *)(lVar12 + 0x18c);
    fVar26 = *(float *)(lVar12 + 0x11c);
    fVar33 = *(float *)(lVar12 + 0x148);
    fVar30 = *(float *)(lVar12 + 0x150);
    in_stack_00000178 = uVar20;
    fStack0000000000000180 = fVar35;
    fStack0000000000000184 = fVar32;
    in_stack_00000188 = fVar34;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar13 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar12 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar13 & 1) == 0) {
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar12);
      }
      fVar27 = fVar27 + (float)in_stack_000017b8;
      uVar29 = (ulong)(uint)fVar27;
      fVar26 = fVar26 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar30 = fVar30 - in_stack_000017c0;
      uVar13 = (ulong)(uint)fVar30;
      fVar33 = fVar33 + (float)((ulong)in_stack_000017b8 >> 0x20);
      in_d3 = (ulong)(uint)fVar33;
      if (fVar26 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar26;
      }
      if (fVar30 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar30;
      }
      if (in_stack_000000c8 <= fVar27) {
        in_stack_000000c8 = fVar27;
      }
      if (fStack00000000000000d0 <= fVar33) {
        fStack00000000000000d0 = fVar33;
      }
    }
    else {
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar12);
      }
      fVar26 = (fVar26 + (in_stack_000000c8 - (float)in_stack_000017b8)) * 0.5;
      in_d3 = (ulong)(uint)fVar26;
      if (fVar30 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar30;
      }
      uVar13 = (ulong)(uint)fStack00000000000000dc;
      uVar29 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar33) {
        fStack00000000000000d0 = fVar33;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar13,uVar29,in_d3,fStack00000000000000d0,uVar29);
      fStack00000000000000dc = fVar30 - fVar34;
      in_stack_000000c8 = fVar27 + fVar35;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar33 + fVar32;
      fStack00000000000000d8 = fVar26;
      in_stack_000017b0 = uVar20;
      in_stack_000017b8 = uVar28;
      in_stack_000017c0 = fVar34;
    }
    unaff_x22 = 0x178;
    if (((*unaff_x20 == 1) || (unaff_w25 == (uint)in_stack_000000e0)) ||
       (((int)uVar24 <= (int)unaff_w25 || (!bVar1)))) {
      uVar29 = (ulong)uStack00000000000000c0;
      uVar13 = (ulong)(uint)fStack00000000000000dc;
      in_d3 = (ulong)(uint)in_stack_000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar13,uVar29,in_d3,fStack00000000000000d0,uVar29);
      in_stack_00000110._4_4_ = 0;
    }
    else {
      in_stack_00000110._4_4_ = 1;
    }
  }
  puVar7 = OVRPlugin_Media_TypeInfo;
  iVar10 = *unaff_x20;
  uVar31 = uStack000000000000015c + 1;
  unaff_x27 = unaff_x27 + 0x178;
  iStack0000000000000128 = iStack0000000000000128 + 1;
  if (iVar10 <= (int)uStack000000000000015c) {
    lVar12 = *unaff_x28;
    if (lVar12 == 0) goto LAB_035574b8;
    *(int *)(lVar12 + 0x18) = iVar10;
    lVar23 = unaff_x19[0xd4];
    *(uint *)(lVar12 + 0x2c) = uVar11 + 1;
    if (iVar10 < 1 || iStack00000000000000d4 == 0) {
      iStack00000000000000d4 = 1;
    }
    *(int *)(lVar12 + 0x1c) = (int)lVar23;
    *(int *)(lVar12 + 0x24) = iStack00000000000000d4;
    *(int *)(lVar12 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar14 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar14 & 1) == 0)) goto LAB_03554724;
    lVar12 = unaff_x19[0xdf];
    if (lVar12 != 0) {
      (**(code **)(lVar12 + 0x18))
                (*(undefined8 *)(lVar12 + 0x40),*unaff_x28,*(undefined8 *)(lVar12 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar10 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar10 != 0x19) {
      lVar12 = unaff_x19[0xe5];
      if (lVar12 == 0) goto LAB_035574b8;
      uVar31 = FUN_03911ee4(lVar12,0);
      FUN_03911f20(lVar12,uVar31 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*unaff_x28 == 0) || (lVar12 = *(long *)(*unaff_x28 + 0x60), lVar12 == 0))
      goto LAB_035574b8;
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar12 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar12 + 0x20,1,0);
    }
    if (unaff_x19[0x74] == 0) goto LAB_035574b8;
    FUN_036aa790(unaff_x19[0x74],0);
    if ((unaff_x19[0x6d] == 0) || (lVar12 = *(long *)(unaff_x19[0x6d] + 0x60), lVar12 == 0))
    goto LAB_035574b8;
    if (*(int *)(lVar12 + 0x18) == 0) goto LAB_035575f4;
    if (unaff_x19[0x74] == 0) goto LAB_035574b8;
    FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar12 + 0x30),0);
    if ((unaff_x19[0x6d] == 0) || (lVar12 = *(long *)(unaff_x19[0x6d] + 0x60), lVar12 == 0))
    goto LAB_035574b8;
    if (*(int *)(lVar12 + 0x18) == 0) goto LAB_035575f4;
    if (unaff_x19[0x74] == 0) goto LAB_035574b8;
    FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar12 + 0x48),0);
    if ((unaff_x19[0x6d] == 0) || (lVar12 = *(long *)(unaff_x19[0x6d] + 0x60), lVar12 == 0))
    goto LAB_035574b8;
    if (*(int *)(lVar12 + 0x18) == 0) goto LAB_035575f4;
    if (unaff_x19[0x74] == 0) goto LAB_035574b8;
    FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar12 + 0x50),0);
    if ((unaff_x19[0x6d] == 0) || (lVar12 = *(long *)(unaff_x19[0x6d] + 0x60), lVar12 == 0))
    goto LAB_035574b8;
    if (*(int *)(lVar12 + 0x18) == 0) goto LAB_035575f4;
    if (unaff_x19[0x74] == 0) goto LAB_035574b8;
    FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar12 + 0x58),0);
    if (unaff_x19[0x74] == 0) goto LAB_035574b8;
    FUN_036aa280(unaff_x19[0x74],0);
    if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
    FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
    if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
    uVar28 = FUN_0390ef60(unaff_x19[0xe4],0);
    if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
    uVar31 = FUN_0390ed3c(unaff_x19[0xe4],0);
    lVar12 = *unaff_x28;
    if (lVar12 == 0) goto LAB_035574b8;
    lVar22 = 0;
    lVar23 = 0;
    goto LAB_03557110;
  }
  if (*(uint *)(unaff_x23 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
  if ((*unaff_x28 == 0) || (lVar12 = *(long *)(*unaff_x28 + 0x50), lVar12 == 0)) goto LAB_035574b8;
  unaff_x24 = (long)(int)uStack000000000000015c;
  lVar23 = unaff_x23 + unaff_x24 * unaff_x22;
  in_stack_00000160 = *(uint *)(lVar23 + 100);
  if (*(uint *)(lVar12 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
  lVar22 = (long)(int)in_stack_00000160;
  lVar12 = lVar12 + lVar22 * 0x5c;
  in_stack_00000108 = *(long *)(lVar23 + 0x38);
  uVar3 = *(ushort *)(lVar23 + 0x20);
  uVar5 = *(uint *)(lVar12 + 0x3c);
  in_stack_000000e0 = (long)(int)uVar5;
  uVar24 = *(uint *)(lVar12 + 0x68);
  iVar2 = *(int *)(lVar12 + 0x20);
  iVar10 = *(int *)(lVar12 + 0x28);
  iVar9 = *(int *)(lVar12 + 0x2c);
  uVar6 = *(uint *)(lVar12 + 0x40);
  in_stack_00000150 = (long)(int)uVar6;
  fVar30 = *(float *)(lVar12 + 0x4c);
  fVar32 = *(float *)(lVar12 + 0x54);
  fVar26 = *(float *)(lVar12 + 0x58);
  fVar36 = *(float *)(lVar12 + 0x5c);
  fVar34 = *(float *)(lVar12 + 0x60);
  fVar35 = *(float *)(lVar12 + 0x6c);
  fVar37 = *(float *)(lVar12 + 0x70);
  fVar27 = *(float *)(lVar12 + 0x74);
  fVar33 = *(float *)(lVar12 + 0x78);
  in_stack_00000168._4_4_ = (uint)uVar3;
  if ((int)uVar24 < 9) {
    switch(uVar24) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar34 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar26;
      }
      break;
    case 2:
LAB_03555018:
      in_stack_000000f8._4_4_ = (fVar34 + fVar36 * 0.5) - fVar26 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar36 + fVar34) - fVar26;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar36 + fVar34;
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
        uVar13 = FUN_026b8cc4(uVar4,0);
        if ((uVar13 & 1) == 0) {
          bVar1 = (int)in_stack_00000160 < (int)unaff_x19[0x95];
        }
        else {
          bVar1 = false;
        }
        if ((fVar26 <= fVar36) && (!bVar1 && uVar24 >> 4 == 0)) {
          in_stack_000000f8._4_4_ = fVar34;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar36 + fVar34;
          }
          goto LAB_03555088;
        }
        if (((uVar31 == 1) || (in_stack_00000160 != uVar11)) ||
           (uStack000000000000015c == *(uint *)((long)unaff_x19 + 0x324))) {
          in_stack_000000f8._4_4_ = fVar34;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar36 + fVar34;
          }
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uStack0000000000000028 = FUN_026b97f8(in_stack_00000168._4_4_,0);
          in_stack_000000e8 = 0;
        }
        else {
          cVar16 = (char)unaff_x19[0x1e];
          fVar34 = -fVar26;
          if (cVar16 != '\0') {
            fVar34 = fVar26;
          }
          if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar5) goto LAB_035575f4;
          iVar9 = (int)*(char *)(in_stack_000000f0 + in_stack_000000e0 * 0x178 + 0x194) +
                  (-iVar2 - (uStack0000000000000028 & 1)) + iVar9 + -1;
          if (iVar9 < 1) {
            fVar26 = 1.0;
            iVar9 = 1;
          }
          else {
            fVar26 = *(float *)((long)unaff_x19 + 0x2dc);
          }
          if (in_stack_00000168._4_4_ == 9) {
LAB_03556e74:
            fVar26 = 1.0 - fVar26;
          }
          else {
            if (in_stack_00000168._4_4_ != 0xa0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar13 = FUN_026b97f8(in_stack_00000168._4_4_,0);
              cVar16 = (char)unaff_x19[0x1e];
              if ((uVar13 & 1) != 0) goto LAB_03556e74;
            }
            iVar9 = (iVar2 - (~uStack0000000000000028 & 1)) + iVar10;
          }
          fVar26 = ((fVar36 + fVar34) * fVar26) / (float)iVar9;
          if (cVar16 == '\0') {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar26;
            in_stack_000000e8 =
                 CONCAT44((float)((ulong)in_stack_000000e8 >> 0x20) + 0.0,
                          (float)in_stack_000000e8 + 0.0);
          }
          else {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar26;
          }
        }
      }
    }
    else if (((uVar3 != 0xad) && (uVar3 != 0x200b)) && (uVar3 != 0x2060)) goto LAB_03554fac;
  }
  else if (uVar24 == 0x20) {
    fVar26 = fVar35 + fVar27;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar24 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
  if (uVar24 <= uStack000000000000015c) goto LAB_035575f4;
  lVar12 = in_stack_000000f0 + unaff_x24 * 0x178;
  fVar34 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  in_stack_00000140 = (float)in_stack_000000b8 + (float)in_stack_000000e8;
  fVar26 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)((ulong)in_stack_000000e8 >> 0x20);
  if (*(char *)(lVar12 + 0x194) == '\0') goto LAB_03555938;
  iVar10 = *(int *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x2c);
  if (iVar10 != 0) goto LAB_0355574c;
  fVar36 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)in_stack_00000160,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar23 = in_stack_000000f0 + unaff_x24 * 0x178;
    *(undefined4 *)(lVar23 + 0x84) = 0;
    *(undefined4 *)(lVar23 + 0xac) = 0;
    *(undefined4 *)(lVar23 + 0xd4) = 0x3f800000;
    fVar36 = 1.0;
    break;
  case 1:
    fVar33 = *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar23 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar27 = (in_stack_000000f8._4_4_ + fVar33) - *(float *)(in_stack_00000080 + 0x230);
      fVar33 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar23 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar27 = fVar27 - fVar35;
    *(float *)(lVar23 + 0x84) = fVar36 + (fVar33 - fVar35) / fVar27;
    *(float *)(lVar23 + 0xac) = fVar36 + (*(float *)(lVar23 + 0x98) - fVar35) / fVar27;
    *(float *)(lVar23 + 0xd4) = fVar36 + (*(float *)(lVar23 + 0xc0) - fVar35) / fVar27;
    fVar36 = fVar36 + (*(float *)(lVar23 + 0xe8) - fVar35) / fVar27;
    break;
  case 2:
    lVar23 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar33 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar27 = (in_stack_000000f8._4_4_ + *(float *)(lVar23 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar23 + 0x84) = fVar36 + fVar27 / fVar33;
    *(float *)(lVar23 + 0xac) =
         fVar36 + ((in_stack_000000f8._4_4_ + *(float *)(lVar23 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar23 + 0xd4) =
         fVar36 + ((in_stack_000000f8._4_4_ + *(float *)(lVar23 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar36 = fVar36 + ((in_stack_000000f8._4_4_ + *(float *)(lVar23 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar23 = in_stack_000000f0 + unaff_x24 * 0x178;
      *(undefined4 *)(lVar23 + 0x88) = 0;
      *(undefined4 *)(lVar23 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar23 + 0xd8) = 0;
      *(undefined4 *)(lVar23 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar23 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar33 = fVar33 - fVar37;
      fVar27 = fVar36 + (*(float *)(lVar23 + 0x74) - fVar37) / fVar33;
      fVar33 = fVar36 + (*(float *)(lVar23 + 0x9c) - fVar37) / fVar33;
      *(float *)(lVar23 + 0x88) = fVar27;
      *(float *)(lVar23 + 0xb0) = fVar33;
      *(float *)(lVar23 + 0xd8) = fVar27;
      *(float *)(lVar23 + 0x100) = fVar33;
      break;
    case 2:
      lVar23 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar27 = fVar36 + (*(float *)(lVar23 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar23 + 0x88) = fVar27;
      fVar33 = *(float *)(unaff_x19 + 0x9c);
      fVar35 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar23 + 0xd8) = fVar27;
      fVar27 = fVar36 + (*(float *)(lVar23 + 0x9c) - fVar33) / (fVar35 - fVar33);
      *(float *)(lVar23 + 0xb0) = fVar27;
      *(float *)(lVar23 + 0x100) = fVar27;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar24 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
    }
    if (uVar24 <= uStack000000000000015c) goto LAB_035575f4;
    lVar23 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar27 = *(float *)(lVar23 + 0x15c);
    fVar33 = (1.0 - (*(float *)(lVar23 + 0x88) + *(float *)(lVar23 + 0xb0)) * fVar27) * 0.5;
    fVar35 = fVar36 + *(float *)(lVar23 + 0x88) * fVar27 + fVar33;
    fVar36 = fVar36 + fVar33 + *(float *)(lVar23 + 0xb0) * fVar27;
    *(float *)(lVar23 + 0x84) = fVar35;
    *(float *)(lVar23 + 0xac) = fVar35;
    *(float *)(lVar23 + 0xd4) = fVar36;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xfc) = fVar36;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar24 <= uStack000000000000015c) goto LAB_035575f4;
    lVar23 = in_stack_000000f0 + unaff_x24 * 0x178;
    *(undefined4 *)(lVar23 + 0x88) = 0;
    *(undefined4 *)(lVar23 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar23 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar23 + 0x100) = 0;
    break;
  case 1:
    if (uStack000000000000015c < uVar24) {
      lVar23 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar30 = fVar30 - fVar32;
      fVar27 = (*(float *)(lVar23 + 0x74) - fVar32) / fVar30;
      fVar30 = (*(float *)(lVar23 + 0x9c) - fVar32) / fVar30;
      *(float *)(lVar23 + 0x88) = fVar27;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar24 <= uStack000000000000015c) goto LAB_035575f4;
    lVar23 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar27 = (*(float *)(lVar23 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar23 + 0x88) = fVar27;
    fVar30 = (*(float *)(lVar23 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar23 + 0xb0) = fVar30;
    *(float *)(lVar23 + 0xd8) = fVar30;
    *(float *)(lVar23 + 0x100) = fVar27;
    break;
  case 3:
    if (uVar24 <= uStack000000000000015c) goto LAB_035575f4;
    lVar23 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar33 = *(float *)(lVar23 + 0x15c);
    fVar30 = (1.0 - (*(float *)(lVar23 + 0x84) + *(float *)(lVar23 + 0xd4)) / fVar33) * 0.5;
    fVar27 = *(float *)(lVar23 + 0x84) / fVar33 + fVar30;
    fVar30 = fVar30 + *(float *)(lVar23 + 0xd4) / fVar33;
    *(float *)(lVar23 + 0x88) = fVar27;
    *(float *)(lVar23 + 0xb0) = fVar30;
    *(float *)(lVar23 + 0x100) = fVar27;
    *(float *)(lVar23 + 0xd8) = fVar30;
  }
  if (uVar24 <= uStack000000000000015c) goto LAB_035575f4;
  lVar23 = in_stack_000000f0 + unaff_x24 * 0x178;
  unaff_s14 = *(float *)(lVar23 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar23 + 0x5c) == '\0') &&
     ((*(byte *)(in_stack_000000f0 + unaff_x24 * 0x178 + 400) & 1) != 0)) {
    unaff_s14 = -unaff_s14;
  }
  fVar27 = in_stack_00000050._4_4_;
  if (((in_stack_00000058 == 2) || (fVar27 = fStack0000000000000034, in_stack_00000058 == 1)) ||
     (fVar27 = fStack000000000000002c, in_stack_00000058 == 0)) {
    unaff_s14 = fVar27 * unaff_s14;
  }
  lVar23 = in_stack_000000f0 + unaff_x24 * 0x178;
  fVar30 = *(float *)(lVar23 + 0x88);
  fVar33 = *(float *)(lVar23 + 0x84);
  fVar27 = -2.1474836e+09;
  if (fVar33 != INFINITY) {
    fVar27 = (float)(int)fVar33;
  }
  fVar35 = *(float *)(lVar23 + 0xd4);
  fVar36 = *(float *)(lVar23 + 0xd8);
  fVar32 = -2.1474836e+09;
  if (fVar30 != INFINITY) {
    fVar32 = (float)(int)fVar30;
  }
  uVar25 = FUN_03591d3c(fVar33 - fVar27,fVar30 - fVar32);
  *(undefined4 *)(lVar23 + 0x84) = uVar25;
  if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
  fVar36 = fVar36 - fVar32;
  *(float *)(lVar23 + 0x88) = unaff_s14;
  uVar25 = FUN_03591d3c(fVar33 - fVar27,fVar36);
  *(undefined4 *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xac) = uVar25;
  if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
  fVar35 = fVar35 - fVar27;
  *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xb0) = unaff_s14;
  fVar27 = (float)FUN_03591d3c(fVar35,fVar36);
  *(float *)(lVar23 + 0xd4) = fVar27;
  if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
  *(float *)(lVar23 + 0xd8) = unaff_s14;
  uVar25 = FUN_03591d3c(fVar35,fVar30 - fVar32);
  *(undefined4 *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xfc) = uVar25;
  uVar24 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
  if (uVar24 <= uStack000000000000015c) goto LAB_035575f4;
  *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x100) = unaff_s14;
  unaff_x20 = in_stack_00000048;
LAB_0355574c:
  if (((int)uStack000000000000015c < (int)unaff_x19[0x65]) &&
     (iStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)in_stack_00000160 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar24 <= uStack000000000000015c) goto LAB_035575f4;
      lVar12 = in_stack_000000f0 + unaff_x24 * 0x178;
      *(ulong *)(lVar12 + 0x70) =
           CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar12 + 0x70) >> 0x20),
                    fVar34 + (float)*(undefined8 *)(lVar12 + 0x70));
      *(float *)(lVar12 + 0x78) = fVar26 + *(float *)(lVar12 + 0x78);
      *(ulong *)(lVar12 + 0x98) =
           CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar12 + 0x98) >> 0x20),
                    fVar34 + (float)*(undefined8 *)(lVar12 + 0x98));
      *(float *)(lVar12 + 0xa0) = fVar26 + *(float *)(lVar12 + 0xa0);
      *(ulong *)(lVar12 + 0xc0) =
           CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar12 + 0xc0) >> 0x20),
                    fVar34 + (float)*(undefined8 *)(lVar12 + 0xc0));
      *(float *)(lVar12 + 200) = fVar26 + *(float *)(lVar12 + 200);
      *(ulong *)(lVar12 + 0xe8) =
           CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar12 + 0xe8) >> 0x20),
                    fVar34 + (float)*(undefined8 *)(lVar12 + 0xe8));
      *(float *)(lVar12 + 0xf0) = fVar26 + *(float *)(lVar12 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)in_stack_00000160 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uStack000000000000015c < uVar24) {
        if (*(int *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x68) == iStack0000000000000030) {
          lVar12 = in_stack_000000f0 + unaff_x24 * 0x178;
          *(ulong *)(lVar12 + 0x70) =
               CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar12 + 0x70) >> 0x20),
                        fVar34 + (float)*(undefined8 *)(lVar12 + 0x70));
          *(float *)(lVar12 + 0x78) = fVar26 + *(float *)(lVar12 + 0x78);
          *(ulong *)(lVar12 + 0x98) =
               CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar12 + 0x98) >> 0x20),
                        fVar34 + (float)*(undefined8 *)(lVar12 + 0x98));
          *(float *)(lVar12 + 0xa0) = fVar26 + *(float *)(lVar12 + 0xa0);
          *(ulong *)(lVar12 + 0xc0) =
               CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar12 + 0xc0) >> 0x20),
                        fVar34 + (float)*(undefined8 *)(lVar12 + 0xc0));
          *(float *)(lVar12 + 200) = fVar26 + *(float *)(lVar12 + 200);
          *(ulong *)(lVar12 + 0xe8) =
               CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar12 + 0xe8) >> 0x20),
                        fVar34 + (float)*(undefined8 *)(lVar12 + 0xe8));
          *(float *)(lVar12 + 0xf0) = fVar26 + *(float *)(lVar12 + 0xf0);
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
  uVar25 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar23 = in_stack_000000f0 + unaff_x24 * 0x178;
  *(undefined8 *)(lVar23 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar23 + 0x78) = uVar25;
  if (uVar24 <= uStack000000000000015c) goto LAB_035575f4;
  uVar25 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  lVar23 = in_stack_000000f0 + unaff_x24 * 0x178;
  *(undefined8 *)(lVar23 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar23 + 0xa0) = uVar25;
  uVar25 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar23 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar23 + 200) = uVar25;
  uVar25 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar23 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar23 + 0xf0) = uVar25;
  *(undefined1 *)(lVar12 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar10 == 0) {
    pcVar17 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar17)();
  }
  else if (iVar10 == 1) {
    pcVar17 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*in_stack_00000170 != 0) && (lVar12 = *(long *)(*in_stack_00000170 + 0x38), lVar12 != 0)) {
    if (uStack000000000000015c < *(uint *)(lVar12 + 0x18)) {
      lVar12 = lVar12 + unaff_x24 * 0x178;
      uVar28 = *(undefined8 *)(lVar12 + 0x11c);
      *(undefined8 *)(lVar12 + 0x11c) =
           CONCAT44(in_stack_00000140 + (float)((ulong)uVar28 >> 0x20),fVar34 + (float)uVar28);
      *(float *)(lVar12 + 0x124) = fVar26 + *(float *)(lVar12 + 0x124);
      if ((*in_stack_00000170 != 0) && (lVar12 = *(long *)(*in_stack_00000170 + 0x38), lVar12 != 0))
      {
        if (uStack000000000000015c < *(uint *)(lVar12 + 0x18)) {
          lVar12 = lVar12 + unaff_x24 * 0x178;
          *(ulong *)(lVar12 + 0x110) =
               CONCAT44(in_stack_00000140 + (float)((ulong)*(undefined8 *)(lVar12 + 0x110) >> 0x20),
                        fVar34 + (float)*(undefined8 *)(lVar12 + 0x110));
          *(float *)(lVar12 + 0x118) = fVar26 + *(float *)(lVar12 + 0x118);
          if ((*in_stack_00000170 != 0) &&
             (lVar12 = *(long *)(*in_stack_00000170 + 0x38), lVar12 != 0)) {
            if (*(uint *)(lVar12 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
            lVar12 = lVar12 + unaff_x24 * 0x178;
            *(ulong *)(lVar12 + 0x128) =
                 CONCAT44(in_stack_00000140 +
                          (float)((ulong)*(undefined8 *)(lVar12 + 0x128) >> 0x20),
                          fVar34 + (float)*(undefined8 *)(lVar12 + 0x128));
            *(float *)(lVar12 + 0x130) = fVar26 + *(float *)(lVar12 + 0x130);
            if ((*in_stack_00000170 == 0) ||
               (lVar12 = *(long *)(*in_stack_00000170 + 0x38), lVar12 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar12 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
            lVar12 = lVar12 + unaff_x24 * 0x178;
            *(float *)(lVar12 + 0x134) = fVar34 + *(float *)(lVar12 + 0x134);
            *(ulong *)(lVar12 + 0x138) =
                 CONCAT44(fVar26 + (float)((ulong)*(undefined8 *)(lVar12 + 0x138) >> 0x20),
                          in_stack_00000140 + (float)*(undefined8 *)(lVar12 + 0x138));
            lVar12 = *in_stack_00000170;
            if ((lVar12 == 0) || (lVar23 = *(long *)(lVar12 + 0x38), lVar23 == 0))
            goto LAB_035574b8;
            uVar24 = *(uint *)(lVar23 + 0x18);
            if (uVar24 <= uStack000000000000015c) goto LAB_035575f4;
            lVar18 = lVar23 + unaff_x24 * 0x178;
            uVar13 = CONCAT44(fVar34 + (float)((ulong)*(undefined8 *)(lVar18 + 0x140) >> 0x20),
                              fVar34 + (float)*(undefined8 *)(lVar18 + 0x140));
            fVar26 = in_stack_00000140 + *(float *)(lVar18 + 0x150);
            uVar29 = (ulong)(uint)fVar26;
            in_d3 = CONCAT44(in_stack_00000140 +
                             (float)((ulong)*(undefined8 *)(lVar18 + 0x148) >> 0x20),
                             in_stack_00000140 + (float)*(undefined8 *)(lVar18 + 0x148));
            *(float *)(lVar18 + 0x150) = fVar26;
            *(ulong *)(lVar18 + 0x140) = uVar13;
            *(ulong *)(lVar18 + 0x148) = in_d3;
            if (in_stack_00000160 == uVar11) {
              uVar11 = *unaff_x20 - 1;
              if (uStack000000000000015c == uVar11) goto LAB_03555b44;
            }
            else {
              lVar12 = *(long *)(lVar12 + 0x50);
              if (lVar12 == 0) goto LAB_035574b8;
              if (*(uint *)(lVar12 + 0x18) <= uVar11) goto LAB_035575f4;
              lVar18 = (long)(int)uVar11;
              lVar19 = lVar12 + lVar18 * 0x5c;
              in_d3 = (ulong)(uint)*(float *)(lVar19 + 0x58);
              fVar26 = in_stack_00000140 + *(float *)(lVar19 + 0x54);
              uVar13 = (ulong)(uint)fVar26;
              fVar27 = fVar34 + *(float *)(lVar19 + 0x58);
              uVar29 = (ulong)(uint)fVar27;
              *(ulong *)(lVar19 + 0x4c) =
                   CONCAT44(in_stack_00000140 +
                            (float)((ulong)*(undefined8 *)(lVar19 + 0x4c) >> 0x20),
                            in_stack_00000140 + (float)*(undefined8 *)(lVar19 + 0x4c));
              *(float *)(lVar19 + 0x54) = fVar26;
              *(float *)(lVar19 + 0x58) = fVar27;
              if (uVar24 <= *(uint *)(lVar19 + 0x34)) goto LAB_035575f4;
              uVar25 = *(undefined4 *)(lVar23 + (long)(int)*(uint *)(lVar19 + 0x34) * 0x178 + 0x11c)
              ;
              lVar12 = lVar12 + lVar18 * 0x5c;
              *(float *)(lVar12 + 0x70) = fVar26;
              *(undefined4 *)(lVar12 + 0x6c) = uVar25;
              lVar12 = *in_stack_00000170;
              if ((lVar12 == 0) || (lVar23 = *(long *)(lVar12 + 0x50), lVar23 == 0))
              goto LAB_035574b8;
              if (*(uint *)(lVar23 + 0x18) <= uVar11) goto LAB_035575f4;
              lVar12 = *(long *)(lVar12 + 0x38);
              if (lVar12 == 0) goto LAB_035574b8;
              uVar11 = *(uint *)(lVar23 + lVar18 * 0x5c + 0x40);
              if (*(uint *)(lVar12 + 0x18) <= uVar11) goto LAB_035575f4;
              lVar23 = lVar23 + lVar18 * 0x5c;
              *(undefined4 *)(lVar23 + 0x74) =
                   *(undefined4 *)(lVar12 + (long)(int)uVar11 * 0x178 + 0x128);
              *(undefined4 *)(lVar23 + 0x78) = *(undefined4 *)(lVar23 + 0x4c);
              uVar11 = *unaff_x20 - 1;
LAB_03555b44:
              if (uStack000000000000015c == uVar11) {
                lVar12 = *in_stack_00000170;
                if ((lVar12 == 0) || (lVar23 = *(long *)(lVar12 + 0x50), lVar23 == 0))
                goto LAB_035574b8;
                if (*(uint *)(lVar23 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
                lVar18 = lVar23 + lVar22 * 0x5c;
                in_d3 = (ulong)(uint)*(float *)(lVar18 + 0x58);
                uVar13 = CONCAT44(in_stack_00000140 +
                                  (float)((ulong)*(undefined8 *)(lVar18 + 0x4c) >> 0x20),
                                  in_stack_00000140 + (float)*(undefined8 *)(lVar18 + 0x4c));
                fVar26 = in_stack_00000140 + *(float *)(lVar18 + 0x54);
                fVar34 = fVar34 + *(float *)(lVar18 + 0x58);
                uVar29 = (ulong)(uint)fVar34;
                *(ulong *)(lVar18 + 0x4c) = uVar13;
                *(float *)(lVar18 + 0x54) = fVar26;
                *(float *)(lVar18 + 0x58) = fVar34;
                lVar12 = *(long *)(lVar12 + 0x38);
                if (lVar12 == 0) goto LAB_035574b8;
                if (*(uint *)(lVar12 + 0x18) <= *(uint *)(lVar18 + 0x34)) goto LAB_035575f4;
                uVar25 = *(undefined4 *)
                          (lVar12 + (long)(int)*(uint *)(lVar18 + 0x34) * 0x178 + 0x11c);
                lVar23 = lVar23 + lVar22 * 0x5c;
                *(float *)(lVar23 + 0x70) = fVar26;
                *(undefined4 *)(lVar23 + 0x6c) = uVar25;
                lVar12 = *in_stack_00000170;
                if ((lVar12 == 0) || (lVar23 = *(long *)(lVar12 + 0x50), lVar23 == 0))
                goto LAB_035574b8;
                if (*(uint *)(lVar23 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
                lVar12 = *(long *)(lVar12 + 0x38);
                if (lVar12 == 0) goto LAB_035574b8;
                uVar11 = *(uint *)(lVar23 + lVar22 * 0x5c + 0x40);
                if (*(uint *)(lVar12 + 0x18) <= uVar11) goto LAB_035575f4;
                lVar23 = lVar23 + lVar22 * 0x5c;
                *(undefined4 *)(lVar23 + 0x74) =
                     *(undefined4 *)(lVar12 + (long)(int)uVar11 * 0x178 + 0x128);
                *(undefined4 *)(lVar23 + 0x78) = *(undefined4 *)(lVar23 + 0x4c);
              }
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar14 = FUN_026b82c4(in_stack_00000168._4_4_,0);
            if (((((uVar14 & 1) == 0) && (1 < in_stack_00000168._4_4_ - 0x2010)) &&
                (in_stack_00000168._4_4_ != 0xad)) && (in_stack_00000168._4_4_ != 0x2d)) {
              if ((in_stack_00000118._4_4_ & 1) == 0) {
                if (uVar31 != 1) {
LAB_0355686c:
                  in_stack_00000118._4_4_ = 0;
                  goto LAB_03555d70;
                }
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar14 = FUN_026b81f8(in_stack_00000168._4_4_,0);
                if ((uVar14 & 1) != 0) {
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar14 = FUN_026b63d8(in_stack_00000168._4_4_,0);
                  if (((in_stack_00000168._4_4_ != 0x200b) && ((uVar14 & 1) == 0)) &&
                     (*unaff_x20 != 1)) goto LAB_0355686c;
                }
              }
              else if (((uVar31 != 1) &&
                       ((int)uStack000000000000015c < (int)(*(uint *)(in_stack_000000f0 + 0x18) - 1)
                       )) && (((int)uStack000000000000015c < *unaff_x20 &&
                              ((in_stack_00000168._4_4_ == 0x2019 ||
                               (in_stack_00000168._4_4_ == 0x27)))))) {
                if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c - 1)
                goto LAB_035575f4;
                uVar4 = *(undefined2 *)(in_stack_000000f0 + unaff_x27 + -0x438);
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar14 = FUN_026b82c4(uVar4,0);
                if ((uVar14 & 1) != 0) {
                  if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar31) goto LAB_035575f4;
                  uVar4 = *(undefined2 *)(in_stack_000000f0 + unaff_x27 + -0x148);
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar14 = FUN_026b82c4(uVar4,0);
                  if ((uVar14 & 1) != 0) goto LAB_03555d68;
                }
              }
              if (uStack000000000000015c == *unaff_x20 - 1U) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar14 = FUN_026b82c4(in_stack_00000168._4_4_,0);
                iVar10 = iStack0000000000000128;
                if ((uVar14 & 1) == 0) goto LAB_03556070;
              }
              else {
LAB_03556070:
                iVar10 = uStack000000000000015c - 1;
              }
              lVar12 = *in_stack_00000170;
              if (lVar12 == 0) goto LAB_035574b8;
              lVar23 = *(long *)(lVar12 + 0x40);
              if (lVar23 == 0) goto LAB_035574b8;
              uVar11 = *(uint *)(lVar12 + 0x24);
              iVar9 = *(int *)(lVar23 + 0x18);
              if (iVar9 < (int)(uVar11 + 1)) {
                if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_01ff025c((long *)(lVar12 + 0x40),iVar9 + 1,
                             *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
                lVar12 = *in_stack_00000170;
                if (lVar12 == 0) goto LAB_035574b8;
              }
              lVar12 = *(long *)(lVar12 + 0x40);
              if (lVar12 == 0) goto LAB_035574b8;
              if (*(uint *)(lVar12 + 0x18) <= uVar11) goto LAB_035575f4;
              lVar12 = lVar12 + (long)(int)uVar11 * 0x18;
              *(long **)(lVar12 + 0x20) = unaff_x19;
              *(uint *)(lVar12 + 0x28) = uStack0000000000000158;
              *(int *)(lVar12 + 0x2c) = iVar10;
              *(uint *)(lVar12 + 0x30) = (iVar10 - uStack0000000000000158) + 1;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar12 = unaff_x19[0x6d];
              if (lVar12 == 0) goto LAB_035574b8;
              lVar23 = *(long *)(lVar12 + 0x50);
              *(int *)(lVar12 + 0x24) = *(int *)(lVar12 + 0x24) + 1;
              if (lVar23 == 0) goto LAB_035574b8;
              if (*(uint *)(lVar23 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
              lVar23 = lVar23 + lVar22 * 0x5c;
              in_stack_00000118._4_4_ = 0;
              iStack00000000000000d4 = iStack00000000000000d4 + 1;
              *(int *)(lVar23 + 0x30) = *(int *)(lVar23 + 0x30) + 1;
            }
            else {
              if ((in_stack_00000118._4_4_ & 1) == 0) {
                uStack0000000000000158 = uStack000000000000015c;
              }
              if (uStack000000000000015c == *unaff_x20 - 1U) {
                lVar12 = *in_stack_00000170;
                if (lVar12 == 0) goto LAB_035574b8;
                lVar23 = *(long *)(lVar12 + 0x40);
                if (lVar23 == 0) goto LAB_035574b8;
                uVar11 = *(uint *)(lVar12 + 0x24);
                iVar10 = *(int *)(lVar23 + 0x18);
                if (iVar10 < (int)(uVar11 + 1)) {
                  if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  FUN_01ff025c((long *)(lVar12 + 0x40),iVar10 + 1,
                               *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
                  lVar12 = *in_stack_00000170;
                  if (lVar12 == 0) goto LAB_035574b8;
                }
                lVar12 = *(long *)(lVar12 + 0x40);
                if (lVar12 == 0) goto LAB_035574b8;
                if (*(uint *)(lVar12 + 0x18) <= uVar11) goto LAB_035575f4;
                lVar12 = lVar12 + (long)(int)uVar11 * 0x18;
                *(long **)(lVar12 + 0x20) = unaff_x19;
                *(uint *)(lVar12 + 0x28) = uStack0000000000000158;
                *(uint *)(lVar12 + 0x2c) = uStack000000000000015c;
                *(uint *)(lVar12 + 0x30) = uVar31 - uStack0000000000000158;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                lVar12 = unaff_x19[0x6d];
                if (lVar12 == 0) goto LAB_035574b8;
                lVar23 = *(long *)(lVar12 + 0x50);
                *(int *)(lVar12 + 0x24) = *(int *)(lVar12 + 0x24) + 1;
                if (lVar23 == 0) goto LAB_035574b8;
                if (*(uint *)(lVar23 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
                lVar23 = lVar23 + lVar22 * 0x5c;
                iStack00000000000000d4 = iStack00000000000000d4 + 1;
                *(int *)(lVar23 + 0x30) = *(int *)(lVar23 + 0x30) + 1;
              }
LAB_03555d68:
              in_stack_00000118._4_4_ = 1;
            }
LAB_03555d70:
            unaff_x22 = 0x178;
            if ((*in_stack_00000170 == 0) ||
               (lVar12 = *(long *)(*in_stack_00000170 + 0x38), lVar12 == 0)) goto LAB_035574b8;
            uVar24 = *(uint *)(lVar12 + 0x18);
            if (uVar24 <= uStack000000000000015c) goto LAB_035575f4;
            unaff_x23 = in_stack_000000f0;
            unaff_x28 = in_stack_00000170;
            unaff_w25 = uStack000000000000015c;
            in_stack_00000120 = unaff_x27;
            uVar11 = in_stack_00000160;
            if ((*(byte *)(lVar12 + unaff_x24 * 0x178 + 400) >> 2 & 1) == 0) {
              if (!bVar8) goto LAB_03556254;
              goto LAB_03555da0;
            }
            lVar12 = lVar12 + unaff_x24 * 0x178;
            iVar10 = *(int *)(lVar12 + 0x68);
            *(undefined4 *)(lVar12 + 0x16c) = in_stack_000017c4;
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
            uVar14 = FUN_026b63d8(in_stack_00000168._4_4_,0);
            if ((in_stack_00000168._4_4_ != 0x200b) && ((uVar14 & 1) == 0)) {
              lVar12 = *in_stack_00000170;
              if ((lVar12 == 0) || (lVar23 = *(long *)(lVar12 + 0x38), lVar23 == 0))
              goto LAB_035574b8;
              if (*(uint *)(lVar23 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
              fVar26 = *(float *)(lVar23 + unaff_x24 * 0x178 + 0x160);
              if (unaff_s15 <= fVar26) {
                unaff_s15 = fVar26;
              }
              if (fStack0000000000000100 <= ABS(unaff_s14)) {
                fStack0000000000000100 = ABS(unaff_s14);
              }
              if (iVar10 != in_stack_00000068._4_4_) {
                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar12 = *in_stack_00000170;
                  if (lVar12 == 0) goto LAB_035574b8;
                  lVar23 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                }
                else {
                  lVar23 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                }
                fStack0000000000000104 = *(float *)(lVar23 + 0x15a8);
              }
              lVar12 = *(long *)(lVar12 + 0x38);
              if (lVar12 == 0) goto LAB_035574b8;
              if (*(uint *)(lVar12 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
              if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
              fVar27 = *(float *)(lVar12 + unaff_x24 * 0x178 + 0x14c);
              fVar26 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
              fVar27 = fVar27 + unaff_s15 * fVar26;
              if (fVar27 <= fStack0000000000000104) {
                fStack0000000000000104 = fVar27;
              }
              uVar13 = (ulong)(uint)fStack0000000000000104;
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
code_r0x035561ec:
  bVar8 = false;
  if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
      ((int)uVar6 < (int)uStack000000000000015c)) || ((bool)(bVar1 ^ 1))) goto LAB_03556364;
  if (uStack000000000000015c == uVar6) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar14 = FUN_026b97f8(in_stack_00000168._4_4_,0);
    if ((uVar14 & 1) != 0) {
LAB_03556254:
      bVar8 = false;
      goto LAB_03556364;
    }
  }
  if ((*in_stack_00000170 == 0) || (lVar12 = *(long *)(*in_stack_00000170 + 0x38), lVar12 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar12 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
  lVar12 = lVar12 + unaff_x24 * 0x178;
  in_stack_00000088._4_4_ = *(float *)(lVar12 + 0x160);
  in_stack_00000078 = *(uint *)(lVar12 + 0x11c);
  uVar29 = (ulong)in_stack_00000078;
  bVar8 = unaff_s15 != 0.0;
  fVar26 = in_stack_00000088._4_4_;
  if (bVar8) {
    fVar26 = unaff_s15;
  }
  unaff_s15 = fVar26;
  in_stack_00000090 = *(undefined4 *)(lVar12 + 0x168);
  uStack0000000000000074 = 0;
  fVar26 = unaff_s14;
  if (bVar8) {
    fVar26 = fStack0000000000000100;
  }
  uVar13 = (ulong)(uint)fVar26;
  fStack0000000000000070 = fStack0000000000000104;
  fStack0000000000000100 = fVar26;
LAB_035562b4:
  if (*unaff_x20 == 1) {
    if ((*in_stack_00000170 == 0) || (lVar12 = *(long *)(*in_stack_00000170 + 0x38), lVar12 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar12 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    lVar23 = *unaff_x19;
    uVar11 = *(uint *)(lVar12 + unaff_x24 * 0x178 + 0x128);
  }
  else {
    if ((uStack000000000000015c == uVar5) || ((int)uVar6 <= (int)uStack000000000000015c)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar13 = FUN_026b63d8(in_stack_00000168._4_4_,0);
      if ((*in_stack_00000170 == 0) || (lVar12 = *(long *)(*in_stack_00000170 + 0x38), lVar12 == 0))
      goto LAB_035574b8;
      lVar23 = unaff_x24;
      if (in_stack_00000168._4_4_ == 0x200b || (uVar13 & 1) != 0) {
        lVar23 = in_stack_00000150;
        uStack000000000000015c = uVar6;
      }
      if (*(uint *)(lVar12 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
      in_x10 = *unaff_x19;
      in_d3 = (ulong)*(uint *)(lVar12 + lVar23 * 0x178 + 0x128);
      uStack000000000000015c = uVar31;
      goto code_r0x035567dc;
    }
    if (bVar1) {
      if ((int)uStack000000000000015c < *unaff_x20 + -1) {
        if ((*in_stack_00000170 == 0) ||
           (lVar12 = *(long *)(*in_stack_00000170 + 0x38), lVar12 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar12 + 0x18) <= uVar31) goto LAB_035575f4;
        uVar14 = FUN_03567ad8(in_stack_00000090,*(undefined4 *)(lVar12 + unaff_x27),0);
        if ((uVar14 & 1) == 0) goto LAB_03556d34;
      }
      bVar8 = true;
      goto LAB_03556364;
    }
    if ((*in_stack_00000170 == 0) || (lVar12 = *(long *)(*in_stack_00000170 + 0x38), lVar12 == 0))
    goto LAB_035574b8;
    uVar24 = *(uint *)(lVar12 + 0x18);
LAB_03555da0:
    if (uVar24 <= uStack000000000000015c - 1) goto LAB_035575f4;
    lVar23 = *unaff_x19;
    uVar11 = *(uint *)(lVar12 + unaff_x27 + -0x330);
  }
  in_d3 = (ulong)uVar11;
  pcVar17 = *(code **)(lVar23 + 0x8d8);
  uStack000000000000015c = uVar31;
  goto LAB_035562f4;
LAB_03556d34:
  if ((*in_stack_00000170 == 0) || (lVar12 = *(long *)(*in_stack_00000170 + 0x38), lVar12 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar12 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
  lVar12 = lVar12 + unaff_x24 * 0x178;
  in_d3 = (ulong)*(uint *)(lVar12 + 0x128);
  fStack0000000000000008 = fStack0000000000000100;
  uVar29 = (ulong)uStack0000000000000074;
  uVar13 = (ulong)(uint)fStack0000000000000070;
  fStack0000000000000000 = unaff_s15;
  (**(code **)(*unaff_x19 + 0x8d8))
            (in_stack_00000078,uVar13,uVar29,in_d3,fStack0000000000000104,0,in_stack_00000088._4_4_,
             *(undefined4 *)(lVar12 + 0x160));
  puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar12 = *(long *)puVar7;
  }
  goto LAB_03556348;
  while( true ) {
    lVar12 = *unaff_x28;
    lVar23 = lVar23 + 1;
    lVar22 = lVar22 + 0x50;
    if (lVar12 == 0) break;
LAB_03557110:
    uVar14 = lVar23 + 1;
    if ((long)*(int *)(lVar12 + 0x34) <= (long)uVar14) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar12 = *(long *)(lVar12 + 0x60);
    if (lVar12 == 0) break;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar12 + 0x18) <= uVar14) goto LAB_035575f4;
    FUN_03596a20(lVar12 + lVar22 + 0x70,0);
    lVar12 = unaff_x19[0xe1];
    if (lVar12 == 0) break;
    if (*(uint *)(lVar12 + 0x18) <= uVar14) goto LAB_035575f4;
    uVar20 = *(undefined8 *)(lVar12 + lVar23 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar15 = FUN_036d35a8(uVar20,0,0);
    if ((uVar15 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*unaff_x28 == 0) || (lVar12 = *(long *)(*unaff_x28 + 0x60), lVar12 == 0)) break;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar12 + 0x18) <= uVar14) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03596b20(lVar12 + lVar22 + 0x70,1,0);
      }
      lVar12 = unaff_x19[0xe1];
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar12 = *(long *)(lVar12 + lVar23 * 8 + 0x28);
      if (lVar12 == 0) break;
      lVar12 = UnityEngine_Material__GetColorArray(lVar12,0);
      if ((*unaff_x28 == 0) || (lVar18 = *(long *)(*unaff_x28 + 0x60), lVar18 == 0)) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_035575f4;
      if (lVar12 == 0) break;
      FUN_036a460c(lVar12,*(undefined8 *)(lVar18 + lVar22 + 0x80),0);
      lVar12 = unaff_x19[0xe1];
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar12 = *(long *)(lVar12 + lVar23 * 8 + 0x28);
      if (lVar12 == 0) break;
      lVar12 = UnityEngine_Material__GetColorArray(lVar12,0);
      if ((*unaff_x28 == 0) || (lVar18 = *(long *)(*unaff_x28 + 0x60), lVar18 == 0)) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_035575f4;
      if (lVar12 == 0) break;
      FUN_036a4810(lVar12,*(undefined8 *)(lVar18 + lVar22 + 0x98),0);
      lVar12 = unaff_x19[0xe1];
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar12 = *(long *)(lVar12 + lVar23 * 8 + 0x28);
      if (lVar12 == 0) break;
      lVar12 = UnityEngine_Material__GetColorArray(lVar12,0);
      if ((*unaff_x28 == 0) || (lVar18 = *(long *)(*unaff_x28 + 0x60), lVar18 == 0)) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_035575f4;
      if (lVar12 == 0) break;
      FUN_036a48bc(lVar12,*(undefined8 *)(lVar18 + lVar22 + 0xa0),0);
      lVar12 = unaff_x19[0xe1];
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar12 = *(long *)(lVar12 + lVar23 * 8 + 0x28);
      if (lVar12 == 0) break;
      lVar12 = UnityEngine_Material__GetColorArray(lVar12,0);
      if ((*unaff_x28 == 0) || (lVar18 = *(long *)(*unaff_x28 + 0x60), lVar18 == 0)) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_035575f4;
      if (lVar12 == 0) break;
      FUN_036a4e24(lVar12,*(undefined8 *)(lVar18 + lVar22 + 0xa8),0);
      lVar12 = unaff_x19[0xe1];
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar12 = *(long *)(lVar12 + lVar23 * 8 + 0x28);
      if ((lVar12 == 0) || (lVar12 = UnityEngine_Material__GetColorArray(lVar12,0), lVar12 == 0))
      break;
      FUN_036aa280(lVar12,0);
      lVar12 = unaff_x19[0xe1];
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar12 = *(long *)(lVar12 + lVar23 * 8 + 0x28);
      if (lVar12 == 0) break;
      lVar12 = FUN_037b514c(lVar12,0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar23 * 8 + 0x28);
      if ((lVar18 == 0) || (uVar20 = UnityEngine_Material__GetColorArray(lVar18,0), lVar12 == 0))
      break;
      FUN_0390f3a4(lVar12,uVar20,0);
      lVar12 = unaff_x19[0xe1];
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar12 = *(long *)(lVar12 + lVar23 * 8 + 0x28);
      if ((lVar12 == 0) || (lVar12 = FUN_037b514c(lVar12,0), lVar12 == 0)) break;
      FUN_0390eec8(uVar28,uVar13,uVar29,in_d3,lVar12,0);
      lVar12 = unaff_x19[0xe1];
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar12 = *(long *)(lVar12 + lVar23 * 8 + 0x28);
      if ((lVar12 == 0) || (lVar12 = FUN_037b514c(lVar12,0), lVar12 == 0)) break;
      FUN_0390ed78(lVar12,uVar31 & 1,0);
      lVar12 = unaff_x19[0xe1];
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar14) goto LAB_035575f4;
      plVar21 = *(long **)(lVar12 + lVar23 * 8 + 0x28);
      uVar11 = (**(code **)(*unaff_x19 + 0x2b8))();
      if (plVar21 == (long *)0x0) break;
      (**(code **)(*plVar21 + 0x2c8))(plVar21,uVar11 & 1,*(undefined8 *)(*plVar21 + 0x2d0));
    }
  }
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


