/*
FUNCTION_NAME: UnityEngine.AnimationClip$$Internal_CreateAnimationClip
ENTRY_POINT: 035520a8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 189
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_7;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_7
*/


void UnityEngine_AnimationClip__Internal_CreateAnimationClip(float param_1,ulong param_2)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  int *piVar22;
  ulong uVar23;
  undefined1 uVar24;
  char cVar25;
  undefined4 *puVar26;
  long lVar27;
  long lVar28;
  float *pfVar29;
  code *pcVar30;
  float *pfVar31;
  uint uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  uint uVar37;
  long lVar38;
  long *unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  long *plVar39;
  uint unaff_w22;
  uint unaff_w23;
  ulong unaff_x24;
  uint unaff_w25;
  long lVar40;
  long *plVar41;
  long unaff_x26;
  uint unaff_w27;
  uint unaff_w28;
  long lVar42;
  uint unaff_w29;
  uint uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined4 uVar51;
  ulong uVar52;
  ulong uVar53;
  uint uVar54;
  ulong uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  ulong unaff_d13;
  undefined4 uVar63;
  float fVar64;
  float fVar65;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  uint uStack0000000000000030;
  int iStack0000000000000034;
  float fStack0000000000000038;
  float fStack0000000000000040;
  undefined8 in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float in_stack_00000060;
  undefined8 in_stack_00000068;
  byte bStack0000000000000070;
  byte bStack0000000000000074;
  float fStack0000000000000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  float in_stack_00000090;
  float fStack0000000000000098;
  float fStack000000000000009c;
  float fStack00000000000000a0;
  float fStack00000000000000a8;
  long *in_stack_000000b8;
  uint uStack00000000000000c0;
  float fStack00000000000000c4;
  float fStack00000000000000c8;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  long *in_stack_000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 in_stack_000000f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  float fStack0000000000000114;
  float fStack0000000000000128;
  float fStack000000000000012c;
  float in_stack_00000140;
  float fStack0000000000000150;
  float fStack0000000000000158;
  float fStack000000000000015c;
  long *in_stack_00000160;
  undefined8 in_stack_00000168;
  long *in_stack_00000170;
  undefined8 in_stack_00000178;
  float fStack0000000000000180;
  float fStack0000000000000184;
  float in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  float in_stack_000001a0;
  uint in_stack_000008a0;
  undefined4 in_stack_000008a4;
  undefined8 in_stack_000008a8;
  undefined4 in_stack_000008b0;
  long in_stack_000016f8;
  uint in_stack_0000178c;
  uint in_stack_000017a8;
  undefined8 in_stack_000017b0;
  undefined8 in_stack_000017b8;
  float in_stack_000017c0;
  undefined8 in_stack_000017c8;
  char in_stack_000017d4;
  float in_stack_000017d8;
  uint in_stack_000017dc;
  
code_r0x035520a8:
  fVar50 = param_1;
  if (*(char *)((long)unaff_x19 + 0x2c4) == '\0') {
    fVar50 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
  }
LAB_035520bc:
  uVar13 = (uint)unaff_x26;
  fVar64 = (float)param_2;
  param_2 = (ulong)(uint)fStack00000000000000c4;
  iVar17 = (int)unaff_x24;
  if ((*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar64)) + fVar50 <=
      fStack00000000000000c4) goto LAB_03552724;
  if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
    *(uint *)((long)unaff_x19 + 0x2e4) = unaff_w27;
  }
  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  in_stack_000017a8 = FUN_0358c15c();
  lVar40 = unaff_x19[0x5d];
  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
  }
  uVar20 = FUN_036cee6c(lVar40,0,0);
  unaff_w29 = in_stack_000017dc;
  if ((uVar20 & 1) != 0) {
    plVar41 = (long *)unaff_x19[0x5d];
    uVar21 = (**(code **)(*unaff_x19 + 0x518))();
    if (plVar41 == (long *)0x0) goto LAB_035574b8;
    (**(code **)(*plVar41 + 0x528))(plVar41,uVar21,*(undefined8 *)(*plVar41 + 0x530));
    lVar40 = unaff_x19[0x5d];
    if (lVar40 == 0) goto LAB_035574b8;
    *(int *)(lVar40 + 0x400) = (int)unaff_x19[0x80];
    FUN_0357ee30(lVar40,*(undefined4 *)((long)unaff_x19 + 0x494),0);
    plVar41 = (long *)unaff_x19[0x5d];
    if (plVar41 == (long *)0x0) goto LAB_035574b8;
    (**(code **)(*plVar41 + 0x7a8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7b0));
    *(undefined1 *)(unaff_x19 + 0x5f) = 1;
  }
UnityEngine_AnimationClip__get_hasMotionCurves:
  in_stack_000017c8 = CONCAT44(3,unaff_w27);
LAB_03550bd0:
  fVar50 = (float)unaff_d13;
  in_stack_000017a8 = in_stack_000017a8 + 1;
  lVar40 = unaff_x19[0x8f];
  if (lVar40 != 0) {
    if ((int)in_stack_000017a8 < (int)*(uint *)(lVar40 + 0x18)) {
      if (*(uint *)(lVar40 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
      uVar13 = *(uint *)(lVar40 + (long)(int)in_stack_000017a8 * 0xc + 0x20);
      if (uVar13 == 0) goto LAB_0355459c;
      if (5 < in_stack_00000168._4_4_) {
        uVar21 = FUN_0276793c(&stack0x000017dc,0);
        uVar18 = FUN_0276793c(&stack0x000017a8,0);
        uVar21 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar21,
                              *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar18,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_0367ae18(uVar21,0);
        in_stack_000017c8 = CONCAT44(3,*unaff_x20);
      }
      if ((*(char *)((long)unaff_x19 + 0x302) != '\0') && (uVar13 == 0x3c)) goto code_r0x0355094c;
      if ((*in_stack_00000170 != 0) && (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 != 0))
      {
        if (*unaff_x20 < *(uint *)(lVar40 + 0x18)) {
          lVar40 = lVar40 + (long)(int)*unaff_x20 * unaff_x24;
          *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar40 + 0x2c);
          *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar40 + 0x58);
          unaff_x19[0x20] = *(long *)(lVar40 + 0x38);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          goto LAB_035509d4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_0355459c:
    fVar50 = (float)param_2;
    if (((char)unaff_x19[0x47] != '\0') &&
       (fVar50 = DAT_00d389f8,
       DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
      fVar50 = *(float *)((long)unaff_x19 + 0x1e4);
      fVar64 = *(float *)((long)unaff_x19 + 0x254);
      if ((fVar50 < fVar64) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
          *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
        }
        fVar44 = (*(float *)((long)unaff_x19 + 0x23c) - fVar50) * 0.5;
        if (fVar44 <= DAT_00d38b84) {
          fVar44 = DAT_00d38b84;
        }
        *(float *)(unaff_x19 + 0x48) = fVar50;
        fVar44 = (fVar50 + fVar44) * 20.0 + 0.5;
        fVar50 = DAT_00d38e60;
        if (fVar44 != INFINITY) {
          fVar50 = (float)(int)fVar44 / 20.0;
        }
        if (fVar64 <= fVar50) {
          fVar50 = fVar64;
        }
        goto LAB_03554658;
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
    puVar8 = PTR_DAT_03cbdf88;
    if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
      uVar21 = FUN_0276793c(_fStack0000000000000038,0);
      uVar18 = FUN_0277fa90(_fStack0000000000000040,0);
      uVar21 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar21,
                            *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar18,0);
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
      }
      FUN_0367a6ec(uVar21,0);
    }
    puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (unaff_w29 == 3)))) {
      (**(code **)(*unaff_x19 + 0x918))();
      goto LAB_03554724;
    }
    lVar40 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar40 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar40 = *(long *)puVar9;
    }
    plVar41 = (long *)OVRPlugin_Media_TypeInfo;
    lVar40 = **(long **)(lVar40 + 0xb8);
    if (lVar40 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar40 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_035575f4;
    iVar17 = *(int *)(lVar40 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
    if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x60), lVar40 == 0))
    goto LAB_035574b8;
    if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(int *)(lVar40 + 0x18) == 0) goto LAB_035575f4;
    FUN_035968e8(lVar40 + 0x20,0,0);
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbded8);
      DAT_0411f172 = '\x01';
    }
    iVar12 = (int)unaff_x19[0x4e];
    in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
    uStack00000000000000e8 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
    lVar40 = unaff_x19[0xe3];
    in_stack_000000b8 = (long *)uStack00000000000000e8;
    fStack00000000000000c4 = in_stack_000000f8._4_4_;
    if (iVar12 < 0x401) {
      if (iVar12 == 0x100) {
        if (lVar40 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar40 + 0x18) < 2) goto LAB_035575f4;
        uVar21 = *(undefined8 *)(lVar40 + 0x30);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*in_stack_00000170 == 0) ||
             (lVar28 = *(long *)(*in_stack_00000170 + 0x58), lVar28 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar28 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
          fVar50 = *(float *)(lVar28 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
        }
        else {
          fVar50 = *(float *)(unaff_x19 + 0x97);
        }
        fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar40 + 0x2c);
        fVar50 = (0.0 - fVar50) - fStack0000000000000020;
      }
      else if (iVar12 == 0x200) {
        if (lVar40 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar40 + 0x18) == 1) || (*(int *)(lVar40 + 0x18) == 0)) goto LAB_035575f4;
        fStack00000000000000c4 = (*(float *)(lVar40 + 0x20) + *(float *)(lVar40 + 0x2c)) * 0.5;
        uVar21 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar40 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar40 + 0x30) >> 0x20)) * 0.5,
                          ((float)*(undefined8 *)(lVar40 + 0x24) +
                          (float)*(undefined8 *)(lVar40 + 0x30)) * 0.5);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*in_stack_00000170 == 0) ||
             (lVar40 = *(long *)(*in_stack_00000170 + 0x58), lVar40 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar40 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
          lVar40 = lVar40 + (long)(int)uStack0000000000000030 * 0x14;
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
          fVar50 = ((fStack0000000000000020 + *(float *)(lVar40 + 0x28) + *(float *)(lVar40 + 0x30))
                   - fStack0000000000000024) * -0.5 + 0.0;
        }
        else {
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
          fVar50 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_000017d8) -
                   fStack0000000000000024) * -0.5 + 0.0;
        }
      }
      else {
        if (iVar12 != 0x400) goto LAB_03554c4c;
        if (lVar40 == 0) goto LAB_035574b8;
        if (*(int *)(lVar40 + 0x18) == 0) goto LAB_035575f4;
        uVar21 = *(undefined8 *)(lVar40 + 0x24);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*in_stack_00000170 == 0) ||
             (lVar28 = *(long *)(*in_stack_00000170 + 0x58), lVar28 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar28 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
          in_stack_000017d8 = *(float *)(lVar28 + (long)(int)uStack0000000000000030 * 0x14 + 0x30);
        }
        fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar40 + 0x20);
        fVar50 = fStack0000000000000024 + (0.0 - in_stack_000017d8);
      }
LAB_03554c3c:
      in_stack_000000b8 =
           (long *)CONCAT44((float)((ulong)uVar21 >> 0x20) + 0.0,(float)uVar21 + fVar50);
    }
    else if (iVar12 == 0x800) {
      if (lVar40 == 0) goto LAB_035574b8;
      if ((*(int *)(lVar40 + 0x18) == 1) || (*(int *)(lVar40 + 0x18) == 0)) goto LAB_035575f4;
      fVar50 = fStack000000000000002c + 0.0 +
               (*(float *)(lVar40 + 0x20) + *(float *)(lVar40 + 0x2c)) * 0.5;
      in_stack_000000b8 =
           (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar40 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar40 + 0x30) >> 0x20)) * 0.5 + 0.0,
                            ((float)*(undefined8 *)(lVar40 + 0x24) +
                            (float)*(undefined8 *)(lVar40 + 0x30)) * 0.5 + 0.0);
      fStack00000000000000c4 = fVar50;
    }
    else {
      if (iVar12 == 0x1000) {
        if (lVar40 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar40 + 0x18) != 1) && (*(int *)(lVar40 + 0x18) != 0)) {
          uVar21 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar40 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar40 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar40 + 0x24) +
                            (float)*(undefined8 *)(lVar40 + 0x30)) * 0.5);
          fStack00000000000000c4 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar40 + 0x20) + *(float *)(lVar40 + 0x2c)) * 0.5;
          fVar50 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                          *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
          goto LAB_03554c3c;
        }
        goto LAB_035575f4;
      }
      if (iVar12 == 0x2000) {
        if (lVar40 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar40 + 0x18) == 1) || (*(int *)(lVar40 + 0x18) == 0)) goto LAB_035575f4;
        fVar50 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                       fStack0000000000000024) * 0.5;
        in_stack_000000b8 =
             (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar40 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar40 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar40 + 0x24) +
                              (float)*(undefined8 *)(lVar40 + 0x30)) * 0.5 + fVar50);
        fStack00000000000000c4 =
             fStack000000000000002c + 0.0 +
             (*(float *)(lVar40 + 0x20) + *(float *)(lVar40 + 0x2c)) * 0.5;
      }
    }
