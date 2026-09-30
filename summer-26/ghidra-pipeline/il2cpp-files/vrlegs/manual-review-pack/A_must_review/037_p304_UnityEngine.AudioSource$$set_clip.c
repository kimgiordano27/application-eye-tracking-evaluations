/*
FUNCTION_NAME: UnityEngine.AudioSource$$set_clip
ENTRY_POINT: 03564420
PROGRAM: vrlegs-libil2cpp.so
SCORE: 224
LABEL: confirmed_gaze_interaction_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


undefined4
UnityEngine_AudioSource__set_clip
          (undefined8 *param_1,undefined1 param_2 [16],ulong param_3,undefined8 param_4)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  bool bVar5;
  float fVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  void *__dest;
  long lVar17;
  long lVar18;
  long lVar19;
  long *unaff_x19;
  long unaff_x21;
  uint uVar20;
  long *unaff_x22;
  long *plVar21;
  long *unaff_x23;
  long lVar22;
  long *plVar23;
  undefined8 uVar24;
  long *plVar25;
  long lVar26;
  long *unaff_x25;
  long lVar27;
  ulong uVar28;
  long unaff_x27;
  long *plVar29;
  uint *puVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  int iStack0000000000000024;
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
  
  plVar29 = *(long **)(unaff_x27 + 0x7c8);
  FUN_0219c0c4(param_4,*param_1);
  FUN_03557fec(unaff_x19[0x23],unaff_x19[0x20],*(long *)(*unaff_x22 + 0xb8),
               *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8));
  plVar1 = unaff_x19 + 0x6d;
  if (unaff_x19[0x6d] == 0) {
    lVar17 = unaff_x19[0x90];
    lVar22 = thunk_FUN_01a89e68(*plVar29);
    FUN_0359fc54(lVar22,(int)lVar17,0);
    unaff_x19[0x6d] = lVar22;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,lVar22);
  }
  else {
    plVar25 = (long *)(unaff_x19[0x6d] + 0x38);
    lVar17 = *plVar25;
    if (lVar17 == 0) goto LAB_03566068;
    lVar22 = unaff_x19[0x90];
    if (*(int *)(lVar17 + 0x18) < (int)lVar22) {
      if (*(int *)(*plVar29 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff02b8(plVar25,(int)lVar22,0,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
    }
  }
  iVar8 = (int)unaff_x19[0x5c];
  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
  if (iVar8 == 1) {
    FUN_03591508();
    plVar25 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (unaff_x19[0xca] == 0) {
      *(undefined4 *)(unaff_x19 + 0x5c) = 3;
      uVar13 = FUN_03597634(0);
      if ((uVar13 & 1) == 0) {
        if (*unaff_x23 == 0) goto LAB_03566068;
        uVar24 = FUN_036d3824(*unaff_x23,0);
        uVar24 = FUN_025bdc88(*(undefined8 *)OVRPlugin_TrackedKeyboardQueryFlags_TypeInfo,uVar24,
                              *(undefined8 *)OVRPlugin_TrackingConfidence_TypeInfo,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_0367b470(uVar24);
      }
    }
    else {
      if (unaff_x19[0xcb] == 0) goto LAB_03566068;
      iVar8 = FUN_036d3364(unaff_x19[0xcb],0);
      if (*unaff_x23 == 0) goto LAB_03566068;
      iVar9 = FUN_036d3364(*unaff_x23,0);
      if (iVar8 != iVar9) {
        uVar13 = FUN_0359778c(0);
        if ((uVar13 & 1) == 0) {
LAB_03564574:
          if (unaff_x19[0xcb] == 0) goto LAB_03566068;
          unaff_x19[0xcc] = *(long *)(unaff_x19[0xcb] + 0x20);
        }
        else {
          if (*unaff_x25 == 0) goto LAB_03566068;
          iVar8 = FUN_036d3364(*unaff_x25,0);
          if ((unaff_x19[0xcb] == 0) || (lVar17 = *(long *)(unaff_x19[0xcb] + 0x20), lVar17 == 0))
          goto LAB_03566068;
          iVar9 = FUN_036d3364(lVar17,0);
          if (iVar8 == iVar9) goto LAB_03564574;
          if (unaff_x19[0xcb] == 0) goto LAB_03566068;
          lVar17 = unaff_x19[0x23];
          uVar24 = *(undefined8 *)(unaff_x19[0xcb] + 0x20);
          if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          lVar17 = FUN_03594e9c(lVar17,uVar24,0);
          unaff_x19[0xcc] = lVar17;
          plVar25 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0xcc);
        lVar17 = *plVar25;
        lVar22 = unaff_x19[0xcc];
        lVar26 = unaff_x19[0xcb];
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar17 = *plVar25;
        }
        uVar10 = FUN_03557fec(lVar22,lVar26,*(long *)(lVar17 + 0xb8),
                              *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 8));
        *(uint *)(unaff_x19 + 0xcd) = uVar10;
        lVar17 = **(long **)(*plVar25 + 0xb8);
        if (lVar17 == 0) goto LAB_03566068;
        if (*(uint *)(lVar17 + 0x18) <= uVar10) {
LAB_035660f8:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        *(undefined4 *)(lVar17 + (long)(int)uVar10 * 0x38 + 0x54) = 0;
      }
    }
    iVar8 = (int)unaff_x19[0x5c];
  }
  if (iVar8 == 6) {
    lVar17 = unaff_x19[0x5d];
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar13 = FUN_036cee6c(lVar17,0,0);
    puVar7 = PTR_DAT_03cbebc0;
    if (((uVar13 & 1) != 0) && (plVar25 = unaff_x19, *(char *)((long)unaff_x19 + 0x3f5) == '\0')) {
      while( true ) {
        plVar25 = (long *)plVar25[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_036cee6c(plVar25,0,0);
        if ((uVar13 & 1) == 0) goto LAB_035646fc;
        if (plVar25 == (long *)0x0) break;
        (**(code **)(*plVar25 + 0x528))
                  (plVar25,**(undefined8 **)(*(long *)puVar7 + 0xb8),
                   *(undefined8 *)(*plVar25 + 0x530));
        (**(code **)(*plVar25 + 0x918))(plVar25,*(undefined8 *)(*plVar25 + 0x920));
        if (plVar25[0x6d] == 0) break;
        FUN_0359ff94(plVar25[0x6d],0);
      }
      goto LAB_03566068;
    }
  }
LAB_035646fc:
  if (unaff_x21 != 0) {
    uVar10 = *(uint *)(unaff_x21 + 0x18);
    plVar25 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if ((int)uVar10 < 1) {
      iStack0000000000000024 = 0;
    }
    else {
      uVar20 = 0;
      iStack0000000000000024 = 0;
      do {
        if (uVar10 <= uVar20) goto LAB_035660f8;
        puVar30 = (uint *)(unaff_x21 + (long)(int)uVar20 * 0xc + 0x20);
        if (*puVar30 == 0) break;
        if (*plVar1 == 0) goto LAB_03566068;
        plVar25 = (long *)(*plVar1 + 0x38);
        lVar22 = *plVar25;
        lVar17 = unaff_x19[0x92];
        if ((lVar22 == 0) || (*(int *)(lVar22 + 0x18) <= (int)lVar17)) {
          if (*(int *)(*plVar29 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff02b8(plVar25,(int)lVar17 + 1,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
          uVar10 = *(uint *)(unaff_x21 + 0x18);
        }
        if (uVar10 <= uVar20) goto LAB_035660f8;
        uVar10 = *puVar30;
        if ((uVar10 == 0x3c) && (*(char *)((long)unaff_x19 + 0x302) != '\0')) {
          lVar17 = unaff_x19[0x24];
          uVar13 = FUN_03586568();
          uVar11 = uStack00000000000001b8;
          if ((uVar13 & 1) == 0) goto LAB_035649d0;
          if (*(uint *)(unaff_x21 + 0x18) <= uVar20) goto LAB_035660f8;
          iVar8 = *(int *)(unaff_x21 + (long)(int)uVar20 * 0xc + 0x24);
          if ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0) {
            *(undefined1 *)((long)unaff_x19 + 0x26a) = 1;
          }
          puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          plVar25 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          uVar20 = uStack00000000000001b8;
          if (*(int *)((long)unaff_x19 + 0x644) == 1) {
            lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar22 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar22 = *(long *)puVar7;
            }
            lVar22 = **(long **)(lVar22 + 0xb8);
            if (lVar22 != 0) {
              if (*(uint *)(unaff_x19 + 0x24) < *(uint *)(lVar22 + 0x18)) {
                lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x24) * 0x38;
                *(int *)(lVar22 + 0x54) = *(int *)(lVar22 + 0x54) + 1;
                if ((*plVar1 != 0) && (lVar22 = *(long *)(*plVar1 + 0x38), lVar22 != 0)) {
                  if (*(uint *)(unaff_x19 + 0x92) < *(uint *)(lVar22 + 0x18)) {
                    uVar12 = *(undefined4 *)((long)unaff_x19 + 0x6a4);
                    lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x92) * 0x178;
                    *(short *)(lVar22 + 0x20) = (short)uVar12 + -0x2000;
                    *(undefined4 *)(lVar22 + 0x48) = uVar12;
                    *(long *)(lVar22 + 0x38) = *unaff_x23;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    if ((*plVar1 != 0) && (lVar22 = *(long *)(*plVar1 + 0x38), lVar22 != 0)) {
                      if (*(uint *)(unaff_x19 + 0x92) < *(uint *)(lVar22 + 0x18)) {
                        *(long *)(lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x92) * 0x178 + 0x40) =
                             unaff_x19[0xd3];
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                        if ((*plVar1 != 0) && (lVar22 = *(long *)(*plVar1 + 0x38), lVar22 != 0)) {
                          uVar10 = *(uint *)(unaff_x19 + 0x92);
                          if (uVar10 < *(uint *)(lVar22 + 0x18)) {
                            *(int *)(lVar22 + (long)(int)uVar10 * 0x178 + 0x58) =
                                 (int)unaff_x19[0x24];
                            if ((unaff_x19[0xd3] != 0) &&
                               (lVar26 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0),
                               lVar26 != 0)) {
                              FUN_02215a88(lVar26,*(undefined4 *)((long)unaff_x19 + 0x6a4),
                                           &stack0x000000e0,
                                           *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
                              if (uVar10 < *(uint *)(lVar22 + 0x18)) {
                                *(undefined8 *)(lVar22 + (long)(int)uVar10 * 0x178 + 0x30) =
                                     in_stack_000000e0;
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                                if ((*plVar1 != 0) &&
                                   (lVar22 = *(long *)(*plVar1 + 0x38), lVar22 != 0)) {
                                  uVar10 = *(uint *)(unaff_x19 + 0x92);
                                  if (uVar10 < *(uint *)(lVar22 + 0x18)) {
                                    uVar12 = *(undefined4 *)((long)unaff_x19 + 0x644);
                                    lVar26 = lVar22 + (long)(int)uVar10 * 0x178;
                                    *(int *)(lVar26 + 0x24) = iVar8;
                                    *(undefined4 *)(lVar26 + 0x2c) = uVar12;
                                    if (uVar11 < *(uint *)(unaff_x21 + 0x18)) {
                                      *(int *)(lVar22 + (long)(int)uVar10 * 0x178 + 0x28) =
                                           (*(int *)(unaff_x21 + (long)(int)uVar11 * 0xc + 0x24) -
                                           iVar8) + 1;
                                      *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
                                      *(int *)(unaff_x19 + 0x24) = (int)lVar17;
                                      iStack0000000000000024 = iStack0000000000000024 + 1;
                                      plVar25 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      uVar20 = uVar11;
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
          lVar26 = unaff_x19[0x20];
          lVar22 = unaff_x19[0x23];
          lVar17 = unaff_x19[0x24];
          if (*(int *)((long)unaff_x19 + 0x644) != 0) goto LAB_03564aac;
          uVar11 = *(uint *)((long)unaff_x19 + 0x25c);
          if ((uVar11 >> 4 & 1) == 0) {
            if ((uVar11 >> 3 & 1) == 0) {
              if ((uVar11 >> 5 & 1) != 0) goto LAB_03564a00;
            }
            else {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar13 = FUN_026b8070(uVar10,0);
              if ((uVar13 & 1) != 0) {
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
            uVar13 = FUN_026b812c(uVar10,0);
            if ((uVar13 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar10 = FUN_026b8410(uVar10,0);
LAB_03564aa8:
              uVar10 = uVar10 & 0xffff;
            }
          }
LAB_03564aac:
          lVar18 = FUN_03591848();
          if (lVar18 == 0) {
            iVar8 = FUN_035975f8();
            if (*(uint *)(unaff_x21 + 0x18) <= uVar20) goto LAB_035660f8;
            if (iVar8 == 0) {
              uVar11 = 0x25a1;
            }
            else {
              uVar11 = FUN_035975f8(0);
            }
            *puVar30 = uVar11;
            lVar18 = unaff_x19[0x20];
            uVar12 = *(undefined4 *)((long)unaff_x19 + 0x25c);
            uVar3 = *(undefined4 *)((long)unaff_x19 + 0x214);
            if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            lVar18 = FUN_03570fc4(uVar11,lVar18,1,uVar12,uVar3,(long)&stack0x000001b8 + 4,0);
            if (lVar18 == 0) {
              lVar18 = FUN_03597770();
              if (lVar18 != 0) {
                lVar18 = FUN_03597770(0);
                if (lVar18 == 0) goto LAB_03566068;
                if (0 < *(int *)(lVar18 + 0x18)) {
                  lVar18 = unaff_x19[0x20];
                  uVar24 = FUN_03597770(0);
                  uVar12 = *(undefined4 *)((long)unaff_x19 + 0x25c);
                  uVar3 = *(undefined4 *)((long)unaff_x19 + 0x214);
                  if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                  }
                  lVar18 = FUN_035714e4(uVar11,lVar18,uVar24,1,uVar12,uVar3,
                                        (long)&stack0x000001b8 + 4,0);
                  if (lVar18 != 0) goto LAB_03564b5c;
                }
              }
              uVar24 = FUN_03597650(0);
              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
              }
              uVar13 = FUN_036cee6c(uVar24,0,0);
              if ((uVar13 & 1) != 0) {
                uVar24 = FUN_03597650(0);
                uVar12 = *(undefined4 *)((long)unaff_x19 + 0x25c);
                uVar3 = *(undefined4 *)((long)unaff_x19 + 0x214);
                if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                }
                lVar18 = FUN_03570fc4(uVar11,uVar24,1,uVar12,uVar3,(long)&stack0x000001b8 + 4,0);
                if (lVar18 != 0) goto LAB_03564b5c;
              }
              if (*(uint *)(unaff_x21 + 0x18) <= uVar20) goto LAB_035660f8;
              *puVar30 = 0x20;
              lVar18 = unaff_x19[0x20];
              uVar12 = *(undefined4 *)((long)unaff_x19 + 0x25c);
              uVar3 = *(undefined4 *)((long)unaff_x19 + 0x214);
              if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar11 = 0x20;
              lVar18 = FUN_03570fc4(0x20,lVar18,1,uVar12,uVar3,(long)&stack0x000001b8 + 4,0);
              if (lVar18 == 0) {
                if (*(uint *)(unaff_x21 + 0x18) <= uVar20) goto LAB_035660f8;
                *puVar30 = 3;
                lVar18 = unaff_x19[0x20];
                uVar12 = *(undefined4 *)((long)unaff_x19 + 0x25c);
                uVar3 = *(undefined4 *)((long)unaff_x19 + 0x214);
                if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar11 = 3;
                lVar18 = FUN_03570fc4(3,lVar18,1,uVar12,uVar3,(long)&stack0x000001b8 + 4,0);
              }
            }
LAB_03564b5c:
            uVar13 = FUN_03597634(0);
            if ((uVar13 & 1) == 0) {
              plVar29 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,4);
              if ((int)uVar10 < 0x10000) {
                in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar10);
                lVar15 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
                if (plVar29 == (long *)0x0) goto LAB_03566068;
                if ((lVar15 != 0) &&
                   (lVar19 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar29 + 0x40)),
                   lVar19 == 0)) goto LAB_035660fc;
                if ((int)plVar29[3] == 0) goto LAB_035660f8;
                plVar29[4] = lVar15;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar29 + 4,lVar15);
                if (unaff_x19[0x1f] == 0) goto LAB_03566068;
                lVar15 = FUN_036d3824(unaff_x19[0x1f],0);
                if ((lVar15 != 0) &&
                   (lVar19 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar29 + 0x40)),
                   lVar19 == 0)) goto LAB_035660fc;
                if (*(uint *)(plVar29 + 3) < 2) goto LAB_035660f8;
                plVar29[5] = lVar15;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar29 + 5,lVar15);
                if (lVar18 == 0) goto LAB_03566068;
                in_stack_00000168._4_4_ = *(undefined4 *)(lVar18 + 0x14);
                lVar15 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,
                                            (long)&stack0x00000168 + 4);
                if ((lVar15 != 0) &&
                   (lVar19 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar29 + 0x40)),
                   lVar19 == 0)) goto LAB_035660fc;
                if (*(uint *)(plVar29 + 3) < 3) goto LAB_035660f8;
                plVar29[6] = lVar15;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar29 + 6,lVar15);
                lVar15 = FUN_036d3824();
                if ((lVar15 != 0) &&
                   (lVar19 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar29 + 0x40)),
                   lVar19 == 0)) goto LAB_035660fc;
                if (*(uint *)(plVar29 + 3) < 4) goto LAB_035660f8;
                plVar29[7] = lVar15;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar29 + 7,lVar15);
                puVar16 = (undefined8 *)OVRPlugin_TrackedKeyboardFlags_TypeInfo;
              }
              else {
                in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar10);
                lVar15 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
                if (plVar29 == (long *)0x0) goto LAB_03566068;
                if ((lVar15 != 0) &&
                   (lVar19 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar29 + 0x40)),
                   lVar19 == 0)) goto LAB_035660fc;
                if ((int)plVar29[3] == 0) goto LAB_035660f8;
                plVar29[4] = lVar15;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar29 + 4,lVar15);
                if (unaff_x19[0x1f] == 0) goto LAB_03566068;
                lVar15 = FUN_036d3824(unaff_x19[0x1f],0);
                if ((lVar15 != 0) &&
                   (lVar19 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar29 + 0x40)),
                   lVar19 == 0)) goto LAB_035660fc;
                if (*(uint *)(plVar29 + 3) < 2) goto LAB_035660f8;
                plVar29[5] = lVar15;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar29 + 5,lVar15);
                if (lVar18 == 0) goto LAB_03566068;
                in_stack_00000168._4_4_ = *(undefined4 *)(lVar18 + 0x14);
                lVar15 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,
                                            (long)&stack0x00000168 + 4);
                if ((lVar15 != 0) &&
                   (lVar19 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar29 + 0x40)),
                   lVar19 == 0)) goto LAB_035660fc;
                if (*(uint *)(plVar29 + 3) < 3) goto LAB_035660f8;
                plVar29[6] = lVar15;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar29 + 6,lVar15);
                lVar15 = FUN_036d3824();
                if ((lVar15 != 0) &&
                   (lVar19 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar29 + 0x40)),
                   lVar19 == 0)) goto LAB_035660fc;
                if (*(uint *)(plVar29 + 3) < 4) goto LAB_035660f8;
                plVar29[7] = lVar15;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar29 + 7,lVar15);
                puVar16 = (undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo;
              }
              uVar24 = FUN_025be8f4(*puVar16,plVar29,0);
              if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_0367b470(uVar24);
              uVar10 = uVar11;
            }
            else {
              uVar10 = uVar11;
              if (lVar18 == 0) goto LAB_03566068;
            }
          }
          if (*(char *)(lVar18 + 0x10) == '\x01') {
            lVar15 = *(long *)(lVar18 + 0x18);
            if (lVar15 == 0) goto LAB_03566068;
            iVar8 = *(int *)(lVar15 + 0x18);
            if (iVar8 == 0) {
              iVar8 = FUN_036d3364(lVar15,0);
              *(int *)(lVar15 + 0x18) = iVar8;
            }
            lVar15 = *unaff_x23;
            if (lVar15 == 0) goto LAB_03566068;
            iVar9 = *(int *)(lVar15 + 0x18);
            if (iVar9 == 0) {
              iVar9 = FUN_036d3364(lVar15,0);
              *(int *)(lVar15 + 0x18) = iVar9;
            }
            if (iVar8 == iVar9) {
              bVar5 = false;
            }
            else {
              plVar29 = *(long **)(lVar18 + 0x18);
              if (plVar29 == (long *)0x0) {
                plVar29 = (long *)0x0;
                *unaff_x23 = 0;
              }
              else {
                lVar15 = *(long *)OVRPlugin_OVRP_1_83_0_TypeInfo;
                bVar4 = *(byte *)(lVar15 + 0x130);
                if (*(byte *)(*plVar29 + 0x130) < bVar4) {
                  plVar25 = (long *)0x0;
                }
                else {
                  plVar25 = plVar29;
                  if (*(long *)(*(long *)(*plVar29 + 200) + (ulong)bVar4 * 8 + -8) != lVar15) {
                    plVar25 = (long *)0x0;
                  }
                }
                *unaff_x23 = (long)plVar25;
                if (*(byte *)(*plVar29 + 0x130) < bVar4) {
                  plVar29 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar29 + 200) + (ulong)bVar4 * 8 + -8) != lVar15) {
                  plVar29 = (long *)0x0;
                }
              }
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x23,plVar29);
              bVar5 = true;
            }
          }
          else {
            bVar5 = false;
          }
          if ((*plVar1 == 0) || (lVar15 = *(long *)(*plVar1 + 0x38), lVar15 == 0))
          goto LAB_03566068;
          if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x92)) goto LAB_035660f8;
          lVar15 = lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x92) * 0x178;
          plVar29 = (long *)(lVar15 + 0x30);
          *plVar29 = lVar18;
          *(undefined4 *)(lVar15 + 0x2c) = 0;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar29,lVar18);
          if ((*plVar1 == 0) || (lVar15 = *(long *)(*plVar1 + 0x38), lVar15 == 0))
          goto LAB_03566068;
          uVar11 = *(uint *)(unaff_x19 + 0x92);
          if (*(uint *)(lVar15 + 0x18) <= uVar11) goto LAB_035660f8;
          lVar19 = lVar15 + (long)(int)uVar11 * 0x178;
          *(short *)(lVar19 + 0x20) = (short)uVar10;
          *(undefined1 *)(lVar19 + 0x5c) = uStack00000000000001bc;
          if (*(uint *)(unaff_x21 + 0x18) <= uVar20) goto LAB_035660f8;
          lVar15 = lVar15 + (long)(int)uVar11 * 0x178;
          *(undefined8 *)(lVar15 + 0x24) =
               *(undefined8 *)(unaff_x21 + (long)(int)uVar20 * 0xc + 0x24);
          *(long *)(lVar15 + 0x38) = *unaff_x23;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          plVar25 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(char *)(lVar18 + 0x10) == '\x02') {
            plVar29 = *(long **)(lVar18 + 0x18);
            if (plVar29 == (long *)0x0) goto LAB_03566068;
            bVar4 = *(byte *)(*(long *)OVRPlugin_Sizei_TypeInfo + 0x130);
            if ((*(byte *)(*plVar29 + 0x130) < bVar4) ||
               (*(long *)(*(long *)(*plVar29 + 200) + (ulong)bVar4 * 8 + -8) !=
                *(long *)OVRPlugin_Sizei_TypeInfo)) goto LAB_03566068;
            lVar26 = plVar29[4];
            lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar22 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar22 = *plVar25;
            }
            uVar10 = FUN_03558224(lVar26,plVar29,*(long *)(lVar22 + 0xb8),
                                  *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 8));
            *(uint *)(unaff_x19 + 0x24) = uVar10;
            lVar22 = **(long **)(*plVar25 + 0xb8);
            if (lVar22 == 0) goto LAB_03566068;
            if (*(uint *)(lVar22 + 0x18) <= uVar10) goto LAB_035660f8;
            lVar22 = lVar22 + (long)(int)uVar10 * 0x38;
            *(int *)(lVar22 + 0x54) = *(int *)(lVar22 + 0x54) + 1;
            if ((*plVar1 == 0) || (lVar22 = *(long *)(*plVar1 + 0x38), lVar22 == 0))
            goto LAB_03566068;
            if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x92)) goto LAB_035660f8;
            lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x92) * 0x178;
            *(undefined4 *)(lVar22 + 0x2c) = 1;
            lVar26 = unaff_x19[0x24];
            *(undefined8 *)(lVar22 + 0x40) = plVar29;
            *(int *)(lVar22 + 0x58) = (int)lVar26;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((undefined8 *)(lVar22 + 0x40),plVar29);
            plVar25 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
            goto LAB_03566068;
            uVar10 = *(uint *)(unaff_x19 + 0x92);
            if (*(uint *)(lVar22 + 0x18) <= uVar10) goto LAB_035660f8;
            *(undefined4 *)(lVar22 + (long)(int)uVar10 * 0x178 + 0x48) =
                 *(undefined4 *)(lVar18 + 0x28);
            *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
            *(int *)(unaff_x19 + 0x24) = (int)lVar17;
            iStack0000000000000024 = iStack0000000000000024 + 1;
            plVar29 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
          }
          else {
            if (bVar5) {
              lVar15 = *unaff_x23;
              if (lVar15 == 0) goto LAB_03566068;
              iVar8 = *(int *)(lVar15 + 0x18);
              if (iVar8 == 0) {
                iVar8 = FUN_036d3364(lVar15,0);
                *(int *)(lVar15 + 0x18) = iVar8;
              }
              lVar15 = unaff_x19[0x1f];
              if (lVar15 == 0) goto LAB_03566068;
              iVar9 = *(int *)(lVar15 + 0x18);
              if (iVar9 == 0) {
                iVar9 = FUN_036d3364(lVar15,0);
                *(int *)(lVar15 + 0x18) = iVar9;
              }
              if (iVar8 != iVar9) {
                uVar13 = FUN_0359778c(0);
                if ((uVar13 & 1) == 0) {
                  if (*unaff_x23 == 0) goto LAB_03566068;
                  lVar15 = *(long *)(*unaff_x23 + 0x20);
                }
                else {
                  if (*unaff_x23 == 0) goto LAB_03566068;
                  uVar24 = *(undefined8 *)(*unaff_x23 + 0x20);
                  lVar15 = *unaff_x25;
                  if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  lVar15 = FUN_03594e9c(lVar15,uVar24,0);
                }
                *unaff_x25 = lVar15;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25);
                lVar15 = *plVar25;
                lVar19 = *unaff_x25;
                lVar27 = *unaff_x23;
                if (*(int *)(lVar15 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar15 = *plVar25;
                }
                uVar12 = FUN_03557fec(lVar19,lVar27,*(long *)(lVar15 + 0xb8),
                                      *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8));
                *(undefined4 *)(unaff_x19 + 0x24) = uVar12;
              }
            }
            if (*(long *)(lVar18 + 0x20) == 0) goto LAB_03566068;
            iVar8 = FUN_03776eb8(*(long *)(lVar18 + 0x20),0);
            if (0 < iVar8) {
              if (*(long *)(lVar18 + 0x20) == 0) goto LAB_03566068;
              lVar15 = *unaff_x23;
              lVar19 = *unaff_x25;
              uVar12 = FUN_03776eb8(*(long *)(lVar18 + 0x20),0);
              if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)OVRPlugin_Sizef_TypeInfo);
              }
              lVar18 = FUN_03594928(lVar15,lVar19,uVar12,0);
              *unaff_x25 = lVar18;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25,lVar18);
              lVar18 = *plVar25;
              lVar15 = *unaff_x25;
              lVar19 = *unaff_x23;
              if (*(int *)(lVar18 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar18 = *plVar25;
              }
              uVar12 = FUN_03557fec(lVar15,lVar19,*(long *)(lVar18 + 0xb8),
                                    *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 8));
              bVar5 = true;
              *(undefined4 *)(unaff_x19 + 0x24) = uVar12;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar13 = FUN_026b63d8(uVar10,0);
            plVar29 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
            if ((uVar10 != 0x200b) && ((uVar13 & 1) == 0)) {
              lVar18 = *plVar25;
              if (*(int *)(lVar18 + 0xe0) == 0) {
                thunk_FUN_01a58e78(lVar18);
                lVar18 = *plVar25;
              }
              lVar15 = **(long **)(lVar18 + 0xb8);
              if (lVar15 == 0) goto LAB_03566068;
              uVar10 = *(uint *)(unaff_x19 + 0x24);
              if (*(uint *)(lVar15 + 0x18) <= uVar10) goto LAB_035660f8;
              if (*(int *)(lVar15 + (long)(int)uVar10 * 0x38 + 0x54) < 0x3fff) {
                if (*(int *)(lVar18 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(lVar18);
                  lVar15 = **(long **)(*plVar25 + 0xb8);
                  if (lVar15 == 0) goto LAB_03566068;
                  uVar10 = *(uint *)(unaff_x19 + 0x24);
                }
              }
              else {
                lVar18 = *unaff_x25;
                uVar24 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
                FUN_0369922c(uVar24,lVar18,0);
                lVar18 = *plVar25;
                lVar15 = *unaff_x23;
                if (*(int *)(lVar18 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar18 = *plVar25;
                }
                uVar10 = FUN_03557fec(uVar24,lVar15,*(long *)(lVar18 + 0xb8),
                                      *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 8));
                *(uint *)(unaff_x19 + 0x24) = uVar10;
                lVar15 = **(long **)(*plVar25 + 0xb8);
                if (lVar15 == 0) goto LAB_03566068;
              }
              if (*(uint *)(lVar15 + 0x18) <= uVar10) goto LAB_035660f8;
              lVar15 = lVar15 + (long)(int)uVar10 * 0x38;
              *(int *)(lVar15 + 0x54) = *(int *)(lVar15 + 0x54) + 1;
            }
            if ((*plVar1 == 0) || (lVar18 = *(long *)(*plVar1 + 0x38), lVar18 == 0))
            goto LAB_03566068;
            if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x92)) goto LAB_035660f8;
            *(long *)(lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x92) * 0x178 + 0x50) = *unaff_x25;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            if ((*plVar1 == 0) || (lVar18 = *(long *)(*plVar1 + 0x38), lVar18 == 0))
            goto LAB_03566068;
            if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x92)) goto LAB_035660f8;
            uVar10 = *(uint *)(unaff_x19 + 0x24);
            *(uint *)(lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x92) * 0x178 + 0x58) = uVar10;
            lVar18 = *plVar25;
            if (*(int *)(lVar18 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar18 = *plVar25;
              uVar10 = *(uint *)(unaff_x19 + 0x24);
            }
            lVar15 = **(long **)(lVar18 + 0xb8);
            if (lVar15 == 0) goto LAB_03566068;
            if (*(uint *)(lVar15 + 0x18) <= uVar10) goto LAB_035660f8;
            *(bool *)(lVar15 + (long)(int)uVar10 * 0x38 + 0x41) = bVar5;
            if (bVar5) {
              if (*(int *)(lVar18 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar15 = **(long **)(*plVar25 + 0xb8);
                if (lVar15 == 0) goto LAB_03566068;
                uVar10 = *(uint *)(unaff_x19 + 0x24);
              }
              if (*(uint *)(lVar15 + 0x18) <= uVar10) goto LAB_035660f8;
              plVar21 = (long *)(lVar15 + (long)(int)uVar10 * 0x38 + 0x48);
              *plVar21 = lVar22;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar21,lVar22);
              unaff_x19[0x20] = lVar26;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x23);
              unaff_x19[0x23] = lVar22;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25,lVar22);
              *(int *)(unaff_x19 + 0x24) = (int)lVar17;
            }
            uVar10 = *(uint *)(unaff_x19 + 0x92);
          }
LAB_0356571c:
          *(uint *)(unaff_x19 + 0x92) = uVar10 + 1;
        }
        uVar10 = *(uint *)(unaff_x21 + 0x18);
        uVar20 = uVar20 + 1;
      } while ((int)uVar20 < (int)uVar10);
    }
    if (*(char *)((long)unaff_x19 + 0x3f5) != '\0') {
      *(undefined1 *)((long)unaff_x19 + 0x3f5) = 0;
LAB_03565748:
      return (int)unaff_x19[0x92];
    }
    lVar17 = *plVar1;
    if (lVar17 != 0) {
      *(int *)(lVar17 + 0x1c) = iStack0000000000000024;
      lVar22 = *plVar25;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar22 = *plVar25;
      }
      lVar22 = *(long *)(*(long *)(lVar22 + 0xb8) + 8);
      if (lVar22 != 0) {
        uVar10 = FUN_0219b384(lVar22,*(undefined8 *)PTR_DAT_03ceb270);
        *(uint *)(lVar17 + 0x34) = uVar10;
        if (*plVar1 != 0) {
          plVar21 = (long *)(*plVar1 + 0x60);
          lVar17 = *plVar21;
          if (lVar17 != 0) {
            uVar13 = (ulong)uVar10;
            if (*(int *)(lVar17 + 0x18) < (int)uVar10) {
              if (*(int *)(*plVar29 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_01ff02b8(plVar21,uVar13,0,*(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo);
            }
            if (unaff_x19[0xe1] != 0) {
              plVar21 = unaff_x19 + 0xe1;
              if (*(int *)(unaff_x19[0xe1] + 0x18) < (int)uVar10) {
                uVar12 = FUN_036c1d60(uVar10 + 1,0);
                if (*(int *)(*plVar29 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*plVar29);
                }
                FUN_01ff025c(plVar21,uVar12,*(undefined8 *)OVRSystemPerfMetrics_PerfMetrics_TypeInfo
                            );
              }
              if (*(char *)((long)unaff_x19 + 0x321) != '\0') {
                if (*plVar1 == 0) goto LAB_03566068;
                plVar23 = (long *)(*plVar1 + 0x38);
                lVar17 = *plVar23;
                if (lVar17 == 0) goto LAB_03566068;
                iVar8 = (int)unaff_x19[0x92];
                if (0x100 < *(int *)(lVar17 + 0x18) - iVar8) {
                  iVar9 = 0x100;
                  if (0x100 < iVar8 + 1) {
                    iVar9 = iVar8 + 1;
                  }
                  if (*(int *)(*plVar29 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  FUN_01ff02b8(plVar23,iVar9,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
                  plVar25 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                }
              }
              fVar6 = DAT_00d38798;
              if (0 < (int)uVar10) {
                lVar17 = 0;
                uVar28 = 0;
                lVar22 = 0x54;
                lVar26 = 0x20;
                do {
                  fVar34 = (float)param_3;
                  if (uVar28 != 0) {
                    lVar18 = *plVar21;
                    if (lVar18 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
                    uVar24 = *(undefined8 *)(lVar18 + uVar28 * 8 + 0x20);
                    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar14 = FUN_036d35a8(uVar24,0,0);
                    if ((uVar14 & 1) != 0) {
                      lVar18 = *plVar25;
                      plVar29 = (long *)*plVar21;
                      if (*(int *)(lVar18 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar18 = *plVar25;
                      }
                      lVar18 = **(long **)(lVar18 + 0xb8);
                      if (lVar18 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
                      lVar18 = lVar18 + lVar22;
                      in_stack_00000160 = *(undefined8 *)(lVar18 + -4);
                      in_stack_00000158 = *(undefined8 *)(lVar18 + -0xc);
                      in_stack_00000150 = *(undefined8 *)(lVar18 + -0x14);
                      in_stack_00000148 = *(undefined8 *)(lVar18 + -0x1c);
                      uVar24 = *(undefined8 *)(lVar18 + -0x24);
                      in_stack_00000138 = *(undefined8 *)(lVar18 + -0x2c);
                      in_stack_00000130 = *(undefined8 *)(lVar18 + -0x34);
                      in_stack_00000140 = uVar24;
                      lVar18 = FUN_0359e964();
                      fVar34 = (float)uVar24;
                      if (plVar29 == (long *)0x0) goto LAB_03566068;
                      if ((lVar18 != 0) &&
                         (lVar15 = thunk_FUN_01a89d6c(lVar18,*(undefined8 *)(*plVar29 + 0x40)),
                         lVar15 == 0)) {
LAB_035660fc:
                        uVar24 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6b14(uVar24,0);
                      }
                      if (*(uint *)(plVar29 + 3) <= uVar28) goto LAB_035660f8;
                      plVar29[uVar28 + 4] = lVar18;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                ((long)plVar29 + lVar26,lVar18);
                      plVar25 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                      if ((*plVar1 == 0) || (lVar18 = *(long *)(*plVar1 + 0x60), lVar18 == 0))
                      goto LAB_03566068;
                      if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
                      puVar16 = (undefined8 *)(lVar18 + lVar17 + 0x30);
                      *puVar16 = 0;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar16,0);
                    }
                    if (unaff_x19[0x70] == 0) goto LAB_03566068;
                    fVar31 = (float)FUN_036dba50(unaff_x19[0x70],0);
                    lVar18 = *plVar21;
                    if (lVar18 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
                    lVar18 = *(long *)(lVar18 + uVar28 * 8 + 0x20);
                    if ((lVar18 == 0) ||
                       (fVar33 = fVar34, lVar18 = FUN_037b4844(lVar18,0), lVar18 == 0))
                    goto LAB_03566068;
                    fVar32 = (float)FUN_036dba50(lVar18,0);
                    fVar34 = (fVar34 - fVar33) * (fVar34 - fVar33);
                    param_3 = (ulong)(uint)fVar34;
                    if (fVar6 <= (fVar31 - fVar32) * (fVar31 - fVar32) + fVar34) {
                      lVar18 = *plVar21;
                      if (lVar18 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
                      lVar18 = *(long *)(lVar18 + uVar28 * 8 + 0x20);
                      if (lVar18 == 0) goto LAB_03566068;
                      lVar18 = FUN_037b4844(lVar18,0);
                      if ((unaff_x19[0x70] == 0) || (FUN_036dba50(unaff_x19[0x70],0), lVar18 == 0))
                      goto LAB_03566068;
                      FUN_036dbae0(lVar18,0);
                    }
                    lVar18 = *plVar21;
                    if (lVar18 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
                    lVar18 = *(long *)(lVar18 + uVar28 * 8 + 0x20);
                    if (lVar18 == 0) goto LAB_03566068;
                    uVar24 = *(undefined8 *)(lVar18 + 0xf0);
                    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar14 = FUN_036d35a8(uVar24,0,0);
                    if ((uVar14 & 1) == 0) {
                      lVar18 = *plVar21;
                      if (lVar18 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
                      lVar18 = *(long *)(lVar18 + uVar28 * 8 + 0x20);
                      if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0xf0), lVar18 == 0))
                      goto LAB_03566068;
                      iVar8 = FUN_036d3364(lVar18,0);
                      lVar18 = *plVar25;
                      if (*(int *)(lVar18 + 0xe0) == 0) {
                        thunk_FUN_01a58e78(lVar18);
                        lVar18 = *plVar25;
                      }
                      lVar18 = **(long **)(lVar18 + 0xb8);
                      if (lVar18 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
                      lVar18 = *(long *)(lVar18 + lVar22 + -0x1c);
                      if (lVar18 == 0) goto LAB_03566068;
                      iVar9 = FUN_036d3364(lVar18,0);
                      if (iVar8 != iVar9) goto LAB_03565b98;
                    }
                    else {
LAB_03565b98:
                      lVar18 = *plVar21;
                      if (lVar18 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
                      lVar15 = *plVar25;
                      lVar18 = *(long *)(lVar18 + uVar28 * 8 + 0x20);
                      if (*(int *)(lVar15 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar15 = *plVar25;
                      }
                      lVar15 = **(long **)(lVar15 + 0xb8);
                      if (lVar15 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar15 + 0x18) <= uVar28) goto LAB_035660f8;
                      if (lVar18 == 0) goto LAB_03566068;
                      thunk_FUN_0359e5ac(lVar18,*(undefined8 *)(lVar15 + lVar22 + -0x1c),0);
                      lVar18 = *plVar21;
                      if (lVar18 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
                      lVar15 = **(long **)(*plVar25 + 0xb8);
                      if (lVar15 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar15 + 0x18) <= uVar28) goto LAB_035660f8;
                      lVar18 = *(long *)(lVar18 + uVar28 * 8 + 0x20);
                      if (lVar18 == 0) goto LAB_03566068;
                      *(undefined8 *)(lVar18 + 0xd8) = *(undefined8 *)(lVar15 + lVar22 + -0x2c);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                      lVar18 = *plVar21;
                      if (lVar18 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
                      lVar15 = **(long **)(*plVar25 + 0xb8);
                      if (lVar15 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar15 + 0x18) <= uVar28) goto LAB_035660f8;
                      lVar18 = *(long *)(lVar18 + uVar28 * 8 + 0x20);
                      if (lVar18 == 0) goto LAB_03566068;
                      *(undefined8 *)(lVar18 + 0xe0) = *(undefined8 *)(lVar15 + lVar22 + -0x24);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    }
                    lVar18 = *plVar25;
                    if (*(int *)(lVar18 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar18 = *plVar25;
                    }
                    lVar15 = **(long **)(lVar18 + 0xb8);
                    if (lVar15 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar15 + 0x18) <= uVar28) goto LAB_035660f8;
                    if (*(char *)(lVar15 + lVar22 + -0x13) != '\0') {
                      lVar19 = *plVar21;
                      if (lVar19 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar19 + 0x18) <= uVar28) goto LAB_035660f8;
                      lVar19 = *(long *)(lVar19 + uVar28 * 8 + 0x20);
                      if (*(int *)(lVar18 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar15 = **(long **)(*plVar25 + 0xb8);
                        if (lVar15 == 0) goto LAB_03566068;
                      }
                      if (*(uint *)(lVar15 + 0x18) <= uVar28) goto LAB_035660f8;
                      if (lVar19 == 0) goto LAB_03566068;
                      FUN_0359e608(lVar19,*(undefined8 *)(lVar15 + lVar22 + -0x1c),0);
                      lVar18 = *plVar21;
                      if (lVar18 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
                      lVar15 = **(long **)(*plVar25 + 0xb8);
                      if (lVar15 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar15 + 0x18) <= uVar28) goto LAB_035660f8;
                      lVar18 = *(long *)(lVar18 + uVar28 * 8 + 0x20);
                      if (lVar18 == 0) goto LAB_03566068;
                      *(undefined8 *)(lVar18 + 0x100) = *(undefined8 *)(lVar15 + lVar22 + -0xc);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (lVar18 + 0x100);
                    }
                  }
                  lVar18 = *plVar25;
                  if (*(int *)(lVar18 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar18 = *plVar25;
                  }
                  lVar18 = **(long **)(lVar18 + 0xb8);
                  if (lVar18 == 0) goto LAB_03566068;
                  if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
                  if ((*plVar1 == 0) || (lVar15 = *(long *)(*plVar1 + 0x60), lVar15 == 0))
                  goto LAB_03566068;
                  if (*(uint *)(lVar15 + 0x18) <= uVar28) goto LAB_035660f8;
                  lVar19 = *(long *)(lVar15 + lVar17 + 0x30);
                  iVar8 = *(int *)(lVar18 + lVar22);
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
                      FUN_03595600(&stack0x000000e0,unaff_x19[0x74],iVar8 + 1,0);
                      memcpy(&stack0x00000090,&stack0x000000e0,0x50);
                      if (*(int *)(lVar15 + 0x18) == 0) goto LAB_035660f8;
                      memcpy((void *)(lVar15 + lVar17 + 0x20),&stack0x00000090,0x50);
                      __dest = (void *)(lVar15 + 0x20);
                    }
                    else {
                      lVar18 = *plVar21;
                      if (lVar18 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_035660f8;
                      lVar18 = *(long *)(lVar18 + uVar28 * 8 + 0x20);
                      if (lVar18 == 0) goto LAB_03566068;
                      uVar24 = UnityEngine_Material__GetColorArray(lVar18,0);
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
                      if (*(uint *)(lVar15 + 0x18) <= uVar28) goto LAB_035660f8;
                      __dest = (void *)(lVar15 + lVar17 + 0x20);
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
                      FUN_03595b9c(lVar15 + lVar17 + 0x20,iVar8,0);
                    }
                    else if ((0 < iVar8) && (*(char *)((long)unaff_x19 + 0x321) != '\0')) {
                      iVar2 = iVar9 + 3;
                      if (-1 < iVar9) {
                        iVar2 = iVar9;
                      }
                      if (0x100 < (iVar2 >> 2) - iVar8) goto LAB_03565e08;
                    }
                  }
                  plVar25 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if ((*plVar1 == 0) || (lVar18 = *(long *)(*plVar1 + 0x60), lVar18 == 0))
                  goto LAB_03566068;
                  lVar15 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar15 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar15 = *plVar25;
                  }
                  lVar15 = **(long **)(lVar15 + 0xb8);
                  if (lVar15 == 0) goto LAB_03566068;
                  if ((*(uint *)(lVar15 + 0x18) <= uVar28) || (*(uint *)(lVar18 + 0x18) <= uVar28))
                  goto LAB_035660f8;
                  *(undefined8 *)(lVar18 + lVar17 + 0x68) = *(undefined8 *)(lVar15 + lVar22 + -0x1c)
                  ;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  uVar28 = uVar28 + 1;
                  lVar17 = lVar17 + 0x50;
                  lVar22 = lVar22 + 0x38;
                  lVar26 = lVar26 + 8;
                } while (uVar10 != uVar28);
              }
              lVar17 = *plVar21;
              if (lVar17 != 0) {
                lVar22 = (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3) + 0x20;
                do {
                  uVar10 = (uint)uVar13;
                  if ((int)*(uint *)(lVar17 + 0x18) <= (int)uVar10) goto LAB_03565748;
                  if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_035660f8;
                  uVar24 = *(undefined8 *)(lVar17 + lVar22);
                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar13 = FUN_036cee6c(uVar24,0,0);
                  if ((uVar13 & 1) == 0) goto LAB_03565748;
                  if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x60), lVar17 == 0)) break;
                  if ((int)uVar10 < *(int *)(lVar17 + 0x18)) {
                    lVar17 = *plVar21;
                    if (lVar17 == 0) break;
                    if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_035660f8;
                    if ((*(long *)(lVar17 + lVar22) == 0) ||
                       (lVar17 = FUN_037b514c(*(long *)(lVar17 + lVar22),0), lVar17 == 0)) break;
                    FUN_0390f3a4(lVar17,0,0);
                  }
                  lVar17 = *plVar21;
                  uVar13 = (ulong)(uVar10 + 1);
                  lVar22 = lVar22 + 8;
                } while (lVar17 != 0);
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


