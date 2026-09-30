/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$ShouldShowTelemetryNotification
ENTRY_POINT: 02c4bb10
PROGRAM: sharks-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c4bb6c) */

void OVRPlugin_UnifiedConsent__ShouldShowTelemetryNotification(long param_1)

{
  int in_w8;
  long lVar1;
  long unaff_x19;
  long *unaff_x22;
  
  if (in_w8 == 0) {
    thunk_FUN_01843fdc();
    param_1 = *unaff_x22;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0xb8) + 0x18);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40));
  }
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  FUN_02c345d4();
  return;
}


