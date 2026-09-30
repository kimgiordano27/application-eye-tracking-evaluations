/*
FUNCTION_NAME: OVRPlugin.OVRP_1_111_0$$ovrp_DestroyEnvironmentRaycaster
ENTRY_POINT: 06113dd0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_111_0__ovrp_DestroyEnvironmentRaycaster(void)

{
  int iVar1;
  code *pcVar2;
  long unaff_x20;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  pcStack0000000000000010 = "ovr_LivestreamingStatus_GetLivestreamingEnabled";
  uStack0000000000000018 = 0x2f;
  uStack0000000000000020 = DAT_0164fd00;
  uStack0000000000000028 = 8;
  uStack000000000000002c = 0;
  pcVar2 = (code *)thunk_FUN_036800c0();
  *(code **)(unaff_x20 + 4000) = pcVar2;
  iVar1 = (*pcVar2)();
                    /* try { // try from 06113e20 to 06213e97 has its CatchHandler @ 06113f60 */
  return iVar1 != 0;
}


