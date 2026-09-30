/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_GetDynamicObjectKeyboardSupported
ENTRY_POINT: 056a8194
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 135
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_104_0__ovrp_GetDynamicObjectKeyboardSupported(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined1 auVar5 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  
  FUN_02d965b8(System_Threading_Tasks_TaskCompletionSource<string>_TypeInfo);
  FUN_02d965b8(System_Threading_Tasks_TaskCompletionSource<Client_ConnectionState>_TypeInfo);
  FUN_02d965b8(
              System_Threading_Tasks_TaskCompletionSource<OvrAvatarManager_AvatarRequestBoolResults>_TypeInfo
              );
  FUN_02d965b8(System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xa59) = 1;
  in_stack_00000030 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  uVar3 = FUN_056a9bc8(unaff_x19 + 0x18,0);
  puVar1 = PTR_DAT_06a0d468;
  if ((uVar3 & 1) != 0) {
    return;
  }
  uVar4 = OVRPlugin_<>c__<_cctor>b__807_26(unaff_x19 + 0x18,0);
  auVar5 = OVRPlugin_<>c__<_cctor>b__807_26(unaff_x19 + 0x18,0);
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
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  LeanTween__value((undefined8 *)(unaff_x19 + 0x30),0);
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  LeanTween__value((undefined8 *)(unaff_x19 + 0x38),0);
  FUN_056a9b78(unaff_x19 + 0x18,0);
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    FUN_04df8a2c(&stack0x00000010,*(long *)(unaff_x19 + 0x40),
                 *(undefined8 *)System_Threading_Tasks_TaskCompletionSource<int>_TypeInfo);
    puVar1 = System_Threading_Tasks_TaskCompletionSource<Reply>_TypeInfo;
    while (uVar3 = FUN_05219894(&stack0x00000010,*(undefined8 *)puVar1), (uVar3 & 1) != 0) {
      if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_056a84c0();
    }
    FUN_052199b8(&stack0x00000010,
                 *(undefined8 *)System_Threading_Tasks_TaskCompletionSource<object>_TypeInfo);
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      FUN_04df8778(*(long *)(unaff_x19 + 0x40),
                   *(undefined8 *)
                    System_Threading_Tasks_TaskCompletionSource<HttpResponseMessage>_TypeInfo);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


