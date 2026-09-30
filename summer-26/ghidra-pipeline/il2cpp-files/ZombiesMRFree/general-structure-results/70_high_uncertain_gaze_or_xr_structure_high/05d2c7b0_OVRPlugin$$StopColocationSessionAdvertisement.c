/*
FUNCTION_NAME: OVRPlugin$$StopColocationSessionAdvertisement
ENTRY_POINT: 05d2c7b0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__StopColocationSessionAdvertisement(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  thunk_FUN_03048534();
  uVar1 = thunk_FUN_0301080c(*unaff_x22);
  FUN_0525cf94(uVar1,*unaff_x21);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
  thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x18),uVar1);
  FUN_05b32c00();
  return;
}


