/*
FUNCTION_NAME: UnityEngine.AudioSource$$set_spatializePostEffects
ENTRY_POINT: 03564fc4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 178
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined4 UnityEngine_AudioSource__set_spatializePostEffects(undefined1 param_1 [16],ulong param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  float fVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  void *__dest;
  uint in_w8;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar21;
  uint unaff_w22;
  uint uVar22;
  long *plVar23;
  long lVar24;
  long *plVar25;
  long unaff_x24;
  long *plVar26;
  long *unaff_x25;
  uint unaff_w26;
  ulong uVar27;
  long unaff_x27;
  long unaff_x28;
  uint *puVar28;
  long *unaff_x29;
  long lVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
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
  
code_r0x03564fc4:
  if (3 < in_w8) {
    unaff_x29[7] = unaff_x28;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x29 + 7,unaff_x28);
    puVar16 = (undefined8 *)OVRPlugin_TrackedKeyboardFlags_TypeInfo;
LAB_03564fe4:
    uVar12 = FUN_025be8f4(*puVar16,unaff_x29,0);
    if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0367b470(uVar12);
    uVar22 = unaff_w22;
    uVar10 = unaff_w26;
LAB_03565024:
    if (*(char *)(unaff_x27 + 0x10) == '\x01') {
      lVar24 = *(long *)(unaff_x27 + 0x18);
      if (lVar24 == 0) goto LAB_03566068;
      iVar8 = *(int *)(lVar24 + 0x18);
      if (iVar8 == 0) {
        iVar8 = FUN_036d3364(lVar24,0);
        *(int *)(lVar24 + 0x18) = iVar8;
      }
      lVar24 = *unaff_x25;
      if (lVar24 == 0) goto LAB_03566068;
      iVar9 = *(int *)(lVar24 + 0x18);
      if (iVar9 == 0) {
        iVar9 = FUN_036d3364(lVar24,0);
        *(int *)(lVar24 + 0x18) = iVar9;
      }
      if (iVar8 == iVar9) {
        bVar5 = false;
      }
      else {
        plVar13 = *(long **)(unaff_x27 + 0x18);
        if (plVar13 == (long *)0x0) {
          plVar13 = (long *)0x0;
          *unaff_x25 = 0;
        }
        else {
          lVar24 = *(long *)OVRPlugin_OVRP_1_83_0_TypeInfo;
          bVar3 = *(byte *)(lVar24 + 0x130);
          if (*(byte *)(*plVar13 + 0x130) < bVar3) {
            plVar26 = (long *)0x0;
          }
          else {
            plVar26 = plVar13;
            if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar3 * 8 + -8) != lVar24) {
              plVar26 = (long *)0x0;
            }
          }
          *unaff_x25 = (long)plVar26;
          if (*(byte *)(*plVar13 + 0x130) < bVar3) {
            plVar13 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar3 * 8 + -8) != lVar24) {
            plVar13 = (long *)0x0;
          }
        }
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25,plVar13);
        bVar5 = true;
      }
    }
    else {
      bVar5 = false;
    }
    if ((*unaff_x20 == 0) || (lVar24 = *(long *)(*unaff_x20 + 0x38), lVar24 == 0))
    goto LAB_03566068;
    if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
    lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
    plVar13 = (long *)(lVar24 + 0x30);
    *plVar13 = unaff_x27;
    *(undefined4 *)(lVar24 + 0x2c) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar13,unaff_x27);
    if ((*unaff_x20 == 0) || (lVar24 = *(long *)(*unaff_x20 + 0x38), lVar24 == 0))
    goto LAB_03566068;
    uVar4 = *(uint *)(unaff_x19 + 0x490);
    if (*(uint *)(lVar24 + 0x18) <= uVar4) goto LAB_035660f8;
    lVar20 = lVar24 + (long)(int)uVar4 * 0x178;
    *(short *)(lVar20 + 0x20) = (short)uVar10;
    *(undefined1 *)(lVar20 + 0x5c) = uStack00000000000001bc;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar22) goto LAB_035660f8;
    lVar24 = lVar24 + (long)(int)uVar4 * 0x178;
    *(undefined8 *)(lVar24 + 0x24) = *(undefined8 *)(unaff_x21 + unaff_x24 * 0xc + 0x24);
    *(long *)(lVar24 + 0x38) = *unaff_x25;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    plVar13 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(char *)(unaff_x27 + 0x10) == '\x02') {
      plVar26 = *(long **)(unaff_x27 + 0x18);
      if (plVar26 == (long *)0x0) goto LAB_03566068;
      bVar3 = *(byte *)(*(long *)OVRPlugin_Sizei_TypeInfo + 0x130);
      if ((*(byte *)(*plVar26 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar26 + 200) + (ulong)bVar3 * 8 + -8) !=
          *(long *)OVRPlugin_Sizei_TypeInfo)) goto LAB_03566068;
      lVar20 = plVar26[4];
      lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar24 = *plVar13;
      }
      uVar10 = FUN_03558224(lVar20,plVar26,*(long *)(lVar24 + 0xb8),
                            *(undefined8 *)(*(long *)(lVar24 + 0xb8) + 8));
      *(uint *)(unaff_x19 + 0x120) = uVar10;
      lVar24 = **(long **)(*plVar13 + 0xb8);
      if (lVar24 == 0) goto LAB_03566068;
      if (*(uint *)(lVar24 + 0x18) <= uVar10) goto LAB_035660f8;
      lVar24 = lVar24 + (long)(int)uVar10 * 0x38;
      *(int *)(lVar24 + 0x54) = *(int *)(lVar24 + 0x54) + 1;
      if ((*unaff_x20 == 0) || (lVar24 = *(long *)(*unaff_x20 + 0x38), lVar24 == 0))
      goto LAB_03566068;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
      lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
      *(undefined4 *)(lVar24 + 0x2c) = 1;
      uVar11 = *(undefined4 *)(unaff_x19 + 0x120);
      *(undefined8 *)(lVar24 + 0x40) = plVar26;
      *(undefined4 *)(lVar24 + 0x58) = uVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar24 + 0x40),plVar26);
      plVar13 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar24 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar24 == 0)) goto LAB_03566068;
      uVar10 = *(uint *)(unaff_x19 + 0x490);
      if (*(uint *)(lVar24 + 0x18) <= uVar10) goto LAB_035660f8;
      *(undefined4 *)(lVar24 + (long)(int)uVar10 * 0x178 + 0x48) = *(undefined4 *)(unaff_x27 + 0x28)
      ;
      *(undefined4 *)(unaff_x19 + 0x644) = 0;
      *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
      in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
      unaff_x25 = in_stack_00000038;
      plVar26 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
    }
    else {
      if (bVar5) {
        lVar24 = *unaff_x25;
        if (lVar24 == 0) goto LAB_03566068;
        iVar8 = *(int *)(lVar24 + 0x18);
        if (iVar8 == 0) {
          iVar8 = FUN_036d3364(lVar24,0);
          *(int *)(lVar24 + 0x18) = iVar8;
        }
        lVar24 = *(long *)(unaff_x19 + 0xf8);
        if (lVar24 == 0) goto LAB_03566068;
        iVar9 = *(int *)(lVar24 + 0x18);
        if (iVar9 == 0) {
          iVar9 = FUN_036d3364(lVar24,0);
          *(int *)(lVar24 + 0x18) = iVar9;
        }
        if (iVar8 != iVar9) {
          uVar21 = FUN_0359778c(0);
          if ((uVar21 & 1) == 0) {
            if (*unaff_x25 == 0) goto LAB_03566068;
            uVar12 = *(undefined8 *)(*unaff_x25 + 0x20);
          }
          else {
            if (*unaff_x25 == 0) goto LAB_03566068;
            uVar17 = *(undefined8 *)(*unaff_x25 + 0x20);
            uVar12 = *in_stack_00000028;
            if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar12 = FUN_03594e9c(uVar12,uVar17,0);
            unaff_x25 = in_stack_00000038;
          }
          *in_stack_00000028 = uVar12;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000028);
          lVar24 = *plVar13;
          uVar12 = *in_stack_00000028;
          lVar20 = *unaff_x25;
          if (*(int *)(lVar24 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar24 = *plVar13;
          }
          uVar11 = FUN_03557fec(uVar12,lVar20,*(long *)(lVar24 + 0xb8),
                                *(undefined8 *)(*(long *)(lVar24 + 0xb8) + 8));
          *(undefined4 *)(unaff_x19 + 0x120) = uVar11;
          unaff_x25 = in_stack_00000038;
        }
      }
      if (*(long *)(unaff_x27 + 0x20) == 0) goto LAB_03566068;
      iVar8 = FUN_03776eb8(*(long *)(unaff_x27 + 0x20),0);
      if (0 < iVar8) {
        if (*(long *)(unaff_x27 + 0x20) == 0) goto LAB_03566068;
        lVar24 = *unaff_x25;
        uVar12 = *in_stack_00000028;
        uVar11 = FUN_03776eb8(*(long *)(unaff_x27 + 0x20),0);
        if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)OVRPlugin_Sizef_TypeInfo);
        }
        uVar12 = FUN_03594928(lVar24,uVar12,uVar11,0);
        *in_stack_00000028 = uVar12;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000028,uVar12);
        lVar24 = *plVar13;
        uVar12 = *in_stack_00000028;
        lVar20 = *unaff_x25;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar24 = *plVar13;
        }
        uVar11 = FUN_03557fec(uVar12,lVar20,*(long *)(lVar24 + 0xb8),
                              *(undefined8 *)(*(long *)(lVar24 + 0xb8) + 8));
        bVar5 = true;
        *(undefined4 *)(unaff_x19 + 0x120) = uVar11;
        unaff_x25 = in_stack_00000038;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar21 = FUN_026b63d8(uVar10,0);
      plVar26 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
      if ((uVar10 != 0x200b) && ((uVar21 & 1) == 0)) {
        lVar24 = *plVar13;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar24);
          lVar24 = *plVar13;
        }
        lVar20 = **(long **)(lVar24 + 0xb8);
        if (lVar20 == 0) goto LAB_03566068;
        uVar10 = *(uint *)(unaff_x19 + 0x120);
        if (*(uint *)(lVar20 + 0x18) <= uVar10) goto LAB_035660f8;
        if (*(int *)(lVar20 + (long)(int)uVar10 * 0x38 + 0x54) < 0x3fff) {
          if (*(int *)(lVar24 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar24);
            lVar20 = **(long **)(*plVar13 + 0xb8);
            if (lVar20 == 0) goto LAB_03566068;
            uVar10 = *(uint *)(unaff_x19 + 0x120);
          }
        }
        else {
          uVar17 = *in_stack_00000028;
          uVar12 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
          FUN_0369922c(uVar12,uVar17,0);
          lVar24 = *plVar13;
          lVar20 = *unaff_x25;
          if (*(int *)(lVar24 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar24 = *plVar13;
          }
          uVar10 = FUN_03557fec(uVar12,lVar20,*(long *)(lVar24 + 0xb8),
                                *(undefined8 *)(*(long *)(lVar24 + 0xb8) + 8));
          *(uint *)(unaff_x19 + 0x120) = uVar10;
          lVar20 = **(long **)(*plVar13 + 0xb8);
          if (lVar20 == 0) goto LAB_03566068;
        }
        if (*(uint *)(lVar20 + 0x18) <= uVar10) goto LAB_035660f8;
        lVar20 = lVar20 + (long)(int)uVar10 * 0x38;
        *(int *)(lVar20 + 0x54) = *(int *)(lVar20 + 0x54) + 1;
      }
      if ((*unaff_x20 == 0) || (lVar24 = *(long *)(*unaff_x20 + 0x38), lVar24 == 0))
      goto LAB_03566068;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
      *(undefined8 *)(lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x50) =
           *in_stack_00000028;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*unaff_x20 == 0) || (lVar24 = *(long *)(*unaff_x20 + 0x38), lVar24 == 0))
      goto LAB_03566068;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
      uVar10 = *(uint *)(unaff_x19 + 0x120);
      *(uint *)(lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x58) = uVar10;
      lVar24 = *plVar13;
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar24 = *plVar13;
        uVar10 = *(uint *)(unaff_x19 + 0x120);
      }
      lVar20 = **(long **)(lVar24 + 0xb8);
      if (lVar20 == 0) goto LAB_03566068;
      if (*(uint *)(lVar20 + 0x18) <= uVar10) goto LAB_035660f8;
      *(bool *)(lVar20 + (long)(int)uVar10 * 0x38 + 0x41) = bVar5;
      if (bVar5) {
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar20 = **(long **)(*plVar13 + 0xb8);
          if (lVar20 == 0) goto LAB_03566068;
          uVar10 = *(uint *)(unaff_x19 + 0x120);
        }
        if (*(uint *)(lVar20 + 0x18) <= uVar10) goto LAB_035660f8;
        puVar16 = (undefined8 *)(lVar20 + (long)(int)uVar10 * 0x38 + 0x48);
        *puVar16 = in_stack_00000018;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar16,in_stack_00000018)
        ;
        *(undefined8 *)(unaff_x19 + 0x100) = in_stack_00000010;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25);
        *(undefined8 *)(unaff_x19 + 0x118) = in_stack_00000018;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  (in_stack_00000028,in_stack_00000018);
        *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
      }
      uVar10 = *(uint *)(unaff_x19 + 0x490);
    }
    do {
      *(uint *)(unaff_x19 + 0x490) = uVar10 + 1;
      do {
        uVar10 = *(uint *)(unaff_x21 + 0x18);
        unaff_w22 = uVar22 + 1;
        if ((int)uVar10 <= (int)unaff_w22) {
LAB_0356573c:
          if (*(char *)(unaff_x19 + 0x3f5) != '\0') {
            *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
            goto LAB_03565748;
          }
          lVar24 = *unaff_x20;
          if (lVar24 == 0) goto LAB_03566068;
          *(int *)(lVar24 + 0x1c) = in_stack_00000020._4_4_;
          lVar20 = *plVar13;
          if (*(int *)(lVar20 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar20 = *plVar13;
          }
          lVar20 = *(long *)(*(long *)(lVar20 + 0xb8) + 8);
          if (lVar20 == 0) goto LAB_03566068;
          uVar10 = FUN_0219b384(lVar20,*(undefined8 *)PTR_DAT_03ceb270);
          *(uint *)(lVar24 + 0x34) = uVar10;
          if (*unaff_x20 == 0) goto LAB_03566068;
          plVar23 = (long *)(*unaff_x20 + 0x60);
          lVar24 = *plVar23;
          if (lVar24 == 0) goto LAB_03566068;
          uVar21 = (ulong)uVar10;
          if (*(int *)(lVar24 + 0x18) < (int)uVar10) {
            if (*(int *)(*plVar26 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_01ff02b8(plVar23,uVar21,0,*(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo);
          }
          if (*(long *)(unaff_x19 + 0x708) == 0) goto LAB_03566068;
          plVar23 = (long *)(unaff_x19 + 0x708);
          if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar10) {
            uVar11 = FUN_036c1d60(uVar10 + 1,0);
            if (*(int *)(*plVar26 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*plVar26);
            }
            FUN_01ff025c(plVar23,uVar11,*(undefined8 *)OVRSystemPerfMetrics_PerfMetrics_TypeInfo);
          }
          if (*(char *)(unaff_x19 + 0x321) != '\0') {
            if (*unaff_x20 == 0) goto LAB_03566068;
            plVar25 = (long *)(*unaff_x20 + 0x38);
            lVar24 = *plVar25;
            if (lVar24 == 0) goto LAB_03566068;
            iVar8 = *(int *)(unaff_x19 + 0x490);
            if (0x100 < *(int *)(lVar24 + 0x18) - iVar8) {
              iVar9 = 0x100;
              if (0x100 < iVar8 + 1) {
                iVar9 = iVar8 + 1;
              }
              if (*(int *)(*plVar26 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_01ff02b8(plVar25,iVar9,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
              plVar13 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            }
          }
          fVar6 = DAT_00d38798;
          if ((int)uVar10 < 1) goto LAB_03565fb8;
          lVar24 = 0;
          uVar27 = 0;
          lVar20 = 0x54;
          lVar29 = 0x20;
          goto LAB_035658ec;
        }
        if (uVar10 <= unaff_w22) goto LAB_035660f8;
        puVar28 = (uint *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x20);
        if (*puVar28 == 0) goto LAB_0356573c;
        if (*unaff_x20 == 0) goto LAB_03566068;
        plVar13 = (long *)(*unaff_x20 + 0x38);
        lVar24 = *plVar13;
        iVar8 = *(int *)(unaff_x19 + 0x490);
        if ((lVar24 == 0) || (*(int *)(lVar24 + 0x18) <= iVar8)) {
          if (*(int *)(*plVar26 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff02b8(plVar13,iVar8 + 1,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
          uVar10 = *(uint *)(unaff_x21 + 0x18);
        }
        if (uVar10 <= unaff_w22) goto LAB_035660f8;
        uVar10 = *puVar28;
        unaff_x24 = (long)(int)unaff_w22;
        if ((uVar10 != 0x3c) || (*(char *)(unaff_x19 + 0x302) == '\0')) {
LAB_035649d0:
          uStack00000000000001bc = 0;
          in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x100);
          in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x118);
          in_stack_00000030._4_4_ = *(undefined4 *)(unaff_x19 + 0x120);
          if (*(int *)(unaff_x19 + 0x644) != 0) goto LAB_03564aac;
          uVar22 = *(uint *)(unaff_x19 + 0x25c);
          if ((uVar22 >> 4 & 1) == 0) {
            if ((uVar22 >> 3 & 1) == 0) {
              if ((uVar22 >> 5 & 1) != 0) goto LAB_03564a00;
            }
            else {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar21 = FUN_026b8070(uVar10,0);
              if ((uVar21 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar10 = FUN_026b8594(uVar10,0);
                goto LAB_03564aa8;
              }
            }
          }
          else {
LAB_03564a00:
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar21 = FUN_026b812c(uVar10,0);
            if ((uVar21 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar10 = FUN_026b8410(uVar10,0);
LAB_03564aa8:
              uVar10 = uVar10 & 0xffff;
            }
          }
LAB_03564aac:
          unaff_x27 = FUN_03591848();
          uVar22 = unaff_w22;
          if (unaff_x27 != 0) goto LAB_03565024;
          iVar8 = FUN_035975f8();
          if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
          if (iVar8 == 0) {
            unaff_w26 = 0x25a1;
          }
          else {
            unaff_w26 = FUN_035975f8(0);
          }
          *puVar28 = unaff_w26;
          uVar12 = *(undefined8 *)(unaff_x19 + 0x100);
          uVar11 = *(undefined4 *)(unaff_x19 + 0x25c);
          uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
          if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          unaff_x27 = FUN_03570fc4(unaff_w26,uVar12,1,uVar11,uVar2,(long)&stack0x000001b8 + 4,0);
          if (unaff_x27 == 0) {
            lVar24 = FUN_03597770();
            if (lVar24 != 0) {
              lVar24 = FUN_03597770(0);
              if (lVar24 == 0) goto LAB_03566068;
              if (0 < *(int *)(lVar24 + 0x18)) {
                uVar17 = *(undefined8 *)(unaff_x19 + 0x100);
                uVar12 = FUN_03597770(0);
                uVar11 = *(undefined4 *)(unaff_x19 + 0x25c);
                uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                }
                unaff_x27 = FUN_035714e4(unaff_w26,uVar17,uVar12,1,uVar11,uVar2,
                                         (long)&stack0x000001b8 + 4,0);
                if (unaff_x27 != 0) goto LAB_03564b5c;
              }
            }
            uVar12 = FUN_03597650(0);
            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
            }
            uVar21 = FUN_036cee6c(uVar12,0,0);
            if ((uVar21 & 1) != 0) {
              uVar12 = FUN_03597650(0);
              uVar11 = *(undefined4 *)(unaff_x19 + 0x25c);
              uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
              if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
              }
              unaff_x27 = FUN_03570fc4(unaff_w26,uVar12,1,uVar11,uVar2,(long)&stack0x000001b8 + 4,0)
              ;
              if (unaff_x27 != 0) goto LAB_03564b5c;
            }
            if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
            *puVar28 = 0x20;
            uVar12 = *(undefined8 *)(unaff_x19 + 0x100);
            uVar11 = *(undefined4 *)(unaff_x19 + 0x25c);
            uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
            if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            unaff_w26 = 0x20;
            unaff_x27 = FUN_03570fc4(0x20,uVar12,1,uVar11,uVar2,(long)&stack0x000001b8 + 4,0);
            if (unaff_x27 == 0) {
              if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
              *puVar28 = 3;
              uVar12 = *(undefined8 *)(unaff_x19 + 0x100);
              uVar11 = *(undefined4 *)(unaff_x19 + 0x25c);
              uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
              if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              unaff_w26 = 3;
              unaff_x27 = FUN_03570fc4(3,uVar12,1,uVar11,uVar2,(long)&stack0x000001b8 + 4,0);
            }
          }
LAB_03564b5c:
          uVar21 = FUN_03597634(0);
          if ((uVar21 & 1) != 0) {
            unaff_x25 = in_stack_00000038;
            uVar10 = unaff_w26;
            if (unaff_x27 == 0) goto LAB_03566068;
            goto LAB_03565024;
          }
          unaff_x29 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,4);
          if ((int)uVar10 < 0x10000) {
            in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar10);
            lVar24 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
            if (unaff_x29 == (long *)0x0) goto LAB_03566068;
            if ((lVar24 != 0) &&
               (lVar20 = thunk_FUN_01a89d6c(lVar24,*(undefined8 *)(*unaff_x29 + 0x40)), lVar20 == 0)
               ) goto LAB_035660fc;
            if ((int)unaff_x29[3] == 0) goto LAB_035660f8;
            unaff_x29[4] = lVar24;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x29 + 4,lVar24);
            if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
            lVar24 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
            if ((lVar24 != 0) &&
               (lVar20 = thunk_FUN_01a89d6c(lVar24,*(undefined8 *)(*unaff_x29 + 0x40)), lVar20 == 0)
               ) goto LAB_035660fc;
            if (*(uint *)(unaff_x29 + 3) < 2) goto LAB_035660f8;
            unaff_x29[5] = lVar24;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x29 + 5,lVar24);
            if (unaff_x27 == 0) goto LAB_03566068;
            in_stack_00000168._4_4_ = *(undefined4 *)(unaff_x27 + 0x14);
            lVar24 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,(long)&stack0x00000168 + 4);
            if ((lVar24 != 0) &&
               (lVar20 = thunk_FUN_01a89d6c(lVar24,*(undefined8 *)(*unaff_x29 + 0x40)), lVar20 == 0)
               ) goto LAB_035660fc;
            if (*(uint *)(unaff_x29 + 3) < 3) goto LAB_035660f8;
            unaff_x29[6] = lVar24;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x29 + 6,lVar24);
            unaff_x28 = FUN_036d3824();
            if ((unaff_x28 != 0) &&
               (lVar24 = thunk_FUN_01a89d6c(unaff_x28,*(undefined8 *)(*unaff_x29 + 0x40)),
               lVar24 == 0)) goto LAB_035660fc;
            in_w8 = *(uint *)(unaff_x29 + 3);
            unaff_x25 = in_stack_00000038;
            goto code_r0x03564fc4;
          }
          in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar10);
          lVar24 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
          if (unaff_x29 == (long *)0x0) goto LAB_03566068;
          if ((lVar24 != 0) &&
             (lVar20 = thunk_FUN_01a89d6c(lVar24,*(undefined8 *)(*unaff_x29 + 0x40)), lVar20 == 0))
          goto LAB_035660fc;
          if ((int)unaff_x29[3] == 0) goto LAB_035660f8;
          unaff_x29[4] = lVar24;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x29 + 4,lVar24);
          if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
          lVar24 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
          if ((lVar24 != 0) &&
             (lVar20 = thunk_FUN_01a89d6c(lVar24,*(undefined8 *)(*unaff_x29 + 0x40)), lVar20 == 0))
          goto LAB_035660fc;
          if (*(uint *)(unaff_x29 + 3) < 2) goto LAB_035660f8;
          unaff_x29[5] = lVar24;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x29 + 5,lVar24);
          if (unaff_x27 == 0) goto LAB_03566068;
          in_stack_00000168._4_4_ = *(undefined4 *)(unaff_x27 + 0x14);
          lVar24 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,(long)&stack0x00000168 + 4);
          if ((lVar24 != 0) &&
             (lVar20 = thunk_FUN_01a89d6c(lVar24,*(undefined8 *)(*unaff_x29 + 0x40)), lVar20 == 0))
          goto LAB_035660fc;
          if (*(uint *)(unaff_x29 + 3) < 3) goto LAB_035660f8;
          unaff_x29[6] = lVar24;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x29 + 6,lVar24);
          lVar24 = FUN_036d3824();
          if ((lVar24 != 0) &&
             (lVar20 = thunk_FUN_01a89d6c(lVar24,*(undefined8 *)(*unaff_x29 + 0x40)), lVar20 == 0))
          goto LAB_035660fc;
          if (*(uint *)(unaff_x29 + 3) < 4) goto LAB_035660f8;
          unaff_x29[7] = lVar24;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x29 + 7,lVar24);
          puVar16 = (undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo;
          unaff_x25 = in_stack_00000038;
          goto LAB_03564fe4;
        }
        uVar11 = *(undefined4 *)(unaff_x19 + 0x120);
        uVar21 = FUN_03586568();
        uVar22 = uStack00000000000001b8;
        if ((uVar21 & 1) == 0) goto LAB_035649d0;
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
        iVar8 = *(int *)(unaff_x21 + unaff_x24 * 0xc + 0x24);
        if ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0) {
          *(undefined1 *)(unaff_x19 + 0x26a) = 1;
        }
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        plVar13 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      } while (*(int *)(unaff_x19 + 0x644) != 1);
      lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar24 = *(long *)puVar7;
      }
      lVar24 = **(long **)(lVar24 + 0xb8);
      if (lVar24 == 0) goto LAB_03566068;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) break;
      lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
      *(int *)(lVar24 + 0x54) = *(int *)(lVar24 + 0x54) + 1;
      if ((*unaff_x20 == 0) || (lVar24 = *(long *)(*unaff_x20 + 0x38), lVar24 == 0))
      goto LAB_03566068;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) break;
      uVar2 = *(undefined4 *)(unaff_x19 + 0x6a4);
      lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
      *(short *)(lVar24 + 0x20) = (short)uVar2 + -0x2000;
      *(undefined4 *)(lVar24 + 0x48) = uVar2;
      *(long *)(lVar24 + 0x38) = *in_stack_00000038;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*unaff_x20 == 0) || (lVar24 = *(long *)(*unaff_x20 + 0x38), lVar24 == 0))
      goto LAB_03566068;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) break;
      *(undefined8 *)(lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x40) =
           *(undefined8 *)(unaff_x19 + 0x698);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*unaff_x20 == 0) || (lVar24 = *(long *)(*unaff_x20 + 0x38), lVar24 == 0))
      goto LAB_03566068;
      uVar10 = *(uint *)(unaff_x19 + 0x490);
      if (*(uint *)(lVar24 + 0x18) <= uVar10) break;
      *(undefined4 *)(lVar24 + (long)(int)uVar10 * 0x178 + 0x58) =
           *(undefined4 *)(unaff_x19 + 0x120);
      if ((*(long *)(unaff_x19 + 0x698) == 0) ||
         (lVar20 = UnityEngine_Material__DisableKeyword(*(long *)(unaff_x19 + 0x698),0), lVar20 == 0
         )) goto LAB_03566068;
      FUN_02215a88(lVar20,*(undefined4 *)(unaff_x19 + 0x6a4),&stack0x000000e0,
                   *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      if (*(uint *)(lVar24 + 0x18) <= uVar10) break;
      *(undefined8 *)(lVar24 + (long)(int)uVar10 * 0x178 + 0x30) = in_stack_000000e0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*unaff_x20 == 0) || (lVar24 = *(long *)(*unaff_x20 + 0x38), lVar24 == 0))
      goto LAB_03566068;
      uVar10 = *(uint *)(unaff_x19 + 0x490);
      if (*(uint *)(lVar24 + 0x18) <= uVar10) break;
      uVar2 = *(undefined4 *)(unaff_x19 + 0x644);
      lVar20 = lVar24 + (long)(int)uVar10 * 0x178;
      *(int *)(lVar20 + 0x24) = iVar8;
      *(undefined4 *)(lVar20 + 0x2c) = uVar2;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar22) break;
      *(int *)(lVar24 + (long)(int)uVar10 * 0x178 + 0x28) =
           (*(int *)(unaff_x21 + (long)(int)uVar22 * 0xc + 0x24) - iVar8) + 1;
      *(undefined4 *)(unaff_x19 + 0x644) = 0;
      *(undefined4 *)(unaff_x19 + 0x120) = uVar11;
      in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
      plVar13 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      unaff_x25 = in_stack_00000038;
    } while( true );
  }
LAB_035660f8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
LAB_035658ec:
  do {
    fVar33 = (float)param_2;
    if (uVar27 != 0) {
      lVar18 = *plVar23;
      if (lVar18 == 0) goto LAB_03566068;
      if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_035660f8;
      uVar12 = *(undefined8 *)(lVar18 + uVar27 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar14 = FUN_036d35a8(uVar12,0,0);
      if ((uVar14 & 1) != 0) {
        lVar18 = *plVar13;
        plVar26 = (long *)*plVar23;
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar18 = *plVar13;
        }
        lVar18 = **(long **)(lVar18 + 0xb8);
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_035660f8;
        lVar18 = lVar18 + lVar20;
        in_stack_00000160 = *(undefined8 *)(lVar18 + -4);
        in_stack_00000158 = *(undefined8 *)(lVar18 + -0xc);
        in_stack_00000150 = *(undefined8 *)(lVar18 + -0x14);
        in_stack_00000148 = *(undefined8 *)(lVar18 + -0x1c);
        uVar12 = *(undefined8 *)(lVar18 + -0x24);
        in_stack_00000138 = *(undefined8 *)(lVar18 + -0x2c);
        in_stack_00000130 = *(undefined8 *)(lVar18 + -0x34);
        in_stack_00000140 = uVar12;
        lVar18 = FUN_0359e964();
        fVar33 = (float)uVar12;
        if (plVar26 == (long *)0x0) goto LAB_03566068;
        if ((lVar18 != 0) &&
           (lVar15 = thunk_FUN_01a89d6c(lVar18,*(undefined8 *)(*plVar26 + 0x40)), lVar15 == 0)) {
LAB_035660fc:
          uVar12 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar12,0);
        }
        if (*(uint *)(plVar26 + 3) <= uVar27) goto LAB_035660f8;
        plVar26[uVar27 + 4] = lVar18;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long)plVar26 + lVar29,lVar18);
        plVar13 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if ((*unaff_x20 == 0) || (lVar18 = *(long *)(*unaff_x20 + 0x60), lVar18 == 0))
        goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_035660f8;
        puVar16 = (undefined8 *)(lVar18 + lVar24 + 0x30);
        *puVar16 = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar16,0);
      }
      if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_03566068;
      fVar30 = (float)FUN_036dba50(*(long *)(unaff_x19 + 0x380),0);
      lVar18 = *plVar23;
      if (lVar18 == 0) goto LAB_03566068;
      if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_035660f8;
      lVar18 = *(long *)(lVar18 + uVar27 * 8 + 0x20);
      if ((lVar18 == 0) || (fVar32 = fVar33, lVar18 = FUN_037b4844(lVar18,0), lVar18 == 0))
      goto LAB_03566068;
      fVar31 = (float)FUN_036dba50(lVar18,0);
      fVar33 = (fVar33 - fVar32) * (fVar33 - fVar32);
      param_2 = (ulong)(uint)fVar33;
      if (fVar6 <= (fVar30 - fVar31) * (fVar30 - fVar31) + fVar33) {
        lVar18 = *plVar23;
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_035660f8;
        lVar18 = *(long *)(lVar18 + uVar27 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_03566068;
        lVar18 = FUN_037b4844(lVar18,0);
        if ((*(long *)(unaff_x19 + 0x380) == 0) ||
           (FUN_036dba50(*(long *)(unaff_x19 + 0x380),0), lVar18 == 0)) goto LAB_03566068;
        FUN_036dbae0(lVar18,0);
      }
      lVar18 = *plVar23;
      if (lVar18 == 0) goto LAB_03566068;
      if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_035660f8;
      lVar18 = *(long *)(lVar18 + uVar27 * 8 + 0x20);
      if (lVar18 == 0) goto LAB_03566068;
      uVar12 = *(undefined8 *)(lVar18 + 0xf0);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar14 = FUN_036d35a8(uVar12,0,0);
      if ((uVar14 & 1) == 0) {
        lVar18 = *plVar23;
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_035660f8;
        lVar18 = *(long *)(lVar18 + uVar27 * 8 + 0x20);
        if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0xf0), lVar18 == 0)) goto LAB_03566068;
        iVar8 = FUN_036d3364(lVar18,0);
        lVar18 = *plVar13;
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar18);
          lVar18 = *plVar13;
        }
        lVar18 = **(long **)(lVar18 + 0xb8);
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_035660f8;
        lVar18 = *(long *)(lVar18 + lVar20 + -0x1c);
        if (lVar18 == 0) goto LAB_03566068;
        iVar9 = FUN_036d3364(lVar18,0);
        if (iVar8 != iVar9) goto LAB_03565b98;
      }
      else {
LAB_03565b98:
        lVar18 = *plVar23;
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_035660f8;
        lVar15 = *plVar13;
        lVar18 = *(long *)(lVar18 + uVar27 * 8 + 0x20);
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar15 = *plVar13;
        }
        lVar15 = **(long **)(lVar15 + 0xb8);
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_035660f8;
        if (lVar18 == 0) goto LAB_03566068;
        thunk_FUN_0359e5ac(lVar18,*(undefined8 *)(lVar15 + lVar20 + -0x1c),0);
        lVar18 = *plVar23;
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_035660f8;
        lVar15 = **(long **)(*plVar13 + 0xb8);
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_035660f8;
        lVar18 = *(long *)(lVar18 + uVar27 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar18 + 0xd8) = *(undefined8 *)(lVar15 + lVar20 + -0x2c);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar18 = *plVar23;
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_035660f8;
        lVar15 = **(long **)(*plVar13 + 0xb8);
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_035660f8;
        lVar18 = *(long *)(lVar18 + uVar27 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar18 + 0xe0) = *(undefined8 *)(lVar15 + lVar20 + -0x24);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      lVar18 = *plVar13;
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar18 = *plVar13;
      }
      lVar15 = **(long **)(lVar18 + 0xb8);
      if (lVar15 == 0) goto LAB_03566068;
      if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_035660f8;
      if (*(char *)(lVar15 + lVar20 + -0x13) != '\0') {
        lVar19 = *plVar23;
        if (lVar19 == 0) goto LAB_03566068;
        if (*(uint *)(lVar19 + 0x18) <= uVar27) goto LAB_035660f8;
        lVar19 = *(long *)(lVar19 + uVar27 * 8 + 0x20);
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar15 = **(long **)(*plVar13 + 0xb8);
          if (lVar15 == 0) goto LAB_03566068;
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_035660f8;
        if (lVar19 == 0) goto LAB_03566068;
        FUN_0359e608(lVar19,*(undefined8 *)(lVar15 + lVar20 + -0x1c),0);
        lVar18 = *plVar23;
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_035660f8;
        lVar15 = **(long **)(*plVar13 + 0xb8);
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_035660f8;
        lVar18 = *(long *)(lVar18 + uVar27 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar18 + 0x100) = *(undefined8 *)(lVar15 + lVar20 + -0xc);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar18 + 0x100);
      }
    }
    lVar18 = *plVar13;
    if (*(int *)(lVar18 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar18 = *plVar13;
    }
    lVar18 = **(long **)(lVar18 + 0xb8);
    if (lVar18 == 0) goto LAB_03566068;
    if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_035660f8;
    if ((*unaff_x20 == 0) || (lVar15 = *(long *)(*unaff_x20 + 0x60), lVar15 == 0))
    goto LAB_03566068;
    if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_035660f8;
    lVar19 = *(long *)(lVar15 + lVar24 + 0x30);
    iVar8 = *(int *)(lVar18 + lVar20);
    if (lVar19 == 0) {
      if (uVar27 == 0) {
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
        memcpy((void *)(lVar15 + lVar24 + 0x20),&stack0x00000090,0x50);
        __dest = (void *)(lVar15 + 0x20);
      }
      else {
        lVar18 = *plVar23;
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_035660f8;
        lVar18 = *(long *)(lVar18 + uVar27 * 8 + 0x20);
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
        FUN_03595600(&stack0x000000e0,uVar12,iVar8 + 1,0);
        memcpy(&stack0x00000040,&stack0x000000e0,0x50);
        if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_035660f8;
        __dest = (void *)(lVar15 + lVar24 + 0x20);
        memcpy(__dest,&stack0x00000040,0x50);
      }
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(__dest,0);
    }
    else {
      iVar9 = *(int *)(lVar19 + 0x18);
      if (iVar9 < iVar8 * 4) {
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
        FUN_03595b9c(lVar15 + lVar24 + 0x20,iVar8,0);
      }
      else if ((0 < iVar8) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
        iVar1 = iVar9 + 3;
        if (-1 < iVar9) {
          iVar1 = iVar9;
        }
        if (0x100 < (iVar1 >> 2) - iVar8) goto LAB_03565e08;
      }
    }
    plVar13 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if ((*unaff_x20 == 0) || (lVar18 = *(long *)(*unaff_x20 + 0x60), lVar18 == 0))
    goto LAB_03566068;
    lVar15 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar15 = *plVar13;
    }
    lVar15 = **(long **)(lVar15 + 0xb8);
    if (lVar15 == 0) goto LAB_03566068;
    if ((*(uint *)(lVar15 + 0x18) <= uVar27) || (*(uint *)(lVar18 + 0x18) <= uVar27))
    goto LAB_035660f8;
    *(undefined8 *)(lVar18 + lVar24 + 0x68) = *(undefined8 *)(lVar15 + lVar20 + -0x1c);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    uVar27 = uVar27 + 1;
    lVar24 = lVar24 + 0x50;
    lVar20 = lVar20 + 0x38;
    lVar29 = lVar29 + 8;
  } while (uVar10 != uVar27);
LAB_03565fb8:
  lVar24 = *plVar23;
  if (lVar24 != 0) {
    lVar20 = (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar21 << 3) + 0x20;
    do {
      uVar10 = (uint)uVar21;
      if ((int)*(uint *)(lVar24 + 0x18) <= (int)uVar10) {
LAB_03565748:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar24 + 0x18) <= uVar10) goto LAB_035660f8;
      uVar12 = *(undefined8 *)(lVar24 + lVar20);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar21 = FUN_036cee6c(uVar12,0,0);
      if ((uVar21 & 1) == 0) goto LAB_03565748;
      if ((*unaff_x20 == 0) || (lVar24 = *(long *)(*unaff_x20 + 0x60), lVar24 == 0)) break;
      if ((int)uVar10 < *(int *)(lVar24 + 0x18)) {
        lVar24 = *plVar23;
        if (lVar24 == 0) break;
        if (*(uint *)(lVar24 + 0x18) <= uVar10) goto LAB_035660f8;
        if ((*(long *)(lVar24 + lVar20) == 0) ||
           (lVar24 = FUN_037b514c(*(long *)(lVar24 + lVar20),0), lVar24 == 0)) break;
        FUN_0390f3a4(lVar24,0,0);
      }
      lVar24 = *plVar23;
      uVar21 = (ulong)(uVar10 + 1);
      lVar20 = lVar20 + 8;
    } while (lVar24 != 0);
  }
LAB_03566068:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


