/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<NameAndParameters>
ENTRY_POINT: 023c1194
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 168
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x023c2228) */

long System_Array__InternalArray__ICollection_Contains<NameAndParameters>(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar14;
  int *piVar15;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar16;
  long *plVar17;
  long *unaff_x27;
  long *in_stack_00000010;
  long *in_stack_00000018;
  undefined *puVar13;
  
  thunk_FUN_01efb3a4(Method_UnityEngine_Component_TryGetComponent<UniversalAdditionalCameraData>__);
  thunk_FUN_01efb3a4(Method_UnityEngine_Component_TryGetComponent<UniversalAdditionalLightData>__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
  thunk_FUN_01efb3a4(Method_Meta_WitAi_ComponentExtensions_Copy<AudioSource>__);
  thunk_FUN_01efb3a4(Method_Meta_WitAi_ComponentExtensions_HasCustomAttributes<ObsoleteAttribute>__)
  ;
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  thunk_FUN_01efb3a4(Method_Meta_WitAi_ComponentExtensions_PreloadCopyData<AudioSource>__);
  thunk_FUN_01efb3a4(Method_UnityEngine_Component_TryGetComponent<PixelPerfectCamera>__);
  thunk_FUN_01efb3a4(
                    Method_Unity_VisualScripting_ComponentHolderProtocol_GetOrAddComponent<Variables>__
                    );
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponent__);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentInChildren__);
  thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                    );
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentInParent__);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponents__);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__)
  ;
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  lVar14 = *unaff_x27;
  if (lVar14 == 0) {
    FUN_01ecafa0();
    lVar14 = *(long *)(unaff_x20 + 0x38);
  }
  lVar14 = *(long *)(lVar14 + 8);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_01ecaf44();
  }
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = (*(code *)**(undefined8 **)*unaff_x27)();
  if ((uVar5 & 1) != 0) {
    lVar14 = *(long *)(*unaff_x27 + 8);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_01ecaf44();
    }
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = (*(code *)**(undefined8 **)(*unaff_x27 + 0x10))();
    puVar13 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
    if ((uVar5 & 1) == 0) {
      uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      lVar14 = FUN_03579868(uVar16,0);
      if (lVar14 == 0) goto LAB_023c2230;
      uVar5 = FUN_035841e4(lVar14,0);
      uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar13);
      }
      plVar6 = (long *)FUN_03579868(uVar16,0);
      if (plVar6 == (long *)0x0) goto LAB_023c2230;
      lVar14 = *plVar6;
      if ((uVar5 & 1) == 0) {
        uVar5 = (**(code **)(lVar14 + 0x3c8))(plVar6,*(undefined8 *)(lVar14 + 0x3d0));
        if ((uVar5 & 1) != 0) {
          uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          plVar6 = (long *)FUN_03579868(uVar16,0);
          if (plVar6 == (long *)0x0) goto LAB_023c2230;
          plVar6 = (long *)(**(code **)(*plVar6 + 0x458))(plVar6,*(undefined8 *)(*plVar6 + 0x460));
          uVar16 = FUN_03579868(*(undefined8 *)
                                 Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentInChildren__
                                ,0);
          if (plVar6 == (long *)0x0) goto LAB_023c2230;
          uVar5 = (**(code **)(*plVar6 + 0x2a8))(plVar6,uVar16,*(undefined8 *)(*plVar6 + 0x2b0));
          if ((uVar5 & 1) == 0) goto LAB_023c143c;
          plVar6 = *(long **)(unaff_x19 + 0x48);
LAB_023c14f0:
          plVar7 = (long *)FUN_01f08890(*(undefined8 *)
                                         Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                        ,1);
          uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)puVar13);
          }
          plVar8 = (long *)FUN_03579868(uVar16,0);
          if (plVar8 == (long *)0x0) goto LAB_023c2230;
          uVar16 = (**(code **)(*plVar8 + 0x478))(plVar8,*(undefined8 *)(*plVar8 + 0x480));
          lVar14 = FUN_022f69fc(uVar16,*(undefined8 *)
                                        Method_UnityEngine_Component_TryGetComponent<Skybox>__);
          goto joined_r0x023c1554;
        }
