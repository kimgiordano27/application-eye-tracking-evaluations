/*
FUNCTION_NAME: OVRManager$$add_InputFocusLost
ENTRY_POINT: 05118554
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


bool OVRManager__add_InputFocusLost(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (param_2 != 0) {
    uVar1 = thunk_FUN_02d709fc(param_1,0);
    uVar2 = thunk_FUN_02d709fc(param_2,0);
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)(PTR_DAT_0675e258 + 0xe0));
    }
    uVar3 = FUN_0501ed54(uVar1,uVar2,0);
    if ((((uVar3 & 1) != 0) &&
        ((*(char *)(param_1 + 0x10) != '\0') == (*(char *)(param_2 + 0x10) != '\0'))) &&
       ((*(char *)(param_1 + 0x11) != '\0') == (*(char *)(param_2 + 0x11) != '\0'))) {
      return (*(char *)(param_1 + 0x12) == '\0') != (*(char *)(param_2 + 0x12) != '\0');
    }
  }
  return false;
}


