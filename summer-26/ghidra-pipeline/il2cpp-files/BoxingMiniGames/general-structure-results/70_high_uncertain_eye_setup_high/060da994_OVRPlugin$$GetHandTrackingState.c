/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingState
ENTRY_POINT: 060da994
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetHandTrackingState(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  
  puVar1 = PTR_DAT_07a247d0;
  if ((*(byte *)(unaff_x19 + 0xaf6) & 1) == 0) {
    FUN_03642964(PTR_DAT_07a247d0);
    *(undefined1 *)(unaff_x19 + 0xaf6) = 1;
  }
  uVar2 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_05e5ae34(uVar2,0);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar2;
  thunk_FUN_036b7ad0(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar2);
  return;
}


