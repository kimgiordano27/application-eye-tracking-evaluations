/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$IsErrorHandled
ENTRY_POINT: 074b1fb0
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalBase__IsErrorHandled
               (undefined1 param_1 [16])

{
  bool in_ZR;
  bool in_CY;
  uint uVar1;
  ulong uVar2;
  undefined4 *unaff_x19;
  uint unaff_w20;
  long unaff_x24;
  long unaff_x25;
  long *plVar3;
  undefined8 uVar4;
  undefined1 uStack0000000000000008;
  undefined1 uStack000000000000000c;
  undefined8 uStack0000000000000010;
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
  undefined2 uStack0000000000000078;
  undefined6 uStack000000000000007a;
  undefined2 in_stack_00000080;
  long in_stack_00000098;
  
  uVar4 = param_1._8_8_;
  uStack0000000000000010 = param_1._0_8_;
  plVar3 = *(long **)(unaff_x25 + 0x2c0);
  uStack000000000000000c = 0;
  uStack0000000000000008 = 0;
  if (in_CY && !in_ZR) {
    *unaff_x19 = 0;
    if ((unaff_w20 >> 9 & 1) == 0) {
      in_stack_00000080 = param_1._6_2_;
      uStack0000000000000078 = param_1._8_2_;
      uStack000000000000007a = param_1._10_6_;
      in_stack_00000020 = uStack0000000000000010;
      in_stack_00000028 = uVar4;
      in_stack_00000030 = uStack0000000000000010;
      in_stack_00000038 = uVar4;
      in_stack_00000040 = uStack0000000000000010;
      in_stack_00000048 = uVar4;
      in_stack_00000050 = uStack0000000000000010;
      in_stack_00000058 = uVar4;
      in_stack_00000060 = uStack0000000000000010;
      in_stack_00000068 = uVar4;
      in_stack_00000070 = uStack0000000000000010;
      if (*(int *)(*plVar3 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar2 = FUN_074c2090();
      uVar1 = 0;
      if ((uVar2 & 1) != 0) {
        if (*(int *)(*plVar3 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar1 = FUN_074bf270(&stack0x00000010);
      }
    }
    else {
      uStack0000000000000008 = 0;
      if (*(int *)(*plVar3 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar1 = FUN_074bfbac();
    }
  }
  else {
    uStack000000000000000c = 0;
    if (*(int *)(*plVar3 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar1 = FUN_074bf544();
  }
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000098) {
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


