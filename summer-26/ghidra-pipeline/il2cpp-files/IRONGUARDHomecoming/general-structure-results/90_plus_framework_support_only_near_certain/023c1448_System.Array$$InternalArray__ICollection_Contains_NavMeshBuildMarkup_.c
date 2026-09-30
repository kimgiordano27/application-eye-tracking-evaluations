/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<NavMeshBuildMarkup>
ENTRY_POINT: 023c1448
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 162
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x023c2228) */

long System_Array__InternalArray__ICollection_Contains<NavMeshBuildMarkup>(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  int in_w9;
  int *piVar12;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar13;
  long *plVar14;
  long *unaff_x27;
  long *unaff_x28;
  long *in_stack_00000010;
  long *in_stack_00000018;
  
  uVar13 = *(undefined8 *)(param_1 + 0x18);
  if (in_w9 == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar4 = (long *)FUN_03579868(uVar13,0);
  if (plVar4 == (long *)0x0) goto LAB_023c2230;
  uVar5 = (**(code **)(*plVar4 + 0x3c8))(plVar4,*(undefined8 *)(*plVar4 + 0x3d0));
  if ((uVar5 & 1) == 0) {
LAB_023c1588:
    uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar4 = (long *)FUN_03579868(uVar13,0);
    if (plVar4 == (long *)0x0) goto LAB_023c2230;
    uVar5 = (**(code **)(*plVar4 + 0x3c8))(plVar4,*(undefined8 *)(*plVar4 + 0x3d0));
    if ((uVar5 & 1) == 0) {
LAB_023c1714:
      uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar4 = (long *)FUN_03579868(uVar13,0);
      if (plVar4 == (long *)0x0) goto LAB_023c2230;
      uVar5 = (**(code **)(*plVar4 + 0x3c8))(plVar4,*(undefined8 *)(*plVar4 + 0x3d0));
      if ((uVar5 & 1) == 0) {
LAB_023c17cc:
        uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar4 = (long *)FUN_03579868(uVar13,0);
        if (plVar4 == (long *)0x0) goto LAB_023c2230;
        uVar5 = (**(code **)(*plVar4 + 0x3c8))(plVar4,*(undefined8 *)(*plVar4 + 0x3d0));
        if ((uVar5 & 1) != 0) {
          uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          plVar4 = (long *)FUN_03579868(uVar13,0);
          if (plVar4 == (long *)0x0) goto LAB_023c2230;
          plVar4 = (long *)(**(code **)(*plVar4 + 0x458))(plVar4,*(undefined8 *)(*plVar4 + 0x460));
          uVar13 = FUN_03579868(*(undefined8 *)
                                 Method_Unity_VisualScripting_ComponentHolderProtocol_GetOrAddComponent<Variables>__
                                ,0);
          if (plVar4 == (long *)0x0) goto LAB_023c2230;
          uVar5 = (**(code **)(*plVar4 + 0x2a8))(plVar4,uVar13,*(undefined8 *)(*plVar4 + 0x2b0));
          if ((uVar5 & 1) != 0) {
            plVar4 = *(long **)(unaff_x19 + 0x28);
            goto LAB_023c1880;
          }
        }
        uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar4 = (long *)FUN_03579868(uVar13,0);
        if (plVar4 == (long *)0x0) goto LAB_023c2230;
        uVar5 = (**(code **)(*plVar4 + 0x3c8))(plVar4,*(undefined8 *)(*plVar4 + 0x3d0));
        if ((uVar5 & 1) != 0) {
          uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          plVar4 = (long *)FUN_03579868(uVar13,0);
          if (plVar4 == (long *)0x0) goto LAB_023c2230;
          plVar4 = (long *)(**(code **)(*plVar4 + 0x458))(plVar4,*(undefined8 *)(*plVar4 + 0x460));
          uVar13 = FUN_03579868(*(undefined8 *)
                                 Method_UnityEngine_Component_TryGetComponent<UniversalAdditionalLightData>__
                                ,0);
          if (plVar4 == (long *)0x0) goto LAB_023c2230;
          uVar5 = (**(code **)(*plVar4 + 0x2a8))(plVar4,uVar13,*(undefined8 *)(*plVar4 + 0x2b0));
          if ((uVar5 & 1) != 0) {
            plVar4 = *(long **)(unaff_x19 + 0x30);
            plVar6 = (long *)FUN_01f08890(*(undefined8 *)
                                           Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                          ,3);
            uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(*unaff_x28);
            }
            lVar8 = FUN_03579868(uVar13,0);
            if (plVar6 == (long *)0x0) goto LAB_023c2230;
            if ((lVar8 != 0) &&
               (lVar9 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
            goto LAB_023c22f0;
            if ((int)plVar6[3] == 0) goto LAB_023c22ec;
            plVar6[4] = lVar8;
            thunk_FUN_01f51358(plVar6 + 4,lVar8);
            plVar7 = (long *)FUN_03579868(*(undefined8 *)(*unaff_x27 + 0x18),0);
            if (plVar7 == (long *)0x0) goto LAB_023c2230;
            uVar13 = (**(code **)(*plVar7 + 0x478))(plVar7,*(undefined8 *)(*plVar7 + 0x480));
            lVar8 = FUN_022f69fc(uVar13,*(undefined8 *)
                                         Method_UnityEngine_Component_TryGetComponent<Skybox>__);
            if ((lVar8 != 0) &&
               (lVar9 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
            goto LAB_023c22f0;
            if (*(uint *)(plVar6 + 3) < 2) goto LAB_023c22ec;
            plVar6[5] = lVar8;
            thunk_FUN_01f51358(plVar6 + 5,lVar8);
            plVar7 = (long *)FUN_03579868(*(undefined8 *)(*unaff_x27 + 0x18),0);
            if (plVar7 == (long *)0x0) goto LAB_023c2230;
            uVar13 = (**(code **)(*plVar7 + 0x478))(plVar7,*(undefined8 *)(*plVar7 + 0x480));
            lVar8 = FUN_022f4c44(uVar13,1,*(undefined8 *)
                                           Method_UnityEngine_Component_TryGetComponent<ShadowCasterGroup2D>__
                                );
            if ((lVar8 != 0) &&
               (lVar9 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
            goto LAB_023c22f0;
            if (*(uint *)(plVar6 + 3) < 3) goto LAB_023c22ec;
            plVar7 = plVar6 + 6;
            *plVar7 = lVar8;
            goto LAB_023c195c;
          }
        }
        uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar4 = (long *)FUN_03579868(uVar13,0);
        if (plVar4 == (long *)0x0) goto LAB_023c2230;
        uVar5 = (**(code **)(*plVar4 + 0x3c8))(plVar4,*(undefined8 *)(*plVar4 + 0x3d0));
        lVar8 = *unaff_x27;
        if ((uVar5 & 1) != 0) {
          uVar13 = *(undefined8 *)(lVar8 + 0x18);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          plVar4 = (long *)FUN_03579868(uVar13,0);
          if (plVar4 == (long *)0x0) goto LAB_023c2230;
          plVar4 = (long *)(**(code **)(*plVar4 + 0x458))(plVar4,*(undefined8 *)(*plVar4 + 0x460));
          uVar13 = FUN_03579868(*(undefined8 *)
                                 Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponent__
                                ,0);
          if (plVar4 == (long *)0x0) goto LAB_023c2230;
          uVar5 = (**(code **)(*plVar4 + 0x2a8))(plVar4,uVar13,*(undefined8 *)(*plVar4 + 0x2b0));
          lVar8 = *unaff_x27;
          if ((uVar5 & 1) != 0) {
            uVar13 = *(undefined8 *)(lVar8 + 0x18);
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            plVar4 = (long *)FUN_03579868(uVar13,0);
            if (plVar4 == (long *)0x0) goto LAB_023c2230;
            uVar13 = (**(code **)(*plVar4 + 0x478))(plVar4,*(undefined8 *)(*plVar4 + 0x480));
            lVar8 = FUN_02308ab0(uVar13,*(undefined8 *)
                                         Method_UnityEngine_Component_TryGetComponent<SphereCollider>__
                                );
            plVar4 = *(long **)(unaff_x19 + 0x38);
            plVar6 = (long *)FUN_01f08890(*(undefined8 *)
                                           Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                          ,2);
            if (lVar8 == 0) goto LAB_023c2230;
            if (*(int *)(lVar8 + 0x18) == 0) goto LAB_023c22ec;
            if (plVar6 == (long *)0x0) goto LAB_023c2230;
            lVar9 = *(long *)(lVar8 + 0x20);
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
            goto LAB_023c22f0;
            if ((int)plVar6[3] == 0) goto LAB_023c22ec;
            plVar6[4] = lVar9;
            thunk_FUN_01f51358(plVar6 + 4,lVar9);
            if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_023c22ec;
            lVar8 = *(long *)(lVar8 + 0x28);
            goto joined_r0x023c1d94;
          }
        }
        if ((*(byte *)(*(long *)(lVar8 + 0x28) + 0x135) & 1) == 0) {
          FUN_01ecaf44();
        }
        lVar8 = thunk_FUN_01f117cc();
        (*(code *)**(undefined8 **)(*unaff_x27 + 0x30))();
        uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar13 = FUN_03579868(uVar13,0);
        plVar4 = (long *)FUN_040c95e4(uVar13,0);
        if (plVar4 != (long *)0x0) {
          lVar9 = *plVar4;
          uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar5 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) ==
                  *(long *)Method_Meta_WitAi_ComponentExtensions_Copy<AudioSource>__) {
                puVar11 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_023c1e4c;
              }
              uVar5 = uVar5 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar5 != 0);
          }
          puVar11 = (undefined8 *)
                    FUN_01ecb238(plVar4,*(long *)
                                         Method_Meta_WitAi_ComponentExtensions_Copy<AudioSource>__,0
                                );
LAB_023c1e4c:
          plVar4 = (long *)(*(code *)*puVar11)(plVar4,puVar11[1]);
          puVar3 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
          puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar9 = *plVar4;
            uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar5 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar11 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_023c1ec0;
                }
                uVar5 = uVar5 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar5 != 0);
            }
            puVar11 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_023c1ec0:
            uVar5 = (*(code *)*puVar11)(plVar4,puVar11[1]);
            if ((uVar5 & 1) == 0) {
              if (plVar4 == (long *)0x0) {
                return lVar8;
              }
              lVar9 = *plVar4;
              uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar5 == 0) goto LAB_023c21fc;
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              goto LAB_023c21e4;
            }
            lVar9 = *plVar4;
            uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar5 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) ==
                    *(long *)
                     Method_Meta_WitAi_ComponentExtensions_HasCustomAttributes<ObsoleteAttribute>__)
                {
                  puVar11 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_023c1f24;
                }
                uVar5 = uVar5 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar5 != 0);
            }
            puVar11 = (undefined8 *)
                      FUN_01ecb238(plVar4,*(long *)
                                           Method_Meta_WitAi_ComponentExtensions_HasCustomAttributes<ObsoleteAttribute>__
                                   ,0);
