/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<bool>$$EndInvoke
ENTRY_POINT: 06855ef0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<bool>__EndInvoke
          (undefined8 param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  uint uVar1;
  long unaff_x19;
  long lVar2;
  
  *(undefined8 *)(unaff_x19 + 0x70) = param_1;
  *(long *)(unaff_x19 + 0x58) = param_3._8_8_;
  *(long *)(unaff_x19 + 0x50) = param_3._0_8_;
  *(long *)(unaff_x19 + 0x68) = param_2._8_8_;
  *(long *)(unaff_x19 + 0x60) = param_2._0_8_;
  thunk_FUN_044bb4b4();
  thunk_FUN_04456600();
  uVar1 = *(uint *)(unaff_x19 + 0x38);
  thunk_FUN_04456600();
  thunk_FUN_04481bc4((uint *)(unaff_x19 + 0x38),uVar1 | 0x1000000,0);
  lVar2 = *(long *)(unaff_x19 + 0x48);
  thunk_FUN_04456600();
  if (lVar2 != 0) {
    FUN_07ab8dd4(lVar2,0);
  }
  FUN_07ab8f10();
  return 1;
}


