/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$OnBeforeSerialize
ENTRY_POINT: 05631530
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_RuntimeSettings__OnBeforeSerialize(void)

{
  uint uVar1;
  long *unaff_x19;
  
  thunk_FUN_031c3ef0();
  uVar1 = (**(code **)(*unaff_x19 + 0x1b8))();
  return uVar1 & 1;
}


