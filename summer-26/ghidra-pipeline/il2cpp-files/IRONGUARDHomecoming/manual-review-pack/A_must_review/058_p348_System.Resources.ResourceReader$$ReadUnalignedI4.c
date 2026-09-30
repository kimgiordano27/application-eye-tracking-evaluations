/*
FUNCTION_NAME: System.Resources.ResourceReader$$ReadUnalignedI4
ENTRY_POINT: 033acf10
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 197
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_12;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;ray_or_cast_sink_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x033ae020) */

long * System_Resources_ResourceReader__ReadUnalignedI4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  byte *pbVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  code *pcVar16;
  int *piVar17;
  uint uVar18;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar19;
  long *plVar20;
  long *unaff_x22;
  long *unaff_x23;
  uint uVar21;
  long lVar22;
  undefined8 uVar23;
  undefined4 uVar24;
  
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_InputSystem_InputManager_ExecuteGlobalCommand<UseWindowsGamingInputCommand>__
                    );
  thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputManager_QueueEvent<DeltaStateEvent>__);
  thunk_FUN_01efb3a4(Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<NavMeshAgent>__);
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_InputSystem_InputManager_QueueEvent<DeviceConfigurationEvent>__
                    );
  thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputEventBuffer__ctor__);
  thunk_FUN_01efb3a4(Method_System_Convert_ToUInt64__);
  thunk_FUN_01efb3a4(
                    Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                    );
  thunk_FUN_01efb3a4(
                    Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                    );
  thunk_FUN_01efb3a4(
                    Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                    );
  thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Dependencies_NCalc_Expression_Evaluate__);
  thunk_FUN_01efb3a4(Method_Unity_Jobs_IJobExtensions_EarlyJobInit<CommandBuilder_StreamSplitter>__)
  ;
  thunk_FUN_01efb3a4(Method_UnityEngine_ExpressionEvaluator_Evaluate<double>__);
  thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputManager_QueueEvent<StateEvent>__);
  thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputManager_QueueEvent<TextEvent>__);
  *(undefined1 *)(unaff_x21 + 0x354) = 1;
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (unaff_x23 != (long *)0x0) {
    uVar19 = *(undefined8 *)Method_System_Convert_ToUInt64__;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03579868(uVar19,0);
    uVar5 = FUN_03582560();
    if ((uVar5 & 1) != 0) {
      unaff_x22 = (long *)thunk_FUN_01ecaf38();
    }
  }
  if ((unaff_x20 != 0) && (uVar18 = *(uint *)(unaff_x20 + 0x18), 0 < (int)uVar18)) {
    lVar22 = 0;
    do {
      if (uVar18 <= (uint)lVar22) goto LAB_033adfa8;
      plVar20 = *(long **)(unaff_x20 + 0x20 + lVar22 * 8);
      if (plVar20 == (long *)0x0) goto LAB_033adfa4;
      uVar5 = (**(code **)(*plVar20 + 0x188))(plVar20,*(undefined8 *)(*plVar20 + 400));
      if (((uVar5 & 1) != 0) &&
         (uVar5 = (**(code **)(*plVar20 + 0x198))
                            (plVar20,unaff_x22,*(undefined8 *)(*plVar20 + 0x1a0)), (uVar5 & 1) != 0)
         ) {
                    /* WARNING: Could not recover jumptable at 0x033ad2f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar20 = (long *)(**(code **)(*plVar20 + 0x1b8))(plVar20);
        return plVar20;
      }
      uVar18 = *(uint *)(unaff_x20 + 0x18);
      lVar22 = lVar22 + 1;
    } while ((int)lVar22 < (int)uVar18);
  }
  if (unaff_x23 == (long *)0x0) {
    return (long *)0x0;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_03582560(unaff_x22,0,0);
  puVar4 = Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__;
  if ((uVar5 & 1) != 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar19 = thunk_FUN_01f117cc();
    uVar23 = thunk_FUN_01efb3a4(
                               Method_UnityEngine_InputSystem_InputManager_RegisterPrecompiledLayout<FastKeyboard>__
                               );
    FUN_034f6754(uVar19,uVar23,0);
    uVar23 = thunk_FUN_01efb3a4(
                               Method_UnityEngine_InputSystem_InputManager_RegisterPrecompiledLayout<FastMouse>__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar19,uVar23);
  }
  uVar19 = *(undefined8 *)
            Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar19 = FUN_03579868(uVar19,0);
  uVar5 = FUN_03582560(unaff_x22,uVar19,0);
  if ((uVar5 & 1) == 0) {
    uVar19 = *(undefined8 *)Method_Oculus_Platform_CAPI_StringToNative__;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar19 = FUN_03579868(uVar19,0);
    uVar5 = FUN_03582560(unaff_x22,uVar19,0);
    if ((uVar5 & 1) == 0) {
      uVar19 = *(undefined8 *)Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar19 = FUN_03579868(uVar19,0);
      uVar5 = FUN_03582560(unaff_x22,uVar19,0);
      if ((uVar5 & 1) == 0) {
        uVar19 = *(undefined8 *)
                  Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
        ;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar19 = FUN_03579868(uVar19,0);
        uVar5 = FUN_03582560(unaff_x22,uVar19,0);
        if ((uVar5 & 1) != 0) {
          plVar20 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                                Method_UnityEngine_ExpressionEvaluator_Evaluate<double>__
                                              );
          if (*(long *)(*unaff_x23 + 0x40) ==
              *(long *)(*(long *)
                         Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                       + 0x40)) {
            puVar8 = (undefined4 *)thunk_FUN_01f11920();
            uVar24 = *puVar8;
            FUN_035ac8e8(plVar20,0);
            (**(code **)(*plVar20 + 0x288))(uVar24,plVar20,*(undefined8 *)(*plVar20 + 0x290));
            return plVar20;
          }
LAB_033adff4:
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc();
        }
        uVar19 = *(undefined8 *)Method_Unity_VisualScripting_Cache_Store__;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar19 = FUN_03579868(uVar19,0);
        uVar5 = FUN_03582560(unaff_x22,uVar19,0);
        if ((uVar5 & 1) != 0) {
          plVar20 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                                Method_UnityEngine_ExpressionEvaluator_Evaluate<double>__
                                              );
          if (*(long *)(*unaff_x23 + 0x40) ==
              *(long *)(*(long *)Method_System_Globalization_Calendar_TimeToTicks__ + 0x40)) {
            puVar9 = (undefined8 *)thunk_FUN_01f11920();
            uVar19 = *puVar9;
            FUN_035ac8e8(plVar20,0);
            (**(code **)(*plVar20 + 0x2a8))(uVar19,plVar20,*(undefined8 *)(*plVar20 + 0x2b0));
            return plVar20;
          }
          goto LAB_033adff4;
        }
        if (unaff_x22 == (long *)0x0) goto LAB_033adfa4;
        uVar5 = (**(code **)(*unaff_x22 + 0x5c8))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x5d0));
        if ((uVar5 & 1) == 0) {
          uVar19 = (**(code **)(*unaff_x22 + 0x8a8))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x8b0));
          uVar23 = *(undefined8 *)Method_UnityEngine_XR_InputDevices_GetDevicesWithCharacteristics__
          ;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)puVar1);
          }
          uVar23 = FUN_03579868(uVar23,0);
          puVar3 = Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__;
          uVar5 = FUN_022ee1a4(uVar19,uVar23,
                               *(undefined8 *)
                                Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__);
          if ((uVar5 & 1) != 0) {
            plVar20 = (long *)thunk_FUN_01f116d0();
            if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc();
            }
            plVar10 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                                  Method_Unity_Jobs_IJobExtensions_EarlyJobInit<CommandBuilder_StreamSplitter>__
                                                );
            FUN_033ae20c();
            lVar22 = (**(code **)(*unaff_x22 + 0x478))
                               (unaff_x22,*(undefined8 *)(*unaff_x22 + 0x480));
            if (lVar22 != 0) {
              if (*(uint *)(lVar22 + 0x18) < 2) {
LAB_033adfa8:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              lVar15 = *plVar20;
              uVar19 = *(undefined8 *)(lVar22 + 0x28);
              uVar5 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar5 != 0) {
                piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) ==
                      *(long *)Method_UnityEngine_Component_GetComponents<BaseRaycaster>__) {
                    puVar9 = (undefined8 *)(lVar15 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                    goto LAB_033ada54;
                  }
                  uVar5 = uVar5 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar5 != 0);
              }
              puVar9 = (undefined8 *)
                       FUN_01ecb238(plVar20,*(long *)
                                             Method_UnityEngine_Component_GetComponents<BaseRaycaster>__
                                    ,2);
LAB_033ada54:
              plVar12 = (long *)(*(code *)*puVar9)(plVar20,puVar9[1]);
              if (plVar12 != (long *)0x0) {
                lVar22 = *plVar12;
                uVar5 = (ulong)*(ushort *)(lVar22 + 0x12e);
                if (uVar5 != 0) {
                  piVar17 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) ==
                        *(long *)
                         Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                       ) {
                      puVar9 = (undefined8 *)(lVar22 + (long)*piVar17 * 0x10 + 0x138);
                      goto LAB_033adabc;
                    }
                    uVar5 = uVar5 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar5 != 0);
                }
                puVar9 = (undefined8 *)
                         FUN_01ecb238(plVar12,*(long *)
                                               Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                                      ,0);
LAB_033adabc:
                plVar12 = (long *)(*(code *)*puVar9)(plVar12,puVar9[1]);
                puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                do {
                  lVar15 = *plVar12;
                  lVar22 = *(long *)puVar3;
                  uVar5 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar5 != 0) {
                    piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar17 + -2) == lVar22) {
                        puVar9 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                        goto LAB_033adb24;
                      }
                      uVar5 = uVar5 - 1;
                      piVar17 = piVar17 + 4;
                    } while (uVar5 != 0);
                  }
                  puVar9 = (undefined8 *)FUN_01ecb238(plVar12,lVar22,0);
LAB_033adb24:
                  uVar5 = (*(code *)*puVar9)(plVar12,puVar9[1]);
                  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
                  if ((uVar5 & 1) == 0) {
                    plVar20 = (long *)thunk_FUN_01f116d0(plVar12,*(undefined8 *)
                                                                                                                                    
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                                  );
                    if (plVar20 == (long *)0x0) {
                      return plVar10;
                    }
                    lVar22 = *plVar20;
                    uVar5 = (ulong)*(ushort *)(lVar22 + 0x12e);
                    if (uVar5 == 0) goto LAB_033add14;
                    piVar17 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                    goto LAB_033adcfc;
                  }
                  lVar15 = *plVar12;
                  lVar22 = *(long *)puVar3;
                  uVar5 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar5 != 0) {
                    piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar17 + -2) == lVar22) {
                        puVar9 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                        goto LAB_033adb84;
                      }
                      uVar5 = uVar5 - 1;
                      piVar17 = piVar17 + 4;
                    } while (uVar5 != 0);
                  }
                  puVar9 = (undefined8 *)FUN_01ecb238(plVar12,lVar22,1);
LAB_033adb84:
                  plVar13 = (long *)(*(code *)*puVar9)(plVar12,puVar9[1]);
                  lVar22 = *plVar20;
                  uVar5 = (ulong)*(ushort *)(lVar22 + 0x12e);
                  if (uVar5 != 0) {
                    piVar17 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar17 + -2) ==
                          *(long *)Method_UnityEngine_Component_GetComponents<BaseRaycaster>__) {
                        puVar9 = (undefined8 *)(lVar22 + (long)*piVar17 * 0x10 + 0x138);
                        goto LAB_033adbe8;
                      }
                      uVar5 = uVar5 - 1;
                      piVar17 = piVar17 + 4;
                    } while (uVar5 != 0);
                  }
                  puVar9 = (undefined8 *)
                           FUN_01ecb238(plVar20,*(long *)
                                                 Method_UnityEngine_Component_GetComponents<BaseRaycaster>__
                                        ,0);
LAB_033adbe8:
                  lVar22 = (*(code *)*puVar9)(plVar20,plVar13,puVar9[1]);
                  if (lVar22 == 0) {
                    uVar23 = *(undefined8 *)puVar4;
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar23 = FUN_03579868(uVar23,0);
                    uVar5 = FUN_03582560(uVar19,uVar23,0);
                    if ((uVar5 & 1) == 0) {
                      lVar22 = FUN_03594a14(uVar19,0);
                    }
                    else {
                      lVar22 = **(long **)(*(long *)
                                            Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__
                                          + 0xb8);
                    }
                  }
                  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  uVar23 = (**(code **)(*plVar13 + 0x168))
                                     (plVar13,*(undefined8 *)(*plVar13 + 0x170));
                  if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ +
                              0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar14 = System_Resources_ResourceReader__Dispose(uVar19,lVar22);
                  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  (**(code **)(*plVar10 + 0x178))
                            (plVar10,uVar23,uVar14,*(undefined8 *)(*plVar10 + 0x180));
                } while( true );
              }
            }
LAB_033adfa4:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar19 = (**(code **)(*unaff_x22 + 0x8a8))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x8b0));
          uVar23 = *(undefined8 *)
                    Method_UnityEngine_InputSystem_LowLevel_InputEvent_GetNextInMemoryChecked__;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)puVar1);
          }
          uVar23 = FUN_03579868(uVar23,0);
          uVar5 = FUN_022ee1a4(uVar19,uVar23,*(undefined8 *)puVar3);
          if ((uVar5 & 1) != 0) {
            plVar20 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                                  Method_Unity_VisualScripting_Dependencies_NCalc_Expression_Evaluate__
                                                );
            FUN_033ae294();
            puVar4 = 
            Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
            ;
            lVar22 = thunk_FUN_01f116d0();
            if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc();
            }
            lVar22 = *(long *)puVar4;
            plVar10 = (long *)thunk_FUN_01f116d0();
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc();
            }
            lVar15 = *plVar10;
            uVar5 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar5 != 0) {
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == lVar22) {
                  puVar9 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_033adda4;
                }
                uVar5 = uVar5 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar5 != 0);
            }
            puVar9 = (undefined8 *)FUN_01ecb238(plVar10,lVar22,0);
LAB_033adda4:
            plVar10 = (long *)(*(code *)*puVar9)(plVar10,puVar9[1]);
            uVar19 = (**(code **)(*unaff_x22 + 0x438))
                               (unaff_x22,*(undefined8 *)(*unaff_x22 + 0x440));
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(*(long *)puVar1);
            }
            uVar5 = FUN_03582560(uVar19,0,0);
            if ((((uVar5 & 1) != 0) &&
                (lVar22 = (**(code **)(*unaff_x22 + 0x478))
                                    (unaff_x22,*(undefined8 *)(*unaff_x22 + 0x480)), lVar22 != 0))
               && (*(long *)(lVar22 + 0x18) != 0)) {
              if ((int)*(long *)(lVar22 + 0x18) == 0) goto LAB_033adfa8;
              uVar19 = *(undefined8 *)(lVar22 + 0x20);
            }
            puVar3 = Method_UnityEngine_Component_GetComponent<NavMeshAgent>__;
            puVar4 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
            puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
            if (plVar10 != (long *)0x0) {
              do {
                lVar15 = *plVar10;
                lVar22 = *(long *)puVar1;
                uVar5 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar5 != 0) {
                  piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == lVar22) {
                      puVar9 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                      goto LAB_033ade84;
                    }
                    uVar5 = uVar5 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar5 != 0);
                }
                puVar9 = (undefined8 *)FUN_01ecb238(plVar10,lVar22,0);
LAB_033ade84:
                uVar5 = (*(code *)*puVar9)(plVar10,puVar9[1]);
                if ((uVar5 & 1) == 0) {
                  return plVar20;
                }
                lVar15 = *plVar10;
                lVar22 = *(long *)puVar1;
                uVar5 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar5 != 0) {
                  piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == lVar22) {
                      puVar9 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                      goto LAB_033adee4;
                    }
                    uVar5 = uVar5 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar5 != 0);
                }
                puVar9 = (undefined8 *)FUN_01ecb238(plVar10,lVar22,1);
LAB_033adee4:
                uVar23 = (*(code *)*puVar9)(plVar10,puVar9[1]);
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c(*(long *)puVar3);
                }
                uVar23 = FUN_033aa338(uVar19,uVar23);
                uVar14 = **(undefined8 **)(*(long *)puVar4 + 0xb8);
                uVar23 = System_Resources_ResourceReader__Dispose(uVar19,uVar23);
                if (plVar20 == (long *)0x0) break;
                (**(code **)(*plVar20 + 0x178))
                          (plVar20,uVar14,uVar23,*(undefined8 *)(*plVar20 + 0x180));
              } while( true );
            }
            goto LAB_033adfa4;
          }
          uVar5 = FUN_035846d4(unaff_x22,0);
          if (((uVar5 & 1) != 0) ||
             ((uVar5 = FUN_0358471c(unaff_x22,0), (uVar5 & 1) != 0 &&
              (uVar5 = FUN_035849ac(unaff_x22,0), (uVar5 & 1) == 0)))) {
            plVar20 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                                  Method_Unity_Jobs_IJobExtensions_EarlyJobInit<CommandBuilder_StreamSplitter>__
                                                );
            FUN_033ae20c();
            lVar22 = (**(code **)(*unaff_x22 + 0x6d8))
                               (unaff_x22,0x14,*(undefined8 *)(*unaff_x22 + 0x6e0));
            if (lVar22 != 0) {
              uVar18 = *(uint *)(lVar22 + 0x18);
              if (0 < (int)uVar18) {
                uVar21 = 0;
                do {
                  if (uVar18 <= uVar21) goto LAB_033adfa8;
                  plVar10 = *(long **)(lVar22 + (long)(int)uVar21 * 8 + 0x20);
                  uVar19 = *(undefined8 *)
                            Method_UnityEngine_InputSystem_LowLevel_InputEventBuffer__ctor__;
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar19 = FUN_03579868(uVar19,0);
                  lVar15 = FUN_034b9230(plVar10,uVar19,0);
                  if (lVar15 == 0) {
                    lVar11 = 0;
                  }
                  else {
                    uVar19 = *(undefined8 *)
                              Method_UnityEngine_InputSystem_InputManager_QueueEvent<DeviceConfigurationEvent>__
                    ;
                    lVar11 = thunk_FUN_01f116d0(lVar15,uVar19);
                    if (lVar11 == 0) goto LAB_033ae004;
                  }
                  if (plVar10 == (long *)0x0) goto LAB_033adfa4;
                  uVar19 = (**(code **)(*plVar10 + 600))(plVar10,*(undefined8 *)(*plVar10 + 0x260));
                  uVar23 = (**(code **)(*plVar10 + 0x1a8))
                                     (plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
                  uVar14 = (**(code **)(*plVar10 + 0x2e8))(plVar10);
                  if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ +
                              0xe0) == 0) {
                    thunk_FUN_01ee6d7c(*(long *)
                                        Method_UnityEngine_Component_GetComponent<NavMeshAgent>__);
                  }
                  FUN_033ae31c(plVar20,uVar19,uVar23,uVar14,lVar11);
                  uVar21 = uVar21 + 1;
                  uVar18 = *(uint *)(lVar22 + 0x18);
                } while ((int)uVar21 < (int)uVar18);
              }
              lVar22 = (**(code **)(*unaff_x22 + 0x858))
                                 (unaff_x22,0x14,*(undefined8 *)(*unaff_x22 + 0x860));
              if (lVar22 != 0) {
                uVar18 = *(uint *)(lVar22 + 0x18);
                if (0 < (int)uVar18) {
                  uVar21 = 0;
                  do {
                    if (uVar18 <= uVar21) goto LAB_033adfa8;
                    plVar10 = *(long **)(lVar22 + (long)(int)uVar21 * 8 + 0x20);
                    if (plVar10 == (long *)0x0) goto LAB_033adfa4;
                    plVar12 = (long *)FUN_034b43c0(plVar10,0);
                    uVar5 = System_Console__SetOut(plVar12,0,0);
                    if ((uVar5 & 1) != 0) {
                      if ((plVar12 == (long *)0x0) ||
                         (lVar15 = (**(code **)(*plVar12 + 0x248))
                                             (plVar12,*(undefined8 *)(*plVar12 + 0x250)),
                         lVar15 == 0)) goto LAB_033adfa4;
                      if (*(long *)(lVar15 + 0x18) == 0) {
                        uVar19 = *(undefined8 *)
                                  Method_UnityEngine_InputSystem_LowLevel_InputEventBuffer__ctor__;
                        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                          thunk_FUN_01ee6d7c();
                        }
                        uVar19 = FUN_03579868(uVar19,0);
                        lVar15 = FUN_034b9230(plVar10,uVar19,0);
                        if (lVar15 == 0) {
                          lVar11 = 0;
                        }
                        else {
                          uVar19 = *(undefined8 *)
                                    Method_UnityEngine_InputSystem_InputManager_QueueEvent<DeviceConfigurationEvent>__
                          ;
                          lVar11 = thunk_FUN_01f116d0(lVar15,uVar19);
                          if (lVar11 == 0) {
LAB_033ae004:
                    /* WARNING: Subroutine does not return */
                            FUN_01f08cfc(lVar15,uVar19);
                          }
                        }
                        uVar19 = (**(code **)(*plVar10 + 0x248))
                                           (plVar10,*(undefined8 *)(*plVar10 + 0x250));
                        uVar23 = (**(code **)(*plVar10 + 0x1a8))
                                           (plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
                        uVar14 = FUN_034b43e8(plVar10);
                        if (*(int *)(*(long *)
                                      Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ +
                                    0xe0) == 0) {
                          thunk_FUN_01ee6d7c(*(long *)
                                              Method_UnityEngine_Component_GetComponent<NavMeshAgent>__
                                            );
                        }
                        FUN_033ae31c(plVar20,uVar19,uVar23,uVar14,lVar11);
                      }
                    }
                    uVar18 = *(uint *)(lVar22 + 0x18);
                    uVar21 = uVar21 + 1;
                  } while ((int)uVar21 < (int)uVar18);
                }
                uVar19 = (**(code **)(*unaff_x22 + 0x8a8))
                                   (unaff_x22,*(undefined8 *)(*unaff_x22 + 0x8b0));
                uVar23 = *(undefined8 *)
                          Method_UnityEngine_InputSystem_InputManager_ExecuteGlobalCommand<UseWindowsGamingInputCommand>__
                ;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c(*(long *)puVar1);
                }
                uVar23 = FUN_03579868(uVar23,0);
                uVar5 = FUN_022ee1a4(uVar19,uVar23,
                                     *(undefined8 *)
                                      Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__
                                    );
                puVar1 = Method_UnityEngine_InputSystem_InputManager_QueueEvent<DeltaStateEvent>__;
                if ((uVar5 & 1) == 0) {
                  return plVar20;
                }
                lVar22 = thunk_FUN_01f116d0();
                if (lVar22 != 0) {
                  lVar15 = *(long *)puVar1;
                  plVar10 = (long *)thunk_FUN_01f116d0();
                  lVar22 = *plVar10;
                  uVar5 = (ulong)*(ushort *)(lVar22 + 0x12e);
                  if (uVar5 != 0) {
                    piVar17 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar17 + -2) == lVar15) {
                        puVar9 = (undefined8 *)(lVar22 + (long)*piVar17 * 0x10 + 0x138);
                        goto LAB_033adf60;
                      }
                      uVar5 = uVar5 - 1;
                      piVar17 = piVar17 + 4;
                    } while (uVar5 != 0);
                  }
                  puVar9 = (undefined8 *)FUN_01ecb238(plVar10,lVar15,0);
