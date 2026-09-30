/*
FUNCTION_NAME: Sirenix.Serialization.BooleanSerializer$$WriteValue
ENTRY_POINT: 01b41854
PROGRAM: Lovesick-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Sirenix_Serialization_BooleanSerializer__WriteValue(code *param_1,undefined8 *param_2)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  char *in_stack_00000060;
  undefined8 in_stack_00000068;
  char *in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined1 uStack000000000000008c;
  
  if (param_1 == (code *)0x0) {
    in_stack_00000060 = "OVRPlugin";
    in_stack_00000068 = 9;
    in_stack_00000070 = "ovrp_Media_SetHeadsetControllerPose";
    in_stack_00000078 = 0x23;
    uStack0000000000000088 = 0x54;
    in_stack_00000080 = DAT_028aa478;
    uStack000000000000008c = 0;
    param_1 = (code *)thunk_FUN_00d625b4(&stack0x00000060);
    *(code **)(unaff_x22 + 0xb90) = param_1;
  }
  uStack0000000000000054 = *(undefined8 *)((long)param_2 + 0x14);
  in_stack_00000040 = *param_2;
  in_stack_00000050 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0xc) >> 0x20);
  in_stack_00000048 = (undefined4)param_2[1];
  uStack000000000000004c = (undefined4)((ulong)param_2[1] >> 0x20);
  uStack0000000000000034 = *(undefined8 *)((long)unaff_x20 + 0x14);
  in_stack_00000020 = *unaff_x20;
  in_stack_00000030 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc) >> 0x20);
  in_stack_00000028 = (undefined4)unaff_x20[1];
  uStack000000000000002c = (undefined4)((ulong)unaff_x20[1] >> 0x20);
  uStack0000000000000014 = *(undefined8 *)(unaff_x19 + 0x14);
  uStack000000000000000c = (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 8) >> 0x20);
  (*param_1)(&stack0x00000040,&stack0x00000020);
  return;
}


