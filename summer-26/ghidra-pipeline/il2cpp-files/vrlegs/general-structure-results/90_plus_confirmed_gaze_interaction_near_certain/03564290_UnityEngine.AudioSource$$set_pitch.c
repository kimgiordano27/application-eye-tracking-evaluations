/*
FUNCTION_NAME: UnityEngine.AudioSource$$set_pitch
ENTRY_POINT: 03564290
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


undefined4 UnityEngine_AudioSource__set_pitch(void)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  bool bVar5;
  float fVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  void *__dest;
  long lVar23;
  long lVar24;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar25;
  long *plVar26;
  long lVar27;
  long *plVar28;
  undefined8 uVar29;
  long *plVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  uint *puVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
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
  uint in_stack_000001b8;
  undefined1 uStack00000000000001bc;
  
  FUN_01ab69ac();
  FUN_01ab69ac(OVRPlugin_OVRP_1_18_0_TypeInfo);
  FUN_01ab69ac(OVRPlugin_OVRP_1_28_0_TypeInfo);
  FUN_01ab69ac(OVRPlugin_OVRP_1_31_0_TypeInfo);
  FUN_01ab69ac(PTR_DAT_03cc4ad8);
  FUN_01ab69ac(OVRPlugin_TextureRectMatrixf_TypeInfo);
  FUN_01ab69ac(OVRPlugin_TrackedKeyboardFlags_TypeInfo);
  FUN_01ab69ac(OVRPlugin_TrackedKeyboardQueryFlags_TypeInfo);
  FUN_01ab69ac(OVRPlugin_TrackingConfidence_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xf93) = 1;
  puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  puVar7 = OVRPlugin_OVRP_1_28_0_TypeInfo;
  uStack00000000000001bc = 0;
  in_stack_000001b8 = 0;
  *(undefined4 *)(unaff_x19 + 0x92) = 0;
  *(undefined1 *)((long)unaff_x19 + 0x26a) = 0;
  *(undefined2 *)(unaff_x19 + 0x86) = 0;
  *(int *)((long)unaff_x19 + 0x25c) = (int)unaff_x19[0x4b];
  FUN_035a0500(unaff_x19 + 0x4c,0);
  if ((*(byte *)((long)unaff_x19 + 0x25c) & 1) == 0) {
    uVar14 = (undefined4)unaff_x19[0x42];
  }
  else {
    uVar14 = 700;
  }
  *(undefined4 *)((long)unaff_x19 + 0x214) = uVar14;
  puVar8 = OVRPlugin_OVRP_1_18_0_TypeInfo;
  in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar14);
  FUN_0209aa94(unaff_x19 + 0x43,&stack0x000000e0,*(undefined8 *)puVar7);
  plVar26 = unaff_x19 + 0x20;
  unaff_x19[0x20] = unaff_x19[0x1f];
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar26);
  plVar28 = unaff_x19 + 0x23;
  unaff_x19[0x23] = unaff_x19[0x22];
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar28);
  *(undefined4 *)(unaff_x19 + 0x24) = 0;
  uVar14 = 0;
  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)puVar9,0);
    uVar14 = (undefined4)unaff_x19[0x24];
  }
  in_stack_00000110 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  FUN_03557f30((int)unaff_x19[0xc3],&stack0x000000e0,uVar14,unaff_x19[0x20],0,unaff_x19[0x23]);
  in_stack_00000178 = in_stack_000000e8;
  in_stack_00000170 = in_stack_000000e0;
  in_stack_00000188 = in_stack_000000f8;
  in_stack_00000180 = in_stack_000000f0;
  in_stack_00000198 = in_stack_00000108;
  in_stack_00000190 = in_stack_00000100;
  in_stack_000001a0 = in_stack_00000110;
  uVar19 = in_stack_000000f0;
  FUN_0209aa94(*(long *)(*(long *)puVar9 + 0xb8) + 0x10,&stack0x00000170,*(undefined8 *)puVar8);
  plVar17 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
  lVar15 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 8);
  if (lVar15 == 0) goto LAB_03566068;
  FUN_0219c0c4(lVar15,*(undefined8 *)PTR_DAT_03cd6f90);
  FUN_03557fec(unaff_x19[0x23],unaff_x19[0x20],*(long *)(*(long *)puVar9 + 0xb8),
               *(undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 8));
  plVar1 = unaff_x19 + 0x6d;
  if (unaff_x19[0x6d] == 0) {
    lVar15 = unaff_x19[0x90];
    lVar27 = thunk_FUN_01a89e68(*plVar17);
    FUN_0359fc54(lVar27,(int)lVar15,0);
    unaff_x19[0x6d] = lVar27;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,lVar27);
  }
  else {
    plVar30 = (long *)(unaff_x19[0x6d] + 0x38);
    lVar15 = *plVar30;
    if (lVar15 == 0) goto LAB_03566068;
    lVar27 = unaff_x19[0x90];
    if (*(int *)(lVar15 + 0x18) < (int)lVar27) {
      if (*(int *)(*plVar17 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff02b8(plVar30,(int)lVar27,0,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
    }
  }
  iVar10 = (int)unaff_x19[0x5c];
  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
  if (iVar10 == 1) {
    FUN_03591508();
    plVar30 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (unaff_x19[0xca] == 0) {
      *(undefined4 *)(unaff_x19 + 0x5c) = 3;
      uVar16 = FUN_03597634(0);
      if ((uVar16 & 1) == 0) {
        if (*plVar26 == 0) goto LAB_03566068;
        uVar29 = FUN_036d3824(*plVar26,0);
        uVar29 = FUN_025bdc88(*(undefined8 *)OVRPlugin_TrackedKeyboardQueryFlags_TypeInfo,uVar29,
                              *(undefined8 *)OVRPlugin_TrackingConfidence_TypeInfo,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_0367b470(uVar29);
      }
    }
    else {
      if (unaff_x19[0xcb] == 0) goto LAB_03566068;
      iVar10 = FUN_036d3364(unaff_x19[0xcb],0);
      if (*plVar26 == 0) goto LAB_03566068;
      iVar11 = FUN_036d3364(*plVar26,0);
      if (iVar10 != iVar11) {
        uVar16 = FUN_0359778c(0);
        if ((uVar16 & 1) == 0) {
LAB_03564574:
          if (unaff_x19[0xcb] == 0) goto LAB_03566068;
          unaff_x19[0xcc] = *(long *)(unaff_x19[0xcb] + 0x20);
        }
        else {
          if (*plVar28 == 0) goto LAB_03566068;
          iVar10 = FUN_036d3364(*plVar28,0);
          if ((unaff_x19[0xcb] == 0) || (lVar15 = *(long *)(unaff_x19[0xcb] + 0x20), lVar15 == 0))
          goto LAB_03566068;
          iVar11 = FUN_036d3364(lVar15,0);
          if (iVar10 == iVar11) goto LAB_03564574;
          if (unaff_x19[0xcb] == 0) goto LAB_03566068;
          lVar15 = unaff_x19[0x23];
          uVar29 = *(undefined8 *)(unaff_x19[0xcb] + 0x20);
          if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          lVar15 = FUN_03594e9c(lVar15,uVar29,0);
          unaff_x19[0xcc] = lVar15;
          plVar30 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0xcc);
        lVar15 = *plVar30;
        lVar27 = unaff_x19[0xcc];
        lVar31 = unaff_x19[0xcb];
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar15 = *plVar30;
        }
        uVar12 = FUN_03557fec(lVar27,lVar31,*(long *)(lVar15 + 0xb8),
                              *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8));
        *(uint *)(unaff_x19 + 0xcd) = uVar12;
        lVar15 = **(long **)(*plVar30 + 0xb8);
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar12) {
LAB_035660f8:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        *(undefined4 *)(lVar15 + (long)(int)uVar12 * 0x38 + 0x54) = 0;
      }
    }
    iVar10 = (int)unaff_x19[0x5c];
  }
  if (iVar10 == 6) {
    lVar15 = unaff_x19[0x5d];
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar16 = FUN_036cee6c(lVar15,0,0);
    puVar7 = PTR_DAT_03cbebc0;
    if (((uVar16 & 1) != 0) && (plVar30 = unaff_x19, *(char *)((long)unaff_x19 + 0x3f5) == '\0')) {
      while( true ) {
        plVar30 = (long *)plVar30[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar16 = FUN_036cee6c(plVar30,0,0);
        if ((uVar16 & 1) == 0) goto LAB_035646fc;
        if (plVar30 == (long *)0x0) break;
        (**(code **)(*plVar30 + 0x528))
                  (plVar30,**(undefined8 **)(*(long *)puVar7 + 0xb8),
                   *(undefined8 *)(*plVar30 + 0x530));
        (**(code **)(*plVar30 + 0x918))(plVar30,*(undefined8 *)(*plVar30 + 0x920));
        if (plVar30[0x6d] == 0) break;
        FUN_0359ff94(plVar30[0x6d],0);
      }
      goto LAB_03566068;
    }
  }
LAB_035646fc:
  if (unaff_x21 != 0) {
    uVar12 = *(uint *)(unaff_x21 + 0x18);
    plVar30 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if ((int)uVar12 < 1) {
      iStack0000000000000024 = 0;
    }
    else {
      uVar25 = 0;
      iStack0000000000000024 = 0;
      do {
        if (uVar12 <= uVar25) goto LAB_035660f8;
        puVar34 = (uint *)(unaff_x21 + (long)(int)uVar25 * 0xc + 0x20);
        if (*puVar34 == 0) break;
        if (*plVar1 == 0) goto LAB_03566068;
        plVar30 = (long *)(*plVar1 + 0x38);
        lVar27 = *plVar30;
        lVar15 = unaff_x19[0x92];
        if ((lVar27 == 0) || (*(int *)(lVar27 + 0x18) <= (int)lVar15)) {
          if (*(int *)(*plVar17 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff02b8(plVar30,(int)lVar15 + 1,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
          uVar12 = *(uint *)(unaff_x21 + 0x18);
        }
        if (uVar12 <= uVar25) goto LAB_035660f8;
        uVar12 = *puVar34;
        if ((uVar12 == 0x3c) && (*(char *)((long)unaff_x19 + 0x302) != '\0')) {
          lVar15 = unaff_x19[0x24];
          uVar16 = FUN_03586568();
          uVar13 = in_stack_000001b8;
          if ((uVar16 & 1) == 0) goto LAB_035649d0;
          if (*(uint *)(unaff_x21 + 0x18) <= uVar25) goto LAB_035660f8;
          iVar10 = *(int *)(unaff_x21 + (long)(int)uVar25 * 0xc + 0x24);
          if ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0) {
            *(undefined1 *)((long)unaff_x19 + 0x26a) = 1;
          }
          puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          plVar30 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          uVar25 = in_stack_000001b8;
          if (*(int *)((long)unaff_x19 + 0x644) == 1) {
            lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar27 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar27 = *(long *)puVar7;
            }
            lVar27 = **(long **)(lVar27 + 0xb8);
            if (lVar27 != 0) {
              if (*(uint *)(unaff_x19 + 0x24) < *(uint *)(lVar27 + 0x18)) {
                lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x24) * 0x38;
                *(int *)(lVar27 + 0x54) = *(int *)(lVar27 + 0x54) + 1;
                if ((*plVar1 != 0) && (lVar27 = *(long *)(*plVar1 + 0x38), lVar27 != 0)) {
                  if (*(uint *)(unaff_x19 + 0x92) < *(uint *)(lVar27 + 0x18)) {
                    uVar14 = *(undefined4 *)((long)unaff_x19 + 0x6a4);
                    lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x92) * 0x178;
                    *(short *)(lVar27 + 0x20) = (short)uVar14 + -0x2000;
                    *(undefined4 *)(lVar27 + 0x48) = uVar14;
                    *(long *)(lVar27 + 0x38) = *plVar26;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    if ((*plVar1 != 0) && (lVar27 = *(long *)(*plVar1 + 0x38), lVar27 != 0)) {
                      if (*(uint *)(unaff_x19 + 0x92) < *(uint *)(lVar27 + 0x18)) {
                        *(long *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x92) * 0x178 + 0x40) =
                             unaff_x19[0xd3];
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                        if ((*plVar1 != 0) && (lVar27 = *(long *)(*plVar1 + 0x38), lVar27 != 0)) {
                          uVar12 = *(uint *)(unaff_x19 + 0x92);
                          if (uVar12 < *(uint *)(lVar27 + 0x18)) {
                            *(int *)(lVar27 + (long)(int)uVar12 * 0x178 + 0x58) =
                                 (int)unaff_x19[0x24];
                            if ((unaff_x19[0xd3] != 0) &&
                               (lVar31 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0),
                               lVar31 != 0)) {
                              FUN_02215a88(lVar31,*(undefined4 *)((long)unaff_x19 + 0x6a4),
                                           &stack0x000000e0,
                                           *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
                              if (uVar12 < *(uint *)(lVar27 + 0x18)) {
                                *(undefined8 *)(lVar27 + (long)(int)uVar12 * 0x178 + 0x30) =
                                     in_stack_000000e0;
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                                if ((*plVar1 != 0) &&
                                   (lVar27 = *(long *)(*plVar1 + 0x38), lVar27 != 0)) {
                                  uVar12 = *(uint *)(unaff_x19 + 0x92);
                                  if (uVar12 < *(uint *)(lVar27 + 0x18)) {
                                    uVar14 = *(undefined4 *)((long)unaff_x19 + 0x644);
                                    lVar31 = lVar27 + (long)(int)uVar12 * 0x178;
                                    *(int *)(lVar31 + 0x24) = iVar10;
                                    *(undefined4 *)(lVar31 + 0x2c) = uVar14;
                                    if (uVar13 < *(uint *)(unaff_x21 + 0x18)) {
                                      *(int *)(lVar27 + (long)(int)uVar12 * 0x178 + 0x28) =
                                           (*(int *)(unaff_x21 + (long)(int)uVar13 * 0xc + 0x24) -
                                           iVar10) + 1;
                                      *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
                                      *(int *)(unaff_x19 + 0x24) = (int)lVar15;
                                      iStack0000000000000024 = iStack0000000000000024 + 1;
                                      plVar30 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      uVar25 = uVar13;
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
          lVar31 = unaff_x19[0x20];
          lVar27 = unaff_x19[0x23];
          lVar15 = unaff_x19[0x24];
          if (*(int *)((long)unaff_x19 + 0x644) != 0) goto LAB_03564aac;
          uVar13 = *(uint *)((long)unaff_x19 + 0x25c);
          if ((uVar13 >> 4 & 1) == 0) {
            if ((uVar13 >> 3 & 1) == 0) {
              if ((uVar13 >> 5 & 1) != 0) goto LAB_03564a00;
            }
            else {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar16 = FUN_026b8070(uVar12,0);
              if ((uVar16 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar12 = FUN_026b8594(uVar12,0);
                goto LAB_03564aa8;
              }
            }
          }
          else {
LAB_03564a00:
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar16 = FUN_026b812c(uVar12,0);
            if ((uVar16 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar12 = FUN_026b8410(uVar12,0);
LAB_03564aa8:
              uVar12 = uVar12 & 0xffff;
            }
          }
LAB_03564aac:
          lVar23 = FUN_03591848();
          if (lVar23 == 0) {
            iVar10 = FUN_035975f8();
            if (*(uint *)(unaff_x21 + 0x18) <= uVar25) goto LAB_035660f8;
            if (iVar10 == 0) {
              uVar13 = 0x25a1;
            }
            else {
              uVar13 = FUN_035975f8(0);
            }
            *puVar34 = uVar13;
            lVar23 = unaff_x19[0x20];
            uVar14 = *(undefined4 *)((long)unaff_x19 + 0x25c);
            uVar3 = *(undefined4 *)((long)unaff_x19 + 0x214);
            if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            lVar23 = FUN_03570fc4(uVar13,lVar23,1,uVar14,uVar3,&stack0x000001bc,0);
            if (lVar23 == 0) {
              lVar23 = FUN_03597770();
              if (lVar23 != 0) {
                lVar23 = FUN_03597770(0);
                if (lVar23 == 0) goto LAB_03566068;
                if (0 < *(int *)(lVar23 + 0x18)) {
                  lVar23 = unaff_x19[0x20];
                  uVar29 = FUN_03597770(0);
                  uVar14 = *(undefined4 *)((long)unaff_x19 + 0x25c);
                  uVar3 = *(undefined4 *)((long)unaff_x19 + 0x214);
                  if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                  }
                  lVar23 = FUN_035714e4(uVar13,lVar23,uVar29,1,uVar14,uVar3,&stack0x000001bc,0);
                  if (lVar23 != 0) goto LAB_03564b5c;
                }
              }
              uVar29 = FUN_03597650(0);
              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
              }
              uVar16 = FUN_036cee6c(uVar29,0,0);
              if ((uVar16 & 1) != 0) {
                uVar29 = FUN_03597650(0);
                uVar14 = *(undefined4 *)((long)unaff_x19 + 0x25c);
                uVar3 = *(undefined4 *)((long)unaff_x19 + 0x214);
                if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                }
                lVar23 = FUN_03570fc4(uVar13,uVar29,1,uVar14,uVar3,&stack0x000001bc,0);
                if (lVar23 != 0) goto LAB_03564b5c;
              }
              if (*(uint *)(unaff_x21 + 0x18) <= uVar25) goto LAB_035660f8;
              *puVar34 = 0x20;
              lVar23 = unaff_x19[0x20];
              uVar14 = *(undefined4 *)((long)unaff_x19 + 0x25c);
              uVar3 = *(undefined4 *)((long)unaff_x19 + 0x214);
              if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar13 = 0x20;
              lVar23 = FUN_03570fc4(0x20,lVar23,1,uVar14,uVar3,&stack0x000001bc,0);
              if (lVar23 == 0) {
                if (*(uint *)(unaff_x21 + 0x18) <= uVar25) goto LAB_035660f8;
                *puVar34 = 3;
                lVar23 = unaff_x19[0x20];
                uVar14 = *(undefined4 *)((long)unaff_x19 + 0x25c);
                uVar3 = *(undefined4 *)((long)unaff_x19 + 0x214);
                if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar13 = 3;
                lVar23 = FUN_03570fc4(3,lVar23,1,uVar14,uVar3,&stack0x000001bc,0);
              }
            }
LAB_03564b5c:
            uVar16 = FUN_03597634(0);
            if ((uVar16 & 1) == 0) {
              plVar17 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,4);
              if ((int)uVar12 < 0x10000) {
                in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar12);
                lVar20 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
                if (plVar17 == (long *)0x0) goto LAB_03566068;
                if ((lVar20 != 0) &&
                   (lVar24 = thunk_FUN_01a89d6c(lVar20,*(undefined8 *)(*plVar17 + 0x40)),
                   lVar24 == 0)) goto LAB_035660fc;
                if ((int)plVar17[3] == 0) goto LAB_035660f8;
                plVar17[4] = lVar20;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar17 + 4,lVar20);
                if (unaff_x19[0x1f] == 0) goto LAB_03566068;
                lVar20 = FUN_036d3824(unaff_x19[0x1f],0);
                if ((lVar20 != 0) &&
                   (lVar24 = thunk_FUN_01a89d6c(lVar20,*(undefined8 *)(*plVar17 + 0x40)),
                   lVar24 == 0)) goto LAB_035660fc;
                if (*(uint *)(plVar17 + 3) < 2) goto LAB_035660f8;
                plVar17[5] = lVar20;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar17 + 5,lVar20);
                if (lVar23 == 0) goto LAB_03566068;
                in_stack_00000168._4_4_ = *(undefined4 *)(lVar23 + 0x14);
                lVar20 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,
                                            (long)&stack0x00000168 + 4);
                if ((lVar20 != 0) &&
                   (lVar24 = thunk_FUN_01a89d6c(lVar20,*(undefined8 *)(*plVar17 + 0x40)),
                   lVar24 == 0)) goto LAB_035660fc;
                if (*(uint *)(plVar17 + 3) < 3) goto LAB_035660f8;
                plVar17[6] = lVar20;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar17 + 6,lVar20);
                lVar20 = FUN_036d3824();
                if ((lVar20 != 0) &&
                   (lVar24 = thunk_FUN_01a89d6c(lVar20,*(undefined8 *)(*plVar17 + 0x40)),
                   lVar24 == 0)) goto LAB_035660fc;
                if (*(uint *)(plVar17 + 3) < 4) goto LAB_035660f8;
                plVar17[7] = lVar20;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar17 + 7,lVar20);
                puVar21 = (undefined8 *)OVRPlugin_TrackedKeyboardFlags_TypeInfo;
              }
              else {
                in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar12);
                lVar20 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
                if (plVar17 == (long *)0x0) goto LAB_03566068;
                if ((lVar20 != 0) &&
                   (lVar24 = thunk_FUN_01a89d6c(lVar20,*(undefined8 *)(*plVar17 + 0x40)),
                   lVar24 == 0)) goto LAB_035660fc;
                if ((int)plVar17[3] == 0) goto LAB_035660f8;
                plVar17[4] = lVar20;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar17 + 4,lVar20);
                if (unaff_x19[0x1f] == 0) goto LAB_03566068;
                lVar20 = FUN_036d3824(unaff_x19[0x1f],0);
                if ((lVar20 != 0) &&
                   (lVar24 = thunk_FUN_01a89d6c(lVar20,*(undefined8 *)(*plVar17 + 0x40)),
                   lVar24 == 0)) goto LAB_035660fc;
                if (*(uint *)(plVar17 + 3) < 2) goto LAB_035660f8;
                plVar17[5] = lVar20;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar17 + 5,lVar20);
                if (lVar23 == 0) goto LAB_03566068;
                in_stack_00000168._4_4_ = *(undefined4 *)(lVar23 + 0x14);
                lVar20 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,
                                            (long)&stack0x00000168 + 4);
                if ((lVar20 != 0) &&
                   (lVar24 = thunk_FUN_01a89d6c(lVar20,*(undefined8 *)(*plVar17 + 0x40)),
                   lVar24 == 0)) goto LAB_035660fc;
                if (*(uint *)(plVar17 + 3) < 3) goto LAB_035660f8;
                plVar17[6] = lVar20;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar17 + 6,lVar20);
                lVar20 = FUN_036d3824();
                if ((lVar20 != 0) &&
                   (lVar24 = thunk_FUN_01a89d6c(lVar20,*(undefined8 *)(*plVar17 + 0x40)),
                   lVar24 == 0)) goto LAB_035660fc;
                if (*(uint *)(plVar17 + 3) < 4) goto LAB_035660f8;
                plVar17[7] = lVar20;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar17 + 7,lVar20);
                puVar21 = (undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo;
              }
              uVar29 = FUN_025be8f4(*puVar21,plVar17,0);
              if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_0367b470(uVar29);
              uVar12 = uVar13;
            }
            else {
              uVar12 = uVar13;
              if (lVar23 == 0) goto LAB_03566068;
            }
          }
          if (*(char *)(lVar23 + 0x10) == '\x01') {
            lVar20 = *(long *)(lVar23 + 0x18);
            if (lVar20 == 0) goto LAB_03566068;
            iVar10 = *(int *)(lVar20 + 0x18);
            if (iVar10 == 0) {
              iVar10 = FUN_036d3364(lVar20,0);
              *(int *)(lVar20 + 0x18) = iVar10;
            }
            lVar20 = *plVar26;
            if (lVar20 == 0) goto LAB_03566068;
            iVar11 = *(int *)(lVar20 + 0x18);
            if (iVar11 == 0) {
              iVar11 = FUN_036d3364(lVar20,0);
              *(int *)(lVar20 + 0x18) = iVar11;
            }
            if (iVar10 == iVar11) {
              bVar5 = false;
            }
            else {
              plVar17 = *(long **)(lVar23 + 0x18);
              if (plVar17 == (long *)0x0) {
                plVar17 = (long *)0x0;
                *plVar26 = 0;
              }
              else {
                lVar20 = *(long *)OVRPlugin_OVRP_1_83_0_TypeInfo;
                bVar4 = *(byte *)(lVar20 + 0x130);
                if (*(byte *)(*plVar17 + 0x130) < bVar4) {
                  plVar30 = (long *)0x0;
                }
                else {
                  plVar30 = plVar17;
                  if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar4 * 8 + -8) != lVar20) {
                    plVar30 = (long *)0x0;
                  }
                }
                *plVar26 = (long)plVar30;
                if (*(byte *)(*plVar17 + 0x130) < bVar4) {
                  plVar17 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar4 * 8 + -8) != lVar20) {
                  plVar17 = (long *)0x0;
                }
              }
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar26,plVar17);
              bVar5 = true;
            }
          }
          else {
            bVar5 = false;
          }
          if ((*plVar1 == 0) || (lVar20 = *(long *)(*plVar1 + 0x38), lVar20 == 0))
          goto LAB_03566068;
          if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x19 + 0x92)) goto LAB_035660f8;
          lVar20 = lVar20 + (long)(int)*(uint *)(unaff_x19 + 0x92) * 0x178;
          plVar17 = (long *)(lVar20 + 0x30);
          *plVar17 = lVar23;
          *(undefined4 *)(lVar20 + 0x2c) = 0;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar17,lVar23);
          if ((*plVar1 == 0) || (lVar20 = *(long *)(*plVar1 + 0x38), lVar20 == 0))
          goto LAB_03566068;
          uVar13 = *(uint *)(unaff_x19 + 0x92);
          if (*(uint *)(lVar20 + 0x18) <= uVar13) goto LAB_035660f8;
          lVar24 = lVar20 + (long)(int)uVar13 * 0x178;
          *(short *)(lVar24 + 0x20) = (short)uVar12;
          *(undefined1 *)(lVar24 + 0x5c) = uStack00000000000001bc;
          if (*(uint *)(unaff_x21 + 0x18) <= uVar25) goto LAB_035660f8;
          lVar20 = lVar20 + (long)(int)uVar13 * 0x178;
          *(undefined8 *)(lVar20 + 0x24) =
               *(undefined8 *)(unaff_x21 + (long)(int)uVar25 * 0xc + 0x24);
          *(long *)(lVar20 + 0x38) = *plVar26;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          plVar30 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(char *)(lVar23 + 0x10) == '\x02') {
            plVar17 = *(long **)(lVar23 + 0x18);
            if (plVar17 == (long *)0x0) goto LAB_03566068;
            bVar4 = *(byte *)(*(long *)OVRPlugin_Sizei_TypeInfo + 0x130);
            if ((*(byte *)(*plVar17 + 0x130) < bVar4) ||
               (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar4 * 8 + -8) !=
                *(long *)OVRPlugin_Sizei_TypeInfo)) goto LAB_03566068;
            lVar31 = plVar17[4];
            lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar27 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar27 = *plVar30;
            }
            uVar12 = FUN_03558224(lVar31,plVar17,*(long *)(lVar27 + 0xb8),
                                  *(undefined8 *)(*(long *)(lVar27 + 0xb8) + 8));
            *(uint *)(unaff_x19 + 0x24) = uVar12;
            lVar27 = **(long **)(*plVar30 + 0xb8);
            if (lVar27 == 0) goto LAB_03566068;
            if (*(uint *)(lVar27 + 0x18) <= uVar12) goto LAB_035660f8;
            lVar27 = lVar27 + (long)(int)uVar12 * 0x38;
            *(int *)(lVar27 + 0x54) = *(int *)(lVar27 + 0x54) + 1;
            if ((*plVar1 == 0) || (lVar27 = *(long *)(*plVar1 + 0x38), lVar27 == 0))
            goto LAB_03566068;
            if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x92)) goto LAB_035660f8;
            lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x92) * 0x178;
            *(undefined4 *)(lVar27 + 0x2c) = 1;
            lVar31 = unaff_x19[0x24];
            *(undefined8 *)(lVar27 + 0x40) = plVar17;
            *(int *)(lVar27 + 0x58) = (int)lVar31;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((undefined8 *)(lVar27 + 0x40),plVar17);
            plVar30 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
            goto LAB_03566068;
            uVar12 = *(uint *)(unaff_x19 + 0x92);
            if (*(uint *)(lVar27 + 0x18) <= uVar12) goto LAB_035660f8;
            *(undefined4 *)(lVar27 + (long)(int)uVar12 * 0x178 + 0x48) =
                 *(undefined4 *)(lVar23 + 0x28);
            *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
            *(int *)(unaff_x19 + 0x24) = (int)lVar15;
            iStack0000000000000024 = iStack0000000000000024 + 1;
            plVar17 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
          }
          else {
            if (bVar5) {
              lVar20 = *plVar26;
              if (lVar20 == 0) goto LAB_03566068;
              iVar10 = *(int *)(lVar20 + 0x18);
              if (iVar10 == 0) {
                iVar10 = FUN_036d3364(lVar20,0);
                *(int *)(lVar20 + 0x18) = iVar10;
              }
              lVar20 = unaff_x19[0x1f];
              if (lVar20 == 0) goto LAB_03566068;
              iVar11 = *(int *)(lVar20 + 0x18);
              if (iVar11 == 0) {
                iVar11 = FUN_036d3364(lVar20,0);
                *(int *)(lVar20 + 0x18) = iVar11;
              }
              if (iVar10 != iVar11) {
                uVar16 = FUN_0359778c(0);
                if ((uVar16 & 1) == 0) {
                  if (*plVar26 == 0) goto LAB_03566068;
                  lVar20 = *(long *)(*plVar26 + 0x20);
                }
                else {
                  if (*plVar26 == 0) goto LAB_03566068;
                  uVar29 = *(undefined8 *)(*plVar26 + 0x20);
                  lVar20 = *plVar28;
                  if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  lVar20 = FUN_03594e9c(lVar20,uVar29,0);
                }
                *plVar28 = lVar20;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar28);
                lVar20 = *plVar30;
                lVar24 = *plVar28;
                lVar32 = *plVar26;
                if (*(int *)(lVar20 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar20 = *plVar30;
                }
                uVar14 = FUN_03557fec(lVar24,lVar32,*(long *)(lVar20 + 0xb8),
                                      *(undefined8 *)(*(long *)(lVar20 + 0xb8) + 8));
                *(undefined4 *)(unaff_x19 + 0x24) = uVar14;
              }
            }
            if (*(long *)(lVar23 + 0x20) == 0) goto LAB_03566068;
            iVar10 = FUN_03776eb8(*(long *)(lVar23 + 0x20),0);
            if (0 < iVar10) {
              if (*(long *)(lVar23 + 0x20) == 0) goto LAB_03566068;
              lVar20 = *plVar26;
              lVar24 = *plVar28;
              uVar14 = FUN_03776eb8(*(long *)(lVar23 + 0x20),0);
              if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)OVRPlugin_Sizef_TypeInfo);
              }
              lVar23 = FUN_03594928(lVar20,lVar24,uVar14,0);
              *plVar28 = lVar23;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar28,lVar23);
              lVar23 = *plVar30;
              lVar20 = *plVar28;
              lVar24 = *plVar26;
              if (*(int *)(lVar23 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar23 = *plVar30;
              }
              uVar14 = FUN_03557fec(lVar20,lVar24,*(long *)(lVar23 + 0xb8),
                                    *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 8));
              bVar5 = true;
              *(undefined4 *)(unaff_x19 + 0x24) = uVar14;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar16 = FUN_026b63d8(uVar12,0);
            plVar17 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
            if ((uVar12 != 0x200b) && ((uVar16 & 1) == 0)) {
              lVar23 = *plVar30;
              if (*(int *)(lVar23 + 0xe0) == 0) {
                thunk_FUN_01a58e78(lVar23);
                lVar23 = *plVar30;
              }
              lVar20 = **(long **)(lVar23 + 0xb8);
              if (lVar20 == 0) goto LAB_03566068;
              uVar12 = *(uint *)(unaff_x19 + 0x24);
              if (*(uint *)(lVar20 + 0x18) <= uVar12) goto LAB_035660f8;
              if (*(int *)(lVar20 + (long)(int)uVar12 * 0x38 + 0x54) < 0x3fff) {
                if (*(int *)(lVar23 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(lVar23);
                  lVar20 = **(long **)(*plVar30 + 0xb8);
                  if (lVar20 == 0) goto LAB_03566068;
                  uVar12 = *(uint *)(unaff_x19 + 0x24);
                }
              }
              else {
                lVar23 = *plVar28;
                uVar29 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
                FUN_0369922c(uVar29,lVar23,0);
                lVar23 = *plVar30;
                lVar20 = *plVar26;
                if (*(int *)(lVar23 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar23 = *plVar30;
                }
                uVar12 = FUN_03557fec(uVar29,lVar20,*(long *)(lVar23 + 0xb8),
                                      *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 8));
                *(uint *)(unaff_x19 + 0x24) = uVar12;
                lVar20 = **(long **)(*plVar30 + 0xb8);
                if (lVar20 == 0) goto LAB_03566068;
              }
              if (*(uint *)(lVar20 + 0x18) <= uVar12) goto LAB_035660f8;
              lVar20 = lVar20 + (long)(int)uVar12 * 0x38;
              *(int *)(lVar20 + 0x54) = *(int *)(lVar20 + 0x54) + 1;
            }
            if ((*plVar1 == 0) || (lVar23 = *(long *)(*plVar1 + 0x38), lVar23 == 0))
            goto LAB_03566068;
            if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x92)) goto LAB_035660f8;
            *(long *)(lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x92) * 0x178 + 0x50) = *plVar28;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            if ((*plVar1 == 0) || (lVar23 = *(long *)(*plVar1 + 0x38), lVar23 == 0))
            goto LAB_03566068;
            if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x92)) goto LAB_035660f8;
            uVar12 = *(uint *)(unaff_x19 + 0x24);
            *(uint *)(lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x92) * 0x178 + 0x58) = uVar12;
            lVar23 = *plVar30;
            if (*(int *)(lVar23 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar23 = *plVar30;
              uVar12 = *(uint *)(unaff_x19 + 0x24);
            }
            lVar20 = **(long **)(lVar23 + 0xb8);
            if (lVar20 == 0) goto LAB_03566068;
            if (*(uint *)(lVar20 + 0x18) <= uVar12) goto LAB_035660f8;
            *(bool *)(lVar20 + (long)(int)uVar12 * 0x38 + 0x41) = bVar5;
            if (bVar5) {
              if (*(int *)(lVar23 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar20 = **(long **)(*plVar30 + 0xb8);
                if (lVar20 == 0) goto LAB_03566068;
                uVar12 = *(uint *)(unaff_x19 + 0x24);
              }
              if (*(uint *)(lVar20 + 0x18) <= uVar12) goto LAB_035660f8;
              plVar18 = (long *)(lVar20 + (long)(int)uVar12 * 0x38 + 0x48);
              *plVar18 = lVar27;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar18,lVar27);
              unaff_x19[0x20] = lVar31;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar26);
              unaff_x19[0x23] = lVar27;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar28,lVar27);
              *(int *)(unaff_x19 + 0x24) = (int)lVar15;
            }
            uVar12 = *(uint *)(unaff_x19 + 0x92);
          }
LAB_0356571c:
          *(uint *)(unaff_x19 + 0x92) = uVar12 + 1;
        }
        uVar12 = *(uint *)(unaff_x21 + 0x18);
        uVar25 = uVar25 + 1;
      } while ((int)uVar25 < (int)uVar12);
    }
    if (*(char *)((long)unaff_x19 + 0x3f5) != '\0') {
      *(undefined1 *)((long)unaff_x19 + 0x3f5) = 0;
LAB_03565748:
      return (int)unaff_x19[0x92];
    }
    lVar15 = *plVar1;
    if (lVar15 != 0) {
      *(int *)(lVar15 + 0x1c) = iStack0000000000000024;
      lVar27 = *plVar30;
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar27 = *plVar30;
      }
      lVar27 = *(long *)(*(long *)(lVar27 + 0xb8) + 8);
      if (lVar27 != 0) {
        uVar12 = FUN_0219b384(lVar27,*(undefined8 *)PTR_DAT_03ceb270);
        *(uint *)(lVar15 + 0x34) = uVar12;
        if (*plVar1 != 0) {
          plVar26 = (long *)(*plVar1 + 0x60);
          lVar15 = *plVar26;
          if (lVar15 != 0) {
            uVar16 = (ulong)uVar12;
            if (*(int *)(lVar15 + 0x18) < (int)uVar12) {
              if (*(int *)(*plVar17 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_01ff02b8(plVar26,uVar16,0,*(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo);
            }
            if (unaff_x19[0xe1] != 0) {
              plVar26 = unaff_x19 + 0xe1;
              if (*(int *)(unaff_x19[0xe1] + 0x18) < (int)uVar12) {
                uVar14 = FUN_036c1d60(uVar12 + 1,0);
                if (*(int *)(*plVar17 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*plVar17);
                }
                FUN_01ff025c(plVar26,uVar14,*(undefined8 *)OVRSystemPerfMetrics_PerfMetrics_TypeInfo
                            );
              }
              if (*(char *)((long)unaff_x19 + 0x321) != '\0') {
                if (*plVar1 == 0) goto LAB_03566068;
                plVar28 = (long *)(*plVar1 + 0x38);
                lVar15 = *plVar28;
                if (lVar15 == 0) goto LAB_03566068;
                iVar10 = (int)unaff_x19[0x92];
                if (0x100 < *(int *)(lVar15 + 0x18) - iVar10) {
                  iVar11 = 0x100;
                  if (0x100 < iVar10 + 1) {
                    iVar11 = iVar10 + 1;
                  }
                  if (*(int *)(*plVar17 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  FUN_01ff02b8(plVar28,iVar11,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
                  plVar30 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                }
              }
              fVar6 = DAT_00d38798;
              if (0 < (int)uVar12) {
                lVar15 = 0;
                uVar33 = 0;
                lVar27 = 0x54;
                lVar31 = 0x20;
                do {
                  fVar38 = (float)uVar19;
                  if (uVar33 != 0) {
                    lVar23 = *plVar26;
                    if (lVar23 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_035660f8;
                    uVar29 = *(undefined8 *)(lVar23 + uVar33 * 8 + 0x20);
                    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar19 = FUN_036d35a8(uVar29,0,0);
                    if ((uVar19 & 1) != 0) {
                      lVar23 = *plVar30;
                      plVar28 = (long *)*plVar26;
                      if (*(int *)(lVar23 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar23 = *plVar30;
                      }
                      lVar23 = **(long **)(lVar23 + 0xb8);
                      if (lVar23 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_035660f8;
                      lVar23 = lVar23 + lVar27;
                      in_stack_00000160 = *(undefined8 *)(lVar23 + -4);
                      in_stack_00000158 = *(undefined8 *)(lVar23 + -0xc);
                      in_stack_00000150 = *(undefined8 *)(lVar23 + -0x14);
                      in_stack_00000148 = *(undefined8 *)(lVar23 + -0x1c);
                      uVar29 = *(undefined8 *)(lVar23 + -0x24);
                      in_stack_00000138 = *(undefined8 *)(lVar23 + -0x2c);
                      in_stack_00000130 = *(undefined8 *)(lVar23 + -0x34);
                      in_stack_00000140 = uVar29;
                      lVar23 = FUN_0359e964();
                      fVar38 = (float)uVar29;
                      if (plVar28 == (long *)0x0) goto LAB_03566068;
                      if ((lVar23 != 0) &&
                         (lVar20 = thunk_FUN_01a89d6c(lVar23,*(undefined8 *)(*plVar28 + 0x40)),
                         lVar20 == 0)) {
LAB_035660fc:
                        uVar29 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6b14(uVar29,0);
                      }
                      if (*(uint *)(plVar28 + 3) <= uVar33) goto LAB_035660f8;
                      plVar28[uVar33 + 4] = lVar23;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                ((long)plVar28 + lVar31,lVar23);
                      plVar30 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                      if ((*plVar1 == 0) || (lVar23 = *(long *)(*plVar1 + 0x60), lVar23 == 0))
                      goto LAB_03566068;
                      if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_035660f8;
                      puVar21 = (undefined8 *)(lVar23 + lVar15 + 0x30);
                      *puVar21 = 0;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar21,0);
                    }
                    if (unaff_x19[0x70] == 0) goto LAB_03566068;
                    fVar35 = (float)FUN_036dba50(unaff_x19[0x70],0);
                    lVar23 = *plVar26;
                    if (lVar23 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_035660f8;
                    lVar23 = *(long *)(lVar23 + uVar33 * 8 + 0x20);
                    if ((lVar23 == 0) ||
                       (fVar37 = fVar38, lVar23 = FUN_037b4844(lVar23,0), lVar23 == 0))
                    goto LAB_03566068;
                    fVar36 = (float)FUN_036dba50(lVar23,0);
                    fVar38 = (fVar38 - fVar37) * (fVar38 - fVar37);
                    uVar19 = (ulong)(uint)fVar38;
                    if (fVar6 <= (fVar35 - fVar36) * (fVar35 - fVar36) + fVar38) {
                      lVar23 = *plVar26;
                      if (lVar23 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_035660f8;
                      lVar23 = *(long *)(lVar23 + uVar33 * 8 + 0x20);
                      if (lVar23 == 0) goto LAB_03566068;
                      lVar23 = FUN_037b4844(lVar23,0);
                      if ((unaff_x19[0x70] == 0) || (FUN_036dba50(unaff_x19[0x70],0), lVar23 == 0))
                      goto LAB_03566068;
                      FUN_036dbae0(lVar23,0);
                    }
                    lVar23 = *plVar26;
                    if (lVar23 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_035660f8;
                    lVar23 = *(long *)(lVar23 + uVar33 * 8 + 0x20);
                    if (lVar23 == 0) goto LAB_03566068;
                    uVar29 = *(undefined8 *)(lVar23 + 0xf0);
                    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar22 = FUN_036d35a8(uVar29,0,0);
                    if ((uVar22 & 1) == 0) {
                      lVar23 = *plVar26;
                      if (lVar23 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_035660f8;
                      lVar23 = *(long *)(lVar23 + uVar33 * 8 + 0x20);
                      if ((lVar23 == 0) || (lVar23 = *(long *)(lVar23 + 0xf0), lVar23 == 0))
                      goto LAB_03566068;
                      iVar10 = FUN_036d3364(lVar23,0);
                      lVar23 = *plVar30;
                      if (*(int *)(lVar23 + 0xe0) == 0) {
                        thunk_FUN_01a58e78(lVar23);
                        lVar23 = *plVar30;
                      }
                      lVar23 = **(long **)(lVar23 + 0xb8);
                      if (lVar23 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_035660f8;
                      lVar23 = *(long *)(lVar23 + lVar27 + -0x1c);
                      if (lVar23 == 0) goto LAB_03566068;
                      iVar11 = FUN_036d3364(lVar23,0);
                      if (iVar10 != iVar11) goto LAB_03565b98;
                    }
                    else {
LAB_03565b98:
                      lVar23 = *plVar26;
                      if (lVar23 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_035660f8;
                      lVar20 = *plVar30;
                      lVar23 = *(long *)(lVar23 + uVar33 * 8 + 0x20);
                      if (*(int *)(lVar20 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar20 = *plVar30;
                      }
                      lVar20 = **(long **)(lVar20 + 0xb8);
                      if (lVar20 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar20 + 0x18) <= uVar33) goto LAB_035660f8;
                      if (lVar23 == 0) goto LAB_03566068;
                      thunk_FUN_0359e5ac(lVar23,*(undefined8 *)(lVar20 + lVar27 + -0x1c),0);
                      lVar23 = *plVar26;
                      if (lVar23 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_035660f8;
                      lVar20 = **(long **)(*plVar30 + 0xb8);
                      if (lVar20 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar20 + 0x18) <= uVar33) goto LAB_035660f8;
                      lVar23 = *(long *)(lVar23 + uVar33 * 8 + 0x20);
                      if (lVar23 == 0) goto LAB_03566068;
                      *(undefined8 *)(lVar23 + 0xd8) = *(undefined8 *)(lVar20 + lVar27 + -0x2c);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                      lVar23 = *plVar26;
                      if (lVar23 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_035660f8;
                      lVar20 = **(long **)(*plVar30 + 0xb8);
                      if (lVar20 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar20 + 0x18) <= uVar33) goto LAB_035660f8;
                      lVar23 = *(long *)(lVar23 + uVar33 * 8 + 0x20);
                      if (lVar23 == 0) goto LAB_03566068;
                      *(undefined8 *)(lVar23 + 0xe0) = *(undefined8 *)(lVar20 + lVar27 + -0x24);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    }
                    lVar23 = *plVar30;
                    if (*(int *)(lVar23 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar23 = *plVar30;
                    }
                    lVar20 = **(long **)(lVar23 + 0xb8);
                    if (lVar20 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar20 + 0x18) <= uVar33) goto LAB_035660f8;
                    if (*(char *)(lVar20 + lVar27 + -0x13) != '\0') {
                      lVar24 = *plVar26;
                      if (lVar24 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_035660f8;
                      lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                      if (*(int *)(lVar23 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar20 = **(long **)(*plVar30 + 0xb8);
                        if (lVar20 == 0) goto LAB_03566068;
                      }
                      if (*(uint *)(lVar20 + 0x18) <= uVar33) goto LAB_035660f8;
                      if (lVar24 == 0) goto LAB_03566068;
                      FUN_0359e608(lVar24,*(undefined8 *)(lVar20 + lVar27 + -0x1c),0);
                      lVar23 = *plVar26;
                      if (lVar23 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_035660f8;
                      lVar20 = **(long **)(*plVar30 + 0xb8);
                      if (lVar20 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar20 + 0x18) <= uVar33) goto LAB_035660f8;
                      lVar23 = *(long *)(lVar23 + uVar33 * 8 + 0x20);
                      if (lVar23 == 0) goto LAB_03566068;
                      *(undefined8 *)(lVar23 + 0x100) = *(undefined8 *)(lVar20 + lVar27 + -0xc);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (lVar23 + 0x100);
                    }
                  }
                  lVar23 = *plVar30;
                  if (*(int *)(lVar23 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar23 = *plVar30;
                  }
                  lVar23 = **(long **)(lVar23 + 0xb8);
                  if (lVar23 == 0) goto LAB_03566068;
                  if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_035660f8;
                  if ((*plVar1 == 0) || (lVar20 = *(long *)(*plVar1 + 0x60), lVar20 == 0))
                  goto LAB_03566068;
                  if (*(uint *)(lVar20 + 0x18) <= uVar33) goto LAB_035660f8;
                  lVar24 = *(long *)(lVar20 + lVar15 + 0x30);
                  iVar10 = *(int *)(lVar23 + lVar27);
                  if (lVar24 == 0) {
                    if (uVar33 == 0) {
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
                      FUN_03595600(&stack0x000000e0,unaff_x19[0x74],iVar10 + 1,0);
                      memcpy(&stack0x00000090,&stack0x000000e0,0x50);
                      if (*(int *)(lVar20 + 0x18) == 0) goto LAB_035660f8;
                      memcpy((void *)(lVar20 + lVar15 + 0x20),&stack0x00000090,0x50);
                      __dest = (void *)(lVar20 + 0x20);
                    }
                    else {
                      lVar23 = *plVar26;
                      if (lVar23 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_035660f8;
                      lVar23 = *(long *)(lVar23 + uVar33 * 8 + 0x20);
                      if (lVar23 == 0) goto LAB_03566068;
                      uVar29 = UnityEngine_Material__GetColorArray(lVar23,0);
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
                      FUN_03595600(&stack0x000000e0,uVar29,iVar10 + 1,0);
                      memcpy(&stack0x00000040,&stack0x000000e0,0x50);
                      if (*(uint *)(lVar20 + 0x18) <= uVar33) goto LAB_035660f8;
                      __dest = (void *)(lVar20 + lVar15 + 0x20);
                      memcpy(__dest,&stack0x00000040,0x50);
                    }
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(__dest,0);
                  }
                  else {
                    iVar11 = *(int *)(lVar24 + 0x18);
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
                      FUN_03595b9c(lVar20 + lVar15 + 0x20,iVar10,0);
                    }
                    else if ((0 < iVar10) && (*(char *)((long)unaff_x19 + 0x321) != '\0')) {
                      iVar2 = iVar11 + 3;
                      if (-1 < iVar11) {
                        iVar2 = iVar11;
                      }
                      if (0x100 < (iVar2 >> 2) - iVar10) goto LAB_03565e08;
                    }
                  }
                  plVar30 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if ((*plVar1 == 0) || (lVar23 = *(long *)(*plVar1 + 0x60), lVar23 == 0))
                  goto LAB_03566068;
                  lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar20 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar20 = *plVar30;
                  }
                  lVar20 = **(long **)(lVar20 + 0xb8);
                  if (lVar20 == 0) goto LAB_03566068;
                  if ((*(uint *)(lVar20 + 0x18) <= uVar33) || (*(uint *)(lVar23 + 0x18) <= uVar33))
                  goto LAB_035660f8;
                  *(undefined8 *)(lVar23 + lVar15 + 0x68) = *(undefined8 *)(lVar20 + lVar27 + -0x1c)
                  ;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  uVar33 = uVar33 + 1;
                  lVar15 = lVar15 + 0x50;
                  lVar27 = lVar27 + 0x38;
                  lVar31 = lVar31 + 8;
                } while (uVar12 != uVar33);
              }
              lVar15 = *plVar26;
              if (lVar15 != 0) {
                lVar27 = (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3) + 0x20;
                do {
                  uVar12 = (uint)uVar16;
                  if ((int)*(uint *)(lVar15 + 0x18) <= (int)uVar12) goto LAB_03565748;
                  if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_035660f8;
                  uVar29 = *(undefined8 *)(lVar15 + lVar27);
                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar19 = FUN_036cee6c(uVar29,0,0);
                  if ((uVar19 & 1) == 0) goto LAB_03565748;
                  if ((*plVar1 == 0) || (lVar15 = *(long *)(*plVar1 + 0x60), lVar15 == 0)) break;
                  if ((int)uVar12 < *(int *)(lVar15 + 0x18)) {
                    lVar15 = *plVar26;
                    if (lVar15 == 0) break;
                    if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_035660f8;
                    if ((*(long *)(lVar15 + lVar27) == 0) ||
                       (lVar15 = FUN_037b514c(*(long *)(lVar15 + lVar27),0), lVar15 == 0)) break;
                    FUN_0390f3a4(lVar15,0,0);
                  }
                  lVar15 = *plVar26;
                  uVar16 = (ulong)(uVar12 + 1);
                  lVar27 = lVar27 + 8;
                } while (lVar15 != 0);
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


