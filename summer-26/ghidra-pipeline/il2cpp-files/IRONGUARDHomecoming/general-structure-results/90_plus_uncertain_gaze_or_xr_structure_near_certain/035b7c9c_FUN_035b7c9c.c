/*
FUNCTION_NAME: FUN_035b7c9c
ENTRY_POINT: 035b7c9c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_13;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x035b8d48) */
/* WARNING: Removing unreachable block (ram,0x035b8e48) */
/* WARNING: Removing unreachable block (ram,0x035b8c08) */
/* WARNING: Removing unreachable block (ram,0x035b8414) */
/* WARNING: Removing unreachable block (ram,0x035b865c) */
/* WARNING: Removing unreachable block (ram,0x035b8e50) */

long * FUN_035b7c9c(long param_1,long *param_2,byte param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  undefined8 uVar21;
  long lVar22;
  long local_68;
  
  if ((DAT_048335af & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_16__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ColumnLayout_<>c__DisplayClass42_3_<StretchResizeColumns>b__7__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_ThrowHelper_ThrowInvalidOperationException_InvalidOperation_NoValue__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_Columns_<>c_<UpdateVisibleColumns>b__76_0__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_CommandBufferPool_<>c_<_cctor>b__4_0__);
    thunk_FUN_01efb3a4(Method_Drawing_CommandBuilder_Builder_Add<int>__);
    thunk_FUN_01efb3a4(
                      Method_Drawing_CommandBuilder_Builder_Add<CommandBuilder_Builder_TextVertex>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_17__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_UnityCanvas_CanvasCylinder_<Start>b__28_0__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_UnityCanvas_CanvasRenderTexture_WhenCanvasRectTransformDimensionsChanged__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_18__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_19__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_2__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_20__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_21__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    thunk_FUN_01efb3a4(Method_Drawing_CommandBuilder_JobWireMesh_Execute__);
    thunk_FUN_01efb3a4(Method_System_Type_MakePointerType__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_048335af = 1;
  }
  local_68 = 0;
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar21 = thunk_FUN_01f117cc();
    puVar16 = Method_Sirenix_Serialization_SerializationNodeDataReader_ReadUInt32__;
  }
  else {
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar8 = FUN_03582560(param_2,0,0);
    puVar16 = Method_System_Type_MakePointerType__;
    if ((uVar8 & 1) == 0) {
      uVar21 = *(undefined8 *)Method_Drawing_CommandBuilder_JobWireMesh_Execute__;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar21 = FUN_03579868(uVar21,0);
      uVar8 = FUN_03582560(param_2,uVar21,0);
      plVar15 = (long *)0x0;
      if ((uVar8 & 1) == 0) {
        plVar15 = param_2;
      }
      if (*(int *)(*(long *)puVar16 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar16);
      }
      puVar2 = 
      Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_17__
      ;
      plVar9 = (long *)FUN_035b7ae0(param_1,plVar15,0);
      if ((param_3 & 1) == 0) {
        if (plVar9 == (long *)0x0) goto LAB_035b8d44;
        lVar10 = *plVar9;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
              puVar11 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_035b7f04;
            }
            uVar8 = uVar8 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_035b7f04:
        iVar6 = (*(code *)*puVar11)(plVar9,puVar11[1]);
        puVar3 = 
        Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_18__
        ;
        if (iVar6 == 1) {
          lVar10 = *plVar9;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) ==
                  *(long *)
                   Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_18__
                 ) {
                puVar11 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_035b866c;
              }
              uVar8 = uVar8 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar8 != 0);
          }
          puVar11 = (undefined8 *)
                    FUN_01ecb238(plVar9,*(long *)
                                         Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_18__
                                 ,0);
LAB_035b866c:
          lVar10 = (*(code *)*puVar11)(plVar9,0,puVar11[1]);
          if (lVar10 == 0) {
            thunk_FUN_01efb3a4(Method_Drawing_CommandBuilder_JobWireMesh_Execute_BurstManaged__);
            uVar21 = thunk_FUN_01f117cc();
            uVar14 = thunk_FUN_01efb3a4(
                                       Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_22__
                                       );
            FUN_034b0f60(uVar21,uVar14,0);
            goto LAB_035b8df4;
          }
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) ==
              0) {
            thunk_FUN_01ee6d7c();
          }
          uVar8 = FUN_03583338(plVar15,0,0);
          if ((uVar8 & 1) == 0) {
            plVar15 = (long *)FUN_01f08890(*(undefined8 *)
                                            Method_System_ThrowHelper_ThrowInvalidOperationException_InvalidOperation_NoValue__
                                           ,1);
            lVar12 = *plVar9;
            lVar10 = *(long *)puVar3;
            uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar8 != 0) {
              piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == lVar10) goto LAB_035b8b8c;
                uVar8 = uVar8 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar8 != 0);
            }
          }
          else {
            lVar10 = *plVar9;
            uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar8 != 0) {
              piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
                  puVar11 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_035b8a9c;
                }
                uVar8 = uVar8 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_035b8a9c:
            lVar10 = (*(code *)*puVar11)(plVar9,0,puVar11[1]);
            if ((lVar10 == 0) || (uVar21 = FUN_034bc5d4(lVar10,0), plVar15 == (long *)0x0))
            goto LAB_035b8d44;
            uVar8 = (**(code **)(*plVar15 + 0x2a8))
                              (plVar15,uVar21,*(undefined8 *)(*plVar15 + 0x2b0));
            if ((uVar8 & 1) == 0) {
              lVar12 = *(long *)
                        Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_16__
              ;
              lVar10 = *(long *)(lVar12 + 0x38);
              if (lVar10 == 0) {
                FUN_01ecafa0(lVar12);
                lVar10 = *(long *)(lVar12 + 0x38);
              }
              lVar10 = *(long *)(lVar10 + 0x10);
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_01ecaf44();
              }
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              lVar10 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_01ecaf44();
              }
              return (long *)**(undefined8 **)(lVar10 + 0xb8);
            }
            plVar15 = (long *)FUN_01f08890(*(undefined8 *)
                                            Method_System_ThrowHelper_ThrowInvalidOperationException_InvalidOperation_NoValue__
                                           ,1);
            lVar12 = *plVar9;
            lVar10 = *(long *)puVar3;
            uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar8 != 0) {
              piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == lVar10) goto LAB_035b8b8c;
                uVar8 = uVar8 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar8 != 0);
            }
          }
          puVar11 = (undefined8 *)FUN_01ecb238(plVar9,lVar10,0);
          goto LAB_035b8b98;
        }
        param_3 = 0;
      }
      else {
        if (*(int *)(*(long *)puVar16 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar10 = FUN_035b72c8(param_1);
        param_3 = lVar10 != 0 & param_3;
      }
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar8 = FUN_03583338(plVar15,0,0);
      if ((uVar8 & 1) == 0) {
        bVar5 = 0;
      }
      else {
        if (plVar15 == (long *)0x0) goto LAB_035b8d44;
        bVar5 = FUN_03584694(plVar15,0);
        bVar5 = bVar5 & 1;
      }
      if ((bVar5 & param_3) != 0) {
        if (*(int *)(*(long *)puVar16 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar10 = FUN_035b768c(plVar15);
        if (lVar10 == 0) goto LAB_035b8d44;
        param_3 = param_3 & *(char *)(lVar10 + 0x15) != '\0';
      }
      puVar16 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
      if (plVar9 != (long *)0x0) {
        lVar10 = *plVar9;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
              puVar11 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_035b8038;
            }
            uVar8 = uVar8 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_035b8038:
        uVar7 = (*(code *)*puVar11)(plVar9,puVar11[1]);
        if (*(int *)(*(long *)puVar16 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar16);
        }
        uVar7 = FUN_0356bc8c(uVar7,0x10,0);
        if (param_3 == 0) {
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) ==
              0) {
            thunk_FUN_01ee6d7c();
          }
          uVar8 = FUN_03582560(plVar15,0,0);
          if ((uVar8 & 1) == 0) {
            lVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                                         Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_21__
                                       );
            FUN_030f23f0(lVar10,uVar7,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_20__
                        );
            lVar12 = *plVar9;
            uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar8 != 0) {
              piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) ==
                    *(long *)Method_Oculus_Interaction_UnityCanvas_CanvasCylinder_<Start>b__28_0__)
                {
                  puVar11 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_035b88c8;
                }
                uVar8 = uVar8 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)
                      FUN_01ecb238(plVar9,*(long *)
                                           Method_Oculus_Interaction_UnityCanvas_CanvasCylinder_<Start>b__28_0__
                                   ,0);
