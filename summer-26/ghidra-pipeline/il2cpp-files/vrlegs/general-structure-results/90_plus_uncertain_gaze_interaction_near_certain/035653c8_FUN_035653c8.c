/*
FUNCTION_NAME: FUN_035653c8
ENTRY_POINT: 035653c8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 166
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


undefined4 FUN_035653c8(undefined1 param_1 [16],ulong param_2,undefined8 param_3,undefined8 param_4)

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
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  void *__dest;
  long lVar16;
  long lVar17;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long *plVar21;
  long *unaff_x24;
  long *plVar22;
  long *unaff_x25;
  long lVar23;
  uint unaff_w26;
  ulong uVar24;
  long unaff_x27;
  long unaff_x28;
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
  
code_r0x035653c8:
  *in_stack_00000028 = param_4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000028);
  lVar11 = *unaff_x24;
  uVar19 = *in_stack_00000028;
  lVar23 = *unaff_x25;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar11 = *unaff_x24;
  }
  uVar7 = FUN_03557fec(uVar19,lVar23,*(long *)(lVar11 + 0xb8),
                       *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8));
  *(undefined4 *)(unaff_x19 + 0x120) = uVar7;
LAB_03565410:
  if (*(long *)(unaff_x27 + 0x20) != 0) {
    iVar8 = FUN_03776eb8(*(long *)(unaff_x27 + 0x20),0);
    if (0 < iVar8) {
      if (*(long *)(unaff_x27 + 0x20) == 0) goto LAB_03566068;
      lVar11 = *in_stack_00000038;
      uVar19 = *in_stack_00000028;
      uVar7 = FUN_03776eb8(*(long *)(unaff_x27 + 0x20),0);
      if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)OVRPlugin_Sizef_TypeInfo);
      }
      uVar19 = FUN_03594928(lVar11,uVar19,uVar7,0);
      *in_stack_00000028 = uVar19;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000028,uVar19);
      lVar11 = *unaff_x24;
      uVar19 = *in_stack_00000028;
      lVar23 = *in_stack_00000038;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar11 = *unaff_x24;
      }
      unaff_x28 = 0x178;
      uVar7 = FUN_03557fec(uVar19,lVar23,*(long *)(lVar11 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8));
      unaff_w29 = 1;
      *(undefined4 *)(unaff_x19 + 0x120) = uVar7;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar12 = FUN_026b63d8(unaff_w26,0);
    plVar22 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
    if ((unaff_w26 != 0x200b) && ((uVar12 & 1) == 0)) {
      lVar11 = *unaff_x24;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar11);
        lVar11 = *unaff_x24;
      }
      lVar23 = **(long **)(lVar11 + 0xb8);
      if (lVar23 == 0) goto LAB_03566068;
      uVar9 = *(uint *)(unaff_x19 + 0x120);
      if (*(uint *)(lVar23 + 0x18) <= uVar9) goto LAB_035660f8;
      if (*(int *)(lVar23 + (long)(int)uVar9 * 0x38 + 0x54) < 0x3fff) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar11);
          lVar23 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar23 == 0) goto LAB_03566068;
          uVar9 = *(uint *)(unaff_x19 + 0x120);
        }
      }
      else {
        uVar20 = *in_stack_00000028;
        uVar19 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
        FUN_0369922c(uVar19,uVar20,0);
        lVar11 = *unaff_x24;
        lVar23 = *in_stack_00000038;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar11 = *unaff_x24;
        }
        uVar9 = FUN_03557fec(uVar19,lVar23,*(long *)(lVar11 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8));
        *(uint *)(unaff_x19 + 0x120) = uVar9;
        lVar23 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar23 == 0) goto LAB_03566068;
      }
      if (*(uint *)(lVar23 + 0x18) <= uVar9) goto LAB_035660f8;
      lVar23 = lVar23 + (long)(int)uVar9 * 0x38;
      *(int *)(lVar23 + 0x54) = *(int *)(lVar23 + 0x54) + 1;
    }
    if ((*unaff_x20 != 0) && (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 != 0)) {
      if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar11 + 0x18)) {
        *(undefined8 *)(lVar11 + (int)*(uint *)(unaff_x19 + 0x490) * unaff_x28 + 0x50) =
             *in_stack_00000028;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*unaff_x20 != 0) && (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 != 0)) {
          if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar11 + 0x18)) {
            uVar9 = *(uint *)(unaff_x19 + 0x120);
            *(uint *)(lVar11 + (int)*(uint *)(unaff_x19 + 0x490) * unaff_x28 + 0x58) = uVar9;
            lVar11 = *unaff_x24;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar11 = *unaff_x24;
              uVar9 = *(uint *)(unaff_x19 + 0x120);
            }
            lVar23 = **(long **)(lVar11 + 0xb8);
            if (lVar23 == 0) goto LAB_03566068;
            if (*(uint *)(lVar23 + 0x18) <= uVar9) goto LAB_035660f8;
            *(char *)(lVar23 + (long)(int)uVar9 * 0x38 + 0x41) = (char)unaff_w29;
            if (unaff_w29 != 0) {
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar23 = **(long **)(*unaff_x24 + 0xb8);
                if (lVar23 == 0) goto LAB_03566068;
                uVar9 = *(uint *)(unaff_x19 + 0x120);
              }
              if (*(uint *)(lVar23 + 0x18) <= uVar9) goto LAB_035660f8;
              puVar13 = (undefined8 *)(lVar23 + (long)(int)uVar9 * 0x38 + 0x48);
              *puVar13 = in_stack_00000018;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (puVar13,in_stack_00000018);
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
                  lVar11 = *unaff_x20;
                  if (lVar11 == 0) goto LAB_03566068;
                  *(int *)(lVar11 + 0x1c) = in_stack_00000020._4_4_;
                  lVar23 = *unaff_x24;
                  if (*(int *)(lVar23 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar23 = *unaff_x24;
                  }
                  lVar23 = *(long *)(*(long *)(lVar23 + 0xb8) + 8);
                  if (lVar23 == 0) goto LAB_03566068;
                  uVar9 = FUN_0219b384(lVar23,*(undefined8 *)PTR_DAT_03ceb270);
                  *(uint *)(lVar11 + 0x34) = uVar9;
                  if (*unaff_x20 == 0) goto LAB_03566068;
                  plVar18 = (long *)(*unaff_x20 + 0x60);
                  lVar11 = *plVar18;
                  if (lVar11 == 0) goto LAB_03566068;
                  uVar12 = (ulong)uVar9;
                  if (*(int *)(lVar11 + 0x18) < (int)uVar9) {
                    if (*(int *)(*plVar22 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    FUN_01ff02b8(plVar18,uVar12,0,*(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo
                                );
                  }
                  if (*(long *)(unaff_x19 + 0x708) == 0) goto LAB_03566068;
                  plVar18 = (long *)(unaff_x19 + 0x708);
                  if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar9) {
                    uVar7 = FUN_036c1d60(uVar9 + 1,0);
                    if (*(int *)(*plVar22 + 0xe0) == 0) {
                      thunk_FUN_01a58e78(*plVar22);
                    }
                    FUN_01ff025c(plVar18,uVar7,
                                 *(undefined8 *)OVRSystemPerfMetrics_PerfMetrics_TypeInfo);
                  }
                  if (*(char *)(unaff_x19 + 0x321) != '\0') {
                    if (*unaff_x20 == 0) goto LAB_03566068;
                    plVar21 = (long *)(*unaff_x20 + 0x38);
                    lVar11 = *plVar21;
                    if (lVar11 == 0) goto LAB_03566068;
                    iVar8 = *(int *)(unaff_x19 + 0x490);
                    if (0x100 < *(int *)(lVar11 + 0x18) - iVar8) {
                      iVar10 = 0x100;
                      if (0x100 < iVar8 + 1) {
                        iVar10 = iVar8 + 1;
                      }
                      if (*(int *)(*plVar22 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      FUN_01ff02b8(plVar21,iVar10,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
                      unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    }
                  }
                  fVar4 = DAT_00d38798;
                  if ((int)uVar9 < 1) goto LAB_03565fb8;
                  lVar11 = 0;
                  uVar24 = 0;
                  lVar23 = 0x54;
                  lVar26 = 0x20;
                  goto LAB_035658ec;
                }
                if (uVar9 <= unaff_w22) goto LAB_035660f8;
                puVar25 = (uint *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x20);
                if (*puVar25 == 0) goto LAB_0356573c;
                if (*unaff_x20 == 0) goto LAB_03566068;
                plVar18 = (long *)(*unaff_x20 + 0x38);
                lVar11 = *plVar18;
                iVar8 = *(int *)(unaff_x19 + 0x490);
                if ((lVar11 == 0) || (*(int *)(lVar11 + 0x18) <= iVar8)) {
                  if (*(int *)(*plVar22 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  FUN_01ff02b8(plVar18,iVar8 + 1,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
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
                      uVar12 = FUN_026b8070(unaff_w26,0);
                      if ((uVar12 & 1) != 0) {
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
                    uVar12 = FUN_026b812c(unaff_w26,0);
                    if ((uVar12 & 1) != 0) {
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
                    uVar19 = *(undefined8 *)(unaff_x19 + 0x100);
                    uVar7 = *(undefined4 *)(unaff_x19 + 0x25c);
                    uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                    if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    unaff_x27 = FUN_03570fc4(uVar9,uVar19,1,uVar7,uVar2,(long)&stack0x000001b8 + 4,0
                                            );
                    if (unaff_x27 == 0) {
                      lVar11 = FUN_03597770();
                      if (lVar11 != 0) {
                        lVar11 = FUN_03597770(0);
                        if (lVar11 == 0) goto LAB_03566068;
                        if (0 < *(int *)(lVar11 + 0x18)) {
                          uVar20 = *(undefined8 *)(unaff_x19 + 0x100);
                          uVar19 = FUN_03597770(0);
                          uVar7 = *(undefined4 *)(unaff_x19 + 0x25c);
                          uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                          if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                            thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                          }
                          unaff_x27 = FUN_035714e4(uVar9,uVar20,uVar19,1,uVar7,uVar2,
                                                   (long)&stack0x000001b8 + 4,0);
                          if (unaff_x27 != 0) goto LAB_03564b5c;
                        }
                      }
                      uVar19 = FUN_03597650(0);
                      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                      }
                      uVar12 = FUN_036cee6c(uVar19,0,0);
                      if ((uVar12 & 1) != 0) {
                        uVar19 = FUN_03597650(0);
                        uVar7 = *(undefined4 *)(unaff_x19 + 0x25c);
                        uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                        if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                        }
                        unaff_x27 = FUN_03570fc4(uVar9,uVar19,1,uVar7,uVar2,
                                                 (long)&stack0x000001b8 + 4,0);
                        if (unaff_x27 != 0) goto LAB_03564b5c;
                      }
                      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
                      *puVar25 = 0x20;
                      uVar19 = *(undefined8 *)(unaff_x19 + 0x100);
                      uVar7 = *(undefined4 *)(unaff_x19 + 0x25c);
                      uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                      if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar9 = 0x20;
                      unaff_x27 = FUN_03570fc4(0x20,uVar19,1,uVar7,uVar2,(long)&stack0x000001b8 + 4,
                                               0);
                      if (unaff_x27 == 0) {
                        if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
                        *puVar25 = 3;
                        uVar19 = *(undefined8 *)(unaff_x19 + 0x100);
                        uVar7 = *(undefined4 *)(unaff_x19 + 0x25c);
                        uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                        if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        uVar9 = 3;
                        unaff_x27 = FUN_03570fc4(3,uVar19,1,uVar7,uVar2,(long)&stack0x000001b8 + 4,0
                                                );
                      }
                    }
LAB_03564b5c:
                    uVar12 = FUN_03597634(0);
                    if ((uVar12 & 1) == 0) {
                      plVar22 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,4);
                      if ((int)unaff_w26 < 0x10000) {
                        in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,unaff_w26);
                        lVar11 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0
                                                   );
                        if (plVar22 == (long *)0x0) goto LAB_03566068;
                        if ((lVar11 != 0) &&
                           (lVar23 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar22 + 0x40)),
                           lVar23 == 0)) goto LAB_035660fc;
                        if ((int)plVar22[3] == 0) goto LAB_035660f8;
                        plVar22[4] = lVar11;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar22 + 4,lVar11);
                        if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
                        lVar11 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
                        if ((lVar11 != 0) &&
                           (lVar23 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar22 + 0x40)),
                           lVar23 == 0)) goto LAB_035660fc;
                        if (*(uint *)(plVar22 + 3) < 2) goto LAB_035660f8;
                        plVar22[5] = lVar11;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar22 + 5,lVar11);
                        if (unaff_x27 == 0) goto LAB_03566068;
                        in_stack_00000168._4_4_ = *(undefined4 *)(unaff_x27 + 0x14);
                        lVar11 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,
                                                    (long)&stack0x00000168 + 4);
                        if ((lVar11 != 0) &&
                           (lVar23 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar22 + 0x40)),
                           lVar23 == 0)) goto LAB_035660fc;
                        if (*(uint *)(plVar22 + 3) < 3) goto LAB_035660f8;
                        plVar22[6] = lVar11;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar22 + 6,lVar11);
                        lVar11 = FUN_036d3824();
                        if ((lVar11 != 0) &&
                           (lVar23 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar22 + 0x40)),
                           lVar23 == 0)) goto LAB_035660fc;
                        if (*(uint *)(plVar22 + 3) < 4) goto LAB_035660f8;
                        plVar22[7] = lVar11;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar22 + 7,lVar11);
                        puVar13 = (undefined8 *)OVRPlugin_TrackedKeyboardFlags_TypeInfo;
                      }
                      else {
                        in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,unaff_w26);
                        lVar11 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0
                                                   );
                        if (plVar22 == (long *)0x0) goto LAB_03566068;
                        if ((lVar11 != 0) &&
                           (lVar23 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar22 + 0x40)),
                           lVar23 == 0)) goto LAB_035660fc;
                        if ((int)plVar22[3] == 0) goto LAB_035660f8;
                        plVar22[4] = lVar11;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar22 + 4,lVar11);
                        if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
                        lVar11 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
                        if ((lVar11 != 0) &&
                           (lVar23 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar22 + 0x40)),
                           lVar23 == 0)) goto LAB_035660fc;
                        if (*(uint *)(plVar22 + 3) < 2) goto LAB_035660f8;
                        plVar22[5] = lVar11;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar22 + 5,lVar11);
                        if (unaff_x27 == 0) goto LAB_03566068;
                        in_stack_00000168._4_4_ = *(undefined4 *)(unaff_x27 + 0x14);
                        lVar11 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,
                                                    (long)&stack0x00000168 + 4);
                        if ((lVar11 != 0) &&
                           (lVar23 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar22 + 0x40)),
                           lVar23 == 0)) goto LAB_035660fc;
                        if (*(uint *)(plVar22 + 3) < 3) goto LAB_035660f8;
                        plVar22[6] = lVar11;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar22 + 6,lVar11);
                        lVar11 = FUN_036d3824();
                        if ((lVar11 != 0) &&
                           (lVar23 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar22 + 0x40)),
                           lVar23 == 0)) goto LAB_035660fc;
                        if (*(uint *)(plVar22 + 3) < 4) goto LAB_035660f8;
                        plVar22[7] = lVar11;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar22 + 7,lVar11);
                        puVar13 = (undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo;
                      }
                      uVar19 = FUN_025be8f4(*puVar13,plVar22,0);
                      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      FUN_0367b470(uVar19);
                      unaff_w26 = uVar9;
                    }
                    else {
                      unaff_w26 = uVar9;
                      if (unaff_x27 == 0) goto LAB_03566068;
                    }
                  }
                  if (*(char *)(unaff_x27 + 0x10) == '\x01') {
                    lVar11 = *(long *)(unaff_x27 + 0x18);
                    if (lVar11 == 0) goto LAB_03566068;
                    iVar8 = *(int *)(lVar11 + 0x18);
                    if (iVar8 == 0) {
                      iVar8 = FUN_036d3364(lVar11,0);
                      *(int *)(lVar11 + 0x18) = iVar8;
                    }
                    lVar11 = *in_stack_00000038;
                    if (lVar11 == 0) goto LAB_03566068;
                    iVar10 = *(int *)(lVar11 + 0x18);
                    if (iVar10 == 0) {
                      iVar10 = FUN_036d3364(lVar11,0);
                      *(int *)(lVar11 + 0x18) = iVar10;
                    }
                    if (iVar8 == iVar10) {
                      unaff_w29 = 0;
                    }
                    else {
                      plVar22 = *(long **)(unaff_x27 + 0x18);
                      if (plVar22 == (long *)0x0) {
                        plVar22 = (long *)0x0;
                        *in_stack_00000038 = 0;
                      }
                      else {
                        lVar11 = *(long *)OVRPlugin_OVRP_1_83_0_TypeInfo;
                        bVar3 = *(byte *)(lVar11 + 0x130);
                        if (*(byte *)(*plVar22 + 0x130) < bVar3) {
                          plVar18 = (long *)0x0;
                        }
                        else {
                          plVar18 = plVar22;
                          if (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar3 * 8 + -8) != lVar11
                             ) {
                            plVar18 = (long *)0x0;
                          }
                        }
                        *in_stack_00000038 = (long)plVar18;
                        if (*(byte *)(*plVar22 + 0x130) < bVar3) {
                          plVar22 = (long *)0x0;
                        }
                        else if (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar3 * 8 + -8) !=
                                 lVar11) {
                          plVar22 = (long *)0x0;
                        }
                      }
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (in_stack_00000038,plVar22);
                      unaff_w29 = 1;
                    }
                  }
                  else {
                    unaff_w29 = 0;
                  }
                  unaff_x28 = 0x178;
                  if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 == 0))
                  goto LAB_03566068;
                  if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
                  lVar11 = lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
                  plVar22 = (long *)(lVar11 + 0x30);
                  *plVar22 = unaff_x27;
                  *(undefined4 *)(lVar11 + 0x2c) = 0;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (plVar22,unaff_x27);
                  if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 == 0))
                  goto LAB_03566068;
                  uVar9 = *(uint *)(unaff_x19 + 0x490);
                  if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_035660f8;
                  lVar23 = lVar11 + (long)(int)uVar9 * 0x178;
                  *(short *)(lVar23 + 0x20) = (short)unaff_w26;
                  *(undefined1 *)(lVar23 + 0x5c) = uStack00000000000001bc;
                  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
                  lVar11 = lVar11 + (long)(int)uVar9 * 0x178;
                  *(undefined8 *)(lVar11 + 0x24) =
                       *(undefined8 *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x24);
                  *(long *)(lVar11 + 0x38) = *in_stack_00000038;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(char *)(unaff_x27 + 0x10) != '\x02') {
                    if (unaff_w29 == 0) goto LAB_03565410;
                    lVar11 = *in_stack_00000038;
                    if (lVar11 == 0) goto LAB_03566068;
                    iVar8 = *(int *)(lVar11 + 0x18);
                    if (iVar8 == 0) {
                      iVar8 = FUN_036d3364(lVar11,0);
                      *(int *)(lVar11 + 0x18) = iVar8;
                    }
                    lVar11 = *(long *)(unaff_x19 + 0xf8);
                    if (lVar11 == 0) goto LAB_03566068;
                    iVar10 = *(int *)(lVar11 + 0x18);
                    if (iVar10 == 0) {
                      iVar10 = FUN_036d3364(lVar11,0);
                      *(int *)(lVar11 + 0x18) = iVar10;
                    }
                    unaff_x28 = 0x178;
                    if (iVar8 == iVar10) goto LAB_03565410;
                    uVar12 = FUN_0359778c(0);
                    unaff_x25 = in_stack_00000038;
                    if ((uVar12 & 1) == 0) {
                      if (*in_stack_00000038 == 0) goto LAB_03566068;
                      param_4 = *(undefined8 *)(*in_stack_00000038 + 0x20);
                    }
                    else {
                      if (*in_stack_00000038 == 0) goto LAB_03566068;
                      uVar20 = *(undefined8 *)(*in_stack_00000038 + 0x20);
                      uVar19 = *in_stack_00000028;
                      if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      param_4 = FUN_03594e9c(uVar19,uVar20,0);
                    }
                    goto code_r0x035653c8;
                  }
                  plVar22 = *(long **)(unaff_x27 + 0x18);
                  if (plVar22 == (long *)0x0) goto LAB_03566068;
                  bVar3 = *(byte *)(*(long *)OVRPlugin_Sizei_TypeInfo + 0x130);
                  if ((*(byte *)(*plVar22 + 0x130) < bVar3) ||
                     (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar3 * 8 + -8) !=
                      *(long *)OVRPlugin_Sizei_TypeInfo)) goto LAB_03566068;
                  lVar23 = plVar22[4];
                  lVar11 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar11 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar11 = *unaff_x24;
                  }
                  uVar9 = FUN_03558224(lVar23,plVar22,*(long *)(lVar11 + 0xb8),
                                       *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8));
                  *(uint *)(unaff_x19 + 0x120) = uVar9;
                  lVar11 = **(long **)(*unaff_x24 + 0xb8);
                  if (lVar11 == 0) goto LAB_03566068;
                  if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_035660f8;
                  lVar11 = lVar11 + (long)(int)uVar9 * 0x38;
                  *(int *)(lVar11 + 0x54) = *(int *)(lVar11 + 0x54) + 1;
                  if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 == 0))
                  goto LAB_03566068;
                  if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
                  lVar11 = lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
                  *(undefined4 *)(lVar11 + 0x2c) = 1;
                  uVar7 = *(undefined4 *)(unaff_x19 + 0x120);
                  *(undefined8 *)(lVar11 + 0x40) = plVar22;
                  *(undefined4 *)(lVar11 + 0x58) = uVar7;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            ((undefined8 *)(lVar11 + 0x40),plVar22);
                  unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                     (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar11 == 0))
                  goto LAB_03566068;
                  uVar9 = *(uint *)(unaff_x19 + 0x490);
                  if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_035660f8;
                  *(undefined4 *)(lVar11 + (long)(int)uVar9 * 0x178 + 0x48) =
                       *(undefined4 *)(unaff_x27 + 0x28);
                  *(undefined4 *)(unaff_x19 + 0x644) = 0;
                  *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
                  in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
                  plVar22 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
                  goto LAB_0356571c;
                }
                uVar7 = *(undefined4 *)(unaff_x19 + 0x120);
                uVar12 = FUN_03586568();
                uVar6 = uStack00000000000001b8;
                if ((uVar12 & 1) == 0) goto LAB_035649d0;
                if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
                iVar8 = *(int *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x24);
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
              uVar9 = *(uint *)(unaff_x19 + 0x490);
              if (*(uint *)(lVar11 + 0x18) <= uVar9) break;
              *(undefined4 *)(lVar11 + (long)(int)uVar9 * 0x178 + 0x58) =
                   *(undefined4 *)(unaff_x19 + 0x120);
              if ((*(long *)(unaff_x19 + 0x698) == 0) ||
                 (lVar23 = UnityEngine_Material__DisableKeyword(*(long *)(unaff_x19 + 0x698),0),
                 lVar23 == 0)) goto LAB_03566068;
              FUN_02215a88(lVar23,*(undefined4 *)(unaff_x19 + 0x6a4),&stack0x000000e0,
                           *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
              if (*(uint *)(lVar11 + 0x18) <= uVar9) break;
              *(undefined8 *)(lVar11 + (long)(int)uVar9 * 0x178 + 0x30) = in_stack_000000e0;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 == 0))
              goto LAB_03566068;
              uVar9 = *(uint *)(unaff_x19 + 0x490);
              if (*(uint *)(lVar11 + 0x18) <= uVar9) break;
              uVar2 = *(undefined4 *)(unaff_x19 + 0x644);
              lVar23 = lVar11 + (long)(int)uVar9 * 0x178;
              *(int *)(lVar23 + 0x24) = iVar8;
              *(undefined4 *)(lVar23 + 0x2c) = uVar2;
              if (*(uint *)(unaff_x21 + 0x18) <= uVar6) break;
              *(int *)(lVar11 + (long)(int)uVar9 * 0x178 + 0x28) =
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
    if (uVar24 != 0) {
      lVar16 = *plVar18;
      if (lVar16 == 0) goto LAB_03566068;
      if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_035660f8;
      uVar19 = *(undefined8 *)(lVar16 + uVar24 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar14 = FUN_036d35a8(uVar19,0,0);
      if ((uVar14 & 1) != 0) {
        lVar16 = *unaff_x24;
        plVar22 = (long *)*plVar18;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar16 = *unaff_x24;
        }
        lVar16 = **(long **)(lVar16 + 0xb8);
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar16 = lVar16 + lVar23;
        in_stack_00000160 = *(undefined8 *)(lVar16 + -4);
        in_stack_00000158 = *(undefined8 *)(lVar16 + -0xc);
        in_stack_00000150 = *(undefined8 *)(lVar16 + -0x14);
        in_stack_00000148 = *(undefined8 *)(lVar16 + -0x1c);
        uVar19 = *(undefined8 *)(lVar16 + -0x24);
        in_stack_00000138 = *(undefined8 *)(lVar16 + -0x2c);
        in_stack_00000130 = *(undefined8 *)(lVar16 + -0x34);
        in_stack_00000140 = uVar19;
        lVar16 = FUN_0359e964();
        fVar30 = (float)uVar19;
        if (plVar22 == (long *)0x0) goto LAB_03566068;
        if ((lVar16 != 0) &&
           (lVar15 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar22 + 0x40)), lVar15 == 0)) {
LAB_035660fc:
          uVar19 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar19,0);
        }
        if (*(uint *)(plVar22 + 3) <= uVar24) goto LAB_035660f8;
        plVar22[uVar24 + 4] = lVar16;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long)plVar22 + lVar26,lVar16);
        unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if ((*unaff_x20 == 0) || (lVar16 = *(long *)(*unaff_x20 + 0x60), lVar16 == 0))
        goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_035660f8;
        puVar13 = (undefined8 *)(lVar16 + lVar11 + 0x30);
        *puVar13 = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar13,0);
      }
      if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_03566068;
      fVar27 = (float)FUN_036dba50(*(long *)(unaff_x19 + 0x380),0);
      lVar16 = *plVar18;
      if (lVar16 == 0) goto LAB_03566068;
      if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_035660f8;
      lVar16 = *(long *)(lVar16 + uVar24 * 8 + 0x20);
      if ((lVar16 == 0) || (fVar29 = fVar30, lVar16 = FUN_037b4844(lVar16,0), lVar16 == 0))
      goto LAB_03566068;
      fVar28 = (float)FUN_036dba50(lVar16,0);
      fVar30 = (fVar30 - fVar29) * (fVar30 - fVar29);
      param_2 = (ulong)(uint)fVar30;
      if (fVar4 <= (fVar27 - fVar28) * (fVar27 - fVar28) + fVar30) {
        lVar16 = *plVar18;
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar16 = *(long *)(lVar16 + uVar24 * 8 + 0x20);
        if (lVar16 == 0) goto LAB_03566068;
        lVar16 = FUN_037b4844(lVar16,0);
        if ((*(long *)(unaff_x19 + 0x380) == 0) ||
           (FUN_036dba50(*(long *)(unaff_x19 + 0x380),0), lVar16 == 0)) goto LAB_03566068;
        FUN_036dbae0(lVar16,0);
      }
      lVar16 = *plVar18;
      if (lVar16 == 0) goto LAB_03566068;
      if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_035660f8;
      lVar16 = *(long *)(lVar16 + uVar24 * 8 + 0x20);
      if (lVar16 == 0) goto LAB_03566068;
      uVar19 = *(undefined8 *)(lVar16 + 0xf0);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar14 = FUN_036d35a8(uVar19,0,0);
      if ((uVar14 & 1) == 0) {
        lVar16 = *plVar18;
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar16 = *(long *)(lVar16 + uVar24 * 8 + 0x20);
        if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0xf0), lVar16 == 0)) goto LAB_03566068;
        iVar8 = FUN_036d3364(lVar16,0);
        lVar16 = *unaff_x24;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar16);
          lVar16 = *unaff_x24;
        }
        lVar16 = **(long **)(lVar16 + 0xb8);
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar16 = *(long *)(lVar16 + lVar23 + -0x1c);
        if (lVar16 == 0) goto LAB_03566068;
        iVar10 = FUN_036d3364(lVar16,0);
        if (iVar8 != iVar10) goto LAB_03565b98;
      }
      else {
LAB_03565b98:
        lVar16 = *plVar18;
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar15 = *unaff_x24;
        lVar16 = *(long *)(lVar16 + uVar24 * 8 + 0x20);
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar15 = *unaff_x24;
        }
        lVar15 = **(long **)(lVar15 + 0xb8);
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_035660f8;
        if (lVar16 == 0) goto LAB_03566068;
        thunk_FUN_0359e5ac(lVar16,*(undefined8 *)(lVar15 + lVar23 + -0x1c),0);
        lVar16 = *plVar18;
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar15 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar16 = *(long *)(lVar16 + uVar24 * 8 + 0x20);
        if (lVar16 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar16 + 0xd8) = *(undefined8 *)(lVar15 + lVar23 + -0x2c);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar16 = *plVar18;
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar15 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar16 = *(long *)(lVar16 + uVar24 * 8 + 0x20);
        if (lVar16 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar16 + 0xe0) = *(undefined8 *)(lVar15 + lVar23 + -0x24);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      lVar16 = *unaff_x24;
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar16 = *unaff_x24;
      }
      lVar15 = **(long **)(lVar16 + 0xb8);
      if (lVar15 == 0) goto LAB_03566068;
      if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_035660f8;
      if (*(char *)(lVar15 + lVar23 + -0x13) != '\0') {
        lVar17 = *plVar18;
        if (lVar17 == 0) goto LAB_03566068;
        if (*(uint *)(lVar17 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar17 = *(long *)(lVar17 + uVar24 * 8 + 0x20);
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar15 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar15 == 0) goto LAB_03566068;
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_035660f8;
        if (lVar17 == 0) goto LAB_03566068;
        FUN_0359e608(lVar17,*(undefined8 *)(lVar15 + lVar23 + -0x1c),0);
        lVar16 = *plVar18;
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar15 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar16 = *(long *)(lVar16 + uVar24 * 8 + 0x20);
        if (lVar16 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar16 + 0x100) = *(undefined8 *)(lVar15 + lVar23 + -0xc);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar16 + 0x100);
      }
    }
    lVar16 = *unaff_x24;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar16 = *unaff_x24;
    }
    lVar16 = **(long **)(lVar16 + 0xb8);
    if (lVar16 == 0) goto LAB_03566068;
    if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_035660f8;
    if ((*unaff_x20 == 0) || (lVar15 = *(long *)(*unaff_x20 + 0x60), lVar15 == 0))
    goto LAB_03566068;
    if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_035660f8;
    lVar17 = *(long *)(lVar15 + lVar11 + 0x30);
    iVar8 = *(int *)(lVar16 + lVar23);
    if (lVar17 == 0) {
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
        FUN_03595600(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar8 + 1,0);
        memcpy(&stack0x00000090,&stack0x000000e0,0x50);
        if (*(int *)(lVar15 + 0x18) == 0) goto LAB_035660f8;
        memcpy((void *)(lVar15 + lVar11 + 0x20),&stack0x00000090,0x50);
        __dest = (void *)(lVar15 + 0x20);
      }
      else {
        lVar16 = *plVar18;
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar16 = *(long *)(lVar16 + uVar24 * 8 + 0x20);
        if (lVar16 == 0) goto LAB_03566068;
        uVar19 = UnityEngine_Material__GetColorArray(lVar16,0);
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
        FUN_03595600(&stack0x000000e0,uVar19,iVar8 + 1,0);
        memcpy(&stack0x00000040,&stack0x000000e0,0x50);
        if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_035660f8;
        __dest = (void *)(lVar15 + lVar11 + 0x20);
        memcpy(__dest,&stack0x00000040,0x50);
      }
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(__dest,0);
    }
    else {
      iVar10 = *(int *)(lVar17 + 0x18);
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
        FUN_03595b9c(lVar15 + lVar11 + 0x20,iVar8,0);
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
    if ((*unaff_x20 == 0) || (lVar16 = *(long *)(*unaff_x20 + 0x60), lVar16 == 0))
    goto LAB_03566068;
    lVar15 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar15 = *unaff_x24;
    }
    lVar15 = **(long **)(lVar15 + 0xb8);
    if (lVar15 == 0) goto LAB_03566068;
    if ((*(uint *)(lVar15 + 0x18) <= uVar24) || (*(uint *)(lVar16 + 0x18) <= uVar24))
    goto LAB_035660f8;
    *(undefined8 *)(lVar16 + lVar11 + 0x68) = *(undefined8 *)(lVar15 + lVar23 + -0x1c);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    uVar24 = uVar24 + 1;
    lVar11 = lVar11 + 0x50;
    lVar23 = lVar23 + 0x38;
    lVar26 = lVar26 + 8;
  } while (uVar9 != uVar24);
LAB_03565fb8:
  lVar11 = *plVar18;
  if (lVar11 != 0) {
    lVar23 = (-(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3) + 0x20;
    do {
      uVar9 = (uint)uVar12;
      if ((int)*(uint *)(lVar11 + 0x18) <= (int)uVar9) {
LAB_03565748:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar9) {
LAB_035660f8:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar19 = *(undefined8 *)(lVar11 + lVar23);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar12 = FUN_036cee6c(uVar19,0,0);
      if ((uVar12 & 1) == 0) goto LAB_03565748;
      if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x60), lVar11 == 0)) break;
      if ((int)uVar9 < *(int *)(lVar11 + 0x18)) {
        lVar11 = *plVar18;
        if (lVar11 == 0) break;
        if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_035660f8;
        if ((*(long *)(lVar11 + lVar23) == 0) ||
           (lVar11 = FUN_037b514c(*(long *)(lVar11 + lVar23),0), lVar11 == 0)) break;
        FUN_0390f3a4(lVar11,0,0);
      }
      lVar11 = *plVar18;
      uVar12 = (ulong)(uVar9 + 1);
      lVar23 = lVar23 + 8;
    } while (lVar11 != 0);
  }
LAB_03566068:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


