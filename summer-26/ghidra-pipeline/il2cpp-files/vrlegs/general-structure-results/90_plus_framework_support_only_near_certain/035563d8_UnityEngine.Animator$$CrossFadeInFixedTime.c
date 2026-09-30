/*
FUNCTION_NAME: UnityEngine.Animator$$CrossFadeInFixedTime
ENTRY_POINT: 035563d8
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
  bool bVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  char cVar16;
  code *pcVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long *unaff_x19;
  int *unaff_x20;
  undefined8 uVar22;
  long *plVar23;
  long unaff_x22;
  long unaff_x23;
  long lVar24;
  long unaff_x24;
  long lVar25;
  uint unaff_w25;
  long unaff_x27;
  long *unaff_x28;
  uint uVar26;
  long unaff_x29;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  ulong uVar32;
  float fVar33;
  uint uVar34;
  ulong uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float unaff_s11;
  float fVar41;
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
  undefined8 in_stack_00000110;
  uint uStack0000000000000118;
  uint uStack000000000000011c;
  int in_stack_00000128;
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
  
code_r0x035563d8:
  uVar34 = *(uint *)(param_1 + unaff_x27 + -0x330);
  fVar29 = *(float *)(param_1 + unaff_x27 + -0x30c);
  pcVar17 = *(code **)(*unaff_x19 + 0x8d8);
  fVar31 = in_stack_000000a8 * unaff_s11;
LAB_03556914:
  uVar35 = (ulong)uVar34;
  uVar13 = (ulong)(uint)fStack000000000000009c;
  uVar32 = (ulong)uStack0000000000000098;
  fStack0000000000000000 = in_stack_000000a8;
  fStack0000000000000008 = unaff_s14;
  (*pcVar17)(in_stack_000000a0,uVar13,uVar32,uVar35,fVar31 + fVar29,0,in_stack_000000a8,
             in_stack_000000a8);
  uVar12 = uStack000000000000015c;
LAB_03556948:
  uStack000000000000015c = uVar12;
  bVar7 = false;
  uVar34 = in_stack_00000160;
LAB_0355694c:
  if ((*unaff_x28 == 0) || (lVar18 = *(long *)(*unaff_x28 + 0x38), lVar18 == 0)) goto LAB_035574b8;
  uVar12 = (uint)*(undefined8 *)(lVar18 + 0x18);
  if (uVar12 <= unaff_w25) goto LAB_035575f4;
  if ((*(byte *)(lVar18 + unaff_x24 * unaff_x22 + 0x191) >> 1 & 1) == 0) {
    if ((in_stack_00000110._4_4_ & 1) != 0) {
      uVar32 = (ulong)uStack00000000000000c0;
      uVar13 = (ulong)(uint)fStack00000000000000dc;
      uVar35 = (ulong)(uint)in_stack_000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar13,uVar32,uVar35,fStack00000000000000d0,uVar32);
    }
LAB_035569b4:
    in_stack_00000110._4_4_ = 0;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)uVar34)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar18 + unaff_x24 * unaff_x22 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    uVar26 = (uint)in_stack_00000150;
    if ((in_stack_00000110._4_4_ & 1) == 0) {
      if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
          ((int)uVar26 < (int)unaff_w25)) || (!bVar1)) goto LAB_035569b4;
      if (unaff_w25 == uVar26) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar14 = FUN_026b97f8(in_stack_00000168._4_4_,0);
        if ((uVar14 & 1) != 0) goto LAB_035569b4;
      }
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar25 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar25 = *(long *)puVar8;
      }
      unaff_x22 = 0x178;
      if ((*unaff_x28 == 0) || (lVar18 = *(long *)(*unaff_x28 + 0x38), lVar18 == 0))
      goto LAB_035574b8;
      uVar12 = (uint)*(undefined8 *)(lVar18 + 0x18);
      if (uVar12 <= unaff_w25) goto LAB_035575f4;
      lVar25 = *(long *)(lVar25 + 0xb8);
      lVar24 = lVar18 + unaff_x24 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar24 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar24 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar25 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar25 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar24 + 0x18c);
      in_stack_000000c8 = *(float *)(lVar25 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar25 + 0x15a4);
      uStack00000000000000c0 = 0;
    }
    if (uVar12 <= unaff_w25) goto LAB_035575f4;
    lVar18 = lVar18 + unaff_x24 * unaff_x22;
    fVar31 = *(float *)(lVar18 + 0x128);
    fVar36 = *(float *)(lVar18 + 0x188);
    uVar22 = *(undefined8 *)(lVar18 + 0x17c);
    fVar39 = *(float *)(lVar18 + 0x184);
    uVar30 = *(undefined8 *)(lVar18 + 0x184);
    fVar38 = *(float *)(lVar18 + 0x18c);
    fVar29 = *(float *)(lVar18 + 0x11c);
    fVar37 = *(float *)(lVar18 + 0x148);
    fVar33 = *(float *)(lVar18 + 0x150);
    in_stack_00000178 = uVar22;
    fStack0000000000000180 = fVar39;
    fStack0000000000000184 = fVar36;
    in_stack_00000188 = fVar38;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar13 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar18 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar13 & 1) == 0) {
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar18);
      }
      fVar31 = fVar31 + (float)in_stack_000017b8;
      uVar32 = (ulong)(uint)fVar31;
      fVar29 = fVar29 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar33 = fVar33 - in_stack_000017c0;
      uVar13 = (ulong)(uint)fVar33;
      fVar37 = fVar37 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar35 = (ulong)(uint)fVar37;
      if (fVar29 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar29;
      }
      if (fVar33 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar33;
      }
      if (in_stack_000000c8 <= fVar31) {
        in_stack_000000c8 = fVar31;
      }
      if (fStack00000000000000d0 <= fVar37) {
        fStack00000000000000d0 = fVar37;
      }
    }
    else {
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar18);
      }
      fVar29 = (fVar29 + (in_stack_000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar35 = (ulong)(uint)fVar29;
      if (fVar33 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar33;
      }
      uVar13 = (ulong)(uint)fStack00000000000000dc;
      uVar32 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar37) {
        fStack00000000000000d0 = fVar37;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar13,uVar32,uVar35,fStack00000000000000d0,uVar32);
      fStack00000000000000dc = fVar33 - fVar38;
      in_stack_000000c8 = fVar31 + fVar39;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar37 + fVar36;
      fStack00000000000000d8 = fVar29;
      in_stack_000017b0 = uVar22;
      in_stack_000017b8 = uVar30;
      in_stack_000017c0 = fVar38;
    }
    unaff_x22 = 0x178;
    if (((*unaff_x20 == 1) || (unaff_w25 == (uint)in_stack_000000e0)) ||
       (((int)uVar26 <= (int)unaff_w25 || (!bVar1)))) {
      uVar32 = (ulong)uStack00000000000000c0;
      uVar13 = (ulong)(uint)fStack00000000000000dc;
      uVar35 = (ulong)(uint)in_stack_000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar13,uVar32,uVar35,fStack00000000000000d0,uVar32);
      in_stack_00000110._4_4_ = 0;
    }
    else {
      in_stack_00000110._4_4_ = 1;
    }
  }
  puVar8 = OVRPlugin_Media_TypeInfo;
  iVar11 = *unaff_x20;
  uVar12 = uStack000000000000015c + 1;
  unaff_x27 = unaff_x27 + 0x178;
  in_stack_00000128 = in_stack_00000128 + 1;
  if (iVar11 <= (int)uStack000000000000015c) {
    lVar18 = *unaff_x28;
    if (lVar18 == 0) goto LAB_035574b8;
    *(int *)(lVar18 + 0x18) = iVar11;
    lVar25 = unaff_x19[0xd4];
    *(uint *)(lVar18 + 0x2c) = uVar34 + 1;
    if (iVar11 < 1 || iStack00000000000000d4 == 0) {
      iStack00000000000000d4 = 1;
    }
    *(int *)(lVar18 + 0x1c) = (int)lVar25;
    *(int *)(lVar18 + 0x24) = iStack00000000000000d4;
    *(int *)(lVar18 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar14 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar14 & 1) == 0)) goto LAB_03554724;
    lVar18 = unaff_x19[0xdf];
    if (lVar18 != 0) {
      (**(code **)(lVar18 + 0x18))
                (*(undefined8 *)(lVar18 + 0x40),*unaff_x28,*(undefined8 *)(lVar18 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar11 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar11 != 0x19) {
      lVar18 = unaff_x19[0xe5];
      if (lVar18 == 0) goto LAB_035574b8;
      uVar34 = FUN_03911ee4(lVar18,0);
      FUN_03911f20(lVar18,uVar34 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*unaff_x28 == 0) || (lVar18 = *(long *)(*unaff_x28 + 0x60), lVar18 == 0))
      goto LAB_035574b8;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
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
    uVar34 = FUN_0390ed3c(unaff_x19[0xe4],0);
    lVar18 = *unaff_x28;
    if (lVar18 == 0) goto LAB_035574b8;
    lVar24 = 0;
    lVar25 = 0;
    goto LAB_03557110;
  }
  if (*(uint *)(unaff_x23 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
  if ((*unaff_x28 == 0) || (lVar18 = *(long *)(*unaff_x28 + 0x50), lVar18 == 0)) goto LAB_035574b8;
  unaff_x24 = (long)(int)uStack000000000000015c;
  lVar25 = unaff_x23 + unaff_x24 * unaff_x22;
  in_stack_00000160 = *(uint *)(lVar25 + 100);
  if (*(uint *)(lVar18 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
  lVar19 = (long)(int)in_stack_00000160;
  lVar18 = lVar18 + lVar19 * unaff_x29;
  lVar24 = *(long *)(lVar25 + 0x38);
  uVar3 = *(ushort *)(lVar25 + 0x20);
  uVar5 = *(uint *)(lVar18 + 0x3c);
  in_stack_000000e0 = (long)(int)uVar5;
  uVar26 = *(uint *)(lVar18 + 0x68);
  iVar2 = *(int *)(lVar18 + 0x20);
  iVar11 = *(int *)(lVar18 + 0x28);
  iVar10 = *(int *)(lVar18 + 0x2c);
  uVar6 = *(uint *)(lVar18 + 0x40);
  in_stack_00000150 = (long)(int)uVar6;
  fVar33 = *(float *)(lVar18 + 0x4c);
  fVar36 = *(float *)(lVar18 + 0x54);
  fVar29 = *(float *)(lVar18 + 0x58);
  fVar40 = *(float *)(lVar18 + 0x5c);
  fVar38 = *(float *)(lVar18 + 0x60);
  fVar39 = *(float *)(lVar18 + 0x6c);
  fVar41 = *(float *)(lVar18 + 0x70);
  fVar31 = *(float *)(lVar18 + 0x74);
  fVar37 = *(float *)(lVar18 + 0x78);
  in_stack_00000168._4_4_ = (uint)uVar3;
  if ((int)uVar26 < 9) {
    switch(uVar26) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar38 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar29;
      }
      break;
    case 2:
LAB_03555018:
      in_stack_000000f8._4_4_ = (fVar38 + fVar40 * 0.5) - fVar29 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar40 + fVar38) - fVar29;
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
        if ((fVar29 <= fVar40) && (!bVar1 && uVar26 >> 4 == 0)) {
          in_stack_000000f8._4_4_ = fVar38;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar40 + fVar38;
          }
          goto LAB_03555088;
        }
        if (((uVar12 == 1) || (in_stack_00000160 != uVar34)) ||
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
          cVar16 = (char)unaff_x19[0x1e];
          fVar38 = -fVar29;
          if (cVar16 != '\0') {
            fVar38 = fVar29;
          }
          if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar5) goto LAB_035575f4;
          iVar10 = (int)*(char *)(in_stack_000000f0 + in_stack_000000e0 * 0x178 + 0x194) +
                   (-iVar2 - (uStack0000000000000028 & 1)) + iVar10 + -1;
          if (iVar10 < 1) {
            fVar29 = 1.0;
            iVar10 = 1;
          }
          else {
            fVar29 = *(float *)((long)unaff_x19 + 0x2dc);
          }
          if (in_stack_00000168._4_4_ == 9) {
LAB_03556e74:
            fVar29 = 1.0 - fVar29;
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
            iVar10 = (iVar2 - (~uStack0000000000000028 & 1)) + iVar11;
          }
          fVar29 = ((fVar40 + fVar38) * fVar29) / (float)iVar10;
          if (cVar16 == '\0') {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar29;
            in_stack_000000e8 =
                 CONCAT44((float)((ulong)in_stack_000000e8 >> 0x20) + 0.0,
                          (float)in_stack_000000e8 + 0.0);
          }
          else {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar29;
          }
        }
      }
    }
    else if (((uVar3 != 0xad) && (uVar3 != 0x200b)) && (uVar3 != 0x2060)) goto LAB_03554fac;
  }
  else if (uVar26 == 0x20) {
    fVar29 = fVar39 + fVar31;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar26 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
  if (uVar26 <= uStack000000000000015c) goto LAB_035575f4;
  lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
  fVar40 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar29 = (float)in_stack_000000b8 + (float)in_stack_000000e8;
  fVar38 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)((ulong)in_stack_000000e8 >> 0x20);
  if (*(char *)(lVar18 + 0x194) == '\0') goto LAB_03555938;
  iVar11 = *(int *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x2c);
  if (iVar11 != 0) goto LAB_0355574c;
  fVar27 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)in_stack_00000160,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar25 = in_stack_000000f0 + unaff_x24 * 0x178;
    *(undefined4 *)(lVar25 + 0x84) = 0;
    *(undefined4 *)(lVar25 + 0xac) = 0;
    *(undefined4 *)(lVar25 + 0xd4) = 0x3f800000;
    fVar27 = 1.0;
    break;
  case 1:
    fVar37 = *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar25 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar31 = (in_stack_000000f8._4_4_ + fVar37) - *(float *)(in_stack_00000080 + 0x230);
      fVar37 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar25 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar31 = fVar31 - fVar39;
    *(float *)(lVar25 + 0x84) = fVar27 + (fVar37 - fVar39) / fVar31;
    *(float *)(lVar25 + 0xac) = fVar27 + (*(float *)(lVar25 + 0x98) - fVar39) / fVar31;
    *(float *)(lVar25 + 0xd4) = fVar27 + (*(float *)(lVar25 + 0xc0) - fVar39) / fVar31;
    fVar27 = fVar27 + (*(float *)(lVar25 + 0xe8) - fVar39) / fVar31;
    break;
  case 2:
    lVar25 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar37 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar31 = (in_stack_000000f8._4_4_ + *(float *)(lVar25 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar25 + 0x84) = fVar27 + fVar31 / fVar37;
    *(float *)(lVar25 + 0xac) =
         fVar27 + ((in_stack_000000f8._4_4_ + *(float *)(lVar25 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar25 + 0xd4) =
         fVar27 + ((in_stack_000000f8._4_4_ + *(float *)(lVar25 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar27 = fVar27 + ((in_stack_000000f8._4_4_ + *(float *)(lVar25 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar25 = in_stack_000000f0 + unaff_x24 * 0x178;
      *(undefined4 *)(lVar25 + 0x88) = 0;
      *(undefined4 *)(lVar25 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar25 + 0xd8) = 0;
      *(undefined4 *)(lVar25 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar25 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar37 = fVar37 - fVar41;
      fVar31 = fVar27 + (*(float *)(lVar25 + 0x74) - fVar41) / fVar37;
      fVar37 = fVar27 + (*(float *)(lVar25 + 0x9c) - fVar41) / fVar37;
      *(float *)(lVar25 + 0x88) = fVar31;
      *(float *)(lVar25 + 0xb0) = fVar37;
      *(float *)(lVar25 + 0xd8) = fVar31;
      *(float *)(lVar25 + 0x100) = fVar37;
      break;
    case 2:
      lVar25 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar31 = fVar27 + (*(float *)(lVar25 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar25 + 0x88) = fVar31;
      fVar37 = *(float *)(unaff_x19 + 0x9c);
      fVar39 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar25 + 0xd8) = fVar31;
      fVar31 = fVar27 + (*(float *)(lVar25 + 0x9c) - fVar37) / (fVar39 - fVar37);
      *(float *)(lVar25 + 0xb0) = fVar31;
      *(float *)(lVar25 + 0x100) = fVar31;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar26 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
    }
    if (uVar26 <= uStack000000000000015c) goto LAB_035575f4;
    lVar25 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar31 = *(float *)(lVar25 + 0x15c);
    fVar37 = (1.0 - (*(float *)(lVar25 + 0x88) + *(float *)(lVar25 + 0xb0)) * fVar31) * 0.5;
    fVar39 = fVar27 + *(float *)(lVar25 + 0x88) * fVar31 + fVar37;
    fVar27 = fVar27 + fVar37 + *(float *)(lVar25 + 0xb0) * fVar31;
    *(float *)(lVar25 + 0x84) = fVar39;
    *(float *)(lVar25 + 0xac) = fVar39;
    *(float *)(lVar25 + 0xd4) = fVar27;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xfc) = fVar27;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar26 <= uStack000000000000015c) goto LAB_035575f4;
    lVar25 = in_stack_000000f0 + unaff_x24 * 0x178;
    *(undefined4 *)(lVar25 + 0x88) = 0;
    *(undefined4 *)(lVar25 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar25 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar25 + 0x100) = 0;
    break;
  case 1:
    if (uStack000000000000015c < uVar26) {
      lVar25 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar33 = fVar33 - fVar36;
      fVar31 = (*(float *)(lVar25 + 0x74) - fVar36) / fVar33;
      fVar33 = (*(float *)(lVar25 + 0x9c) - fVar36) / fVar33;
      *(float *)(lVar25 + 0x88) = fVar31;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar26 <= uStack000000000000015c) goto LAB_035575f4;
    lVar25 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar31 = (*(float *)(lVar25 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar25 + 0x88) = fVar31;
    fVar33 = (*(float *)(lVar25 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar25 + 0xb0) = fVar33;
    *(float *)(lVar25 + 0xd8) = fVar33;
    *(float *)(lVar25 + 0x100) = fVar31;
    break;
  case 3:
    if (uVar26 <= uStack000000000000015c) goto LAB_035575f4;
    lVar25 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar37 = *(float *)(lVar25 + 0x15c);
    fVar33 = (1.0 - (*(float *)(lVar25 + 0x84) + *(float *)(lVar25 + 0xd4)) / fVar37) * 0.5;
    fVar31 = *(float *)(lVar25 + 0x84) / fVar37 + fVar33;
    fVar33 = fVar33 + *(float *)(lVar25 + 0xd4) / fVar37;
    *(float *)(lVar25 + 0x88) = fVar31;
    *(float *)(lVar25 + 0xb0) = fVar33;
    *(float *)(lVar25 + 0x100) = fVar31;
    *(float *)(lVar25 + 0xd8) = fVar33;
  }
  if (uVar26 <= uStack000000000000015c) goto LAB_035575f4;
  lVar25 = in_stack_000000f0 + unaff_x24 * 0x178;
  unaff_s14 = *(float *)(lVar25 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar25 + 0x5c) == '\0') &&
     ((*(byte *)(in_stack_000000f0 + unaff_x24 * 0x178 + 400) & 1) != 0)) {
    unaff_s14 = -unaff_s14;
  }
  fVar31 = in_stack_00000050._4_4_;
  if (((in_stack_00000058 == 2) || (fVar31 = fStack0000000000000034, in_stack_00000058 == 1)) ||
     (fVar31 = fStack000000000000002c, in_stack_00000058 == 0)) {
    unaff_s14 = fVar31 * unaff_s14;
  }
  lVar25 = in_stack_000000f0 + unaff_x24 * 0x178;
  fVar33 = *(float *)(lVar25 + 0x88);
  fVar37 = *(float *)(lVar25 + 0x84);
  fVar31 = -2.1474836e+09;
  if (fVar37 != INFINITY) {
    fVar31 = (float)(int)fVar37;
  }
  fVar39 = *(float *)(lVar25 + 0xd4);
  fVar41 = *(float *)(lVar25 + 0xd8);
  fVar36 = -2.1474836e+09;
  if (fVar33 != INFINITY) {
    fVar36 = (float)(int)fVar33;
  }
  uVar28 = FUN_03591d3c(fVar37 - fVar31,fVar33 - fVar36);
  *(undefined4 *)(lVar25 + 0x84) = uVar28;
  if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
  fVar41 = fVar41 - fVar36;
  *(float *)(lVar25 + 0x88) = unaff_s14;
  uVar28 = FUN_03591d3c(fVar37 - fVar31,fVar41);
  *(undefined4 *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xac) = uVar28;
  if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
  fVar39 = fVar39 - fVar31;
  *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xb0) = unaff_s14;
  fVar31 = (float)FUN_03591d3c(fVar39,fVar41);
  *(float *)(lVar25 + 0xd4) = fVar31;
  if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
  *(float *)(lVar25 + 0xd8) = unaff_s14;
  uVar28 = FUN_03591d3c(fVar39,fVar33 - fVar36);
  *(undefined4 *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xfc) = uVar28;
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
           CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar18 + 0x70) >> 0x20),
                    fVar40 + (float)*(undefined8 *)(lVar18 + 0x70));
      *(float *)(lVar18 + 0x78) = fVar38 + *(float *)(lVar18 + 0x78);
      *(ulong *)(lVar18 + 0x98) =
           CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar18 + 0x98) >> 0x20),
                    fVar40 + (float)*(undefined8 *)(lVar18 + 0x98));
      *(float *)(lVar18 + 0xa0) = fVar38 + *(float *)(lVar18 + 0xa0);
      *(ulong *)(lVar18 + 0xc0) =
           CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar18 + 0xc0) >> 0x20),
                    fVar40 + (float)*(undefined8 *)(lVar18 + 0xc0));
      *(float *)(lVar18 + 200) = fVar38 + *(float *)(lVar18 + 200);
      *(ulong *)(lVar18 + 0xe8) =
           CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar18 + 0xe8) >> 0x20),
                    fVar40 + (float)*(undefined8 *)(lVar18 + 0xe8));
      *(float *)(lVar18 + 0xf0) = fVar38 + *(float *)(lVar18 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)in_stack_00000160 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uStack000000000000015c < uVar26) {
        if (*(int *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x68) == iStack0000000000000030) {
          lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
          *(ulong *)(lVar18 + 0x70) =
               CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar18 + 0x70) >> 0x20),
                        fVar40 + (float)*(undefined8 *)(lVar18 + 0x70));
          *(float *)(lVar18 + 0x78) = fVar38 + *(float *)(lVar18 + 0x78);
          *(ulong *)(lVar18 + 0x98) =
               CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar18 + 0x98) >> 0x20),
                        fVar40 + (float)*(undefined8 *)(lVar18 + 0x98));
          *(float *)(lVar18 + 0xa0) = fVar38 + *(float *)(lVar18 + 0xa0);
          *(ulong *)(lVar18 + 0xc0) =
               CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar18 + 0xc0) >> 0x20),
                        fVar40 + (float)*(undefined8 *)(lVar18 + 0xc0));
          *(float *)(lVar18 + 200) = fVar38 + *(float *)(lVar18 + 200);
          *(ulong *)(lVar18 + 0xe8) =
               CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar18 + 0xe8) >> 0x20),
                        fVar40 + (float)*(undefined8 *)(lVar18 + 0xe8));
          *(float *)(lVar18 + 0xf0) = fVar38 + *(float *)(lVar18 + 0xf0);
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
  puVar8 = PTR_DAT_03cbded8;
  uVar28 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar25 = in_stack_000000f0 + unaff_x24 * 0x178;
  *(undefined8 *)(lVar25 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar25 + 0x78) = uVar28;
  if (uVar26 <= uStack000000000000015c) goto LAB_035575f4;
  uVar28 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  lVar25 = in_stack_000000f0 + unaff_x24 * 0x178;
  *(undefined8 *)(lVar25 + 0x98) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar25 + 0xa0) = uVar28;
  uVar28 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar25 + 0xc0) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar25 + 200) = uVar28;
  uVar28 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar25 + 0xe8) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar25 + 0xf0) = uVar28;
  *(undefined1 *)(lVar18 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar11 == 0) {
    pcVar17 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar17)();
  }
  else if (iVar11 == 1) {
    pcVar17 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar18 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
  lVar18 = lVar18 + unaff_x24 * 0x178;
  uVar30 = *(undefined8 *)(lVar18 + 0x11c);
  *(undefined8 *)(lVar18 + 0x11c) =
       CONCAT44(fVar29 + (float)((ulong)uVar30 >> 0x20),fVar40 + (float)uVar30);
  *(float *)(lVar18 + 0x124) = fVar38 + *(float *)(lVar18 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar18 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
  lVar18 = lVar18 + unaff_x24 * 0x178;
  *(ulong *)(lVar18 + 0x110) =
       CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar18 + 0x110) >> 0x20),
                fVar40 + (float)*(undefined8 *)(lVar18 + 0x110));
  *(float *)(lVar18 + 0x118) = fVar38 + *(float *)(lVar18 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar18 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
  lVar18 = lVar18 + unaff_x24 * 0x178;
  *(ulong *)(lVar18 + 0x128) =
       CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar18 + 0x128) >> 0x20),
                fVar40 + (float)*(undefined8 *)(lVar18 + 0x128));
  *(float *)(lVar18 + 0x130) = fVar38 + *(float *)(lVar18 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar18 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
  lVar18 = lVar18 + unaff_x24 * 0x178;
  *(float *)(lVar18 + 0x134) = fVar40 + *(float *)(lVar18 + 0x134);
  *(ulong *)(lVar18 + 0x138) =
       CONCAT44(fVar38 + (float)((ulong)*(undefined8 *)(lVar18 + 0x138) >> 0x20),
                fVar29 + (float)*(undefined8 *)(lVar18 + 0x138));
  lVar18 = *in_stack_00000170;
  if ((lVar18 == 0) || (lVar25 = *(long *)(lVar18 + 0x38), lVar25 == 0)) goto LAB_035574b8;
  uVar26 = *(uint *)(lVar25 + 0x18);
  if (uVar26 <= uStack000000000000015c) goto LAB_035575f4;
  lVar20 = lVar25 + unaff_x24 * 0x178;
  uVar13 = CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar20 + 0x140) >> 0x20),
                    fVar40 + (float)*(undefined8 *)(lVar20 + 0x140));
  fVar31 = fVar29 + *(float *)(lVar20 + 0x150);
  uVar32 = (ulong)(uint)fVar31;
  uVar35 = CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar20 + 0x148) >> 0x20),
                    fVar29 + (float)*(undefined8 *)(lVar20 + 0x148));
  *(float *)(lVar20 + 0x150) = fVar31;
  *(ulong *)(lVar20 + 0x140) = uVar13;
  *(ulong *)(lVar20 + 0x148) = uVar35;
  if (in_stack_00000160 == uVar34) {
    uVar34 = *unaff_x20 - 1;
    if (uStack000000000000015c == uVar34) goto LAB_03555b44;
  }
  else {
    lVar18 = *(long *)(lVar18 + 0x50);
    if (lVar18 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar18 + 0x18) <= uVar34) goto LAB_035575f4;
    lVar20 = (long)(int)uVar34;
    lVar21 = lVar18 + lVar20 * 0x5c;
    uVar35 = (ulong)(uint)*(float *)(lVar21 + 0x58);
    fVar31 = fVar29 + *(float *)(lVar21 + 0x54);
    uVar13 = (ulong)(uint)fVar31;
    fVar33 = fVar40 + *(float *)(lVar21 + 0x58);
    uVar32 = (ulong)(uint)fVar33;
    *(ulong *)(lVar21 + 0x4c) =
         CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar21 + 0x4c) >> 0x20),
                  fVar29 + (float)*(undefined8 *)(lVar21 + 0x4c));
    *(float *)(lVar21 + 0x54) = fVar31;
    *(float *)(lVar21 + 0x58) = fVar33;
    if (uVar26 <= *(uint *)(lVar21 + 0x34)) goto LAB_035575f4;
    uVar28 = *(undefined4 *)(lVar25 + (long)(int)*(uint *)(lVar21 + 0x34) * 0x178 + 0x11c);
    lVar18 = lVar18 + lVar20 * 0x5c;
    *(float *)(lVar18 + 0x70) = fVar31;
    *(undefined4 *)(lVar18 + 0x6c) = uVar28;
    lVar18 = *in_stack_00000170;
    if ((lVar18 == 0) || (lVar25 = *(long *)(lVar18 + 0x50), lVar25 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar25 + 0x18) <= uVar34) goto LAB_035575f4;
    lVar18 = *(long *)(lVar18 + 0x38);
    if (lVar18 == 0) goto LAB_035574b8;
    uVar34 = *(uint *)(lVar25 + lVar20 * 0x5c + 0x40);
    if (*(uint *)(lVar18 + 0x18) <= uVar34) goto LAB_035575f4;
    lVar25 = lVar25 + lVar20 * 0x5c;
    *(undefined4 *)(lVar25 + 0x74) = *(undefined4 *)(lVar18 + (long)(int)uVar34 * 0x178 + 0x128);
    *(undefined4 *)(lVar25 + 0x78) = *(undefined4 *)(lVar25 + 0x4c);
    uVar34 = *unaff_x20 - 1;
LAB_03555b44:
    if (uStack000000000000015c == uVar34) {
      lVar18 = *in_stack_00000170;
      if ((lVar18 == 0) || (lVar25 = *(long *)(lVar18 + 0x50), lVar25 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar25 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
      lVar20 = lVar25 + lVar19 * 0x5c;
      uVar35 = (ulong)(uint)*(float *)(lVar20 + 0x58);
      uVar13 = CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar20 + 0x4c) >> 0x20),
                        fVar29 + (float)*(undefined8 *)(lVar20 + 0x4c));
      fVar31 = fVar29 + *(float *)(lVar20 + 0x54);
      fVar40 = fVar40 + *(float *)(lVar20 + 0x58);
      uVar32 = (ulong)(uint)fVar40;
      *(ulong *)(lVar20 + 0x4c) = uVar13;
      *(float *)(lVar20 + 0x54) = fVar31;
      *(float *)(lVar20 + 0x58) = fVar40;
      lVar18 = *(long *)(lVar18 + 0x38);
      if (lVar18 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= *(uint *)(lVar20 + 0x34)) goto LAB_035575f4;
      uVar28 = *(undefined4 *)(lVar18 + (long)(int)*(uint *)(lVar20 + 0x34) * 0x178 + 0x11c);
      lVar25 = lVar25 + lVar19 * 0x5c;
      *(float *)(lVar25 + 0x70) = fVar31;
      *(undefined4 *)(lVar25 + 0x6c) = uVar28;
      lVar18 = *in_stack_00000170;
      if ((lVar18 == 0) || (lVar25 = *(long *)(lVar18 + 0x50), lVar25 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar25 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + 0x38);
      if (lVar18 == 0) goto LAB_035574b8;
      uVar34 = *(uint *)(lVar25 + lVar19 * 0x5c + 0x40);
      if (*(uint *)(lVar18 + 0x18) <= uVar34) goto LAB_035575f4;
      lVar25 = lVar25 + lVar19 * 0x5c;
      *(undefined4 *)(lVar25 + 0x74) = *(undefined4 *)(lVar18 + (long)(int)uVar34 * 0x178 + 0x128);
      *(undefined4 *)(lVar25 + 0x78) = *(undefined4 *)(lVar25 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar14 = FUN_026b82c4(in_stack_00000168._4_4_,0);
  if (((((uVar14 & 1) == 0) && (1 < in_stack_00000168._4_4_ - 0x2010)) &&
      (in_stack_00000168._4_4_ != 0xad)) && (in_stack_00000168._4_4_ != 0x2d)) {
    if ((uStack000000000000011c & 1) == 0) {
      if (uVar12 != 1) {
LAB_0355686c:
        uStack000000000000011c = 0;
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
        if (((in_stack_00000168._4_4_ != 0x200b) && ((uVar14 & 1) == 0)) && (*unaff_x20 != 1))
        goto LAB_0355686c;
      }
    }
    else if (((uVar12 != 1) &&
             ((int)uStack000000000000015c < (int)(*(uint *)(in_stack_000000f0 + 0x18) - 1))) &&
            (((int)uStack000000000000015c < *unaff_x20 &&
             ((in_stack_00000168._4_4_ == 0x2019 || (in_stack_00000168._4_4_ == 0x27)))))) {
      if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c - 1) goto LAB_035575f4;
      uVar4 = *(undefined2 *)(in_stack_000000f0 + unaff_x27 + -0x438);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar14 = FUN_026b82c4(uVar4,0);
      if ((uVar14 & 1) != 0) {
        if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar12) goto LAB_035575f4;
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
      iVar11 = in_stack_00000128;
      if ((uVar14 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar11 = uStack000000000000015c - 1;
    }
    lVar18 = *in_stack_00000170;
    if (lVar18 == 0) goto LAB_035574b8;
    lVar25 = *(long *)(lVar18 + 0x40);
    if (lVar25 == 0) goto LAB_035574b8;
    uVar34 = *(uint *)(lVar18 + 0x24);
    iVar10 = *(int *)(lVar25 + 0x18);
    if (iVar10 < (int)(uVar34 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar18 + 0x40),iVar10 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar18 = *in_stack_00000170;
      if (lVar18 == 0) goto LAB_035574b8;
    }
    lVar18 = *(long *)(lVar18 + 0x40);
    if (lVar18 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar18 + 0x18) <= uVar34) goto LAB_035575f4;
    lVar18 = lVar18 + (long)(int)uVar34 * 0x18;
    *(long **)(lVar18 + 0x20) = unaff_x19;
    *(uint *)(lVar18 + 0x28) = uStack0000000000000158;
    *(int *)(lVar18 + 0x2c) = iVar11;
    *(uint *)(lVar18 + 0x30) = (iVar11 - uStack0000000000000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar18 = unaff_x19[0x6d];
    if (lVar18 == 0) goto LAB_035574b8;
    lVar25 = *(long *)(lVar18 + 0x50);
    *(int *)(lVar18 + 0x24) = *(int *)(lVar18 + 0x24) + 1;
    if (lVar25 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar25 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
    lVar25 = lVar25 + lVar19 * 0x5c;
    uStack000000000000011c = 0;
    iStack00000000000000d4 = iStack00000000000000d4 + 1;
    *(int *)(lVar25 + 0x30) = *(int *)(lVar25 + 0x30) + 1;
  }
  else {
    if ((uStack000000000000011c & 1) == 0) {
      uStack0000000000000158 = uStack000000000000015c;
    }
    if (uStack000000000000015c == *unaff_x20 - 1U) {
      lVar18 = *in_stack_00000170;
      if (lVar18 == 0) goto LAB_035574b8;
      lVar25 = *(long *)(lVar18 + 0x40);
      if (lVar25 == 0) goto LAB_035574b8;
      uVar34 = *(uint *)(lVar18 + 0x24);
      iVar11 = *(int *)(lVar25 + 0x18);
      if (iVar11 < (int)(uVar34 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar18 + 0x40),iVar11 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar18 = *in_stack_00000170;
        if (lVar18 == 0) goto LAB_035574b8;
      }
      lVar18 = *(long *)(lVar18 + 0x40);
      if (lVar18 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= uVar34) goto LAB_035575f4;
      lVar18 = lVar18 + (long)(int)uVar34 * 0x18;
      *(long **)(lVar18 + 0x20) = unaff_x19;
      *(uint *)(lVar18 + 0x28) = uStack0000000000000158;
      *(uint *)(lVar18 + 0x2c) = uStack000000000000015c;
      *(uint *)(lVar18 + 0x30) = uVar12 - uStack0000000000000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar18 = unaff_x19[0x6d];
      if (lVar18 == 0) goto LAB_035574b8;
      lVar25 = *(long *)(lVar18 + 0x50);
      *(int *)(lVar18 + 0x24) = *(int *)(lVar18 + 0x24) + 1;
      if (lVar25 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar25 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
      lVar25 = lVar25 + lVar19 * 0x5c;
      iStack00000000000000d4 = iStack00000000000000d4 + 1;
      *(int *)(lVar25 + 0x30) = *(int *)(lVar25 + 0x30) + 1;
    }
LAB_03555d68:
    uStack000000000000011c = 1;
  }
LAB_03555d70:
  unaff_x22 = 0x178;
  if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
  goto LAB_035574b8;
  uVar34 = *(uint *)(lVar18 + 0x18);
  if (uVar34 <= uStack000000000000015c) goto LAB_035575f4;
  if ((*(byte *)(lVar18 + unaff_x24 * 0x178 + 400) >> 2 & 1) == 0) {
    if ((uStack0000000000000118 & 1) == 0) {
LAB_03556254:
      uStack0000000000000118 = 0;
    }
    else {
LAB_03555da0:
      if (uVar34 <= uStack000000000000015c - 1) goto LAB_035575f4;
      lVar25 = *unaff_x19;
      uVar34 = *(uint *)(lVar18 + unaff_x27 + -0x330);
      uVar28 = *(undefined4 *)(lVar18 + unaff_x27 + -0x2f8);
LAB_035562ec:
      pcVar17 = *(code **)(lVar25 + 0x8d8);
LAB_035562f4:
      uVar35 = (ulong)uVar34;
      uVar13 = (ulong)(uint)fStack0000000000000070;
      fStack0000000000000008 = fStack0000000000000100;
      uVar32 = (ulong)uStack0000000000000074;
      fStack0000000000000000 = unaff_s15;
      (*pcVar17)(in_stack_00000078,uVar13,uVar32,uVar35,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar28);
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar18 = *(long *)puVar8;
      }
LAB_03556348:
      uStack0000000000000118 = 0;
      unaff_s15 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar18 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
  }
  else {
    lVar18 = lVar18 + unaff_x24 * 0x178;
    iVar11 = *(int *)(lVar18 + 0x68);
    *(undefined4 *)(lVar18 + 0x16c) = in_stack_000017c4;
    if ((((int)unaff_x19[0x65] < (int)uStack000000000000015c) ||
        ((int)unaff_x19[0x66] < (int)in_stack_00000160)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar11 + 1 != (int)unaff_x19[0x67])))) {
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
      lVar18 = *in_stack_00000170;
      if ((lVar18 == 0) || (lVar25 = *(long *)(lVar18 + 0x38), lVar25 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar25 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
      fVar31 = *(float *)(lVar25 + unaff_x24 * 0x178 + 0x160);
      if (unaff_s15 <= fVar31) {
        unaff_s15 = fVar31;
      }
      if (fStack0000000000000100 <= ABS(unaff_s14)) {
        fStack0000000000000100 = ABS(unaff_s14);
      }
      if (iVar11 != in_stack_00000068._4_4_) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar18 = *in_stack_00000170;
          if (lVar18 == 0) goto LAB_035574b8;
          lVar25 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar25 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar25 + 0x15a8);
      }
      lVar18 = *(long *)(lVar18 + 0x38);
      if (lVar18 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar33 = *(float *)(lVar18 + unaff_x24 * 0x178 + 0x14c);
      fVar31 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar33 = fVar33 + unaff_s15 * fVar31;
      if (fVar33 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar33;
      }
      uVar13 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar11;
    }
    if ((uStack0000000000000118 & 1) == 0) {
      uStack0000000000000118 = 0;
      if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
          ((int)uVar6 < (int)uStack000000000000015c)) || ((bool)(bVar1 ^ 1))) goto LAB_03556364;
      if (uStack000000000000015c == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar14 = FUN_026b97f8(in_stack_00000168._4_4_,0);
        if ((uVar14 & 1) != 0) goto LAB_03556254;
      }
      if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
      lVar18 = lVar18 + unaff_x24 * 0x178;
      in_stack_00000088._4_4_ = *(float *)(lVar18 + 0x160);
      in_stack_00000078 = *(uint *)(lVar18 + 0x11c);
      uVar32 = (ulong)in_stack_00000078;
      bVar9 = unaff_s15 != 0.0;
      fVar31 = in_stack_00000088._4_4_;
      if (bVar9) {
        fVar31 = unaff_s15;
      }
      unaff_s15 = fVar31;
      in_stack_00000090 = *(undefined4 *)(lVar18 + 0x168);
      uStack0000000000000074 = 0;
      fVar31 = unaff_s14;
      if (bVar9) {
        fVar31 = fStack0000000000000100;
      }
      uVar13 = (ulong)(uint)fVar31;
      fStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar31;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 != 0) && (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 != 0))
      {
        if (uStack000000000000015c < *(uint *)(lVar18 + 0x18)) {
          lVar18 = lVar18 + unaff_x24 * 0x178;
          lVar25 = *unaff_x19;
          uVar34 = *(uint *)(lVar18 + 0x128);
          uVar28 = *(undefined4 *)(lVar18 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((uStack000000000000015c == uVar5) || ((int)uVar6 <= (int)uStack000000000000015c)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar13 = FUN_026b63d8(in_stack_00000168._4_4_,0);
      if ((*in_stack_00000170 != 0) && (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 != 0))
      {
        lVar25 = unaff_x24;
        uVar34 = uStack000000000000015c;
        if (in_stack_00000168._4_4_ == 0x200b || (uVar13 & 1) != 0) {
          lVar25 = in_stack_00000150;
          uVar34 = uVar6;
        }
        if (uVar34 < *(uint *)(lVar18 + 0x18)) {
          lVar18 = lVar18 + lVar25 * 0x178;
          uVar34 = *(uint *)(lVar18 + 0x128);
          uVar28 = *(undefined4 *)(lVar18 + 0x160);
          pcVar17 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 != 0))
      {
        uVar34 = *(uint *)(lVar18 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uStack000000000000015c < *unaff_x20 + -1) {
      if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= uVar12) goto LAB_035575f4;
      uVar14 = FUN_03567ad8(in_stack_00000090,*(undefined4 *)(lVar18 + unaff_x27),0);
      if ((uVar14 & 1) == 0) {
        if ((*in_stack_00000170 != 0) &&
           (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 != 0)) {
          if (uStack000000000000015c < *(uint *)(lVar18 + 0x18)) {
            lVar18 = lVar18 + unaff_x24 * 0x178;
            uVar35 = (ulong)*(uint *)(lVar18 + 0x128);
            fStack0000000000000008 = fStack0000000000000100;
            uVar32 = (ulong)uStack0000000000000074;
            uVar13 = (ulong)(uint)fStack0000000000000070;
            fStack0000000000000000 = unaff_s15;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (in_stack_00000078,uVar13,uVar32,uVar35,fStack0000000000000104,0,
                       in_stack_00000088._4_4_,*(undefined4 *)(lVar18 + 0x160));
            puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar18 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar18 = *(long *)puVar8;
            }
            goto LAB_03556348;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
    }
    uStack0000000000000118 = 1;
  }
LAB_03556364:
  if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar18 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
  unaff_x29 = 0x5c;
  if (lVar24 == 0) goto LAB_035574b8;
  uVar34 = *(uint *)(lVar18 + unaff_x24 * 0x178 + 400);
  unaff_s11 = (float)FUN_03776a30(lVar24 + 0x50,0);
  unaff_x23 = in_stack_000000f0;
  unaff_x28 = in_stack_00000170;
  unaff_w25 = uStack000000000000015c;
  if ((uVar34 >> 6 & 1) == 0) {
    if (bVar7) {
      if ((*in_stack_00000170 == 0) ||
         (param_1 = *(long *)(*in_stack_00000170 + 0x38), param_1 == 0)) goto LAB_035574b8;
      uVar34 = uStack000000000000015c - 1;
      uStack000000000000015c = uVar12;
      if (*(uint *)(param_1 + 0x18) <= uVar34) goto LAB_035575f4;
      goto code_r0x035563d8;
    }
    goto LAB_03556948;
  }
  lVar18 = *in_stack_00000170;
  if ((lVar18 == 0) || (lVar25 = *(long *)(lVar18 + 0x38), lVar25 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar25 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
  *(undefined4 *)(lVar25 + unaff_x24 * 0x178 + 0x174) = in_stack_000017c4;
  if ((((int)unaff_x19[0x65] < (int)uStack000000000000015c) ||
      ((int)unaff_x19[0x66] < (int)in_stack_00000160)) ||
     (((int)unaff_x19[0x5c] == 5 &&
      (*(int *)(lVar25 + unaff_x24 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
      ((int)uVar6 < (int)uStack000000000000015c)) || (bVar7 || !bVar1)) {
LAB_035564e8:
    if (!bVar7) goto LAB_03556948;
  }
  else {
    if (uStack000000000000015c == uVar6) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar14 = FUN_026b97f8(in_stack_00000168._4_4_,0);
      if ((uVar14 & 1) != 0) goto LAB_035564e8;
      lVar18 = *in_stack_00000170;
      if (lVar18 == 0) goto LAB_035574b8;
    }
    lVar18 = *(long *)(lVar18 + 0x38);
    if (lVar18 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar18 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    lVar18 = lVar18 + unaff_x24 * 0x178;
    in_stack_00000040 = *(float *)(lVar18 + 0x60);
    in_stack_00000038 = *(float *)(lVar18 + 0x14c);
    uVar13 = (ulong)(uint)in_stack_00000038;
    in_stack_000000a0 = *(uint *)(lVar18 + 0x11c);
    uVar32 = (ulong)in_stack_000000a0;
    in_stack_000000a8 = *(float *)(lVar18 + 0x160);
    fStack000000000000009c = unaff_s11 * in_stack_000000a8 + in_stack_00000038;
    uStack0000000000000098 = 0;
  }
  iVar11 = *unaff_x20;
  if (iVar11 == 1) {
LAB_03556628:
    if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar18 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    lVar18 = lVar18 + unaff_x24 * 0x178;
    lVar25 = *unaff_x19;
    uVar34 = *(uint *)(lVar18 + 0x128);
    fVar29 = *(float *)(lVar18 + 0x14c);
LAB_03556654:
    pcVar17 = *(code **)(lVar25 + 0x8d8);
LAB_0355690c:
    fVar31 = unaff_s11 * in_stack_000000a8;
    uStack000000000000015c = uVar12;
    goto LAB_03556914;
  }
  lVar18 = in_stack_00000150;
  if (uStack000000000000015c == uVar5) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar13 = FUN_026b63d8(in_stack_00000168._4_4_,0);
    if ((*in_stack_00000170 == 0) || (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0))
    goto LAB_035574b8;
    uVar34 = *(uint *)(lVar25 + 0x18);
    if (in_stack_00000168._4_4_ == 0x200b || (uVar13 & 1) != 0) {
      if (uVar34 <= uVar6) goto LAB_035575f4;
    }
    else {
FUN_035568e8:
      lVar18 = unaff_x24;
      if (uVar34 <= uStack000000000000015c) goto LAB_035575f4;
    }
LAB_035568f0:
    lVar25 = lVar25 + lVar18 * 0x178;
    fVar29 = *(float *)(lVar25 + 0x14c);
    uVar34 = *(uint *)(lVar25 + 0x128);
    pcVar17 = *(code **)(*unaff_x19 + 0x8d8);
    goto LAB_0355690c;
  }
  if ((int)uStack000000000000015c < iVar11) {
    lVar25 = *in_stack_00000170;
    if ((lVar25 == 0) || (lVar19 = *(long *)(lVar25 + 0x38), lVar19 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar19 + 0x18) <= uVar12) goto LAB_035575f4;
    if (*(float *)(lVar19 + unaff_x27 + -0x108) == in_stack_00000040) {
      fVar31 = *(float *)(lVar19 + unaff_x27 + -0x1c);
      if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar13 = (ulong)(uint)in_stack_00000038;
      uVar14 = FUN_03567bac(fVar29 + fVar31,uVar13,0);
      if ((uVar14 & 1) != 0) {
        iVar11 = *unaff_x20;
        goto LAB_03556744;
      }
      lVar25 = *in_stack_00000170;
      if (lVar25 == 0) goto LAB_035574b8;
    }
    lVar25 = *(long *)(lVar25 + 0x38);
    if (lVar25 == 0) goto LAB_035574b8;
    uVar34 = *(uint *)(lVar25 + 0x18);
    if ((int)uStack000000000000015c <= (int)uVar6) goto FUN_035568e8;
    if (uVar6 < uVar34) goto LAB_035568f0;
    goto LAB_035575f4;
  }
LAB_03556744:
  if ((int)uStack000000000000015c < iVar11) {
    iVar11 = FUN_036d3364(lVar24,0);
    if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar12) goto LAB_035575f4;
    lVar18 = *(long *)(in_stack_000000f0 + unaff_x27 + -0x130);
    if (lVar18 == 0) goto LAB_035574b8;
    iVar10 = FUN_036d3364(lVar18,0);
    if (iVar11 != iVar10) goto LAB_03556628;
  }
  if (!bVar1) {
    if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
    goto LAB_035574b8;
    if (uStack000000000000015c - 1 < *(uint *)(lVar18 + 0x18)) {
      lVar25 = *unaff_x19;
      uVar34 = *(uint *)(lVar18 + unaff_x27 + -0x330);
      fVar29 = *(float *)(lVar18 + unaff_x27 + -0x30c);
      goto LAB_03556654;
    }
    goto LAB_035575f4;
  }
  bVar7 = true;
  uStack000000000000015c = uVar12;
  uVar34 = in_stack_00000160;
  goto LAB_0355694c;
  while( true ) {
    lVar18 = *unaff_x28;
    lVar25 = lVar25 + 1;
    lVar24 = lVar24 + 0x50;
    if (lVar18 == 0) break;
LAB_03557110:
    uVar14 = lVar25 + 1;
    if ((long)*(int *)(lVar18 + 0x34) <= (long)uVar14) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar18 = *(long *)(lVar18 + 0x60);
    if (lVar18 == 0) break;
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_035575f4;
    FUN_03596a20(lVar18 + lVar24 + 0x70,0);
    lVar18 = unaff_x19[0xe1];
    if (lVar18 == 0) break;
    if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_035575f4;
    uVar22 = *(undefined8 *)(lVar18 + lVar25 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar15 = FUN_036d35a8(uVar22,0,0);
    if ((uVar15 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*unaff_x28 == 0) || (lVar18 = *(long *)(*unaff_x28 + 0x60), lVar18 == 0)) break;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar18 + 0x18) <= uVar14) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03596b20(lVar18 + lVar24 + 0x70,1,0);
      }
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar25 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
      if ((*unaff_x28 == 0) || (lVar19 = *(long *)(*unaff_x28 + 0x60), lVar19 == 0)) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_035575f4;
      if (lVar18 == 0) break;
      FUN_036a460c(lVar18,*(undefined8 *)(lVar19 + lVar24 + 0x80),0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar25 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
      if ((*unaff_x28 == 0) || (lVar19 = *(long *)(*unaff_x28 + 0x60), lVar19 == 0)) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_035575f4;
      if (lVar18 == 0) break;
      FUN_036a4810(lVar18,*(undefined8 *)(lVar19 + lVar24 + 0x98),0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar25 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
      if ((*unaff_x28 == 0) || (lVar19 = *(long *)(*unaff_x28 + 0x60), lVar19 == 0)) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_035575f4;
      if (lVar18 == 0) break;
      FUN_036a48bc(lVar18,*(undefined8 *)(lVar19 + lVar24 + 0xa0),0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar25 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
      if ((*unaff_x28 == 0) || (lVar19 = *(long *)(*unaff_x28 + 0x60), lVar19 == 0)) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_035575f4;
      if (lVar18 == 0) break;
      FUN_036a4e24(lVar18,*(undefined8 *)(lVar19 + lVar24 + 0xa8),0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar25 * 8 + 0x28);
      if ((lVar18 == 0) || (lVar18 = UnityEngine_Material__GetColorArray(lVar18,0), lVar18 == 0))
      break;
      FUN_036aa280(lVar18,0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar25 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = FUN_037b514c(lVar18,0);
      lVar19 = unaff_x19[0xe1];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar19 = *(long *)(lVar19 + lVar25 * 8 + 0x28);
      if ((lVar19 == 0) || (uVar22 = UnityEngine_Material__GetColorArray(lVar19,0), lVar18 == 0))
      break;
      FUN_0390f3a4(lVar18,uVar22,0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar25 * 8 + 0x28);
      if ((lVar18 == 0) || (lVar18 = FUN_037b514c(lVar18,0), lVar18 == 0)) break;
      FUN_0390eec8(uVar30,uVar13,uVar32,uVar35,lVar18,0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar25 * 8 + 0x28);
      if ((lVar18 == 0) || (lVar18 = FUN_037b514c(lVar18,0), lVar18 == 0)) break;
      FUN_0390ed78(lVar18,uVar34 & 1,0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_035575f4;
      plVar23 = *(long **)(lVar18 + lVar25 * 8 + 0x28);
      uVar12 = (**(code **)(*unaff_x19 + 0x2b8))();
      if (plVar23 == (long *)0x0) break;
      (**(code **)(*plVar23 + 0x2c8))(plVar23,uVar12 & 1,*(undefined8 *)(*plVar23 + 0x2d0));
    }
  }
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


