/*
FUNCTION_NAME: UnityEngine.AudioSource$$Stop
ENTRY_POINT: 035647c0
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


undefined4 UnityEngine_AudioSource__Stop(undefined1 param_1 [16],ulong param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  float fVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  void *__dest;
  uint uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar21;
  uint unaff_w22;
  long *plVar22;
  undefined4 unaff_w23;
  undefined8 uVar23;
  long *plVar24;
  undefined8 uVar25;
  long *plVar26;
  long unaff_x24;
  long *unaff_x25;
  undefined8 uVar27;
  ulong uVar28;
  long *unaff_x27;
  uint unaff_w28;
  uint *unaff_x29;
  long lVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
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
  
  while( true ) {
    uVar8 = uStack00000000000001b8;
    if ((param_3 & 1) == 0) goto LAB_035649d0;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) break;
    iVar10 = *(int *)(unaff_x21 + unaff_x24 * 0xc + 0x24);
    if ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0) {
      *(undefined1 *)(unaff_x19 + 0x26a) = 1;
    }
    puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    unaff_w22 = uStack00000000000001b8;
    if (*(int *)(unaff_x19 + 0x644) != 1) goto LAB_03565724;
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
    uVar9 = *(undefined4 *)(unaff_x19 + 0x6a4);
    lVar12 = lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
    *(short *)(lVar12 + 0x20) = (short)uVar9 + -0x2000;
    *(undefined4 *)(lVar12 + 0x48) = uVar9;
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
    uVar17 = *(uint *)(unaff_x19 + 0x490);
    if (*(uint *)(lVar12 + 0x18) <= uVar17) break;
    *(undefined4 *)(lVar12 + (long)(int)uVar17 * 0x178 + 0x58) = *(undefined4 *)(unaff_x19 + 0x120);
    if ((*(long *)(unaff_x19 + 0x698) == 0) ||
       (lVar13 = UnityEngine_Material__DisableKeyword(*(long *)(unaff_x19 + 0x698),0), lVar13 == 0))
    goto LAB_03566068;
    FUN_02215a88(lVar13,*(undefined4 *)(unaff_x19 + 0x6a4),&stack0x000000e0,
                 *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
    if (*(uint *)(lVar12 + 0x18) <= uVar17) break;
    *(undefined8 *)(lVar12 + (long)(int)uVar17 * 0x178 + 0x30) = in_stack_000000e0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
    goto LAB_03566068;
    uVar17 = *(uint *)(unaff_x19 + 0x490);
    if (*(uint *)(lVar12 + 0x18) <= uVar17) break;
    uVar9 = *(undefined4 *)(unaff_x19 + 0x644);
    lVar13 = lVar12 + (long)(int)uVar17 * 0x178;
    *(int *)(lVar13 + 0x24) = iVar10;
    *(undefined4 *)(lVar13 + 0x2c) = uVar9;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar8) break;
    *(int *)(lVar12 + (long)(int)uVar17 * 0x178 + 0x28) =
         (*(int *)(unaff_x21 + (long)(int)uVar8 * 0xc + 0x24) - iVar10) + 1;
    *(undefined4 *)(unaff_x19 + 0x644) = 0;
    *(undefined4 *)(unaff_x19 + 0x120) = unaff_w23;
    in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
    plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    unaff_x25 = in_stack_00000038;
    unaff_w22 = uVar8;
LAB_0356571c:
    *(uint *)(unaff_x19 + 0x490) = uVar17 + 1;
LAB_03565724:
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
      lVar13 = *plVar26;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar13 = *plVar26;
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
      if (lVar13 == 0) goto LAB_03566068;
      uVar8 = FUN_0219b384(lVar13,*(undefined8 *)PTR_DAT_03ceb270);
      *(uint *)(lVar12 + 0x34) = uVar8;
      if (*unaff_x20 == 0) goto LAB_03566068;
      plVar22 = (long *)(*unaff_x20 + 0x60);
      lVar12 = *plVar22;
      if (lVar12 == 0) goto LAB_03566068;
      uVar21 = (ulong)uVar8;
      if (*(int *)(lVar12 + 0x18) < (int)uVar8) {
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff02b8(plVar22,uVar21,0,*(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo);
      }
      if (*(long *)(unaff_x19 + 0x708) == 0) goto LAB_03566068;
      plVar22 = (long *)(unaff_x19 + 0x708);
      if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar8) {
        uVar9 = FUN_036c1d60(uVar8 + 1,0);
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*unaff_x27);
        }
        FUN_01ff025c(plVar22,uVar9,*(undefined8 *)OVRSystemPerfMetrics_PerfMetrics_TypeInfo);
      }
      if (*(char *)(unaff_x19 + 0x321) != '\0') {
        if (*unaff_x20 == 0) goto LAB_03566068;
        plVar24 = (long *)(*unaff_x20 + 0x38);
        lVar12 = *plVar24;
        if (lVar12 == 0) goto LAB_03566068;
        iVar10 = *(int *)(unaff_x19 + 0x490);
        if (0x100 < *(int *)(lVar12 + 0x18) - iVar10) {
          iVar11 = 0x100;
          if (0x100 < iVar10 + 1) {
            iVar11 = iVar10 + 1;
          }
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff02b8(plVar24,iVar11,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
          plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
      }
      fVar5 = DAT_00d38798;
      if ((int)uVar8 < 1) goto LAB_03565fb8;
      lVar12 = 0;
      uVar28 = 0;
      lVar13 = 0x54;
      lVar29 = 0x20;
      goto LAB_035658ec;
    }
    if (uVar8 <= unaff_w22) break;
    unaff_x29 = (uint *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x20);
    if (*unaff_x29 == 0) goto LAB_0356573c;
    if (*unaff_x20 == 0) goto LAB_03566068;
    plVar26 = (long *)(*unaff_x20 + 0x38);
    lVar12 = *plVar26;
    iVar10 = *(int *)(unaff_x19 + 0x490);
    if ((lVar12 == 0) || (*(int *)(lVar12 + 0x18) <= iVar10)) {
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff02b8(plVar26,iVar10 + 1,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
      uVar8 = *(uint *)(unaff_x21 + 0x18);
    }
    if (uVar8 <= unaff_w22) break;
    unaff_w28 = *unaff_x29;
    unaff_x24 = (long)(int)unaff_w22;
    if ((unaff_w28 != 0x3c) || (*(char *)(unaff_x19 + 0x302) == '\0')) {
LAB_035649d0:
      uStack00000000000001bc = 0;
      uVar20 = *(undefined8 *)(unaff_x19 + 0x100);
      uVar25 = *(undefined8 *)(unaff_x19 + 0x118);
      uVar9 = *(undefined4 *)(unaff_x19 + 0x120);
      if (*(int *)(unaff_x19 + 0x644) != 0) goto LAB_03564aac;
      uVar8 = *(uint *)(unaff_x19 + 0x25c);
      if ((uVar8 >> 4 & 1) == 0) {
        if ((uVar8 >> 3 & 1) == 0) {
          if ((uVar8 >> 5 & 1) != 0) goto LAB_03564a00;
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar21 = FUN_026b8070(unaff_w28,0);
          if ((uVar21 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar8 = FUN_026b8594(unaff_w28,0);
            goto LAB_03564aa8;
          }
        }
      }
      else {
LAB_03564a00:
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar21 = FUN_026b812c(unaff_w28,0);
        if ((uVar21 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar8 = FUN_026b8410(unaff_w28,0);
LAB_03564aa8:
          unaff_w28 = uVar8 & 0xffff;
        }
      }
LAB_03564aac:
      lVar12 = FUN_03591848();
      if (lVar12 == 0) {
        iVar10 = FUN_035975f8();
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) break;
        if (iVar10 == 0) {
          uVar8 = 0x25a1;
        }
        else {
          uVar8 = FUN_035975f8(0);
        }
        *unaff_x29 = uVar8;
        uVar23 = *(undefined8 *)(unaff_x19 + 0x100);
        uVar7 = *(undefined4 *)(unaff_x19 + 0x25c);
        uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
        if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        lVar12 = FUN_03570fc4(uVar8,uVar23,1,uVar7,uVar2,(long)&stack0x000001b8 + 4,0);
        if (lVar12 == 0) {
          lVar12 = FUN_03597770();
          if (lVar12 != 0) {
            lVar12 = FUN_03597770(0);
            if (lVar12 == 0) goto LAB_03566068;
            if (0 < *(int *)(lVar12 + 0x18)) {
              uVar27 = *(undefined8 *)(unaff_x19 + 0x100);
              uVar23 = FUN_03597770(0);
              uVar7 = *(undefined4 *)(unaff_x19 + 0x25c);
              uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
              if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
              }
              lVar12 = FUN_035714e4(uVar8,uVar27,uVar23,1,uVar7,uVar2,(long)&stack0x000001b8 + 4,0);
              if (lVar12 != 0) goto LAB_03564b5c;
            }
          }
          uVar23 = FUN_03597650(0);
          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
          }
          uVar21 = FUN_036cee6c(uVar23,0,0);
          if ((uVar21 & 1) != 0) {
            uVar23 = FUN_03597650(0);
            uVar7 = *(undefined4 *)(unaff_x19 + 0x25c);
            uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
            if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
            }
            lVar12 = FUN_03570fc4(uVar8,uVar23,1,uVar7,uVar2,(long)&stack0x000001b8 + 4,0);
            if (lVar12 != 0) goto LAB_03564b5c;
          }
          if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) break;
          *unaff_x29 = 0x20;
          uVar23 = *(undefined8 *)(unaff_x19 + 0x100);
          uVar7 = *(undefined4 *)(unaff_x19 + 0x25c);
          uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
          if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar8 = 0x20;
          lVar12 = FUN_03570fc4(0x20,uVar23,1,uVar7,uVar2,(long)&stack0x000001b8 + 4,0);
          if (lVar12 == 0) {
            if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) break;
            *unaff_x29 = 3;
            uVar23 = *(undefined8 *)(unaff_x19 + 0x100);
            uVar7 = *(undefined4 *)(unaff_x19 + 0x25c);
            uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
            if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar8 = 3;
            lVar12 = FUN_03570fc4(3,uVar23,1,uVar7,uVar2,(long)&stack0x000001b8 + 4,0);
          }
        }
LAB_03564b5c:
        uVar21 = FUN_03597634(0);
        if ((uVar21 & 1) == 0) {
          plVar26 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,4);
          if ((int)unaff_w28 < 0x10000) {
            in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,unaff_w28);
            lVar13 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
            if (plVar26 == (long *)0x0) goto LAB_03566068;
            if ((lVar13 != 0) &&
               (lVar29 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar26 + 0x40)), lVar29 == 0))
            goto LAB_035660fc;
            if ((int)plVar26[3] == 0) break;
            plVar26[4] = lVar13;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar26 + 4,lVar13);
            if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
            lVar13 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
            if ((lVar13 != 0) &&
               (lVar29 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar26 + 0x40)), lVar29 == 0))
            goto LAB_035660fc;
            if (*(uint *)(plVar26 + 3) < 2) break;
            plVar26[5] = lVar13;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar26 + 5,lVar13);
            if (lVar12 == 0) goto LAB_03566068;
            in_stack_00000168._4_4_ = *(undefined4 *)(lVar12 + 0x14);
            lVar13 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,(long)&stack0x00000168 + 4);
            if ((lVar13 != 0) &&
               (lVar29 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar26 + 0x40)), lVar29 == 0))
            goto LAB_035660fc;
            if (*(uint *)(plVar26 + 3) < 3) break;
            plVar26[6] = lVar13;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar26 + 6,lVar13);
            lVar13 = FUN_036d3824();
            if ((lVar13 != 0) &&
               (lVar29 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar26 + 0x40)), lVar29 == 0))
            goto LAB_035660fc;
            if (*(uint *)(plVar26 + 3) < 4) break;
            plVar26[7] = lVar13;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar26 + 7,lVar13);
            puVar16 = (undefined8 *)OVRPlugin_TrackedKeyboardFlags_TypeInfo;
          }
          else {
            in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,unaff_w28);
            lVar13 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
            if (plVar26 == (long *)0x0) goto LAB_03566068;
            if ((lVar13 != 0) &&
               (lVar29 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar26 + 0x40)), lVar29 == 0))
            goto LAB_035660fc;
            if ((int)plVar26[3] == 0) break;
            plVar26[4] = lVar13;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar26 + 4,lVar13);
            if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
            lVar13 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
            if ((lVar13 != 0) &&
               (lVar29 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar26 + 0x40)), lVar29 == 0))
            goto LAB_035660fc;
            if (*(uint *)(plVar26 + 3) < 2) break;
            plVar26[5] = lVar13;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar26 + 5,lVar13);
            if (lVar12 == 0) goto LAB_03566068;
            in_stack_00000168._4_4_ = *(undefined4 *)(lVar12 + 0x14);
            lVar13 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,(long)&stack0x00000168 + 4);
            if ((lVar13 != 0) &&
               (lVar29 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar26 + 0x40)), lVar29 == 0))
            goto LAB_035660fc;
            if (*(uint *)(plVar26 + 3) < 3) break;
            plVar26[6] = lVar13;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar26 + 6,lVar13);
            lVar13 = FUN_036d3824();
            if ((lVar13 != 0) &&
               (lVar29 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar26 + 0x40)), lVar29 == 0))
            goto LAB_035660fc;
            if (*(uint *)(plVar26 + 3) < 4) break;
            plVar26[7] = lVar13;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar26 + 7,lVar13);
            puVar16 = (undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo;
          }
          uVar23 = FUN_025be8f4(*puVar16,plVar26,0);
          if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0367b470(uVar23);
          unaff_x25 = in_stack_00000038;
          unaff_w28 = uVar8;
        }
        else {
          unaff_x25 = in_stack_00000038;
          unaff_w28 = uVar8;
          if (lVar12 == 0) goto LAB_03566068;
        }
      }
      if (*(char *)(lVar12 + 0x10) == '\x01') {
        lVar13 = *(long *)(lVar12 + 0x18);
        if (lVar13 == 0) goto LAB_03566068;
        iVar10 = *(int *)(lVar13 + 0x18);
        if (iVar10 == 0) {
          iVar10 = FUN_036d3364(lVar13,0);
          *(int *)(lVar13 + 0x18) = iVar10;
        }
        lVar13 = *unaff_x25;
        if (lVar13 == 0) goto LAB_03566068;
        iVar11 = *(int *)(lVar13 + 0x18);
        if (iVar11 == 0) {
          iVar11 = FUN_036d3364(lVar13,0);
          *(int *)(lVar13 + 0x18) = iVar11;
        }
        if (iVar10 == iVar11) {
          bVar4 = false;
        }
        else {
          plVar26 = *(long **)(lVar12 + 0x18);
          if (plVar26 == (long *)0x0) {
            plVar26 = (long *)0x0;
            *unaff_x25 = 0;
          }
          else {
            lVar13 = *(long *)OVRPlugin_OVRP_1_83_0_TypeInfo;
            bVar3 = *(byte *)(lVar13 + 0x130);
            if (*(byte *)(*plVar26 + 0x130) < bVar3) {
              plVar22 = (long *)0x0;
            }
            else {
              plVar22 = plVar26;
              if (*(long *)(*(long *)(*plVar26 + 200) + (ulong)bVar3 * 8 + -8) != lVar13) {
                plVar22 = (long *)0x0;
              }
            }
            *unaff_x25 = (long)plVar22;
            if (*(byte *)(*plVar26 + 0x130) < bVar3) {
              plVar26 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar26 + 200) + (ulong)bVar3 * 8 + -8) != lVar13) {
              plVar26 = (long *)0x0;
            }
          }
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25,plVar26);
          bVar4 = true;
        }
      }
      else {
        bVar4 = false;
      }
      if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
      goto LAB_03566068;
      if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) break;
      lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
      plVar26 = (long *)(lVar13 + 0x30);
      *plVar26 = lVar12;
      *(undefined4 *)(lVar13 + 0x2c) = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar26,lVar12);
      if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
      goto LAB_03566068;
      uVar8 = *(uint *)(unaff_x19 + 0x490);
      if (*(uint *)(lVar13 + 0x18) <= uVar8) break;
      lVar29 = lVar13 + (long)(int)uVar8 * 0x178;
      *(short *)(lVar29 + 0x20) = (short)unaff_w28;
      *(undefined1 *)(lVar29 + 0x5c) = uStack00000000000001bc;
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) break;
      lVar13 = lVar13 + (long)(int)uVar8 * 0x178;
      *(undefined8 *)(lVar13 + 0x24) = *(undefined8 *)(unaff_x21 + unaff_x24 * 0xc + 0x24);
      *(long *)(lVar13 + 0x38) = *unaff_x25;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(char *)(lVar12 + 0x10) == '\x02') {
        plVar22 = *(long **)(lVar12 + 0x18);
        if (plVar22 == (long *)0x0) goto LAB_03566068;
        bVar3 = *(byte *)(*(long *)OVRPlugin_Sizei_TypeInfo + 0x130);
        if ((*(byte *)(*plVar22 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)OVRPlugin_Sizei_TypeInfo)) goto LAB_03566068;
        lVar29 = plVar22[4];
        lVar13 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar13 = *plVar26;
        }
        uVar8 = FUN_03558224(lVar29,plVar22,*(long *)(lVar13 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
        *(uint *)(unaff_x19 + 0x120) = uVar8;
        lVar13 = **(long **)(*plVar26 + 0xb8);
        if (lVar13 == 0) goto LAB_03566068;
        if (*(uint *)(lVar13 + 0x18) <= uVar8) break;
        lVar13 = lVar13 + (long)(int)uVar8 * 0x38;
        *(int *)(lVar13 + 0x54) = *(int *)(lVar13 + 0x54) + 1;
        if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
        goto LAB_03566068;
        if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) break;
        lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
        *(undefined4 *)(lVar13 + 0x2c) = 1;
        uVar7 = *(undefined4 *)(unaff_x19 + 0x120);
        *(undefined8 *)(lVar13 + 0x40) = plVar22;
        *(undefined4 *)(lVar13 + 0x58) = uVar7;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(lVar13 + 0x40),plVar22);
        plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0))
        goto LAB_03566068;
        uVar17 = *(uint *)(unaff_x19 + 0x490);
        if (*(uint *)(lVar13 + 0x18) <= uVar17) break;
        *(undefined4 *)(lVar13 + (long)(int)uVar17 * 0x178 + 0x48) = *(undefined4 *)(lVar12 + 0x28);
        *(undefined4 *)(unaff_x19 + 0x644) = 0;
        *(undefined4 *)(unaff_x19 + 0x120) = uVar9;
        in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
        unaff_x25 = in_stack_00000038;
        unaff_x27 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
      }
      else {
        if (bVar4) {
          lVar13 = *unaff_x25;
          if (lVar13 == 0) goto LAB_03566068;
          iVar10 = *(int *)(lVar13 + 0x18);
          if (iVar10 == 0) {
            iVar10 = FUN_036d3364(lVar13,0);
            *(int *)(lVar13 + 0x18) = iVar10;
          }
          lVar13 = *(long *)(unaff_x19 + 0xf8);
          if (lVar13 == 0) goto LAB_03566068;
          iVar11 = *(int *)(lVar13 + 0x18);
          if (iVar11 == 0) {
            iVar11 = FUN_036d3364(lVar13,0);
            *(int *)(lVar13 + 0x18) = iVar11;
          }
          if (iVar10 != iVar11) {
            uVar21 = FUN_0359778c(0);
            if ((uVar21 & 1) == 0) {
              if (*unaff_x25 == 0) goto LAB_03566068;
              uVar23 = *(undefined8 *)(*unaff_x25 + 0x20);
            }
            else {
              if (*unaff_x25 == 0) goto LAB_03566068;
              uVar27 = *(undefined8 *)(*unaff_x25 + 0x20);
              uVar23 = *in_stack_00000028;
              if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar23 = FUN_03594e9c(uVar23,uVar27,0);
              unaff_x25 = in_stack_00000038;
            }
            *in_stack_00000028 = uVar23;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000028);
            lVar13 = *plVar26;
            uVar23 = *in_stack_00000028;
            lVar29 = *unaff_x25;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar13 = *plVar26;
            }
            uVar7 = FUN_03557fec(uVar23,lVar29,*(long *)(lVar13 + 0xb8),
                                 *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
            *(undefined4 *)(unaff_x19 + 0x120) = uVar7;
            unaff_x25 = in_stack_00000038;
          }
        }
        if (*(long *)(lVar12 + 0x20) == 0) goto LAB_03566068;
        iVar10 = FUN_03776eb8(*(long *)(lVar12 + 0x20),0);
        if (0 < iVar10) {
          if (*(long *)(lVar12 + 0x20) == 0) goto LAB_03566068;
          lVar13 = *unaff_x25;
          uVar23 = *in_stack_00000028;
          uVar7 = FUN_03776eb8(*(long *)(lVar12 + 0x20),0);
          if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)OVRPlugin_Sizef_TypeInfo);
          }
          uVar23 = FUN_03594928(lVar13,uVar23,uVar7,0);
          *in_stack_00000028 = uVar23;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    (in_stack_00000028,uVar23);
          lVar12 = *plVar26;
          uVar23 = *in_stack_00000028;
          lVar13 = *unaff_x25;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar12 = *plVar26;
          }
          uVar7 = FUN_03557fec(uVar23,lVar13,*(long *)(lVar12 + 0xb8),
                               *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
          bVar4 = true;
          *(undefined4 *)(unaff_x19 + 0x120) = uVar7;
          unaff_x25 = in_stack_00000038;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar21 = FUN_026b63d8(unaff_w28,0);
        unaff_x27 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
        if ((unaff_w28 != 0x200b) && ((uVar21 & 1) == 0)) {
          lVar12 = *plVar26;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar12);
            lVar12 = *plVar26;
          }
          lVar13 = **(long **)(lVar12 + 0xb8);
          if (lVar13 == 0) goto LAB_03566068;
          uVar8 = *(uint *)(unaff_x19 + 0x120);
          if (*(uint *)(lVar13 + 0x18) <= uVar8) break;
          if (*(int *)(lVar13 + (long)(int)uVar8 * 0x38 + 0x54) < 0x3fff) {
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar12);
              lVar13 = **(long **)(*plVar26 + 0xb8);
              if (lVar13 == 0) goto LAB_03566068;
              uVar8 = *(uint *)(unaff_x19 + 0x120);
            }
          }
          else {
            uVar27 = *in_stack_00000028;
            uVar23 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
            FUN_0369922c(uVar23,uVar27,0);
            lVar12 = *plVar26;
            lVar13 = *unaff_x25;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar12 = *plVar26;
            }
            uVar8 = FUN_03557fec(uVar23,lVar13,*(long *)(lVar12 + 0xb8),
                                 *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
            *(uint *)(unaff_x19 + 0x120) = uVar8;
            lVar13 = **(long **)(*plVar26 + 0xb8);
            if (lVar13 == 0) goto LAB_03566068;
          }
          if (*(uint *)(lVar13 + 0x18) <= uVar8) break;
          lVar13 = lVar13 + (long)(int)uVar8 * 0x38;
          *(int *)(lVar13 + 0x54) = *(int *)(lVar13 + 0x54) + 1;
        }
        if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
        goto LAB_03566068;
        if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) break;
        *(undefined8 *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x50) =
             *in_stack_00000028;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
        goto LAB_03566068;
        if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) break;
        uVar8 = *(uint *)(unaff_x19 + 0x120);
        *(uint *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x58) = uVar8;
        lVar12 = *plVar26;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar12 = *plVar26;
          uVar8 = *(uint *)(unaff_x19 + 0x120);
        }
        lVar13 = **(long **)(lVar12 + 0xb8);
        if (lVar13 == 0) goto LAB_03566068;
        if (*(uint *)(lVar13 + 0x18) <= uVar8) break;
        *(bool *)(lVar13 + (long)(int)uVar8 * 0x38 + 0x41) = bVar4;
        if (bVar4) {
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar13 = **(long **)(*plVar26 + 0xb8);
            if (lVar13 == 0) goto LAB_03566068;
            uVar8 = *(uint *)(unaff_x19 + 0x120);
          }
          if (*(uint *)(lVar13 + 0x18) <= uVar8) break;
          puVar16 = (undefined8 *)(lVar13 + (long)(int)uVar8 * 0x38 + 0x48);
          *puVar16 = uVar25;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar16,uVar25);
          *(undefined8 *)(unaff_x19 + 0x100) = uVar20;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25);
          *(undefined8 *)(unaff_x19 + 0x118) = uVar25;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    (in_stack_00000028,uVar25);
          *(undefined4 *)(unaff_x19 + 0x120) = uVar9;
        }
        uVar17 = *(uint *)(unaff_x19 + 0x490);
      }
      goto LAB_0356571c;
    }
    unaff_w23 = *(undefined4 *)(unaff_x19 + 0x120);
    param_3 = FUN_03586568();
  }
LAB_035660f8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
LAB_035658ec:
  do {
    fVar33 = (float)param_2;
    if (uVar28 != 0) {
      lVar18 = *plVar22;
      if (lVar18 == 0) goto LAB_03566068;
      if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
      uVar25 = *(undefined8 *)(lVar18 + uVar28 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar14 = FUN_036d35a8(uVar25,0,0);
      if ((uVar14 & 1) != 0) {
        lVar18 = *plVar26;
        plVar24 = (long *)*plVar22;
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar18 = *plVar26;
        }
        lVar18 = **(long **)(lVar18 + 0xb8);
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar18 = lVar18 + lVar13;
        in_stack_00000160 = *(undefined8 *)(lVar18 + -4);
        in_stack_00000158 = *(undefined8 *)(lVar18 + -0xc);
        in_stack_00000150 = *(undefined8 *)(lVar18 + -0x14);
        in_stack_00000148 = *(undefined8 *)(lVar18 + -0x1c);
        uVar25 = *(undefined8 *)(lVar18 + -0x24);
        in_stack_00000138 = *(undefined8 *)(lVar18 + -0x2c);
        in_stack_00000130 = *(undefined8 *)(lVar18 + -0x34);
        in_stack_00000140 = uVar25;
        lVar18 = FUN_0359e964();
        fVar33 = (float)uVar25;
        if (plVar24 == (long *)0x0) goto LAB_03566068;
        if ((lVar18 != 0) &&
           (lVar15 = thunk_FUN_01a89d6c(lVar18,*(undefined8 *)(*plVar24 + 0x40)), lVar15 == 0)) {
LAB_035660fc:
          uVar25 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar25,0);
        }
        if (*(uint *)(plVar24 + 3) <= uVar28) goto LAB_035660f8;
        plVar24[uVar28 + 4] = lVar18;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long)plVar24 + lVar29,lVar18);
        plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if ((*unaff_x20 == 0) || (lVar18 = *(long *)(*unaff_x20 + 0x60), lVar18 == 0))
        goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
        puVar16 = (undefined8 *)(lVar18 + lVar12 + 0x30);
        *puVar16 = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar16,0);
      }
      if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_03566068;
      fVar30 = (float)FUN_036dba50(*(long *)(unaff_x19 + 0x380),0);
      lVar18 = *plVar22;
      if (lVar18 == 0) goto LAB_03566068;
      if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
      lVar18 = *(long *)(lVar18 + uVar28 * 8 + 0x20);
      if ((lVar18 == 0) || (fVar32 = fVar33, lVar18 = FUN_037b4844(lVar18,0), lVar18 == 0))
      goto LAB_03566068;
      fVar31 = (float)FUN_036dba50(lVar18,0);
      fVar33 = (fVar33 - fVar32) * (fVar33 - fVar32);
      param_2 = (ulong)(uint)fVar33;
      if (fVar5 <= (fVar30 - fVar31) * (fVar30 - fVar31) + fVar33) {
        lVar18 = *plVar22;
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar18 = *(long *)(lVar18 + uVar28 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_03566068;
        lVar18 = FUN_037b4844(lVar18,0);
        if ((*(long *)(unaff_x19 + 0x380) == 0) ||
           (FUN_036dba50(*(long *)(unaff_x19 + 0x380),0), lVar18 == 0)) goto LAB_03566068;
        FUN_036dbae0(lVar18,0);
      }
      lVar18 = *plVar22;
      if (lVar18 == 0) goto LAB_03566068;
      if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
      lVar18 = *(long *)(lVar18 + uVar28 * 8 + 0x20);
      if (lVar18 == 0) goto LAB_03566068;
      uVar25 = *(undefined8 *)(lVar18 + 0xf0);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar14 = FUN_036d35a8(uVar25,0,0);
      if ((uVar14 & 1) == 0) {
        lVar18 = *plVar22;
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar18 = *(long *)(lVar18 + uVar28 * 8 + 0x20);
        if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0xf0), lVar18 == 0)) goto LAB_03566068;
        iVar10 = FUN_036d3364(lVar18,0);
        lVar18 = *plVar26;
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar18);
          lVar18 = *plVar26;
        }
        lVar18 = **(long **)(lVar18 + 0xb8);
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar18 = *(long *)(lVar18 + lVar13 + -0x1c);
        if (lVar18 == 0) goto LAB_03566068;
        iVar11 = FUN_036d3364(lVar18,0);
        if (iVar10 != iVar11) goto LAB_03565b98;
      }
      else {
LAB_03565b98:
        lVar18 = *plVar22;
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar15 = *plVar26;
        lVar18 = *(long *)(lVar18 + uVar28 * 8 + 0x20);
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar15 = *plVar26;
        }
        lVar15 = **(long **)(lVar15 + 0xb8);
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar28) goto LAB_035660f8;
        if (lVar18 == 0) goto LAB_03566068;
        thunk_FUN_0359e5ac(lVar18,*(undefined8 *)(lVar15 + lVar13 + -0x1c),0);
        lVar18 = *plVar22;
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar15 = **(long **)(*plVar26 + 0xb8);
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar18 = *(long *)(lVar18 + uVar28 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar18 + 0xd8) = *(undefined8 *)(lVar15 + lVar13 + -0x2c);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar18 = *plVar22;
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar15 = **(long **)(*plVar26 + 0xb8);
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar18 = *(long *)(lVar18 + uVar28 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar18 + 0xe0) = *(undefined8 *)(lVar15 + lVar13 + -0x24);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      lVar18 = *plVar26;
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar18 = *plVar26;
      }
      lVar15 = **(long **)(lVar18 + 0xb8);
      if (lVar15 == 0) goto LAB_03566068;
      if (*(uint *)(lVar15 + 0x18) <= uVar28) goto LAB_035660f8;
      if (*(char *)(lVar15 + lVar13 + -0x13) != '\0') {
        lVar19 = *plVar22;
        if (lVar19 == 0) goto LAB_03566068;
        if (*(uint *)(lVar19 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar19 = *(long *)(lVar19 + uVar28 * 8 + 0x20);
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar15 = **(long **)(*plVar26 + 0xb8);
          if (lVar15 == 0) goto LAB_03566068;
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar28) goto LAB_035660f8;
        if (lVar19 == 0) goto LAB_03566068;
        FUN_0359e608(lVar19,*(undefined8 *)(lVar15 + lVar13 + -0x1c),0);
        lVar18 = *plVar22;
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar15 = **(long **)(*plVar26 + 0xb8);
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar18 = *(long *)(lVar18 + uVar28 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar18 + 0x100) = *(undefined8 *)(lVar15 + lVar13 + -0xc);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar18 + 0x100);
      }
    }
    lVar18 = *plVar26;
    if (*(int *)(lVar18 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar18 = *plVar26;
    }
    lVar18 = **(long **)(lVar18 + 0xb8);
    if (lVar18 == 0) goto LAB_03566068;
    if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
    if ((*unaff_x20 == 0) || (lVar15 = *(long *)(*unaff_x20 + 0x60), lVar15 == 0))
    goto LAB_03566068;
    if (*(uint *)(lVar15 + 0x18) <= uVar28) goto LAB_035660f8;
    lVar19 = *(long *)(lVar15 + lVar12 + 0x30);
    iVar10 = *(int *)(lVar18 + lVar13);
    if (lVar19 == 0) {
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
        if (*(int *)(lVar15 + 0x18) == 0) goto LAB_035660f8;
        memcpy((void *)(lVar15 + lVar12 + 0x20),&stack0x00000090,0x50);
        __dest = (void *)(lVar15 + 0x20);
      }
      else {
        lVar18 = *plVar22;
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar18 = *(long *)(lVar18 + uVar28 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_03566068;
        uVar25 = UnityEngine_Material__GetColorArray(lVar18,0);
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
        FUN_03595600(&stack0x000000e0,uVar25,iVar10 + 1,0);
        memcpy(&stack0x00000040,&stack0x000000e0,0x50);
        if (*(uint *)(lVar15 + 0x18) <= uVar28) goto LAB_035660f8;
        __dest = (void *)(lVar15 + lVar12 + 0x20);
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
        FUN_03595b9c(lVar15 + lVar12 + 0x20,iVar10,0);
      }
      else if ((0 < iVar10) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
        iVar1 = iVar11 + 3;
        if (-1 < iVar11) {
          iVar1 = iVar11;
        }
        if (0x100 < (iVar1 >> 2) - iVar10) goto LAB_03565e08;
      }
    }
    plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if ((*unaff_x20 == 0) || (lVar18 = *(long *)(*unaff_x20 + 0x60), lVar18 == 0))
    goto LAB_03566068;
    lVar15 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar15 = *plVar26;
    }
    lVar15 = **(long **)(lVar15 + 0xb8);
    if (lVar15 == 0) goto LAB_03566068;
    if ((*(uint *)(lVar15 + 0x18) <= uVar28) || (*(uint *)(lVar18 + 0x18) <= uVar28))
    goto LAB_035660f8;
    *(undefined8 *)(lVar18 + lVar12 + 0x68) = *(undefined8 *)(lVar15 + lVar13 + -0x1c);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    uVar28 = uVar28 + 1;
    lVar12 = lVar12 + 0x50;
    lVar13 = lVar13 + 0x38;
    lVar29 = lVar29 + 8;
  } while (uVar8 != uVar28);
LAB_03565fb8:
  lVar12 = *plVar22;
  if (lVar12 != 0) {
    lVar13 = (-(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar21 << 3) + 0x20;
    do {
      uVar8 = (uint)uVar21;
      if ((int)*(uint *)(lVar12 + 0x18) <= (int)uVar8) {
LAB_03565748:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_035660f8;
      uVar25 = *(undefined8 *)(lVar12 + lVar13);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar21 = FUN_036cee6c(uVar25,0,0);
      if ((uVar21 & 1) == 0) goto LAB_03565748;
      if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x60), lVar12 == 0)) break;
      if ((int)uVar8 < *(int *)(lVar12 + 0x18)) {
        lVar12 = *plVar22;
        if (lVar12 == 0) break;
        if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_035660f8;
        if ((*(long *)(lVar12 + lVar13) == 0) ||
           (lVar12 = FUN_037b514c(*(long *)(lVar12 + lVar13),0), lVar12 == 0)) break;
        FUN_0390f3a4(lVar12,0,0);
      }
      lVar12 = *plVar22;
      uVar21 = (ulong)(uVar8 + 1);
      lVar13 = lVar13 + 8;
    } while (lVar12 != 0);
  }
LAB_03566068:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


