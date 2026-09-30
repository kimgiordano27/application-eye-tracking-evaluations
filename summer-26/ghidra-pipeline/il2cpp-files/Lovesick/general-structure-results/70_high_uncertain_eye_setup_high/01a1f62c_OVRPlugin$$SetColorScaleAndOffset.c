/*
FUNCTION_NAME: OVRPlugin$$SetColorScaleAndOffset
ENTRY_POINT: 01a1f62c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__SetColorScaleAndOffset(long param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 local_24;
  
  if ((DAT_0377a9f8 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_12058);
    DAT_0377a9f8 = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    local_24 = param_2;
    uVar1 = FUN_0129eff4(*(long *)(param_1 + 0x30),&local_24,param_3,
                         *(undefined8 *)StringLiteral_12058);
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


