/*
FUNCTION_NAME: OVRPlugin$$RequestBoundaryVisibility
ENTRY_POINT: 05d93944
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


void OVRPlugin__RequestBoundaryVisibility(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x19;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  uStack0000000000000028 = 0;
  uStack000000000000002c = 0;
  uStack0000000000000000 = param_1;
  uStack0000000000000020 = param_2;
  pcVar1 = (code *)Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_Object_op_Inequality();
  *(code **)(unaff_x19 + 0x9f0) = pcVar1;
  (*pcVar1)();
  return;
}


