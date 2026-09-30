/*
FUNCTION_NAME: UnityEngine.AudioSource$$Pause
ENTRY_POINT: 03564800
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


undefined4 UnityEngine_AudioSource__Pause(undefined1 param_1 [16],ulong param_2)

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
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  void *__dest;
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
  int unaff_w24;
  long *plVar26;
  undefined8 uVar27;
  ulong uVar28;
  long *unaff_x27;
  long unaff_x28;
  uint *puVar29;
  long lVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
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
  
code_r0x03564800:
  puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  lVar13 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar13 = *(long *)puVar6;
  }
  lVar13 = **(long **)(lVar13 + 0xb8);
  if (lVar13 == 0) goto LAB_03566068;
  if (*(uint *)(unaff_x19 + 0x120) < *(uint *)(lVar13 + 0x18)) {
    lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
    *(int *)(lVar13 + 0x54) = *(int *)(lVar13 + 0x54) + 1;
    if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
    goto LAB_03566068;
    if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar13 + 0x18)) {
      uVar10 = *(undefined4 *)(unaff_x19 + 0x6a4);
      lVar13 = lVar13 + (int)*(uint *)(unaff_x19 + 0x490) * unaff_x28;
      *(short *)(lVar13 + 0x20) = (short)uVar10 + -0x2000;
      *(undefined4 *)(lVar13 + 0x48) = uVar10;
      *(long *)(lVar13 + 0x38) = *in_stack_00000038;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
      goto LAB_03566068;
      if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar13 + 0x18)) {
        *(undefined8 *)(lVar13 + (int)*(uint *)(unaff_x19 + 0x490) * unaff_x28 + 0x40) =
             *(undefined8 *)(unaff_x19 + 0x698);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
        goto LAB_03566068;
        uVar9 = *(uint *)(unaff_x19 + 0x490);
        if (uVar9 < *(uint *)(lVar13 + 0x18)) {
          *(undefined4 *)(lVar13 + (int)uVar9 * unaff_x28 + 0x58) =
               *(undefined4 *)(unaff_x19 + 0x120);
          if ((*(long *)(unaff_x19 + 0x698) == 0) ||
             (lVar14 = UnityEngine_Material__DisableKeyword(*(long *)(unaff_x19 + 0x698),0),
             lVar14 == 0)) goto LAB_03566068;
          FUN_02215a88(lVar14,*(undefined4 *)(unaff_x19 + 0x6a4),&stack0x000000e0,
                       *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
          if (uVar9 < *(uint *)(lVar13 + 0x18)) {
            *(undefined8 *)(lVar13 + (int)uVar9 * unaff_x28 + 0x30) = in_stack_000000e0;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
            goto LAB_03566068;
            uVar9 = *(uint *)(unaff_x19 + 0x490);
            if (uVar9 < *(uint *)(lVar13 + 0x18)) {
              uVar10 = *(undefined4 *)(unaff_x19 + 0x644);
              lVar14 = lVar13 + (int)uVar9 * unaff_x28;
              *(int *)(lVar14 + 0x24) = unaff_w24;
              *(undefined4 *)(lVar14 + 0x2c) = uVar10;
              if (unaff_w22 < *(uint *)(unaff_x21 + 0x18)) {
                *(int *)(lVar13 + (int)uVar9 * unaff_x28 + 0x28) =
                     (*(int *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x24) - unaff_w24) + 1;
                *(undefined4 *)(unaff_x19 + 0x644) = 0;
                *(undefined4 *)(unaff_x19 + 0x120) = unaff_w23;
                in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
                plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
LAB_0356571c:
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
                    lVar14 = *plVar26;
                    if (*(int *)(lVar14 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar14 = *plVar26;
                    }
                    lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
                    if (lVar14 == 0) goto LAB_03566068;
                    uVar9 = FUN_0219b384(lVar14,*(undefined8 *)PTR_DAT_03ceb270);
                    *(uint *)(lVar13 + 0x34) = uVar9;
                    if (*unaff_x20 == 0) goto LAB_03566068;
                    plVar22 = (long *)(*unaff_x20 + 0x60);
                    lVar13 = *plVar22;
                    if (lVar13 == 0) goto LAB_03566068;
                    uVar21 = (ulong)uVar9;
                    if (*(int *)(lVar13 + 0x18) < (int)uVar9) {
                      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      FUN_01ff02b8(plVar22,uVar21,0,
                                   *(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo);
                    }
                    if (*(long *)(unaff_x19 + 0x708) == 0) goto LAB_03566068;
                    plVar22 = (long *)(unaff_x19 + 0x708);
                    if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar9) {
                      uVar10 = FUN_036c1d60(uVar9 + 1,0);
                      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                        thunk_FUN_01a58e78(*unaff_x27);
                      }
                      FUN_01ff025c(plVar22,uVar10,
                                   *(undefined8 *)OVRSystemPerfMetrics_PerfMetrics_TypeInfo);
                    }
                    if (*(char *)(unaff_x19 + 0x321) != '\0') {
                      if (*unaff_x20 == 0) goto LAB_03566068;
                      plVar24 = (long *)(*unaff_x20 + 0x38);
                      lVar13 = *plVar24;
                      if (lVar13 == 0) goto LAB_03566068;
                      iVar11 = *(int *)(unaff_x19 + 0x490);
                      if (0x100 < *(int *)(lVar13 + 0x18) - iVar11) {
                        iVar12 = 0x100;
                        if (0x100 < iVar11 + 1) {
                          iVar12 = iVar11 + 1;
                        }
                        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        FUN_01ff02b8(plVar24,iVar12,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo
                                    );
                        plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                      }
                    }
                    fVar5 = DAT_00d38798;
                    if ((int)uVar9 < 1) goto LAB_03565fb8;
                    lVar13 = 0;
                    uVar28 = 0;
                    lVar14 = 0x54;
                    lVar30 = 0x20;
                    goto LAB_035658ec;
                  }
                  if (uVar9 <= unaff_w22) break;
                  puVar29 = (uint *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x20);
                  if (*puVar29 == 0) goto LAB_0356573c;
                  if (*unaff_x20 == 0) goto LAB_03566068;
                  plVar26 = (long *)(*unaff_x20 + 0x38);
                  lVar13 = *plVar26;
                  iVar11 = *(int *)(unaff_x19 + 0x490);
                  if ((lVar13 == 0) || (*(int *)(lVar13 + 0x18) <= iVar11)) {
                    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    FUN_01ff02b8(plVar26,iVar11 + 1,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo
                                );
                    uVar9 = *(uint *)(unaff_x21 + 0x18);
                  }
                  if (uVar9 <= unaff_w22) break;
                  uVar9 = *puVar29;
                  if ((uVar9 != 0x3c) || (*(char *)(unaff_x19 + 0x302) == '\0')) goto LAB_035649d0;
                  unaff_w23 = *(undefined4 *)(unaff_x19 + 0x120);
                  uVar21 = FUN_03586568();
                  if ((uVar21 & 1) == 0) goto LAB_035649d0;
                  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) break;
                  unaff_w24 = *(int *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x24);
                  unaff_x28 = 0x178;
                  if ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0) {
                    *(undefined1 *)(unaff_x19 + 0x26a) = 1;
                  }
                  plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  unaff_w22 = uStack00000000000001b8;
                  if (*(int *)(unaff_x19 + 0x644) == 1) goto code_r0x03564800;
                } while( true );
              }
            }
          }
        }
      }
    }
  }
LAB_035660f8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
LAB_035649d0:
  uStack00000000000001bc = 0;
  uVar20 = *(undefined8 *)(unaff_x19 + 0x100);
  uVar25 = *(undefined8 *)(unaff_x19 + 0x118);
  uVar10 = *(undefined4 *)(unaff_x19 + 0x120);
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
      uVar21 = FUN_026b8070(uVar9,0);
      if ((uVar21 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar9 = FUN_026b8594(uVar9,0);
        goto LAB_03564aa8;
      }
    }
  }
  else {
LAB_03564a00:
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar21 = FUN_026b812c(uVar9,0);
    if ((uVar21 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar9 = FUN_026b8410(uVar9,0);
LAB_03564aa8:
      uVar9 = uVar9 & 0xffff;
    }
  }
LAB_03564aac:
  lVar13 = FUN_03591848();
  if (lVar13 != 0) goto LAB_03565024;
  iVar11 = FUN_035975f8();
  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
  if (iVar11 == 0) {
    uVar7 = 0x25a1;
  }
  else {
    uVar7 = FUN_035975f8(0);
  }
  *puVar29 = uVar7;
  uVar23 = *(undefined8 *)(unaff_x19 + 0x100);
  uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
  uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
  if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar13 = FUN_03570fc4(uVar7,uVar23,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
  if (lVar13 == 0) {
    lVar13 = FUN_03597770();
    if (lVar13 != 0) {
      lVar13 = FUN_03597770(0);
      if (lVar13 == 0) goto LAB_03566068;
      if (0 < *(int *)(lVar13 + 0x18)) {
        uVar27 = *(undefined8 *)(unaff_x19 + 0x100);
        uVar23 = FUN_03597770(0);
        uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
        uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
        if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
        }
        lVar13 = FUN_035714e4(uVar7,uVar27,uVar23,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
        if (lVar13 != 0) goto LAB_03564b5c;
      }
    }
    uVar23 = FUN_03597650(0);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
    }
    uVar21 = FUN_036cee6c(uVar23,0,0);
    if ((uVar21 & 1) != 0) {
      uVar23 = FUN_03597650(0);
      uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
      uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
      if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
      }
      lVar13 = FUN_03570fc4(uVar7,uVar23,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
      if (lVar13 != 0) goto LAB_03564b5c;
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
    *puVar29 = 0x20;
    uVar23 = *(undefined8 *)(unaff_x19 + 0x100);
    uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
    uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
    if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar7 = 0x20;
    lVar13 = FUN_03570fc4(0x20,uVar23,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
    if (lVar13 == 0) {
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
      *puVar29 = 3;
      uVar23 = *(undefined8 *)(unaff_x19 + 0x100);
      uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
      uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
      if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar7 = 3;
      lVar13 = FUN_03570fc4(3,uVar23,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
    }
  }
LAB_03564b5c:
  uVar21 = FUN_03597634(0);
  if ((uVar21 & 1) == 0) {
    plVar26 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,4);
    if ((int)uVar9 < 0x10000) {
      in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar9);
      lVar14 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
      if (plVar26 == (long *)0x0) goto LAB_03566068;
      if ((lVar14 != 0) &&
         (lVar30 = thunk_FUN_01a89d6c(lVar14,*(undefined8 *)(*plVar26 + 0x40)), lVar30 == 0))
      goto LAB_035660fc;
      if ((int)plVar26[3] == 0) goto LAB_035660f8;
      plVar26[4] = lVar14;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar26 + 4,lVar14);
      if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
      lVar14 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
      if ((lVar14 != 0) &&
         (lVar30 = thunk_FUN_01a89d6c(lVar14,*(undefined8 *)(*plVar26 + 0x40)), lVar30 == 0))
      goto LAB_035660fc;
      if (*(uint *)(plVar26 + 3) < 2) goto LAB_035660f8;
      plVar26[5] = lVar14;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar26 + 5,lVar14);
      if (lVar13 == 0) goto LAB_03566068;
      in_stack_00000168._4_4_ = *(undefined4 *)(lVar13 + 0x14);
      lVar14 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,(long)&stack0x00000168 + 4);
      if ((lVar14 != 0) &&
         (lVar30 = thunk_FUN_01a89d6c(lVar14,*(undefined8 *)(*plVar26 + 0x40)), lVar30 == 0))
      goto LAB_035660fc;
      if (*(uint *)(plVar26 + 3) < 3) goto LAB_035660f8;
      plVar26[6] = lVar14;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar26 + 6,lVar14);
      lVar14 = FUN_036d3824();
      if ((lVar14 != 0) &&
         (lVar30 = thunk_FUN_01a89d6c(lVar14,*(undefined8 *)(*plVar26 + 0x40)), lVar30 == 0))
      goto LAB_035660fc;
      if (*(uint *)(plVar26 + 3) < 4) goto LAB_035660f8;
      plVar26[7] = lVar14;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar26 + 7,lVar14);
      puVar17 = (undefined8 *)OVRPlugin_TrackedKeyboardFlags_TypeInfo;
    }
    else {
      in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar9);
      lVar14 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
      if (plVar26 == (long *)0x0) goto LAB_03566068;
      if ((lVar14 != 0) &&
         (lVar30 = thunk_FUN_01a89d6c(lVar14,*(undefined8 *)(*plVar26 + 0x40)), lVar30 == 0))
      goto LAB_035660fc;
      if ((int)plVar26[3] == 0) goto LAB_035660f8;
      plVar26[4] = lVar14;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar26 + 4,lVar14);
      if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
      lVar14 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
      if ((lVar14 != 0) &&
         (lVar30 = thunk_FUN_01a89d6c(lVar14,*(undefined8 *)(*plVar26 + 0x40)), lVar30 == 0))
      goto LAB_035660fc;
      if (*(uint *)(plVar26 + 3) < 2) goto LAB_035660f8;
      plVar26[5] = lVar14;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar26 + 5,lVar14);
      if (lVar13 == 0) goto LAB_03566068;
      in_stack_00000168._4_4_ = *(undefined4 *)(lVar13 + 0x14);
      lVar14 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,(long)&stack0x00000168 + 4);
      if ((lVar14 != 0) &&
         (lVar30 = thunk_FUN_01a89d6c(lVar14,*(undefined8 *)(*plVar26 + 0x40)), lVar30 == 0))
      goto LAB_035660fc;
      if (*(uint *)(plVar26 + 3) < 3) goto LAB_035660f8;
      plVar26[6] = lVar14;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar26 + 6,lVar14);
      lVar14 = FUN_036d3824();
      if ((lVar14 != 0) &&
         (lVar30 = thunk_FUN_01a89d6c(lVar14,*(undefined8 *)(*plVar26 + 0x40)), lVar30 == 0))
      goto LAB_035660fc;
      if (*(uint *)(plVar26 + 3) < 4) goto LAB_035660f8;
      plVar26[7] = lVar14;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar26 + 7,lVar14);
      puVar17 = (undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo;
    }
    uVar23 = FUN_025be8f4(*puVar17,plVar26,0);
    if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0367b470(uVar23);
    uVar9 = uVar7;
  }
  else {
    uVar9 = uVar7;
    if (lVar13 == 0) goto LAB_03566068;
  }
LAB_03565024:
  if (*(char *)(lVar13 + 0x10) == '\x01') {
    lVar14 = *(long *)(lVar13 + 0x18);
    if (lVar14 == 0) goto LAB_03566068;
    iVar11 = *(int *)(lVar14 + 0x18);
    if (iVar11 == 0) {
      iVar11 = FUN_036d3364(lVar14,0);
      *(int *)(lVar14 + 0x18) = iVar11;
    }
    lVar14 = *in_stack_00000038;
    if (lVar14 == 0) goto LAB_03566068;
    iVar12 = *(int *)(lVar14 + 0x18);
    if (iVar12 == 0) {
      iVar12 = FUN_036d3364(lVar14,0);
      *(int *)(lVar14 + 0x18) = iVar12;
    }
    if (iVar11 == iVar12) {
      bVar4 = false;
    }
    else {
      plVar26 = *(long **)(lVar13 + 0x18);
      if (plVar26 == (long *)0x0) {
        plVar26 = (long *)0x0;
        *in_stack_00000038 = 0;
      }
      else {
        lVar14 = *(long *)OVRPlugin_OVRP_1_83_0_TypeInfo;
        bVar3 = *(byte *)(lVar14 + 0x130);
        if (*(byte *)(*plVar26 + 0x130) < bVar3) {
          plVar22 = (long *)0x0;
        }
        else {
          plVar22 = plVar26;
          if (*(long *)(*(long *)(*plVar26 + 200) + (ulong)bVar3 * 8 + -8) != lVar14) {
            plVar22 = (long *)0x0;
          }
        }
        *in_stack_00000038 = (long)plVar22;
        if (*(byte *)(*plVar26 + 0x130) < bVar3) {
          plVar26 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar26 + 200) + (ulong)bVar3 * 8 + -8) != lVar14) {
          plVar26 = (long *)0x0;
        }
      }
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000038,plVar26);
      bVar4 = true;
    }
  }
  else {
    bVar4 = false;
  }
  if ((*unaff_x20 == 0) || (lVar14 = *(long *)(*unaff_x20 + 0x38), lVar14 == 0)) goto LAB_03566068;
  if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
  lVar14 = lVar14 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
  plVar26 = (long *)(lVar14 + 0x30);
  *plVar26 = lVar13;
  *(undefined4 *)(lVar14 + 0x2c) = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar26,lVar13);
  if ((*unaff_x20 == 0) || (lVar14 = *(long *)(*unaff_x20 + 0x38), lVar14 == 0)) goto LAB_03566068;
  uVar7 = *(uint *)(unaff_x19 + 0x490);
  if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_035660f8;
  lVar30 = lVar14 + (long)(int)uVar7 * 0x178;
  *(short *)(lVar30 + 0x20) = (short)uVar9;
  *(undefined1 *)(lVar30 + 0x5c) = uStack00000000000001bc;
  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
  lVar14 = lVar14 + (long)(int)uVar7 * 0x178;
  *(undefined8 *)(lVar14 + 0x24) = *(undefined8 *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x24);
  *(long *)(lVar14 + 0x38) = *in_stack_00000038;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (*(char *)(lVar13 + 0x10) == '\x02') {
    plVar22 = *(long **)(lVar13 + 0x18);
    if (plVar22 == (long *)0x0) goto LAB_03566068;
    bVar3 = *(byte *)(*(long *)OVRPlugin_Sizei_TypeInfo + 0x130);
    if ((*(byte *)(*plVar22 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)OVRPlugin_Sizei_TypeInfo)) goto LAB_03566068;
    lVar30 = plVar22[4];
    lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar14 = *plVar26;
    }
    uVar9 = FUN_03558224(lVar30,plVar22,*(long *)(lVar14 + 0xb8),
                         *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8));
    *(uint *)(unaff_x19 + 0x120) = uVar9;
    lVar14 = **(long **)(*plVar26 + 0xb8);
    if (lVar14 == 0) goto LAB_03566068;
    if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_035660f8;
    lVar14 = lVar14 + (long)(int)uVar9 * 0x38;
    *(int *)(lVar14 + 0x54) = *(int *)(lVar14 + 0x54) + 1;
    if ((*unaff_x20 == 0) || (lVar14 = *(long *)(*unaff_x20 + 0x38), lVar14 == 0))
    goto LAB_03566068;
    if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
    lVar14 = lVar14 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
    *(undefined4 *)(lVar14 + 0x2c) = 1;
    uVar8 = *(undefined4 *)(unaff_x19 + 0x120);
    *(undefined8 *)(lVar14 + 0x40) = plVar22;
    *(undefined4 *)(lVar14 + 0x58) = uVar8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar14 + 0x40),plVar22);
    plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar14 == 0)) goto LAB_03566068;
    uVar9 = *(uint *)(unaff_x19 + 0x490);
    if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_035660f8;
    *(undefined4 *)(lVar14 + (long)(int)uVar9 * 0x178 + 0x48) = *(undefined4 *)(lVar13 + 0x28);
    *(undefined4 *)(unaff_x19 + 0x644) = 0;
    *(undefined4 *)(unaff_x19 + 0x120) = uVar10;
    in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
    unaff_x27 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
  }
  else {
    if (bVar4) {
      lVar14 = *in_stack_00000038;
      if (lVar14 == 0) goto LAB_03566068;
      iVar11 = *(int *)(lVar14 + 0x18);
      if (iVar11 == 0) {
        iVar11 = FUN_036d3364(lVar14,0);
        *(int *)(lVar14 + 0x18) = iVar11;
      }
      lVar14 = *(long *)(unaff_x19 + 0xf8);
      if (lVar14 == 0) goto LAB_03566068;
      iVar12 = *(int *)(lVar14 + 0x18);
      if (iVar12 == 0) {
        iVar12 = FUN_036d3364(lVar14,0);
        *(int *)(lVar14 + 0x18) = iVar12;
      }
      if (iVar11 != iVar12) {
        uVar21 = FUN_0359778c(0);
        if ((uVar21 & 1) == 0) {
          if (*in_stack_00000038 == 0) goto LAB_03566068;
          uVar23 = *(undefined8 *)(*in_stack_00000038 + 0x20);
        }
        else {
          if (*in_stack_00000038 == 0) goto LAB_03566068;
          uVar27 = *(undefined8 *)(*in_stack_00000038 + 0x20);
          uVar23 = *in_stack_00000028;
          if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar23 = FUN_03594e9c(uVar23,uVar27,0);
        }
        *in_stack_00000028 = uVar23;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000028);
        lVar14 = *plVar26;
        uVar23 = *in_stack_00000028;
        lVar30 = *in_stack_00000038;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar14 = *plVar26;
        }
        uVar8 = FUN_03557fec(uVar23,lVar30,*(long *)(lVar14 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8));
        *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
      }
    }
    if (*(long *)(lVar13 + 0x20) == 0) goto LAB_03566068;
    iVar11 = FUN_03776eb8(*(long *)(lVar13 + 0x20),0);
    if (0 < iVar11) {
      if (*(long *)(lVar13 + 0x20) == 0) goto LAB_03566068;
      lVar14 = *in_stack_00000038;
      uVar23 = *in_stack_00000028;
      uVar8 = FUN_03776eb8(*(long *)(lVar13 + 0x20),0);
      if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)OVRPlugin_Sizef_TypeInfo);
      }
      uVar23 = FUN_03594928(lVar14,uVar23,uVar8,0);
      *in_stack_00000028 = uVar23;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000028,uVar23);
      lVar13 = *plVar26;
      uVar23 = *in_stack_00000028;
      lVar14 = *in_stack_00000038;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar13 = *plVar26;
      }
      uVar8 = FUN_03557fec(uVar23,lVar14,*(long *)(lVar13 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
      bVar4 = true;
      *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar21 = FUN_026b63d8(uVar9,0);
    unaff_x27 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
    if ((uVar9 != 0x200b) && ((uVar21 & 1) == 0)) {
      lVar13 = *plVar26;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar13);
        lVar13 = *plVar26;
      }
      lVar14 = **(long **)(lVar13 + 0xb8);
      if (lVar14 == 0) goto LAB_03566068;
      uVar9 = *(uint *)(unaff_x19 + 0x120);
      if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_035660f8;
      if (*(int *)(lVar14 + (long)(int)uVar9 * 0x38 + 0x54) < 0x3fff) {
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar13);
          lVar14 = **(long **)(*plVar26 + 0xb8);
          if (lVar14 == 0) goto LAB_03566068;
          uVar9 = *(uint *)(unaff_x19 + 0x120);
        }
      }
      else {
        uVar27 = *in_stack_00000028;
        uVar23 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
        FUN_0369922c(uVar23,uVar27,0);
        lVar13 = *plVar26;
        lVar14 = *in_stack_00000038;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar13 = *plVar26;
        }
        uVar9 = FUN_03557fec(uVar23,lVar14,*(long *)(lVar13 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
        *(uint *)(unaff_x19 + 0x120) = uVar9;
        lVar14 = **(long **)(*plVar26 + 0xb8);
        if (lVar14 == 0) goto LAB_03566068;
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_035660f8;
      lVar14 = lVar14 + (long)(int)uVar9 * 0x38;
      *(int *)(lVar14 + 0x54) = *(int *)(lVar14 + 0x54) + 1;
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
    lVar13 = *plVar26;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar13 = *plVar26;
      uVar9 = *(uint *)(unaff_x19 + 0x120);
    }
    lVar14 = **(long **)(lVar13 + 0xb8);
    if (lVar14 == 0) goto LAB_03566068;
    if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_035660f8;
    *(bool *)(lVar14 + (long)(int)uVar9 * 0x38 + 0x41) = bVar4;
    if (bVar4) {
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar14 = **(long **)(*plVar26 + 0xb8);
        if (lVar14 == 0) goto LAB_03566068;
        uVar9 = *(uint *)(unaff_x19 + 0x120);
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_035660f8;
      puVar17 = (undefined8 *)(lVar14 + (long)(int)uVar9 * 0x38 + 0x48);
      *puVar17 = uVar25;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar17,uVar25);
      *(undefined8 *)(unaff_x19 + 0x100) = uVar20;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000038);
      *(undefined8 *)(unaff_x19 + 0x118) = uVar25;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000028,uVar25);
      *(undefined4 *)(unaff_x19 + 0x120) = uVar10;
    }
    uVar9 = *(uint *)(unaff_x19 + 0x490);
  }
  goto LAB_0356571c;
LAB_035658ec:
  do {
    fVar34 = (float)param_2;
    if (uVar28 != 0) {
      lVar18 = *plVar22;
      if (lVar18 == 0) goto LAB_03566068;
      if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
      uVar25 = *(undefined8 *)(lVar18 + uVar28 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar15 = FUN_036d35a8(uVar25,0,0);
      if ((uVar15 & 1) != 0) {
        lVar18 = *plVar26;
        plVar24 = (long *)*plVar22;
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar18 = *plVar26;
        }
        lVar18 = **(long **)(lVar18 + 0xb8);
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar18 = lVar18 + lVar14;
        in_stack_00000160 = *(undefined8 *)(lVar18 + -4);
        in_stack_00000158 = *(undefined8 *)(lVar18 + -0xc);
        in_stack_00000150 = *(undefined8 *)(lVar18 + -0x14);
        in_stack_00000148 = *(undefined8 *)(lVar18 + -0x1c);
        uVar25 = *(undefined8 *)(lVar18 + -0x24);
        in_stack_00000138 = *(undefined8 *)(lVar18 + -0x2c);
        in_stack_00000130 = *(undefined8 *)(lVar18 + -0x34);
        in_stack_00000140 = uVar25;
        lVar18 = FUN_0359e964();
        fVar34 = (float)uVar25;
        if (plVar24 == (long *)0x0) goto LAB_03566068;
        if ((lVar18 != 0) &&
           (lVar16 = thunk_FUN_01a89d6c(lVar18,*(undefined8 *)(*plVar24 + 0x40)), lVar16 == 0)) {
LAB_035660fc:
          uVar25 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar25,0);
        }
        if (*(uint *)(plVar24 + 3) <= uVar28) goto LAB_035660f8;
        plVar24[uVar28 + 4] = lVar18;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long)plVar24 + lVar30,lVar18);
        plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if ((*unaff_x20 == 0) || (lVar18 = *(long *)(*unaff_x20 + 0x60), lVar18 == 0))
        goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
        puVar17 = (undefined8 *)(lVar18 + lVar13 + 0x30);
        *puVar17 = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar17,0);
      }
      if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_03566068;
      fVar31 = (float)FUN_036dba50(*(long *)(unaff_x19 + 0x380),0);
      lVar18 = *plVar22;
      if (lVar18 == 0) goto LAB_03566068;
      if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
      lVar18 = *(long *)(lVar18 + uVar28 * 8 + 0x20);
      if ((lVar18 == 0) || (fVar33 = fVar34, lVar18 = FUN_037b4844(lVar18,0), lVar18 == 0))
      goto LAB_03566068;
      fVar32 = (float)FUN_036dba50(lVar18,0);
      fVar34 = (fVar34 - fVar33) * (fVar34 - fVar33);
      param_2 = (ulong)(uint)fVar34;
      if (fVar5 <= (fVar31 - fVar32) * (fVar31 - fVar32) + fVar34) {
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
      uVar15 = FUN_036d35a8(uVar25,0,0);
      if ((uVar15 & 1) == 0) {
        lVar18 = *plVar22;
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar18 = *(long *)(lVar18 + uVar28 * 8 + 0x20);
        if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0xf0), lVar18 == 0)) goto LAB_03566068;
        iVar11 = FUN_036d3364(lVar18,0);
        lVar18 = *plVar26;
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar18);
          lVar18 = *plVar26;
        }
        lVar18 = **(long **)(lVar18 + 0xb8);
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar18 = *(long *)(lVar18 + lVar14 + -0x1c);
        if (lVar18 == 0) goto LAB_03566068;
        iVar12 = FUN_036d3364(lVar18,0);
        if (iVar11 != iVar12) goto LAB_03565b98;
      }
      else {
LAB_03565b98:
        lVar18 = *plVar22;
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar16 = *plVar26;
        lVar18 = *(long *)(lVar18 + uVar28 * 8 + 0x20);
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar16 = *plVar26;
        }
        lVar16 = **(long **)(lVar16 + 0xb8);
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar28) goto LAB_035660f8;
        if (lVar18 == 0) goto LAB_03566068;
        thunk_FUN_0359e5ac(lVar18,*(undefined8 *)(lVar16 + lVar14 + -0x1c),0);
        lVar18 = *plVar22;
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar16 = **(long **)(*plVar26 + 0xb8);
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar18 = *(long *)(lVar18 + uVar28 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar18 + 0xd8) = *(undefined8 *)(lVar16 + lVar14 + -0x2c);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar18 = *plVar22;
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar16 = **(long **)(*plVar26 + 0xb8);
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar18 = *(long *)(lVar18 + uVar28 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar18 + 0xe0) = *(undefined8 *)(lVar16 + lVar14 + -0x24);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      lVar18 = *plVar26;
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar18 = *plVar26;
      }
      lVar16 = **(long **)(lVar18 + 0xb8);
      if (lVar16 == 0) goto LAB_03566068;
      if (*(uint *)(lVar16 + 0x18) <= uVar28) goto LAB_035660f8;
      if (*(char *)(lVar16 + lVar14 + -0x13) != '\0') {
        lVar19 = *plVar22;
        if (lVar19 == 0) goto LAB_03566068;
        if (*(uint *)(lVar19 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar19 = *(long *)(lVar19 + uVar28 * 8 + 0x20);
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar16 = **(long **)(*plVar26 + 0xb8);
          if (lVar16 == 0) goto LAB_03566068;
        }
        if (*(uint *)(lVar16 + 0x18) <= uVar28) goto LAB_035660f8;
        if (lVar19 == 0) goto LAB_03566068;
        FUN_0359e608(lVar19,*(undefined8 *)(lVar16 + lVar14 + -0x1c),0);
        lVar18 = *plVar22;
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar16 = **(long **)(*plVar26 + 0xb8);
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar18 = *(long *)(lVar18 + uVar28 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar18 + 0x100) = *(undefined8 *)(lVar16 + lVar14 + -0xc);
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
    if ((*unaff_x20 == 0) || (lVar16 = *(long *)(*unaff_x20 + 0x60), lVar16 == 0))
    goto LAB_03566068;
    if (*(uint *)(lVar16 + 0x18) <= uVar28) goto LAB_035660f8;
    lVar19 = *(long *)(lVar16 + lVar13 + 0x30);
    iVar11 = *(int *)(lVar18 + lVar14);
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
        FUN_03595600(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar11 + 1,0);
        memcpy(&stack0x00000090,&stack0x000000e0,0x50);
        if (*(int *)(lVar16 + 0x18) == 0) goto LAB_035660f8;
        memcpy((void *)(lVar16 + lVar13 + 0x20),&stack0x00000090,0x50);
        __dest = (void *)(lVar16 + 0x20);
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
        FUN_03595600(&stack0x000000e0,uVar25,iVar11 + 1,0);
        memcpy(&stack0x00000040,&stack0x000000e0,0x50);
        if (*(uint *)(lVar16 + 0x18) <= uVar28) goto LAB_035660f8;
        __dest = (void *)(lVar16 + lVar13 + 0x20);
        memcpy(__dest,&stack0x00000040,0x50);
      }
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(__dest,0);
    }
    else {
      iVar12 = *(int *)(lVar19 + 0x18);
      if (iVar12 < iVar11 * 4) {
LAB_03565e08:
        if (iVar11 < 0x401) {
          iVar11 = FUN_036c1d60(iVar11 + 1,0);
        }
        else {
          iVar11 = iVar11 + 0x100;
        }
        if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_03595b9c(lVar16 + lVar13 + 0x20,iVar11,0);
      }
      else if ((0 < iVar11) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
        iVar1 = iVar12 + 3;
        if (-1 < iVar12) {
          iVar1 = iVar12;
        }
        if (0x100 < (iVar1 >> 2) - iVar11) goto LAB_03565e08;
      }
    }
    plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if ((*unaff_x20 == 0) || (lVar18 = *(long *)(*unaff_x20 + 0x60), lVar18 == 0))
    goto LAB_03566068;
    lVar16 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar16 = *plVar26;
    }
    lVar16 = **(long **)(lVar16 + 0xb8);
    if (lVar16 == 0) goto LAB_03566068;
    if ((*(uint *)(lVar16 + 0x18) <= uVar28) || (*(uint *)(lVar18 + 0x18) <= uVar28))
    goto LAB_035660f8;
    *(undefined8 *)(lVar18 + lVar13 + 0x68) = *(undefined8 *)(lVar16 + lVar14 + -0x1c);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    uVar28 = uVar28 + 1;
    lVar13 = lVar13 + 0x50;
    lVar14 = lVar14 + 0x38;
    lVar30 = lVar30 + 8;
  } while (uVar9 != uVar28);
LAB_03565fb8:
  lVar13 = *plVar22;
  if (lVar13 != 0) {
    lVar14 = (-(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar21 << 3) + 0x20;
    do {
      uVar9 = (uint)uVar21;
      if ((int)*(uint *)(lVar13 + 0x18) <= (int)uVar9) {
LAB_03565748:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_035660f8;
      uVar25 = *(undefined8 *)(lVar13 + lVar14);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar21 = FUN_036cee6c(uVar25,0,0);
      if ((uVar21 & 1) == 0) goto LAB_03565748;
      if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x60), lVar13 == 0)) break;
      if ((int)uVar9 < *(int *)(lVar13 + 0x18)) {
        lVar13 = *plVar22;
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_035660f8;
        if ((*(long *)(lVar13 + lVar14) == 0) ||
           (lVar13 = FUN_037b514c(*(long *)(lVar13 + lVar14),0), lVar13 == 0)) break;
        FUN_0390f3a4(lVar13,0,0);
      }
      lVar13 = *plVar22;
      uVar21 = (ulong)(uVar9 + 1);
      lVar14 = lVar14 + 8;
    } while (lVar13 != 0);
  }
LAB_03566068:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


