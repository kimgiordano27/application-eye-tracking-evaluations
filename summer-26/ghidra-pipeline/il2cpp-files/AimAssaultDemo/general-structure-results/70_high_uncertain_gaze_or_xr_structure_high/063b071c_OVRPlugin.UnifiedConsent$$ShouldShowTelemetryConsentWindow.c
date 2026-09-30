/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$ShouldShowTelemetryConsentWindow
ENTRY_POINT: 063b071c
PROGRAM: AimAssaultDemo-libil2cpp.so
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
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_037a15ac(*(undefined8 *)(param_1 + 0x28));
  FUN_063349e4();
  uVar1 = FUN_062d9a10();
  uVar2 = thunk_FUN_037a15ac(PTR_DAT_07db7030);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar1,uVar2);
}


