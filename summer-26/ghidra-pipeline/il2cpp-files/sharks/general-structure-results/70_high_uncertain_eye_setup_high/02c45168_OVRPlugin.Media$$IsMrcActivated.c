/*
FUNCTION_NAME: OVRPlugin.Media$$IsMrcActivated
ENTRY_POINT: 02c45168
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_Media__IsMrcActivated(long param_1)

{
  uint uVar1;
  long unaff_x19;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_02c42538();
  }
  thunk_FUN_0181f594();
  uVar1 = *(uint *)(unaff_x19 + 0x38);
  thunk_FUN_0181f594();
  FUN_01818414((uint *)(unaff_x19 + 0x38),uVar1 | 0x200000);
  lVar2 = *(long *)(unaff_x19 + 0x48);
  thunk_FUN_0181f594();
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x18);
    thunk_FUN_0181f594();
    if (lVar3 != 0) {
      FUN_02c31860(lVar3,0);
    }
    FUN_02c457ac(lVar2);
  }
  OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcFrameSize();
  return;
}


