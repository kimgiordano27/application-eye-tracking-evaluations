/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$GetTypeHash
ENTRY_POINT: 04d0c410
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_ImmersiveDebugger_Telemetry__GetTypeHash(void)

{
  long lVar1;
  long unaff_x19;
  
  lVar1 = *(long *)(unaff_x19 + 0x38);
  if (lVar1 == 0) {
    FUN_02d9a33c();
    lVar1 = *(long *)(unaff_x19 + 0x38);
  }
  if (*(long *)(*(long *)(lVar1 + 8) + 0x38) == 0) {
    FUN_02d9a33c();
  }
  return 0x7e;
}


