/*
FUNCTION_NAME: FUN_0227d4d8
ENTRY_POINT: 0227d4d8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;pose_vector;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_16;telemetry_or_network_hits_7;frame_or_lifecycle_behavior
*/


void FUN_0227d4d8(long param_1,undefined8 param_2,long *param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined2 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  
  puVar12 = *(undefined8 **)(param_4 + 0x38);
  if (puVar12 == (undefined8 *)0x0) {
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
    puVar12 = *(undefined8 **)(param_4 + 0x38);
    if (puVar12 == (undefined8 *)0x0) {
      FUN_01ecafa0(param_4);
      puVar12 = *(undefined8 **)(param_4 + 0x38);
    }
  }
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  uVar13 = *puVar12;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar13 = FUN_03579868(uVar13,0);
  puVar3 = Method_Oculus_Platform_CAPI_IntPtrToByteArray__;
  if (*(int *)(*(long *)Method_Oculus_Platform_CAPI_IntPtrToByteArray__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_CAPI_IntPtrToByteArray__);
  }
  uVar4 = FUN_0402d484(uVar13,0);
  uVar13 = **(undefined8 **)(param_4 + 0x38);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  uVar13 = FUN_03579868(uVar13,0);
  if ((uVar4 & 1) != 0) {
    uVar5 = FUN_03579868(*(undefined8 *)
                          Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__,0);
    uVar4 = FUN_03582560(uVar13,uVar5,0);
    if ((uVar4 & 1) == 0) {
      uVar13 = **(undefined8 **)(param_4 + 0x38);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar13 = FUN_03579868(uVar13,0);
      uVar5 = FUN_03579868(*(undefined8 *)Method_Oculus_Platform_CAPI_StringToNative__,0);
      uVar4 = FUN_03582560(uVar13,uVar5,0);
      if ((uVar4 & 1) != 0) {
        uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
        if (param_3 == (long *)0x0) goto LAB_0227e018;
        if (*(long *)(*param_3 + 0x40) ==
            *(long *)(*(long *)
                       Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                     + 0x40)) {
          puVar7 = (undefined1 *)thunk_FUN_01f11920(param_3);
          FUN_04027948(uVar13,param_2,*puVar7,0);
          return;
        }
        goto LAB_0227e010;
      }
      uVar13 = **(undefined8 **)(param_4 + 0x38);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar13 = FUN_03579868(uVar13,0);
      uVar5 = FUN_03579868(*(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                           ,0);
      uVar4 = FUN_03582560(uVar13,uVar5,0);
      if ((uVar4 & 1) == 0) {
        uVar13 = **(undefined8 **)(param_4 + 0x38);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar13 = FUN_03579868(uVar13,0);
        uVar5 = FUN_03579868(*(undefined8 *)
                              Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
                             ,0);
        uVar4 = FUN_03582560(uVar13,uVar5,0);
        if ((uVar4 & 1) == 0) {
          uVar13 = **(undefined8 **)(param_4 + 0x38);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar13 = FUN_03579868(uVar13,0);
          uVar5 = FUN_03579868(*(undefined8 *)Method_System_Globalization_Calendar_ToFourDigitYear__
                               ,0);
          uVar4 = FUN_03582560(uVar13,uVar5,0);
          if ((uVar4 & 1) != 0) {
            uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
            if (param_3 == (long *)0x0) goto LAB_0227e018;
            if (*(long *)(*param_3 + 0x40) ==
                *(long *)(*(long *)Method_System_Globalization_Calendar_VerifyWritable__ + 0x40)) {
              puVar9 = (undefined2 *)thunk_FUN_01f11920(param_3);
              FUN_040277d0(uVar13,param_2,*puVar9,0);
              return;
            }
            goto LAB_0227e010;
          }
          uVar13 = **(undefined8 **)(param_4 + 0x38);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar13 = FUN_03579868(uVar13,0);
          uVar5 = FUN_03579868(*(undefined8 *)
                                Method_System_Globalization_CalendarData_GetJapaneseEraNames__,0);
          uVar4 = FUN_03582560(uVar13,uVar5,0);
          if ((uVar4 & 1) != 0) {
            uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
            if (param_3 == (long *)0x0) goto LAB_0227e018;
            if (*(long *)(*param_3 + 0x40) ==
                *(long *)(*(long *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__
                         + 0x40)) {
              puVar12 = (undefined8 *)thunk_FUN_01f11920(param_3);
              FUN_04027714(uVar13,param_2,*puVar12,0);
              return;
            }
            goto LAB_0227e010;
          }
          uVar13 = **(undefined8 **)(param_4 + 0x38);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar13 = FUN_03579868(uVar13,0);
          uVar5 = FUN_03579868(*(undefined8 *)
                                Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                               ,0);
          uVar4 = FUN_03582560(uVar13,uVar5,0);
          if ((uVar4 & 1) != 0) {
            uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
            if (param_3 == (long *)0x0) goto LAB_0227e018;
            if (*(long *)(*param_3 + 0x40) ==
                *(long *)(*(long *)
                           Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                         + 0x40)) {
              puVar6 = (undefined4 *)thunk_FUN_01f11920(param_3);
              FUN_04027658(*puVar6,uVar13,param_2,0);
              return;
            }
            goto LAB_0227e010;
          }
          uVar13 = **(undefined8 **)(param_4 + 0x38);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar13 = FUN_03579868(uVar13,0);
          uVar5 = FUN_03579868(*(undefined8 *)Method_Unity_VisualScripting_Cache_Store__,0);
          uVar4 = FUN_03582560(uVar13,uVar5,0);
          if ((uVar4 & 1) == 0) {
            uVar13 = **(undefined8 **)(param_4 + 0x38);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar13 = FUN_03579868(uVar13,0);
            uVar5 = FUN_03579868(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__
                                 ,0);
            uVar4 = FUN_03582560(uVar13,uVar5,0);
            if ((uVar4 & 1) == 0) {
              return;
            }
            uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
            if (param_3 == (long *)0x0) goto LAB_0227e018;
            if (*(long *)(*param_3 + 0x40) ==
                *(long *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0x40)) {
              puVar9 = (undefined2 *)thunk_FUN_01f11920(param_3);
              FUN_040274e0(uVar13,param_2,*puVar9,0);
              return;
            }
            goto LAB_0227e010;
          }
          uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
          if (param_3 != (long *)0x0) {
            if (*(long *)(*param_3 + 0x40) ==
                *(long *)(*(long *)Method_System_Globalization_Calendar_TimeToTicks__ + 0x40)) {
              puVar12 = (undefined8 *)thunk_FUN_01f11920(param_3);
              FUN_0402759c(*puVar12,uVar13,param_2,0);
              return;
            }
            goto LAB_0227e010;
          }
          goto LAB_0227e018;
        }
        uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
        plVar10 = (long *)
                  Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
        ;
      }
      else {
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0403f2cc(*(undefined8 *)
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOverEvent>__
                     ,0);
        uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
        plVar10 = (long *)Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__;
      }
      if (param_3 == (long *)0x0) {
LAB_0227e018:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(*param_3 + 0x40) == *(long *)(*plVar10 + 0x40)) {
        puVar7 = (undefined1 *)thunk_FUN_01f11920(param_3);
        FUN_0402788c(uVar13,param_2,*puVar7,0);
        return;
      }
    }
    else {
      uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
      if (param_3 == (long *)0x0) goto LAB_0227e018;
      if (*(long *)(*param_3 + 0x40) ==
          *(long *)(*(long *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__ +
                   0x40)) {
        puVar6 = (undefined4 *)thunk_FUN_01f11920(param_3);
        FUN_04027a04(uVar13,param_2,*puVar6,0);
        return;
      }
    }
LAB_0227e010:
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(param_3);
  }
  uVar5 = FUN_03579868(*(undefined8 *)
                        Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                       ,0);
  uVar4 = FUN_03582560(uVar13,uVar5,0);
  if ((uVar4 & 1) != 0) {
    uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
    if ((param_3 == (long *)0x0) ||
       (*param_3 == *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__)) {
      FUN_04027424(uVar13,param_2,param_3,0);
      return;
    }
    goto LAB_0227e010;
  }
  uVar13 = **(undefined8 **)(param_4 + 0x38);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar13 = FUN_03579868(uVar13,0);
  uVar5 = FUN_03579868(*(undefined8 *)
                        Method_System_Runtime_Remoting_Channels_CADSerializer_DeserializeMessage__,0
                      );
  uVar4 = FUN_03582560(uVar13,uVar5,0);
  if ((uVar4 & 1) == 0) {
    uVar13 = **(undefined8 **)(param_4 + 0x38);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar13 = FUN_03579868(uVar13,0);
    uVar5 = FUN_03579868(*(undefined8 *)Method_Oculus_Platform_CAPI_DictionaryToOVRKeyValuePairs__,0
                        );
    uVar4 = FUN_03582560(uVar13,uVar5,0);
    if ((uVar4 & 1) == 0) {
      uVar13 = *(undefined8 *)
                Method_System_Globalization_CalendarData_InitializeAbbreviatedEraNames__;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar13 = FUN_03579868(uVar13,0);
      uVar5 = FUN_03579868(**(undefined8 **)(param_4 + 0x38),0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar3);
      }
      uVar4 = FUN_0402d498(uVar13,uVar5,0);
      if ((uVar4 & 1) == 0) {
        uVar13 = **(undefined8 **)(param_4 + 0x38);
        lVar8 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar10 = (long *)FUN_03579868(uVar13,0);
        uVar13 = thunk_FUN_01efb3a4(
                                   Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerLeaveEvent>__
                                   );
        uVar5 = 0;
        if (plVar10 != (long *)0x0) {
          uVar5 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
        }
        uVar11 = thunk_FUN_01efb3a4(
                                   Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                                   );
        uVar13 = FUN_0340ebc0(uVar13,uVar5,uVar11,0);
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
        uVar5 = thunk_FUN_01f117cc();
        Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar5,uVar13,0);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar5,param_4);
      }
      if (param_3 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)
                           Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOutEvent>__
                         + 0x130);
        if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)
             Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOutEvent>__)
           ) goto LAB_0227e010;
      }
      uVar13 = thunk_FUN_0401d938(param_3,0);
      uVar5 = FUN_04029138(*(undefined8 *)(param_1 + 0x18),0);
      goto LAB_0227dc44;
    }
    uVar5 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
    if (param_3 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)
                         Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                       + 0x130);
      if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)
           Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__))
      goto LAB_0227e010;
      lVar8 = param_3[2];
      goto LAB_0227daa0;
    }
  }
  else {
    uVar5 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
    if (param_3 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)
                         Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__ +
                       0x130);
      if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__))
      goto LAB_0227e010;
      lVar8 = param_3[3];
LAB_0227daa0:
      uVar13 = FUN_04029138(lVar8,0);
      goto LAB_0227dc44;
    }
  }
  uVar13 = 0;
LAB_0227dc44:
  FUN_04027368(uVar5,param_2,uVar13,0);
  return;
}


