/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$IsTypeCustom
ENTRY_POINT: 05188dac
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry__IsTypeCustom(long param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = param_2;
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_02dcfd18(param_1);
  }
  thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x10),&stack0x00000008);
  return;
}


