/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$ShouldShowTelemetryNotification
ENTRY_POINT: 05bead58
PROGRAM: waitwhat-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnifiedConsent__ShouldShowTelemetryNotification(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x21;
  
  puVar1 = PTR_DAT_071122b8;
  if ((*(byte *)(unaff_x21 + 0xd57) & 1) == 0) {
    FUN_03188a78(PTR_DAT_071122b8);
    *(undefined1 *)(unaff_x21 + 0xd57) = 1;
  }
  uVar2 = thunk_FUN_031c3cac(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)puVar1);
  uVar3 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  uVar2 = thunk_FUN_031c3cac(*(undefined8 *)(param_1 + 0x30),uVar3);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  return;
}


