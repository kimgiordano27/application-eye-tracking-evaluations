/*
FUNCTION_NAME: OVRPlugin.OVRP_1_28_0$$ovrp_SendEvent
ENTRY_POINT: 0603d154
PROGRAM: vandalizer-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_28_0__ovrp_SendEvent(undefined8 param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  FUN_058d94e8(param_1,*(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)PTR_DAT_075f7c30);
  if (unaff_x20 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2388();
  }
  return;
}