LAB_023c143c:
        uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar6 = (long *)FUN_03579868(uVar16,0);
        if (plVar6 == (long *)0x0) goto LAB_023c2230;
        uVar5 = (**(code **)(*plVar6 + 0x3c8))(plVar6,*(undefined8 *)(*plVar6 + 0x3d0));
        if ((uVar5 & 1) != 0) {
          uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          plVar6 = (long *)FUN_03579868(uVar16,0);
          if (plVar6 == (long *)0x0) goto LAB_023c2230;
          plVar6 = (long *)(**(code **)(*plVar6 + 0x458))(plVar6,*(undefined8 *)(*plVar6 + 0x460));
          uVar16 = FUN_03579868(*(undefined8 *)
                                 Method_UnityEngine_Component_TryGetComponent<UniversalAdditionalCameraData>__
                                ,0);
          if (plVar6 == (long *)0x0) goto LAB_023c2230;
          uVar5 = (**(code **)(*plVar6 + 0x2a8))(plVar6,uVar16,*(undefined8 *)(*plVar6 + 0x2b0));
          if ((uVar5 & 1) != 0) {
            plVar6 = *(long **)(unaff_x19 + 0x50);
            goto LAB_023c14f0;
          }
        }
        uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar6 = (long *)FUN_03579868(uVar16,0);
        if (plVar6 == (long *)0x0) goto LAB_023c2230;
        uVar5 = (**(code **)(*plVar6 + 0x3c8))(plVar6,*(undefined8 *)(*plVar6 + 0x3d0));
        if ((uVar5 & 1) == 0) {
LAB_023c1714:
          uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          plVar6 = (long *)FUN_03579868(uVar16,0);
          if (plVar6 == (long *)0x0) goto LAB_023c2230;
          uVar5 = (**(code **)(*plVar6 + 0x3c8))(plVar6,*(undefined8 *)(*plVar6 + 0x3d0));
          if ((uVar5 & 1) != 0) {
            uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
            if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            plVar6 = (long *)FUN_03579868(uVar16,0);
            if (plVar6 == (long *)0x0) goto LAB_023c2230;
            plVar6 = (long *)(**(code **)(*plVar6 + 0x458))(plVar6,*(undefined8 *)(*plVar6 + 0x460))
            ;
            uVar16 = FUN_03579868(*(undefined8 *)
                                   Method_Meta_WitAi_ComponentExtensions_PreloadCopyData<AudioSource>__
                                  ,0);
            if (plVar6 == (long *)0x0) goto LAB_023c2230;
            uVar5 = (**(code **)(*plVar6 + 0x2a8))(plVar6,uVar16,*(undefined8 *)(*plVar6 + 0x2b0));
            if ((uVar5 & 1) == 0) goto LAB_023c17cc;
            plVar6 = *(long **)(unaff_x19 + 0x20);
LAB_023c1880:
            plVar7 = (long *)FUN_01f08890(*(undefined8 *)
                                           Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                          ,2);
            uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
            if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(*(long *)puVar13);
            }
            lVar14 = FUN_03579868(uVar16,0);
            if (plVar7 == (long *)0x0) goto LAB_023c2230;
            if ((lVar14 != 0) &&
               (lVar9 = thunk_FUN_01f116d0(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
            goto LAB_023c22f0;
            if ((int)plVar7[3] == 0) goto LAB_023c22ec;
            plVar7[4] = lVar14;
            thunk_FUN_01f51358(plVar7 + 4,lVar14);
            plVar8 = (long *)FUN_03579868(*(undefined8 *)(*unaff_x27 + 0x18),0);
            if (plVar8 == (long *)0x0) goto LAB_023c2230;
            uVar16 = (**(code **)(*plVar8 + 0x478))(plVar8,*(undefined8 *)(*plVar8 + 0x480));
            lVar14 = FUN_022f69fc(uVar16,*(undefined8 *)
                                          Method_UnityEngine_Component_TryGetComponent<Skybox>__);
            goto joined_r0x023c1d94;
          }
LAB_023c17cc:
          uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          plVar6 = (long *)FUN_03579868(uVar16,0);
          if (plVar6 == (long *)0x0) goto LAB_023c2230;
          uVar5 = (**(code **)(*plVar6 + 0x3c8))(plVar6,*(undefined8 *)(*plVar6 + 0x3d0));
          if ((uVar5 & 1) != 0) {
            uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
            if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            plVar6 = (long *)FUN_03579868(uVar16,0);
            if (plVar6 == (long *)0x0) goto LAB_023c2230;
            plVar6 = (long *)(**(code **)(*plVar6 + 0x458))(plVar6,*(undefined8 *)(*plVar6 + 0x460))
            ;
            uVar16 = FUN_03579868(*(undefined8 *)
                                   Method_Unity_VisualScripting_ComponentHolderProtocol_GetOrAddComponent<Variables>__
                                  ,0);
            if (plVar6 == (long *)0x0) goto LAB_023c2230;
            uVar5 = (**(code **)(*plVar6 + 0x2a8))(plVar6,uVar16,*(undefined8 *)(*plVar6 + 0x2b0));
            if ((uVar5 & 1) != 0) {
              plVar6 = *(long **)(unaff_x19 + 0x28);
              goto LAB_023c1880;
            }
          }
          uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          plVar6 = (long *)FUN_03579868(uVar16,0);
          if (plVar6 == (long *)0x0) goto LAB_023c2230;
          uVar5 = (**(code **)(*plVar6 + 0x3c8))(plVar6,*(undefined8 *)(*plVar6 + 0x3d0));
          if ((uVar5 & 1) == 0) {
LAB_023c1c24:
            uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
            if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            plVar6 = (long *)FUN_03579868(uVar16,0);
            if (plVar6 == (long *)0x0) goto LAB_023c2230;
            uVar5 = (**(code **)(*plVar6 + 0x3c8))(plVar6,*(undefined8 *)(*plVar6 + 0x3d0));
            lVar14 = *unaff_x27;
            if ((uVar5 & 1) != 0) {
              uVar16 = *(undefined8 *)(lVar14 + 0x18);
              if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              plVar6 = (long *)FUN_03579868(uVar16,0);
              if (plVar6 == (long *)0x0) goto LAB_023c2230;
              plVar6 = (long *)(**(code **)(*plVar6 + 0x458))
                                         (plVar6,*(undefined8 *)(*plVar6 + 0x460));
              uVar16 = FUN_03579868(*(undefined8 *)
                                     Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponent__
                                    ,0);
              if (plVar6 == (long *)0x0) goto LAB_023c2230;
              uVar5 = (**(code **)(*plVar6 + 0x2a8))(plVar6,uVar16,*(undefined8 *)(*plVar6 + 0x2b0))
              ;
              lVar14 = *unaff_x27;
              if ((uVar5 & 1) != 0) {
                uVar16 = *(undefined8 *)(lVar14 + 0x18);
                if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                plVar6 = (long *)FUN_03579868(uVar16,0);
                if (plVar6 == (long *)0x0) goto LAB_023c2230;
                uVar16 = (**(code **)(*plVar6 + 0x478))(plVar6,*(undefined8 *)(*plVar6 + 0x480));
                lVar14 = FUN_02308ab0(uVar16,*(undefined8 *)
                                              Method_UnityEngine_Component_TryGetComponent<SphereCollider>__
                                     );
                plVar6 = *(long **)(unaff_x19 + 0x38);
                plVar7 = (long *)FUN_01f08890(*(undefined8 *)
                                               Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                              ,2);
                if (lVar14 == 0) goto LAB_023c2230;
                if (*(int *)(lVar14 + 0x18) == 0) goto LAB_023c22ec;
                if (plVar7 == (long *)0x0) goto LAB_023c2230;
                lVar9 = *(long *)(lVar14 + 0x20);
                if ((lVar9 != 0) &&
                   (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0)
                   ) goto LAB_023c22f0;
                if ((int)plVar7[3] == 0) goto LAB_023c22ec;
                plVar7[4] = lVar9;
                thunk_FUN_01f51358(plVar7 + 4,lVar9);
                if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_023c22ec;
                lVar14 = *(long *)(lVar14 + 0x28);
                goto joined_r0x023c1d94;
              }
            }
            if ((*(byte *)(*(long *)(lVar14 + 0x28) + 0x135) & 1) == 0) {
              FUN_01ecaf44();
            }
            lVar14 = thunk_FUN_01f117cc();
            (*(code *)**(undefined8 **)(*unaff_x27 + 0x30))();
            uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
            if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar16 = FUN_03579868(uVar16,0);
            plVar6 = (long *)FUN_040c95e4(uVar16,0);
            if (plVar6 != (long *)0x0) {
              lVar9 = *plVar6;
              uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar5 != 0) {
                piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) ==
                      *(long *)Method_Meta_WitAi_ComponentExtensions_Copy<AudioSource>__) {
                    puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_023c1e4c;
                  }
                  uVar5 = uVar5 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar5 != 0);
              }
              puVar11 = (undefined8 *)
                        FUN_01ecb238(plVar6,*(long *)
                                             Method_Meta_WitAi_ComponentExtensions_Copy<AudioSource>__
                                     ,0);
LAB_023c1e4c:
              plVar6 = (long *)(*(code *)*puVar11)(plVar6,puVar11[1]);
              puVar3 = 
              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
              puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              do {
                lVar9 = *plVar6;
                uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar5 != 0) {
                  piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                      puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
                      goto LAB_023c1ec0;
                    }
                    uVar5 = uVar5 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar5 != 0);
                }
                puVar11 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_023c1ec0:
                uVar5 = (*(code *)*puVar11)(plVar6,puVar11[1]);
                if ((uVar5 & 1) == 0) {
                  if (plVar6 == (long *)0x0) {
                    return lVar14;
                  }
                  lVar9 = *plVar6;
                  uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar5 == 0) goto LAB_023c21fc;
                  piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  goto LAB_023c21e4;
                }
                lVar9 = *plVar6;
                uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar5 != 0) {
                  piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) ==
                        *(long *)
                         Method_Meta_WitAi_ComponentExtensions_HasCustomAttributes<ObsoleteAttribute>__
                       ) {
                      puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
                      goto LAB_023c1f24;
                    }
                    uVar5 = uVar5 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar5 != 0);
                }
                puVar11 = (undefined8 *)
                          FUN_01ecb238(plVar6,*(long *)
                                               Method_Meta_WitAi_ComponentExtensions_HasCustomAttributes<ObsoleteAttribute>__
                                       ,0);
