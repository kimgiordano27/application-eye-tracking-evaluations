/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.DeferredLights$$InitStencilDeferredMaterial
ENTRY_POINT: 058a1e78
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 172
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


void UnityEngine_Rendering_Universal_Internal_DeferredLights__InitStencilDeferredMaterial
               (long param_1)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  uint *puVar12;
  int *piVar13;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  undefined1 auVar20 [16];
  long lStack0000000000000018;
  long in_stack_00000030;
  ulong in_stack_00000038;
  ulong in_stack_00000040;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined4 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined4 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  long in_stack_00000120;
  
  iVar19 = 0;
  puVar14 = *(undefined8 **)(unaff_x21 + 0x1a0);
  lStack0000000000000018 = param_1;
  do {
    lVar5 = FUN_037a6268(lStack0000000000000018,iVar19,*puVar14);
    in_stack_00000120 = lVar5;
    lVar6 = FUN_03ab2128(unaff_x20 + 0x18,iVar19,
                         *(undefined8 *)
                          Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__);
    FUN_058a4340(lVar6,&stack0x00000120,iVar19);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar15 = *(long *)(unaff_x20 + 0x28);
    in_stack_000000e0 = 0;
    in_stack_000000e8 = 0;
    FUN_058a0134(&stack0x000000e0,*(undefined8 *)(lVar5 + 0x10),1);
    in_stack_00000118 = in_stack_000000e8;
    in_stack_00000110 = in_stack_000000e0;
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    FUN_0463c200(lVar15,&stack0x00000110,
                 *(undefined8 *)
                  Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_SetException__);
    if (*(char *)(lVar6 + 0x79) != '\0') {
      if (*(long *)(in_stack_00000030 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_03f08354(*(long *)(in_stack_00000030 + 0x48),iVar19,
                   *(undefined8 *)Method_System_Nullable<Guid>_get_HasValue__);
    }
    if (*(int *)(lVar6 + 4) == 2) {
      lVar15 = *(long *)(unaff_x20 + 0x40);
      if ((*(ushort *)
            (*(long *)(*(long *)
                        Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                      + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      puVar4 = PTR_DAT_06322b80;
      *(undefined4 *)(lVar6 + 0x38) = *(undefined4 *)(lVar15 + 8);
      uVar1 = *(uint *)(lVar5 + 0x2c);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (DAT_066d2bb1 == '\0') {
        FUN_02b3c81c(PTR_DAT_06322b80);
        DAT_066d2bb1 = '\x01';
      }
      uVar1 = uVar1 & 0xffff0000;
      if (uVar1 != 0) {
        lVar15 = *(long *)PTR_DAT_06322b80;
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar15 = *(long *)PTR_DAT_06322b80;
        }
        puVar12 = *(uint **)(lVar15 + 0xb8);
        if (uVar1 != *puVar12) {
          if (*(int *)(lVar15 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            puVar12 = *(uint **)(*(long *)PTR_DAT_06322b80 + 0xb8);
          }
          if (uVar1 != puVar12[1]) goto LAB_058a2058;
        }
        *(undefined1 *)(lVar6 + 0x7d) = 1;
        uVar7 = FUN_058a0b8c();
        if ((uVar7 & 1) != 0) {
          FUN_058aaa80(lVar6,*(undefined8 *)(lVar5 + 0x2c),*(undefined4 *)(lVar5 + 0x34));
          *(int *)(lVar6 + 0x3c) = *(int *)(lVar6 + 0x3c) + 1;
        }
      }
LAB_058a2058:
      if (*(uint *)(lVar5 + 0x50) < 0x7fffffff) {
        uVar7 = 0;
        lVar15 = 0x20;
        do {
          lVar18 = *(long *)(lVar5 + 0x48);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if (*(uint *)(lVar18 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          if (*(int *)(*(long *)PTR_DAT_06322b80 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if (DAT_066d2bb1 == '\0') {
            FUN_02b3c81c(PTR_DAT_06322b80);
            DAT_066d2bb1 = '\x01';
          }
          uVar2 = *(ushort *)(lVar18 + lVar15 + 2);
          iVar3 = (uint)uVar2 << 0x10;
          if (uVar2 != 0) {
            lVar18 = *(long *)PTR_DAT_06322b80;
            if (*(int *)(lVar18 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar18 = *(long *)PTR_DAT_06322b80;
            }
            piVar13 = *(int **)(lVar18 + 0xb8);
            if (iVar3 != *piVar13) {
              if (*(int *)(lVar18 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                piVar13 = *(int **)(*(long *)PTR_DAT_06322b80 + 0xb8);
              }
              if (iVar3 != piVar13[1]) goto LAB_058a21a0;
            }
            if (*(long *)(lVar5 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            if (*(uint *)(*(long *)(lVar5 + 0x48) + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            uVar8 = FUN_058a0b8c();
            if ((uVar8 & 1) != 0) {
              lVar18 = *(long *)(lVar5 + 0x48);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              if (*(uint *)(lVar18 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              FUN_058aaa80(lVar6,*(undefined8 *)(lVar18 + lVar15),
                           *(undefined4 *)((undefined8 *)(lVar18 + lVar15) + 1));
              *(int *)(lVar6 + 0x3c) = *(int *)(lVar6 + 0x3c) + 1;
            }
          }
LAB_058a21a0:
          uVar7 = uVar7 + 1;
          lVar15 = lVar15 + 0x1c;
        } while ((long)uVar7 < (long)(*(int *)(lVar5 + 0x50) + 1));
      }
      if (*(char *)(lVar5 + 0x54) != '\0') {
        uVar1 = *(uint *)(lVar5 + 0x58);
        if (*(int *)(*(long *)PTR_DAT_06322b80 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (DAT_066d2bb1 == '\0') {
          FUN_02b3c81c(PTR_DAT_06322b80);
          DAT_066d2bb1 = '\x01';
        }
        uVar1 = uVar1 & 0xffff0000;
        if (uVar1 != 0) {
          lVar15 = *(long *)PTR_DAT_06322b80;
          if (*(int *)(lVar15 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar15 = *(long *)PTR_DAT_06322b80;
          }
          puVar12 = *(uint **)(lVar15 + 0xb8);
          if (uVar1 != *puVar12) {
            if (*(int *)(lVar15 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              puVar12 = *(uint **)(*(long *)PTR_DAT_06322b80 + 0xb8);
            }
            if (uVar1 != puVar12[1]) goto LAB_058a22b4;
          }
          lVar15 = *(long *)(unaff_x20 + 0x40);
          if ((*(ushort *)
                (*(long *)(*(long *)
                            Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                          + 0x20) + 0x135) & 1) == 0) {
            FUN_02b76218();
          }
          *(undefined4 *)(lVar6 + 0x60) = *(undefined4 *)(lVar15 + 8);
          FUN_058a0b8c();
        }
      }
LAB_058a22b4:
      lVar15 = *(long *)(unaff_x20 + 0x40);
      if ((*(ushort *)
            (*(long *)(*(long *)
                        Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                      + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      uVar1 = *(uint *)(lVar5 + 0x90);
      *(undefined4 *)(lVar6 + 0x40) = *(undefined4 *)(lVar15 + 8);
      if (uVar1 < 0x7fffffff) {
        uVar7 = 0;
        lVar15 = 0x20;
        do {
          lVar18 = *(long *)(lVar5 + 0x88);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if (*(uint *)(lVar18 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          uVar1 = *(uint *)(lVar18 + lVar15);
          if (*(int *)(*(long *)Method_System_Collections_Generic_List<XmlNode>_Add__ + 0xe4) == 0)
          {
            thunk_FUN_02b9ad44();
          }
          if (DAT_066d2bb0 == '\0') {
            FUN_02b3c81c(PTR_DAT_06322b80);
            DAT_066d2bb0 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_06322b80 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if (DAT_066d2bb1 == '\0') {
            FUN_02b3c81c(PTR_DAT_06322b80);
            DAT_066d2bb1 = '\x01';
          }
          uVar1 = uVar1 & 0xffff0000;
          if (uVar1 != 0) {
            lVar18 = *(long *)PTR_DAT_06322b80;
            if (*(int *)(lVar18 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar18 = *(long *)PTR_DAT_06322b80;
            }
            puVar12 = *(uint **)(lVar18 + 0xb8);
            if (uVar1 != *puVar12) {
              if (*(int *)(lVar18 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                puVar12 = *(uint **)(*(long *)PTR_DAT_06322b80 + 0xb8);
              }
              if (uVar1 != puVar12[1]) goto LAB_058a2460;
            }
            if (*(long *)(lVar5 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            if (*(uint *)(*(long *)(lVar5 + 0x88) + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            uVar8 = FUN_058a0b8c();
            if ((uVar8 & 1) != 0) {
              lVar18 = *(long *)(lVar5 + 0x88);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              if (*(uint *)(lVar18 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              FUN_058aaa80(lVar6,*(undefined8 *)(lVar18 + lVar15),
                           *(undefined4 *)((undefined8 *)(lVar18 + lVar15) + 1));
              *(int *)(lVar6 + 0x44) = *(int *)(lVar6 + 0x44) + 1;
            }
          }
LAB_058a2460:
          uVar7 = uVar7 + 1;
          lVar15 = lVar15 + 0x1c;
        } while ((long)uVar7 < (long)(*(int *)(lVar5 + 0x90) + 1));
      }
      lVar15 = *(long *)(unaff_x20 + 0x58);
      if ((*(ushort *)
            (*(long *)(*(long *)
                        Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__9>__
                      + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      lVar18 = 0;
      uVar7 = 0;
      *(undefined4 *)(lVar6 + 0x48) = *(undefined4 *)(lVar15 + 8);
      while( true ) {
        lVar15 = FUN_037a6268(lStack0000000000000018,iVar19,*puVar14);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if ((long)(*(int *)(lVar15 + 0xa0) + 1) <= (long)uVar7) break;
        lVar15 = FUN_037a6268(lStack0000000000000018,iVar19,*puVar14);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar15 = *(long *)(lVar15 + 0x98);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        if (*(int *)(*(long *)PTR_DAT_06322b80 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (DAT_066d2bb1 == '\0') {
          FUN_02b3c81c(PTR_DAT_06322b80);
          DAT_066d2bb1 = '\x01';
        }
        uVar2 = *(ushort *)(lVar15 + lVar18 + 0x22);
        iVar3 = (uint)uVar2 << 0x10;
        if (uVar2 != 0) {
          lVar15 = *(long *)PTR_DAT_06322b80;
          if (*(int *)(lVar15 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar15 = *(long *)PTR_DAT_06322b80;
          }
          piVar13 = *(int **)(lVar15 + 0xb8);
          if (iVar3 != *piVar13) {
            if (*(int *)(lVar15 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              piVar13 = *(int **)(*(long *)PTR_DAT_06322b80 + 0xb8);
            }
            if (iVar3 != piVar13[1]) goto LAB_058a25f0;
          }
          uVar8 = FUN_058a0f38();
          if ((uVar8 & 1) != 0) {
            *(int *)(lVar6 + 0x4c) = *(int *)(lVar6 + 0x4c) + 1;
          }
        }
LAB_058a25f0:
        uVar7 = uVar7 + 1;
        lVar18 = lVar18 + 0x10;
      }
    }
    lVar15 = *(long *)(unaff_x20 + 0x30);
    if ((*(ushort *)
          (*(long *)(*(long *)
                      Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                    + 0x20) + 0x135) & 1) == 0) {
      FUN_02b76218();
    }
    lVar16 = *(long *)(unaff_x20 + 0x38);
    lVar18 = *(long *)
              Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRPlugin_Result>>,_OVRAnchor_<FetchTrackablesAsync>d__66>__
    ;
    *(undefined4 *)(lVar6 + 0x28) = *(undefined4 *)(lVar15 + 8);
    if ((*(ushort *)(*(long *)(lVar18 + 0x20) + 0x135) & 1) == 0) {
      FUN_02b76218();
    }
    uVar7 = 0;
    *(undefined4 *)(lVar6 + 0x30) = *(undefined4 *)(lVar16 + 8);
    do {
      lVar15 = *(long *)(lVar5 + 0xb0);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(lVar15 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar15 = *(long *)(lVar15 + uVar7 * 8 + 0x20);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      iVar3 = *(int *)(lVar15 + 0x18);
      if (0 < iVar3) {
        iVar17 = 0;
        do {
          auVar20 = FUN_0381617c(lVar15,iVar17,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_List<XmlQualifiedName>_GetEnumerator__
                                );
          pcVar9 = (char *)FUN_058ab2a4();
          if ((*pcVar9 != '\0') && (*(char *)(lVar6 + 0x79) == '\0')) {
            lVar18 = *(long *)(in_stack_00000030 + 0x48);
            *(undefined1 *)(lVar6 + 0x79) = 1;
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            FUN_03f08354(lVar18,iVar19,*(undefined8 *)Method_System_Nullable<Guid>_get_HasValue__);
          }
          if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          in_stack_00000058 = auVar20._8_8_ & 0xffffffff | in_stack_00000058 & 0xffffffff00000000;
          puVar10 = (undefined1 *)
                    UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor
                              (*(long *)(unaff_x20 + 0x10),auVar20._0_8_,in_stack_00000058,0);
          *(int *)(puVar10 + 4) = iVar19;
          *puVar10 = 1;
          in_stack_00000108 = auVar20._8_4_;
          in_stack_00000100 = auVar20._0_8_;
          FUN_03ab3ac4(unaff_x20 + 0x38,&stack0x00000100,
                       *(undefined8 *)
                        Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_SetResult__);
          iVar17 = iVar17 + 1;
          *(int *)(lVar6 + 0x34) = *(int *)(lVar6 + 0x34) + 1;
        } while (iVar3 != iVar17);
      }
      lVar15 = *(long *)(lVar5 + 0xa8);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(lVar15 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar15 = *(long *)(lVar15 + uVar7 * 8 + 0x20);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      iVar3 = *(int *)(lVar15 + 0x18);
      if (0 < iVar3) {
        iVar17 = 0;
        do {
          auVar20 = FUN_0381617c(lVar15,iVar17,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_List<XmlQualifiedName>_GetEnumerator__
                                );
          if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          in_stack_00000050 = auVar20._8_8_ & 0xffffffff | in_stack_00000050 & 0xffffffff00000000;
          UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor
                    (*(long *)(unaff_x20 + 0x10),auVar20._0_8_,in_stack_00000050,0);
          FUN_058ab37c();
          in_stack_000000f8 = auVar20._8_4_;
          in_stack_000000f0 = auVar20._0_8_;
          FUN_03ab32a0(unaff_x20 + 0x30,&stack0x000000f0,
                       *(undefined8 *)
                        Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_SetStateMachine__);
          iVar17 = iVar17 + 1;
          *(int *)(lVar6 + 0x2c) = *(int *)(lVar6 + 0x2c) + 1;
        } while (iVar3 != iVar17);
      }
      lVar15 = *(long *)(lVar5 + 0xb8);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(lVar15 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar15 = *(long *)(lVar15 + uVar7 * 8 + 0x20);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      iVar3 = *(int *)(lVar15 + 0x18);
      if (0 < iVar3) {
        iVar17 = 0;
        do {
          auVar20 = FUN_0381617c(lVar15,iVar17,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_List<XmlQualifiedName>_GetEnumerator__
                                );
          uVar11 = auVar20._0_8_;
          if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          uVar8 = auVar20._8_8_ & 0xffffffff;
          in_stack_00000040 = uVar8 | in_stack_00000040 & 0xffffffff00000000;
          UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor
                    (*(long *)(unaff_x20 + 0x10),uVar11,in_stack_00000040,0);
          FUN_058ab37c();
          in_stack_000000f0 = uVar11;
          in_stack_000000f8 = auVar20._8_4_;
          FUN_03ab32a0(unaff_x20 + 0x30,&stack0x000000f0,
                       *(undefined8 *)
                        Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_SetStateMachine__);
          lVar18 = *(long *)(unaff_x20 + 0x10);
          *(int *)(lVar6 + 0x2c) = *(int *)(lVar6 + 0x2c) + 1;
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          in_stack_00000038 = uVar8 | in_stack_00000038 & 0xffffffff00000000;
          puVar10 = (undefined1 *)
                    UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor
                              (lVar18,uVar11,in_stack_00000038,0);
          *(int *)(puVar10 + 4) = iVar19;
          *puVar10 = 1;
          in_stack_00000100 = uVar11;
          in_stack_00000108 = auVar20._8_4_;
          FUN_03ab3ac4(unaff_x20 + 0x38,&stack0x00000100,
                       *(undefined8 *)
                        Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_SetResult__);
          iVar17 = iVar17 + 1;
          *(int *)(lVar6 + 0x34) = *(int *)(lVar6 + 0x34) + 1;
        } while (iVar3 != iVar17);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != 3);
    iVar19 = iVar19 + 1;
    puVar14 = (undefined8 *)Method_System_Nullable<NativeArray<ShaderTagId>>__ctor__;
    if (*(int *)(lStack0000000000000018 + 0x18) <= iVar19) {
      FUN_05814cd4(&stack0x0000012c,0);
      return;
    }
  } while( true );
}


