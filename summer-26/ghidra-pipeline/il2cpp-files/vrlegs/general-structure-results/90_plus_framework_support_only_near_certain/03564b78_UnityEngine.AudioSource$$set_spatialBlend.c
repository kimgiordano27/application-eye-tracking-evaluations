/*
FUNCTION_NAME: UnityEngine.AudioSource$$set_spatialBlend
ENTRY_POINT: 03564b78
PROGRAM: vrlegs-libil2cpp.so
SCORE: 146
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


undefined4
UnityEngine_AudioSource__set_spatialBlend(undefined **param_1,undefined1 param_2 [16],ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  float fVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  void *__dest;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar22;
  uint unaff_w22;
  long *plVar23;
  long *plVar24;
  long unaff_x24;
  long *plVar25;
  long *unaff_x25;
  uint unaff_w26;
  ulong uVar26;
  long unaff_x27;
  uint unaff_w28;
  uint *puVar27;
  long lVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  long *in_stack_00000038;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  uint uStack00000000000001b8;
  undefined1 uStack00000000000001bc;
  
code_r0x03564b78:
  plVar12 = (long *)FUN_01ab6a94(*(undefined8 *)param_1[0x163],4);
  if ((int)unaff_w28 < 0x10000) {
    in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,unaff_w28);
    lVar13 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
    if (plVar12 == (long *)0x0) goto LAB_03566068;
    if ((lVar13 != 0) &&
       (lVar14 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0))
    goto LAB_035660fc;
    if ((int)plVar12[3] == 0) goto LAB_035660f8;
    plVar12[4] = lVar13;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12 + 4,lVar13);
    if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
    lVar13 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
    if ((lVar13 != 0) &&
       (lVar14 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0))
    goto LAB_035660fc;
    if (*(uint *)(plVar12 + 3) < 2) goto LAB_035660f8;
    plVar12[5] = lVar13;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12 + 5,lVar13);
    if (unaff_x27 == 0) goto LAB_03566068;
    in_stack_00000168._4_4_ = *(undefined4 *)(unaff_x27 + 0x14);
    lVar13 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,(long)&stack0x00000168 + 4);
    if ((lVar13 != 0) &&
       (lVar14 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0))
    goto LAB_035660fc;
    if (*(uint *)(plVar12 + 3) < 3) goto LAB_035660f8;
    plVar12[6] = lVar13;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12 + 6,lVar13);
    lVar13 = FUN_036d3824();
    if ((lVar13 != 0) &&
       (lVar14 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0))
    goto LAB_035660fc;
    if (*(uint *)(plVar12 + 3) < 4) goto LAB_035660f8;
    plVar12[7] = lVar13;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12 + 7,lVar13);
    puVar18 = (undefined8 *)OVRPlugin_TrackedKeyboardFlags_TypeInfo;
  }
  else {
    in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,unaff_w28);
    lVar13 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
    if (plVar12 == (long *)0x0) goto LAB_03566068;
    if ((lVar13 != 0) &&
       (lVar14 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0))
    goto LAB_035660fc;
    if ((int)plVar12[3] == 0) goto LAB_035660f8;
    plVar12[4] = lVar13;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12 + 4,lVar13);
    if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
    lVar13 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
    if ((lVar13 != 0) &&
       (lVar14 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0))
    goto LAB_035660fc;
    if (*(uint *)(plVar12 + 3) < 2) goto LAB_035660f8;
    plVar12[5] = lVar13;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12 + 5,lVar13);
    if (unaff_x27 == 0) goto LAB_03566068;
    in_stack_00000168._4_4_ = *(undefined4 *)(unaff_x27 + 0x14);
    lVar13 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,(long)&stack0x00000168 + 4);
    if ((lVar13 != 0) &&
       (lVar14 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0))
    goto LAB_035660fc;
    if (*(uint *)(plVar12 + 3) < 3) goto LAB_035660f8;
    plVar12[6] = lVar13;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12 + 6,lVar13);
    lVar13 = FUN_036d3824();
    if ((lVar13 != 0) &&
       (lVar14 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0))
    goto LAB_035660fc;
    if (*(uint *)(plVar12 + 3) < 4) goto LAB_035660f8;
    plVar12[7] = lVar13;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12 + 7,lVar13);
    puVar18 = (undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo;
  }
  uVar15 = FUN_025be8f4(*puVar18,plVar12,0);
  if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_0367b470(uVar15);
  uVar10 = unaff_w22;
  unaff_w28 = unaff_w26;
LAB_03565024:
  if (*(char *)(unaff_x27 + 0x10) == '\x01') {
    lVar13 = *(long *)(unaff_x27 + 0x18);
    if (lVar13 == 0) goto LAB_03566068;
    iVar7 = *(int *)(lVar13 + 0x18);
    if (iVar7 == 0) {
      iVar7 = FUN_036d3364(lVar13,0);
      *(int *)(lVar13 + 0x18) = iVar7;
    }
    lVar13 = *unaff_x25;
    if (lVar13 == 0) goto LAB_03566068;
    iVar8 = *(int *)(lVar13 + 0x18);
    if (iVar8 == 0) {
      iVar8 = FUN_036d3364(lVar13,0);
      *(int *)(lVar13 + 0x18) = iVar8;
    }
    if (iVar7 == iVar8) {
      bVar4 = false;
    }
    else {
      plVar12 = *(long **)(unaff_x27 + 0x18);
      if (plVar12 == (long *)0x0) {
        plVar12 = (long *)0x0;
        *unaff_x25 = 0;
      }
      else {
        lVar13 = *(long *)OVRPlugin_OVRP_1_83_0_TypeInfo;
        bVar3 = *(byte *)(lVar13 + 0x130);
        if (*(byte *)(*plVar12 + 0x130) < bVar3) {
          plVar25 = (long *)0x0;
        }
        else {
          plVar25 = plVar12;
          if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar3 * 8 + -8) != lVar13) {
            plVar25 = (long *)0x0;
          }
        }
        *unaff_x25 = (long)plVar25;
        if (*(byte *)(*plVar12 + 0x130) < bVar3) {
          plVar12 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar3 * 8 + -8) != lVar13) {
          plVar12 = (long *)0x0;
        }
      }
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25,plVar12);
      bVar4 = true;
    }
  }
  else {
    bVar4 = false;
  }
  if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0)) goto LAB_03566068;
  if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
  lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
  plVar12 = (long *)(lVar13 + 0x30);
  *plVar12 = unaff_x27;
  *(undefined4 *)(lVar13 + 0x2c) = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12,unaff_x27);
  if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0)) goto LAB_03566068;
  uVar9 = *(uint *)(unaff_x19 + 0x490);
  if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_035660f8;
  lVar14 = lVar13 + (long)(int)uVar9 * 0x178;
  *(short *)(lVar14 + 0x20) = (short)unaff_w28;
  *(undefined1 *)(lVar14 + 0x5c) = uStack00000000000001bc;
  if (*(uint *)(unaff_x21 + 0x18) <= uVar10) goto LAB_035660f8;
  lVar13 = lVar13 + (long)(int)uVar9 * 0x178;
  *(undefined8 *)(lVar13 + 0x24) = *(undefined8 *)(unaff_x21 + unaff_x24 * 0xc + 0x24);
  *(long *)(lVar13 + 0x38) = *unaff_x25;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  plVar12 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (*(char *)(unaff_x27 + 0x10) == '\x02') {
    plVar25 = *(long **)(unaff_x27 + 0x18);
    if (plVar25 == (long *)0x0) goto LAB_03566068;
    bVar3 = *(byte *)(*(long *)OVRPlugin_Sizei_TypeInfo + 0x130);
    if ((*(byte *)(*plVar25 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar25 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)OVRPlugin_Sizei_TypeInfo)) goto LAB_03566068;
    lVar14 = plVar25[4];
    lVar13 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar13 = *plVar12;
    }
    uVar9 = FUN_03558224(lVar14,plVar25,*(long *)(lVar13 + 0xb8),
                         *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
    *(uint *)(unaff_x19 + 0x120) = uVar9;
    lVar13 = **(long **)(*plVar12 + 0xb8);
    if (lVar13 == 0) goto LAB_03566068;
    if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_035660f8;
    lVar13 = lVar13 + (long)(int)uVar9 * 0x38;
    *(int *)(lVar13 + 0x54) = *(int *)(lVar13 + 0x54) + 1;
    if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
    goto LAB_03566068;
    if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
    lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
    *(undefined4 *)(lVar13 + 0x2c) = 1;
    uVar11 = *(undefined4 *)(unaff_x19 + 0x120);
    *(undefined8 *)(lVar13 + 0x40) = plVar25;
    *(undefined4 *)(lVar13 + 0x58) = uVar11;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar13 + 0x40),plVar25);
    plVar12 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0)) goto LAB_03566068;
    uVar9 = *(uint *)(unaff_x19 + 0x490);
    if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_035660f8;
    *(undefined4 *)(lVar13 + (long)(int)uVar9 * 0x178 + 0x48) = *(undefined4 *)(unaff_x27 + 0x28);
    *(undefined4 *)(unaff_x19 + 0x644) = 0;
    *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
    in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
    unaff_x25 = in_stack_00000038;
    plVar25 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
  }
  else {
    if (bVar4) {
      lVar13 = *unaff_x25;
      if (lVar13 == 0) goto LAB_03566068;
      iVar7 = *(int *)(lVar13 + 0x18);
      if (iVar7 == 0) {
        iVar7 = FUN_036d3364(lVar13,0);
        *(int *)(lVar13 + 0x18) = iVar7;
      }
      lVar13 = *(long *)(unaff_x19 + 0xf8);
      if (lVar13 == 0) goto LAB_03566068;
      iVar8 = *(int *)(lVar13 + 0x18);
      if (iVar8 == 0) {
        iVar8 = FUN_036d3364(lVar13,0);
        *(int *)(lVar13 + 0x18) = iVar8;
      }
      if (iVar7 != iVar8) {
        uVar22 = FUN_0359778c(0);
        if ((uVar22 & 1) == 0) {
          if (*unaff_x25 == 0) goto LAB_03566068;
          uVar15 = *(undefined8 *)(*unaff_x25 + 0x20);
        }
        else {
          if (*unaff_x25 == 0) goto LAB_03566068;
          uVar19 = *(undefined8 *)(*unaff_x25 + 0x20);
          uVar15 = *in_stack_00000028;
          if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar15 = FUN_03594e9c(uVar15,uVar19,0);
          unaff_x25 = in_stack_00000038;
        }
        *in_stack_00000028 = uVar15;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000028);
        lVar13 = *plVar12;
        uVar15 = *in_stack_00000028;
        lVar14 = *unaff_x25;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar13 = *plVar12;
        }
        uVar11 = FUN_03557fec(uVar15,lVar14,*(long *)(lVar13 + 0xb8),
                              *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
        *(undefined4 *)(unaff_x19 + 0x120) = uVar11;
        unaff_x25 = in_stack_00000038;
      }
    }
    if (*(long *)(unaff_x27 + 0x20) == 0) goto LAB_03566068;
    iVar7 = FUN_03776eb8(*(long *)(unaff_x27 + 0x20),0);
    if (0 < iVar7) {
      if (*(long *)(unaff_x27 + 0x20) == 0) goto LAB_03566068;
      lVar13 = *unaff_x25;
      uVar15 = *in_stack_00000028;
      uVar11 = FUN_03776eb8(*(long *)(unaff_x27 + 0x20),0);
      if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)OVRPlugin_Sizef_TypeInfo);
      }
      uVar15 = FUN_03594928(lVar13,uVar15,uVar11,0);
      *in_stack_00000028 = uVar15;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000028,uVar15);
      lVar13 = *plVar12;
      uVar15 = *in_stack_00000028;
      lVar14 = *unaff_x25;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar13 = *plVar12;
      }
      uVar11 = FUN_03557fec(uVar15,lVar14,*(long *)(lVar13 + 0xb8),
                            *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
      bVar4 = true;
      *(undefined4 *)(unaff_x19 + 0x120) = uVar11;
      unaff_x25 = in_stack_00000038;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar22 = FUN_026b63d8(unaff_w28,0);
    plVar25 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
    if ((unaff_w28 != 0x200b) && ((uVar22 & 1) == 0)) {
      lVar13 = *plVar12;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar13);
        lVar13 = *plVar12;
      }
      lVar14 = **(long **)(lVar13 + 0xb8);
      if (lVar14 == 0) goto LAB_03566068;
      uVar9 = *(uint *)(unaff_x19 + 0x120);
      if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_035660f8;
      if (*(int *)(lVar14 + (long)(int)uVar9 * 0x38 + 0x54) < 0x3fff) {
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar13);
          lVar14 = **(long **)(*plVar12 + 0xb8);
          if (lVar14 == 0) goto LAB_03566068;
          uVar9 = *(uint *)(unaff_x19 + 0x120);
        }
      }
      else {
        uVar19 = *in_stack_00000028;
        uVar15 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
        FUN_0369922c(uVar15,uVar19,0);
        lVar13 = *plVar12;
        lVar14 = *unaff_x25;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar13 = *plVar12;
        }
        uVar9 = FUN_03557fec(uVar15,lVar14,*(long *)(lVar13 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
        *(uint *)(unaff_x19 + 0x120) = uVar9;
        lVar14 = **(long **)(*plVar12 + 0xb8);
        if (lVar14 == 0) goto LAB_03566068;
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_035660f8;
      lVar14 = lVar14 + (long)(int)uVar9 * 0x38;
      *(int *)(lVar14 + 0x54) = *(int *)(lVar14 + 0x54) + 1;
    }
    if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
    goto LAB_03566068;
    if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
    *(undefined8 *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x50) =
         *in_stack_00000028;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
    goto LAB_03566068;
    if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
    uVar9 = *(uint *)(unaff_x19 + 0x120);
    *(uint *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x58) = uVar9;
    lVar13 = *plVar12;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar13 = *plVar12;
      uVar9 = *(uint *)(unaff_x19 + 0x120);
    }
    lVar14 = **(long **)(lVar13 + 0xb8);
    if (lVar14 == 0) goto LAB_03566068;
    if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_035660f8;
    *(bool *)(lVar14 + (long)(int)uVar9 * 0x38 + 0x41) = bVar4;
    if (bVar4) {
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar14 = **(long **)(*plVar12 + 0xb8);
        if (lVar14 == 0) goto LAB_03566068;
        uVar9 = *(uint *)(unaff_x19 + 0x120);
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_035660f8;
      puVar18 = (undefined8 *)(lVar14 + (long)(int)uVar9 * 0x38 + 0x48);
      *puVar18 = in_stack_00000018;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar18,in_stack_00000018);
      *(undefined8 *)(unaff_x19 + 0x100) = in_stack_00000010;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25);
      *(undefined8 *)(unaff_x19 + 0x118) = in_stack_00000018;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (in_stack_00000028,in_stack_00000018);
      *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
    }
    uVar9 = *(uint *)(unaff_x19 + 0x490);
  }
  do {
    *(uint *)(unaff_x19 + 0x490) = uVar9 + 1;
    do {
      uVar9 = *(uint *)(unaff_x21 + 0x18);
      unaff_w22 = uVar10 + 1;
      if ((int)uVar9 <= (int)unaff_w22) {
LAB_0356573c:
        if (*(char *)(unaff_x19 + 0x3f5) != '\0') {
          *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
          goto LAB_03565748;
        }
        lVar13 = *unaff_x20;
        if (lVar13 == 0) goto LAB_03566068;
        *(int *)(lVar13 + 0x1c) = in_stack_00000020._4_4_;
        lVar14 = *plVar12;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar14 = *plVar12;
        }
        lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
        if (lVar14 == 0) goto LAB_03566068;
        uVar10 = FUN_0219b384(lVar14,*(undefined8 *)PTR_DAT_03ceb270);
        *(uint *)(lVar13 + 0x34) = uVar10;
        if (*unaff_x20 == 0) goto LAB_03566068;
        plVar23 = (long *)(*unaff_x20 + 0x60);
        lVar13 = *plVar23;
        if (lVar13 == 0) goto LAB_03566068;
        uVar22 = (ulong)uVar10;
        if (*(int *)(lVar13 + 0x18) < (int)uVar10) {
          if (*(int *)(*plVar25 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff02b8(plVar23,uVar22,0,*(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo);
        }
        if (*(long *)(unaff_x19 + 0x708) == 0) goto LAB_03566068;
        plVar23 = (long *)(unaff_x19 + 0x708);
        if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar10) {
          uVar11 = FUN_036c1d60(uVar10 + 1,0);
          if (*(int *)(*plVar25 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*plVar25);
          }
          FUN_01ff025c(plVar23,uVar11,*(undefined8 *)OVRSystemPerfMetrics_PerfMetrics_TypeInfo);
        }
        if (*(char *)(unaff_x19 + 0x321) != '\0') {
          if (*unaff_x20 == 0) goto LAB_03566068;
          plVar24 = (long *)(*unaff_x20 + 0x38);
          lVar13 = *plVar24;
          if (lVar13 == 0) goto LAB_03566068;
          iVar7 = *(int *)(unaff_x19 + 0x490);
          if (0x100 < *(int *)(lVar13 + 0x18) - iVar7) {
            iVar8 = 0x100;
            if (0x100 < iVar7 + 1) {
              iVar8 = iVar7 + 1;
            }
            if (*(int *)(*plVar25 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_01ff02b8(plVar24,iVar8,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
            plVar12 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          }
        }
        fVar5 = DAT_00d38798;
        if ((int)uVar10 < 1) goto LAB_03565fb8;
        lVar13 = 0;
        uVar26 = 0;
        lVar14 = 0x54;
        lVar28 = 0x20;
        goto LAB_035658ec;
      }
      if (uVar9 <= unaff_w22) goto LAB_035660f8;
      puVar27 = (uint *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x20);
      if (*puVar27 == 0) goto LAB_0356573c;
      if (*unaff_x20 == 0) goto LAB_03566068;
      plVar12 = (long *)(*unaff_x20 + 0x38);
      lVar13 = *plVar12;
      iVar7 = *(int *)(unaff_x19 + 0x490);
      if ((lVar13 == 0) || (*(int *)(lVar13 + 0x18) <= iVar7)) {
        if (*(int *)(*plVar25 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff02b8(plVar12,iVar7 + 1,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
        uVar9 = *(uint *)(unaff_x21 + 0x18);
      }
      if (uVar9 <= unaff_w22) goto LAB_035660f8;
      unaff_w28 = *puVar27;
      unaff_x24 = (long)(int)unaff_w22;
      if ((unaff_w28 != 0x3c) || (*(char *)(unaff_x19 + 0x302) == '\0')) {
LAB_035649d0:
        uStack00000000000001bc = 0;
        in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x100);
        in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x118);
        in_stack_00000030._4_4_ = *(undefined4 *)(unaff_x19 + 0x120);
        if (*(int *)(unaff_x19 + 0x644) != 0) goto LAB_03564aac;
        uVar10 = *(uint *)(unaff_x19 + 0x25c);
        if ((uVar10 >> 4 & 1) == 0) {
          if ((uVar10 >> 3 & 1) == 0) {
            if ((uVar10 >> 5 & 1) != 0) goto LAB_03564a00;
          }
          else {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar22 = FUN_026b8070(unaff_w28,0);
            if ((uVar22 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar10 = FUN_026b8594(unaff_w28,0);
              goto LAB_03564aa8;
            }
          }
        }
        else {
LAB_03564a00:
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar22 = FUN_026b812c(unaff_w28,0);
          if ((uVar22 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar10 = FUN_026b8410(unaff_w28,0);
LAB_03564aa8:
            unaff_w28 = uVar10 & 0xffff;
          }
        }
LAB_03564aac:
        unaff_x27 = FUN_03591848();
        uVar10 = unaff_w22;
        if (unaff_x27 != 0) goto LAB_03565024;
        iVar7 = FUN_035975f8();
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
        if (iVar7 == 0) {
          unaff_w26 = 0x25a1;
        }
        else {
          unaff_w26 = FUN_035975f8(0);
        }
        *puVar27 = unaff_w26;
        uVar15 = *(undefined8 *)(unaff_x19 + 0x100);
        uVar11 = *(undefined4 *)(unaff_x19 + 0x25c);
        uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
        if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        unaff_x27 = FUN_03570fc4(unaff_w26,uVar15,1,uVar11,uVar2,(long)&stack0x000001b8 + 4,0);
        if (unaff_x27 == 0) {
          lVar13 = FUN_03597770();
          if (lVar13 != 0) {
            lVar13 = FUN_03597770(0);
            if (lVar13 == 0) goto LAB_03566068;
            if (0 < *(int *)(lVar13 + 0x18)) {
              uVar19 = *(undefined8 *)(unaff_x19 + 0x100);
              uVar15 = FUN_03597770(0);
              uVar11 = *(undefined4 *)(unaff_x19 + 0x25c);
              uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
              if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
              }
              unaff_x27 = FUN_035714e4(unaff_w26,uVar19,uVar15,1,uVar11,uVar2,
                                       (long)&stack0x000001b8 + 4,0);
              if (unaff_x27 != 0) goto LAB_03564b5c;
            }
          }
          uVar15 = FUN_03597650(0);
          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
          }
          uVar22 = FUN_036cee6c(uVar15,0,0);
          if ((uVar22 & 1) != 0) {
            uVar15 = FUN_03597650(0);
            uVar11 = *(undefined4 *)(unaff_x19 + 0x25c);
            uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
            if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
            }
            unaff_x27 = FUN_03570fc4(unaff_w26,uVar15,1,uVar11,uVar2,(long)&stack0x000001b8 + 4,0);
            if (unaff_x27 != 0) goto LAB_03564b5c;
          }
          if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
          *puVar27 = 0x20;
          uVar15 = *(undefined8 *)(unaff_x19 + 0x100);
          uVar11 = *(undefined4 *)(unaff_x19 + 0x25c);
          uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
          if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          unaff_w26 = 0x20;
          unaff_x27 = FUN_03570fc4(0x20,uVar15,1,uVar11,uVar2,(long)&stack0x000001b8 + 4,0);
          if (unaff_x27 == 0) {
            if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
            *puVar27 = 3;
            uVar15 = *(undefined8 *)(unaff_x19 + 0x100);
            uVar11 = *(undefined4 *)(unaff_x19 + 0x25c);
            uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
            if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            unaff_w26 = 3;
            unaff_x27 = FUN_03570fc4(3,uVar15,1,uVar11,uVar2,(long)&stack0x000001b8 + 4,0);
          }
        }
LAB_03564b5c:
        uVar22 = FUN_03597634(0);
        if ((uVar22 & 1) != 0) {
          unaff_x25 = in_stack_00000038;
          unaff_w28 = unaff_w26;
          if (unaff_x27 == 0) goto LAB_03566068;
          goto LAB_03565024;
        }
        param_1 = &PTR_DAT_03cbe000;
        unaff_x25 = in_stack_00000038;
        goto code_r0x03564b78;
      }
      uVar11 = *(undefined4 *)(unaff_x19 + 0x120);
      uVar22 = FUN_03586568();
      uVar10 = uStack00000000000001b8;
      if ((uVar22 & 1) == 0) goto LAB_035649d0;
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
      iVar7 = *(int *)(unaff_x21 + unaff_x24 * 0xc + 0x24);
      if ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0) {
        *(undefined1 *)(unaff_x19 + 0x26a) = 1;
      }
      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      plVar12 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    } while (*(int *)(unaff_x19 + 0x644) != 1);
    lVar13 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar13 = *(long *)puVar6;
    }
    lVar13 = **(long **)(lVar13 + 0xb8);
    if (lVar13 == 0) goto LAB_03566068;
    if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) goto LAB_035660f8;
    lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
    *(int *)(lVar13 + 0x54) = *(int *)(lVar13 + 0x54) + 1;
    if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
    goto LAB_03566068;
    if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
    uVar2 = *(undefined4 *)(unaff_x19 + 0x6a4);
    lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
    *(short *)(lVar13 + 0x20) = (short)uVar2 + -0x2000;
    *(undefined4 *)(lVar13 + 0x48) = uVar2;
    *(long *)(lVar13 + 0x38) = *in_stack_00000038;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
    goto LAB_03566068;
    if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
    *(undefined8 *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x40) =
         *(undefined8 *)(unaff_x19 + 0x698);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
    goto LAB_03566068;
    uVar9 = *(uint *)(unaff_x19 + 0x490);
    if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_035660f8;
    *(undefined4 *)(lVar13 + (long)(int)uVar9 * 0x178 + 0x58) = *(undefined4 *)(unaff_x19 + 0x120);
    if ((*(long *)(unaff_x19 + 0x698) == 0) ||
       (lVar14 = UnityEngine_Material__DisableKeyword(*(long *)(unaff_x19 + 0x698),0), lVar14 == 0))
    goto LAB_03566068;
    FUN_02215a88(lVar14,*(undefined4 *)(unaff_x19 + 0x6a4),&stack0x000000e0,
                 *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
    if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_035660f8;
    *(undefined8 *)(lVar13 + (long)(int)uVar9 * 0x178 + 0x30) = in_stack_000000e0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
    goto LAB_03566068;
    uVar9 = *(uint *)(unaff_x19 + 0x490);
    if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_035660f8;
    uVar2 = *(undefined4 *)(unaff_x19 + 0x644);
    lVar14 = lVar13 + (long)(int)uVar9 * 0x178;
    *(int *)(lVar14 + 0x24) = iVar7;
    *(undefined4 *)(lVar14 + 0x2c) = uVar2;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar10) goto LAB_035660f8;
    *(int *)(lVar13 + (long)(int)uVar9 * 0x178 + 0x28) =
         (*(int *)(unaff_x21 + (long)(int)uVar10 * 0xc + 0x24) - iVar7) + 1;
    *(undefined4 *)(unaff_x19 + 0x644) = 0;
    *(undefined4 *)(unaff_x19 + 0x120) = uVar11;
    in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
    plVar12 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    unaff_x25 = in_stack_00000038;
  } while( true );
LAB_035658ec:
  do {
    fVar32 = (float)param_3;
    if (uVar26 != 0) {
      lVar20 = *plVar23;
      if (lVar20 == 0) goto LAB_03566068;
      if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_035660f8;
      uVar15 = *(undefined8 *)(lVar20 + uVar26 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar16 = FUN_036d35a8(uVar15,0,0);
      if ((uVar16 & 1) != 0) {
        lVar20 = *plVar12;
        plVar25 = (long *)*plVar23;
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar20 = *plVar12;
        }
        lVar20 = **(long **)(lVar20 + 0xb8);
        if (lVar20 == 0) goto LAB_03566068;
        if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_035660f8;
        lVar20 = lVar20 + lVar14;
        in_stack_00000160 = *(undefined8 *)(lVar20 + -4);
        in_stack_00000158 = *(undefined8 *)(lVar20 + -0xc);
        in_stack_00000150 = *(undefined8 *)(lVar20 + -0x14);
        in_stack_00000148 = *(undefined8 *)(lVar20 + -0x1c);
        uVar15 = *(undefined8 *)(lVar20 + -0x24);
        in_stack_00000138 = *(undefined8 *)(lVar20 + -0x2c);
        in_stack_00000130 = *(undefined8 *)(lVar20 + -0x34);
        in_stack_00000140 = uVar15;
        lVar20 = FUN_0359e964();
        fVar32 = (float)uVar15;
        if (plVar25 == (long *)0x0) goto LAB_03566068;
        if ((lVar20 != 0) &&
           (lVar17 = thunk_FUN_01a89d6c(lVar20,*(undefined8 *)(*plVar25 + 0x40)), lVar17 == 0)) {
LAB_035660fc:
          uVar15 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar15,0);
        }
        if (*(uint *)(plVar25 + 3) <= uVar26) goto LAB_035660f8;
        plVar25[uVar26 + 4] = lVar20;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long)plVar25 + lVar28,lVar20);
        plVar12 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if ((*unaff_x20 == 0) || (lVar20 = *(long *)(*unaff_x20 + 0x60), lVar20 == 0))
        goto LAB_03566068;
        if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_035660f8;
        puVar18 = (undefined8 *)(lVar20 + lVar13 + 0x30);
        *puVar18 = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar18,0);
      }
      if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_03566068;
      fVar29 = (float)FUN_036dba50(*(long *)(unaff_x19 + 0x380),0);
      lVar20 = *plVar23;
      if (lVar20 == 0) goto LAB_03566068;
      if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_035660f8;
      lVar20 = *(long *)(lVar20 + uVar26 * 8 + 0x20);
      if ((lVar20 == 0) || (fVar31 = fVar32, lVar20 = FUN_037b4844(lVar20,0), lVar20 == 0))
      goto LAB_03566068;
      fVar30 = (float)FUN_036dba50(lVar20,0);
      fVar32 = (fVar32 - fVar31) * (fVar32 - fVar31);
      param_3 = (ulong)(uint)fVar32;
      if (fVar5 <= (fVar29 - fVar30) * (fVar29 - fVar30) + fVar32) {
        lVar20 = *plVar23;
        if (lVar20 == 0) goto LAB_03566068;
        if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_035660f8;
        lVar20 = *(long *)(lVar20 + uVar26 * 8 + 0x20);
        if (lVar20 == 0) goto LAB_03566068;
        lVar20 = FUN_037b4844(lVar20,0);
        if ((*(long *)(unaff_x19 + 0x380) == 0) ||
           (FUN_036dba50(*(long *)(unaff_x19 + 0x380),0), lVar20 == 0)) goto LAB_03566068;
        FUN_036dbae0(lVar20,0);
      }
      lVar20 = *plVar23;
      if (lVar20 == 0) goto LAB_03566068;
      if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_035660f8;
      lVar20 = *(long *)(lVar20 + uVar26 * 8 + 0x20);
      if (lVar20 == 0) goto LAB_03566068;
      uVar15 = *(undefined8 *)(lVar20 + 0xf0);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar16 = FUN_036d35a8(uVar15,0,0);
      if ((uVar16 & 1) == 0) {
        lVar20 = *plVar23;
        if (lVar20 == 0) goto LAB_03566068;
        if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_035660f8;
        lVar20 = *(long *)(lVar20 + uVar26 * 8 + 0x20);
        if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0xf0), lVar20 == 0)) goto LAB_03566068;
        iVar7 = FUN_036d3364(lVar20,0);
        lVar20 = *plVar12;
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar20);
          lVar20 = *plVar12;
        }
        lVar20 = **(long **)(lVar20 + 0xb8);
        if (lVar20 == 0) goto LAB_03566068;
        if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_035660f8;
        lVar20 = *(long *)(lVar20 + lVar14 + -0x1c);
        if (lVar20 == 0) goto LAB_03566068;
        iVar8 = FUN_036d3364(lVar20,0);
        if (iVar7 != iVar8) goto LAB_03565b98;
      }
      else {
LAB_03565b98:
        lVar20 = *plVar23;
        if (lVar20 == 0) goto LAB_03566068;
        if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_035660f8;
        lVar17 = *plVar12;
        lVar20 = *(long *)(lVar20 + uVar26 * 8 + 0x20);
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar17 = *plVar12;
        }
        lVar17 = **(long **)(lVar17 + 0xb8);
        if (lVar17 == 0) goto LAB_03566068;
        if (*(uint *)(lVar17 + 0x18) <= uVar26) goto LAB_035660f8;
        if (lVar20 == 0) goto LAB_03566068;
        thunk_FUN_0359e5ac(lVar20,*(undefined8 *)(lVar17 + lVar14 + -0x1c),0);
        lVar20 = *plVar23;
        if (lVar20 == 0) goto LAB_03566068;
        if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_035660f8;
        lVar17 = **(long **)(*plVar12 + 0xb8);
        if (lVar17 == 0) goto LAB_03566068;
        if (*(uint *)(lVar17 + 0x18) <= uVar26) goto LAB_035660f8;
        lVar20 = *(long *)(lVar20 + uVar26 * 8 + 0x20);
        if (lVar20 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar20 + 0xd8) = *(undefined8 *)(lVar17 + lVar14 + -0x2c);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar20 = *plVar23;
        if (lVar20 == 0) goto LAB_03566068;
        if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_035660f8;
        lVar17 = **(long **)(*plVar12 + 0xb8);
        if (lVar17 == 0) goto LAB_03566068;
        if (*(uint *)(lVar17 + 0x18) <= uVar26) goto LAB_035660f8;
        lVar20 = *(long *)(lVar20 + uVar26 * 8 + 0x20);
        if (lVar20 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar20 + 0xe0) = *(undefined8 *)(lVar17 + lVar14 + -0x24);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      lVar20 = *plVar12;
      if (*(int *)(lVar20 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar20 = *plVar12;
      }
      lVar17 = **(long **)(lVar20 + 0xb8);
      if (lVar17 == 0) goto LAB_03566068;
      if (*(uint *)(lVar17 + 0x18) <= uVar26) goto LAB_035660f8;
      if (*(char *)(lVar17 + lVar14 + -0x13) != '\0') {
        lVar21 = *plVar23;
        if (lVar21 == 0) goto LAB_03566068;
        if (*(uint *)(lVar21 + 0x18) <= uVar26) goto LAB_035660f8;
        lVar21 = *(long *)(lVar21 + uVar26 * 8 + 0x20);
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar17 = **(long **)(*plVar12 + 0xb8);
          if (lVar17 == 0) goto LAB_03566068;
        }
        if (*(uint *)(lVar17 + 0x18) <= uVar26) goto LAB_035660f8;
        if (lVar21 == 0) goto LAB_03566068;
        FUN_0359e608(lVar21,*(undefined8 *)(lVar17 + lVar14 + -0x1c),0);
        lVar20 = *plVar23;
        if (lVar20 == 0) goto LAB_03566068;
        if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_035660f8;
        lVar17 = **(long **)(*plVar12 + 0xb8);
        if (lVar17 == 0) goto LAB_03566068;
        if (*(uint *)(lVar17 + 0x18) <= uVar26) goto LAB_035660f8;
        lVar20 = *(long *)(lVar20 + uVar26 * 8 + 0x20);
        if (lVar20 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar20 + 0x100) = *(undefined8 *)(lVar17 + lVar14 + -0xc);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar20 + 0x100);
      }
    }
    lVar20 = *plVar12;
    if (*(int *)(lVar20 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar20 = *plVar12;
    }
    lVar20 = **(long **)(lVar20 + 0xb8);
    if (lVar20 == 0) goto LAB_03566068;
    if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_035660f8;
    if ((*unaff_x20 == 0) || (lVar17 = *(long *)(*unaff_x20 + 0x60), lVar17 == 0))
    goto LAB_03566068;
    if (*(uint *)(lVar17 + 0x18) <= uVar26) goto LAB_035660f8;
    lVar21 = *(long *)(lVar17 + lVar13 + 0x30);
    iVar7 = *(int *)(lVar20 + lVar14);
    if (lVar21 == 0) {
      if (uVar26 == 0) {
        in_stack_00000118 = 0;
        in_stack_00000110 = 0;
        in_stack_00000128 = 0;
        in_stack_00000120 = 0;
        in_stack_000000f8 = 0;
        in_stack_000000f0 = 0;
        in_stack_00000108 = 0;
        in_stack_00000100 = 0;
        in_stack_000000e8 = 0;
        in_stack_000000e0 = 0;
        FUN_03595600(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar7 + 1,0);
        memcpy(&stack0x00000090,&stack0x000000e0,0x50);
        if (*(int *)(lVar17 + 0x18) == 0) goto LAB_035660f8;
        memcpy((void *)(lVar17 + lVar13 + 0x20),&stack0x00000090,0x50);
        __dest = (void *)(lVar17 + 0x20);
      }
      else {
        lVar20 = *plVar23;
        if (lVar20 == 0) goto LAB_03566068;
        if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_035660f8;
        lVar20 = *(long *)(lVar20 + uVar26 * 8 + 0x20);
        if (lVar20 == 0) goto LAB_03566068;
        uVar15 = UnityEngine_Material__GetColorArray(lVar20,0);
        in_stack_00000118 = 0;
        in_stack_00000110 = 0;
        in_stack_00000128 = 0;
        in_stack_00000120 = 0;
        in_stack_000000f8 = 0;
        in_stack_000000f0 = 0;
        in_stack_00000108 = 0;
        in_stack_00000100 = 0;
        in_stack_000000e8 = 0;
        in_stack_000000e0 = 0;
        FUN_03595600(&stack0x000000e0,uVar15,iVar7 + 1,0);
        memcpy(&stack0x00000040,&stack0x000000e0,0x50);
        if (*(uint *)(lVar17 + 0x18) <= uVar26) goto LAB_035660f8;
        __dest = (void *)(lVar17 + lVar13 + 0x20);
        memcpy(__dest,&stack0x00000040,0x50);
      }
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(__dest,0);
    }
    else {
      iVar8 = *(int *)(lVar21 + 0x18);
      if (iVar8 < iVar7 * 4) {
LAB_03565e08:
        if (iVar7 < 0x401) {
          iVar7 = FUN_036c1d60(iVar7 + 1,0);
        }
        else {
          iVar7 = iVar7 + 0x100;
        }
        if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_03595b9c(lVar17 + lVar13 + 0x20,iVar7,0);
      }
      else if ((0 < iVar7) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
        iVar1 = iVar8 + 3;
        if (-1 < iVar8) {
          iVar1 = iVar8;
        }
        if (0x100 < (iVar1 >> 2) - iVar7) goto LAB_03565e08;
      }
    }
    plVar12 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if ((*unaff_x20 == 0) || (lVar20 = *(long *)(*unaff_x20 + 0x60), lVar20 == 0))
    goto LAB_03566068;
    lVar17 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar17 = *plVar12;
    }
    lVar17 = **(long **)(lVar17 + 0xb8);
    if (lVar17 == 0) goto LAB_03566068;
    if ((*(uint *)(lVar17 + 0x18) <= uVar26) || (*(uint *)(lVar20 + 0x18) <= uVar26))
    goto LAB_035660f8;
    *(undefined8 *)(lVar20 + lVar13 + 0x68) = *(undefined8 *)(lVar17 + lVar14 + -0x1c);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    uVar26 = uVar26 + 1;
    lVar13 = lVar13 + 0x50;
    lVar14 = lVar14 + 0x38;
    lVar28 = lVar28 + 8;
  } while (uVar10 != uVar26);
LAB_03565fb8:
  lVar13 = *plVar23;
  if (lVar13 != 0) {
    lVar14 = (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar22 << 3) + 0x20;
    do {
      uVar10 = (uint)uVar22;
      if ((int)*(uint *)(lVar13 + 0x18) <= (int)uVar10) {
LAB_03565748:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar13 + 0x18) <= uVar10) {
LAB_035660f8:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar15 = *(undefined8 *)(lVar13 + lVar14);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar22 = FUN_036cee6c(uVar15,0,0);
      if ((uVar22 & 1) == 0) goto LAB_03565748;
      if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x60), lVar13 == 0)) break;
      if ((int)uVar10 < *(int *)(lVar13 + 0x18)) {
        lVar13 = *plVar23;
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_035660f8;
        if ((*(long *)(lVar13 + lVar14) == 0) ||
           (lVar13 = FUN_037b514c(*(long *)(lVar13 + lVar14),0), lVar13 == 0)) break;
        FUN_0390f3a4(lVar13,0,0);
      }
      lVar13 = *plVar23;
      uVar22 = (ulong)(uVar10 + 1);
      lVar14 = lVar14 + 8;
    } while (lVar13 != 0);
  }
LAB_03566068:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


