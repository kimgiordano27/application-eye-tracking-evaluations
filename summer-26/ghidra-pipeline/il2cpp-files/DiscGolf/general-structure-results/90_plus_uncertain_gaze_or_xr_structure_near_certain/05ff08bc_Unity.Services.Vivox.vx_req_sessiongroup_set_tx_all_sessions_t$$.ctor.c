/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_sessiongroup_set_tx_all_sessions_t$$.ctor
ENTRY_POINT: 05ff08bc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 96
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


void Unity_Services_Vivox_vx_req_sessiongroup_set_tx_all_sessions_t___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 in_w8;
  undefined1 unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  ulong uStack0000000000000048;
  undefined8 uStack0000000000000050;
  
  *(undefined1 *)(unaff_x22 + 0x94d) = in_w8;
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<VivoxServiceInternal_<LogoutAsync>d__177>__
  ;
  puVar2 = OVRPlugin_OVRP_1_97_0_TypeInfo;
  puVar1 = OVRPlugin_OVRP_1_95_0_TypeInfo;
  uStack0000000000000050 = 0;
  uStack0000000000000048 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_040b192c(&stack0x00000008,*(undefined8 *)puVar1);
  uStack0000000000000030 = in_stack_00000010;
  uStack0000000000000028 = in_stack_00000008;
  uStack0000000000000038 = in_stack_00000018;
  LeanTween__value((ulong)&stack0x00000020 | 8,0);
  LeanTween__value(&stack0x00000040);
  uStack0000000000000048 = CONCAT71(uStack0000000000000048._1_7_,unaff_w20) & 0xffffffffffffff01;
  uStack0000000000000020 = CONCAT44(uStack0000000000000020._4_4_,0xffffffff);
  FUN_032019bc((ulong)&stack0x00000020 | 8,&stack0x00000020,*(undefined8 *)puVar3);
  FUN_040b1940((ulong)&stack0x00000020 | 8,*(undefined8 *)puVar2);
  return;
}


