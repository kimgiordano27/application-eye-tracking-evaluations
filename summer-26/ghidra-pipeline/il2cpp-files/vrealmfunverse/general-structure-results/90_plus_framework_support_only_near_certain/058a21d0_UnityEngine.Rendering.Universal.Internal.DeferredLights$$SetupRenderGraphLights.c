/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.DeferredLights$$SetupRenderGraphLights
ENTRY_POINT: 058a21d0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_Rendering_Universal_Internal_DeferredLights__SetupRenderGraphLights(long *param_1)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  ulong uVar13;
  long lVar14;
  uint unaff_w23;
  int iVar15;
  long unaff_x27;
  int unaff_w29;
  undefined1 auVar16 [16];
  long in_stack_00000018;
  long in_stack_00000020;
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
  
  do {
    if (*(int *)(*param_1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (DAT_066d2bb1 == '\0') {
      FUN_02b3c81c(PTR_DAT_06322b80);
      DAT_066d2bb1 = '\x01';
    }
    uVar1 = unaff_w23 & 0xffff0000;
    if (uVar1 != 0) {
      lVar5 = *(long *)PTR_DAT_06322b80;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar5 = *(long *)PTR_DAT_06322b80;
      }
      puVar10 = *(uint **)(lVar5 + 0xb8);
      if (uVar1 != *puVar10) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          puVar10 = *(uint **)(*(long *)PTR_DAT_06322b80 + 0xb8);
        }
        if (uVar1 != puVar10[1]) goto LAB_058a22b4;
      }
      lVar5 = *(long *)(unaff_x20 + 0x40);
      if ((*(ushort *)
            (*(long *)(*(long *)
                        Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                      + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      *(undefined4 *)(unaff_x19 + 0x60) = *(undefined4 *)(lVar5 + 8);
      FUN_058a0b8c();
    }
LAB_058a22b4:
    do {
      lVar5 = *(long *)(unaff_x20 + 0x40);
      if ((*(ushort *)
            (*(long *)(*(long *)
                        Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                      + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      uVar1 = *(uint *)(unaff_x27 + 0x90);
      *(undefined4 *)(unaff_x19 + 0x40) = *(undefined4 *)(lVar5 + 8);
      if (uVar1 < 0x7fffffff) {
        uVar13 = 0;
        lVar5 = 0x20;
        do {
          lVar11 = *(long *)(unaff_x27 + 0x88);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if (*(uint *)(lVar11 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          uVar1 = *(uint *)(lVar11 + lVar5);
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
            lVar11 = *(long *)PTR_DAT_06322b80;
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar11 = *(long *)PTR_DAT_06322b80;
            }
            puVar10 = *(uint **)(lVar11 + 0xb8);
            if (uVar1 != *puVar10) {
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                puVar10 = *(uint **)(*(long *)PTR_DAT_06322b80 + 0xb8);
              }
              if (uVar1 != puVar10[1]) goto LAB_058a2460;
            }
            if (*(long *)(unaff_x27 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            if (*(uint *)(*(long *)(unaff_x27 + 0x88) + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            uVar6 = FUN_058a0b8c();
            if ((uVar6 & 1) != 0) {
              lVar11 = *(long *)(unaff_x27 + 0x88);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              if (*(uint *)(lVar11 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              FUN_058aaa80(unaff_x19,*(undefined8 *)(lVar11 + lVar5),
                           *(undefined4 *)((undefined8 *)(lVar11 + lVar5) + 1));
              *(int *)(unaff_x19 + 0x44) = *(int *)(unaff_x19 + 0x44) + 1;
            }
          }
LAB_058a2460:
          uVar13 = uVar13 + 1;
          lVar5 = lVar5 + 0x1c;
        } while ((long)uVar13 < (long)(*(int *)(unaff_x27 + 0x90) + 1));
      }
      lVar5 = *(long *)(unaff_x20 + 0x58);
      if ((*(ushort *)
            (*(long *)(*(long *)
                        Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__9>__
                      + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      lVar11 = 0;
      uVar13 = 0;
      *(undefined4 *)(unaff_x19 + 0x48) = *(undefined4 *)(lVar5 + 8);
      while( true ) {
        lVar5 = FUN_037a6268(in_stack_00000018,unaff_w29,*unaff_x21);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if ((long)(*(int *)(lVar5 + 0xa0) + 1) <= (long)uVar13) break;
        lVar5 = FUN_037a6268(in_stack_00000018,unaff_w29,*unaff_x21);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar5 = *(long *)(lVar5 + 0x98);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar13) {
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
        uVar2 = *(ushort *)(lVar5 + lVar11 + 0x22);
        iVar3 = (uint)uVar2 << 0x10;
        if (uVar2 != 0) {
          lVar5 = *(long *)PTR_DAT_06322b80;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar5 = *(long *)PTR_DAT_06322b80;
          }
          piVar12 = *(int **)(lVar5 + 0xb8);
          if (iVar3 != *piVar12) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              piVar12 = *(int **)(*(long *)PTR_DAT_06322b80 + 0xb8);
            }
            if (iVar3 != piVar12[1]) goto LAB_058a25f0;
          }
          uVar6 = FUN_058a0f38();
          if ((uVar6 & 1) != 0) {
            *(int *)(unaff_x19 + 0x4c) = *(int *)(unaff_x19 + 0x4c) + 1;
          }
        }
LAB_058a25f0:
        uVar13 = uVar13 + 1;
        lVar11 = lVar11 + 0x10;
        unaff_x27 = in_stack_00000020;
      }
      do {
        lVar5 = *(long *)(unaff_x20 + 0x30);
        if ((*(ushort *)
              (*(long *)(*(long *)
                          Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                        + 0x20) + 0x135) & 1) == 0) {
          FUN_02b76218();
        }
        lVar14 = *(long *)(unaff_x20 + 0x38);
        lVar11 = *(long *)
                  Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRPlugin_Result>>,_OVRAnchor_<FetchTrackablesAsync>d__66>__
        ;
        *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(lVar5 + 8);
        if ((*(ushort *)(*(long *)(lVar11 + 0x20) + 0x135) & 1) == 0) {
          FUN_02b76218();
        }
        uVar13 = 0;
        *(undefined4 *)(unaff_x19 + 0x30) = *(undefined4 *)(lVar14 + 8);
        do {
          lVar5 = *(long *)(unaff_x27 + 0xb0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if (*(uint *)(lVar5 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          lVar5 = *(long *)(lVar5 + uVar13 * 8 + 0x20);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          iVar3 = *(int *)(lVar5 + 0x18);
          if (0 < iVar3) {
            iVar15 = 0;
            do {
              auVar16 = FUN_0381617c(lVar5,iVar15,
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_List<XmlQualifiedName>_GetEnumerator__
                                    );
              pcVar7 = (char *)FUN_058ab2a4();
              if ((*pcVar7 != '\0') && (*(char *)(unaff_x19 + 0x79) == '\0')) {
                lVar11 = *(long *)(in_stack_00000030 + 0x48);
                *(undefined1 *)(unaff_x19 + 0x79) = 1;
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                FUN_03f08354(lVar11,unaff_w29,
                             *(undefined8 *)Method_System_Nullable<Guid>_get_HasValue__);
              }
              if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              in_stack_00000058 =
                   auVar16._8_8_ & 0xffffffff | in_stack_00000058 & 0xffffffff00000000;
              puVar8 = (undefined1 *)
                       UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor
                                 (*(long *)(unaff_x20 + 0x10),auVar16._0_8_,in_stack_00000058,0);
              *(int *)(puVar8 + 4) = unaff_w29;
              *puVar8 = 1;
              in_stack_00000108 = auVar16._8_4_;
              in_stack_00000100 = auVar16._0_8_;
              FUN_03ab3ac4(unaff_x20 + 0x38,&stack0x00000100,
                           *(undefined8 *)
                            Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_SetResult__);
              iVar15 = iVar15 + 1;
              *(int *)(unaff_x19 + 0x34) = *(int *)(unaff_x19 + 0x34) + 1;
            } while (iVar3 != iVar15);
          }
          lVar5 = *(long *)(in_stack_00000020 + 0xa8);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if (*(uint *)(lVar5 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          lVar5 = *(long *)(lVar5 + uVar13 * 8 + 0x20);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          iVar3 = *(int *)(lVar5 + 0x18);
          if (0 < iVar3) {
            iVar15 = 0;
            do {
              auVar16 = FUN_0381617c(lVar5,iVar15,
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_List<XmlQualifiedName>_GetEnumerator__
                                    );
              if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              in_stack_00000050 =
                   auVar16._8_8_ & 0xffffffff | in_stack_00000050 & 0xffffffff00000000;
              UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor
                        (*(long *)(unaff_x20 + 0x10),auVar16._0_8_,in_stack_00000050,0);
              FUN_058ab37c();
              in_stack_000000f8 = auVar16._8_4_;
              in_stack_000000f0 = auVar16._0_8_;
              FUN_03ab32a0(unaff_x20 + 0x30,&stack0x000000f0,
                           *(undefined8 *)
                            Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_SetStateMachine__
                          );
              iVar15 = iVar15 + 1;
              *(int *)(unaff_x19 + 0x2c) = *(int *)(unaff_x19 + 0x2c) + 1;
            } while (iVar3 != iVar15);
          }
          lVar5 = *(long *)(in_stack_00000020 + 0xb8);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if (*(uint *)(lVar5 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          lVar5 = *(long *)(lVar5 + uVar13 * 8 + 0x20);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          iVar3 = *(int *)(lVar5 + 0x18);
          if (0 < iVar3) {
            iVar15 = 0;
            do {
              auVar16 = FUN_0381617c(lVar5,iVar15,
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_List<XmlQualifiedName>_GetEnumerator__
                                    );
              uVar9 = auVar16._0_8_;
              if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              uVar6 = auVar16._8_8_ & 0xffffffff;
              in_stack_00000040 = uVar6 | in_stack_00000040 & 0xffffffff00000000;
              UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor
                        (*(long *)(unaff_x20 + 0x10),uVar9,in_stack_00000040,0);
              FUN_058ab37c();
              in_stack_000000f0 = uVar9;
              in_stack_000000f8 = auVar16._8_4_;
              FUN_03ab32a0(unaff_x20 + 0x30,&stack0x000000f0,
                           *(undefined8 *)
                            Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_SetStateMachine__
                          );
              lVar11 = *(long *)(unaff_x20 + 0x10);
              *(int *)(unaff_x19 + 0x2c) = *(int *)(unaff_x19 + 0x2c) + 1;
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              in_stack_00000038 = uVar6 | in_stack_00000038 & 0xffffffff00000000;
              puVar8 = (undefined1 *)
                       UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor
                                 (lVar11,uVar9,in_stack_00000038,0);
              *(int *)(puVar8 + 4) = unaff_w29;
              *puVar8 = 1;
              in_stack_00000100 = uVar9;
              in_stack_00000108 = auVar16._8_4_;
              FUN_03ab3ac4(unaff_x20 + 0x38,&stack0x00000100,
                           *(undefined8 *)
                            Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_SetResult__);
              iVar15 = iVar15 + 1;
              *(int *)(unaff_x19 + 0x34) = *(int *)(unaff_x19 + 0x34) + 1;
            } while (iVar3 != iVar15);
          }
          unaff_x21 = (undefined8 *)Method_System_Nullable<NativeArray<ShaderTagId>>__ctor__;
          uVar13 = uVar13 + 1;
          unaff_x27 = in_stack_00000020;
        } while (uVar13 != 3);
        unaff_w29 = unaff_w29 + 1;
        if (*(int *)(in_stack_00000018 + 0x18) <= unaff_w29) {
          FUN_05814cd4(&stack0x0000012c,0);
          return;
        }
        unaff_x27 = FUN_037a6268(in_stack_00000018,unaff_w29,
                                 *(undefined8 *)
                                  Method_System_Nullable<NativeArray<ShaderTagId>>__ctor__);
        in_stack_00000120 = unaff_x27;
        unaff_x19 = FUN_03ab2128(unaff_x20 + 0x18,unaff_w29,
                                 *(undefined8 *)
                                  Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__);
        FUN_058a4340(unaff_x19,&stack0x00000120,unaff_w29);
        if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar5 = *(long *)(unaff_x20 + 0x28);
        in_stack_000000e0 = 0;
        in_stack_000000e8 = 0;
        FUN_058a0134(&stack0x000000e0,*(undefined8 *)(unaff_x27 + 0x10),1);
        in_stack_00000118 = in_stack_000000e8;
        in_stack_00000110 = in_stack_000000e0;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        FUN_0463c200(lVar5,&stack0x00000110,
                     *(undefined8 *)
                      Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_SetException__);
        if (*(char *)(unaff_x19 + 0x79) != '\0') {
          if (*(long *)(in_stack_00000030 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          FUN_03f08354(*(long *)(in_stack_00000030 + 0x48),unaff_w29,
                       *(undefined8 *)Method_System_Nullable<Guid>_get_HasValue__);
        }
        in_stack_00000020 = unaff_x27;
      } while (*(int *)(unaff_x19 + 4) != 2);
      lVar5 = *(long *)(unaff_x20 + 0x40);
      if ((*(ushort *)
            (*(long *)(*(long *)
                        Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                      + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      puVar4 = PTR_DAT_06322b80;
      *(undefined4 *)(unaff_x19 + 0x38) = *(undefined4 *)(lVar5 + 8);
      uVar1 = *(uint *)(unaff_x27 + 0x2c);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (DAT_066d2bb1 == '\0') {
        FUN_02b3c81c(PTR_DAT_06322b80);
        DAT_066d2bb1 = '\x01';
      }
      uVar1 = uVar1 & 0xffff0000;
      if (uVar1 != 0) {
        lVar5 = *(long *)PTR_DAT_06322b80;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar5 = *(long *)PTR_DAT_06322b80;
        }
        puVar10 = *(uint **)(lVar5 + 0xb8);
        if (uVar1 != *puVar10) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            puVar10 = *(uint **)(*(long *)PTR_DAT_06322b80 + 0xb8);
          }
          if (uVar1 != puVar10[1]) goto LAB_058a2058;
        }
        *(undefined1 *)(unaff_x19 + 0x7d) = 1;
        uVar13 = FUN_058a0b8c();
        if ((uVar13 & 1) != 0) {
          FUN_058aaa80(unaff_x19,*(undefined8 *)(unaff_x27 + 0x2c),*(undefined4 *)(unaff_x27 + 0x34)
                      );
          *(int *)(unaff_x19 + 0x3c) = *(int *)(unaff_x19 + 0x3c) + 1;
        }
      }
LAB_058a2058:
      if (*(uint *)(unaff_x27 + 0x50) < 0x7fffffff) {
        uVar13 = 0;
        lVar5 = 0x20;
        do {
          lVar11 = *(long *)(unaff_x27 + 0x48);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if (*(uint *)(lVar11 + 0x18) <= uVar13) {
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
          uVar2 = *(ushort *)(lVar11 + lVar5 + 2);
          iVar3 = (uint)uVar2 << 0x10;
          if (uVar2 != 0) {
            lVar11 = *(long *)PTR_DAT_06322b80;
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar11 = *(long *)PTR_DAT_06322b80;
            }
            piVar12 = *(int **)(lVar11 + 0xb8);
            if (iVar3 != *piVar12) {
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                piVar12 = *(int **)(*(long *)PTR_DAT_06322b80 + 0xb8);
              }
              if (iVar3 != piVar12[1]) goto LAB_058a21a0;
            }
            if (*(long *)(unaff_x27 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            if (*(uint *)(*(long *)(unaff_x27 + 0x48) + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            uVar6 = FUN_058a0b8c();
            if ((uVar6 & 1) != 0) {
              lVar11 = *(long *)(unaff_x27 + 0x48);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              if (*(uint *)(lVar11 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              FUN_058aaa80(unaff_x19,*(undefined8 *)(lVar11 + lVar5),
                           *(undefined4 *)((undefined8 *)(lVar11 + lVar5) + 1));
              *(int *)(unaff_x19 + 0x3c) = *(int *)(unaff_x19 + 0x3c) + 1;
            }
          }
LAB_058a21a0:
          uVar13 = uVar13 + 1;
          lVar5 = lVar5 + 0x1c;
        } while ((long)uVar13 < (long)(*(int *)(unaff_x27 + 0x50) + 1));
      }
    } while (*(char *)(unaff_x27 + 0x54) == '\0');
    unaff_w23 = *(uint *)(unaff_x27 + 0x58);
    param_1 = (long *)PTR_DAT_06322b80;
  } while( true );
}


