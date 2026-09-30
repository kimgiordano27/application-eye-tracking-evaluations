/*
FUNCTION_NAME: UnityEngine.AudioSource$$set_bypassListenerEffects
ENTRY_POINT: 035651e4
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
UnityEngine_AudioSource__set_bypassListenerEffects
          (long param_1,undefined1 param_2 [16],ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  float fVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  void *__dest;
  long lVar16;
  long in_x9;
  long lVar17;
  uint in_w11;
  undefined8 uVar18;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar19;
  uint unaff_w22;
  long *plVar20;
  long lVar21;
  undefined8 uVar22;
  long *plVar23;
  undefined8 uVar24;
  long *plVar25;
  long *unaff_x24;
  long *plVar26;
  undefined8 uVar27;
  ulong uVar28;
  long unaff_x27;
  long unaff_x28;
  uint *puVar29;
  long lVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
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
  
code_r0x035651e4:
  puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                    /* try { // try from 035651ec to 036651f3 has its CatchHandler @ 03565250 */
  if ((*(byte *)(param_1 + 0x130) <= in_w11) &&
     (*(long *)(*(long *)(in_x9 + 200) + (ulong)*(byte *)(param_1 + 0x130) * 8 + -8) == param_1)) {
                    /* try { // try from 03565208 to 0366520f has its CatchHandler @ 0356524c */
    lVar21 = unaff_x24[4];
                    /* try { // try from 03565210 to 0366523f has its CatchHandler @ 03564f74 */
    lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar12 = *(long *)puVar6;
    }
    uVar8 = FUN_03558224(lVar21,unaff_x24,*(long *)(lVar12 + 0xb8),
                         *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
    *(uint *)(unaff_x19 + 0x120) = uVar8;
    lVar12 = **(long **)(*(long *)puVar6 + 0xb8);
    if (lVar12 != 0) {
      if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_035660f8;
      lVar12 = lVar12 + (long)(int)uVar8 * 0x38;
      *(int *)(lVar12 + 0x54) = *(int *)(lVar12 + 0x54) + 1;
      if ((*unaff_x20 != 0) && (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 != 0)) {
        if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
        lVar12 = lVar12 + (int)*(uint *)(unaff_x19 + 0x490) * unaff_x28;
        *(undefined4 *)(lVar12 + 0x2c) = 1;
        uVar9 = *(undefined4 *)(unaff_x19 + 0x120);
        *(undefined8 *)(lVar12 + 0x40) = unaff_x24;
        *(undefined4 *)(lVar12 + 0x58) = uVar9;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(lVar12 + 0x40),unaff_x24);
        plVar25 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if ((*(long *)(unaff_x19 + 0x368) != 0) &&
           (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar12 != 0)) {
          uVar8 = *(uint *)(unaff_x19 + 0x490);
          if (uVar8 < *(uint *)(lVar12 + 0x18)) {
            *(undefined4 *)(lVar12 + (int)uVar8 * unaff_x28 + 0x48) =
                 *(undefined4 *)(unaff_x27 + 0x28);
            *(undefined4 *)(unaff_x19 + 0x644) = 0;
            *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
            in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
            plVar26 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
LAB_0356571c:
            do {
              *(uint *)(unaff_x19 + 0x490) = uVar8 + 1;
              do {
                uVar8 = *(uint *)(unaff_x21 + 0x18);
                unaff_w22 = unaff_w22 + 1;
                if ((int)uVar8 <= (int)unaff_w22) {
LAB_0356573c:
                  if (*(char *)(unaff_x19 + 0x3f5) != '\0') {
                    *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
                    goto LAB_03565748;
                  }
                  lVar12 = *unaff_x20;
                  if (lVar12 == 0) goto LAB_03566068;
                  *(int *)(lVar12 + 0x1c) = in_stack_00000020._4_4_;
                  lVar21 = *plVar25;
                  if (*(int *)(lVar21 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar21 = *plVar25;
                  }
                  lVar21 = *(long *)(*(long *)(lVar21 + 0xb8) + 8);
                  if (lVar21 == 0) goto LAB_03566068;
                  uVar8 = FUN_0219b384(lVar21,*(undefined8 *)PTR_DAT_03ceb270);
                  *(uint *)(lVar12 + 0x34) = uVar8;
                  if (*unaff_x20 == 0) goto LAB_03566068;
                  plVar20 = (long *)(*unaff_x20 + 0x60);
                  lVar12 = *plVar20;
                  if (lVar12 == 0) goto LAB_03566068;
                  uVar19 = (ulong)uVar8;
                  if (*(int *)(lVar12 + 0x18) < (int)uVar8) {
                    if (*(int *)(*plVar26 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    FUN_01ff02b8(plVar20,uVar19,0,*(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo
                                );
                  }
                  if (*(long *)(unaff_x19 + 0x708) == 0) goto LAB_03566068;
                  plVar20 = (long *)(unaff_x19 + 0x708);
                  if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar8) {
                    uVar9 = FUN_036c1d60(uVar8 + 1,0);
                    if (*(int *)(*plVar26 + 0xe0) == 0) {
                      thunk_FUN_01a58e78(*plVar26);
                    }
                    FUN_01ff025c(plVar20,uVar9,
                                 *(undefined8 *)OVRSystemPerfMetrics_PerfMetrics_TypeInfo);
                  }
                  if (*(char *)(unaff_x19 + 0x321) != '\0') {
                    if (*unaff_x20 == 0) goto LAB_03566068;
                    plVar23 = (long *)(*unaff_x20 + 0x38);
                    lVar12 = *plVar23;
                    if (lVar12 == 0) goto LAB_03566068;
                    iVar10 = *(int *)(unaff_x19 + 0x490);
                    if (0x100 < *(int *)(lVar12 + 0x18) - iVar10) {
                      iVar11 = 0x100;
                      if (0x100 < iVar10 + 1) {
                        iVar11 = iVar10 + 1;
                      }
                      if (*(int *)(*plVar26 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      FUN_01ff02b8(plVar23,iVar11,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
                      plVar25 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    }
                  }
                  fVar5 = DAT_00d38798;
                  if ((int)uVar8 < 1) goto LAB_03565fb8;
                  lVar12 = 0;
                  uVar28 = 0;
                  lVar21 = 0x54;
                  lVar30 = 0x20;
                  goto LAB_035658ec;
                }
                if (uVar8 <= unaff_w22) goto LAB_035660f8;
                puVar29 = (uint *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x20);
                if (*puVar29 == 0) goto LAB_0356573c;
                if (*unaff_x20 == 0) goto LAB_03566068;
                plVar25 = (long *)(*unaff_x20 + 0x38);
                lVar12 = *plVar25;
                iVar10 = *(int *)(unaff_x19 + 0x490);
                if ((lVar12 == 0) || (*(int *)(lVar12 + 0x18) <= iVar10)) {
                  if (*(int *)(*plVar26 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  FUN_01ff02b8(plVar25,iVar10 + 1,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
                  uVar8 = *(uint *)(unaff_x21 + 0x18);
                }
                if (uVar8 <= unaff_w22) goto LAB_035660f8;
                uVar8 = *puVar29;
                if ((uVar8 != 0x3c) || (*(char *)(unaff_x19 + 0x302) == '\0')) {
LAB_035649d0:
                  uStack00000000000001bc = 0;
                  uVar18 = *(undefined8 *)(unaff_x19 + 0x100);
                  uVar24 = *(undefined8 *)(unaff_x19 + 0x118);
                  in_stack_00000030._4_4_ = *(undefined4 *)(unaff_x19 + 0x120);
                  if (*(int *)(unaff_x19 + 0x644) != 0) goto LAB_03564aac;
                  uVar7 = *(uint *)(unaff_x19 + 0x25c);
                  if ((uVar7 >> 4 & 1) == 0) {
                    if ((uVar7 >> 3 & 1) == 0) {
                      if ((uVar7 >> 5 & 1) != 0) goto LAB_03564a00;
                    }
                    else {
                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar19 = FUN_026b8070(uVar8,0);
                      if ((uVar19 & 1) != 0) {
                        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        uVar8 = FUN_026b8594(uVar8,0);
                        goto LAB_03564aa8;
                      }
                    }
                  }
                  else {
LAB_03564a00:
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar19 = FUN_026b812c(uVar8,0);
                    if ((uVar19 & 1) != 0) {
                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar8 = FUN_026b8410(uVar8,0);
LAB_03564aa8:
                      uVar8 = uVar8 & 0xffff;
                    }
                  }
LAB_03564aac:
                  unaff_x27 = FUN_03591848();
                  if (unaff_x27 == 0) {
                    iVar10 = FUN_035975f8();
                    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
                    if (iVar10 == 0) {
                      uVar7 = 0x25a1;
                    }
                    else {
                      uVar7 = FUN_035975f8(0);
                    }
                    *puVar29 = uVar7;
                    uVar22 = *(undefined8 *)(unaff_x19 + 0x100);
                    uVar9 = *(undefined4 *)(unaff_x19 + 0x25c);
                    uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                    if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    unaff_x27 = FUN_03570fc4(uVar7,uVar22,1,uVar9,uVar2,(long)&stack0x000001b8 + 4,0
                                            );
                    if (unaff_x27 == 0) {
                      lVar12 = FUN_03597770();
                      if (lVar12 != 0) {
                        lVar12 = FUN_03597770(0);
                        if (lVar12 == 0) goto LAB_03566068;
                        if (0 < *(int *)(lVar12 + 0x18)) {
                          uVar27 = *(undefined8 *)(unaff_x19 + 0x100);
                          uVar22 = FUN_03597770(0);
                          uVar9 = *(undefined4 *)(unaff_x19 + 0x25c);
                          uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                          if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                            thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                          }
                          unaff_x27 = FUN_035714e4(uVar7,uVar27,uVar22,1,uVar9,uVar2,
                                                   (long)&stack0x000001b8 + 4,0);
                          if (unaff_x27 != 0) goto LAB_03564b5c;
                        }
                      }
                      uVar22 = FUN_03597650(0);
                      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                      }
                      uVar19 = FUN_036cee6c(uVar22,0,0);
                      if ((uVar19 & 1) != 0) {
                        uVar22 = FUN_03597650(0);
                        uVar9 = *(undefined4 *)(unaff_x19 + 0x25c);
                        uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                        if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                        }
                        unaff_x27 = FUN_03570fc4(uVar7,uVar22,1,uVar9,uVar2,
                                                 (long)&stack0x000001b8 + 4,0);
                        if (unaff_x27 != 0) goto LAB_03564b5c;
                      }
                      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
                      *puVar29 = 0x20;
                      uVar22 = *(undefined8 *)(unaff_x19 + 0x100);
                      uVar9 = *(undefined4 *)(unaff_x19 + 0x25c);
                      uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                      if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar7 = 0x20;
                      unaff_x27 = FUN_03570fc4(0x20,uVar22,1,uVar9,uVar2,(long)&stack0x000001b8 + 4,
                                               0);
                      if (unaff_x27 == 0) {
                        if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
                        *puVar29 = 3;
                        uVar22 = *(undefined8 *)(unaff_x19 + 0x100);
                        uVar9 = *(undefined4 *)(unaff_x19 + 0x25c);
                        uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                        if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        uVar7 = 3;
                        unaff_x27 = FUN_03570fc4(3,uVar22,1,uVar9,uVar2,(long)&stack0x000001b8 + 4,0
                                                );
                      }
                    }
LAB_03564b5c:
                    uVar19 = FUN_03597634(0);
                    if ((uVar19 & 1) == 0) {
                      plVar25 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,4);
                      if ((int)uVar8 < 0x10000) {
                        in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar8);
                        lVar12 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0
                                                   );
                        if (plVar25 == (long *)0x0) goto LAB_03566068;
                        if ((lVar12 != 0) &&
                           (lVar21 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar25 + 0x40)),
                           lVar21 == 0)) goto LAB_035660fc;
                        if ((int)plVar25[3] == 0) goto LAB_035660f8;
                        plVar25[4] = lVar12;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar25 + 4,lVar12);
                        if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
                        lVar12 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
                        if ((lVar12 != 0) &&
                           (lVar21 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar25 + 0x40)),
                           lVar21 == 0)) goto LAB_035660fc;
                        if (*(uint *)(plVar25 + 3) < 2) goto LAB_035660f8;
                        plVar25[5] = lVar12;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar25 + 5,lVar12);
                        if (unaff_x27 == 0) goto LAB_03566068;
                        in_stack_00000168._4_4_ = *(undefined4 *)(unaff_x27 + 0x14);
                        lVar12 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,
                                                    (long)&stack0x00000168 + 4);
                        if ((lVar12 != 0) &&
                           (lVar21 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar25 + 0x40)),
                           lVar21 == 0)) goto LAB_035660fc;
                        if (*(uint *)(plVar25 + 3) < 3) goto LAB_035660f8;
                        plVar25[6] = lVar12;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar25 + 6,lVar12);
                        lVar12 = FUN_036d3824();
                        if ((lVar12 != 0) &&
                           (lVar21 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar25 + 0x40)),
                           lVar21 == 0)) goto LAB_035660fc;
                        if (*(uint *)(plVar25 + 3) < 4) goto LAB_035660f8;
                        plVar25[7] = lVar12;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar25 + 7,lVar12);
                        puVar15 = (undefined8 *)OVRPlugin_TrackedKeyboardFlags_TypeInfo;
                      }
                      else {
                        in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar8);
                        lVar12 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0
                                                   );
                        if (plVar25 == (long *)0x0) goto LAB_03566068;
                        if ((lVar12 != 0) &&
                           (lVar21 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar25 + 0x40)),
                           lVar21 == 0)) goto LAB_035660fc;
                        if ((int)plVar25[3] == 0) goto LAB_035660f8;
                        plVar25[4] = lVar12;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar25 + 4,lVar12);
                        if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
                        lVar12 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
                        if ((lVar12 != 0) &&
                           (lVar21 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar25 + 0x40)),
                           lVar21 == 0)) goto LAB_035660fc;
                        if (*(uint *)(plVar25 + 3) < 2) goto LAB_035660f8;
                        plVar25[5] = lVar12;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar25 + 5,lVar12);
                        if (unaff_x27 == 0) goto LAB_03566068;
                        in_stack_00000168._4_4_ = *(undefined4 *)(unaff_x27 + 0x14);
                        lVar12 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,
                                                    (long)&stack0x00000168 + 4);
                        if ((lVar12 != 0) &&
                           (lVar21 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar25 + 0x40)),
                           lVar21 == 0)) goto LAB_035660fc;
                        if (*(uint *)(plVar25 + 3) < 3) goto LAB_035660f8;
                        plVar25[6] = lVar12;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar25 + 6,lVar12);
                        lVar12 = FUN_036d3824();
                        if ((lVar12 != 0) &&
                           (lVar21 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar25 + 0x40)),
                           lVar21 == 0)) goto LAB_035660fc;
                        if (*(uint *)(plVar25 + 3) < 4) goto LAB_035660f8;
                        plVar25[7] = lVar12;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar25 + 7,lVar12);
                        puVar15 = (undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo;
                      }
                      uVar22 = FUN_025be8f4(*puVar15,plVar25,0);
                      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      FUN_0367b470(uVar22);
                      uVar8 = uVar7;
                    }
                    else {
                      uVar8 = uVar7;
                      if (unaff_x27 == 0) goto LAB_03566068;
                    }
                  }
                  if (*(char *)(unaff_x27 + 0x10) == '\x01') {
                    lVar12 = *(long *)(unaff_x27 + 0x18);
                    if (lVar12 == 0) goto LAB_03566068;
                    iVar10 = *(int *)(lVar12 + 0x18);
                    if (iVar10 == 0) {
                      iVar10 = FUN_036d3364(lVar12,0);
                      *(int *)(lVar12 + 0x18) = iVar10;
                    }
                    lVar12 = *in_stack_00000038;
                    if (lVar12 == 0) goto LAB_03566068;
                    iVar11 = *(int *)(lVar12 + 0x18);
                    if (iVar11 == 0) {
                      iVar11 = FUN_036d3364(lVar12,0);
                      *(int *)(lVar12 + 0x18) = iVar11;
                    }
                    if (iVar10 == iVar11) {
                      bVar4 = false;
                    }
                    else {
                      plVar25 = *(long **)(unaff_x27 + 0x18);
                      if (plVar25 == (long *)0x0) {
                        plVar25 = (long *)0x0;
                        *in_stack_00000038 = 0;
                      }
                      else {
                        lVar12 = *(long *)OVRPlugin_OVRP_1_83_0_TypeInfo;
                        bVar3 = *(byte *)(lVar12 + 0x130);
                        if (*(byte *)(*plVar25 + 0x130) < bVar3) {
                          plVar26 = (long *)0x0;
                        }
                        else {
                          plVar26 = plVar25;
                          if (*(long *)(*(long *)(*plVar25 + 200) + (ulong)bVar3 * 8 + -8) != lVar12
                             ) {
                            plVar26 = (long *)0x0;
                          }
                        }
                        *in_stack_00000038 = (long)plVar26;
                        if (*(byte *)(*plVar25 + 0x130) < bVar3) {
                          plVar25 = (long *)0x0;
                        }
                        else if (*(long *)(*(long *)(*plVar25 + 200) + (ulong)bVar3 * 8 + -8) !=
                                 lVar12) {
                          plVar25 = (long *)0x0;
                        }
                      }
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (in_stack_00000038,plVar25);
                      bVar4 = true;
                    }
                  }
                  else {
                    bVar4 = false;
                  }
                  unaff_x28 = 0x178;
                  if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
                  goto LAB_03566068;
                  if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
                  lVar12 = lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
                  plVar25 = (long *)(lVar12 + 0x30);
                  *plVar25 = unaff_x27;
                  *(undefined4 *)(lVar12 + 0x2c) = 0;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (plVar25,unaff_x27);
                  if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
                  goto LAB_03566068;
                  uVar7 = *(uint *)(unaff_x19 + 0x490);
                  if (*(uint *)(lVar12 + 0x18) <= uVar7) goto LAB_035660f8;
                  lVar21 = lVar12 + (long)(int)uVar7 * 0x178;
                  *(short *)(lVar21 + 0x20) = (short)uVar8;
                  *(undefined1 *)(lVar21 + 0x5c) = uStack00000000000001bc;
                  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
                  lVar12 = lVar12 + (long)(int)uVar7 * 0x178;
                  *(undefined8 *)(lVar12 + 0x24) =
                       *(undefined8 *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x24);
                  *(long *)(lVar12 + 0x38) = *in_stack_00000038;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  plVar25 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(char *)(unaff_x27 + 0x10) == '\x02') {
                    unaff_x24 = *(long **)(unaff_x27 + 0x18);
                    if (unaff_x24 == (long *)0x0) goto LAB_03566068;
                    in_x9 = *unaff_x24;
                    in_w11 = (uint)*(byte *)(in_x9 + 0x130);
                    param_1 = *(long *)OVRPlugin_Sizei_TypeInfo;
                    goto code_r0x035651e4;
                  }
                  if (bVar4) {
                    lVar12 = *in_stack_00000038;
                    if (lVar12 == 0) goto LAB_03566068;
                    iVar10 = *(int *)(lVar12 + 0x18);
                    if (iVar10 == 0) {
                      iVar10 = FUN_036d3364(lVar12,0);
                      *(int *)(lVar12 + 0x18) = iVar10;
                    }
                    lVar12 = *(long *)(unaff_x19 + 0xf8);
                    if (lVar12 == 0) goto LAB_03566068;
                    iVar11 = *(int *)(lVar12 + 0x18);
                    if (iVar11 == 0) {
                      iVar11 = FUN_036d3364(lVar12,0);
                      *(int *)(lVar12 + 0x18) = iVar11;
                    }
                    if (iVar10 != iVar11) {
                      uVar19 = FUN_0359778c(0);
                      if ((uVar19 & 1) == 0) {
                        if (*in_stack_00000038 == 0) goto LAB_03566068;
                        uVar22 = *(undefined8 *)(*in_stack_00000038 + 0x20);
                      }
                      else {
                        if (*in_stack_00000038 == 0) goto LAB_03566068;
                        uVar27 = *(undefined8 *)(*in_stack_00000038 + 0x20);
                        uVar22 = *in_stack_00000028;
                        if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        uVar22 = FUN_03594e9c(uVar22,uVar27,0);
                      }
                      *in_stack_00000028 = uVar22;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (in_stack_00000028);
                      lVar12 = *plVar25;
                      uVar22 = *in_stack_00000028;
                      lVar21 = *in_stack_00000038;
                      if (*(int *)(lVar12 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar12 = *plVar25;
                      }
                      uVar9 = FUN_03557fec(uVar22,lVar21,*(long *)(lVar12 + 0xb8),
                                           *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
                      *(undefined4 *)(unaff_x19 + 0x120) = uVar9;
                    }
                  }
                  if (*(long *)(unaff_x27 + 0x20) == 0) goto LAB_03566068;
                  iVar10 = FUN_03776eb8(*(long *)(unaff_x27 + 0x20),0);
                  if (0 < iVar10) {
                    if (*(long *)(unaff_x27 + 0x20) == 0) goto LAB_03566068;
                    lVar12 = *in_stack_00000038;
                    uVar22 = *in_stack_00000028;
                    uVar9 = FUN_03776eb8(*(long *)(unaff_x27 + 0x20),0);
                    if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78(*(long *)OVRPlugin_Sizef_TypeInfo);
                    }
                    uVar22 = FUN_03594928(lVar12,uVar22,uVar9,0);
                    *in_stack_00000028 = uVar22;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (in_stack_00000028,uVar22);
                    lVar12 = *plVar25;
                    uVar22 = *in_stack_00000028;
                    lVar21 = *in_stack_00000038;
                    if (*(int *)(lVar12 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar12 = *plVar25;
                    }
                    uVar9 = FUN_03557fec(uVar22,lVar21,*(long *)(lVar12 + 0xb8),
                                         *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
                    bVar4 = true;
                    *(undefined4 *)(unaff_x19 + 0x120) = uVar9;
                  }
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar19 = FUN_026b63d8(uVar8,0);
                  plVar26 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
                  if ((uVar8 != 0x200b) && ((uVar19 & 1) == 0)) {
                    lVar12 = *plVar25;
                    if (*(int *)(lVar12 + 0xe0) == 0) {
                      thunk_FUN_01a58e78(lVar12);
                      lVar12 = *plVar25;
                    }
                    lVar21 = **(long **)(lVar12 + 0xb8);
                    if (lVar21 == 0) goto LAB_03566068;
                    uVar8 = *(uint *)(unaff_x19 + 0x120);
                    if (*(uint *)(lVar21 + 0x18) <= uVar8) goto LAB_035660f8;
                    if (*(int *)(lVar21 + (long)(int)uVar8 * 0x38 + 0x54) < 0x3fff) {
                      if (*(int *)(lVar12 + 0xe0) == 0) {
                        thunk_FUN_01a58e78(lVar12);
                        lVar21 = **(long **)(*plVar25 + 0xb8);
                        if (lVar21 == 0) goto LAB_03566068;
                        uVar8 = *(uint *)(unaff_x19 + 0x120);
                      }
                    }
                    else {
                      uVar27 = *in_stack_00000028;
                      uVar22 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
                      FUN_0369922c(uVar22,uVar27,0);
                      lVar12 = *plVar25;
                      lVar21 = *in_stack_00000038;
                      if (*(int *)(lVar12 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar12 = *plVar25;
                      }
                      uVar8 = FUN_03557fec(uVar22,lVar21,*(long *)(lVar12 + 0xb8),
                                           *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
                      *(uint *)(unaff_x19 + 0x120) = uVar8;
                      lVar21 = **(long **)(*plVar25 + 0xb8);
                      if (lVar21 == 0) goto LAB_03566068;
                    }
                    if (*(uint *)(lVar21 + 0x18) <= uVar8) goto LAB_035660f8;
                    lVar21 = lVar21 + (long)(int)uVar8 * 0x38;
                    *(int *)(lVar21 + 0x54) = *(int *)(lVar21 + 0x54) + 1;
                  }
                  if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
                  goto LAB_03566068;
                  if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
                  *(undefined8 *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x50) =
                       *in_stack_00000028;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
                  goto LAB_03566068;
                  if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
                  uVar8 = *(uint *)(unaff_x19 + 0x120);
                  *(uint *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x58) = uVar8
                  ;
                  lVar12 = *plVar25;
                  if (*(int *)(lVar12 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar12 = *plVar25;
                    uVar8 = *(uint *)(unaff_x19 + 0x120);
                  }
                  lVar21 = **(long **)(lVar12 + 0xb8);
                  if (lVar21 == 0) goto LAB_03566068;
                  if (*(uint *)(lVar21 + 0x18) <= uVar8) goto LAB_035660f8;
                  *(bool *)(lVar21 + (long)(int)uVar8 * 0x38 + 0x41) = bVar4;
                  if (bVar4) {
                    if (*(int *)(lVar12 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar21 = **(long **)(*plVar25 + 0xb8);
                      if (lVar21 == 0) goto LAB_03566068;
                      uVar8 = *(uint *)(unaff_x19 + 0x120);
                    }
                    if (*(uint *)(lVar21 + 0x18) <= uVar8) goto LAB_035660f8;
                    puVar15 = (undefined8 *)(lVar21 + (long)(int)uVar8 * 0x38 + 0x48);
                    *puVar15 = uVar24;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (puVar15,uVar24);
                    *(undefined8 *)(unaff_x19 + 0x100) = uVar18;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (in_stack_00000038);
                    *(undefined8 *)(unaff_x19 + 0x118) = uVar24;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (in_stack_00000028,uVar24);
                    *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
                  }
                  uVar8 = *(uint *)(unaff_x19 + 0x490);
                  goto LAB_0356571c;
                }
                uVar9 = *(undefined4 *)(unaff_x19 + 0x120);
                uVar19 = FUN_03586568();
                uVar7 = uStack00000000000001b8;
                if ((uVar19 & 1) == 0) goto LAB_035649d0;
                if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
                iVar10 = *(int *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x24);
                if ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0) {
                  *(undefined1 *)(unaff_x19 + 0x26a) = 1;
                }
                puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                plVar25 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                unaff_w22 = uStack00000000000001b8;
              } while (*(int *)(unaff_x19 + 0x644) != 1);
              lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar12 = *(long *)puVar6;
              }
              lVar12 = **(long **)(lVar12 + 0xb8);
              if (lVar12 == 0) goto LAB_03566068;
              if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) break;
              lVar12 = lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
              *(int *)(lVar12 + 0x54) = *(int *)(lVar12 + 0x54) + 1;
              if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
              goto LAB_03566068;
              if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) break;
              uVar2 = *(undefined4 *)(unaff_x19 + 0x6a4);
              lVar12 = lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
              *(short *)(lVar12 + 0x20) = (short)uVar2 + -0x2000;
              *(undefined4 *)(lVar12 + 0x48) = uVar2;
              *(long *)(lVar12 + 0x38) = *in_stack_00000038;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
              goto LAB_03566068;
              if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) break;
              *(undefined8 *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x40) =
                   *(undefined8 *)(unaff_x19 + 0x698);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
              goto LAB_03566068;
              uVar8 = *(uint *)(unaff_x19 + 0x490);
              if (*(uint *)(lVar12 + 0x18) <= uVar8) break;
              *(undefined4 *)(lVar12 + (long)(int)uVar8 * 0x178 + 0x58) =
                   *(undefined4 *)(unaff_x19 + 0x120);
              if ((*(long *)(unaff_x19 + 0x698) == 0) ||
                 (lVar21 = UnityEngine_Material__DisableKeyword(*(long *)(unaff_x19 + 0x698),0),
                 lVar21 == 0)) goto LAB_03566068;
              FUN_02215a88(lVar21,*(undefined4 *)(unaff_x19 + 0x6a4),&stack0x000000e0,
                           *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
              if (*(uint *)(lVar12 + 0x18) <= uVar8) break;
              *(undefined8 *)(lVar12 + (long)(int)uVar8 * 0x178 + 0x30) = in_stack_000000e0;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
              goto LAB_03566068;
              uVar8 = *(uint *)(unaff_x19 + 0x490);
              if (*(uint *)(lVar12 + 0x18) <= uVar8) break;
              uVar2 = *(undefined4 *)(unaff_x19 + 0x644);
              lVar21 = lVar12 + (long)(int)uVar8 * 0x178;
              *(int *)(lVar21 + 0x24) = iVar10;
              *(undefined4 *)(lVar21 + 0x2c) = uVar2;
              if (*(uint *)(unaff_x21 + 0x18) <= uVar7) break;
              *(int *)(lVar12 + (long)(int)uVar8 * 0x178 + 0x28) =
                   (*(int *)(unaff_x21 + (long)(int)uVar7 * 0xc + 0x24) - iVar10) + 1;
              *(undefined4 *)(unaff_x19 + 0x644) = 0;
              *(undefined4 *)(unaff_x19 + 0x120) = uVar9;
              in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
              plVar25 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              unaff_w22 = uVar7;
            } while( true );
          }
          goto LAB_035660f8;
        }
      }
    }
  }
  goto LAB_03566068;
