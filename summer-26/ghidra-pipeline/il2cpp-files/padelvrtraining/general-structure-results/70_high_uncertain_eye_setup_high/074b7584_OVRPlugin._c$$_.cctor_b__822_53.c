/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__822_53
ENTRY_POINT: 074b7584
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__822_53(void)

{
  code *pcVar1;
  long unaff_x20;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
                    /* try { // try from 074b75a8 to 075b75e7 has its CatchHandler @ 074b7278 */
  pcStack0000000000000000 = "ovrplatformloader";
  uStack0000000000000008 = 0x11;
  pcStack0000000000000010 = "ovr_Message_GetInstalledApplicationArray";
  uStack0000000000000018 = 0x28;
  uStack0000000000000028 = 8;
  uStack0000000000000020 = DAT_01910f80;
  uStack000000000000002c = 0;
  pcVar1 = (code *)thunk_FUN_03d2f1fc();
  *(code **)(unaff_x20 + 0xfb8) = pcVar1;
  (*pcVar1)();
  return;
}


