/*
FUNCTION_NAME: Sirenix.Serialization.ByteSerializer$$WriteValue
ENTRY_POINT: 0620bbf0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4 Sirenix_Serialization_ByteSerializer__WriteValue(undefined8 param_1)

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
  
  lStack0000000000000078 = *(long *)(unaff_x22 + 0x28);
  if (*(long *)(unaff_x23 + 0xee8) == 0) {
    in_stack_00000020 = "OVRPlugin";
    in_stack_00000028 = 9;
    in_stack_00000030 = "ovrp_GetRenderModelProperties";
    in_stack_00000038 = 0x1d;
    in_stack_00000040 = DAT_0164fd00;
    in_stack_00000048 = CONCAT35(in_stack_00000048._5_3_,0x10);
    uVar2 = thunk_FUN_036800c0(&stack0x00000020);
    *(undefined8 *)(unaff_x23 + 0xee8) = uVar2;
  }
  uVar2 = thunk_FUN_0368036c(param_1);
  in_stack_00000038 = 0;
  in_stack_00000030 = (char *)0x0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = (char *)0x0;
  uVar1 = (**(code **)(unaff_x23 + 0xee8))(uVar2,&stack0x00000020);
  thunk_FUN_03680360(uVar2);
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  FUN_035a4cfc(&stack0x00000020,&stack0x00000008);
  unaff_x19[1] = in_stack_00000010;
  *unaff_x19 = in_stack_00000008;
  unaff_x19[2] = in_stack_00000018;
  thunk_FUN_036b7ad0();
  FUN_035a4da0(&stack0x00000020);
  if (*(long *)(unaff_x22 + 0x28) == lStack0000000000000078) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


