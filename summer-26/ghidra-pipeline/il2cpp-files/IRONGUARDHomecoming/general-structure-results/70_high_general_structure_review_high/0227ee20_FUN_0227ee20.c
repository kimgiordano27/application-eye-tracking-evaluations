/*
FUNCTION_NAME: FUN_0227ee20
ENTRY_POINT: 0227ee20
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_16;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0227ee20(long param_1,undefined8 param_2,undefined8 *****param_3,long param_4)

{
  undefined8 *****pppppuVar1;
  byte bVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined2 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  void *__dest;
  ulong __n;
  long *plVar15;
  undefined8 local_80;
  long local_78;
  undefined8 ****local_70;
  long local_68;
  
  local_78 = tpidr_el0;
  local_68 = *(long *)(local_78 + 0x28);
  plVar15 = (long *)(param_4 + 0x38);
  puVar13 = (undefined8 *)*plVar15;
  local_80 = param_2;
  local_70 = param_3;
  if (puVar13 == (undefined8 *)0x0) {
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_Channels_CADSerializer_DeserializeMessage__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_CAPI_DictionaryToOVRKeyValuePairs__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_CAPI_IntPtrToByteArray__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_CAPI_StringToNative__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                      );
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__);
    thunk_FUN_01efb3a4(Method_System_IO_CStreamReader_Read__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Cache_Store__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_TimeToTicks__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_ToFourDigitYear__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_VerifyWritable__);
    thunk_FUN_01efb3a4(Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Globalization_CalendarData_GetJapaneseEraNames__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__);
    thunk_FUN_01efb3a4(Method_System_Globalization_CalendarData_InitializeAbbreviatedEraNames__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOutEvent>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
                      );
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
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOverEvent>__
                      );
    puVar13 = *(undefined8 **)(param_4 + 0x38);
    if (puVar13 == (undefined8 *)0x0) {
      FUN_01ecafa0(param_4);
      puVar13 = *(undefined8 **)(param_4 + 0x38);
    }
  }
  puVar4 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  uVar6 = *puVar13;
  __n = (ulong)*(uint *)(puVar13[1] + 0xfc);
  __dest = (void *)((long)&local_80 - (__n + 0xf & 0x1fffffff0));
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar6 = FUN_03579868(uVar6,0);
  puVar5 = Method_Oculus_Platform_CAPI_IntPtrToByteArray__;
  if (*(int *)(*(long *)Method_Oculus_Platform_CAPI_IntPtrToByteArray__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_CAPI_IntPtrToByteArray__);
  }
  uVar7 = FUN_0402d484(uVar6,0);
  uVar6 = *(undefined8 *)*plVar15;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar4);
  }
  uVar6 = FUN_03579868(uVar6,0);
  if ((uVar7 & 1) != 0) {
    uVar8 = FUN_03579868(*(undefined8 *)
                          Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__,0);
    uVar7 = FUN_03582560(uVar6,uVar8,0);
    if ((uVar7 & 1) != 0) {
      uVar6 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
      lVar14 = *plVar15;
      if (-1 < *(int *)(*(long *)(lVar14 + 8) + 0x28)) {
        param_3 = &local_70;
      }
      memcpy(__dest,param_3,__n);
      plVar15 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(lVar14 + 8),__dest);
      if (plVar15 == (long *)0x0) goto LAB_0227fbcc;
      if (*(long *)(*plVar15 + 0x40) ==
          *(long *)(*(long *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__ +
                   0x40)) {
        puVar9 = (undefined4 *)thunk_FUN_01f11920();
        FUN_04027a04(uVar6,local_80,*puVar9,0);
        goto LAB_0227f770;
      }
LAB_0227fbc8:
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    uVar6 = *(undefined8 *)*plVar15;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar6 = FUN_03579868(uVar6,0);
    uVar8 = FUN_03579868(*(undefined8 *)Method_Oculus_Platform_CAPI_StringToNative__,0);
    uVar7 = FUN_03582560(uVar6,uVar8,0);
    if ((uVar7 & 1) != 0) {
      uVar6 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
      lVar14 = *plVar15;
      if (-1 < *(int *)(*(long *)(lVar14 + 8) + 0x28)) {
        param_3 = &local_70;
      }
      memcpy(__dest,param_3,__n);
      plVar15 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(lVar14 + 8),__dest);
      if (plVar15 != (long *)0x0) {
        if (*(long *)(*plVar15 + 0x40) !=
            *(long *)(*(long *)
                       Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                     + 0x40)) goto LAB_0227fbc8;
        puVar10 = (undefined1 *)thunk_FUN_01f11920();
        FUN_04027948(uVar6,local_80,*puVar10,0);
        goto LAB_0227f770;
      }
LAB_0227fbcc:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = *(undefined8 *)*plVar15;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar6 = FUN_03579868(uVar6,0);
    uVar8 = FUN_03579868(*(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                         ,0);
    uVar7 = FUN_03582560(uVar6,uVar8,0);
    if ((uVar7 & 1) == 0) {
      uVar6 = *(undefined8 *)*plVar15;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar6 = FUN_03579868(uVar6,0);
      uVar8 = FUN_03579868(*(undefined8 *)
                            Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
                           ,0);
      uVar7 = FUN_03582560(uVar6,uVar8,0);
      if ((uVar7 & 1) == 0) {
        uVar6 = *(undefined8 *)*plVar15;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar6 = FUN_03579868(uVar6,0);
        uVar8 = FUN_03579868(*(undefined8 *)Method_System_Globalization_Calendar_ToFourDigitYear__,0
                            );
        uVar7 = FUN_03582560(uVar6,uVar8,0);
        if ((uVar7 & 1) == 0) {
          uVar6 = *(undefined8 *)*plVar15;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar6 = FUN_03579868(uVar6,0);
          uVar8 = FUN_03579868(*(undefined8 *)
                                Method_System_Globalization_CalendarData_GetJapaneseEraNames__,0);
          uVar7 = FUN_03582560(uVar6,uVar8,0);
          if ((uVar7 & 1) == 0) {
            uVar6 = *(undefined8 *)*plVar15;
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar6 = FUN_03579868(uVar6,0);
            uVar8 = FUN_03579868(*(undefined8 *)
                                  Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                                 ,0);
            uVar7 = FUN_03582560(uVar6,uVar8,0);
            if ((uVar7 & 1) == 0) {
              uVar6 = *(undefined8 *)*plVar15;
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar6 = FUN_03579868(uVar6,0);
              uVar8 = FUN_03579868(*(undefined8 *)Method_Unity_VisualScripting_Cache_Store__,0);
              uVar7 = FUN_03582560(uVar6,uVar8,0);
              if ((uVar7 & 1) == 0) {
                uVar6 = *(undefined8 *)*plVar15;
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar6 = FUN_03579868(uVar6,0);
                uVar8 = FUN_03579868(*(undefined8 *)
                                      Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__
                                     ,0);
                uVar7 = FUN_03582560(uVar6,uVar8,0);
                if ((uVar7 & 1) != 0) {
                  uVar6 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
                  lVar14 = *plVar15;
                  if (-1 < *(int *)(*(long *)(lVar14 + 8) + 0x28)) {
                    param_3 = &local_70;
                  }
                  memcpy(__dest,param_3,__n);
                  plVar15 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(lVar14 + 8),__dest);
                  if (plVar15 == (long *)0x0) goto LAB_0227fbcc;
                  if (*(long *)(*plVar15 + 0x40) !=
                      *(long *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0x40))
                  goto LAB_0227fbc8;
                  puVar11 = (undefined2 *)thunk_FUN_01f11920();
                  FUN_040274e0(uVar6,local_80,*puVar11,0);
                }
              }
              else {
                uVar6 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
                lVar14 = *plVar15;
                if (-1 < *(int *)(*(long *)(lVar14 + 8) + 0x28)) {
                  param_3 = &local_70;
                }
                memcpy(__dest,param_3,__n);
                plVar15 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(lVar14 + 8),__dest);
                if (plVar15 == (long *)0x0) goto LAB_0227fbcc;
                if (*(long *)(*plVar15 + 0x40) !=
                    *(long *)(*(long *)Method_System_Globalization_Calendar_TimeToTicks__ + 0x40))
                goto LAB_0227fbc8;
                puVar13 = (undefined8 *)thunk_FUN_01f11920();
                FUN_0402759c(*puVar13,uVar6,local_80,0);
              }
            }
            else {
              uVar6 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
              lVar14 = *plVar15;
              if (-1 < *(int *)(*(long *)(lVar14 + 8) + 0x28)) {
                param_3 = &local_70;
              }
              memcpy(__dest,param_3,__n);
              plVar15 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(lVar14 + 8),__dest);
              if (plVar15 == (long *)0x0) goto LAB_0227fbcc;
              if (*(long *)(*plVar15 + 0x40) !=
                  *(long *)(*(long *)
                             Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                           + 0x40)) goto LAB_0227fbc8;
              puVar9 = (undefined4 *)thunk_FUN_01f11920();
              FUN_04027658(*puVar9,uVar6,local_80,0);
            }
          }
          else {
            uVar6 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
            lVar14 = *plVar15;
            if (-1 < *(int *)(*(long *)(lVar14 + 8) + 0x28)) {
              param_3 = &local_70;
            }
            memcpy(__dest,param_3,__n);
            plVar15 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(lVar14 + 8),__dest);
            if (plVar15 == (long *)0x0) goto LAB_0227fbcc;
            if (*(long *)(*plVar15 + 0x40) !=
                *(long *)(*(long *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__
                         + 0x40)) goto LAB_0227fbc8;
            puVar13 = (undefined8 *)thunk_FUN_01f11920();
            FUN_04027714(uVar6,local_80,*puVar13,0);
          }
        }
        else {
          uVar6 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
          lVar14 = *plVar15;
          if (-1 < *(int *)(*(long *)(lVar14 + 8) + 0x28)) {
            param_3 = &local_70;
          }
          memcpy(__dest,param_3,__n);
          plVar15 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(lVar14 + 8),__dest);
          if (plVar15 == (long *)0x0) goto LAB_0227fbcc;
          if (*(long *)(*plVar15 + 0x40) !=
              *(long *)(*(long *)Method_System_Globalization_Calendar_VerifyWritable__ + 0x40))
          goto LAB_0227fbc8;
          puVar11 = (undefined2 *)thunk_FUN_01f11920();
          FUN_040277d0(uVar6,local_80,*puVar11,0);
        }
        goto LAB_0227f770;
      }
      uVar6 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
      lVar14 = *plVar15;
      if (-1 < *(int *)(*(long *)(lVar14 + 8) + 0x28)) {
        param_3 = &local_70;
      }
      memcpy(__dest,param_3,__n);
      plVar15 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(lVar14 + 8),__dest);
      plVar3 = (long *)
               Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__;
    }
    else {
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0403f2cc(*(undefined8 *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOverEvent>__
                   ,0);
      uVar6 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
      lVar14 = *plVar15;
      if (-1 < *(int *)(*(long *)(lVar14 + 8) + 0x28)) {
        param_3 = &local_70;
      }
      memcpy(__dest,param_3,__n);
      plVar15 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(lVar14 + 8),__dest);
      plVar3 = (long *)Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__;
    }
    if (plVar15 == (long *)0x0) goto LAB_0227fbcc;
    if (*(long *)(*plVar15 + 0x40) != *(long *)(*plVar3 + 0x40)) goto LAB_0227fbc8;
    puVar10 = (undefined1 *)thunk_FUN_01f11920();
    FUN_0402788c(uVar6,local_80,*puVar10,0);
    goto LAB_0227f770;
  }
  uVar8 = FUN_03579868(*(undefined8 *)
                        Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                       ,0);
  uVar7 = FUN_03582560(uVar6,uVar8,0);
  if ((uVar7 & 1) != 0) {
    uVar6 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
    lVar14 = *plVar15;
    if (-1 < *(int *)(*(long *)(lVar14 + 8) + 0x28)) {
      param_3 = &local_70;
    }
    memcpy(__dest,param_3,__n);
    plVar15 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(lVar14 + 8),__dest);
    if ((plVar15 != (long *)0x0) &&
       (*plVar15 != *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar15);
    }
    FUN_04027424(uVar6,local_80,plVar15,0);
    goto LAB_0227f770;
  }
  uVar6 = *(undefined8 *)*plVar15;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar6 = FUN_03579868(uVar6,0);
  uVar8 = FUN_03579868(*(undefined8 *)
                        Method_System_Runtime_Remoting_Channels_CADSerializer_DeserializeMessage__,0
                      );
  uVar7 = FUN_03582560(uVar6,uVar8,0);
  if ((uVar7 & 1) == 0) {
    uVar6 = *(undefined8 *)*plVar15;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar6 = FUN_03579868(uVar6,0);
    uVar8 = FUN_03579868(*(undefined8 *)Method_Oculus_Platform_CAPI_DictionaryToOVRKeyValuePairs__,0
                        );
    uVar7 = FUN_03582560(uVar6,uVar8,0);
    if ((uVar7 & 1) == 0) {
      uVar6 = *(undefined8 *)
               Method_System_Globalization_CalendarData_InitializeAbbreviatedEraNames__;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar6 = FUN_03579868(uVar6,0);
      uVar8 = FUN_03579868(*(undefined8 *)*plVar15,0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar5);
      }
      uVar7 = FUN_0402d498(uVar6,uVar8,0);
      puVar13 = (undefined8 *)*plVar15;
      if ((uVar7 & 1) == 0) {
        uVar6 = *puVar13;
        lVar14 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar15 = (long *)FUN_03579868(uVar6,0);
        uVar6 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerLeaveEvent>__
                                  );
        uVar8 = 0;
        if (plVar15 != (long *)0x0) {
          uVar8 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
        }
        uVar12 = thunk_FUN_01efb3a4(
                                   Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                                   );
        uVar6 = FUN_0340ebc0(uVar6,uVar8,uVar12,0);
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
        uVar8 = thunk_FUN_01f117cc();
        Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar8,uVar6,0);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar8,param_4);
      }
      if (-1 < *(int *)(puVar13[1] + 0x28)) {
        param_3 = &local_70;
      }
      memcpy(__dest,param_3,__n);
      plVar15 = (long *)thunk_FUN_01f113fc(puVar13[1],__dest);
      if (plVar15 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)
                           Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOutEvent>__
                         + 0x130);
        if ((*(byte *)(*plVar15 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)
             Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOutEvent>__)
           ) goto LAB_0227fbc8;
      }
      uVar8 = thunk_FUN_0401d938(plVar15,0);
      uVar6 = FUN_04029138(*(undefined8 *)(param_1 + 0x18),0);
    }
    else {
      uVar6 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
      lVar14 = *plVar15;
      if (-1 < *(int *)(*(long *)(lVar14 + 8) + 0x28)) {
        param_3 = &local_70;
      }
      memcpy(__dest,param_3,__n);
      uVar7 = FUN_01f089f8(*(undefined8 *)(lVar14 + 8),__dest);
      uVar8 = 0;
      if ((uVar7 & 1) != 0) {
        lVar14 = *plVar15;
        pppppuVar1 = (undefined8 *****)local_70;
        if (-1 < *(int *)(*(long *)(lVar14 + 8) + 0x28)) {
          pppppuVar1 = &local_70;
        }
        memcpy(__dest,pppppuVar1,__n);
        plVar15 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(lVar14 + 8),__dest);
        if (plVar15 == (long *)0x0) goto LAB_0227fbcc;
        bVar2 = *(byte *)(*(long *)
                           Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                         + 0x130);
        if ((*(byte *)(*plVar15 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)
             Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
           )) goto LAB_0227fbc8;
        lVar14 = plVar15[2];
        goto LAB_0227f584;
      }
    }
  }
  else {
    uVar6 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
    lVar14 = *plVar15;
    if (-1 < *(int *)(*(long *)(lVar14 + 8) + 0x28)) {
      param_3 = &local_70;
    }
    memcpy(__dest,param_3,__n);
    uVar7 = FUN_01f089f8(*(undefined8 *)(lVar14 + 8),__dest);
    uVar8 = 0;
    if ((uVar7 & 1) != 0) {
      lVar14 = *plVar15;
      pppppuVar1 = (undefined8 *****)local_70;
      if (-1 < *(int *)(*(long *)(lVar14 + 8) + 0x28)) {
        pppppuVar1 = &local_70;
      }
      memcpy(__dest,pppppuVar1,__n);
      plVar15 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(lVar14 + 8),__dest);
      if (plVar15 == (long *)0x0) goto LAB_0227fbcc;
      bVar2 = *(byte *)(*(long *)
                         Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__ +
                       0x130);
      if ((*(byte *)(*plVar15 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__))
      goto LAB_0227fbc8;
      lVar14 = plVar15[3];
LAB_0227f584:
      uVar8 = FUN_04029138(lVar14,0);
    }
  }
  FUN_04027368(uVar6,local_80,uVar8,0);
LAB_0227f770:
  if (*(long *)(local_78 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


