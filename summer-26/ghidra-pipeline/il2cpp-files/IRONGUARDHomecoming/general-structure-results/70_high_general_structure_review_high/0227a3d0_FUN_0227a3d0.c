/*
FUNCTION_NAME: FUN_0227a3d0
ENTRY_POINT: 0227a3d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_16;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_0227a3d0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong local_48;
  
  plVar14 = (long *)(param_3 + 0x38);
  puVar11 = (undefined8 *)*plVar14;
  if (puVar11 == (undefined8 *)0x0) {
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_Channels_CADSerializer_DeserializeMessage__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_CAPI_DictionaryToOVRKeyValuePairs__);
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
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerDownEvent>__
                      );
    puVar11 = *(undefined8 **)(param_3 + 0x38);
    if (puVar11 == (undefined8 *)0x0) {
      FUN_01ecafa0(param_3);
      puVar11 = *(undefined8 **)(param_3 + 0x38);
    }
  }
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  uVar13 = *puVar11;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar13 = FUN_03579868(uVar13,0);
  puVar2 = Method_Oculus_Platform_CAPI_IntPtrToByteArray__;
  if (*(int *)(*(long *)Method_Oculus_Platform_CAPI_IntPtrToByteArray__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_CAPI_IntPtrToByteArray__);
  }
  uVar6 = FUN_0402d484(uVar13,0);
  uVar13 = *(undefined8 *)*plVar14;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar1);
  }
  uVar13 = FUN_03579868(uVar13,0);
  if ((uVar6 & 1) == 0) {
    uVar7 = FUN_03579868(*(undefined8 *)
                          Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                         ,0);
    uVar6 = FUN_03582560(uVar13,uVar7,0);
    if ((uVar6 & 1) == 0) {
      uVar13 = *(undefined8 *)*plVar14;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar13 = FUN_03579868(uVar13,0);
      uVar7 = FUN_03579868(*(undefined8 *)
                            Method_System_Runtime_Remoting_Channels_CADSerializer_DeserializeMessage__
                           ,0);
      uVar6 = FUN_03582560(uVar13,uVar7,0);
      if ((uVar6 & 1) == 0) {
        uVar13 = *(undefined8 *)*plVar14;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar13 = FUN_03579868(uVar13,0);
        uVar7 = FUN_03579868(*(undefined8 *)
                              Method_Oculus_Platform_CAPI_DictionaryToOVRKeyValuePairs__,0);
        uVar6 = FUN_03582560(uVar13,uVar7,0);
        if ((uVar6 & 1) == 0) {
          uVar13 = *(undefined8 *)
                    Method_System_Globalization_CalendarData_InitializeAbbreviatedEraNames__;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar13 = FUN_03579868(uVar13,0);
          uVar7 = FUN_03579868(*(undefined8 *)*plVar14,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)puVar2);
          }
          uVar6 = FUN_0402d498(uVar13,uVar7,0);
          if ((uVar6 & 1) != 0) {
            uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x18),0);
            uVar13 = FUN_040266c0(uVar13,param_2,0);
            lVar8 = FUN_0215976c(uVar13,*(undefined8 *)(*plVar14 + 0x10));
            return lVar8;
          }
          uVar13 = *(undefined8 *)*plVar14;
          lVar8 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          plVar14 = (long *)FUN_03579868(uVar13,0);
          uVar13 = thunk_FUN_01efb3a4(
                                     Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerLeaveEvent>__
                                     );
          uVar7 = 0;
          if (plVar14 != (long *)0x0) {
            uVar7 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
          }
          uVar10 = thunk_FUN_01efb3a4(
                                     Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                                     );
          uVar13 = FUN_0340ebc0(uVar13,uVar7,uVar10,0);
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
          uVar7 = thunk_FUN_01f117cc();
          Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar7,uVar13,0);
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar7,param_3);
        }
        uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x18),0);
        uVar13 = FUN_040266c0(uVar13,param_2,0);
        uVar6 = FUN_035ad140(uVar13,0,0);
        if ((uVar6 & 1) != 0) {
          return 0;
        }
        lVar8 = FUN_0402bd14(uVar13,0);
      }
      else {
        uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x18),0);
        uVar13 = FUN_040266c0(uVar13,param_2,0);
        uVar6 = FUN_035ad140(uVar13,0,0);
        if ((uVar6 & 1) != 0) {
          return 0;
        }
        lVar8 = FUN_0402d2f0(uVar13,0);
      }
    }
    else {
      uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x18),0);
      lVar8 = FUN_04026768(uVar13,param_2,0);
    }
    goto LAB_0227a6f0;
  }
  uVar7 = FUN_03579868(*(undefined8 *)
                        Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__,0);
  uVar6 = FUN_03582560(uVar13,uVar7,0);
  if ((uVar6 & 1) == 0) {
    uVar13 = *(undefined8 *)*plVar14;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar13 = FUN_03579868(uVar13,0);
    uVar7 = FUN_03579868(*(undefined8 *)Method_Oculus_Platform_CAPI_StringToNative__,0);
    uVar6 = FUN_03582560(uVar13,uVar7,0);
    if ((uVar6 & 1) != 0) {
      uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x18),0);
      uVar3 = FUN_04026c18(uVar13,param_2,0);
      local_48 = CONCAT71(local_48._1_7_,uVar3) & 0xffffffffffffff01;
      puVar11 = (undefined8 *)
                Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
      goto LAB_0227a6e0;
    }
    uVar13 = *(undefined8 *)*plVar14;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar13 = FUN_03579868(uVar13,0);
    uVar7 = FUN_03579868(*(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                         ,0);
    uVar6 = FUN_03582560(uVar13,uVar7,0);
    if ((uVar6 & 1) == 0) {
      uVar13 = *(undefined8 *)*plVar14;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar13 = FUN_03579868(uVar13,0);
      uVar7 = FUN_03579868(*(undefined8 *)
                            Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
                           ,0);
      uVar6 = FUN_03582560(uVar13,uVar7,0);
      if ((uVar6 & 1) != 0) {
        uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x18),0);
        uVar3 = FUN_04026b70(uVar13,param_2,0);
        puVar11 = (undefined8 *)
                  Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
        ;
        goto LAB_0227a994;
      }
      uVar13 = *(undefined8 *)*plVar14;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar13 = FUN_03579868(uVar13,0);
      uVar7 = FUN_03579868(*(undefined8 *)Method_System_Globalization_Calendar_ToFourDigitYear__,0);
      uVar6 = FUN_03582560(uVar13,uVar7,0);
      if ((uVar6 & 1) == 0) {
        uVar13 = *(undefined8 *)*plVar14;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar13 = FUN_03579868(uVar13,0);
        uVar7 = FUN_03579868(*(undefined8 *)
                              Method_System_Globalization_CalendarData_GetJapaneseEraNames__,0);
        uVar6 = FUN_03582560(uVar13,uVar7,0);
        if ((uVar6 & 1) != 0) {
          uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x18),0);
          local_48 = FUN_04026a20(uVar13,param_2,0);
          puVar11 = (undefined8 *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__;
          goto LAB_0227a6e0;
        }
        uVar13 = *(undefined8 *)*plVar14;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar13 = FUN_03579868(uVar13,0);
        uVar7 = FUN_03579868(*(undefined8 *)
                              Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                             ,0);
        uVar6 = FUN_03582560(uVar13,uVar7,0);
        if ((uVar6 & 1) == 0) {
          uVar13 = *(undefined8 *)*plVar14;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar13 = FUN_03579868(uVar13,0);
          uVar7 = FUN_03579868(*(undefined8 *)Method_Unity_VisualScripting_Cache_Store__,0);
          uVar6 = FUN_03582560(uVar13,uVar7,0);
          if ((uVar6 & 1) == 0) {
            uVar13 = *(undefined8 *)*plVar14;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar13 = FUN_03579868(uVar13,0);
            uVar7 = FUN_03579868(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__
                                 ,0);
            uVar6 = FUN_03582560(uVar13,uVar7,0);
            if ((uVar6 & 1) == 0) {
              return 0;
            }
            uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x18),0);
            uVar4 = FUN_04026810(uVar13,param_2,0);
            puVar11 = (undefined8 *)Method_System_IO_CStreamReader_Read__;
            goto LAB_0227aab8;
          }
          uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x18),0);
          local_48 = FUN_040268b8(uVar13,param_2,0);
          puVar11 = (undefined8 *)Method_System_Globalization_Calendar_TimeToTicks__;
        }
        else {
          uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x18),0);
          uVar5 = FUN_0402696c(uVar13,param_2,0);
          local_48 = CONCAT44(local_48._4_4_,uVar5);
          puVar11 = (undefined8 *)
                    Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
          ;
        }
        uVar13 = *puVar11;
      }
      else {
        uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x18),0);
        uVar4 = FUN_04026ac8(uVar13,param_2,0);
        puVar11 = (undefined8 *)Method_System_Globalization_Calendar_VerifyWritable__;
LAB_0227aab8:
        uVar13 = *puVar11;
        local_48 = CONCAT62(local_48._2_6_,uVar4);
      }
    }
    else {
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0403f2cc(*(undefined8 *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerDownEvent>__
                   ,0);
      uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x18),0);
      uVar3 = FUN_04026b70(uVar13,param_2,0);
      puVar11 = (undefined8 *)Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__;
LAB_0227a994:
      uVar13 = *puVar11;
      local_48 = CONCAT71(local_48._1_7_,uVar3);
    }
  }
  else {
    uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x18),0);
    uVar5 = FUN_04026cc0(uVar13,param_2,0);
    local_48 = CONCAT44(local_48._4_4_,uVar5);
    puVar11 = (undefined8 *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
LAB_0227a6e0:
    uVar13 = *puVar11;
  }
  lVar8 = thunk_FUN_01f113fc(uVar13,&local_48);
LAB_0227a6f0:
  lVar12 = *(long *)(*plVar14 + 8);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01ecaf44(lVar12);
  }
  if (lVar8 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = thunk_FUN_01f116d0(lVar8,lVar12);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(lVar8,lVar12);
    }
  }
  return lVar9;
}


