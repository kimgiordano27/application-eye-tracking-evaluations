/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetNodeOrientationValid
ENTRY_POINT: 01a4aeac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 96
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_1;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_38_0__ovrp_GetNodeOrientationValid(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  long lStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  lStack0000000000000000 = param_1 + 0x340;
                    /* try { // try from 01a4aeb4 to 01b4aebf has its CatchHandler @ 01a4b654 */
                    /* try { // try from 01a4aec4 to 01b4aecf has its CatchHandler @ 01a4b650 */
  uStack0000000000000008 = 0x11;
  pcStack0000000000000010 = "ovr_GroupPresence_SetLobbySession";
  uStack0000000000000018 = 0x21;
  uStack0000000000000028 = 8;
  uStack000000000000002c = 0;
  uStack0000000000000020 = param_2;
  pcVar1 = (code *)thunk_FUN_00d625b4();
  *(code **)(unaff_x20 + 0x1e0) = pcVar1;
  (*pcVar1)();
                    /* try { // try from 01a4aefc to 01b4af03 has its CatchHandler @ 01a4b64c */
  return;
}


