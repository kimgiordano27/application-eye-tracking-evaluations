/*
FUNCTION_NAME: FUN_059d71e8
ENTRY_POINT: 059d71e8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_059d71e8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  puVar3 = 
  Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__;
  puVar2 = 
  Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_ProxyController<ConsoleLine>__ctor__;
  if ((DAT_066d3b9a & 1) == 0) {
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_ProviderMonitor<TeleportationProvider>__ctor__
                );
    FUN_02b3c81c(Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__)
    ;
    FUN_02b3c81c(
                Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                );
    FUN_02b3c81c(
                Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_ProxyController<ConsoleLine>__ctor__
                );
    DAT_066d3b9a = 1;
  }
  FUN_05ca4968(&local_70,0);
  uVar5 = uStack_68;
  uVar4 = local_70;
  uStack_b8 = uStack_58;
  local_c0 = local_60;
  local_b0 = local_50;
  lVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  System_Collections_Generic_List<HID_HIDElementDescriptor>__System_Collections_Generic_ICollection<T>_get_IsReadOnly
            (lVar6,uVar5,*(undefined8 *)puVar3);
  if (lVar6 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x18);
    local_70 = *(undefined8 *)(param_1 + 0x10);
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    local_60 = *(undefined8 *)(param_1 + 0x20);
    local_50 = *(undefined8 *)(param_1 + 0x30);
    uVar7 = System_Collections_Generic_List<HID_HIDElementDescriptor>__FindAll
                      (lVar6,&local_70,
                       *(undefined8 *)
                        Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                      );
    if ((uVar7 & 1) == 0) {
      uStack_98 = *(undefined8 *)(param_1 + 0x18);
      local_a0 = *(undefined8 *)(param_1 + 0x10);
      uStack_88 = *(undefined8 *)(param_1 + 0x28);
      uStack_90 = *(undefined8 *)(param_1 + 0x20);
      local_80 = *(undefined8 *)(param_1 + 0x30);
      lVar8 = *(long *)(lVar6 + 0x10);
      lVar9 = *(long *)
               Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_ProviderMonitor<TeleportationProvider>__ctor__
      ;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar8 == 0)
      goto UnityEngine_XR_Interaction_Toolkit_UI_NavigationModel__set_cancelButtonDelta;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        lVar8 = lVar8 + (long)(int)uVar1 * 0x28;
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar8 + 0x28) = uStack_98;
        *(undefined8 *)(lVar8 + 0x20) = local_a0;
        *(undefined8 *)(lVar8 + 0x38) = uStack_88;
        *(undefined8 *)(lVar8 + 0x30) = uStack_90;
        *(undefined8 *)(lVar8 + 0x40) = local_80;
        thunk_FUN_02bb0e9c(lVar8 + 0x20,0);
      }
      else {
        local_70 = local_a0;
        uStack_68 = uStack_98;
        local_60 = uStack_90;
        uStack_58 = uStack_88;
        local_50 = local_80;
        FUN_037b997c(lVar6,&local_70,
                     *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      local_e8 = uVar4;
      uStack_e0 = uVar5;
      uStack_d0 = uStack_b8;
      local_d8 = local_c0;
      local_c8 = local_b0;
      FUN_059d715c(lVar6,&local_e8);
    }
    return;
  }
UnityEngine_XR_Interaction_Toolkit_UI_NavigationModel__set_cancelButtonDelta:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