LAB_035b88c8:
            plVar9 = (long *)(*(code *)*puVar11)(plVar9,puVar11[1]);
            puVar3 = 
            Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_19__
            ;
            puVar2 = 
            Method_Oculus_Interaction_UnityCanvas_CanvasRenderTexture_WhenCanvasRectTransformDimensionsChanged__
            ;
            puVar16 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            do {
              lVar12 = *plVar9;
              uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar8 != 0) {
                piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)puVar16) {
                    puVar11 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
                    goto LAB_035b8940;
                  }
                  uVar8 = uVar8 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar8 != 0);
              }
              puVar11 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar16,0);
LAB_035b8940:
              uVar8 = (*(code *)*puVar11)(plVar9,puVar11[1]);
              if ((uVar8 & 1) == 0) {
                if (plVar9 == (long *)0x0) goto joined_r0x035b8d04;
                lVar12 = *plVar9;
                uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar8 == 0) goto LAB_035b8a80;
                piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                goto LAB_035b8a68;
              }
              lVar12 = *plVar9;
              uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar8 != 0) {
                piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
                    puVar11 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
                    goto LAB_035b899c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar8 != 0);
              }
              puVar11 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_035b899c:
              lVar12 = (*(code *)*puVar11)(plVar9,puVar11[1]);
              if (lVar12 == 0) {
                thunk_FUN_01efb3a4(Method_Drawing_CommandBuilder_JobWireMesh_Execute_BurstManaged__)
                ;
                uVar21 = thunk_FUN_01f117cc();
                uVar14 = thunk_FUN_01efb3a4(
                                           Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_22__
                                           );
                FUN_034b0f60(uVar21,uVar14,0);
                uVar14 = thunk_FUN_01efb3a4(
                                           Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_3__
                                           );
                    /* WARNING: Subroutine does not return */
                FUN_01f08910(uVar21,uVar14);
              }
              uVar21 = FUN_034bc5d4(lVar12,0);
              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c(uVar21,uVar21);
              }
              uVar8 = (**(code **)(*plVar15 + 0x2a8))
                                (plVar15,uVar21,*(undefined8 *)(*plVar15 + 0x2b0));
              if ((uVar8 & 1) != 0) {
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                lVar17 = *(long *)(lVar10 + 0x10);
                lVar22 = *(long *)puVar3;
                *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar1 = *(uint *)(lVar10 + 0x18);
                if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                  *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                  plVar13 = (long *)(lVar17 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar13 = lVar12;
                  thunk_FUN_01f51358(plVar13,lVar12);
                }
                else {
                  FUN_030f2bb4(lVar10,lVar12,
                               *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                }
              }
            } while( true );
          }
          lVar10 = *plVar9;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) ==
                  *(long *)Method_Oculus_Interaction_UnityCanvas_CanvasCylinder_<Start>b__28_0__) {
                puVar11 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_035b8744;
              }
              uVar8 = uVar8 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar8 != 0);
          }
          puVar11 = (undefined8 *)
                    FUN_01ecb238(plVar9,*(long *)
                                         Method_Oculus_Interaction_UnityCanvas_CanvasCylinder_<Start>b__28_0__
                                 ,0);
