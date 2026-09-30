/*
FUNCTION_NAME: OVRPlugin.OVRP_1_98_0$$ovrp_RequestBoundaryVisibility
ENTRY_POINT: 06045dd0
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


void OVRPlugin_OVRP_1_98_0__ovrp_RequestBoundaryVisibility
               (code *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,long param_5)

{
  long lVar1;
  undefined4 unaff_w19;
  long unaff_x24;
  
  if (param_1 == (code *)0x0) {
    param_1 = (code *)thunk_FUN_0322f404();
    *(code **)(unaff_x24 + 0x2c8) = param_1;
  }
  lVar1 = 0;
  if (param_5 != 0) {
    lVar1 = param_5 + 0x20;
  }
  (*param_1)(param_2,param_3,param_4,lVar1,unaff_w19);
  return;
}


