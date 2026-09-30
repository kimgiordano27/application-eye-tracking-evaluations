/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$.cctor
ENTRY_POINT: 04d95dfc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry___cctor(long param_1)

{
  long unaff_x19;
  long unaff_x21;
  
  while( true ) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x40));
    unaff_x21 = FUN_03952188(unaff_x21,
                             *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80));
    if (unaff_x21 == 0) break;
    param_1 = *(long *)(unaff_x21 + 0x28);
  }
  return;
}