LAB_035b8744:
          plVar15 = (long *)(*(code *)*puVar11)(plVar9,puVar11[1]);
          puVar3 = 
          Method_Oculus_Interaction_UnityCanvas_CanvasRenderTexture_WhenCanvasRectTransformDimensionsChanged__
          ;
          puVar16 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar10 = *plVar15;
            uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar8 != 0) {
              piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)puVar16) {
                  puVar11 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_035b87b4;
                }
                uVar8 = uVar8 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)FUN_01ecb238(plVar15,*(long *)puVar16,0);
LAB_035b87b4:
            uVar8 = (*(code *)*puVar11)(plVar15,puVar11[1]);
            if ((uVar8 & 1) == 0) {
              if (plVar15 == (long *)0x0) goto LAB_035b8bfc;
              lVar10 = *plVar15;
              uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar8 == 0) goto LAB_035b88ac;
              piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              goto LAB_035b8894;
            }
            lVar10 = *plVar15;
            uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar8 != 0) {
              piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
                  puVar11 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_035b8810;
                }
                uVar8 = uVar8 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)FUN_01ecb238(plVar15,*(long *)puVar3,0);
LAB_035b8810:
            lVar10 = (*(code *)*puVar11)(plVar15,puVar11[1]);
            if (lVar10 == 0) {
              thunk_FUN_01efb3a4(Method_Drawing_CommandBuilder_JobWireMesh_Execute_BurstManaged__);
              uVar21 = thunk_FUN_01f117cc();
              uVar14 = thunk_FUN_01efb3a4(
                                         Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_22__
                                         );
              FUN_034b0f60(uVar21,uVar14,0);
              uVar14 = thunk_FUN_01efb3a4(
                                         Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_3__
                                         );
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar21,uVar14);
            }
          } while( true );
        }
        lVar12 = thunk_FUN_01f117cc(*(undefined8 *)
                                     Method_Drawing_CommandBuilder_Builder_Add<CommandBuilder_Builder_TextVertex>__
                                   );
        FUN_02b6aa80(lVar12,uVar7,*(undefined8 *)Method_Drawing_CommandBuilder_Builder_Add<int>__);
        lVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                                     Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_21__
                                   );
        FUN_030f23f0(lVar10,uVar7,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_20__
                    );
        puVar3 = Method_UnityEngine_Rendering_CommandBufferPool_<>c_<_cctor>b__4_0__;
        puVar2 = 
        Method_Oculus_Interaction_UnityCanvas_CanvasRenderTexture_WhenCanvasRectTransformDimensionsChanged__
        ;
        puVar16 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        iVar6 = 0;
        do {
          lVar17 = *plVar9;
          uVar8 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar8 != 0) {
            piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) ==
                  *(long *)Method_Oculus_Interaction_UnityCanvas_CanvasCylinder_<Start>b__28_0__) {
                puVar11 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_035b8138;
              }
              uVar8 = uVar8 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar8 != 0);
          }
          puVar11 = (undefined8 *)
                    FUN_01ecb238(plVar9,*(long *)
                                         Method_Oculus_Interaction_UnityCanvas_CanvasCylinder_<Start>b__28_0__
                                 ,0);
