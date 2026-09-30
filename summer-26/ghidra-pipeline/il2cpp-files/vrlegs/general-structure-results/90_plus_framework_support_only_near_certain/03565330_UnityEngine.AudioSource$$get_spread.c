/*
FUNCTION_NAME: UnityEngine.AudioSource$$get_spread
ENTRY_POINT: 03565330
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
UnityEngine_AudioSource__get_spread
          (undefined1 param_1 [16],ulong param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  float fVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
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
  long unaff_x23;
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
  long *unaff_x24;
  long *plVar21;
  long *unaff_x25;
  undefined8 uVar22;
  long lVar23;
  uint unaff_w26;
  ulong uVar24;
  long unaff_x27;
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
  
code_r0x03565330:
  iVar7 = FUN_036d3364(param_3,param_4);
  *(int *)(unaff_x23 + 0x18) = iVar7;
LAB_0356533c:
  lVar18 = *(long *)(unaff_x19 + 0xf8);
  if (lVar18 != 0) {
    iVar8 = *(int *)(lVar18 + 0x18);
    if (iVar8 == 0) {
      iVar8 = FUN_036d3364(lVar18,0);
      *(int *)(lVar18 + 0x18) = iVar8;
    }
    if (iVar7 != iVar8) {
      uVar11 = FUN_0359778c(0);
      if ((uVar11 & 1) == 0) {
        if (*unaff_x25 == 0) goto LAB_03566068;
        uVar19 = *(undefined8 *)(*unaff_x25 + 0x20);
      }
      else {
        if (*unaff_x25 == 0) goto LAB_03566068;
        uVar22 = *(undefined8 *)(*unaff_x25 + 0x20);
        uVar19 = *in_stack_00000028;
        if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_03594e9c(uVar19,uVar22,0);
        unaff_x25 = in_stack_00000038;
      }
      *in_stack_00000028 = uVar19;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000028);
      lVar18 = *unaff_x24;
      uVar19 = *in_stack_00000028;
      lVar23 = *unaff_x25;
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar18 = *unaff_x24;
      }
      uVar9 = FUN_03557fec(uVar19,lVar23,*(long *)(lVar18 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 8));
      *(undefined4 *)(unaff_x19 + 0x120) = uVar9;
      unaff_x25 = in_stack_00000038;
    }
LAB_03565410:
    if (*(long *)(unaff_x27 + 0x20) != 0) {
      iVar7 = FUN_03776eb8(*(long *)(unaff_x27 + 0x20),0);
      if (0 < iVar7) {
        if (*(long *)(unaff_x27 + 0x20) == 0) goto LAB_03566068;
        lVar18 = *unaff_x25;
        uVar19 = *in_stack_00000028;
        uVar9 = FUN_03776eb8(*(long *)(unaff_x27 + 0x20),0);
        if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)OVRPlugin_Sizef_TypeInfo);
        }
        uVar19 = FUN_03594928(lVar18,uVar19,uVar9,0);
        *in_stack_00000028 = uVar19;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000028,uVar19);
        lVar18 = *unaff_x24;
        uVar19 = *in_stack_00000028;
        lVar23 = *unaff_x25;
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar18 = *unaff_x24;
        }
        uVar9 = FUN_03557fec(uVar19,lVar23,*(long *)(lVar18 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 8));
        unaff_w29 = 1;
        *(undefined4 *)(unaff_x19 + 0x120) = uVar9;
        unaff_x25 = in_stack_00000038;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar11 = FUN_026b63d8(unaff_w26,0);
      plVar21 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
      if ((unaff_w26 != 0x200b) && ((uVar11 & 1) == 0)) {
        lVar18 = *unaff_x24;
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar18);
          lVar18 = *unaff_x24;
        }
        lVar23 = **(long **)(lVar18 + 0xb8);
        if (lVar23 == 0) goto LAB_03566068;
        uVar10 = *(uint *)(unaff_x19 + 0x120);
        if (*(uint *)(lVar23 + 0x18) <= uVar10) goto LAB_035660f8;
        if (*(int *)(lVar23 + (long)(int)uVar10 * 0x38 + 0x54) < 0x3fff) {
          if (*(int *)(lVar18 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar18);
            lVar23 = **(long **)(*unaff_x24 + 0xb8);
            if (lVar23 == 0) goto LAB_03566068;
            uVar10 = *(uint *)(unaff_x19 + 0x120);
          }
        }
        else {
          uVar22 = *in_stack_00000028;
          uVar19 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
          FUN_0369922c(uVar19,uVar22,0);
          lVar18 = *unaff_x24;
          lVar23 = *unaff_x25;
          if (*(int *)(lVar18 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar18 = *unaff_x24;
          }
          uVar10 = FUN_03557fec(uVar19,lVar23,*(long *)(lVar18 + 0xb8),
                                *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 8));
          *(uint *)(unaff_x19 + 0x120) = uVar10;
          lVar23 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar23 == 0) goto LAB_03566068;
        }
        if (*(uint *)(lVar23 + 0x18) <= uVar10) goto LAB_035660f8;
        lVar23 = lVar23 + (long)(int)uVar10 * 0x38;
        *(int *)(lVar23 + 0x54) = *(int *)(lVar23 + 0x54) + 1;
      }
      if ((*unaff_x20 != 0) && (lVar18 = *(long *)(*unaff_x20 + 0x38), lVar18 != 0)) {
        if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar18 + 0x18)) {
          *(undefined8 *)(lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x50) =
               *in_stack_00000028;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          if ((*unaff_x20 != 0) && (lVar18 = *(long *)(*unaff_x20 + 0x38), lVar18 != 0)) {
            if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar18 + 0x18)) {
              uVar10 = *(uint *)(unaff_x19 + 0x120);
              *(uint *)(lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x58) = uVar10;
              lVar18 = *unaff_x24;
              if (*(int *)(lVar18 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar18 = *unaff_x24;
                uVar10 = *(uint *)(unaff_x19 + 0x120);
              }
              lVar23 = **(long **)(lVar18 + 0xb8);
              if (lVar23 == 0) goto LAB_03566068;
              if (*(uint *)(lVar23 + 0x18) <= uVar10) goto LAB_035660f8;
              *(char *)(lVar23 + (long)(int)uVar10 * 0x38 + 0x41) = (char)unaff_w29;
              if (unaff_w29 != 0) {
                if (*(int *)(lVar18 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar23 = **(long **)(*unaff_x24 + 0xb8);
                  if (lVar23 == 0) goto LAB_03566068;
                  uVar10 = *(uint *)(unaff_x19 + 0x120);
                }
                if (*(uint *)(lVar23 + 0x18) <= uVar10) goto LAB_035660f8;
                puVar12 = (undefined8 *)(lVar23 + (long)(int)uVar10 * 0x38 + 0x48);
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
              uVar10 = *(uint *)(unaff_x19 + 0x490);
LAB_0356571c:
              do {
                *(uint *)(unaff_x19 + 0x490) = uVar10 + 1;
                do {
                  uVar10 = *(uint *)(unaff_x21 + 0x18);
                  unaff_w22 = unaff_w22 + 1;
                  if ((int)uVar10 <= (int)unaff_w22) {
LAB_0356573c:
                    if (*(char *)(unaff_x19 + 0x3f5) != '\0') {
                      *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
                      goto LAB_03565748;
                    }
                    lVar18 = *unaff_x20;
                    if (lVar18 == 0) goto LAB_03566068;
                    *(int *)(lVar18 + 0x1c) = in_stack_00000020._4_4_;
                    lVar23 = *unaff_x24;
                    if (*(int *)(lVar23 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar23 = *unaff_x24;
                    }
                    lVar23 = *(long *)(*(long *)(lVar23 + 0xb8) + 8);
                    if (lVar23 == 0) goto LAB_03566068;
                    uVar10 = FUN_0219b384(lVar23,*(undefined8 *)PTR_DAT_03ceb270);
                    *(uint *)(lVar18 + 0x34) = uVar10;
                    if (*unaff_x20 == 0) goto LAB_03566068;
                    plVar17 = (long *)(*unaff_x20 + 0x60);
                    lVar18 = *plVar17;
                    if (lVar18 == 0) goto LAB_03566068;
                    uVar11 = (ulong)uVar10;
                    if (*(int *)(lVar18 + 0x18) < (int)uVar10) {
                      if (*(int *)(*plVar21 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      FUN_01ff02b8(plVar17,uVar11,0,
                                   *(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo);
                    }
                    if (*(long *)(unaff_x19 + 0x708) == 0) goto LAB_03566068;
                    plVar17 = (long *)(unaff_x19 + 0x708);
                    if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar10) {
                      uVar9 = FUN_036c1d60(uVar10 + 1,0);
                      if (*(int *)(*plVar21 + 0xe0) == 0) {
                        thunk_FUN_01a58e78(*plVar21);
                      }
                      FUN_01ff025c(plVar17,uVar9,
                                   *(undefined8 *)OVRSystemPerfMetrics_PerfMetrics_TypeInfo);
                    }
                    if (*(char *)(unaff_x19 + 0x321) != '\0') {
                      if (*unaff_x20 == 0) goto LAB_03566068;
                      plVar20 = (long *)(*unaff_x20 + 0x38);
                      lVar18 = *plVar20;
                      if (lVar18 == 0) goto LAB_03566068;
                      iVar7 = *(int *)(unaff_x19 + 0x490);
                      if (0x100 < *(int *)(lVar18 + 0x18) - iVar7) {
                        iVar8 = 0x100;
                        if (0x100 < iVar7 + 1) {
                          iVar8 = iVar7 + 1;
                        }
                        if (*(int *)(*plVar21 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        FUN_01ff02b8(plVar20,iVar8,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo)
                        ;
                        unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                      }
                    }
                    fVar4 = DAT_00d38798;
                    if ((int)uVar10 < 1) goto LAB_03565fb8;
                    lVar18 = 0;
                    uVar24 = 0;
                    lVar23 = 0x54;
                    lVar26 = 0x20;
                    goto LAB_035658ec;
                  }
                  if (uVar10 <= unaff_w22) goto LAB_035660f8;
                  puVar25 = (uint *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x20);
                  if (*puVar25 == 0) goto LAB_0356573c;
                  if (*unaff_x20 == 0) goto LAB_03566068;
                  plVar17 = (long *)(*unaff_x20 + 0x38);
                  lVar18 = *plVar17;
                  iVar7 = *(int *)(unaff_x19 + 0x490);
                  if ((lVar18 == 0) || (*(int *)(lVar18 + 0x18) <= iVar7)) {
                    if (*(int *)(*plVar21 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    FUN_01ff02b8(plVar17,iVar7 + 1,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo)
                    ;
                    uVar10 = *(uint *)(unaff_x21 + 0x18);
                  }
                  if (uVar10 <= unaff_w22) goto LAB_035660f8;
                  unaff_w26 = *puVar25;
                  if ((unaff_w26 != 0x3c) || (*(char *)(unaff_x19 + 0x302) == '\0')) {
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
                        uVar11 = FUN_026b8070(unaff_w26,0);
                        if ((uVar11 & 1) != 0) {
                          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar10 = FUN_026b8594(unaff_w26,0);
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
                        uVar10 = FUN_026b8410(unaff_w26,0);
LAB_03564aa8:
                        unaff_w26 = uVar10 & 0xffff;
                      }
                    }
LAB_03564aac:
                    unaff_x27 = FUN_03591848();
                    if (unaff_x27 == 0) {
                      iVar7 = FUN_035975f8();
                      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
                      if (iVar7 == 0) {
                        uVar10 = 0x25a1;
                      }
                      else {
                        uVar10 = FUN_035975f8(0);
                      }
                      *puVar25 = uVar10;
                      uVar19 = *(undefined8 *)(unaff_x19 + 0x100);
                      uVar9 = *(undefined4 *)(unaff_x19 + 0x25c);
                      uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                      if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      unaff_x27 = FUN_03570fc4(uVar10,uVar19,1,uVar9,uVar2,
                                               (long)&stack0x000001b8 + 4,0);
                      if (unaff_x27 == 0) {
                        lVar18 = FUN_03597770();
                        if (lVar18 != 0) {
                          lVar18 = FUN_03597770(0);
                          if (lVar18 == 0) goto LAB_03566068;
                          if (0 < *(int *)(lVar18 + 0x18)) {
                            uVar22 = *(undefined8 *)(unaff_x19 + 0x100);
                            uVar19 = FUN_03597770(0);
                            uVar9 = *(undefined4 *)(unaff_x19 + 0x25c);
                            uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                            if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                              thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                            }
                            unaff_x27 = FUN_035714e4(uVar10,uVar22,uVar19,1,uVar9,uVar2,
                                                     (long)&stack0x000001b8 + 4,0);
                            if (unaff_x27 != 0) goto LAB_03564b5c;
                          }
                        }
                        uVar19 = FUN_03597650(0);
                        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                        }
                        uVar11 = FUN_036cee6c(uVar19,0,0);
                        if ((uVar11 & 1) != 0) {
                          uVar19 = FUN_03597650(0);
                          uVar9 = *(undefined4 *)(unaff_x19 + 0x25c);
                          uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                          if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                            thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                          }
                          unaff_x27 = FUN_03570fc4(uVar10,uVar19,1,uVar9,uVar2,
                                                   (long)&stack0x000001b8 + 4,0);
                          if (unaff_x27 != 0) goto LAB_03564b5c;
                        }
                        if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
                        *puVar25 = 0x20;
                        uVar19 = *(undefined8 *)(unaff_x19 + 0x100);
                        uVar9 = *(undefined4 *)(unaff_x19 + 0x25c);
                        uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                        if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        uVar10 = 0x20;
                        unaff_x27 = FUN_03570fc4(0x20,uVar19,1,uVar9,uVar2,
                                                 (long)&stack0x000001b8 + 4,0);
                        if (unaff_x27 == 0) {
                          if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
                          *puVar25 = 3;
                          uVar19 = *(undefined8 *)(unaff_x19 + 0x100);
                          uVar9 = *(undefined4 *)(unaff_x19 + 0x25c);
                          uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                          if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar10 = 3;
                          unaff_x27 = FUN_03570fc4(3,uVar19,1,uVar9,uVar2,(long)&stack0x000001b8 + 4
                                                   ,0);
                        }
                      }
LAB_03564b5c:
                      uVar11 = FUN_03597634(0);
                      if ((uVar11 & 1) == 0) {
                        plVar21 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,4);
                        if ((int)unaff_w26 < 0x10000) {
                          in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,unaff_w26);
                          lVar18 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,
                                                      &stack0x000000e0);
                          if (plVar21 == (long *)0x0) goto LAB_03566068;
                          if ((lVar18 != 0) &&
                             (lVar23 = thunk_FUN_01a89d6c(lVar18,*(undefined8 *)(*plVar21 + 0x40)),
                             lVar23 == 0)) goto LAB_035660fc;
                          if ((int)plVar21[3] == 0) goto LAB_035660f8;
                          plVar21[4] = lVar18;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    (plVar21 + 4,lVar18);
                          if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
                          lVar18 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
                          if ((lVar18 != 0) &&
                             (lVar23 = thunk_FUN_01a89d6c(lVar18,*(undefined8 *)(*plVar21 + 0x40)),
                             lVar23 == 0)) goto LAB_035660fc;
                          if (*(uint *)(plVar21 + 3) < 2) goto LAB_035660f8;
                          plVar21[5] = lVar18;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    (plVar21 + 5,lVar18);
                          if (unaff_x27 == 0) goto LAB_03566068;
                          in_stack_00000168._4_4_ = *(undefined4 *)(unaff_x27 + 0x14);
                          lVar18 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,
                                                      (long)&stack0x00000168 + 4);
                          if ((lVar18 != 0) &&
                             (lVar23 = thunk_FUN_01a89d6c(lVar18,*(undefined8 *)(*plVar21 + 0x40)),
                             lVar23 == 0)) goto LAB_035660fc;
                          if (*(uint *)(plVar21 + 3) < 3) goto LAB_035660f8;
                          plVar21[6] = lVar18;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    (plVar21 + 6,lVar18);
                          lVar18 = FUN_036d3824();
                          if ((lVar18 != 0) &&
                             (lVar23 = thunk_FUN_01a89d6c(lVar18,*(undefined8 *)(*plVar21 + 0x40)),
                             lVar23 == 0)) goto LAB_035660fc;
                          if (*(uint *)(plVar21 + 3) < 4) goto LAB_035660f8;
                          plVar21[7] = lVar18;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    (plVar21 + 7,lVar18);
                          puVar12 = (undefined8 *)OVRPlugin_TrackedKeyboardFlags_TypeInfo;
                        }
                        else {
                          in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,unaff_w26);
                          lVar18 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,
                                                      &stack0x000000e0);
                          if (plVar21 == (long *)0x0) goto LAB_03566068;
                          if ((lVar18 != 0) &&
                             (lVar23 = thunk_FUN_01a89d6c(lVar18,*(undefined8 *)(*plVar21 + 0x40)),
                             lVar23 == 0)) goto LAB_035660fc;
                          if ((int)plVar21[3] == 0) goto LAB_035660f8;
                          plVar21[4] = lVar18;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    (plVar21 + 4,lVar18);
                          if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
                          lVar18 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
                          if ((lVar18 != 0) &&
                             (lVar23 = thunk_FUN_01a89d6c(lVar18,*(undefined8 *)(*plVar21 + 0x40)),
                             lVar23 == 0)) goto LAB_035660fc;
                          if (*(uint *)(plVar21 + 3) < 2) goto LAB_035660f8;
                          plVar21[5] = lVar18;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    (plVar21 + 5,lVar18);
                          if (unaff_x27 == 0) goto LAB_03566068;
                          in_stack_00000168._4_4_ = *(undefined4 *)(unaff_x27 + 0x14);
                          lVar18 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,
                                                      (long)&stack0x00000168 + 4);
                          if ((lVar18 != 0) &&
                             (lVar23 = thunk_FUN_01a89d6c(lVar18,*(undefined8 *)(*plVar21 + 0x40)),
                             lVar23 == 0)) goto LAB_035660fc;
                          if (*(uint *)(plVar21 + 3) < 3) goto LAB_035660f8;
                          plVar21[6] = lVar18;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    (plVar21 + 6,lVar18);
                          lVar18 = FUN_036d3824();
                          if ((lVar18 != 0) &&
                             (lVar23 = thunk_FUN_01a89d6c(lVar18,*(undefined8 *)(*plVar21 + 0x40)),
                             lVar23 == 0)) goto LAB_035660fc;
                          if (*(uint *)(plVar21 + 3) < 4) goto LAB_035660f8;
                          plVar21[7] = lVar18;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    (plVar21 + 7,lVar18);
                          puVar12 = (undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo;
                        }
                        uVar19 = FUN_025be8f4(*puVar12,plVar21,0);
                        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        FUN_0367b470(uVar19);
                        unaff_x25 = in_stack_00000038;
                        unaff_w26 = uVar10;
                      }
                      else {
                        unaff_x25 = in_stack_00000038;
                        unaff_w26 = uVar10;
                        if (unaff_x27 == 0) goto LAB_03566068;
                      }
                    }
                    if (*(char *)(unaff_x27 + 0x10) == '\x01') {
                      lVar18 = *(long *)(unaff_x27 + 0x18);
                      if (lVar18 == 0) goto LAB_03566068;
                      iVar7 = *(int *)(lVar18 + 0x18);
                      if (iVar7 == 0) {
                        iVar7 = FUN_036d3364(lVar18,0);
                        *(int *)(lVar18 + 0x18) = iVar7;
                      }
                      lVar18 = *unaff_x25;
                      if (lVar18 == 0) goto LAB_03566068;
                      iVar8 = *(int *)(lVar18 + 0x18);
                      if (iVar8 == 0) {
                        iVar8 = FUN_036d3364(lVar18,0);
                        *(int *)(lVar18 + 0x18) = iVar8;
                      }
                      if (iVar7 == iVar8) {
                        unaff_w29 = 0;
                      }
                      else {
                        plVar21 = *(long **)(unaff_x27 + 0x18);
                        if (plVar21 == (long *)0x0) {
                          plVar21 = (long *)0x0;
                          *unaff_x25 = 0;
                        }
                        else {
                          lVar18 = *(long *)OVRPlugin_OVRP_1_83_0_TypeInfo;
                          bVar3 = *(byte *)(lVar18 + 0x130);
                          if (*(byte *)(*plVar21 + 0x130) < bVar3) {
                            plVar17 = (long *)0x0;
                          }
                          else {
                            plVar17 = plVar21;
                            if (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar3 * 8 + -8) !=
                                lVar18) {
                              plVar17 = (long *)0x0;
                            }
                          }
                          *unaff_x25 = (long)plVar17;
                          if (*(byte *)(*plVar21 + 0x130) < bVar3) {
                            plVar21 = (long *)0x0;
                          }
                          else if (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar3 * 8 + -8) !=
                                   lVar18) {
                            plVar21 = (long *)0x0;
                          }
                        }
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (unaff_x25,plVar21);
                        unaff_w29 = 1;
                      }
                    }
                    else {
                      unaff_w29 = 0;
                    }
                    if ((*unaff_x20 == 0) || (lVar18 = *(long *)(*unaff_x20 + 0x38), lVar18 == 0))
                    goto LAB_03566068;
                    if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
                    lVar18 = lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
                    plVar21 = (long *)(lVar18 + 0x30);
                    *plVar21 = unaff_x27;
                    *(undefined4 *)(lVar18 + 0x2c) = 0;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (plVar21,unaff_x27);
                    if ((*unaff_x20 == 0) || (lVar18 = *(long *)(*unaff_x20 + 0x38), lVar18 == 0))
                    goto LAB_03566068;
                    uVar10 = *(uint *)(unaff_x19 + 0x490);
                    if (*(uint *)(lVar18 + 0x18) <= uVar10) goto LAB_035660f8;
                    lVar23 = lVar18 + (long)(int)uVar10 * 0x178;
                    *(short *)(lVar23 + 0x20) = (short)unaff_w26;
                    *(undefined1 *)(lVar23 + 0x5c) = uStack00000000000001bc;
                    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
                    lVar18 = lVar18 + (long)(int)uVar10 * 0x178;
                    *(undefined8 *)(lVar18 + 0x24) =
                         *(undefined8 *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x24);
                    *(long *)(lVar18 + 0x38) = *unaff_x25;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    puVar5 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                    if (*(char *)(unaff_x27 + 0x10) != '\x02') {
                      unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                      if (unaff_w29 == 0) goto LAB_03565410;
                      param_3 = *unaff_x25;
                      if (param_3 == 0) goto LAB_03566068;
                      iVar7 = *(int *)(param_3 + 0x18);
                      if (iVar7 != 0) goto LAB_0356533c;
                      param_4 = 0;
                      unaff_x23 = param_3;
                      goto code_r0x03565330;
                    }
                    plVar21 = *(long **)(unaff_x27 + 0x18);
                    if (plVar21 == (long *)0x0) goto LAB_03566068;
                    bVar3 = *(byte *)(*(long *)OVRPlugin_Sizei_TypeInfo + 0x130);
                    if ((*(byte *)(*plVar21 + 0x130) < bVar3) ||
                       (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar3 * 8 + -8) !=
                        *(long *)OVRPlugin_Sizei_TypeInfo)) goto LAB_03566068;
                    lVar23 = plVar21[4];
                    lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    if (*(int *)(lVar18 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar18 = *(long *)puVar5;
                    }
                    uVar10 = FUN_03558224(lVar23,plVar21,*(long *)(lVar18 + 0xb8),
                                          *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 8));
                    *(uint *)(unaff_x19 + 0x120) = uVar10;
                    lVar18 = **(long **)(*(long *)puVar5 + 0xb8);
                    if (lVar18 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar18 + 0x18) <= uVar10) goto LAB_035660f8;
                    lVar18 = lVar18 + (long)(int)uVar10 * 0x38;
                    *(int *)(lVar18 + 0x54) = *(int *)(lVar18 + 0x54) + 1;
                    if ((*unaff_x20 == 0) || (lVar18 = *(long *)(*unaff_x20 + 0x38), lVar18 == 0))
                    goto LAB_03566068;
                    if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
                    lVar18 = lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
                    *(undefined4 *)(lVar18 + 0x2c) = 1;
                    uVar9 = *(undefined4 *)(unaff_x19 + 0x120);
                    *(undefined8 *)(lVar18 + 0x40) = plVar21;
                    *(undefined4 *)(lVar18 + 0x58) = uVar9;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              ((undefined8 *)(lVar18 + 0x40),plVar21);
                    unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                       (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar18 == 0))
                    goto LAB_03566068;
                    uVar10 = *(uint *)(unaff_x19 + 0x490);
                    if (*(uint *)(lVar18 + 0x18) <= uVar10) goto LAB_035660f8;
                    *(undefined4 *)(lVar18 + (long)(int)uVar10 * 0x178 + 0x48) =
                         *(undefined4 *)(unaff_x27 + 0x28);
                    *(undefined4 *)(unaff_x19 + 0x644) = 0;
                    *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
                    in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
                    unaff_x25 = in_stack_00000038;
                    plVar21 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
                    goto LAB_0356571c;
                  }
                  uVar9 = *(undefined4 *)(unaff_x19 + 0x120);
                  uVar11 = FUN_03586568();
                  uVar6 = uStack00000000000001b8;
                  if ((uVar11 & 1) == 0) goto LAB_035649d0;
                  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
                  iVar7 = *(int *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x24);
                  if ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0) {
                    *(undefined1 *)(unaff_x19 + 0x26a) = 1;
                  }
                  puVar5 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                  unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  unaff_w22 = uStack00000000000001b8;
                } while (*(int *)(unaff_x19 + 0x644) != 1);
                lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*(int *)(lVar18 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar18 = *(long *)puVar5;
                }
                lVar18 = **(long **)(lVar18 + 0xb8);
                if (lVar18 == 0) goto LAB_03566068;
                if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) break;
                lVar18 = lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
                *(int *)(lVar18 + 0x54) = *(int *)(lVar18 + 0x54) + 1;
                if ((*unaff_x20 == 0) || (lVar18 = *(long *)(*unaff_x20 + 0x38), lVar18 == 0))
                goto LAB_03566068;
                if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) break;
                uVar2 = *(undefined4 *)(unaff_x19 + 0x6a4);
                lVar18 = lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
                *(short *)(lVar18 + 0x20) = (short)uVar2 + -0x2000;
                *(undefined4 *)(lVar18 + 0x48) = uVar2;
                *(long *)(lVar18 + 0x38) = *in_stack_00000038;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                if ((*unaff_x20 == 0) || (lVar18 = *(long *)(*unaff_x20 + 0x38), lVar18 == 0))
                goto LAB_03566068;
                if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) break;
                *(undefined8 *)(lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x40) =
                     *(undefined8 *)(unaff_x19 + 0x698);
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                if ((*unaff_x20 == 0) || (lVar18 = *(long *)(*unaff_x20 + 0x38), lVar18 == 0))
                goto LAB_03566068;
                uVar10 = *(uint *)(unaff_x19 + 0x490);
                if (*(uint *)(lVar18 + 0x18) <= uVar10) break;
                *(undefined4 *)(lVar18 + (long)(int)uVar10 * 0x178 + 0x58) =
                     *(undefined4 *)(unaff_x19 + 0x120);
                if ((*(long *)(unaff_x19 + 0x698) == 0) ||
                   (lVar23 = UnityEngine_Material__DisableKeyword(*(long *)(unaff_x19 + 0x698),0),
                   lVar23 == 0)) goto LAB_03566068;
                FUN_02215a88(lVar23,*(undefined4 *)(unaff_x19 + 0x6a4),&stack0x000000e0,
                             *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
                if (*(uint *)(lVar18 + 0x18) <= uVar10) break;
                *(undefined8 *)(lVar18 + (long)(int)uVar10 * 0x178 + 0x30) = in_stack_000000e0;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                if ((*unaff_x20 == 0) || (lVar18 = *(long *)(*unaff_x20 + 0x38), lVar18 == 0))
                goto LAB_03566068;
                uVar10 = *(uint *)(unaff_x19 + 0x490);
                if (*(uint *)(lVar18 + 0x18) <= uVar10) break;
                uVar2 = *(undefined4 *)(unaff_x19 + 0x644);
                lVar23 = lVar18 + (long)(int)uVar10 * 0x178;
                *(int *)(lVar23 + 0x24) = iVar7;
                *(undefined4 *)(lVar23 + 0x2c) = uVar2;
                if (*(uint *)(unaff_x21 + 0x18) <= uVar6) break;
                *(int *)(lVar18 + (long)(int)uVar10 * 0x178 + 0x28) =
                     (*(int *)(unaff_x21 + (long)(int)uVar6 * 0xc + 0x24) - iVar7) + 1;
                *(undefined4 *)(unaff_x19 + 0x644) = 0;
                *(undefined4 *)(unaff_x19 + 0x120) = uVar9;
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
    }
  }
  goto LAB_03566068;
LAB_035658ec:
  do {
    fVar30 = (float)param_2;
    if (uVar24 != 0) {
      lVar15 = *plVar17;
      if (lVar15 == 0) goto LAB_03566068;
      if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_035660f8;
      uVar19 = *(undefined8 *)(lVar15 + uVar24 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar13 = FUN_036d35a8(uVar19,0,0);
      if ((uVar13 & 1) != 0) {
        lVar15 = *unaff_x24;
        plVar21 = (long *)*plVar17;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar15 = *unaff_x24;
        }
        lVar15 = **(long **)(lVar15 + 0xb8);
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar15 = lVar15 + lVar23;
        in_stack_00000160 = *(undefined8 *)(lVar15 + -4);
        in_stack_00000158 = *(undefined8 *)(lVar15 + -0xc);
        in_stack_00000150 = *(undefined8 *)(lVar15 + -0x14);
        in_stack_00000148 = *(undefined8 *)(lVar15 + -0x1c);
        uVar19 = *(undefined8 *)(lVar15 + -0x24);
        in_stack_00000138 = *(undefined8 *)(lVar15 + -0x2c);
        in_stack_00000130 = *(undefined8 *)(lVar15 + -0x34);
        in_stack_00000140 = uVar19;
        lVar15 = FUN_0359e964();
        fVar30 = (float)uVar19;
        if (plVar21 == (long *)0x0) goto LAB_03566068;
        if ((lVar15 != 0) &&
           (lVar14 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar21 + 0x40)), lVar14 == 0)) {
LAB_035660fc:
          uVar19 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar19,0);
        }
        if (*(uint *)(plVar21 + 3) <= uVar24) goto LAB_035660f8;
        plVar21[uVar24 + 4] = lVar15;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long)plVar21 + lVar26,lVar15);
        unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if ((*unaff_x20 == 0) || (lVar15 = *(long *)(*unaff_x20 + 0x60), lVar15 == 0))
        goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_035660f8;
        puVar12 = (undefined8 *)(lVar15 + lVar18 + 0x30);
        *puVar12 = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar12,0);
      }
      if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_03566068;
      fVar27 = (float)FUN_036dba50(*(long *)(unaff_x19 + 0x380),0);
      lVar15 = *plVar17;
      if (lVar15 == 0) goto LAB_03566068;
      if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_035660f8;
      lVar15 = *(long *)(lVar15 + uVar24 * 8 + 0x20);
      if ((lVar15 == 0) || (fVar29 = fVar30, lVar15 = FUN_037b4844(lVar15,0), lVar15 == 0))
      goto LAB_03566068;
      fVar28 = (float)FUN_036dba50(lVar15,0);
      fVar30 = (fVar30 - fVar29) * (fVar30 - fVar29);
      param_2 = (ulong)(uint)fVar30;
      if (fVar4 <= (fVar27 - fVar28) * (fVar27 - fVar28) + fVar30) {
        lVar15 = *plVar17;
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar15 = *(long *)(lVar15 + uVar24 * 8 + 0x20);
        if (lVar15 == 0) goto LAB_03566068;
        lVar15 = FUN_037b4844(lVar15,0);
        if ((*(long *)(unaff_x19 + 0x380) == 0) ||
           (FUN_036dba50(*(long *)(unaff_x19 + 0x380),0), lVar15 == 0)) goto LAB_03566068;
        FUN_036dbae0(lVar15,0);
      }
      lVar15 = *plVar17;
      if (lVar15 == 0) goto LAB_03566068;
      if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_035660f8;
      lVar15 = *(long *)(lVar15 + uVar24 * 8 + 0x20);
      if (lVar15 == 0) goto LAB_03566068;
      uVar19 = *(undefined8 *)(lVar15 + 0xf0);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar13 = FUN_036d35a8(uVar19,0,0);
      if ((uVar13 & 1) == 0) {
        lVar15 = *plVar17;
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar15 = *(long *)(lVar15 + uVar24 * 8 + 0x20);
        if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0xf0), lVar15 == 0)) goto LAB_03566068;
        iVar7 = FUN_036d3364(lVar15,0);
        lVar15 = *unaff_x24;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar15);
          lVar15 = *unaff_x24;
        }
        lVar15 = **(long **)(lVar15 + 0xb8);
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar15 = *(long *)(lVar15 + lVar23 + -0x1c);
        if (lVar15 == 0) goto LAB_03566068;
        iVar8 = FUN_036d3364(lVar15,0);
        if (iVar7 != iVar8) goto LAB_03565b98;
      }
      else {
LAB_03565b98:
        lVar15 = *plVar17;
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar14 = *unaff_x24;
        lVar15 = *(long *)(lVar15 + uVar24 * 8 + 0x20);
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar14 = *unaff_x24;
        }
        lVar14 = **(long **)(lVar14 + 0xb8);
        if (lVar14 == 0) goto LAB_03566068;
        if (*(uint *)(lVar14 + 0x18) <= uVar24) goto LAB_035660f8;
        if (lVar15 == 0) goto LAB_03566068;
        thunk_FUN_0359e5ac(lVar15,*(undefined8 *)(lVar14 + lVar23 + -0x1c),0);
        lVar15 = *plVar17;
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar14 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar14 == 0) goto LAB_03566068;
        if (*(uint *)(lVar14 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar15 = *(long *)(lVar15 + uVar24 * 8 + 0x20);
        if (lVar15 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar15 + 0xd8) = *(undefined8 *)(lVar14 + lVar23 + -0x2c);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar15 = *plVar17;
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar14 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar14 == 0) goto LAB_03566068;
        if (*(uint *)(lVar14 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar15 = *(long *)(lVar15 + uVar24 * 8 + 0x20);
        if (lVar15 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar15 + 0xe0) = *(undefined8 *)(lVar14 + lVar23 + -0x24);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      lVar15 = *unaff_x24;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar15 = *unaff_x24;
      }
      lVar14 = **(long **)(lVar15 + 0xb8);
      if (lVar14 == 0) goto LAB_03566068;
      if (*(uint *)(lVar14 + 0x18) <= uVar24) goto LAB_035660f8;
      if (*(char *)(lVar14 + lVar23 + -0x13) != '\0') {
        lVar16 = *plVar17;
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar16 = *(long *)(lVar16 + uVar24 * 8 + 0x20);
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar14 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar14 == 0) goto LAB_03566068;
        }
        if (*(uint *)(lVar14 + 0x18) <= uVar24) goto LAB_035660f8;
        if (lVar16 == 0) goto LAB_03566068;
        FUN_0359e608(lVar16,*(undefined8 *)(lVar14 + lVar23 + -0x1c),0);
        lVar15 = *plVar17;
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar14 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar14 == 0) goto LAB_03566068;
        if (*(uint *)(lVar14 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar15 = *(long *)(lVar15 + uVar24 * 8 + 0x20);
        if (lVar15 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar15 + 0x100) = *(undefined8 *)(lVar14 + lVar23 + -0xc);
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
    if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_035660f8;
    if ((*unaff_x20 == 0) || (lVar14 = *(long *)(*unaff_x20 + 0x60), lVar14 == 0))
    goto LAB_03566068;
    if (*(uint *)(lVar14 + 0x18) <= uVar24) goto LAB_035660f8;
    lVar16 = *(long *)(lVar14 + lVar18 + 0x30);
    iVar7 = *(int *)(lVar15 + lVar23);
    if (lVar16 == 0) {
      if (uVar24 == 0) {
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
        if (*(int *)(lVar14 + 0x18) == 0) goto LAB_035660f8;
        memcpy((void *)(lVar14 + lVar18 + 0x20),&stack0x00000090,0x50);
        __dest = (void *)(lVar14 + 0x20);
      }
      else {
        lVar15 = *plVar17;
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar15 = *(long *)(lVar15 + uVar24 * 8 + 0x20);
        if (lVar15 == 0) goto LAB_03566068;
        uVar19 = UnityEngine_Material__GetColorArray(lVar15,0);
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
        FUN_03595600(&stack0x000000e0,uVar19,iVar7 + 1,0);
        memcpy(&stack0x00000040,&stack0x000000e0,0x50);
        if (*(uint *)(lVar14 + 0x18) <= uVar24) goto LAB_035660f8;
        __dest = (void *)(lVar14 + lVar18 + 0x20);
        memcpy(__dest,&stack0x00000040,0x50);
      }
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(__dest,0);
    }
    else {
      iVar8 = *(int *)(lVar16 + 0x18);
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
        FUN_03595b9c(lVar14 + lVar18 + 0x20,iVar7,0);
      }
      else if ((0 < iVar7) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
        iVar1 = iVar8 + 3;
        if (-1 < iVar8) {
          iVar1 = iVar8;
        }
        if (0x100 < (iVar1 >> 2) - iVar7) goto LAB_03565e08;
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
    if ((*(uint *)(lVar14 + 0x18) <= uVar24) || (*(uint *)(lVar15 + 0x18) <= uVar24))
    goto LAB_035660f8;
    *(undefined8 *)(lVar15 + lVar18 + 0x68) = *(undefined8 *)(lVar14 + lVar23 + -0x1c);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    uVar24 = uVar24 + 1;
    lVar18 = lVar18 + 0x50;
    lVar23 = lVar23 + 0x38;
    lVar26 = lVar26 + 8;
  } while (uVar10 != uVar24);
LAB_03565fb8:
  lVar18 = *plVar17;
  if (lVar18 != 0) {
    lVar23 = (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3) + 0x20;
    do {
      uVar10 = (uint)uVar11;
      if ((int)*(uint *)(lVar18 + 0x18) <= (int)uVar10) {
LAB_03565748:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar18 + 0x18) <= uVar10) {
LAB_035660f8:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar19 = *(undefined8 *)(lVar18 + lVar23);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar11 = FUN_036cee6c(uVar19,0,0);
      if ((uVar11 & 1) == 0) goto LAB_03565748;
      if ((*unaff_x20 == 0) || (lVar18 = *(long *)(*unaff_x20 + 0x60), lVar18 == 0)) break;
      if ((int)uVar10 < *(int *)(lVar18 + 0x18)) {
        lVar18 = *plVar17;
        if (lVar18 == 0) break;
        if (*(uint *)(lVar18 + 0x18) <= uVar10) goto LAB_035660f8;
        if ((*(long *)(lVar18 + lVar23) == 0) ||
           (lVar18 = FUN_037b514c(*(long *)(lVar18 + lVar23),0), lVar18 == 0)) break;
        FUN_0390f3a4(lVar18,0,0);
      }
      lVar18 = *plVar17;
      uVar11 = (ulong)(uVar10 + 1);
      lVar23 = lVar23 + 8;
    } while (lVar18 != 0);
  }
LAB_03566068:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


