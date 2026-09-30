/*
FUNCTION_NAME: UnityEngine.AudioSource$$set_mute
ENTRY_POINT: 03565474
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
UnityEngine_AudioSource__set_mute
          (undefined1 param_1 [16],ulong param_2,long param_3,undefined8 param_4,ulong param_5,
          undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  float fVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  void *__dest;
  long lVar18;
  long lVar19;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long *plVar20;
  undefined8 uVar21;
  long *plVar22;
  long *unaff_x24;
  long *plVar23;
  long *unaff_x25;
  long lVar24;
  uint unaff_w26;
  ulong uVar25;
  uint *puVar26;
  undefined8 *unaff_x29;
  long lVar27;
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
  
code_r0x03565474:
  uVar12 = FUN_03594928(param_3,param_4,param_5,param_6);
  *unaff_x29 = uVar12;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x29,uVar12);
  lVar13 = *unaff_x24;
  uVar12 = *unaff_x29;
  lVar24 = *unaff_x25;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar13 = *unaff_x24;
  }
  uVar8 = FUN_03557fec(uVar12,lVar24,*(long *)(lVar13 + 0xb8),
                       *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
  bVar4 = true;
  *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
LAB_035654c8:
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar14 = FUN_026b63d8(unaff_w26,0);
  plVar23 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
  if ((unaff_w26 != 0x200b) && ((uVar14 & 1) == 0)) {
    lVar13 = *unaff_x24;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar13);
      lVar13 = *unaff_x24;
    }
    lVar24 = **(long **)(lVar13 + 0xb8);
    if (lVar24 == 0) goto LAB_03566068;
    uVar9 = *(uint *)(unaff_x19 + 0x120);
    if (*(uint *)(lVar24 + 0x18) <= uVar9) goto LAB_035660f8;
    if (*(int *)(lVar24 + (long)(int)uVar9 * 0x38 + 0x54) < 0x3fff) {
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar13);
        lVar24 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar24 == 0) goto LAB_03566068;
        uVar9 = *(uint *)(unaff_x19 + 0x120);
      }
    }
    else {
      uVar21 = *in_stack_00000028;
      uVar12 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
      FUN_0369922c(uVar12,uVar21,0);
      lVar13 = *unaff_x24;
      lVar24 = *in_stack_00000038;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar13 = *unaff_x24;
      }
      uVar9 = FUN_03557fec(uVar12,lVar24,*(long *)(lVar13 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
      *(uint *)(unaff_x19 + 0x120) = uVar9;
      lVar24 = **(long **)(*unaff_x24 + 0xb8);
      if (lVar24 == 0) goto LAB_03566068;
    }
    if (*(uint *)(lVar24 + 0x18) <= uVar9) goto LAB_035660f8;
    lVar24 = lVar24 + (long)(int)uVar9 * 0x38;
    *(int *)(lVar24 + 0x54) = *(int *)(lVar24 + 0x54) + 1;
  }
  if ((*unaff_x20 != 0) && (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 != 0)) {
    if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar13 + 0x18)) {
      *(undefined8 *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x50) =
           *in_stack_00000028;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*unaff_x20 != 0) && (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 != 0)) {
        if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar13 + 0x18)) {
          uVar9 = *(uint *)(unaff_x19 + 0x120);
          *(uint *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x58) = uVar9;
          lVar13 = *unaff_x24;
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar13 = *unaff_x24;
            uVar9 = *(uint *)(unaff_x19 + 0x120);
          }
          lVar24 = **(long **)(lVar13 + 0xb8);
          if (lVar24 == 0) goto LAB_03566068;
          if (*(uint *)(lVar24 + 0x18) <= uVar9) goto LAB_035660f8;
          *(bool *)(lVar24 + (long)(int)uVar9 * 0x38 + 0x41) = bVar4;
          if (bVar4) {
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar24 = **(long **)(*unaff_x24 + 0xb8);
              if (lVar24 == 0) goto LAB_03566068;
              uVar9 = *(uint *)(unaff_x19 + 0x120);
            }
            if (*(uint *)(lVar24 + 0x18) <= uVar9) goto LAB_035660f8;
            puVar15 = (undefined8 *)(lVar24 + (long)(int)uVar9 * 0x38 + 0x48);
            *puVar15 = in_stack_00000018;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (puVar15,in_stack_00000018);
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
                lVar13 = *unaff_x20;
                if (lVar13 == 0) goto LAB_03566068;
                *(int *)(lVar13 + 0x1c) = in_stack_00000020._4_4_;
                lVar24 = *unaff_x24;
                if (*(int *)(lVar24 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar24 = *unaff_x24;
                }
                lVar24 = *(long *)(*(long *)(lVar24 + 0xb8) + 8);
                if (lVar24 == 0) goto LAB_03566068;
                uVar9 = FUN_0219b384(lVar24,*(undefined8 *)PTR_DAT_03ceb270);
                *(uint *)(lVar13 + 0x34) = uVar9;
                if (*unaff_x20 == 0) goto LAB_03566068;
                plVar20 = (long *)(*unaff_x20 + 0x60);
                lVar13 = *plVar20;
                if (lVar13 == 0) goto LAB_03566068;
                uVar14 = (ulong)uVar9;
                if (*(int *)(lVar13 + 0x18) < (int)uVar9) {
                  if (*(int *)(*plVar23 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  FUN_01ff02b8(plVar20,uVar14,0,*(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo);
                }
                if (*(long *)(unaff_x19 + 0x708) == 0) goto LAB_03566068;
                plVar20 = (long *)(unaff_x19 + 0x708);
                if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar9) {
                  uVar8 = FUN_036c1d60(uVar9 + 1,0);
                  if (*(int *)(*plVar23 + 0xe0) == 0) {
                    thunk_FUN_01a58e78(*plVar23);
                  }
                  FUN_01ff025c(plVar20,uVar8,
                               *(undefined8 *)OVRSystemPerfMetrics_PerfMetrics_TypeInfo);
                }
                if (*(char *)(unaff_x19 + 0x321) != '\0') {
                  if (*unaff_x20 == 0) goto LAB_03566068;
                  plVar22 = (long *)(*unaff_x20 + 0x38);
                  lVar13 = *plVar22;
                  if (lVar13 == 0) goto LAB_03566068;
                  iVar10 = *(int *)(unaff_x19 + 0x490);
                  if (0x100 < *(int *)(lVar13 + 0x18) - iVar10) {
                    iVar11 = 0x100;
                    if (0x100 < iVar10 + 1) {
                      iVar11 = iVar10 + 1;
                    }
                    if (*(int *)(*plVar23 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    FUN_01ff02b8(plVar22,iVar11,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
                    unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  }
                }
                fVar5 = DAT_00d38798;
                if ((int)uVar9 < 1) goto LAB_03565fb8;
                lVar13 = 0;
                uVar25 = 0;
                lVar24 = 0x54;
                lVar27 = 0x20;
                goto LAB_035658ec;
              }
              if (uVar9 <= unaff_w22) goto LAB_035660f8;
              puVar26 = (uint *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x20);
              if (*puVar26 == 0) goto LAB_0356573c;
              if (*unaff_x20 == 0) goto LAB_03566068;
              plVar20 = (long *)(*unaff_x20 + 0x38);
              lVar13 = *plVar20;
              iVar10 = *(int *)(unaff_x19 + 0x490);
              if ((lVar13 == 0) || (*(int *)(lVar13 + 0x18) <= iVar10)) {
                if (*(int *)(*plVar23 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_01ff02b8(plVar20,iVar10 + 1,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
                uVar9 = *(uint *)(unaff_x21 + 0x18);
              }
              if (uVar9 <= unaff_w22) goto LAB_035660f8;
              unaff_w26 = *puVar26;
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
                    uVar14 = FUN_026b8070(unaff_w26,0);
                    if ((uVar14 & 1) != 0) {
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
                  uVar14 = FUN_026b812c(unaff_w26,0);
                  if ((uVar14 & 1) != 0) {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar9 = FUN_026b8410(unaff_w26,0);
LAB_03564aa8:
                    unaff_w26 = uVar9 & 0xffff;
                  }
                }
LAB_03564aac:
                lVar13 = FUN_03591848();
                if (lVar13 == 0) {
                  iVar10 = FUN_035975f8();
                  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
                  if (iVar10 == 0) {
                    uVar9 = 0x25a1;
                  }
                  else {
                    uVar9 = FUN_035975f8(0);
                  }
                  *puVar26 = uVar9;
                  uVar12 = *(undefined8 *)(unaff_x19 + 0x100);
                  uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
                  uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                  if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  lVar13 = FUN_03570fc4(uVar9,uVar12,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
                  if (lVar13 == 0) {
                    lVar13 = FUN_03597770();
                    if (lVar13 != 0) {
                      lVar13 = FUN_03597770(0);
                      if (lVar13 == 0) goto LAB_03566068;
                      if (0 < *(int *)(lVar13 + 0x18)) {
                        uVar21 = *(undefined8 *)(unaff_x19 + 0x100);
                        uVar12 = FUN_03597770(0);
                        uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
                        uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                        if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                        }
                        lVar13 = FUN_035714e4(uVar9,uVar21,uVar12,1,uVar8,uVar2,
                                              (long)&stack0x000001b8 + 4,0);
                        if (lVar13 != 0) goto LAB_03564b5c;
                      }
                    }
                    uVar12 = FUN_03597650(0);
                    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                    }
                    uVar14 = FUN_036cee6c(uVar12,0,0);
                    if ((uVar14 & 1) != 0) {
                      uVar12 = FUN_03597650(0);
                      uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
                      uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                      if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                      }
                      lVar13 = FUN_03570fc4(uVar9,uVar12,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0)
                      ;
                      if (lVar13 != 0) goto LAB_03564b5c;
                    }
                    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
                    *puVar26 = 0x20;
                    uVar12 = *(undefined8 *)(unaff_x19 + 0x100);
                    uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
                    uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                    if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar9 = 0x20;
                    lVar13 = FUN_03570fc4(0x20,uVar12,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
                    if (lVar13 == 0) {
                      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
                      *puVar26 = 3;
                      uVar12 = *(undefined8 *)(unaff_x19 + 0x100);
                      uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
                      uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                      if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar9 = 3;
                      lVar13 = FUN_03570fc4(3,uVar12,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
                    }
                  }
LAB_03564b5c:
                  uVar14 = FUN_03597634(0);
                  if ((uVar14 & 1) == 0) {
                    plVar23 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,4);
                    if ((int)unaff_w26 < 0x10000) {
                      in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,unaff_w26);
                      lVar24 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
                      if (plVar23 == (long *)0x0) goto LAB_03566068;
                      if ((lVar24 != 0) &&
                         (lVar27 = thunk_FUN_01a89d6c(lVar24,*(undefined8 *)(*plVar23 + 0x40)),
                         lVar27 == 0)) goto LAB_035660fc;
                      if ((int)plVar23[3] == 0) goto LAB_035660f8;
                      plVar23[4] = lVar24;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (plVar23 + 4,lVar24);
                      if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
                      lVar24 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
                      if ((lVar24 != 0) &&
                         (lVar27 = thunk_FUN_01a89d6c(lVar24,*(undefined8 *)(*plVar23 + 0x40)),
                         lVar27 == 0)) goto LAB_035660fc;
                      if (*(uint *)(plVar23 + 3) < 2) goto LAB_035660f8;
                      plVar23[5] = lVar24;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (plVar23 + 5,lVar24);
                      if (lVar13 == 0) goto LAB_03566068;
                      in_stack_00000168._4_4_ = *(undefined4 *)(lVar13 + 0x14);
                      lVar24 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,
                                                  (long)&stack0x00000168 + 4);
                      if ((lVar24 != 0) &&
                         (lVar27 = thunk_FUN_01a89d6c(lVar24,*(undefined8 *)(*plVar23 + 0x40)),
                         lVar27 == 0)) goto LAB_035660fc;
                      if (*(uint *)(plVar23 + 3) < 3) goto LAB_035660f8;
                      plVar23[6] = lVar24;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (plVar23 + 6,lVar24);
                      lVar24 = FUN_036d3824();
                      if ((lVar24 != 0) &&
                         (lVar27 = thunk_FUN_01a89d6c(lVar24,*(undefined8 *)(*plVar23 + 0x40)),
                         lVar27 == 0)) goto LAB_035660fc;
                      if (*(uint *)(plVar23 + 3) < 4) goto LAB_035660f8;
                      plVar23[7] = lVar24;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (plVar23 + 7,lVar24);
                      puVar15 = (undefined8 *)OVRPlugin_TrackedKeyboardFlags_TypeInfo;
                    }
                    else {
                      in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,unaff_w26);
                      lVar24 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
                      if (plVar23 == (long *)0x0) goto LAB_03566068;
                      if ((lVar24 != 0) &&
                         (lVar27 = thunk_FUN_01a89d6c(lVar24,*(undefined8 *)(*plVar23 + 0x40)),
                         lVar27 == 0)) goto LAB_035660fc;
                      if ((int)plVar23[3] == 0) goto LAB_035660f8;
                      plVar23[4] = lVar24;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (plVar23 + 4,lVar24);
                      if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
                      lVar24 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
                      if ((lVar24 != 0) &&
                         (lVar27 = thunk_FUN_01a89d6c(lVar24,*(undefined8 *)(*plVar23 + 0x40)),
                         lVar27 == 0)) goto LAB_035660fc;
                      if (*(uint *)(plVar23 + 3) < 2) goto LAB_035660f8;
                      plVar23[5] = lVar24;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (plVar23 + 5,lVar24);
                      if (lVar13 == 0) goto LAB_03566068;
                      in_stack_00000168._4_4_ = *(undefined4 *)(lVar13 + 0x14);
                      lVar24 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,
                                                  (long)&stack0x00000168 + 4);
                      if ((lVar24 != 0) &&
                         (lVar27 = thunk_FUN_01a89d6c(lVar24,*(undefined8 *)(*plVar23 + 0x40)),
                         lVar27 == 0)) goto LAB_035660fc;
                      if (*(uint *)(plVar23 + 3) < 3) goto LAB_035660f8;
                      plVar23[6] = lVar24;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (plVar23 + 6,lVar24);
                      lVar24 = FUN_036d3824();
                      if ((lVar24 != 0) &&
                         (lVar27 = thunk_FUN_01a89d6c(lVar24,*(undefined8 *)(*plVar23 + 0x40)),
                         lVar27 == 0)) goto LAB_035660fc;
                      if (*(uint *)(plVar23 + 3) < 4) goto LAB_035660f8;
                      plVar23[7] = lVar24;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (plVar23 + 7,lVar24);
                      puVar15 = (undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo;
                    }
                    uVar12 = FUN_025be8f4(*puVar15,plVar23,0);
                    if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    FUN_0367b470(uVar12);
                    unaff_w26 = uVar9;
                  }
                  else {
                    unaff_w26 = uVar9;
                    if (lVar13 == 0) goto LAB_03566068;
                  }
                }
                if (*(char *)(lVar13 + 0x10) == '\x01') {
                  lVar24 = *(long *)(lVar13 + 0x18);
                  if (lVar24 == 0) goto LAB_03566068;
                  iVar10 = *(int *)(lVar24 + 0x18);
                  if (iVar10 == 0) {
                    iVar10 = FUN_036d3364(lVar24,0);
                    *(int *)(lVar24 + 0x18) = iVar10;
                  }
                  lVar24 = *in_stack_00000038;
                  if (lVar24 == 0) goto LAB_03566068;
                  iVar11 = *(int *)(lVar24 + 0x18);
                  if (iVar11 == 0) {
                    iVar11 = FUN_036d3364(lVar24,0);
                    *(int *)(lVar24 + 0x18) = iVar11;
                  }
                  if (iVar10 == iVar11) {
                    bVar4 = false;
                  }
                  else {
                    plVar23 = *(long **)(lVar13 + 0x18);
                    if (plVar23 == (long *)0x0) {
                      plVar23 = (long *)0x0;
                      *in_stack_00000038 = 0;
                    }
                    else {
                      lVar24 = *(long *)OVRPlugin_OVRP_1_83_0_TypeInfo;
                      bVar3 = *(byte *)(lVar24 + 0x130);
                      if (*(byte *)(*plVar23 + 0x130) < bVar3) {
                        plVar20 = (long *)0x0;
                      }
                      else {
                        plVar20 = plVar23;
                        if (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar3 * 8 + -8) != lVar24)
                        {
                          plVar20 = (long *)0x0;
                        }
                      }
                      *in_stack_00000038 = (long)plVar20;
                      if (*(byte *)(*plVar23 + 0x130) < bVar3) {
                        plVar23 = (long *)0x0;
                      }
                      else if (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar3 * 8 + -8) !=
                               lVar24) {
                        plVar23 = (long *)0x0;
                      }
                    }
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (in_stack_00000038,plVar23);
                    bVar4 = true;
                  }
                }
                else {
                  bVar4 = false;
                }
                if ((*unaff_x20 == 0) || (lVar24 = *(long *)(*unaff_x20 + 0x38), lVar24 == 0))
                goto LAB_03566068;
                if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
                lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
                plVar23 = (long *)(lVar24 + 0x30);
                *plVar23 = lVar13;
                *(undefined4 *)(lVar24 + 0x2c) = 0;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar23,lVar13);
                if ((*unaff_x20 == 0) || (lVar24 = *(long *)(*unaff_x20 + 0x38), lVar24 == 0))
                goto LAB_03566068;
                uVar9 = *(uint *)(unaff_x19 + 0x490);
                if (*(uint *)(lVar24 + 0x18) <= uVar9) goto LAB_035660f8;
                lVar27 = lVar24 + (long)(int)uVar9 * 0x178;
                *(short *)(lVar27 + 0x20) = (short)unaff_w26;
                *(undefined1 *)(lVar27 + 0x5c) = uStack00000000000001bc;
                if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
                lVar24 = lVar24 + (long)(int)uVar9 * 0x178;
                *(undefined8 *)(lVar24 + 0x24) =
                     *(undefined8 *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x24);
                *(long *)(lVar24 + 0x38) = *in_stack_00000038;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*(char *)(lVar13 + 0x10) == '\x02') {
                  plVar23 = *(long **)(lVar13 + 0x18);
                  if (plVar23 == (long *)0x0) goto LAB_03566068;
                  bVar3 = *(byte *)(*(long *)OVRPlugin_Sizei_TypeInfo + 0x130);
                  if ((*(byte *)(*plVar23 + 0x130) < bVar3) ||
                     (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar3 * 8 + -8) !=
                      *(long *)OVRPlugin_Sizei_TypeInfo)) goto LAB_03566068;
                  lVar27 = plVar23[4];
                  lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar24 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar24 = *unaff_x24;
                  }
                  uVar9 = FUN_03558224(lVar27,plVar23,*(long *)(lVar24 + 0xb8),
                                       *(undefined8 *)(*(long *)(lVar24 + 0xb8) + 8));
                  *(uint *)(unaff_x19 + 0x120) = uVar9;
                  lVar24 = **(long **)(*unaff_x24 + 0xb8);
                  if (lVar24 == 0) goto LAB_03566068;
                  if (*(uint *)(lVar24 + 0x18) <= uVar9) goto LAB_035660f8;
                  lVar24 = lVar24 + (long)(int)uVar9 * 0x38;
                  *(int *)(lVar24 + 0x54) = *(int *)(lVar24 + 0x54) + 1;
                  if ((*unaff_x20 == 0) || (lVar24 = *(long *)(*unaff_x20 + 0x38), lVar24 == 0))
                  goto LAB_03566068;
                  if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
                  lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
                  *(undefined4 *)(lVar24 + 0x2c) = 1;
                  uVar8 = *(undefined4 *)(unaff_x19 + 0x120);
                  *(undefined8 *)(lVar24 + 0x40) = plVar23;
                  *(undefined4 *)(lVar24 + 0x58) = uVar8;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            ((undefined8 *)(lVar24 + 0x40),plVar23);
                  unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                     (lVar24 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar24 == 0))
                  goto LAB_03566068;
                  uVar9 = *(uint *)(unaff_x19 + 0x490);
                  if (*(uint *)(lVar24 + 0x18) <= uVar9) goto LAB_035660f8;
                  *(undefined4 *)(lVar24 + (long)(int)uVar9 * 0x178 + 0x48) =
                       *(undefined4 *)(lVar13 + 0x28);
                  *(undefined4 *)(unaff_x19 + 0x644) = 0;
                  *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
                  in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
                  plVar23 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
                  goto LAB_0356571c;
                }
                if (bVar4) {
                  lVar24 = *in_stack_00000038;
                  if (lVar24 == 0) goto LAB_03566068;
                  iVar10 = *(int *)(lVar24 + 0x18);
                  if (iVar10 == 0) {
                    iVar10 = FUN_036d3364(lVar24,0);
                    *(int *)(lVar24 + 0x18) = iVar10;
                  }
                  lVar24 = *(long *)(unaff_x19 + 0xf8);
                  if (lVar24 == 0) goto LAB_03566068;
                  iVar11 = *(int *)(lVar24 + 0x18);
                  if (iVar11 == 0) {
                    iVar11 = FUN_036d3364(lVar24,0);
                    *(int *)(lVar24 + 0x18) = iVar11;
                  }
                  if (iVar10 != iVar11) {
                    uVar14 = FUN_0359778c(0);
                    if ((uVar14 & 1) == 0) {
                      if (*in_stack_00000038 == 0) goto LAB_03566068;
                      uVar12 = *(undefined8 *)(*in_stack_00000038 + 0x20);
                    }
                    else {
                      if (*in_stack_00000038 == 0) goto LAB_03566068;
                      uVar21 = *(undefined8 *)(*in_stack_00000038 + 0x20);
                      uVar12 = *in_stack_00000028;
                      if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar12 = FUN_03594e9c(uVar12,uVar21,0);
                    }
                    *in_stack_00000028 = uVar12;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (in_stack_00000028);
                    lVar24 = *unaff_x24;
                    uVar12 = *in_stack_00000028;
                    lVar27 = *in_stack_00000038;
                    if (*(int *)(lVar24 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar24 = *unaff_x24;
                    }
                    uVar8 = FUN_03557fec(uVar12,lVar27,*(long *)(lVar24 + 0xb8),
                                         *(undefined8 *)(*(long *)(lVar24 + 0xb8) + 8));
                    *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
                  }
                }
                if (*(long *)(lVar13 + 0x20) == 0) goto LAB_03566068;
                iVar10 = FUN_03776eb8(*(long *)(lVar13 + 0x20),0);
                if (iVar10 < 1) goto LAB_035654c8;
                if (*(long *)(lVar13 + 0x20) == 0) goto LAB_03566068;
                param_3 = *in_stack_00000038;
                param_4 = *in_stack_00000028;
                param_5 = FUN_03776eb8(*(long *)(lVar13 + 0x20),0);
                param_5 = param_5 & 0xffffffff;
                if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*(long *)OVRPlugin_Sizef_TypeInfo);
                }
                param_6 = 0;
                unaff_x25 = in_stack_00000038;
                unaff_x29 = in_stack_00000028;
                goto code_r0x03565474;
              }
              uVar8 = *(undefined4 *)(unaff_x19 + 0x120);
              uVar14 = FUN_03586568();
              uVar7 = uStack00000000000001b8;
              if ((uVar14 & 1) == 0) goto LAB_035649d0;
              if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
              iVar10 = *(int *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x24);
              if ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0) {
                *(undefined1 *)(unaff_x19 + 0x26a) = 1;
              }
              puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              unaff_w22 = uStack00000000000001b8;
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
            *(undefined4 *)(lVar13 + (long)(int)uVar9 * 0x178 + 0x58) =
                 *(undefined4 *)(unaff_x19 + 0x120);
            if ((*(long *)(unaff_x19 + 0x698) == 0) ||
               (lVar24 = UnityEngine_Material__DisableKeyword(*(long *)(unaff_x19 + 0x698),0),
               lVar24 == 0)) goto LAB_03566068;
            FUN_02215a88(lVar24,*(undefined4 *)(unaff_x19 + 0x6a4),&stack0x000000e0,
                         *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
            if (*(uint *)(lVar13 + 0x18) <= uVar9) break;
            *(undefined8 *)(lVar13 + (long)(int)uVar9 * 0x178 + 0x30) = in_stack_000000e0;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
            goto LAB_03566068;
            uVar9 = *(uint *)(unaff_x19 + 0x490);
            if (*(uint *)(lVar13 + 0x18) <= uVar9) break;
            uVar2 = *(undefined4 *)(unaff_x19 + 0x644);
            lVar24 = lVar13 + (long)(int)uVar9 * 0x178;
            *(int *)(lVar24 + 0x24) = iVar10;
            *(undefined4 *)(lVar24 + 0x2c) = uVar2;
            if (*(uint *)(unaff_x21 + 0x18) <= uVar7) break;
            *(int *)(lVar13 + (long)(int)uVar9 * 0x178 + 0x28) =
                 (*(int *)(unaff_x21 + (long)(int)uVar7 * 0xc + 0x24) - iVar10) + 1;
            *(undefined4 *)(unaff_x19 + 0x644) = 0;
            *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
            in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
            unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            unaff_w22 = uVar7;
          } while( true );
        }
        goto LAB_035660f8;
      }
      goto LAB_03566068;
    }
    goto LAB_035660f8;
  }
  goto LAB_03566068;
LAB_035658ec:
  do {
    fVar31 = (float)param_2;
    if (uVar25 != 0) {
      lVar18 = *plVar20;
      if (lVar18 == 0) goto LAB_03566068;
      if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_035660f8;
      uVar12 = *(undefined8 *)(lVar18 + uVar25 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar16 = FUN_036d35a8(uVar12,0,0);
      if ((uVar16 & 1) != 0) {
        lVar18 = *unaff_x24;
        plVar23 = (long *)*plVar20;
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar18 = *unaff_x24;
        }
        lVar18 = **(long **)(lVar18 + 0xb8);
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_035660f8;
        lVar18 = lVar18 + lVar24;
        in_stack_00000160 = *(undefined8 *)(lVar18 + -4);
        in_stack_00000158 = *(undefined8 *)(lVar18 + -0xc);
        in_stack_00000150 = *(undefined8 *)(lVar18 + -0x14);
        in_stack_00000148 = *(undefined8 *)(lVar18 + -0x1c);
        uVar12 = *(undefined8 *)(lVar18 + -0x24);
        in_stack_00000138 = *(undefined8 *)(lVar18 + -0x2c);
        in_stack_00000130 = *(undefined8 *)(lVar18 + -0x34);
        in_stack_00000140 = uVar12;
        lVar18 = FUN_0359e964();
        fVar31 = (float)uVar12;
        if (plVar23 == (long *)0x0) goto LAB_03566068;
        if ((lVar18 != 0) &&
           (lVar17 = thunk_FUN_01a89d6c(lVar18,*(undefined8 *)(*plVar23 + 0x40)), lVar17 == 0)) {
LAB_035660fc:
          uVar12 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar12,0);
        }
        if (*(uint *)(plVar23 + 3) <= uVar25) goto LAB_035660f8;
        plVar23[uVar25 + 4] = lVar18;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long)plVar23 + lVar27,lVar18);
        unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if ((*unaff_x20 == 0) || (lVar18 = *(long *)(*unaff_x20 + 0x60), lVar18 == 0))
        goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_035660f8;
        puVar15 = (undefined8 *)(lVar18 + lVar13 + 0x30);
        *puVar15 = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar15,0);
      }
      if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_03566068;
      fVar28 = (float)FUN_036dba50(*(long *)(unaff_x19 + 0x380),0);
      lVar18 = *plVar20;
      if (lVar18 == 0) goto LAB_03566068;
      if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_035660f8;
      lVar18 = *(long *)(lVar18 + uVar25 * 8 + 0x20);
      if ((lVar18 == 0) || (fVar30 = fVar31, lVar18 = FUN_037b4844(lVar18,0), lVar18 == 0))
      goto LAB_03566068;
      fVar29 = (float)FUN_036dba50(lVar18,0);
      fVar31 = (fVar31 - fVar30) * (fVar31 - fVar30);
      param_2 = (ulong)(uint)fVar31;
      if (fVar5 <= (fVar28 - fVar29) * (fVar28 - fVar29) + fVar31) {
        lVar18 = *plVar20;
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_035660f8;
        lVar18 = *(long *)(lVar18 + uVar25 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_03566068;
        lVar18 = FUN_037b4844(lVar18,0);
        if ((*(long *)(unaff_x19 + 0x380) == 0) ||
           (FUN_036dba50(*(long *)(unaff_x19 + 0x380),0), lVar18 == 0)) goto LAB_03566068;
        FUN_036dbae0(lVar18,0);
      }
      lVar18 = *plVar20;
      if (lVar18 == 0) goto LAB_03566068;
      if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_035660f8;
      lVar18 = *(long *)(lVar18 + uVar25 * 8 + 0x20);
      if (lVar18 == 0) goto LAB_03566068;
      uVar12 = *(undefined8 *)(lVar18 + 0xf0);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar16 = FUN_036d35a8(uVar12,0,0);
      if ((uVar16 & 1) == 0) {
        lVar18 = *plVar20;
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_035660f8;
        lVar18 = *(long *)(lVar18 + uVar25 * 8 + 0x20);
        if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0xf0), lVar18 == 0)) goto LAB_03566068;
        iVar10 = FUN_036d3364(lVar18,0);
        lVar18 = *unaff_x24;
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar18);
          lVar18 = *unaff_x24;
        }
        lVar18 = **(long **)(lVar18 + 0xb8);
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_035660f8;
        lVar18 = *(long *)(lVar18 + lVar24 + -0x1c);
        if (lVar18 == 0) goto LAB_03566068;
        iVar11 = FUN_036d3364(lVar18,0);
        if (iVar10 != iVar11) goto LAB_03565b98;
      }
      else {
LAB_03565b98:
        lVar18 = *plVar20;
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_035660f8;
        lVar17 = *unaff_x24;
        lVar18 = *(long *)(lVar18 + uVar25 * 8 + 0x20);
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar17 = *unaff_x24;
        }
        lVar17 = **(long **)(lVar17 + 0xb8);
        if (lVar17 == 0) goto LAB_03566068;
        if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_035660f8;
        if (lVar18 == 0) goto LAB_03566068;
        thunk_FUN_0359e5ac(lVar18,*(undefined8 *)(lVar17 + lVar24 + -0x1c),0);
        lVar18 = *plVar20;
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_035660f8;
        lVar17 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar17 == 0) goto LAB_03566068;
        if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_035660f8;
        lVar18 = *(long *)(lVar18 + uVar25 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar18 + 0xd8) = *(undefined8 *)(lVar17 + lVar24 + -0x2c);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar18 = *plVar20;
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_035660f8;
        lVar17 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar17 == 0) goto LAB_03566068;
        if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_035660f8;
        lVar18 = *(long *)(lVar18 + uVar25 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar18 + 0xe0) = *(undefined8 *)(lVar17 + lVar24 + -0x24);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      lVar18 = *unaff_x24;
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar18 = *unaff_x24;
      }
      lVar17 = **(long **)(lVar18 + 0xb8);
      if (lVar17 == 0) goto LAB_03566068;
      if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_035660f8;
      if (*(char *)(lVar17 + lVar24 + -0x13) != '\0') {
        lVar19 = *plVar20;
        if (lVar19 == 0) goto LAB_03566068;
        if (*(uint *)(lVar19 + 0x18) <= uVar25) goto LAB_035660f8;
        lVar19 = *(long *)(lVar19 + uVar25 * 8 + 0x20);
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar17 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar17 == 0) goto LAB_03566068;
        }
        if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_035660f8;
        if (lVar19 == 0) goto LAB_03566068;
        FUN_0359e608(lVar19,*(undefined8 *)(lVar17 + lVar24 + -0x1c),0);
        lVar18 = *plVar20;
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_035660f8;
        lVar17 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar17 == 0) goto LAB_03566068;
        if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_035660f8;
        lVar18 = *(long *)(lVar18 + uVar25 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar18 + 0x100) = *(undefined8 *)(lVar17 + lVar24 + -0xc);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar18 + 0x100);
      }
    }
    lVar18 = *unaff_x24;
    if (*(int *)(lVar18 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar18 = *unaff_x24;
    }
    lVar18 = **(long **)(lVar18 + 0xb8);
    if (lVar18 == 0) goto LAB_03566068;
    if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_035660f8;
    if ((*unaff_x20 == 0) || (lVar17 = *(long *)(*unaff_x20 + 0x60), lVar17 == 0))
    goto LAB_03566068;
    if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_035660f8;
    lVar19 = *(long *)(lVar17 + lVar13 + 0x30);
    iVar10 = *(int *)(lVar18 + lVar24);
    if (lVar19 == 0) {
      if (uVar25 == 0) {
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
        if (*(int *)(lVar17 + 0x18) == 0) goto LAB_035660f8;
        memcpy((void *)(lVar17 + lVar13 + 0x20),&stack0x00000090,0x50);
        __dest = (void *)(lVar17 + 0x20);
      }
      else {
        lVar18 = *plVar20;
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_035660f8;
        lVar18 = *(long *)(lVar18 + uVar25 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_03566068;
        uVar12 = UnityEngine_Material__GetColorArray(lVar18,0);
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
        FUN_03595600(&stack0x000000e0,uVar12,iVar10 + 1,0);
        memcpy(&stack0x00000040,&stack0x000000e0,0x50);
        if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_035660f8;
        __dest = (void *)(lVar17 + lVar13 + 0x20);
        memcpy(__dest,&stack0x00000040,0x50);
      }
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(__dest,0);
    }
    else {
      iVar11 = *(int *)(lVar19 + 0x18);
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
        FUN_03595b9c(lVar17 + lVar13 + 0x20,iVar10,0);
      }
      else if ((0 < iVar10) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
        iVar1 = iVar11 + 3;
        if (-1 < iVar11) {
          iVar1 = iVar11;
        }
        if (0x100 < (iVar1 >> 2) - iVar10) goto LAB_03565e08;
      }
    }
    unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if ((*unaff_x20 == 0) || (lVar18 = *(long *)(*unaff_x20 + 0x60), lVar18 == 0))
    goto LAB_03566068;
    lVar17 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar17 = *unaff_x24;
    }
    lVar17 = **(long **)(lVar17 + 0xb8);
    if (lVar17 == 0) goto LAB_03566068;
    if ((*(uint *)(lVar17 + 0x18) <= uVar25) || (*(uint *)(lVar18 + 0x18) <= uVar25))
    goto LAB_035660f8;
    *(undefined8 *)(lVar18 + lVar13 + 0x68) = *(undefined8 *)(lVar17 + lVar24 + -0x1c);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    uVar25 = uVar25 + 1;
    lVar13 = lVar13 + 0x50;
    lVar24 = lVar24 + 0x38;
    lVar27 = lVar27 + 8;
  } while (uVar9 != uVar25);
LAB_03565fb8:
  lVar13 = *plVar20;
  if (lVar13 != 0) {
    lVar24 = (-(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar14 << 3) + 0x20;
    do {
      uVar9 = (uint)uVar14;
      if ((int)*(uint *)(lVar13 + 0x18) <= (int)uVar9) {
LAB_03565748:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar13 + 0x18) <= uVar9) {
LAB_035660f8:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar12 = *(undefined8 *)(lVar13 + lVar24);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar14 = FUN_036cee6c(uVar12,0,0);
      if ((uVar14 & 1) == 0) goto LAB_03565748;
      if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x60), lVar13 == 0)) break;
      if ((int)uVar9 < *(int *)(lVar13 + 0x18)) {
        lVar13 = *plVar20;
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_035660f8;
        if ((*(long *)(lVar13 + lVar24) == 0) ||
           (lVar13 = FUN_037b514c(*(long *)(lVar13 + lVar24),0), lVar13 == 0)) break;
        FUN_0390f3a4(lVar13,0,0);
      }
      lVar13 = *plVar20;
      uVar14 = (ulong)(uVar9 + 1);
      lVar24 = lVar24 + 8;
    } while (lVar13 != 0);
  }
LAB_03566068:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