LAB_035b8138:
          plVar9 = (long *)(*(code *)*puVar11)(plVar9,puVar11[1]);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
Oculus_Interaction_HandGrab_HandGrabUseInteractor__get_FingersStrength:
          lVar17 = *plVar9;
          uVar8 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar8 != 0) {
            piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar16) {
                puVar11 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_035b8198;
              }
              uVar8 = uVar8 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar8 != 0);
          }
          puVar11 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar16,0);
LAB_035b8198:
          uVar8 = (*(code *)*puVar11)(plVar9,puVar11[1]);
          if ((uVar8 & 1) != 0) {
            lVar17 = *plVar9;
            uVar8 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar8 != 0) {
              piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
                  puVar11 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_035b81f4;
                }
                uVar8 = uVar8 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_035b81f4:
            lVar17 = (*(code *)*puVar11)(plVar9,puVar11[1]);
            if (lVar17 == 0) {
              thunk_FUN_01efb3a4(Method_Drawing_CommandBuilder_JobWireMesh_Execute_BurstManaged__);
              uVar21 = thunk_FUN_01f117cc();
              uVar14 = thunk_FUN_01efb3a4(
                                         Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_22__
                                         );
              FUN_034b0f60(uVar21,uVar14,0);
              uVar14 = thunk_FUN_01efb3a4(
                                         Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_3__
                                         );
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar21,uVar14);
            }
            uVar21 = FUN_034bc5d4(lVar17,0);
            if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0)
                == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar8 = FUN_03583338(plVar15,0,0);
            if ((uVar8 & 1) != 0) goto code_r0x035b8244;
            goto LAB_035b8264;
          }
          if (plVar9 != (long *)0x0) {
            lVar17 = *plVar9;
            uVar8 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar8 != 0) {
              piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) ==
                    *(long *)
                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                  puVar11 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_035b83fc;
                }
                uVar8 = uVar8 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)
                      FUN_01ecb238(plVar9,*(long *)
                                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                   ,0);
LAB_035b83fc:
            (*(code *)*puVar11)(plVar9,puVar11[1]);
          }
          puVar4 = Method_System_Type_MakePointerType__;
          if (*(int *)(*(long *)Method_System_Type_MakePointerType__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          param_1 = FUN_035b72c8(param_1);
          if (param_1 == 0) goto joined_r0x035b8d04;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          iVar6 = iVar6 + 1;
          plVar9 = (long *)FUN_035b7ae0(param_1,plVar15,1);
        } while (plVar9 != (long *)0x0);
      }
      goto LAB_035b8d44;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar21 = thunk_FUN_01f117cc();
    puVar16 = Method_Unity_VisualScripting_ToggleFlow_Toggle__;
  }
  uVar14 = thunk_FUN_01efb3a4(puVar16);
  FUN_034efd20(uVar21,uVar14,0);
LAB_035b8df4:
  uVar14 = thunk_FUN_01efb3a4(
                             Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_3__
                             );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar21,uVar14);
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar20 = piVar20 + 4;
    if (uVar8 == 0) break;
LAB_035b8a68:
    if (*(long *)(piVar20 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar11 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_035b8cf4;
    }
  }
