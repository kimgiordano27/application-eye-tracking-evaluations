/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$EndInvoke
ENTRY_POINT: 0515b0ac
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_LogCallback2DelegateType__EndInvoke(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x21;
  int unaff_w22;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  plVar1 = (long *)(**(code **)(param_1 + 0x248))();
  if (unaff_w22 != 0) {
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)PTR_DAT_067616f8 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88();
    }
    puVar2 = (undefined8 *)thunk_FUN_02d9d688();
    FUN_04feb438(&stack0x00000010,*puVar2,0);
    thunk_FUN_02d9d164(*unaff_x21);
  }
  return;
}


