/*
FUNCTION_NAME: Unity.Services.Vivox.vx_resp_sessiongroup_unset_focus_t$$Dispose
ENTRY_POINT: 0911a0ac
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


undefined8
Unity_Services_Vivox_vx_resp_sessiongroup_unset_focus_t__Dispose(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  lStack0000000000000000 = param_1 + 0x1ea;
  uStack0000000000000008 = 0xb;
  pcStack0000000000000010 =
       "CSharp_UnityfServicesfVivox_vx_req_sessiongroup_set_session_3d_position_t_sessiongroup_handle_get___"
  ;
  uStack0000000000000018 = 100;
  uStack0000000000000028 = 8;
  uStack000000000000002c = 0;
  uStack0000000000000020 = param_2;
  pcVar1 = (code *)thunk_FUN_044854c8();
  *(code **)(unaff_x20 + 0xf48) = pcVar1;
  uVar2 = (*pcVar1)();
  uVar3 = thunk_FUN_044543ec();
  thunk_FUN_044857dc(uVar2);
  return uVar3;
}


