/*
FUNCTION_NAME: OVRPlugin.OpenXREventDelegateType$$Invoke
ENTRY_POINT: 02c474e0
PROGRAM: sharks-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OpenXREventDelegateType__Invoke(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int in_w8;
  
  if (in_w8 == 0x400000) {
    return 1;
  }
  thunk_FUN_01851c08(PTR_DAT_037f8d50);
  uVar1 = thunk_FUN_01861bbc();
  uVar2 = thunk_FUN_01851c08(PTR_DAT_0380c760);
  FUN_02bcf690(uVar1,uVar2,0);
  uVar2 = thunk_FUN_01851c08(PTR_DAT_0380c768);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar1,uVar2);
}


