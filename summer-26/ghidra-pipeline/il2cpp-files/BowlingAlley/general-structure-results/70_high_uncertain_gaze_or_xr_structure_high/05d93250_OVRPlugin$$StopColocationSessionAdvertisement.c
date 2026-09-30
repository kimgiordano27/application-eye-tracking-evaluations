/*
FUNCTION_NAME: OVRPlugin$$StopColocationSessionAdvertisement
ENTRY_POINT: 05d93250
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


undefined8 OVRPlugin__StopColocationSessionAdvertisement(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x21;
  undefined8 uStack0000000000000020;
  undefined1 uStack000000000000002c;
  
  uStack000000000000002c = 0;
  uStack0000000000000020 = param_1;
  uVar1 = Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_Object_op_Inequality();
  *(undefined8 *)(unaff_x21 + 0x978) = uVar1;
  uVar1 = thunk_FUN_032a5c7c();
  uVar2 = (**(code **)(unaff_x21 + 0x978))();
  thunk_FUN_032a5c70(uVar1);
  return uVar2;
}


