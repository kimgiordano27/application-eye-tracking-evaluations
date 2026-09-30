/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_2$$ovrp_GetNodePose
ENTRY_POINT: 0610209c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_0_1_2__ovrp_GetNodePose(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x21;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  uStack0000000000000028 = 0x10;
  uStack000000000000002c = 0;
  uStack0000000000000010 = param_1;
  uStack0000000000000020 = param_2;
  uVar1 = thunk_FUN_036800c0();
  *(undefined8 *)(unaff_x21 + 0xdc8) = uVar1;
  uVar1 = thunk_FUN_0368036c();
  uVar2 = (**(code **)(unaff_x21 + 0xdc8))();
  thunk_FUN_03680360(uVar1);
  return uVar2;
}


