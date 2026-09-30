/*
FUNCTION_NAME: FUN_02161cdc
ENTRY_POINT: 02161cdc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_16;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


uint FUN_02161cdc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long *plVar7;
  byte *pbVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 *__s;
  ulong uVar12;
  uint uVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined1 auStack_80 [8];
  long local_78;
  ulong local_70;
  long local_68;
  
  local_78 = tpidr_el0;
  local_68 = *(long *)(local_78 + 0x28);
  plVar15 = (long *)(param_4 + 0x38);
  if (*plVar15 == 0) {
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
    if (*(long *)(param_4 + 0x38) != 0) goto LAB_02161e74;
    FUN_01ecafa0(param_4);
    if (param_3 == 0) goto LAB_02161ed0;
LAB_02161e78:
    uVar12 = *(ulong *)(param_3 + 0x18);
    if (uVar12 == 0) goto LAB_02161ed4;
    uVar11 = -(uVar12 >> 0x1f & 1) & 0xfffffff800000000 | (uVar12 & 0xffffffff) << 3;
    if ((uVar12 & 0xffffffff) == 0) {
      __s = (undefined1 *)0x0;
    }
    else {
      __s = auStack_80 + -(uVar11 + 0xf & 0xfffffffffffffff0);
    }
    memset(__s,0,uVar11);
    if ((int)uVar12 < 0) {
      FUN_0358adfc(0);
    }
  }
  else {
LAB_02161e74:
    if (param_3 != 0) goto LAB_02161e78;
LAB_02161ed0:
    uVar12 = 0;
LAB_02161ed4:
    __s = (undefined1 *)0x0;
  }
  uVar12 = uVar12 & 0xffffffff;
  FUN_0401e8c8(param_3,__s,uVar12,0);
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  uVar14 = *(undefined8 *)*plVar15;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar14 = FUN_03579868(uVar14,0);
  puVar2 = Method_Oculus_Platform_CAPI_IntPtrToByteArray__;
  if (*(int *)(*(long *)Method_Oculus_Platform_CAPI_IntPtrToByteArray__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar11 = FUN_0402d484(uVar14,0);
  uVar14 = *(undefined8 *)*plVar15;
  if ((uVar11 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar14 = FUN_03579868(uVar14,0);
    uVar6 = FUN_03579868(*(undefined8 *)
                          Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                         ,0);
    uVar11 = FUN_03582560(uVar14,uVar6,0);
    if ((uVar11 & 1) == 0) {
      uVar14 = *(undefined8 *)*plVar15;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar14 = FUN_03579868(uVar14,0);
      uVar6 = FUN_03579868(*(undefined8 *)
                            Method_System_Runtime_Remoting_Channels_CADSerializer_DeserializeMessage__
                           ,0);
      uVar11 = FUN_03582560(uVar14,uVar6,0);
      if ((uVar11 & 1) == 0) {
        uVar14 = *(undefined8 *)*plVar15;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar14 = FUN_03579868(uVar14,0);
        uVar6 = FUN_03579868(*(undefined8 *)
                              Method_Oculus_Platform_CAPI_DictionaryToOVRKeyValuePairs__,0);
        uVar11 = FUN_03582560(uVar14,uVar6,0);
        if ((uVar11 & 1) == 0) {
          uVar14 = *(undefined8 *)
                    Method_System_Globalization_CalendarData_InitializeAbbreviatedEraNames__;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar14 = FUN_03579868(uVar14,0);
          uVar6 = FUN_03579868(*(undefined8 *)*plVar15,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar11 = FUN_0402d498(uVar14,uVar6,0);
          if ((uVar11 & 1) == 0) {
            uVar14 = *(undefined8 *)*plVar15;
            lVar10 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            plVar15 = (long *)FUN_03579868(uVar14,0);
            if (plVar15 == (long *)0x0) {
              uVar14 = thunk_FUN_01efb3a4(
                                         Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncConnection>__
                                         );
              uVar6 = 0;
            }
            else {
              uVar14 = thunk_FUN_01efb3a4(
                                         Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncConnection>__
                                         );
              uVar6 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
            }
            uVar9 = thunk_FUN_01efb3a4(
                                      Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                                      );
            uVar14 = FUN_0340ebc0(uVar14,uVar6,uVar9,0);
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
            uVar6 = thunk_FUN_01f117cc();
            Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar6,uVar14,0);
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar6,param_4);
          }
          uVar14 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
          uVar14 = UnityEngine_UIElements_ReusableTreeViewItem__remove_onToggleValueChanged
                             (uVar14,param_2,__s,uVar12,0);
          uVar13 = FUN_02159888(uVar14,*(undefined8 *)(*plVar15 + 0x10));
          goto LAB_021629b0;
        }
        uVar14 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
        uVar14 = UnityEngine_UIElements_ReusableTreeViewItem__remove_onToggleValueChanged
                           (uVar14,param_2,__s,uVar12,0);
        uVar11 = FUN_035ad140(uVar14,0,0);
        if ((uVar11 & 1) != 0) goto LAB_021623e8;
        plVar7 = (long *)FUN_0402bd14(uVar14,0);
        lVar10 = *(long *)(*plVar15 + 8);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01ecaf44(lVar10);
        }
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(*plVar7 + 0x40) != *(long *)(lVar10 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar7);
        }
        pbVar8 = (byte *)thunk_FUN_01f11920(plVar7);
      }
      else {
        uVar14 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
        uVar14 = UnityEngine_UIElements_ReusableTreeViewItem__remove_onToggleValueChanged
                           (uVar14,param_2,__s,uVar12,0);
        uVar11 = FUN_035ad140(uVar14,0,0);
        if ((uVar11 & 1) != 0) {
LAB_021623e8:
          uVar13 = 0;
          goto LAB_021629b0;
        }
        plVar7 = (long *)FUN_0402d2f0(uVar14,0);
        lVar10 = *(long *)(*plVar15 + 8);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01ecaf44(lVar10);
        }
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(*plVar7 + 0x40) != *(long *)(lVar10 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar7);
        }
        pbVar8 = (byte *)thunk_FUN_01f11920(plVar7);
      }
    }
    else {
      uVar14 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
      plVar7 = (long *)FUN_040282c0(uVar14,param_2,__s,uVar12,0);
      lVar10 = *(long *)(*plVar15 + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01ecaf44(lVar10);
      }
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(*plVar7 + 0x40) != *(long *)(lVar10 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar7);
      }
      pbVar8 = (byte *)thunk_FUN_01f11920(plVar7);
    }
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar14 = FUN_03579868(uVar14,0);
    uVar6 = FUN_03579868(*(undefined8 *)
                          Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__,0);
    uVar11 = FUN_03582560(uVar14,uVar6,0);
    if ((uVar11 & 1) == 0) {
      uVar14 = *(undefined8 *)*plVar15;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar14 = FUN_03579868(uVar14,0);
      uVar6 = FUN_03579868(*(undefined8 *)Method_Oculus_Platform_CAPI_StringToNative__,0);
      uVar11 = FUN_03582560(uVar14,uVar6,0);
      if ((uVar11 & 1) == 0) {
        uVar14 = *(undefined8 *)*plVar15;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar14 = FUN_03579868(uVar14,0);
        uVar6 = FUN_03579868(*(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                             ,0);
        uVar11 = FUN_03582560(uVar14,uVar6,0);
        if ((uVar11 & 1) == 0) {
          uVar14 = *(undefined8 *)*plVar15;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar14 = FUN_03579868(uVar14,0);
          uVar6 = FUN_03579868(*(undefined8 *)
                                Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
                               ,0);
          uVar11 = FUN_03582560(uVar14,uVar6,0);
          if ((uVar11 & 1) == 0) {
            uVar14 = *(undefined8 *)*plVar15;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar14 = FUN_03579868(uVar14,0);
            uVar6 = FUN_03579868(*(undefined8 *)
                                  Method_System_Globalization_Calendar_ToFourDigitYear__,0);
            uVar11 = FUN_03582560(uVar14,uVar6,0);
            if ((uVar11 & 1) == 0) {
              uVar14 = *(undefined8 *)*plVar15;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar14 = FUN_03579868(uVar14,0);
              uVar6 = FUN_03579868(*(undefined8 *)
                                    Method_System_Globalization_CalendarData_GetJapaneseEraNames__,0
                                  );
              uVar11 = FUN_03582560(uVar14,uVar6,0);
              if ((uVar11 & 1) == 0) {
                uVar14 = *(undefined8 *)*plVar15;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar14 = FUN_03579868(uVar14,0);
                uVar6 = FUN_03579868(*(undefined8 *)
                                      Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                                     ,0);
                uVar11 = FUN_03582560(uVar14,uVar6,0);
                if ((uVar11 & 1) == 0) {
                  uVar14 = *(undefined8 *)*plVar15;
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar14 = FUN_03579868(uVar14,0);
                  uVar6 = FUN_03579868(*(undefined8 *)Method_Unity_VisualScripting_Cache_Store__,0);
                  uVar11 = FUN_03582560(uVar14,uVar6,0);
                  if ((uVar11 & 1) == 0) {
                    uVar14 = *(undefined8 *)*plVar15;
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar14 = FUN_03579868(uVar14,0);
                    uVar6 = FUN_03579868(*(undefined8 *)
                                          Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__
                                         ,0);
                    uVar11 = FUN_03582560(uVar14,uVar6,0);
                    if ((uVar11 & 1) == 0) goto LAB_021623e8;
                    uVar14 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
                    uVar4 = FUN_04020ab4(uVar14,param_2,__s,uVar12,0);
                    local_70 = CONCAT62(local_70._2_6_,uVar4);
                    plVar7 = (long *)thunk_FUN_01f113fc(*(undefined8 *)
                                                         Method_System_IO_CStreamReader_Read__,
                                                        &local_70);
                    lVar10 = *(long *)(*plVar15 + 8);
                    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                      lVar10 = FUN_01ecaf44(lVar10);
                    }
                    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    if (*(long *)(*plVar7 + 0x40) != *(long *)(lVar10 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08cfc(plVar7);
                    }
                    pbVar8 = (byte *)thunk_FUN_01f11920(plVar7);
                  }
                  else {
                    uVar14 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
                    local_70 = FUN_040209a8(uVar14,param_2,__s,uVar12,0);
                    plVar7 = (long *)thunk_FUN_01f113fc(*(undefined8 *)
                                                                                                                  
                                                  Method_System_Globalization_Calendar_TimeToTicks__
                                                  ,&local_70);
                    lVar10 = *(long *)(*plVar15 + 8);
                    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                      lVar10 = FUN_01ecaf44(lVar10);
                    }
                    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    if (*(long *)(*plVar7 + 0x40) != *(long *)(lVar10 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08cfc(plVar7);
                    }
                    pbVar8 = (byte *)thunk_FUN_01f11920(plVar7);
                  }
                }
                else {
                  uVar14 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
                  uVar5 = FUN_0402089c(uVar14,param_2,__s,uVar12,0);
                  local_70 = CONCAT44(local_70._4_4_,uVar5);
                  plVar7 = (long *)thunk_FUN_01f113fc(*(undefined8 *)
                                                                                                              
                                                  Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                                                  ,&local_70);
                  lVar10 = *(long *)(*plVar15 + 8);
                  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                    lVar10 = FUN_01ecaf44(lVar10);
                  }
                  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  if (*(long *)(*plVar7 + 0x40) != *(long *)(lVar10 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08cfc(plVar7);
                  }
                  pbVar8 = (byte *)thunk_FUN_01f11920(plVar7);
                }
              }
              else {
                uVar14 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
                local_70 = FUN_0402079c(uVar14,param_2,__s,uVar12,0);
                plVar7 = (long *)thunk_FUN_01f113fc(*(undefined8 *)
                                                                                                          
                                                  Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__
                                                  ,&local_70);
                lVar10 = *(long *)(*plVar15 + 8);
                if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                  lVar10 = FUN_01ecaf44(lVar10);
                }
                if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                if (*(long *)(*plVar7 + 0x40) != *(long *)(lVar10 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08cfc(plVar7);
                }
                pbVar8 = (byte *)thunk_FUN_01f11920(plVar7);
              }
            }
            else {
              uVar14 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
              uVar4 = FUN_0402059c(uVar14,param_2,__s,uVar12,0);
              local_70 = CONCAT62(local_70._2_6_,uVar4);
              plVar7 = (long *)thunk_FUN_01f113fc(*(undefined8 *)
                                                                                                      
                                                  Method_System_Globalization_Calendar_VerifyWritable__
                                                  ,&local_70);
              lVar10 = *(long *)(*plVar15 + 8);
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_01ecaf44(lVar10);
              }
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if (*(long *)(*plVar7 + 0x40) != *(long *)(lVar10 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc(plVar7);
              }
              pbVar8 = (byte *)thunk_FUN_01f11920(plVar7);
            }
          }
          else {
            uVar14 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
            uVar3 = FUN_0402049c(uVar14,param_2,__s,uVar12,0);
            local_70 = CONCAT71(local_70._1_7_,uVar3);
            plVar7 = (long *)thunk_FUN_01f113fc(*(undefined8 *)
                                                 Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
                                                ,&local_70);
            lVar10 = *(long *)(*plVar15 + 8);
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_01ecaf44(lVar10);
            }
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*(long *)(*plVar7 + 0x40) != *(long *)(lVar10 + 0x40)) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc(plVar7);
            }
            pbVar8 = (byte *)thunk_FUN_01f11920(plVar7);
          }
        }
        else {
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0403f2cc(*(undefined8 *)
                        Method_Oculus_Platform_Callback_SetNotificationCallback<LivestreamingStatus>__
                       ,0);
          uVar14 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
          uVar3 = FUN_0402049c(uVar14,param_2,__s,uVar12,0);
          local_70 = CONCAT71(local_70._1_7_,uVar3);
          plVar7 = (long *)thunk_FUN_01f113fc(*(undefined8 *)
                                               Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__
                                              ,&local_70);
          lVar10 = *(long *)(*plVar15 + 8);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01ecaf44(lVar10);
          }
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(long *)(*plVar7 + 0x40) != *(long *)(lVar10 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar7);
          }
          pbVar8 = (byte *)thunk_FUN_01f11920(plVar7);
        }
      }
      else {
        uVar14 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
        uVar3 = FUN_04020bb8(uVar14,param_2,__s,uVar12,0);
        local_70 = CONCAT71(local_70._1_7_,uVar3) & 0xffffffffffffff01;
        plVar7 = (long *)thunk_FUN_01f113fc(*(undefined8 *)
                                             Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                                            ,&local_70);
        lVar10 = *(long *)(*plVar15 + 8);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01ecaf44(lVar10);
        }
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(*plVar7 + 0x40) != *(long *)(lVar10 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar7);
        }
        pbVar8 = (byte *)thunk_FUN_01f11920(plVar7);
      }
    }
    else {
      uVar14 = FUN_04029138(*(undefined8 *)(param_1 + 0x10),0);
      uVar5 = FUN_0402069c(uVar14,param_2,__s,uVar12,0);
      local_70 = CONCAT44(local_70._4_4_,uVar5);
      plVar7 = (long *)thunk_FUN_01f113fc(*(undefined8 *)
                                           Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                          ,&local_70);
      lVar10 = *(long *)(*plVar15 + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01ecaf44(lVar10);
      }
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(*plVar7 + 0x40) != *(long *)(lVar10 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar7);
      }
      pbVar8 = (byte *)thunk_FUN_01f11920(plVar7);
    }
  }
  uVar13 = (uint)*pbVar8;
LAB_021629b0:
  thunk_FUN_0401ea44(param_3,__s,uVar12,0);
  if (*(long *)(local_78 + 0x28) == local_68) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


