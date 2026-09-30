/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$FetchPanel
ENTRY_POINT: 04d95d18
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry__FetchPanel
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x21;
  
  FUN_03956008(param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x28));
  if (unaff_x21 != 0) {
    FUN_0492cd24();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


