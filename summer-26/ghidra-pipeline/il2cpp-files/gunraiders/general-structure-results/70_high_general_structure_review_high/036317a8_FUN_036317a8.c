/*
FUNCTION_NAME: FUN_036317a8
ENTRY_POINT: 036317a8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_036317a8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long local_38;
  
  local_38 = param_1;
  if ((DAT_045382d7 & 1) == 0) {
    FUN_01c5d288(Method_System_Globalization_CalendarData_GetJapaneseEraNames__);
    FUN_01c5d288(Method_System_Globalization_CalendarData_InitializeAbbreviatedEraNames__);
    FUN_01c5d288(Method_Calibration_OnSceneChange__);
    FUN_01c5d288(Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__)
    ;
    FUN_01c5d288(Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__)
    ;
    FUN_01c5d288(Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                );
    FUN_01c5d288(Method_Oculus_Platform_Callback_SetNotificationCallback<HttpTransferUpdate>__);
    FUN_01c5d288(
                Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                );
    FUN_01c5d288(Method_Oculus_Platform_Callback_SetNotificationCallback<LivestreamingStatus>__);
    FUN_01c5d288(Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncConnection>__);
    FUN_01c5d288(
                Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                );
    FUN_01c5d288(Method_Oculus_Platform_Callback_SetNotificationCallback<NetworkingPeer>__);
    FUN_01c5d288(Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__)
    ;
    FUN_01c5d288(Method_Oculus_Platform_Callback_SetNotificationCallback<PingResult>__);
    FUN_01c5d288(Method_Oculus_Platform_Callback_SetNotificationCallback<Room>__);
    FUN_01c5d288(Method_Oculus_Platform_Callback_SetNotificationCallback<RoomInviteNotification>__);
    FUN_01c5d288(Method_Oculus_Platform_Callback_SetNotificationCallback<string>__);
    FUN_01c5d288(Method_Oculus_Platform_Callback_SetNotificationCallback<SystemVoipState>__);
    FUN_01c5d288(PTR_DAT_042308f8);
    FUN_01c5d288(Method_Oculus_Platform_Callback_SetNotificationCallback__);
    FUN_01c5d288(
                Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<BillingServicesTransactionStateChangeResult>__
                );
    FUN_01c5d288(
                Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<CloudServicesSavedDataChangeResult>__
                );
    FUN_01c5d288(
                Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<CloudServicesSynchronizeResult>__
                );
    FUN_01c5d288(
                Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<DatePickerResult>__
                );
    FUN_01c5d288(
                Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<DeepLinkServicesDynamicLinkOpenResult>__
                );
    FUN_01c5d288(Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<int>__);
    FUN_01c5d288(
                Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<NetworkServicesHostReachabilityStatusChangeResult>__
                );
    FUN_01c5d288(
                Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<NetworkServicesInternetConnectivityStatusChangeResult>__
                );
    FUN_01c5d288(
                Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<NotificationServicesGetSettingsResult>__
                );
    FUN_01c5d288(PTR_DAT_04230900);
    FUN_01c5d288(
                Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<NotificationServicesNotificationReceivedResult>__
                );
    FUN_01c5d288(
                Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<NotificationSettings>__
                );
    FUN_01c5d288(Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<string>__);
    FUN_01c5d288(Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<WebView>__);
    FUN_01c5d288(
                Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<Nullable<DateTime>>__
                );
    FUN_01c5d288(
                Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<AddressBookReadContactsResult>__
                );
    FUN_01c5d288(
                Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<AddressBookRequestContactsAccessResult>__
                );
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(
                Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<BillingServicesInitializeStoreResult>__
                );
    FUN_01c5d288(
                Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<BillingServicesRestorePurchasesResult>__
                );
    FUN_01c5d288(OVRSimpleJSON_JSONArray_TypeInfo);
    DAT_045382d7 = 1;
  }
  puVar1 = 
  Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<BillingServicesRestorePurchasesResult>__
  ;
  if (param_1 == 0) {
LAB_03631dec:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if (*(int *)(param_1 + 0x18) < 0x12) {
    lVar3 = *(long *)
             Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<BillingServicesRestorePurchasesResult>__
    ;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar3 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_042308f8;
    lVar7 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar7 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar3 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar3 + 0xb8);
      lVar7 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04230900);
      FUN_02b67c90(lVar7,uVar8,
                   *(undefined8 *)
                    Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<BillingServicesInitializeStoreResult>__
                   ,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar7;
    }
    uVar4 = FUN_023376f8(param_1,lVar7,*(undefined8 *)puVar2);
    puVar1 = PTR_DAT_0422fb28;
    if ((uVar4 & 1) == 0) {
      if ((int)*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      uVar8 = *(undefined8 *)
               (param_1 + ((*(long *)(param_1 + 0x18) << 0x20) + -0x100000000 >> 0x1d) + 0x20);
      uVar9 = *(undefined8 *)OVRSimpleJSON_JSONArray_TypeInfo;
      if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar9 = FUN_032e04b8(uVar9,0);
      uVar4 = FUN_032e935c(uVar8,uVar9,0);
      if ((uVar4 & 1) != 0) {
        FUN_022c3c7c(&local_38,*(int *)(param_1 + 0x18) + -1,
                     *(undefined8 *)
                      Method_Oculus_Platform_Callback_SetNotificationCallback<SystemVoipState>__);
        if (local_38 == 0) goto LAB_03631dec;
        switch(*(undefined4 *)(local_38 + 0x18)) {
        case 0:
          uVar8 = *(undefined8 *)Method_Oculus_Platform_Callback_SetNotificationCallback<string>__;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          FUN_032e04b8(uVar8,0);
          return;
        case 1:
          lVar3 = *(long *)puVar1;
          puVar6 = (undefined8 *)
                   Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
          ;
          break;
        case 2:
          lVar3 = *(long *)puVar1;
          puVar6 = (undefined8 *)
                   Method_Oculus_Platform_Callback_SetNotificationCallback<LivestreamingStatus>__;
          break;
        case 3:
          lVar3 = *(long *)puVar1;
          puVar6 = (undefined8 *)
                   Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncConnection>__;
          break;
        case 4:
          lVar3 = *(long *)puVar1;
          puVar6 = (undefined8 *)
                   Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
          ;
          break;
        case 5:
          lVar3 = *(long *)puVar1;
          puVar6 = (undefined8 *)
                   Method_Oculus_Platform_Callback_SetNotificationCallback<NetworkingPeer>__;
          break;
        case 6:
          lVar3 = *(long *)puVar1;
          puVar6 = (undefined8 *)
                   Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
          ;
          break;
        case 7:
          lVar3 = *(long *)puVar1;
          puVar6 = (undefined8 *)
                   Method_Oculus_Platform_Callback_SetNotificationCallback<PingResult>__;
          break;
        case 8:
          lVar3 = *(long *)puVar1;
          puVar6 = (undefined8 *)Method_Oculus_Platform_Callback_SetNotificationCallback<Room>__;
          break;
        case 9:
          lVar3 = *(long *)puVar1;
          puVar6 = (undefined8 *)
                   Method_Oculus_Platform_Callback_SetNotificationCallback<RoomInviteNotification>__
          ;
          break;
        case 10:
          lVar3 = *(long *)puVar1;
          puVar6 = (undefined8 *)Method_System_Globalization_CalendarData_GetJapaneseEraNames__;
          break;
        case 0xb:
          lVar3 = *(long *)puVar1;
          puVar6 = (undefined8 *)
                   Method_System_Globalization_CalendarData_InitializeAbbreviatedEraNames__;
          break;
        case 0xc:
          lVar3 = *(long *)puVar1;
          puVar6 = (undefined8 *)Method_Calibration_OnSceneChange__;
          break;
        case 0xd:
          lVar3 = *(long *)puVar1;
          puVar6 = (undefined8 *)
                   Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
          ;
          break;
        case 0xe:
          lVar3 = *(long *)puVar1;
          puVar6 = (undefined8 *)
                   Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
          ;
          break;
        case 0xf:
          lVar3 = *(long *)puVar1;
          puVar6 = (undefined8 *)
                   Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
          ;
          break;
        case 0x10:
          lVar3 = *(long *)puVar1;
          puVar6 = (undefined8 *)
                   Method_Oculus_Platform_Callback_SetNotificationCallback<HttpTransferUpdate>__;
          break;
        default:
          goto switchD_03631b04_default;
        }
        uVar8 = *puVar6;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        plVar5 = (long *)FUN_032e04b8(uVar8,0);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x8f8))(plVar5,local_38,*(undefined8 *)(*plVar5 + 0x900));
          return;
        }
        goto LAB_03631dec;
      }
      switch(*(int *)(param_1 + 0x18)) {
      case 1:
        lVar3 = *(long *)puVar1;
        puVar6 = (undefined8 *)
                 Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<NetworkServicesInternetConnectivityStatusChangeResult>__
        ;
        break;
      case 2:
        lVar3 = *(long *)puVar1;
        puVar6 = (undefined8 *)
                 Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<NotificationServicesGetSettingsResult>__
        ;
        break;
      case 3:
        lVar3 = *(long *)puVar1;
        puVar6 = (undefined8 *)
                 Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<NotificationServicesNotificationReceivedResult>__
        ;
        break;
      case 4:
        lVar3 = *(long *)puVar1;
        puVar6 = (undefined8 *)
                 Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<NotificationSettings>__
        ;
        break;
      case 5:
        lVar3 = *(long *)puVar1;
        puVar6 = (undefined8 *)
                 Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<string>__;
        break;
      case 6:
        lVar3 = *(long *)puVar1;
        puVar6 = (undefined8 *)
                 Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<WebView>__;
        break;
      case 7:
        lVar3 = *(long *)puVar1;
        puVar6 = (undefined8 *)
                 Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<Nullable<DateTime>>__
        ;
        break;
      case 8:
        lVar3 = *(long *)puVar1;
        puVar6 = (undefined8 *)
                 Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<AddressBookReadContactsResult>__
        ;
        break;
      case 9:
        lVar3 = *(long *)puVar1;
        puVar6 = (undefined8 *)
                 Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<AddressBookRequestContactsAccessResult>__
        ;
        break;
      case 10:
        lVar3 = *(long *)puVar1;
        puVar6 = (undefined8 *)Method_Oculus_Platform_Callback_SetNotificationCallback__;
        break;
      case 0xb:
        lVar3 = *(long *)puVar1;
        puVar6 = (undefined8 *)
                 Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<BillingServicesTransactionStateChangeResult>__
        ;
        break;
      case 0xc:
        lVar3 = *(long *)puVar1;
        puVar6 = (undefined8 *)
                 Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<CloudServicesSavedDataChangeResult>__
        ;
        break;
      case 0xd:
        lVar3 = *(long *)puVar1;
        puVar6 = (undefined8 *)
                 Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<CloudServicesSynchronizeResult>__
        ;
        break;
      case 0xe:
        lVar3 = *(long *)puVar1;
        puVar6 = (undefined8 *)
                 Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<DatePickerResult>__
        ;
        break;
      case 0xf:
        lVar3 = *(long *)puVar1;
        puVar6 = (undefined8 *)
                 Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<DeepLinkServicesDynamicLinkOpenResult>__
        ;
        break;
      case 0x10:
        lVar3 = *(long *)puVar1;
        puVar6 = (undefined8 *)
                 Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<int>__;
        break;
      case 0x11:
        lVar3 = *(long *)puVar1;
        puVar6 = (undefined8 *)
                 Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<NetworkServicesHostReachabilityStatusChangeResult>__
        ;
        break;
      default:
        goto switchD_03631b04_default;
      }
      uVar8 = *puVar6;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      plVar5 = (long *)FUN_032e04b8(uVar8,0);
      if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03631de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x8f8))(plVar5,param_1,*(undefined8 *)(*plVar5 + 0x900));
        return;
      }
      goto LAB_03631dec;
    }
  }
switchD_03631b04_default:
  uVar8 = FUN_0364cdc8(0);
  uVar9 = thunk_FUN_01c273e8(
                            Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<CloudServicesUserChangeResult>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar8,uVar9);
}


