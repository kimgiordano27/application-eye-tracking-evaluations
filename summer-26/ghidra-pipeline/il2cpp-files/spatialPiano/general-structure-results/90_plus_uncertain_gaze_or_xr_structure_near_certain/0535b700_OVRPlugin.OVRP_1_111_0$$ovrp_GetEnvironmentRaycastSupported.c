/*
FUNCTION_NAME: OVRPlugin.OVRP_1_111_0$$ovrp_GetEnvironmentRaycastSupported
ENTRY_POINT: 0535b700
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 102
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_111_0__ovrp_GetEnvironmentRaycastSupported(void)

{
  code *pcVar1;
  long unaff_x20;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
                    /* try { // try from 0535b704 to 0545b707 has its CatchHandler @ 0535b720 */
                    /* try { // try from 0535b708 to 0545b723 has its CatchHandler @ 0535b074 */
  pcStack0000000000000010 = "ovr_User_LaunchFriendRequestFlow";
  uStack0000000000000018 = 0x20;
                    /* catch() { ... } // from try @ 0535b704 with catch @ 0535b720 */
  uStack0000000000000020 = DAT_011b1530;
                    /* try { // try from 0535b724 to 0545b72b has its CatchHandler @ 0535b734 */
  uStack0000000000000028 = 8;
  uStack000000000000002c = 0;
                    /* try { // try from 0535b72c to 0545b737 has its CatchHandler @ 0535b074 */
  pcVar1 = (code *)thunk_FUN_02f454a0();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0535b6dc with catch @ 0535b734
                       catch(type#2 @ 00000000) { ... } // from try @ 0535b724 with catch @ 0535b734
                        */
  *(code **)(unaff_x20 + 0xdd8) = pcVar1;
  (*pcVar1)();
  return;
}


