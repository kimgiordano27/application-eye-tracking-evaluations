/*
FUNCTION_NAME: OVRPlugin$$StartColocationSessionAdvertisement
ENTRY_POINT: 05d2c6dc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__StartColocationSessionAdvertisement(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  uVar1 = thunk_FUN_0301080c(*unaff_x21);
  FUN_05d2c71c();
  *(undefined8 *)(unaff_x19 + 0x40) = uVar1;
  thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x40),uVar1);
  FUN_068fa854();
  return;
}


