/*
FUNCTION_NAME: UnityEngine.Microphone$$GetPosition
ENTRY_POINT: 03566098
PROGRAM: vrlegs-libil2cpp.so
SCORE: 154
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


undefined4 UnityEngine_Microphone__GetPosition(undefined1 param_1 [16],ulong param_2,long *param_3)

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
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  void *__dest;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint uVar22;
  long *plVar23;
  long *unaff_x22;
  undefined8 uVar24;
  long *plVar25;
  undefined8 uVar26;
  long *plVar27;
  long *unaff_x24;
  undefined8 uVar28;
  long *unaff_x25;
  ulong uVar29;
  long *unaff_x27;
  uint *puVar30;
  long lVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int iStack0000000000000024;
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
  
  while (uVar17 = FUN_036cee6c(param_3,0,0), (uVar17 & 1) != 0) {
    if (unaff_x24 == (long *)0x0) goto LAB_03566068;
    (**(code **)(*unaff_x24 + 0x528))
              (unaff_x24,**(undefined8 **)(*unaff_x22 + 0xb8),*(undefined8 *)(*unaff_x24 + 0x530));
    (**(code **)(*unaff_x24 + 0x918))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x920));
    if (unaff_x24[0x6d] == 0) goto LAB_03566068;
    FUN_0359ff94(unaff_x24[0x6d],0);
    param_3 = (long *)unaff_x24[0x5d];
    unaff_x24 = param_3;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
  }
  if (unaff_x21 != 0) {
    uVar9 = *(uint *)(unaff_x21 + 0x18);
    plVar27 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if ((int)uVar9 < 1) {
      iStack0000000000000024 = 0;
    }
    else {
      uVar22 = 0;
      iStack0000000000000024 = 0;
      do {
        if (uVar9 <= uVar22) goto LAB_035660f8;
        puVar30 = (uint *)(unaff_x21 + (long)(int)uVar22 * 0xc + 0x20);
        if (*puVar30 == 0) break;
        if (*unaff_x20 == 0) goto LAB_03566068;
        plVar27 = (long *)(*unaff_x20 + 0x38);
        lVar19 = *plVar27;
        iVar11 = *(int *)(unaff_x19 + 0x490);
        if ((lVar19 == 0) || (*(int *)(lVar19 + 0x18) <= iVar11)) {
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff02b8(plVar27,iVar11 + 1,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
          uVar9 = *(uint *)(unaff_x21 + 0x18);
        }
        if (uVar9 <= uVar22) goto LAB_035660f8;
        uVar9 = *puVar30;
        if ((uVar9 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) {
          uVar10 = *(undefined4 *)(unaff_x19 + 0x120);
          uVar17 = FUN_03586568();
          uVar7 = uStack00000000000001b8;
          if ((uVar17 & 1) == 0) goto LAB_035649d0;
          if (*(uint *)(unaff_x21 + 0x18) <= uVar22) goto LAB_035660f8;
          iVar11 = *(int *)(unaff_x21 + (long)(int)uVar22 * 0xc + 0x24);
          if ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0) {
            *(undefined1 *)(unaff_x19 + 0x26a) = 1;
          }
          puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          plVar27 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          uVar22 = uStack00000000000001b8;
          if (*(int *)(unaff_x19 + 0x644) == 1) {
            lVar19 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar19 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar19 = *(long *)puVar6;
            }
            lVar19 = **(long **)(lVar19 + 0xb8);
            if (lVar19 != 0) {
              if (*(uint *)(unaff_x19 + 0x120) < *(uint *)(lVar19 + 0x18)) {
                lVar19 = lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
                *(int *)(lVar19 + 0x54) = *(int *)(lVar19 + 0x54) + 1;
                if ((*unaff_x20 != 0) && (lVar19 = *(long *)(*unaff_x20 + 0x38), lVar19 != 0)) {
                  if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar19 + 0x18)) {
                    uVar8 = *(undefined4 *)(unaff_x19 + 0x6a4);
                    lVar19 = lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
                    *(short *)(lVar19 + 0x20) = (short)uVar8 + -0x2000;
                    *(undefined4 *)(lVar19 + 0x48) = uVar8;
                    *(long *)(lVar19 + 0x38) = *in_stack_00000038;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    if ((*unaff_x20 != 0) && (lVar19 = *(long *)(*unaff_x20 + 0x38), lVar19 != 0)) {
                      if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar19 + 0x18)) {
                        *(undefined8 *)
                         (lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x40) =
                             *(undefined8 *)(unaff_x19 + 0x698);
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                        if ((*unaff_x20 != 0) &&
                           (lVar19 = *(long *)(*unaff_x20 + 0x38), lVar19 != 0)) {
                          uVar9 = *(uint *)(unaff_x19 + 0x490);
                          if (uVar9 < *(uint *)(lVar19 + 0x18)) {
                            *(undefined4 *)(lVar19 + (long)(int)uVar9 * 0x178 + 0x58) =
                                 *(undefined4 *)(unaff_x19 + 0x120);
                            if ((*(long *)(unaff_x19 + 0x698) != 0) &&
                               (lVar13 = UnityEngine_Material__DisableKeyword
                                                   (*(long *)(unaff_x19 + 0x698),0), lVar13 != 0)) {
                              FUN_02215a88(lVar13,*(undefined4 *)(unaff_x19 + 0x6a4),
                                           &stack0x000000e0,
                                           *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
                              if (uVar9 < *(uint *)(lVar19 + 0x18)) {
                                *(undefined8 *)(lVar19 + (long)(int)uVar9 * 0x178 + 0x30) =
                                     in_stack_000000e0;
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                                if ((*unaff_x20 != 0) &&
                                   (lVar19 = *(long *)(*unaff_x20 + 0x38), lVar19 != 0)) {
                                  uVar9 = *(uint *)(unaff_x19 + 0x490);
                                  if (uVar9 < *(uint *)(lVar19 + 0x18)) {
                                    uVar8 = *(undefined4 *)(unaff_x19 + 0x644);
                                    lVar13 = lVar19 + (long)(int)uVar9 * 0x178;
                                    *(int *)(lVar13 + 0x24) = iVar11;
                                    *(undefined4 *)(lVar13 + 0x2c) = uVar8;
                                    if (uVar7 < *(uint *)(unaff_x21 + 0x18)) {
                                      *(int *)(lVar19 + (long)(int)uVar9 * 0x178 + 0x28) =
                                           (*(int *)(unaff_x21 + (long)(int)uVar7 * 0xc + 0x24) -
                                           iVar11) + 1;
                                      *(undefined4 *)(unaff_x19 + 0x644) = 0;
                                      *(undefined4 *)(unaff_x19 + 0x120) = uVar10;
                                      iStack0000000000000024 = iStack0000000000000024 + 1;
                                      plVar27 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      unaff_x25 = in_stack_00000038;
                                      uVar22 = uVar7;
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
          uVar21 = *(undefined8 *)(unaff_x19 + 0x100);
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
              uVar17 = FUN_026b8070(uVar9,0);
              if ((uVar17 & 1) != 0) {
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
            uVar17 = FUN_026b812c(uVar9,0);
            if ((uVar17 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar9 = FUN_026b8410(uVar9,0);
LAB_03564aa8:
              uVar9 = uVar9 & 0xffff;
            }
          }
LAB_03564aac:
          lVar19 = FUN_03591848();
          if (lVar19 == 0) {
            iVar11 = FUN_035975f8();
            if (*(uint *)(unaff_x21 + 0x18) <= uVar22) goto LAB_035660f8;
            if (iVar11 == 0) {
              uVar7 = 0x25a1;
            }
            else {
              uVar7 = FUN_035975f8(0);
            }
            *puVar30 = uVar7;
            uVar24 = *(undefined8 *)(unaff_x19 + 0x100);
            uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
            uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
            if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            lVar19 = FUN_03570fc4(uVar7,uVar24,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
            if (lVar19 == 0) {
              lVar19 = FUN_03597770();
              if (lVar19 != 0) {
                lVar19 = FUN_03597770(0);
                if (lVar19 == 0) goto LAB_03566068;
                if (0 < *(int *)(lVar19 + 0x18)) {
                  uVar28 = *(undefined8 *)(unaff_x19 + 0x100);
                  uVar24 = FUN_03597770(0);
                  uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
                  uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                  if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                  }
                  lVar19 = FUN_035714e4(uVar7,uVar28,uVar24,1,uVar8,uVar2,(long)&stack0x000001b8 + 4
                                        ,0);
                  if (lVar19 != 0) goto LAB_03564b5c;
                }
              }
              uVar24 = FUN_03597650(0);
              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
              }
              uVar17 = FUN_036cee6c(uVar24,0,0);
              if ((uVar17 & 1) != 0) {
                uVar24 = FUN_03597650(0);
                uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
                uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                }
                lVar19 = FUN_03570fc4(uVar7,uVar24,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
                if (lVar19 != 0) goto LAB_03564b5c;
              }
              if (*(uint *)(unaff_x21 + 0x18) <= uVar22) goto LAB_035660f8;
              *puVar30 = 0x20;
              uVar24 = *(undefined8 *)(unaff_x19 + 0x100);
              uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
              uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
              if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar7 = 0x20;
              lVar19 = FUN_03570fc4(0x20,uVar24,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
              if (lVar19 == 0) {
                if (*(uint *)(unaff_x21 + 0x18) <= uVar22) goto LAB_035660f8;
                *puVar30 = 3;
                uVar24 = *(undefined8 *)(unaff_x19 + 0x100);
                uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
                uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar7 = 3;
                lVar19 = FUN_03570fc4(3,uVar24,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
              }
            }
LAB_03564b5c:
            uVar17 = FUN_03597634(0);
            if ((uVar17 & 1) == 0) {
              plVar27 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,4);
              if ((int)uVar9 < 0x10000) {
                in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar9);
                lVar13 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
                if (plVar27 == (long *)0x0) goto LAB_03566068;
                if ((lVar13 != 0) &&
                   (lVar31 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar27 + 0x40)),
                   lVar31 == 0)) goto LAB_035660fc;
                if ((int)plVar27[3] == 0) goto LAB_035660f8;
                plVar27[4] = lVar13;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar27 + 4,lVar13);
                if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
                lVar13 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
                if ((lVar13 != 0) &&
                   (lVar31 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar27 + 0x40)),
                   lVar31 == 0)) goto LAB_035660fc;
                if (*(uint *)(plVar27 + 3) < 2) goto LAB_035660f8;
                plVar27[5] = lVar13;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar27 + 5,lVar13);
                if (lVar19 == 0) goto LAB_03566068;
                in_stack_00000168._4_4_ = *(undefined4 *)(lVar19 + 0x14);
                lVar13 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,
                                            (long)&stack0x00000168 + 4);
                if ((lVar13 != 0) &&
                   (lVar31 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar27 + 0x40)),
                   lVar31 == 0)) goto LAB_035660fc;
                if (*(uint *)(plVar27 + 3) < 3) goto LAB_035660f8;
                plVar27[6] = lVar13;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar27 + 6,lVar13);
                lVar13 = FUN_036d3824();
                if ((lVar13 != 0) &&
                   (lVar31 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar27 + 0x40)),
                   lVar31 == 0)) goto LAB_035660fc;
                if (*(uint *)(plVar27 + 3) < 4) goto LAB_035660f8;
                plVar27[7] = lVar13;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar27 + 7,lVar13);
                puVar16 = (undefined8 *)OVRPlugin_TrackedKeyboardFlags_TypeInfo;
              }
              else {
                in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar9);
                lVar13 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
                if (plVar27 == (long *)0x0) goto LAB_03566068;
                if ((lVar13 != 0) &&
                   (lVar31 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar27 + 0x40)),
                   lVar31 == 0)) goto LAB_035660fc;
                if ((int)plVar27[3] == 0) goto LAB_035660f8;
                plVar27[4] = lVar13;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar27 + 4,lVar13);
                if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
                lVar13 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
                if ((lVar13 != 0) &&
                   (lVar31 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar27 + 0x40)),
                   lVar31 == 0)) goto LAB_035660fc;
                if (*(uint *)(plVar27 + 3) < 2) goto LAB_035660f8;
                plVar27[5] = lVar13;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar27 + 5,lVar13);
                if (lVar19 == 0) goto LAB_03566068;
                in_stack_00000168._4_4_ = *(undefined4 *)(lVar19 + 0x14);
                lVar13 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,
                                            (long)&stack0x00000168 + 4);
                if ((lVar13 != 0) &&
                   (lVar31 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar27 + 0x40)),
                   lVar31 == 0)) goto LAB_035660fc;
                if (*(uint *)(plVar27 + 3) < 3) goto LAB_035660f8;
                plVar27[6] = lVar13;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar27 + 6,lVar13);
                lVar13 = FUN_036d3824();
                if ((lVar13 != 0) &&
                   (lVar31 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar27 + 0x40)),
                   lVar31 == 0)) goto LAB_035660fc;
                if (*(uint *)(plVar27 + 3) < 4) goto LAB_035660f8;
                plVar27[7] = lVar13;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar27 + 7,lVar13);
                puVar16 = (undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo;
              }
              uVar24 = FUN_025be8f4(*puVar16,plVar27,0);
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
              if (lVar19 == 0) goto LAB_03566068;
            }
          }
          if (*(char *)(lVar19 + 0x10) == '\x01') {
            lVar13 = *(long *)(lVar19 + 0x18);
            if (lVar13 == 0) goto LAB_03566068;
            iVar11 = *(int *)(lVar13 + 0x18);
            if (iVar11 == 0) {
              iVar11 = FUN_036d3364(lVar13,0);
              *(int *)(lVar13 + 0x18) = iVar11;
            }
            lVar13 = *unaff_x25;
            if (lVar13 == 0) goto LAB_03566068;
            iVar12 = *(int *)(lVar13 + 0x18);
            if (iVar12 == 0) {
              iVar12 = FUN_036d3364(lVar13,0);
              *(int *)(lVar13 + 0x18) = iVar12;
            }
            if (iVar11 == iVar12) {
              bVar4 = false;
            }
            else {
              plVar27 = *(long **)(lVar19 + 0x18);
              if (plVar27 == (long *)0x0) {
                plVar27 = (long *)0x0;
                *unaff_x25 = 0;
              }
              else {
                lVar13 = *(long *)OVRPlugin_OVRP_1_83_0_TypeInfo;
                bVar3 = *(byte *)(lVar13 + 0x130);
                if (*(byte *)(*plVar27 + 0x130) < bVar3) {
                  plVar23 = (long *)0x0;
                }
                else {
                  plVar23 = plVar27;
                  if (*(long *)(*(long *)(*plVar27 + 200) + (ulong)bVar3 * 8 + -8) != lVar13) {
                    plVar23 = (long *)0x0;
                  }
                }
                *unaff_x25 = (long)plVar23;
                if (*(byte *)(*plVar27 + 0x130) < bVar3) {
                  plVar27 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar27 + 200) + (ulong)bVar3 * 8 + -8) != lVar13) {
                  plVar27 = (long *)0x0;
                }
              }
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25,plVar27);
              bVar4 = true;
            }
          }
          else {
            bVar4 = false;
          }
          if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
          goto LAB_03566068;
          if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
          lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
          plVar27 = (long *)(lVar13 + 0x30);
          *plVar27 = lVar19;
          *(undefined4 *)(lVar13 + 0x2c) = 0;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar27,lVar19);
          if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
          goto LAB_03566068;
          uVar7 = *(uint *)(unaff_x19 + 0x490);
          if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_035660f8;
          lVar31 = lVar13 + (long)(int)uVar7 * 0x178;
          *(short *)(lVar31 + 0x20) = (short)uVar9;
          *(undefined1 *)(lVar31 + 0x5c) = uStack00000000000001bc;
          if (*(uint *)(unaff_x21 + 0x18) <= uVar22) goto LAB_035660f8;
          lVar13 = lVar13 + (long)(int)uVar7 * 0x178;
          *(undefined8 *)(lVar13 + 0x24) =
               *(undefined8 *)(unaff_x21 + (long)(int)uVar22 * 0xc + 0x24);
          *(long *)(lVar13 + 0x38) = *unaff_x25;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          plVar27 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(char *)(lVar19 + 0x10) == '\x02') {
            plVar23 = *(long **)(lVar19 + 0x18);
            if (plVar23 == (long *)0x0) goto LAB_03566068;
            bVar3 = *(byte *)(*(long *)OVRPlugin_Sizei_TypeInfo + 0x130);
            if ((*(byte *)(*plVar23 + 0x130) < bVar3) ||
               (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar3 * 8 + -8) !=
                *(long *)OVRPlugin_Sizei_TypeInfo)) goto LAB_03566068;
            lVar31 = plVar23[4];
            lVar13 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar13 = *plVar27;
            }
            uVar9 = FUN_03558224(lVar31,plVar23,*(long *)(lVar13 + 0xb8),
                                 *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
            *(uint *)(unaff_x19 + 0x120) = uVar9;
            lVar13 = **(long **)(*plVar27 + 0xb8);
            if (lVar13 == 0) goto LAB_03566068;
            if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_035660f8;
            lVar13 = lVar13 + (long)(int)uVar9 * 0x38;
            *(int *)(lVar13 + 0x54) = *(int *)(lVar13 + 0x54) + 1;
            if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
            goto LAB_03566068;
            if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
            lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
            *(undefined4 *)(lVar13 + 0x2c) = 1;
            uVar8 = *(undefined4 *)(unaff_x19 + 0x120);
            *(undefined8 *)(lVar13 + 0x40) = plVar23;
            *(undefined4 *)(lVar13 + 0x58) = uVar8;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((undefined8 *)(lVar13 + 0x40),plVar23);
            plVar27 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if ((*(long *)(unaff_x19 + 0x368) == 0) ||
               (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0))
            goto LAB_03566068;
            uVar9 = *(uint *)(unaff_x19 + 0x490);
            if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_035660f8;
            *(undefined4 *)(lVar13 + (long)(int)uVar9 * 0x178 + 0x48) =
                 *(undefined4 *)(lVar19 + 0x28);
            *(undefined4 *)(unaff_x19 + 0x644) = 0;
            *(undefined4 *)(unaff_x19 + 0x120) = uVar10;
            iStack0000000000000024 = iStack0000000000000024 + 1;
            unaff_x25 = in_stack_00000038;
            unaff_x27 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
          }
          else {
            if (bVar4) {
              lVar13 = *unaff_x25;
              if (lVar13 == 0) goto LAB_03566068;
              iVar11 = *(int *)(lVar13 + 0x18);
              if (iVar11 == 0) {
                iVar11 = FUN_036d3364(lVar13,0);
                *(int *)(lVar13 + 0x18) = iVar11;
              }
              lVar13 = *(long *)(unaff_x19 + 0xf8);
              if (lVar13 == 0) goto LAB_03566068;
              iVar12 = *(int *)(lVar13 + 0x18);
              if (iVar12 == 0) {
                iVar12 = FUN_036d3364(lVar13,0);
                *(int *)(lVar13 + 0x18) = iVar12;
              }
              if (iVar11 != iVar12) {
                uVar17 = FUN_0359778c(0);
                if ((uVar17 & 1) == 0) {
                  if (*unaff_x25 == 0) goto LAB_03566068;
                  uVar24 = *(undefined8 *)(*unaff_x25 + 0x20);
                }
                else {
                  if (*unaff_x25 == 0) goto LAB_03566068;
                  uVar28 = *(undefined8 *)(*unaff_x25 + 0x20);
                  uVar24 = *in_stack_00000028;
                  if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar24 = FUN_03594e9c(uVar24,uVar28,0);
                  unaff_x25 = in_stack_00000038;
                }
                *in_stack_00000028 = uVar24;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000028)
                ;
                lVar13 = *plVar27;
                uVar24 = *in_stack_00000028;
                lVar31 = *unaff_x25;
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar13 = *plVar27;
                }
                uVar8 = FUN_03557fec(uVar24,lVar31,*(long *)(lVar13 + 0xb8),
                                     *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
                *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
                unaff_x25 = in_stack_00000038;
              }
            }
            if (*(long *)(lVar19 + 0x20) == 0) goto LAB_03566068;
            iVar11 = FUN_03776eb8(*(long *)(lVar19 + 0x20),0);
            if (0 < iVar11) {
              if (*(long *)(lVar19 + 0x20) == 0) goto LAB_03566068;
              lVar13 = *unaff_x25;
              uVar24 = *in_stack_00000028;
              uVar8 = FUN_03776eb8(*(long *)(lVar19 + 0x20),0);
              if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)OVRPlugin_Sizef_TypeInfo);
              }
              uVar24 = FUN_03594928(lVar13,uVar24,uVar8,0);
              *in_stack_00000028 = uVar24;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (in_stack_00000028,uVar24);
              lVar19 = *plVar27;
              uVar24 = *in_stack_00000028;
              lVar13 = *unaff_x25;
              if (*(int *)(lVar19 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar19 = *plVar27;
              }
              uVar8 = FUN_03557fec(uVar24,lVar13,*(long *)(lVar19 + 0xb8),
                                   *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 8));
              bVar4 = true;
              *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
              unaff_x25 = in_stack_00000038;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar17 = FUN_026b63d8(uVar9,0);
            unaff_x27 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
            if ((uVar9 != 0x200b) && ((uVar17 & 1) == 0)) {
              lVar19 = *plVar27;
              if (*(int *)(lVar19 + 0xe0) == 0) {
                thunk_FUN_01a58e78(lVar19);
                lVar19 = *plVar27;
              }
              lVar13 = **(long **)(lVar19 + 0xb8);
              if (lVar13 == 0) goto LAB_03566068;
              uVar9 = *(uint *)(unaff_x19 + 0x120);
              if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_035660f8;
              if (*(int *)(lVar13 + (long)(int)uVar9 * 0x38 + 0x54) < 0x3fff) {
                if (*(int *)(lVar19 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(lVar19);
                  lVar13 = **(long **)(*plVar27 + 0xb8);
                  if (lVar13 == 0) goto LAB_03566068;
                  uVar9 = *(uint *)(unaff_x19 + 0x120);
                }
              }
              else {
                uVar28 = *in_stack_00000028;
                uVar24 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
                FUN_0369922c(uVar24,uVar28,0);
                lVar19 = *plVar27;
                lVar13 = *unaff_x25;
                if (*(int *)(lVar19 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar19 = *plVar27;
                }
                uVar9 = FUN_03557fec(uVar24,lVar13,*(long *)(lVar19 + 0xb8),
                                     *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 8));
                *(uint *)(unaff_x19 + 0x120) = uVar9;
                lVar13 = **(long **)(*plVar27 + 0xb8);
                if (lVar13 == 0) goto LAB_03566068;
              }
              if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_035660f8;
              lVar13 = lVar13 + (long)(int)uVar9 * 0x38;
              *(int *)(lVar13 + 0x54) = *(int *)(lVar13 + 0x54) + 1;
            }
            if ((*unaff_x20 == 0) || (lVar19 = *(long *)(*unaff_x20 + 0x38), lVar19 == 0))
            goto LAB_03566068;
            if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
            *(undefined8 *)(lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x50) =
                 *in_stack_00000028;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            if ((*unaff_x20 == 0) || (lVar19 = *(long *)(*unaff_x20 + 0x38), lVar19 == 0))
            goto LAB_03566068;
            if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
            uVar9 = *(uint *)(unaff_x19 + 0x120);
            *(uint *)(lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x58) = uVar9;
            lVar19 = *plVar27;
            if (*(int *)(lVar19 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar19 = *plVar27;
              uVar9 = *(uint *)(unaff_x19 + 0x120);
            }
            lVar13 = **(long **)(lVar19 + 0xb8);
            if (lVar13 == 0) goto LAB_03566068;
            if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_035660f8;
            *(bool *)(lVar13 + (long)(int)uVar9 * 0x38 + 0x41) = bVar4;
            if (bVar4) {
              if (*(int *)(lVar19 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar13 = **(long **)(*plVar27 + 0xb8);
                if (lVar13 == 0) goto LAB_03566068;
                uVar9 = *(uint *)(unaff_x19 + 0x120);
              }
              if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_035660f8;
              puVar16 = (undefined8 *)(lVar13 + (long)(int)uVar9 * 0x38 + 0x48);
              *puVar16 = uVar26;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar16,uVar26);
              *(undefined8 *)(unaff_x19 + 0x100) = uVar21;
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
        uVar22 = uVar22 + 1;
      } while ((int)uVar22 < (int)uVar9);
    }
    if (*(char *)(unaff_x19 + 0x3f5) != '\0') {
      *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
LAB_03565748:
      return *(undefined4 *)(unaff_x19 + 0x490);
    }
    lVar19 = *unaff_x20;
    if (lVar19 != 0) {
      *(int *)(lVar19 + 0x1c) = iStack0000000000000024;
      lVar13 = *plVar27;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar13 = *plVar27;
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
      if (lVar13 != 0) {
        uVar9 = FUN_0219b384(lVar13,*(undefined8 *)PTR_DAT_03ceb270);
        *(uint *)(lVar19 + 0x34) = uVar9;
        if (*unaff_x20 != 0) {
          plVar23 = (long *)(*unaff_x20 + 0x60);
          lVar19 = *plVar23;
          if (lVar19 != 0) {
            uVar17 = (ulong)uVar9;
            if (*(int *)(lVar19 + 0x18) < (int)uVar9) {
              if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_01ff02b8(plVar23,uVar17,0,*(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo);
            }
            if (*(long *)(unaff_x19 + 0x708) != 0) {
              plVar23 = (long *)(unaff_x19 + 0x708);
              if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar9) {
                uVar10 = FUN_036c1d60(uVar9 + 1,0);
                if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*unaff_x27);
                }
                FUN_01ff025c(plVar23,uVar10,*(undefined8 *)OVRSystemPerfMetrics_PerfMetrics_TypeInfo
                            );
              }
              if (*(char *)(unaff_x19 + 0x321) != '\0') {
                if (*unaff_x20 == 0) goto LAB_03566068;
                plVar25 = (long *)(*unaff_x20 + 0x38);
                lVar19 = *plVar25;
                if (lVar19 == 0) goto LAB_03566068;
                iVar11 = *(int *)(unaff_x19 + 0x490);
                if (0x100 < *(int *)(lVar19 + 0x18) - iVar11) {
                  iVar12 = 0x100;
                  if (0x100 < iVar11 + 1) {
                    iVar12 = iVar11 + 1;
                  }
                  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  FUN_01ff02b8(plVar25,iVar12,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
                  plVar27 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                }
              }
              fVar5 = DAT_00d38798;
              if (0 < (int)uVar9) {
                lVar19 = 0;
                uVar29 = 0;
                lVar13 = 0x54;
                lVar31 = 0x20;
                do {
                  fVar35 = (float)param_2;
                  if (uVar29 != 0) {
                    lVar18 = *plVar23;
                    if (lVar18 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_035660f8;
                    uVar26 = *(undefined8 *)(lVar18 + uVar29 * 8 + 0x20);
                    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar14 = FUN_036d35a8(uVar26,0,0);
                    if ((uVar14 & 1) != 0) {
                      lVar18 = *plVar27;
                      plVar25 = (long *)*plVar23;
                      if (*(int *)(lVar18 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar18 = *plVar27;
                      }
                      lVar18 = **(long **)(lVar18 + 0xb8);
                      if (lVar18 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_035660f8;
                      lVar18 = lVar18 + lVar13;
                      in_stack_00000160 = *(undefined8 *)(lVar18 + -4);
                      in_stack_00000158 = *(undefined8 *)(lVar18 + -0xc);
                      in_stack_00000150 = *(undefined8 *)(lVar18 + -0x14);
                      in_stack_00000148 = *(undefined8 *)(lVar18 + -0x1c);
                      uVar26 = *(undefined8 *)(lVar18 + -0x24);
                      in_stack_00000138 = *(undefined8 *)(lVar18 + -0x2c);
                      in_stack_00000130 = *(undefined8 *)(lVar18 + -0x34);
                      in_stack_00000140 = uVar26;
                      lVar18 = FUN_0359e964();
                      fVar35 = (float)uVar26;
                      if (plVar25 == (long *)0x0) goto LAB_03566068;
                      if ((lVar18 != 0) &&
                         (lVar15 = thunk_FUN_01a89d6c(lVar18,*(undefined8 *)(*plVar25 + 0x40)),
                         lVar15 == 0)) {
LAB_035660fc:
                        uVar26 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6b14(uVar26,0);
                      }
                      if (*(uint *)(plVar25 + 3) <= uVar29) goto LAB_035660f8;
                      plVar25[uVar29 + 4] = lVar18;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                ((long)plVar25 + lVar31,lVar18);
                      plVar27 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                      if ((*unaff_x20 == 0) || (lVar18 = *(long *)(*unaff_x20 + 0x60), lVar18 == 0))
                      goto LAB_03566068;
                      if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_035660f8;
                      puVar16 = (undefined8 *)(lVar18 + lVar19 + 0x30);
                      *puVar16 = 0;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar16,0);
                    }
                    if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_03566068;
                    fVar32 = (float)FUN_036dba50(*(long *)(unaff_x19 + 0x380),0);
                    lVar18 = *plVar23;
                    if (lVar18 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_035660f8;
                    lVar18 = *(long *)(lVar18 + uVar29 * 8 + 0x20);
                    if ((lVar18 == 0) ||
                       (fVar34 = fVar35, lVar18 = FUN_037b4844(lVar18,0), lVar18 == 0))
                    goto LAB_03566068;
                    fVar33 = (float)FUN_036dba50(lVar18,0);
                    fVar35 = (fVar35 - fVar34) * (fVar35 - fVar34);
                    param_2 = (ulong)(uint)fVar35;
                    if (fVar5 <= (fVar32 - fVar33) * (fVar32 - fVar33) + fVar35) {
                      lVar18 = *plVar23;
                      if (lVar18 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_035660f8;
                      lVar18 = *(long *)(lVar18 + uVar29 * 8 + 0x20);
                      if (lVar18 == 0) goto LAB_03566068;
                      lVar18 = FUN_037b4844(lVar18,0);
                      if ((*(long *)(unaff_x19 + 0x380) == 0) ||
                         (FUN_036dba50(*(long *)(unaff_x19 + 0x380),0), lVar18 == 0))
                      goto LAB_03566068;
                      FUN_036dbae0(lVar18,0);
                    }
                    lVar18 = *plVar23;
                    if (lVar18 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_035660f8;
                    lVar18 = *(long *)(lVar18 + uVar29 * 8 + 0x20);
                    if (lVar18 == 0) goto LAB_03566068;
                    uVar26 = *(undefined8 *)(lVar18 + 0xf0);
                    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar14 = FUN_036d35a8(uVar26,0,0);
                    if ((uVar14 & 1) == 0) {
                      lVar18 = *plVar23;
                      if (lVar18 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_035660f8;
                      lVar18 = *(long *)(lVar18 + uVar29 * 8 + 0x20);
                      if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0xf0), lVar18 == 0))
                      goto LAB_03566068;
                      iVar11 = FUN_036d3364(lVar18,0);
                      lVar18 = *plVar27;
                      if (*(int *)(lVar18 + 0xe0) == 0) {
                        thunk_FUN_01a58e78(lVar18);
                        lVar18 = *plVar27;
                      }
                      lVar18 = **(long **)(lVar18 + 0xb8);
                      if (lVar18 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_035660f8;
                      lVar18 = *(long *)(lVar18 + lVar13 + -0x1c);
                      if (lVar18 == 0) goto LAB_03566068;
                      iVar12 = FUN_036d3364(lVar18,0);
                      if (iVar11 != iVar12) goto LAB_03565b98;
                    }
                    else {
LAB_03565b98:
                      lVar18 = *plVar23;
                      if (lVar18 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_035660f8;
                      lVar15 = *plVar27;
                      lVar18 = *(long *)(lVar18 + uVar29 * 8 + 0x20);
                      if (*(int *)(lVar15 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar15 = *plVar27;
                      }
                      lVar15 = **(long **)(lVar15 + 0xb8);
                      if (lVar15 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar15 + 0x18) <= uVar29) goto LAB_035660f8;
                      if (lVar18 == 0) goto LAB_03566068;
                      thunk_FUN_0359e5ac(lVar18,*(undefined8 *)(lVar15 + lVar13 + -0x1c),0);
                      lVar18 = *plVar23;
                      if (lVar18 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_035660f8;
                      lVar15 = **(long **)(*plVar27 + 0xb8);
                      if (lVar15 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar15 + 0x18) <= uVar29) goto LAB_035660f8;
                      lVar18 = *(long *)(lVar18 + uVar29 * 8 + 0x20);
                      if (lVar18 == 0) goto LAB_03566068;
                      *(undefined8 *)(lVar18 + 0xd8) = *(undefined8 *)(lVar15 + lVar13 + -0x2c);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                      lVar18 = *plVar23;
                      if (lVar18 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_035660f8;
                      lVar15 = **(long **)(*plVar27 + 0xb8);
                      if (lVar15 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar15 + 0x18) <= uVar29) goto LAB_035660f8;
                      lVar18 = *(long *)(lVar18 + uVar29 * 8 + 0x20);
                      if (lVar18 == 0) goto LAB_03566068;
                      *(undefined8 *)(lVar18 + 0xe0) = *(undefined8 *)(lVar15 + lVar13 + -0x24);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    }
                    lVar18 = *plVar27;
                    if (*(int *)(lVar18 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar18 = *plVar27;
                    }
                    lVar15 = **(long **)(lVar18 + 0xb8);
                    if (lVar15 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar15 + 0x18) <= uVar29) goto LAB_035660f8;
                    if (*(char *)(lVar15 + lVar13 + -0x13) != '\0') {
                      lVar20 = *plVar23;
                      if (lVar20 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar20 + 0x18) <= uVar29) goto LAB_035660f8;
                      lVar20 = *(long *)(lVar20 + uVar29 * 8 + 0x20);
                      if (*(int *)(lVar18 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar15 = **(long **)(*plVar27 + 0xb8);
                        if (lVar15 == 0) goto LAB_03566068;
                      }
                      if (*(uint *)(lVar15 + 0x18) <= uVar29) goto LAB_035660f8;
                      if (lVar20 == 0) goto LAB_03566068;
                      FUN_0359e608(lVar20,*(undefined8 *)(lVar15 + lVar13 + -0x1c),0);
                      lVar18 = *plVar23;
                      if (lVar18 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_035660f8;
                      lVar15 = **(long **)(*plVar27 + 0xb8);
                      if (lVar15 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar15 + 0x18) <= uVar29) goto LAB_035660f8;
                      lVar18 = *(long *)(lVar18 + uVar29 * 8 + 0x20);
                      if (lVar18 == 0) goto LAB_03566068;
                      *(undefined8 *)(lVar18 + 0x100) = *(undefined8 *)(lVar15 + lVar13 + -0xc);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (lVar18 + 0x100);
                    }
                  }
                  lVar18 = *plVar27;
                  if (*(int *)(lVar18 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar18 = *plVar27;
                  }
                  lVar18 = **(long **)(lVar18 + 0xb8);
                  if (lVar18 == 0) goto LAB_03566068;
                  if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_035660f8;
                  if ((*unaff_x20 == 0) || (lVar15 = *(long *)(*unaff_x20 + 0x60), lVar15 == 0))
                  goto LAB_03566068;
                  if (*(uint *)(lVar15 + 0x18) <= uVar29) goto LAB_035660f8;
                  lVar20 = *(long *)(lVar15 + lVar19 + 0x30);
                  iVar11 = *(int *)(lVar18 + lVar13);
                  if (lVar20 == 0) {
                    if (uVar29 == 0) {
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
                      FUN_03595600(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar11 + 1,0)
                      ;
                      memcpy(&stack0x00000090,&stack0x000000e0,0x50);
                      if (*(int *)(lVar15 + 0x18) == 0) goto LAB_035660f8;
                      memcpy((void *)(lVar15 + lVar19 + 0x20),&stack0x00000090,0x50);
                      __dest = (void *)(lVar15 + 0x20);
                    }
                    else {
                      lVar18 = *plVar23;
                      if (lVar18 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_035660f8;
                      lVar18 = *(long *)(lVar18 + uVar29 * 8 + 0x20);
                      if (lVar18 == 0) goto LAB_03566068;
                      uVar26 = UnityEngine_Material__GetColorArray(lVar18,0);
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
                      if (*(uint *)(lVar15 + 0x18) <= uVar29) goto LAB_035660f8;
                      __dest = (void *)(lVar15 + lVar19 + 0x20);
                      memcpy(__dest,&stack0x00000040,0x50);
                    }
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(__dest,0);
                  }
                  else {
                    iVar12 = *(int *)(lVar20 + 0x18);
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
                      FUN_03595b9c(lVar15 + lVar19 + 0x20,iVar11,0);
                    }
                    else if ((0 < iVar11) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
                      iVar1 = iVar12 + 3;
                      if (-1 < iVar12) {
                        iVar1 = iVar12;
                      }
                      if (0x100 < (iVar1 >> 2) - iVar11) goto LAB_03565e08;
                    }
                  }
                  plVar27 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if ((*unaff_x20 == 0) || (lVar18 = *(long *)(*unaff_x20 + 0x60), lVar18 == 0))
                  goto LAB_03566068;
                  lVar15 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar15 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar15 = *plVar27;
                  }
                  lVar15 = **(long **)(lVar15 + 0xb8);
                  if (lVar15 == 0) goto LAB_03566068;
                  if ((*(uint *)(lVar15 + 0x18) <= uVar29) || (*(uint *)(lVar18 + 0x18) <= uVar29))
                  goto LAB_035660f8;
                  *(undefined8 *)(lVar18 + lVar19 + 0x68) = *(undefined8 *)(lVar15 + lVar13 + -0x1c)
                  ;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  uVar29 = uVar29 + 1;
                  lVar19 = lVar19 + 0x50;
                  lVar13 = lVar13 + 0x38;
                  lVar31 = lVar31 + 8;
                } while (uVar9 != uVar29);
              }
              lVar19 = *plVar23;
              if (lVar19 != 0) {
                lVar13 = (-(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar17 << 3) + 0x20;
                do {
                  uVar9 = (uint)uVar17;
                  if ((int)*(uint *)(lVar19 + 0x18) <= (int)uVar9) goto LAB_03565748;
                  if (*(uint *)(lVar19 + 0x18) <= uVar9) {
LAB_035660f8:
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c44();
                  }
                  uVar26 = *(undefined8 *)(lVar19 + lVar13);
                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar17 = FUN_036cee6c(uVar26,0,0);
                  if ((uVar17 & 1) == 0) goto LAB_03565748;
                  if ((*unaff_x20 == 0) || (lVar19 = *(long *)(*unaff_x20 + 0x60), lVar19 == 0))
                  break;
                  if ((int)uVar9 < *(int *)(lVar19 + 0x18)) {
                    lVar19 = *plVar23;
                    if (lVar19 == 0) break;
                    if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_035660f8;
                    if ((*(long *)(lVar19 + lVar13) == 0) ||
                       (lVar19 = FUN_037b514c(*(long *)(lVar19 + lVar13),0), lVar19 == 0)) break;
                    FUN_0390f3a4(lVar19,0,0);
                  }
                  lVar19 = *plVar23;
                  uVar17 = (ulong)(uVar9 + 1);
                  lVar13 = lVar13 + 8;
                } while (lVar19 != 0);
              }
            }
          }
        }
      }
    }
  }
LAB_03566068:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


