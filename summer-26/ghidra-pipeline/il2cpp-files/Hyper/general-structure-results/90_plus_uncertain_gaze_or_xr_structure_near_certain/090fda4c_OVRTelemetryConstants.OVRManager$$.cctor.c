/*
FUNCTION_NAME: OVRTelemetryConstants.OVRManager$$.cctor
ENTRY_POINT: 090fda4c
PROGRAM: Hyper-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRTelemetryConstants_OVRManager___cctor(void)

{
  undefined8 uVar1;
  int in_w8;
  int unaff_w20;
  
  if (unaff_w20 == in_w8) {
    uVar1 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac79ed8);
    FUN_09101308();
  }
  else if (unaff_w20 == 0x58129c8e) {
    uVar1 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac79cb8);
    FUN_090fa280();
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