LAB_03554c4c:
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    uVar21 = FUN_03912334(unaff_x19[0xe5],0);
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar8);
    }
    uVar20 = FUN_036d35a8(uVar21,0,0);
    lVar40 = FUN_0357f060();
    if (lVar40 == 0) goto LAB_035574b8;
    FUN_036df824(lVar40,0);
    *(float *)(unaff_x19 + 0xe2) = fVar50;
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar12 = FUN_039117fc(unaff_x19[0xe5],0);
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    fVar64 = (float)FUN_03911954(unaff_x19[0xe5],0);
    uVar63 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
    }
    if (DAT_0412df1c == '\0') {
      FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
      DAT_0412df1c = '\x01';
    }
    puVar8 = OVRPlugin_Mesh_TypeInfo;
    lVar40 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if (*(int *)(lVar40 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar40 = *(long *)puVar8;
    }
    puVar26 = *(undefined4 **)(lVar40 + 0xb8);
    uVar52 = (ulong)(uint)puVar26[1];
    uVar53 = (ulong)(uint)puVar26[2];
    uVar55 = (ulong)(uint)puVar26[3];
    FUN_035683a4(*puVar26,uVar52,uVar53,uVar55,&stack0x000017b0,0x4000ffff,0);
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar40 = *in_stack_00000170;
    if (lVar40 == 0) goto LAB_035574b8;
    uVar13 = *unaff_x20;
    if ((int)uVar13 < 1) {
      fStack00000000000000d4 = 0.0;
      iVar17 = 0;
      goto LAB_03556f00;
    }
    lVar40 = *(long *)(lVar40 + 0x38);
    fVar50 = ABS(fVar50);
    fVar44 = 1.0;
    if ((uVar20 & 1) == 0) {
      fVar44 = fVar50;
    }
    if (lVar40 == 0) goto LAB_035574b8;
    bVar11 = false;
    bVar7 = false;
    _fStack0000000000000128 = 0;
    bVar10 = false;
    fStack00000000000000d4 = 0.0;
    fStack0000000000000028 = 0.0;
    fStack0000000000000158 = 0.0;
    in_stack_00000068._4_4_ = 0;
    lVar28 = 0x2e0;
    fVar46 = 0.0;
    fVar65 = 0.0;
    fStack00000000000000c8 = fStack00000000000000d8;
    fStack0000000000000104 =
         *(float *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
    fStack00000000000000d0 = fStack00000000000000dc;
    _bStack0000000000000070 = fStack00000000000000dc;
    fStack000000000000009c = fStack00000000000000dc;
    fStack00000000000000a0 = fStack00000000000000d8;
    fStack0000000000000100 = 0.0;
    in_stack_00000088._4_4_ = 0.0;
    fStack0000000000000040 = 0.0;
    fStack00000000000000a8 = 0.0;
    fStack0000000000000038 = 0.0;
    _bStack0000000000000074 = uStack00000000000000c0;
    fStack0000000000000078 = fStack00000000000000d8;
    fStack0000000000000098 = (float)uStack00000000000000c0;
    uVar14 = 1;
    uVar54 = 0;
    goto LAB_03554e78;
  }
  goto LAB_035574b8;
code_r0x0355094c:
  *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
  uVar20 = FUN_03586568();
  if (((uVar20 & 1) != 0) &&
     (in_stack_000017a8 = in_stack_0000178c, unaff_w29 = uVar13,
     *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_03550bd0;
LAB_035509d4:
  if ((unaff_x19[0x6d] == 0) || (lVar40 = *(long *)(unaff_x19[0x6d] + 0x38), lVar40 == 0))
  goto LAB_035574b8;
  uVar14 = *unaff_x20;
  if (*(uint *)(lVar40 + 0x18) <= uVar14) goto LAB_035575f4;
  lVar42 = (long)(int)uVar14;
  cVar25 = *(char *)(lVar40 + lVar42 * unaff_x24 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  lVar28 = unaff_x19[0x24];
  if ((uint)in_stack_000017c8 == uVar14) {
    uVar13 = (uint)((ulong)in_stack_000017c8 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    if (uVar13 == 0x2026) {
      *(long *)(lVar40 + lVar42 * unaff_x24 + 0x30) = unaff_x19[0xca];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar40 = *(long *)(unaff_x19[0x6d] + 0x38), lVar40 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar40 = lVar40 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar40 + 0x2c) = 0;
      *(long *)(lVar40 + 0x38) = unaff_x19[0xcb];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar40 = *(long *)(unaff_x19[0x6d] + 0x38), lVar40 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(long *)(lVar40 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
      goto LAB_035574b8;
      uVar14 = *unaff_x20;
      if (*(uint *)(lVar40 + 0x18) <= uVar14) goto LAB_035575f4;
      unaff_w23 = 1;
      *(int *)(lVar40 + (long)(int)uVar14 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      in_stack_000017c8 = CONCAT44(3,uVar14 + 1);
    }
    else if (uVar13 == 3) {
      if ((*unaff_x21 == 0) || (lVar19 = FUN_03568ac0(*unaff_x21,0), lVar19 == 0))
      goto LAB_035574b8;
      FUN_0219b634(lVar19,&stack0x00000c18,&stack0x000008a0,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
      if (*(uint *)(lVar40 + 0x18) <= uVar14) goto LAB_035575f4;
      *(ulong *)(lVar40 + lVar42 * unaff_x24 + 0x30) = CONCAT44(in_stack_000008a4,in_stack_000008a0)
      ;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar14 = *(uint *)((long)unaff_x19 + 0x494);
      unaff_w23 = 1;
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
    }
    else {
      unaff_w23 = 1;
    }
  }
  else {
    unaff_w23 = 0;
  }
  unaff_w29 = uVar13;
  if (((int)uVar14 < *(int *)((long)unaff_x19 + 0x324)) && (uVar13 != 3)) {
    if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar40 + 0x18) <= uVar14) goto LAB_035575f4;
    lVar40 = lVar40 + (long)(int)uVar14 * (long)iVar17;
    *(undefined1 *)(lVar40 + 0x194) = 0;
    *(undefined2 *)(lVar40 + 0x20) = 0x200b;
    *(undefined4 *)(lVar40 + 100) = 0;
    *unaff_x20 = uVar14 + 1;
    goto LAB_03550bd0;
  }
  iVar12 = *(int *)((long)unaff_x19 + 0x644);
  if (iVar12 == 0) {
    uVar14 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar14 >> 4 & 1) == 0) {
      if ((uVar14 >> 3 & 1) == 0) {
        fStack0000000000000158 = 1.0;
        if ((uVar14 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar20 = FUN_026b812c(uVar13,0);
          if ((uVar20 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar13 = FUN_026b8410(uVar13,0);
            uVar13 = uVar13 & 0xffff;
            fStack0000000000000158 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b8070(uVar13,0);
        fStack0000000000000158 = 1.0;
        if ((uVar20 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar13 = FUN_026b8594(uVar13,0);
          goto LAB_03550fdc;
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b812c(uVar13,0);
      fStack0000000000000158 = 1.0;
      if ((uVar20 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_026b8410(uVar13,0);
LAB_03550fdc:
        fStack0000000000000158 = 1.0;
        uVar13 = uVar13 & 0xffff;
      }
    }
    iVar12 = *(int *)((long)unaff_x19 + 0x644);
    unaff_w29 = uVar13;
    if (iVar12 != 0) goto LAB_03550c00;
LAB_03550fec:
    if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *in_stack_000000e0 = *(long *)(lVar40 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0);
    if (*in_stack_000000e0 == 0) goto LAB_03550bd0;
    if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *unaff_x21 = *(long *)(lVar40 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *in_stack_00000160 = *(long *)(lVar40 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
    goto LAB_035574b8;
    uVar14 = *unaff_x20;
    uVar13 = *(uint *)(lVar40 + 0x18);
    if (uVar13 <= uVar14) goto LAB_035575f4;
    *(undefined4 *)(unaff_x19 + 0x24) =
         *(undefined4 *)(lVar40 + (long)(int)uVar14 * unaff_x24 + 0x58);
    if (unaff_w23 == 0) {
LAB_035510fc:
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar64 = *(float *)(unaff_x19 + 0x3d);
      iVar12 = FUN_03776950(*unaff_x21 + 0x50,0);
      lVar40 = unaff_x19[0x20];
    }
    else {
      lVar28 = unaff_x19[0x8f];
      if (lVar28 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
      if ((*(int *)(lVar28 + (long)(int)in_stack_000017a8 * 0xc + 0x20) != 10) ||
         (uVar14 == *(uint *)(unaff_x19 + 0x93))) goto LAB_035510fc;
      if (uVar13 <= uVar14 - 1) goto LAB_035575f4;
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar64 = *(float *)(lVar40 + (long)(int)(uVar14 - 1) * (long)iVar17 + 0x60);
      iVar12 = FUN_03776950(*unaff_x21 + 0x50,0);
      lVar40 = *unaff_x21;
    }
    if (lVar40 == 0) goto LAB_035574b8;
    fVar65 = (float)FUN_03776960(lVar40 + 0x50,0);
    fVar44 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar44 = 1.0;
    }
    fVar60 = 0.0;
    fVar46 = 0.0;
    if ((unaff_w23 & unaff_w29 == 0x2026) == 0) {
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar46 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar60 = (float)FUN_037769c0(*unaff_x21 + 0x50,0);
    }
    lVar40 = unaff_x19[0xc9];
    if ((lVar40 == 0) || (*(long *)(lVar40 + 0x20) == 0)) goto LAB_035574b8;
    fVar45 = *(float *)((long)unaff_x19 + 0x404);
    fVar47 = *(float *)(lVar40 + 0x2c);
    fVar50 = (float)FUN_03776ea8(*(long *)(lVar40 + 0x20),0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar61 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar56 = *(float *)((long)unaff_x19 + 0x404);
    fVar48 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
    lVar40 = unaff_x19[0x6d];
    if ((lVar40 == 0) || (lVar28 = *(long *)(lVar40 + 0x38), lVar28 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
    *(undefined4 *)(lVar28 + 0x2c) = 0;
    fVar44 = ((fStack0000000000000158 * fVar64) / (float)iVar12) * fVar65 * fVar44;
    fVar50 = fVar44 * fVar45 * fVar47 * fVar50;
    *(float *)(lVar28 + 0x160) = fVar50;
    uVar13 = *(uint *)(unaff_x19 + 0x24);
    fVar48 = fVar44 * fVar61 * fVar56 * fVar48;
    if (uVar13 == 0) {
      fStack000000000000015c = *(float *)(unaff_x19 + 0xc3);
    }
    else {
      lVar28 = unaff_x19[0xe1];
      if (lVar28 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar28 = *(long *)(lVar28 + (long)(int)uVar13 * 8 + 0x20);
      if (lVar28 == 0) goto LAB_035574b8;
      fStack000000000000015c = *(float *)(lVar28 + 0x10c);
    }
LAB_035514b0:
    fVar64 = 0.0;
    if (unaff_w29 != 3 && unaff_w29 != 0xad) {
      fVar64 = fVar50;
    }
  }
  else {
    fStack0000000000000158 = 1.0;
    if (iVar12 == 0) goto LAB_03550fec;
LAB_03550c00:
    if (iVar12 == 1) {
      if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *in_stack_000000b8 = *(long *)(lVar40 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(undefined4 *)((long)unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar40 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
      if ((unaff_x19[0xd3] == 0) ||
         (lVar40 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar40 == 0))
      goto LAB_035574b8;
      FUN_02215a88(lVar40,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008a0,
                   *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar40 = CONCAT44(in_stack_000008a4,in_stack_000008a0);
      if (lVar40 == 0) goto LAB_03550bd0;
      if (unaff_w29 == 0x3c) {
        unaff_w29 = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
      }
      else {
        lVar42 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar42 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar42 = *(long *)puVar8;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(*(long *)(lVar42 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar50 = *(float *)(unaff_x19 + 0x3d);
      memmove(&stack0x00001720,(void *)(unaff_x19[0x20] + 0x50),0x60);
      iVar12 = FUN_03776950(&stack0x00001720,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      memmove(&stack0x00001720,(void *)(*unaff_x21 + 0x50),0x60);
      fVar44 = (float)FUN_03776960(&stack0x00001720,0);
      fVar64 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar64 = 1.0;
      }
      if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
      fVar64 = (fVar50 / (float)iVar12) * fVar44 * fVar64;
      iVar12 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
      fVar50 = *(float *)(unaff_x19 + 0x3d);
      if (iVar12 < 1) {
        if (*unaff_x21 == 0) goto LAB_035574b8;
        iVar12 = FUN_03776950(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar44 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        fVar60 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar60 = 1.0;
        }
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar65 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
        if (*(long *)(lVar40 + 0x20) == 0) goto LAB_035574b8;
        FUN_03776e6c(&stack0x000008a0,*(long *)(lVar40 + 0x20),0);
        fVar45 = (float)FUN_03776c9c(&stack0x00001700,0);
        if (*(long *)(lVar40 + 0x20) == 0) goto LAB_035574b8;
        fVar61 = *(float *)(lVar40 + 0x2c);
        fVar47 = (float)FUN_03776ea8(*(long *)(lVar40 + 0x20),0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar46 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar56 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar58 = *(float *)((long)unaff_x19 + 0x404);
        fVar48 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar48 = fVar64 * fVar56 * fVar58 * fVar48;
        fVar60 = (fVar50 / (float)iVar12) * fVar44 * fVar60;
        fVar50 = fVar60 * (fVar65 / fVar45) * fVar61 * fVar47;
        fVar60 = fVar60 / fVar50;
        fVar46 = fVar60 * fVar46;
        fVar64 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
        fVar60 = fVar60 * fVar64;
      }
      else {
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        iVar12 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar44 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (*(long *)(lVar40 + 0x20) == 0) goto LAB_035574b8;
        fVar60 = *(float *)(lVar40 + 0x2c);
        fVar65 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar65 = 1.0;
        }
        fVar45 = (float)FUN_03776ea8(*(long *)(lVar40 + 0x20),0);
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar46 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar47 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar61 = *(float *)((long)unaff_x19 + 0x404);
        fVar48 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar48 = fVar64 * fVar47 * fVar61 * fVar48;
        fVar50 = (fVar50 / (float)iVar12) * fVar44 * fVar65 * fVar60 * fVar45;
        fVar60 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
      }
      *in_stack_000000e0 = lVar40;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0,lVar40);
      if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar40 = lVar40 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar40 + 0x2c) = 1;
      *(float *)(lVar40 + 0x160) = fVar50;
      *(long *)(lVar40 + 0x40) = *in_stack_000000b8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(long *)(lVar40 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *unaff_x21;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar40 = *in_stack_00000170;
      if ((lVar40 == 0) || (lVar42 = *(long *)(lVar40 + 0x38), lVar42 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar42 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      fStack000000000000015c = 0.0;
      *(int *)(lVar42 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
      *(int *)(unaff_x19 + 0x24) = (int)lVar28;
      goto LAB_035514b0;
    }
    lVar40 = *in_stack_00000170;
    fVar48 = 0.0;
    fVar64 = fVar48;
    if (unaff_w29 != 3 && unaff_w29 != 0xad) {
      fVar64 = fVar50;
    }
    if (lVar40 == 0) goto LAB_035574b8;
    fVar46 = 0.0;
    fVar60 = 0.0;
  }
  lVar40 = *(long *)(lVar40 + 0x38);
  if (lVar40 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar40 = lVar40 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar40 + 0x20) = (short)unaff_w29;
  *(int *)(lVar40 + 0x60) = (int)unaff_x19[0x3d];
  *(undefined4 *)(lVar40 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if ((unaff_x19[0x6d] == 0) || (lVar40 = *(long *)(unaff_x19[0x6d] + 0x38), lVar40 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(int *)(lVar40 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
  if ((unaff_x19[0x6d] == 0) || (lVar40 = *(long *)(unaff_x19[0x6d] + 0x38), lVar40 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar40 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x6d] == 0) || (lVar40 = *(long *)(unaff_x19[0x6d] + 0x38), lVar40 == 0))
  goto LAB_035574b8;
  uVar13 = *unaff_x20;
  FUN_0209a6e0(_fStack00000000000000c8,&stack0x000008a0,
               *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
  if (*(uint *)(lVar40 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar40 = lVar40 + (long)(int)uVar13 * unaff_x24;
  *(undefined4 *)(lVar40 + 0x18c) = in_stack_000008b0;
  *(undefined8 *)(lVar40 + 0x184) = in_stack_000008a8;
  *(ulong *)(lVar40 + 0x17c) = CONCAT44(in_stack_000008a4,in_stack_000008a0);
  if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar40 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar40 = *(long *)(unaff_x19[0xc9] + 0x20), lVar40 == 0))
  goto LAB_035574b8;
  FUN_03776e6c(&stack0x00000c18,lVar40,0);
  puVar8 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  if ((int)unaff_w29 < 0x10000) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar13 = FUN_026b63d8(unaff_w29,0);
    unaff_w25 = uVar13 & 1;
  }
  else {
    unaff_w25 = 0;
  }
  in_stack_00000140 = *(float *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    _fStack0000000000000128 = (ulong)(uint)fVar46;
    fVar65 = 0.0;
    fVar44 = 0.0;
  }
  else {
    if (*in_stack_000000e0 == 0) goto LAB_035574b8;
    uVar14 = *unaff_x20;
    uVar13 = *(uint *)(*in_stack_000000e0 + 0x28);
    if ((int)uVar14 < (int)in_stack_00000088._4_4_) {
      if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar40 + 0x18) <= uVar14 + 1) goto LAB_035575f4;
      lVar40 = *(long *)(lVar40 + (long)(int)(uVar14 + 1) * (long)iVar17 + 0x30);
      if ((((lVar40 == 0) || (*unaff_x21 == 0)) ||
          (lVar28 = *(long *)(*unaff_x21 + 0x128), lVar28 == 0)) ||
         (lVar28 = *(long *)(lVar28 + 0x18), lVar28 == 0)) goto LAB_035574b8;
      in_stack_000008a0 = uVar13 | *(int *)(lVar40 + 0x28) << 0x10;
      uVar20 = FUN_0219f8b8(lVar28,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar63 = 0;
      if ((uVar20 & 1) == 0) {
        _fStack0000000000000128 = (ulong)(uint)fVar46;
        fVar65 = 0.0;
        fVar44 = 0.0;
      }
      else {
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        uVar63 = *(undefined4 *)(in_stack_000016f8 + 0x20);
        fVar44 = *(float *)(in_stack_000016f8 + 0x14);
        fVar65 = *(float *)(in_stack_000016f8 + 0x18);
        _fStack0000000000000128 = CONCAT44(*(undefined4 *)(in_stack_000016f8 + 0x1c),fVar46);
        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
          in_stack_00000140 = 0.0;
        }
      }
      uVar14 = *unaff_x20;
    }
    else {
      uVar63 = 0;
      _fStack0000000000000128 = (ulong)(uint)fVar46;
      fVar65 = 0.0;
      fVar44 = 0.0;
    }
    if (0 < (int)uVar14) {
      if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar40 + 0x18) <= uVar14 - 1) goto LAB_035575f4;
      lVar40 = *(long *)(lVar40 + (ulong)(uVar14 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar40 == 0) || (*unaff_x21 == 0)) ||
         ((lVar28 = *(long *)(*unaff_x21 + 0x128), lVar28 == 0 ||
          (lVar28 = *(long *)(lVar28 + 0x18), lVar28 == 0)))) goto LAB_035574b8;
      in_stack_000008a0 = *(uint *)(lVar40 + 0x28) | uVar13 << 0x10;
      uVar20 = FUN_0219f8b8(lVar28,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar20 & 1) != 0) {
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        uVar51 = (undefined4)(_fStack0000000000000128 >> 0x20);
        fVar44 = (float)FUN_03571cb4(fVar44,fVar65,_fStack0000000000000128 >> 0x20,uVar63,
                                     *(undefined4 *)(in_stack_000016f8 + 0x28),
                                     *(undefined4 *)(in_stack_000016f8 + 0x2c),
                                     *(undefined4 *)(in_stack_000016f8 + 0x30),
                                     *(undefined4 *)(in_stack_000016f8 + 0x34),0);
        _fStack0000000000000128 = CONCAT44(uVar51,fStack0000000000000128);
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
          in_stack_00000140 = 0.0;
        }
      }
    }
    *(float *)((long)unaff_x19 + 0x2fc) = fStack000000000000012c;
  }
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar45 = *(float *)(unaff_x19 + 200);
    fVar46 = (float)FUN_03776cb4(&stack0x00001790,0);
    fVar45 = fVar45 - fVar64 * fVar46 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar45;
    if ((unaff_w29 == 0x200b) || (unaff_w25 != 0)) {
      *(float *)(unaff_x19 + 200) =
           fVar45 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
    }
  }
  fVar46 = *(float *)(unaff_x19 + 0x56);
  in_stack_00000090 = 0.0;
  if (fVar46 != 0.0) {
    fVar45 = (float)FUN_03776c94(&stack0x00001790,0);
    fVar47 = (float)FUN_03776ca4(&stack0x00001790,0);
    in_stack_00000090 =
         (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
         (fVar46 * 0.5 - fVar64 * (fVar45 * 0.5 + fVar47));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + in_stack_00000090;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar25 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar40 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar20 = FUN_036cee6c(lVar40,0,0);
    fVar45 = 0.0;
    if ((uVar20 & 1) != 0) {
      lVar40 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar40 == 0) goto LAB_035574b8;
      uVar20 = FUN_03699d3c(lVar40,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
      fVar45 = 0.0;
      if ((uVar20 & 1) != 0) {
        lVar40 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar40 == 0) goto LAB_035574b8;
        fVar46 = (float)FUN_0369e060(lVar40,*(undefined4 *)
                                             (*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
        if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
        fVar47 = *(float *)(*unaff_x21 + 0x1b0);
        fVar45 = (float)FUN_0369e060(*in_stack_00000160,
                                     *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
        fVar45 = fVar45 * fVar46 * fVar47 * 0.25;
        if (fVar46 < fStack000000000000015c + fVar45) {
          fStack000000000000015c = fVar46 - fVar45;
        }
      }
    }
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fStack00000000000000d0 = *(float *)(*unaff_x21 + 0x1b4);
  }
  else {
    lVar40 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar20 = FUN_036cee6c(lVar40,0,0);
    fStack00000000000000d0 = 0.0;
    if ((uVar20 & 1) != 0) {
      lVar40 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar40 == 0) goto LAB_035574b8;
      uVar20 = FUN_03699d3c(lVar40,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
      if ((uVar20 & 1) != 0) {
        lVar40 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar40 == 0) goto LAB_035574b8;
        uVar20 = FUN_03699d3c(lVar40,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
        if ((uVar20 & 1) != 0) {
          lVar40 = *in_stack_00000160;
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar40 == 0) goto LAB_035574b8;
          fVar46 = (float)FUN_0369e060(lVar40,*(undefined4 *)
                                               (*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
          if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
          fVar47 = *(float *)(*unaff_x21 + 0x1a8);
          fVar45 = (float)FUN_0369e060(*in_stack_00000160,
                                       *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
          fVar45 = fVar45 * fVar46 * fVar47 * 0.25;
          if (fVar46 < fStack000000000000015c + fVar45) {
            fStack000000000000015c = fVar46 - fVar45;
          }
          goto FUN_03551b84;
        }
      }
    }
    fVar45 = 0.0;
  }
FUN_03551b84:
  fVar46 = *(float *)(unaff_x19 + 200);
  fVar47 = (float)FUN_03776ca4(&stack0x00001790,0);
  fVar46 = fVar46 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar64 * (fVar44 + ((fVar47 - fStack000000000000015c) - fVar45));
  fVar44 = (float)FUN_03776cac(&stack0x00001790,0);
  fVar61 = *(float *)((long)unaff_x19 + 0x61c) +
           ((fVar48 + fVar64 * (fVar65 + fStack000000000000015c + fVar44)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar44 = (float)FUN_03776c9c(&stack0x00001790,0);
  fVar44 = fVar61 - fVar64 * (fStack000000000000015c + fStack000000000000015c + fVar44);
  fVar65 = (float)FUN_03776c94(&stack0x00001790,0);
  fVar47 = fVar46 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar64 * (fVar45 + fVar45 +
                             fStack000000000000015c + fStack000000000000015c + fVar65);
  fStack0000000000000104 = fVar46;
  fVar65 = fVar47;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar25 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar58 = (float)(int)unaff_x19[0xbe] * fStack000000000000005c;
    fVar65 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar57 = fVar58 * fVar64 * (fVar45 + fStack000000000000015c + fVar65);
    fVar65 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar56 = (float)FUN_03776c9c(&stack0x00001790,0);
    fVar61 = fVar61 + 0.0;
    fVar44 = fVar44 + 0.0;
    fVar58 = fVar58 * fVar64 * (((fVar65 - fVar56) - fStack000000000000015c) - fVar45);
    fVar56 = fVar46 + fVar57;
    fVar65 = fVar47 + fVar58;
    fVar49 = (fVar57 - fVar58) * 0.5;
    fVar46 = (fVar46 + fVar58) - fVar49;
    fVar47 = (fVar47 + fVar57) - fVar49;
    fStack0000000000000104 = fVar56 - fVar49;
    fVar65 = fVar65 - fVar49;
  }
  _fStack0000000000000150 = (ulong)(uint)fVar64;
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fStack0000000000000114 = 0.0;
    fVar49 = 0.0;
    fVar57 = 0.0;
    fStack0000000000000100 = 0.0;
    fVar58 = fVar44;
    fVar56 = fVar61;
  }
  else {
    thunk_FUN_036bc400(_fStack0000000000000078,0);
    fVar59 = (fVar47 + fVar46) * 0.5;
    fVar62 = (fVar44 + fVar61) * 0.5;
    fVar61 = fVar61 - fVar62;
    fStack0000000000000100 = 0.0;
    fVar56 = fVar61;
    fStack0000000000000104 =
         (float)FUN_036bdd2c(fStack0000000000000104 - fVar59,_fStack0000000000000078,0);
    fStack0000000000000104 = fVar59 + fStack0000000000000104;
    fStack0000000000000100 = fStack0000000000000100 + 0.0;
    fVar58 = fVar44 - fVar62;
    fStack0000000000000114 = 0.0;
    fVar44 = fVar58;
    fVar46 = (float)FUN_036bdd2c(fVar46 - fVar59,_fStack0000000000000078,0);
    fVar46 = fVar59 + fVar46;
    fStack0000000000000114 = fStack0000000000000114 + 0.0;
    fVar44 = fVar62 + fVar44;
    fVar57 = 0.0;
    fVar47 = (float)FUN_036bdd2c(fVar47 - fVar59,_fStack0000000000000078,0);
    fVar47 = fVar59 + fVar47;
    fVar61 = fVar62 + fVar61;
    fVar57 = fVar57 + 0.0;
    fVar49 = 0.0;
    fVar65 = (float)FUN_036bdd2c(fVar65 - fVar59,_fStack0000000000000078,0);
    fVar65 = fVar59 + fVar65;
    fVar49 = fVar49 + 0.0;
    fVar58 = fVar62 + fVar58;
    fVar56 = fVar62 + fVar56;
  }
  if (*in_stack_00000170 == 0) goto LAB_035574b8;
  lVar40 = *(long *)(*in_stack_00000170 + 0x38);
  unaff_d13 = (ulong)(uint)fVar64;
  if (lVar40 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar40 = lVar40 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar40 + 0x11c) = fVar46;
  *(float *)(lVar40 + 0x120) = fVar44;
  *(float *)(lVar40 + 0x124) = fStack0000000000000114;
  if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar40 = lVar40 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar40 + 0x114) = fVar56;
  *(float *)(lVar40 + 0x110) = fStack0000000000000104;
  *(float *)(lVar40 + 0x118) = fStack0000000000000100;
  if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar40 = lVar40 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar40 + 0x128) = fVar47;
  *(float *)(lVar40 + 300) = fVar61;
  *(float *)(lVar40 + 0x130) = fVar57;
  if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar40 = lVar40 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar40 + 0x134) = fVar65;
  *(float *)(lVar40 + 0x138) = fVar58;
  *(float *)(lVar40 + 0x13c) = fVar49;
  if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
  goto LAB_035574b8;
  uVar13 = *unaff_x20;
  unaff_x26 = (long)(int)uVar13;
  if (*(uint *)(lVar40 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar28 = lVar40 + unaff_x26 * unaff_x24;
  *(int *)(lVar28 + 0x140) = (int)unaff_x19[200];
  fVar61 = *(float *)(unaff_x19 + 0x9b);
  param_2 = (ulong)(uint)fVar61;
  fVar65 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar28 + 0x15c) = (fVar47 - fVar46) / (fVar56 - fVar44);
  *(float *)(lVar28 + 0x14c) = (fVar48 - fVar61) + fVar65;
  fVar44 = fStack0000000000000128 * fVar64;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar44 = fVar44 / fStack0000000000000158;
    fVar60 = (fVar60 * fVar64) / fStack0000000000000158;
  }
  else {
    fVar60 = fVar60 * fVar64;
  }
  unaff_w22 = *(uint *)(unaff_x19 + 0x93);
  if ((unaff_w25 == 0) || (uVar13 == unaff_w22)) {
    fVar60 = fVar65 + fVar60;
    fVar44 = fVar65 + fVar44;
    fVar47 = fVar60;
    fVar46 = fVar44;
    if (fVar65 != 0.0) {
      fVar46 = (fVar44 - fVar65) / *(float *)((long)unaff_x19 + 0x404);
      fVar47 = (fVar60 - fVar65) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar46 <= fVar44) {
        fVar46 = fVar44;
      }
      if (fVar60 <= fVar47) {
        fVar47 = fVar60;
      }
    }
    lVar40 = lVar40 + unaff_x26 * unaff_x24;
    fVar65 = fVar46;
    if (fVar46 <= *(float *)(unaff_x19 + 0x99)) {
      fVar65 = *(float *)(unaff_x19 + 0x99);
    }
    fVar48 = fVar47;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar47) {
      fVar48 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar48;
    *(float *)(unaff_x19 + 0x99) = fVar65;
    *(float *)(lVar40 + 0x154) = fVar46;
    *(float *)(lVar40 + 0x158) = fVar47;
    *(float *)(lVar40 + 0x148) = fVar44 - fVar61;
    *(float *)(unaff_x19 + 0x98) = fVar44 - fVar61;
    *(float *)(lVar40 + 0x150) = fVar60 - fVar61;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar60 - fVar61;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar65;
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar65 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar46 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
      fStack0000000000000158 = (fVar64 * fVar46) / fStack0000000000000158;
      param_2 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar65 <= fStack0000000000000158) {
        fVar65 = fStack0000000000000158;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar65;
    }
    if ((float)param_2 == 0.0) {
      fVar65 = *(float *)(in_stack_00000080 + 0x208);
      if (*(float *)(in_stack_00000080 + 0x208) <= fVar44) {
        fVar65 = fVar44;
      }
      *(float *)(in_stack_00000080 + 0x208) = fVar65;
    }
  }
  else {
    fVar44 = *(float *)(unaff_x19 + 0x99);
    lVar40 = lVar40 + unaff_x26 * unaff_x24;
    *(float *)(lVar40 + 0x154) = fVar44;
    fVar65 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar44 = fVar44 - fVar61;
    *(float *)(lVar40 + 0x148) = fVar44;
    *(float *)(lVar40 + 0x158) = fVar65;
    *(float *)(unaff_x19 + 0x98) = fVar44;
    fVar65 = fVar65 - fVar61;
    *(float *)(lVar40 + 0x150) = fVar65;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar65;
  }
  lVar40 = *in_stack_00000170;
  if ((lVar40 == 0) || (lVar28 = *(long *)(lVar40 + 0x38), lVar28 == 0)) goto LAB_035574b8;
  unaff_w27 = *unaff_x20;
  if (*(uint *)(lVar28 + 0x18) <= unaff_w27) goto LAB_035575f4;
  lVar28 = lVar28 + (long)(int)unaff_w27 * unaff_x24;
  *(undefined1 *)(lVar28 + 0x194) = 0;
  unaff_w28 = *(uint *)(unaff_x19 + 0x4f) & 0x18;
  in_stack_000017dc = unaff_w29;
  if ((unaff_w29 == 9) ||
     (((((unaff_w25 == 0 && (unaff_w29 != 3)) && (unaff_w29 != 0x200b)) && (unaff_w29 != 0xad)) ||
      (((unaff_w29 == 0xad & (bStack0000000000000074 ^ 0xff)) != 0 ||
       (*(int *)((long)unaff_x19 + 0x644) == 1)))))) {
    *(undefined1 *)(lVar28 + 0x194) = 1;
    pfVar29 = _fStack00000000000000a0;
    pfVar31 = _fStack00000000000000a8;
    if (unaff_w23 != 0) {
      lVar40 = *(long *)(lVar40 + 0x50);
      if (lVar40 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar40 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar40 = lVar40 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar31 = (float *)(lVar40 + 0x60);
      pfVar29 = (float *)(lVar40 + 100);
    }
    fVar65 = *pfVar31;
    fVar46 = *pfVar29;
    fVar44 = *(float *)(unaff_x19 + 0x6c);
    fVar60 = *(float *)(unaff_x19 + 200);
    in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar65) - fVar46;
    bVar10 = true;
    if ((fVar44 <= in_stack_000000f8._4_4_) && (bVar10 = false, !NAN(fVar44))) {
      bVar10 = fVar44 == -1.0;
    }
    if (!bVar10) {
      in_stack_000000f8._4_4_ = fVar44;
    }
    fVar44 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar44 = (float)FUN_03776cb4(&stack0x00001790,0);
      param_2 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    }
    fVar47 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar61 = *(float *)((long)unaff_x19 + 0x4cc);
    if (unaff_w29 != 0xad) {
      fVar50 = fVar64;
    }
    fVar48 = (float)param_2;
    fVar64 = 0.0;
    if ((0.0 < fVar48) && (fVar64 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar64 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    unaff_w27 = *unaff_x20;
    fVar64 = (*(float *)(unaff_x19 + 0x97) - (fVar61 - fVar48)) + fVar64;
    if (fStack00000000000000c4 < fVar64) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = unaff_w27;
      }
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      uVar21 = DAT_00d37868;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar56 = *(float *)(unaff_x19 + 0x59);
        if (((fVar56 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar48)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar50 = *(float *)((long)unaff_x19 + 700) +
                   ((in_stack_00000018._4_4_ - fVar64) / (float)(int)unaff_x19[0x95]) /
                   fStack0000000000000058;
          if (fVar50 <= fVar56) {
            fVar50 = fVar56;
          }
          goto LAB_03554b48;
        }
        fVar48 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar64 = *(float *)(unaff_x19 + 0x4a);
        param_2 = (ulong)(uint)fVar64;
        if ((fVar64 < fVar48) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar50 = (fVar48 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar50 <= DAT_00d38b84) {
            fVar50 = DAT_00d38b84;
          }
          fVar44 = (fVar48 - fVar50) * 20.0 + 0.5;
          *(float *)((long)unaff_x19 + 0x23c) = fVar48;
          fVar50 = DAT_00d38e60;
          if (fVar44 != INFINITY) {
            fVar50 = (float)(int)fVar44 / 20.0;
          }
          if (fVar50 <= fVar64) {
            fVar50 = fVar64;
          }
          goto LAB_03554658;
        }
      }
      switch((int)unaff_x19[0x5c]) {
      case 1:
        lVar40 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar40 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar40 = *(long *)puVar8;
        }
        lVar28 = *(long *)(lVar40 + 0xb8);
        lVar40 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar40 + 0x135) & 1) == 0) {
          lVar40 = FUN_01a46ff8(lVar40);
        }
        piVar22 = (int *)thunk_FUN_01a59484(lVar28 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar40 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar22 == 0) goto LAB_03554580;
        lVar40 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar40 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar40 = *(long *)puVar8;
        }
        FUN_0209b778(*(long *)(lVar40 + 0xb8) + 0x11f0,&stack0x000008a0,
                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
        memcpy(&stack0x00001380,&stack0x000008a0,0x378);
        break;
      default:
        goto UnityEngine_AnimationClip__set_wrapMode;
      case 3:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        goto LAB_03552550;
      case 5:
        if ((unaff_w27 == 0) || ((int)in_stack_000017a8 < 0)) {
          in_stack_000017a8 = 0xffffffff;
          *unaff_x20 = 0;
          in_stack_000017c8 = uVar21;
        }
        else {
          fVar50 = *(float *)(unaff_x19 + 0x99);
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017a8 = FUN_0358c15c();
          if (fStack00000000000000c4 < fVar50 - fVar61)
          goto UnityEngine_AnimationClip__get_hasMotionCurves;
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          param_2 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar40 = NEON_rev64(param_2,4);
          unaff_x19[0x99] = lVar40;
          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
          *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
        }
        goto LAB_03550bd0;
      case 6:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar40 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar20 = FUN_036cee6c(lVar40,0,0);
        if ((uVar20 & 1) != 0) {
          plVar41 = (long *)unaff_x19[0x5d];
          uVar21 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x528))(plVar41,uVar21,*(undefined8 *)(*plVar41 + 0x530));
          lVar40 = unaff_x19[0x5d];
          if (lVar40 == 0) goto LAB_035574b8;
          *(int *)(lVar40 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar40,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar41 = (long *)unaff_x19[0x5d];
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x7a8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
        goto UnityEngine_AnimationClip__get_hasMotionCurves;
      }
LAB_035529dc:
      iVar12 = FUN_0358c15c();
LAB_035529e8:
      iVar15 = *(int *)((long)unaff_x19 + 0x494) + -1;
      *(int *)((long)unaff_x19 + 0x494) = iVar15;
      in_stack_00000168._4_4_ = in_stack_00000168._4_4_ + 1;
      in_stack_000017a8 = iVar12 - 1;
      in_stack_000017c8 = CONCAT44(0x2026,iVar15);
      goto LAB_03550bd0;
    }
UnityEngine_AnimationClip__set_wrapMode:
    puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar64 = ABS(fVar60) + fVar44 * (1.0 - fVar47) * fVar50;
    fVar50 = 1.0;
    if (unaff_w28 != 0) {
      fVar50 = DAT_00d38acc;
    }
    fVar44 = fVar50 * in_stack_000000f8._4_4_;
    if (fVar44 < fVar64) {
      param_2 = (ulong)(uint)fVar45;
      if (((char)unaff_x19[0x5b] != '\0') && (unaff_w27 != *(uint *)(unaff_x19 + 0x93))) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
          lVar40 = *in_stack_00000170;
          if ((lVar40 == 0) || (lVar28 = *(long *)(lVar40 + 0x38), lVar28 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
          fVar44 = *(float *)(unaff_x19 + 0x9b);
          fVar60 = 0.0;
          if ((0.0 < fVar44) && (fVar60 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
            fVar60 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
          }
          fVar60 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                   *(float *)(lVar28 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                   (fVar60 - *(float *)((long)unaff_x19 + 0x4cc)) +
                   fStack0000000000000058 *
                   (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700));
        }
        else {
          lVar40 = unaff_x19[0x6d];
          *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
          if (lVar40 == 0) goto LAB_035574b8;
          fVar44 = *(float *)(unaff_x19 + 0x9b);
          fVar60 = *(float *)(unaff_x19 + 0x58) +
                   fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
        }
        puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar40 = *(long *)(lVar40 + 0x38);
        if (lVar40 == 0) goto LAB_035574b8;
        uVar14 = *(uint *)((long)unaff_x19 + 0x494);
        if ((*(uint *)(lVar40 + 0x18) <= uVar14) ||
           (uVar54 = uVar14 - 1, *(uint *)(lVar40 + 0x18) <= uVar54)) goto LAB_035575f4;
        param_2 = (ulong)(uint)(fVar60 + *(float *)(unaff_x19 + 0x97));
        fVar60 = (fVar60 + *(float *)(unaff_x19 + 0x97) + fVar44) -
                 *(float *)(lVar40 + (long)(int)uVar14 * unaff_x24 + 0x158);
        if (((bStack0000000000000074 & 1) == 0 &&
             *(short *)(lVar40 + (long)(int)uVar54 * (long)iVar17 + 0x20) == 0xad) &&
           ((fVar60 < fStack00000000000000c4 || ((int)unaff_x19[0x5c] == 0)))) {
          bStack0000000000000074 = 0;
          *unaff_x20 = uVar54;
          in_stack_000017a8 = in_stack_000017a8 - 1;
          in_stack_000017c8 = CONCAT44(0x2d,uVar54);
          goto LAB_03550bd0;
        }
        if (*(short *)(lVar40 + (long)(int)uVar14 * unaff_x24 + 0x20) == 0xad) {
          bStack0000000000000074 = 1;
          goto LAB_03550bd0;
        }
        if ((bStack0000000000000070 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
          fVar47 = *(float *)((long)unaff_x19 + 0x2d4);
          fVar44 = *(float *)(unaff_x19 + 0x5a) / 100.0;
          if ((fVar44 <= fVar47) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
            fVar47 = *(float *)((long)unaff_x19 + 0x1e4);
            param_2 = (ulong)(uint)fVar47;
            fVar44 = *(float *)(unaff_x19 + 0x4a);
            if ((fVar47 <= fVar44) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
            goto LAB_03552d44;
LAB_03557594:
            fVar50 = (fVar47 - *(float *)(unaff_x19 + 0x48)) * 0.5;
            if (fVar50 <= DAT_00d38b84) {
              fVar50 = DAT_00d38b84;
            }
            *(float *)((long)unaff_x19 + 0x23c) = fVar47;
            fVar47 = fVar47 - fVar50;
LAB_03557524:
            fVar64 = fVar47 * 20.0 + 0.5;
            fVar50 = DAT_00d38e60;
            if (fVar64 != INFINITY) {
              fVar50 = (float)(int)fVar64 / 20.0;
            }
            if (fVar50 <= fVar44) {
              fVar50 = fVar44;
            }
LAB_03554658:
            *(float *)((long)unaff_x19 + 0x1e4) = fVar50;
            return;
          }
LAB_03557558:
          fVar65 = fVar64;
          if (0.0 < fVar47) {
            fVar65 = fVar64 / (1.0 - fVar47);
          }
          fVar47 = fVar47 + (fVar64 - fVar50 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar65;
LAB_035574e8:
          if (fVar44 <= fVar47) {
            fVar47 = fVar44;
          }
          *(float *)((long)unaff_x19 + 0x2d4) = fVar47;
          return;
        }
LAB_03552d44:
        lVar40 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar40 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar40 = *(long *)puVar8;
        }
        iVar12 = *(int *)(*(long *)(lVar40 + 0xb8) + 0xe78);
        if (((iVar12 != iStack0000000000000034) && (iVar12 != -1)) &&
           (((bStack0000000000000070 ^ 1) & 1) == 0)) {
          if (*(int *)(lVar40 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017a8 = FUN_0358c15c();
          if ((unaff_x19[0x6d] == 0) || (lVar40 = *(long *)(unaff_x19[0x6d] + 0x38), lVar40 == 0))
          goto LAB_035574b8;
          uVar14 = *unaff_x20 - 1;
          if (*(uint *)(lVar40 + 0x18) <= uVar14) goto LAB_035575f4;
          iStack0000000000000034 = iVar12;
          if (*(short *)(lVar40 + (long)(int)uVar14 * (long)iVar17 + 0x20) == 0xad) {
            bStack0000000000000074 = 0;
            *unaff_x20 = uVar14;
            in_stack_000017a8 = in_stack_000017a8 - 1;
            in_stack_000017c8 = CONCAT44(0x2d,uVar14);
            goto LAB_03550bd0;
          }
        }
        if (fVar60 <= fStack00000000000000c4) {
switchD_03552ef4_caseD_0:
          param_2 = unaff_d13;
          FUN_0358cbd4(fStack0000000000000058,unaff_d13,fStack00000000000000d4,
                       *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                       in_stack_00000140,in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
LAB_03552f38:
          bStack0000000000000070 = 1;
          bStack0000000000000074 = 0;
          in_stack_00000068._4_4_ = 1;
          goto LAB_03550bd0;
        }
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
        }
        fVar44 = fStack00000000000000c4;
        if ((char)unaff_x19[0x47] != '\0') {
          fVar44 = *(float *)(unaff_x19 + 0x59);
          if ((fVar44 < *(float *)((long)unaff_x19 + 700)) &&
             (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
            fVar50 = *(float *)((long)unaff_x19 + 700) +
                     ((in_stack_00000018._4_4_ - fVar60) / (float)((int)unaff_x19[0x95] + 1)) /
                     fStack0000000000000058;
            if (fVar50 <= fVar44) {
              fVar50 = fVar44;
            }
LAB_03554b48:
            *(float *)((long)unaff_x19 + 700) = fVar50;
            return;
          }
          fVar47 = *(float *)((long)unaff_x19 + 0x2d4);
          fVar44 = *(float *)(unaff_x19 + 0x5a) / 100.0;
          if ((fVar47 < fVar44) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
          goto LAB_03557558;
          fVar47 = *(float *)((long)unaff_x19 + 0x1e4);
          param_2 = (ulong)(uint)fVar47;
          fVar44 = *(float *)(unaff_x19 + 0x4a);
          if ((fVar44 < fVar47) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
          goto LAB_03557594;
        }
        switch((int)unaff_x19[0x5c]) {
        case 0:
        case 2:
        case 4:
          goto switchD_03552ef4_caseD_0;
        case 1:
          lVar40 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar40 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar40 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          }
          lVar28 = *(long *)(lVar40 + 0xb8);
          lVar40 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
          if ((*(byte *)(lVar40 + 0x135) & 1) == 0) {
            lVar40 = FUN_01a46ff8(lVar40);
          }
          piVar22 = (int *)thunk_FUN_01a59484(lVar28 + 0x11f0,
                                              *(long *)(*(long *)(*(long *)(lVar40 + 0xc0) + 8) +
                                                       0x80) + 0xa0);
          if (*piVar22 == 0) {
            bStack0000000000000074 = 0;
LAB_03554580:
            in_stack_000017c8 = DAT_00d37868;
            unaff_x20[0] = 0;
            unaff_x20[1] = 0;
            in_stack_000017a8 = 0xffffffff;
            goto LAB_03550bd0;
          }
          lVar40 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar40 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar40 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          }
          FUN_0209b778(*(long *)(lVar40 + 0xb8) + 0x11f0,&stack0x000008a0,
                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
          memcpy(&stack0x00001008,&stack0x000008a0,0x378);
          iVar12 = FUN_0358c15c();
          bStack0000000000000074 = 0;
          goto LAB_035529e8;
        case 3:
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017a8 = FUN_0358c15c();
          bStack0000000000000074 = 0;
          goto UnityEngine_AnimationClip__get_hasMotionCurves;
        case 5:
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          param_2 = unaff_d13;
          FUN_0358cbd4(fStack0000000000000058,unaff_d13,fStack00000000000000d4,
                       *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                       in_stack_00000140,in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
          *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
          goto LAB_03552f38;
        case 6:
          lVar40 = unaff_x19[0x5d];
          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar20 = FUN_036cee6c(lVar40,0,0);
          if ((uVar20 & 1) != 0) {
            plVar41 = (long *)unaff_x19[0x5d];
            uVar21 = (**(code **)(*unaff_x19 + 0x518))();
            if (plVar41 == (long *)0x0) goto LAB_035574b8;
            (**(code **)(*plVar41 + 0x528))(plVar41,uVar21,*(undefined8 *)(*plVar41 + 0x530));
            lVar40 = unaff_x19[0x5d];
            if (lVar40 == 0) goto LAB_035574b8;
            *(int *)(lVar40 + 0x400) = (int)unaff_x19[0x80];
            FUN_0357ee30(lVar40,*(undefined4 *)((long)unaff_x19 + 0x494),0);
            plVar41 = (long *)unaff_x19[0x5d];
            if (plVar41 == (long *)0x0) goto LAB_035574b8;
            (**(code **)(*plVar41 + 0x7a8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7b0));
            *(undefined1 *)(unaff_x19 + 0x5f) = 1;
          }
          bStack0000000000000074 = 0;
LAB_03552b00:
          in_stack_000017c8 = CONCAT44(3,*unaff_x20);
          goto LAB_03550bd0;
        default:
          bStack0000000000000074 = 0;
          goto LAB_03552f54;
        }
      }
      if (((char)unaff_x19[0x47] != '\0') &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar44 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if (fVar47 < fVar44) {
          fVar65 = fVar64 / (1.0 - fVar47);
          if (fVar47 <= 0.0) {
            fVar65 = fVar64;
          }
          fVar47 = fVar47 + (fVar64 - fVar50 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar65;
          goto LAB_035574e8;
        }
        fVar47 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar44 = *(float *)(unaff_x19 + 0x4a);
        if (fVar44 < fVar47) {
          fVar50 = (fVar47 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar50 <= DAT_00d38b84) {
            fVar50 = DAT_00d38b84;
          }
          *(float *)((long)unaff_x19 + 0x23c) = fVar47;
          fVar47 = fVar47 - fVar50;
          goto LAB_03557524;
        }
      }
      iVar12 = (int)unaff_x19[0x5c];
      if (iVar12 == 1) {
        lVar40 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar40 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar40 = *(long *)puVar8;
        }
        lVar28 = *(long *)(lVar40 + 0xb8);
        lVar40 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar40 + 0x135) & 1) == 0) {
          lVar40 = FUN_01a46ff8(lVar40);
        }
        piVar22 = (int *)thunk_FUN_01a59484(lVar28 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar40 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar22 == 0) goto LAB_03554580;
        lVar40 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar40 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar40 = *(long *)puVar8;
        }
        FUN_0209b778(*(long *)(lVar40 + 0xb8) + 0x11f0,&stack0x000008a0,
                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
        memcpy(&stack0x00000c90,&stack0x000008a0,0x378);
        goto LAB_035529dc;
      }
      if (iVar12 == 6) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar40 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar20 = FUN_036cee6c(lVar40,0,0);
        if ((uVar20 & 1) != 0) {
          plVar41 = (long *)unaff_x19[0x5d];
          uVar21 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x528))(plVar41,uVar21,*(undefined8 *)(*plVar41 + 0x530));
          lVar40 = unaff_x19[0x5d];
          if (lVar40 == 0) goto LAB_035574b8;
          *(int *)(lVar40 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar40,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar41 = (long *)unaff_x19[0x5d];
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x7a8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
        goto LAB_03552b00;
      }
      if (iVar12 == 3) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
LAB_03552550:
        in_stack_000017a8 = FUN_0358c15c();
        goto UnityEngine_AnimationClip__get_hasMotionCurves;
      }
    }
LAB_03552f54:
    if (unaff_w29 == 0xad) {
      if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(undefined1 *)(lVar40 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
    }
    else {
      if (unaff_w29 == 9) {
        lVar40 = *in_stack_00000170;
        if ((lVar40 == 0) || (lVar28 = *(long *)(lVar40 + 0x38), lVar28 == 0)) goto LAB_035574b8;
        uVar14 = *unaff_x20;
        if (*(uint *)(lVar28 + 0x18) <= uVar14) goto LAB_035575f4;
        *(undefined1 *)(lVar28 + (long)(int)uVar14 * unaff_x24 + 0x194) = 0;
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar14;
        lVar28 = *(long *)(lVar40 + 0x50);
        if (lVar28 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar28 + 0x2c) = *(int *)(lVar28 + 0x2c) + 1;
        goto LAB_03552fcc;
      }
      if (*(int *)((long)unaff_x19 + 0x644) == 1) {
        (**(code **)(*unaff_x19 + 0x898))(fVar44,fVar45);
      }
      else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
        (**(code **)(*unaff_x19 + 0x888))(fStack000000000000015c);
      }
      uVar14 = *unaff_x20;
      if ((in_stack_00000068._4_4_ & 1) != 0) {
        *(uint *)(in_stack_00000080 + 0x1f0) = uVar14;
      }
      *(uint *)((long)unaff_x19 + 0x4a4) = uVar14;
      *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
      if ((unaff_x19[0x6d] == 0) || (lVar40 = *(long *)(unaff_x19[0x6d] + 0x50), lVar40 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar40 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar40 = lVar40 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      in_stack_00000068._4_4_ = 0;
      *(float *)(lVar40 + 0x60) = fVar65;
      *(float *)(lVar40 + 100) = fVar46;
    }
  }
  else {
    if (((unaff_w29 & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      param_1 = 0.0;
      fVar50 = 0.0;
      if ((float)param_2 <= 0.0) goto LAB_035520bc;
      goto code_r0x035520a8;
    }
LAB_03552724:
    if ((((unaff_w29 - 0x2007 < 0x23) &&
         ((1L << ((ulong)(unaff_w29 - 0x2007) & 0x3f) & 0x600000001U) != 0)) || (unaff_w29 - 10 < 2)
        ) || (unaff_w29 == 0xa0)) {
LAB_03552b54:
      if (((unaff_w29 != 0xad) && (unaff_w29 != 0x200b)) && (unaff_w29 != 0x2060)) {
        lVar40 = *in_stack_00000170;
        if ((lVar40 == 0) || (lVar28 = *(long *)(lVar40 + 0x50), lVar28 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar28 + 0x2c) = *(int *)(lVar28 + 0x2c) + 1;
        *(int *)(lVar40 + 0x20) = *(int *)(lVar40 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b97f8(unaff_w29,0);
      unaff_w29 = in_stack_000017dc;
      if ((uVar20 & 1) != 0) goto LAB_03552b54;
    }
    if (in_stack_000017dc == 0xa0) {
      if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x50), lVar40 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar40 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar40 = lVar40 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      unaff_w29 = in_stack_000017dc;
LAB_03552fcc:
      *(int *)(lVar40 + 0x20) = *(int *)(lVar40 + 0x20) + 1;
      in_stack_000017dc = unaff_w29;
    }
  }
  if (((int)unaff_x19[0x5c] == 1) && ((in_stack_000017dc == 0x2d || (unaff_w23 != 1)))) {
    if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
    fVar50 = *(float *)(unaff_x19 + 0x3d);
    iVar12 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
    if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
    fVar44 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
    lVar40 = unaff_x19[0xca];
    fVar64 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar64 = 1.0;
    }
    if ((lVar40 == 0) || (*(long *)(lVar40 + 0x20) == 0)) goto LAB_035574b8;
    fVar46 = *(float *)((long)unaff_x19 + 0x404);
    fVar45 = *(float *)(lVar40 + 0x2c);
    fVar65 = (float)FUN_03776ea8(*(long *)(lVar40 + 0x20),0);
    fVar60 = *_fStack00000000000000a8;
    fVar65 = fVar46 * (fVar50 / (float)iVar12) * fVar44 * fVar64 * fVar45 * fVar65;
    fVar50 = *_fStack00000000000000a0;
    if ((in_stack_000017dc == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
      if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
      goto LAB_035574b8;
      uVar14 = *(int *)((long)unaff_x19 + 0x494) - 1;
      if (*(uint *)(lVar40 + 0x18) <= uVar14) goto LAB_035575f4;
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar64 = *(float *)(lVar40 + (long)(int)uVar14 * (long)iVar17 + 0x60);
      iVar12 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar46 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
      lVar40 = unaff_x19[0xca];
      fVar44 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar44 = 1.0;
      }
      if ((lVar40 == 0) || (*(long *)(lVar40 + 0x20) == 0)) goto LAB_035574b8;
      fVar45 = *(float *)((long)unaff_x19 + 0x404);
      fVar47 = *(float *)(lVar40 + 0x2c);
      fVar65 = (float)FUN_03776ea8(*(long *)(lVar40 + 0x20),0);
      if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x50), lVar40 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar40 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar40 = lVar40 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      fVar60 = *(float *)(lVar40 + 0x60);
      fVar50 = *(float *)(lVar40 + 100);
      fVar65 = fVar45 * (fVar64 / (float)iVar12) * fVar46 * fVar44 * fVar47 * fVar65;
    }
    fVar46 = *(float *)(unaff_x19 + 0x9b);
    fVar64 = 0.0;
    fVar44 = 0.0;
    if ((0.0 < fVar46) && (fVar44 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar44 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    fVar47 = *(float *)(unaff_x19 + 0x97);
    fVar61 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar45 = *(float *)(unaff_x19 + 200);
    if ((char)unaff_x19[0x1e] == '\0') {
      if ((unaff_x19[0xca] == 0) || (lVar40 = *(long *)(unaff_x19[0xca] + 0x20), lVar40 == 0))
      goto LAB_035574b8;
      FUN_03776e6c(&stack0x000008a0,lVar40,0);
      fVar64 = (float)FUN_03776cb4(&stack0x00001700,0);
    }
    puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar48 = *(float *)(unaff_x19 + 0x6c);
    fVar50 = (fStack000000000000009c - fVar60) - fVar50;
    bVar10 = true;
    if ((fVar48 <= fVar50) && (bVar10 = false, !NAN(fVar48))) {
      bVar10 = fVar48 == -1.0;
    }
    if (!bVar10) {
      fVar50 = fVar48;
    }
    fVar60 = 1.0;
    if (unaff_w28 != 0) {
      fVar60 = DAT_00d38acc;
    }
    if (((fVar47 - (fVar61 - fVar46)) + fVar44 < fStack00000000000000c4) &&
       (ABS(fVar45) + fVar65 * fVar64 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
        fVar60 * fVar50)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
      lVar40 = *(long *)(*(long *)puVar8 + 0xb8);
      memcpy(&stack0x00000528,(void *)(lVar40 + 0x788),0x378);
      FUN_0209b210(lVar40 + 0x11f0,&stack0x00000528,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
    }
  }
  lVar40 = *in_stack_00000170;
  if (lVar40 == 0) goto LAB_035574b8;
  lVar28 = *(long *)(lVar40 + 0x38);
  unaff_d13 = _fStack0000000000000150 & 0xffffffff;
  if (lVar28 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  uVar14 = *(uint *)(unaff_x19 + 0x95);
  lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
  *(uint *)(lVar28 + 100) = uVar14;
  *(int *)(lVar28 + 0x68) = (int)unaff_x19[0x96];
  if (((unaff_w23 & 1) == 0) &&
     ((0xd < in_stack_000017dc || ((1 << (ulong)(in_stack_000017dc & 0x1f) & 0x2c00U) == 0)))) {
    lVar40 = *(long *)(lVar40 + 0x50);
    if (lVar40 == 0) goto LAB_035574b8;
LAB_0355346c:
    if (*(uint *)(lVar40 + 0x18) <= uVar14) goto LAB_035575f4;
    *(int *)(lVar40 + (long)(int)uVar14 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
  }
  else {
    lVar40 = *(long *)(lVar40 + 0x50);
    if (lVar40 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar40 + 0x18) <= uVar14) goto LAB_035575f4;
    if (*(int *)(lVar40 + (long)(int)uVar14 * 0x5c + 0x24) == 1) goto LAB_0355346c;
  }
  if (in_stack_000017dc == 9) {
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar50 = (float)FUN_03776a48(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar44 = *(float *)(unaff_x19 + 200);
    fVar64 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x21 + 0x1b9));
    fVar50 = fStack0000000000000150 * fVar50 * fVar64;
    fVar64 = fVar50 * (float)(int)(fVar44 / fVar50);
    param_2 = (ulong)(uint)fVar64;
    if (fVar64 <= fVar44) {
      fVar64 = fVar44 + fVar50;
    }
LAB_03553678:
    *(float *)(unaff_x19 + 200) = fVar64;
  }
  else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
    if ((char)unaff_x19[0x1e] == '\0') {
      if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
        fVar44 = 1.0;
      }
      else {
        fVar44 = (float)thunk_FUN_036bc400(_fStack0000000000000078,0);
      }
      fVar64 = *(float *)(unaff_x19 + 200);
      fVar65 = (float)FUN_03776cb4(&stack0x00001790,0);
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar50 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
      fVar64 = fVar64 + fVar50 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                 fStack0000000000000150 * (fStack000000000000012c + fVar44 * fVar65)
                                 + fStack00000000000000d4 *
                                   (fStack00000000000000d0 +
                                   in_stack_00000140 + *(float *)(unaff_x19[0x20] + 0x1ac)));
      *(float *)(unaff_x19 + 200) = fVar64;
      goto joined_r0x035535c0;
    }
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar64 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (*(float *)((long)unaff_x19 + 0x2ac) +
             fStack0000000000000150 * fStack000000000000012c +
             fStack00000000000000d4 *
             (fStack00000000000000d0 + in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)));
    param_2 = (ulong)(uint)fVar64;
    fVar64 = *(float *)(unaff_x19 + 200) - fVar64;
    *(float *)(unaff_x19 + 200) = fVar64;
    if ((in_stack_000017dc == 0x200b) || (unaff_w25 != 0)) {
      fVar50 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
      param_2 = (ulong)(uint)fVar50;
      fVar64 = fVar64 - fVar50;
      goto LAB_03553678;
    }
  }
  else {
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar50 = *(float *)(unaff_x19 + 200);
    fVar64 = fVar50 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                      (*(float *)((long)unaff_x19 + 0x2ac) +
                      (*(float *)(unaff_x19 + 0x56) - in_stack_00000090) +
                      fStack00000000000000d4 * (in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)))
    ;
    *(float *)(unaff_x19 + 200) = fVar64;
joined_r0x035535c0:
    if ((in_stack_000017dc == 0x200b) || (param_2 = (ulong)(uint)fVar50, unaff_w25 != 0)) {
      fVar50 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
      param_2 = (ulong)(uint)fVar50;
      fVar64 = fVar64 + fVar50;
      goto LAB_03553678;
    }
  }
  lVar40 = *in_stack_00000170;
  if ((lVar40 == 0) || (lVar28 = *(long *)(lVar40 + 0x38), lVar28 == 0)) goto LAB_035574b8;
  uVar14 = *unaff_x20;
  uVar54 = (uint)*(undefined8 *)(lVar28 + 0x18);
  if (uVar54 <= uVar14) goto LAB_035575f4;
  *(float *)(lVar28 + (long)(int)uVar14 * unaff_x24 + 0x144) = fVar64;
  unaff_w29 = in_stack_000017dc;
  uVar32 = in_stack_000017dc;
  if ((int)in_stack_000017dc < 0xd) {
    if ((in_stack_000017dc - 10 < 2) || (in_stack_000017dc == 3)) goto LAB_0355371c;
LAB_03553700:
    if (((unaff_w23 & in_stack_000017dc == 0x2d) != 0) || ((float)uVar14 == in_stack_00000088._4_4_)
       ) goto LAB_0355371c;
  }
  else {
    if (1 < in_stack_000017dc - 0x2028) {
      if (in_stack_000017dc != 0xd) goto LAB_03553700;
      param_2 = 0;
      *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
      if ((float)uVar14 != in_stack_00000088._4_4_) goto LAB_03553c8c;
    }
LAB_0355371c:
    if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
      fVar50 = *(float *)(unaff_x19 + 0x99);
      fVar64 = *(float *)(unaff_x19 + 0x9a);
      if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      fVar50 = fVar50 - fVar64;
      if (((fStack000000000000005c < ABS(fVar50)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
         && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
        FUN_0358c860(fVar50);
        *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar50;
        *(float *)(unaff_x19 + 0x9b) = fVar50 + *(float *)(unaff_x19 + 0x9b);
        puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar40 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar40 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar40 = *(long *)puVar8;
        }
        lVar28 = *(long *)(lVar40 + 0xb8);
        if (*(int *)(lVar28 + 0x7ac) == (int)unaff_x19[0x95]) {
          if (*(int *)(lVar40 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar28 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          FUN_0209b778(lVar28 + 0x11f0,&stack0x000008a0,*(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo
                      );
          puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar40 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          memcpy((void *)(*(long *)(lVar40 + 0xb8) + 0x788),&stack0x000008a0,0x378);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    (*(long *)(lVar40 + 0xb8) + 0x818,0);
          lVar40 = *(long *)(*(long *)puVar8 + 0xb8);
          *(float *)(lVar40 + 0x7bc) = fVar50 + *(float *)(lVar40 + 0x7bc);
          *(float *)(lVar40 + 0x800) = fVar50 + *(float *)(lVar40 + 0x800);
          memcpy(&stack0x000001b0,(void *)(lVar40 + 0x788),0x378);
          FUN_0209b210(lVar40 + 0x11f0,&stack0x000001b0,
                       *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
        }
      }
    }
    fVar44 = *(float *)(unaff_x19 + 0x9b);
    *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
    fVar64 = *(float *)((long)unaff_x19 + 0x4cc) - fVar44;
    fVar50 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar64 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar50 = fVar64;
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar50;
    fVar65 = *(float *)(unaff_x19 + 0x99);
    if (in_stack_000017d4 == '\0') {
      in_stack_000017d8 = fVar50;
    }
    if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
       (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
        ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
      in_stack_000017d4 = '\x01';
    }
    lVar40 = *in_stack_00000170;
    if ((lVar40 == 0) || (lVar28 = *(long *)(lVar40 + 0x50), lVar28 == 0)) goto LAB_035574b8;
    uVar14 = *(uint *)(unaff_x19 + 0x95);
    if (*(uint *)(lVar28 + 0x18) <= uVar14) goto LAB_035575f4;
    lVar42 = unaff_x19[0x93];
    lVar19 = lVar28 + (long)(int)uVar14 * 0x5c;
    *(int *)(lVar19 + 0x34) = (int)lVar42;
    uVar54 = *(uint *)(unaff_x19 + 0x93);
    if ((int)lVar42 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
      uVar54 = *(uint *)((long)unaff_x19 + 0x49c);
    }
    *(uint *)((long)unaff_x19 + 0x49c) = uVar54;
    *(uint *)(lVar19 + 0x38) = uVar54;
    *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
    *(undefined4 *)(lVar19 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
    iVar12 = *(int *)((long)unaff_x19 + 0x49c);
    if ((int)uVar54 <= *(int *)((long)unaff_x19 + 0x4a4)) {
      iVar12 = *(int *)((long)unaff_x19 + 0x4a4);
    }
    *(int *)((long)unaff_x19 + 0x4a4) = iVar12;
    *(int *)(lVar19 + 0x40) = iVar12;
    *(int *)(lVar19 + 0x24) = (*(int *)(lVar19 + 0x3c) - *(int *)(lVar19 + 0x34)) + 1;
    *(undefined4 *)(lVar19 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    lVar40 = *(long *)(lVar40 + 0x38);
    if (lVar40 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar40 + 0x18) <= uVar54) goto LAB_035575f4;
    uVar63 = *(undefined4 *)(lVar40 + (long)(int)uVar54 * (long)iVar17 + 0x11c);
    lVar28 = lVar28 + (long)(int)uVar14 * 0x5c;
    *(float *)(lVar28 + 0x70) = fVar64;
    *(undefined4 *)(lVar28 + 0x6c) = uVar63;
    lVar40 = *in_stack_00000170;
    if ((lVar40 == 0) || (lVar28 = *(long *)(lVar40 + 0x50), lVar28 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
    lVar40 = *(long *)(lVar40 + 0x38);
    if (lVar40 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar40 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
    fVar65 = fVar65 - fVar44;
    param_2 = (ulong)(uint)fVar65;
    lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    *(undefined4 *)(lVar28 + 0x74) =
         *(undefined4 *)(lVar40 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128)
    ;
    *(float *)(lVar28 + 0x78) = fVar65;
    lVar40 = *in_stack_00000170;
    if ((lVar40 == 0) || (lVar42 = *(long *)(lVar40 + 0x50), lVar42 == 0)) goto LAB_035574b8;
    lVar19 = (long)(int)*(uint *)(unaff_x19 + 0x95);
    if (*(uint *)(lVar42 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
    lVar28 = lVar42 + lVar19 * 0x5c;
    *(float *)(lVar28 + 0x44) =
         *(float *)(lVar28 + 0x74) - fStack0000000000000150 * fStack000000000000015c;
    *(float *)(lVar28 + 0x5c) = in_stack_000000f8._4_4_;
    if (*(int *)(lVar28 + 0x24) == 1) {
      *(int *)(lVar42 + lVar19 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    if ((*unaff_x21 == 0) || (lVar28 = *(long *)(lVar40 + 0x38), lVar28 == 0)) goto LAB_035574b8;
    lVar35 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
    uVar54 = (uint)*(undefined8 *)(lVar28 + 0x18);
    if (uVar54 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
    if ((*(char *)(lVar28 + lVar35 * unaff_x24 + 0x194) == '\0') &&
       (lVar35 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar54 <= *(uint *)(unaff_x19 + 0x94)))
    goto LAB_035575f4;
    lVar42 = lVar42 + lVar19 * 0x5c;
    fVar44 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fStack00000000000000d4 *
              (fStack00000000000000d0 + in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)) -
             *(float *)((long)unaff_x19 + 0x2ac));
    fVar50 = -fVar44;
    if ((char)unaff_x19[0x1e] != '\0') {
      fVar50 = fVar44;
    }
    *(float *)(lVar42 + 0x58) = *(float *)(lVar28 + lVar35 * unaff_x24 + 0x144) + fVar50;
    *(float *)(lVar42 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
    *(float *)(lVar42 + 0x54) = fVar64;
    *(float *)(lVar42 + 0x48) = in_stack_00000060 + (fVar65 - fVar64);
    *(float *)(lVar42 + 0x4c) = fVar65;
    if ((int)in_stack_000017dc < 0x2d) {
      if (in_stack_000017dc - 10 < 2) {
LAB_03553b60:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        lVar40 = unaff_x19[0x6d];
        *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
        iVar12 = (int)unaff_x19[0x95] + 1;
        *(int *)(unaff_x19 + 0x95) = iVar12;
        *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
        if ((lVar40 == 0) || (*(long *)(lVar40 + 0x50) == 0)) goto LAB_035574b8;
        if (*(int *)(*(long *)(lVar40 + 0x50) + 0x18) <= iVar12) {
          FUN_0358ca18();
          lVar40 = unaff_x19[0x6d];
          if (lVar40 == 0) goto LAB_035574b8;
        }
        lVar40 = *(long *)(lVar40 + 0x38);
        if (lVar40 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        fVar50 = *(float *)(lVar40 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
        if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
          if ((in_stack_000017dc == 0x2029) || (fVar64 = 0.0, in_stack_000017dc == 10)) {
            fVar64 = *(float *)((long)unaff_x19 + 0x2cc);
          }
          uVar24 = 0;
          fVar64 = fVar50 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                   fStack0000000000000058 *
                   (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700)) +
                   fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar64) +
                   *(float *)(unaff_x19 + 0x9b);
        }
        else {
          if ((in_stack_000017dc == 0x2029) || (fVar64 = 0.0, in_stack_000017dc == 10)) {
            fVar64 = *(float *)((long)unaff_x19 + 0x2cc);
          }
          uVar24 = 1;
          fVar64 = *(float *)(unaff_x19 + 0x9b) +
                   *(float *)(unaff_x19 + 0x58) +
                   fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar64);
        }
        *(float *)(unaff_x19 + 0x9b) = fVar64;
        *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar24;
        puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar40 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar40 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar40 = *(long *)puVar8;
        }
        uVar21 = *(undefined8 *)(*(long *)(lVar40 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 0x9a) = fVar50;
        param_2 = NEON_rev64(uVar21,4);
        unaff_x19[0x99] = param_2;
        *(float *)(unaff_x19 + 200) =
             *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
        FUN_0358c4f0();
        FUN_0358c4f0();
        *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
        in_stack_00000068._4_4_ = 1;
        bStack0000000000000070 = 1;
        goto LAB_03550bd0;
      }
      if (in_stack_000017dc == 3) {
        if (unaff_x19[0x8f] == 0) goto LAB_035574b8;
        in_stack_000017a8 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
        uVar32 = 3;
      }
    }
    else if ((in_stack_000017dc - 0x2028 < 2) || (in_stack_000017dc == 0x2d)) goto LAB_03553b60;
  }
LAB_03553c8c:
  uVar14 = *unaff_x20;
  if (uVar54 <= uVar14) goto LAB_035575f4;
  if (*(char *)(lVar28 + (long)(int)uVar14 * unaff_x24 + 0x194) != '\0') {
    lVar28 = lVar28 + (long)(int)uVar14 * unaff_x24;
    uVar52 = *(ulong *)(lVar28 + 0x11c);
    uVar20 = *(ulong *)(in_stack_00000080 + 0x230);
    *(ulong *)(in_stack_00000080 + 0x230) =
         uVar20 ^ (uVar20 ^ uVar52) &
                  ~CONCAT44(-(uint)((float)(uVar20 >> 0x20) < (float)(uVar52 >> 0x20)),
                            -(uint)((float)uVar20 < (float)uVar52));
    uVar20 = *(ulong *)(in_stack_00000080 + 0x238);
    param_2 = *(ulong *)(lVar28 + 0x128);
    *(ulong *)(in_stack_00000080 + 0x238) =
         uVar20 ^ (uVar20 ^ param_2) &
                  ~CONCAT44(-(uint)((float)(param_2 >> 0x20) < (float)(uVar20 >> 0x20)),
                            -(uint)((float)param_2 < (float)uVar20));
  }
  if (((int)unaff_x19[0x5c] == 5) &&
     ((0xd < uVar32 || ((1 << (ulong)(uVar32 & 0x1f) & 0x2c00U) == 0)))) {
    lVar28 = *(long *)(lVar40 + 0x58);
    if (lVar28 == 0) goto LAB_035574b8;
    iVar12 = (int)unaff_x19[0x96] + 1;
    if (*(int *)(lVar28 + 0x18) < iVar12) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff02b8((long *)(lVar40 + 0x58),iVar12,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
      lVar40 = *in_stack_00000170;
      if (lVar40 == 0) goto LAB_035574b8;
    }
    lVar28 = *(long *)(lVar40 + 0x58);
    if (lVar28 == 0) goto LAB_035574b8;
    uVar54 = *(uint *)(unaff_x19 + 0x96);
    lVar42 = (long)(int)uVar54;
    uVar14 = *(uint *)(lVar28 + 0x18);
    if (uVar14 <= uVar54) goto LAB_035575f4;
    lVar19 = lVar28 + lVar42 * 0x14;
    fVar64 = *(float *)(lVar19 + 0x30);
    param_2 = (ulong)(uint)fVar64;
    *(undefined4 *)(lVar19 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
    fVar50 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar64 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar50 = fVar64;
    }
    *(float *)(lVar19 + 0x30) = fVar50;
    uVar32 = *(uint *)((long)unaff_x19 + 0x494);
    if (uVar32 == 0 && uVar54 == 0) {
      *(uint *)(lVar28 + (ulong)uVar54 * 0x14 + 0x20) = uVar32;
    }
    else {
      uVar43 = uVar32 - 1;
      if (0 < (int)uVar32) {
        lVar40 = *(long *)(lVar40 + 0x38);
        if (lVar40 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar40 + 0x18) <= uVar43) goto LAB_035575f4;
        if (uVar54 != *(uint *)(lVar40 + (ulong)uVar43 * (unaff_x24 & 0xffffffff) + 0x68)) {
          if (uVar14 <= uVar54 - 1) goto LAB_035575f4;
          *(uint *)(lVar28 + 0x20 + (long)(int)(uVar54 - 1) * 0x14 + 4) = uVar43;
          *(uint *)(lVar28 + 0x20 + lVar42 * 0x14) = uVar32;
          goto LAB_03553d10;
        }
      }
      if ((float)uVar32 == in_stack_00000088._4_4_) {
        *(float *)(lVar28 + lVar42 * 0x14 + 0x24) = in_stack_00000088._4_4_;
      }
    }
  }
LAB_03553d10:
  puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (((char)unaff_x19[0x5b] == '\0') &&
     ((6 < *(uint *)(unaff_x19 + 0x5c) ||
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_035542ac;
  if ((unaff_w25 == 0) &&
     (((in_stack_000017dc != 0x2d && (in_stack_000017dc != 0x200b)) && (in_stack_000017dc != 0xad)))
     ) {
    if (*(char *)((long)unaff_x19 + 0x2da) != '\0') {
      if ((bStack0000000000000070 & 1) != 0) goto UnityEngine_Animator__set_animatePhysics;
      goto LAB_035542a8;
    }
LAB_03553ef0:
    if (((((0x2bfd < in_stack_000017dc - 0xac01) && (0xfd < in_stack_000017dc - 0x1101)) &&
         (0x1d < in_stack_000017dc - 0xa961)) || (uVar20 = FUN_03597a54(0), (uVar20 & 1) != 0)) &&
       ((((0xed < in_stack_000017dc - 0xff01 && (0x1d < in_stack_000017dc - 0xfe31)) &&
         (0x717d < in_stack_000017dc - 0x2e81)) && (0x1fd < in_stack_000017dc - 0xf901))))
    goto LAB_03553f78;
    lVar40 = FUN_035978e8(0);
    if ((lVar40 == 0) || (*(long *)(lVar40 + 0x10) == 0)) goto LAB_035574b8;
    uVar14 = FUN_0219c130(*(long *)(lVar40 + 0x10),&stack0x000008a0,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    if ((int)in_stack_00000088._4_4_ <= (int)*unaff_x20) {
      in_stack_000008a0 = in_stack_000017dc;
      if ((uVar14 & 1) == 0) {
LAB_03554270:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        goto LAB_035542a8;
      }
LAB_035541dc:
      if (uVar13 != unaff_w22 || ((bStack0000000000000070 ^ 0xff) & 1) != 0) goto LAB_035542ac;
      if (unaff_w25 == 0) goto LAB_0355422c;
      goto UnityEngine_Animator__get_bodyPositionInternal;
    }
    lVar40 = FUN_035978e8(0);
    if (((lVar40 == 0) || (*in_stack_00000170 == 0)) ||
       (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= *unaff_x20 + 1) goto LAB_035575f4;
    if (*(long *)(lVar40 + 0x18) == 0) goto LAB_035574b8;
    in_stack_000008a0 =
         (uint)*(ushort *)(lVar28 + (long)(int)(*unaff_x20 + 1) * (long)iVar17 + 0x20);
    uVar20 = FUN_0219c130(*(long *)(lVar40 + 0x18),&stack0x000008a0,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    if ((uVar14 & 1) != 0) goto LAB_035541dc;
    if ((uVar20 & 1) == 0) goto LAB_03554270;
    if ((bStack0000000000000070 & 1) == 0) goto LAB_035542a8;
    if (unaff_w25 != 0) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
    }
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0358c4f0();
  }
  else {
    if (*(char *)((long)unaff_x19 + 0x2da) != '\x01') {
      if (((0x28 < in_stack_000017dc - 0x2007) ||
          ((1L << ((ulong)(in_stack_000017dc - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
         ((in_stack_000017dc != 0xa0 && (in_stack_000017dc != 0x2060)))) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        bStack0000000000000070 = 0;
        *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xe78) = 0xffffffff;
        goto LAB_035542ac;
      }
      goto LAB_03553ef0;
    }
LAB_03553f78:
    if ((bStack0000000000000070 & 1) == 0) {
LAB_035542a8:
      bStack0000000000000070 = 0;
      goto LAB_035542ac;
    }
    if (unaff_w25 == 0) {
UnityEngine_Animator__set_animatePhysics:
      if ((bStack0000000000000074 & 1) == 0 && in_stack_000017dc == 0xad)
      goto UnityEngine_Animator__get_bodyPositionInternal;
    }
    else {
UnityEngine_Animator__get_bodyPositionInternal:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
    }
LAB_0355422c:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0358c4f0();
  }
  bStack0000000000000070 = 1;
LAB_035542ac:
  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_0358c4f0();
  *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
  goto LAB_03550bd0;
LAB_03554e78:
  uVar13 = uVar14 - 1;
  if (*(uint *)(lVar40 + 0x18) <= uVar13) goto LAB_035575f4;
  if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x50), lVar42 == 0))
  goto LAB_035574b8;
  lVar35 = (long)(int)uVar13;
  lVar19 = lVar40 + lVar35 * 0x178;
  uVar32 = *(uint *)(lVar19 + 100);
  if (*(uint *)(lVar42 + 0x18) <= uVar32) goto LAB_035575f4;
  lVar38 = (long)(int)uVar32;
  lVar42 = lVar42 + lVar38 * 0x5c;
  lVar33 = *(long *)(lVar19 + 0x38);
  uVar3 = *(ushort *)(lVar19 + 0x20);
  uVar5 = *(uint *)(lVar42 + 0x3c);
  uVar43 = *(uint *)(lVar42 + 0x68);
  iVar2 = *(int *)(lVar42 + 0x20);
  iVar15 = *(int *)(lVar42 + 0x28);
  iVar16 = *(int *)(lVar42 + 0x2c);
  uVar6 = *(uint *)(lVar42 + 0x40);
  lVar19 = (long)(int)uVar6;
  fVar47 = *(float *)(lVar42 + 0x4c);
  fVar48 = *(float *)(lVar42 + 0x54);
  fVar60 = *(float *)(lVar42 + 0x58);
  fVar49 = *(float *)(lVar42 + 0x5c);
  fVar56 = *(float *)(lVar42 + 0x60);
  fVar58 = *(float *)(lVar42 + 0x6c);
  fVar57 = *(float *)(lVar42 + 0x70);
  fVar45 = *(float *)(lVar42 + 0x74);
  fVar61 = *(float *)(lVar42 + 0x78);
  uVar37 = (uint)uVar3;
  if ((int)uVar43 < 9) {
    switch(uVar43) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar56 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar60;
      }
      break;
    case 2:
LAB_03555018:
      in_stack_000000f8._4_4_ = (fVar56 + fVar49 * 0.5) - fVar60 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar49 + fVar56) - fVar60;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar49 + fVar56;
      }
      break;
    case 8:
      goto switchD_03554f58_caseD_8;
    }
LAB_03555088:
    uStack00000000000000e8 = 0;
  }
  else if (uVar43 == 0x10) {
switchD_03554f58_caseD_8:
    if (uVar3 < 0xad) {
      if ((uVar3 != 3) && (uVar3 != 10)) goto LAB_03554fac;
    }
    else if ((uVar3 != 0xad) && ((uVar3 != 0x200b && (uVar3 != 0x2060)))) {
LAB_03554fac:
      if (*(uint *)(lVar40 + 0x18) <= uVar5) goto LAB_035575f4;
      uVar4 = *(undefined2 *)(lVar40 + (long)(int)uVar5 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b8cc4(uVar4,0);
      if ((uVar20 & 1) == 0) {
        bVar1 = (int)uVar32 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar60 <= fVar49) && (!bVar1 && uVar43 >> 4 == 0)) {
        in_stack_000000f8._4_4_ = fVar56;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar49 + fVar56;
        }
        goto LAB_03555088;
      }
      if (((uVar14 == 1) || (uVar32 != uVar54)) || (uVar13 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_000000f8._4_4_ = fVar56;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar49 + fVar56;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fStack0000000000000028 = (float)FUN_026b97f8(uVar37,0);
        uStack00000000000000e8 = 0;
      }
      else {
        cVar25 = (char)unaff_x19[0x1e];
        fVar56 = -fVar60;
        if (cVar25 != '\0') {
          fVar56 = fVar60;
        }
        if (*(uint *)(lVar40 + 0x18) <= uVar5) goto LAB_035575f4;
        iVar16 = (int)*(char *)(lVar40 + (long)(int)uVar5 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack0000000000000028 & 1)) + iVar16 + -1;
        if (iVar16 < 1) {
          fVar60 = 1.0;
          iVar16 = 1;
        }
        else {
          fVar60 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar37 == 9) {
LAB_03556e74:
          fVar60 = 1.0 - fVar60;
        }
        else {
          if (uVar37 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar20 = FUN_026b97f8(uVar37,0);
            cVar25 = (char)unaff_x19[0x1e];
            if ((uVar20 & 1) != 0) goto LAB_03556e74;
          }
          iVar16 = (iVar2 - (~(uint)fStack0000000000000028 & 1)) + iVar15;
        }
        fVar60 = ((fVar49 + fVar56) * fVar60) / (float)iVar16;
        if (cVar25 == '\0') {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar60;
          uStack00000000000000e8 =
               CONCAT44((float)((ulong)uStack00000000000000e8 >> 0x20) + 0.0,
                        (float)uStack00000000000000e8 + 0.0);
        }
        else {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar60;
        }
      }
    }
  }
  else if (uVar43 == 0x20) {
    fVar60 = fVar58 + fVar45;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar43 = (uint)*(undefined8 *)(lVar40 + 0x18);
  if (uVar43 <= uVar13) goto LAB_035575f4;
  lVar42 = lVar40 + lVar35 * 0x178;
  fVar49 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar60 = SUB84(in_stack_000000b8,0) + (float)uStack00000000000000e8;
  fVar56 = (float)((ulong)in_stack_000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000e8 >> 0x20);
  if (*(char *)(lVar42 + 0x194) == '\0') goto LAB_03555938;
  iVar15 = *(int *)(lVar40 + lVar35 * 0x178 + 0x2c);
  if (iVar15 != 0) goto LAB_0355574c;
  fVar46 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar32,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar27 = lVar40 + lVar35 * 0x178;
    *(undefined4 *)(lVar27 + 0x84) = 0;
    *(undefined4 *)(lVar27 + 0xac) = 0;
    *(undefined4 *)(lVar27 + 0xd4) = 0x3f800000;
    fVar46 = 1.0;
    break;
  case 1:
    fVar61 = *(float *)(lVar40 + lVar35 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar27 = lVar40 + lVar35 * 0x178;
      fVar45 = (in_stack_000000f8._4_4_ + fVar61) - *(float *)(in_stack_00000080 + 0x230);
      fVar61 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar27 = lVar40 + lVar35 * 0x178;
    fVar45 = fVar45 - fVar58;
    *(float *)(lVar27 + 0x84) = fVar46 + (fVar61 - fVar58) / fVar45;
    *(float *)(lVar27 + 0xac) = fVar46 + (*(float *)(lVar27 + 0x98) - fVar58) / fVar45;
    *(float *)(lVar27 + 0xd4) = fVar46 + (*(float *)(lVar27 + 0xc0) - fVar58) / fVar45;
    fVar46 = fVar46 + (*(float *)(lVar27 + 0xe8) - fVar58) / fVar45;
    break;
  case 2:
    lVar27 = lVar40 + lVar35 * 0x178;
    fVar61 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar45 = (in_stack_000000f8._4_4_ + *(float *)(lVar27 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar27 + 0x84) = fVar46 + fVar45 / fVar61;
    *(float *)(lVar27 + 0xac) =
         fVar46 + ((in_stack_000000f8._4_4_ + *(float *)(lVar27 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar27 + 0xd4) =
         fVar46 + ((in_stack_000000f8._4_4_ + *(float *)(lVar27 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar46 = fVar46 + ((in_stack_000000f8._4_4_ + *(float *)(lVar27 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar27 = lVar40 + lVar35 * 0x178;
      *(undefined4 *)(lVar27 + 0x88) = 0;
      *(undefined4 *)(lVar27 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar27 + 0xd8) = 0;
      *(undefined4 *)(lVar27 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar27 = lVar40 + lVar35 * 0x178;
      fVar61 = fVar61 - fVar57;
      fVar45 = fVar46 + (*(float *)(lVar27 + 0x74) - fVar57) / fVar61;
      fVar61 = fVar46 + (*(float *)(lVar27 + 0x9c) - fVar57) / fVar61;
      *(float *)(lVar27 + 0x88) = fVar45;
      *(float *)(lVar27 + 0xb0) = fVar61;
      *(float *)(lVar27 + 0xd8) = fVar45;
      *(float *)(lVar27 + 0x100) = fVar61;
      break;
    case 2:
      lVar27 = lVar40 + lVar35 * 0x178;
      fVar45 = fVar46 + (*(float *)(lVar27 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar27 + 0x88) = fVar45;
      fVar61 = *(float *)(unaff_x19 + 0x9c);
      fVar58 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar27 + 0xd8) = fVar45;
      fVar45 = fVar46 + (*(float *)(lVar27 + 0x9c) - fVar61) / (fVar58 - fVar61);
      *(float *)(lVar27 + 0xb0) = fVar45;
      *(float *)(lVar27 + 0x100) = fVar45;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar43 = (uint)*(undefined8 *)(lVar40 + 0x18);
    }
    if (uVar43 <= uVar13) goto LAB_035575f4;
    lVar27 = lVar40 + lVar35 * 0x178;
    fVar45 = *(float *)(lVar27 + 0x15c);
    fVar61 = (1.0 - (*(float *)(lVar27 + 0x88) + *(float *)(lVar27 + 0xb0)) * fVar45) * 0.5;
    fVar58 = fVar46 + *(float *)(lVar27 + 0x88) * fVar45 + fVar61;
    fVar46 = fVar46 + fVar61 + *(float *)(lVar27 + 0xb0) * fVar45;
    *(float *)(lVar27 + 0x84) = fVar58;
    *(float *)(lVar27 + 0xac) = fVar58;
    *(float *)(lVar27 + 0xd4) = fVar46;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(lVar40 + lVar35 * 0x178 + 0xfc) = fVar46;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar43 <= uVar13) goto LAB_035575f4;
    lVar27 = lVar40 + lVar35 * 0x178;
    *(undefined4 *)(lVar27 + 0x88) = 0;
    *(undefined4 *)(lVar27 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar27 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar27 + 0x100) = 0;
    break;
  case 1:
    if (uVar13 < uVar43) {
      lVar27 = lVar40 + lVar35 * 0x178;
      fVar47 = fVar47 - fVar48;
      fVar46 = (*(float *)(lVar27 + 0x74) - fVar48) / fVar47;
      fVar47 = (*(float *)(lVar27 + 0x9c) - fVar48) / fVar47;
      *(float *)(lVar27 + 0x88) = fVar46;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar43 <= uVar13) goto LAB_035575f4;
    lVar27 = lVar40 + lVar35 * 0x178;
    fVar46 = (*(float *)(lVar27 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar27 + 0x88) = fVar46;
    fVar47 = (*(float *)(lVar27 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar27 + 0xb0) = fVar47;
    *(float *)(lVar27 + 0xd8) = fVar47;
    *(float *)(lVar27 + 0x100) = fVar46;
    break;
  case 3:
    if (uVar43 <= uVar13) goto LAB_035575f4;
    lVar27 = lVar40 + lVar35 * 0x178;
    fVar47 = *(float *)(lVar27 + 0x15c);
    fVar45 = (1.0 - (*(float *)(lVar27 + 0x84) + *(float *)(lVar27 + 0xd4)) / fVar47) * 0.5;
    fVar46 = *(float *)(lVar27 + 0x84) / fVar47 + fVar45;
    fVar45 = fVar45 + *(float *)(lVar27 + 0xd4) / fVar47;
    *(float *)(lVar27 + 0x88) = fVar46;
    *(float *)(lVar27 + 0xb0) = fVar45;
    *(float *)(lVar27 + 0x100) = fVar46;
    *(float *)(lVar27 + 0xd8) = fVar45;
  }
  if (uVar43 <= uVar13) goto LAB_035575f4;
  lVar27 = lVar40 + lVar35 * 0x178;
  fVar46 = *(float *)(lVar27 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar27 + 0x5c) == '\0') && ((*(byte *)(lVar40 + lVar35 * 0x178 + 400) & 1) != 0)) {
    fVar46 = -fVar46;
  }
  fVar45 = fVar50;
  if (((iVar12 == 2) || (fVar45 = fVar44, iVar12 == 1)) || (fVar45 = fVar50 / fVar64, iVar12 == 0))
  {
    fVar46 = fVar45 * fVar46;
  }
  lVar27 = lVar40 + lVar35 * 0x178;
  fVar47 = *(float *)(lVar27 + 0x88);
  fVar61 = *(float *)(lVar27 + 0x84);
  fVar45 = -2.1474836e+09;
  if (fVar61 != INFINITY) {
    fVar45 = (float)(int)fVar61;
  }
  fVar58 = *(float *)(lVar27 + 0xd4);
  fVar57 = *(float *)(lVar27 + 0xd8);
  fVar48 = -2.1474836e+09;
  if (fVar47 != INFINITY) {
    fVar48 = (float)(int)fVar47;
  }
  uVar51 = FUN_03591d3c(fVar61 - fVar45,fVar47 - fVar48);
  *(undefined4 *)(lVar27 + 0x84) = uVar51;
  if (*(uint *)(lVar40 + 0x18) <= uVar13) goto LAB_035575f4;
  fVar57 = fVar57 - fVar48;
  *(float *)(lVar27 + 0x88) = fVar46;
  uVar51 = FUN_03591d3c(fVar61 - fVar45,fVar57);
  *(undefined4 *)(lVar40 + lVar35 * 0x178 + 0xac) = uVar51;
  if (*(uint *)(lVar40 + 0x18) <= uVar13) goto LAB_035575f4;
  fVar58 = fVar58 - fVar45;
  *(float *)(lVar40 + lVar35 * 0x178 + 0xb0) = fVar46;
  fVar45 = (float)FUN_03591d3c(fVar58,fVar57);
  *(float *)(lVar27 + 0xd4) = fVar45;
  if (*(uint *)(lVar40 + 0x18) <= uVar13) goto LAB_035575f4;
  *(float *)(lVar27 + 0xd8) = fVar46;
  uVar51 = FUN_03591d3c(fVar58,fVar47 - fVar48);
  *(undefined4 *)(lVar40 + lVar35 * 0x178 + 0xfc) = uVar51;
  uVar43 = (uint)*(undefined8 *)(lVar40 + 0x18);
  if (uVar43 <= uVar13) goto LAB_035575f4;
  *(float *)(lVar40 + lVar35 * 0x178 + 0x100) = fVar46;
LAB_0355574c:
  if (((int)uVar13 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar32 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar43 <= uVar13) goto LAB_035575f4;
      lVar42 = lVar40 + lVar35 * 0x178;
      *(ulong *)(lVar42 + 0x70) =
           CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar42 + 0x70) >> 0x20),
                    fVar49 + (float)*(undefined8 *)(lVar42 + 0x70));
      *(float *)(lVar42 + 0x78) = fVar56 + *(float *)(lVar42 + 0x78);
      *(ulong *)(lVar42 + 0x98) =
           CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar42 + 0x98) >> 0x20),
                    fVar49 + (float)*(undefined8 *)(lVar42 + 0x98));
      *(float *)(lVar42 + 0xa0) = fVar56 + *(float *)(lVar42 + 0xa0);
      *(ulong *)(lVar42 + 0xc0) =
           CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar42 + 0xc0) >> 0x20),
                    fVar49 + (float)*(undefined8 *)(lVar42 + 0xc0));
      *(float *)(lVar42 + 200) = fVar56 + *(float *)(lVar42 + 200);
      *(ulong *)(lVar42 + 0xe8) =
           CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar42 + 0xe8) >> 0x20),
                    fVar49 + (float)*(undefined8 *)(lVar42 + 0xe8));
      *(float *)(lVar42 + 0xf0) = fVar56 + *(float *)(lVar42 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uVar32 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar13 < uVar43) {
        if (*(uint *)(lVar40 + lVar35 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar42 = lVar40 + lVar35 * 0x178;
          *(ulong *)(lVar42 + 0x70) =
               CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar42 + 0x70) >> 0x20),
                        fVar49 + (float)*(undefined8 *)(lVar42 + 0x70));
          *(float *)(lVar42 + 0x78) = fVar56 + *(float *)(lVar42 + 0x78);
          *(ulong *)(lVar42 + 0x98) =
               CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar42 + 0x98) >> 0x20),
                        fVar49 + (float)*(undefined8 *)(lVar42 + 0x98));
          *(float *)(lVar42 + 0xa0) = fVar56 + *(float *)(lVar42 + 0xa0);
          *(ulong *)(lVar42 + 0xc0) =
               CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar42 + 0xc0) >> 0x20),
                        fVar49 + (float)*(undefined8 *)(lVar42 + 0xc0));
          *(float *)(lVar42 + 200) = fVar56 + *(float *)(lVar42 + 200);
          *(ulong *)(lVar42 + 0xe8) =
               CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar42 + 0xe8) >> 0x20),
                        fVar49 + (float)*(undefined8 *)(lVar42 + 0xe8));
          *(float *)(lVar42 + 0xf0) = fVar56 + *(float *)(lVar42 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar43 <= uVar13) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar43 = *(uint *)(lVar40 + 0x18);
  }
  puVar8 = PTR_DAT_03cbded8;
  uVar51 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar27 = lVar40 + lVar35 * 0x178;
  *(undefined8 *)(lVar27 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar27 + 0x78) = uVar51;
  if (uVar43 <= uVar13) goto LAB_035575f4;
  uVar51 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  lVar27 = lVar40 + lVar35 * 0x178;
  *(undefined8 *)(lVar27 + 0x98) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar27 + 0xa0) = uVar51;
  uVar51 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar27 + 0xc0) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar27 + 200) = uVar51;
  uVar51 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar27 + 0xe8) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar27 + 0xf0) = uVar51;
  *(undefined1 *)(lVar42 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar15 == 0) {
    pcVar30 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar30)();
  }
  else if (iVar15 == 1) {
    pcVar30 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar42 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar42 = lVar42 + lVar35 * 0x178;
  uVar21 = *(undefined8 *)(lVar42 + 0x11c);
  *(undefined8 *)(lVar42 + 0x11c) =
       CONCAT44(fVar60 + (float)((ulong)uVar21 >> 0x20),fVar49 + (float)uVar21);
  *(float *)(lVar42 + 0x124) = fVar56 + *(float *)(lVar42 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar42 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar42 = lVar42 + lVar35 * 0x178;
  *(ulong *)(lVar42 + 0x110) =
       CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar42 + 0x110) >> 0x20),
                fVar49 + (float)*(undefined8 *)(lVar42 + 0x110));
  *(float *)(lVar42 + 0x118) = fVar56 + *(float *)(lVar42 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar42 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar42 = lVar42 + lVar35 * 0x178;
  *(ulong *)(lVar42 + 0x128) =
       CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar42 + 0x128) >> 0x20),
                fVar49 + (float)*(undefined8 *)(lVar42 + 0x128));
  *(float *)(lVar42 + 0x130) = fVar56 + *(float *)(lVar42 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar42 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar42 = lVar42 + lVar35 * 0x178;
  *(float *)(lVar42 + 0x134) = fVar49 + *(float *)(lVar42 + 0x134);
  *(ulong *)(lVar42 + 0x138) =
       CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar42 + 0x138) >> 0x20),
                fVar60 + (float)*(undefined8 *)(lVar42 + 0x138));
  lVar42 = *in_stack_00000170;
  if ((lVar42 == 0) || (lVar27 = *(long *)(lVar42 + 0x38), lVar27 == 0)) goto LAB_035574b8;
  uVar43 = *(uint *)(lVar27 + 0x18);
  if (uVar43 <= uVar13) goto LAB_035575f4;
  lVar34 = lVar27 + lVar35 * 0x178;
  uVar52 = CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar34 + 0x140) >> 0x20),
                    fVar49 + (float)*(undefined8 *)(lVar34 + 0x140));
  fVar45 = fVar60 + *(float *)(lVar34 + 0x150);
  uVar53 = (ulong)(uint)fVar45;
  uVar55 = CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar34 + 0x148) >> 0x20),
                    fVar60 + (float)*(undefined8 *)(lVar34 + 0x148));
  *(float *)(lVar34 + 0x150) = fVar45;
  *(ulong *)(lVar34 + 0x140) = uVar52;
  *(ulong *)(lVar34 + 0x148) = uVar55;
  if (uVar32 == uVar54) {
    uVar54 = *unaff_x20 - 1;
    if (uVar13 == uVar54) goto LAB_03555b44;
  }
  else {
    lVar42 = *(long *)(lVar42 + 0x50);
    if (lVar42 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar42 + 0x18) <= uVar54) goto LAB_035575f4;
    lVar34 = (long)(int)uVar54;
    lVar36 = lVar42 + lVar34 * 0x5c;
    uVar55 = (ulong)(uint)*(float *)(lVar36 + 0x58);
    fVar45 = fVar60 + *(float *)(lVar36 + 0x54);
    uVar52 = (ulong)(uint)fVar45;
    fVar47 = fVar49 + *(float *)(lVar36 + 0x58);
    uVar53 = (ulong)(uint)fVar47;
    *(ulong *)(lVar36 + 0x4c) =
         CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar36 + 0x4c) >> 0x20),
                  fVar60 + (float)*(undefined8 *)(lVar36 + 0x4c));
    *(float *)(lVar36 + 0x54) = fVar45;
    *(float *)(lVar36 + 0x58) = fVar47;
    if (uVar43 <= *(uint *)(lVar36 + 0x34)) goto LAB_035575f4;
    uVar51 = *(undefined4 *)(lVar27 + (long)(int)*(uint *)(lVar36 + 0x34) * 0x178 + 0x11c);
    lVar42 = lVar42 + lVar34 * 0x5c;
    *(float *)(lVar42 + 0x70) = fVar45;
    *(undefined4 *)(lVar42 + 0x6c) = uVar51;
    lVar42 = *in_stack_00000170;
    if ((lVar42 == 0) || (lVar27 = *(long *)(lVar42 + 0x50), lVar27 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= uVar54) goto LAB_035575f4;
    lVar42 = *(long *)(lVar42 + 0x38);
    if (lVar42 == 0) goto LAB_035574b8;
    uVar54 = *(uint *)(lVar27 + lVar34 * 0x5c + 0x40);
    if (*(uint *)(lVar42 + 0x18) <= uVar54) goto LAB_035575f4;
    lVar27 = lVar27 + lVar34 * 0x5c;
    *(undefined4 *)(lVar27 + 0x74) = *(undefined4 *)(lVar42 + (long)(int)uVar54 * 0x178 + 0x128);
    *(undefined4 *)(lVar27 + 0x78) = *(undefined4 *)(lVar27 + 0x4c);
    uVar54 = *unaff_x20 - 1;
LAB_03555b44:
    if (uVar13 == uVar54) {
      lVar42 = *in_stack_00000170;
      if ((lVar42 == 0) || (lVar27 = *(long *)(lVar42 + 0x50), lVar27 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar32) goto LAB_035575f4;
      lVar34 = lVar27 + lVar38 * 0x5c;
      uVar55 = (ulong)(uint)*(float *)(lVar34 + 0x58);
      uVar52 = CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar34 + 0x4c) >> 0x20),
                        fVar60 + (float)*(undefined8 *)(lVar34 + 0x4c));
      fVar45 = fVar60 + *(float *)(lVar34 + 0x54);
      fVar49 = fVar49 + *(float *)(lVar34 + 0x58);
      uVar53 = (ulong)(uint)fVar49;
      *(ulong *)(lVar34 + 0x4c) = uVar52;
      *(float *)(lVar34 + 0x54) = fVar45;
      *(float *)(lVar34 + 0x58) = fVar49;
      lVar42 = *(long *)(lVar42 + 0x38);
      if (lVar42 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar42 + 0x18) <= *(uint *)(lVar34 + 0x34)) goto LAB_035575f4;
      uVar51 = *(undefined4 *)(lVar42 + (long)(int)*(uint *)(lVar34 + 0x34) * 0x178 + 0x11c);
      lVar27 = lVar27 + lVar38 * 0x5c;
      *(float *)(lVar27 + 0x70) = fVar45;
      *(undefined4 *)(lVar27 + 0x6c) = uVar51;
      lVar42 = *in_stack_00000170;
      if ((lVar42 == 0) || (lVar27 = *(long *)(lVar42 + 0x50), lVar27 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar32) goto LAB_035575f4;
      lVar42 = *(long *)(lVar42 + 0x38);
      if (lVar42 == 0) goto LAB_035574b8;
      uVar54 = *(uint *)(lVar27 + lVar38 * 0x5c + 0x40);
      if (*(uint *)(lVar42 + 0x18) <= uVar54) goto LAB_035575f4;
      lVar27 = lVar27 + lVar38 * 0x5c;
      *(undefined4 *)(lVar27 + 0x74) = *(undefined4 *)(lVar42 + (long)(int)uVar54 * 0x178 + 0x128);
      *(undefined4 *)(lVar27 + 0x78) = *(undefined4 *)(lVar27 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar20 = FUN_026b82c4(uVar37,0);
  if (((((uVar20 & 1) == 0) && (1 < uVar37 - 0x2010)) && (uVar37 != 0xad)) && (uVar37 != 0x2d)) {
    if (bVar7) {
      if (((uVar14 != 1) && ((int)uVar13 < (int)(*(uint *)(lVar40 + 0x18) - 1))) &&
         (((int)uVar13 < (int)*unaff_x20 && ((uVar37 == 0x2019 || (uVar37 == 0x27)))))) {
        if (*(uint *)(lVar40 + 0x18) <= uVar14 - 2) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(lVar40 + lVar28 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b82c4(uVar4,0);
        if ((uVar20 & 1) != 0) {
          if (*(uint *)(lVar40 + 0x18) <= uVar14) goto LAB_035575f4;
          uVar4 = *(undefined2 *)(lVar40 + lVar28 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar20 = FUN_026b82c4(uVar4,0);
          if ((uVar20 & 1) != 0) goto LAB_03555d68;
        }
      }
    }
    else {
      if (uVar14 != 1) {
LAB_0355686c:
        bVar7 = false;
        goto LAB_03555d70;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b81f8(uVar37,0);
      if ((uVar20 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b63d8(uVar37,0);
        if (((uVar37 != 0x200b) && ((uVar20 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
      }
    }
    if (uVar13 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b82c4(uVar37,0);
      iVar15 = (int)fStack0000000000000128;
      if ((uVar20 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar15 = uVar14 - 2;
    }
    lVar42 = *in_stack_00000170;
    if (lVar42 == 0) goto LAB_035574b8;
    lVar27 = *(long *)(lVar42 + 0x40);
    if (lVar27 == 0) goto LAB_035574b8;
    uVar54 = *(uint *)(lVar42 + 0x24);
    iVar16 = *(int *)(lVar27 + 0x18);
    if (iVar16 < (int)(uVar54 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar42 + 0x40),iVar16 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar42 = *in_stack_00000170;
      if (lVar42 == 0) goto LAB_035574b8;
    }
    lVar42 = *(long *)(lVar42 + 0x40);
    if (lVar42 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar42 + 0x18) <= uVar54) goto LAB_035575f4;
    lVar42 = lVar42 + (long)(int)uVar54 * 0x18;
    *(long **)(lVar42 + 0x20) = unaff_x19;
    *(float *)(lVar42 + 0x28) = fStack0000000000000158;
    *(int *)(lVar42 + 0x2c) = iVar15;
    *(int *)(lVar42 + 0x30) = (iVar15 - (int)fStack0000000000000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar42 = unaff_x19[0x6d];
    if (lVar42 == 0) goto LAB_035574b8;
    lVar27 = *(long *)(lVar42 + 0x50);
    *(int *)(lVar42 + 0x24) = *(int *)(lVar42 + 0x24) + 1;
    if (lVar27 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= uVar32) goto LAB_035575f4;
    lVar27 = lVar27 + lVar38 * 0x5c;
    bVar7 = false;
    fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
    *(int *)(lVar27 + 0x30) = *(int *)(lVar27 + 0x30) + 1;
  }
  else {
    if (!bVar7) {
      fStack0000000000000158 = (float)uVar13;
    }
    if (uVar13 == *unaff_x20 - 1) {
      lVar42 = *in_stack_00000170;
      if (lVar42 == 0) goto LAB_035574b8;
      lVar27 = *(long *)(lVar42 + 0x40);
      if (lVar27 == 0) goto LAB_035574b8;
      uVar54 = *(uint *)(lVar42 + 0x24);
      iVar15 = *(int *)(lVar27 + 0x18);
      if (iVar15 < (int)(uVar54 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar42 + 0x40),iVar15 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar42 = *in_stack_00000170;
        if (lVar42 == 0) goto LAB_035574b8;
      }
      lVar42 = *(long *)(lVar42 + 0x40);
      if (lVar42 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar42 + 0x18) <= uVar54) goto LAB_035575f4;
      lVar42 = lVar42 + (long)(int)uVar54 * 0x18;
      *(long **)(lVar42 + 0x20) = unaff_x19;
      *(float *)(lVar42 + 0x28) = fStack0000000000000158;
      *(uint *)(lVar42 + 0x2c) = uVar13;
      *(uint *)(lVar42 + 0x30) = uVar14 - (int)fStack0000000000000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar42 = unaff_x19[0x6d];
      if (lVar42 == 0) goto LAB_035574b8;
      lVar27 = *(long *)(lVar42 + 0x50);
      *(int *)(lVar42 + 0x24) = *(int *)(lVar42 + 0x24) + 1;
      if (lVar27 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar32) goto LAB_035575f4;
      lVar27 = lVar27 + lVar38 * 0x5c;
      fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
      *(int *)(lVar27 + 0x30) = *(int *)(lVar27 + 0x30) + 1;
    }
LAB_03555d68:
    bVar7 = true;
  }
LAB_03555d70:
  if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
  goto LAB_035574b8;
  uVar54 = *(uint *)(lVar42 + 0x18);
  if (uVar54 <= uVar13) goto LAB_035575f4;
  if ((*(byte *)(lVar42 + lVar35 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar11) {
LAB_03555da0:
      if (uVar54 <= uVar14 - 2) goto LAB_035575f4;
      lVar38 = *unaff_x19;
      uVar54 = *(uint *)(lVar42 + lVar28 + -0x330);
      uVar51 = *(undefined4 *)(lVar42 + lVar28 + -0x2f8);
LAB_035562ec:
      pcVar30 = *(code **)(lVar38 + 0x8d8);
LAB_035562f4:
      uVar55 = (ulong)uVar54;
      uVar52 = (ulong)(uint)_bStack0000000000000070;
      uVar53 = (ulong)_bStack0000000000000074;
      (*pcVar30)(fStack0000000000000078,uVar52,uVar53,uVar55,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar51);
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar42 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar42 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar42 = *(long *)puVar8;
      }
LAB_03556348:
      bVar11 = false;
      fVar65 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar42 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_03556254:
      bVar11 = false;
    }
  }
  else {
    lVar42 = lVar42 + lVar35 * 0x178;
    iVar15 = *(int *)(lVar42 + 0x68);
    *(int *)(lVar42 + 0x16c) = iVar17;
    if ((((int)unaff_x19[0x65] < (int)uVar13) || ((int)unaff_x19[0x66] < (int)uVar32)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar15 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar20 = FUN_026b63d8(uVar37,0);
    if ((uVar37 != 0x200b) && ((uVar20 & 1) == 0)) {
      lVar42 = *in_stack_00000170;
      if ((lVar42 == 0) || (lVar38 = *(long *)(lVar42 + 0x38), lVar38 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar38 + 0x18) <= uVar13) goto LAB_035575f4;
      fVar45 = *(float *)(lVar38 + lVar35 * 0x178 + 0x160);
      if (fVar65 <= fVar45) {
        fVar65 = fVar45;
      }
      if (fStack0000000000000100 <= ABS(fVar46)) {
        fStack0000000000000100 = ABS(fVar46);
      }
      if (iVar15 != in_stack_00000068._4_4_) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar42 = *in_stack_00000170;
          if (lVar42 == 0) goto LAB_035574b8;
          lVar38 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar38 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar38 + 0x15a8);
      }
      lVar42 = *(long *)(lVar42 + 0x38);
      if (lVar42 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar42 + 0x18) <= uVar13) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar47 = *(float *)(lVar42 + lVar35 * 0x178 + 0x14c);
      fVar45 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar47 = fVar47 + fVar65 * fVar45;
      if (fVar47 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar47;
      }
      uVar52 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar15;
    }
    if (!bVar11) {
      bVar11 = false;
      if ((((uVar37 == 0xd) || ((uVar37 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar13)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_03556364;
      if (uVar13 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b97f8(uVar37,0);
        if ((uVar20 & 1) != 0) goto LAB_03556254;
      }
      if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar42 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar42 = lVar42 + lVar35 * 0x178;
      in_stack_00000088._4_4_ = *(float *)(lVar42 + 0x160);
      fStack0000000000000078 = *(float *)(lVar42 + 0x11c);
      uVar53 = (ulong)(uint)fStack0000000000000078;
      bVar11 = fVar65 != 0.0;
      fVar45 = in_stack_00000088._4_4_;
      if (bVar11) {
        fVar45 = fVar65;
      }
      fVar65 = fVar45;
      uVar63 = *(undefined4 *)(lVar42 + 0x168);
      _bStack0000000000000074 = 0;
      fVar45 = fVar46;
      if (bVar11) {
        fVar45 = fStack0000000000000100;
      }
      uVar52 = (ulong)(uint)fVar45;
      _bStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar45;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 != 0) && (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 != 0))
      {
        if (uVar13 < *(uint *)(lVar42 + 0x18)) {
          lVar42 = lVar42 + lVar35 * 0x178;
          lVar38 = *unaff_x19;
          uVar54 = *(uint *)(lVar42 + 0x128);
          uVar51 = *(undefined4 *)(lVar42 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((uVar13 == uVar5) || ((int)uVar6 <= (int)uVar13)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b63d8(uVar37,0);
      if ((*in_stack_00000170 != 0) && (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 != 0))
      {
        lVar38 = lVar35;
        uVar54 = uVar13;
        if (uVar37 == 0x200b || (uVar20 & 1) != 0) {
          lVar38 = lVar19;
          uVar54 = uVar6;
        }
        if (uVar54 < *(uint *)(lVar42 + 0x18)) {
          lVar42 = lVar42 + lVar38 * 0x178;
          uVar54 = *(uint *)(lVar42 + 0x128);
          uVar51 = *(undefined4 *)(lVar42 + 0x160);
          pcVar30 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 != 0))
      {
        uVar54 = *(uint *)(lVar42 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar13 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar42 + 0x18) <= uVar14) goto LAB_035575f4;
      uVar20 = FUN_03567ad8(uVar63,*(undefined4 *)(lVar42 + lVar28),0);
      if ((uVar20 & 1) == 0) {
        if ((*in_stack_00000170 != 0) &&
           (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 != 0)) {
          if (uVar13 < *(uint *)(lVar42 + 0x18)) {
            lVar42 = lVar42 + lVar35 * 0x178;
            uVar55 = (ulong)*(uint *)(lVar42 + 0x128);
            uVar53 = (ulong)_bStack0000000000000074;
            uVar52 = (ulong)(uint)_bStack0000000000000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000078,uVar52,uVar53,uVar55,fStack0000000000000104,0,
                       in_stack_00000088._4_4_,*(undefined4 *)(lVar42 + 0x160));
            puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar42 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar42 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar42 = *(long *)puVar8;
            }
            goto LAB_03556348;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
    }
    bVar11 = true;
  }
LAB_03556364:
  if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar42 + 0x18) <= uVar13) goto LAB_035575f4;
  if (lVar33 == 0) goto LAB_035574b8;
  uVar54 = *(uint *)(lVar42 + lVar35 * 0x178 + 400);
  fVar45 = (float)FUN_03776a30(lVar33 + 0x50,0);
  if ((uVar54 >> 6 & 1) == 0) {
    if ((_fStack0000000000000128 & 0x100000000) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar42 + 0x18) <= uVar14 - 2) goto LAB_035575f4;
      uVar54 = *(uint *)(lVar42 + lVar28 + -0x330);
      fVar60 = *(float *)(lVar42 + lVar28 + -0x30c);
      pcVar30 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar55 = (ulong)uVar54;
      uVar52 = (ulong)(uint)fStack000000000000009c;
      uVar53 = (ulong)(uint)fStack0000000000000098;
      (*pcVar30)(fStack00000000000000a0,uVar52,uVar53,uVar55,
                 fStack00000000000000a8 * fVar45 + fVar60,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_03556948:
    _fStack0000000000000128 = _fStack0000000000000128 & 0xffffffff;
  }
  else {
    lVar42 = *in_stack_00000170;
    if ((lVar42 == 0) || (lVar38 = *(long *)(lVar42 + 0x38), lVar38 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar38 + 0x18) <= uVar13) goto LAB_035575f4;
    *(int *)(lVar38 + lVar35 * 0x178 + 0x174) = iVar17;
    if ((((int)unaff_x19[0x65] < (int)uVar13) || ((int)unaff_x19[0x66] < (int)uVar32)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar38 + lVar35 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar37 == 0xd) || ((uVar37 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar13)) ||
       ((_fStack0000000000000128 & 0x100000000) != 0 || !bVar1)) {
LAB_035564e8:
      if ((_fStack0000000000000128 & 0x100000000) == 0) goto LAB_03556948;
    }
    else {
      if (uVar13 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b97f8(uVar37,0);
        if ((uVar20 & 1) != 0) goto LAB_035564e8;
        lVar42 = *in_stack_00000170;
        if (lVar42 == 0) goto LAB_035574b8;
      }
      lVar42 = *(long *)(lVar42 + 0x38);
      if (lVar42 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar42 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar42 = lVar42 + lVar35 * 0x178;
      fStack0000000000000040 = *(float *)(lVar42 + 0x60);
      fStack0000000000000038 = *(float *)(lVar42 + 0x14c);
      uVar52 = (ulong)(uint)fStack0000000000000038;
      fStack00000000000000a0 = *(float *)(lVar42 + 0x11c);
      uVar53 = (ulong)(uint)fStack00000000000000a0;
      fStack00000000000000a8 = *(float *)(lVar42 + 0x160);
      fStack000000000000009c = fVar45 * fStack00000000000000a8 + fStack0000000000000038;
      fStack0000000000000098 = 0.0;
    }
    uVar54 = *unaff_x20;
    if (uVar54 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 != 0) && (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 != 0))
      {
        if (uVar13 < *(uint *)(lVar42 + 0x18)) {
          lVar42 = lVar42 + lVar35 * 0x178;
          lVar19 = *unaff_x19;
          uVar54 = *(uint *)(lVar42 + 0x128);
          fVar60 = *(float *)(lVar42 + 0x14c);
LAB_03556654:
          pcVar30 = *(code **)(lVar19 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (uVar13 == uVar5) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b63d8(uVar37,0);
      if ((*in_stack_00000170 != 0) && (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 != 0))
      {
        uVar54 = *(uint *)(lVar42 + 0x18);
        if (uVar37 == 0x200b || (uVar20 & 1) != 0) {
          if (uVar54 <= uVar6) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar19 = lVar35;
          if (uVar54 <= uVar13) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar42 = lVar42 + lVar19 * 0x178;
        fVar60 = *(float *)(lVar42 + 0x14c);
        uVar54 = *(uint *)(lVar42 + 0x128);
        pcVar30 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar13 < (int)uVar54) {
      lVar42 = *in_stack_00000170;
      if ((lVar42 != 0) && (lVar38 = *(long *)(lVar42 + 0x38), lVar38 != 0)) {
        if (uVar14 < *(uint *)(lVar38 + 0x18)) {
          if (*(float *)(lVar38 + lVar28 + -0x108) == fStack0000000000000040) {
            fVar47 = *(float *)(lVar38 + lVar28 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar52 = (ulong)(uint)fStack0000000000000038;
            uVar20 = FUN_03567bac(fVar60 + fVar47,uVar52,0);
            if ((uVar20 & 1) != 0) {
              uVar54 = *unaff_x20;
              goto LAB_03556744;
            }
            lVar42 = *in_stack_00000170;
            if (lVar42 == 0) goto LAB_035574b8;
          }
          lVar42 = *(long *)(lVar42 + 0x38);
          if (lVar42 != 0) {
            uVar54 = *(uint *)(lVar42 + 0x18);
            if ((int)uVar13 <= (int)uVar6) goto FUN_035568e8;
            if (uVar6 < uVar54) goto LAB_035568f0;
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_03556744:
    if ((int)uVar13 < (int)uVar54) {
      iVar15 = FUN_036d3364(lVar33,0);
      if (*(uint *)(lVar40 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar42 = *(long *)(lVar40 + lVar28 + -0x130);
      if (lVar42 == 0) goto LAB_035574b8;
      iVar16 = FUN_036d3364(lVar42,0);
      if (iVar15 != iVar16) goto LAB_03556628;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 != 0))
      {
        if (uVar14 - 2 < *(uint *)(lVar42 + 0x18)) {
          lVar19 = *unaff_x19;
          uVar54 = *(uint *)(lVar42 + lVar28 + -0x330);
          fVar60 = *(float *)(lVar42 + lVar28 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    _fStack0000000000000128 = CONCAT44(1,fStack0000000000000128);
  }
  if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
  goto LAB_035574b8;
  uVar54 = (uint)*(undefined8 *)(lVar42 + 0x18);
  if (uVar54 <= uVar13) goto LAB_035575f4;
  if ((*(byte *)(lVar42 + lVar35 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar10) {
      uVar53 = (ulong)uStack00000000000000c0;
      uVar52 = (ulong)(uint)fStack00000000000000dc;
      uVar55 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar52,uVar53,uVar55,fStack00000000000000d0,uVar53);
    }
LAB_035569b4:
    bVar10 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar13) || ((int)unaff_x19[0x66] < (int)uVar32)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar42 + lVar35 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar10) {
      if ((((uVar37 == 0xd) || ((uVar37 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar13)) || (!bVar1)
         ) goto LAB_035569b4;
      if (uVar13 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b97f8(uVar37,0);
        if ((uVar20 & 1) != 0) goto LAB_035569b4;
      }
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar19 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar19 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar19 = *(long *)puVar8;
      }
      if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
      goto LAB_035574b8;
      uVar54 = (uint)*(undefined8 *)(lVar42 + 0x18);
      if (uVar54 <= uVar13) goto LAB_035575f4;
      lVar19 = *(long *)(lVar19 + 0xb8);
      lVar33 = lVar42 + lVar35 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar33 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar33 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar19 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar19 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar33 + 0x18c);
      fStack00000000000000c8 = *(float *)(lVar19 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar19 + 0x15a4);
      uStack00000000000000c0 = 0;
    }
    if (uVar54 <= uVar13) goto LAB_035575f4;
    lVar42 = lVar42 + lVar35 * 0x178;
    fVar45 = *(float *)(lVar42 + 0x128);
    fVar48 = *(float *)(lVar42 + 0x188);
    uVar18 = *(undefined8 *)(lVar42 + 0x17c);
    fVar58 = *(float *)(lVar42 + 0x184);
    uVar21 = *(undefined8 *)(lVar42 + 0x184);
    fVar56 = *(float *)(lVar42 + 0x18c);
    fVar60 = *(float *)(lVar42 + 0x11c);
    fVar61 = *(float *)(lVar42 + 0x148);
    fVar47 = *(float *)(lVar42 + 0x150);
    in_stack_00000178 = uVar18;
    fStack0000000000000180 = fVar58;
    fStack0000000000000184 = fVar48;
    in_stack_00000188 = fVar56;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar20 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar42 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar20 & 1) == 0) {
      if (*(int *)(lVar42 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar42);
      }
      fVar45 = fVar45 + (float)in_stack_000017b8;
      uVar53 = (ulong)(uint)fVar45;
      fVar60 = fVar60 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar47 = fVar47 - in_stack_000017c0;
      uVar52 = (ulong)(uint)fVar47;
      fVar61 = fVar61 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar55 = (ulong)(uint)fVar61;
      if (fVar60 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar60;
      }
      if (fVar47 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar47;
      }
      if (fStack00000000000000c8 <= fVar45) {
        fStack00000000000000c8 = fVar45;
      }
      if (fStack00000000000000d0 <= fVar61) {
        fStack00000000000000d0 = fVar61;
      }
    }
    else {
      if (*(int *)(lVar42 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar42);
      }
      fVar60 = (fVar60 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar55 = (ulong)(uint)fVar60;
      if (fVar47 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar47;
      }
      uVar52 = (ulong)(uint)fStack00000000000000dc;
      uVar53 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar61) {
        fStack00000000000000d0 = fVar61;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar52,uVar53,uVar55,fStack00000000000000d0,uVar53);
      fStack00000000000000dc = fVar47 - fVar56;
      fStack00000000000000c8 = fVar45 + fVar58;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar61 + fVar48;
      fStack00000000000000d8 = fVar60;
      in_stack_000017b0 = uVar18;
      in_stack_000017b8 = uVar21;
      in_stack_000017c0 = fVar56;
    }
    if (((*unaff_x20 == 1) || (uVar13 == uVar5)) || (((int)uVar6 <= (int)uVar13 || (!bVar1)))) {
      uVar53 = (ulong)uStack00000000000000c0;
      uVar52 = (ulong)(uint)fStack00000000000000dc;
      uVar55 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar52,uVar53,uVar55,fStack00000000000000d0,uVar53);
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
  }
  uVar13 = *unaff_x20;
  lVar28 = lVar28 + 0x178;
  _fStack0000000000000128 = CONCAT44(fStack000000000000012c,(int)fStack0000000000000128 + 1);
  bVar1 = (int)uVar13 <= (int)uVar14;
  uVar14 = uVar14 + 1;
  uVar54 = uVar32;
  if (bVar1) goto FUN_03556ed8;
  goto LAB_03554e78;
FUN_03556ed8:
  lVar40 = *in_stack_00000170;
  if (lVar40 != 0) {
    iVar17 = uVar32 + 1;
    plVar41 = (long *)OVRPlugin_Media_TypeInfo;
LAB_03556f00:
    *(uint *)(lVar40 + 0x18) = uVar13;
    lVar28 = unaff_x19[0xd4];
    *(int *)(lVar40 + 0x2c) = iVar17;
    if ((int)uVar13 < 1 || fStack00000000000000d4 == 0.0) {
      fStack00000000000000d4 = 1.4013e-45;
    }
    *(int *)(lVar40 + 0x1c) = (int)lVar28;
    *(float *)(lVar40 + 0x24) = fStack00000000000000d4;
    *(int *)(lVar40 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar20 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar20 & 1) == 0)) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar40 = unaff_x19[0xdf];
    if (lVar40 != 0) {
      (**(code **)(lVar40 + 0x18))
                (*(undefined8 *)(lVar40 + 0x40),*in_stack_00000170,*(undefined8 *)(lVar40 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar17 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar17 != 0x19) {
      lVar40 = unaff_x19[0xe5];
      if (lVar40 == 0) goto LAB_035574b8;
      uVar13 = FUN_03911ee4(lVar40,0);
      FUN_03911f20(lVar40,uVar13 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x60), lVar40 == 0))
      goto LAB_035574b8;
      if (*(int *)(*plVar41 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar40 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar40 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar40 = *(long *)(unaff_x19[0x6d] + 0x60), lVar40 != 0)) {
        if (*(int *)(lVar40 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar40 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar40 = *(long *)(unaff_x19[0x6d] + 0x60), lVar40 != 0)) {
            if (*(int *)(lVar40 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar40 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar40 = *(long *)(unaff_x19[0x6d] + 0x60), lVar40 != 0)) {
                if (*(int *)(lVar40 + 0x18) == 0) goto LAB_035575f4;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar40 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar40 = *(long *)(unaff_x19[0x6d] + 0x60), lVar40 != 0)) {
                    if (*(int *)(lVar40 + 0x18) == 0) goto LAB_035575f4;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar40 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar21 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar13 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar40 = *in_stack_00000170;
                              if (lVar40 != 0) {
                                lVar42 = 0;
                                lVar28 = 0;
                                do {
                                  uVar20 = lVar28 + 1;
                                  if ((long)*(int *)(lVar40 + 0x34) <= (long)uVar20)
                                  goto LAB_03554724;
                                  lVar40 = *(long *)(lVar40 + 0x60);
                                  if (lVar40 == 0) break;
                                  if (*(int *)(*plVar41 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar40 + 0x18) <= uVar20) goto LAB_035575f4;
                                  FUN_03596a20(lVar40 + lVar42 + 0x70,0);
                                  lVar40 = unaff_x19[0xe1];
                                  if (lVar40 == 0) break;
                                  if (*(uint *)(lVar40 + 0x18) <= uVar20) goto LAB_035575f4;
                                  uVar18 = *(undefined8 *)(lVar40 + lVar28 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar23 = FUN_036d35a8(uVar18,0,0);
                                  if ((uVar23 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000170 == 0) ||
                                         (lVar40 = *(long *)(*in_stack_00000170 + 0x60), lVar40 == 0
                                         )) break;
                                      if (*(int *)(*plVar41 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar40 + 0x18) <= uVar20) goto LAB_035575f4;
                                      FUN_03596b20(lVar40 + lVar42 + 0x70,1,0);
                                    }
                                    lVar40 = unaff_x19[0xe1];
                                    if (lVar40 == 0) break;
                                    if (*(uint *)(lVar40 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar40 = *(long *)(lVar40 + lVar28 * 8 + 0x28);
                                    if (lVar40 == 0) break;
                                    lVar40 = UnityEngine_Material__GetColorArray(lVar40,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar19 = *(long *)(*in_stack_00000170 + 0x60), lVar19 == 0))
                                    break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_035575f4;
                                    if (lVar40 == 0) break;
                                    FUN_036a460c(lVar40,*(undefined8 *)(lVar19 + lVar42 + 0x80),0);
                                    lVar40 = unaff_x19[0xe1];
                                    if (lVar40 == 0) break;
                                    if (*(uint *)(lVar40 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar40 = *(long *)(lVar40 + lVar28 * 8 + 0x28);
                                    if (lVar40 == 0) break;
                                    lVar40 = UnityEngine_Material__GetColorArray(lVar40,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar19 = *(long *)(*in_stack_00000170 + 0x60), lVar19 == 0))
                                    break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_035575f4;
                                    if (lVar40 == 0) break;
                                    FUN_036a4810(lVar40,*(undefined8 *)(lVar19 + lVar42 + 0x98),0);
                                    lVar40 = unaff_x19[0xe1];
                                    if (lVar40 == 0) break;
                                    if (*(uint *)(lVar40 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar40 = *(long *)(lVar40 + lVar28 * 8 + 0x28);
                                    if (lVar40 == 0) break;
                                    lVar40 = UnityEngine_Material__GetColorArray(lVar40,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar19 = *(long *)(*in_stack_00000170 + 0x60), lVar19 == 0))
                                    break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_035575f4;
                                    if (lVar40 == 0) break;
                                    FUN_036a48bc(lVar40,*(undefined8 *)(lVar19 + lVar42 + 0xa0),0);
                                    lVar40 = unaff_x19[0xe1];
                                    if (lVar40 == 0) break;
                                    if (*(uint *)(lVar40 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar40 = *(long *)(lVar40 + lVar28 * 8 + 0x28);
                                    if (lVar40 == 0) break;
                                    lVar40 = UnityEngine_Material__GetColorArray(lVar40,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar19 = *(long *)(*in_stack_00000170 + 0x60), lVar19 == 0))
                                    break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_035575f4;
                                    if (lVar40 == 0) break;
                                    FUN_036a4e24(lVar40,*(undefined8 *)(lVar19 + lVar42 + 0xa8),0);
                                    lVar40 = unaff_x19[0xe1];
                                    if (lVar40 == 0) break;
                                    if (*(uint *)(lVar40 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar40 = *(long *)(lVar40 + lVar28 * 8 + 0x28);
                                    if ((lVar40 == 0) ||
                                       (lVar40 = UnityEngine_Material__GetColorArray(lVar40,0),
                                       lVar40 == 0)) break;
                                    FUN_036aa280(lVar40,0);
                                    lVar40 = unaff_x19[0xe1];
                                    if (lVar40 == 0) break;
                                    if (*(uint *)(lVar40 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar40 = *(long *)(lVar40 + lVar28 * 8 + 0x28);
                                    if (lVar40 == 0) break;
                                    lVar40 = FUN_037b514c(lVar40,0);
                                    lVar19 = unaff_x19[0xe1];
                                    if (lVar19 == 0) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar19 = *(long *)(lVar19 + lVar28 * 8 + 0x28);
                                    if ((lVar19 == 0) ||
                                       (uVar18 = UnityEngine_Material__GetColorArray(lVar19,0),
                                       lVar40 == 0)) break;
                                    FUN_0390f3a4(lVar40,uVar18,0);
                                    lVar40 = unaff_x19[0xe1];
                                    if (lVar40 == 0) break;
                                    if (*(uint *)(lVar40 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar40 = *(long *)(lVar40 + lVar28 * 8 + 0x28);
                                    if ((lVar40 == 0) ||
                                       (lVar40 = FUN_037b514c(lVar40,0), lVar40 == 0)) break;
                                    FUN_0390eec8(uVar21,uVar52,uVar53,uVar55,lVar40,0);
                                    lVar40 = unaff_x19[0xe1];
                                    if (lVar40 == 0) break;
                                    if (*(uint *)(lVar40 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar40 = *(long *)(lVar40 + lVar28 * 8 + 0x28);
                                    if ((lVar40 == 0) ||
                                       (lVar40 = FUN_037b514c(lVar40,0), lVar40 == 0)) break;
                                    FUN_0390ed78(lVar40,uVar13 & 1,0);
                                    lVar40 = unaff_x19[0xe1];
                                    if (lVar40 == 0) break;
                                    if (*(uint *)(lVar40 + 0x18) <= uVar20) goto LAB_035575f4;
                                    plVar39 = *(long **)(lVar40 + lVar28 * 8 + 0x28);
                                    uVar14 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar39 == (long *)0x0) break;
                                    (**(code **)(*plVar39 + 0x2c8))
                                              (plVar39,uVar14 & 1,*(undefined8 *)(*plVar39 + 0x2d0))
                                    ;
                                  }
                                  lVar40 = *in_stack_00000170;
                                  lVar28 = lVar28 + 1;
                                  lVar42 = lVar42 + 0x50;
                                } while (lVar40 != 0);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


