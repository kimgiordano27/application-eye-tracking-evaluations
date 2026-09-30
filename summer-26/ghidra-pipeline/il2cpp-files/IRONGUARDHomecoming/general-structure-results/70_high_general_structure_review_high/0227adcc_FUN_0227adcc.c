/*
FUNCTION_NAME: FUN_0227adcc
ENTRY_POINT: 0227adcc
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


void FUN_0227adcc(long param_1,undefined8 param_2,void *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined8 uVar7;
  void *__src;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong __n;
  ulong uVar12;
  long lVar13;
  void *__dest;
  void *__src_00;
  long *plVar14;
  void *pvVar15;
  void *pvVar16;
  long local_b0;
  undefined8 local_a8;
  void *local_a0;
  void *local_98;
  void *local_90;
  long lStack_88;
  undefined8 *local_80;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lStack_88 = tpidr_el0;
  local_68 = *(long *)(lStack_88 + 0x28);
  plVar14 = (long *)(param_4 + 0x38);
  puVar10 = (undefined8 *)*plVar14;
  local_b0 = param_1;
  local_a8 = param_2;
  local_90 = param_3;
  if (puVar10 == (undefined8 *)0x0) {
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
    puVar10 = *(undefined8 **)(param_4 + 0x38);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_01ecafa0(param_4);
      puVar10 = *(undefined8 **)(param_4 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(puVar10[1] + 0xfc);
  uVar12 = __n + 0xf & 0x1fffffff0;
  local_98 = (void *)((long)&local_b0 - uVar12);
  pvVar6 = (void *)((long)local_98 - uVar12);
  local_a0 = pvVar6;
  memset(pvVar6,0,__n);
  pvVar6 = (void *)((long)pvVar6 - uVar12);
  memset(pvVar6,0,__n);
  pvVar16 = (void *)((long)pvVar6 - uVar12);
  memset(pvVar16,0,__n);
  pvVar15 = (void *)((long)pvVar16 - uVar12);
  memset(pvVar15,0,__n);
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  uVar11 = *puVar10;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar11 = FUN_03579868(uVar11,0);
  puVar2 = Method_Oculus_Platform_CAPI_IntPtrToByteArray__;
  if (*(int *)(*(long *)Method_Oculus_Platform_CAPI_IntPtrToByteArray__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_CAPI_IntPtrToByteArray__);
  }
  uVar12 = FUN_0402d484(uVar11,0);
  uVar11 = *(undefined8 *)*plVar14;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar1);
  }
  uVar11 = FUN_03579868(uVar11,0);
  if ((uVar12 & 1) == 0) {
    uVar7 = FUN_03579868(*(undefined8 *)
                          Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                         ,0);
    uVar12 = FUN_03582560(uVar11,uVar7,0);
    if ((uVar12 & 1) != 0) {
      uVar11 = FUN_04029138(*(undefined8 *)(local_b0 + 0x18),0);
      uVar11 = FUN_04026768(uVar11,local_a8,0);
      goto LAB_0227b1a4;
    }
    uVar11 = *(undefined8 *)*plVar14;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar11 = FUN_03579868(uVar11,0);
    uVar7 = FUN_03579868(*(undefined8 *)
                          Method_System_Runtime_Remoting_Channels_CADSerializer_DeserializeMessage__
                         ,0);
    uVar12 = FUN_03582560(uVar11,uVar7,0);
    if ((uVar12 & 1) == 0) {
      uVar11 = *(undefined8 *)*plVar14;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar11 = FUN_03579868(uVar11,0);
      uVar7 = FUN_03579868(*(undefined8 *)Method_Oculus_Platform_CAPI_DictionaryToOVRKeyValuePairs__
                           ,0);
      uVar12 = FUN_03582560(uVar11,uVar7,0);
      if ((uVar12 & 1) == 0) {
        uVar11 = *(undefined8 *)
                  Method_System_Globalization_CalendarData_InitializeAbbreviatedEraNames__;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar11 = FUN_03579868(uVar11,0);
        uVar7 = FUN_03579868(*(undefined8 *)*plVar14,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar2);
        }
        uVar12 = FUN_0402d498(uVar11,uVar7,0);
        if ((uVar12 & 1) == 0) {
          uVar11 = *(undefined8 *)*plVar14;
          lVar9 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          plVar14 = (long *)FUN_03579868(uVar11,0);
          uVar11 = thunk_FUN_01efb3a4(
                                     Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerLeaveEvent>__
                                     );
          uVar7 = 0;
          if (plVar14 != (long *)0x0) {
            uVar7 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
          }
          uVar8 = thunk_FUN_01efb3a4(
                                    Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                                    );
          uVar11 = FUN_0340ebc0(uVar11,uVar7,uVar8,0);
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
          uVar7 = thunk_FUN_01f117cc();
          Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar7,uVar11,0);
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar7,param_4);
        }
        uVar11 = FUN_04029138(*(undefined8 *)(local_b0 + 0x18),0);
        uStack_70 = FUN_040266c0(uVar11,local_a8,0);
        __src_00 = local_98;
        local_80 = &uStack_70;
        puVar10 = *(undefined8 **)(*plVar14 + 0x10);
        local_78 = local_98;
        (*(code *)puVar10[2])(*puVar10,puVar10,0,&local_80,local_98);
LAB_0227b604:
        pvVar6 = local_a0;
        memcpy(local_a0,__src_00,__n);
        lVar13 = lStack_88;
        __dest = local_90;
        goto LAB_0227b1e8;
      }
      uVar11 = FUN_04029138(*(undefined8 *)(local_b0 + 0x18),0);
      uVar11 = FUN_040266c0(uVar11,local_a8,0);
      uVar12 = FUN_035ad140(uVar11,0,0);
      pvVar16 = pvVar15;
      if ((uVar12 & 1) == 0) {
        uVar11 = FUN_0402bd14(uVar11,0);
        lVar9 = *(long *)(*plVar14 + 8);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_01ecaf44(lVar9);
        }
        lVar13 = lStack_88;
        __dest = local_90;
        __src_00 = local_98;
        pvVar6 = local_a0;
        __src = (void *)FUN_01f08934(uVar11,lVar9,local_98);
        memcpy(pvVar15,__src,__n);
      }
      else {
        memset(pvVar6,0,__n);
        __src_00 = local_98;
        memcpy(local_98,pvVar6,__n);
        memcpy(pvVar15,__src_00,__n);
        lVar13 = lStack_88;
        __dest = local_90;
        pvVar6 = local_a0;
      }
    }
    else {
      uVar11 = FUN_04029138(*(undefined8 *)(local_b0 + 0x18),0);
      uVar11 = FUN_040266c0(uVar11,local_a8,0);
      uVar12 = FUN_035ad140(uVar11,0,0);
      if ((uVar12 & 1) == 0) {
        uVar11 = FUN_0402d2f0(uVar11,0);
        lVar9 = *(long *)(*plVar14 + 8);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_01ecaf44(lVar9);
        }
        lVar13 = lStack_88;
        __dest = local_90;
        __src_00 = local_98;
        pvVar6 = local_a0;
        pvVar15 = (void *)FUN_01f08934(uVar11,lVar9,local_98);
        memcpy(pvVar16,pvVar15,__n);
      }
      else {
        memset(pvVar6,0,__n);
        __src_00 = local_98;
        memcpy(local_98,pvVar6,__n);
        memcpy(pvVar16,__src_00,__n);
        lVar13 = lStack_88;
        __dest = local_90;
        pvVar6 = local_a0;
      }
    }
  }
  else {
    uVar7 = FUN_03579868(*(undefined8 *)
                          Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__,0);
    uVar12 = FUN_03582560(uVar11,uVar7,0);
    if ((uVar12 & 1) == 0) {
      uVar11 = *(undefined8 *)*plVar14;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar11 = FUN_03579868(uVar11,0);
      uVar7 = FUN_03579868(*(undefined8 *)Method_Oculus_Platform_CAPI_StringToNative__,0);
      uVar12 = FUN_03582560(uVar11,uVar7,0);
      if ((uVar12 & 1) != 0) {
        uVar11 = FUN_04029138(*(undefined8 *)(local_b0 + 0x18),0);
        uVar3 = FUN_04026c18(uVar11,local_a8,0);
        local_80 = (undefined8 *)(CONCAT71(local_80._1_7_,uVar3) & 0xffffffffffffff01);
        puVar10 = (undefined8 *)
                  Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
        ;
        goto LAB_0227b194;
      }
      uVar11 = *(undefined8 *)*plVar14;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar11 = FUN_03579868(uVar11,0);
      uVar7 = FUN_03579868(*(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                           ,0);
      uVar12 = FUN_03582560(uVar11,uVar7,0);
      if ((uVar12 & 1) == 0) {
        uVar11 = *(undefined8 *)*plVar14;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar11 = FUN_03579868(uVar11,0);
        uVar7 = FUN_03579868(*(undefined8 *)
                              Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
                             ,0);
        uVar12 = FUN_03582560(uVar11,uVar7,0);
        if ((uVar12 & 1) != 0) {
          uVar11 = FUN_04029138(*(undefined8 *)(local_b0 + 0x18),0);
          uVar3 = FUN_04026b70(uVar11,local_a8,0);
          puVar10 = (undefined8 *)
                    Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
          ;
          goto LAB_0227b53c;
        }
        uVar11 = *(undefined8 *)*plVar14;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar11 = FUN_03579868(uVar11,0);
        uVar7 = FUN_03579868(*(undefined8 *)Method_System_Globalization_Calendar_ToFourDigitYear__,0
                            );
        uVar12 = FUN_03582560(uVar11,uVar7,0);
        if ((uVar12 & 1) == 0) {
          uVar11 = *(undefined8 *)*plVar14;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar11 = FUN_03579868(uVar11,0);
          uVar7 = FUN_03579868(*(undefined8 *)
                                Method_System_Globalization_CalendarData_GetJapaneseEraNames__,0);
          uVar12 = FUN_03582560(uVar11,uVar7,0);
          if ((uVar12 & 1) != 0) {
            uVar11 = FUN_04029138(*(undefined8 *)(local_b0 + 0x18),0);
            local_80 = (undefined8 *)FUN_04026a20(uVar11,local_a8,0);
            puVar10 = (undefined8 *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__
            ;
            goto LAB_0227b194;
          }
          uVar11 = *(undefined8 *)*plVar14;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar11 = FUN_03579868(uVar11,0);
          uVar7 = FUN_03579868(*(undefined8 *)
                                Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                               ,0);
          uVar12 = FUN_03582560(uVar11,uVar7,0);
          if ((uVar12 & 1) == 0) {
            uVar11 = *(undefined8 *)*plVar14;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar11 = FUN_03579868(uVar11,0);
            uVar7 = FUN_03579868(*(undefined8 *)Method_Unity_VisualScripting_Cache_Store__,0);
            uVar12 = FUN_03582560(uVar11,uVar7,0);
            if ((uVar12 & 1) == 0) {
              uVar11 = *(undefined8 *)*plVar14;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar11 = FUN_03579868(uVar11,0);
              uVar7 = FUN_03579868(*(undefined8 *)
                                    Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__
                                   ,0);
              uVar12 = FUN_03582560(uVar11,uVar7,0);
              if ((uVar12 & 1) == 0) {
                memset(pvVar6,0,__n);
                __src_00 = local_98;
                memcpy(local_98,pvVar6,__n);
                goto LAB_0227b604;
              }
              uVar11 = FUN_04029138(*(undefined8 *)(local_b0 + 0x18),0);
              uVar4 = FUN_04026810(uVar11,local_a8,0);
              puVar10 = (undefined8 *)Method_System_IO_CStreamReader_Read__;
              goto LAB_0227b6f4;
            }
            uVar11 = FUN_04029138(*(undefined8 *)(local_b0 + 0x18),0);
            local_80 = (undefined8 *)FUN_040268b8(uVar11,local_a8,0);
            puVar10 = (undefined8 *)Method_System_Globalization_Calendar_TimeToTicks__;
          }
          else {
            uVar11 = FUN_04029138(*(undefined8 *)(local_b0 + 0x18),0);
            uVar5 = FUN_0402696c(uVar11,local_a8,0);
            local_80 = (undefined8 *)CONCAT44(local_80._4_4_,uVar5);
            puVar10 = (undefined8 *)
                      Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
            ;
          }
          uVar11 = *puVar10;
        }
        else {
          uVar11 = FUN_04029138(*(undefined8 *)(local_b0 + 0x18),0);
          uVar4 = FUN_04026ac8(uVar11,local_a8,0);
          puVar10 = (undefined8 *)Method_System_Globalization_Calendar_VerifyWritable__;
LAB_0227b6f4:
          uVar11 = *puVar10;
          local_80 = (undefined8 *)CONCAT62(local_80._2_6_,uVar4);
        }
      }
      else {
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0403f2cc(*(undefined8 *)
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerDownEvent>__
                     ,0);
        uVar11 = FUN_04029138(*(undefined8 *)(local_b0 + 0x18),0);
        uVar3 = FUN_04026b70(uVar11,local_a8,0);
        puVar10 = (undefined8 *)Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__;
LAB_0227b53c:
        uVar11 = *puVar10;
        local_80 = (undefined8 *)CONCAT71(local_80._1_7_,uVar3);
      }
    }
    else {
      uVar11 = FUN_04029138(*(undefined8 *)(local_b0 + 0x18),0);
      uVar5 = FUN_04026cc0(uVar11,local_a8,0);
      local_80 = (undefined8 *)CONCAT44(local_80._4_4_,uVar5);
      puVar10 = (undefined8 *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
LAB_0227b194:
      uVar11 = *puVar10;
    }
    uVar11 = thunk_FUN_01f113fc(uVar11,&local_80);
LAB_0227b1a4:
    lVar9 = *(long *)(*plVar14 + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    lVar13 = lStack_88;
    __dest = local_90;
    __src_00 = local_98;
    pvVar6 = local_a0;
    pvVar16 = (void *)FUN_01f08934(uVar11,lVar9,local_98);
  }
  memcpy(pvVar6,pvVar16,__n);
LAB_0227b1e8:
  memcpy(__src_00,pvVar6,__n);
  memcpy(__dest,__src_00,__n);
  if (*(long *)(lVar13 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


