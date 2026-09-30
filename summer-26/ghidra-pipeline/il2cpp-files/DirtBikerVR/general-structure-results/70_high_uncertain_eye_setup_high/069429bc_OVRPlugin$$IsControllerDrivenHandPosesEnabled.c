/*
FUNCTION_NAME: OVRPlugin$$IsControllerDrivenHandPosesEnabled
ENTRY_POINT: 069429bc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__IsControllerDrivenHandPosesEnabled(undefined8 param_1)

{
  ulong uVar1;
  int in_w9;
  long unaff_x20;
  long *unaff_x22;
  
  if (in_w9 == 0) {
    thunk_FUN_03ae8be4(param_1);
  }
  FUN_07c4f4f4();
  FUN_06941d00();
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_07c43018(0);
  if (((uVar1 & 1) != 0) && (*(long *)(unaff_x20 + 0x50) == 0)) {
    FUN_06941d00();
  }
  return;
}


