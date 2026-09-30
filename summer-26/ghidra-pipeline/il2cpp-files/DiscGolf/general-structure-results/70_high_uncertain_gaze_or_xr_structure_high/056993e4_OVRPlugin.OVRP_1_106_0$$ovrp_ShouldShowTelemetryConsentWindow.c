/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_ShouldShowTelemetryConsentWindow
ENTRY_POINT: 056993e4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_ShouldShowTelemetryConsentWindow(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *unaff_x20;
  undefined8 *unaff_x21;
  
  uVar1 = FUN_054bd424();
  puVar2 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x20);
  *puVar2 = uVar1;
  LeanTween__value(puVar2,uVar1);
  uVar1 = FUN_054bd424(*(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 8),*unaff_x21,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x28);
  *puVar2 = uVar1;
  LeanTween__value(puVar2,uVar1);
  return;
}


