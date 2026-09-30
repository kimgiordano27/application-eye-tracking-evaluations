/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionStateChange
ENTRY_POINT: 05d4d3e8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionStateChange
               (long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x24) = param_4;
  thunk_FUN_0333a630((undefined8 *)(param_1 + 0x10));
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_05d52c9c(*(long *)(param_1 + 0x18),param_5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


