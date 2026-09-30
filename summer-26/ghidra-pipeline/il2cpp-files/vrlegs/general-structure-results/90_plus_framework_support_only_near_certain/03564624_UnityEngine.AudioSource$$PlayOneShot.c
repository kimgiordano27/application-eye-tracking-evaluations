/*
FUNCTION_NAME: UnityEngine.AudioSource$$PlayOneShot
ENTRY_POINT: 03564624
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


undefined4 UnityEngine_AudioSource__PlayOneShot(undefined1 param_1 [16],ulong param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  float fVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  void *__dest;
  long lVar17;
  long *in_x9;
  long lVar18;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint uVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  undefined8 uVar23;
  long lVar24;
  long *plVar25;
  long *unaff_x25;
  undefined8 uVar26;
  ulong uVar27;
  long *unaff_x27;
  uint *puVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
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
  
  if (*(int *)(*in_x9 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar12 = FUN_03594e9c();
  unaff_x19[0xcc] = lVar12;
  puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0xcc);
  lVar12 = *(long *)puVar6;
  lVar21 = unaff_x19[0xcc];
  lVar24 = unaff_x19[0xcb];
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar12 = *(long *)puVar6;
  }
  uVar7 = FUN_03557fec(lVar21,lVar24,*(long *)(lVar12 + 0xb8),
                       *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
  *(uint *)(unaff_x19 + 0xcd) = uVar7;
  lVar12 = **(long **)(*(long *)puVar6 + 0xb8);
  if (lVar12 != 0) {
    if (*(uint *)(lVar12 + 0x18) <= uVar7) {
LAB_035660f8:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    *(undefined4 *)(lVar12 + (long)(int)uVar7 * 0x38 + 0x54) = 0;
    if ((int)unaff_x19[0x5c] == 6) {
      lVar12 = unaff_x19[0x5d];
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar13 = FUN_036cee6c(lVar12,0,0);
      puVar6 = PTR_DAT_03cbebc0;
      if (((uVar13 & 1) != 0) && (plVar25 = unaff_x19, *(char *)((long)unaff_x19 + 0x3f5) == '\0'))
      {
        while( true ) {
          plVar25 = (long *)plVar25[0x5d];
          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar13 = FUN_036cee6c(plVar25,0,0);
          if ((uVar13 & 1) == 0) goto LAB_035646fc;
          if (plVar25 == (long *)0x0) break;
          (**(code **)(*plVar25 + 0x528))
                    (plVar25,**(undefined8 **)(*(long *)puVar6 + 0xb8),
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
      uVar7 = *(uint *)(unaff_x21 + 0x18);
      plVar25 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if ((int)uVar7 < 1) {
        iStack0000000000000024 = 0;
      }
      else {
        uVar19 = 0;
        iStack0000000000000024 = 0;
        do {
          if (uVar7 <= uVar19) goto LAB_035660f8;
          puVar28 = (uint *)(unaff_x21 + (long)(int)uVar19 * 0xc + 0x20);
          if (*puVar28 == 0) break;
          if (*unaff_x20 == 0) goto LAB_03566068;
          plVar25 = (long *)(*unaff_x20 + 0x38);
          lVar21 = *plVar25;
          lVar12 = unaff_x19[0x92];
          if ((lVar21 == 0) || (*(int *)(lVar21 + 0x18) <= (int)lVar12)) {
            if (*(int *)(*unaff_x27 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_01ff02b8(plVar25,(int)lVar12 + 1,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
            uVar7 = *(uint *)(unaff_x21 + 0x18);
          }
          if (uVar7 <= uVar19) goto LAB_035660f8;
          uVar7 = *puVar28;
          if ((uVar7 == 0x3c) && (*(char *)((long)unaff_x19 + 0x302) != '\0')) {
            lVar12 = unaff_x19[0x24];
            uVar13 = FUN_03586568();
            uVar8 = uStack00000000000001b8;
            if ((uVar13 & 1) == 0) goto LAB_035649d0;
            if (*(uint *)(unaff_x21 + 0x18) <= uVar19) goto LAB_035660f8;
            iVar10 = *(int *)(unaff_x21 + (long)(int)uVar19 * 0xc + 0x24);
            if ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0) {
              *(undefined1 *)((long)unaff_x19 + 0x26a) = 1;
            }
            puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            plVar25 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            uVar19 = uStack00000000000001b8;
            if (*(int *)((long)unaff_x19 + 0x644) == 1) {
              lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar21 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar21 = *(long *)puVar6;
              }
              lVar21 = **(long **)(lVar21 + 0xb8);
              if (lVar21 != 0) {
                if (*(uint *)(unaff_x19 + 0x24) < *(uint *)(lVar21 + 0x18)) {
                  lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x24) * 0x38;
                  *(int *)(lVar21 + 0x54) = *(int *)(lVar21 + 0x54) + 1;
                  if ((*unaff_x20 != 0) && (lVar21 = *(long *)(*unaff_x20 + 0x38), lVar21 != 0)) {
                    if (*(uint *)(unaff_x19 + 0x92) < *(uint *)(lVar21 + 0x18)) {
                      uVar9 = *(undefined4 *)((long)unaff_x19 + 0x6a4);
                      lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x92) * 0x178;
                      *(short *)(lVar21 + 0x20) = (short)uVar9 + -0x2000;
                      *(undefined4 *)(lVar21 + 0x48) = uVar9;
                      *(long *)(lVar21 + 0x38) = *in_stack_00000038;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                      if ((*unaff_x20 != 0) && (lVar21 = *(long *)(*unaff_x20 + 0x38), lVar21 != 0))
                      {
                        if (*(uint *)(unaff_x19 + 0x92) < *(uint *)(lVar21 + 0x18)) {
                          *(long *)(lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x92) * 0x178 + 0x40)
                               = unaff_x19[0xd3];
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                          if ((*unaff_x20 != 0) &&
                             (lVar21 = *(long *)(*unaff_x20 + 0x38), lVar21 != 0)) {
                            uVar7 = *(uint *)(unaff_x19 + 0x92);
                            if (uVar7 < *(uint *)(lVar21 + 0x18)) {
                              *(int *)(lVar21 + (long)(int)uVar7 * 0x178 + 0x58) =
                                   (int)unaff_x19[0x24];
                              if ((unaff_x19[0xd3] != 0) &&
                                 (lVar24 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0),
                                 lVar24 != 0)) {
                                FUN_02215a88(lVar24,*(undefined4 *)((long)unaff_x19 + 0x6a4),
                                             &stack0x000000e0,
                                             *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
                                if (uVar7 < *(uint *)(lVar21 + 0x18)) {
                                  *(undefined8 *)(lVar21 + (long)(int)uVar7 * 0x178 + 0x30) =
                                       in_stack_000000e0;
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ();
                                  if ((*unaff_x20 != 0) &&
                                     (lVar21 = *(long *)(*unaff_x20 + 0x38), lVar21 != 0)) {
                                    uVar7 = *(uint *)(unaff_x19 + 0x92);
                                    if (uVar7 < *(uint *)(lVar21 + 0x18)) {
                                      uVar9 = *(undefined4 *)((long)unaff_x19 + 0x644);
                                      lVar24 = lVar21 + (long)(int)uVar7 * 0x178;
                                      *(int *)(lVar24 + 0x24) = iVar10;
                                      *(undefined4 *)(lVar24 + 0x2c) = uVar9;
                                      if (uVar8 < *(uint *)(unaff_x21 + 0x18)) {
                                        *(int *)(lVar21 + (long)(int)uVar7 * 0x178 + 0x28) =
                                             (*(int *)(unaff_x21 + (long)(int)uVar8 * 0xc + 0x24) -
                                             iVar10) + 1;
                                        *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
                                        *(int *)(unaff_x19 + 0x24) = (int)lVar12;
                                        iStack0000000000000024 = iStack0000000000000024 + 1;
                                        plVar25 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        unaff_x25 = in_stack_00000038;
                                        uVar19 = uVar8;
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
            lVar24 = unaff_x19[0x20];
            lVar21 = unaff_x19[0x23];
            lVar12 = unaff_x19[0x24];
            if (*(int *)((long)unaff_x19 + 0x644) != 0) goto LAB_03564aac;
            uVar8 = *(uint *)((long)unaff_x19 + 0x25c);
            if ((uVar8 >> 4 & 1) == 0) {
              if ((uVar8 >> 3 & 1) == 0) {
                if ((uVar8 >> 5 & 1) != 0) goto LAB_03564a00;
              }
              else {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar13 = FUN_026b8070(uVar7,0);
                if ((uVar13 & 1) != 0) {
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar7 = FUN_026b8594(uVar7,0);
                  goto LAB_03564aa8;
                }
              }
            }
            else {
LAB_03564a00:
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar13 = FUN_026b812c(uVar7,0);
              if ((uVar13 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar7 = FUN_026b8410(uVar7,0);
LAB_03564aa8:
                uVar7 = uVar7 & 0xffff;
              }
            }
LAB_03564aac:
            lVar17 = FUN_03591848();
            if (lVar17 == 0) {
              iVar10 = FUN_035975f8();
              if (*(uint *)(unaff_x21 + 0x18) <= uVar19) goto LAB_035660f8;
              if (iVar10 == 0) {
                uVar8 = 0x25a1;
              }
              else {
                uVar8 = FUN_035975f8(0);
              }
              *puVar28 = uVar8;
              lVar17 = unaff_x19[0x20];
              uVar9 = *(undefined4 *)((long)unaff_x19 + 0x25c);
              uVar2 = *(undefined4 *)((long)unaff_x19 + 0x214);
              if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              lVar17 = FUN_03570fc4(uVar8,lVar17,1,uVar9,uVar2,(long)&stack0x000001b8 + 4,0);
              if (lVar17 == 0) {
                lVar17 = FUN_03597770();
                if (lVar17 != 0) {
                  lVar17 = FUN_03597770(0);
                  if (lVar17 == 0) goto LAB_03566068;
                  if (0 < *(int *)(lVar17 + 0x18)) {
                    lVar17 = unaff_x19[0x20];
                    uVar23 = FUN_03597770(0);
                    uVar9 = *(undefined4 *)((long)unaff_x19 + 0x25c);
                    uVar2 = *(undefined4 *)((long)unaff_x19 + 0x214);
                    if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                    }
                    lVar17 = FUN_035714e4(uVar8,lVar17,uVar23,1,uVar9,uVar2,
                                          (long)&stack0x000001b8 + 4,0);
                    if (lVar17 != 0) goto LAB_03564b5c;
                  }
                }
                uVar23 = FUN_03597650(0);
                if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                }
                uVar13 = FUN_036cee6c(uVar23,0,0);
                if ((uVar13 & 1) != 0) {
                  uVar23 = FUN_03597650(0);
                  uVar9 = *(undefined4 *)((long)unaff_x19 + 0x25c);
                  uVar2 = *(undefined4 *)((long)unaff_x19 + 0x214);
                  if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                  }
                  lVar17 = FUN_03570fc4(uVar8,uVar23,1,uVar9,uVar2,(long)&stack0x000001b8 + 4,0);
                  if (lVar17 != 0) goto LAB_03564b5c;
                }
                if (*(uint *)(unaff_x21 + 0x18) <= uVar19) goto LAB_035660f8;
                *puVar28 = 0x20;
                lVar17 = unaff_x19[0x20];
                uVar9 = *(undefined4 *)((long)unaff_x19 + 0x25c);
                uVar2 = *(undefined4 *)((long)unaff_x19 + 0x214);
                if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar8 = 0x20;
                lVar17 = FUN_03570fc4(0x20,lVar17,1,uVar9,uVar2,(long)&stack0x000001b8 + 4,0);
                if (lVar17 == 0) {
                  if (*(uint *)(unaff_x21 + 0x18) <= uVar19) goto LAB_035660f8;
                  *puVar28 = 3;
                  lVar17 = unaff_x19[0x20];
                  uVar9 = *(undefined4 *)((long)unaff_x19 + 0x25c);
                  uVar2 = *(undefined4 *)((long)unaff_x19 + 0x214);
                  if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar8 = 3;
                  lVar17 = FUN_03570fc4(3,lVar17,1,uVar9,uVar2,(long)&stack0x000001b8 + 4,0);
                }
              }
LAB_03564b5c:
              uVar13 = FUN_03597634(0);
              if ((uVar13 & 1) == 0) {
                plVar25 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,4);
                if ((int)uVar7 < 0x10000) {
                  in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar7);
                  lVar15 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
                  if (plVar25 == (long *)0x0) goto LAB_03566068;
                  if ((lVar15 != 0) &&
                     (lVar18 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar25 + 0x40)),
                     lVar18 == 0)) goto LAB_035660fc;
                  if ((int)plVar25[3] == 0) goto LAB_035660f8;
                  plVar25[4] = lVar15;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (plVar25 + 4,lVar15);
                  if (unaff_x19[0x1f] == 0) goto LAB_03566068;
                  lVar15 = FUN_036d3824(unaff_x19[0x1f],0);
                  if ((lVar15 != 0) &&
                     (lVar18 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar25 + 0x40)),
                     lVar18 == 0)) goto LAB_035660fc;
                  if (*(uint *)(plVar25 + 3) < 2) goto LAB_035660f8;
                  plVar25[5] = lVar15;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (plVar25 + 5,lVar15);
                  if (lVar17 == 0) goto LAB_03566068;
                  in_stack_00000168._4_4_ = *(undefined4 *)(lVar17 + 0x14);
                  lVar15 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,
                                              (long)&stack0x00000168 + 4);
                  if ((lVar15 != 0) &&
                     (lVar18 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar25 + 0x40)),
                     lVar18 == 0)) goto LAB_035660fc;
                  if (*(uint *)(plVar25 + 3) < 3) goto LAB_035660f8;
                  plVar25[6] = lVar15;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (plVar25 + 6,lVar15);
                  lVar15 = FUN_036d3824();
                  if ((lVar15 != 0) &&
                     (lVar18 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar25 + 0x40)),
                     lVar18 == 0)) goto LAB_035660fc;
                  if (*(uint *)(plVar25 + 3) < 4) goto LAB_035660f8;
                  plVar25[7] = lVar15;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (plVar25 + 7,lVar15);
                  puVar16 = (undefined8 *)OVRPlugin_TrackedKeyboardFlags_TypeInfo;
                }
                else {
                  in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar7);
                  lVar15 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
                  if (plVar25 == (long *)0x0) goto LAB_03566068;
                  if ((lVar15 != 0) &&
                     (lVar18 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar25 + 0x40)),
                     lVar18 == 0)) goto LAB_035660fc;
                  if ((int)plVar25[3] == 0) goto LAB_035660f8;
                  plVar25[4] = lVar15;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (plVar25 + 4,lVar15);
                  if (unaff_x19[0x1f] == 0) goto LAB_03566068;
                  lVar15 = FUN_036d3824(unaff_x19[0x1f],0);
                  if ((lVar15 != 0) &&
                     (lVar18 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar25 + 0x40)),
                     lVar18 == 0)) goto LAB_035660fc;
                  if (*(uint *)(plVar25 + 3) < 2) goto LAB_035660f8;
                  plVar25[5] = lVar15;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (plVar25 + 5,lVar15);
                  if (lVar17 == 0) goto LAB_03566068;
                  in_stack_00000168._4_4_ = *(undefined4 *)(lVar17 + 0x14);
                  lVar15 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,
                                              (long)&stack0x00000168 + 4);
                  if ((lVar15 != 0) &&
                     (lVar18 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar25 + 0x40)),
                     lVar18 == 0)) goto LAB_035660fc;
                  if (*(uint *)(plVar25 + 3) < 3) goto LAB_035660f8;
                  plVar25[6] = lVar15;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (plVar25 + 6,lVar15);
                  lVar15 = FUN_036d3824();
                  if ((lVar15 != 0) &&
                     (lVar18 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar25 + 0x40)),
                     lVar18 == 0)) goto LAB_035660fc;
                  if (*(uint *)(plVar25 + 3) < 4) goto LAB_035660f8;
                  plVar25[7] = lVar15;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (plVar25 + 7,lVar15);
                  puVar16 = (undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo;
                }
                uVar23 = FUN_025be8f4(*puVar16,plVar25,0);
                if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_0367b470(uVar23);
                unaff_x25 = in_stack_00000038;
                uVar7 = uVar8;
              }
              else {
                unaff_x25 = in_stack_00000038;
                uVar7 = uVar8;
                if (lVar17 == 0) goto LAB_03566068;
              }
            }
            if (*(char *)(lVar17 + 0x10) == '\x01') {
              lVar15 = *(long *)(lVar17 + 0x18);
              if (lVar15 == 0) goto LAB_03566068;
              iVar10 = *(int *)(lVar15 + 0x18);
              if (iVar10 == 0) {
                iVar10 = FUN_036d3364(lVar15,0);
                *(int *)(lVar15 + 0x18) = iVar10;
              }
              lVar15 = *unaff_x25;
              if (lVar15 == 0) goto LAB_03566068;
              iVar11 = *(int *)(lVar15 + 0x18);
              if (iVar11 == 0) {
                iVar11 = FUN_036d3364(lVar15,0);
                *(int *)(lVar15 + 0x18) = iVar11;
              }
              if (iVar10 == iVar11) {
                bVar4 = false;
              }
              else {
                plVar25 = *(long **)(lVar17 + 0x18);
                if (plVar25 == (long *)0x0) {
                  plVar25 = (long *)0x0;
                  *unaff_x25 = 0;
                }
                else {
                  lVar15 = *(long *)OVRPlugin_OVRP_1_83_0_TypeInfo;
                  bVar3 = *(byte *)(lVar15 + 0x130);
                  if (*(byte *)(*plVar25 + 0x130) < bVar3) {
                    plVar20 = (long *)0x0;
                  }
                  else {
                    plVar20 = plVar25;
                    if (*(long *)(*(long *)(*plVar25 + 200) + (ulong)bVar3 * 8 + -8) != lVar15) {
                      plVar20 = (long *)0x0;
                    }
                  }
                  *unaff_x25 = (long)plVar20;
                  if (*(byte *)(*plVar25 + 0x130) < bVar3) {
                    plVar25 = (long *)0x0;
                  }
                  else if (*(long *)(*(long *)(*plVar25 + 200) + (ulong)bVar3 * 8 + -8) != lVar15) {
                    plVar25 = (long *)0x0;
                  }
                }
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25,plVar25)
                ;
                bVar4 = true;
              }
            }
            else {
              bVar4 = false;
            }
            if ((*unaff_x20 == 0) || (lVar15 = *(long *)(*unaff_x20 + 0x38), lVar15 == 0))
            goto LAB_03566068;
            if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x92)) goto LAB_035660f8;
            lVar15 = lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x92) * 0x178;
            plVar25 = (long *)(lVar15 + 0x30);
            *plVar25 = lVar17;
            *(undefined4 *)(lVar15 + 0x2c) = 0;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar25,lVar17);
            if ((*unaff_x20 == 0) || (lVar15 = *(long *)(*unaff_x20 + 0x38), lVar15 == 0))
            goto LAB_03566068;
            uVar8 = *(uint *)(unaff_x19 + 0x92);
            if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_035660f8;
            lVar18 = lVar15 + (long)(int)uVar8 * 0x178;
            *(short *)(lVar18 + 0x20) = (short)uVar7;
            *(undefined1 *)(lVar18 + 0x5c) = uStack00000000000001bc;
            if (*(uint *)(unaff_x21 + 0x18) <= uVar19) goto LAB_035660f8;
            lVar15 = lVar15 + (long)(int)uVar8 * 0x178;
            *(undefined8 *)(lVar15 + 0x24) =
                 *(undefined8 *)(unaff_x21 + (long)(int)uVar19 * 0xc + 0x24);
            *(long *)(lVar15 + 0x38) = *unaff_x25;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            plVar25 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(char *)(lVar17 + 0x10) == '\x02') {
              plVar20 = *(long **)(lVar17 + 0x18);
              if (plVar20 == (long *)0x0) goto LAB_03566068;
              bVar3 = *(byte *)(*(long *)OVRPlugin_Sizei_TypeInfo + 0x130);
              if ((*(byte *)(*plVar20 + 0x130) < bVar3) ||
                 (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar3 * 8 + -8) !=
                  *(long *)OVRPlugin_Sizei_TypeInfo)) goto LAB_03566068;
              lVar24 = plVar20[4];
              lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar21 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar21 = *plVar25;
              }
              uVar7 = FUN_03558224(lVar24,plVar20,*(long *)(lVar21 + 0xb8),
                                   *(undefined8 *)(*(long *)(lVar21 + 0xb8) + 8));
              *(uint *)(unaff_x19 + 0x24) = uVar7;
              lVar21 = **(long **)(*plVar25 + 0xb8);
              if (lVar21 == 0) goto LAB_03566068;
              if (*(uint *)(lVar21 + 0x18) <= uVar7) goto LAB_035660f8;
              lVar21 = lVar21 + (long)(int)uVar7 * 0x38;
              *(int *)(lVar21 + 0x54) = *(int *)(lVar21 + 0x54) + 1;
              if ((*unaff_x20 == 0) || (lVar21 = *(long *)(*unaff_x20 + 0x38), lVar21 == 0))
              goto LAB_03566068;
              if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x92)) goto LAB_035660f8;
              lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x92) * 0x178;
              *(undefined4 *)(lVar21 + 0x2c) = 1;
              lVar24 = unaff_x19[0x24];
              *(undefined8 *)(lVar21 + 0x40) = plVar20;
              *(int *)(lVar21 + 0x58) = (int)lVar24;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        ((undefined8 *)(lVar21 + 0x40),plVar20);
              plVar25 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if ((unaff_x19[0x6d] == 0) ||
                 (lVar21 = *(long *)(unaff_x19[0x6d] + 0x38), lVar21 == 0)) goto LAB_03566068;
              uVar7 = *(uint *)(unaff_x19 + 0x92);
              if (*(uint *)(lVar21 + 0x18) <= uVar7) goto LAB_035660f8;
              *(undefined4 *)(lVar21 + (long)(int)uVar7 * 0x178 + 0x48) =
                   *(undefined4 *)(lVar17 + 0x28);
              *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
              *(int *)(unaff_x19 + 0x24) = (int)lVar12;
              iStack0000000000000024 = iStack0000000000000024 + 1;
              unaff_x25 = in_stack_00000038;
              unaff_x27 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
            }
            else {
              if (bVar4) {
                lVar15 = *unaff_x25;
                if (lVar15 == 0) goto LAB_03566068;
                iVar10 = *(int *)(lVar15 + 0x18);
                if (iVar10 == 0) {
                  iVar10 = FUN_036d3364(lVar15,0);
                  *(int *)(lVar15 + 0x18) = iVar10;
                }
                lVar15 = unaff_x19[0x1f];
                if (lVar15 == 0) goto LAB_03566068;
                iVar11 = *(int *)(lVar15 + 0x18);
                if (iVar11 == 0) {
                  iVar11 = FUN_036d3364(lVar15,0);
                  *(int *)(lVar15 + 0x18) = iVar11;
                }
                if (iVar10 != iVar11) {
                  uVar13 = FUN_0359778c(0);
                  if ((uVar13 & 1) == 0) {
                    if (*unaff_x25 == 0) goto LAB_03566068;
                    uVar23 = *(undefined8 *)(*unaff_x25 + 0x20);
                  }
                  else {
                    if (*unaff_x25 == 0) goto LAB_03566068;
                    uVar26 = *(undefined8 *)(*unaff_x25 + 0x20);
                    uVar23 = *in_stack_00000028;
                    if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar23 = FUN_03594e9c(uVar23,uVar26,0);
                    unaff_x25 = in_stack_00000038;
                  }
                  *in_stack_00000028 = uVar23;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (in_stack_00000028);
                  lVar15 = *plVar25;
                  uVar23 = *in_stack_00000028;
                  lVar18 = *unaff_x25;
                  if (*(int *)(lVar15 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar15 = *plVar25;
                  }
                  uVar9 = FUN_03557fec(uVar23,lVar18,*(long *)(lVar15 + 0xb8),
                                       *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8));
                  *(undefined4 *)(unaff_x19 + 0x24) = uVar9;
                  unaff_x25 = in_stack_00000038;
                }
              }
              if (*(long *)(lVar17 + 0x20) == 0) goto LAB_03566068;
              iVar10 = FUN_03776eb8(*(long *)(lVar17 + 0x20),0);
              if (0 < iVar10) {
                if (*(long *)(lVar17 + 0x20) == 0) goto LAB_03566068;
                lVar15 = *unaff_x25;
                uVar23 = *in_stack_00000028;
                uVar9 = FUN_03776eb8(*(long *)(lVar17 + 0x20),0);
                if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*(long *)OVRPlugin_Sizef_TypeInfo);
                }
                uVar23 = FUN_03594928(lVar15,uVar23,uVar9,0);
                *in_stack_00000028 = uVar23;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (in_stack_00000028,uVar23);
                lVar17 = *plVar25;
                uVar23 = *in_stack_00000028;
                lVar15 = *unaff_x25;
                if (*(int *)(lVar17 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar17 = *plVar25;
                }
                uVar9 = FUN_03557fec(uVar23,lVar15,*(long *)(lVar17 + 0xb8),
                                     *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 8));
                bVar4 = true;
                *(undefined4 *)(unaff_x19 + 0x24) = uVar9;
                unaff_x25 = in_stack_00000038;
              }
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar13 = FUN_026b63d8(uVar7,0);
              unaff_x27 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
              if ((uVar7 != 0x200b) && ((uVar13 & 1) == 0)) {
                lVar17 = *plVar25;
                if (*(int *)(lVar17 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(lVar17);
                  lVar17 = *plVar25;
                }
                lVar15 = **(long **)(lVar17 + 0xb8);
                if (lVar15 == 0) goto LAB_03566068;
                uVar7 = *(uint *)(unaff_x19 + 0x24);
                if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_035660f8;
                if (*(int *)(lVar15 + (long)(int)uVar7 * 0x38 + 0x54) < 0x3fff) {
                  if (*(int *)(lVar17 + 0xe0) == 0) {
                    thunk_FUN_01a58e78(lVar17);
                    lVar15 = **(long **)(*plVar25 + 0xb8);
                    if (lVar15 == 0) goto LAB_03566068;
                    uVar7 = *(uint *)(unaff_x19 + 0x24);
                  }
                }
                else {
                  uVar26 = *in_stack_00000028;
                  uVar23 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
                  FUN_0369922c(uVar23,uVar26,0);
                  lVar17 = *plVar25;
                  lVar15 = *unaff_x25;
                  if (*(int *)(lVar17 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar17 = *plVar25;
                  }
                  uVar7 = FUN_03557fec(uVar23,lVar15,*(long *)(lVar17 + 0xb8),
                                       *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 8));
                  *(uint *)(unaff_x19 + 0x24) = uVar7;
                  lVar15 = **(long **)(*plVar25 + 0xb8);
                  if (lVar15 == 0) goto LAB_03566068;
                }
                if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_035660f8;
                lVar15 = lVar15 + (long)(int)uVar7 * 0x38;
                *(int *)(lVar15 + 0x54) = *(int *)(lVar15 + 0x54) + 1;
              }
              if ((*unaff_x20 == 0) || (lVar17 = *(long *)(*unaff_x20 + 0x38), lVar17 == 0))
              goto LAB_03566068;
              if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x92)) goto LAB_035660f8;
              *(undefined8 *)(lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x92) * 0x178 + 0x50) =
                   *in_stack_00000028;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              if ((*unaff_x20 == 0) || (lVar17 = *(long *)(*unaff_x20 + 0x38), lVar17 == 0))
              goto LAB_03566068;
              if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x92)) goto LAB_035660f8;
              uVar7 = *(uint *)(unaff_x19 + 0x24);
              *(uint *)(lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x92) * 0x178 + 0x58) = uVar7;
              lVar17 = *plVar25;
              if (*(int *)(lVar17 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar17 = *plVar25;
                uVar7 = *(uint *)(unaff_x19 + 0x24);
              }
              lVar15 = **(long **)(lVar17 + 0xb8);
              if (lVar15 == 0) goto LAB_03566068;
              if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_035660f8;
              *(bool *)(lVar15 + (long)(int)uVar7 * 0x38 + 0x41) = bVar4;
              if (bVar4) {
                if (*(int *)(lVar17 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar15 = **(long **)(*plVar25 + 0xb8);
                  if (lVar15 == 0) goto LAB_03566068;
                  uVar7 = *(uint *)(unaff_x19 + 0x24);
                }
                if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_035660f8;
                plVar20 = (long *)(lVar15 + (long)(int)uVar7 * 0x38 + 0x48);
                *plVar20 = lVar21;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar20,lVar21);
                unaff_x19[0x20] = lVar24;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25);
                unaff_x19[0x23] = lVar21;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (in_stack_00000028,lVar21);
                *(int *)(unaff_x19 + 0x24) = (int)lVar12;
              }
              uVar7 = *(uint *)(unaff_x19 + 0x92);
            }
LAB_0356571c:
            *(uint *)(unaff_x19 + 0x92) = uVar7 + 1;
          }
          uVar7 = *(uint *)(unaff_x21 + 0x18);
          uVar19 = uVar19 + 1;
        } while ((int)uVar19 < (int)uVar7);
      }
      if (*(char *)((long)unaff_x19 + 0x3f5) != '\0') {
        *(undefined1 *)((long)unaff_x19 + 0x3f5) = 0;
LAB_03565748:
        return (int)unaff_x19[0x92];
      }
      lVar12 = *unaff_x20;
      if (lVar12 != 0) {
        *(int *)(lVar12 + 0x1c) = iStack0000000000000024;
        lVar21 = *plVar25;
        if (*(int *)(lVar21 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar21 = *plVar25;
        }
        lVar21 = *(long *)(*(long *)(lVar21 + 0xb8) + 8);
        if (lVar21 != 0) {
          uVar7 = FUN_0219b384(lVar21,*(undefined8 *)PTR_DAT_03ceb270);
          *(uint *)(lVar12 + 0x34) = uVar7;
          if (*unaff_x20 != 0) {
            plVar20 = (long *)(*unaff_x20 + 0x60);
            lVar12 = *plVar20;
            if (lVar12 != 0) {
              uVar13 = (ulong)uVar7;
              if (*(int *)(lVar12 + 0x18) < (int)uVar7) {
                if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_01ff02b8(plVar20,uVar13,0,*(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo);
              }
              if (unaff_x19[0xe1] != 0) {
                plVar20 = unaff_x19 + 0xe1;
                if (*(int *)(unaff_x19[0xe1] + 0x18) < (int)uVar7) {
                  uVar9 = FUN_036c1d60(uVar7 + 1,0);
                  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                    thunk_FUN_01a58e78(*unaff_x27);
                  }
                  FUN_01ff025c(plVar20,uVar9,
                               *(undefined8 *)OVRSystemPerfMetrics_PerfMetrics_TypeInfo);
                }
                if (*(char *)((long)unaff_x19 + 0x321) != '\0') {
                  if (*unaff_x20 == 0) goto LAB_03566068;
                  plVar22 = (long *)(*unaff_x20 + 0x38);
                  lVar12 = *plVar22;
                  if (lVar12 == 0) goto LAB_03566068;
                  iVar10 = (int)unaff_x19[0x92];
                  if (0x100 < *(int *)(lVar12 + 0x18) - iVar10) {
                    iVar11 = 0x100;
                    if (0x100 < iVar10 + 1) {
                      iVar11 = iVar10 + 1;
                    }
                    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    FUN_01ff02b8(plVar22,iVar11,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
                    plVar25 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  }
                }
                fVar5 = DAT_00d38798;
                if (0 < (int)uVar7) {
                  lVar12 = 0;
                  uVar27 = 0;
                  lVar21 = 0x54;
                  lVar24 = 0x20;
                  do {
                    fVar32 = (float)param_2;
                    if (uVar27 != 0) {
                      lVar17 = *plVar20;
                      if (lVar17 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
                      uVar23 = *(undefined8 *)(lVar17 + uVar27 * 8 + 0x20);
                      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar14 = FUN_036d35a8(uVar23,0,0);
                      if ((uVar14 & 1) != 0) {
                        lVar17 = *plVar25;
                        plVar22 = (long *)*plVar20;
                        if (*(int *)(lVar17 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                          lVar17 = *plVar25;
                        }
                        lVar17 = **(long **)(lVar17 + 0xb8);
                        if (lVar17 == 0) goto LAB_03566068;
                        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
                        lVar17 = lVar17 + lVar21;
                        in_stack_00000160 = *(undefined8 *)(lVar17 + -4);
                        in_stack_00000158 = *(undefined8 *)(lVar17 + -0xc);
                        in_stack_00000150 = *(undefined8 *)(lVar17 + -0x14);
                        in_stack_00000148 = *(undefined8 *)(lVar17 + -0x1c);
                        uVar23 = *(undefined8 *)(lVar17 + -0x24);
                        in_stack_00000138 = *(undefined8 *)(lVar17 + -0x2c);
                        in_stack_00000130 = *(undefined8 *)(lVar17 + -0x34);
                        in_stack_00000140 = uVar23;
                        lVar17 = FUN_0359e964();
                        fVar32 = (float)uVar23;
                        if (plVar22 == (long *)0x0) goto LAB_03566068;
                        if ((lVar17 != 0) &&
                           (lVar15 = thunk_FUN_01a89d6c(lVar17,*(undefined8 *)(*plVar22 + 0x40)),
                           lVar15 == 0)) {
LAB_035660fc:
                          uVar23 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6b14(uVar23,0);
                        }
                        if (*(uint *)(plVar22 + 3) <= uVar27) goto LAB_035660f8;
                        plVar22[uVar27 + 4] = lVar17;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  ((long)plVar22 + lVar24,lVar17);
                        plVar25 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                        if ((*unaff_x20 == 0) ||
                           (lVar17 = *(long *)(*unaff_x20 + 0x60), lVar17 == 0)) goto LAB_03566068;
                        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
                        puVar16 = (undefined8 *)(lVar17 + lVar12 + 0x30);
                        *puVar16 = 0;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar16,0)
                        ;
                      }
                      if (unaff_x19[0x70] == 0) goto LAB_03566068;
                      fVar29 = (float)FUN_036dba50(unaff_x19[0x70],0);
                      lVar17 = *plVar20;
                      if (lVar17 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
                      lVar17 = *(long *)(lVar17 + uVar27 * 8 + 0x20);
                      if ((lVar17 == 0) ||
                         (fVar31 = fVar32, lVar17 = FUN_037b4844(lVar17,0), lVar17 == 0))
                      goto LAB_03566068;
                      fVar30 = (float)FUN_036dba50(lVar17,0);
                      fVar32 = (fVar32 - fVar31) * (fVar32 - fVar31);
                      param_2 = (ulong)(uint)fVar32;
                      if (fVar5 <= (fVar29 - fVar30) * (fVar29 - fVar30) + fVar32) {
                        lVar17 = *plVar20;
                        if (lVar17 == 0) goto LAB_03566068;
                        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
                        lVar17 = *(long *)(lVar17 + uVar27 * 8 + 0x20);
                        if (lVar17 == 0) goto LAB_03566068;
                        lVar17 = FUN_037b4844(lVar17,0);
                        if ((unaff_x19[0x70] == 0) || (FUN_036dba50(unaff_x19[0x70],0), lVar17 == 0)
                           ) goto LAB_03566068;
                        FUN_036dbae0(lVar17,0);
                      }
                      lVar17 = *plVar20;
                      if (lVar17 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
                      lVar17 = *(long *)(lVar17 + uVar27 * 8 + 0x20);
                      if (lVar17 == 0) goto LAB_03566068;
                      uVar23 = *(undefined8 *)(lVar17 + 0xf0);
                      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar14 = FUN_036d35a8(uVar23,0,0);
                      if ((uVar14 & 1) == 0) {
                        lVar17 = *plVar20;
                        if (lVar17 == 0) goto LAB_03566068;
                        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
                        lVar17 = *(long *)(lVar17 + uVar27 * 8 + 0x20);
                        if ((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0xf0), lVar17 == 0))
                        goto LAB_03566068;
                        iVar10 = FUN_036d3364(lVar17,0);
                        lVar17 = *plVar25;
                        if (*(int *)(lVar17 + 0xe0) == 0) {
                          thunk_FUN_01a58e78(lVar17);
                          lVar17 = *plVar25;
                        }
                        lVar17 = **(long **)(lVar17 + 0xb8);
                        if (lVar17 == 0) goto LAB_03566068;
                        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
                        lVar17 = *(long *)(lVar17 + lVar21 + -0x1c);
                        if (lVar17 == 0) goto LAB_03566068;
                        iVar11 = FUN_036d3364(lVar17,0);
                        if (iVar10 != iVar11) goto LAB_03565b98;
                      }
                      else {
LAB_03565b98:
                        lVar17 = *plVar20;
                        if (lVar17 == 0) goto LAB_03566068;
                        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
                        lVar15 = *plVar25;
                        lVar17 = *(long *)(lVar17 + uVar27 * 8 + 0x20);
                        if (*(int *)(lVar15 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                          lVar15 = *plVar25;
                        }
                        lVar15 = **(long **)(lVar15 + 0xb8);
                        if (lVar15 == 0) goto LAB_03566068;
                        if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_035660f8;
                        if (lVar17 == 0) goto LAB_03566068;
                        thunk_FUN_0359e5ac(lVar17,*(undefined8 *)(lVar15 + lVar21 + -0x1c),0);
                        lVar17 = *plVar20;
                        if (lVar17 == 0) goto LAB_03566068;
                        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
                        lVar15 = **(long **)(*plVar25 + 0xb8);
                        if (lVar15 == 0) goto LAB_03566068;
                        if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_035660f8;
                        lVar17 = *(long *)(lVar17 + uVar27 * 8 + 0x20);
                        if (lVar17 == 0) goto LAB_03566068;
                        *(undefined8 *)(lVar17 + 0xd8) = *(undefined8 *)(lVar15 + lVar21 + -0x2c);
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                        lVar17 = *plVar20;
                        if (lVar17 == 0) goto LAB_03566068;
                        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
                        lVar15 = **(long **)(*plVar25 + 0xb8);
                        if (lVar15 == 0) goto LAB_03566068;
                        if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_035660f8;
                        lVar17 = *(long *)(lVar17 + uVar27 * 8 + 0x20);
                        if (lVar17 == 0) goto LAB_03566068;
                        *(undefined8 *)(lVar17 + 0xe0) = *(undefined8 *)(lVar15 + lVar21 + -0x24);
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                      }
                      lVar17 = *plVar25;
                      if (*(int *)(lVar17 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar17 = *plVar25;
                      }
                      lVar15 = **(long **)(lVar17 + 0xb8);
                      if (lVar15 == 0) goto LAB_03566068;
                      if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_035660f8;
                      if (*(char *)(lVar15 + lVar21 + -0x13) != '\0') {
                        lVar18 = *plVar20;
                        if (lVar18 == 0) goto LAB_03566068;
                        if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_035660f8;
                        lVar18 = *(long *)(lVar18 + uVar27 * 8 + 0x20);
                        if (*(int *)(lVar17 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                          lVar15 = **(long **)(*plVar25 + 0xb8);
                          if (lVar15 == 0) goto LAB_03566068;
                        }
                        if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_035660f8;
                        if (lVar18 == 0) goto LAB_03566068;
                        FUN_0359e608(lVar18,*(undefined8 *)(lVar15 + lVar21 + -0x1c),0);
                        lVar17 = *plVar20;
                        if (lVar17 == 0) goto LAB_03566068;
                        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
                        lVar15 = **(long **)(*plVar25 + 0xb8);
                        if (lVar15 == 0) goto LAB_03566068;
                        if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_035660f8;
                        lVar17 = *(long *)(lVar17 + uVar27 * 8 + 0x20);
                        if (lVar17 == 0) goto LAB_03566068;
                        *(undefined8 *)(lVar17 + 0x100) = *(undefined8 *)(lVar15 + lVar21 + -0xc);
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (lVar17 + 0x100);
                      }
                    }
                    lVar17 = *plVar25;
                    if (*(int *)(lVar17 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar17 = *plVar25;
                    }
                    lVar17 = **(long **)(lVar17 + 0xb8);
                    if (lVar17 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
                    if ((*unaff_x20 == 0) || (lVar15 = *(long *)(*unaff_x20 + 0x60), lVar15 == 0))
                    goto LAB_03566068;
                    if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_035660f8;
                    lVar18 = *(long *)(lVar15 + lVar12 + 0x30);
                    iVar10 = *(int *)(lVar17 + lVar21);
                    if (lVar18 == 0) {
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
                        FUN_03595600(&stack0x000000e0,unaff_x19[0x74],iVar10 + 1,0);
                        memcpy(&stack0x00000090,&stack0x000000e0,0x50);
                        if (*(int *)(lVar15 + 0x18) == 0) goto LAB_035660f8;
                        memcpy((void *)(lVar15 + lVar12 + 0x20),&stack0x00000090,0x50);
                        __dest = (void *)(lVar15 + 0x20);
                      }
                      else {
                        lVar17 = *plVar20;
                        if (lVar17 == 0) goto LAB_03566068;
                        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
                        lVar17 = *(long *)(lVar17 + uVar27 * 8 + 0x20);
                        if (lVar17 == 0) goto LAB_03566068;
                        uVar23 = UnityEngine_Material__GetColorArray(lVar17,0);
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
                        FUN_03595600(&stack0x000000e0,uVar23,iVar10 + 1,0);
                        memcpy(&stack0x00000040,&stack0x000000e0,0x50);
                        if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_035660f8;
                        __dest = (void *)(lVar15 + lVar12 + 0x20);
                        memcpy(__dest,&stack0x00000040,0x50);
                      }
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(__dest,0);
                    }
                    else {
                      iVar11 = *(int *)(lVar18 + 0x18);
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
                      else if ((0 < iVar10) && (*(char *)((long)unaff_x19 + 0x321) != '\0')) {
                        iVar1 = iVar11 + 3;
                        if (-1 < iVar11) {
                          iVar1 = iVar11;
                        }
                        if (0x100 < (iVar1 >> 2) - iVar10) goto LAB_03565e08;
                      }
                    }
                    plVar25 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    if ((*unaff_x20 == 0) || (lVar17 = *(long *)(*unaff_x20 + 0x60), lVar17 == 0))
                    goto LAB_03566068;
                    lVar15 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    if (*(int *)(lVar15 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar15 = *plVar25;
                    }
                    lVar15 = **(long **)(lVar15 + 0xb8);
                    if (lVar15 == 0) goto LAB_03566068;
                    if ((*(uint *)(lVar15 + 0x18) <= uVar27) || (*(uint *)(lVar17 + 0x18) <= uVar27)
                       ) goto LAB_035660f8;
                    *(undefined8 *)(lVar17 + lVar12 + 0x68) =
                         *(undefined8 *)(lVar15 + lVar21 + -0x1c);
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    uVar27 = uVar27 + 1;
                    lVar12 = lVar12 + 0x50;
                    lVar21 = lVar21 + 0x38;
                    lVar24 = lVar24 + 8;
                  } while (uVar7 != uVar27);
                }
                lVar12 = *plVar20;
                if (lVar12 != 0) {
                  lVar21 = (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3) + 0x20;
                  do {
                    uVar7 = (uint)uVar13;
                    if ((int)*(uint *)(lVar12 + 0x18) <= (int)uVar7) goto LAB_03565748;
                    if (*(uint *)(lVar12 + 0x18) <= uVar7) goto LAB_035660f8;
                    uVar23 = *(undefined8 *)(lVar12 + lVar21);
                    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar13 = FUN_036cee6c(uVar23,0,0);
                    if ((uVar13 & 1) == 0) goto LAB_03565748;
                    if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x60), lVar12 == 0))
                    break;
                    if ((int)uVar7 < *(int *)(lVar12 + 0x18)) {
                      lVar12 = *plVar20;
                      if (lVar12 == 0) break;
                      if (*(uint *)(lVar12 + 0x18) <= uVar7) goto LAB_035660f8;
                      if ((*(long *)(lVar12 + lVar21) == 0) ||
                         (lVar12 = FUN_037b514c(*(long *)(lVar12 + lVar21),0), lVar12 == 0)) break;
                      FUN_0390f3a4(lVar12,0,0);
                    }
                    lVar12 = *plVar20;
                    uVar13 = (ulong)(uVar7 + 1);
                    lVar21 = lVar21 + 8;
                  } while (lVar12 != 0);
                }
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


