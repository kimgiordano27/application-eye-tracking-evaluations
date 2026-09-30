/*
FUNCTION_NAME: OVRPlugin.OVRP_1_111_0$$ovrp_PerformEnvironmentRaycast
ENTRY_POINT: 06113e4c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_111_0__ovrp_PerformEnvironmentRaycast(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  uStack0000000000000008 = 0x11;
  pcStack0000000000000010 = "ovr_LivestreamingStatus_GetLivestreamingType";
  uStack0000000000000018 = 0x2c;
  uStack0000000000000020 = DAT_0164fd00;
  uStack0000000000000028 = 8;
  uStack000000000000002c = 0;
  uStack0000000000000000 = param_1;
  pcVar1 = (code *)thunk_FUN_036800c0();
  *(code **)(unaff_x20 + 0xfa8) = pcVar1;
  (*pcVar1)();
                    /* try { // try from 06113e9c to 06213f13 has its CatchHandler @ 06113f64 */
  return;
}


