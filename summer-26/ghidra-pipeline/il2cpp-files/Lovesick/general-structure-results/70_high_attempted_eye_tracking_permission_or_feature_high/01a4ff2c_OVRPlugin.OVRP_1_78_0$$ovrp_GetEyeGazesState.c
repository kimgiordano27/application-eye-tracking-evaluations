/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeGazesState
ENTRY_POINT: 01a4ff2c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetEyeGazesState(void)

{
  code *pcVar1;
  long in_x12;
  long unaff_x20;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
                    /* try { // try from 01a4ff2c to 01b4ff2f has its CatchHandler @ 01a50064 */
  uStack0000000000000020 = *(undefined8 *)(in_x12 + 0x478);
                    /* try { // try from 01a4ff30 to 01b4ff33 has its CatchHandler @ 01a50060 */
                    /* try { // try from 01a4ff34 to 01b4ff37 has its CatchHandler @ 01a5005c */
                    /* try { // try from 01a4ff38 to 01b4ff3b has its CatchHandler @ 01a50058 */
                    /* try { // try from 01a4ff3c to 01b4ff3f has its CatchHandler @ 01a50054 */
                    /* try { // try from 01a4ff40 to 01b4ff43 has its CatchHandler @ 01a50050 */
                    /* try { // try from 01a4ff44 to 01b4ff47 has its CatchHandler @ 01a5004c */
                    /* try { // try from 01a4ff48 to 01b4ff4b has its CatchHandler @ 01a50048 */
                    /* try { // try from 01a4ff4c to 01b4ff4f has its CatchHandler @ 01a50044 */
                    /* try { // try from 01a4ff50 to 01b4ff53 has its CatchHandler @ 01a50040 */
  pcStack0000000000000000 = "ovrplatformloader";
  uStack0000000000000008 = 0x11;
                    /* try { // try from 01a4ff54 to 01b4ff57 has its CatchHandler @ 01a5003c */
  pcStack0000000000000010 = "ovr_ApplicationInvite_GetDestination";
  uStack0000000000000018 = 0x24;
                    /* try { // try from 01a4ff58 to 01b4ff5b has its CatchHandler @ 01a50038 */
  uStack0000000000000028 = 8;
                    /* try { // try from 01a4ff5c to 01b4ff5f has its CatchHandler @ 01a50034 */
                    /* try { // try from 01a4ff60 to 01b4ff63 has its CatchHandler @ 01a50030 */
  uStack000000000000002c = 0;
                    /* try { // try from 01a4ff64 to 01b4ff67 has its CatchHandler @ 01a5002c */
  pcVar1 = (code *)thunk_FUN_00d625b4();
                    /* try { // try from 01a4ff68 to 01b4ff6b has its CatchHandler @ 01a50028 */
                    /* try { // try from 01a4ff6c to 01b4ff6f has its CatchHandler @ 01a50024 */
  *(code **)(unaff_x20 + 0x678) = pcVar1;
                    /* try { // try from 01a4ff70 to 01b4ff73 has its CatchHandler @ 01a50020 */
                    /* try { // try from 01a4ff74 to 01b4ff77 has its CatchHandler @ 01a5001c */
  (*pcVar1)();
                    /* try { // try from 01a4ff78 to 01b4ff7b has its CatchHandler @ 01a50018 */
                    /* try { // try from 01a4ff7c to 01b4ff7f has its CatchHandler @ 01a50014 */
                    /* try { // try from 01a4ff80 to 01b4ff83 has its CatchHandler @ 01a50010 */
                    /* try { // try from 01a4ff84 to 01b4ff87 has its CatchHandler @ 01a5000c */
  return;
}