LAB_023c1f24:
                plVar7 = (long *)(*(code *)*puVar11)(plVar6,puVar11[1]);
                if (plVar7 == (long *)0x0) {
LAB_023c2234:
                  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
                  uVar16 = thunk_FUN_01f117cc();
                  FUN_0356ad6c(uVar16,0);
                    /* WARNING: Subroutine does not return */
                  FUN_01f08910(uVar16,unaff_x20);
                }
                lVar9 = *plVar7;
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
                  in_stack_00000018 = plVar7;
                  thunk_FUN_01f51358(&stack0x00000018);
                  in_stack_00000010 = in_stack_00000018;
                  plVar7 = (long *)thunk_FUN_01f113fc(*(undefined8 *)
                                                                                                              
                                                  Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponents__
                                                  ,&stack0x00000010);
                }
                else {
                  in_stack_00000018 = (long *)0x0;
                  FUN_040c5b80(&stack0x00000018,plVar7,0);
                  in_stack_00000010 = in_stack_00000018;
                  plVar7 = (long *)thunk_FUN_01f113fc(*(undefined8 *)
                                                                                                              
                                                  Method_UnityEngine_Component_TryGetComponent<Text>__
                                                  ,&stack0x00000010);
                }
                plVar17 = *(long **)(unaff_x19 + 0x10);
                plVar8 = (long *)FUN_01f08890(*(undefined8 *)
                                               Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                              ,2);
                uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
                if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                lVar9 = FUN_03579868(uVar16,0);
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                if ((lVar9 != 0) &&
                   (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)
                   ) {
                  uVar16 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
                  FUN_01f08910(uVar16,0);
                }
                if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                plVar8[4] = lVar9;
                thunk_FUN_01f51358(plVar8 + 4,lVar9);
                if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                lVar9 = *plVar7;
                uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar5 != 0) {
                  piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) ==
                        *(long *)Method_UnityEngine_Component_TryGetComponent<PixelPerfectCamera>__)
                    {
                      puVar11 = (undefined8 *)(lVar9 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                      goto LAB_023c2098;
                    }
                    uVar5 = uVar5 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar5 != 0);
                }
                puVar11 = (undefined8 *)
                          FUN_01ecb238(plVar7,*(long *)
                                               Method_UnityEngine_Component_TryGetComponent<PixelPerfectCamera>__
                                       ,2);
