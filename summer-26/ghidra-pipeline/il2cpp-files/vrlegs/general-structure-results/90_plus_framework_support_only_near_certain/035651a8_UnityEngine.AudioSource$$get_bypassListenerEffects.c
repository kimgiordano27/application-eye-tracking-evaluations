/*
FUNCTION_NAME: UnityEngine.AudioSource$$get_bypassListenerEffects
ENTRY_POINT: 035651a8
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
UnityEngine_AudioSource__get_bypassListenerEffects(long param_1,undefined8 param_2,ulong param_3)

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
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  void *__dest;
  undefined8 uVar15;
  long lVar16;
  long in_x9;
  long lVar17;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar18;
  uint unaff_w22;
  long *plVar19;
  long lVar20;
  long *plVar21;
  undefined8 uVar22;
  long *plVar23;
  long *plVar24;
  long *unaff_x25;
  uint unaff_w26;
  ulong uVar25;
  long unaff_x27;
  long unaff_x28;
  int unaff_w29;
  uint *puVar26;
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
  
code_r0x035651a8:
  param_1 = param_1 + in_x9 * unaff_x28;
                    /* try { // try from 035651ac to 036651b3 has its CatchHandler @ 03565254 */
  *(undefined8 *)(param_1 + 0x24) = param_2;
  *(long *)(param_1 + 0x38) = *unaff_x25;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  plVar23 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    /* try { // try from 035651bc to 036651db has its CatchHandler @ 03565258 */
  if (*(char *)(unaff_x27 + 0x10) == '\x02') {
    plVar24 = *(long **)(unaff_x27 + 0x18);
    if (plVar24 == (long *)0x0) goto LAB_03566068;
    bVar3 = *(byte *)(*(long *)OVRPlugin_Sizei_TypeInfo + 0x130);
    if ((*(byte *)(*plVar24 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)OVRPlugin_Sizei_TypeInfo)) goto LAB_03566068;
    lVar20 = plVar24[4];
    lVar11 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar11 = *plVar23;
    }
    uVar7 = FUN_03558224(lVar20,plVar24,*(long *)(lVar11 + 0xb8),
                         *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8));
    *(uint *)(unaff_x19 + 0x120) = uVar7;
    lVar11 = **(long **)(*plVar23 + 0xb8);
    if (lVar11 == 0) goto LAB_03566068;
    if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_035660f8;
    lVar11 = lVar11 + (long)(int)uVar7 * 0x38;
    *(int *)(lVar11 + 0x54) = *(int *)(lVar11 + 0x54) + 1;
    if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 == 0))
    goto LAB_03566068;
    if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
    lVar11 = lVar11 + (int)*(uint *)(unaff_x19 + 0x490) * unaff_x28;
    *(undefined4 *)(lVar11 + 0x2c) = 1;
    uVar8 = *(undefined4 *)(unaff_x19 + 0x120);
    *(undefined8 *)(lVar11 + 0x40) = plVar24;
    *(undefined4 *)(lVar11 + 0x58) = uVar8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar11 + 0x40),plVar24);
    plVar23 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar11 == 0)) goto LAB_03566068;
    uVar7 = *(uint *)(unaff_x19 + 0x490);
    if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_035660f8;
    *(undefined4 *)(lVar11 + (int)uVar7 * unaff_x28 + 0x48) = *(undefined4 *)(unaff_x27 + 0x28);
    *(undefined4 *)(unaff_x19 + 0x644) = 0;
    *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
    in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
    unaff_x25 = in_stack_00000038;
    plVar24 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
  }
  else {
    if (unaff_w29 != 0) {
      lVar11 = *unaff_x25;
      if (lVar11 == 0) goto LAB_03566068;
      iVar9 = *(int *)(lVar11 + 0x18);
      if (iVar9 == 0) {
        iVar9 = FUN_036d3364(lVar11,0);
        *(int *)(lVar11 + 0x18) = iVar9;
      }
      lVar11 = *(long *)(unaff_x19 + 0xf8);
      if (lVar11 == 0) goto LAB_03566068;
      iVar10 = *(int *)(lVar11 + 0x18);
      if (iVar10 == 0) {
        iVar10 = FUN_036d3364(lVar11,0);
        *(int *)(lVar11 + 0x18) = iVar10;
      }
      unaff_x28 = 0x178;
      if (iVar9 != iVar10) {
        uVar18 = FUN_0359778c(0);
        if ((uVar18 & 1) == 0) {
          if (*unaff_x25 == 0) goto LAB_03566068;
          uVar22 = *(undefined8 *)(*unaff_x25 + 0x20);
        }
        else {
          if (*unaff_x25 == 0) goto LAB_03566068;
          uVar15 = *(undefined8 *)(*unaff_x25 + 0x20);
          uVar22 = *in_stack_00000028;
          if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar22 = FUN_03594e9c(uVar22,uVar15,0);
          unaff_x25 = in_stack_00000038;
        }
        *in_stack_00000028 = uVar22;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000028);
        lVar11 = *plVar23;
        uVar22 = *in_stack_00000028;
        lVar20 = *unaff_x25;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar11 = *plVar23;
        }
        uVar8 = FUN_03557fec(uVar22,lVar20,*(long *)(lVar11 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8));
        *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
        unaff_x25 = in_stack_00000038;
      }
    }
    if (*(long *)(unaff_x27 + 0x20) == 0) goto LAB_03566068;
    iVar9 = FUN_03776eb8(*(long *)(unaff_x27 + 0x20),0);
    if (0 < iVar9) {
      if (*(long *)(unaff_x27 + 0x20) == 0) goto LAB_03566068;
      lVar11 = *unaff_x25;
      uVar22 = *in_stack_00000028;
      uVar8 = FUN_03776eb8(*(long *)(unaff_x27 + 0x20),0);
      if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)OVRPlugin_Sizef_TypeInfo);
      }
      uVar22 = FUN_03594928(lVar11,uVar22,uVar8,0);
      *in_stack_00000028 = uVar22;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000028,uVar22);
      lVar11 = *plVar23;
      uVar22 = *in_stack_00000028;
      lVar20 = *unaff_x25;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar11 = *plVar23;
      }
      unaff_x28 = 0x178;
      uVar8 = FUN_03557fec(uVar22,lVar20,*(long *)(lVar11 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8));
      unaff_w29 = 1;
      *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
      unaff_x25 = in_stack_00000038;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar18 = FUN_026b63d8(unaff_w26,0);
    plVar24 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
    if ((unaff_w26 != 0x200b) && ((uVar18 & 1) == 0)) {
      lVar11 = *plVar23;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar11);
        lVar11 = *plVar23;
      }
      lVar20 = **(long **)(lVar11 + 0xb8);
      if (lVar20 == 0) goto LAB_03566068;
      uVar7 = *(uint *)(unaff_x19 + 0x120);
      if (*(uint *)(lVar20 + 0x18) <= uVar7) goto LAB_035660f8;
      if (*(int *)(lVar20 + (long)(int)uVar7 * 0x38 + 0x54) < 0x3fff) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar11);
          lVar20 = **(long **)(*plVar23 + 0xb8);
          if (lVar20 == 0) goto LAB_03566068;
          uVar7 = *(uint *)(unaff_x19 + 0x120);
        }
      }
      else {
        uVar15 = *in_stack_00000028;
        uVar22 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
        FUN_0369922c(uVar22,uVar15,0);
        lVar11 = *plVar23;
        lVar20 = *unaff_x25;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar11 = *plVar23;
        }
        uVar7 = FUN_03557fec(uVar22,lVar20,*(long *)(lVar11 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8));
        *(uint *)(unaff_x19 + 0x120) = uVar7;
        lVar20 = **(long **)(*plVar23 + 0xb8);
        if (lVar20 == 0) goto LAB_03566068;
      }
      if (*(uint *)(lVar20 + 0x18) <= uVar7) goto LAB_035660f8;
      lVar20 = lVar20 + (long)(int)uVar7 * 0x38;
      *(int *)(lVar20 + 0x54) = *(int *)(lVar20 + 0x54) + 1;
    }
    if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 == 0))
    goto LAB_03566068;
    if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
    *(undefined8 *)(lVar11 + (int)*(uint *)(unaff_x19 + 0x490) * unaff_x28 + 0x50) =
         *in_stack_00000028;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 == 0))
    goto LAB_03566068;
    if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
    uVar7 = *(uint *)(unaff_x19 + 0x120);
    *(uint *)(lVar11 + (int)*(uint *)(unaff_x19 + 0x490) * unaff_x28 + 0x58) = uVar7;
    lVar11 = *plVar23;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar11 = *plVar23;
      uVar7 = *(uint *)(unaff_x19 + 0x120);
    }
    lVar20 = **(long **)(lVar11 + 0xb8);
    if (lVar20 == 0) goto LAB_03566068;
    if (*(uint *)(lVar20 + 0x18) <= uVar7) goto LAB_035660f8;
    *(char *)(lVar20 + (long)(int)uVar7 * 0x38 + 0x41) = (char)unaff_w29;
    if (unaff_w29 != 0) {
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar20 = **(long **)(*plVar23 + 0xb8);
        if (lVar20 == 0) goto LAB_03566068;
        uVar7 = *(uint *)(unaff_x19 + 0x120);
      }
      if (*(uint *)(lVar20 + 0x18) <= uVar7) goto LAB_035660f8;
      puVar14 = (undefined8 *)(lVar20 + (long)(int)uVar7 * 0x38 + 0x48);
      *puVar14 = in_stack_00000018;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar14,in_stack_00000018);
      *(undefined8 *)(unaff_x19 + 0x100) = in_stack_00000010;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25);
      *(undefined8 *)(unaff_x19 + 0x118) = in_stack_00000018;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (in_stack_00000028,in_stack_00000018);
      *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
    }
    uVar7 = *(uint *)(unaff_x19 + 0x490);
  }
  do {
    *(uint *)(unaff_x19 + 0x490) = uVar7 + 1;
    do {
      uVar6 = *(uint *)(unaff_x21 + 0x18);
      uVar7 = unaff_w22 + 1;
      if ((int)uVar6 <= (int)uVar7) {
LAB_0356573c:
        if (*(char *)(unaff_x19 + 0x3f5) != '\0') {
          *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
          goto LAB_03565748;
        }
        lVar11 = *unaff_x20;
        if (lVar11 == 0) goto LAB_03566068;
        *(int *)(lVar11 + 0x1c) = in_stack_00000020._4_4_;
        lVar20 = *plVar23;
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar20 = *plVar23;
        }
        lVar20 = *(long *)(*(long *)(lVar20 + 0xb8) + 8);
        if (lVar20 == 0) goto LAB_03566068;
        uVar7 = FUN_0219b384(lVar20,*(undefined8 *)PTR_DAT_03ceb270);
        *(uint *)(lVar11 + 0x34) = uVar7;
        if (*unaff_x20 == 0) goto LAB_03566068;
        plVar19 = (long *)(*unaff_x20 + 0x60);
        lVar11 = *plVar19;
        if (lVar11 == 0) goto LAB_03566068;
        uVar18 = (ulong)uVar7;
        if (*(int *)(lVar11 + 0x18) < (int)uVar7) {
          if (*(int *)(*plVar24 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff02b8(plVar19,uVar18,0,*(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo);
        }
        if (*(long *)(unaff_x19 + 0x708) == 0) goto LAB_03566068;
        plVar19 = (long *)(unaff_x19 + 0x708);
        if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar7) {
          uVar8 = FUN_036c1d60(uVar7 + 1,0);
          if (*(int *)(*plVar24 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*plVar24);
          }
          FUN_01ff025c(plVar19,uVar8,*(undefined8 *)OVRSystemPerfMetrics_PerfMetrics_TypeInfo);
        }
        if (*(char *)(unaff_x19 + 0x321) != '\0') {
          if (*unaff_x20 == 0) goto LAB_03566068;
          plVar21 = (long *)(*unaff_x20 + 0x38);
          lVar11 = *plVar21;
          if (lVar11 == 0) goto LAB_03566068;
          iVar9 = *(int *)(unaff_x19 + 0x490);
          if (0x100 < *(int *)(lVar11 + 0x18) - iVar9) {
            iVar10 = 0x100;
            if (0x100 < iVar9 + 1) {
              iVar10 = iVar9 + 1;
            }
            if (*(int *)(*plVar24 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_01ff02b8(plVar21,iVar10,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
            plVar23 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          }
        }
        fVar4 = DAT_00d38798;
        if ((int)uVar7 < 1) goto LAB_03565fb8;
        lVar11 = 0;
        uVar25 = 0;
        lVar20 = 0x54;
        lVar27 = 0x20;
        goto LAB_035658ec;
      }
      if (uVar6 <= uVar7) goto LAB_035660f8;
      puVar26 = (uint *)(unaff_x21 + (long)(int)uVar7 * 0xc + 0x20);
      if (*puVar26 == 0) goto LAB_0356573c;
      if (*unaff_x20 == 0) goto LAB_03566068;
      plVar23 = (long *)(*unaff_x20 + 0x38);
      lVar11 = *plVar23;
      iVar9 = *(int *)(unaff_x19 + 0x490);
      if ((lVar11 == 0) || (*(int *)(lVar11 + 0x18) <= iVar9)) {
        if (*(int *)(*plVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff02b8(plVar23,iVar9 + 1,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
        uVar6 = *(uint *)(unaff_x21 + 0x18);
      }
      if (uVar6 <= uVar7) goto LAB_035660f8;
      unaff_w26 = *puVar26;
      if ((unaff_w26 != 0x3c) || (*(char *)(unaff_x19 + 0x302) == '\0')) {
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
            uVar18 = FUN_026b8070(unaff_w26,0);
            if ((uVar18 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar6 = FUN_026b8594(unaff_w26,0);
              goto LAB_03564aa8;
            }
          }
        }
        else {
LAB_03564a00:
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar18 = FUN_026b812c(unaff_w26,0);
          if ((uVar18 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar6 = FUN_026b8410(unaff_w26,0);
LAB_03564aa8:
            unaff_w26 = uVar6 & 0xffff;
          }
        }
LAB_03564aac:
        unaff_x27 = FUN_03591848();
        if (unaff_x27 == 0) {
          iVar9 = FUN_035975f8();
          if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_035660f8;
          if (iVar9 == 0) {
            uVar6 = 0x25a1;
          }
          else {
            uVar6 = FUN_035975f8(0);
          }
          *puVar26 = uVar6;
          uVar22 = *(undefined8 *)(unaff_x19 + 0x100);
          uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
          uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
          if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          unaff_x27 = FUN_03570fc4(uVar6,uVar22,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
          if (unaff_x27 == 0) {
            lVar11 = FUN_03597770();
            if (lVar11 != 0) {
              lVar11 = FUN_03597770(0);
              if (lVar11 == 0) goto LAB_03566068;
              if (0 < *(int *)(lVar11 + 0x18)) {
                uVar15 = *(undefined8 *)(unaff_x19 + 0x100);
                uVar22 = FUN_03597770(0);
                uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
                uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                }
                unaff_x27 = FUN_035714e4(uVar6,uVar15,uVar22,1,uVar8,uVar2,
                                         (long)&stack0x000001b8 + 4,0);
                if (unaff_x27 != 0) goto LAB_03564b5c;
              }
            }
            uVar22 = FUN_03597650(0);
            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
            }
            uVar18 = FUN_036cee6c(uVar22,0,0);
            if ((uVar18 & 1) != 0) {
              uVar22 = FUN_03597650(0);
              uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
              uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
              if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
              }
              unaff_x27 = FUN_03570fc4(uVar6,uVar22,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
              if (unaff_x27 != 0) goto LAB_03564b5c;
            }
            if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_035660f8;
            *puVar26 = 0x20;
            uVar22 = *(undefined8 *)(unaff_x19 + 0x100);
            uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
            uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
            if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar6 = 0x20;
            unaff_x27 = FUN_03570fc4(0x20,uVar22,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
            if (unaff_x27 == 0) {
              if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_035660f8;
              *puVar26 = 3;
              uVar22 = *(undefined8 *)(unaff_x19 + 0x100);
              uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
              uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
              if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar6 = 3;
              unaff_x27 = FUN_03570fc4(3,uVar22,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
            }
          }
LAB_03564b5c:
          uVar18 = FUN_03597634(0);
          if ((uVar18 & 1) == 0) {
            plVar23 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,4);
            if ((int)unaff_w26 < 0x10000) {
              in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,unaff_w26);
              lVar11 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
              if (plVar23 == (long *)0x0) goto LAB_03566068;
              if ((lVar11 != 0) &&
                 (lVar20 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar23 + 0x40)), lVar20 == 0)
                 ) goto LAB_035660fc;
              if ((int)plVar23[3] == 0) goto LAB_035660f8;
              plVar23[4] = lVar11;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar23 + 4,lVar11);
              if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
              lVar11 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
              if ((lVar11 != 0) &&
                 (lVar20 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar23 + 0x40)), lVar20 == 0)
                 ) goto LAB_035660fc;
              if (*(uint *)(plVar23 + 3) < 2) goto LAB_035660f8;
              plVar23[5] = lVar11;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar23 + 5,lVar11);
              if (unaff_x27 == 0) goto LAB_03566068;
              in_stack_00000168._4_4_ = *(undefined4 *)(unaff_x27 + 0x14);
              lVar11 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,(long)&stack0x00000168 + 4
                                         );
              if ((lVar11 != 0) &&
                 (lVar20 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar23 + 0x40)), lVar20 == 0)
                 ) goto LAB_035660fc;
              if (*(uint *)(plVar23 + 3) < 3) goto LAB_035660f8;
              plVar23[6] = lVar11;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar23 + 6,lVar11);
              lVar11 = FUN_036d3824();
              if ((lVar11 != 0) &&
                 (lVar20 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar23 + 0x40)), lVar20 == 0)
                 ) goto LAB_035660fc;
              if (*(uint *)(plVar23 + 3) < 4) goto LAB_035660f8;
              plVar23[7] = lVar11;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar23 + 7,lVar11);
              puVar14 = (undefined8 *)OVRPlugin_TrackedKeyboardFlags_TypeInfo;
            }
            else {
              in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,unaff_w26);
              lVar11 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
              if (plVar23 == (long *)0x0) goto LAB_03566068;
              if ((lVar11 != 0) &&
                 (lVar20 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar23 + 0x40)), lVar20 == 0)
                 ) goto LAB_035660fc;
              if ((int)plVar23[3] == 0) goto LAB_035660f8;
              plVar23[4] = lVar11;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar23 + 4,lVar11);
              if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
              lVar11 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
              if ((lVar11 != 0) &&
                 (lVar20 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar23 + 0x40)), lVar20 == 0)
                 ) goto LAB_035660fc;
              if (*(uint *)(plVar23 + 3) < 2) goto LAB_035660f8;
              plVar23[5] = lVar11;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar23 + 5,lVar11);
              if (unaff_x27 == 0) goto LAB_03566068;
              in_stack_00000168._4_4_ = *(undefined4 *)(unaff_x27 + 0x14);
              lVar11 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,(long)&stack0x00000168 + 4
                                         );
              if ((lVar11 != 0) &&
                 (lVar20 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar23 + 0x40)), lVar20 == 0)
                 ) goto LAB_035660fc;
              if (*(uint *)(plVar23 + 3) < 3) goto LAB_035660f8;
              plVar23[6] = lVar11;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar23 + 6,lVar11);
              lVar11 = FUN_036d3824();
              if ((lVar11 != 0) &&
                 (lVar20 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar23 + 0x40)), lVar20 == 0)
                 ) goto LAB_035660fc;
              if (*(uint *)(plVar23 + 3) < 4) goto LAB_035660f8;
              plVar23[7] = lVar11;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar23 + 7,lVar11);
              puVar14 = (undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo;
            }
            uVar22 = FUN_025be8f4(*puVar14,plVar23,0);
            if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_0367b470(uVar22);
            unaff_x25 = in_stack_00000038;
            unaff_w26 = uVar6;
          }
          else {
            unaff_x25 = in_stack_00000038;
            unaff_w26 = uVar6;
            if (unaff_x27 == 0) goto LAB_03566068;
          }
        }
        if (*(char *)(unaff_x27 + 0x10) == '\x01') {
          lVar11 = *(long *)(unaff_x27 + 0x18);
          if (lVar11 == 0) goto LAB_03566068;
          iVar9 = *(int *)(lVar11 + 0x18);
          if (iVar9 == 0) {
            iVar9 = FUN_036d3364(lVar11,0);
            *(int *)(lVar11 + 0x18) = iVar9;
          }
          lVar11 = *unaff_x25;
          if (lVar11 == 0) goto LAB_03566068;
          iVar10 = *(int *)(lVar11 + 0x18);
          if (iVar10 == 0) {
            iVar10 = FUN_036d3364(lVar11,0);
            *(int *)(lVar11 + 0x18) = iVar10;
          }
          if (iVar9 == iVar10) {
            unaff_w29 = 0;
          }
          else {
            plVar23 = *(long **)(unaff_x27 + 0x18);
            if (plVar23 == (long *)0x0) {
              plVar23 = (long *)0x0;
              *unaff_x25 = 0;
            }
            else {
              lVar11 = *(long *)OVRPlugin_OVRP_1_83_0_TypeInfo;
              bVar3 = *(byte *)(lVar11 + 0x130);
              if (*(byte *)(*plVar23 + 0x130) < bVar3) {
                plVar24 = (long *)0x0;
              }
              else {
                plVar24 = plVar23;
                if (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar3 * 8 + -8) != lVar11) {
                  plVar24 = (long *)0x0;
                }
              }
              *unaff_x25 = (long)plVar24;
              if (*(byte *)(*plVar23 + 0x130) < bVar3) {
                plVar23 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar3 * 8 + -8) != lVar11) {
                plVar23 = (long *)0x0;
              }
            }
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25,plVar23);
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
        plVar23 = (long *)(lVar11 + 0x30);
        *plVar23 = unaff_x27;
        *(undefined4 *)(lVar11 + 0x2c) = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar23,unaff_x27);
        if ((*unaff_x20 == 0) || (param_1 = *(long *)(*unaff_x20 + 0x38), param_1 == 0))
        goto LAB_03566068;
        in_x9 = (long)(int)*(uint *)(unaff_x19 + 0x490);
        if (*(uint *)(param_1 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
        lVar11 = param_1 + in_x9 * 0x178;
        *(short *)(lVar11 + 0x20) = (short)unaff_w26;
        *(undefined1 *)(lVar11 + 0x5c) = uStack00000000000001bc;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_035660f8;
        param_2 = *(undefined8 *)(unaff_x21 + (long)(int)uVar7 * 0xc + 0x24);
        unaff_w22 = uVar7;
        goto code_r0x035651a8;
      }
      uVar8 = *(undefined4 *)(unaff_x19 + 0x120);
      uVar18 = FUN_03586568();
      unaff_w22 = uStack00000000000001b8;
      if ((uVar18 & 1) == 0) goto LAB_035649d0;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_035660f8;
      iVar9 = *(int *)(unaff_x21 + (long)(int)uVar7 * 0xc + 0x24);
      if ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0) {
        *(undefined1 *)(unaff_x19 + 0x26a) = 1;
      }
      puVar5 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      plVar23 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    } while (*(int *)(unaff_x19 + 0x644) != 1);
    lVar11 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar11 = *(long *)puVar5;
    }
    lVar11 = **(long **)(lVar11 + 0xb8);
    if (lVar11 == 0) goto LAB_03566068;
    if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) goto LAB_035660f8;
    lVar11 = lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
    *(int *)(lVar11 + 0x54) = *(int *)(lVar11 + 0x54) + 1;
    if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 == 0))
    goto LAB_03566068;
    if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
    uVar2 = *(undefined4 *)(unaff_x19 + 0x6a4);
    lVar11 = lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
    *(short *)(lVar11 + 0x20) = (short)uVar2 + -0x2000;
    *(undefined4 *)(lVar11 + 0x48) = uVar2;
    *(long *)(lVar11 + 0x38) = *in_stack_00000038;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 == 0))
    goto LAB_03566068;
    if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
    *(undefined8 *)(lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x40) =
         *(undefined8 *)(unaff_x19 + 0x698);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 == 0))
    goto LAB_03566068;
    uVar7 = *(uint *)(unaff_x19 + 0x490);
    if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_035660f8;
    *(undefined4 *)(lVar11 + (long)(int)uVar7 * 0x178 + 0x58) = *(undefined4 *)(unaff_x19 + 0x120);
    if ((*(long *)(unaff_x19 + 0x698) == 0) ||
       (lVar20 = UnityEngine_Material__DisableKeyword(*(long *)(unaff_x19 + 0x698),0), lVar20 == 0))
    goto LAB_03566068;
    FUN_02215a88(lVar20,*(undefined4 *)(unaff_x19 + 0x6a4),&stack0x000000e0,
                 *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
    if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_035660f8;
    *(undefined8 *)(lVar11 + (long)(int)uVar7 * 0x178 + 0x30) = in_stack_000000e0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 == 0))
    goto LAB_03566068;
    uVar7 = *(uint *)(unaff_x19 + 0x490);
    if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_035660f8;
    uVar2 = *(undefined4 *)(unaff_x19 + 0x644);
    lVar20 = lVar11 + (long)(int)uVar7 * 0x178;
    *(int *)(lVar20 + 0x24) = iVar9;
    *(undefined4 *)(lVar20 + 0x2c) = uVar2;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
    *(int *)(lVar11 + (long)(int)uVar7 * 0x178 + 0x28) =
         (*(int *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x24) - iVar9) + 1;
    *(undefined4 *)(unaff_x19 + 0x644) = 0;
    *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
    in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
    plVar23 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    unaff_x25 = in_stack_00000038;
  } while( true );
