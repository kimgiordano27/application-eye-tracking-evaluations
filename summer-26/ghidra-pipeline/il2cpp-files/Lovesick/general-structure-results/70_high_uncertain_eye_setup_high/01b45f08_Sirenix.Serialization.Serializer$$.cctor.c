/*
FUNCTION_NAME: Sirenix.Serialization.Serializer$$.cctor
ENTRY_POINT: 01b45f08
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Sirenix_Serialization_Serializer___cctor(void)

{
  code *pcVar1;
  long in_x12;
  undefined4 unaff_w19;
  long unaff_x20;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  uStack0000000000000020 = *(undefined8 *)(in_x12 + 0x478);
  pcStack0000000000000000 = "OVRPlugin";
  uStack0000000000000008 = 9;
  pcStack0000000000000010 = "ovrp_SetTrackingOrientationEnabled";
  uStack0000000000000018 = 0x22;
  uStack0000000000000028 = 4;
  uStack000000000000002c = 0;
                    /* try { // try from 01b45f40 to 01c45f47 has its CatchHandler @ 01b460f8 */
  pcVar1 = (code *)thunk_FUN_00d625b4();
  *(code **)(unaff_x20 + 0x540) = pcVar1;
                    /* try { // try from 01b45f50 to 01c45f57 has its CatchHandler @ 01b460f4 */
  (*pcVar1)(unaff_w19);
                    /* try { // try from 01b45f60 to 01c45f7f has its CatchHandler @ 01b460fc */
  return;
}


