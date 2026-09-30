/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ShouldSetPropertyValue
ENTRY_POINT: 0624f488
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ShouldSetPropertyValue
               (undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *unaff_x19;
  long unaff_x24;
  long unaff_x25;
  undefined1 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined2 in_stack_00000078;
  undefined6 uStack000000000000007a;
  undefined2 in_stack_00000080;
  undefined8 uStack0000000000000082;
  long in_stack_00000098;
  
  if ((*(byte *)(unaff_x25 + 0x9fd) & 1) == 0) {
    FUN_0373b518(PTR_DAT_07daae20);
    *(undefined1 *)(unaff_x25 + 0x9fd) = 1;
  }
  puVar1 = PTR_DAT_07daae20;
  uStack000000000000000c = 0;
  uStack0000000000000082 = 0;
  in_stack_00000080 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  uStack000000000000007a = 0;
  in_stack_00000070 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  if (param_3 < 8) {
    uStack000000000000000c = 0;
    if (*(int *)(*(long *)PTR_DAT_07daae20 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar2 = FUN_0624e360(param_1,param_2,param_3);
  }
  else if ((param_3 >> 9 & 1) == 0) {
    uStack0000000000000082 = 0;
    in_stack_00000080 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    in_stack_00000078 = 0;
    uStack000000000000007a = 0;
    in_stack_00000070 = 0;
    in_stack_00000048 = 0;
    in_stack_00000040 = 0;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    in_stack_00000028 = 0;
    in_stack_00000020 = 0;
    in_stack_00000038 = 0;
    in_stack_00000030 = 0;
    in_stack_00000018 = 0;
    in_stack_00000010 = 0;
    *unaff_x19 = 0;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar3 = FUN_0624f10c(param_1,param_2,param_3,&stack0x00000010);
    uVar2 = 0;
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar2 = FUN_0624c534(&stack0x00000010);
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_07daae20 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar2 = FUN_0624d6c4(param_1,param_2,param_3);
  }
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000098) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