LAB_035658ec:
  do {
    fVar31 = (float)param_3;
    if (uVar25 != 0) {
      lVar16 = *plVar19;
      if (lVar16 == 0) goto LAB_03566068;
      if (*(uint *)(lVar16 + 0x18) <= uVar25) goto LAB_035660f8;
      uVar22 = *(undefined8 *)(lVar16 + uVar25 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar12 = FUN_036d35a8(uVar22,0,0);
      if ((uVar12 & 1) != 0) {
        lVar16 = *plVar23;
        plVar24 = (long *)*plVar19;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar16 = *plVar23;
        }
        lVar16 = **(long **)(lVar16 + 0xb8);
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar25) goto LAB_035660f8;
        lVar16 = lVar16 + lVar20;
        in_stack_00000160 = *(undefined8 *)(lVar16 + -4);
        in_stack_00000158 = *(undefined8 *)(lVar16 + -0xc);
        in_stack_00000150 = *(undefined8 *)(lVar16 + -0x14);
        in_stack_00000148 = *(undefined8 *)(lVar16 + -0x1c);
        uVar22 = *(undefined8 *)(lVar16 + -0x24);
        in_stack_00000138 = *(undefined8 *)(lVar16 + -0x2c);
        in_stack_00000130 = *(undefined8 *)(lVar16 + -0x34);
        in_stack_00000140 = uVar22;
        lVar16 = FUN_0359e964();
        fVar31 = (float)uVar22;
        if (plVar24 == (long *)0x0) goto LAB_03566068;
        if ((lVar16 != 0) &&
           (lVar13 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar24 + 0x40)), lVar13 == 0)) {
LAB_035660fc:
          uVar22 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar22,0);
        }
        if (*(uint *)(plVar24 + 3) <= uVar25) goto LAB_035660f8;
        plVar24[uVar25 + 4] = lVar16;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long)plVar24 + lVar27,lVar16);
        plVar23 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if ((*unaff_x20 == 0) || (lVar16 = *(long *)(*unaff_x20 + 0x60), lVar16 == 0))
        goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar25) goto LAB_035660f8;
        puVar14 = (undefined8 *)(lVar16 + lVar11 + 0x30);
        *puVar14 = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar14,0);
      }
      if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_03566068;
      fVar28 = (float)FUN_036dba50(*(long *)(unaff_x19 + 0x380),0);
      lVar16 = *plVar19;
      if (lVar16 == 0) goto LAB_03566068;
      if (*(uint *)(lVar16 + 0x18) <= uVar25) goto LAB_035660f8;
      lVar16 = *(long *)(lVar16 + uVar25 * 8 + 0x20);
      if ((lVar16 == 0) || (fVar30 = fVar31, lVar16 = FUN_037b4844(lVar16,0), lVar16 == 0))
      goto LAB_03566068;
      fVar29 = (float)FUN_036dba50(lVar16,0);
      fVar31 = (fVar31 - fVar30) * (fVar31 - fVar30);
      param_3 = (ulong)(uint)fVar31;
      if (fVar4 <= (fVar28 - fVar29) * (fVar28 - fVar29) + fVar31) {
        lVar16 = *plVar19;
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar25) goto LAB_035660f8;
        lVar16 = *(long *)(lVar16 + uVar25 * 8 + 0x20);
        if (lVar16 == 0) goto LAB_03566068;
        lVar16 = FUN_037b4844(lVar16,0);
        if ((*(long *)(unaff_x19 + 0x380) == 0) ||
           (FUN_036dba50(*(long *)(unaff_x19 + 0x380),0), lVar16 == 0)) goto LAB_03566068;
        FUN_036dbae0(lVar16,0);
      }
      lVar16 = *plVar19;
      if (lVar16 == 0) goto LAB_03566068;
      if (*(uint *)(lVar16 + 0x18) <= uVar25) goto LAB_035660f8;
      lVar16 = *(long *)(lVar16 + uVar25 * 8 + 0x20);
      if (lVar16 == 0) goto LAB_03566068;
      uVar22 = *(undefined8 *)(lVar16 + 0xf0);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar12 = FUN_036d35a8(uVar22,0,0);
      if ((uVar12 & 1) == 0) {
        lVar16 = *plVar19;
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar25) goto LAB_035660f8;
        lVar16 = *(long *)(lVar16 + uVar25 * 8 + 0x20);
        if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0xf0), lVar16 == 0)) goto LAB_03566068;
        iVar9 = FUN_036d3364(lVar16,0);
        lVar16 = *plVar23;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar16);
          lVar16 = *plVar23;
        }
        lVar16 = **(long **)(lVar16 + 0xb8);
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar25) goto LAB_035660f8;
        lVar16 = *(long *)(lVar16 + lVar20 + -0x1c);
        if (lVar16 == 0) goto LAB_03566068;
        iVar10 = FUN_036d3364(lVar16,0);
        if (iVar9 != iVar10) goto LAB_03565b98;
      }
      else {
LAB_03565b98:
        lVar16 = *plVar19;
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar25) goto LAB_035660f8;
        lVar13 = *plVar23;
        lVar16 = *(long *)(lVar16 + uVar25 * 8 + 0x20);
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar13 = *plVar23;
        }
        lVar13 = **(long **)(lVar13 + 0xb8);
        if (lVar13 == 0) goto LAB_03566068;
        if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_035660f8;
        if (lVar16 == 0) goto LAB_03566068;
        thunk_FUN_0359e5ac(lVar16,*(undefined8 *)(lVar13 + lVar20 + -0x1c),0);
        lVar16 = *plVar19;
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar25) goto LAB_035660f8;
        lVar13 = **(long **)(*plVar23 + 0xb8);
        if (lVar13 == 0) goto LAB_03566068;
        if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_035660f8;
        lVar16 = *(long *)(lVar16 + uVar25 * 8 + 0x20);
        if (lVar16 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar16 + 0xd8) = *(undefined8 *)(lVar13 + lVar20 + -0x2c);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar16 = *plVar19;
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar25) goto LAB_035660f8;
        lVar13 = **(long **)(*plVar23 + 0xb8);
        if (lVar13 == 0) goto LAB_03566068;
        if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_035660f8;
        lVar16 = *(long *)(lVar16 + uVar25 * 8 + 0x20);
        if (lVar16 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar16 + 0xe0) = *(undefined8 *)(lVar13 + lVar20 + -0x24);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      lVar16 = *plVar23;
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar16 = *plVar23;
      }
      lVar13 = **(long **)(lVar16 + 0xb8);
      if (lVar13 == 0) goto LAB_03566068;
      if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_035660f8;
      if (*(char *)(lVar13 + lVar20 + -0x13) != '\0') {
        lVar17 = *plVar19;
        if (lVar17 == 0) goto LAB_03566068;
        if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_035660f8;
        lVar17 = *(long *)(lVar17 + uVar25 * 8 + 0x20);
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar13 = **(long **)(*plVar23 + 0xb8);
          if (lVar13 == 0) goto LAB_03566068;
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_035660f8;
        if (lVar17 == 0) goto LAB_03566068;
        FUN_0359e608(lVar17,*(undefined8 *)(lVar13 + lVar20 + -0x1c),0);
        lVar16 = *plVar19;
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar25) goto LAB_035660f8;
        lVar13 = **(long **)(*plVar23 + 0xb8);
        if (lVar13 == 0) goto LAB_03566068;
        if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_035660f8;
        lVar16 = *(long *)(lVar16 + uVar25 * 8 + 0x20);
        if (lVar16 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar16 + 0x100) = *(undefined8 *)(lVar13 + lVar20 + -0xc);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar16 + 0x100);
      }
    }
    lVar16 = *plVar23;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar16 = *plVar23;
    }
    lVar16 = **(long **)(lVar16 + 0xb8);
    if (lVar16 == 0) goto LAB_03566068;
    if (*(uint *)(lVar16 + 0x18) <= uVar25) goto LAB_035660f8;
    if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x60), lVar13 == 0))
    goto LAB_03566068;
    if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_035660f8;
    lVar17 = *(long *)(lVar13 + lVar11 + 0x30);
    iVar9 = *(int *)(lVar16 + lVar20);
    if (lVar17 == 0) {
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
        FUN_03595600(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar9 + 1,0);
        memcpy(&stack0x00000090,&stack0x000000e0,0x50);
        if (*(int *)(lVar13 + 0x18) == 0) goto LAB_035660f8;
        memcpy((void *)(lVar13 + lVar11 + 0x20),&stack0x00000090,0x50);
        __dest = (void *)(lVar13 + 0x20);
      }
      else {
        lVar16 = *plVar19;
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar25) goto LAB_035660f8;
        lVar16 = *(long *)(lVar16 + uVar25 * 8 + 0x20);
        if (lVar16 == 0) goto LAB_03566068;
        uVar22 = UnityEngine_Material__GetColorArray(lVar16,0);
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
        FUN_03595600(&stack0x000000e0,uVar22,iVar9 + 1,0);
        memcpy(&stack0x00000040,&stack0x000000e0,0x50);
        if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_035660f8;
        __dest = (void *)(lVar13 + lVar11 + 0x20);
        memcpy(__dest,&stack0x00000040,0x50);
      }
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(__dest,0);
    }
    else {
      iVar10 = *(int *)(lVar17 + 0x18);
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
        FUN_03595b9c(lVar13 + lVar11 + 0x20,iVar9,0);
      }
      else if ((0 < iVar9) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
        iVar1 = iVar10 + 3;
        if (-1 < iVar10) {
          iVar1 = iVar10;
        }
        if (0x100 < (iVar1 >> 2) - iVar9) goto LAB_03565e08;
      }
    }
    plVar23 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if ((*unaff_x20 == 0) || (lVar16 = *(long *)(*unaff_x20 + 0x60), lVar16 == 0))
    goto LAB_03566068;
    lVar13 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar13 = *plVar23;
    }
    lVar13 = **(long **)(lVar13 + 0xb8);
    if (lVar13 == 0) goto LAB_03566068;
    if ((*(uint *)(lVar13 + 0x18) <= uVar25) || (*(uint *)(lVar16 + 0x18) <= uVar25))
    goto LAB_035660f8;
    *(undefined8 *)(lVar16 + lVar11 + 0x68) = *(undefined8 *)(lVar13 + lVar20 + -0x1c);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    uVar25 = uVar25 + 1;
    lVar11 = lVar11 + 0x50;
    lVar20 = lVar20 + 0x38;
    lVar27 = lVar27 + 8;
  } while (uVar7 != uVar25);
LAB_03565fb8:
  lVar11 = *plVar19;
  if (lVar11 != 0) {
    lVar20 = (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar18 << 3) + 0x20;
    do {
      uVar7 = (uint)uVar18;
      if ((int)*(uint *)(lVar11 + 0x18) <= (int)uVar7) {
LAB_03565748:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar7) {
LAB_035660f8:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar22 = *(undefined8 *)(lVar11 + lVar20);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar18 = FUN_036cee6c(uVar22,0,0);
      if ((uVar18 & 1) == 0) goto LAB_03565748;
      if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x60), lVar11 == 0)) break;
      if ((int)uVar7 < *(int *)(lVar11 + 0x18)) {
        lVar11 = *plVar19;
        if (lVar11 == 0) break;
        if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_035660f8;
        if ((*(long *)(lVar11 + lVar20) == 0) ||
           (lVar11 = FUN_037b514c(*(long *)(lVar11 + lVar20),0), lVar11 == 0)) break;
        FUN_0390f3a4(lVar11,0,0);
      }
      lVar11 = *plVar19;
      uVar18 = (ulong)(uVar7 + 1);
      lVar20 = lVar20 + 8;
    } while (lVar11 != 0);
  }
LAB_03566068:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


