/*
FUNCTION_NAME: OVRPlugin$$GetAppCpuStartToGpuEndTime
ENTRY_POINT: 04f5e3cc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin__GetAppCpuStartToGpuEndTime(void)

{
  ulong uVar1;
  int in_w8;
  long *unaff_x20;
  long unaff_x22;
  undefined4 uVar2;
  
  if (in_w8 == 0) {
    thunk_FUN_02b9ad44();
  }
  if (*(char *)(unaff_x22 + 0xbcc) == '\0') {
    FUN_02b3c81c(System_IOSelectorJob_var);
    *(undefined1 *)(unaff_x22 + 0xbcc) = 1;
  }
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar1 = FUN_04f7e714();
  if ((uVar1 & 1) == 0) {
    uVar2 = 3;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