LAB_023c2098:
                lVar9 = (*(code *)*puVar11)(plVar7,puVar11[1]);
                if ((lVar9 != 0) &&
                   (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)
                   ) {
                  uVar16 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
                  FUN_01f08910(uVar16,0);
                }
                if (*(uint *)(plVar8 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                plVar8[5] = lVar9;
                thunk_FUN_01f51358(plVar8 + 5,lVar9);
                if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                lVar9 = (**(code **)(*plVar17 + 0x408))
                                  (plVar17,plVar8,*(undefined8 *)(*plVar17 + 0x410));
                plVar8 = (long *)FUN_01f08890(*(undefined8 *)puVar3,2);
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                lVar10 = thunk_FUN_01f116d0(plVar7,*(undefined8 *)(*plVar8 + 0x40));
                if (lVar10 == 0) {
                  uVar16 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
                  FUN_01f08910(uVar16,0);
                }
                if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                plVar8[4] = (long)plVar7;
                thunk_FUN_01f51358(plVar8 + 4,plVar7);
                if ((lVar14 != 0) &&
                   (lVar10 = thunk_FUN_01f116d0(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0
                   )) {
                  uVar16 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
                  FUN_01f08910(uVar16,0);
                }
                if (*(uint *)(plVar8 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                plVar8[5] = lVar14;
                thunk_FUN_01f51358(plVar8 + 5,lVar14);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                FUN_034b2bf4(lVar9);
              } while( true );
            }
            goto LAB_023c2230;
          }
          uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          plVar6 = (long *)FUN_03579868(uVar16,0);
          if (plVar6 == (long *)0x0) goto LAB_023c2230;
          plVar6 = (long *)(**(code **)(*plVar6 + 0x458))(plVar6,*(undefined8 *)(*plVar6 + 0x460));
          uVar16 = FUN_03579868(*(undefined8 *)
                                 Method_UnityEngine_Component_TryGetComponent<UniversalAdditionalLightData>__
                                ,0);
          if (plVar6 == (long *)0x0) goto LAB_023c2230;
          uVar5 = (**(code **)(*plVar6 + 0x2a8))(plVar6,uVar16,*(undefined8 *)(*plVar6 + 0x2b0));
          if ((uVar5 & 1) == 0) goto LAB_023c1c24;
          plVar6 = *(long **)(unaff_x19 + 0x30);
          plVar7 = (long *)FUN_01f08890(*(undefined8 *)
                                         Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                        ,3);
          uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)puVar13);
          }
          lVar14 = FUN_03579868(uVar16,0);
          if (plVar7 == (long *)0x0) goto LAB_023c2230;
          if ((lVar14 != 0) &&
             (lVar9 = thunk_FUN_01f116d0(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
          goto LAB_023c22f0;
          if ((int)plVar7[3] == 0) goto LAB_023c22ec;
          plVar7[4] = lVar14;
          thunk_FUN_01f51358(plVar7 + 4,lVar14);
          plVar8 = (long *)FUN_03579868(*(undefined8 *)(*unaff_x27 + 0x18),0);
          if (plVar8 == (long *)0x0) goto LAB_023c2230;
          uVar16 = (**(code **)(*plVar8 + 0x478))(plVar8,*(undefined8 *)(*plVar8 + 0x480));
          lVar14 = FUN_022f69fc(uVar16,*(undefined8 *)
                                        Method_UnityEngine_Component_TryGetComponent<Skybox>__);
          if ((lVar14 != 0) &&
             (lVar9 = thunk_FUN_01f116d0(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
          goto LAB_023c22f0;
          if (*(uint *)(plVar7 + 3) < 2) goto LAB_023c22ec;
          plVar7[5] = lVar14;
          thunk_FUN_01f51358(plVar7 + 5,lVar14);
          plVar8 = (long *)FUN_03579868(*(undefined8 *)(*unaff_x27 + 0x18),0);
          if (plVar8 == (long *)0x0) goto LAB_023c2230;
          uVar16 = (**(code **)(*plVar8 + 0x478))(plVar8,*(undefined8 *)(*plVar8 + 0x480));
          lVar14 = FUN_022f4c44(uVar16,1,*(undefined8 *)
                                          Method_UnityEngine_Component_TryGetComponent<ShadowCasterGroup2D>__
                               );
          if ((lVar14 != 0) &&
             (lVar9 = thunk_FUN_01f116d0(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
          goto LAB_023c22f0;
          if (*(uint *)(plVar7 + 3) < 3) goto LAB_023c22ec;
          plVar8 = plVar7 + 6;
          *plVar8 = lVar14;
        }
        else {
          uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          plVar6 = (long *)FUN_03579868(uVar16,0);
          if (plVar6 == (long *)0x0) goto LAB_023c2230;
          plVar6 = (long *)(**(code **)(*plVar6 + 0x458))(plVar6,*(undefined8 *)(*plVar6 + 0x460));
          uVar16 = FUN_03579868(*(undefined8 *)
                                 Method_UnityEngine_Component_TryGetComponent<Renderer>__,0);
          if (plVar6 == (long *)0x0) goto LAB_023c2230;
          uVar5 = (**(code **)(*plVar6 + 0x2a8))(plVar6,uVar16,*(undefined8 *)(*plVar6 + 0x2b0));
          if ((uVar5 & 1) == 0) goto LAB_023c1714;
          plVar6 = *(long **)(unaff_x19 + 0x58);
          plVar7 = (long *)FUN_01f08890(*(undefined8 *)
                                         Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                        ,2);
          uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)puVar13);
          }
          plVar8 = (long *)FUN_03579868(uVar16,0);
          if (plVar8 == (long *)0x0) goto LAB_023c2230;
          uVar16 = (**(code **)(*plVar8 + 0x478))(plVar8,*(undefined8 *)(*plVar8 + 0x480));
          lVar14 = FUN_022f69fc(uVar16,*(undefined8 *)
                                        Method_UnityEngine_Component_TryGetComponent<Skybox>__);
          if (plVar7 == (long *)0x0) goto LAB_023c2230;
          if ((lVar14 != 0) &&
             (lVar9 = thunk_FUN_01f116d0(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
          goto LAB_023c22f0;
          if ((int)plVar7[3] == 0) goto LAB_023c22ec;
          plVar7[4] = lVar14;
          thunk_FUN_01f51358(plVar7 + 4,lVar14);
          plVar8 = (long *)FUN_03579868(*(undefined8 *)(*unaff_x27 + 0x18),0);
          if (plVar8 == (long *)0x0) goto LAB_023c2230;
          uVar16 = (**(code **)(*plVar8 + 0x478))(plVar8,*(undefined8 *)(*plVar8 + 0x480));
          lVar14 = FUN_022f4c44(uVar16,1,*(undefined8 *)
                                          Method_UnityEngine_Component_TryGetComponent<ShadowCasterGroup2D>__
                               );
joined_r0x023c1d94:
          if ((lVar14 != 0) &&
             (lVar9 = thunk_FUN_01f116d0(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
          goto LAB_023c22f0;
          if (*(uint *)(plVar7 + 3) < 2) goto LAB_023c22ec;
          plVar8 = plVar7 + 5;
          *plVar8 = lVar14;
        }
      }
      else {
        iVar4 = (**(code **)(lVar14 + 0x448))(plVar6,*(undefined8 *)(lVar14 + 0x450));
        if (iVar4 != 1) {
          thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
          uVar16 = thunk_FUN_01f117cc();
          puVar13 = Method_UnityEngine_ComputeBuffer_SetData<BezierCurve>__;
          goto LAB_023c22a8;
        }
        plVar6 = *(long **)(unaff_x19 + 0x40);
        plVar7 = (long *)FUN_01f08890(*(undefined8 *)
                                       Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                      ,1);
        uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar13);
        }
        plVar8 = (long *)FUN_03579868(uVar16,0);
        if (plVar8 == (long *)0x0) goto LAB_023c2230;
        lVar14 = (**(code **)(*plVar8 + 0x438))(plVar8,*(undefined8 *)(*plVar8 + 0x440));
joined_r0x023c1554:
        if (plVar7 == (long *)0x0) goto LAB_023c2230;
        if ((lVar14 != 0) &&
           (lVar9 = thunk_FUN_01f116d0(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
LAB_023c22f0:
          uVar16 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar16,0);
        }
        if ((int)plVar7[3] == 0) {
LAB_023c22ec:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        plVar8 = plVar7 + 4;
        *plVar8 = lVar14;
      }
      thunk_FUN_01f51358(plVar8,lVar14);
      if (plVar6 != (long *)0x0) {
        lVar14 = (**(code **)(*plVar6 + 0x408))(plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x410));
        FUN_01f08890(*(undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                     ,0);
        if (lVar14 != 0) {
          lVar14 = FUN_034b2bf4(lVar14);
          lVar9 = *(long *)(*unaff_x27 + 0x20);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01ecaf44(lVar9);
          }
          if (lVar14 == 0) {
            lVar10 = 0;
          }
          else {
            lVar10 = thunk_FUN_01f116d0(lVar14,lVar9);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc(lVar14,lVar9);
            }
          }
          return lVar10;
        }
      }
LAB_023c2230:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  }
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
  uVar16 = thunk_FUN_01f117cc();
  puVar13 = Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInParent__;
LAB_023c22a8:
  uVar12 = thunk_FUN_01efb3a4(puVar13);
  FUN_0356adc8(uVar16,uVar12,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar16);
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar15 = piVar15 + 4;
    if (uVar5 == 0) break;
LAB_023c21e4:
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_023c2218;
    }
  }
LAB_023c21fc:
  puVar11 = (undefined8 *)
            FUN_01ecb238(plVar6,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_023c2218:
  (*(code *)*puVar11)(plVar6,puVar11[1]);
  return lVar14;
}


