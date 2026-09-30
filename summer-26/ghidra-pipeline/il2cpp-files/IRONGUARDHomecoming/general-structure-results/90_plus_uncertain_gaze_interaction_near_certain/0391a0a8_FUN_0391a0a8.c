/*
FUNCTION_NAME: FUN_0391a0a8
ENTRY_POINT: 0391a0a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 281
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_7;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0391ace0) */

undefined4 FUN_0391a0a8(long param_1,long *param_2,long param_3,undefined1 *param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  char *pcVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  int *piVar21;
  undefined4 uVar22;
  int local_58;
  int local_54;
  
  if ((DAT_04838251 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
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
    thunk_FUN_01efb3a4(StringLiteral_3519);
    thunk_FUN_01efb3a4(StringLiteral_3515);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputStateHistory__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_3520);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputStateHistory__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_3505);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_Vector2>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__
                      );
    DAT_04838251 = 1;
  }
  local_54 = 0;
  *param_4 = 0;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar9 = thunk_FUN_01ecaf38(param_2,0);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar10 = FUN_0340e6c4(param_1,*(undefined8 *)
                                 Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_Vector2>__ctor__
                        ,2,0);
  puVar3 = Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__;
  if (((uVar10 & 1) == 0) ||
     (uVar10 = FUN_0340dc94(param_1,*(undefined8 *)
                                     Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__
                            ,2,0), (uVar10 & 1) == 0)) {
    uVar10 = FUN_0340e6c4(param_1,*(undefined8 *)
                                   Method_UnityEngine_InputSystem_LowLevel_InputStateHistory__ctor__
                          ,2,0);
    if (((uVar10 & 1) == 0) ||
       (uVar10 = FUN_0340dc94(param_1,*(undefined8 *)
                                       Method_UnityEngine_InputSystem_LowLevel_InputStateHistory__ctor__
                              ,2,0),
       puVar4 = Method_UnityEngine_Component_TryGetComponent<UniversalAdditionalLightData>__,
       puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__, (uVar10 & 1) == 0)) {
      iVar7 = FUN_03412f70(param_1,0x2b,0);
      if (iVar7 < 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = FUN_03410500(param_1,0,iVar7,0);
        param_1 = FUN_0341265c(param_1,iVar7 + 1,0);
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar11 = FUN_03947618(lVar9,0x34,0);
      puVar2 = StringLiteral_3515;
      lVar9 = *(long *)StringLiteral_3515;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar9);
        lVar9 = *(long *)puVar2;
      }
      lVar19 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
      if (lVar19 == 0) {
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar9);
          lVar9 = *(long *)puVar2;
        }
        uVar20 = **(undefined8 **)(lVar9 + 0xb8);
        lVar19 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3466);
        FUN_02e6c0a0(lVar19,uVar20,*(undefined8 *)StringLiteral_3519,0);
        plVar15 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
        *plVar15 = lVar19;
        thunk_FUN_01f51358(plVar15,lVar19);
      }
      plVar15 = (long *)FUN_0230b6f4(uVar11,lVar19,*(undefined8 *)StringLiteral_3488);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = *plVar15;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar21 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) ==
              *(long *)Method_Meta_WitAi_ComponentExtensions_Copy<AudioSource>__) {
            puVar16 = (undefined8 *)(lVar9 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_0391a750;
          }
          uVar10 = uVar10 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar10 != 0);
      }
      puVar16 = (undefined8 *)
                FUN_01ecb238(plVar15,*(long *)
                                      Method_Meta_WitAi_ComponentExtensions_Copy<AudioSource>__,0);
LAB_0391a750:
      plVar15 = (long *)(*(code *)*puVar16)(plVar15,puVar16[1]);
      puVar4 = Method_Meta_WitAi_ComponentExtensions_HasCustomAttributes<ObsoleteAttribute>__;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        do {
          lVar9 = *plVar15;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar21 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)puVar2) {
                puVar16 = (undefined8 *)(lVar9 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_0391a7c0;
              }
              uVar10 = uVar10 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar10 != 0);
          }
          puVar16 = (undefined8 *)FUN_01ecb238(plVar15,*(long *)puVar2,0);
LAB_0391a7c0:
          uVar10 = (*(code *)*puVar16)(plVar15,puVar16[1]);
          if ((uVar10 & 1) == 0) {
            uVar22 = 0;
            iVar6 = 0xd;
            iVar7 = 0xd;
            goto joined_r0x0391a8e8;
          }
          lVar9 = *plVar15;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar21 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
                puVar16 = (undefined8 *)(lVar9 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_0391a81c;
              }
              uVar10 = uVar10 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar10 != 0);
          }
          puVar16 = (undefined8 *)FUN_01ecb238(plVar15,*(long *)puVar4,0);
