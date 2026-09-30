/*
FUNCTION_NAME: Unity.Services.Vivox.vx_resp_sessiongroup_reset_focus_t$$Dispose
ENTRY_POINT: 09117c14
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;ui_interaction;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5
*/


undefined8 Unity_Services_Vivox_vx_resp_sessiongroup_reset_focus_t__Dispose(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  pcStack0000000000000000 = "VivoxNative";
  uStack0000000000000008 = 0xb;
  pcStack0000000000000010 =
       "CSharp_UnityfServicesfVivox_vx_req_sessiongroup_add_session_t_session_handle_get___";
  uStack0000000000000018 = 0x53;
  uStack0000000000000028 = 8;
  uStack000000000000002c = 0;
  uStack0000000000000020 = param_1;
  pcVar1 = (code *)thunk_FUN_044854c8();
  *(code **)(unaff_x20 + 0xd18) = pcVar1;
  uVar2 = (*pcVar1)();
  uVar3 = thunk_FUN_044543ec();
  thunk_FUN_044857dc(uVar2);
  return uVar3;
}


