/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$ShouldShowTelemetryConsentWindow
ENTRY_POINT: 074097ec
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnifiedConsent__ShouldShowTelemetryConsentWindow(long param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  
  puVar1 = PTR_DAT_08e78410;
                    /* try { // try from 07409808 to 0750987f has its CatchHandler @ 074099d4 */
  if ((DAT_0941ea30 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e78410);
    DAT_0941ea30 = 1;
  }
  uStack_2c = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = *(undefined8 *)(param_1 + 0x14);
  uStack_30 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
  uStack_38 = (undefined4)*(undefined8 *)(param_1 + 0x1c);
  local_34 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20);
  thunk_FUN_03cf4e64(*(undefined8 *)puVar1,&uStack_40);
  return;
}