LAB_023c1f24:
            plVar6 = (long *)(*(code *)*puVar11)(plVar4,puVar11[1]);
            if (plVar6 == (long *)0x0) {
LAB_023c2234:
              thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
              uVar13 = thunk_FUN_01f117cc();
              FUN_0356ad6c(uVar13,0);
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar13,unaff_x20);
            }
            lVar9 = *plVar6;
            bVar1 = *(byte *)(*(long *)
                               Method_UnityEngine_Component_TryGetComponent<SplineContainer>__ +
                             0x130);
            if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)Method_UnityEngine_Component_TryGetComponent<SplineContainer>__)) {
              bVar1 = *(byte *)(*(long *)
                                 Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentInParent__
                               + 0x130);
              if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)
                   Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentInParent__))
              goto LAB_023c2234;
              in_stack_00000018 = plVar6;
              thunk_FUN_01f51358(&stack0x00000018);
              in_stack_00000010 = in_stack_00000018;
              plVar6 = (long *)thunk_FUN_01f113fc(*(undefined8 *)
                                                                                                      
                                                  Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponents__
                                                  ,&stack0x00000010);
            }
            else {
              in_stack_00000018 = (long *)0x0;
              FUN_040c5b80(&stack0x00000018,plVar6,0);
              in_stack_00000010 = in_stack_00000018;
              plVar6 = (long *)thunk_FUN_01f113fc(*(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_Component_TryGetComponent<Text>__
                                                  ,&stack0x00000010);
            }
            plVar14 = *(long **)(unaff_x19 + 0x10);
            plVar7 = (long *)FUN_01f08890(*(undefined8 *)
                                           Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                          ,2);
            uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            lVar9 = FUN_03579868(uVar13,0);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0)) {
              uVar13 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar13,0);
            }
            if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            plVar7[4] = lVar9;
            thunk_FUN_01f51358(plVar7 + 4,lVar9);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar9 = *plVar6;
            uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar5 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) ==
                    *(long *)Method_UnityEngine_Component_TryGetComponent<PixelPerfectCamera>__) {
                  puVar11 = (undefined8 *)(lVar9 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                  goto LAB_023c2098;
                }
                uVar5 = uVar5 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar5 != 0);
            }
            puVar11 = (undefined8 *)
                      FUN_01ecb238(plVar6,*(long *)
                                           Method_UnityEngine_Component_TryGetComponent<PixelPerfectCamera>__
                                   ,2);
