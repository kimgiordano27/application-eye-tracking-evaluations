/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$ShouldShowTelemetryNotification
ENTRY_POINT: 04f89bd4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnifiedConsent__ShouldShowTelemetryNotification(void)

{
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  undefined4 unaff_s8;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  if ((unaff_w21 & 1) != 0) {
    *(undefined4 *)(unaff_x20 + 200) = unaff_s8;
    *(undefined8 *)(unaff_x20 + 0xe8) = in_stack_00000000;
    *(undefined4 *)(unaff_x20 + 0xf0) = uStack0000000000000008;
    if (*(char *)(unaff_x20 + 0x104) == '\0') {
      *(undefined1 *)(unaff_x20 + 0x104) = 1;
      FUN_04f89aa0(unaff_x20 + 0x80,unaff_x20 + 0x88,1,unaff_w19 & 1);
      *(undefined4 *)(unaff_x20 + 0x110) = *(undefined4 *)(unaff_x20 + 300);
      *(undefined8 *)(unaff_x20 + 0x108) = *(undefined8 *)(unaff_x20 + 0x124);
    }
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    FUN_04f89d3c(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                 in_stack_00000018);
  }
  return;
}


