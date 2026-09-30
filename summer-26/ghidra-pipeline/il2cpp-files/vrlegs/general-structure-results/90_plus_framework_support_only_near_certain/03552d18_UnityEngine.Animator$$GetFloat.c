/*
FUNCTION_NAME: UnityEngine.Animator$$GetFloat
ENTRY_POINT: 03552d18
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


void UnityEngine_Animator__GetFloat(float param_1,float param_2)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  int *piVar23;
  long lVar24;
  ulong uVar25;
  undefined1 uVar26;
  char cVar27;
  int in_w8;
  undefined4 *puVar28;
  long lVar29;
  long lVar30;
  float *pfVar31;
  code *pcVar32;
  uint uVar33;
  float *pfVar34;
  uint uVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  uint uVar40;
  long lVar41;
  long *unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  long *plVar42;
  uint unaff_w23;
  ulong unaff_x24;
  uint unaff_w25;
  long *plVar43;
  long unaff_x26;
  uint unaff_w27;
  uint unaff_w28;
  long lVar44;
  undefined8 *unaff_x29;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined4 uVar53;
  float fVar54;
  ulong uVar55;
  uint uVar56;
  ulong uVar57;
  float fVar58;
  float unaff_s8;
  float fVar59;
  float unaff_s9;
  float fVar60;
  float unaff_s10;
  float unaff_s11;
  float fVar61;
  float unaff_s12;
  float fVar62;
  float fVar63;
  ulong unaff_d13;
  undefined4 uVar64;
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
  byte in_stack_00000070;
  uint uStack0000000000000074;
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
  ulong in_stack_000000e8;
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
  undefined4 in_stack_000008b0;
  undefined4 in_stack_00000c18;
  undefined4 in_stack_00000c1c;
  undefined8 in_stack_00000c20;
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
  
code_r0x03552d18:
  if (in_w8 < (int)unaff_x19[0x49]) {
LAB_03557558:
    fVar52 = unaff_s11;
    if (0.0 < param_2) {
      fVar52 = unaff_s11 / (1.0 - param_2);
    }
    param_2 = param_2 + (unaff_s11 - unaff_s12 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar52;
LAB_035574e8:
    if (param_1 <= param_2) {
      param_2 = param_1;
    }
    *(float *)((long)unaff_x19 + 0x2d4) = param_2;
    return;
  }
LAB_03552d24:
  fVar54 = *(float *)((long)unaff_x19 + 0x1e4);
  uVar22 = (ulong)(uint)fVar54;
  fVar52 = *(float *)(unaff_x19 + 0x4a);
  if ((fVar52 < fVar54) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
LAB_03557594:
    fVar45 = (fVar54 - *(float *)(unaff_x19 + 0x48)) * 0.5;
    if (fVar45 <= DAT_00d38b84) {
      fVar45 = DAT_00d38b84;
    }
    *(float *)((long)unaff_x19 + 0x23c) = fVar54;
    fVar54 = fVar54 - fVar45;
LAB_03557524:
    fVar54 = fVar54 * 20.0 + 0.5;
    fVar45 = DAT_00d38e60;
    if (fVar54 != INFINITY) {
      fVar45 = (float)(int)fVar54 / 20.0;
    }
    if (fVar45 <= fVar52) {
      fVar45 = fVar52;
    }
LAB_03554658:
    *(float *)((long)unaff_x19 + 0x1e4) = fVar45;
    return;
  }
LAB_03552d44:
  puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  uVar12 = (uint)unaff_x26;
  lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (*(int *)(lVar24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar24 = *(long *)puVar7;
  }
  iVar11 = *(int *)(*(long *)(lVar24 + 0xb8) + 0xe78);
  iVar14 = (int)unaff_x24;
  uVar17 = in_stack_000017dc;
  if (((iVar11 != iStack0000000000000034) && (iVar11 != -1)) && (((in_stack_00000070 ^ 1) & 1) == 0)
     ) {
    if (*(int *)(lVar24 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    in_stack_000017a8 = FUN_0358c15c();
    if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
    goto LAB_035574b8;
    uVar56 = *unaff_x20 - 1;
    if (*(uint *)(lVar24 + 0x18) <= uVar56) goto LAB_035575f4;
    iStack0000000000000034 = iVar11;
    if (*(short *)(lVar24 + (long)(int)uVar56 * (long)iVar14 + 0x20) == 0xad) {
      bVar6 = false;
      in_stack_000017c8 = CONCAT44(0x2d,uVar56);
      *unaff_x20 = uVar56;
      in_stack_000017a8 = in_stack_000017a8 - 1;
      goto LAB_03550bd0;
    }
  }
  if (unaff_s10 <= fStack00000000000000c4) {
switchD_03552ef4_caseD_0:
    uVar22 = unaff_d13;
    FUN_0358cbd4(fStack0000000000000058,unaff_d13,fStack00000000000000d4,
                 *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,in_stack_00000140,
                 in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
  }
  else {
    if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
      *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
    }
    fVar52 = fStack00000000000000c4;
    if ((char)unaff_x19[0x47] != '\0') {
      fVar52 = *(float *)(unaff_x19 + 0x59);
      if ((fVar52 < *(float *)((long)unaff_x19 + 700)) &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar54 = *(float *)((long)unaff_x19 + 700) +
                 ((in_stack_00000018._4_4_ - unaff_s10) / (float)((int)unaff_x19[0x95] + 1)) /
                 fStack0000000000000058;
        if (fVar54 <= fVar52) {
          fVar54 = fVar52;
        }
LAB_03554b48:
        *(float *)((long)unaff_x19 + 700) = fVar54;
        return;
      }
      param_2 = *(float *)((long)unaff_x19 + 0x2d4);
      param_1 = *(float *)(unaff_x19 + 0x5a) / 100.0;
      if ((param_2 < param_1) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
      goto LAB_03557558;
      fVar54 = *(float *)((long)unaff_x19 + 0x1e4);
      uVar22 = (ulong)(uint)fVar54;
      fVar52 = *(float *)(unaff_x19 + 0x4a);
      if ((fVar52 < fVar54) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
      goto LAB_03557594;
    }
    switch((int)unaff_x19[0x5c]) {
    case 0:
    case 2:
    case 4:
      goto switchD_03552ef4_caseD_0;
    case 1:
      lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      }
      lVar30 = *(long *)(lVar24 + 0xb8);
      lVar24 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
      if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = FUN_01a46ff8(lVar24);
      }
      piVar23 = (int *)thunk_FUN_01a59484(lVar30 + 0x11f0,
                                          *(long *)(*(long *)(*(long *)(lVar24 + 0xc0) + 8) + 0x80)
                                          + 0xa0);
      if (*piVar23 == 0) {
        bVar6 = false;
        goto LAB_03554580;
      }
      lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      }
      FUN_0209b778(*(long *)(lVar24 + 0xb8) + 0x11f0,&stack0x000008a0,
                   *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
      memcpy(&stack0x00001008,&stack0x000008a0,0x378);
      iVar11 = FUN_0358c15c();
      bVar6 = false;
      goto LAB_035529e8;
    case 3:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      in_stack_000017a8 = FUN_0358c15c();
      bVar6 = false;
      goto UnityEngine_AnimationClip__get_hasMotionCurves;
    case 5:
      *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
      uVar22 = unaff_d13;
      FUN_0358cbd4(fStack0000000000000058,unaff_d13,fStack00000000000000d4,
                   *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,in_stack_00000140
                   ,in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
      *(undefined4 *)(unaff_x19 + 0x9a) = 0;
      *(undefined4 *)(unaff_x19 + 0x9b) = 0;
      *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
      *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
      break;
    case 6:
      lVar24 = unaff_x19[0x5d];
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_036cee6c(lVar24,0,0);
      if ((uVar20 & 1) != 0) {
        plVar43 = (long *)unaff_x19[0x5d];
        uVar18 = (**(code **)(*unaff_x19 + 0x518))();
        if (plVar43 == (long *)0x0) goto LAB_035574b8;
        (**(code **)(*plVar43 + 0x528))(plVar43,uVar18,*(undefined8 *)(*plVar43 + 0x530));
        lVar24 = unaff_x19[0x5d];
        if (lVar24 == 0) goto LAB_035574b8;
        *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
        FUN_0357ee30(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
        plVar43 = (long *)unaff_x19[0x5d];
        if (plVar43 == (long *)0x0) goto LAB_035574b8;
        (**(code **)(*plVar43 + 0x7a8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7b0));
        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      }
      bVar6 = false;
      goto LAB_03552b00;
    default:
      bVar6 = false;
      goto LAB_03552f50;
    }
  }
  in_stack_00000070 = 1;
  bVar6 = false;
  in_stack_00000068._4_4_ = 1;
LAB_03550bd0:
  fVar52 = (float)unaff_d13;
  in_stack_000017a8 = in_stack_000017a8 + 1;
  lVar24 = unaff_x19[0x8f];
  if (lVar24 != 0) {
    if ((int)in_stack_000017a8 < (int)*(uint *)(lVar24 + 0x18)) {
      if (*(uint *)(lVar24 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
      in_stack_000017dc = *(uint *)(lVar24 + (long)(int)in_stack_000017a8 * 0xc + 0x20);
      if (in_stack_000017dc == 0) goto LAB_0355459c;
      if (5 < in_stack_00000168._4_4_) {
        uVar18 = FUN_0276793c(&stack0x000017dc,0);
        uVar19 = FUN_0276793c(&stack0x000017a8,0);
        uVar18 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar18,
                              *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar19,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_0367ae18(uVar18,0);
        in_stack_000017c8 = CONCAT44(3,*unaff_x20);
      }
      if ((*(char *)((long)unaff_x19 + 0x302) != '\0') && (in_stack_000017dc == 0x3c))
      goto code_r0x0355094c;
      if ((*in_stack_00000170 != 0) && (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 != 0))
      {
        if (*unaff_x20 < *(uint *)(lVar24 + 0x18)) {
          lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
          *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar24 + 0x2c);
          *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar24 + 0x58);
          unaff_x19[0x20] = *(long *)(lVar24 + 0x38);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          goto LAB_035509d4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_0355459c:
    fVar52 = (float)uVar22;
    if (((char)unaff_x19[0x47] != '\0') &&
       (fVar52 = DAT_00d389f8,
       DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
      fVar52 = *(float *)((long)unaff_x19 + 0x1e4);
      fVar54 = *(float *)((long)unaff_x19 + 0x254);
      if ((fVar52 < fVar54) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
          *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
        }
        fVar45 = (*(float *)((long)unaff_x19 + 0x23c) - fVar52) * 0.5;
        if (fVar45 <= DAT_00d38b84) {
          fVar45 = DAT_00d38b84;
        }
        *(float *)(unaff_x19 + 0x48) = fVar52;
        fVar52 = (fVar52 + fVar45) * 20.0 + 0.5;
        fVar45 = DAT_00d38e60;
        if (fVar52 != INFINITY) {
          fVar45 = (float)(int)fVar52 / 20.0;
        }
        if (fVar54 <= fVar45) {
          fVar45 = fVar54;
        }
        goto LAB_03554658;
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
    puVar7 = PTR_DAT_03cbdf88;
    if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
      uVar18 = FUN_0276793c(_fStack0000000000000038,0);
      uVar19 = FUN_0277fa90(_fStack0000000000000040,0);
      uVar18 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar18,
                            *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar19,0);
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
      }
      FUN_0367a6ec(uVar18,0);
    }
    puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar17 == 3)))) {
      (**(code **)(*unaff_x19 + 0x918))();
      goto LAB_03554724;
    }
    lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar24 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar24 = *(long *)puVar8;
    }
    plVar43 = (long *)OVRPlugin_Media_TypeInfo;
    lVar24 = **(long **)(lVar24 + 0xb8);
    if (lVar24 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_035575f4;
    iVar11 = *(int *)(lVar24 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
    if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x60), lVar24 == 0))
    goto LAB_035574b8;
    if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(int *)(lVar24 + 0x18) == 0) goto LAB_035575f4;
    FUN_035968e8(lVar24 + 0x20,0,0);
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbded8);
      DAT_0411f172 = '\x01';
    }
    iVar14 = (int)unaff_x19[0x4e];
    in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
    in_stack_000000e8 = *(ulong *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
    lVar24 = unaff_x19[0xe3];
    in_stack_000000b8 = (long *)in_stack_000000e8;
    fStack00000000000000c4 = in_stack_000000f8._4_4_;
    if (iVar14 < 0x401) {
      if (iVar14 == 0x100) {
        if (lVar24 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar24 + 0x18) < 2) goto LAB_035575f4;
        uVar18 = *(undefined8 *)(lVar24 + 0x30);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*in_stack_00000170 == 0) ||
             (lVar30 = *(long *)(*in_stack_00000170 + 0x58), lVar30 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar30 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
          fVar52 = *(float *)(lVar30 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
        }
        else {
          fVar52 = *(float *)(unaff_x19 + 0x97);
        }
        fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar24 + 0x2c);
        fVar52 = (0.0 - fVar52) - fStack0000000000000020;
      }
      else if (iVar14 == 0x200) {
        if (lVar24 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0)) goto LAB_035575f4;
        fStack00000000000000c4 = (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
        uVar18 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5,
                          ((float)*(undefined8 *)(lVar24 + 0x24) +
                          (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*in_stack_00000170 == 0) ||
             (lVar24 = *(long *)(*in_stack_00000170 + 0x58), lVar24 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar24 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
          lVar24 = lVar24 + (long)(int)uStack0000000000000030 * 0x14;
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
          fVar52 = ((fStack0000000000000020 + *(float *)(lVar24 + 0x28) + *(float *)(lVar24 + 0x30))
                   - fStack0000000000000024) * -0.5 + 0.0;
        }
        else {
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
          fVar52 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_000017d8) -
                   fStack0000000000000024) * -0.5 + 0.0;
        }
      }
      else {
        if (iVar14 != 0x400) goto LAB_03554c4c;
        if (lVar24 == 0) goto LAB_035574b8;
        if (*(int *)(lVar24 + 0x18) == 0) goto LAB_035575f4;
        uVar18 = *(undefined8 *)(lVar24 + 0x24);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*in_stack_00000170 == 0) ||
             (lVar30 = *(long *)(*in_stack_00000170 + 0x58), lVar30 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar30 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
          in_stack_000017d8 = *(float *)(lVar30 + (long)(int)uStack0000000000000030 * 0x14 + 0x30);
        }
        fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar24 + 0x20);
        fVar52 = fStack0000000000000024 + (0.0 - in_stack_000017d8);
      }
LAB_03554c3c:
      in_stack_000000b8 =
           (long *)CONCAT44((float)((ulong)uVar18 >> 0x20) + 0.0,(float)uVar18 + fVar52);
    }
    else if (iVar14 == 0x800) {
      if (lVar24 == 0) goto LAB_035574b8;
      if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0)) goto LAB_035575f4;
      fVar52 = fStack000000000000002c + 0.0 +
               (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
      in_stack_000000b8 =
           (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5 + 0.0,
                            ((float)*(undefined8 *)(lVar24 + 0x24) +
                            (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5 + 0.0);
      fStack00000000000000c4 = fVar52;
    }
    else {
      if (iVar14 == 0x1000) {
        if (lVar24 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar24 + 0x18) != 1) && (*(int *)(lVar24 + 0x18) != 0)) {
          uVar18 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar24 + 0x24) +
                            (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5);
          fStack00000000000000c4 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
          fVar52 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                          *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
          goto LAB_03554c3c;
        }
        goto LAB_035575f4;
      }
      if (iVar14 == 0x2000) {
        if (lVar24 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0)) goto LAB_035575f4;
        fVar52 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                       fStack0000000000000024) * 0.5;
        in_stack_000000b8 =
             (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar24 + 0x24) +
                              (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5 + fVar52);
        fStack00000000000000c4 =
             fStack000000000000002c + 0.0 +
             (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
      }
    }
LAB_03554c4c:
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    uVar18 = FUN_03912334(unaff_x19[0xe5],0);
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar7);
    }
    uVar22 = FUN_036d35a8(uVar18,0,0);
    lVar24 = FUN_0357f060();
    if (lVar24 == 0) goto LAB_035574b8;
    FUN_036df824(lVar24,0);
    *(float *)(unaff_x19 + 0xe2) = fVar52;
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar14 = FUN_039117fc(unaff_x19[0xe5],0);
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    fVar54 = (float)FUN_03911954(unaff_x19[0xe5],0);
    uVar64 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
    }
    if (DAT_0412df1c == '\0') {
      FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
      DAT_0412df1c = '\x01';
    }
    puVar7 = OVRPlugin_Mesh_TypeInfo;
    lVar24 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if (*(int *)(lVar24 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar24 = *(long *)puVar7;
    }
    puVar28 = *(undefined4 **)(lVar24 + 0xb8);
    uVar20 = (ulong)(uint)puVar28[1];
    uVar55 = (ulong)(uint)puVar28[2];
    uVar57 = (ulong)(uint)puVar28[3];
    FUN_035683a4(*puVar28,uVar20,uVar55,uVar57,&stack0x000017b0,0x4000ffff,0);
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar24 = *in_stack_00000170;
    if (lVar24 == 0) goto LAB_035574b8;
    uVar12 = *unaff_x20;
    if ((int)uVar12 < 1) {
      fStack00000000000000d4 = 0.0;
      iVar11 = 0;
      goto LAB_03556f00;
    }
    lVar24 = *(long *)(lVar24 + 0x38);
    fVar52 = ABS(fVar52);
    fVar45 = 1.0;
    if ((uVar22 & 1) == 0) {
      fVar45 = fVar52;
    }
    if (lVar24 == 0) goto LAB_035574b8;
    bVar10 = false;
    bVar9 = false;
    _fStack0000000000000128 = 0;
    bVar6 = false;
    fStack00000000000000d4 = 0.0;
    fStack0000000000000028 = 0.0;
    fStack0000000000000158 = 0.0;
    in_stack_00000068._4_4_ = 0;
    lVar30 = 0x2e0;
    fVar47 = 0.0;
    fVar65 = 0.0;
    fStack00000000000000c8 = fStack00000000000000d8;
    fStack0000000000000104 =
         *(float *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
    fStack00000000000000d0 = fStack00000000000000dc;
    _in_stack_00000070 = fStack00000000000000dc;
    fStack000000000000009c = fStack00000000000000dc;
    fStack00000000000000a0 = fStack00000000000000d8;
    fStack0000000000000100 = 0.0;
    in_stack_00000088._4_4_ = 0.0;
    fStack0000000000000040 = 0.0;
    fStack00000000000000a8 = 0.0;
    fStack0000000000000038 = 0.0;
    uStack0000000000000074 = uStack00000000000000c0;
    fStack0000000000000078 = fStack00000000000000d8;
    fStack0000000000000098 = (float)uStack00000000000000c0;
    uVar17 = 1;
    uVar56 = 0;
    goto LAB_03554e78;
  }
  goto LAB_035574b8;
code_r0x0355094c:
  *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
  uVar20 = FUN_03586568();
  if (((uVar20 & 1) != 0) &&
     (in_stack_000017a8 = in_stack_0000178c, uVar17 = in_stack_000017dc,
     *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_03550bd0;
LAB_035509d4:
  if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
  goto LAB_035574b8;
  uVar12 = *unaff_x20;
  if (*(uint *)(lVar24 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar44 = (long)(int)uVar12;
  cVar27 = *(char *)(lVar24 + lVar44 * unaff_x24 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  lVar30 = unaff_x19[0x24];
  if ((uint)in_stack_000017c8 == uVar12) {
    in_stack_000017dc = (uint)((ulong)in_stack_000017c8 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    if (in_stack_000017dc == 0x2026) {
      *(long *)(lVar24 + lVar44 * unaff_x24 + 0x30) = unaff_x19[0xca];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar24 + 0x2c) = 0;
      *(long *)(lVar24 + 0x38) = unaff_x19[0xcb];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      uVar12 = *unaff_x20;
      if (*(uint *)(lVar24 + 0x18) <= uVar12) goto LAB_035575f4;
      unaff_w23 = 1;
      *(int *)(lVar24 + (long)(int)uVar12 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      in_stack_000017c8 = CONCAT44(3,uVar12 + 1);
    }
    else if (in_stack_000017dc == 3) {
      if ((*unaff_x21 == 0) || (lVar21 = FUN_03568ac0(*unaff_x21,0), lVar21 == 0))
      goto LAB_035574b8;
      in_stack_00000c18 = 3;
      FUN_0219b634(lVar21,&stack0x00000c18,&stack0x000008a0,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
      if (*(uint *)(lVar24 + 0x18) <= uVar12) goto LAB_035575f4;
      *(ulong *)(lVar24 + lVar44 * unaff_x24 + 0x30) = CONCAT44(in_stack_000008a4,in_stack_000008a0)
      ;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar12 = *(uint *)((long)unaff_x19 + 0x494);
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
  if (((int)uVar12 < *(int *)((long)unaff_x19 + 0x324)) && (in_stack_000017dc != 3)) {
    if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar24 + 0x18) <= uVar12) goto LAB_035575f4;
    lVar24 = lVar24 + (long)(int)uVar12 * (long)iVar14;
    *(undefined1 *)(lVar24 + 0x194) = 0;
    *(undefined2 *)(lVar24 + 0x20) = 0x200b;
    *(undefined4 *)(lVar24 + 100) = 0;
    *unaff_x20 = uVar12 + 1;
    uVar17 = in_stack_000017dc;
    goto LAB_03550bd0;
  }
  iVar11 = *(int *)((long)unaff_x19 + 0x644);
  if (iVar11 == 0) {
    uVar12 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar12 >> 4 & 1) == 0) {
      if ((uVar12 >> 3 & 1) == 0) {
        fStack0000000000000158 = 1.0;
        if ((uVar12 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar20 = FUN_026b812c(in_stack_000017dc,0);
          if ((uVar20 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar12 = FUN_026b8410(in_stack_000017dc,0);
            in_stack_000017dc = uVar12 & 0xffff;
            fStack0000000000000158 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b8070(in_stack_000017dc,0);
        fStack0000000000000158 = 1.0;
        if ((uVar20 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar12 = FUN_026b8594(in_stack_000017dc,0);
          goto LAB_03550fdc;
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b812c(in_stack_000017dc,0);
      fStack0000000000000158 = 1.0;
      if ((uVar20 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar12 = FUN_026b8410(in_stack_000017dc,0);
LAB_03550fdc:
        fStack0000000000000158 = 1.0;
        in_stack_000017dc = uVar12 & 0xffff;
      }
    }
    iVar11 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar11 != 0) goto LAB_03550c00;
LAB_03550fec:
    if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *in_stack_000000e0 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0);
    uVar17 = in_stack_000017dc;
    if (*in_stack_000000e0 == 0) goto LAB_03550bd0;
    if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *unaff_x21 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *in_stack_00000160 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
    goto LAB_035574b8;
    uVar17 = *unaff_x20;
    uVar12 = *(uint *)(lVar24 + 0x18);
    if (uVar12 <= uVar17) goto LAB_035575f4;
    *(undefined4 *)(unaff_x19 + 0x24) =
         *(undefined4 *)(lVar24 + (long)(int)uVar17 * unaff_x24 + 0x58);
    if (unaff_w23 == 0) {
LAB_035510fc:
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar54 = *(float *)(unaff_x19 + 0x3d);
      iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
      lVar24 = unaff_x19[0x20];
    }
    else {
      lVar30 = unaff_x19[0x8f];
      if (lVar30 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
      if ((*(int *)(lVar30 + (long)(int)in_stack_000017a8 * 0xc + 0x20) != 10) ||
         (uVar17 == *(uint *)(unaff_x19 + 0x93))) goto LAB_035510fc;
      if (uVar12 <= uVar17 - 1) goto LAB_035575f4;
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar54 = *(float *)(lVar24 + (long)(int)(uVar17 - 1) * (long)iVar14 + 0x60);
      iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
      lVar24 = *unaff_x21;
    }
    if (lVar24 == 0) goto LAB_035574b8;
    fVar65 = (float)FUN_03776960(lVar24 + 0x50,0);
    fVar45 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar45 = 1.0;
    }
    fVar61 = 0.0;
    fVar47 = 0.0;
    if ((unaff_w23 & in_stack_000017dc == 0x2026) == 0) {
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar47 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar61 = (float)FUN_037769c0(*unaff_x21 + 0x50,0);
    }
    lVar24 = unaff_x19[0xc9];
    if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_035574b8;
    fVar46 = *(float *)((long)unaff_x19 + 0x404);
    fVar48 = *(float *)(lVar24 + 0x2c);
    fVar52 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar62 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar51 = *(float *)((long)unaff_x19 + 0x404);
    fVar49 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
    lVar24 = unaff_x19[0x6d];
    if ((lVar24 == 0) || (lVar30 = *(long *)(lVar24 + 0x38), lVar30 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar30 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    lVar30 = lVar30 + (long)(int)*unaff_x20 * unaff_x24;
    *(undefined4 *)(lVar30 + 0x2c) = 0;
    fVar45 = ((fStack0000000000000158 * fVar54) / (float)iVar11) * fVar65 * fVar45;
    fVar52 = fVar45 * fVar46 * fVar48 * fVar52;
    *(float *)(lVar30 + 0x160) = fVar52;
    uVar12 = *(uint *)(unaff_x19 + 0x24);
    fVar49 = fVar45 * fVar62 * fVar51 * fVar49;
    if (uVar12 == 0) {
      fStack000000000000015c = *(float *)(unaff_x19 + 0xc3);
    }
    else {
      lVar30 = unaff_x19[0xe1];
      if (lVar30 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar30 = *(long *)(lVar30 + (long)(int)uVar12 * 8 + 0x20);
      if (lVar30 == 0) goto LAB_035574b8;
      fStack000000000000015c = *(float *)(lVar30 + 0x10c);
    }
LAB_035514b0:
    unaff_x29 = (undefined8 *)&stack0x000008a0;
    fVar54 = 0.0;
    if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
      fVar54 = fVar52;
    }
  }
  else {
    fStack0000000000000158 = 1.0;
    if (iVar11 == 0) goto LAB_03550fec;
LAB_03550c00:
    if (iVar11 == 1) {
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *in_stack_000000b8 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(undefined4 *)((long)unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
      if ((unaff_x19[0xd3] == 0) ||
         (lVar24 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar24 == 0))
      goto LAB_035574b8;
      FUN_02215a88(lVar24,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008a0,
                   *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar24 = CONCAT44(in_stack_000008a4,in_stack_000008a0);
      if (lVar24 == 0) goto UnityEngine_AnimatorStateInfo__get_fullPathHash;
      if (in_stack_000017dc == 0x3c) {
        in_stack_000017dc = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
      }
      else {
        lVar44 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar44 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar44 = *(long *)puVar7;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(*(long *)(lVar44 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar52 = *(float *)(unaff_x19 + 0x3d);
      memmove(&stack0x00001720,(void *)(unaff_x19[0x20] + 0x50),0x60);
      iVar11 = FUN_03776950(&stack0x00001720,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      memmove(&stack0x00001720,(void *)(*unaff_x21 + 0x50),0x60);
      fVar45 = (float)FUN_03776960(&stack0x00001720,0);
      fVar54 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar54 = 1.0;
      }
      if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
      fVar54 = (fVar52 / (float)iVar11) * fVar45 * fVar54;
      iVar11 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
      fVar52 = *(float *)(unaff_x19 + 0x3d);
      if (iVar11 < 1) {
        if (*unaff_x21 == 0) goto LAB_035574b8;
        iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar45 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        fVar61 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar61 = 1.0;
        }
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar65 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
        if (*(long *)(lVar24 + 0x20) == 0) goto LAB_035574b8;
        FUN_03776e6c(&stack0x000008a0,*(long *)(lVar24 + 0x20),0);
        fVar46 = (float)FUN_03776c9c(&stack0x00001700,0);
        if (*(long *)(lVar24 + 0x20) == 0) goto LAB_035574b8;
        fVar62 = *(float *)(lVar24 + 0x2c);
        fVar48 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar47 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar51 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar59 = *(float *)((long)unaff_x19 + 0x404);
        fVar49 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar49 = fVar54 * fVar51 * fVar59 * fVar49;
        fVar61 = (fVar52 / (float)iVar11) * fVar45 * fVar61;
        fVar52 = fVar61 * (fVar65 / fVar46) * fVar62 * fVar48;
        fVar61 = fVar61 / fVar52;
        fVar47 = fVar61 * fVar47;
        fVar54 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
        fVar61 = fVar61 * fVar54;
      }
      else {
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        iVar11 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar45 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (*(long *)(lVar24 + 0x20) == 0) goto LAB_035574b8;
        fVar61 = *(float *)(lVar24 + 0x2c);
        fVar65 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar65 = 1.0;
        }
        fVar46 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar47 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar48 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar62 = *(float *)((long)unaff_x19 + 0x404);
        fVar49 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar49 = fVar54 * fVar48 * fVar62 * fVar49;
        fVar52 = (fVar52 / (float)iVar11) * fVar45 * fVar65 * fVar61 * fVar46;
        fVar61 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
      }
      *in_stack_000000e0 = lVar24;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0,lVar24);
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar24 + 0x2c) = 1;
      *(float *)(lVar24 + 0x160) = fVar52;
      *(long *)(lVar24 + 0x40) = *in_stack_000000b8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *unaff_x21;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar24 = *in_stack_00000170;
      if ((lVar24 == 0) || (lVar44 = *(long *)(lVar24 + 0x38), lVar44 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar44 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      fStack000000000000015c = 0.0;
      *(int *)(lVar44 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
      *(int *)(unaff_x19 + 0x24) = (int)lVar30;
      goto LAB_035514b0;
    }
    lVar24 = *in_stack_00000170;
    fVar49 = 0.0;
    fVar54 = fVar49;
    if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
      fVar54 = fVar52;
    }
    if (lVar24 == 0) goto LAB_035574b8;
    fVar47 = 0.0;
    fVar61 = 0.0;
  }
  lVar24 = *(long *)(lVar24 + 0x38);
  if (lVar24 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar24 + 0x20) = (short)in_stack_000017dc;
  *(int *)(lVar24 + 0x60) = (int)unaff_x19[0x3d];
  *(undefined4 *)(lVar24 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(int *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
  if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
  goto LAB_035574b8;
  uVar12 = *unaff_x20;
  FUN_0209a6e0(_fStack00000000000000c8,&stack0x000008a0,
               *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
  if (*(uint *)(lVar24 + 0x18) <= uVar12) goto LAB_035575f4;
  uVar19 = unaff_x29[1];
  uVar18 = *unaff_x29;
  lVar24 = lVar24 + (long)(int)uVar12 * unaff_x24;
  *(undefined4 *)(lVar24 + 0x18c) = in_stack_000008b0;
  *(undefined8 *)(lVar24 + 0x184) = uVar19;
  *(undefined8 *)(lVar24 + 0x17c) = uVar18;
  if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar24 = *(long *)(unaff_x19[0xc9] + 0x20), lVar24 == 0))
  goto LAB_035574b8;
  FUN_03776e6c(&stack0x00000c18,lVar24,0);
  puVar7 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  unaff_x29[0x1df] = in_stack_00000c20;
  unaff_x29[0x1de] = CONCAT44(in_stack_00000c1c,in_stack_00000c18);
  if ((int)in_stack_000017dc < 0x10000) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar12 = FUN_026b63d8(in_stack_000017dc,0);
    unaff_w25 = uVar12 & 1;
  }
  else {
    unaff_w25 = 0;
  }
  in_stack_00000140 = *(float *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    _fStack0000000000000128 = (ulong)(uint)fVar47;
    fVar65 = 0.0;
    fVar45 = 0.0;
  }
  else {
    if (*in_stack_000000e0 == 0) goto LAB_035574b8;
    uVar17 = *unaff_x20;
    uVar12 = *(uint *)(*in_stack_000000e0 + 0x28);
    if ((int)uVar17 < (int)in_stack_00000088._4_4_) {
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= uVar17 + 1) goto LAB_035575f4;
      lVar24 = *(long *)(lVar24 + (long)(int)(uVar17 + 1) * (long)iVar14 + 0x30);
      if ((((lVar24 == 0) || (*unaff_x21 == 0)) ||
          (lVar30 = *(long *)(*unaff_x21 + 0x128), lVar30 == 0)) ||
         (lVar30 = *(long *)(lVar30 + 0x18), lVar30 == 0)) goto LAB_035574b8;
      in_stack_000008a0 = uVar12 | *(int *)(lVar24 + 0x28) << 0x10;
      uVar22 = FUN_0219f8b8(lVar30,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar64 = 0;
      if ((uVar22 & 1) == 0) {
        _fStack0000000000000128 = (ulong)(uint)fVar47;
        fVar65 = 0.0;
        fVar45 = 0.0;
      }
      else {
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        uVar64 = *(undefined4 *)(in_stack_000016f8 + 0x20);
        fVar45 = *(float *)(in_stack_000016f8 + 0x14);
        fVar65 = *(float *)(in_stack_000016f8 + 0x18);
        _fStack0000000000000128 = CONCAT44(*(undefined4 *)(in_stack_000016f8 + 0x1c),fVar47);
        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
          in_stack_00000140 = 0.0;
        }
      }
      uVar17 = *unaff_x20;
    }
    else {
      uVar64 = 0;
      _fStack0000000000000128 = (ulong)(uint)fVar47;
      fVar65 = 0.0;
      fVar45 = 0.0;
    }
    if (0 < (int)uVar17) {
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= uVar17 - 1) goto LAB_035575f4;
      lVar24 = *(long *)(lVar24 + (ulong)(uVar17 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar24 == 0) || (*unaff_x21 == 0)) ||
         ((lVar30 = *(long *)(*unaff_x21 + 0x128), lVar30 == 0 ||
          (lVar30 = *(long *)(lVar30 + 0x18), lVar30 == 0)))) goto LAB_035574b8;
      in_stack_000008a0 = *(uint *)(lVar24 + 0x28) | uVar12 << 0x10;
      uVar22 = FUN_0219f8b8(lVar30,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar22 & 1) != 0) {
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        uVar53 = (undefined4)(_fStack0000000000000128 >> 0x20);
        fVar45 = (float)FUN_03571cb4(fVar45,fVar65,_fStack0000000000000128 >> 0x20,uVar64,
                                     *(undefined4 *)(in_stack_000016f8 + 0x28),
                                     *(undefined4 *)(in_stack_000016f8 + 0x2c),
                                     *(undefined4 *)(in_stack_000016f8 + 0x30),
                                     *(undefined4 *)(in_stack_000016f8 + 0x34),0);
        _fStack0000000000000128 = CONCAT44(uVar53,fStack0000000000000128);
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
          in_stack_00000140 = 0.0;
        }
      }
    }
    *(float *)((long)unaff_x19 + 0x2fc) = fStack000000000000012c;
  }
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar46 = *(float *)(unaff_x19 + 200);
    fVar47 = (float)FUN_03776cb4(&stack0x00001790,0);
    fVar46 = fVar46 - fVar54 * fVar47 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar46;
    if ((in_stack_000017dc == 0x200b) || (unaff_w25 != 0)) {
      *(float *)(unaff_x19 + 200) =
           fVar46 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
    }
  }
  fVar47 = *(float *)(unaff_x19 + 0x56);
  in_stack_00000090 = 0.0;
  if (fVar47 != 0.0) {
    fVar46 = (float)FUN_03776c94(&stack0x00001790,0);
    fVar48 = (float)FUN_03776ca4(&stack0x00001790,0);
    in_stack_00000090 =
         (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
         (fVar47 * 0.5 - fVar54 * (fVar46 * 0.5 + fVar48));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + in_stack_00000090;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar27 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar24 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar22 = FUN_036cee6c(lVar24,0,0);
    fVar46 = 0.0;
    if ((uVar22 & 1) != 0) {
      lVar24 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar24 == 0) goto LAB_035574b8;
      uVar22 = FUN_03699d3c(lVar24,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x54),0);
      fVar46 = 0.0;
      if ((uVar22 & 1) != 0) {
        lVar24 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar24 == 0) goto LAB_035574b8;
        fVar47 = (float)FUN_0369e060(lVar24,*(undefined4 *)
                                             (*(long *)(*(long *)puVar7 + 0xb8) + 0x54),0);
        if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
        fVar48 = *(float *)(*unaff_x21 + 0x1b0);
        fVar46 = (float)FUN_0369e060(*in_stack_00000160,
                                     *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xcc),0);
        fVar46 = fVar46 * fVar47 * fVar48 * 0.25;
        if (fVar47 < fStack000000000000015c + fVar46) {
          fStack000000000000015c = fVar47 - fVar46;
        }
      }
    }
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fStack00000000000000d0 = *(float *)(*unaff_x21 + 0x1b4);
  }
  else {
    lVar24 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar22 = FUN_036cee6c(lVar24,0,0);
    fStack00000000000000d0 = 0.0;
    if ((uVar22 & 1) != 0) {
      lVar24 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar24 == 0) goto LAB_035574b8;
      uVar22 = FUN_03699d3c(lVar24,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x54),0);
      if ((uVar22 & 1) != 0) {
        lVar24 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar24 == 0) goto LAB_035574b8;
        uVar22 = FUN_03699d3c(lVar24,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xcc),0);
        if ((uVar22 & 1) != 0) {
          lVar24 = *in_stack_00000160;
          if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar24 == 0) goto LAB_035574b8;
          fVar47 = (float)FUN_0369e060(lVar24,*(undefined4 *)
                                               (*(long *)(*(long *)puVar7 + 0xb8) + 0x54),0);
          if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
          fVar48 = *(float *)(*unaff_x21 + 0x1a8);
          fVar46 = (float)FUN_0369e060(*in_stack_00000160,
                                       *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xcc),0);
          fVar46 = fVar46 * fVar47 * fVar48 * 0.25;
          if (fVar47 < fStack000000000000015c + fVar46) {
            fStack000000000000015c = fVar47 - fVar46;
          }
          goto FUN_03551b84;
        }
      }
    }
    fVar46 = 0.0;
  }
FUN_03551b84:
  fVar47 = *(float *)(unaff_x19 + 200);
  fVar48 = (float)FUN_03776ca4(&stack0x00001790,0);
  fVar47 = fVar47 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar54 * (fVar45 + ((fVar48 - fStack000000000000015c) - fVar46));
  fVar45 = (float)FUN_03776cac(&stack0x00001790,0);
  fVar62 = *(float *)((long)unaff_x19 + 0x61c) +
           ((fVar49 + fVar54 * (fVar65 + fStack000000000000015c + fVar45)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar45 = (float)FUN_03776c9c(&stack0x00001790,0);
  fVar45 = fVar62 - fVar54 * (fStack000000000000015c + fStack000000000000015c + fVar45);
  fVar65 = (float)FUN_03776c94(&stack0x00001790,0);
  fVar48 = fVar47 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar54 * (fVar46 + fVar46 +
                             fStack000000000000015c + fStack000000000000015c + fVar65);
  in_stack_000000e8 = (ulong)(uint)fVar46;
  fStack0000000000000104 = fVar47;
  fVar65 = fVar48;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar27 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar59 = (float)(int)unaff_x19[0xbe] * fStack000000000000005c;
    fVar65 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar58 = fVar59 * fVar54 * (fVar46 + fStack000000000000015c + fVar65);
    fVar65 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar51 = (float)FUN_03776c9c(&stack0x00001790,0);
    fVar62 = fVar62 + 0.0;
    fVar45 = fVar45 + 0.0;
    fVar59 = fVar59 * fVar54 * (((fVar65 - fVar51) - fStack000000000000015c) - fVar46);
    fVar51 = fVar47 + fVar58;
    fVar65 = fVar48 + fVar59;
    fVar50 = (fVar58 - fVar59) * 0.5;
    fVar47 = (fVar47 + fVar59) - fVar50;
    fVar48 = (fVar48 + fVar58) - fVar50;
    fStack0000000000000104 = fVar51 - fVar50;
    fVar65 = fVar65 - fVar50;
  }
  _fStack0000000000000150 = (ulong)(uint)fVar54;
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fStack0000000000000114 = 0.0;
    fVar50 = 0.0;
    fVar58 = 0.0;
    fStack0000000000000100 = 0.0;
    fVar59 = fVar45;
    fVar51 = fVar62;
  }
  else {
    thunk_FUN_036bc400(_fStack0000000000000078,0);
    fVar60 = (fVar48 + fVar47) * 0.5;
    fVar63 = (fVar45 + fVar62) * 0.5;
    fVar62 = fVar62 - fVar63;
    fStack0000000000000100 = 0.0;
    fVar51 = fVar62;
    fStack0000000000000104 =
         (float)FUN_036bdd2c(fStack0000000000000104 - fVar60,_fStack0000000000000078,0);
    fStack0000000000000104 = fVar60 + fStack0000000000000104;
    fStack0000000000000100 = fStack0000000000000100 + 0.0;
    fVar59 = fVar45 - fVar63;
    fStack0000000000000114 = 0.0;
    fVar45 = fVar59;
    fVar47 = (float)FUN_036bdd2c(fVar47 - fVar60,_fStack0000000000000078,0);
    fVar47 = fVar60 + fVar47;
    fStack0000000000000114 = fStack0000000000000114 + 0.0;
    fVar45 = fVar63 + fVar45;
    fVar58 = 0.0;
    fVar48 = (float)FUN_036bdd2c(fVar48 - fVar60,_fStack0000000000000078,0);
    fVar48 = fVar60 + fVar48;
    fVar62 = fVar63 + fVar62;
    fVar58 = fVar58 + 0.0;
    fVar50 = 0.0;
    fVar65 = (float)FUN_036bdd2c(fVar65 - fVar60,_fStack0000000000000078,0);
    fVar65 = fVar60 + fVar65;
    fVar50 = fVar50 + 0.0;
    fVar59 = fVar63 + fVar59;
    fVar51 = fVar63 + fVar51;
  }
  if (*in_stack_00000170 == 0) goto LAB_035574b8;
  lVar24 = *(long *)(*in_stack_00000170 + 0x38);
  unaff_d13 = (ulong)(uint)fVar54;
  if (lVar24 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar24 + 0x11c) = fVar47;
  *(float *)(lVar24 + 0x120) = fVar45;
  *(float *)(lVar24 + 0x124) = fStack0000000000000114;
  if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar24 + 0x114) = fVar51;
  *(float *)(lVar24 + 0x110) = fStack0000000000000104;
  *(float *)(lVar24 + 0x118) = fStack0000000000000100;
  if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar24 + 0x128) = fVar48;
  *(float *)(lVar24 + 300) = fVar62;
  *(float *)(lVar24 + 0x130) = fVar58;
  if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar24 + 0x134) = fVar65;
  *(float *)(lVar24 + 0x138) = fVar59;
  *(float *)(lVar24 + 0x13c) = fVar50;
  if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
  goto LAB_035574b8;
  uVar12 = *unaff_x20;
  unaff_x26 = (long)(int)uVar12;
  if (*(uint *)(lVar24 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar30 = lVar24 + unaff_x26 * unaff_x24;
  *(int *)(lVar30 + 0x140) = (int)unaff_x19[200];
  fVar62 = *(float *)(unaff_x19 + 0x9b);
  uVar22 = (ulong)(uint)fVar62;
  fVar65 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar30 + 0x15c) = (fVar48 - fVar47) / (fVar51 - fVar45);
  *(float *)(lVar30 + 0x14c) = (fVar49 - fVar62) + fVar65;
  fVar45 = fStack0000000000000128 * fVar54;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar45 = fVar45 / fStack0000000000000158;
    fVar61 = (fVar61 * fVar54) / fStack0000000000000158;
  }
  else {
    fVar61 = fVar61 * fVar54;
  }
  uVar56 = *(uint *)(unaff_x19 + 0x93);
  if ((unaff_w25 == 0) || (uVar12 == uVar56)) {
    fVar61 = fVar65 + fVar61;
    fVar45 = fVar65 + fVar45;
    fVar48 = fVar61;
    fVar47 = fVar45;
    if (fVar65 != 0.0) {
      fVar47 = (fVar45 - fVar65) / *(float *)((long)unaff_x19 + 0x404);
      fVar48 = (fVar61 - fVar65) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar47 <= fVar45) {
        fVar47 = fVar45;
      }
      if (fVar61 <= fVar48) {
        fVar48 = fVar61;
      }
    }
    lVar24 = lVar24 + unaff_x26 * unaff_x24;
    fVar65 = fVar47;
    if (fVar47 <= *(float *)(unaff_x19 + 0x99)) {
      fVar65 = *(float *)(unaff_x19 + 0x99);
    }
    fVar49 = fVar48;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar48) {
      fVar49 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar49;
    *(float *)(unaff_x19 + 0x99) = fVar65;
    *(float *)(lVar24 + 0x154) = fVar47;
    *(float *)(lVar24 + 0x158) = fVar48;
    *(float *)(lVar24 + 0x148) = fVar45 - fVar62;
    *(float *)(unaff_x19 + 0x98) = fVar45 - fVar62;
    *(float *)(lVar24 + 0x150) = fVar61 - fVar62;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar61 - fVar62;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar65;
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar65 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar47 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
      fStack0000000000000158 = (fVar54 * fVar47) / fStack0000000000000158;
      uVar22 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar65 <= fStack0000000000000158) {
        fVar65 = fStack0000000000000158;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar65;
    }
    if ((float)uVar22 == 0.0) {
      fVar65 = *(float *)(in_stack_00000080 + 0x208);
      if (*(float *)(in_stack_00000080 + 0x208) <= fVar45) {
        fVar65 = fVar45;
      }
      *(float *)(in_stack_00000080 + 0x208) = fVar65;
    }
  }
  else {
    fVar45 = *(float *)(unaff_x19 + 0x99);
    lVar24 = lVar24 + unaff_x26 * unaff_x24;
    *(float *)(lVar24 + 0x154) = fVar45;
    fVar65 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar45 = fVar45 - fVar62;
    *(float *)(lVar24 + 0x148) = fVar45;
    *(float *)(lVar24 + 0x158) = fVar65;
    *(float *)(unaff_x19 + 0x98) = fVar45;
    fVar65 = fVar65 - fVar62;
    *(float *)(lVar24 + 0x150) = fVar65;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar65;
  }
  lVar24 = *in_stack_00000170;
  if ((lVar24 == 0) || (lVar30 = *(long *)(lVar24 + 0x38), lVar30 == 0)) goto LAB_035574b8;
  unaff_w27 = *unaff_x20;
  if (*(uint *)(lVar30 + 0x18) <= unaff_w27) goto LAB_035575f4;
  lVar30 = lVar30 + (long)(int)unaff_w27 * unaff_x24;
  *(undefined1 *)(lVar30 + 0x194) = 0;
  unaff_w28 = *(uint *)(unaff_x19 + 0x4f) & 0x18;
  if ((in_stack_000017dc == 9) ||
     (((((unaff_w25 == 0 && (in_stack_000017dc != 3)) && (in_stack_000017dc != 0x200b)) &&
       (in_stack_000017dc != 0xad)) ||
      (((bool)(in_stack_000017dc == 0xad & (bVar6 ^ 1U)) || (*(int *)((long)unaff_x19 + 0x644) == 1)
       ))))) {
    *(undefined1 *)(lVar30 + 0x194) = 1;
    pfVar31 = _fStack00000000000000a0;
    pfVar34 = _fStack00000000000000a8;
    if (unaff_w23 != 0) {
      lVar24 = *(long *)(lVar24 + 0x50);
      if (lVar24 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar34 = (float *)(lVar24 + 0x60);
      pfVar31 = (float *)(lVar24 + 100);
    }
    unaff_s8 = *pfVar34;
    unaff_s9 = *pfVar31;
    fVar45 = *(float *)(unaff_x19 + 0x6c);
    fVar65 = *(float *)(unaff_x19 + 200);
    in_stack_000000f8._4_4_ = (fStack000000000000009c - unaff_s8) - unaff_s9;
    bVar9 = true;
    if ((fVar45 <= in_stack_000000f8._4_4_) && (bVar9 = false, !NAN(fVar45))) {
      bVar9 = fVar45 == -1.0;
    }
    if (!bVar9) {
      in_stack_000000f8._4_4_ = fVar45;
    }
    fVar45 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar45 = (float)FUN_03776cb4(&stack0x00001790,0);
      uVar22 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    }
    param_2 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar47 = *(float *)((long)unaff_x19 + 0x4cc);
    if (in_stack_000017dc != 0xad) {
      fVar52 = fVar54;
    }
    fVar61 = (float)uVar22;
    fVar54 = 0.0;
    if ((0.0 < fVar61) && (fVar54 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar54 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    unaff_w27 = *unaff_x20;
    fVar54 = (*(float *)(unaff_x19 + 0x97) - (fVar47 - fVar61)) + fVar54;
    uVar17 = in_stack_000017dc;
    if (fStack00000000000000c4 < fVar54) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = unaff_w27;
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      uVar18 = DAT_00d37868;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar48 = *(float *)(unaff_x19 + 0x59);
        if (((fVar48 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar61)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar54 = *(float *)((long)unaff_x19 + 700) +
                   ((in_stack_00000018._4_4_ - fVar54) / (float)(int)unaff_x19[0x95]) /
                   fStack0000000000000058;
          if (fVar54 <= fVar48) {
            fVar54 = fVar48;
          }
          goto LAB_03554b48;
        }
        fVar61 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar54 = *(float *)(unaff_x19 + 0x4a);
        uVar22 = (ulong)(uint)fVar54;
        if ((fVar54 < fVar61) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar52 = (fVar61 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar52 <= DAT_00d38b84) {
            fVar52 = DAT_00d38b84;
          }
          fVar52 = (fVar61 - fVar52) * 20.0 + 0.5;
          *(float *)((long)unaff_x19 + 0x23c) = fVar61;
          fVar45 = DAT_00d38e60;
          if (fVar52 != INFINITY) {
            fVar45 = (float)(int)fVar52 / 20.0;
          }
          if (fVar45 <= fVar54) {
            fVar45 = fVar54;
          }
          goto LAB_03554658;
        }
      }
      switch((int)unaff_x19[0x5c]) {
      case 1:
        lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar24 = *(long *)puVar7;
        }
        lVar30 = *(long *)(lVar24 + 0xb8);
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        lVar24 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
          lVar24 = FUN_01a46ff8(lVar24);
        }
        piVar23 = (int *)thunk_FUN_01a59484(lVar30 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar24 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar23 == 0) goto LAB_03554580;
        lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar24 = *(long *)puVar7;
        }
        FUN_0209b778(*(long *)(lVar24 + 0xb8) + 0x11f0,&stack0x000008a0,
                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
        memcpy(&stack0x00001380,&stack0x000008a0,0x378);
        goto LAB_035529dc;
      default:
        goto UnityEngine_AnimationClip__set_wrapMode;
      case 3:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
LAB_03552550:
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        in_stack_000017a8 = FUN_0358c15c();
        break;
      case 5:
        if ((unaff_w27 == 0) || ((int)in_stack_000017a8 < 0)) {
          in_stack_000017a8 = 0xffffffff;
          *unaff_x20 = 0;
          in_stack_000017c8 = uVar18;
UnityEngine_AnimatorStateInfo__get_fullPathHash:
          unaff_x29 = (undefined8 *)&stack0x000008a0;
          uVar17 = in_stack_000017dc;
          goto LAB_03550bd0;
        }
        fVar52 = *(float *)(unaff_x19 + 0x99);
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        if (fVar52 - fVar47 <= fStack00000000000000c4) {
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          uVar22 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar24 = NEON_rev64(uVar22,4);
          unaff_x19[0x99] = lVar24;
          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
          *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
          goto LAB_03550bd0;
        }
        break;
      case 6:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar24 = unaff_x19[0x5d];
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar20 = FUN_036cee6c(lVar24,0,0);
        if ((uVar20 & 1) != 0) {
          plVar43 = (long *)unaff_x19[0x5d];
          uVar18 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar43 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar43 + 0x528))(plVar43,uVar18,*(undefined8 *)(*plVar43 + 0x530));
          lVar24 = unaff_x19[0x5d];
          if (lVar24 == 0) goto LAB_035574b8;
          *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar43 = (long *)unaff_x19[0x5d];
          if (plVar43 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar43 + 0x7a8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
      }
UnityEngine_AnimationClip__get_hasMotionCurves:
      in_stack_000017c8 = CONCAT44(3,unaff_w27);
      uVar17 = in_stack_000017dc;
      goto LAB_03550bd0;
    }
UnityEngine_AnimationClip__set_wrapMode:
    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    unaff_s12 = 1.0;
    unaff_s11 = ABS(fVar65) + fVar45 * (1.0 - param_2) * fVar52;
    if (unaff_w28 != 0) {
      unaff_s12 = DAT_00d38acc;
    }
    fVar52 = unaff_s12 * in_stack_000000f8._4_4_;
    fStack0000000000000158 = (float)uVar56;
    if (unaff_s11 <= fVar52) {
LAB_03552f50:
      uVar22 = in_stack_000000e8 & 0xffffffff;
      uVar56 = (uint)fStack0000000000000158;
    }
    else {
      uVar22 = (ulong)(uint)fVar46;
      if (((char)unaff_x19[0x5b] != '\0') && (unaff_w27 != *(uint *)(unaff_x19 + 0x93))) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        in_stack_000017a8 = FUN_0358c15c();
        if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
          lVar24 = *in_stack_00000170;
          if ((lVar24 == 0) || (lVar30 = *(long *)(lVar24 + 0x38), lVar30 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar30 + 0x18) <= *unaff_x20) goto LAB_035575f4;
          fVar52 = *(float *)(unaff_x19 + 0x9b);
          fVar54 = 0.0;
          if ((0.0 < fVar52) && (fVar54 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
            fVar54 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
          }
          fVar54 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                   *(float *)(lVar30 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                   (fVar54 - *(float *)((long)unaff_x19 + 0x4cc)) +
                   fStack0000000000000058 *
                   (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700));
        }
        else {
          lVar24 = unaff_x19[0x6d];
          *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
          if (lVar24 == 0) goto LAB_035574b8;
          fVar52 = *(float *)(unaff_x19 + 0x9b);
          fVar54 = *(float *)(unaff_x19 + 0x58) +
                   fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
        }
        lVar24 = *(long *)(lVar24 + 0x38);
        if (lVar24 == 0) goto LAB_035574b8;
        uVar12 = *(uint *)((long)unaff_x19 + 0x494);
        if ((*(uint *)(lVar24 + 0x18) <= uVar12) ||
           (uVar56 = uVar12 - 1, *(uint *)(lVar24 + 0x18) <= uVar56)) goto LAB_035575f4;
        uVar22 = (ulong)(uint)(fVar54 + *(float *)(unaff_x19 + 0x97));
        unaff_s10 = (fVar54 + *(float *)(unaff_x19 + 0x97) + fVar52) -
                    *(float *)(lVar24 + (long)(int)uVar12 * unaff_x24 + 0x158);
        if ((!bVar6 && *(short *)(lVar24 + (long)(int)uVar56 * (long)iVar14 + 0x20) == 0xad) &&
           ((unaff_s10 < fStack00000000000000c4 || ((int)unaff_x19[0x5c] == 0)))) {
          bVar6 = false;
          in_stack_000017c8 = CONCAT44(0x2d,uVar56);
          *unaff_x20 = uVar56;
          in_stack_000017a8 = in_stack_000017a8 - 1;
          goto LAB_03550bd0;
        }
        if (*(short *)(lVar24 + (long)(int)uVar12 * unaff_x24 + 0x20) == 0xad) {
          bVar6 = true;
          goto LAB_03550bd0;
        }
        if ((in_stack_00000070 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) goto code_r0x03552cf8;
        goto LAB_03552d44;
      }
      if (((char)unaff_x19[0x47] != '\0') &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        param_1 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if (param_2 < param_1) {
          fVar52 = unaff_s11 / (1.0 - param_2);
          if (param_2 <= 0.0) {
            fVar52 = unaff_s11;
          }
          param_2 = param_2 + (unaff_s11 - unaff_s12 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) /
                              fVar52;
          goto LAB_035574e8;
        }
        fVar54 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar52 = *(float *)(unaff_x19 + 0x4a);
        if (fVar52 < fVar54) {
          fVar45 = (fVar54 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar45 <= DAT_00d38b84) {
            fVar45 = DAT_00d38b84;
          }
          *(float *)((long)unaff_x19 + 0x23c) = fVar54;
          fVar54 = fVar54 - fVar45;
          goto LAB_03557524;
        }
      }
      iVar11 = (int)unaff_x19[0x5c];
      if (iVar11 == 1) {
        lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar24 = *(long *)puVar7;
        }
        lVar30 = *(long *)(lVar24 + 0xb8);
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        lVar24 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
          lVar24 = FUN_01a46ff8(lVar24);
        }
        piVar23 = (int *)thunk_FUN_01a59484(lVar30 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar24 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar23 == 0) {
LAB_03554580:
          in_stack_000017c8 = DAT_00d37868;
          unaff_x20[0] = 0;
          unaff_x20[1] = 0;
          in_stack_000017a8 = 0xffffffff;
          uVar17 = in_stack_000017dc;
          goto LAB_03550bd0;
        }
        lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar24 = *(long *)puVar7;
        }
        FUN_0209b778(*(long *)(lVar24 + 0xb8) + 0x11f0,&stack0x000008a0,
                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
        memcpy(&stack0x00000c90,&stack0x000008a0,0x378);
LAB_035529dc:
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        iVar11 = FUN_0358c15c();
LAB_035529e8:
        iVar15 = *(int *)((long)unaff_x19 + 0x494) + -1;
        *(int *)((long)unaff_x19 + 0x494) = iVar15;
        in_stack_000017c8 = CONCAT44(0x2026,iVar15);
        in_stack_00000168._4_4_ = in_stack_00000168._4_4_ + 1;
        in_stack_000017a8 = iVar11 - 1;
        uVar17 = in_stack_000017dc;
        goto LAB_03550bd0;
      }
      if (iVar11 == 6) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        in_stack_000017a8 = FUN_0358c15c();
        lVar24 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar20 = FUN_036cee6c(lVar24,0,0);
        if ((uVar20 & 1) != 0) {
          plVar43 = (long *)unaff_x19[0x5d];
          uVar18 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar43 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar43 + 0x528))(plVar43,uVar18,*(undefined8 *)(*plVar43 + 0x530));
          lVar24 = unaff_x19[0x5d];
          if (lVar24 == 0) goto LAB_035574b8;
          *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar43 = (long *)unaff_x19[0x5d];
          if (plVar43 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar43 + 0x7a8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
LAB_03552b00:
        in_stack_000017c8 = CONCAT44(3,*unaff_x20);
        uVar17 = in_stack_000017dc;
        goto LAB_03550bd0;
      }
      if (iVar11 == 3) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        goto LAB_03552550;
      }
    }
    if (in_stack_000017dc == 0xad) {
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(undefined1 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
    }
    else {
      if (in_stack_000017dc == 9) {
        lVar24 = *in_stack_00000170;
        if ((lVar24 == 0) || (lVar30 = *(long *)(lVar24 + 0x38), lVar30 == 0)) goto LAB_035574b8;
        uVar17 = *unaff_x20;
        if (*(uint *)(lVar30 + 0x18) <= uVar17) goto LAB_035575f4;
        *(undefined1 *)(lVar30 + (long)(int)uVar17 * unaff_x24 + 0x194) = 0;
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar17;
        lVar30 = *(long *)(lVar24 + 0x50);
        if (lVar30 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar30 + 0x2c) = *(int *)(lVar30 + 0x2c) + 1;
        goto LAB_03552fcc;
      }
      if (*(int *)((long)unaff_x19 + 0x644) == 1) {
        (**(code **)(*unaff_x19 + 0x898))(fVar52,uVar22);
      }
      else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
        (**(code **)(*unaff_x19 + 0x888))(fStack000000000000015c);
      }
      uVar17 = *unaff_x20;
      if ((in_stack_00000068._4_4_ & 1) != 0) {
        *(uint *)(in_stack_00000080 + 0x1f0) = uVar17;
      }
      *(uint *)((long)unaff_x19 + 0x4a4) = uVar17;
      *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
      if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x50), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      in_stack_00000068._4_4_ = 0;
      *(float *)(lVar24 + 0x60) = unaff_s8;
      *(float *)(lVar24 + 100) = unaff_s9;
    }
  }
  else {
    if (((in_stack_000017dc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar54 = (float)uVar22;
      fVar52 = 0.0;
      if ((0.0 < fVar54) && (fVar52 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar52 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      uVar22 = (ulong)(uint)fStack00000000000000c4;
      if (fStack00000000000000c4 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar54)) + fVar52)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = unaff_w27;
        }
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar24 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar20 = FUN_036cee6c(lVar24,0,0);
        if ((uVar20 & 1) != 0) {
          plVar43 = (long *)unaff_x19[0x5d];
          uVar18 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar43 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar43 + 0x528))(plVar43,uVar18,*(undefined8 *)(*plVar43 + 0x530));
          lVar24 = unaff_x19[0x5d];
          if (lVar24 == 0) goto LAB_035574b8;
          *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar43 = (long *)unaff_x19[0x5d];
          if (plVar43 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar43 + 0x7a8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
        goto UnityEngine_AnimationClip__get_hasMotionCurves;
      }
    }
    if ((((in_stack_000017dc - 0x2007 < 0x23) &&
         ((1L << ((ulong)(in_stack_000017dc - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
        (in_stack_000017dc - 10 < 2)) || (in_stack_000017dc == 0xa0)) {
LAB_03552b54:
      if (((in_stack_000017dc != 0xad) && (in_stack_000017dc != 0x200b)) &&
         (in_stack_000017dc != 0x2060)) {
        lVar24 = *in_stack_00000170;
        if ((lVar24 == 0) || (lVar30 = *(long *)(lVar24 + 0x50), lVar30 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar30 + 0x2c) = *(int *)(lVar30 + 0x2c) + 1;
        *(int *)(lVar24 + 0x20) = *(int *)(lVar24 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar22 = FUN_026b97f8(in_stack_000017dc,0);
      if ((uVar22 & 1) != 0) goto LAB_03552b54;
    }
    if (in_stack_000017dc == 0xa0) {
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x50), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_03552fcc:
      *(int *)(lVar24 + 0x20) = *(int *)(lVar24 + 0x20) + 1;
    }
  }
  unaff_x29 = (undefined8 *)&stack0x000008a0;
  if (((int)unaff_x19[0x5c] == 1) && ((in_stack_000017dc == 0x2d || (unaff_w23 != 1)))) {
    if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
    fVar52 = *(float *)(unaff_x19 + 0x3d);
    iVar11 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
    if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
    fVar45 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
    lVar24 = unaff_x19[0xca];
    fVar54 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar54 = 1.0;
    }
    if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_035574b8;
    fVar47 = *(float *)((long)unaff_x19 + 0x404);
    fVar46 = *(float *)(lVar24 + 0x2c);
    fVar65 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
    fVar61 = *_fStack00000000000000a8;
    fVar65 = fVar47 * (fVar52 / (float)iVar11) * fVar45 * fVar54 * fVar46 * fVar65;
    fVar52 = *_fStack00000000000000a0;
    if ((in_stack_000017dc == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      uVar17 = *(int *)((long)unaff_x19 + 0x494) - 1;
      if (*(uint *)(lVar24 + 0x18) <= uVar17) goto LAB_035575f4;
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar54 = *(float *)(lVar24 + (long)(int)uVar17 * (long)iVar14 + 0x60);
      iVar11 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar47 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
      lVar24 = unaff_x19[0xca];
      fVar45 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar45 = 1.0;
      }
      if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_035574b8;
      fVar46 = *(float *)((long)unaff_x19 + 0x404);
      fVar48 = *(float *)(lVar24 + 0x2c);
      fVar65 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x50), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      fVar61 = *(float *)(lVar24 + 0x60);
      fVar52 = *(float *)(lVar24 + 100);
      fVar65 = fVar46 * (fVar54 / (float)iVar11) * fVar47 * fVar45 * fVar48 * fVar65;
    }
    fVar47 = *(float *)(unaff_x19 + 0x9b);
    fVar54 = 0.0;
    fVar45 = 0.0;
    if ((0.0 < fVar47) && (fVar45 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar45 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    fVar48 = *(float *)(unaff_x19 + 0x97);
    fVar62 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar46 = *(float *)(unaff_x19 + 200);
    if ((char)unaff_x19[0x1e] == '\0') {
      if ((unaff_x19[0xca] == 0) || (lVar24 = *(long *)(unaff_x19[0xca] + 0x20), lVar24 == 0))
      goto LAB_035574b8;
      FUN_03776e6c(&stack0x000008a0,lVar24,0);
      fVar54 = (float)FUN_03776cb4(&stack0x00001700,0);
    }
    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar49 = *(float *)(unaff_x19 + 0x6c);
    fVar52 = (fStack000000000000009c - fVar61) - fVar52;
    bVar9 = true;
    if ((fVar49 <= fVar52) && (bVar9 = false, !NAN(fVar49))) {
      bVar9 = fVar49 == -1.0;
    }
    if (!bVar9) {
      fVar52 = fVar49;
    }
    fVar61 = 1.0;
    if (unaff_w28 != 0) {
      fVar61 = DAT_00d38acc;
    }
    if (((fVar48 - (fVar62 - fVar47)) + fVar45 < fStack00000000000000c4) &&
       (ABS(fVar46) + fVar65 * fVar54 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
        fVar61 * fVar52)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
      lVar24 = *(long *)(*(long *)puVar7 + 0xb8);
      memcpy(&stack0x00000528,(void *)(lVar24 + 0x788),0x378);
      FUN_0209b210(lVar24 + 0x11f0,&stack0x00000528,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
    }
  }
  lVar24 = *in_stack_00000170;
  if (lVar24 == 0) goto LAB_035574b8;
  lVar30 = *(long *)(lVar24 + 0x38);
  unaff_d13 = _fStack0000000000000150 & 0xffffffff;
  if (lVar30 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar30 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  uVar17 = *(uint *)(unaff_x19 + 0x95);
  lVar30 = lVar30 + (long)(int)*unaff_x20 * unaff_x24;
  *(uint *)(lVar30 + 100) = uVar17;
  *(int *)(lVar30 + 0x68) = (int)unaff_x19[0x96];
  if (((unaff_w23 & 1) == 0) &&
     ((0xd < in_stack_000017dc || ((1 << (ulong)(in_stack_000017dc & 0x1f) & 0x2c00U) == 0)))) {
    lVar24 = *(long *)(lVar24 + 0x50);
    if (lVar24 == 0) goto LAB_035574b8;
LAB_0355346c:
    if (*(uint *)(lVar24 + 0x18) <= uVar17) goto LAB_035575f4;
    *(int *)(lVar24 + (long)(int)uVar17 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
  }
  else {
    lVar24 = *(long *)(lVar24 + 0x50);
    if (lVar24 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar24 + 0x18) <= uVar17) goto LAB_035575f4;
    if (*(int *)(lVar24 + (long)(int)uVar17 * 0x5c + 0x24) == 1) goto LAB_0355346c;
  }
  if (in_stack_000017dc == 9) {
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar52 = (float)FUN_03776a48(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar45 = *(float *)(unaff_x19 + 200);
    fVar54 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x21 + 0x1b9));
    fVar52 = fStack0000000000000150 * fVar52 * fVar54;
    fVar54 = fVar52 * (float)(int)(fVar45 / fVar52);
    uVar22 = (ulong)(uint)fVar54;
    if (fVar54 <= fVar45) {
      fVar54 = fVar45 + fVar52;
    }
LAB_03553678:
    *(float *)(unaff_x19 + 200) = fVar54;
  }
  else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
    if ((char)unaff_x19[0x1e] == '\0') {
      if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
        fVar45 = 1.0;
      }
      else {
        fVar45 = (float)thunk_FUN_036bc400(_fStack0000000000000078,0);
      }
      fVar54 = *(float *)(unaff_x19 + 200);
      fVar65 = (float)FUN_03776cb4(&stack0x00001790,0);
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar52 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
      fVar54 = fVar54 + fVar52 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                 fStack0000000000000150 * (fStack000000000000012c + fVar45 * fVar65)
                                 + fStack00000000000000d4 *
                                   (fStack00000000000000d0 +
                                   in_stack_00000140 + *(float *)(unaff_x19[0x20] + 0x1ac)));
      *(float *)(unaff_x19 + 200) = fVar54;
      goto joined_r0x035535c0;
    }
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar54 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (*(float *)((long)unaff_x19 + 0x2ac) +
             fStack0000000000000150 * fStack000000000000012c +
             fStack00000000000000d4 *
             (fStack00000000000000d0 + in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)));
    uVar22 = (ulong)(uint)fVar54;
    fVar54 = *(float *)(unaff_x19 + 200) - fVar54;
    *(float *)(unaff_x19 + 200) = fVar54;
    if ((in_stack_000017dc == 0x200b) || (unaff_w25 != 0)) {
      fVar52 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
      uVar22 = (ulong)(uint)fVar52;
      fVar54 = fVar54 - fVar52;
      goto LAB_03553678;
    }
  }
  else {
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar52 = *(float *)(unaff_x19 + 200);
    fVar54 = fVar52 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                      (*(float *)((long)unaff_x19 + 0x2ac) +
                      (*(float *)(unaff_x19 + 0x56) - in_stack_00000090) +
                      fStack00000000000000d4 * (in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)))
    ;
    *(float *)(unaff_x19 + 200) = fVar54;
joined_r0x035535c0:
    if ((in_stack_000017dc == 0x200b) || (uVar22 = (ulong)(uint)fVar52, unaff_w25 != 0)) {
      fVar52 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
      uVar22 = (ulong)(uint)fVar52;
      fVar54 = fVar54 + fVar52;
      goto LAB_03553678;
    }
  }
  lVar24 = *in_stack_00000170;
  if ((lVar24 == 0) || (lVar30 = *(long *)(lVar24 + 0x38), lVar30 == 0)) goto LAB_035574b8;
  uVar13 = *unaff_x20;
  uVar33 = (uint)*(undefined8 *)(lVar30 + 0x18);
  if (uVar33 <= uVar13) goto LAB_035575f4;
  *(float *)(lVar30 + (long)(int)uVar13 * unaff_x24 + 0x144) = fVar54;
  uVar35 = in_stack_000017dc;
  uVar17 = in_stack_000017dc;
  if ((int)in_stack_000017dc < 0xd) {
    if ((in_stack_000017dc - 10 < 2) || (in_stack_000017dc == 3)) goto LAB_0355371c;
LAB_03553700:
    if (((unaff_w23 & in_stack_000017dc == 0x2d) != 0) || ((float)uVar13 == in_stack_00000088._4_4_)
       ) goto LAB_0355371c;
  }
  else {
    if (1 < in_stack_000017dc - 0x2028) {
      if (in_stack_000017dc != 0xd) goto LAB_03553700;
      uVar22 = 0;
      *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
      if ((float)uVar13 != in_stack_00000088._4_4_) goto LAB_03553c8c;
    }
LAB_0355371c:
    if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
      fVar52 = *(float *)(unaff_x19 + 0x99);
      fVar54 = *(float *)(unaff_x19 + 0x9a);
      if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      fVar52 = fVar52 - fVar54;
      if (((fStack000000000000005c < ABS(fVar52)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
         && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
        FUN_0358c860(fVar52);
        *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar52;
        *(float *)(unaff_x19 + 0x9b) = fVar52 + *(float *)(unaff_x19 + 0x9b);
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar24 = *(long *)puVar7;
        }
        lVar30 = *(long *)(lVar24 + 0xb8);
        if (*(int *)(lVar30 + 0x7ac) == (int)unaff_x19[0x95]) {
          if (*(int *)(lVar24 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar30 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          FUN_0209b778(lVar30 + 0x11f0,&stack0x000008a0,*(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo
                      );
          puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          memcpy((void *)(*(long *)(lVar24 + 0xb8) + 0x788),&stack0x000008a0,0x378);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    (*(long *)(lVar24 + 0xb8) + 0x818,0);
          lVar24 = *(long *)(*(long *)puVar7 + 0xb8);
          *(float *)(lVar24 + 0x7bc) = fVar52 + *(float *)(lVar24 + 0x7bc);
          *(float *)(lVar24 + 0x800) = fVar52 + *(float *)(lVar24 + 0x800);
          memcpy(&stack0x000001b0,(void *)(lVar24 + 0x788),0x378);
          FUN_0209b210(lVar24 + 0x11f0,&stack0x000001b0,
                       *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
        }
      }
    }
    fVar45 = *(float *)(unaff_x19 + 0x9b);
    *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
    fVar54 = *(float *)((long)unaff_x19 + 0x4cc) - fVar45;
    fVar52 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar54 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar52 = fVar54;
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar52;
    fVar65 = *(float *)(unaff_x19 + 0x99);
    if (in_stack_000017d4 == '\0') {
      in_stack_000017d8 = fVar52;
    }
    if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
       (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
        ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
      in_stack_000017d4 = '\x01';
    }
    lVar24 = *in_stack_00000170;
    if ((lVar24 == 0) || (lVar30 = *(long *)(lVar24 + 0x50), lVar30 == 0)) goto LAB_035574b8;
    uVar13 = *(uint *)(unaff_x19 + 0x95);
    if (*(uint *)(lVar30 + 0x18) <= uVar13) goto LAB_035575f4;
    lVar44 = unaff_x19[0x93];
    lVar21 = lVar30 + (long)(int)uVar13 * 0x5c;
    *(int *)(lVar21 + 0x34) = (int)lVar44;
    uVar33 = *(uint *)(unaff_x19 + 0x93);
    if ((int)lVar44 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
      uVar33 = *(uint *)((long)unaff_x19 + 0x49c);
    }
    *(uint *)((long)unaff_x19 + 0x49c) = uVar33;
    *(uint *)(lVar21 + 0x38) = uVar33;
    *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
    *(undefined4 *)(lVar21 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
    iVar11 = *(int *)((long)unaff_x19 + 0x49c);
    if ((int)uVar33 <= *(int *)((long)unaff_x19 + 0x4a4)) {
      iVar11 = *(int *)((long)unaff_x19 + 0x4a4);
    }
    *(int *)((long)unaff_x19 + 0x4a4) = iVar11;
    *(int *)(lVar21 + 0x40) = iVar11;
    *(int *)(lVar21 + 0x24) = (*(int *)(lVar21 + 0x3c) - *(int *)(lVar21 + 0x34)) + 1;
    *(undefined4 *)(lVar21 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    lVar24 = *(long *)(lVar24 + 0x38);
    if (lVar24 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_035575f4;
    uVar64 = *(undefined4 *)(lVar24 + (long)(int)uVar33 * (long)iVar14 + 0x11c);
    lVar30 = lVar30 + (long)(int)uVar13 * 0x5c;
    *(float *)(lVar30 + 0x70) = fVar54;
    *(undefined4 *)(lVar30 + 0x6c) = uVar64;
    lVar24 = *in_stack_00000170;
    if ((lVar24 == 0) || (lVar30 = *(long *)(lVar24 + 0x50), lVar30 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
    lVar24 = *(long *)(lVar24 + 0x38);
    if (lVar24 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar24 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
    fVar65 = fVar65 - fVar45;
    uVar22 = (ulong)(uint)fVar65;
    lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    *(undefined4 *)(lVar30 + 0x74) =
         *(undefined4 *)(lVar24 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128)
    ;
    *(float *)(lVar30 + 0x78) = fVar65;
    lVar24 = *in_stack_00000170;
    if ((lVar24 == 0) || (lVar44 = *(long *)(lVar24 + 0x50), lVar44 == 0)) goto LAB_035574b8;
    lVar21 = (long)(int)*(uint *)(unaff_x19 + 0x95);
    if (*(uint *)(lVar44 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
    lVar30 = lVar44 + lVar21 * 0x5c;
    *(float *)(lVar30 + 0x44) =
         *(float *)(lVar30 + 0x74) - fStack0000000000000150 * fStack000000000000015c;
    *(float *)(lVar30 + 0x5c) = in_stack_000000f8._4_4_;
    if (*(int *)(lVar30 + 0x24) == 1) {
      *(int *)(lVar44 + lVar21 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    if ((*unaff_x21 == 0) || (lVar30 = *(long *)(lVar24 + 0x38), lVar30 == 0)) goto LAB_035574b8;
    lVar38 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
    uVar33 = (uint)*(undefined8 *)(lVar30 + 0x18);
    if (uVar33 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
    if ((*(char *)(lVar30 + lVar38 * unaff_x24 + 0x194) == '\0') &&
       (lVar38 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar33 <= *(uint *)(unaff_x19 + 0x94)))
    goto LAB_035575f4;
    lVar44 = lVar44 + lVar21 * 0x5c;
    fVar45 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fStack00000000000000d4 *
              (fStack00000000000000d0 + in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)) -
             *(float *)((long)unaff_x19 + 0x2ac));
    fVar52 = -fVar45;
    if ((char)unaff_x19[0x1e] != '\0') {
      fVar52 = fVar45;
    }
    *(float *)(lVar44 + 0x58) = *(float *)(lVar30 + lVar38 * unaff_x24 + 0x144) + fVar52;
    *(float *)(lVar44 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
    *(float *)(lVar44 + 0x54) = fVar54;
    *(float *)(lVar44 + 0x48) = in_stack_00000060 + (fVar65 - fVar54);
    *(float *)(lVar44 + 0x4c) = fVar65;
    if ((int)in_stack_000017dc < 0x2d) {
      if (in_stack_000017dc - 10 < 2) {
LAB_03553b60:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        lVar24 = unaff_x19[0x6d];
        *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
        iVar11 = (int)unaff_x19[0x95] + 1;
        *(int *)(unaff_x19 + 0x95) = iVar11;
        *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
        if ((lVar24 == 0) || (*(long *)(lVar24 + 0x50) == 0)) goto LAB_035574b8;
        if (*(int *)(*(long *)(lVar24 + 0x50) + 0x18) <= iVar11) {
          FUN_0358ca18();
          lVar24 = unaff_x19[0x6d];
          if (lVar24 == 0) goto LAB_035574b8;
        }
        lVar24 = *(long *)(lVar24 + 0x38);
        if (lVar24 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        fVar52 = *(float *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
        if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
          if ((in_stack_000017dc == 0x2029) || (fVar54 = 0.0, in_stack_000017dc == 10)) {
            fVar54 = *(float *)((long)unaff_x19 + 0x2cc);
          }
          uVar26 = 0;
          fVar54 = fVar52 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                   fStack0000000000000058 *
                   (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700)) +
                   fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar54) +
                   *(float *)(unaff_x19 + 0x9b);
        }
        else {
          if ((in_stack_000017dc == 0x2029) || (fVar54 = 0.0, in_stack_000017dc == 10)) {
            fVar54 = *(float *)((long)unaff_x19 + 0x2cc);
          }
          uVar26 = 1;
          fVar54 = *(float *)(unaff_x19 + 0x9b) +
                   *(float *)(unaff_x19 + 0x58) +
                   fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar54);
        }
        *(float *)(unaff_x19 + 0x9b) = fVar54;
        *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar26;
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar24 = *(long *)puVar7;
        }
        uVar18 = *(undefined8 *)(*(long *)(lVar24 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 0x9a) = fVar52;
        uVar22 = NEON_rev64(uVar18,4);
        unaff_x19[0x99] = uVar22;
        *(float *)(unaff_x19 + 200) =
             *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
        FUN_0358c4f0();
        FUN_0358c4f0();
        *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
        in_stack_00000068._4_4_ = 1;
        in_stack_00000070 = 1;
        goto LAB_03550bd0;
      }
      if (in_stack_000017dc == 3) {
        if (unaff_x19[0x8f] == 0) goto LAB_035574b8;
        in_stack_000017a8 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
        uVar35 = 3;
      }
    }
    else if ((in_stack_000017dc - 0x2028 < 2) || (in_stack_000017dc == 0x2d)) goto LAB_03553b60;
  }
LAB_03553c8c:
  uVar13 = *unaff_x20;
  if (uVar33 <= uVar13) goto LAB_035575f4;
  if (*(char *)(lVar30 + (long)(int)uVar13 * unaff_x24 + 0x194) != '\0') {
    lVar30 = lVar30 + (long)(int)uVar13 * unaff_x24;
    uVar20 = *(ulong *)(lVar30 + 0x11c);
    uVar22 = *(ulong *)(in_stack_00000080 + 0x230);
    *(ulong *)(in_stack_00000080 + 0x230) =
         uVar22 ^ (uVar22 ^ uVar20) &
                  ~CONCAT44(-(uint)((float)(uVar22 >> 0x20) < (float)(uVar20 >> 0x20)),
                            -(uint)((float)uVar22 < (float)uVar20));
    uVar20 = *(ulong *)(in_stack_00000080 + 0x238);
    uVar22 = *(ulong *)(lVar30 + 0x128);
    *(ulong *)(in_stack_00000080 + 0x238) =
         uVar20 ^ (uVar20 ^ uVar22) &
                  ~CONCAT44(-(uint)((float)(uVar22 >> 0x20) < (float)(uVar20 >> 0x20)),
                            -(uint)((float)uVar22 < (float)uVar20));
  }
  if (((int)unaff_x19[0x5c] == 5) &&
     ((0xd < uVar35 || ((1 << (ulong)(uVar35 & 0x1f) & 0x2c00U) == 0)))) {
    lVar30 = *(long *)(lVar24 + 0x58);
    if (lVar30 == 0) goto LAB_035574b8;
    iVar11 = (int)unaff_x19[0x96] + 1;
    if (*(int *)(lVar30 + 0x18) < iVar11) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff02b8((long *)(lVar24 + 0x58),iVar11,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
      lVar24 = *in_stack_00000170;
      if (lVar24 == 0) goto LAB_035574b8;
    }
    lVar30 = *(long *)(lVar24 + 0x58);
    if (lVar30 == 0) goto LAB_035574b8;
    uVar33 = *(uint *)(unaff_x19 + 0x96);
    lVar44 = (long)(int)uVar33;
    uVar13 = *(uint *)(lVar30 + 0x18);
    if (uVar13 <= uVar33) goto LAB_035575f4;
    lVar21 = lVar30 + lVar44 * 0x14;
    fVar54 = *(float *)(lVar21 + 0x30);
    uVar22 = (ulong)(uint)fVar54;
    *(undefined4 *)(lVar21 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
    fVar52 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar54 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar52 = fVar54;
    }
    *(float *)(lVar21 + 0x30) = fVar52;
    uVar35 = *(uint *)((long)unaff_x19 + 0x494);
    if (uVar35 == 0 && uVar33 == 0) {
      *(uint *)(lVar30 + (ulong)uVar33 * 0x14 + 0x20) = uVar35;
    }
    else {
      uVar5 = uVar35 - 1;
      if (0 < (int)uVar35) {
        lVar24 = *(long *)(lVar24 + 0x38);
        if (lVar24 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar24 + 0x18) <= uVar5) goto LAB_035575f4;
        if (uVar33 != *(uint *)(lVar24 + (ulong)uVar5 * (unaff_x24 & 0xffffffff) + 0x68)) {
          if (uVar13 <= uVar33 - 1) goto LAB_035575f4;
          *(uint *)(lVar30 + 0x20 + (long)(int)(uVar33 - 1) * 0x14 + 4) = uVar5;
          *(uint *)(lVar30 + 0x20 + lVar44 * 0x14) = uVar35;
          goto LAB_03553d10;
        }
      }
      if ((float)uVar35 == in_stack_00000088._4_4_) {
        *(float *)(lVar30 + lVar44 * 0x14 + 0x24) = in_stack_00000088._4_4_;
      }
    }
  }
LAB_03553d10:
  puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  unaff_x29 = (undefined8 *)&stack0x000008a0;
  if (((char)unaff_x19[0x5b] == '\0') &&
     ((6 < *(uint *)(unaff_x19 + 0x5c) ||
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_035542ac;
  if ((unaff_w25 == 0) &&
     (((in_stack_000017dc != 0x2d && (in_stack_000017dc != 0x200b)) && (in_stack_000017dc != 0xad)))
     ) {
    if (*(char *)((long)unaff_x19 + 0x2da) != '\0') {
      if ((in_stack_00000070 & 1) != 0) goto UnityEngine_Animator__set_animatePhysics;
      goto LAB_035542a8;
    }
LAB_03553ef0:
    if (((((0x2bfd < in_stack_000017dc - 0xac01) && (0xfd < in_stack_000017dc - 0x1101)) &&
         (0x1d < in_stack_000017dc - 0xa961)) || (uVar20 = FUN_03597a54(0), (uVar20 & 1) != 0)) &&
       ((((0xed < in_stack_000017dc - 0xff01 && (0x1d < in_stack_000017dc - 0xfe31)) &&
         (0x717d < in_stack_000017dc - 0x2e81)) && (0x1fd < in_stack_000017dc - 0xf901))))
    goto LAB_03553f78;
    lVar24 = FUN_035978e8(0);
    if ((lVar24 == 0) || (*(long *)(lVar24 + 0x10) == 0)) goto LAB_035574b8;
    uVar13 = FUN_0219c130(*(long *)(lVar24 + 0x10),&stack0x000008a0,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    if ((int)in_stack_00000088._4_4_ <= (int)*unaff_x20) {
      in_stack_000008a0 = in_stack_000017dc;
      if ((uVar13 & 1) == 0) {
LAB_03554270:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        goto LAB_035542a8;
      }
LAB_035541dc:
      if (uVar12 != uVar56 || ((in_stack_00000070 ^ 0xff) & 1) != 0) goto LAB_035542ac;
      if (unaff_w25 == 0) goto LAB_0355422c;
      goto UnityEngine_Animator__get_bodyPositionInternal;
    }
    lVar24 = FUN_035978e8(0);
    if (((lVar24 == 0) || (*in_stack_00000170 == 0)) ||
       (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar30 + 0x18) <= *unaff_x20 + 1) goto LAB_035575f4;
    if (*(long *)(lVar24 + 0x18) == 0) goto LAB_035574b8;
    in_stack_000008a0 =
         (uint)*(ushort *)(lVar30 + (long)(int)(*unaff_x20 + 1) * (long)iVar14 + 0x20);
    uVar20 = FUN_0219c130(*(long *)(lVar24 + 0x18),&stack0x000008a0,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    if ((uVar13 & 1) != 0) goto LAB_035541dc;
    if ((uVar20 & 1) == 0) goto LAB_03554270;
    if ((in_stack_00000070 & 1) == 0) goto LAB_035542a8;
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
        in_stack_00000070 = 0;
        *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xe78) = 0xffffffff;
        goto LAB_035542ac;
      }
      goto LAB_03553ef0;
    }
LAB_03553f78:
    if ((in_stack_00000070 & 1) == 0) {
LAB_035542a8:
      in_stack_00000070 = 0;
      goto LAB_035542ac;
    }
    if (unaff_w25 == 0) {
UnityEngine_Animator__set_animatePhysics:
      if (!bVar6 && in_stack_000017dc == 0xad) goto UnityEngine_Animator__get_bodyPositionInternal;
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
  in_stack_00000070 = 1;
LAB_035542ac:
  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_0358c4f0();
  *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
  goto LAB_03550bd0;
code_r0x03552cf8:
  param_2 = *(float *)((long)unaff_x19 + 0x2d4);
  param_1 = *(float *)(unaff_x19 + 0x5a) / 100.0;
  if (param_2 < param_1) goto code_r0x03552d14;
  goto LAB_03552d24;
code_r0x03552d14:
  in_w8 = *(int *)((long)unaff_x19 + 0x244);
  goto code_r0x03552d18;
LAB_03554e78:
  uVar12 = uVar17 - 1;
  if (*(uint *)(lVar24 + 0x18) <= uVar12) goto LAB_035575f4;
  if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x50), lVar44 == 0))
  goto LAB_035574b8;
  lVar38 = (long)(int)uVar12;
  lVar21 = lVar24 + lVar38 * 0x178;
  uVar13 = *(uint *)(lVar21 + 100);
  if (*(uint *)(lVar44 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar41 = (long)(int)uVar13;
  lVar44 = lVar44 + lVar41 * 0x5c;
  lVar36 = *(long *)(lVar21 + 0x38);
  uVar3 = *(ushort *)(lVar21 + 0x20);
  uVar35 = *(uint *)(lVar44 + 0x3c);
  uVar33 = *(uint *)(lVar44 + 0x68);
  iVar2 = *(int *)(lVar44 + 0x20);
  iVar15 = *(int *)(lVar44 + 0x28);
  iVar16 = *(int *)(lVar44 + 0x2c);
  uVar5 = *(uint *)(lVar44 + 0x40);
  lVar21 = (long)(int)uVar5;
  fVar48 = *(float *)(lVar44 + 0x4c);
  fVar49 = *(float *)(lVar44 + 0x54);
  fVar61 = *(float *)(lVar44 + 0x58);
  fVar50 = *(float *)(lVar44 + 0x5c);
  fVar51 = *(float *)(lVar44 + 0x60);
  fVar59 = *(float *)(lVar44 + 0x6c);
  fVar58 = *(float *)(lVar44 + 0x70);
  fVar46 = *(float *)(lVar44 + 0x74);
  fVar62 = *(float *)(lVar44 + 0x78);
  uVar40 = (uint)uVar3;
  if ((int)uVar33 < 9) {
    switch(uVar33) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar51 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar61;
      }
      break;
    case 2:
LAB_03555018:
      in_stack_000000f8._4_4_ = (fVar51 + fVar50 * 0.5) - fVar61 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar50 + fVar51) - fVar61;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar50 + fVar51;
      }
      break;
    case 8:
      goto switchD_03554f58_caseD_8;
    }
LAB_03555088:
    in_stack_000000e8 = 0;
  }
  else if (uVar33 == 0x10) {
switchD_03554f58_caseD_8:
    if (uVar3 < 0xad) {
      if ((uVar3 != 3) && (uVar3 != 10)) goto LAB_03554fac;
    }
    else if ((uVar3 != 0xad) && ((uVar3 != 0x200b && (uVar3 != 0x2060)))) {
LAB_03554fac:
      if (*(uint *)(lVar24 + 0x18) <= uVar35) goto LAB_035575f4;
      uVar4 = *(undefined2 *)(lVar24 + (long)(int)uVar35 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar22 = FUN_026b8cc4(uVar4,0);
      if ((uVar22 & 1) == 0) {
        bVar1 = (int)uVar13 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar61 <= fVar50) && (!bVar1 && uVar33 >> 4 == 0)) {
        in_stack_000000f8._4_4_ = fVar51;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar50 + fVar51;
        }
        goto LAB_03555088;
      }
      if (((uVar17 == 1) || (uVar13 != uVar56)) || (uVar12 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_000000f8._4_4_ = fVar51;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar50 + fVar51;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fStack0000000000000028 = (float)FUN_026b97f8(uVar40,0);
        in_stack_000000e8 = 0;
      }
      else {
        cVar27 = (char)unaff_x19[0x1e];
        fVar51 = -fVar61;
        if (cVar27 != '\0') {
          fVar51 = fVar61;
        }
        if (*(uint *)(lVar24 + 0x18) <= uVar35) goto LAB_035575f4;
        iVar16 = (int)*(char *)(lVar24 + (long)(int)uVar35 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack0000000000000028 & 1)) + iVar16 + -1;
        if (iVar16 < 1) {
          fVar61 = 1.0;
          iVar16 = 1;
        }
        else {
          fVar61 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar40 == 9) {
LAB_03556e74:
          fVar61 = 1.0 - fVar61;
        }
        else {
          if (uVar40 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar22 = FUN_026b97f8(uVar40,0);
            cVar27 = (char)unaff_x19[0x1e];
            if ((uVar22 & 1) != 0) goto LAB_03556e74;
          }
          iVar16 = (iVar2 - (~(uint)fStack0000000000000028 & 1)) + iVar15;
        }
        fVar61 = ((fVar50 + fVar51) * fVar61) / (float)iVar16;
        if (cVar27 == '\0') {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar61;
          in_stack_000000e8 =
               CONCAT44((float)(in_stack_000000e8 >> 0x20) + 0.0,(float)in_stack_000000e8 + 0.0);
        }
        else {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar61;
        }
      }
    }
  }
  else if (uVar33 == 0x20) {
    fVar61 = fVar59 + fVar46;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar33 = (uint)*(undefined8 *)(lVar24 + 0x18);
  if (uVar33 <= uVar12) goto LAB_035575f4;
  lVar44 = lVar24 + lVar38 * 0x178;
  fVar50 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar61 = SUB84(in_stack_000000b8,0) + (float)in_stack_000000e8;
  fVar51 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)(in_stack_000000e8 >> 0x20);
  if (*(char *)(lVar44 + 0x194) == '\0') goto LAB_03555938;
  iVar15 = *(int *)(lVar24 + lVar38 * 0x178 + 0x2c);
  if (iVar15 != 0) goto LAB_0355574c;
  fVar47 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar13,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar29 = lVar24 + lVar38 * 0x178;
    *(undefined4 *)(lVar29 + 0x84) = 0;
    *(undefined4 *)(lVar29 + 0xac) = 0;
    *(undefined4 *)(lVar29 + 0xd4) = 0x3f800000;
    fVar47 = 1.0;
    break;
  case 1:
    fVar62 = *(float *)(lVar24 + lVar38 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar29 = lVar24 + lVar38 * 0x178;
      fVar46 = (in_stack_000000f8._4_4_ + fVar62) - *(float *)(in_stack_00000080 + 0x230);
      fVar62 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar29 = lVar24 + lVar38 * 0x178;
    fVar46 = fVar46 - fVar59;
    *(float *)(lVar29 + 0x84) = fVar47 + (fVar62 - fVar59) / fVar46;
    *(float *)(lVar29 + 0xac) = fVar47 + (*(float *)(lVar29 + 0x98) - fVar59) / fVar46;
    *(float *)(lVar29 + 0xd4) = fVar47 + (*(float *)(lVar29 + 0xc0) - fVar59) / fVar46;
    fVar47 = fVar47 + (*(float *)(lVar29 + 0xe8) - fVar59) / fVar46;
    break;
  case 2:
    lVar29 = lVar24 + lVar38 * 0x178;
    fVar62 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar46 = (in_stack_000000f8._4_4_ + *(float *)(lVar29 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar29 + 0x84) = fVar47 + fVar46 / fVar62;
    *(float *)(lVar29 + 0xac) =
         fVar47 + ((in_stack_000000f8._4_4_ + *(float *)(lVar29 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar29 + 0xd4) =
         fVar47 + ((in_stack_000000f8._4_4_ + *(float *)(lVar29 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar47 = fVar47 + ((in_stack_000000f8._4_4_ + *(float *)(lVar29 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar29 = lVar24 + lVar38 * 0x178;
      *(undefined4 *)(lVar29 + 0x88) = 0;
      *(undefined4 *)(lVar29 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar29 + 0xd8) = 0;
      *(undefined4 *)(lVar29 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar29 = lVar24 + lVar38 * 0x178;
      fVar62 = fVar62 - fVar58;
      fVar46 = fVar47 + (*(float *)(lVar29 + 0x74) - fVar58) / fVar62;
      fVar62 = fVar47 + (*(float *)(lVar29 + 0x9c) - fVar58) / fVar62;
      *(float *)(lVar29 + 0x88) = fVar46;
      *(float *)(lVar29 + 0xb0) = fVar62;
      *(float *)(lVar29 + 0xd8) = fVar46;
      *(float *)(lVar29 + 0x100) = fVar62;
      break;
    case 2:
      lVar29 = lVar24 + lVar38 * 0x178;
      fVar46 = fVar47 + (*(float *)(lVar29 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar29 + 0x88) = fVar46;
      fVar62 = *(float *)(unaff_x19 + 0x9c);
      fVar59 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar29 + 0xd8) = fVar46;
      fVar46 = fVar47 + (*(float *)(lVar29 + 0x9c) - fVar62) / (fVar59 - fVar62);
      *(float *)(lVar29 + 0xb0) = fVar46;
      *(float *)(lVar29 + 0x100) = fVar46;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar33 = (uint)*(undefined8 *)(lVar24 + 0x18);
    }
    if (uVar33 <= uVar12) goto LAB_035575f4;
    lVar29 = lVar24 + lVar38 * 0x178;
    fVar46 = *(float *)(lVar29 + 0x15c);
    fVar62 = (1.0 - (*(float *)(lVar29 + 0x88) + *(float *)(lVar29 + 0xb0)) * fVar46) * 0.5;
    fVar59 = fVar47 + *(float *)(lVar29 + 0x88) * fVar46 + fVar62;
    fVar47 = fVar47 + fVar62 + *(float *)(lVar29 + 0xb0) * fVar46;
    *(float *)(lVar29 + 0x84) = fVar59;
    *(float *)(lVar29 + 0xac) = fVar59;
    *(float *)(lVar29 + 0xd4) = fVar47;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(lVar24 + lVar38 * 0x178 + 0xfc) = fVar47;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar33 <= uVar12) goto LAB_035575f4;
    lVar29 = lVar24 + lVar38 * 0x178;
    *(undefined4 *)(lVar29 + 0x88) = 0;
    *(undefined4 *)(lVar29 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar29 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar29 + 0x100) = 0;
    break;
  case 1:
    if (uVar12 < uVar33) {
      lVar29 = lVar24 + lVar38 * 0x178;
      fVar48 = fVar48 - fVar49;
      fVar47 = (*(float *)(lVar29 + 0x74) - fVar49) / fVar48;
      fVar48 = (*(float *)(lVar29 + 0x9c) - fVar49) / fVar48;
      *(float *)(lVar29 + 0x88) = fVar47;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar33 <= uVar12) goto LAB_035575f4;
    lVar29 = lVar24 + lVar38 * 0x178;
    fVar47 = (*(float *)(lVar29 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar29 + 0x88) = fVar47;
    fVar48 = (*(float *)(lVar29 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar29 + 0xb0) = fVar48;
    *(float *)(lVar29 + 0xd8) = fVar48;
    *(float *)(lVar29 + 0x100) = fVar47;
    break;
  case 3:
    if (uVar33 <= uVar12) goto LAB_035575f4;
    lVar29 = lVar24 + lVar38 * 0x178;
    fVar48 = *(float *)(lVar29 + 0x15c);
    fVar46 = (1.0 - (*(float *)(lVar29 + 0x84) + *(float *)(lVar29 + 0xd4)) / fVar48) * 0.5;
    fVar47 = *(float *)(lVar29 + 0x84) / fVar48 + fVar46;
    fVar46 = fVar46 + *(float *)(lVar29 + 0xd4) / fVar48;
    *(float *)(lVar29 + 0x88) = fVar47;
    *(float *)(lVar29 + 0xb0) = fVar46;
    *(float *)(lVar29 + 0x100) = fVar47;
    *(float *)(lVar29 + 0xd8) = fVar46;
  }
  if (uVar33 <= uVar12) goto LAB_035575f4;
  lVar29 = lVar24 + lVar38 * 0x178;
  fVar47 = *(float *)(lVar29 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar29 + 0x5c) == '\0') && ((*(byte *)(lVar24 + lVar38 * 0x178 + 400) & 1) != 0)) {
    fVar47 = -fVar47;
  }
  fVar46 = fVar52;
  if (((iVar14 == 2) || (fVar46 = fVar45, iVar14 == 1)) || (fVar46 = fVar52 / fVar54, iVar14 == 0))
  {
    fVar47 = fVar46 * fVar47;
  }
  lVar29 = lVar24 + lVar38 * 0x178;
  fVar48 = *(float *)(lVar29 + 0x88);
  fVar62 = *(float *)(lVar29 + 0x84);
  fVar46 = -2.1474836e+09;
  if (fVar62 != INFINITY) {
    fVar46 = (float)(int)fVar62;
  }
  fVar59 = *(float *)(lVar29 + 0xd4);
  fVar58 = *(float *)(lVar29 + 0xd8);
  fVar49 = -2.1474836e+09;
  if (fVar48 != INFINITY) {
    fVar49 = (float)(int)fVar48;
  }
  uVar53 = FUN_03591d3c(fVar62 - fVar46,fVar48 - fVar49);
  *(undefined4 *)(lVar29 + 0x84) = uVar53;
  if (*(uint *)(lVar24 + 0x18) <= uVar12) goto LAB_035575f4;
  fVar58 = fVar58 - fVar49;
  *(float *)(lVar29 + 0x88) = fVar47;
  uVar53 = FUN_03591d3c(fVar62 - fVar46,fVar58);
  *(undefined4 *)(lVar24 + lVar38 * 0x178 + 0xac) = uVar53;
  if (*(uint *)(lVar24 + 0x18) <= uVar12) goto LAB_035575f4;
  fVar59 = fVar59 - fVar46;
  *(float *)(lVar24 + lVar38 * 0x178 + 0xb0) = fVar47;
  fVar46 = (float)FUN_03591d3c(fVar59,fVar58);
  *(float *)(lVar29 + 0xd4) = fVar46;
  if (*(uint *)(lVar24 + 0x18) <= uVar12) goto LAB_035575f4;
  *(float *)(lVar29 + 0xd8) = fVar47;
  uVar53 = FUN_03591d3c(fVar59,fVar48 - fVar49);
  *(undefined4 *)(lVar24 + lVar38 * 0x178 + 0xfc) = uVar53;
  uVar33 = (uint)*(undefined8 *)(lVar24 + 0x18);
  if (uVar33 <= uVar12) goto LAB_035575f4;
  *(float *)(lVar24 + lVar38 * 0x178 + 0x100) = fVar47;
LAB_0355574c:
  if (((int)uVar12 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar13 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar33 <= uVar12) goto LAB_035575f4;
      lVar44 = lVar24 + lVar38 * 0x178;
      *(ulong *)(lVar44 + 0x70) =
           CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar44 + 0x70) >> 0x20),
                    fVar50 + (float)*(undefined8 *)(lVar44 + 0x70));
      *(float *)(lVar44 + 0x78) = fVar51 + *(float *)(lVar44 + 0x78);
      *(ulong *)(lVar44 + 0x98) =
           CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar44 + 0x98) >> 0x20),
                    fVar50 + (float)*(undefined8 *)(lVar44 + 0x98));
      *(float *)(lVar44 + 0xa0) = fVar51 + *(float *)(lVar44 + 0xa0);
      *(ulong *)(lVar44 + 0xc0) =
           CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar44 + 0xc0) >> 0x20),
                    fVar50 + (float)*(undefined8 *)(lVar44 + 0xc0));
      *(float *)(lVar44 + 200) = fVar51 + *(float *)(lVar44 + 200);
      *(ulong *)(lVar44 + 0xe8) =
           CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar44 + 0xe8) >> 0x20),
                    fVar50 + (float)*(undefined8 *)(lVar44 + 0xe8));
      *(float *)(lVar44 + 0xf0) = fVar51 + *(float *)(lVar44 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uVar13 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar12 < uVar33) {
        if (*(uint *)(lVar24 + lVar38 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar44 = lVar24 + lVar38 * 0x178;
          *(ulong *)(lVar44 + 0x70) =
               CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar44 + 0x70) >> 0x20),
                        fVar50 + (float)*(undefined8 *)(lVar44 + 0x70));
          *(float *)(lVar44 + 0x78) = fVar51 + *(float *)(lVar44 + 0x78);
          *(ulong *)(lVar44 + 0x98) =
               CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar44 + 0x98) >> 0x20),
                        fVar50 + (float)*(undefined8 *)(lVar44 + 0x98));
          *(float *)(lVar44 + 0xa0) = fVar51 + *(float *)(lVar44 + 0xa0);
          *(ulong *)(lVar44 + 0xc0) =
               CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar44 + 0xc0) >> 0x20),
                        fVar50 + (float)*(undefined8 *)(lVar44 + 0xc0));
          *(float *)(lVar44 + 200) = fVar51 + *(float *)(lVar44 + 200);
          *(ulong *)(lVar44 + 0xe8) =
               CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar44 + 0xe8) >> 0x20),
                        fVar50 + (float)*(undefined8 *)(lVar44 + 0xe8));
          *(float *)(lVar44 + 0xf0) = fVar51 + *(float *)(lVar44 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar33 <= uVar12) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar33 = *(uint *)(lVar24 + 0x18);
  }
  puVar7 = PTR_DAT_03cbded8;
  uVar53 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar29 = lVar24 + lVar38 * 0x178;
  *(undefined8 *)(lVar29 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar29 + 0x78) = uVar53;
  if (uVar33 <= uVar12) goto LAB_035575f4;
  uVar53 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  lVar29 = lVar24 + lVar38 * 0x178;
  *(undefined8 *)(lVar29 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar29 + 0xa0) = uVar53;
  uVar53 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar29 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar29 + 200) = uVar53;
  uVar53 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar29 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar29 + 0xf0) = uVar53;
  *(undefined1 *)(lVar44 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar15 == 0) {
    pcVar32 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar32)();
  }
  else if (iVar15 == 1) {
    pcVar32 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar44 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar44 = lVar44 + lVar38 * 0x178;
  uVar18 = *(undefined8 *)(lVar44 + 0x11c);
  *(undefined8 *)(lVar44 + 0x11c) =
       CONCAT44(fVar61 + (float)((ulong)uVar18 >> 0x20),fVar50 + (float)uVar18);
  *(float *)(lVar44 + 0x124) = fVar51 + *(float *)(lVar44 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar44 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar44 = lVar44 + lVar38 * 0x178;
  *(ulong *)(lVar44 + 0x110) =
       CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar44 + 0x110) >> 0x20),
                fVar50 + (float)*(undefined8 *)(lVar44 + 0x110));
  *(float *)(lVar44 + 0x118) = fVar51 + *(float *)(lVar44 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar44 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar44 = lVar44 + lVar38 * 0x178;
  *(ulong *)(lVar44 + 0x128) =
       CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar44 + 0x128) >> 0x20),
                fVar50 + (float)*(undefined8 *)(lVar44 + 0x128));
  *(float *)(lVar44 + 0x130) = fVar51 + *(float *)(lVar44 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar44 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar44 = lVar44 + lVar38 * 0x178;
  *(float *)(lVar44 + 0x134) = fVar50 + *(float *)(lVar44 + 0x134);
  *(ulong *)(lVar44 + 0x138) =
       CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar44 + 0x138) >> 0x20),
                fVar61 + (float)*(undefined8 *)(lVar44 + 0x138));
  lVar44 = *in_stack_00000170;
  if ((lVar44 == 0) || (lVar29 = *(long *)(lVar44 + 0x38), lVar29 == 0)) goto LAB_035574b8;
  uVar33 = *(uint *)(lVar29 + 0x18);
  if (uVar33 <= uVar12) goto LAB_035575f4;
  lVar37 = lVar29 + lVar38 * 0x178;
  uVar20 = CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar37 + 0x140) >> 0x20),
                    fVar50 + (float)*(undefined8 *)(lVar37 + 0x140));
  fVar46 = fVar61 + *(float *)(lVar37 + 0x150);
  uVar55 = (ulong)(uint)fVar46;
  uVar57 = CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar37 + 0x148) >> 0x20),
                    fVar61 + (float)*(undefined8 *)(lVar37 + 0x148));
  *(float *)(lVar37 + 0x150) = fVar46;
  *(ulong *)(lVar37 + 0x140) = uVar20;
  *(ulong *)(lVar37 + 0x148) = uVar57;
  if (uVar13 == uVar56) {
    uVar56 = *unaff_x20 - 1;
    if (uVar12 == uVar56) goto LAB_03555b44;
  }
  else {
    lVar44 = *(long *)(lVar44 + 0x50);
    if (lVar44 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar44 + 0x18) <= uVar56) goto LAB_035575f4;
    lVar37 = (long)(int)uVar56;
    lVar39 = lVar44 + lVar37 * 0x5c;
    uVar57 = (ulong)(uint)*(float *)(lVar39 + 0x58);
    fVar46 = fVar61 + *(float *)(lVar39 + 0x54);
    uVar20 = (ulong)(uint)fVar46;
    fVar48 = fVar50 + *(float *)(lVar39 + 0x58);
    uVar55 = (ulong)(uint)fVar48;
    *(ulong *)(lVar39 + 0x4c) =
         CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar39 + 0x4c) >> 0x20),
                  fVar61 + (float)*(undefined8 *)(lVar39 + 0x4c));
    *(float *)(lVar39 + 0x54) = fVar46;
    *(float *)(lVar39 + 0x58) = fVar48;
    if (uVar33 <= *(uint *)(lVar39 + 0x34)) goto LAB_035575f4;
    uVar53 = *(undefined4 *)(lVar29 + (long)(int)*(uint *)(lVar39 + 0x34) * 0x178 + 0x11c);
    lVar44 = lVar44 + lVar37 * 0x5c;
    *(float *)(lVar44 + 0x70) = fVar46;
    *(undefined4 *)(lVar44 + 0x6c) = uVar53;
    lVar44 = *in_stack_00000170;
    if ((lVar44 == 0) || (lVar29 = *(long *)(lVar44 + 0x50), lVar29 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar29 + 0x18) <= uVar56) goto LAB_035575f4;
    lVar44 = *(long *)(lVar44 + 0x38);
    if (lVar44 == 0) goto LAB_035574b8;
    uVar56 = *(uint *)(lVar29 + lVar37 * 0x5c + 0x40);
    if (*(uint *)(lVar44 + 0x18) <= uVar56) goto LAB_035575f4;
    lVar29 = lVar29 + lVar37 * 0x5c;
    *(undefined4 *)(lVar29 + 0x74) = *(undefined4 *)(lVar44 + (long)(int)uVar56 * 0x178 + 0x128);
    *(undefined4 *)(lVar29 + 0x78) = *(undefined4 *)(lVar29 + 0x4c);
    uVar56 = *unaff_x20 - 1;
LAB_03555b44:
    if (uVar12 == uVar56) {
      lVar44 = *in_stack_00000170;
      if ((lVar44 == 0) || (lVar29 = *(long *)(lVar44 + 0x50), lVar29 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar37 = lVar29 + lVar41 * 0x5c;
      uVar57 = (ulong)(uint)*(float *)(lVar37 + 0x58);
      uVar20 = CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar37 + 0x4c) >> 0x20),
                        fVar61 + (float)*(undefined8 *)(lVar37 + 0x4c));
      fVar46 = fVar61 + *(float *)(lVar37 + 0x54);
      fVar50 = fVar50 + *(float *)(lVar37 + 0x58);
      uVar55 = (ulong)(uint)fVar50;
      *(ulong *)(lVar37 + 0x4c) = uVar20;
      *(float *)(lVar37 + 0x54) = fVar46;
      *(float *)(lVar37 + 0x58) = fVar50;
      lVar44 = *(long *)(lVar44 + 0x38);
      if (lVar44 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar44 + 0x18) <= *(uint *)(lVar37 + 0x34)) goto LAB_035575f4;
      uVar53 = *(undefined4 *)(lVar44 + (long)(int)*(uint *)(lVar37 + 0x34) * 0x178 + 0x11c);
      lVar29 = lVar29 + lVar41 * 0x5c;
      *(float *)(lVar29 + 0x70) = fVar46;
      *(undefined4 *)(lVar29 + 0x6c) = uVar53;
      lVar44 = *in_stack_00000170;
      if ((lVar44 == 0) || (lVar29 = *(long *)(lVar44 + 0x50), lVar29 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar44 = *(long *)(lVar44 + 0x38);
      if (lVar44 == 0) goto LAB_035574b8;
      uVar56 = *(uint *)(lVar29 + lVar41 * 0x5c + 0x40);
      if (*(uint *)(lVar44 + 0x18) <= uVar56) goto LAB_035575f4;
      lVar29 = lVar29 + lVar41 * 0x5c;
      *(undefined4 *)(lVar29 + 0x74) = *(undefined4 *)(lVar44 + (long)(int)uVar56 * 0x178 + 0x128);
      *(undefined4 *)(lVar29 + 0x78) = *(undefined4 *)(lVar29 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar22 = FUN_026b82c4(uVar40,0);
  if (((((uVar22 & 1) == 0) && (1 < uVar40 - 0x2010)) && (uVar40 != 0xad)) && (uVar40 != 0x2d)) {
    if (bVar9) {
      if (((uVar17 != 1) && ((int)uVar12 < (int)(*(uint *)(lVar24 + 0x18) - 1))) &&
         (((int)uVar12 < (int)*unaff_x20 && ((uVar40 == 0x2019 || (uVar40 == 0x27)))))) {
        if (*(uint *)(lVar24 + 0x18) <= uVar17 - 2) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(lVar24 + lVar30 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar22 = FUN_026b82c4(uVar4,0);
        if ((uVar22 & 1) != 0) {
          if (*(uint *)(lVar24 + 0x18) <= uVar17) goto LAB_035575f4;
          uVar4 = *(undefined2 *)(lVar24 + lVar30 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar22 = FUN_026b82c4(uVar4,0);
          if ((uVar22 & 1) != 0) goto LAB_03555d68;
        }
      }
    }
    else {
      if (uVar17 != 1) {
LAB_0355686c:
        bVar9 = false;
        goto LAB_03555d70;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar22 = FUN_026b81f8(uVar40,0);
      if ((uVar22 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar22 = FUN_026b63d8(uVar40,0);
        if (((uVar40 != 0x200b) && ((uVar22 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
      }
    }
    if (uVar12 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar22 = FUN_026b82c4(uVar40,0);
      iVar15 = (int)fStack0000000000000128;
      if ((uVar22 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar15 = uVar17 - 2;
    }
    lVar44 = *in_stack_00000170;
    if (lVar44 == 0) goto LAB_035574b8;
    lVar29 = *(long *)(lVar44 + 0x40);
    if (lVar29 == 0) goto LAB_035574b8;
    uVar56 = *(uint *)(lVar44 + 0x24);
    iVar16 = *(int *)(lVar29 + 0x18);
    if (iVar16 < (int)(uVar56 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar44 + 0x40),iVar16 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar44 = *in_stack_00000170;
      if (lVar44 == 0) goto LAB_035574b8;
    }
    lVar44 = *(long *)(lVar44 + 0x40);
    if (lVar44 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar44 + 0x18) <= uVar56) goto LAB_035575f4;
    lVar44 = lVar44 + (long)(int)uVar56 * 0x18;
    *(long **)(lVar44 + 0x20) = unaff_x19;
    *(float *)(lVar44 + 0x28) = fStack0000000000000158;
    *(int *)(lVar44 + 0x2c) = iVar15;
    *(int *)(lVar44 + 0x30) = (iVar15 - (int)fStack0000000000000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar44 = unaff_x19[0x6d];
    if (lVar44 == 0) goto LAB_035574b8;
    lVar29 = *(long *)(lVar44 + 0x50);
    *(int *)(lVar44 + 0x24) = *(int *)(lVar44 + 0x24) + 1;
    if (lVar29 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar29 + 0x18) <= uVar13) goto LAB_035575f4;
    lVar29 = lVar29 + lVar41 * 0x5c;
    bVar9 = false;
    fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
    *(int *)(lVar29 + 0x30) = *(int *)(lVar29 + 0x30) + 1;
  }
  else {
    if (!bVar9) {
      fStack0000000000000158 = (float)uVar12;
    }
    if (uVar12 == *unaff_x20 - 1) {
      lVar44 = *in_stack_00000170;
      if (lVar44 == 0) goto LAB_035574b8;
      lVar29 = *(long *)(lVar44 + 0x40);
      if (lVar29 == 0) goto LAB_035574b8;
      uVar56 = *(uint *)(lVar44 + 0x24);
      iVar15 = *(int *)(lVar29 + 0x18);
      if (iVar15 < (int)(uVar56 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar44 + 0x40),iVar15 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar44 = *in_stack_00000170;
        if (lVar44 == 0) goto LAB_035574b8;
      }
      lVar44 = *(long *)(lVar44 + 0x40);
      if (lVar44 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar44 + 0x18) <= uVar56) goto LAB_035575f4;
      lVar44 = lVar44 + (long)(int)uVar56 * 0x18;
      *(long **)(lVar44 + 0x20) = unaff_x19;
      *(float *)(lVar44 + 0x28) = fStack0000000000000158;
      *(uint *)(lVar44 + 0x2c) = uVar12;
      *(uint *)(lVar44 + 0x30) = uVar17 - (int)fStack0000000000000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar44 = unaff_x19[0x6d];
      if (lVar44 == 0) goto LAB_035574b8;
      lVar29 = *(long *)(lVar44 + 0x50);
      *(int *)(lVar44 + 0x24) = *(int *)(lVar44 + 0x24) + 1;
      if (lVar29 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar29 = lVar29 + lVar41 * 0x5c;
      fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
      *(int *)(lVar29 + 0x30) = *(int *)(lVar29 + 0x30) + 1;
    }
LAB_03555d68:
    bVar9 = true;
  }
LAB_03555d70:
  if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
  goto LAB_035574b8;
  uVar56 = *(uint *)(lVar44 + 0x18);
  if (uVar56 <= uVar12) goto LAB_035575f4;
  if ((*(byte *)(lVar44 + lVar38 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar10) {
LAB_03555da0:
      if (uVar56 <= uVar17 - 2) goto LAB_035575f4;
      lVar41 = *unaff_x19;
      uVar56 = *(uint *)(lVar44 + lVar30 + -0x330);
      uVar53 = *(undefined4 *)(lVar44 + lVar30 + -0x2f8);
LAB_035562ec:
      pcVar32 = *(code **)(lVar41 + 0x8d8);
LAB_035562f4:
      uVar57 = (ulong)uVar56;
      uVar20 = (ulong)(uint)_in_stack_00000070;
      uVar55 = (ulong)uStack0000000000000074;
      (*pcVar32)(fStack0000000000000078,uVar20,uVar55,uVar57,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar53);
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar44 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar44 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar44 = *(long *)puVar7;
      }
LAB_03556348:
      bVar10 = false;
      fVar65 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar44 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_03556254:
      bVar10 = false;
    }
  }
  else {
    lVar44 = lVar44 + lVar38 * 0x178;
    iVar15 = *(int *)(lVar44 + 0x68);
    *(int *)(lVar44 + 0x16c) = iVar11;
    if ((((int)unaff_x19[0x65] < (int)uVar12) || ((int)unaff_x19[0x66] < (int)uVar13)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar15 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar22 = FUN_026b63d8(uVar40,0);
    if ((uVar40 != 0x200b) && ((uVar22 & 1) == 0)) {
      lVar44 = *in_stack_00000170;
      if ((lVar44 == 0) || (lVar41 = *(long *)(lVar44 + 0x38), lVar41 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar41 + 0x18) <= uVar12) goto LAB_035575f4;
      fVar46 = *(float *)(lVar41 + lVar38 * 0x178 + 0x160);
      if (fVar65 <= fVar46) {
        fVar65 = fVar46;
      }
      if (fStack0000000000000100 <= ABS(fVar47)) {
        fStack0000000000000100 = ABS(fVar47);
      }
      if (iVar15 != in_stack_00000068._4_4_) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar44 = *in_stack_00000170;
          if (lVar44 == 0) goto LAB_035574b8;
          lVar41 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar41 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar41 + 0x15a8);
      }
      lVar44 = *(long *)(lVar44 + 0x38);
      if (lVar44 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar44 + 0x18) <= uVar12) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar48 = *(float *)(lVar44 + lVar38 * 0x178 + 0x14c);
      fVar46 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar48 = fVar48 + fVar65 * fVar46;
      if (fVar48 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar48;
      }
      uVar20 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar15;
    }
    if (!bVar10) {
      bVar10 = false;
      if ((((uVar40 == 0xd) || ((uVar40 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar12)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_03556364;
      if (uVar12 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar22 = FUN_026b97f8(uVar40,0);
        if ((uVar22 & 1) != 0) goto LAB_03556254;
      }
      if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar44 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar44 = lVar44 + lVar38 * 0x178;
      in_stack_00000088._4_4_ = *(float *)(lVar44 + 0x160);
      fStack0000000000000078 = *(float *)(lVar44 + 0x11c);
      uVar55 = (ulong)(uint)fStack0000000000000078;
      bVar10 = fVar65 != 0.0;
      fVar46 = in_stack_00000088._4_4_;
      if (bVar10) {
        fVar46 = fVar65;
      }
      fVar65 = fVar46;
      uVar64 = *(undefined4 *)(lVar44 + 0x168);
      uStack0000000000000074 = 0;
      fVar46 = fVar47;
      if (bVar10) {
        fVar46 = fStack0000000000000100;
      }
      uVar20 = (ulong)(uint)fVar46;
      _in_stack_00000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar46;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 != 0) && (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 != 0))
      {
        if (uVar12 < *(uint *)(lVar44 + 0x18)) {
          lVar44 = lVar44 + lVar38 * 0x178;
          lVar41 = *unaff_x19;
          uVar56 = *(uint *)(lVar44 + 0x128);
          uVar53 = *(undefined4 *)(lVar44 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((uVar12 == uVar35) || ((int)uVar5 <= (int)uVar12)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar22 = FUN_026b63d8(uVar40,0);
      if ((*in_stack_00000170 != 0) && (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 != 0))
      {
        lVar41 = lVar38;
        uVar56 = uVar12;
        if (uVar40 == 0x200b || (uVar22 & 1) != 0) {
          lVar41 = lVar21;
          uVar56 = uVar5;
        }
        if (uVar56 < *(uint *)(lVar44 + 0x18)) {
          lVar44 = lVar44 + lVar41 * 0x178;
          uVar56 = *(uint *)(lVar44 + 0x128);
          uVar53 = *(undefined4 *)(lVar44 + 0x160);
          pcVar32 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 != 0))
      {
        uVar56 = *(uint *)(lVar44 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar12 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar44 + 0x18) <= uVar17) goto LAB_035575f4;
      uVar22 = FUN_03567ad8(uVar64,*(undefined4 *)(lVar44 + lVar30),0);
      if ((uVar22 & 1) == 0) {
        if ((*in_stack_00000170 != 0) &&
           (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 != 0)) {
          if (uVar12 < *(uint *)(lVar44 + 0x18)) {
            lVar44 = lVar44 + lVar38 * 0x178;
            uVar57 = (ulong)*(uint *)(lVar44 + 0x128);
            uVar55 = (ulong)uStack0000000000000074;
            uVar20 = (ulong)(uint)_in_stack_00000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000078,uVar20,uVar55,uVar57,fStack0000000000000104,0,
                       in_stack_00000088._4_4_,*(undefined4 *)(lVar44 + 0x160));
            puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar44 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar44 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar44 = *(long *)puVar7;
            }
            goto LAB_03556348;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
    }
    bVar10 = true;
  }
LAB_03556364:
  if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar44 + 0x18) <= uVar12) goto LAB_035575f4;
  if (lVar36 == 0) goto LAB_035574b8;
  uVar56 = *(uint *)(lVar44 + lVar38 * 0x178 + 400);
  fVar46 = (float)FUN_03776a30(lVar36 + 0x50,0);
  if ((uVar56 >> 6 & 1) == 0) {
    if ((_fStack0000000000000128 & 0x100000000) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar44 + 0x18) <= uVar17 - 2) goto LAB_035575f4;
      uVar56 = *(uint *)(lVar44 + lVar30 + -0x330);
      fVar61 = *(float *)(lVar44 + lVar30 + -0x30c);
      pcVar32 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar57 = (ulong)uVar56;
      uVar20 = (ulong)(uint)fStack000000000000009c;
      uVar55 = (ulong)(uint)fStack0000000000000098;
      (*pcVar32)(fStack00000000000000a0,uVar20,uVar55,uVar57,
                 fStack00000000000000a8 * fVar46 + fVar61,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_03556948:
    _fStack0000000000000128 = _fStack0000000000000128 & 0xffffffff;
  }
  else {
    lVar44 = *in_stack_00000170;
    if ((lVar44 == 0) || (lVar41 = *(long *)(lVar44 + 0x38), lVar41 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar41 + 0x18) <= uVar12) goto LAB_035575f4;
    *(int *)(lVar41 + lVar38 * 0x178 + 0x174) = iVar11;
    if ((((int)unaff_x19[0x65] < (int)uVar12) || ((int)unaff_x19[0x66] < (int)uVar13)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar41 + lVar38 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar40 == 0xd) || ((uVar40 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar12)) ||
       ((_fStack0000000000000128 & 0x100000000) != 0 || !bVar1)) {
LAB_035564e8:
      if ((_fStack0000000000000128 & 0x100000000) == 0) goto LAB_03556948;
    }
    else {
      if (uVar12 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar22 = FUN_026b97f8(uVar40,0);
        if ((uVar22 & 1) != 0) goto LAB_035564e8;
        lVar44 = *in_stack_00000170;
        if (lVar44 == 0) goto LAB_035574b8;
      }
      lVar44 = *(long *)(lVar44 + 0x38);
      if (lVar44 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar44 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar44 = lVar44 + lVar38 * 0x178;
      fStack0000000000000040 = *(float *)(lVar44 + 0x60);
      fStack0000000000000038 = *(float *)(lVar44 + 0x14c);
      uVar20 = (ulong)(uint)fStack0000000000000038;
      fStack00000000000000a0 = *(float *)(lVar44 + 0x11c);
      uVar55 = (ulong)(uint)fStack00000000000000a0;
      fStack00000000000000a8 = *(float *)(lVar44 + 0x160);
      fStack000000000000009c = fVar46 * fStack00000000000000a8 + fStack0000000000000038;
      fStack0000000000000098 = 0.0;
    }
    uVar56 = *unaff_x20;
    if (uVar56 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 != 0) && (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 != 0))
      {
        if (uVar12 < *(uint *)(lVar44 + 0x18)) {
          lVar44 = lVar44 + lVar38 * 0x178;
          lVar21 = *unaff_x19;
          uVar56 = *(uint *)(lVar44 + 0x128);
          fVar61 = *(float *)(lVar44 + 0x14c);
LAB_03556654:
          pcVar32 = *(code **)(lVar21 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (uVar12 == uVar35) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar22 = FUN_026b63d8(uVar40,0);
      if ((*in_stack_00000170 != 0) && (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 != 0))
      {
        uVar56 = *(uint *)(lVar44 + 0x18);
        if (uVar40 == 0x200b || (uVar22 & 1) != 0) {
          if (uVar56 <= uVar5) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar21 = lVar38;
          if (uVar56 <= uVar12) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar44 = lVar44 + lVar21 * 0x178;
        fVar61 = *(float *)(lVar44 + 0x14c);
        uVar56 = *(uint *)(lVar44 + 0x128);
        pcVar32 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar12 < (int)uVar56) {
      lVar44 = *in_stack_00000170;
      if ((lVar44 != 0) && (lVar41 = *(long *)(lVar44 + 0x38), lVar41 != 0)) {
        if (uVar17 < *(uint *)(lVar41 + 0x18)) {
          if (*(float *)(lVar41 + lVar30 + -0x108) == fStack0000000000000040) {
            fVar48 = *(float *)(lVar41 + lVar30 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar20 = (ulong)(uint)fStack0000000000000038;
            uVar22 = FUN_03567bac(fVar61 + fVar48,uVar20,0);
            if ((uVar22 & 1) != 0) {
              uVar56 = *unaff_x20;
              goto LAB_03556744;
            }
            lVar44 = *in_stack_00000170;
            if (lVar44 == 0) goto LAB_035574b8;
          }
          lVar44 = *(long *)(lVar44 + 0x38);
          if (lVar44 != 0) {
            uVar56 = *(uint *)(lVar44 + 0x18);
            if ((int)uVar12 <= (int)uVar5) goto FUN_035568e8;
            if (uVar5 < uVar56) goto LAB_035568f0;
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_03556744:
    if ((int)uVar12 < (int)uVar56) {
      iVar15 = FUN_036d3364(lVar36,0);
      if (*(uint *)(lVar24 + 0x18) <= uVar17) goto LAB_035575f4;
      lVar44 = *(long *)(lVar24 + lVar30 + -0x130);
      if (lVar44 == 0) goto LAB_035574b8;
      iVar16 = FUN_036d3364(lVar44,0);
      if (iVar15 != iVar16) goto LAB_03556628;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 != 0))
      {
        if (uVar17 - 2 < *(uint *)(lVar44 + 0x18)) {
          lVar21 = *unaff_x19;
          uVar56 = *(uint *)(lVar44 + lVar30 + -0x330);
          fVar61 = *(float *)(lVar44 + lVar30 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    _fStack0000000000000128 = CONCAT44(1,fStack0000000000000128);
  }
  if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
  goto LAB_035574b8;
  uVar56 = (uint)*(undefined8 *)(lVar44 + 0x18);
  if (uVar56 <= uVar12) goto LAB_035575f4;
  if ((*(byte *)(lVar44 + lVar38 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar6) {
      uVar55 = (ulong)uStack00000000000000c0;
      uVar20 = (ulong)(uint)fStack00000000000000dc;
      uVar57 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar20,uVar55,uVar57,fStack00000000000000d0,uVar55);
    }
LAB_035569b4:
    bVar6 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar12) || ((int)unaff_x19[0x66] < (int)uVar13)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar44 + lVar38 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar6) {
      if ((((uVar40 == 0xd) || ((uVar40 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar12)) || (!bVar1)
         ) goto LAB_035569b4;
      if (uVar12 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar22 = FUN_026b97f8(uVar40,0);
        if ((uVar22 & 1) != 0) goto LAB_035569b4;
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar21 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar21 = *(long *)puVar7;
      }
      if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
      goto LAB_035574b8;
      uVar56 = (uint)*(undefined8 *)(lVar44 + 0x18);
      if (uVar56 <= uVar12) goto LAB_035575f4;
      lVar21 = *(long *)(lVar21 + 0xb8);
      lVar36 = lVar44 + lVar38 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar36 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar36 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar21 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar21 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar36 + 0x18c);
      fStack00000000000000c8 = *(float *)(lVar21 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar21 + 0x15a4);
      uStack00000000000000c0 = 0;
    }
    if (uVar56 <= uVar12) goto LAB_035575f4;
    lVar44 = lVar44 + lVar38 * 0x178;
    fVar46 = *(float *)(lVar44 + 0x128);
    fVar49 = *(float *)(lVar44 + 0x188);
    uVar19 = *(undefined8 *)(lVar44 + 0x17c);
    fVar59 = *(float *)(lVar44 + 0x184);
    uVar18 = *(undefined8 *)(lVar44 + 0x184);
    fVar51 = *(float *)(lVar44 + 0x18c);
    fVar61 = *(float *)(lVar44 + 0x11c);
    fVar62 = *(float *)(lVar44 + 0x148);
    fVar48 = *(float *)(lVar44 + 0x150);
    in_stack_00000178 = uVar19;
    fStack0000000000000180 = fVar59;
    fStack0000000000000184 = fVar49;
    in_stack_00000188 = fVar51;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar22 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar44 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar22 & 1) == 0) {
      if (*(int *)(lVar44 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar44);
      }
      fVar46 = fVar46 + (float)in_stack_000017b8;
      uVar55 = (ulong)(uint)fVar46;
      fVar61 = fVar61 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar48 = fVar48 - in_stack_000017c0;
      uVar20 = (ulong)(uint)fVar48;
      fVar62 = fVar62 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar57 = (ulong)(uint)fVar62;
      if (fVar61 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar61;
      }
      if (fVar48 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar48;
      }
      if (fStack00000000000000c8 <= fVar46) {
        fStack00000000000000c8 = fVar46;
      }
      if (fStack00000000000000d0 <= fVar62) {
        fStack00000000000000d0 = fVar62;
      }
    }
    else {
      if (*(int *)(lVar44 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar44);
      }
      fVar61 = (fVar61 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar57 = (ulong)(uint)fVar61;
      if (fVar48 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar48;
      }
      uVar20 = (ulong)(uint)fStack00000000000000dc;
      uVar55 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar62) {
        fStack00000000000000d0 = fVar62;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar20,uVar55,uVar57,fStack00000000000000d0,uVar55);
      fStack00000000000000dc = fVar48 - fVar51;
      fStack00000000000000c8 = fVar46 + fVar59;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar62 + fVar49;
      fStack00000000000000d8 = fVar61;
      in_stack_000017b0 = uVar19;
      in_stack_000017b8 = uVar18;
      in_stack_000017c0 = fVar51;
    }
    if (((*unaff_x20 == 1) || (uVar12 == uVar35)) || (((int)uVar5 <= (int)uVar12 || (!bVar1)))) {
      uVar55 = (ulong)uStack00000000000000c0;
      uVar20 = (ulong)(uint)fStack00000000000000dc;
      uVar57 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar20,uVar55,uVar57,fStack00000000000000d0,uVar55);
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
  }
  uVar12 = *unaff_x20;
  lVar30 = lVar30 + 0x178;
  _fStack0000000000000128 = CONCAT44(fStack000000000000012c,(int)fStack0000000000000128 + 1);
  bVar1 = (int)uVar12 <= (int)uVar17;
  uVar17 = uVar17 + 1;
  uVar56 = uVar13;
  if (bVar1) goto FUN_03556ed8;
  goto LAB_03554e78;
FUN_03556ed8:
  lVar24 = *in_stack_00000170;
  if (lVar24 != 0) {
    iVar11 = uVar13 + 1;
    plVar43 = (long *)OVRPlugin_Media_TypeInfo;
LAB_03556f00:
    *(uint *)(lVar24 + 0x18) = uVar12;
    lVar30 = unaff_x19[0xd4];
    *(int *)(lVar24 + 0x2c) = iVar11;
    if ((int)uVar12 < 1 || fStack00000000000000d4 == 0.0) {
      fStack00000000000000d4 = 1.4013e-45;
    }
    *(int *)(lVar24 + 0x1c) = (int)lVar30;
    *(float *)(lVar24 + 0x24) = fStack00000000000000d4;
    *(int *)(lVar24 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar22 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar22 & 1) == 0)) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar24 = unaff_x19[0xdf];
    if (lVar24 != 0) {
      (**(code **)(lVar24 + 0x18))
                (*(undefined8 *)(lVar24 + 0x40),*in_stack_00000170,*(undefined8 *)(lVar24 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar11 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar11 != 0x19) {
      lVar24 = unaff_x19[0xe5];
      if (lVar24 == 0) goto LAB_035574b8;
      uVar12 = FUN_03911ee4(lVar24,0);
      FUN_03911f20(lVar24,uVar12 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x60), lVar24 == 0))
      goto LAB_035574b8;
      if (*(int *)(*plVar43 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar24 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar24 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar24 = *(long *)(unaff_x19[0x6d] + 0x60), lVar24 != 0)) {
        if (*(int *)(lVar24 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar24 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar24 = *(long *)(unaff_x19[0x6d] + 0x60), lVar24 != 0)) {
            if (*(int *)(lVar24 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar24 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar24 = *(long *)(unaff_x19[0x6d] + 0x60), lVar24 != 0)) {
                if (*(int *)(lVar24 + 0x18) == 0) goto LAB_035575f4;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar24 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar24 = *(long *)(unaff_x19[0x6d] + 0x60), lVar24 != 0)) {
                    if (*(int *)(lVar24 + 0x18) == 0) goto LAB_035575f4;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar24 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar18 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar12 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar24 = *in_stack_00000170;
                              if (lVar24 != 0) {
                                lVar44 = 0;
                                lVar30 = 0;
                                do {
                                  uVar22 = lVar30 + 1;
                                  if ((long)*(int *)(lVar24 + 0x34) <= (long)uVar22)
                                  goto LAB_03554724;
                                  lVar24 = *(long *)(lVar24 + 0x60);
                                  if (lVar24 == 0) break;
                                  if (*(int *)(*plVar43 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar24 + 0x18) <= uVar22) goto LAB_035575f4;
                                  FUN_03596a20(lVar24 + lVar44 + 0x70,0);
                                  lVar24 = unaff_x19[0xe1];
                                  if (lVar24 == 0) break;
                                  if (*(uint *)(lVar24 + 0x18) <= uVar22) goto LAB_035575f4;
                                  uVar19 = *(undefined8 *)(lVar24 + lVar30 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar25 = FUN_036d35a8(uVar19,0,0);
                                  if ((uVar25 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000170 == 0) ||
                                         (lVar24 = *(long *)(*in_stack_00000170 + 0x60), lVar24 == 0
                                         )) break;
                                      if (*(int *)(*plVar43 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar24 + 0x18) <= uVar22) goto LAB_035575f4;
                                      FUN_03596b20(lVar24 + lVar44 + 0x70,1,0);
                                    }
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar22) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar30 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = UnityEngine_Material__GetColorArray(lVar24,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar21 = *(long *)(*in_stack_00000170 + 0x60), lVar21 == 0))
                                    break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_035575f4;
                                    if (lVar24 == 0) break;
                                    FUN_036a460c(lVar24,*(undefined8 *)(lVar21 + lVar44 + 0x80),0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar22) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar30 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = UnityEngine_Material__GetColorArray(lVar24,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar21 = *(long *)(*in_stack_00000170 + 0x60), lVar21 == 0))
                                    break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_035575f4;
                                    if (lVar24 == 0) break;
                                    FUN_036a4810(lVar24,*(undefined8 *)(lVar21 + lVar44 + 0x98),0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar22) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar30 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = UnityEngine_Material__GetColorArray(lVar24,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar21 = *(long *)(*in_stack_00000170 + 0x60), lVar21 == 0))
                                    break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_035575f4;
                                    if (lVar24 == 0) break;
                                    FUN_036a48bc(lVar24,*(undefined8 *)(lVar21 + lVar44 + 0xa0),0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar22) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar30 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = UnityEngine_Material__GetColorArray(lVar24,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar21 = *(long *)(*in_stack_00000170 + 0x60), lVar21 == 0))
                                    break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_035575f4;
                                    if (lVar24 == 0) break;
                                    FUN_036a4e24(lVar24,*(undefined8 *)(lVar21 + lVar44 + 0xa8),0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar22) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar30 * 8 + 0x28);
                                    if ((lVar24 == 0) ||
                                       (lVar24 = UnityEngine_Material__GetColorArray(lVar24,0),
                                       lVar24 == 0)) break;
                                    FUN_036aa280(lVar24,0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar22) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar30 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = FUN_037b514c(lVar24,0);
                                    lVar21 = unaff_x19[0xe1];
                                    if (lVar21 == 0) break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_035575f4;
                                    lVar21 = *(long *)(lVar21 + lVar30 * 8 + 0x28);
                                    if ((lVar21 == 0) ||
                                       (uVar19 = UnityEngine_Material__GetColorArray(lVar21,0),
                                       lVar24 == 0)) break;
                                    FUN_0390f3a4(lVar24,uVar19,0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar22) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar30 * 8 + 0x28);
                                    if ((lVar24 == 0) ||
                                       (lVar24 = FUN_037b514c(lVar24,0), lVar24 == 0)) break;
                                    FUN_0390eec8(uVar18,uVar20,uVar55,uVar57,lVar24,0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar22) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar30 * 8 + 0x28);
                                    if ((lVar24 == 0) ||
                                       (lVar24 = FUN_037b514c(lVar24,0), lVar24 == 0)) break;
                                    FUN_0390ed78(lVar24,uVar12 & 1,0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar22) goto LAB_035575f4;
                                    plVar42 = *(long **)(lVar24 + lVar30 * 8 + 0x28);
                                    uVar17 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar42 == (long *)0x0) break;
                                    (**(code **)(*plVar42 + 0x2c8))
                                              (plVar42,uVar17 & 1,*(undefined8 *)(*plVar42 + 0x2d0))
                                    ;
                                  }
                                  lVar24 = *in_stack_00000170;
                                  lVar30 = lVar30 + 1;
                                  lVar44 = lVar44 + 0x50;
                                } while (lVar24 != 0);
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


