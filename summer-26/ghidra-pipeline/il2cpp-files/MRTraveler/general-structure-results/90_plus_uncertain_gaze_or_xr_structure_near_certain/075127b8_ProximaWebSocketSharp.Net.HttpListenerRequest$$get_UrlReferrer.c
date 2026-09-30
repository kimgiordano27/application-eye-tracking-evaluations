/*
FUNCTION_NAME: ProximaWebSocketSharp.Net.HttpListenerRequest$$get_UrlReferrer
ENTRY_POINT: 075127b8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 90
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined4
ProximaWebSocketSharp_Net_HttpListenerRequest__get_UrlReferrer(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  long unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  char *in_stack_00000020;
  undefined8 in_stack_00000028;
  char *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long lStack0000000000000078;
  
  lStack0000000000000078 = param_1;
  if (*(long *)(unaff_x23 + 0xb90) == 0) {
    in_stack_00000020 = "OVRPlugin";
    in_stack_00000028 = 9;
    in_stack_00000030 = "ovrp_GetRenderModelProperties";
    in_stack_00000038 = 0x1d;
    in_stack_00000040 = DAT_018ae560;
    in_stack_00000048 = CONCAT35(in_stack_00000048._5_3_,0x10);
    uVar2 = thunk_FUN_03cf54f0(&stack0x00000020);
    *(undefined8 *)(unaff_x23 + 0xb90) = uVar2;
  }
  uVar2 = thunk_FUN_03cf5810(param_2);
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = (char *)0x0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = (char *)0x0;
  uVar1 = (**(code **)(unaff_x23 + 0xb90))(uVar2,&stack0x00000020);
  thunk_FUN_03cf5804(uVar2);
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  FUN_03bf6ee8(&stack0x00000020,&stack0x00000008);
  unaff_x19[2] = in_stack_00000018;
  unaff_x19[1] = in_stack_00000010;
  *unaff_x19 = in_stack_00000008;
  thunk_FUN_03d233cc();
  if (*(long *)(unaff_x22 + 0x28) == lStack0000000000000078) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


