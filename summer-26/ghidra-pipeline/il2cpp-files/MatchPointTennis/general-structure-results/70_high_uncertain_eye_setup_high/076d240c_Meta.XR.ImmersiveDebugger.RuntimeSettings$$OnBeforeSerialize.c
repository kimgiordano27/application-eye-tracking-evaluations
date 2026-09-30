/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$OnBeforeSerialize
ENTRY_POINT: 076d240c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__OnBeforeSerialize(void)

{
  undefined *puVar1;
  long *unaff_x20;
  long *unaff_x21;
  
  FUN_094e4830();
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  puVar1 = PTR_DAT_09f2e360;
  thunk_FUN_094e64b8(0x40a00000);
  thunk_FUN_094e64b8(0x41200000);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  thunk_FUN_094e64b8(0x40400000);
  thunk_FUN_094e64b8(0x41200000);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  thunk_FUN_094e64b8(0x3f800000);
  thunk_FUN_094e64b8(0);
  return;
}


