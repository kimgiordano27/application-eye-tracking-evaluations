/*
FUNCTION_NAME: OVRManager$$get_xrSession
ENTRY_POINT: 03136874
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool OVRManager__get_xrSession(float param_1)

{
  bool bVar1;
  long unaff_x19;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  
  fVar2 = SQRT(param_1 + unaff_s10 * unaff_s10 + unaff_s9 * unaff_s9);
  if (ABS(fVar2) < DAT_00b5568c) {
    bVar1 = true;
  }
  else {
    bVar1 = unaff_s8 <=
            (unaff_s9 / fVar2) * *(float *)(unaff_x19 + 0x14) +
            (unaff_s11 / fVar2) * *(float *)(unaff_x19 + 0xc) +
            (unaff_s10 / fVar2) * *(float *)(unaff_x19 + 0x10);
  }
  return bVar1;
}


