/*
FUNCTION_NAME: UnityEngine.AudioSource$$SetScheduledEndTime
ENTRY_POINT: 03564774
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
UnityEngine_AudioSource__SetScheduledEndTime
          (undefined8 *param_1,undefined1 param_2 [16],ulong param_3,undefined8 param_4,
          ulong param_5,undefined8 param_6)

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
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  void *__dest;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long *plVar23;
  undefined8 uVar24;
  long *plVar25;
  undefined8 uVar26;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 uVar27;
  ulong uVar28;
  long *unaff_x27;
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
  
  do {
    FUN_01ff02b8(unaff_x24,param_5,param_6,*param_1);
    uVar9 = *(uint *)(unaff_x21 + 0x18);
    do {
      if (uVar9 <= unaff_w22) goto LAB_035660f8;
      uVar9 = *unaff_x29;
      if ((uVar9 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) {
        uVar10 = *(undefined4 *)(unaff_x19 + 0x120);
        uVar13 = FUN_03586568();
        uVar7 = uStack00000000000001b8;
        if ((uVar13 & 1) == 0) goto LAB_035649d0;
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
        iVar11 = *(int *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x24);
        if ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0) {
          *(undefined1 *)(unaff_x19 + 0x26a) = 1;
        }
        puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        plVar16 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        unaff_w22 = uStack00000000000001b8;
        if (*(int *)(unaff_x19 + 0x644) == 1) {
          lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar14 = *(long *)puVar6;
          }
          lVar14 = **(long **)(lVar14 + 0xb8);
          if (lVar14 != 0) {
            if (*(uint *)(unaff_x19 + 0x120) < *(uint *)(lVar14 + 0x18)) {
              lVar14 = lVar14 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
              *(int *)(lVar14 + 0x54) = *(int *)(lVar14 + 0x54) + 1;
              if ((*unaff_x20 != 0) && (lVar14 = *(long *)(*unaff_x20 + 0x38), lVar14 != 0)) {
                if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar14 + 0x18)) {
                  uVar8 = *(undefined4 *)(unaff_x19 + 0x6a4);
                  lVar14 = lVar14 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
                  *(short *)(lVar14 + 0x20) = (short)uVar8 + -0x2000;
                  *(undefined4 *)(lVar14 + 0x48) = uVar8;
                  *(long *)(lVar14 + 0x38) = *in_stack_00000038;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  if ((*unaff_x20 != 0) && (lVar14 = *(long *)(*unaff_x20 + 0x38), lVar14 != 0)) {
                    if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar14 + 0x18)) {
                      *(undefined8 *)
                       (lVar14 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x40) =
                           *(undefined8 *)(unaff_x19 + 0x698);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                      if ((*unaff_x20 != 0) && (lVar14 = *(long *)(*unaff_x20 + 0x38), lVar14 != 0))
                      {
                        uVar9 = *(uint *)(unaff_x19 + 0x490);
                        if (uVar9 < *(uint *)(lVar14 + 0x18)) {
                          *(undefined4 *)(lVar14 + (long)(int)uVar9 * 0x178 + 0x58) =
                               *(undefined4 *)(unaff_x19 + 0x120);
                          if ((*(long *)(unaff_x19 + 0x698) != 0) &&
                             (lVar15 = UnityEngine_Material__DisableKeyword
                                                 (*(long *)(unaff_x19 + 0x698),0), lVar15 != 0)) {
                            FUN_02215a88(lVar15,*(undefined4 *)(unaff_x19 + 0x6a4),&stack0x000000e0,
                                         *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
                            if (uVar9 < *(uint *)(lVar14 + 0x18)) {
                              *(undefined8 *)(lVar14 + (long)(int)uVar9 * 0x178 + 0x30) =
                                   in_stack_000000e0;
                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                              if ((*unaff_x20 != 0) &&
                                 (lVar14 = *(long *)(*unaff_x20 + 0x38), lVar14 != 0)) {
                                uVar9 = *(uint *)(unaff_x19 + 0x490);
                                if (uVar9 < *(uint *)(lVar14 + 0x18)) {
                                  uVar8 = *(undefined4 *)(unaff_x19 + 0x644);
                                  lVar15 = lVar14 + (long)(int)uVar9 * 0x178;
                                  *(int *)(lVar15 + 0x24) = iVar11;
                                  *(undefined4 *)(lVar15 + 0x2c) = uVar8;
                                  if (uVar7 < *(uint *)(unaff_x21 + 0x18)) {
                                    *(int *)(lVar14 + (long)(int)uVar9 * 0x178 + 0x28) =
                                         (*(int *)(unaff_x21 + (long)(int)uVar7 * 0xc + 0x24) -
                                         iVar11) + 1;
                                    *(undefined4 *)(unaff_x19 + 0x644) = 0;
                                    *(undefined4 *)(unaff_x19 + 0x120) = uVar10;
                                    in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
                                    plVar16 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    unaff_x25 = in_stack_00000038;
                                    unaff_w22 = uVar7;
                                    goto LAB_0356571c;
                                  }
                                }
                                goto LAB_035660f8;
                              }
                              goto LAB_03566068;
                            }
                            goto LAB_035660f8;
                          }
                          goto LAB_03566068;
                        }
                        goto LAB_035660f8;
                      }
                      goto LAB_03566068;
                    }
                    goto LAB_035660f8;
                  }
                  goto LAB_03566068;
                }
                goto LAB_035660f8;
              }
              goto LAB_03566068;
            }
            goto LAB_035660f8;
          }
          goto LAB_03566068;
        }
      }
      else {
LAB_035649d0:
        uStack00000000000001bc = 0;
        uVar22 = *(undefined8 *)(unaff_x19 + 0x100);
        uVar26 = *(undefined8 *)(unaff_x19 + 0x118);
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
            uVar13 = FUN_026b8070(uVar9,0);
            if ((uVar13 & 1) != 0) {
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
          uVar13 = FUN_026b812c(uVar9,0);
          if ((uVar13 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar9 = FUN_026b8410(uVar9,0);
LAB_03564aa8:
            uVar9 = uVar9 & 0xffff;
          }
        }
LAB_03564aac:
        lVar14 = FUN_03591848();
        if (lVar14 == 0) {
          iVar11 = FUN_035975f8();
          if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
          if (iVar11 == 0) {
            uVar7 = 0x25a1;
          }
          else {
            uVar7 = FUN_035975f8(0);
          }
          *unaff_x29 = uVar7;
          uVar24 = *(undefined8 *)(unaff_x19 + 0x100);
          uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
          uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
          if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          lVar14 = FUN_03570fc4(uVar7,uVar24,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
          if (lVar14 == 0) {
            lVar14 = FUN_03597770();
            if (lVar14 != 0) {
              lVar14 = FUN_03597770(0);
              if (lVar14 == 0) goto LAB_03566068;
              if (0 < *(int *)(lVar14 + 0x18)) {
                uVar27 = *(undefined8 *)(unaff_x19 + 0x100);
                uVar24 = FUN_03597770(0);
                uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
                uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                }
                lVar14 = FUN_035714e4(uVar7,uVar27,uVar24,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0
                                     );
                if (lVar14 != 0) goto LAB_03564b5c;
              }
            }
            uVar24 = FUN_03597650(0);
            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
            }
            uVar13 = FUN_036cee6c(uVar24,0,0);
            if ((uVar13 & 1) != 0) {
              uVar24 = FUN_03597650(0);
              uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
              uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
              if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
              }
              lVar14 = FUN_03570fc4(uVar7,uVar24,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
              if (lVar14 != 0) goto LAB_03564b5c;
            }
            if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
            *unaff_x29 = 0x20;
            uVar24 = *(undefined8 *)(unaff_x19 + 0x100);
            uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
            uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
            if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar7 = 0x20;
            lVar14 = FUN_03570fc4(0x20,uVar24,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
            if (lVar14 == 0) {
              if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
              *unaff_x29 = 3;
              uVar24 = *(undefined8 *)(unaff_x19 + 0x100);
              uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
              uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
              if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar7 = 3;
              lVar14 = FUN_03570fc4(3,uVar24,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
            }
          }
LAB_03564b5c:
          uVar13 = FUN_03597634(0);
          if ((uVar13 & 1) == 0) {
            plVar16 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,4);
            if ((int)uVar9 < 0x10000) {
              in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar9);
              lVar15 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
              if (plVar16 == (long *)0x0) goto LAB_03566068;
              if ((lVar15 != 0) &&
                 (lVar29 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar29 == 0)
                 ) goto LAB_035660fc;
              if ((int)plVar16[3] == 0) goto LAB_035660f8;
              plVar16[4] = lVar15;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar16 + 4,lVar15);
              if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
              lVar15 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
              if ((lVar15 != 0) &&
                 (lVar29 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar29 == 0)
                 ) goto LAB_035660fc;
              if (*(uint *)(plVar16 + 3) < 2) goto LAB_035660f8;
              plVar16[5] = lVar15;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar16 + 5,lVar15);
              if (lVar14 == 0) goto LAB_03566068;
              in_stack_00000168._4_4_ = *(undefined4 *)(lVar14 + 0x14);
              lVar15 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,(long)&stack0x00000168 + 4
                                         );
              if ((lVar15 != 0) &&
                 (lVar29 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar29 == 0)
                 ) goto LAB_035660fc;
              if (*(uint *)(plVar16 + 3) < 3) goto LAB_035660f8;
              plVar16[6] = lVar15;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar16 + 6,lVar15);
              lVar15 = FUN_036d3824();
              if ((lVar15 != 0) &&
                 (lVar29 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar29 == 0)
                 ) goto LAB_035660fc;
              if (*(uint *)(plVar16 + 3) < 4) goto LAB_035660f8;
              plVar16[7] = lVar15;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar16 + 7,lVar15);
              puVar19 = (undefined8 *)OVRPlugin_TrackedKeyboardFlags_TypeInfo;
            }
            else {
              in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar9);
              lVar15 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
              if (plVar16 == (long *)0x0) goto LAB_03566068;
              if ((lVar15 != 0) &&
                 (lVar29 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar29 == 0)
                 ) goto LAB_035660fc;
              if ((int)plVar16[3] == 0) goto LAB_035660f8;
              plVar16[4] = lVar15;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar16 + 4,lVar15);
              if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
              lVar15 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
              if ((lVar15 != 0) &&
                 (lVar29 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar29 == 0)
                 ) goto LAB_035660fc;
              if (*(uint *)(plVar16 + 3) < 2) goto LAB_035660f8;
              plVar16[5] = lVar15;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar16 + 5,lVar15);
              if (lVar14 == 0) goto LAB_03566068;
              in_stack_00000168._4_4_ = *(undefined4 *)(lVar14 + 0x14);
              lVar15 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,(long)&stack0x00000168 + 4
                                         );
              if ((lVar15 != 0) &&
                 (lVar29 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar29 == 0)
                 ) goto LAB_035660fc;
              if (*(uint *)(plVar16 + 3) < 3) goto LAB_035660f8;
              plVar16[6] = lVar15;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar16 + 6,lVar15);
              lVar15 = FUN_036d3824();
              if ((lVar15 != 0) &&
                 (lVar29 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar29 == 0)
                 ) goto LAB_035660fc;
              if (*(uint *)(plVar16 + 3) < 4) goto LAB_035660f8;
              plVar16[7] = lVar15;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar16 + 7,lVar15);
              puVar19 = (undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo;
            }
            uVar24 = FUN_025be8f4(*puVar19,plVar16,0);
            if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_0367b470(uVar24);
            unaff_x25 = in_stack_00000038;
            uVar9 = uVar7;
          }
          else {
            unaff_x25 = in_stack_00000038;
            uVar9 = uVar7;
            if (lVar14 == 0) goto LAB_03566068;
          }
        }
        if (*(char *)(lVar14 + 0x10) == '\x01') {
          lVar15 = *(long *)(lVar14 + 0x18);
          if (lVar15 == 0) goto LAB_03566068;
          iVar11 = *(int *)(lVar15 + 0x18);
          if (iVar11 == 0) {
            iVar11 = FUN_036d3364(lVar15,0);
            *(int *)(lVar15 + 0x18) = iVar11;
          }
          lVar15 = *unaff_x25;
          if (lVar15 == 0) goto LAB_03566068;
          iVar12 = *(int *)(lVar15 + 0x18);
          if (iVar12 == 0) {
            iVar12 = FUN_036d3364(lVar15,0);
            *(int *)(lVar15 + 0x18) = iVar12;
          }
          if (iVar11 == iVar12) {
            bVar4 = false;
          }
          else {
            plVar16 = *(long **)(lVar14 + 0x18);
            if (plVar16 == (long *)0x0) {
              plVar16 = (long *)0x0;
              *unaff_x25 = 0;
            }
            else {
              lVar15 = *(long *)OVRPlugin_OVRP_1_83_0_TypeInfo;
              bVar3 = *(byte *)(lVar15 + 0x130);
              if (*(byte *)(*plVar16 + 0x130) < bVar3) {
                plVar23 = (long *)0x0;
              }
              else {
                plVar23 = plVar16;
                if (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar3 * 8 + -8) != lVar15) {
                  plVar23 = (long *)0x0;
                }
              }
              *unaff_x25 = (long)plVar23;
              if (*(byte *)(*plVar16 + 0x130) < bVar3) {
                plVar16 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar3 * 8 + -8) != lVar15) {
                plVar16 = (long *)0x0;
              }
            }
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25,plVar16);
            bVar4 = true;
          }
        }
        else {
          bVar4 = false;
        }
        if ((*unaff_x20 == 0) || (lVar15 = *(long *)(*unaff_x20 + 0x38), lVar15 == 0))
        goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
        lVar15 = lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
        plVar16 = (long *)(lVar15 + 0x30);
        *plVar16 = lVar14;
        *(undefined4 *)(lVar15 + 0x2c) = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar16,lVar14);
        if ((*unaff_x20 == 0) || (lVar15 = *(long *)(*unaff_x20 + 0x38), lVar15 == 0))
        goto LAB_03566068;
        uVar7 = *(uint *)(unaff_x19 + 0x490);
        if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_035660f8;
        lVar29 = lVar15 + (long)(int)uVar7 * 0x178;
        *(short *)(lVar29 + 0x20) = (short)uVar9;
        *(undefined1 *)(lVar29 + 0x5c) = uStack00000000000001bc;
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
        lVar15 = lVar15 + (long)(int)uVar7 * 0x178;
        *(undefined8 *)(lVar15 + 0x24) =
             *(undefined8 *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x24);
        *(long *)(lVar15 + 0x38) = *unaff_x25;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        plVar16 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(char *)(lVar14 + 0x10) == '\x02') {
          plVar23 = *(long **)(lVar14 + 0x18);
          if (plVar23 == (long *)0x0) goto LAB_03566068;
          bVar3 = *(byte *)(*(long *)OVRPlugin_Sizei_TypeInfo + 0x130);
          if ((*(byte *)(*plVar23 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar3 * 8 + -8) !=
              *(long *)OVRPlugin_Sizei_TypeInfo)) goto LAB_03566068;
          lVar29 = plVar23[4];
          lVar15 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar15 = *plVar16;
          }
          uVar9 = FUN_03558224(lVar29,plVar23,*(long *)(lVar15 + 0xb8),
                               *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8));
          *(uint *)(unaff_x19 + 0x120) = uVar9;
          lVar15 = **(long **)(*plVar16 + 0xb8);
          if (lVar15 == 0) goto LAB_03566068;
          if (*(uint *)(lVar15 + 0x18) <= uVar9) goto LAB_035660f8;
          lVar15 = lVar15 + (long)(int)uVar9 * 0x38;
          *(int *)(lVar15 + 0x54) = *(int *)(lVar15 + 0x54) + 1;
          if ((*unaff_x20 == 0) || (lVar15 = *(long *)(*unaff_x20 + 0x38), lVar15 == 0))
          goto LAB_03566068;
          if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
          lVar15 = lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
          *(undefined4 *)(lVar15 + 0x2c) = 1;
          uVar8 = *(undefined4 *)(unaff_x19 + 0x120);
          *(undefined8 *)(lVar15 + 0x40) = plVar23;
          *(undefined4 *)(lVar15 + 0x58) = uVar8;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((undefined8 *)(lVar15 + 0x40),plVar23);
          plVar16 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if ((*(long *)(unaff_x19 + 0x368) == 0) ||
             (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar15 == 0))
          goto LAB_03566068;
          uVar9 = *(uint *)(unaff_x19 + 0x490);
          if (*(uint *)(lVar15 + 0x18) <= uVar9) goto LAB_035660f8;
          *(undefined4 *)(lVar15 + (long)(int)uVar9 * 0x178 + 0x48) = *(undefined4 *)(lVar14 + 0x28)
          ;
          *(undefined4 *)(unaff_x19 + 0x644) = 0;
          *(undefined4 *)(unaff_x19 + 0x120) = uVar10;
          in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
          unaff_x25 = in_stack_00000038;
          unaff_x27 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
        }
        else {
          if (bVar4) {
            lVar15 = *unaff_x25;
            if (lVar15 == 0) goto LAB_03566068;
            iVar11 = *(int *)(lVar15 + 0x18);
            if (iVar11 == 0) {
              iVar11 = FUN_036d3364(lVar15,0);
              *(int *)(lVar15 + 0x18) = iVar11;
            }
            lVar15 = *(long *)(unaff_x19 + 0xf8);
            if (lVar15 == 0) goto LAB_03566068;
            iVar12 = *(int *)(lVar15 + 0x18);
            if (iVar12 == 0) {
              iVar12 = FUN_036d3364(lVar15,0);
              *(int *)(lVar15 + 0x18) = iVar12;
            }
            if (iVar11 != iVar12) {
              uVar13 = FUN_0359778c(0);
              if ((uVar13 & 1) == 0) {
                if (*unaff_x25 == 0) goto LAB_03566068;
                uVar24 = *(undefined8 *)(*unaff_x25 + 0x20);
              }
              else {
                if (*unaff_x25 == 0) goto LAB_03566068;
                uVar27 = *(undefined8 *)(*unaff_x25 + 0x20);
                uVar24 = *in_stack_00000028;
                if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar24 = FUN_03594e9c(uVar24,uVar27,0);
                unaff_x25 = in_stack_00000038;
              }
              *in_stack_00000028 = uVar24;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000028);
              lVar15 = *plVar16;
              uVar24 = *in_stack_00000028;
              lVar29 = *unaff_x25;
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar15 = *plVar16;
              }
              uVar8 = FUN_03557fec(uVar24,lVar29,*(long *)(lVar15 + 0xb8),
                                   *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8));
              *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
              unaff_x25 = in_stack_00000038;
            }
          }
          if (*(long *)(lVar14 + 0x20) == 0) goto LAB_03566068;
          iVar11 = FUN_03776eb8(*(long *)(lVar14 + 0x20),0);
          if (0 < iVar11) {
            if (*(long *)(lVar14 + 0x20) == 0) goto LAB_03566068;
            lVar15 = *unaff_x25;
            uVar24 = *in_stack_00000028;
            uVar8 = FUN_03776eb8(*(long *)(lVar14 + 0x20),0);
            if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)OVRPlugin_Sizef_TypeInfo);
            }
            uVar24 = FUN_03594928(lVar15,uVar24,uVar8,0);
            *in_stack_00000028 = uVar24;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (in_stack_00000028,uVar24);
            lVar14 = *plVar16;
            uVar24 = *in_stack_00000028;
            lVar15 = *unaff_x25;
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar14 = *plVar16;
            }
            uVar8 = FUN_03557fec(uVar24,lVar15,*(long *)(lVar14 + 0xb8),
                                 *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8));
            bVar4 = true;
            *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
            unaff_x25 = in_stack_00000038;
          }
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar13 = FUN_026b63d8(uVar9,0);
          unaff_x27 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
          if ((uVar9 != 0x200b) && ((uVar13 & 1) == 0)) {
            lVar14 = *plVar16;
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar14);
              lVar14 = *plVar16;
            }
            lVar15 = **(long **)(lVar14 + 0xb8);
            if (lVar15 == 0) goto LAB_03566068;
            uVar9 = *(uint *)(unaff_x19 + 0x120);
            if (*(uint *)(lVar15 + 0x18) <= uVar9) goto LAB_035660f8;
            if (*(int *)(lVar15 + (long)(int)uVar9 * 0x38 + 0x54) < 0x3fff) {
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_01a58e78(lVar14);
                lVar15 = **(long **)(*plVar16 + 0xb8);
                if (lVar15 == 0) goto LAB_03566068;
                uVar9 = *(uint *)(unaff_x19 + 0x120);
              }
            }
            else {
              uVar27 = *in_stack_00000028;
              uVar24 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
              FUN_0369922c(uVar24,uVar27,0);
              lVar14 = *plVar16;
              lVar15 = *unaff_x25;
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar14 = *plVar16;
              }
              uVar9 = FUN_03557fec(uVar24,lVar15,*(long *)(lVar14 + 0xb8),
                                   *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8));
              *(uint *)(unaff_x19 + 0x120) = uVar9;
              lVar15 = **(long **)(*plVar16 + 0xb8);
              if (lVar15 == 0) goto LAB_03566068;
            }
            if (*(uint *)(lVar15 + 0x18) <= uVar9) goto LAB_035660f8;
            lVar15 = lVar15 + (long)(int)uVar9 * 0x38;
            *(int *)(lVar15 + 0x54) = *(int *)(lVar15 + 0x54) + 1;
          }
          if ((*unaff_x20 == 0) || (lVar14 = *(long *)(*unaff_x20 + 0x38), lVar14 == 0))
          goto LAB_03566068;
          if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
          *(undefined8 *)(lVar14 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x50) =
               *in_stack_00000028;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          if ((*unaff_x20 == 0) || (lVar14 = *(long *)(*unaff_x20 + 0x38), lVar14 == 0))
          goto LAB_03566068;
          if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
          uVar9 = *(uint *)(unaff_x19 + 0x120);
          *(uint *)(lVar14 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x58) = uVar9;
          lVar14 = *plVar16;
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar14 = *plVar16;
            uVar9 = *(uint *)(unaff_x19 + 0x120);
          }
          lVar15 = **(long **)(lVar14 + 0xb8);
          if (lVar15 == 0) goto LAB_03566068;
          if (*(uint *)(lVar15 + 0x18) <= uVar9) goto LAB_035660f8;
          *(bool *)(lVar15 + (long)(int)uVar9 * 0x38 + 0x41) = bVar4;
          if (bVar4) {
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar15 = **(long **)(*plVar16 + 0xb8);
              if (lVar15 == 0) goto LAB_03566068;
              uVar9 = *(uint *)(unaff_x19 + 0x120);
            }
            if (*(uint *)(lVar15 + 0x18) <= uVar9) goto LAB_035660f8;
            puVar19 = (undefined8 *)(lVar15 + (long)(int)uVar9 * 0x38 + 0x48);
            *puVar19 = uVar26;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar19,uVar26);
            *(undefined8 *)(unaff_x19 + 0x100) = uVar22;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25);
            *(undefined8 *)(unaff_x19 + 0x118) = uVar26;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (in_stack_00000028,uVar26);
            *(undefined4 *)(unaff_x19 + 0x120) = uVar10;
          }
          uVar9 = *(uint *)(unaff_x19 + 0x490);
        }
LAB_0356571c:
        *(uint *)(unaff_x19 + 0x490) = uVar9 + 1;
      }
      uVar9 = *(uint *)(unaff_x21 + 0x18);
      unaff_w22 = unaff_w22 + 1;
      if ((int)uVar9 <= (int)unaff_w22) {
LAB_0356573c:
        if (*(char *)(unaff_x19 + 0x3f5) != '\0') {
          *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
          goto LAB_03565748;
        }
        lVar14 = *unaff_x20;
        if (lVar14 == 0) goto LAB_03566068;
        *(int *)(lVar14 + 0x1c) = in_stack_00000020._4_4_;
        lVar15 = *plVar16;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar15 = *plVar16;
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
        if (lVar15 == 0) goto LAB_03566068;
        uVar9 = FUN_0219b384(lVar15,*(undefined8 *)PTR_DAT_03ceb270);
        *(uint *)(lVar14 + 0x34) = uVar9;
        if (*unaff_x20 == 0) goto LAB_03566068;
        plVar23 = (long *)(*unaff_x20 + 0x60);
        lVar14 = *plVar23;
        if (lVar14 == 0) goto LAB_03566068;
        uVar13 = (ulong)uVar9;
        if (*(int *)(lVar14 + 0x18) < (int)uVar9) {
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff02b8(plVar23,uVar13,0,*(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo);
        }
        if (*(long *)(unaff_x19 + 0x708) == 0) goto LAB_03566068;
        plVar23 = (long *)(unaff_x19 + 0x708);
        if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar9) {
          uVar10 = FUN_036c1d60(uVar9 + 1,0);
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*unaff_x27);
          }
          FUN_01ff025c(plVar23,uVar10,*(undefined8 *)OVRSystemPerfMetrics_PerfMetrics_TypeInfo);
        }
        if (*(char *)(unaff_x19 + 0x321) != '\0') {
          if (*unaff_x20 == 0) goto LAB_03566068;
          plVar25 = (long *)(*unaff_x20 + 0x38);
          lVar14 = *plVar25;
          if (lVar14 == 0) goto LAB_03566068;
          iVar11 = *(int *)(unaff_x19 + 0x490);
          if (0x100 < *(int *)(lVar14 + 0x18) - iVar11) {
            iVar12 = 0x100;
            if (0x100 < iVar11 + 1) {
              iVar12 = iVar11 + 1;
            }
            if (*(int *)(*unaff_x27 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_01ff02b8(plVar25,iVar12,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
            plVar16 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          }
        }
        fVar5 = DAT_00d38798;
        if ((int)uVar9 < 1) goto LAB_03565fb8;
        lVar14 = 0;
        uVar28 = 0;
        lVar15 = 0x54;
        lVar29 = 0x20;
        goto LAB_035658ec;
      }
      if (uVar9 <= unaff_w22) goto LAB_035660f8;
      unaff_x29 = (uint *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x20);
      if (*unaff_x29 == 0) goto LAB_0356573c;
      if (*unaff_x20 == 0) goto LAB_03566068;
      unaff_x24 = (long *)(*unaff_x20 + 0x38);
      iVar11 = *(int *)(unaff_x19 + 0x490);
    } while ((*unaff_x24 != 0) && (iVar11 < *(int *)(*unaff_x24 + 0x18)));
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    param_5 = (ulong)(iVar11 + 1);
    param_6 = 1;
    param_1 = (undefined8 *)OVRPlugin_SkeletonType_TypeInfo;
  } while( true );
LAB_035658ec:
  do {
    fVar33 = (float)param_3;
    if (uVar28 != 0) {
      lVar20 = *plVar23;
      if (lVar20 == 0) goto LAB_03566068;
      if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_035660f8;
      uVar26 = *(undefined8 *)(lVar20 + uVar28 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar17 = FUN_036d35a8(uVar26,0,0);
      if ((uVar17 & 1) != 0) {
        lVar20 = *plVar16;
        plVar25 = (long *)*plVar23;
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar20 = *plVar16;
        }
        lVar20 = **(long **)(lVar20 + 0xb8);
        if (lVar20 == 0) goto LAB_03566068;
        if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar20 = lVar20 + lVar15;
        in_stack_00000160 = *(undefined8 *)(lVar20 + -4);
        in_stack_00000158 = *(undefined8 *)(lVar20 + -0xc);
        in_stack_00000150 = *(undefined8 *)(lVar20 + -0x14);
        in_stack_00000148 = *(undefined8 *)(lVar20 + -0x1c);
        uVar26 = *(undefined8 *)(lVar20 + -0x24);
        in_stack_00000138 = *(undefined8 *)(lVar20 + -0x2c);
        in_stack_00000130 = *(undefined8 *)(lVar20 + -0x34);
        in_stack_00000140 = uVar26;
        lVar20 = FUN_0359e964();
        fVar33 = (float)uVar26;
        if (plVar25 == (long *)0x0) goto LAB_03566068;
        if ((lVar20 != 0) &&
           (lVar18 = thunk_FUN_01a89d6c(lVar20,*(undefined8 *)(*plVar25 + 0x40)), lVar18 == 0)) {
LAB_035660fc:
          uVar26 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar26,0);
        }
        if (*(uint *)(plVar25 + 3) <= uVar28) goto LAB_035660f8;
        plVar25[uVar28 + 4] = lVar20;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long)plVar25 + lVar29,lVar20);
        plVar16 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if ((*unaff_x20 == 0) || (lVar20 = *(long *)(*unaff_x20 + 0x60), lVar20 == 0))
        goto LAB_03566068;
        if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_035660f8;
        puVar19 = (undefined8 *)(lVar20 + lVar14 + 0x30);
        *puVar19 = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar19,0);
      }
      if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_03566068;
      fVar30 = (float)FUN_036dba50(*(long *)(unaff_x19 + 0x380),0);
      lVar20 = *plVar23;
      if (lVar20 == 0) goto LAB_03566068;
      if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_035660f8;
      lVar20 = *(long *)(lVar20 + uVar28 * 8 + 0x20);
      if ((lVar20 == 0) || (fVar32 = fVar33, lVar20 = FUN_037b4844(lVar20,0), lVar20 == 0))
      goto LAB_03566068;
      fVar31 = (float)FUN_036dba50(lVar20,0);
      fVar33 = (fVar33 - fVar32) * (fVar33 - fVar32);
      param_3 = (ulong)(uint)fVar33;
      if (fVar5 <= (fVar30 - fVar31) * (fVar30 - fVar31) + fVar33) {
        lVar20 = *plVar23;
        if (lVar20 == 0) goto LAB_03566068;
        if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar20 = *(long *)(lVar20 + uVar28 * 8 + 0x20);
        if (lVar20 == 0) goto LAB_03566068;
        lVar20 = FUN_037b4844(lVar20,0);
        if ((*(long *)(unaff_x19 + 0x380) == 0) ||
           (FUN_036dba50(*(long *)(unaff_x19 + 0x380),0), lVar20 == 0)) goto LAB_03566068;
        FUN_036dbae0(lVar20,0);
      }
      lVar20 = *plVar23;
      if (lVar20 == 0) goto LAB_03566068;
      if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_035660f8;
      lVar20 = *(long *)(lVar20 + uVar28 * 8 + 0x20);
      if (lVar20 == 0) goto LAB_03566068;
      uVar26 = *(undefined8 *)(lVar20 + 0xf0);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar17 = FUN_036d35a8(uVar26,0,0);
      if ((uVar17 & 1) == 0) {
        lVar20 = *plVar23;
        if (lVar20 == 0) goto LAB_03566068;
        if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar20 = *(long *)(lVar20 + uVar28 * 8 + 0x20);
        if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0xf0), lVar20 == 0)) goto LAB_03566068;
        iVar11 = FUN_036d3364(lVar20,0);
        lVar20 = *plVar16;
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar20);
          lVar20 = *plVar16;
        }
        lVar20 = **(long **)(lVar20 + 0xb8);
        if (lVar20 == 0) goto LAB_03566068;
        if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar20 = *(long *)(lVar20 + lVar15 + -0x1c);
        if (lVar20 == 0) goto LAB_03566068;
        iVar12 = FUN_036d3364(lVar20,0);
        if (iVar11 != iVar12) goto LAB_03565b98;
      }
      else {
LAB_03565b98:
        lVar20 = *plVar23;
        if (lVar20 == 0) goto LAB_03566068;
        if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar18 = *plVar16;
        lVar20 = *(long *)(lVar20 + uVar28 * 8 + 0x20);
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar18 = *plVar16;
        }
        lVar18 = **(long **)(lVar18 + 0xb8);
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
        if (lVar20 == 0) goto LAB_03566068;
        thunk_FUN_0359e5ac(lVar20,*(undefined8 *)(lVar18 + lVar15 + -0x1c),0);
        lVar20 = *plVar23;
        if (lVar20 == 0) goto LAB_03566068;
        if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar18 = **(long **)(*plVar16 + 0xb8);
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar20 = *(long *)(lVar20 + uVar28 * 8 + 0x20);
        if (lVar20 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar20 + 0xd8) = *(undefined8 *)(lVar18 + lVar15 + -0x2c);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar20 = *plVar23;
        if (lVar20 == 0) goto LAB_03566068;
        if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar18 = **(long **)(*plVar16 + 0xb8);
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar20 = *(long *)(lVar20 + uVar28 * 8 + 0x20);
        if (lVar20 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar20 + 0xe0) = *(undefined8 *)(lVar18 + lVar15 + -0x24);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      lVar20 = *plVar16;
      if (*(int *)(lVar20 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar20 = *plVar16;
      }
      lVar18 = **(long **)(lVar20 + 0xb8);
      if (lVar18 == 0) goto LAB_03566068;
      if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
      if (*(char *)(lVar18 + lVar15 + -0x13) != '\0') {
        lVar21 = *plVar23;
        if (lVar21 == 0) goto LAB_03566068;
        if (*(uint *)(lVar21 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar21 = *(long *)(lVar21 + uVar28 * 8 + 0x20);
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar18 = **(long **)(*plVar16 + 0xb8);
          if (lVar18 == 0) goto LAB_03566068;
        }
        if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
        if (lVar21 == 0) goto LAB_03566068;
        FUN_0359e608(lVar21,*(undefined8 *)(lVar18 + lVar15 + -0x1c),0);
        lVar20 = *plVar23;
        if (lVar20 == 0) goto LAB_03566068;
        if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar18 = **(long **)(*plVar16 + 0xb8);
        if (lVar18 == 0) goto LAB_03566068;
        if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar20 = *(long *)(lVar20 + uVar28 * 8 + 0x20);
        if (lVar20 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar20 + 0x100) = *(undefined8 *)(lVar18 + lVar15 + -0xc);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar20 + 0x100);
      }
    }
    lVar20 = *plVar16;
    if (*(int *)(lVar20 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar20 = *plVar16;
    }
    lVar20 = **(long **)(lVar20 + 0xb8);
    if (lVar20 == 0) goto LAB_03566068;
    if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_035660f8;
    if ((*unaff_x20 == 0) || (lVar18 = *(long *)(*unaff_x20 + 0x60), lVar18 == 0))
    goto LAB_03566068;
    if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
    lVar21 = *(long *)(lVar18 + lVar14 + 0x30);
    iVar11 = *(int *)(lVar20 + lVar15);
    if (lVar21 == 0) {
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
        if (*(int *)(lVar18 + 0x18) == 0) goto LAB_035660f8;
        memcpy((void *)(lVar18 + lVar14 + 0x20),&stack0x00000090,0x50);
        __dest = (void *)(lVar18 + 0x20);
      }
      else {
        lVar20 = *plVar23;
        if (lVar20 == 0) goto LAB_03566068;
        if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_035660f8;
        lVar20 = *(long *)(lVar20 + uVar28 * 8 + 0x20);
        if (lVar20 == 0) goto LAB_03566068;
        uVar26 = UnityEngine_Material__GetColorArray(lVar20,0);
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
        FUN_03595600(&stack0x000000e0,uVar26,iVar11 + 1,0);
        memcpy(&stack0x00000040,&stack0x000000e0,0x50);
        if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
        __dest = (void *)(lVar18 + lVar14 + 0x20);
        memcpy(__dest,&stack0x00000040,0x50);
      }
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(__dest,0);
    }
    else {
      iVar12 = *(int *)(lVar21 + 0x18);
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
        FUN_03595b9c(lVar18 + lVar14 + 0x20,iVar11,0);
      }
      else if ((0 < iVar11) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
        iVar1 = iVar12 + 3;
        if (-1 < iVar12) {
          iVar1 = iVar12;
        }
        if (0x100 < (iVar1 >> 2) - iVar11) goto LAB_03565e08;
      }
    }
    plVar16 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if ((*unaff_x20 == 0) || (lVar20 = *(long *)(*unaff_x20 + 0x60), lVar20 == 0))
    goto LAB_03566068;
    lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar18 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar18 = *plVar16;
    }
    lVar18 = **(long **)(lVar18 + 0xb8);
    if (lVar18 == 0) goto LAB_03566068;
    if ((*(uint *)(lVar18 + 0x18) <= uVar28) || (*(uint *)(lVar20 + 0x18) <= uVar28))
    goto LAB_035660f8;
    *(undefined8 *)(lVar20 + lVar14 + 0x68) = *(undefined8 *)(lVar18 + lVar15 + -0x1c);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    uVar28 = uVar28 + 1;
    lVar14 = lVar14 + 0x50;
    lVar15 = lVar15 + 0x38;
    lVar29 = lVar29 + 8;
  } while (uVar9 != uVar28);
LAB_03565fb8:
  lVar14 = *plVar23;
  if (lVar14 != 0) {
    lVar15 = (-(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3) + 0x20;
    do {
      uVar9 = (uint)uVar13;
      if ((int)*(uint *)(lVar14 + 0x18) <= (int)uVar9) {
LAB_03565748:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar9) {
LAB_035660f8:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar26 = *(undefined8 *)(lVar14 + lVar15);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar13 = FUN_036cee6c(uVar26,0,0);
      if ((uVar13 & 1) == 0) goto LAB_03565748;
      if ((*unaff_x20 == 0) || (lVar14 = *(long *)(*unaff_x20 + 0x60), lVar14 == 0)) break;
      if ((int)uVar9 < *(int *)(lVar14 + 0x18)) {
        lVar14 = *plVar23;
        if (lVar14 == 0) break;
        if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_035660f8;
        if ((*(long *)(lVar14 + lVar15) == 0) ||
           (lVar14 = FUN_037b514c(*(long *)(lVar14 + lVar15),0), lVar14 == 0)) break;
        FUN_0390f3a4(lVar14,0,0);
      }
      lVar14 = *plVar23;
      uVar13 = (ulong)(uVar9 + 1);
      lVar15 = lVar15 + 8;
    } while (lVar14 != 0);
  }
LAB_03566068:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


