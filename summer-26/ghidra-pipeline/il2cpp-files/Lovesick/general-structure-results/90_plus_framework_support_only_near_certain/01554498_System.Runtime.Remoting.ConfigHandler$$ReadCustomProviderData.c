/*
FUNCTION_NAME: System.Runtime.Remoting.ConfigHandler$$ReadCustomProviderData
ENTRY_POINT: 01554498
PROGRAM: Lovesick-libil2cpp.so
SCORE: 138
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


void System_Runtime_Remoting_ConfigHandler__ReadCustomProviderData
               (undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 *puVar9;
  long unaff_x19;
  int unaff_w20;
  int unaff_w22;
  long *plVar10;
  long unaff_x23;
  long lVar11;
  undefined8 *unaff_x26;
  int unaff_w27;
  int unaff_w28;
  float fVar12;
  float fVar13;
  float unaff_s9;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float unaff_s13;
  undefined4 uVar18;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  float in_stack_00000088;
  float fStack000000000000008c;
  
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    lVar6 = FUN_0268fd10(*(long *)(unaff_x19 + 0x18),0);
    if (unaff_x23 != 0) {
      fVar12 = (float)FUN_0269f578();
      fVar16 = param_2;
      fVar14 = param_3;
      fVar13 = (float)FUN_0269fb58();
      if (lVar6 != 0) {
        FUN_0269f618(fVar12 - fVar13,param_2 - fVar16,param_3 - fVar14,lVar6,0);
        if (*(long *)(unaff_x19 + 0x18) != 0) {
          FUN_0268427c(*(long *)(unaff_x19 + 0x18),1,0);
          if (*(long *)(unaff_x19 + 0x18) != 0) {
            FUN_02689f9c(*(long *)(unaff_x19 + 0x18),0,0);
            if (*(long *)(unaff_x19 + 0x18) != 0) {
              FUN_02684a90(*(long *)(unaff_x19 + 0x18),*(undefined8 *)(unaff_x19 + 0x28),0);
              lVar11 = *(long *)(unaff_x19 + 0x18);
              lVar6 = FUN_0268fd4c();
              if ((lVar6 != 0) && (uVar5 = FUN_0268ac68(lVar6,0), lVar11 != 0)) {
                FUN_02684448(lVar11,1 << (ulong)(uVar5 & 0x1f),0);
                if (*(long *)(unaff_x19 + 0x18) != 0) {
                  FUN_02684674(*(long *)(unaff_x19 + 0x18),2,0);
                  if (*(long *)(unaff_x19 + 0x18) != 0) {
                    fVar16 = 0.0;
                    fStack000000000000008c = unaff_s13;
                    FUN_026845a0(0,0,0,0,*(long *)(unaff_x19 + 0x18),0);
                    lVar6 = *(long *)(unaff_x19 + 0x18);
                    FUN_0269fcf8();
                    if (lVar6 != 0) {
                      fVar14 = unaff_s9 * ((float)unaff_w22 / (float)unaff_w28);
                      FUN_026841f4(fVar14 * 0.5 * fVar16,lVar6,0);
                      if (*(long *)(unaff_x19 + 0x18) != 0) {
                        FUN_02683e98(DAT_02940108,*(long *)(unaff_x19 + 0x18),0);
                        puVar1 = PTR_DAT_033f3618;
                        if (*(long *)(unaff_x19 + 0x18) != 0) {
                          FUN_02683f20(DAT_02940f70,*(long *)(unaff_x19 + 0x18),0);
                          lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                          puVar2 = 
                          Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                          ;
                          puVar1 = UnityEngine_UI_RawImage_var;
                          if (lVar6 != 0) {
                            FUN_02669c18(lVar6,0);
                            uVar7 = FUN_0268b6ac();
                            uVar7 = FUN_015f5b28(uVar7,*(undefined8 *)puVar1,0);
                            FUN_0268b75c(lVar6,uVar7,0);
                            lVar11 = FUN_00da4fb8(*(undefined8 *)puVar2,4);
                            if (lVar11 != 0) {
                              uVar5 = *(uint *)(lVar11 + 0x18);
                              if (uVar5 != 0) {
                                *(undefined8 *)(lVar11 + 0x20) = 0xbf000000bf000000;
                                *(undefined4 *)(lVar11 + 0x28) = 0;
                                uVar7 = DAT_02940f60;
                                if (uVar5 != 1) {
                                  *(undefined4 *)(lVar11 + 0x34) = 0;
                                  *(undefined8 *)(lVar11 + 0x2c) = uVar7;
                                  if (2 < uVar5) {
                                    *(undefined8 *)(lVar11 + 0x38) = 0x3f0000003f000000;
                                    *(undefined4 *)(lVar11 + 0x40) = 0;
                                    puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s32__;
                                    if (uVar5 != 3) {
                                      *(undefined8 *)(lVar11 + 0x44) = DAT_02940f68;
                                      *(undefined4 *)(lVar11 + 0x4c) = 0;
                                      FUN_0266b9c4(lVar6,lVar11,0);
                                      lVar11 = FUN_00da4fb8(*(undefined8 *)puVar1,4);
                                      if (lVar11 == 0) goto LAB_01554bc8;
                                      uVar5 = *(uint *)(lVar11 + 0x18);
                                      if ((uVar5 != 0) &&
                                         (*(undefined8 *)(lVar11 + 0x20) = 0, uVar5 != 1)) {
                                        *(undefined8 *)(lVar11 + 0x28) = DAT_028aa458;
                                        if (2 < uVar5) {
                                          uVar7 = NEON_fmov(0x3f800000,4);
                                          *(undefined8 *)(lVar11 + 0x30) = uVar7;
                                          puVar2 = 
                                          Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
                                          puVar1 = Method_System_Nullable<OVRPose>_get_HasValue__;
                                          if (uVar5 != 3) {
                                            *(undefined8 *)(lVar11 + 0x38) = DAT_028aa450;
                                            in_stack_00000088 = fVar14;
                                            FUN_0266bbc8(lVar6,lVar11,0);
                                            uVar7 = FUN_00da4fb8(*(undefined8 *)puVar2,6);
                                            FUN_016a34e8(uVar7,*(undefined8 *)puVar1,0);
                                            FUN_0266db2c(lVar6,uVar7,0);
                                            if (DAT_03774d76 == '\0') {
                                              thunk_FUN_00d48444(
                                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                                  );
                                              DAT_03774d76 = '\x01';
                                            }
                                            puVar3 = StringLiteral_11347;
                                            puVar2 = StringLiteral_10718;
                                            puVar1 = 
                                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                            ;
                                            puVar9 = *(undefined4 **)
                                                      (*(long *)
                                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                                  + 0xb8);
                                            uVar18 = *puVar9;
                                            uVar17 = puVar9[1];
                                            uVar15 = puVar9[2];
                                            if (DAT_03774e1c == '\0') {
                                              thunk_FUN_00d48444(
                                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                                  );
                                              DAT_03774e1c = '\x01';
                                              puVar9 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
                                            }
                                            in_stack_00000020 = 0;
                                            in_stack_00000028 = 0;
                                            in_stack_00000018 = 0;
                                            FUN_02687990(uVar18,uVar17,uVar15,puVar9[3],puVar9[4],
                                                         puVar9[5],&stack0x00000018,0);
                                            FUN_0266afe0(lVar6);
                                            *(long *)(unaff_x19 + 0x38) = lVar6;
                                            FUN_0266f0f8(lVar6,1,0);
                                            uVar7 = FUN_0267c994(*(undefined8 *)puVar2,0);
                                            lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                            puVar1 = 
                                            Method_System_Collections_ObjectModel_Collection<IEnumerable<Claim>>__ctor__
                                            ;
                                            if (lVar6 != 0) {
                                              fVar16 = (float)unaff_w27 / (float)unaff_w20;
                                              fVar14 = (float)unaff_w28 / (float)unaff_w22;
                                              FUN_0267d648(lVar6,uVar7,0);
                                              FUN_0267dc2c(lVar6,*(undefined8 *)(unaff_x19 + 0x28),0
                                                          );
                                              FUN_0267d974(0,0,0,0x3f800000,lVar6,0);
                                              FUN_0267decc(0.5 - fVar16 * 0.5,0.5 - fVar14 * 0.5,
                                                           lVar6,0);
                                              FUN_0267e0c0(fVar16,fVar14,lVar6,0);
                                              *(long *)(unaff_x19 + 0x40) = lVar6;
                                              uVar7 = FUN_0268b6ac();
                                              uVar7 = FUN_015f5b28(uVar7,*(undefined8 *)puVar1,0);
                                              lVar6 = thunk_FUN_00d62348(*unaff_x26);
                                              if (lVar6 != 0) {
                                                FUN_0268afbc(lVar6,uVar7,0);
                                                lVar11 = 
                                                  UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                                            (lVar6,0);
                                                uVar7 = FUN_0268fd10();
                                                puVar1 = OVRPlugin_OVRP_1_93_0_TypeInfo;
                                                if (lVar11 != 0) {
                                                  FUN_026a0040(lVar11,uVar7,0,0);
                                                  lVar11 = FUN_010e5800(lVar6,*(undefined8 *)puVar1)
                                                  ;
                                                  puVar1 = UnityEngine_Pose___TypeInfo;
                                                  if (lVar11 != 0) {
                                                    FUN_02666150(lVar11,*(undefined8 *)
                                                                         (unaff_x19 + 0x38),0);
                                                    lVar11 = FUN_010e5800(lVar6,*(undefined8 *)
                                                                                 puVar1);
                                                    *(long *)(unaff_x19 + 0x30) = lVar11;
                                                    puVar1 = 
                                                  Method_System_Collections_Generic_List<IColliderWorldImpl>_Add__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_026689d4(lVar11,*(undefined8 *)
                                                                         (unaff_x19 + 0x40),0);
                                                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                                                      thunk_FUN_00d32864();
                                                    }
                                                    lVar11 = FUN_0153b754(0);
                                                    if (lVar11 != 0) {
                                                      FUN_0268aca4(lVar6,*(undefined4 *)
                                                                          (lVar11 + 0x48),0);
                                                      lVar6 = 
                                                  UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                                            (lVar6,0);
                                                  puVar1 = StringLiteral_8403;
                                                  if (lVar6 != 0) {
                                                    FUN_0269fd98(fStack000000000000008c,lVar6,0);
                                                    uVar7 = FUN_0268b6ac();
                                                    uVar7 = FUN_015f5b28(uVar7,*(undefined8 *)puVar1
                                                                         ,0);
                                                    lVar6 = thunk_FUN_00d62348(*unaff_x26);
                                                    if (lVar6 != 0) {
                                                      FUN_0268afbc(lVar6,uVar7,0);
                                                      lVar11 = 
                                                  UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                                            (lVar6,0);
                                                  uVar7 = FUN_0268fd10();
                                                  puVar1 = 
                                                  Method_System_Collections_Generic_Dictionary<string,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>_GetEnumerator__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_026a0040(lVar11,uVar7,0,0);
                                                    lVar11 = FUN_010e5800(lVar6,*(undefined8 *)
                                                                                 puVar1);
                                                    *(long *)(unaff_x19 + 0x20) = lVar11;
                                                    if (lVar11 != 0) {
                                                      *(undefined1 *)(lVar11 + 0x1c) = 1;
                                                      bVar4 = FUN_0269e8f0(0);
                                                      *(byte *)(lVar11 + 0xf8) = ~bVar4 & 1;
                                                      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                                                         (plVar10 = *(long **)(*(long *)(unaff_x19 +
                                                                                        0x20) + 0xf0
                                                                              ),
                                                         plVar10 != (long *)0x0)) {
                                                        lVar11 = *(long *)(unaff_x19 + 0x28);
                                                        if ((lVar11 != 0) &&
                                                           (lVar8 = thunk_FUN_00d6225c(lVar11,*(
                                                  undefined8 *)(*plVar10 + 0x40)), lVar8 == 0)) {
                                                    uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da5038(uVar7,0);
                                                  }
                                                  if ((int)plVar10[3] == 0) goto LAB_01554bcc;
                                                  plVar10[4] = lVar11;
                                                  lVar11 = *(long *)(unaff_x19 + 0x20);
                                                  if (lVar11 != 0) {
                                                    *(undefined4 *)(lVar11 + 0x18) = 2;
                                                    lVar8 = FUN_0153b754(0);
                                                    if (lVar8 != 0) {
                                                      *(undefined4 *)(lVar11 + 0xd4) =
                                                           *(undefined4 *)(lVar8 + 0x4c);
                                                      lVar11 = *(long *)(unaff_x19 + 0x20);
                                                      if (lVar11 != 0) {
                                                        *(undefined1 *)(lVar11 + 0xdc) = 1;
                                                        lVar11 = FUN_0268fd10(lVar11,0);
                                                        if (lVar11 != 0) {
                                                          FUN_0269fd98(fStack000000000000008c *
                                                                       ((float)unaff_w20 /
                                                                       (float)unaff_w27),
                                                                       in_stack_00000088,0x3f800000,
                                                                       lVar11,0);
                                                          if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                            *(undefined4 *)
                                                             (*(long *)(unaff_x19 + 0x20) + 0xe4) =
                                                                 1;
                                                            lVar6 = 
                                                  UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                                            (lVar6,0);
                                                  if (((*(long *)(unaff_x19 + 0x50) != 0) &&
                                                      (lVar11 = FUN_01551e1c(*(long *)(unaff_x19 +
                                                                                      0x50)),
                                                      lVar11 != 0)) && (lVar6 != 0)) {
                                                    FUN_026a0040(lVar6,*(undefined8 *)
                                                                        (lVar11 + 0x38),0,0);
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                            goto LAB_01554bc8;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
LAB_01554bcc:
                    /* WARNING: Subroutine does not return */
                              FUN_00da5194();
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01554bc8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


