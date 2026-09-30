/*
FUNCTION_NAME: UnityEngine.AudioSource$$set_timeSamples
ENTRY_POINT: 035643a0
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


undefined4 UnityEngine_AudioSource__set_timeSamples(undefined8 param_1,ulong param_2)

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
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  void *__dest;
  int in_w8;
  long lVar19;
  long lVar20;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  uint uVar21;
  long *unaff_x22;
  long *plVar22;
  long *unaff_x23;
  long lVar23;
  long *plVar24;
  undefined8 uVar25;
  long *plVar26;
  long lVar27;
  long *plVar28;
  long *unaff_x25;
  long lVar29;
  ulong uVar30;
  uint *puVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int iStack0000000000000024;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  ulong in_stack_000000f0;
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
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  ulong in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  uint uStack00000000000001b8;
  undefined1 uStack00000000000001bc;
  
  if (in_w8 == 0) {
    thunk_FUN_01a58e78();
    param_2 = (ulong)*(uint *)(unaff_x19 + 0x24);
  }
  in_stack_00000110 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  FUN_03557f30((int)unaff_x19[0xc3],&stack0x000000e0,param_2,unaff_x19[0x20],0,unaff_x19[0x23]);
  in_stack_00000178 = in_stack_000000e8;
  in_stack_00000170 = in_stack_000000e0;
  in_stack_00000188 = in_stack_000000f8;
  in_stack_00000180 = in_stack_000000f0;
  in_stack_00000198 = in_stack_00000108;
  in_stack_00000190 = in_stack_00000100;
  in_stack_000001a0 = in_stack_00000110;
  uVar15 = in_stack_000000f0;
  FUN_0209aa94(*(long *)(*unaff_x22 + 0xb8) + 0x10,&stack0x00000170,*unaff_x20);
  plVar28 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
  lVar13 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
  if (lVar13 == 0) goto LAB_03566068;
  FUN_0219c0c4(lVar13,*(undefined8 *)PTR_DAT_03cd6f90);
  FUN_03557fec(unaff_x19[0x23],unaff_x19[0x20],*(long *)(*unaff_x22 + 0xb8),
               *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8));
  plVar1 = unaff_x19 + 0x6d;
  if (unaff_x19[0x6d] == 0) {
    lVar13 = unaff_x19[0x90];
    lVar23 = thunk_FUN_01a89e68(*plVar28);
    FUN_0359fc54(lVar23,(int)lVar13,0);
    unaff_x19[0x6d] = lVar23;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,lVar23);
  }
  else {
    plVar26 = (long *)(unaff_x19[0x6d] + 0x38);
    lVar13 = *plVar26;
    if (lVar13 == 0) goto LAB_03566068;
    lVar23 = unaff_x19[0x90];
    if (*(int *)(lVar13 + 0x18) < (int)lVar23) {
      if (*(int *)(*plVar28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff02b8(plVar26,(int)lVar23,0,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
    }
  }
  iVar8 = (int)unaff_x19[0x5c];
  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
  if (iVar8 == 1) {
    FUN_03591508();
    plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (unaff_x19[0xca] == 0) {
      *(undefined4 *)(unaff_x19 + 0x5c) = 3;
      uVar14 = FUN_03597634(0);
      if ((uVar14 & 1) == 0) {
        if (*unaff_x23 == 0) goto LAB_03566068;
        uVar25 = FUN_036d3824(*unaff_x23,0);
        uVar25 = FUN_025bdc88(*(undefined8 *)OVRPlugin_TrackedKeyboardQueryFlags_TypeInfo,uVar25,
                              *(undefined8 *)OVRPlugin_TrackingConfidence_TypeInfo,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_0367b470(uVar25);
      }
    }
    else {
      if (unaff_x19[0xcb] == 0) goto LAB_03566068;
      iVar8 = FUN_036d3364(unaff_x19[0xcb],0);
      if (*unaff_x23 == 0) goto LAB_03566068;
      iVar9 = FUN_036d3364(*unaff_x23,0);
      if (iVar8 != iVar9) {
        uVar14 = FUN_0359778c(0);
        if ((uVar14 & 1) == 0) {
LAB_03564574:
          if (unaff_x19[0xcb] == 0) goto LAB_03566068;
          unaff_x19[0xcc] = *(long *)(unaff_x19[0xcb] + 0x20);
        }
        else {
          if (*unaff_x25 == 0) goto LAB_03566068;
          iVar8 = FUN_036d3364(*unaff_x25,0);
          if ((unaff_x19[0xcb] == 0) || (lVar13 = *(long *)(unaff_x19[0xcb] + 0x20), lVar13 == 0))
          goto LAB_03566068;
          iVar9 = FUN_036d3364(lVar13,0);
          if (iVar8 == iVar9) goto LAB_03564574;
          if (unaff_x19[0xcb] == 0) goto LAB_03566068;
          lVar13 = unaff_x19[0x23];
          uVar25 = *(undefined8 *)(unaff_x19[0xcb] + 0x20);
          if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          lVar13 = FUN_03594e9c(lVar13,uVar25,0);
          unaff_x19[0xcc] = lVar13;
          plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0xcc);
        lVar13 = *plVar26;
        lVar23 = unaff_x19[0xcc];
        lVar27 = unaff_x19[0xcb];
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar13 = *plVar26;
        }
        uVar10 = FUN_03557fec(lVar23,lVar27,*(long *)(lVar13 + 0xb8),
                              *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
        *(uint *)(unaff_x19 + 0xcd) = uVar10;
        lVar13 = **(long **)(*plVar26 + 0xb8);
        if (lVar13 == 0) goto LAB_03566068;
        if (*(uint *)(lVar13 + 0x18) <= uVar10) {
LAB_035660f8:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        *(undefined4 *)(lVar13 + (long)(int)uVar10 * 0x38 + 0x54) = 0;
      }
    }
    iVar8 = (int)unaff_x19[0x5c];
  }
  if (iVar8 == 6) {
    lVar13 = unaff_x19[0x5d];
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar14 = FUN_036cee6c(lVar13,0,0);
    puVar7 = PTR_DAT_03cbebc0;
    if (((uVar14 & 1) != 0) && (plVar26 = unaff_x19, *(char *)((long)unaff_x19 + 0x3f5) == '\0')) {
      while( true ) {
        plVar26 = (long *)plVar26[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar14 = FUN_036cee6c(plVar26,0,0);
        if ((uVar14 & 1) == 0) goto LAB_035646fc;
        if (plVar26 == (long *)0x0) break;
        (**(code **)(*plVar26 + 0x528))
                  (plVar26,**(undefined8 **)(*(long *)puVar7 + 0xb8),
                   *(undefined8 *)(*plVar26 + 0x530));
        (**(code **)(*plVar26 + 0x918))(plVar26,*(undefined8 *)(*plVar26 + 0x920));
        if (plVar26[0x6d] == 0) break;
        FUN_0359ff94(plVar26[0x6d],0);
      }
      goto LAB_03566068;
    }
  }
LAB_035646fc:
  if (unaff_x21 != 0) {
    uVar10 = *(uint *)(unaff_x21 + 0x18);
    plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if ((int)uVar10 < 1) {
      iStack0000000000000024 = 0;
    }
    else {
      uVar21 = 0;
      iStack0000000000000024 = 0;
      do {
        if (uVar10 <= uVar21) goto LAB_035660f8;
        puVar31 = (uint *)(unaff_x21 + (long)(int)uVar21 * 0xc + 0x20);
        if (*puVar31 == 0) break;
        if (*plVar1 == 0) goto LAB_03566068;
        plVar26 = (long *)(*plVar1 + 0x38);
        lVar23 = *plVar26;
        lVar13 = unaff_x19[0x92];
        if ((lVar23 == 0) || (*(int *)(lVar23 + 0x18) <= (int)lVar13)) {
          if (*(int *)(*plVar28 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff02b8(plVar26,(int)lVar13 + 1,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
          uVar10 = *(uint *)(unaff_x21 + 0x18);
        }
        if (uVar10 <= uVar21) goto LAB_035660f8;
        uVar10 = *puVar31;
        if ((uVar10 == 0x3c) && (*(char *)((long)unaff_x19 + 0x302) != '\0')) {
          lVar13 = unaff_x19[0x24];
          uVar14 = FUN_03586568();
          uVar11 = uStack00000000000001b8;
          if ((uVar14 & 1) == 0) goto LAB_035649d0;
          if (*(uint *)(unaff_x21 + 0x18) <= uVar21) goto LAB_035660f8;
          iVar8 = *(int *)(unaff_x21 + (long)(int)uVar21 * 0xc + 0x24);
          if ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0) {
            *(undefined1 *)((long)unaff_x19 + 0x26a) = 1;
          }
          puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          uVar21 = uStack00000000000001b8;
          if (*(int *)((long)unaff_x19 + 0x644) == 1) {
            lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar23 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar23 = *(long *)puVar7;
            }
            lVar23 = **(long **)(lVar23 + 0xb8);
            if (lVar23 != 0) {
              if (*(uint *)(unaff_x19 + 0x24) < *(uint *)(lVar23 + 0x18)) {
                lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x24) * 0x38;
                *(int *)(lVar23 + 0x54) = *(int *)(lVar23 + 0x54) + 1;
                if ((*plVar1 != 0) && (lVar23 = *(long *)(*plVar1 + 0x38), lVar23 != 0)) {
                  if (*(uint *)(unaff_x19 + 0x92) < *(uint *)(lVar23 + 0x18)) {
                    uVar12 = *(undefined4 *)((long)unaff_x19 + 0x6a4);
                    lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x92) * 0x178;
                    *(short *)(lVar23 + 0x20) = (short)uVar12 + -0x2000;
                    *(undefined4 *)(lVar23 + 0x48) = uVar12;
                    *(long *)(lVar23 + 0x38) = *unaff_x23;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    if ((*plVar1 != 0) && (lVar23 = *(long *)(*plVar1 + 0x38), lVar23 != 0)) {
                      if (*(uint *)(unaff_x19 + 0x92) < *(uint *)(lVar23 + 0x18)) {
                        *(long *)(lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x92) * 0x178 + 0x40) =
                             unaff_x19[0xd3];
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                        if ((*plVar1 != 0) && (lVar23 = *(long *)(*plVar1 + 0x38), lVar23 != 0)) {
                          uVar10 = *(uint *)(unaff_x19 + 0x92);
                          if (uVar10 < *(uint *)(lVar23 + 0x18)) {
                            *(int *)(lVar23 + (long)(int)uVar10 * 0x178 + 0x58) =
                                 (int)unaff_x19[0x24];
                            if ((unaff_x19[0xd3] != 0) &&
                               (lVar27 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0),
                               lVar27 != 0)) {
                              FUN_02215a88(lVar27,*(undefined4 *)((long)unaff_x19 + 0x6a4),
                                           &stack0x000000e0,
                                           *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
                              if (uVar10 < *(uint *)(lVar23 + 0x18)) {
                                *(undefined8 *)(lVar23 + (long)(int)uVar10 * 0x178 + 0x30) =
                                     in_stack_000000e0;
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                                if ((*plVar1 != 0) &&
                                   (lVar23 = *(long *)(*plVar1 + 0x38), lVar23 != 0)) {
                                  uVar10 = *(uint *)(unaff_x19 + 0x92);
                                  if (uVar10 < *(uint *)(lVar23 + 0x18)) {
                                    uVar12 = *(undefined4 *)((long)unaff_x19 + 0x644);
                                    lVar27 = lVar23 + (long)(int)uVar10 * 0x178;
                                    *(int *)(lVar27 + 0x24) = iVar8;
                                    *(undefined4 *)(lVar27 + 0x2c) = uVar12;
                                    if (uVar11 < *(uint *)(unaff_x21 + 0x18)) {
                                      *(int *)(lVar23 + (long)(int)uVar10 * 0x178 + 0x28) =
                                           (*(int *)(unaff_x21 + (long)(int)uVar11 * 0xc + 0x24) -
                                           iVar8) + 1;
                                      *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
                                      *(int *)(unaff_x19 + 0x24) = (int)lVar13;
                                      iStack0000000000000024 = iStack0000000000000024 + 1;
                                      plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      uVar21 = uVar11;
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
          lVar27 = unaff_x19[0x20];
          lVar23 = unaff_x19[0x23];
          lVar13 = unaff_x19[0x24];
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
              uVar14 = FUN_026b8070(uVar10,0);
              if ((uVar14 & 1) != 0) {
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
            uVar14 = FUN_026b812c(uVar10,0);
            if ((uVar14 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar10 = FUN_026b8410(uVar10,0);
LAB_03564aa8:
              uVar10 = uVar10 & 0xffff;
            }
          }
LAB_03564aac:
          lVar19 = FUN_03591848();
          if (lVar19 == 0) {
            iVar8 = FUN_035975f8();
            if (*(uint *)(unaff_x21 + 0x18) <= uVar21) goto LAB_035660f8;
            if (iVar8 == 0) {
              uVar11 = 0x25a1;
            }
            else {
              uVar11 = FUN_035975f8(0);
            }
            *puVar31 = uVar11;
            lVar19 = unaff_x19[0x20];
            uVar12 = *(undefined4 *)((long)unaff_x19 + 0x25c);
            uVar3 = *(undefined4 *)((long)unaff_x19 + 0x214);
            if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            lVar19 = FUN_03570fc4(uVar11,lVar19,1,uVar12,uVar3,(long)&stack0x000001b8 + 4,0);
            if (lVar19 == 0) {
              lVar19 = FUN_03597770();
              if (lVar19 != 0) {
                lVar19 = FUN_03597770(0);
                if (lVar19 == 0) goto LAB_03566068;
                if (0 < *(int *)(lVar19 + 0x18)) {
                  lVar19 = unaff_x19[0x20];
                  uVar25 = FUN_03597770(0);
                  uVar12 = *(undefined4 *)((long)unaff_x19 + 0x25c);
                  uVar3 = *(undefined4 *)((long)unaff_x19 + 0x214);
                  if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                  }
                  lVar19 = FUN_035714e4(uVar11,lVar19,uVar25,1,uVar12,uVar3,
                                        (long)&stack0x000001b8 + 4,0);
                  if (lVar19 != 0) goto LAB_03564b5c;
                }
              }
              uVar25 = FUN_03597650(0);
              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
              }
              uVar14 = FUN_036cee6c(uVar25,0,0);
              if ((uVar14 & 1) != 0) {
                uVar25 = FUN_03597650(0);
                uVar12 = *(undefined4 *)((long)unaff_x19 + 0x25c);
                uVar3 = *(undefined4 *)((long)unaff_x19 + 0x214);
                if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                }
                lVar19 = FUN_03570fc4(uVar11,uVar25,1,uVar12,uVar3,(long)&stack0x000001b8 + 4,0);
                if (lVar19 != 0) goto LAB_03564b5c;
              }
              if (*(uint *)(unaff_x21 + 0x18) <= uVar21) goto LAB_035660f8;
              *puVar31 = 0x20;
              lVar19 = unaff_x19[0x20];
              uVar12 = *(undefined4 *)((long)unaff_x19 + 0x25c);
              uVar3 = *(undefined4 *)((long)unaff_x19 + 0x214);
              if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar11 = 0x20;
              lVar19 = FUN_03570fc4(0x20,lVar19,1,uVar12,uVar3,(long)&stack0x000001b8 + 4,0);
              if (lVar19 == 0) {
                if (*(uint *)(unaff_x21 + 0x18) <= uVar21) goto LAB_035660f8;
                *puVar31 = 3;
                lVar19 = unaff_x19[0x20];
                uVar12 = *(undefined4 *)((long)unaff_x19 + 0x25c);
                uVar3 = *(undefined4 *)((long)unaff_x19 + 0x214);
                if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar11 = 3;
                lVar19 = FUN_03570fc4(3,lVar19,1,uVar12,uVar3,(long)&stack0x000001b8 + 4,0);
              }
            }
LAB_03564b5c:
            uVar14 = FUN_03597634(0);
            if ((uVar14 & 1) == 0) {
              plVar28 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,4);
              if ((int)uVar10 < 0x10000) {
                in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar10);
                lVar16 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
                if (plVar28 == (long *)0x0) goto LAB_03566068;
                if ((lVar16 != 0) &&
                   (lVar20 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar28 + 0x40)),
                   lVar20 == 0)) goto LAB_035660fc;
                if ((int)plVar28[3] == 0) goto LAB_035660f8;
                plVar28[4] = lVar16;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar28 + 4,lVar16);
                if (unaff_x19[0x1f] == 0) goto LAB_03566068;
                lVar16 = FUN_036d3824(unaff_x19[0x1f],0);
                if ((lVar16 != 0) &&
                   (lVar20 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar28 + 0x40)),
                   lVar20 == 0)) goto LAB_035660fc;
                if (*(uint *)(plVar28 + 3) < 2) goto LAB_035660f8;
                plVar28[5] = lVar16;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar28 + 5,lVar16);
                if (lVar19 == 0) goto LAB_03566068;
                in_stack_00000168._4_4_ = *(undefined4 *)(lVar19 + 0x14);
                lVar16 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,
                                            (long)&stack0x00000168 + 4);
                if ((lVar16 != 0) &&
                   (lVar20 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar28 + 0x40)),
                   lVar20 == 0)) goto LAB_035660fc;
                if (*(uint *)(plVar28 + 3) < 3) goto LAB_035660f8;
                plVar28[6] = lVar16;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar28 + 6,lVar16);
                lVar16 = FUN_036d3824();
                if ((lVar16 != 0) &&
                   (lVar20 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar28 + 0x40)),
                   lVar20 == 0)) goto LAB_035660fc;
                if (*(uint *)(plVar28 + 3) < 4) goto LAB_035660f8;
                plVar28[7] = lVar16;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar28 + 7,lVar16);
                puVar17 = (undefined8 *)OVRPlugin_TrackedKeyboardFlags_TypeInfo;
              }
              else {
                in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar10);
                lVar16 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
                if (plVar28 == (long *)0x0) goto LAB_03566068;
                if ((lVar16 != 0) &&
                   (lVar20 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar28 + 0x40)),
                   lVar20 == 0)) goto LAB_035660fc;
                if ((int)plVar28[3] == 0) goto LAB_035660f8;
                plVar28[4] = lVar16;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar28 + 4,lVar16);
                if (unaff_x19[0x1f] == 0) goto LAB_03566068;
                lVar16 = FUN_036d3824(unaff_x19[0x1f],0);
                if ((lVar16 != 0) &&
                   (lVar20 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar28 + 0x40)),
                   lVar20 == 0)) goto LAB_035660fc;
                if (*(uint *)(plVar28 + 3) < 2) goto LAB_035660f8;
                plVar28[5] = lVar16;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar28 + 5,lVar16);
                if (lVar19 == 0) goto LAB_03566068;
                in_stack_00000168._4_4_ = *(undefined4 *)(lVar19 + 0x14);
                lVar16 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,
                                            (long)&stack0x00000168 + 4);
                if ((lVar16 != 0) &&
                   (lVar20 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar28 + 0x40)),
                   lVar20 == 0)) goto LAB_035660fc;
                if (*(uint *)(plVar28 + 3) < 3) goto LAB_035660f8;
                plVar28[6] = lVar16;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar28 + 6,lVar16);
                lVar16 = FUN_036d3824();
                if ((lVar16 != 0) &&
                   (lVar20 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar28 + 0x40)),
                   lVar20 == 0)) goto LAB_035660fc;
                if (*(uint *)(plVar28 + 3) < 4) goto LAB_035660f8;
                plVar28[7] = lVar16;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar28 + 7,lVar16);
                puVar17 = (undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo;
              }
              uVar25 = FUN_025be8f4(*puVar17,plVar28,0);
              if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_0367b470(uVar25);
              uVar10 = uVar11;
            }
            else {
              uVar10 = uVar11;
              if (lVar19 == 0) goto LAB_03566068;
            }
          }
          if (*(char *)(lVar19 + 0x10) == '\x01') {
            lVar16 = *(long *)(lVar19 + 0x18);
            if (lVar16 == 0) goto LAB_03566068;
            iVar8 = *(int *)(lVar16 + 0x18);
            if (iVar8 == 0) {
              iVar8 = FUN_036d3364(lVar16,0);
              *(int *)(lVar16 + 0x18) = iVar8;
            }
            lVar16 = *unaff_x23;
            if (lVar16 == 0) goto LAB_03566068;
            iVar9 = *(int *)(lVar16 + 0x18);
            if (iVar9 == 0) {
              iVar9 = FUN_036d3364(lVar16,0);
              *(int *)(lVar16 + 0x18) = iVar9;
            }
            if (iVar8 == iVar9) {
              bVar5 = false;
            }
            else {
              plVar28 = *(long **)(lVar19 + 0x18);
              if (plVar28 == (long *)0x0) {
                plVar28 = (long *)0x0;
                *unaff_x23 = 0;
              }
              else {
                lVar16 = *(long *)OVRPlugin_OVRP_1_83_0_TypeInfo;
                bVar4 = *(byte *)(lVar16 + 0x130);
                if (*(byte *)(*plVar28 + 0x130) < bVar4) {
                  plVar26 = (long *)0x0;
                }
                else {
                  plVar26 = plVar28;
                  if (*(long *)(*(long *)(*plVar28 + 200) + (ulong)bVar4 * 8 + -8) != lVar16) {
                    plVar26 = (long *)0x0;
                  }
                }
                *unaff_x23 = (long)plVar26;
                if (*(byte *)(*plVar28 + 0x130) < bVar4) {
                  plVar28 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar28 + 200) + (ulong)bVar4 * 8 + -8) != lVar16) {
                  plVar28 = (long *)0x0;
                }
              }
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x23,plVar28);
              bVar5 = true;
            }
          }
          else {
            bVar5 = false;
          }
          if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0))
          goto LAB_03566068;
          if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x19 + 0x92)) goto LAB_035660f8;
          lVar16 = lVar16 + (long)(int)*(uint *)(unaff_x19 + 0x92) * 0x178;
          plVar28 = (long *)(lVar16 + 0x30);
          *plVar28 = lVar19;
          *(undefined4 *)(lVar16 + 0x2c) = 0;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar28,lVar19);
          if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0))
          goto LAB_03566068;
          uVar11 = *(uint *)(unaff_x19 + 0x92);
          if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_035660f8;
          lVar20 = lVar16 + (long)(int)uVar11 * 0x178;
          *(short *)(lVar20 + 0x20) = (short)uVar10;
          *(undefined1 *)(lVar20 + 0x5c) = uStack00000000000001bc;
          if (*(uint *)(unaff_x21 + 0x18) <= uVar21) goto LAB_035660f8;
          lVar16 = lVar16 + (long)(int)uVar11 * 0x178;
          *(undefined8 *)(lVar16 + 0x24) =
               *(undefined8 *)(unaff_x21 + (long)(int)uVar21 * 0xc + 0x24);
          *(long *)(lVar16 + 0x38) = *unaff_x23;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(char *)(lVar19 + 0x10) == '\x02') {
            plVar28 = *(long **)(lVar19 + 0x18);
            if (plVar28 == (long *)0x0) goto LAB_03566068;
            bVar4 = *(byte *)(*(long *)OVRPlugin_Sizei_TypeInfo + 0x130);
            if ((*(byte *)(*plVar28 + 0x130) < bVar4) ||
               (*(long *)(*(long *)(*plVar28 + 200) + (ulong)bVar4 * 8 + -8) !=
                *(long *)OVRPlugin_Sizei_TypeInfo)) goto LAB_03566068;
            lVar27 = plVar28[4];
            lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar23 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar23 = *plVar26;
            }
            uVar10 = FUN_03558224(lVar27,plVar28,*(long *)(lVar23 + 0xb8),
                                  *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 8));
            *(uint *)(unaff_x19 + 0x24) = uVar10;
            lVar23 = **(long **)(*plVar26 + 0xb8);
            if (lVar23 == 0) goto LAB_03566068;
            if (*(uint *)(lVar23 + 0x18) <= uVar10) goto LAB_035660f8;
            lVar23 = lVar23 + (long)(int)uVar10 * 0x38;
            *(int *)(lVar23 + 0x54) = *(int *)(lVar23 + 0x54) + 1;
            if ((*plVar1 == 0) || (lVar23 = *(long *)(*plVar1 + 0x38), lVar23 == 0))
            goto LAB_03566068;
            if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x92)) goto LAB_035660f8;
            lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x92) * 0x178;
            *(undefined4 *)(lVar23 + 0x2c) = 1;
            lVar27 = unaff_x19[0x24];
            *(undefined8 *)(lVar23 + 0x40) = plVar28;
            *(int *)(lVar23 + 0x58) = (int)lVar27;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((undefined8 *)(lVar23 + 0x40),plVar28);
            plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if ((unaff_x19[0x6d] == 0) || (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0))
            goto LAB_03566068;
            uVar10 = *(uint *)(unaff_x19 + 0x92);
            if (*(uint *)(lVar23 + 0x18) <= uVar10) goto LAB_035660f8;
            *(undefined4 *)(lVar23 + (long)(int)uVar10 * 0x178 + 0x48) =
                 *(undefined4 *)(lVar19 + 0x28);
            *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
            *(int *)(unaff_x19 + 0x24) = (int)lVar13;
            iStack0000000000000024 = iStack0000000000000024 + 1;
            plVar28 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
          }
          else {
            if (bVar5) {
              lVar16 = *unaff_x23;
              if (lVar16 == 0) goto LAB_03566068;
              iVar8 = *(int *)(lVar16 + 0x18);
              if (iVar8 == 0) {
                iVar8 = FUN_036d3364(lVar16,0);
                *(int *)(lVar16 + 0x18) = iVar8;
              }
              lVar16 = unaff_x19[0x1f];
              if (lVar16 == 0) goto LAB_03566068;
              iVar9 = *(int *)(lVar16 + 0x18);
              if (iVar9 == 0) {
                iVar9 = FUN_036d3364(lVar16,0);
                *(int *)(lVar16 + 0x18) = iVar9;
              }
              if (iVar8 != iVar9) {
                uVar14 = FUN_0359778c(0);
                if ((uVar14 & 1) == 0) {
                  if (*unaff_x23 == 0) goto LAB_03566068;
                  lVar16 = *(long *)(*unaff_x23 + 0x20);
                }
                else {
                  if (*unaff_x23 == 0) goto LAB_03566068;
                  uVar25 = *(undefined8 *)(*unaff_x23 + 0x20);
                  lVar16 = *unaff_x25;
                  if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  lVar16 = FUN_03594e9c(lVar16,uVar25,0);
                }
                *unaff_x25 = lVar16;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25);
                lVar16 = *plVar26;
                lVar20 = *unaff_x25;
                lVar29 = *unaff_x23;
                if (*(int *)(lVar16 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar16 = *plVar26;
                }
                uVar12 = FUN_03557fec(lVar20,lVar29,*(long *)(lVar16 + 0xb8),
                                      *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 8));
                *(undefined4 *)(unaff_x19 + 0x24) = uVar12;
              }
            }
            if (*(long *)(lVar19 + 0x20) == 0) goto LAB_03566068;
            iVar8 = FUN_03776eb8(*(long *)(lVar19 + 0x20),0);
            if (0 < iVar8) {
              if (*(long *)(lVar19 + 0x20) == 0) goto LAB_03566068;
              lVar16 = *unaff_x23;
              lVar20 = *unaff_x25;
              uVar12 = FUN_03776eb8(*(long *)(lVar19 + 0x20),0);
              if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)OVRPlugin_Sizef_TypeInfo);
              }
              lVar19 = FUN_03594928(lVar16,lVar20,uVar12,0);
              *unaff_x25 = lVar19;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25,lVar19);
              lVar19 = *plVar26;
              lVar16 = *unaff_x25;
              lVar20 = *unaff_x23;
              if (*(int *)(lVar19 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar19 = *plVar26;
              }
              uVar12 = FUN_03557fec(lVar16,lVar20,*(long *)(lVar19 + 0xb8),
                                    *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 8));
              bVar5 = true;
              *(undefined4 *)(unaff_x19 + 0x24) = uVar12;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar14 = FUN_026b63d8(uVar10,0);
            plVar28 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
            if ((uVar10 != 0x200b) && ((uVar14 & 1) == 0)) {
              lVar19 = *plVar26;
              if (*(int *)(lVar19 + 0xe0) == 0) {
                thunk_FUN_01a58e78(lVar19);
                lVar19 = *plVar26;
              }
              lVar16 = **(long **)(lVar19 + 0xb8);
              if (lVar16 == 0) goto LAB_03566068;
              uVar10 = *(uint *)(unaff_x19 + 0x24);
              if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_035660f8;
              if (*(int *)(lVar16 + (long)(int)uVar10 * 0x38 + 0x54) < 0x3fff) {
                if (*(int *)(lVar19 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(lVar19);
                  lVar16 = **(long **)(*plVar26 + 0xb8);
                  if (lVar16 == 0) goto LAB_03566068;
                  uVar10 = *(uint *)(unaff_x19 + 0x24);
                }
              }
              else {
                lVar19 = *unaff_x25;
                uVar25 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
                FUN_0369922c(uVar25,lVar19,0);
                lVar19 = *plVar26;
                lVar16 = *unaff_x23;
                if (*(int *)(lVar19 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar19 = *plVar26;
                }
                uVar10 = FUN_03557fec(uVar25,lVar16,*(long *)(lVar19 + 0xb8),
                                      *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 8));
                *(uint *)(unaff_x19 + 0x24) = uVar10;
                lVar16 = **(long **)(*plVar26 + 0xb8);
                if (lVar16 == 0) goto LAB_03566068;
              }
              if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_035660f8;
              lVar16 = lVar16 + (long)(int)uVar10 * 0x38;
              *(int *)(lVar16 + 0x54) = *(int *)(lVar16 + 0x54) + 1;
            }
            if ((*plVar1 == 0) || (lVar19 = *(long *)(*plVar1 + 0x38), lVar19 == 0))
            goto LAB_03566068;
            if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x92)) goto LAB_035660f8;
            *(long *)(lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x92) * 0x178 + 0x50) = *unaff_x25;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            if ((*plVar1 == 0) || (lVar19 = *(long *)(*plVar1 + 0x38), lVar19 == 0))
            goto LAB_03566068;
            if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x92)) goto LAB_035660f8;
            uVar10 = *(uint *)(unaff_x19 + 0x24);
            *(uint *)(lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x92) * 0x178 + 0x58) = uVar10;
            lVar19 = *plVar26;
            if (*(int *)(lVar19 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar19 = *plVar26;
              uVar10 = *(uint *)(unaff_x19 + 0x24);
            }
            lVar16 = **(long **)(lVar19 + 0xb8);
            if (lVar16 == 0) goto LAB_03566068;
            if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_035660f8;
            *(bool *)(lVar16 + (long)(int)uVar10 * 0x38 + 0x41) = bVar5;
            if (bVar5) {
              if (*(int *)(lVar19 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar16 = **(long **)(*plVar26 + 0xb8);
                if (lVar16 == 0) goto LAB_03566068;
                uVar10 = *(uint *)(unaff_x19 + 0x24);
              }
              if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_035660f8;
              plVar22 = (long *)(lVar16 + (long)(int)uVar10 * 0x38 + 0x48);
              *plVar22 = lVar23;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar22,lVar23);
              unaff_x19[0x20] = lVar27;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x23);
              unaff_x19[0x23] = lVar23;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25,lVar23);
              *(int *)(unaff_x19 + 0x24) = (int)lVar13;
            }
            uVar10 = *(uint *)(unaff_x19 + 0x92);
          }
LAB_0356571c:
          *(uint *)(unaff_x19 + 0x92) = uVar10 + 1;
        }
        uVar10 = *(uint *)(unaff_x21 + 0x18);
        uVar21 = uVar21 + 1;
      } while ((int)uVar21 < (int)uVar10);
    }
    if (*(char *)((long)unaff_x19 + 0x3f5) != '\0') {
      *(undefined1 *)((long)unaff_x19 + 0x3f5) = 0;
LAB_03565748:
      return (int)unaff_x19[0x92];
    }
    lVar13 = *plVar1;
    if (lVar13 != 0) {
      *(int *)(lVar13 + 0x1c) = iStack0000000000000024;
      lVar23 = *plVar26;
      if (*(int *)(lVar23 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar23 = *plVar26;
      }
      lVar23 = *(long *)(*(long *)(lVar23 + 0xb8) + 8);
      if (lVar23 != 0) {
        uVar10 = FUN_0219b384(lVar23,*(undefined8 *)PTR_DAT_03ceb270);
        *(uint *)(lVar13 + 0x34) = uVar10;
        if (*plVar1 != 0) {
          plVar22 = (long *)(*plVar1 + 0x60);
          lVar13 = *plVar22;
          if (lVar13 != 0) {
            uVar14 = (ulong)uVar10;
            if (*(int *)(lVar13 + 0x18) < (int)uVar10) {
              if (*(int *)(*plVar28 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_01ff02b8(plVar22,uVar14,0,*(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo);
            }
            if (unaff_x19[0xe1] != 0) {
              plVar22 = unaff_x19 + 0xe1;
              if (*(int *)(unaff_x19[0xe1] + 0x18) < (int)uVar10) {
                uVar12 = FUN_036c1d60(uVar10 + 1,0);
                if (*(int *)(*plVar28 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*plVar28);
                }
                FUN_01ff025c(plVar22,uVar12,*(undefined8 *)OVRSystemPerfMetrics_PerfMetrics_TypeInfo
                            );
              }
              if (*(char *)((long)unaff_x19 + 0x321) != '\0') {
                if (*plVar1 == 0) goto LAB_03566068;
                plVar24 = (long *)(*plVar1 + 0x38);
                lVar13 = *plVar24;
                if (lVar13 == 0) goto LAB_03566068;
                iVar8 = (int)unaff_x19[0x92];
                if (0x100 < *(int *)(lVar13 + 0x18) - iVar8) {
                  iVar9 = 0x100;
                  if (0x100 < iVar8 + 1) {
                    iVar9 = iVar8 + 1;
                  }
                  if (*(int *)(*plVar28 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  FUN_01ff02b8(plVar24,iVar9,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
                  plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                }
              }
              fVar6 = DAT_00d38798;
              if (0 < (int)uVar10) {
                lVar13 = 0;
                uVar30 = 0;
                lVar23 = 0x54;
                lVar27 = 0x20;
                do {
                  fVar35 = (float)uVar15;
                  if (uVar30 != 0) {
                    lVar19 = *plVar22;
                    if (lVar19 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_035660f8;
                    uVar25 = *(undefined8 *)(lVar19 + uVar30 * 8 + 0x20);
                    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar15 = FUN_036d35a8(uVar25,0,0);
                    if ((uVar15 & 1) != 0) {
                      lVar19 = *plVar26;
                      plVar28 = (long *)*plVar22;
                      if (*(int *)(lVar19 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar19 = *plVar26;
                      }
                      lVar19 = **(long **)(lVar19 + 0xb8);
                      if (lVar19 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_035660f8;
                      lVar19 = lVar19 + lVar23;
                      in_stack_00000160 = *(undefined8 *)(lVar19 + -4);
                      in_stack_00000158 = *(undefined8 *)(lVar19 + -0xc);
                      in_stack_00000150 = *(undefined8 *)(lVar19 + -0x14);
                      in_stack_00000148 = *(undefined8 *)(lVar19 + -0x1c);
                      uVar25 = *(undefined8 *)(lVar19 + -0x24);
                      in_stack_00000138 = *(undefined8 *)(lVar19 + -0x2c);
                      in_stack_00000130 = *(undefined8 *)(lVar19 + -0x34);
                      in_stack_00000140 = uVar25;
                      lVar19 = FUN_0359e964();
                      fVar35 = (float)uVar25;
                      if (plVar28 == (long *)0x0) goto LAB_03566068;
                      if ((lVar19 != 0) &&
                         (lVar16 = thunk_FUN_01a89d6c(lVar19,*(undefined8 *)(*plVar28 + 0x40)),
                         lVar16 == 0)) {
LAB_035660fc:
                        uVar25 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6b14(uVar25,0);
                      }
                      if (*(uint *)(plVar28 + 3) <= uVar30) goto LAB_035660f8;
                      plVar28[uVar30 + 4] = lVar19;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                ((long)plVar28 + lVar27,lVar19);
                      plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                      if ((*plVar1 == 0) || (lVar19 = *(long *)(*plVar1 + 0x60), lVar19 == 0))
                      goto LAB_03566068;
                      if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_035660f8;
                      puVar17 = (undefined8 *)(lVar19 + lVar13 + 0x30);
                      *puVar17 = 0;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar17,0);
                    }
                    if (unaff_x19[0x70] == 0) goto LAB_03566068;
                    fVar32 = (float)FUN_036dba50(unaff_x19[0x70],0);
                    lVar19 = *plVar22;
                    if (lVar19 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_035660f8;
                    lVar19 = *(long *)(lVar19 + uVar30 * 8 + 0x20);
                    if ((lVar19 == 0) ||
                       (fVar34 = fVar35, lVar19 = FUN_037b4844(lVar19,0), lVar19 == 0))
                    goto LAB_03566068;
                    fVar33 = (float)FUN_036dba50(lVar19,0);
                    fVar35 = (fVar35 - fVar34) * (fVar35 - fVar34);
                    uVar15 = (ulong)(uint)fVar35;
                    if (fVar6 <= (fVar32 - fVar33) * (fVar32 - fVar33) + fVar35) {
                      lVar19 = *plVar22;
                      if (lVar19 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_035660f8;
                      lVar19 = *(long *)(lVar19 + uVar30 * 8 + 0x20);
                      if (lVar19 == 0) goto LAB_03566068;
                      lVar19 = FUN_037b4844(lVar19,0);
                      if ((unaff_x19[0x70] == 0) || (FUN_036dba50(unaff_x19[0x70],0), lVar19 == 0))
                      goto LAB_03566068;
                      FUN_036dbae0(lVar19,0);
                    }
                    lVar19 = *plVar22;
                    if (lVar19 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_035660f8;
                    lVar19 = *(long *)(lVar19 + uVar30 * 8 + 0x20);
                    if (lVar19 == 0) goto LAB_03566068;
                    uVar25 = *(undefined8 *)(lVar19 + 0xf0);
                    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar18 = FUN_036d35a8(uVar25,0,0);
                    if ((uVar18 & 1) == 0) {
                      lVar19 = *plVar22;
                      if (lVar19 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_035660f8;
                      lVar19 = *(long *)(lVar19 + uVar30 * 8 + 0x20);
                      if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0xf0), lVar19 == 0))
                      goto LAB_03566068;
                      iVar8 = FUN_036d3364(lVar19,0);
                      lVar19 = *plVar26;
                      if (*(int *)(lVar19 + 0xe0) == 0) {
                        thunk_FUN_01a58e78(lVar19);
                        lVar19 = *plVar26;
                      }
                      lVar19 = **(long **)(lVar19 + 0xb8);
                      if (lVar19 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_035660f8;
                      lVar19 = *(long *)(lVar19 + lVar23 + -0x1c);
                      if (lVar19 == 0) goto LAB_03566068;
                      iVar9 = FUN_036d3364(lVar19,0);
                      if (iVar8 != iVar9) goto LAB_03565b98;
                    }
                    else {
LAB_03565b98:
                      lVar19 = *plVar22;
                      if (lVar19 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_035660f8;
                      lVar16 = *plVar26;
                      lVar19 = *(long *)(lVar19 + uVar30 * 8 + 0x20);
                      if (*(int *)(lVar16 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar16 = *plVar26;
                      }
                      lVar16 = **(long **)(lVar16 + 0xb8);
                      if (lVar16 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar16 + 0x18) <= uVar30) goto LAB_035660f8;
                      if (lVar19 == 0) goto LAB_03566068;
                      thunk_FUN_0359e5ac(lVar19,*(undefined8 *)(lVar16 + lVar23 + -0x1c),0);
                      lVar19 = *plVar22;
                      if (lVar19 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_035660f8;
                      lVar16 = **(long **)(*plVar26 + 0xb8);
                      if (lVar16 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar16 + 0x18) <= uVar30) goto LAB_035660f8;
                      lVar19 = *(long *)(lVar19 + uVar30 * 8 + 0x20);
                      if (lVar19 == 0) goto LAB_03566068;
                      *(undefined8 *)(lVar19 + 0xd8) = *(undefined8 *)(lVar16 + lVar23 + -0x2c);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                      lVar19 = *plVar22;
                      if (lVar19 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_035660f8;
                      lVar16 = **(long **)(*plVar26 + 0xb8);
                      if (lVar16 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar16 + 0x18) <= uVar30) goto LAB_035660f8;
                      lVar19 = *(long *)(lVar19 + uVar30 * 8 + 0x20);
                      if (lVar19 == 0) goto LAB_03566068;
                      *(undefined8 *)(lVar19 + 0xe0) = *(undefined8 *)(lVar16 + lVar23 + -0x24);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    }
                    lVar19 = *plVar26;
                    if (*(int *)(lVar19 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar19 = *plVar26;
                    }
                    lVar16 = **(long **)(lVar19 + 0xb8);
                    if (lVar16 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar16 + 0x18) <= uVar30) goto LAB_035660f8;
                    if (*(char *)(lVar16 + lVar23 + -0x13) != '\0') {
                      lVar20 = *plVar22;
                      if (lVar20 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar20 + 0x18) <= uVar30) goto LAB_035660f8;
                      lVar20 = *(long *)(lVar20 + uVar30 * 8 + 0x20);
                      if (*(int *)(lVar19 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar16 = **(long **)(*plVar26 + 0xb8);
                        if (lVar16 == 0) goto LAB_03566068;
                      }
                      if (*(uint *)(lVar16 + 0x18) <= uVar30) goto LAB_035660f8;
                      if (lVar20 == 0) goto LAB_03566068;
                      FUN_0359e608(lVar20,*(undefined8 *)(lVar16 + lVar23 + -0x1c),0);
                      lVar19 = *plVar22;
                      if (lVar19 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_035660f8;
                      lVar16 = **(long **)(*plVar26 + 0xb8);
                      if (lVar16 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar16 + 0x18) <= uVar30) goto LAB_035660f8;
                      lVar19 = *(long *)(lVar19 + uVar30 * 8 + 0x20);
                      if (lVar19 == 0) goto LAB_03566068;
                      *(undefined8 *)(lVar19 + 0x100) = *(undefined8 *)(lVar16 + lVar23 + -0xc);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (lVar19 + 0x100);
                    }
                  }
                  lVar19 = *plVar26;
                  if (*(int *)(lVar19 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar19 = *plVar26;
                  }
                  lVar19 = **(long **)(lVar19 + 0xb8);
                  if (lVar19 == 0) goto LAB_03566068;
                  if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_035660f8;
                  if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x60), lVar16 == 0))
                  goto LAB_03566068;
                  if (*(uint *)(lVar16 + 0x18) <= uVar30) goto LAB_035660f8;
                  lVar20 = *(long *)(lVar16 + lVar13 + 0x30);
                  iVar8 = *(int *)(lVar19 + lVar23);
                  if (lVar20 == 0) {
                    if (uVar30 == 0) {
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
                      if (*(int *)(lVar16 + 0x18) == 0) goto LAB_035660f8;
                      memcpy((void *)(lVar16 + lVar13 + 0x20),&stack0x00000090,0x50);
                      __dest = (void *)(lVar16 + 0x20);
                    }
                    else {
                      lVar19 = *plVar22;
                      if (lVar19 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_035660f8;
                      lVar19 = *(long *)(lVar19 + uVar30 * 8 + 0x20);
                      if (lVar19 == 0) goto LAB_03566068;
                      uVar25 = UnityEngine_Material__GetColorArray(lVar19,0);
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
                      FUN_03595600(&stack0x000000e0,uVar25,iVar8 + 1,0);
                      memcpy(&stack0x00000040,&stack0x000000e0,0x50);
                      if (*(uint *)(lVar16 + 0x18) <= uVar30) goto LAB_035660f8;
                      __dest = (void *)(lVar16 + lVar13 + 0x20);
                      memcpy(__dest,&stack0x00000040,0x50);
                    }
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(__dest,0);
                  }
                  else {
                    iVar9 = *(int *)(lVar20 + 0x18);
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
                      FUN_03595b9c(lVar16 + lVar13 + 0x20,iVar8,0);
                    }
                    else if ((0 < iVar8) && (*(char *)((long)unaff_x19 + 0x321) != '\0')) {
                      iVar2 = iVar9 + 3;
                      if (-1 < iVar9) {
                        iVar2 = iVar9;
                      }
                      if (0x100 < (iVar2 >> 2) - iVar8) goto LAB_03565e08;
                    }
                  }
                  plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if ((*plVar1 == 0) || (lVar19 = *(long *)(*plVar1 + 0x60), lVar19 == 0))
                  goto LAB_03566068;
                  lVar16 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar16 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar16 = *plVar26;
                  }
                  lVar16 = **(long **)(lVar16 + 0xb8);
                  if (lVar16 == 0) goto LAB_03566068;
                  if ((*(uint *)(lVar16 + 0x18) <= uVar30) || (*(uint *)(lVar19 + 0x18) <= uVar30))
                  goto LAB_035660f8;
                  *(undefined8 *)(lVar19 + lVar13 + 0x68) = *(undefined8 *)(lVar16 + lVar23 + -0x1c)
                  ;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  uVar30 = uVar30 + 1;
                  lVar13 = lVar13 + 0x50;
                  lVar23 = lVar23 + 0x38;
                  lVar27 = lVar27 + 8;
                } while (uVar10 != uVar30);
              }
              lVar13 = *plVar22;
              if (lVar13 != 0) {
                lVar23 = (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar14 << 3) + 0x20;
                do {
                  uVar10 = (uint)uVar14;
                  if ((int)*(uint *)(lVar13 + 0x18) <= (int)uVar10) goto LAB_03565748;
                  if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_035660f8;
                  uVar25 = *(undefined8 *)(lVar13 + lVar23);
                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar15 = FUN_036cee6c(uVar25,0,0);
                  if ((uVar15 & 1) == 0) goto LAB_03565748;
                  if ((*plVar1 == 0) || (lVar13 = *(long *)(*plVar1 + 0x60), lVar13 == 0)) break;
                  if ((int)uVar10 < *(int *)(lVar13 + 0x18)) {
                    lVar13 = *plVar22;
                    if (lVar13 == 0) break;
                    if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_035660f8;
                    if ((*(long *)(lVar13 + lVar23) == 0) ||
                       (lVar13 = FUN_037b514c(*(long *)(lVar13 + lVar23),0), lVar13 == 0)) break;
                    FUN_0390f3a4(lVar13,0,0);
                  }
                  lVar13 = *plVar22;
                  uVar14 = (ulong)(uVar10 + 1);
                  lVar23 = lVar23 + 8;
                } while (lVar13 != 0);
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


