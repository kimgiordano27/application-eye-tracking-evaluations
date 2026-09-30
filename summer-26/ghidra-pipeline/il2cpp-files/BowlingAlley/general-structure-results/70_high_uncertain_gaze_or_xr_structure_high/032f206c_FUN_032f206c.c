/*
FUNCTION_NAME: FUN_032f206c
ENTRY_POINT: 032f206c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


long FUN_032f206c(long param_1)

{
  long lVar1;
  undefined1 auStack_18 [8];
  
  FUN_03296828(auStack_18,Method_OVRTask_FromRequest<OVRResult<OVRPlugin_Result>>__);
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 == 0) {
    lVar1 = **(long **)(param_1 + 0x40);
    lVar1 = FUN_032d9574(**(undefined8 **)(lVar1 + 0x20),*(undefined4 *)(lVar1 + 0x48),
                         *(long **)(param_1 + 0x40) + 1,auStack_18);
    *(long *)(param_1 + 0x38) = lVar1;
  }
  FUN_03296ccc(auStack_18);
  return lVar1;
}


