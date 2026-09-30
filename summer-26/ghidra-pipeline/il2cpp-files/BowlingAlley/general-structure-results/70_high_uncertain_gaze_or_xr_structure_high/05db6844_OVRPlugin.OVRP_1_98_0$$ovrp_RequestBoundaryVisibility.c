/*
FUNCTION_NAME: OVRPlugin.OVRP_1_98_0$$ovrp_RequestBoundaryVisibility
ENTRY_POINT: 05db6844
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_98_0__ovrp_RequestBoundaryVisibility(undefined8 param_1,undefined8 param_2)

{
  long unaff_x21;
  long unaff_x22;
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x1c0);
  if ((*(byte *)(unaff_x21 + 0x7ca) & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072b21c0);
    *(undefined1 *)(unaff_x21 + 0x7ca) = 1;
  }
  FUN_044119fc(param_1,param_2,*puVar1);
  return;
}


