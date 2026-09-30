/*
FUNCTION_NAME: OVRPlugin$$InitializeInsightPassthrough
ENTRY_POINT: 027ef590
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 OVRPlugin__InitializeInsightPassthrough(undefined8 param_1)

{
  undefined *puVar1;
  long *plVar2;
  int in_w8;
  undefined8 *unaff_x19;
  undefined8 in_stack_00000008;
  undefined4 uStack000000000000001c;
  
  if (in_w8 == 0) {
    thunk_FUN_01a58e78();
    param_1 = *unaff_x19;
  }
  plVar2 = (long *)FUN_01ab69c8(param_1);
  puVar1 = PTR_DAT_03cc1828;
  if (*plVar2 == 0) {
    in_stack_00000008 = 0;
  }
  else {
    uStack000000000000001c = OVRPlugin__SetControllerLocalizedVibration();
    in_stack_00000008 = 0;
    FUN_02241190(&stack0x00000008,&stack0x0000001c,*(undefined8 *)puVar1);
  }
  return in_stack_00000008;
}


