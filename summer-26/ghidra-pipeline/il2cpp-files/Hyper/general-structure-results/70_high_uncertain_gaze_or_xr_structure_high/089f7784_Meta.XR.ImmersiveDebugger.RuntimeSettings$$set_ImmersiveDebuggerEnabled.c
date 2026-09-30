/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$set_ImmersiveDebuggerEnabled
ENTRY_POINT: 089f7784
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ImmersiveDebuggerEnabled
               (long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_088ef30c(param_2,8,0);
    FUN_088ee800(param_2,*(undefined1 *)(param_1 + 0x18),0);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_088ef30c(param_2,0x10,0);
    FUN_088eebec(param_2,*(undefined4 *)(param_1 + 0x1c),0);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_088ef30c(param_2,0x18,0);
    FUN_088eebec(param_2,*(undefined4 *)(param_1 + 0x20),0);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_088ef30c(param_2,0x20,0);
    FUN_088eebec(param_2,*(undefined4 *)(param_1 + 0x24),0);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_088ef30c(param_2,0x28,0);
    FUN_088eebec(param_2,*(undefined4 *)(param_1 + 0x28),0);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    HdyRpc_RequestHspSetup__set_StreamId(*(long *)(param_1 + 0x10),param_2,0);
    return;
  }
  return;
}