LAB_023c2098:
            lVar9 = (*(code *)*puVar11)(plVar6,puVar11[1]);
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0)) {
              uVar13 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar13,0);
            }
            if (*(uint *)(plVar7 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            plVar7[5] = lVar9;
            thunk_FUN_01f51358(plVar7 + 5,lVar9);
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar9 = (**(code **)(*plVar14 + 0x408))
                              (plVar14,plVar7,*(undefined8 *)(*plVar14 + 0x410));
            plVar7 = (long *)FUN_01f08890(*(undefined8 *)puVar3,2);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar10 = thunk_FUN_01f116d0(plVar6,*(undefined8 *)(*plVar7 + 0x40));
            if (lVar10 == 0) {
              uVar13 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar13,0);
            }
            if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            plVar7[4] = (long)plVar6;
            thunk_FUN_01f51358(plVar7 + 4,plVar6);
            if ((lVar8 != 0) &&
               (lVar10 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0)) {
              uVar13 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar13,0);
            }
            if (*(uint *)(plVar7 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            plVar7[5] = lVar8;
            thunk_FUN_01f51358(plVar7 + 5,lVar8);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_034b2bf4(lVar9);
          } while( true );
        }
        goto LAB_023c2230;
      }
      uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar4 = (long *)FUN_03579868(uVar13,0);
      if (plVar4 == (long *)0x0) goto LAB_023c2230;
      plVar4 = (long *)(**(code **)(*plVar4 + 0x458))(plVar4,*(undefined8 *)(*plVar4 + 0x460));
      uVar13 = FUN_03579868(*(undefined8 *)
                             Method_Meta_WitAi_ComponentExtensions_PreloadCopyData<AudioSource>__,0)
      ;
      if (plVar4 == (long *)0x0) goto LAB_023c2230;
      uVar5 = (**(code **)(*plVar4 + 0x2a8))(plVar4,uVar13,*(undefined8 *)(*plVar4 + 0x2b0));
      if ((uVar5 & 1) == 0) goto LAB_023c17cc;
      plVar4 = *(long **)(unaff_x19 + 0x20);
