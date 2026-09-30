/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$ShouldShowTelemetryNotification
ENTRY_POINT: 0534a50c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


float OVRPlugin_UnifiedConsent__ShouldShowTelemetryNotification(long param_1)

{
  long unaff_x19;
  float fVar1;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0xfa8));
  *(undefined1 *)(unaff_x19 + 0x9c4) = 1;
  fVar1 = SQRT(unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9 + unaff_s10 * unaff_s10 +
               unaff_s11 * unaff_s11);
  if (**(float **)(*(long *)PTR_DAT_067c8fa8 + 0xb8) <= fVar1) {
    fVar1 = unaff_s8 / fVar1;
  }
  else {
    if (DAT_06bb42c3 == '\0') {
      FUN_02f08768(PTR_DAT_067c90a8);
      DAT_06bb42c3 = '\x01';
    }
    fVar1 = **(float **)(*(long *)PTR_DAT_067c90a8 + 0xb8);
  }
  return fVar1;
}


