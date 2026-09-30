/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$SetRaycastWarmUpEnabled
ENTRY_POINT: 01461ef0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 209
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_3;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x014625a4) */

undefined8
Meta_XR_EnvironmentDepthManagerRaycastExtensions__SetRaycastWarmUpEnabled
          (long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong in_x9;
  int *in_x10;
  int *piVar12;
  uint unaff_w19;
  undefined4 unaff_w20;
  undefined8 uVar13;
  long *plVar14;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar15;
  long *unaff_x23;
  undefined8 uVar16;
  long unaff_x24;
  ulong unaff_x25;
  int unaff_w26;
  int unaff_w27;
  long *unaff_x28;
  uint unaff_w29;
  float fVar17;
  float fVar18;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  ulong in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  long in_stack_000000e0;
  long in_stack_000000e8;
  
code_r0x01461ef0:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_01461ee4;
LAB_01461efc:
  puVar7 = (undefined8 *)FUN_00d59724(unaff_x23,param_3,0x14);
  do {
    lVar8 = (*(code *)*puVar7)(unaff_x23,unaff_x22,unaff_x21,unaff_w26,unaff_w27,
                               in_stack_00000068._4_4_,unaff_w20,puVar7[1]);
    if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*unaff_x28 + 0x40)), lVar9 == 0)) {
      uVar13 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar13,0);
    }
    if (*(uint *)(unaff_x28 + 3) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    unaff_x28[unaff_x25 + 4] = lVar8;
    puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    if (*(long *)(in_stack_000000e8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar8 = *(long *)(*(long *)(in_stack_000000e8 + 0x38) + 0x10);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(uint *)(lVar8 + 0x18) <= unaff_w29) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar8 = *(long *)(lVar8 + unaff_x24 * 8 + 0x20);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(uint *)(lVar8 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    if (in_stack_000000e0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_00bc0bd0(in_stack_000000e0,*(undefined8 *)(lVar8 + unaff_x25 * 8 + 0x20),
                 *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlalh_lane_s16__);
    FUN_0142deac(unaff_x21,0);
    do {
      unaff_w29 = unaff_w29 + 1;
      if (unaff_w29 == unaff_w19) {
        do {
          do {
            unaff_x25 = unaff_x25 + 1;
            uVar6 = (ulong)*(uint *)(in_stack_00000058 + 0x18);
            if ((long)(int)*(uint *)(in_stack_00000058 + 0x18) <= (long)unaff_x25) {
              do {
                puVar4 = StringLiteral_5769;
                if (3 < *(int *)(in_stack_000000e8 + 0x88)) {
                  if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  FUN_02660dac(*(undefined8 *)Mono_Security_Interface_CipherSuiteCode_TypeInfo,0);
                }
                if (*(long *)(in_stack_000000e8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar6 = FUN_0145ff7c(in_stack_00000070,
                                     *(undefined8 *)(*(long *)(in_stack_000000e8 + 0x38) + 0x10),
                                     in_stack_00000058,in_stack_00000078);
                if ((uVar6 & 1) != 0) {
                  if (3 < *(int *)(in_stack_000000e8 + 0x88)) {
                    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    FUN_02660dac(*(undefined8 *)StringLiteral_11033,0);
                  }
                  if (*(long *)(in_stack_000000e8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  lVar8 = FUN_0145f838(in_stack_00000070,in_stack_00000078,
                                       *(undefined8 *)(*(long *)(in_stack_000000e8 + 0x38) + 0x10),
                                       in_stack_00000058,*(undefined8 *)(in_stack_000000e8 + 0x20),
                                       *(undefined4 *)(in_stack_000000e8 + 0x88));
                  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
                    uVar6 = 0;
                    uVar11 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
                    do {
                      if (*(uint *)(in_stack_00000058 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da5194();
                      }
                      if (*(char *)(in_stack_00000058 + uVar6 + 0x20) != '\0') {
                        if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        if (uVar11 <= uVar6) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da5194();
                        }
                        uVar13 = *(undefined8 *)(in_stack_00000050 + 0x10);
                        puVar7 = (undefined8 *)(lVar8 + uVar6 * 8 + 0x20);
                        uVar15 = *puVar7;
                        lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        FUN_013e7678(lVar9,uVar13,uVar15,0);
                        FUN_0132138c(in_stack_00000078,uVar6 & 0xffffffff,&stack0x00000080,
                                     *(undefined8 *)StringLiteral_11624);
                        if (in_stack_00000080 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        FUN_01299bc0(in_stack_00000040,*(undefined8 *)(in_stack_00000080 + 0x10),
                                     &stack0x00000080,*(undefined8 *)StringLiteral_14282);
                        if (in_stack_00000080 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        plVar14 = *(long **)(in_stack_00000080 + 0x18);
                        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar14 + 0x40));
                        if (lVar10 == 0) {
                          uVar13 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                          FUN_00da5038(uVar13,0);
                        }
                        if (*(uint *)(plVar14 + 3) <= in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da5194();
                        }
                        plVar14[in_stack_00000048 + 4] = lVar9;
                        if (*(char *)(in_stack_000000e8 + 0x70) != '\0') {
                          if (*(uint *)(lVar8 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da5194();
                          }
                          plVar14 = *(long **)(in_stack_000000e8 + 0x58);
                          uVar13 = *puVar7;
                          FUN_0132138c(in_stack_00000078,uVar6 & 0xffffffff,&stack0x00000080,
                                       *(undefined8 *)StringLiteral_11624);
                          if (in_stack_00000080 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          uVar5 = FUN_013e7c48(in_stack_00000050,
                                               *(undefined8 *)(in_stack_00000080 + 0x10),
                                               &stack0x000000d8,0);
                          if (*(long *)(in_stack_000000e8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          lVar9 = *(long *)(*(long *)(in_stack_000000e8 + 0x38) + 0x10);
                          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da5194();
                          }
                          if (*(long *)(lVar9 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          lVar9 = *(long *)(*(long *)(lVar9 + 0x20) + 0x20);
                          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          if (*(uint *)(lVar9 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da5194();
                          }
                          if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          lVar10 = *plVar14;
                          uVar15 = *(undefined8 *)(in_stack_00000038 + 0x10);
                          uVar16 = *(undefined8 *)(lVar9 + uVar6 * 8 + 0x20);
                          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
                          if (uVar11 != 0) {
                            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar12 + -2) == *(long *)StringLiteral_2590) {
                                puVar7 = (undefined8 *)
                                         (lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                                goto LAB_014622f0;
                              }
                              uVar11 = uVar11 - 1;
                              piVar12 = piVar12 + 4;
                            } while (uVar11 != 0);
                          }
                          puVar7 = (undefined8 *)FUN_00d59724(plVar14,*(long *)StringLiteral_2590,5)
                          ;
LAB_014622f0:
                          (*(code *)*puVar7)(plVar14,uVar13,uVar5,uVar16,uVar6 & 0xffffffff,uVar15,
                                             puVar7[1]);
                        }
                      }
                      uVar11 = (ulong)*(uint *)(lVar8 + 0x18);
                      uVar6 = uVar6 + 1;
                    } while ((long)uVar6 < (long)(int)*(uint *)(lVar8 + 0x18));
                  }
                }
                lVar8 = *(long *)(in_stack_000000e8 + 0x80);
                in_stack_00000048 = in_stack_00000048 + 1;
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)in_stack_00000048) {
                  lVar8 = thunk_FUN_00d62348(*(undefined8 *)
                                              System_Runtime_Serialization_SurrogateForCyclicalReference_var
                                            );
                  puVar4 = 
                  Method_System_Text_RegularExpressions_MatchCollection_System_Collections_IList_Add__
                  ;
                  puVar2 = 
                  Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_GetEnumerator__
                  ;
                  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  FUN_01320e50(lVar8,*(undefined8 *)
                                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass2_0_<CreateAdditionalWireframeShaderViews>b__0__
                              );
                  if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  *(long *)(in_stack_00000038 + 0x20) = lVar8;
                  lVar8 = FUN_01299a34(in_stack_00000040,*(undefined8 *)StringLiteral_6540);
                  puVar3 = Method_UnityEngine_Graphics_CheckLoadActionValid__;
                  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  FUN_011dcc00(lVar8,&stack0x00000080,*(undefined8 *)PTR_DAT_033ef938);
                  in_stack_000000c8 = in_stack_00000088;
                  in_stack_000000c0 = in_stack_00000080;
                  in_stack_000000d0 = in_stack_00000090;
                  while( true ) {
                    uVar6 = FUN_012c3588(&stack0x000000c0,*(undefined8 *)puVar3);
                    if ((uVar6 & 1) == 0) {
                      FUN_012c3584(&stack0x000000c0,
                                   *(undefined8 *)
                                    Method_MedleyGraveyardPuzzle_VineDissolvingStarted__);
                      FUN_00bc10b8(&stack0x00000098);
                      return 0;
                    }
                    uVar13 = FUN_00bc0dc0(&stack0x000000c0,*(undefined8 *)puVar2);
                    if (*(long *)(in_stack_00000038 + 0x20) == 0) break;
                    FUN_00bc0ec8(*(long *)(in_stack_00000038 + 0x20),uVar13,*(undefined8 *)puVar4);
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c(0,uVar13);
                }
                if (*(uint *)(lVar8 + 0x18) <= in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                plVar14 = *(long **)(in_stack_000000e8 + 0x58);
                in_stack_00000050 = *(long *)(lVar8 + in_stack_00000048 * 8 + 0x20);
                if (plVar14 != (long *)0x0) {
                  lVar8 = *plVar14;
                  uVar6 = (ulong)*(ushort *)(lVar8 + 0x12a);
                  if (uVar6 != 0) {
                    piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar12 + -2) == *(long *)StringLiteral_2590) {
                        puVar7 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                        goto LAB_01461bf8;
                      }
                      uVar6 = uVar6 - 1;
                      piVar12 = piVar12 + 4;
                    } while (uVar6 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_00d59724(plVar14,*(long *)StringLiteral_2590,0);
LAB_01461bf8:
                  (*(code *)*puVar7)(plVar14,puVar7[1]);
                }
                in_stack_00000070 =
                     thunk_FUN_00d62348(*(undefined8 *)Method_System_Array_Resize<Vector2>__);
                if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_017b46ec(in_stack_00000070,0);
                if (*(long *)(in_stack_000000e8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                if (*(long *)(in_stack_000000e8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_01460a60(in_stack_00000078,
                             *(undefined4 *)(*(long *)(in_stack_000000e8 + 0x20) + 0x24),
                             in_stack_00000050,
                             *(undefined8 *)(*(long *)(in_stack_000000e8 + 0x38) + 0x10),
                             in_stack_00000070);
                if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
              } while ((int)*(ulong *)(in_stack_00000058 + 0x18) < 1);
              unaff_x25 = 0;
              uVar6 = *(ulong *)(in_stack_00000058 + 0x18) & 0xffffffff;
            }
            if (uVar6 <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
          } while (*(char *)(in_stack_00000058 + unaff_x25 + 0x20) == '\0');
          lVar8 = *(long *)(in_stack_00000070 + 0x20);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(lVar8 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          lVar9 = *(long *)(in_stack_000000e8 + 0x38);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar10 = *(long *)(in_stack_00000070 + 0x30);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(lVar10 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          lVar10 = lVar10 + unaff_x25 * 8;
          fVar17 = *(float *)(lVar10 + 0x20);
          fVar18 = *(float *)(lVar10 + 0x24);
          unaff_w19 = *(uint *)(*(long *)(lVar9 + 0x10) + 0x18);
          unaff_w26 = -0x80000000;
          if (fVar17 != INFINITY) {
            unaff_w26 = (int)fVar17;
          }
          unaff_w27 = -0x80000000;
          if (fVar18 != INFINITY) {
            unaff_w27 = (int)fVar18;
          }
        } while ((int)unaff_w19 < 1);
        in_stack_00000068._4_4_ = *(undefined4 *)(lVar8 + unaff_x25 * 4 + 0x20);
        unaff_w29 = 0;
      }
      else {
        lVar9 = *(long *)(in_stack_000000e8 + 0x38);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      lVar8 = *(long *)(lVar9 + 0x10);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(lVar8 + 0x18) <= unaff_w29) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      unaff_x24 = (long)(int)unaff_w29;
      lVar8 = *(long *)(lVar8 + unaff_x24 * 8 + 0x20);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar8 = *(long *)(lVar8 + 0x10);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(lVar8 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      uVar13 = *(undefined8 *)(lVar8 + unaff_x25 * 8 + 0x20);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar6 = FUN_0268b4e0(uVar13,0,0);
    } while ((uVar6 & 1) == 0);
    lVar8 = *(long *)(in_stack_00000070 + 0x10);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(uint *)(lVar8 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    cVar1 = *(char *)(lVar8 + unaff_x25 + 0x20);
    unaff_x21 = thunk_FUN_00d62348(*(undefined8 *)
                                    SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_02671bf8(unaff_x21,unaff_w26,unaff_w27,5,cVar1 != '\0',0);
    if (*(long *)(in_stack_000000e8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar8 = *(long *)(*(long *)(in_stack_000000e8 + 0x30) + 0x18);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0132138c(lVar8,unaff_w29,&stack0x00000080,
                 *(undefined8 *)FullSerializer_Internal_fsReflectedConverter_TypeInfo);
    if (in_stack_00000080 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(in_stack_00000080 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0132138c(*(long *)(in_stack_00000080 + 0x18),0,&stack0x00000080,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Stack<DtdParser_ParseElementOnlyContent_LocalFrame>_get_Count__
                );
    if (in_stack_00000080 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar13 = *(undefined8 *)(in_stack_00000080 + 0x10);
    FUN_0132138c(in_stack_00000078,unaff_x25 & 0xffffffff,&stack0x00000080,
                 *(undefined8 *)StringLiteral_11624);
    FUN_0144a43c(in_stack_00000060,uVar13,in_stack_00000080,0);
    FUN_014349f4(unaff_x21,0);
    if (*(long *)(in_stack_000000e8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar8 = *(long *)(*(long *)(in_stack_000000e8 + 0x38) + 0x10);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(uint *)(lVar8 + 0x18) <= unaff_w29) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar8 = *(long *)(lVar8 + unaff_x24 * 8 + 0x20);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    unaff_x23 = *(long **)(in_stack_000000e8 + 0x58);
    unaff_x28 = *(long **)(lVar8 + 0x10);
    FUN_0132138c(in_stack_00000078,unaff_x25 & 0xffffffff,&stack0x00000080,
                 *(undefined8 *)StringLiteral_11624);
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    param_1 = *unaff_x23;
    unaff_w20 = *(undefined4 *)(in_stack_000000e8 + 0x88);
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12a);
    param_3 = *(long *)StringLiteral_2590;
    unaff_x22 = in_stack_00000080;
    if (in_x9 == 0) goto LAB_01461efc;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_01461ee4:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x01461ef0;
    puVar7 = (undefined8 *)(param_1 + (long)(*in_x10 + 0x14) * 0x10 + 0x138);
  } while( true );
}