LAB_035b8a80:
  puVar11 = (undefined8 *)
            FUN_01ecb238(plVar9,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_035b8cf4:
  (*(code *)*puVar11)(plVar9,puVar11[1]);
joined_r0x035b8d04:
  if (lVar10 != 0) {
    plVar15 = (long *)FUN_030f4630(lVar10,*(undefined8 *)
                                           Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_2__
                                  );
    return plVar15;
  }
  goto LAB_035b8d44;
code_r0x035b8244:
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar8 = (**(code **)(*plVar15 + 0x2a8))(plVar15,uVar21,*(undefined8 *)(*plVar15 + 0x2b0));
  if ((uVar8 & 1) == 0) goto Oculus_Interaction_HandGrab_HandGrabUseInteractor__get_FingersStrength;
LAB_035b8264:
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar8 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                    (lVar12,uVar21,&local_68,*(undefined8 *)puVar3);
  if ((uVar8 & 1) == 0) {
    if (*(int *)(*(long *)Method_System_Type_MakePointerType__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar22 = FUN_035b768c(uVar21);
    if (iVar6 != 0) goto LAB_035b8290;
LAB_035b82c8:
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  }
  else {
    if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar22 = *(long *)(local_68 + 0x10);
    if (iVar6 == 0) goto LAB_035b82c8;
LAB_035b8290:
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(char *)(lVar22 + 0x15) == '\0') goto FUN_035b8350;
  }
  if (((*(char *)(lVar22 + 0x14) != '\0') || (local_68 == 0)) ||
     (*(int *)(local_68 + 0x18) == iVar6)) {
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar18 = *(long *)(lVar10 + 0x10);
    lVar19 = *(long *)
              Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_19__
    ;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
      plVar13 = (long *)(lVar18 + (long)(int)uVar1 * 8 + 0x20);
      *plVar13 = lVar17;
      thunk_FUN_01f51358(plVar13,lVar17);
    }
    else {
      FUN_030f2bb4(lVar10,lVar17,*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
FUN_035b8350:
  if (local_68 == 0) {
    lVar17 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_UnityEngine_UIElements_ColumnLayout_<>c__DisplayClass42_3_<StretchResizeColumns>b__7__
                               );
    *(long *)(lVar17 + 0x10) = lVar22;
    thunk_FUN_01f51358((long *)(lVar17 + 0x10),lVar22);
    *(int *)(lVar17 + 0x18) = iVar6;
    FUN_02b6b2e4(lVar12,uVar21,lVar17,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_Columns_<>c_<UpdateVisibleColumns>b__76_0__);
  }
  goto Oculus_Interaction_HandGrab_HandGrabUseInteractor__get_FingersStrength;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar20 = piVar20 + 4;
    if (uVar8 == 0) break;
LAB_035b8894:
    if (*(long *)(piVar20 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar11 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_035b8bf0;
    }
  }
LAB_035b88ac:
  puVar11 = (undefined8 *)
            FUN_01ecb238(plVar15,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_035b8bf0:
  (*(code *)*puVar11)(plVar15,puVar11[1]);
LAB_035b8bfc:
  lVar10 = *plVar9;
  uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar8 != 0) {
    piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
        puVar11 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
        goto LAB_035b8c58;
      }
      uVar8 = uVar8 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar8 != 0);
  }
  puVar11 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_035b8c58:
  uVar7 = (*(code *)*puVar11)(plVar9,puVar11[1]);
  plVar15 = (long *)FUN_01f08890(*(undefined8 *)
                                  Method_System_ThrowHelper_ThrowInvalidOperationException_InvalidOperation_NoValue__
                                 ,uVar7);
  lVar10 = *plVar9;
  uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar8 != 0) {
    piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
        puVar11 = (undefined8 *)(lVar10 + (long)(*piVar20 + 5) * 0x10 + 0x138);
        goto FUN_035b8cd0;
      }
      uVar8 = uVar8 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar8 != 0);
  }
  puVar11 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,5);
FUN_035b8cd0:
  (*(code *)*puVar11)(plVar9,plVar15,0,puVar11[1]);
  return plVar15;
LAB_035b8b8c:
  puVar11 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
LAB_035b8b98:
  lVar10 = (*(code *)*puVar11)(plVar9,0,puVar11[1]);
  if (plVar15 != (long *)0x0) {
    if ((lVar10 != 0) &&
       (lVar12 = thunk_FUN_01f116d0(lVar10,*(undefined8 *)(*plVar15 + 0x40)), lVar12 == 0)) {
      uVar21 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar21,0);
    }
    if ((int)plVar15[3] != 0) {
      plVar15[4] = lVar10;
      thunk_FUN_01f51358(plVar15 + 4,lVar10);
      return plVar15;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
LAB_035b8d44:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


