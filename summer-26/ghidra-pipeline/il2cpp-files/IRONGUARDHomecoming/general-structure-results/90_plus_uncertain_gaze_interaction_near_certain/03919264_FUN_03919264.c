/*
FUNCTION_NAME: FUN_03919264
ENTRY_POINT: 03919264
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 219
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x03919d48) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_03919264(long param_1,long *param_2)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  int *piVar20;
  int local_58;
  int local_54;
  
  if ((DAT_0483824f & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                      );
    thunk_FUN_01efb3a4(StringLiteral_3488);
    thunk_FUN_01efb3a4(StringLiteral_3466);
    thunk_FUN_01efb3a4(Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__)
    ;
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_TryGetComponent<UniversalAdditionalLightData>__)
    ;
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Meta_WitAi_ComponentExtensions_Copy<AudioSource>__);
    thunk_FUN_01efb3a4(
                      Method_Meta_WitAi_ComponentExtensions_HasCustomAttributes<ObsoleteAttribute>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Meta_WitAi_ComponentExtensions_PreloadCopyData<AudioSource>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputEvent_set_sizeInBytes__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponents<Collider>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOutEvent>__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_3514);
    thunk_FUN_01efb3a4(StringLiteral_3515);
    thunk_FUN_01efb3a4(StringLiteral_3516);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputStateHistory__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputStateHistory__ctor__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_Vector2>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__
                      );
    DAT_0483824f = 1;
  }
  local_54 = 0;
  if ((param_2 != (long *)0x0) &&
     (lVar10 = thunk_FUN_01ecaf38(param_2,0),
     puVar4 = Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__, param_1 != 0)) {
    uVar11 = FUN_0340e6c4(param_1,*(undefined8 *)
                                   Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_Vector2>__ctor__
                          ,2,0);
    if (((uVar11 & 1) == 0) ||
       (uVar11 = FUN_0340dc94(param_1,*(undefined8 *)
                                       Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__
                              ,2,0), (uVar11 & 1) == 0)) {
      uVar11 = FUN_0340e6c4(param_1,*(undefined8 *)
                                     Method_UnityEngine_InputSystem_LowLevel_InputStateHistory__ctor__
                            ,3,0);
      if (((uVar11 & 1) == 0) ||
         (uVar11 = FUN_0340dc94(param_1,*(undefined8 *)
                                         Method_UnityEngine_InputSystem_LowLevel_InputStateHistory__ctor__
                                ,3,0),
         puVar5 = Method_UnityEngine_Component_TryGetComponent<UniversalAdditionalLightData>__,
         puVar3 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__, (uVar11 & 1) == 0)) {
        iVar8 = FUN_03412f70(param_1,0x2b,0);
        if (iVar8 < 0) {
          lVar17 = 0;
        }
        else {
          lVar17 = FUN_03410500(param_1,0,iVar8,0);
          param_1 = FUN_0341265c(param_1,iVar8 + 1,0);
        }
        puVar3 = StringLiteral_3515;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar12 = FUN_03947618(lVar10,0x34,0);
        lVar10 = *(long *)puVar3;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar10);
          lVar10 = *(long *)puVar3;
        }
        puVar5 = StringLiteral_3488;
        lVar18 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
        if (lVar18 == 0) {
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(lVar10);
            lVar10 = *(long *)puVar3;
          }
          uVar19 = **(undefined8 **)(lVar10 + 0xb8);
          lVar18 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3466);
          FUN_02e6c0a0(lVar18,uVar19,*(undefined8 *)StringLiteral_3514,0);
          plVar14 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
          *plVar14 = lVar18;
          thunk_FUN_01f51358(plVar14,lVar18);
        }
        plVar14 = (long *)FUN_0230b6f4(uVar12,lVar18,*(undefined8 *)puVar5);
        if (plVar14 != (long *)0x0) {
          lVar10 = *plVar14;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) ==
                  *(long *)Method_Meta_WitAi_ComponentExtensions_Copy<AudioSource>__) {
                puVar15 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_03919814;
              }
              uVar11 = uVar11 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar11 != 0);
          }
          puVar15 = (undefined8 *)
                    FUN_01ecb238(plVar14,*(long *)
                                          Method_Meta_WitAi_ComponentExtensions_Copy<AudioSource>__,
                                 0);
LAB_03919814:
          plVar14 = (long *)(*(code *)*puVar15)(plVar14,puVar15[1]);
          puVar5 = Method_Meta_WitAi_ComponentExtensions_HasCustomAttributes<ObsoleteAttribute>__;
          puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            do {
              lVar10 = *plVar14;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar11 != 0) {
                piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
                    puVar15 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
                    goto LAB_03919884;
                  }
                  uVar11 = uVar11 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar11 != 0);
              }
              puVar15 = (undefined8 *)FUN_01ecb238(plVar14,*(long *)puVar3,0);
LAB_03919884:
              uVar11 = (*(code *)*puVar15)(plVar14,puVar15[1]);
              if ((uVar11 & 1) == 0) {
                bVar2 = false;
                uVar12 = 0;
                goto joined_r0x03919988;
              }
              lVar10 = *plVar14;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar11 != 0) {
                piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)puVar5) {
                    puVar15 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
                    goto LAB_039198e0;
                  }
                  uVar11 = uVar11 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar11 != 0);
              }
              puVar15 = (undefined8 *)FUN_01ecb238(plVar14,*(long *)puVar5,0);
LAB_039198e0:
              plVar16 = (long *)(*(code *)*puVar15)(plVar14,puVar15[1]);
              if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar12 = (**(code **)(*plVar16 + 0x1a8))(plVar16,*(undefined8 *)(*plVar16 + 0x1b0));
              uVar11 = thunk_FUN_0340e318(uVar12,param_1,0);
            } while ((uVar11 & 1) == 0);
            if (lVar17 == 0) break;
            plVar13 = (long *)(**(code **)(*plVar16 + 0x1b8))
                                        (plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar12 = (**(code **)(*plVar13 + 0x1a8))(plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
            uVar11 = FUN_0340e600(uVar12,lVar17,0);
          } while ((uVar11 & 1) != 0);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar12 = FUN_039487e4(plVar16,param_2,0);
          bVar2 = true;
joined_r0x03919988:
          if (plVar14 != (long *)0x0) {
            lVar10 = *plVar14;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) ==
                    *(long *)
                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                  puVar15 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_03919a9c;
                }
                uVar11 = uVar11 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar11 != 0);
            }
            puVar15 = (undefined8 *)
                      FUN_01ecb238(plVar14,*(long *)
                                            Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                   ,0);
LAB_03919a9c:
            (*(code *)*puVar15)(plVar14,puVar15[1]);
          }
          if (!bVar2) {
            return 0;
          }
          return uVar12;
        }
      }
      else {
        uVar12 = *(undefined8 *)
                  Method_UnityEngine_Component_TryGetComponent<UniversalAdditionalLightData>__;
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        uVar12 = FUN_03579868(uVar12,0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar4);
        }
        uVar11 = FUN_0392f2ac(lVar10,uVar12,0);
        if ((uVar11 & 1) == 0) {
          return 0;
        }
        uVar12 = *(undefined8 *)puVar5;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar12 = FUN_03579868(uVar12,0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar4);
        }
        lVar10 = FUN_0392f510(lVar10,uVar12,0);
        if (lVar10 != 0) {
          if (*(int *)(lVar10 + 0x18) == 0) goto LAB_03919dc4;
          uVar12 = *(undefined8 *)(lVar10 + 0x20);
          if (*(int *)(*(long *)
                        Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                      + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          lVar17 = FUN_03931120(param_1,uVar12,0);
          plVar14 = (long *)FUN_03579868(*(undefined8 *)puVar5,0);
          if ((plVar14 != (long *)0x0) &&
             (lVar10 = (**(code **)(*plVar14 + 0x928))
                                 (plVar14,lVar10,*(undefined8 *)(*plVar14 + 0x930)), lVar10 != 0)) {
            lVar10 = FUN_03584c60(lVar10,*(undefined8 *)StringLiteral_3516,0x34,0);
            plVar14 = (long *)FUN_01f08890(*(undefined8 *)
                                            Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                           ,1);
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if ((lVar17 != 0) &&
               (lVar18 = thunk_FUN_01f116d0(lVar17,*(undefined8 *)(*plVar14 + 0x40)), lVar18 == 0))
            {
              uVar12 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar12,0);
            }
            if ((int)plVar14[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            plVar14[4] = lVar17;
            thunk_FUN_01f51358(plVar14 + 4,lVar17);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar12 = FUN_034b2bf4(lVar10,param_2,plVar14,0);
            return uVar12;
          }
        }
      }
    }
    else {
      uVar12 = FUN_03410500(param_1,1,*(int *)(param_1 + 0x10) + -2,0);
      uVar11 = FUN_03568ae4(uVar12,&local_54,0);
      if ((uVar11 & 1) == 0) {
        uVar12 = thunk_FUN_01efb3a4(StringLiteral_3517);
        uVar19 = thunk_FUN_01efb3a4(Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__);
        uVar12 = FUN_0340ebc0(uVar12,param_1,uVar19,0);
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar19 = thunk_FUN_01f117cc();
        FUN_034f6754(uVar19,uVar12,0);
        uVar12 = thunk_FUN_01efb3a4(StringLiteral_3518);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar19,uVar12);
      }
      if (lVar10 != 0) {
        uVar11 = FUN_035841e4(lVar10,0);
        iVar8 = local_54;
        puVar3 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
        if ((uVar11 & 1) != 0) {
          bVar1 = *(byte *)(*(long *)
                             Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOutEvent>__
                           + 0x130);
          if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)
               Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOutEvent>__
             )) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(param_2);
          }
          if (local_54 < 0) {
            return 0;
          }
          iVar7 = FUN_03582fa8(param_2,0);
          if (iVar8 < iVar7) {
            uVar12 = FUN_03583008(param_2,local_54,0);
            return uVar12;
          }
          return 0;
        }
        uVar12 = *(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_InputEvent_set_sizeInBytes__
        ;
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        plVar14 = (long *)FUN_03579868(uVar12,0);
        if (plVar14 != (long *)0x0) {
          uVar11 = (**(code **)(*plVar14 + 0x2a8))(plVar14,lVar10,*(undefined8 *)(*plVar14 + 0x2b0))
          ;
          puVar6 = Method_Meta_WitAi_ComponentExtensions_PreloadCopyData<AudioSource>__;
          puVar5 = Method_UnityEngine_Component_GetComponents<Collider>__;
          if ((uVar11 & 1) != 0) {
            uVar12 = *(undefined8 *)Method_UnityEngine_Component_GetComponents<Collider>__;
            plVar14 = (long *)thunk_FUN_01f116d0(param_2,uVar12);
            iVar8 = local_54;
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc(param_2,uVar12);
            }
            if (local_54 < 0) {
              return 0;
            }
            lVar10 = *plVar14;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) ==
                    *(long *)
                     Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__) {
                  puVar15 = (undefined8 *)(lVar10 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                  goto LAB_03919ca0;
                }
                uVar11 = uVar11 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar11 != 0);
            }
            puVar15 = (undefined8 *)
                      FUN_01ecb238(plVar14,*(long *)
                                            Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__
                                   ,1);
LAB_03919ca0:
            iVar9 = (*(code *)*puVar15)(plVar14,puVar15[1]);
            iVar7 = local_54;
            if (iVar9 <= iVar8) {
              return 0;
            }
            lVar10 = *plVar14;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)puVar5) {
                  puVar15 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_03919d04;
                }
                uVar11 = uVar11 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar11 != 0);
            }
            puVar15 = (undefined8 *)FUN_01ecb238(plVar14,*(long *)puVar5,0);
LAB_03919d04:
            uVar12 = (*(code *)*puVar15)(plVar14,iVar7,puVar15[1]);
            return uVar12;
          }
          uVar12 = *(undefined8 *)
                    Method_Meta_WitAi_ComponentExtensions_PreloadCopyData<AudioSource>__;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar12 = FUN_03579868(uVar12,0);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)puVar4);
          }
          uVar11 = FUN_0392f2ac(lVar10,uVar12,0);
          if ((uVar11 & 1) == 0) {
            return 0;
          }
          uVar12 = *(undefined8 *)puVar6;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar12 = FUN_03579868(uVar12,0);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)puVar4);
          }
          lVar10 = FUN_0392f510(lVar10,uVar12,0);
          if (lVar10 != 0) {
            if (*(int *)(lVar10 + 0x18) == 0) {
LAB_03919dc4:
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            lVar10 = *(long *)(lVar10 + 0x20);
            plVar14 = (long *)FUN_03579868(*(undefined8 *)puVar6,0);
            plVar16 = (long *)FUN_01f08890(*(undefined8 *)
                                            Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                           ,1);
            if (plVar16 != (long *)0x0) {
              if ((lVar10 != 0) &&
                 (lVar17 = thunk_FUN_01f116d0(lVar10,*(undefined8 *)(*plVar16 + 0x40)), lVar17 == 0)
                 ) {
                uVar12 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
                FUN_01f08910(uVar12,0);
              }
              if ((int)plVar16[3] == 0) goto LAB_03919dc4;
              plVar16[4] = lVar10;
              thunk_FUN_01f51358(plVar16 + 4,lVar10);
              if ((plVar14 != (long *)0x0) &&
                 (lVar10 = (**(code **)(*plVar14 + 0x928))
                                     (plVar14,plVar16,*(undefined8 *)(*plVar14 + 0x930)),
                 lVar10 != 0)) {
                lVar10 = FUN_03584c60(lVar10,*(undefined8 *)StringLiteral_3516,0x34,0);
                plVar14 = (long *)FUN_01f08890(*(undefined8 *)
                                                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                               ,1);
                local_58 = local_54;
                lVar17 = thunk_FUN_01f113fc(*(undefined8 *)
                                             Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                            ,&local_58);
                if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                if ((lVar17 != 0) &&
                   (lVar18 = thunk_FUN_01f116d0(lVar17,*(undefined8 *)(*plVar14 + 0x40)),
                   lVar18 == 0)) {
                  uVar12 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
                  FUN_01f08910(uVar12,0);
                }
                if ((int)plVar14[3] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                plVar14[4] = lVar17;
                thunk_FUN_01f51358(plVar14 + 4,lVar17);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar12 = FUN_034b2bf4(lVar10,param_2,plVar14,0);
                return uVar12;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


