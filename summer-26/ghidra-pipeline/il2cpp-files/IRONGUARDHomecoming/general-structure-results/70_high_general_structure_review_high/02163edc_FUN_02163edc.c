/*
FUNCTION_NAME: FUN_02163edc
ENTRY_POINT: 02163edc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_16;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_02163edc(long param_1,undefined8 param_2,long param_3,void *param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  void *pvVar6;
  void *__s;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong __n;
  long lVar10;
  void *pvVar11;
  ulong __n_00;
  ulong uVar12;
  undefined8 uVar13;
  void *pvVar14;
  long *plVar15;
  undefined8 local_c0;
  void *local_b8;
  long local_b0;
  ulong local_a8;
  void *pvStack_a0;
  void *local_98;
  void *local_90;
  long local_88;
  undefined8 *local_80;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  
  local_b0 = tpidr_el0;
  local_68 = *(long *)(local_b0 + 0x28);
  plVar15 = (long *)(param_5 + 0x38);
  lVar10 = *plVar15;
  local_c0 = param_2;
  local_b8 = param_4;
  local_88 = param_3;
  if (lVar10 == 0) {
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
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Callback_SetNotificationCallback<HttpTransferUpdate>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<LivestreamingStatus>__
                      );
    lVar10 = *(long *)(param_5 + 0x38);
    if (lVar10 == 0) {
      FUN_01ecafa0(param_5);
      lVar10 = *(long *)(param_5 + 0x38);
    }
  }
  __n_00 = (ulong)*(uint *)(*(long *)(lVar10 + 8) + 0xfc);
  uVar12 = __n_00 + 0xf & 0x1fffffff0;
  local_90 = (void *)((long)&local_c0 - uVar12);
  pvVar6 = (void *)((long)local_90 - uVar12);
  local_98 = pvVar6;
  memset(pvVar6,0,__n_00);
  pvVar6 = (void *)((long)pvVar6 - uVar12);
  memset(pvVar6,0,__n_00);
  pvVar11 = (void *)((long)pvVar6 - uVar12);
  memset(pvVar11,0,__n_00);
  pvVar14 = (void *)((long)pvVar11 - uVar12);
  memset(pvVar14,0,__n_00);
  if (local_88 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(ulong *)(local_88 + 0x18);
    if (uVar12 != 0) {
      __n = -(uVar12 >> 0x1f & 1) & 0xfffffff800000000 | (uVar12 & 0xffffffff) << 3;
      if ((uVar12 & 0xffffffff) == 0) {
        __s = (void *)0x0;
      }
      else {
        __s = (void *)((long)pvVar14 - (__n + 0xf & 0xfffffffffffffff0));
      }
      memset(__s,0,__n);
      if ((int)uVar12 < 0) {
        FUN_0358adfc(0);
      }
      goto LAB_02164170;
    }
  }
  __s = (void *)0x0;
LAB_02164170:
  local_a8 = uVar12 & 0xffffffff;
  pvStack_a0 = __s;
  FUN_0401e8c8(local_88,__s,local_a8,0);
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  uVar13 = *(undefined8 *)*plVar15;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar13 = FUN_03579868(uVar13,0);
  puVar2 = Method_Oculus_Platform_CAPI_IntPtrToByteArray__;
  if (*(int *)(*(long *)Method_Oculus_Platform_CAPI_IntPtrToByteArray__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar12 = FUN_0402d484(uVar13,0);
  uVar13 = *(undefined8 *)*plVar15;
  if ((uVar12 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar13 = FUN_03579868(uVar13,0);
    uVar7 = FUN_03579868(*(undefined8 *)
                          Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                         ,0);
    uVar12 = FUN_03582560(uVar13,uVar7,0);
    if ((uVar12 & 1) == 0) {
      uVar13 = *(undefined8 *)*plVar15;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar13 = FUN_03579868(uVar13,0);
      uVar7 = FUN_03579868(*(undefined8 *)
                            Method_System_Runtime_Remoting_Channels_CADSerializer_DeserializeMessage__
                           ,0);
      uVar12 = FUN_03582560(uVar13,uVar7,0);
      if ((uVar12 & 1) == 0) {
        uVar13 = *(undefined8 *)*plVar15;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar13 = FUN_03579868(uVar13,0);
        uVar7 = FUN_03579868(*(undefined8 *)
                              Method_Oculus_Platform_CAPI_DictionaryToOVRKeyValuePairs__,0);
        uVar12 = FUN_03582560(uVar13,uVar7,0);
        if ((uVar12 & 1) == 0) {
          uVar13 = *(undefined8 *)
                    Method_System_Globalization_CalendarData_InitializeAbbreviatedEraNames__;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar13 = FUN_03579868(uVar13,0);
          uVar7 = FUN_03579868(*(undefined8 *)*plVar15,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar12 = FUN_0402d498(uVar13,uVar7,0);
          if ((uVar12 & 1) == 0) {
            uVar13 = *(undefined8 *)*plVar15;
            lVar10 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            plVar15 = (long *)FUN_03579868(uVar13,0);
            if (plVar15 == (long *)0x0) {
              uVar13 = thunk_FUN_01efb3a4(
                                         Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncConnection>__
                                         );
              uVar7 = 0;
            }
            else {
              uVar13 = thunk_FUN_01efb3a4(
                                         Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncConnection>__
                                         );
              uVar7 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
            }
            uVar8 = thunk_FUN_01efb3a4(
                                      Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                                      );
            uVar13 = FUN_0340ebc0(uVar13,uVar7,uVar8,0);
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
            uVar7 = thunk_FUN_01f117cc();
            Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar7,uVar13,0);
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar7,param_5);
          }
          uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
          uStack_70 = UnityEngine_UIElements_ReusableTreeViewItem__remove_onToggleValueChanged
                                (uVar13,local_c0,pvStack_a0,local_a8,0);
          pvVar14 = local_90;
          local_80 = &uStack_70;
          puVar9 = *(undefined8 **)(*plVar15 + 0x10);
          local_78 = local_90;
          (*(code *)puVar9[2])(*puVar9,puVar9,0,&local_80,local_90);
        }
        else {
          uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
          uVar13 = UnityEngine_UIElements_ReusableTreeViewItem__remove_onToggleValueChanged
                             (uVar13,local_c0,pvStack_a0,local_a8,0);
          uVar12 = FUN_035ad140(uVar13,0,0);
          if ((uVar12 & 1) == 0) {
            uVar13 = FUN_0402bd14(uVar13,0);
            lVar10 = *(long *)(*plVar15 + 8);
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_01ecaf44(lVar10);
            }
            pvVar11 = (void *)FUN_01f08934(uVar13,lVar10,local_90);
          }
          else {
            memset(pvVar6,0,__n_00);
            pvVar11 = local_90;
            memcpy(local_90,pvVar6,__n_00);
          }
          memcpy(pvVar14,pvVar11,__n_00);
        }
      }
      else {
        uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
        uVar13 = UnityEngine_UIElements_ReusableTreeViewItem__remove_onToggleValueChanged
                           (uVar13,local_c0,pvStack_a0,local_a8,0);
        uVar12 = FUN_035ad140(uVar13,0,0);
        if ((uVar12 & 1) == 0) {
          uVar13 = FUN_0402d2f0(uVar13,0);
          lVar10 = *(long *)(*plVar15 + 8);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01ecaf44(lVar10);
          }
          pvVar14 = (void *)FUN_01f08934(uVar13,lVar10,local_90);
        }
        else {
          memset(pvVar6,0,__n_00);
          pvVar14 = local_90;
          memcpy(local_90,pvVar6,__n_00);
        }
        memcpy(pvVar11,pvVar14,__n_00);
        pvVar14 = pvVar11;
      }
    }
    else {
      uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
      uVar13 = FUN_040282c0(uVar13,local_c0,pvStack_a0,local_a8,0);
      lVar10 = *(long *)(*plVar15 + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01ecaf44(lVar10);
      }
      pvVar14 = (void *)FUN_01f08934(uVar13,lVar10,local_90);
    }
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar13 = FUN_03579868(uVar13,0);
    uVar7 = FUN_03579868(*(undefined8 *)
                          Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__,0);
    uVar12 = FUN_03582560(uVar13,uVar7,0);
    if ((uVar12 & 1) == 0) {
      uVar13 = *(undefined8 *)*plVar15;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar13 = FUN_03579868(uVar13,0);
      uVar7 = FUN_03579868(*(undefined8 *)Method_Oculus_Platform_CAPI_StringToNative__,0);
      uVar12 = FUN_03582560(uVar13,uVar7,0);
      if ((uVar12 & 1) == 0) {
        uVar13 = *(undefined8 *)*plVar15;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar13 = FUN_03579868(uVar13,0);
        uVar7 = FUN_03579868(*(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                             ,0);
        uVar12 = FUN_03582560(uVar13,uVar7,0);
        if ((uVar12 & 1) == 0) {
          uVar13 = *(undefined8 *)*plVar15;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar13 = FUN_03579868(uVar13,0);
          uVar7 = FUN_03579868(*(undefined8 *)
                                Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
                               ,0);
          uVar12 = FUN_03582560(uVar13,uVar7,0);
          if ((uVar12 & 1) == 0) {
            uVar13 = *(undefined8 *)*plVar15;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar13 = FUN_03579868(uVar13,0);
            uVar7 = FUN_03579868(*(undefined8 *)
                                  Method_System_Globalization_Calendar_ToFourDigitYear__,0);
            uVar12 = FUN_03582560(uVar13,uVar7,0);
            if ((uVar12 & 1) == 0) {
              uVar13 = *(undefined8 *)*plVar15;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar13 = FUN_03579868(uVar13,0);
              uVar7 = FUN_03579868(*(undefined8 *)
                                    Method_System_Globalization_CalendarData_GetJapaneseEraNames__,0
                                  );
              uVar12 = FUN_03582560(uVar13,uVar7,0);
              if ((uVar12 & 1) == 0) {
                uVar13 = *(undefined8 *)*plVar15;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar13 = FUN_03579868(uVar13,0);
                uVar7 = FUN_03579868(*(undefined8 *)
                                      Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                                     ,0);
                uVar12 = FUN_03582560(uVar13,uVar7,0);
                if ((uVar12 & 1) == 0) {
                  uVar13 = *(undefined8 *)*plVar15;
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar13 = FUN_03579868(uVar13,0);
                  uVar7 = FUN_03579868(*(undefined8 *)Method_Unity_VisualScripting_Cache_Store__,0);
                  uVar12 = FUN_03582560(uVar13,uVar7,0);
                  if ((uVar12 & 1) == 0) {
                    uVar13 = *(undefined8 *)*plVar15;
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar13 = FUN_03579868(uVar13,0);
                    uVar7 = FUN_03579868(*(undefined8 *)
                                          Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__
                                         ,0);
                    uVar12 = FUN_03582560(uVar13,uVar7,0);
                    if ((uVar12 & 1) == 0) {
                      memset(pvVar6,0,__n_00);
                      pvVar14 = local_90;
                      memcpy(local_90,pvVar6,__n_00);
                    }
                    else {
                      uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
                      uVar4 = FUN_04020ab4(uVar13,local_c0,pvStack_a0,local_a8,0);
                      local_80 = (undefined8 *)CONCAT62(local_80._2_6_,uVar4);
                      uVar13 = thunk_FUN_01f113fc(*(undefined8 *)
                                                   Method_System_IO_CStreamReader_Read__,&local_80);
                      lVar10 = *(long *)(*plVar15 + 8);
                      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                        lVar10 = FUN_01ecaf44(lVar10);
                      }
                      pvVar14 = (void *)FUN_01f08934(uVar13,lVar10,local_90);
                    }
                  }
                  else {
                    uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
                    local_80 = (undefined8 *)FUN_040209a8(uVar13,local_c0,pvStack_a0,local_a8,0);
                    uVar13 = thunk_FUN_01f113fc(*(undefined8 *)
                                                 Method_System_Globalization_Calendar_TimeToTicks__,
                                                &local_80);
                    lVar10 = *(long *)(*plVar15 + 8);
                    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                      lVar10 = FUN_01ecaf44(lVar10);
                    }
                    pvVar14 = (void *)FUN_01f08934(uVar13,lVar10,local_90);
                  }
                }
                else {
                  uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
                  uVar5 = FUN_0402089c(uVar13,local_c0,pvStack_a0,local_a8,0);
                  local_80 = (undefined8 *)CONCAT44(local_80._4_4_,uVar5);
                  uVar13 = thunk_FUN_01f113fc(*(undefined8 *)
                                               Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                                              ,&local_80);
                  lVar10 = *(long *)(*plVar15 + 8);
                  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                    lVar10 = FUN_01ecaf44(lVar10);
                  }
                  pvVar14 = (void *)FUN_01f08934(uVar13,lVar10,local_90);
                }
              }
              else {
                uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
                local_80 = (undefined8 *)FUN_0402079c(uVar13,local_c0,pvStack_a0,local_a8,0);
                uVar13 = thunk_FUN_01f113fc(*(undefined8 *)
                                             Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__
                                            ,&local_80);
                lVar10 = *(long *)(*plVar15 + 8);
                if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                  lVar10 = FUN_01ecaf44(lVar10);
                }
                pvVar14 = (void *)FUN_01f08934(uVar13,lVar10,local_90);
              }
            }
            else {
              uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
              uVar4 = FUN_0402059c(uVar13,local_c0,pvStack_a0,local_a8,0);
              local_80 = (undefined8 *)CONCAT62(local_80._2_6_,uVar4);
              uVar13 = thunk_FUN_01f113fc(*(undefined8 *)
                                           Method_System_Globalization_Calendar_VerifyWritable__,
                                          &local_80);
              lVar10 = *(long *)(*plVar15 + 8);
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_01ecaf44(lVar10);
              }
              pvVar14 = (void *)FUN_01f08934(uVar13,lVar10,local_90);
            }
          }
          else {
            uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
            uVar3 = FUN_0402049c(uVar13,local_c0,pvStack_a0,local_a8,0);
            local_80 = (undefined8 *)CONCAT71(local_80._1_7_,uVar3);
            uVar13 = thunk_FUN_01f113fc(*(undefined8 *)
                                         Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
                                        ,&local_80);
            lVar10 = *(long *)(*plVar15 + 8);
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_01ecaf44(lVar10);
            }
            pvVar14 = (void *)FUN_01f08934(uVar13,lVar10,local_90);
          }
        }
        else {
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0403f2cc(*(undefined8 *)
                        Method_Oculus_Platform_Callback_SetNotificationCallback<LivestreamingStatus>__
                       ,0);
          uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
          uVar3 = FUN_0402049c(uVar13,local_c0,pvStack_a0,local_a8,0);
          local_80 = (undefined8 *)CONCAT71(local_80._1_7_,uVar3);
          uVar13 = thunk_FUN_01f113fc(*(undefined8 *)
                                       Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__
                                      ,&local_80);
          lVar10 = *(long *)(*plVar15 + 8);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01ecaf44(lVar10);
          }
          pvVar14 = (void *)FUN_01f08934(uVar13,lVar10,local_90);
        }
      }
      else {
        uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
        uVar3 = FUN_04020bb8(uVar13,local_c0,pvStack_a0,local_a8,0);
        local_80 = (undefined8 *)(CONCAT71(local_80._1_7_,uVar3) & 0xffffffffffffff01);
        uVar13 = thunk_FUN_01f113fc(*(undefined8 *)
                                     Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                                    ,&local_80);
        lVar10 = *(long *)(*plVar15 + 8);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01ecaf44(lVar10);
        }
        pvVar14 = (void *)FUN_01f08934(uVar13,lVar10,local_90);
      }
    }
    else {
      uVar13 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
      uVar5 = FUN_0402069c(uVar13,local_c0,pvStack_a0,local_a8,0);
      local_80 = (undefined8 *)CONCAT44(local_80._4_4_,uVar5);
      uVar13 = thunk_FUN_01f113fc(*(undefined8 *)
                                   Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                  ,&local_80);
      lVar10 = *(long *)(*plVar15 + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01ecaf44(lVar10);
      }
      pvVar14 = (void *)FUN_01f08934(uVar13,lVar10,local_90);
    }
  }
  memcpy(local_98,pvVar14,__n_00);
  thunk_FUN_0401ea44(local_88,pvStack_a0,local_a8,0);
  pvVar14 = local_90;
  memcpy(local_90,local_98,__n_00);
  memcpy(local_b8,pvVar14,__n_00);
  if (*(long *)(local_b0 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


