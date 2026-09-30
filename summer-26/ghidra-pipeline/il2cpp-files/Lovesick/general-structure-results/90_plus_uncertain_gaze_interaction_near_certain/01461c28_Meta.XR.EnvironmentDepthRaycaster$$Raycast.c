/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$Raycast
ENTRY_POINT: 01461c28
PROGRAM: Lovesick-libil2cpp.so
SCORE: 200
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_3;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x014625a4) */

undefined8 Meta_XR_EnvironmentDepthRaycaster__Raycast(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar17;
  undefined8 uVar18;
  long *plVar19;
  undefined8 uVar20;
  ulong uVar21;
  long *unaff_x28;
  long *plVar22;
  uint uVar23;
  undefined8 unaff_x29;
  float fVar24;
  float fVar25;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  ulong in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  long in_stack_000000e0;
  long in_stack_000000e8;
  
  do {
    if (*(long *)(in_stack_000000e8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(in_stack_000000e8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01460a60(unaff_x29,*(undefined4 *)(*(long *)(in_stack_000000e8 + 0x20) + 0x24),
                 in_stack_00000050,*(undefined8 *)(*(long *)(in_stack_000000e8 + 0x38) + 0x10),
                 unaff_x20);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
      uVar21 = 0;
      uVar11 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      do {
        if (uVar11 <= uVar21) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (*(char *)(unaff_x19 + uVar21 + 0x20) != '\0') {
          lVar14 = *(long *)(unaff_x20 + 0x20);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(lVar14 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          lVar12 = *(long *)(in_stack_000000e8 + 0x38);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar16 = *(long *)(unaff_x20 + 0x30);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(lVar16 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          lVar16 = lVar16 + uVar21 * 8;
          fVar24 = *(float *)(lVar16 + 0x20);
          fVar25 = *(float *)(lVar16 + 0x24);
          uVar3 = *(uint *)(*(long *)(lVar12 + 0x10) + 0x18);
          iVar1 = -0x80000000;
          if (fVar24 != INFINITY) {
            iVar1 = (int)fVar24;
          }
          iVar2 = -0x80000000;
          if (fVar25 != INFINITY) {
            iVar2 = (int)fVar25;
          }
          if (0 < (int)uVar3) {
            uVar9 = *(undefined4 *)(lVar14 + uVar21 * 4 + 0x20);
            uVar23 = 0;
            do {
              lVar14 = *(long *)(lVar12 + 0x10);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(uint *)(lVar14 + 0x18) <= uVar23) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              lVar12 = (long)(int)uVar23;
              lVar14 = *(long *)(lVar14 + lVar12 * 8 + 0x20);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar14 = *(long *)(lVar14 + 0x10);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(uint *)(lVar14 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              uVar17 = *(undefined8 *)(lVar14 + uVar21 * 8 + 0x20);
              if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar11 = FUN_0268b4e0(uVar17,0,0);
              if ((uVar11 & 1) != 0) {
                lVar14 = *(long *)(unaff_x20 + 0x10);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                if (*(uint *)(lVar14 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                cVar5 = *(char *)(lVar14 + uVar21 + 0x20);
                lVar14 = thunk_FUN_00d62348(*(undefined8 *)
                                             SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo
                                           );
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_02671bf8(lVar14,iVar1,iVar2,5,cVar5 != '\0',0);
                if (*(long *)(in_stack_000000e8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                lVar16 = *(long *)(*(long *)(in_stack_000000e8 + 0x30) + 0x18);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_0132138c(lVar16,uVar23,&stack0x00000080,
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
                uVar17 = *(undefined8 *)(in_stack_00000080 + 0x10);
                FUN_0132138c(in_stack_00000078,uVar21 & 0xffffffff,&stack0x00000080,
                             *(undefined8 *)StringLiteral_11624);
                FUN_0144a43c(in_stack_00000060,uVar17,in_stack_00000080,0);
                FUN_014349f4(lVar14,0);
                if (*(long *)(in_stack_000000e8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                lVar16 = *(long *)(*(long *)(in_stack_000000e8 + 0x38) + 0x10);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                if (*(uint *)(lVar16 + 0x18) <= uVar23) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                lVar16 = *(long *)(lVar16 + lVar12 * 8 + 0x20);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                plVar19 = *(long **)(in_stack_000000e8 + 0x58);
                plVar22 = *(long **)(lVar16 + 0x10);
                FUN_0132138c(in_stack_00000078,uVar21 & 0xffffffff,&stack0x00000080,
                             *(undefined8 *)StringLiteral_11624);
                lVar16 = in_stack_00000080;
                if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                lVar13 = *plVar19;
                uVar4 = *(undefined4 *)(in_stack_000000e8 + 0x88);
                uVar11 = (ulong)*(ushort *)(lVar13 + 0x12a);
                if (uVar11 != 0) {
                  piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_2590) {
                      puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0x14) * 0x10 + 0x138);
                      goto LAB_01461f1c;
                    }
                    uVar11 = uVar11 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar11 != 0);
                }
                puVar10 = (undefined8 *)FUN_00d59724(plVar19,*(long *)StringLiteral_2590,0x14);
LAB_01461f1c:
                lVar16 = (*(code *)*puVar10)(plVar19,lVar16,lVar14,iVar1,iVar2,uVar9,uVar4,
                                             puVar10[1]);
                if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                if ((lVar16 != 0) &&
                   (lVar13 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar22 + 0x40)),
                   lVar13 == 0)) {
                  uVar17 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                  FUN_00da5038(uVar17,0);
                }
                if (*(uint *)(plVar22 + 3) <= uVar21) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                plVar22[uVar21 + 4] = lVar16;
                unaff_x28 = (long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
                if (*(long *)(in_stack_000000e8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                lVar16 = *(long *)(*(long *)(in_stack_000000e8 + 0x38) + 0x10);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                if (*(uint *)(lVar16 + 0x18) <= uVar23) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                lVar12 = *(long *)(lVar16 + lVar12 * 8 + 0x20);
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                lVar12 = *(long *)(lVar12 + 0x10);
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                if (*(uint *)(lVar12 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                if (in_stack_000000e0 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_00bc0bd0(in_stack_000000e0,*(undefined8 *)(lVar12 + uVar21 * 8 + 0x20),
                             *(undefined8 *)
                              Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlalh_lane_s16__);
                FUN_0142deac(lVar14,0);
              }
              uVar23 = uVar23 + 1;
              if (uVar23 == uVar3) break;
              lVar12 = *(long *)(in_stack_000000e8 + 0x38);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
            } while( true );
          }
        }
        uVar21 = uVar21 + 1;
        uVar11 = (ulong)*(uint *)(in_stack_00000058 + 0x18);
        unaff_x19 = in_stack_00000058;
      } while ((long)uVar21 < (long)(int)*(uint *)(in_stack_00000058 + 0x18));
    }
    puVar6 = StringLiteral_5769;
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
    uVar21 = FUN_0145ff7c(unaff_x20,*(undefined8 *)(*(long *)(in_stack_000000e8 + 0x38) + 0x10),
                          unaff_x19,in_stack_00000078);
    if ((uVar21 & 1) != 0) {
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
      lVar14 = FUN_0145f838(unaff_x20,in_stack_00000078,
                            *(undefined8 *)(*(long *)(in_stack_000000e8 + 0x38) + 0x10),unaff_x19,
                            *(undefined8 *)(in_stack_000000e8 + 0x20),
                            *(undefined4 *)(in_stack_000000e8 + 0x88));
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (0 < (int)*(ulong *)(lVar14 + 0x18)) {
        uVar21 = 0;
        uVar11 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
        do {
          if (*(uint *)(unaff_x19 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          if (*(char *)(unaff_x19 + uVar21 + 0x20) != '\0') {
            if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (uVar11 <= uVar21) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            uVar17 = *(undefined8 *)(in_stack_00000050 + 0x10);
            puVar10 = (undefined8 *)(lVar14 + uVar21 * 8 + 0x20);
            uVar18 = *puVar10;
            lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_013e7678(lVar12,uVar17,uVar18,0);
            FUN_0132138c(in_stack_00000078,uVar21 & 0xffffffff,&stack0x00000080,
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
            plVar19 = *(long **)(in_stack_00000080 + 0x18);
            if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar16 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar19 + 0x40));
            if (lVar16 == 0) {
              uVar17 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar17,0);
            }
            if (*(uint *)(plVar19 + 3) <= in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            plVar19[in_stack_00000048 + 4] = lVar12;
            if (*(char *)(in_stack_000000e8 + 0x70) != '\0') {
              if (*(uint *)(lVar14 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              plVar19 = *(long **)(in_stack_000000e8 + 0x58);
              uVar17 = *puVar10;
              FUN_0132138c(in_stack_00000078,uVar21 & 0xffffffff,&stack0x00000080,
                           *(undefined8 *)StringLiteral_11624);
              if (in_stack_00000080 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar9 = FUN_013e7c48(in_stack_00000050,*(undefined8 *)(in_stack_00000080 + 0x10),
                                   &stack0x000000d8,0);
              if (*(long *)(in_stack_000000e8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar12 = *(long *)(*(long *)(in_stack_000000e8 + 0x38) + 0x10);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(int *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              if (*(long *)(lVar12 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar12 = *(long *)(*(long *)(lVar12 + 0x20) + 0x20);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(uint *)(lVar12 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar16 = *plVar19;
              uVar18 = *(undefined8 *)(in_stack_00000038 + 0x10);
              uVar20 = *(undefined8 *)(lVar12 + uVar21 * 8 + 0x20);
              uVar11 = (ulong)*(ushort *)(lVar16 + 0x12a);
              if (uVar11 != 0) {
                piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_2590) {
                    puVar10 = (undefined8 *)(lVar16 + (long)(*piVar15 + 5) * 0x10 + 0x138);
                    goto LAB_014622f0;
                  }
                  uVar11 = uVar11 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar11 != 0);
              }
              puVar10 = (undefined8 *)FUN_00d59724(plVar19,*(long *)StringLiteral_2590,5);
LAB_014622f0:
              (*(code *)*puVar10)(plVar19,uVar17,uVar9,uVar20,uVar21 & 0xffffffff,uVar18,puVar10[1])
              ;
            }
          }
          uVar11 = (ulong)*(uint *)(lVar14 + 0x18);
          uVar21 = uVar21 + 1;
          unaff_x19 = in_stack_00000058;
        } while ((long)uVar21 < (long)(int)*(uint *)(lVar14 + 0x18));
      }
    }
    lVar14 = *(long *)(in_stack_000000e8 + 0x80);
    in_stack_00000048 = in_stack_00000048 + 1;
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)in_stack_00000048) {
      lVar14 = thunk_FUN_00d62348(*(undefined8 *)
                                   System_Runtime_Serialization_SurrogateForCyclicalReference_var);
      puVar8 = Method_System_Text_RegularExpressions_MatchCollection_System_Collections_IList_Add__;
      puVar6 = Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_GetEnumerator__;
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01320e50(lVar14,*(undefined8 *)
                           Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass2_0_<CreateAdditionalWireframeShaderViews>b__0__
                  );
      if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      *(long *)(in_stack_00000038 + 0x20) = lVar14;
      lVar14 = FUN_01299a34(in_stack_00000040,*(undefined8 *)StringLiteral_6540);
      puVar7 = Method_UnityEngine_Graphics_CheckLoadActionValid__;
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_011dcc00(lVar14,&stack0x00000080,*(undefined8 *)PTR_DAT_033ef938);
      in_stack_000000c8 = in_stack_00000088;
      in_stack_000000c0 = in_stack_00000080;
      in_stack_000000d0 = in_stack_00000090;
      while( true ) {
        uVar21 = FUN_012c3588(&stack0x000000c0,*(undefined8 *)puVar7);
        if ((uVar21 & 1) == 0) {
          FUN_012c3584(&stack0x000000c0,
                       *(undefined8 *)Method_MedleyGraveyardPuzzle_VineDissolvingStarted__);
          FUN_00bc10b8(&stack0x00000098);
          return 0;
        }
        uVar17 = FUN_00bc0dc0(&stack0x000000c0,*(undefined8 *)puVar6);
        if (*(long *)(in_stack_00000038 + 0x20) == 0) break;
        FUN_00bc0ec8(*(long *)(in_stack_00000038 + 0x20),uVar17,*(undefined8 *)puVar8);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c(0,uVar17);
    }
    if (*(uint *)(lVar14 + 0x18) <= in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar19 = *(long **)(in_stack_000000e8 + 0x58);
    in_stack_00000050 = *(long *)(lVar14 + in_stack_00000048 * 8 + 0x20);
    if (plVar19 != (long *)0x0) {
      lVar14 = *plVar19;
      uVar21 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar21 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_2590) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_01461bf8;
          }
          uVar21 = uVar21 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar21 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724(plVar19,*(long *)StringLiteral_2590,0);
LAB_01461bf8:
      (*(code *)*puVar10)(plVar19,puVar10[1]);
    }
    unaff_x20 = thunk_FUN_00d62348(*(undefined8 *)Method_System_Array_Resize<Vector2>__);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_017b46ec(unaff_x20,0);
    unaff_x29 = in_stack_00000078;
  } while( true );
}


