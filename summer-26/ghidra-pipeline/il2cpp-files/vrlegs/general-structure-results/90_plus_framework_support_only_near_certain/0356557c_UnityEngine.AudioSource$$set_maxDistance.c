/*
FUNCTION_NAME: UnityEngine.AudioSource$$set_maxDistance
ENTRY_POINT: 0356557c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 147
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;weak_pose_support;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;weak_vector_component_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


undefined4 UnityEngine_AudioSource__set_maxDistance(undefined1 param_1 [16],ulong param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  float fVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  void *__dest;
  long lVar15;
  long lVar16;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar17;
  uint unaff_w22;
  long *plVar18;
  long lVar19;
  long *plVar20;
  undefined8 uVar21;
  long *unaff_x24;
  undefined8 uVar22;
  long *unaff_x25;
  undefined8 unaff_x26;
  ulong uVar23;
  long *unaff_x27;
  long unaff_x28;
  int unaff_w29;
  uint *puVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
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
  
code_r0x0356557c:
  lVar11 = *unaff_x24;
  lVar19 = *unaff_x25;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar11 = *unaff_x24;
  }
  uVar7 = FUN_03557fec(unaff_x26,lVar19,*(long *)(lVar11 + 0xb8),
                       *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8));
  *(uint *)(unaff_x19 + 0x120) = uVar7;
  lVar11 = **(long **)(*unaff_x24 + 0xb8);
  if (lVar11 == 0) goto LAB_03566068;
LAB_035655e4:
  if (uVar7 < *(uint *)(lVar11 + 0x18)) {
    lVar11 = lVar11 + (long)(int)uVar7 * 0x38;
    *(int *)(lVar11 + 0x54) = *(int *)(lVar11 + 0x54) + 1;
UnityEngine_AudioSource__set_rolloffMode:
    if ((*unaff_x20 != 0) && (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 != 0)) {
      if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar11 + 0x18)) {
        *(undefined8 *)(lVar11 + (int)*(uint *)(unaff_x19 + 0x490) * unaff_x28 + 0x50) =
             *in_stack_00000028;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*unaff_x20 != 0) && (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 != 0)) {
          if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar11 + 0x18)) {
            uVar7 = *(uint *)(unaff_x19 + 0x120);
            *(uint *)(lVar11 + (int)*(uint *)(unaff_x19 + 0x490) * unaff_x28 + 0x58) = uVar7;
            lVar11 = *unaff_x24;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar11 = *unaff_x24;
              uVar7 = *(uint *)(unaff_x19 + 0x120);
            }
            lVar19 = **(long **)(lVar11 + 0xb8);
            if (lVar19 == 0) goto LAB_03566068;
            if (*(uint *)(lVar19 + 0x18) <= uVar7) goto LAB_035660f8;
            *(char *)(lVar19 + (long)(int)uVar7 * 0x38 + 0x41) = (char)unaff_w29;
            if (unaff_w29 != 0) {
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar19 = **(long **)(*unaff_x24 + 0xb8);
                if (lVar19 == 0) goto LAB_03566068;
                uVar7 = *(uint *)(unaff_x19 + 0x120);
              }
              if (*(uint *)(lVar19 + 0x18) <= uVar7) goto LAB_035660f8;
              puVar12 = (undefined8 *)(lVar19 + (long)(int)uVar7 * 0x38 + 0x48);
              *puVar12 = in_stack_00000018;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (puVar12,in_stack_00000018);
              *(undefined8 *)(unaff_x19 + 0x100) = in_stack_00000010;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25);
              *(undefined8 *)(unaff_x19 + 0x118) = in_stack_00000018;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (in_stack_00000028,in_stack_00000018);
              *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
            }
            uVar7 = *(uint *)(unaff_x19 + 0x490);
LAB_0356571c:
            do {
              *(uint *)(unaff_x19 + 0x490) = uVar7 + 1;
              do {
                uVar7 = *(uint *)(unaff_x21 + 0x18);
                unaff_w22 = unaff_w22 + 1;
                if ((int)uVar7 <= (int)unaff_w22) {
LAB_0356573c:
                  if (*(char *)(unaff_x19 + 0x3f5) != '\0') {
                    *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
                    goto LAB_03565748;
                  }
                  lVar11 = *unaff_x20;
                  if (lVar11 == 0) goto LAB_03566068;
                  *(int *)(lVar11 + 0x1c) = in_stack_00000020._4_4_;
                  lVar19 = *unaff_x24;
                  if (*(int *)(lVar19 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar19 = *unaff_x24;
                  }
                  lVar19 = *(long *)(*(long *)(lVar19 + 0xb8) + 8);
                  if (lVar19 == 0) goto LAB_03566068;
                  uVar7 = FUN_0219b384(lVar19,*(undefined8 *)PTR_DAT_03ceb270);
                  *(uint *)(lVar11 + 0x34) = uVar7;
                  if (*unaff_x20 == 0) goto LAB_03566068;
                  plVar18 = (long *)(*unaff_x20 + 0x60);
                  lVar11 = *plVar18;
                  if (lVar11 == 0) goto LAB_03566068;
                  uVar17 = (ulong)uVar7;
                  if (*(int *)(lVar11 + 0x18) < (int)uVar7) {
                    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    FUN_01ff02b8(plVar18,uVar17,0,*(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo
                                );
                  }
                  if (*(long *)(unaff_x19 + 0x708) == 0) goto LAB_03566068;
                  plVar18 = (long *)(unaff_x19 + 0x708);
                  if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar7) {
                    uVar8 = FUN_036c1d60(uVar7 + 1,0);
                    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                      thunk_FUN_01a58e78(*unaff_x27);
                    }
                    FUN_01ff025c(plVar18,uVar8,
                                 *(undefined8 *)OVRSystemPerfMetrics_PerfMetrics_TypeInfo);
                  }
                  if (*(char *)(unaff_x19 + 0x321) != '\0') {
                    if (*unaff_x20 == 0) goto LAB_03566068;
                    plVar20 = (long *)(*unaff_x20 + 0x38);
                    lVar11 = *plVar20;
                    if (lVar11 == 0) goto LAB_03566068;
                    iVar9 = *(int *)(unaff_x19 + 0x490);
                    if (0x100 < *(int *)(lVar11 + 0x18) - iVar9) {
                      iVar10 = 0x100;
                      if (0x100 < iVar9 + 1) {
                        iVar10 = iVar9 + 1;
                      }
                      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      FUN_01ff02b8(plVar20,iVar10,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
                      unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    }
                  }
                  fVar4 = DAT_00d38798;
                  if ((int)uVar7 < 1) goto LAB_03565fb8;
                  lVar11 = 0;
                  uVar23 = 0;
                  lVar19 = 0x54;
                  lVar25 = 0x20;
                  goto LAB_035658ec;
                }
                if (uVar7 <= unaff_w22) goto LAB_035660f8;
                puVar24 = (uint *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x20);
                if (*puVar24 == 0) goto LAB_0356573c;
                if (*unaff_x20 == 0) goto LAB_03566068;
                plVar18 = (long *)(*unaff_x20 + 0x38);
                lVar11 = *plVar18;
                iVar9 = *(int *)(unaff_x19 + 0x490);
                if ((lVar11 == 0) || (*(int *)(lVar11 + 0x18) <= iVar9)) {
                  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  FUN_01ff02b8(plVar18,iVar9 + 1,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
                  uVar7 = *(uint *)(unaff_x21 + 0x18);
                }
                if (uVar7 <= unaff_w22) goto LAB_035660f8;
                uVar7 = *puVar24;
                if ((uVar7 != 0x3c) || (*(char *)(unaff_x19 + 0x302) == '\0')) {
LAB_035649d0:
                  uStack00000000000001bc = 0;
                  in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x100);
                  in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x118);
                  in_stack_00000030._4_4_ = *(undefined4 *)(unaff_x19 + 0x120);
                  if (*(int *)(unaff_x19 + 0x644) != 0) goto LAB_03564aac;
                  uVar6 = *(uint *)(unaff_x19 + 0x25c);
                  if ((uVar6 >> 4 & 1) == 0) {
                    if ((uVar6 >> 3 & 1) == 0) {
                      if ((uVar6 >> 5 & 1) != 0) goto LAB_03564a00;
                    }
                    else {
                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar17 = FUN_026b8070(uVar7,0);
                      if ((uVar17 & 1) != 0) {
                        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        uVar7 = FUN_026b8594(uVar7,0);
                        goto LAB_03564aa8;
                      }
                    }
                  }
                  else {
LAB_03564a00:
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar17 = FUN_026b812c(uVar7,0);
                    if ((uVar17 & 1) != 0) {
                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar7 = FUN_026b8410(uVar7,0);
LAB_03564aa8:
                      uVar7 = uVar7 & 0xffff;
                    }
                  }
LAB_03564aac:
                  lVar11 = FUN_03591848();
                  if (lVar11 == 0) {
                    iVar9 = FUN_035975f8();
                    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
                    if (iVar9 == 0) {
                      uVar6 = 0x25a1;
                    }
                    else {
                      uVar6 = FUN_035975f8(0);
                    }
                    *puVar24 = uVar6;
                    uVar21 = *(undefined8 *)(unaff_x19 + 0x100);
                    uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
                    uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                    if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    lVar11 = FUN_03570fc4(uVar6,uVar21,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
                    if (lVar11 == 0) {
                      lVar11 = FUN_03597770();
                      if (lVar11 != 0) {
                        lVar11 = FUN_03597770(0);
                        if (lVar11 == 0) goto LAB_03566068;
                        if (0 < *(int *)(lVar11 + 0x18)) {
                          uVar22 = *(undefined8 *)(unaff_x19 + 0x100);
                          uVar21 = FUN_03597770(0);
                          uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
                          uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                          if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                            thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                          }
                          lVar11 = FUN_035714e4(uVar6,uVar22,uVar21,1,uVar8,uVar2,
                                                (long)&stack0x000001b8 + 4,0);
                          if (lVar11 != 0) goto LAB_03564b5c;
                        }
                      }
                      uVar21 = FUN_03597650(0);
                      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                      }
                      uVar17 = FUN_036cee6c(uVar21,0,0);
                      if ((uVar17 & 1) != 0) {
                        uVar21 = FUN_03597650(0);
                        uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
                        uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                        if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                        }
                        lVar11 = FUN_03570fc4(uVar6,uVar21,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,
                                              0);
                        if (lVar11 != 0) goto LAB_03564b5c;
                      }
                      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
                      *puVar24 = 0x20;
                      uVar21 = *(undefined8 *)(unaff_x19 + 0x100);
                      uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
                      uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                      if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar6 = 0x20;
                      lVar11 = FUN_03570fc4(0x20,uVar21,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
                      if (lVar11 == 0) {
                        if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
                        *puVar24 = 3;
                        uVar21 = *(undefined8 *)(unaff_x19 + 0x100);
                        uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
                        uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                        if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        uVar6 = 3;
                        lVar11 = FUN_03570fc4(3,uVar21,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
                      }
                    }
LAB_03564b5c:
                    uVar17 = FUN_03597634(0);
                    if ((uVar17 & 1) == 0) {
                      plVar18 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,4);
                      if ((int)uVar7 < 0x10000) {
                        in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar7);
                        lVar19 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0
                                                   );
                        if (plVar18 == (long *)0x0) goto LAB_03566068;
                        if ((lVar19 != 0) &&
                           (lVar25 = thunk_FUN_01a89d6c(lVar19,*(undefined8 *)(*plVar18 + 0x40)),
                           lVar25 == 0)) goto LAB_035660fc;
                        if ((int)plVar18[3] == 0) goto LAB_035660f8;
                        plVar18[4] = lVar19;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar18 + 4,lVar19);
                        if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
                        lVar19 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
                        if ((lVar19 != 0) &&
                           (lVar25 = thunk_FUN_01a89d6c(lVar19,*(undefined8 *)(*plVar18 + 0x40)),
                           lVar25 == 0)) goto LAB_035660fc;
                        if (*(uint *)(plVar18 + 3) < 2) goto LAB_035660f8;
                        plVar18[5] = lVar19;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar18 + 5,lVar19);
                        if (lVar11 == 0) goto LAB_03566068;
                        in_stack_00000168._4_4_ = *(undefined4 *)(lVar11 + 0x14);
                        lVar19 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,
                                                    (long)&stack0x00000168 + 4);
                        if ((lVar19 != 0) &&
                           (lVar25 = thunk_FUN_01a89d6c(lVar19,*(undefined8 *)(*plVar18 + 0x40)),
                           lVar25 == 0)) goto LAB_035660fc;
                        if (*(uint *)(plVar18 + 3) < 3) goto LAB_035660f8;
                        plVar18[6] = lVar19;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar18 + 6,lVar19);
                        lVar19 = FUN_036d3824();
                        if ((lVar19 != 0) &&
                           (lVar25 = thunk_FUN_01a89d6c(lVar19,*(undefined8 *)(*plVar18 + 0x40)),
                           lVar25 == 0)) goto LAB_035660fc;
                        if (*(uint *)(plVar18 + 3) < 4) goto LAB_035660f8;
                        plVar18[7] = lVar19;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar18 + 7,lVar19);
                        puVar12 = (undefined8 *)OVRPlugin_TrackedKeyboardFlags_TypeInfo;
                      }
                      else {
                        in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar7);
                        lVar19 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0
                                                   );
                        if (plVar18 == (long *)0x0) goto LAB_03566068;
                        if ((lVar19 != 0) &&
                           (lVar25 = thunk_FUN_01a89d6c(lVar19,*(undefined8 *)(*plVar18 + 0x40)),
                           lVar25 == 0)) goto LAB_035660fc;
                        if ((int)plVar18[3] == 0) goto LAB_035660f8;
                        plVar18[4] = lVar19;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar18 + 4,lVar19);
                        if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
                        lVar19 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
                        if ((lVar19 != 0) &&
                           (lVar25 = thunk_FUN_01a89d6c(lVar19,*(undefined8 *)(*plVar18 + 0x40)),
                           lVar25 == 0)) goto LAB_035660fc;
                        if (*(uint *)(plVar18 + 3) < 2) goto LAB_035660f8;
                        plVar18[5] = lVar19;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar18 + 5,lVar19);
                        if (lVar11 == 0) goto LAB_03566068;
                        in_stack_00000168._4_4_ = *(undefined4 *)(lVar11 + 0x14);
                        lVar19 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,
                                                    (long)&stack0x00000168 + 4);
                        if ((lVar19 != 0) &&
                           (lVar25 = thunk_FUN_01a89d6c(lVar19,*(undefined8 *)(*plVar18 + 0x40)),
                           lVar25 == 0)) goto LAB_035660fc;
                        if (*(uint *)(plVar18 + 3) < 3) goto LAB_035660f8;
                        plVar18[6] = lVar19;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar18 + 6,lVar19);
                        lVar19 = FUN_036d3824();
                        if ((lVar19 != 0) &&
                           (lVar25 = thunk_FUN_01a89d6c(lVar19,*(undefined8 *)(*plVar18 + 0x40)),
                           lVar25 == 0)) goto LAB_035660fc;
                        if (*(uint *)(plVar18 + 3) < 4) goto LAB_035660f8;
                        plVar18[7] = lVar19;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar18 + 7,lVar19);
                        puVar12 = (undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo;
                      }
                      uVar21 = FUN_025be8f4(*puVar12,plVar18,0);
                      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      FUN_0367b470(uVar21);
                      unaff_x25 = in_stack_00000038;
                      uVar7 = uVar6;
                    }
                    else {
                      unaff_x25 = in_stack_00000038;
                      uVar7 = uVar6;
                      if (lVar11 == 0) goto LAB_03566068;
                    }
                  }
                  if (*(char *)(lVar11 + 0x10) == '\x01') {
                    lVar19 = *(long *)(lVar11 + 0x18);
                    if (lVar19 == 0) goto LAB_03566068;
                    iVar9 = *(int *)(lVar19 + 0x18);
                    if (iVar9 == 0) {
                      iVar9 = FUN_036d3364(lVar19,0);
                      *(int *)(lVar19 + 0x18) = iVar9;
                    }
                    lVar19 = *unaff_x25;
                    if (lVar19 == 0) goto LAB_03566068;
                    iVar10 = *(int *)(lVar19 + 0x18);
                    if (iVar10 == 0) {
                      iVar10 = FUN_036d3364(lVar19,0);
                      *(int *)(lVar19 + 0x18) = iVar10;
                    }
                    if (iVar9 == iVar10) {
                      unaff_w29 = 0;
                    }
                    else {
                      plVar18 = *(long **)(lVar11 + 0x18);
                      if (plVar18 == (long *)0x0) {
                        plVar18 = (long *)0x0;
                        *unaff_x25 = 0;
                      }
                      else {
                        lVar19 = *(long *)OVRPlugin_OVRP_1_83_0_TypeInfo;
                        bVar3 = *(byte *)(lVar19 + 0x130);
                        if (*(byte *)(*plVar18 + 0x130) < bVar3) {
                          plVar20 = (long *)0x0;
                        }
                        else {
                          plVar20 = plVar18;
                          if (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar3 * 8 + -8) != lVar19
                             ) {
                            plVar20 = (long *)0x0;
                          }
                        }
                        *unaff_x25 = (long)plVar20;
                        if (*(byte *)(*plVar18 + 0x130) < bVar3) {
                          plVar18 = (long *)0x0;
                        }
                        else if (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar3 * 8 + -8) !=
                                 lVar19) {
                          plVar18 = (long *)0x0;
                        }
                      }
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (unaff_x25,plVar18);
                      unaff_w29 = 1;
                    }
                  }
                  else {
                    unaff_w29 = 0;
                  }
                  if ((*unaff_x20 == 0) || (lVar19 = *(long *)(*unaff_x20 + 0x38), lVar19 == 0))
                  goto LAB_03566068;
                  if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
                  lVar19 = lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
                  plVar18 = (long *)(lVar19 + 0x30);
                  *plVar18 = lVar11;
                  *(undefined4 *)(lVar19 + 0x2c) = 0;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar18,lVar11);
                  if ((*unaff_x20 == 0) || (lVar19 = *(long *)(*unaff_x20 + 0x38), lVar19 == 0))
                  goto LAB_03566068;
                  uVar6 = *(uint *)(unaff_x19 + 0x490);
                  if (*(uint *)(lVar19 + 0x18) <= uVar6) goto LAB_035660f8;
                  lVar25 = lVar19 + (long)(int)uVar6 * 0x178;
                  *(short *)(lVar25 + 0x20) = (short)uVar7;
                  *(undefined1 *)(lVar25 + 0x5c) = uStack00000000000001bc;
                  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
                  lVar19 = lVar19 + (long)(int)uVar6 * 0x178;
                  *(undefined8 *)(lVar19 + 0x24) =
                       *(undefined8 *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x24);
                  *(long *)(lVar19 + 0x38) = *unaff_x25;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(char *)(lVar11 + 0x10) == '\x02') {
                    plVar18 = *(long **)(lVar11 + 0x18);
                    if (plVar18 == (long *)0x0) goto LAB_03566068;
                    bVar3 = *(byte *)(*(long *)OVRPlugin_Sizei_TypeInfo + 0x130);
                    if ((*(byte *)(*plVar18 + 0x130) < bVar3) ||
                       (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar3 * 8 + -8) !=
                        *(long *)OVRPlugin_Sizei_TypeInfo)) goto LAB_03566068;
                    lVar25 = plVar18[4];
                    lVar19 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    if (*(int *)(lVar19 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar19 = *unaff_x24;
                    }
                    uVar7 = FUN_03558224(lVar25,plVar18,*(long *)(lVar19 + 0xb8),
                                         *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 8));
                    *(uint *)(unaff_x19 + 0x120) = uVar7;
                    lVar19 = **(long **)(*unaff_x24 + 0xb8);
                    if (lVar19 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar19 + 0x18) <= uVar7) goto LAB_035660f8;
                    lVar19 = lVar19 + (long)(int)uVar7 * 0x38;
                    *(int *)(lVar19 + 0x54) = *(int *)(lVar19 + 0x54) + 1;
                    if ((*unaff_x20 == 0) || (lVar19 = *(long *)(*unaff_x20 + 0x38), lVar19 == 0))
                    goto LAB_03566068;
                    if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
                    lVar19 = lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
                    *(undefined4 *)(lVar19 + 0x2c) = 1;
                    uVar8 = *(undefined4 *)(unaff_x19 + 0x120);
                    *(undefined8 *)(lVar19 + 0x40) = plVar18;
                    *(undefined4 *)(lVar19 + 0x58) = uVar8;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              ((undefined8 *)(lVar19 + 0x40),plVar18);
                    unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                       (lVar19 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar19 == 0))
                    goto LAB_03566068;
                    uVar7 = *(uint *)(unaff_x19 + 0x490);
                    if (*(uint *)(lVar19 + 0x18) <= uVar7) goto LAB_035660f8;
                    *(undefined4 *)(lVar19 + (long)(int)uVar7 * 0x178 + 0x48) =
                         *(undefined4 *)(lVar11 + 0x28);
                    *(undefined4 *)(unaff_x19 + 0x644) = 0;
                    *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
                    in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
                    unaff_x25 = in_stack_00000038;
                    unaff_x27 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
                    goto LAB_0356571c;
                  }
                  if (unaff_w29 != 0) {
                    lVar19 = *unaff_x25;
                    if (lVar19 == 0) goto LAB_03566068;
                    iVar9 = *(int *)(lVar19 + 0x18);
                    if (iVar9 == 0) {
                      iVar9 = FUN_036d3364(lVar19,0);
                      *(int *)(lVar19 + 0x18) = iVar9;
                    }
                    lVar19 = *(long *)(unaff_x19 + 0xf8);
                    if (lVar19 == 0) goto LAB_03566068;
                    iVar10 = *(int *)(lVar19 + 0x18);
                    if (iVar10 == 0) {
                      iVar10 = FUN_036d3364(lVar19,0);
                      *(int *)(lVar19 + 0x18) = iVar10;
                    }
                    if (iVar9 != iVar10) {
                      uVar17 = FUN_0359778c(0);
                      if ((uVar17 & 1) == 0) {
                        if (*unaff_x25 == 0) goto LAB_03566068;
                        uVar21 = *(undefined8 *)(*unaff_x25 + 0x20);
                      }
                      else {
                        if (*unaff_x25 == 0) goto LAB_03566068;
                        uVar22 = *(undefined8 *)(*unaff_x25 + 0x20);
                        uVar21 = *in_stack_00000028;
                        if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        uVar21 = FUN_03594e9c(uVar21,uVar22,0);
                        unaff_x25 = in_stack_00000038;
                      }
                      *in_stack_00000028 = uVar21;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (in_stack_00000028);
                      lVar19 = *unaff_x24;
                      uVar21 = *in_stack_00000028;
                      lVar25 = *unaff_x25;
                      if (*(int *)(lVar19 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar19 = *unaff_x24;
                      }
                      uVar8 = FUN_03557fec(uVar21,lVar25,*(long *)(lVar19 + 0xb8),
                                           *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 8));
                      *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
                      unaff_x25 = in_stack_00000038;
                    }
                  }
                  if (*(long *)(lVar11 + 0x20) == 0) goto LAB_03566068;
                  iVar9 = FUN_03776eb8(*(long *)(lVar11 + 0x20),0);
                  if (0 < iVar9) {
                    if (*(long *)(lVar11 + 0x20) == 0) goto LAB_03566068;
                    lVar19 = *unaff_x25;
                    uVar21 = *in_stack_00000028;
                    uVar8 = FUN_03776eb8(*(long *)(lVar11 + 0x20),0);
                    if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78(*(long *)OVRPlugin_Sizef_TypeInfo);
                    }
                    uVar21 = FUN_03594928(lVar19,uVar21,uVar8,0);
                    *in_stack_00000028 = uVar21;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (in_stack_00000028,uVar21);
                    lVar11 = *unaff_x24;
                    uVar21 = *in_stack_00000028;
                    lVar19 = *unaff_x25;
                    if (*(int *)(lVar11 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar11 = *unaff_x24;
                    }
                    uVar8 = FUN_03557fec(uVar21,lVar19,*(long *)(lVar11 + 0xb8),
                                         *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8));
                    unaff_w29 = 1;
                    *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
                    unaff_x25 = in_stack_00000038;
                  }
                  unaff_x28 = 0x178;
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar17 = FUN_026b63d8(uVar7,0);
                  unaff_x27 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
                  if ((uVar7 == 0x200b) || ((uVar17 & 1) != 0))
                  goto UnityEngine_AudioSource__set_rolloffMode;
                  lVar19 = *unaff_x24;
                  if (*(int *)(lVar19 + 0xe0) == 0) {
                    thunk_FUN_01a58e78(lVar19);
                    lVar19 = *unaff_x24;
                  }
                  lVar11 = **(long **)(lVar19 + 0xb8);
                  if (lVar11 == 0) goto LAB_03566068;
                  uVar7 = *(uint *)(unaff_x19 + 0x120);
                  if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_035660f8;
                  if (0x3ffe < *(int *)(lVar11 + (long)(int)uVar7 * 0x38 + 0x54)) {
                    uVar21 = *in_stack_00000028;
                    unaff_x26 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
                    FUN_0369922c(unaff_x26,uVar21,0);
                    goto code_r0x0356557c;
                  }
                  if (*(int *)(lVar19 + 0xe0) != 0) goto LAB_035655e4;
                  thunk_FUN_01a58e78(lVar19);
                  lVar11 = **(long **)(*unaff_x24 + 0xb8);
                  if (lVar11 == 0) goto LAB_03566068;
                  uVar7 = *(uint *)(unaff_x19 + 0x120);
                  goto LAB_035655e4;
                }
                uVar8 = *(undefined4 *)(unaff_x19 + 0x120);
                uVar17 = FUN_03586568();
                uVar6 = uStack00000000000001b8;
                if ((uVar17 & 1) == 0) goto LAB_035649d0;
                if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
                iVar9 = *(int *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x24);
                if ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0) {
                  *(undefined1 *)(unaff_x19 + 0x26a) = 1;
                }
                puVar5 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                unaff_w22 = uStack00000000000001b8;
              } while (*(int *)(unaff_x19 + 0x644) != 1);
              lVar11 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar11 = *(long *)puVar5;
              }
              lVar11 = **(long **)(lVar11 + 0xb8);
              if (lVar11 == 0) goto LAB_03566068;
              if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) break;
              lVar11 = lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
              *(int *)(lVar11 + 0x54) = *(int *)(lVar11 + 0x54) + 1;
              if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 == 0))
              goto LAB_03566068;
              if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) break;
              uVar2 = *(undefined4 *)(unaff_x19 + 0x6a4);
              lVar11 = lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
              *(short *)(lVar11 + 0x20) = (short)uVar2 + -0x2000;
              *(undefined4 *)(lVar11 + 0x48) = uVar2;
              *(long *)(lVar11 + 0x38) = *in_stack_00000038;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 == 0))
              goto LAB_03566068;
              if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) break;
              *(undefined8 *)(lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x40) =
                   *(undefined8 *)(unaff_x19 + 0x698);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 == 0))
              goto LAB_03566068;
              uVar7 = *(uint *)(unaff_x19 + 0x490);
              if (*(uint *)(lVar11 + 0x18) <= uVar7) break;
              *(undefined4 *)(lVar11 + (long)(int)uVar7 * 0x178 + 0x58) =
                   *(undefined4 *)(unaff_x19 + 0x120);
              if ((*(long *)(unaff_x19 + 0x698) == 0) ||
                 (lVar19 = UnityEngine_Material__DisableKeyword(*(long *)(unaff_x19 + 0x698),0),
                 lVar19 == 0)) goto LAB_03566068;
              FUN_02215a88(lVar19,*(undefined4 *)(unaff_x19 + 0x6a4),&stack0x000000e0,
                           *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
              if (*(uint *)(lVar11 + 0x18) <= uVar7) break;
              *(undefined8 *)(lVar11 + (long)(int)uVar7 * 0x178 + 0x30) = in_stack_000000e0;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 == 0))
              goto LAB_03566068;
              uVar7 = *(uint *)(unaff_x19 + 0x490);
              if (*(uint *)(lVar11 + 0x18) <= uVar7) break;
              uVar2 = *(undefined4 *)(unaff_x19 + 0x644);
              lVar19 = lVar11 + (long)(int)uVar7 * 0x178;
              *(int *)(lVar19 + 0x24) = iVar9;
              *(undefined4 *)(lVar19 + 0x2c) = uVar2;
              if (*(uint *)(unaff_x21 + 0x18) <= uVar6) break;
              *(int *)(lVar11 + (long)(int)uVar7 * 0x178 + 0x28) =
                   (*(int *)(unaff_x21 + (long)(int)uVar6 * 0xc + 0x24) - iVar9) + 1;
              *(undefined4 *)(unaff_x19 + 0x644) = 0;
              *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
              in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
              unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              unaff_x25 = in_stack_00000038;
              unaff_w22 = uVar6;
            } while( true );
          }
          goto LAB_035660f8;
        }
        goto LAB_03566068;
      }
      goto LAB_035660f8;
    }
    goto LAB_03566068;
  }
LAB_035660f8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
LAB_035658ec:
  do {
    fVar29 = (float)param_2;
    if (uVar23 != 0) {
      lVar15 = *plVar18;
      if (lVar15 == 0) goto LAB_03566068;
      if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_035660f8;
      uVar21 = *(undefined8 *)(lVar15 + uVar23 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar13 = FUN_036d35a8(uVar21,0,0);
      if ((uVar13 & 1) != 0) {
        lVar15 = *unaff_x24;
        plVar20 = (long *)*plVar18;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar15 = *unaff_x24;
        }
        lVar15 = **(long **)(lVar15 + 0xb8);
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_035660f8;
        lVar15 = lVar15 + lVar19;
        in_stack_00000160 = *(undefined8 *)(lVar15 + -4);
        in_stack_00000158 = *(undefined8 *)(lVar15 + -0xc);
        in_stack_00000150 = *(undefined8 *)(lVar15 + -0x14);
        in_stack_00000148 = *(undefined8 *)(lVar15 + -0x1c);
        uVar21 = *(undefined8 *)(lVar15 + -0x24);
        in_stack_00000138 = *(undefined8 *)(lVar15 + -0x2c);
        in_stack_00000130 = *(undefined8 *)(lVar15 + -0x34);
        in_stack_00000140 = uVar21;
        lVar15 = FUN_0359e964();
        fVar29 = (float)uVar21;
        if (plVar20 == (long *)0x0) goto LAB_03566068;
        if ((lVar15 != 0) &&
           (lVar14 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar20 + 0x40)), lVar14 == 0)) {
LAB_035660fc:
          uVar21 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar21,0);
        }
        if (*(uint *)(plVar20 + 3) <= uVar23) goto LAB_035660f8;
        plVar20[uVar23 + 4] = lVar15;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long)plVar20 + lVar25,lVar15);
        unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if ((*unaff_x20 == 0) || (lVar15 = *(long *)(*unaff_x20 + 0x60), lVar15 == 0))
        goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_035660f8;
        puVar12 = (undefined8 *)(lVar15 + lVar11 + 0x30);
        *puVar12 = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar12,0);
      }
      if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_03566068;
      fVar26 = (float)FUN_036dba50(*(long *)(unaff_x19 + 0x380),0);
      lVar15 = *plVar18;
      if (lVar15 == 0) goto LAB_03566068;
      if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_035660f8;
      lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
      if ((lVar15 == 0) || (fVar28 = fVar29, lVar15 = FUN_037b4844(lVar15,0), lVar15 == 0))
      goto LAB_03566068;
      fVar27 = (float)FUN_036dba50(lVar15,0);
      fVar29 = (fVar29 - fVar28) * (fVar29 - fVar28);
      param_2 = (ulong)(uint)fVar29;
      if (fVar4 <= (fVar26 - fVar27) * (fVar26 - fVar27) + fVar29) {
        lVar15 = *plVar18;
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_035660f8;
        lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
        if (lVar15 == 0) goto LAB_03566068;
        lVar15 = FUN_037b4844(lVar15,0);
        if ((*(long *)(unaff_x19 + 0x380) == 0) ||
           (FUN_036dba50(*(long *)(unaff_x19 + 0x380),0), lVar15 == 0)) goto LAB_03566068;
        FUN_036dbae0(lVar15,0);
      }
      lVar15 = *plVar18;
      if (lVar15 == 0) goto LAB_03566068;
      if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_035660f8;
      lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
      if (lVar15 == 0) goto LAB_03566068;
      uVar21 = *(undefined8 *)(lVar15 + 0xf0);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar13 = FUN_036d35a8(uVar21,0,0);
      if ((uVar13 & 1) == 0) {
        lVar15 = *plVar18;
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_035660f8;
        lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
        if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0xf0), lVar15 == 0)) goto LAB_03566068;
        iVar9 = FUN_036d3364(lVar15,0);
        lVar15 = *unaff_x24;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar15);
          lVar15 = *unaff_x24;
        }
        lVar15 = **(long **)(lVar15 + 0xb8);
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_035660f8;
        lVar15 = *(long *)(lVar15 + lVar19 + -0x1c);
        if (lVar15 == 0) goto LAB_03566068;
        iVar10 = FUN_036d3364(lVar15,0);
        if (iVar9 != iVar10) goto LAB_03565b98;
      }
      else {
LAB_03565b98:
        lVar15 = *plVar18;
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_035660f8;
        lVar14 = *unaff_x24;
        lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar14 = *unaff_x24;
        }
        lVar14 = **(long **)(lVar14 + 0xb8);
        if (lVar14 == 0) goto LAB_03566068;
        if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_035660f8;
        if (lVar15 == 0) goto LAB_03566068;
        thunk_FUN_0359e5ac(lVar15,*(undefined8 *)(lVar14 + lVar19 + -0x1c),0);
        lVar15 = *plVar18;
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_035660f8;
        lVar14 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar14 == 0) goto LAB_03566068;
        if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_035660f8;
        lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
        if (lVar15 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar15 + 0xd8) = *(undefined8 *)(lVar14 + lVar19 + -0x2c);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar15 = *plVar18;
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_035660f8;
        lVar14 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar14 == 0) goto LAB_03566068;
        if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_035660f8;
        lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
        if (lVar15 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar15 + 0xe0) = *(undefined8 *)(lVar14 + lVar19 + -0x24);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      lVar15 = *unaff_x24;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar15 = *unaff_x24;
      }
      lVar14 = **(long **)(lVar15 + 0xb8);
      if (lVar14 == 0) goto LAB_03566068;
      if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_035660f8;
      if (*(char *)(lVar14 + lVar19 + -0x13) != '\0') {
        lVar16 = *plVar18;
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_035660f8;
        lVar16 = *(long *)(lVar16 + uVar23 * 8 + 0x20);
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar14 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar14 == 0) goto LAB_03566068;
        }
        if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_035660f8;
        if (lVar16 == 0) goto LAB_03566068;
        FUN_0359e608(lVar16,*(undefined8 *)(lVar14 + lVar19 + -0x1c),0);
        lVar15 = *plVar18;
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_035660f8;
        lVar14 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar14 == 0) goto LAB_03566068;
        if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_035660f8;
        lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
        if (lVar15 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar15 + 0x100) = *(undefined8 *)(lVar14 + lVar19 + -0xc);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar15 + 0x100);
      }
    }
    lVar15 = *unaff_x24;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar15 = *unaff_x24;
    }
    lVar15 = **(long **)(lVar15 + 0xb8);
    if (lVar15 == 0) goto LAB_03566068;
    if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_035660f8;
    if ((*unaff_x20 == 0) || (lVar14 = *(long *)(*unaff_x20 + 0x60), lVar14 == 0))
    goto LAB_03566068;
    if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_035660f8;
    lVar16 = *(long *)(lVar14 + lVar11 + 0x30);
    iVar9 = *(int *)(lVar15 + lVar19);
    if (lVar16 == 0) {
      if (uVar23 == 0) {
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
        FUN_03595600(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar9 + 1,0);
        memcpy(&stack0x00000090,&stack0x000000e0,0x50);
        if (*(int *)(lVar14 + 0x18) == 0) goto LAB_035660f8;
        memcpy((void *)(lVar14 + lVar11 + 0x20),&stack0x00000090,0x50);
        __dest = (void *)(lVar14 + 0x20);
      }
      else {
        lVar15 = *plVar18;
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_035660f8;
        lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
        if (lVar15 == 0) goto LAB_03566068;
        uVar21 = UnityEngine_Material__GetColorArray(lVar15,0);
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
        FUN_03595600(&stack0x000000e0,uVar21,iVar9 + 1,0);
        memcpy(&stack0x00000040,&stack0x000000e0,0x50);
        if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_035660f8;
        __dest = (void *)(lVar14 + lVar11 + 0x20);
        memcpy(__dest,&stack0x00000040,0x50);
      }
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(__dest,0);
    }
    else {
      iVar10 = *(int *)(lVar16 + 0x18);
      if (iVar10 < iVar9 * 4) {
LAB_03565e08:
        if (iVar9 < 0x401) {
          iVar9 = FUN_036c1d60(iVar9 + 1,0);
        }
        else {
          iVar9 = iVar9 + 0x100;
        }
        if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_03595b9c(lVar14 + lVar11 + 0x20,iVar9,0);
      }
      else if ((0 < iVar9) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
        iVar1 = iVar10 + 3;
        if (-1 < iVar10) {
          iVar1 = iVar10;
        }
        if (0x100 < (iVar1 >> 2) - iVar9) goto LAB_03565e08;
      }
    }
    unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if ((*unaff_x20 == 0) || (lVar15 = *(long *)(*unaff_x20 + 0x60), lVar15 == 0))
    goto LAB_03566068;
    lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar14 = *unaff_x24;
    }
    lVar14 = **(long **)(lVar14 + 0xb8);
    if (lVar14 == 0) goto LAB_03566068;
    if ((*(uint *)(lVar14 + 0x18) <= uVar23) || (*(uint *)(lVar15 + 0x18) <= uVar23))
    goto LAB_035660f8;
    *(undefined8 *)(lVar15 + lVar11 + 0x68) = *(undefined8 *)(lVar14 + lVar19 + -0x1c);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    uVar23 = uVar23 + 1;
    lVar11 = lVar11 + 0x50;
    lVar19 = lVar19 + 0x38;
    lVar25 = lVar25 + 8;
  } while (uVar7 != uVar23);
LAB_03565fb8:
  lVar11 = *plVar18;
  if (lVar11 != 0) {
    lVar19 = (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar17 << 3) + 0x20;
    do {
      uVar7 = (uint)uVar17;
      if ((int)*(uint *)(lVar11 + 0x18) <= (int)uVar7) {
LAB_03565748:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_035660f8;
      uVar21 = *(undefined8 *)(lVar11 + lVar19);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar17 = FUN_036cee6c(uVar21,0,0);
      if ((uVar17 & 1) == 0) goto LAB_03565748;
      if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x60), lVar11 == 0)) break;
      if ((int)uVar7 < *(int *)(lVar11 + 0x18)) {
        lVar11 = *plVar18;
        if (lVar11 == 0) break;
        if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_035660f8;
        if ((*(long *)(lVar11 + lVar19) == 0) ||
           (lVar11 = FUN_037b514c(*(long *)(lVar11 + lVar19),0), lVar11 == 0)) break;
        FUN_0390f3a4(lVar11,0,0);
      }
      lVar11 = *plVar18;
      uVar17 = (ulong)(uVar7 + 1);
      lVar19 = lVar19 + 8;
    } while (lVar11 != 0);
  }
LAB_03566068:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