LAB_033adf60:
                  uVar5 = (*(code *)*puVar9)(plVar10,plVar20,puVar9[1]);
                  if ((uVar5 & 1) != 0) {
                    return plVar20;
                  }
                  FUN_03406290(*(undefined8 *)
                                Method_UnityEngine_InputSystem_InputManager_QueueEvent<StateEvent>__
                               ,unaff_x22,0);
                  if (unaff_x19 != 0) {
                    FUN_03418c10();
                    return plVar20;
                  }
                }
              }
            }
            goto LAB_033adfa4;
          }
          FUN_03406290(*(undefined8 *)
                        Method_UnityEngine_InputSystem_InputManager_QueueEvent<TextEvent>__,
                       unaff_x22,0);
          if (unaff_x19 == 0) goto LAB_033adfa4;
          FUN_03418c10();
        }
        lVar22 = (**(code **)(*unaff_x23 + 0x168))();
        plVar20 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                              Method_UnityEngine_ExpressionEvaluator_Evaluate<double>__
                                            );
        FUN_035ac8e8(plVar20,0);
        plVar20[2] = lVar22;
        goto LAB_033ad15c;
      }
      plVar20 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                            Method_UnityEngine_ExpressionEvaluator_Evaluate<double>__
                                          );
      if (*(long *)(*unaff_x23 + 0x40) !=
          *(long *)(*(long *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__ +
                   0x40)) goto LAB_033adff4;
      puVar7 = (uint *)thunk_FUN_01f11920();
      uVar18 = *puVar7;
      FUN_035ac8e8(plVar20,0);
      pcVar16 = *(code **)(*plVar20 + 0x268);
      uVar19 = *(undefined8 *)(*plVar20 + 0x270);
    }
    else {
      plVar20 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                            Method_UnityEngine_ExpressionEvaluator_Evaluate<double>__
                                          );
      if (*(long *)(*unaff_x23 + 0x40) !=
          *(long *)(*(long *)
                     Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                   + 0x40)) goto LAB_033adff4;
      pbVar6 = (byte *)thunk_FUN_01f11920();
      uVar18 = (uint)*pbVar6;
      FUN_035ac8e8(plVar20,0);
      pcVar16 = *(code **)(*plVar20 + 0x2c8);
      uVar19 = *(undefined8 *)(*plVar20 + 0x2d0);
    }
    (*pcVar16)(plVar20,uVar18,uVar19);
  }
  else {
    plVar20 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                          Method_UnityEngine_ExpressionEvaluator_Evaluate<double>__)
    ;
    if (*unaff_x23 != *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__)
    goto LAB_033adff4;
    FUN_035ac8e8(plVar20,0);
    plVar20[2] = (long)unaff_x23;
LAB_033ad15c:
    thunk_FUN_01f51358();
  }
  return plVar20;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar17 = piVar17 + 4;
    if (uVar5 == 0) break;
LAB_033adcfc:
    if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
      puVar9 = (undefined8 *)(lVar22 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_033add80;
    }
  }
LAB_033add14:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar20,*(long *)puVar2,0);
LAB_033add80:
  (*(code *)*puVar9)(plVar20,puVar9[1]);
  return plVar10;
}


