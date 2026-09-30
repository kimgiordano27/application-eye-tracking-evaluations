/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__822_22
ENTRY_POINT: 074b6870
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


void OVRPlugin_<>c__<_cctor>b__822_22(void)

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
  
                    /* catch() { ... } // from try @ 074b6868 with catch @ 074b688c */
                    /* try { // try from 074b6894 to 075b689b has its CatchHandler @ 074b68b0 */
  pcStack0000000000000000 = "ovrplatformloader";
  uStack0000000000000008 = 0x11;
                    /* try { // try from 074b689c to 075b68a7 has its CatchHandler @ 074b672c */
  pcStack0000000000000010 = "ovr_Message_GetAchievementDefinitionArray";
  uStack0000000000000018 = 0x29;
  uStack0000000000000028 = 8;
  uStack0000000000000020 = DAT_01910f80;
                    /* try { // try from 074b68a8 to 075b68af has its CatchHandler @ 074b68b0 */
  uStack000000000000002c = 0;
  pcVar1 = (code *)thunk_FUN_03d2f1fc();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 074b6894 with catch @ 074b68b0
                       catch(type#2 @ 00000000) { ... } // from try @ 074b68a8 with catch @ 074b68b0
                        */
  *(code **)(unaff_x20 + 0xee0) = pcVar1;
  (*pcVar1)();
  return;
}


