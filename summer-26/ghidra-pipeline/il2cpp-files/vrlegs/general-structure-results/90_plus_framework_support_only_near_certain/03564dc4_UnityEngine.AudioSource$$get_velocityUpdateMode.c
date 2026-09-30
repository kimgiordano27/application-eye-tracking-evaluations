/*
FUNCTION_NAME: UnityEngine.AudioSource$$get_velocityUpdateMode
ENTRY_POINT: 03564dc4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 152
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


undefined4 UnityEngine_AudioSource__get_velocityUpdateMode(undefined1 param_1 [16],ulong param_2)

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
  ulong uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  void *__dest;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long *plVar22;
  undefined4 unaff_w23;
  long lVar23;
  long *plVar24;
  long unaff_x24;
  long *plVar25;
  undefined4 unaff_w25;
  uint unaff_w26;
  ulong uVar26;
  undefined8 unaff_x27;
  undefined8 uVar27;
  uint unaff_w28;
  uint *unaff_x29;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
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
  
code_r0x03564dc4:
  lVar13 = FUN_03570fc4(unaff_w26,unaff_x27,1,unaff_w23,unaff_w25,(long)&stack0x000001b8 + 4,0);
  if (lVar13 != 0) goto LAB_03564b5c;
LAB_03564df0:
  if (unaff_w22 < *(uint *)(unaff_x21 + 0x18)) {
    *unaff_x29 = 0x20;
    uVar27 = *(undefined8 *)(unaff_x19 + 0x100);
    uVar11 = *(undefined4 *)(unaff_x19 + 0x25c);
    uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
    if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    unaff_w26 = 0x20;
    lVar13 = FUN_03570fc4(0x20,uVar27,1,uVar11,uVar2,(long)&stack0x000001b8 + 4,0);
    if (lVar13 == 0) {
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
      *unaff_x29 = 3;
      uVar27 = *(undefined8 *)(unaff_x19 + 0x100);
      uVar11 = *(undefined4 *)(unaff_x19 + 0x25c);
      uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
      if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      unaff_w26 = 3;
      lVar13 = FUN_03570fc4(3,uVar27,1,uVar11,uVar2,(long)&stack0x000001b8 + 4,0);
    }
LAB_03564b5c:
    uVar12 = FUN_03597634(0);
    uVar10 = unaff_w22;
    if ((uVar12 & 1) == 0) {
      plVar14 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,4);
      if ((int)unaff_w28 < 0x10000) {
        in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,unaff_w28);
        lVar23 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
        if (plVar14 == (long *)0x0) goto LAB_03566068;
        if ((lVar23 != 0) &&
           (lVar21 = thunk_FUN_01a89d6c(lVar23,*(undefined8 *)(*plVar14 + 0x40)), lVar21 == 0))
        goto LAB_035660fc;
        if ((int)plVar14[3] == 0) goto LAB_035660f8;
        plVar14[4] = lVar23;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14 + 4,lVar23);
        if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
        lVar23 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
        if ((lVar23 != 0) &&
           (lVar21 = thunk_FUN_01a89d6c(lVar23,*(undefined8 *)(*plVar14 + 0x40)), lVar21 == 0))
        goto LAB_035660fc;
        if (*(uint *)(plVar14 + 3) < 2) goto LAB_035660f8;
        plVar14[5] = lVar23;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14 + 5,lVar23);
        if (lVar13 == 0) goto LAB_03566068;
        in_stack_00000168._4_4_ = *(undefined4 *)(lVar13 + 0x14);
        lVar23 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,(long)&stack0x00000168 + 4);
        if ((lVar23 != 0) &&
           (lVar21 = thunk_FUN_01a89d6c(lVar23,*(undefined8 *)(*plVar14 + 0x40)), lVar21 == 0))
        goto LAB_035660fc;
        if (*(uint *)(plVar14 + 3) < 3) goto LAB_035660f8;
        plVar14[6] = lVar23;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14 + 6,lVar23);
        lVar23 = FUN_036d3824();
        if ((lVar23 != 0) &&
           (lVar21 = thunk_FUN_01a89d6c(lVar23,*(undefined8 *)(*plVar14 + 0x40)), lVar21 == 0))
        goto LAB_035660fc;
        if (*(uint *)(plVar14 + 3) < 4) goto LAB_035660f8;
        plVar14[7] = lVar23;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14 + 7,lVar23);
        puVar17 = (undefined8 *)OVRPlugin_TrackedKeyboardFlags_TypeInfo;
      }
      else {
        in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,unaff_w28);
        lVar23 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
        if (plVar14 == (long *)0x0) goto LAB_03566068;
        if ((lVar23 != 0) &&
           (lVar21 = thunk_FUN_01a89d6c(lVar23,*(undefined8 *)(*plVar14 + 0x40)), lVar21 == 0))
        goto LAB_035660fc;
        if ((int)plVar14[3] == 0) goto LAB_035660f8;
        plVar14[4] = lVar23;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14 + 4,lVar23);
        if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
        lVar23 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
        if ((lVar23 != 0) &&
           (lVar21 = thunk_FUN_01a89d6c(lVar23,*(undefined8 *)(*plVar14 + 0x40)), lVar21 == 0))
        goto LAB_035660fc;
        if (*(uint *)(plVar14 + 3) < 2) goto LAB_035660f8;
        plVar14[5] = lVar23;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14 + 5,lVar23);
        if (lVar13 == 0) goto LAB_03566068;
        in_stack_00000168._4_4_ = *(undefined4 *)(lVar13 + 0x14);
        lVar23 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,(long)&stack0x00000168 + 4);
        if ((lVar23 != 0) &&
           (lVar21 = thunk_FUN_01a89d6c(lVar23,*(undefined8 *)(*plVar14 + 0x40)), lVar21 == 0))
        goto LAB_035660fc;
        if (*(uint *)(plVar14 + 3) < 3) goto LAB_035660f8;
        plVar14[6] = lVar23;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14 + 6,lVar23);
        lVar23 = FUN_036d3824();
        if ((lVar23 != 0) &&
           (lVar21 = thunk_FUN_01a89d6c(lVar23,*(undefined8 *)(*plVar14 + 0x40)), lVar21 == 0))
        goto LAB_035660fc;
        if (*(uint *)(plVar14 + 3) < 4) goto LAB_035660f8;
        plVar14[7] = lVar23;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14 + 7,lVar23);
        puVar17 = (undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo;
      }
      uVar27 = FUN_025be8f4(*puVar17,plVar14,0);
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367b470(uVar27);
      unaff_w28 = unaff_w26;
    }
    else {
      unaff_w28 = unaff_w26;
      if (lVar13 == 0) goto LAB_03566068;
    }
LAB_03565024:
    if (*(char *)(lVar13 + 0x10) == '\x01') {
      lVar23 = *(long *)(lVar13 + 0x18);
      if (lVar23 == 0) goto LAB_03566068;
      iVar7 = *(int *)(lVar23 + 0x18);
      if (iVar7 == 0) {
        iVar7 = FUN_036d3364(lVar23,0);
        *(int *)(lVar23 + 0x18) = iVar7;
      }
      lVar23 = *in_stack_00000038;
      if (lVar23 == 0) goto LAB_03566068;
      iVar8 = *(int *)(lVar23 + 0x18);
      if (iVar8 == 0) {
        iVar8 = FUN_036d3364(lVar23,0);
        *(int *)(lVar23 + 0x18) = iVar8;
      }
      if (iVar7 == iVar8) {
        bVar4 = false;
      }
      else {
        plVar14 = *(long **)(lVar13 + 0x18);
        if (plVar14 == (long *)0x0) {
          plVar14 = (long *)0x0;
          *in_stack_00000038 = 0;
        }
        else {
          lVar23 = *(long *)OVRPlugin_OVRP_1_83_0_TypeInfo;
          bVar3 = *(byte *)(lVar23 + 0x130);
          if (*(byte *)(*plVar14 + 0x130) < bVar3) {
            plVar25 = (long *)0x0;
          }
          else {
            plVar25 = plVar14;
            if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != lVar23) {
              plVar25 = (long *)0x0;
            }
          }
          *in_stack_00000038 = (long)plVar25;
          if (*(byte *)(*plVar14 + 0x130) < bVar3) {
            plVar14 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != lVar23) {
            plVar14 = (long *)0x0;
          }
        }
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000038,plVar14)
        ;
        bVar4 = true;
      }
    }
    else {
      bVar4 = false;
    }
    if ((*unaff_x20 == 0) || (lVar23 = *(long *)(*unaff_x20 + 0x38), lVar23 == 0))
    goto LAB_03566068;
    if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
    lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
    plVar14 = (long *)(lVar23 + 0x30);
    *plVar14 = lVar13;
    *(undefined4 *)(lVar23 + 0x2c) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14,lVar13);
    if ((*unaff_x20 == 0) || (lVar23 = *(long *)(*unaff_x20 + 0x38), lVar23 == 0))
    goto LAB_03566068;
    uVar9 = *(uint *)(unaff_x19 + 0x490);
    if (*(uint *)(lVar23 + 0x18) <= uVar9) goto LAB_035660f8;
    lVar21 = lVar23 + (long)(int)uVar9 * 0x178;
    *(short *)(lVar21 + 0x20) = (short)unaff_w28;
    *(undefined1 *)(lVar21 + 0x5c) = uStack00000000000001bc;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar10) goto LAB_035660f8;
    lVar23 = lVar23 + (long)(int)uVar9 * 0x178;
    *(undefined8 *)(lVar23 + 0x24) = *(undefined8 *)(unaff_x21 + unaff_x24 * 0xc + 0x24);
    *(long *)(lVar23 + 0x38) = *in_stack_00000038;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    plVar14 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(char *)(lVar13 + 0x10) == '\x02') {
      plVar25 = *(long **)(lVar13 + 0x18);
      if (plVar25 == (long *)0x0) goto LAB_03566068;
      bVar3 = *(byte *)(*(long *)OVRPlugin_Sizei_TypeInfo + 0x130);
      if ((*(byte *)(*plVar25 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar25 + 200) + (ulong)bVar3 * 8 + -8) !=
          *(long *)OVRPlugin_Sizei_TypeInfo)) goto LAB_03566068;
      lVar21 = plVar25[4];
      lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar23 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar23 = *plVar14;
      }
      uVar9 = FUN_03558224(lVar21,plVar25,*(long *)(lVar23 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 8));
      *(uint *)(unaff_x19 + 0x120) = uVar9;
      lVar23 = **(long **)(*plVar14 + 0xb8);
      if (lVar23 == 0) goto LAB_03566068;
      if (*(uint *)(lVar23 + 0x18) <= uVar9) goto LAB_035660f8;
      lVar23 = lVar23 + (long)(int)uVar9 * 0x38;
      *(int *)(lVar23 + 0x54) = *(int *)(lVar23 + 0x54) + 1;
      if ((*unaff_x20 == 0) || (lVar23 = *(long *)(*unaff_x20 + 0x38), lVar23 == 0))
      goto LAB_03566068;
      if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
      lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
      *(undefined4 *)(lVar23 + 0x2c) = 1;
      uVar11 = *(undefined4 *)(unaff_x19 + 0x120);
      *(undefined8 *)(lVar23 + 0x40) = plVar25;
      *(undefined4 *)(lVar23 + 0x58) = uVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar23 + 0x40),plVar25);
      plVar14 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar23 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar23 == 0)) goto LAB_03566068;
      uVar9 = *(uint *)(unaff_x19 + 0x490);
      if (*(uint *)(lVar23 + 0x18) <= uVar9) goto LAB_035660f8;
      *(undefined4 *)(lVar23 + (long)(int)uVar9 * 0x178 + 0x48) = *(undefined4 *)(lVar13 + 0x28);
      *(undefined4 *)(unaff_x19 + 0x644) = 0;
      *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
      in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
      plVar25 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
    }
    else {
      if (bVar4) {
        lVar23 = *in_stack_00000038;
        if (lVar23 == 0) goto LAB_03566068;
        iVar7 = *(int *)(lVar23 + 0x18);
        if (iVar7 == 0) {
          iVar7 = FUN_036d3364(lVar23,0);
          *(int *)(lVar23 + 0x18) = iVar7;
        }
        lVar23 = *(long *)(unaff_x19 + 0xf8);
        if (lVar23 == 0) goto LAB_03566068;
        iVar8 = *(int *)(lVar23 + 0x18);
        if (iVar8 == 0) {
          iVar8 = FUN_036d3364(lVar23,0);
          *(int *)(lVar23 + 0x18) = iVar8;
        }
        if (iVar7 != iVar8) {
          uVar12 = FUN_0359778c(0);
          if ((uVar12 & 1) == 0) {
            if (*in_stack_00000038 == 0) goto LAB_03566068;
            uVar27 = *(undefined8 *)(*in_stack_00000038 + 0x20);
          }
          else {
            if (*in_stack_00000038 == 0) goto LAB_03566068;
            uVar18 = *(undefined8 *)(*in_stack_00000038 + 0x20);
            uVar27 = *in_stack_00000028;
            if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar27 = FUN_03594e9c(uVar27,uVar18,0);
          }
          *in_stack_00000028 = uVar27;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000028);
          lVar23 = *plVar14;
          uVar27 = *in_stack_00000028;
          lVar21 = *in_stack_00000038;
          if (*(int *)(lVar23 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar23 = *plVar14;
          }
          uVar11 = FUN_03557fec(uVar27,lVar21,*(long *)(lVar23 + 0xb8),
                                *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 8));
          *(undefined4 *)(unaff_x19 + 0x120) = uVar11;
        }
      }
      if (*(long *)(lVar13 + 0x20) == 0) goto LAB_03566068;
      iVar7 = FUN_03776eb8(*(long *)(lVar13 + 0x20),0);
      if (0 < iVar7) {
        if (*(long *)(lVar13 + 0x20) == 0) goto LAB_03566068;
        lVar23 = *in_stack_00000038;
        uVar27 = *in_stack_00000028;
        uVar11 = FUN_03776eb8(*(long *)(lVar13 + 0x20),0);
        if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)OVRPlugin_Sizef_TypeInfo);
        }
        uVar27 = FUN_03594928(lVar23,uVar27,uVar11,0);
        *in_stack_00000028 = uVar27;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000028,uVar27);
        lVar13 = *plVar14;
        uVar27 = *in_stack_00000028;
        lVar23 = *in_stack_00000038;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar13 = *plVar14;
        }
        uVar11 = FUN_03557fec(uVar27,lVar23,*(long *)(lVar13 + 0xb8),
                              *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
        bVar4 = true;
        *(undefined4 *)(unaff_x19 + 0x120) = uVar11;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar12 = FUN_026b63d8(unaff_w28,0);
      plVar25 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
      if ((unaff_w28 != 0x200b) && ((uVar12 & 1) == 0)) {
        lVar13 = *plVar14;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar13);
          lVar13 = *plVar14;
        }
        lVar23 = **(long **)(lVar13 + 0xb8);
        if (lVar23 == 0) goto LAB_03566068;
        uVar9 = *(uint *)(unaff_x19 + 0x120);
        if (*(uint *)(lVar23 + 0x18) <= uVar9) goto LAB_035660f8;
        if (*(int *)(lVar23 + (long)(int)uVar9 * 0x38 + 0x54) < 0x3fff) {
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar13);
            lVar23 = **(long **)(*plVar14 + 0xb8);
            if (lVar23 == 0) goto LAB_03566068;
            uVar9 = *(uint *)(unaff_x19 + 0x120);
          }
        }
        else {
          uVar18 = *in_stack_00000028;
          uVar27 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
          FUN_0369922c(uVar27,uVar18,0);
          lVar13 = *plVar14;
          lVar23 = *in_stack_00000038;
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar13 = *plVar14;
          }
          uVar9 = FUN_03557fec(uVar27,lVar23,*(long *)(lVar13 + 0xb8),
                               *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
          *(uint *)(unaff_x19 + 0x120) = uVar9;
          lVar23 = **(long **)(*plVar14 + 0xb8);
          if (lVar23 == 0) goto LAB_03566068;
        }
        if (*(uint *)(lVar23 + 0x18) <= uVar9) goto LAB_035660f8;
        lVar23 = lVar23 + (long)(int)uVar9 * 0x38;
        *(int *)(lVar23 + 0x54) = *(int *)(lVar23 + 0x54) + 1;
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
      lVar13 = *plVar14;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar13 = *plVar14;
        uVar9 = *(uint *)(unaff_x19 + 0x120);
      }
      lVar23 = **(long **)(lVar13 + 0xb8);
      if (lVar23 == 0) goto LAB_03566068;
      if (*(uint *)(lVar23 + 0x18) <= uVar9) goto LAB_035660f8;
      *(bool *)(lVar23 + (long)(int)uVar9 * 0x38 + 0x41) = bVar4;
      if (bVar4) {
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar23 = **(long **)(*plVar14 + 0xb8);
          if (lVar23 == 0) goto LAB_03566068;
          uVar9 = *(uint *)(unaff_x19 + 0x120);
        }
        if (*(uint *)(lVar23 + 0x18) <= uVar9) goto LAB_035660f8;
        puVar17 = (undefined8 *)(lVar23 + (long)(int)uVar9 * 0x38 + 0x48);
        *puVar17 = in_stack_00000018;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar17,in_stack_00000018)
        ;
        *(undefined8 *)(unaff_x19 + 0x100) = in_stack_00000010;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000038);
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
          lVar23 = *plVar14;
          if (*(int *)(lVar23 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar23 = *plVar14;
          }
          lVar23 = *(long *)(*(long *)(lVar23 + 0xb8) + 8);
          if (lVar23 == 0) goto LAB_03566068;
          uVar10 = FUN_0219b384(lVar23,*(undefined8 *)PTR_DAT_03ceb270);
          *(uint *)(lVar13 + 0x34) = uVar10;
          if (*unaff_x20 == 0) goto LAB_03566068;
          plVar22 = (long *)(*unaff_x20 + 0x60);
          lVar13 = *plVar22;
          if (lVar13 == 0) goto LAB_03566068;
          uVar12 = (ulong)uVar10;
          if (*(int *)(lVar13 + 0x18) < (int)uVar10) {
            if (*(int *)(*plVar25 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_01ff02b8(plVar22,uVar12,0,*(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo);
          }
          if (*(long *)(unaff_x19 + 0x708) == 0) goto LAB_03566068;
          plVar22 = (long *)(unaff_x19 + 0x708);
          if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar10) {
            uVar11 = FUN_036c1d60(uVar10 + 1,0);
            if (*(int *)(*plVar25 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*plVar25);
            }
            FUN_01ff025c(plVar22,uVar11,*(undefined8 *)OVRSystemPerfMetrics_PerfMetrics_TypeInfo);
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
              plVar14 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            }
          }
          fVar5 = DAT_00d38798;
          if ((int)uVar10 < 1) goto LAB_03565fb8;
          lVar13 = 0;
          uVar26 = 0;
          lVar23 = 0x54;
          lVar21 = 0x20;
          goto LAB_035658ec;
        }
        if (uVar9 <= unaff_w22) goto LAB_035660f8;
        unaff_x29 = (uint *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x20);
        if (*unaff_x29 == 0) goto LAB_0356573c;
        if (*unaff_x20 == 0) goto LAB_03566068;
        plVar14 = (long *)(*unaff_x20 + 0x38);
        lVar13 = *plVar14;
        iVar7 = *(int *)(unaff_x19 + 0x490);
        if ((lVar13 == 0) || (*(int *)(lVar13 + 0x18) <= iVar7)) {
          if (*(int *)(*plVar25 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff02b8(plVar14,iVar7 + 1,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
          uVar9 = *(uint *)(unaff_x21 + 0x18);
        }
        if (uVar9 <= unaff_w22) goto LAB_035660f8;
        unaff_w28 = *unaff_x29;
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
              uVar12 = FUN_026b8070(unaff_w28,0);
              if ((uVar12 & 1) != 0) {
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
            uVar12 = FUN_026b812c(unaff_w28,0);
            if ((uVar12 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar10 = FUN_026b8410(unaff_w28,0);
LAB_03564aa8:
              unaff_w28 = uVar10 & 0xffff;
            }
          }
LAB_03564aac:
          lVar13 = FUN_03591848();
          uVar10 = unaff_w22;
          if (lVar13 != 0) goto LAB_03565024;
          iVar7 = FUN_035975f8();
          if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
          if (iVar7 == 0) {
            unaff_w26 = 0x25a1;
          }
          else {
            unaff_w26 = FUN_035975f8(0);
          }
          *unaff_x29 = unaff_w26;
          uVar27 = *(undefined8 *)(unaff_x19 + 0x100);
          uVar11 = *(undefined4 *)(unaff_x19 + 0x25c);
          uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
          if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          lVar13 = FUN_03570fc4(unaff_w26,uVar27,1,uVar11,uVar2,(long)&stack0x000001b8 + 4,0);
          if (lVar13 != 0) goto LAB_03564b5c;
          lVar13 = FUN_03597770();
          if (lVar13 != 0) {
            lVar13 = FUN_03597770(0);
            if (lVar13 == 0) goto LAB_03566068;
            if (0 < *(int *)(lVar13 + 0x18)) {
              uVar18 = *(undefined8 *)(unaff_x19 + 0x100);
              uVar27 = FUN_03597770(0);
              uVar11 = *(undefined4 *)(unaff_x19 + 0x25c);
              uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
              if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
              }
              lVar13 = FUN_035714e4(unaff_w26,uVar18,uVar27,1,uVar11,uVar2,
                                    (long)&stack0x000001b8 + 4,0);
              if (lVar13 != 0) goto LAB_03564b5c;
            }
          }
          uVar27 = FUN_03597650(0);
          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
          }
          uVar12 = FUN_036cee6c(uVar27,0,0);
          if ((uVar12 & 1) == 0) goto LAB_03564df0;
          unaff_x27 = FUN_03597650(0);
          unaff_w23 = *(undefined4 *)(unaff_x19 + 0x25c);
          unaff_w25 = *(undefined4 *)(unaff_x19 + 0x214);
          if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
          }
          goto code_r0x03564dc4;
        }
        uVar11 = *(undefined4 *)(unaff_x19 + 0x120);
        uVar12 = FUN_03586568();
        uVar10 = uStack00000000000001b8;
        if ((uVar12 & 1) == 0) goto LAB_035649d0;
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
        iVar7 = *(int *)(unaff_x21 + unaff_x24 * 0xc + 0x24);
        if ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0) {
          *(undefined1 *)(unaff_x19 + 0x26a) = 1;
        }
        puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        plVar14 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      } while (*(int *)(unaff_x19 + 0x644) != 1);
      lVar13 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar13 = *(long *)puVar6;
      }
      lVar13 = **(long **)(lVar13 + 0xb8);
      if (lVar13 == 0) goto LAB_03566068;
      if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) break;
      lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
      *(int *)(lVar13 + 0x54) = *(int *)(lVar13 + 0x54) + 1;
      if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
      goto LAB_03566068;
      if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) break;
      uVar2 = *(undefined4 *)(unaff_x19 + 0x6a4);
      lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
      *(short *)(lVar13 + 0x20) = (short)uVar2 + -0x2000;
      *(undefined4 *)(lVar13 + 0x48) = uVar2;
      *(long *)(lVar13 + 0x38) = *in_stack_00000038;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
      goto LAB_03566068;
      if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) break;
      *(undefined8 *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x40) =
           *(undefined8 *)(unaff_x19 + 0x698);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
      goto LAB_03566068;
      uVar9 = *(uint *)(unaff_x19 + 0x490);
      if (*(uint *)(lVar13 + 0x18) <= uVar9) break;
      *(undefined4 *)(lVar13 + (long)(int)uVar9 * 0x178 + 0x58) = *(undefined4 *)(unaff_x19 + 0x120)
      ;
      if ((*(long *)(unaff_x19 + 0x698) == 0) ||
         (lVar23 = UnityEngine_Material__DisableKeyword(*(long *)(unaff_x19 + 0x698),0), lVar23 == 0
         )) goto LAB_03566068;
      FUN_02215a88(lVar23,*(undefined4 *)(unaff_x19 + 0x6a4),&stack0x000000e0,
                   *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      if (*(uint *)(lVar13 + 0x18) <= uVar9) break;
      *(undefined8 *)(lVar13 + (long)(int)uVar9 * 0x178 + 0x30) = in_stack_000000e0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
      goto LAB_03566068;
      uVar9 = *(uint *)(unaff_x19 + 0x490);
      if (*(uint *)(lVar13 + 0x18) <= uVar9) break;
      uVar2 = *(undefined4 *)(unaff_x19 + 0x644);
      lVar23 = lVar13 + (long)(int)uVar9 * 0x178;
      *(int *)(lVar23 + 0x24) = iVar7;
      *(undefined4 *)(lVar23 + 0x2c) = uVar2;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar10) break;
      *(int *)(lVar13 + (long)(int)uVar9 * 0x178 + 0x28) =
           (*(int *)(unaff_x21 + (long)(int)uVar10 * 0xc + 0x24) - iVar7) + 1;
      *(undefined4 *)(unaff_x19 + 0x644) = 0;
      *(undefined4 *)(unaff_x19 + 0x120) = uVar11;
      in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
      plVar14 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    } while( true );
  }
LAB_035660f8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
LAB_035658ec:
  do {
    fVar31 = (float)param_2;
    if (uVar26 != 0) {
      lVar19 = *plVar22;
      if (lVar19 == 0) goto LAB_03566068;
      if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_035660f8;
      uVar27 = *(undefined8 *)(lVar19 + uVar26 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar15 = FUN_036d35a8(uVar27,0,0);
      if ((uVar15 & 1) != 0) {
        lVar19 = *plVar14;
        plVar25 = (long *)*plVar22;
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar19 = *plVar14;
        }
        lVar19 = **(long **)(lVar19 + 0xb8);
        if (lVar19 == 0) goto LAB_03566068;
        if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_035660f8;
        lVar19 = lVar19 + lVar23;
        in_stack_00000160 = *(undefined8 *)(lVar19 + -4);
        in_stack_00000158 = *(undefined8 *)(lVar19 + -0xc);
        in_stack_00000150 = *(undefined8 *)(lVar19 + -0x14);
        in_stack_00000148 = *(undefined8 *)(lVar19 + -0x1c);
        uVar27 = *(undefined8 *)(lVar19 + -0x24);
        in_stack_00000138 = *(undefined8 *)(lVar19 + -0x2c);
        in_stack_00000130 = *(undefined8 *)(lVar19 + -0x34);
        in_stack_00000140 = uVar27;
        lVar19 = FUN_0359e964();
        fVar31 = (float)uVar27;
        if (plVar25 == (long *)0x0) goto LAB_03566068;
        if ((lVar19 != 0) &&
           (lVar16 = thunk_FUN_01a89d6c(lVar19,*(undefined8 *)(*plVar25 + 0x40)), lVar16 == 0)) {
LAB_035660fc:
          uVar27 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar27,0);
        }
        if (*(uint *)(plVar25 + 3) <= uVar26) goto LAB_035660f8;
        plVar25[uVar26 + 4] = lVar19;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long)plVar25 + lVar21,lVar19);
        plVar14 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if ((*unaff_x20 == 0) || (lVar19 = *(long *)(*unaff_x20 + 0x60), lVar19 == 0))
        goto LAB_03566068;
        if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_035660f8;
        puVar17 = (undefined8 *)(lVar19 + lVar13 + 0x30);
        *puVar17 = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar17,0);
      }
      if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_03566068;
      fVar28 = (float)FUN_036dba50(*(long *)(unaff_x19 + 0x380),0);
      lVar19 = *plVar22;
      if (lVar19 == 0) goto LAB_03566068;
      if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_035660f8;
      lVar19 = *(long *)(lVar19 + uVar26 * 8 + 0x20);
      if ((lVar19 == 0) || (fVar30 = fVar31, lVar19 = FUN_037b4844(lVar19,0), lVar19 == 0))
      goto LAB_03566068;
      fVar29 = (float)FUN_036dba50(lVar19,0);
      fVar31 = (fVar31 - fVar30) * (fVar31 - fVar30);
      param_2 = (ulong)(uint)fVar31;
      if (fVar5 <= (fVar28 - fVar29) * (fVar28 - fVar29) + fVar31) {
        lVar19 = *plVar22;
        if (lVar19 == 0) goto LAB_03566068;
        if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_035660f8;
        lVar19 = *(long *)(lVar19 + uVar26 * 8 + 0x20);
        if (lVar19 == 0) goto LAB_03566068;
        lVar19 = FUN_037b4844(lVar19,0);
        if ((*(long *)(unaff_x19 + 0x380) == 0) ||
           (FUN_036dba50(*(long *)(unaff_x19 + 0x380),0), lVar19 == 0)) goto LAB_03566068;
        FUN_036dbae0(lVar19,0);
      }
      lVar19 = *plVar22;
      if (lVar19 == 0) goto LAB_03566068;
      if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_035660f8;
      lVar19 = *(long *)(lVar19 + uVar26 * 8 + 0x20);
      if (lVar19 == 0) goto LAB_03566068;
      uVar27 = *(undefined8 *)(lVar19 + 0xf0);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar15 = FUN_036d35a8(uVar27,0,0);
      if ((uVar15 & 1) == 0) {
        lVar19 = *plVar22;
        if (lVar19 == 0) goto LAB_03566068;
        if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_035660f8;
        lVar19 = *(long *)(lVar19 + uVar26 * 8 + 0x20);
        if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0xf0), lVar19 == 0)) goto LAB_03566068;
        iVar7 = FUN_036d3364(lVar19,0);
        lVar19 = *plVar14;
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar19);
          lVar19 = *plVar14;
        }
        lVar19 = **(long **)(lVar19 + 0xb8);
        if (lVar19 == 0) goto LAB_03566068;
        if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_035660f8;
        lVar19 = *(long *)(lVar19 + lVar23 + -0x1c);
        if (lVar19 == 0) goto LAB_03566068;
        iVar8 = FUN_036d3364(lVar19,0);
        if (iVar7 != iVar8) goto LAB_03565b98;
      }
      else {
LAB_03565b98:
        lVar19 = *plVar22;
        if (lVar19 == 0) goto LAB_03566068;
        if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_035660f8;
        lVar16 = *plVar14;
        lVar19 = *(long *)(lVar19 + uVar26 * 8 + 0x20);
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar16 = *plVar14;
        }
        lVar16 = **(long **)(lVar16 + 0xb8);
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_035660f8;
        if (lVar19 == 0) goto LAB_03566068;
        thunk_FUN_0359e5ac(lVar19,*(undefined8 *)(lVar16 + lVar23 + -0x1c),0);
        lVar19 = *plVar22;
        if (lVar19 == 0) goto LAB_03566068;
        if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_035660f8;
        lVar16 = **(long **)(*plVar14 + 0xb8);
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_035660f8;
        lVar19 = *(long *)(lVar19 + uVar26 * 8 + 0x20);
        if (lVar19 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar19 + 0xd8) = *(undefined8 *)(lVar16 + lVar23 + -0x2c);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar19 = *plVar22;
        if (lVar19 == 0) goto LAB_03566068;
        if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_035660f8;
        lVar16 = **(long **)(*plVar14 + 0xb8);
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_035660f8;
        lVar19 = *(long *)(lVar19 + uVar26 * 8 + 0x20);
        if (lVar19 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar19 + 0xe0) = *(undefined8 *)(lVar16 + lVar23 + -0x24);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      lVar19 = *plVar14;
      if (*(int *)(lVar19 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar19 = *plVar14;
      }
      lVar16 = **(long **)(lVar19 + 0xb8);
      if (lVar16 == 0) goto LAB_03566068;
      if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_035660f8;
      if (*(char *)(lVar16 + lVar23 + -0x13) != '\0') {
        lVar20 = *plVar22;
        if (lVar20 == 0) goto LAB_03566068;
        if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_035660f8;
        lVar20 = *(long *)(lVar20 + uVar26 * 8 + 0x20);
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar16 = **(long **)(*plVar14 + 0xb8);
          if (lVar16 == 0) goto LAB_03566068;
        }
        if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_035660f8;
        if (lVar20 == 0) goto LAB_03566068;
        FUN_0359e608(lVar20,*(undefined8 *)(lVar16 + lVar23 + -0x1c),0);
        lVar19 = *plVar22;
        if (lVar19 == 0) goto LAB_03566068;
        if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_035660f8;
        lVar16 = **(long **)(*plVar14 + 0xb8);
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_035660f8;
        lVar19 = *(long *)(lVar19 + uVar26 * 8 + 0x20);
        if (lVar19 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar19 + 0x100) = *(undefined8 *)(lVar16 + lVar23 + -0xc);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar19 + 0x100);
      }
    }
    lVar19 = *plVar14;
    if (*(int *)(lVar19 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar19 = *plVar14;
    }
    lVar19 = **(long **)(lVar19 + 0xb8);
    if (lVar19 == 0) goto LAB_03566068;
    if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_035660f8;
    if ((*unaff_x20 == 0) || (lVar16 = *(long *)(*unaff_x20 + 0x60), lVar16 == 0))
    goto LAB_03566068;
    if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_035660f8;
    lVar20 = *(long *)(lVar16 + lVar13 + 0x30);
    iVar7 = *(int *)(lVar19 + lVar23);
    if (lVar20 == 0) {
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
        if (*(int *)(lVar16 + 0x18) == 0) goto LAB_035660f8;
        memcpy((void *)(lVar16 + lVar13 + 0x20),&stack0x00000090,0x50);
        __dest = (void *)(lVar16 + 0x20);
      }
      else {
        lVar19 = *plVar22;
        if (lVar19 == 0) goto LAB_03566068;
        if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_035660f8;
        lVar19 = *(long *)(lVar19 + uVar26 * 8 + 0x20);
        if (lVar19 == 0) goto LAB_03566068;
        uVar27 = UnityEngine_Material__GetColorArray(lVar19,0);
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
        FUN_03595600(&stack0x000000e0,uVar27,iVar7 + 1,0);
        memcpy(&stack0x00000040,&stack0x000000e0,0x50);
        if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_035660f8;
        __dest = (void *)(lVar16 + lVar13 + 0x20);
        memcpy(__dest,&stack0x00000040,0x50);
      }
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(__dest,0);
    }
    else {
      iVar8 = *(int *)(lVar20 + 0x18);
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
        FUN_03595b9c(lVar16 + lVar13 + 0x20,iVar7,0);
      }
      else if ((0 < iVar7) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
        iVar1 = iVar8 + 3;
        if (-1 < iVar8) {
          iVar1 = iVar8;
        }
        if (0x100 < (iVar1 >> 2) - iVar7) goto LAB_03565e08;
      }
    }
    plVar14 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if ((*unaff_x20 == 0) || (lVar19 = *(long *)(*unaff_x20 + 0x60), lVar19 == 0))
    goto LAB_03566068;
    lVar16 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar16 = *plVar14;
    }
    lVar16 = **(long **)(lVar16 + 0xb8);
    if (lVar16 == 0) goto LAB_03566068;
    if ((*(uint *)(lVar16 + 0x18) <= uVar26) || (*(uint *)(lVar19 + 0x18) <= uVar26))
    goto LAB_035660f8;
    *(undefined8 *)(lVar19 + lVar13 + 0x68) = *(undefined8 *)(lVar16 + lVar23 + -0x1c);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    uVar26 = uVar26 + 1;
    lVar13 = lVar13 + 0x50;
    lVar23 = lVar23 + 0x38;
    lVar21 = lVar21 + 8;
  } while (uVar10 != uVar26);
LAB_03565fb8:
  lVar13 = *plVar22;
  if (lVar13 != 0) {
    lVar23 = (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3) + 0x20;
    do {
      uVar10 = (uint)uVar12;
      if ((int)*(uint *)(lVar13 + 0x18) <= (int)uVar10) {
LAB_03565748:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_035660f8;
      uVar27 = *(undefined8 *)(lVar13 + lVar23);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar12 = FUN_036cee6c(uVar27,0,0);
      if ((uVar12 & 1) == 0) goto LAB_03565748;
      if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x60), lVar13 == 0)) break;
      if ((int)uVar10 < *(int *)(lVar13 + 0x18)) {
        lVar13 = *plVar22;
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_035660f8;
        if ((*(long *)(lVar13 + lVar23) == 0) ||
           (lVar13 = FUN_037b514c(*(long *)(lVar13 + lVar23),0), lVar13 == 0)) break;
        FUN_0390f3a4(lVar13,0,0);
      }
      lVar13 = *plVar22;
      uVar12 = (ulong)(uVar10 + 1);
      lVar23 = lVar23 + 8;
    } while (lVar13 != 0);
  }
LAB_03566068:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


