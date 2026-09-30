/*
FUNCTION_NAME: UnityEngine.AudioSource$$set_priority
ENTRY_POINT: 035653f4
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


undefined4 UnityEngine_AudioSource__set_priority(undefined1 param_1 [16],ulong param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  float fVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  void *__dest;
  long lVar15;
  long lVar16;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long *plVar17;
  undefined8 unaff_x23;
  undefined8 uVar18;
  long *plVar19;
  long *unaff_x24;
  long *plVar20;
  long unaff_x25;
  long lVar21;
  uint unaff_w26;
  ulong uVar22;
  long unaff_x27;
  long lVar23;
  long unaff_x28;
  undefined8 uVar24;
  int unaff_w29;
  uint *puVar25;
  long lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
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
  
code_r0x035653f4:
  uVar7 = FUN_03557fec(unaff_x23,unaff_x25,*(long *)(param_3 + 0xb8),
                       *(undefined8 *)(*(long *)(param_3 + 0xb8) + 8));
  *(undefined4 *)(unaff_x19 + 0x120) = uVar7;
LAB_03565410:
  if (*(long *)(unaff_x27 + 0x20) != 0) {
    iVar8 = FUN_03776eb8(*(long *)(unaff_x27 + 0x20),0);
    if (0 < iVar8) {
      if (*(long *)(unaff_x27 + 0x20) == 0) goto LAB_03566068;
      lVar23 = *in_stack_00000038;
      uVar24 = *in_stack_00000028;
      uVar7 = FUN_03776eb8(*(long *)(unaff_x27 + 0x20),0);
      if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)OVRPlugin_Sizef_TypeInfo);
      }
      uVar24 = FUN_03594928(lVar23,uVar24,uVar7,0);
      *in_stack_00000028 = uVar24;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000028,uVar24);
      lVar23 = *unaff_x24;
      uVar24 = *in_stack_00000028;
      lVar21 = *in_stack_00000038;
      if (*(int *)(lVar23 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar23 = *unaff_x24;
      }
      unaff_x28 = 0x178;
      uVar7 = FUN_03557fec(uVar24,lVar21,*(long *)(lVar23 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 8));
      unaff_w29 = 1;
      *(undefined4 *)(unaff_x19 + 0x120) = uVar7;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar11 = FUN_026b63d8(unaff_w26,0);
    plVar20 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
    if ((unaff_w26 != 0x200b) && ((uVar11 & 1) == 0)) {
      lVar23 = *unaff_x24;
      if (*(int *)(lVar23 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar23);
        lVar23 = *unaff_x24;
      }
      lVar21 = **(long **)(lVar23 + 0xb8);
      if (lVar21 == 0) goto LAB_03566068;
      uVar9 = *(uint *)(unaff_x19 + 0x120);
      if (*(uint *)(lVar21 + 0x18) <= uVar9) goto LAB_035660f8;
      if (*(int *)(lVar21 + (long)(int)uVar9 * 0x38 + 0x54) < 0x3fff) {
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar23);
          lVar21 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar21 == 0) goto LAB_03566068;
          uVar9 = *(uint *)(unaff_x19 + 0x120);
        }
      }
      else {
        uVar18 = *in_stack_00000028;
        uVar24 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
        FUN_0369922c(uVar24,uVar18,0);
        lVar23 = *unaff_x24;
        lVar21 = *in_stack_00000038;
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar23 = *unaff_x24;
        }
        uVar9 = FUN_03557fec(uVar24,lVar21,*(long *)(lVar23 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 8));
        *(uint *)(unaff_x19 + 0x120) = uVar9;
        lVar21 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar21 == 0) goto LAB_03566068;
      }
      if (*(uint *)(lVar21 + 0x18) <= uVar9) goto LAB_035660f8;
      lVar21 = lVar21 + (long)(int)uVar9 * 0x38;
      *(int *)(lVar21 + 0x54) = *(int *)(lVar21 + 0x54) + 1;
    }
    if ((*unaff_x20 != 0) && (lVar23 = *(long *)(*unaff_x20 + 0x38), lVar23 != 0)) {
      if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar23 + 0x18)) {
        *(undefined8 *)(lVar23 + (int)*(uint *)(unaff_x19 + 0x490) * unaff_x28 + 0x50) =
             *in_stack_00000028;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*unaff_x20 != 0) && (lVar23 = *(long *)(*unaff_x20 + 0x38), lVar23 != 0)) {
          if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar23 + 0x18)) {
            uVar9 = *(uint *)(unaff_x19 + 0x120);
            *(uint *)(lVar23 + (int)*(uint *)(unaff_x19 + 0x490) * unaff_x28 + 0x58) = uVar9;
            lVar23 = *unaff_x24;
            if (*(int *)(lVar23 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar23 = *unaff_x24;
              uVar9 = *(uint *)(unaff_x19 + 0x120);
            }
            lVar21 = **(long **)(lVar23 + 0xb8);
            if (lVar21 == 0) goto LAB_03566068;
            if (*(uint *)(lVar21 + 0x18) <= uVar9) goto LAB_035660f8;
            *(char *)(lVar21 + (long)(int)uVar9 * 0x38 + 0x41) = (char)unaff_w29;
            if (unaff_w29 != 0) {
              if (*(int *)(lVar23 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar21 = **(long **)(*unaff_x24 + 0xb8);
                if (lVar21 == 0) goto LAB_03566068;
                uVar9 = *(uint *)(unaff_x19 + 0x120);
              }
              if (*(uint *)(lVar21 + 0x18) <= uVar9) goto LAB_035660f8;
              puVar12 = (undefined8 *)(lVar21 + (long)(int)uVar9 * 0x38 + 0x48);
              *puVar12 = in_stack_00000018;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (puVar12,in_stack_00000018);
              *(undefined8 *)(unaff_x19 + 0x100) = in_stack_00000010;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000038);
              *(undefined8 *)(unaff_x19 + 0x118) = in_stack_00000018;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (in_stack_00000028,in_stack_00000018);
              *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
            }
            uVar9 = *(uint *)(unaff_x19 + 0x490);
LAB_0356571c:
            do {
              *(uint *)(unaff_x19 + 0x490) = uVar9 + 1;
              do {
                uVar9 = *(uint *)(unaff_x21 + 0x18);
                unaff_w22 = unaff_w22 + 1;
                if ((int)uVar9 <= (int)unaff_w22) {
LAB_0356573c:
                  if (*(char *)(unaff_x19 + 0x3f5) != '\0') {
                    *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
                    goto LAB_03565748;
                  }
                  lVar23 = *unaff_x20;
                  if (lVar23 == 0) goto LAB_03566068;
                  *(int *)(lVar23 + 0x1c) = in_stack_00000020._4_4_;
                  lVar21 = *unaff_x24;
                  if (*(int *)(lVar21 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar21 = *unaff_x24;
                  }
                  lVar21 = *(long *)(*(long *)(lVar21 + 0xb8) + 8);
                  if (lVar21 == 0) goto LAB_03566068;
                  uVar9 = FUN_0219b384(lVar21,*(undefined8 *)PTR_DAT_03ceb270);
                  *(uint *)(lVar23 + 0x34) = uVar9;
                  if (*unaff_x20 == 0) goto LAB_03566068;
                  plVar17 = (long *)(*unaff_x20 + 0x60);
                  lVar23 = *plVar17;
                  if (lVar23 == 0) goto LAB_03566068;
                  uVar11 = (ulong)uVar9;
                  if (*(int *)(lVar23 + 0x18) < (int)uVar9) {
                    if (*(int *)(*plVar20 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    FUN_01ff02b8(plVar17,uVar11,0,*(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo
                                );
                  }
                  if (*(long *)(unaff_x19 + 0x708) == 0) goto LAB_03566068;
                  plVar17 = (long *)(unaff_x19 + 0x708);
                  if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar9) {
                    uVar7 = FUN_036c1d60(uVar9 + 1,0);
                    if (*(int *)(*plVar20 + 0xe0) == 0) {
                      thunk_FUN_01a58e78(*plVar20);
                    }
                    FUN_01ff025c(plVar17,uVar7,
                                 *(undefined8 *)OVRSystemPerfMetrics_PerfMetrics_TypeInfo);
                  }
                  if (*(char *)(unaff_x19 + 0x321) != '\0') {
                    if (*unaff_x20 == 0) goto LAB_03566068;
                    plVar19 = (long *)(*unaff_x20 + 0x38);
                    lVar23 = *plVar19;
                    if (lVar23 == 0) goto LAB_03566068;
                    iVar8 = *(int *)(unaff_x19 + 0x490);
                    if (0x100 < *(int *)(lVar23 + 0x18) - iVar8) {
                      iVar10 = 0x100;
                      if (0x100 < iVar8 + 1) {
                        iVar10 = iVar8 + 1;
                      }
                      if (*(int *)(*plVar20 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      FUN_01ff02b8(plVar19,iVar10,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
                      unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    }
                  }
                  fVar4 = DAT_00d38798;
                  if ((int)uVar9 < 1) goto LAB_03565fb8;
                  lVar23 = 0;
                  uVar22 = 0;
                  lVar21 = 0x54;
                  lVar26 = 0x20;
                  goto LAB_035658ec;
                }
                if (uVar9 <= unaff_w22) goto LAB_035660f8;
                puVar25 = (uint *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x20);
                if (*puVar25 == 0) goto LAB_0356573c;
                if (*unaff_x20 == 0) goto LAB_03566068;
                plVar17 = (long *)(*unaff_x20 + 0x38);
                lVar23 = *plVar17;
                iVar8 = *(int *)(unaff_x19 + 0x490);
                if ((lVar23 == 0) || (*(int *)(lVar23 + 0x18) <= iVar8)) {
                  if (*(int *)(*plVar20 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  FUN_01ff02b8(plVar17,iVar8 + 1,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
                  uVar9 = *(uint *)(unaff_x21 + 0x18);
                }
                if (uVar9 <= unaff_w22) goto LAB_035660f8;
                unaff_w26 = *puVar25;
                if ((unaff_w26 != 0x3c) || (*(char *)(unaff_x19 + 0x302) == '\0')) {
LAB_035649d0:
                  uStack00000000000001bc = 0;
                  in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x100);
                  in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x118);
                  in_stack_00000030._4_4_ = *(undefined4 *)(unaff_x19 + 0x120);
                  if (*(int *)(unaff_x19 + 0x644) != 0) goto LAB_03564aac;
                  uVar9 = *(uint *)(unaff_x19 + 0x25c);
                  if ((uVar9 >> 4 & 1) == 0) {
                    if ((uVar9 >> 3 & 1) == 0) {
                      if ((uVar9 >> 5 & 1) != 0) goto LAB_03564a00;
                    }
                    else {
                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar11 = FUN_026b8070(unaff_w26,0);
                      if ((uVar11 & 1) != 0) {
                        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        uVar9 = FUN_026b8594(unaff_w26,0);
                        goto LAB_03564aa8;
                      }
                    }
                  }
                  else {
LAB_03564a00:
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar11 = FUN_026b812c(unaff_w26,0);
                    if ((uVar11 & 1) != 0) {
                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar9 = FUN_026b8410(unaff_w26,0);
LAB_03564aa8:
                      unaff_w26 = uVar9 & 0xffff;
                    }
                  }
LAB_03564aac:
                  unaff_x27 = FUN_03591848();
                  if (unaff_x27 == 0) {
                    iVar8 = FUN_035975f8();
                    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
                    if (iVar8 == 0) {
                      uVar9 = 0x25a1;
                    }
                    else {
                      uVar9 = FUN_035975f8(0);
                    }
                    *puVar25 = uVar9;
                    uVar24 = *(undefined8 *)(unaff_x19 + 0x100);
                    uVar7 = *(undefined4 *)(unaff_x19 + 0x25c);
                    uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                    if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    unaff_x27 = FUN_03570fc4(uVar9,uVar24,1,uVar7,uVar2,(long)&stack0x000001b8 + 4,0
                                            );
                    if (unaff_x27 == 0) {
                      lVar23 = FUN_03597770();
                      if (lVar23 != 0) {
                        lVar23 = FUN_03597770(0);
                        if (lVar23 == 0) goto LAB_03566068;
                        if (0 < *(int *)(lVar23 + 0x18)) {
                          uVar18 = *(undefined8 *)(unaff_x19 + 0x100);
                          uVar24 = FUN_03597770(0);
                          uVar7 = *(undefined4 *)(unaff_x19 + 0x25c);
                          uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                          if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                            thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                          }
                          unaff_x27 = FUN_035714e4(uVar9,uVar18,uVar24,1,uVar7,uVar2,
                                                   (long)&stack0x000001b8 + 4,0);
                          if (unaff_x27 != 0) goto LAB_03564b5c;
                        }
                      }
                      uVar24 = FUN_03597650(0);
                      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                      }
                      uVar11 = FUN_036cee6c(uVar24,0,0);
                      if ((uVar11 & 1) != 0) {
                        uVar24 = FUN_03597650(0);
                        uVar7 = *(undefined4 *)(unaff_x19 + 0x25c);
                        uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                        if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                        }
                        unaff_x27 = FUN_03570fc4(uVar9,uVar24,1,uVar7,uVar2,
                                                 (long)&stack0x000001b8 + 4,0);
                        if (unaff_x27 != 0) goto LAB_03564b5c;
                      }
                      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
                      *puVar25 = 0x20;
                      uVar24 = *(undefined8 *)(unaff_x19 + 0x100);
                      uVar7 = *(undefined4 *)(unaff_x19 + 0x25c);
                      uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                      if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar9 = 0x20;
                      unaff_x27 = FUN_03570fc4(0x20,uVar24,1,uVar7,uVar2,(long)&stack0x000001b8 + 4,
                                               0);
                      if (unaff_x27 == 0) {
                        if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
                        *puVar25 = 3;
                        uVar24 = *(undefined8 *)(unaff_x19 + 0x100);
                        uVar7 = *(undefined4 *)(unaff_x19 + 0x25c);
                        uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                        if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        uVar9 = 3;
                        unaff_x27 = FUN_03570fc4(3,uVar24,1,uVar7,uVar2,(long)&stack0x000001b8 + 4,0
                                                );
                      }
                    }
LAB_03564b5c:
                    uVar11 = FUN_03597634(0);
                    if ((uVar11 & 1) == 0) {
                      plVar20 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,4);
                      if ((int)unaff_w26 < 0x10000) {
                        in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,unaff_w26);
                        lVar23 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0
                                                   );
                        if (plVar20 == (long *)0x0) goto LAB_03566068;
                        if ((lVar23 != 0) &&
                           (lVar21 = thunk_FUN_01a89d6c(lVar23,*(undefined8 *)(*plVar20 + 0x40)),
                           lVar21 == 0)) goto LAB_035660fc;
                        if ((int)plVar20[3] == 0) goto LAB_035660f8;
                        plVar20[4] = lVar23;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar20 + 4,lVar23);
                        if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
                        lVar23 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
                        if ((lVar23 != 0) &&
                           (lVar21 = thunk_FUN_01a89d6c(lVar23,*(undefined8 *)(*plVar20 + 0x40)),
                           lVar21 == 0)) goto LAB_035660fc;
                        if (*(uint *)(plVar20 + 3) < 2) goto LAB_035660f8;
                        plVar20[5] = lVar23;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar20 + 5,lVar23);
                        if (unaff_x27 == 0) goto LAB_03566068;
                        in_stack_00000168._4_4_ = *(undefined4 *)(unaff_x27 + 0x14);
                        lVar23 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,
                                                    (long)&stack0x00000168 + 4);
                        if ((lVar23 != 0) &&
                           (lVar21 = thunk_FUN_01a89d6c(lVar23,*(undefined8 *)(*plVar20 + 0x40)),
                           lVar21 == 0)) goto LAB_035660fc;
                        if (*(uint *)(plVar20 + 3) < 3) goto LAB_035660f8;
                        plVar20[6] = lVar23;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar20 + 6,lVar23);
                        lVar23 = FUN_036d3824();
                        if ((lVar23 != 0) &&
                           (lVar21 = thunk_FUN_01a89d6c(lVar23,*(undefined8 *)(*plVar20 + 0x40)),
                           lVar21 == 0)) goto LAB_035660fc;
                        if (*(uint *)(plVar20 + 3) < 4) goto LAB_035660f8;
                        plVar20[7] = lVar23;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar20 + 7,lVar23);
                        puVar12 = (undefined8 *)OVRPlugin_TrackedKeyboardFlags_TypeInfo;
                      }
                      else {
                        in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,unaff_w26);
                        lVar23 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0
                                                   );
                        if (plVar20 == (long *)0x0) goto LAB_03566068;
                        if ((lVar23 != 0) &&
                           (lVar21 = thunk_FUN_01a89d6c(lVar23,*(undefined8 *)(*plVar20 + 0x40)),
                           lVar21 == 0)) goto LAB_035660fc;
                        if ((int)plVar20[3] == 0) goto LAB_035660f8;
                        plVar20[4] = lVar23;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar20 + 4,lVar23);
                        if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
                        lVar23 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
                        if ((lVar23 != 0) &&
                           (lVar21 = thunk_FUN_01a89d6c(lVar23,*(undefined8 *)(*plVar20 + 0x40)),
                           lVar21 == 0)) goto LAB_035660fc;
                        if (*(uint *)(plVar20 + 3) < 2) goto LAB_035660f8;
                        plVar20[5] = lVar23;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar20 + 5,lVar23);
                        if (unaff_x27 == 0) goto LAB_03566068;
                        in_stack_00000168._4_4_ = *(undefined4 *)(unaff_x27 + 0x14);
                        lVar23 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,
                                                    (long)&stack0x00000168 + 4);
                        if ((lVar23 != 0) &&
                           (lVar21 = thunk_FUN_01a89d6c(lVar23,*(undefined8 *)(*plVar20 + 0x40)),
                           lVar21 == 0)) goto LAB_035660fc;
                        if (*(uint *)(plVar20 + 3) < 3) goto LAB_035660f8;
                        plVar20[6] = lVar23;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar20 + 6,lVar23);
                        lVar23 = FUN_036d3824();
                        if ((lVar23 != 0) &&
                           (lVar21 = thunk_FUN_01a89d6c(lVar23,*(undefined8 *)(*plVar20 + 0x40)),
                           lVar21 == 0)) goto LAB_035660fc;
                        if (*(uint *)(plVar20 + 3) < 4) goto LAB_035660f8;
                        plVar20[7] = lVar23;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar20 + 7,lVar23);
                        puVar12 = (undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo;
                      }
                      uVar24 = FUN_025be8f4(*puVar12,plVar20,0);
                      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      FUN_0367b470(uVar24);
                      unaff_w26 = uVar9;
                    }
                    else {
                      unaff_w26 = uVar9;
                      if (unaff_x27 == 0) goto LAB_03566068;
                    }
                  }
                  if (*(char *)(unaff_x27 + 0x10) == '\x01') {
                    lVar23 = *(long *)(unaff_x27 + 0x18);
                    if (lVar23 == 0) goto LAB_03566068;
                    iVar8 = *(int *)(lVar23 + 0x18);
                    if (iVar8 == 0) {
                      iVar8 = FUN_036d3364(lVar23,0);
                      *(int *)(lVar23 + 0x18) = iVar8;
                    }
                    lVar23 = *in_stack_00000038;
                    if (lVar23 == 0) goto LAB_03566068;
                    iVar10 = *(int *)(lVar23 + 0x18);
                    if (iVar10 == 0) {
                      iVar10 = FUN_036d3364(lVar23,0);
                      *(int *)(lVar23 + 0x18) = iVar10;
                    }
                    if (iVar8 == iVar10) {
                      unaff_w29 = 0;
                    }
                    else {
                      plVar20 = *(long **)(unaff_x27 + 0x18);
                      if (plVar20 == (long *)0x0) {
                        plVar20 = (long *)0x0;
                        *in_stack_00000038 = 0;
                      }
                      else {
                        lVar23 = *(long *)OVRPlugin_OVRP_1_83_0_TypeInfo;
                        bVar3 = *(byte *)(lVar23 + 0x130);
                        if (*(byte *)(*plVar20 + 0x130) < bVar3) {
                          plVar17 = (long *)0x0;
                        }
                        else {
                          plVar17 = plVar20;
                          if (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar3 * 8 + -8) != lVar23
                             ) {
                            plVar17 = (long *)0x0;
                          }
                        }
                        *in_stack_00000038 = (long)plVar17;
                        if (*(byte *)(*plVar20 + 0x130) < bVar3) {
                          plVar20 = (long *)0x0;
                        }
                        else if (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar3 * 8 + -8) !=
                                 lVar23) {
                          plVar20 = (long *)0x0;
                        }
                      }
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (in_stack_00000038,plVar20);
                      unaff_w29 = 1;
                    }
                  }
                  else {
                    unaff_w29 = 0;
                  }
                  unaff_x28 = 0x178;
                  if ((*unaff_x20 == 0) || (lVar23 = *(long *)(*unaff_x20 + 0x38), lVar23 == 0))
                  goto LAB_03566068;
                  if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
                  lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
                  plVar20 = (long *)(lVar23 + 0x30);
                  *plVar20 = unaff_x27;
                  *(undefined4 *)(lVar23 + 0x2c) = 0;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (plVar20,unaff_x27);
                  if ((*unaff_x20 == 0) || (lVar23 = *(long *)(*unaff_x20 + 0x38), lVar23 == 0))
                  goto LAB_03566068;
                  uVar9 = *(uint *)(unaff_x19 + 0x490);
                  if (*(uint *)(lVar23 + 0x18) <= uVar9) goto LAB_035660f8;
                  lVar21 = lVar23 + (long)(int)uVar9 * 0x178;
                  *(short *)(lVar21 + 0x20) = (short)unaff_w26;
                  *(undefined1 *)(lVar21 + 0x5c) = uStack00000000000001bc;
                  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
                  lVar23 = lVar23 + (long)(int)uVar9 * 0x178;
                  *(undefined8 *)(lVar23 + 0x24) =
                       *(undefined8 *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x24);
                  *(long *)(lVar23 + 0x38) = *in_stack_00000038;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(char *)(unaff_x27 + 0x10) != '\x02') {
                    if (unaff_w29 == 0) goto LAB_03565410;
                    lVar23 = *in_stack_00000038;
                    if (lVar23 == 0) goto LAB_03566068;
                    iVar8 = *(int *)(lVar23 + 0x18);
                    if (iVar8 == 0) {
                      iVar8 = FUN_036d3364(lVar23,0);
                      *(int *)(lVar23 + 0x18) = iVar8;
                    }
                    lVar23 = *(long *)(unaff_x19 + 0xf8);
                    if (lVar23 == 0) goto LAB_03566068;
                    iVar10 = *(int *)(lVar23 + 0x18);
                    if (iVar10 == 0) {
                      iVar10 = FUN_036d3364(lVar23,0);
                      *(int *)(lVar23 + 0x18) = iVar10;
                    }
                    unaff_x28 = 0x178;
                    if (iVar8 == iVar10) goto LAB_03565410;
                    uVar11 = FUN_0359778c(0);
                    if ((uVar11 & 1) == 0) {
                      if (*in_stack_00000038 == 0) goto LAB_03566068;
                      uVar24 = *(undefined8 *)(*in_stack_00000038 + 0x20);
                    }
                    else {
                      if (*in_stack_00000038 == 0) goto LAB_03566068;
                      uVar18 = *(undefined8 *)(*in_stack_00000038 + 0x20);
                      uVar24 = *in_stack_00000028;
                      if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar24 = FUN_03594e9c(uVar24,uVar18,0);
                    }
                    *in_stack_00000028 = uVar24;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (in_stack_00000028);
                    param_3 = *unaff_x24;
                    unaff_x23 = *in_stack_00000028;
                    unaff_x25 = *in_stack_00000038;
                    if (*(int *)(param_3 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      param_3 = *unaff_x24;
                    }
                    goto code_r0x035653f4;
                  }
                  plVar20 = *(long **)(unaff_x27 + 0x18);
                  if (plVar20 == (long *)0x0) goto LAB_03566068;
                  bVar3 = *(byte *)(*(long *)OVRPlugin_Sizei_TypeInfo + 0x130);
                  if ((*(byte *)(*plVar20 + 0x130) < bVar3) ||
                     (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar3 * 8 + -8) !=
                      *(long *)OVRPlugin_Sizei_TypeInfo)) goto LAB_03566068;
                  lVar21 = plVar20[4];
                  lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar23 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar23 = *unaff_x24;
                  }
                  uVar9 = FUN_03558224(lVar21,plVar20,*(long *)(lVar23 + 0xb8),
                                       *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 8));
                  *(uint *)(unaff_x19 + 0x120) = uVar9;
                  lVar23 = **(long **)(*unaff_x24 + 0xb8);
                  if (lVar23 == 0) goto LAB_03566068;
                  if (*(uint *)(lVar23 + 0x18) <= uVar9) goto LAB_035660f8;
                  lVar23 = lVar23 + (long)(int)uVar9 * 0x38;
                  *(int *)(lVar23 + 0x54) = *(int *)(lVar23 + 0x54) + 1;
                  if ((*unaff_x20 == 0) || (lVar23 = *(long *)(*unaff_x20 + 0x38), lVar23 == 0))
                  goto LAB_03566068;
                  if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
                  lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
                  *(undefined4 *)(lVar23 + 0x2c) = 1;
                  uVar7 = *(undefined4 *)(unaff_x19 + 0x120);
                  *(undefined8 *)(lVar23 + 0x40) = plVar20;
                  *(undefined4 *)(lVar23 + 0x58) = uVar7;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            ((undefined8 *)(lVar23 + 0x40),plVar20);
                  unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                     (lVar23 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar23 == 0))
                  goto LAB_03566068;
                  uVar9 = *(uint *)(unaff_x19 + 0x490);
                  if (*(uint *)(lVar23 + 0x18) <= uVar9) goto LAB_035660f8;
                  *(undefined4 *)(lVar23 + (long)(int)uVar9 * 0x178 + 0x48) =
                       *(undefined4 *)(unaff_x27 + 0x28);
                  *(undefined4 *)(unaff_x19 + 0x644) = 0;
                  *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
                  in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
                  plVar20 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
                  goto LAB_0356571c;
                }
                uVar7 = *(undefined4 *)(unaff_x19 + 0x120);
                uVar11 = FUN_03586568();
                uVar6 = uStack00000000000001b8;
                if ((uVar11 & 1) == 0) goto LAB_035649d0;
                if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
                iVar8 = *(int *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x24);
                if ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0) {
                  *(undefined1 *)(unaff_x19 + 0x26a) = 1;
                }
                puVar5 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                unaff_w22 = uStack00000000000001b8;
              } while (*(int *)(unaff_x19 + 0x644) != 1);
              lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar23 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar23 = *(long *)puVar5;
              }
              lVar23 = **(long **)(lVar23 + 0xb8);
              if (lVar23 == 0) goto LAB_03566068;
              if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) break;
              lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
              *(int *)(lVar23 + 0x54) = *(int *)(lVar23 + 0x54) + 1;
              if ((*unaff_x20 == 0) || (lVar23 = *(long *)(*unaff_x20 + 0x38), lVar23 == 0))
              goto LAB_03566068;
              if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) break;
              uVar2 = *(undefined4 *)(unaff_x19 + 0x6a4);
              lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
              *(short *)(lVar23 + 0x20) = (short)uVar2 + -0x2000;
              *(undefined4 *)(lVar23 + 0x48) = uVar2;
              *(long *)(lVar23 + 0x38) = *in_stack_00000038;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              if ((*unaff_x20 == 0) || (lVar23 = *(long *)(*unaff_x20 + 0x38), lVar23 == 0))
              goto LAB_03566068;
              if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) break;
              *(undefined8 *)(lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x40) =
                   *(undefined8 *)(unaff_x19 + 0x698);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              if ((*unaff_x20 == 0) || (lVar23 = *(long *)(*unaff_x20 + 0x38), lVar23 == 0))
              goto LAB_03566068;
              uVar9 = *(uint *)(unaff_x19 + 0x490);
              if (*(uint *)(lVar23 + 0x18) <= uVar9) break;
              *(undefined4 *)(lVar23 + (long)(int)uVar9 * 0x178 + 0x58) =
                   *(undefined4 *)(unaff_x19 + 0x120);
              if ((*(long *)(unaff_x19 + 0x698) == 0) ||
                 (lVar21 = UnityEngine_Material__DisableKeyword(*(long *)(unaff_x19 + 0x698),0),
                 lVar21 == 0)) goto LAB_03566068;
              FUN_02215a88(lVar21,*(undefined4 *)(unaff_x19 + 0x6a4),&stack0x000000e0,
                           *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
              if (*(uint *)(lVar23 + 0x18) <= uVar9) break;
              *(undefined8 *)(lVar23 + (long)(int)uVar9 * 0x178 + 0x30) = in_stack_000000e0;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              if ((*unaff_x20 == 0) || (lVar23 = *(long *)(*unaff_x20 + 0x38), lVar23 == 0))
              goto LAB_03566068;
              uVar9 = *(uint *)(unaff_x19 + 0x490);
              if (*(uint *)(lVar23 + 0x18) <= uVar9) break;
              uVar2 = *(undefined4 *)(unaff_x19 + 0x644);
              lVar21 = lVar23 + (long)(int)uVar9 * 0x178;
              *(int *)(lVar21 + 0x24) = iVar8;
              *(undefined4 *)(lVar21 + 0x2c) = uVar2;
              if (*(uint *)(unaff_x21 + 0x18) <= uVar6) break;
              *(int *)(lVar23 + (long)(int)uVar9 * 0x178 + 0x28) =
                   (*(int *)(unaff_x21 + (long)(int)uVar6 * 0xc + 0x24) - iVar8) + 1;
              *(undefined4 *)(unaff_x19 + 0x644) = 0;
              *(undefined4 *)(unaff_x19 + 0x120) = uVar7;
              in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
              unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              unaff_w22 = uVar6;
            } while( true );
          }
          goto LAB_035660f8;
        }
        goto LAB_03566068;
      }
      goto LAB_035660f8;
    }
  }
  goto LAB_03566068;
LAB_035658ec:
  do {
    fVar30 = (float)param_2;
    if (uVar22 != 0) {
      lVar15 = *plVar17;
      if (lVar15 == 0) goto LAB_03566068;
      if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_035660f8;
      uVar24 = *(undefined8 *)(lVar15 + uVar22 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar13 = FUN_036d35a8(uVar24,0,0);
      if ((uVar13 & 1) != 0) {
        lVar15 = *unaff_x24;
        plVar20 = (long *)*plVar17;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar15 = *unaff_x24;
        }
        lVar15 = **(long **)(lVar15 + 0xb8);
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_035660f8;
        lVar15 = lVar15 + lVar21;
        in_stack_00000160 = *(undefined8 *)(lVar15 + -4);
        in_stack_00000158 = *(undefined8 *)(lVar15 + -0xc);
        in_stack_00000150 = *(undefined8 *)(lVar15 + -0x14);
        in_stack_00000148 = *(undefined8 *)(lVar15 + -0x1c);
        uVar24 = *(undefined8 *)(lVar15 + -0x24);
        in_stack_00000138 = *(undefined8 *)(lVar15 + -0x2c);
        in_stack_00000130 = *(undefined8 *)(lVar15 + -0x34);
        in_stack_00000140 = uVar24;
        lVar15 = FUN_0359e964();
        fVar30 = (float)uVar24;
        if (plVar20 == (long *)0x0) goto LAB_03566068;
        if ((lVar15 != 0) &&
           (lVar14 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar20 + 0x40)), lVar14 == 0)) {
LAB_035660fc:
          uVar24 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar24,0);
        }
        if (*(uint *)(plVar20 + 3) <= uVar22) goto LAB_035660f8;
        plVar20[uVar22 + 4] = lVar15;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long)plVar20 + lVar26,lVar15);
        unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if ((*unaff_x20 == 0) || (lVar15 = *(long *)(*unaff_x20 + 0x60), lVar15 == 0))
        goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_035660f8;
        puVar12 = (undefined8 *)(lVar15 + lVar23 + 0x30);
        *puVar12 = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar12,0);
      }
      if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_03566068;
      fVar27 = (float)FUN_036dba50(*(long *)(unaff_x19 + 0x380),0);
      lVar15 = *plVar17;
      if (lVar15 == 0) goto LAB_03566068;
      if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_035660f8;
      lVar15 = *(long *)(lVar15 + uVar22 * 8 + 0x20);
      if ((lVar15 == 0) || (fVar29 = fVar30, lVar15 = FUN_037b4844(lVar15,0), lVar15 == 0))
      goto LAB_03566068;
      fVar28 = (float)FUN_036dba50(lVar15,0);
      fVar30 = (fVar30 - fVar29) * (fVar30 - fVar29);
      param_2 = (ulong)(uint)fVar30;
      if (fVar4 <= (fVar27 - fVar28) * (fVar27 - fVar28) + fVar30) {
        lVar15 = *plVar17;
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_035660f8;
        lVar15 = *(long *)(lVar15 + uVar22 * 8 + 0x20);
        if (lVar15 == 0) goto LAB_03566068;
        lVar15 = FUN_037b4844(lVar15,0);
        if ((*(long *)(unaff_x19 + 0x380) == 0) ||
           (FUN_036dba50(*(long *)(unaff_x19 + 0x380),0), lVar15 == 0)) goto LAB_03566068;
        FUN_036dbae0(lVar15,0);
      }
      lVar15 = *plVar17;
      if (lVar15 == 0) goto LAB_03566068;
      if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_035660f8;
      lVar15 = *(long *)(lVar15 + uVar22 * 8 + 0x20);
      if (lVar15 == 0) goto LAB_03566068;
      uVar24 = *(undefined8 *)(lVar15 + 0xf0);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar13 = FUN_036d35a8(uVar24,0,0);
      if ((uVar13 & 1) == 0) {
        lVar15 = *plVar17;
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_035660f8;
        lVar15 = *(long *)(lVar15 + uVar22 * 8 + 0x20);
        if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0xf0), lVar15 == 0)) goto LAB_03566068;
        iVar8 = FUN_036d3364(lVar15,0);
        lVar15 = *unaff_x24;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar15);
          lVar15 = *unaff_x24;
        }
        lVar15 = **(long **)(lVar15 + 0xb8);
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_035660f8;
        lVar15 = *(long *)(lVar15 + lVar21 + -0x1c);
        if (lVar15 == 0) goto LAB_03566068;
        iVar10 = FUN_036d3364(lVar15,0);
        if (iVar8 != iVar10) goto LAB_03565b98;
      }
      else {
LAB_03565b98:
        lVar15 = *plVar17;
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_035660f8;
        lVar14 = *unaff_x24;
        lVar15 = *(long *)(lVar15 + uVar22 * 8 + 0x20);
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar14 = *unaff_x24;
        }
        lVar14 = **(long **)(lVar14 + 0xb8);
        if (lVar14 == 0) goto LAB_03566068;
        if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_035660f8;
        if (lVar15 == 0) goto LAB_03566068;
        thunk_FUN_0359e5ac(lVar15,*(undefined8 *)(lVar14 + lVar21 + -0x1c),0);
        lVar15 = *plVar17;
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_035660f8;
        lVar14 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar14 == 0) goto LAB_03566068;
        if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_035660f8;
        lVar15 = *(long *)(lVar15 + uVar22 * 8 + 0x20);
        if (lVar15 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar15 + 0xd8) = *(undefined8 *)(lVar14 + lVar21 + -0x2c);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar15 = *plVar17;
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_035660f8;
        lVar14 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar14 == 0) goto LAB_03566068;
        if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_035660f8;
        lVar15 = *(long *)(lVar15 + uVar22 * 8 + 0x20);
        if (lVar15 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar15 + 0xe0) = *(undefined8 *)(lVar14 + lVar21 + -0x24);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      lVar15 = *unaff_x24;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar15 = *unaff_x24;
      }
      lVar14 = **(long **)(lVar15 + 0xb8);
      if (lVar14 == 0) goto LAB_03566068;
      if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_035660f8;
      if (*(char *)(lVar14 + lVar21 + -0x13) != '\0') {
        lVar16 = *plVar17;
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_035660f8;
        lVar16 = *(long *)(lVar16 + uVar22 * 8 + 0x20);
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar14 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar14 == 0) goto LAB_03566068;
        }
        if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_035660f8;
        if (lVar16 == 0) goto LAB_03566068;
        FUN_0359e608(lVar16,*(undefined8 *)(lVar14 + lVar21 + -0x1c),0);
        lVar15 = *plVar17;
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_035660f8;
        lVar14 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar14 == 0) goto LAB_03566068;
        if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_035660f8;
        lVar15 = *(long *)(lVar15 + uVar22 * 8 + 0x20);
        if (lVar15 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar15 + 0x100) = *(undefined8 *)(lVar14 + lVar21 + -0xc);
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
    if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_035660f8;
    if ((*unaff_x20 == 0) || (lVar14 = *(long *)(*unaff_x20 + 0x60), lVar14 == 0))
    goto LAB_03566068;
    if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_035660f8;
    lVar16 = *(long *)(lVar14 + lVar23 + 0x30);
    iVar8 = *(int *)(lVar15 + lVar21);
    if (lVar16 == 0) {
      if (uVar22 == 0) {
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
        FUN_03595600(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar8 + 1,0);
        memcpy(&stack0x00000090,&stack0x000000e0,0x50);
        if (*(int *)(lVar14 + 0x18) == 0) goto LAB_035660f8;
        memcpy((void *)(lVar14 + lVar23 + 0x20),&stack0x00000090,0x50);
        __dest = (void *)(lVar14 + 0x20);
      }
      else {
        lVar15 = *plVar17;
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_035660f8;
        lVar15 = *(long *)(lVar15 + uVar22 * 8 + 0x20);
        if (lVar15 == 0) goto LAB_03566068;
        uVar24 = UnityEngine_Material__GetColorArray(lVar15,0);
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
        FUN_03595600(&stack0x000000e0,uVar24,iVar8 + 1,0);
        memcpy(&stack0x00000040,&stack0x000000e0,0x50);
        if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_035660f8;
        __dest = (void *)(lVar14 + lVar23 + 0x20);
        memcpy(__dest,&stack0x00000040,0x50);
      }
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(__dest,0);
    }
    else {
      iVar10 = *(int *)(lVar16 + 0x18);
      if (iVar10 < iVar8 * 4) {
LAB_03565e08:
        if (iVar8 < 0x401) {
          iVar8 = FUN_036c1d60(iVar8 + 1,0);
        }
        else {
          iVar8 = iVar8 + 0x100;
        }
        if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_03595b9c(lVar14 + lVar23 + 0x20,iVar8,0);
      }
      else if ((0 < iVar8) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
        iVar1 = iVar10 + 3;
        if (-1 < iVar10) {
          iVar1 = iVar10;
        }
        if (0x100 < (iVar1 >> 2) - iVar8) goto LAB_03565e08;
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
    if ((*(uint *)(lVar14 + 0x18) <= uVar22) || (*(uint *)(lVar15 + 0x18) <= uVar22))
    goto LAB_035660f8;
    *(undefined8 *)(lVar15 + lVar23 + 0x68) = *(undefined8 *)(lVar14 + lVar21 + -0x1c);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    uVar22 = uVar22 + 1;
    lVar23 = lVar23 + 0x50;
    lVar21 = lVar21 + 0x38;
    lVar26 = lVar26 + 8;
  } while (uVar9 != uVar22);
LAB_03565fb8:
  lVar23 = *plVar17;
  if (lVar23 != 0) {
    lVar21 = (-(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3) + 0x20;
    do {
      uVar9 = (uint)uVar11;
      if ((int)*(uint *)(lVar23 + 0x18) <= (int)uVar9) {
LAB_03565748:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar23 + 0x18) <= uVar9) {
LAB_035660f8:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar24 = *(undefined8 *)(lVar23 + lVar21);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar11 = FUN_036cee6c(uVar24,0,0);
      if ((uVar11 & 1) == 0) goto LAB_03565748;
      if ((*unaff_x20 == 0) || (lVar23 = *(long *)(*unaff_x20 + 0x60), lVar23 == 0)) break;
      if ((int)uVar9 < *(int *)(lVar23 + 0x18)) {
        lVar23 = *plVar17;
        if (lVar23 == 0) break;
        if (*(uint *)(lVar23 + 0x18) <= uVar9) goto LAB_035660f8;
        if ((*(long *)(lVar23 + lVar21) == 0) ||
           (lVar23 = FUN_037b514c(*(long *)(lVar23 + lVar21),0), lVar23 == 0)) break;
        FUN_0390f3a4(lVar23,0,0);
      }
      lVar23 = *plVar17;
      uVar11 = (ulong)(uVar9 + 1);
      lVar21 = lVar21 + 8;
    } while (lVar23 != 0);
  }
LAB_03566068:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


