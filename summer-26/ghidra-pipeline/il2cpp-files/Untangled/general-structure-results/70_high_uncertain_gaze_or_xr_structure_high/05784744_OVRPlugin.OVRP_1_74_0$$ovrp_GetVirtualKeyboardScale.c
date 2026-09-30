/*
FUNCTION_NAME: OVRPlugin.OVRP_1_74_0$$ovrp_GetVirtualKeyboardScale
ENTRY_POINT: 05784744
PROGRAM: Untangled-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


bool OVRPlugin_OVRP_1_74_0__ovrp_GetVirtualKeyboardScale(void)

{
  int iVar1;
  code *pcVar2;
  long unaff_x20;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
                    /* try { // try from 0578475c to 0588475f has its CatchHandler @ 0578487c */
                    /* try { // try from 05784768 to 0588476b has its CatchHandler @ 05784878 */
  pcStack0000000000000000 = "ovrplatformloader";
  uStack0000000000000008 = 0x11;
                    /* try { // try from 05784770 to 05884777 has its CatchHandler @ 05784874 */
  pcStack0000000000000010 = "ovr_CowatchingState_GetInSession";
  uStack0000000000000018 = 0x20;
  uStack0000000000000028 = 8;
  uStack0000000000000020 = DAT_013f53a0;
  uStack000000000000002c = 0;
                    /* try { // try from 05784780 to 05884783 has its CatchHandler @ 05784864 */
  pcVar2 = (code *)thunk_FUN_02ef1ac4();
  *(code **)(unaff_x20 + 0x998) = pcVar2;
                    /* try { // try from 05784790 to 058847af has its CatchHandler @ 05784870 */
  iVar1 = (*pcVar2)();
  return iVar1 != 0;
}