LAB_0391a81c:
          plVar17 = (long *)(*(code *)*puVar16)(plVar15,puVar16[1]);
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar11 = (**(code **)(*plVar17 + 0x1a8))(plVar17,*(undefined8 *)(*plVar17 + 0x1b0));
          uVar10 = thunk_FUN_0340e318(uVar11,param_1,0);
        } while ((uVar10 & 1) == 0);
        if (lVar18 == 0) break;
        plVar14 = (long *)(**(code **)(*plVar17 + 0x1b8))(plVar17,*(undefined8 *)(*plVar17 + 0x1c0))
        ;
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar11 = (**(code **)(*plVar14 + 0x1a8))(plVar14,*(undefined8 *)(*plVar14 + 0x1b0));
        uVar10 = FUN_0340e600(uVar11,lVar18,0);
      } while ((uVar10 & 1) != 0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_03948958(plVar17,param_2,param_3,0);
      lVar9 = thunk_FUN_01ecaf38(param_2,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar10 = FUN_0358471c(lVar9,0);
      uVar22 = 1;
      if ((uVar10 & 1) != 0) {
        *param_4 = 1;
      }
      iVar6 = 9;
      iVar7 = 9;
joined_r0x0391a8e8:
      if (plVar15 != (long *)0x0) {
        lVar9 = *plVar15;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar21 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar16 = (undefined8 *)(lVar9 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_0391a9fc;
            }
            uVar10 = uVar10 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar10 != 0);
        }
        puVar16 = (undefined8 *)
                  FUN_01ecb238(plVar15,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                               ,0);
LAB_0391a9fc:
        (*(code *)*puVar16)(plVar15,puVar16[1]);
        iVar7 = iVar6;
      }
      if ((iVar7 != 0xd) && (iVar7 != 0)) {
        return uVar22;
      }
    }
    else {
      uVar11 = *(undefined8 *)
                Method_UnityEngine_Component_TryGetComponent<UniversalAdditionalLightData>__;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar11 = FUN_03579868(uVar11,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar10 = FUN_0392f2ac(lVar9,uVar11,0);
      if ((uVar10 & 1) != 0) {
        uVar11 = *(undefined8 *)puVar4;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar11 = FUN_03579868(uVar11,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar9 = FUN_0392f510(lVar9,uVar11,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        uVar11 = *(undefined8 *)(lVar9 + 0x20);
        if (*(int *)(*(long *)
                      Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar18 = FUN_03931120(param_1,uVar11,0);
        plVar15 = (long *)FUN_03579868(*(undefined8 *)puVar4,0);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar9 = (**(code **)(*plVar15 + 0x928))(plVar15,lVar9,*(undefined8 *)(*plVar15 + 0x930));
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar19 = FUN_03584c60(lVar9,*(undefined8 *)StringLiteral_3520,0x34,0);
        lVar9 = FUN_03584c60(lVar9,*(undefined8 *)StringLiteral_3505,0x34,0);
        puVar3 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
        plVar15 = (long *)FUN_01f08890(*(undefined8 *)
                                        Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       ,1);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if ((lVar18 != 0) &&
           (lVar12 = thunk_FUN_01f116d0(lVar18,*(undefined8 *)(*plVar15 + 0x40)), lVar12 == 0)) {
          uVar11 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar11,0);
        }
        if ((int)plVar15[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        plVar15[4] = lVar18;
        thunk_FUN_01f51358(plVar15 + 4,lVar18);
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar15 = (long *)FUN_034b2bf4(lVar19,param_2,plVar15,0);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(*plVar15 + 0x40) !=
            *(long *)(*(long *)
                       Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                     + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc();
        }
        pcVar13 = (char *)thunk_FUN_01f11920();
        if (*pcVar13 != '\0') {
          plVar15 = (long *)FUN_01f08890(*(undefined8 *)puVar3,2);
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if ((lVar18 != 0) &&
             (lVar19 = thunk_FUN_01f116d0(lVar18,*(undefined8 *)(*plVar15 + 0x40)), lVar19 == 0)) {
            uVar11 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar11,0);
          }
          if ((int)plVar15[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar15[4] = lVar18;
          thunk_FUN_01f51358(plVar15 + 4,lVar18);
          if ((param_3 != 0) &&
             (lVar18 = thunk_FUN_01f116d0(param_3,*(undefined8 *)(*plVar15 + 0x40)), lVar18 == 0)) {
            uVar11 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar11,0);
          }
          if (*(uint *)(plVar15 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar15[5] = param_3;
          thunk_FUN_01f51358(plVar15 + 5,param_3);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_034b2bf4(lVar9,param_2,plVar15,0);
        }
      }
    }
  }
  else {
    uVar11 = FUN_03410500(param_1,1,*(int *)(param_1 + 0x10) + -2,0);
    uVar10 = FUN_03568ae4(uVar11,&local_54,0);
    if ((uVar10 & 1) == 0) {
      uVar11 = thunk_FUN_01efb3a4(StringLiteral_3517);
      uVar20 = thunk_FUN_01efb3a4(Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__);
      uVar11 = FUN_0340ebc0(uVar11,param_1,uVar20,0);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar20 = thunk_FUN_01f117cc();
      FUN_034f6754(uVar20,uVar11,0);
      uVar11 = thunk_FUN_01efb3a4(StringLiteral_3521);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar20,uVar11);
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar10 = FUN_035841e4(lVar9,0);
    iVar7 = local_54;
    puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
    if ((uVar10 & 1) == 0) {
      uVar11 = *(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_InputEvent_set_sizeInBytes__;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      plVar15 = (long *)FUN_03579868(uVar11,0);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar10 = (**(code **)(*plVar15 + 0x2a8))(plVar15,lVar9,*(undefined8 *)(*plVar15 + 0x2b0));
      puVar5 = Method_Meta_WitAi_ComponentExtensions_PreloadCopyData<AudioSource>__;
      puVar4 = Method_UnityEngine_Component_GetComponents<Collider>__;
      if ((uVar10 & 1) == 0) {
        uVar11 = *(undefined8 *)Method_Meta_WitAi_ComponentExtensions_PreloadCopyData<AudioSource>__
        ;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar11 = FUN_03579868(uVar11,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar10 = FUN_0392f2ac(lVar9,uVar11,0);
        if ((uVar10 & 1) != 0) {
          uVar11 = *(undefined8 *)puVar5;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar11 = FUN_03579868(uVar11,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          lVar9 = FUN_0392f510(lVar9,uVar11,0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          lVar9 = *(long *)(lVar9 + 0x20);
          plVar15 = (long *)FUN_03579868(*(undefined8 *)puVar5,0);
          plVar17 = (long *)FUN_01f08890(*(undefined8 *)
                                          Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                         ,1);
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if ((lVar9 != 0) &&
             (lVar18 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar17 + 0x40)), lVar18 == 0)) {
            uVar11 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar11,0);
          }
          if ((int)plVar17[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar17[4] = lVar9;
          thunk_FUN_01f51358(plVar17 + 4,lVar9);
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar9 = (**(code **)(*plVar15 + 0x928))(plVar15,plVar17,*(undefined8 *)(*plVar15 + 0x930))
          ;
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar9 = FUN_03584c60(lVar9,*(undefined8 *)StringLiteral_3505,0x34,0);
          plVar15 = (long *)FUN_01f08890(*(undefined8 *)
                                          Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                         ,2);
          local_58 = local_54;
          lVar18 = thunk_FUN_01f113fc(*(undefined8 *)
                                       Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                      ,&local_58);
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if ((lVar18 != 0) &&
             (lVar19 = thunk_FUN_01f116d0(lVar18,*(undefined8 *)(*plVar15 + 0x40)), lVar19 == 0)) {
            uVar11 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar11,0);
          }
          if ((int)plVar15[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar15[4] = lVar18;
          thunk_FUN_01f51358(plVar15 + 4,lVar18);
          if ((param_3 != 0) &&
             (lVar18 = thunk_FUN_01f116d0(param_3,*(undefined8 *)(*plVar15 + 0x40)), lVar18 == 0)) {
            uVar11 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar11,0);
          }
          if (*(uint *)(plVar15 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar15[5] = param_3;
          thunk_FUN_01f51358(plVar15 + 5,param_3);
          if (lVar9 != 0) {
            FUN_034b2bf4(lVar9,param_2,plVar15,0);
            return 1;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
      }
      else {
        uVar11 = *(undefined8 *)Method_UnityEngine_Component_GetComponents<Collider>__;
        plVar15 = (long *)thunk_FUN_01f116d0(param_2,uVar11);
        iVar7 = local_54;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(param_2,uVar11);
        }
        if (-1 < local_54) {
          lVar9 = *plVar15;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar21 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) ==
                  *(long *)
                   Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__) {
                puVar16 = (undefined8 *)(lVar9 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                goto LAB_0391ac44;
              }
              uVar10 = uVar10 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar10 != 0);
          }
          puVar16 = (undefined8 *)
                    FUN_01ecb238(plVar15,*(long *)
                                          Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__
                                 ,1);
LAB_0391ac44:
          iVar8 = (*(code *)*puVar16)(plVar15,puVar16[1]);
          iVar6 = local_54;
          if (iVar7 < iVar8) {
            lVar9 = *plVar15;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar21 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
                  puVar16 = (undefined8 *)(lVar9 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                  goto LAB_0391acac;
                }
                uVar10 = uVar10 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar10 != 0);
            }
            puVar16 = (undefined8 *)FUN_01ecb238(plVar15,*(long *)puVar4,1);
LAB_0391acac:
            (*(code *)*puVar16)(plVar15,iVar6,param_3,puVar16[1]);
            return 1;
          }
        }
      }
    }
    else {
      bVar1 = *(byte *)(*(long *)
                         Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOutEvent>__
                       + 0x130);
      if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)
           Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOutEvent>__))
      {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(param_2);
      }
      if ((-1 < local_54) && (iVar6 = FUN_03582fa8(param_2,0), iVar7 < iVar6)) {
        FUN_0358cf48(param_2,param_3,local_54,0);
        return 1;
      }
    }
  }
  return 0;
}


