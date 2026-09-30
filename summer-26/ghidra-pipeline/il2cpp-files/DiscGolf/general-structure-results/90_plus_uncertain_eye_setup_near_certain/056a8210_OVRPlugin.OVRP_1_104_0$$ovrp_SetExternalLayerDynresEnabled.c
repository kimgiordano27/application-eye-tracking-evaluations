/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_SetExternalLayerDynresEnabled
ENTRY_POINT: 056a8210
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_104_0__ovrp_SetExternalLayerDynresEnabled(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x19;
  long *unaff_x22;
  long in_stack_00000028;
  
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  iVar2 = FUN_056a4568();
  if (iVar2 == 0) {
    uVar3 = FUN_055339f0();
    if (**(long **)(*(long *)
                     System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_TypeInfo
                   + 0xb8) != 0) {
      FUN_04e3b6c0(**(long **)(*(long *)
                                System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_TypeInfo
                              + 0xb8),uVar3,
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
    while (uVar4 = FUN_05219894(&stack0x00000010,*(undefined8 *)puVar1), (uVar4 & 1) != 0) {
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