LAB_035658ec:
  do {
    fVar34 = (float)param_3;
    if (uVar28 != 0) {
      lVar16 = *plVar20;
      if (lVar16 == 0) goto LAB_03566068;
      if (*(uint *)(lVar16 + 0x18) <= uVar28) goto LAB_035660f8;
      uVar24 = *(undefined8 *)(lVar16 + uVar28 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar13 = FUN_036d35a8(uVar24,0,0);
      if ((uVar13 & 1) != 0) {
        lVar16 = *plVar25;
        plVar26 = (long *)*plVar20;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar16 = *plVar25;
        }
        lVar16 = **(long **)(lVar16 + 0xb8);
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar16 = lVar16 + lVar21;
        in_stack_00000160 = *(undefined8 *)(lVar16 + -4);
        in_stack_00000158 = *(undefined8 *)(lVar16 + -0xc);
        in_stack_00000150 = *(undefined8 *)(lVar16 + -0x14);
        in_stack_00000148 = *(undefined8 *)(lVar16 + -0x1c);
        uVar24 = *(undefined8 *)(lVar16 + -0x24);
        in_stack_00000138 = *(undefined8 *)(lVar16 + -0x2c);
        in_stack_00000130 = *(undefined8 *)(lVar16 + -0x34);
        in_stack_00000140 = uVar24;
        lVar16 = FUN_0359e964();
        fVar34 = (float)uVar24;
        if (plVar26 == (long *)0x0) goto LAB_03566068;
        if ((lVar16 != 0) &&
           (lVar14 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar26 + 0x40)), lVar14 == 0)) {
LAB_035660fc:
          uVar24 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar24,0);
        }
        if (*(uint *)(plVar26 + 3) <= uVar28) goto LAB_035660f8;
        plVar26[uVar28 + 4] = lVar16;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long)plVar26 + lVar30,lVar16);
        plVar25 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if ((*unaff_x20 == 0) || (lVar16 = *(long *)(*unaff_x20 + 0x60), lVar16 == 0))
        goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar28) goto LAB_035660f8;
        puVar15 = (undefined8 *)(lVar16 + lVar12 + 0x30);
        *puVar15 = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar15,0);
      }
      if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_03566068;
      fVar31 = (float)FUN_036dba50(*(long *)(unaff_x19 + 0x380),0);
      lVar16 = *plVar20;
      if (lVar16 == 0) goto LAB_03566068;
      if (*(uint *)(lVar16 + 0x18) <= uVar28) goto LAB_035660f8;
      lVar16 = *(long *)(lVar16 + uVar28 * 8 + 0x20);
      if ((lVar16 == 0) || (fVar33 = fVar34, lVar16 = FUN_037b4844(lVar16,0), lVar16 == 0))
      goto LAB_03566068;
      fVar32 = (float)FUN_036dba50(lVar16,0);
      fVar34 = (fVar34 - fVar33) * (fVar34 - fVar33);
      param_3 = (ulong)(uint)fVar34;
      if (fVar5 <= (fVar31 - fVar32) * (fVar31 - fVar32) + fVar34) {
        lVar16 = *plVar20;
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar16 = *(long *)(lVar16 + uVar28 * 8 + 0x20);
        if (lVar16 == 0) goto LAB_03566068;
        lVar16 = FUN_037b4844(lVar16,0);
        if ((*(long *)(unaff_x19 + 0x380) == 0) ||
           (FUN_036dba50(*(long *)(unaff_x19 + 0x380),0), lVar16 == 0)) goto LAB_03566068;
        FUN_036dbae0(lVar16,0);
      }
      lVar16 = *plVar20;
      if (lVar16 == 0) goto LAB_03566068;
      if (*(uint *)(lVar16 + 0x18) <= uVar28) goto LAB_035660f8;
      lVar16 = *(long *)(lVar16 + uVar28 * 8 + 0x20);
      if (lVar16 == 0) goto LAB_03566068;
      uVar24 = *(undefined8 *)(lVar16 + 0xf0);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar13 = FUN_036d35a8(uVar24,0,0);
      if ((uVar13 & 1) == 0) {
        lVar16 = *plVar20;
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar16 = *(long *)(lVar16 + uVar28 * 8 + 0x20);
        if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0xf0), lVar16 == 0)) goto LAB_03566068;
        iVar10 = FUN_036d3364(lVar16,0);
        lVar16 = *plVar25;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar16);
          lVar16 = *plVar25;
        }
        lVar16 = **(long **)(lVar16 + 0xb8);
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar16 = *(long *)(lVar16 + lVar21 + -0x1c);
        if (lVar16 == 0) goto LAB_03566068;
        iVar11 = FUN_036d3364(lVar16,0);
        if (iVar10 != iVar11) goto LAB_03565b98;
      }
      else {
LAB_03565b98:
        lVar16 = *plVar20;
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar14 = *plVar25;
        lVar16 = *(long *)(lVar16 + uVar28 * 8 + 0x20);
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar14 = *plVar25;
        }
        lVar14 = **(long **)(lVar14 + 0xb8);
        if (lVar14 == 0) goto LAB_03566068;
        if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_035660f8;
        if (lVar16 == 0) goto LAB_03566068;
        thunk_FUN_0359e5ac(lVar16,*(undefined8 *)(lVar14 + lVar21 + -0x1c),0);
        lVar16 = *plVar20;
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar14 = **(long **)(*plVar25 + 0xb8);
        if (lVar14 == 0) goto LAB_03566068;
        if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar16 = *(long *)(lVar16 + uVar28 * 8 + 0x20);
        if (lVar16 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar16 + 0xd8) = *(undefined8 *)(lVar14 + lVar21 + -0x2c);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar16 = *plVar20;
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar14 = **(long **)(*plVar25 + 0xb8);
        if (lVar14 == 0) goto LAB_03566068;
        if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar16 = *(long *)(lVar16 + uVar28 * 8 + 0x20);
        if (lVar16 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar16 + 0xe0) = *(undefined8 *)(lVar14 + lVar21 + -0x24);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      lVar16 = *plVar25;
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar16 = *plVar25;
      }
      lVar14 = **(long **)(lVar16 + 0xb8);
      if (lVar14 == 0) goto LAB_03566068;
      if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_035660f8;
      if (*(char *)(lVar14 + lVar21 + -0x13) != '\0') {
        lVar17 = *plVar20;
        if (lVar17 == 0) goto LAB_03566068;
        if (*(uint *)(lVar17 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar17 = *(long *)(lVar17 + uVar28 * 8 + 0x20);
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar14 = **(long **)(*plVar25 + 0xb8);
          if (lVar14 == 0) goto LAB_03566068;
        }
        if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_035660f8;
        if (lVar17 == 0) goto LAB_03566068;
        FUN_0359e608(lVar17,*(undefined8 *)(lVar14 + lVar21 + -0x1c),0);
        lVar16 = *plVar20;
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar14 = **(long **)(*plVar25 + 0xb8);
        if (lVar14 == 0) goto LAB_03566068;
        if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar16 = *(long *)(lVar16 + uVar28 * 8 + 0x20);
        if (lVar16 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar16 + 0x100) = *(undefined8 *)(lVar14 + lVar21 + -0xc);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar16 + 0x100);
      }
    }
    lVar16 = *plVar25;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar16 = *plVar25;
    }
    lVar16 = **(long **)(lVar16 + 0xb8);
    if (lVar16 == 0) goto LAB_03566068;
    if (*(uint *)(lVar16 + 0x18) <= uVar28) goto LAB_035660f8;
    if ((*unaff_x20 == 0) || (lVar14 = *(long *)(*unaff_x20 + 0x60), lVar14 == 0))
    goto LAB_03566068;
    if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_035660f8;
    lVar17 = *(long *)(lVar14 + lVar12 + 0x30);
    iVar10 = *(int *)(lVar16 + lVar21);
    if (lVar17 == 0) {
      if (uVar28 == 0) {
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
        FUN_03595600(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar10 + 1,0);
        memcpy(&stack0x00000090,&stack0x000000e0,0x50);
        if (*(int *)(lVar14 + 0x18) == 0) goto LAB_035660f8;
        memcpy((void *)(lVar14 + lVar12 + 0x20),&stack0x00000090,0x50);
        __dest = (void *)(lVar14 + 0x20);
      }
      else {
        lVar16 = *plVar20;
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar16 = *(long *)(lVar16 + uVar28 * 8 + 0x20);
        if (lVar16 == 0) goto LAB_03566068;
        uVar24 = UnityEngine_Material__GetColorArray(lVar16,0);
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
        FUN_03595600(&stack0x000000e0,uVar24,iVar10 + 1,0);
        memcpy(&stack0x00000040,&stack0x000000e0,0x50);
        if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_035660f8;
        __dest = (void *)(lVar14 + lVar12 + 0x20);
        memcpy(__dest,&stack0x00000040,0x50);
      }
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(__dest,0);
    }
    else {
      iVar11 = *(int *)(lVar17 + 0x18);
      if (iVar11 < iVar10 * 4) {
LAB_03565e08:
        if (iVar10 < 0x401) {
          iVar10 = FUN_036c1d60(iVar10 + 1,0);
        }
        else {
          iVar10 = iVar10 + 0x100;
        }
        if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_03595b9c(lVar14 + lVar12 + 0x20,iVar10,0);
      }
      else if ((0 < iVar10) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
        iVar1 = iVar11 + 3;
        if (-1 < iVar11) {
          iVar1 = iVar11;
        }
        if (0x100 < (iVar1 >> 2) - iVar10) goto LAB_03565e08;
      }
    }
    plVar25 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if ((*unaff_x20 == 0) || (lVar16 = *(long *)(*unaff_x20 + 0x60), lVar16 == 0))
    goto LAB_03566068;
    lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar14 = *plVar25;
    }
    lVar14 = **(long **)(lVar14 + 0xb8);
    if (lVar14 == 0) goto LAB_03566068;
    if ((*(uint *)(lVar14 + 0x18) <= uVar28) || (*(uint *)(lVar16 + 0x18) <= uVar28))
    goto LAB_035660f8;
    *(undefined8 *)(lVar16 + lVar12 + 0x68) = *(undefined8 *)(lVar14 + lVar21 + -0x1c);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    uVar28 = uVar28 + 1;
    lVar12 = lVar12 + 0x50;
    lVar21 = lVar21 + 0x38;
    lVar30 = lVar30 + 8;
  } while (uVar8 != uVar28);
LAB_03565fb8:
  lVar12 = *plVar20;
  if (lVar12 != 0) {
    lVar21 = (-(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3) + 0x20;
    do {
      uVar8 = (uint)uVar19;
      if ((int)*(uint *)(lVar12 + 0x18) <= (int)uVar8) {
LAB_03565748:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar8) {
LAB_035660f8:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar24 = *(undefined8 *)(lVar12 + lVar21);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_036cee6c(uVar24,0,0);
      if ((uVar19 & 1) == 0) goto LAB_03565748;
      if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x60), lVar12 == 0)) break;
      if ((int)uVar8 < *(int *)(lVar12 + 0x18)) {
        lVar12 = *plVar20;
        if (lVar12 == 0) break;
        if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_035660f8;
        if ((*(long *)(lVar12 + lVar21) == 0) ||
           (lVar12 = FUN_037b514c(*(long *)(lVar12 + lVar21),0), lVar12 == 0)) break;
        FUN_0390f3a4(lVar12,0,0);
      }
      lVar12 = *plVar20;
      uVar19 = (ulong)(uVar8 + 1);
      lVar21 = lVar21 + 8;
    } while (lVar12 != 0);
  }
LAB_03566068:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


