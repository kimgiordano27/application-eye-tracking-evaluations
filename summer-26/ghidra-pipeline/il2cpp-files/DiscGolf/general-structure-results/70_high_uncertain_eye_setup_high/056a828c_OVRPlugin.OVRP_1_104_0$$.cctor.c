/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$.cctor
ENTRY_POINT: 056a828c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_104_0___cctor(void)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long in_stack_00000028;
  
  LeanTween__value();
  FUN_056a9b78(unaff_x19 + 0x18,0);
  if (*(long *)(unaff_x20 + 8) != 0) {
    FUN_04df8a2c(&stack0x00000010,*(long *)(unaff_x20 + 8),
                 *(undefined8 *)System_Threading_Tasks_TaskCompletionSource<int>_TypeInfo);
    puVar1 = System_Threading_Tasks_TaskCompletionSource<Reply>_TypeInfo;
    while (uVar2 = FUN_05219894(&stack0x00000010,*(undefined8 *)puVar1), (uVar2 & 1) != 0) {
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


