/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__796_46
ENTRY_POINT: 01a55ddc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool OVRPlugin_<>c__<_cctor>b__796_46(void)

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
  
  pcStack0000000000000000 = "ovrplatformloader";
  uStack0000000000000008 = 0x11;
  pcStack0000000000000010 = "ovr_LaunchFriendRequestFlowResult_GetDidSendRequest";
  uStack0000000000000018 = 0x33;
  uStack0000000000000028 = 8;
  uStack0000000000000020 = DAT_028aa478;
  uStack000000000000002c = 0;
  pcVar2 = (code *)thunk_FUN_00d625b4();
  *(code **)(unaff_x20 + 0xd18) = pcVar2;
  iVar1 = (*pcVar2)();
  return iVar1 != 0;
}


