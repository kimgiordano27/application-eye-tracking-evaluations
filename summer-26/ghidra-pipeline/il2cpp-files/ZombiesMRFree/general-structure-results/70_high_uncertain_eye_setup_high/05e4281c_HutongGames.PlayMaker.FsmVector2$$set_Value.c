/*
FUNCTION_NAME: HutongGames.PlayMaker.FsmVector2$$set_Value
ENTRY_POINT: 05e4281c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void HutongGames_PlayMaker_FsmVector2__set_Value(void)

{
  code *pcVar1;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  long unaff_x23;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  pcStack0000000000000000 = "OVRPlugin";
  uStack0000000000000008 = 9;
  pcStack0000000000000010 = "ovrp_QplMarkerPointCached";
  uStack0000000000000018 = 0x19;
  uStack0000000000000028 = 0x14;
  uStack0000000000000020 = DAT_0136ac58;
  uStack000000000000002c = 0;
  pcVar1 = (code *)thunk_FUN_03010ac8();
  *(code **)(unaff_x23 + 0xfd8) = pcVar1;
  (*pcVar1)(unaff_w22,unaff_w21,unaff_w20);
  return;
}


