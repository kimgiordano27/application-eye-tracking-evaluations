/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$OnAfterDeserialize
ENTRY_POINT: 04d95138
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__OnAfterDeserialize
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = **(undefined8 **)(*(long *)(param_3 + 0x20) + 0xc0);
  if (*(int *)(*(long *)(param_1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_050e4454(uVar1,0);
  return;
}


