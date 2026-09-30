/*
FUNCTION_NAME: OVRPlugin$$StopColocationSessionAdvertisement
ENTRY_POINT: 033d4618
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin__StopColocationSessionAdvertisement(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  
  uVar1 = FUN_033dc8d4();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_033dc8d4(*(undefined8 *)(unaff_x19 + 0x10),0,0);
    return uVar2;
  }
  return 0;
}


