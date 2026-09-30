/*
FUNCTION_NAME: OVRPlugin.OVRP_1_95_0$$ovrp_SetDeveloperTelemetryConsent
ENTRY_POINT: 05171928
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_95_0__ovrp_SetDeveloperTelemetryConsent(ulong param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  long *unaff_x21;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_067829b0);
    *(undefined1 *)(unaff_x22 + 0xec7) = 1;
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_0517196c(uVar1);
  return;
}