LAB_023c1880:
      plVar6 = (long *)FUN_01f08890(*(undefined8 *)
                                     Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                    ,2);
      uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*unaff_x28);
      }
      lVar8 = FUN_03579868(uVar13,0);
      if (plVar6 == (long *)0x0) goto LAB_023c2230;
      if ((lVar8 != 0) &&
         (lVar9 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
      goto LAB_023c22f0;
      if ((int)plVar6[3] == 0) goto LAB_023c22ec;
      plVar6[4] = lVar8;
      thunk_FUN_01f51358(plVar6 + 4,lVar8);
      plVar7 = (long *)FUN_03579868(*(undefined8 *)(*unaff_x27 + 0x18),0);
      if (plVar7 == (long *)0x0) goto LAB_023c2230;
      uVar13 = (**(code **)(*plVar7 + 0x478))(plVar7,*(undefined8 *)(*plVar7 + 0x480));
      lVar8 = FUN_022f69fc(uVar13,*(undefined8 *)
                                   Method_UnityEngine_Component_TryGetComponent<Skybox>__);
    }
    else {
      uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar4 = (long *)FUN_03579868(uVar13,0);
      if (plVar4 == (long *)0x0) goto LAB_023c2230;
      plVar4 = (long *)(**(code **)(*plVar4 + 0x458))(plVar4,*(undefined8 *)(*plVar4 + 0x460));
      uVar13 = FUN_03579868(*(undefined8 *)Method_UnityEngine_Component_TryGetComponent<Renderer>__,
                            0);
      if (plVar4 == (long *)0x0) goto LAB_023c2230;
      uVar5 = (**(code **)(*plVar4 + 0x2a8))(plVar4,uVar13,*(undefined8 *)(*plVar4 + 0x2b0));
      if ((uVar5 & 1) == 0) goto LAB_023c1714;
      plVar4 = *(long **)(unaff_x19 + 0x58);
      plVar6 = (long *)FUN_01f08890(*(undefined8 *)
                                     Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                    ,2);
      uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*unaff_x28);
      }
      plVar7 = (long *)FUN_03579868(uVar13,0);
      if (plVar7 == (long *)0x0) goto LAB_023c2230;
      uVar13 = (**(code **)(*plVar7 + 0x478))(plVar7,*(undefined8 *)(*plVar7 + 0x480));
      lVar8 = FUN_022f69fc(uVar13,*(undefined8 *)
                                   Method_UnityEngine_Component_TryGetComponent<Skybox>__);
      if (plVar6 == (long *)0x0) goto LAB_023c2230;
      if ((lVar8 != 0) &&
         (lVar9 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
      goto LAB_023c22f0;
      if ((int)plVar6[3] == 0) goto LAB_023c22ec;
      plVar6[4] = lVar8;
      thunk_FUN_01f51358(plVar6 + 4,lVar8);
      plVar7 = (long *)FUN_03579868(*(undefined8 *)(*unaff_x27 + 0x18),0);
      if (plVar7 == (long *)0x0) goto LAB_023c2230;
      uVar13 = (**(code **)(*plVar7 + 0x478))(plVar7,*(undefined8 *)(*plVar7 + 0x480));
      lVar8 = FUN_022f4c44(uVar13,1,*(undefined8 *)
                                     Method_UnityEngine_Component_TryGetComponent<ShadowCasterGroup2D>__
                          );
    }
joined_r0x023c1d94:
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
LAB_023c22f0:
      uVar13 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar13,0);
    }
    if (*(uint *)(plVar6 + 3) < 2) {
LAB_023c22ec:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    plVar7 = plVar6 + 5;
    *plVar7 = lVar8;
  }
  else {
    uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar4 = (long *)FUN_03579868(uVar13,0);
    if (plVar4 == (long *)0x0) goto LAB_023c2230;
    plVar4 = (long *)(**(code **)(*plVar4 + 0x458))(plVar4,*(undefined8 *)(*plVar4 + 0x460));
    uVar13 = FUN_03579868(*(undefined8 *)
                           Method_UnityEngine_Component_TryGetComponent<UniversalAdditionalCameraData>__
                          ,0);
    if (plVar4 == (long *)0x0) goto LAB_023c2230;
    uVar5 = (**(code **)(*plVar4 + 0x2a8))(plVar4,uVar13,*(undefined8 *)(*plVar4 + 0x2b0));
    if ((uVar5 & 1) == 0) goto LAB_023c1588;
    plVar4 = *(long **)(unaff_x19 + 0x50);
    plVar6 = (long *)FUN_01f08890(*(undefined8 *)
                                   Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                  ,1);
    uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*unaff_x28);
    }
    plVar7 = (long *)FUN_03579868(uVar13,0);
    if (plVar7 == (long *)0x0) goto LAB_023c2230;
    uVar13 = (**(code **)(*plVar7 + 0x478))(plVar7,*(undefined8 *)(*plVar7 + 0x480));
    lVar8 = FUN_022f69fc(uVar13,*(undefined8 *)
                                 Method_UnityEngine_Component_TryGetComponent<Skybox>__);
    if (plVar6 == (long *)0x0) goto LAB_023c2230;
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
    goto LAB_023c22f0;
    if ((int)plVar6[3] == 0) goto LAB_023c22ec;
    plVar7 = plVar6 + 4;
    *plVar7 = lVar8;
  }
LAB_023c195c:
  thunk_FUN_01f51358(plVar7,lVar8);
  if (plVar4 != (long *)0x0) {
    lVar8 = (**(code **)(*plVar4 + 0x408))(plVar4,plVar6,*(undefined8 *)(*plVar4 + 0x410));
    FUN_01f08890(*(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__,0)
    ;
    if (lVar8 != 0) {
      lVar8 = FUN_034b2bf4(lVar8);
      lVar9 = *(long *)(*unaff_x27 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44(lVar9);
      }
      if (lVar8 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = thunk_FUN_01f116d0(lVar8,lVar9);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar8,lVar9);
        }
      }
      return lVar10;
    }
  }
LAB_023c2230:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar12 = piVar12 + 4;
    if (uVar5 == 0) break;
LAB_023c21e4:
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar11 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_023c2218;
    }
  }
LAB_023c21fc:
  puVar11 = (undefined8 *)
            FUN_01ecb238(plVar4,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_023c2218:
  (*(code *)*puVar11)(plVar4,puVar11[1]);
  return lVar8;
}


