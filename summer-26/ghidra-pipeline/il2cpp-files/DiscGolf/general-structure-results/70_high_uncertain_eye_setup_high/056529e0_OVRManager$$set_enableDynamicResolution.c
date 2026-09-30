/*
FUNCTION_NAME: OVRManager$$set_enableDynamicResolution
ENTRY_POINT: 056529e0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] OVRManager__set_enableDynamicResolution(void)

{
  undefined8 uVar1;
  ulong uVar2;
  int in_w8;
  ulong uVar3;
  undefined4 unaff_w19;
  undefined8 *unaff_x20;
  undefined1 auVar4 [16];
  undefined8 uStack0000000000000000;
  uint uStack0000000000000008;
  
  uStack0000000000000008 = 0;
  uStack0000000000000000 = 0;
  if (in_w8 == 0) {
    thunk_FUN_02df485c();
  }
  uVar1 = FUN_05652a30(unaff_w19);
  uVar2 = FUN_055efebc(uVar1,*unaff_x20,0,0);
  uVar3 = (ulong)uStack0000000000000008;
  if ((uVar2 & 1) == 0) {
    uStack0000000000000000 = 0;
    uVar3 = 0;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uStack0000000000000000;
  return auVar4;
}


