/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetCurrentTrackingTransformPose
ENTRY_POINT: 05dae048
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_GetCurrentTrackingTransformPose(void)

{
  code *pcVar1;
  long in_x12;
  long unaff_x21;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  uStack0000000000000020 = *(undefined8 *)(in_x12 + 0xc48);
  pcStack0000000000000000 = "ovrplatformloader";
  uStack0000000000000008 = 0x11;
  pcStack0000000000000010 = "ovr_ChallengeOptions_SetIncludePastChallenges";
  uStack0000000000000018 = 0x2d;
  uStack0000000000000028 = 0xc;
  uStack000000000000002c = 0;
  pcVar1 = (code *)Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_Object_op_Inequality();
  *(code **)(unaff_x21 + 0x5a8) = pcVar1;
  (*pcVar1)();
  return;
}


