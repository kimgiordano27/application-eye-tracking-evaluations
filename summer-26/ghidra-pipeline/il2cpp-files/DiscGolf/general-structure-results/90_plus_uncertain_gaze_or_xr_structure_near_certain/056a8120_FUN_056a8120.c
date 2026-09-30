/*
FUNCTION_NAME: FUN_056a8120
ENTRY_POINT: 056a8120
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 124
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_056a8120(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_48;
  undefined8 local_40;
  
  if ((DAT_06dbca59 & 1) == 0) {
    FUN_02d965b8(System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_TypeInfo)
    ;
    FUN_02d965b8(PTR_DAT_06a0d468);
    FUN_02d965b8(System_Threading_Tasks_TaskCompletionSource<HttpResponseMessage>_TypeInfo);
    FUN_02d965b8(System_Threading_Tasks_TaskCompletionSource<int>_TypeInfo);
    FUN_02d965b8(System_Threading_Tasks_TaskCompletionSource<Message>_TypeInfo);
    FUN_02d965b8(System_Threading_Tasks_TaskCompletionSource<object>_TypeInfo);
    FUN_02d965b8(System_Threading_Tasks_TaskCompletionSource<Reply>_TypeInfo);
    FUN_02d965b8(System_Threading_Tasks_TaskCompletionSource<string>_TypeInfo);
    FUN_02d965b8(System_Threading_Tasks_TaskCompletionSource<Client_ConnectionState>_TypeInfo);
    FUN_02d965b8(
                System_Threading_Tasks_TaskCompletionSource<OvrAvatarManager_AvatarRequestBoolResults>_TypeInfo
                );
    FUN_02d965b8(System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_TypeInfo);
    DAT_06dbca59 = 1;
  }
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  local_48 = 0;
  uStack_50 = 0;
  uVar3 = FUN_056a9bc8(param_1 + 0x18,0);
  puVar1 = PTR_DAT_06a0d468;
  if ((uVar3 & 1) != 0) {
    return;
  }
  uVar4 = OVRPlugin_<>c__<_cctor>b__807_26(param_1 + 0x18,0);
  auVar5 = OVRPlugin_<>c__<_cctor>b__807_26(param_1 + 0x18,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  iVar2 = FUN_056a4568(auVar5._0_8_,auVar5._8_8_);
  if (iVar2 == 0) {
    uVar4 = FUN_055339f0(uVar4,0);
    if (**(long **)(*(long *)
                     System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_TypeInfo
                   + 0xb8) != 0) {
      FUN_04e3b6c0(**(long **)(*(long *)
                                System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_TypeInfo
                              + 0xb8),uVar4,
                   *(undefined8 *)System_Threading_Tasks_TaskCompletionSource<Message>_TypeInfo);
    }
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  LeanTween__value((undefined8 *)(param_1 + 0x30),0);
  *(undefined8 *)(param_1 + 0x38) = 0;
  LeanTween__value((undefined8 *)(param_1 + 0x38),0);
  FUN_056a9b78(param_1 + 0x18,0);
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_04df8a2c(&local_60,*(long *)(param_1 + 0x40),
                 *(undefined8 *)System_Threading_Tasks_TaskCompletionSource<int>_TypeInfo);
    puVar1 = System_Threading_Tasks_TaskCompletionSource<Reply>_TypeInfo;
    while (uVar3 = FUN_05219894(&local_60,*(undefined8 *)puVar1), (uVar3 & 1) != 0) {
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_056a84c0();
    }
    FUN_052199b8(&local_60,
                 *(undefined8 *)System_Threading_Tasks_TaskCompletionSource<object>_TypeInfo);
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_04df8778(*(long *)(param_1 + 0x40),
                   *(undefined8 *)
                    System_Threading_Tasks_TaskCompletionSource<HttpResponseMessage>_TypeInfo);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


