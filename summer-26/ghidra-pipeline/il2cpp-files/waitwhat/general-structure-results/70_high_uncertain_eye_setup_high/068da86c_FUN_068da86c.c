/*
FUNCTION_NAME: FUN_068da86c
ENTRY_POINT: 068da86c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_068da86c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if ((DAT_075592a8 & 1) == 0) {
    FUN_03188a78(OVRPlugin_VirtualKeyboardModelAnimationStateHandler_TypeInfo);
    DAT_075592a8 = 1;
  }
  puVar1 = OVRPlugin_VirtualKeyboardModelAnimationStateHandler_TypeInfo;
  if ((*(char *)(param_1 + 0xf8) == '\0') && (*(long *)(param_1 + 0x88) != 0)) {
    FUN_04cd85e8(*(long *)(param_1 + 0x88),param_2,
                 *(undefined8 *)OVRPlugin_VirtualKeyboardModelAnimationStateHandler_TypeInfo);
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_04cd85e8(*(long *)(param_1 + 0x98),param_2,*(undefined8 *)puVar1);
    return;
  }
  return;
}


