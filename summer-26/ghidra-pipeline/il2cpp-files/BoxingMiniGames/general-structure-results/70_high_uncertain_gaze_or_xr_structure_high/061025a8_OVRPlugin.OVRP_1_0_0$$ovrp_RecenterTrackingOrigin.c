/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_RecenterTrackingOrigin
ENTRY_POINT: 061025a8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_0_0__ovrp_RecenterTrackingOrigin(long param_1)

{
  code *pcVar1;
  long in_x9;
  long unaff_x19;
  long lStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  lStack0000000000000010 = param_1 + 0x49f;
  uStack0000000000000020 = *(undefined8 *)(in_x9 + 0xd00);
  uStack0000000000000018 = 0x15;
  uStack0000000000000028 = 0;
  uStack000000000000002c = 0;
  pcVar1 = (code *)thunk_FUN_036800c0();
  *(code **)(unaff_x19 + 0xe20) = pcVar1;
  (*pcVar1)();
  return;
}


