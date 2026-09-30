/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$Refresh
ENTRY_POINT: 052c41ec
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__Refresh
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar2;
  
  *(undefined4 *)(unaff_x20 + 0x18) = param_3;
  uVar2 = FUN_066d4b64();
  *(undefined4 *)(unaff_x20 + 0x1c) = uVar2;
  *(undefined4 *)(unaff_x20 + 0x20) = param_2;
  *(undefined4 *)(unaff_x20 + 0x24) = param_3;
  *(undefined4 *)(unaff_x20 + 0x28) = param_4;
  if (*(long *)(unaff_x19 + 0x58) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_052c63c0(*(long *)(unaff_x19 + 0x58),0);
  }
  *(undefined8 *)(unaff_x20 + 0x30) = uVar1;
  thunk_FUN_02f411dc();
  if (*(long *)(unaff_x19 + 0x60) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_052c63c0(*(long *)(unaff_x19 + 0x60),0);
  }
  *(undefined8 *)(unaff_x20 + 0x38) = uVar1;
  thunk_FUN_02f411dc();
  if (*(long *)(unaff_x19 + 0x68) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_052c63c0(*(long *)(unaff_x19 + 0x68),0);
  }
  *(undefined8 *)(unaff_x20 + 0x40) = uVar1;
  thunk_FUN_02f411dc();
  if (*(long *)(unaff_x19 + 0x70) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_052c63c0(*(long *)(unaff_x19 + 0x70),0);
  }
  *(undefined8 *)(unaff_x20 + 0x48) = uVar1;
  thunk_FUN_02f411dc();
  if (*(long *)(unaff_x19 + 0x78) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_052c63c0(*(long *)(unaff_x19 + 0x78),0);
  }
  *(undefined8 *)(unaff_x20 + 0x50) = uVar1;
  thunk_FUN_02f411dc();
  return;
}


