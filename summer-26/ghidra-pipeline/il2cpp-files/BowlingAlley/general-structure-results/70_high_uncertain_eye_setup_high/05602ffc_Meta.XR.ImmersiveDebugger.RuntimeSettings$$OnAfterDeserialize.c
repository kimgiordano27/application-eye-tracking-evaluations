/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$OnAfterDeserialize
ENTRY_POINT: 05602ffc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_RuntimeSettings__OnAfterDeserialize(long param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar1 = FUN_05e04a0c(&stack0x00000008);
  return uVar1 & 1;
}


