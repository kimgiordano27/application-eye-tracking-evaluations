/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$.cctor
ENTRY_POINT: 089f8acc
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_ImmersiveDebugger_Telemetry___cctor(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    if (param_2 == param_1) {
      return 1;
    }
    uVar1 = FUN_08dcd1a8(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18),0);
    if ((uVar1 & 1) != 0) {
      uVar2 = FUN_08dcd1a8(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10),0);
      return uVar2;
    }
  }
  return 0;
}


