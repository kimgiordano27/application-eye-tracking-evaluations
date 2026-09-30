/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$IsErrorHandled
ENTRY_POINT: 067502a0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalBase__IsErrorHandled(ulong param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *unaff_x19;
  uint unaff_w20;
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
  
  if ((param_1 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084a5b08);
    *(undefined1 *)(unaff_x25 + 0xb3c) = 1;
  }
  puVar1 = PTR_DAT_084a5b08;
  uStack0000000000000082 = 0;
  in_stack_00000080 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  uStack000000000000007a = 0;
  in_stack_00000070 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  uStack000000000000000c = 0;
  if (unaff_w20 < 8) {
    uStack000000000000000c = 0;
    if (*(int *)(*(long *)PTR_DAT_084a5b08 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar2 = FUN_0675b56c();
  }
  else {
    *unaff_x19 = 0;
    if ((unaff_w20 >> 9 & 1) == 0) {
      uStack0000000000000082 = 0;
      in_stack_00000080 = 0;
      in_stack_00000028 = 0;
      in_stack_00000020 = 0;
      in_stack_00000038 = 0;
      in_stack_00000030 = 0;
      in_stack_00000048 = 0;
      in_stack_00000040 = 0;
      in_stack_00000058 = 0;
      in_stack_00000050 = 0;
      in_stack_00000068 = 0;
      in_stack_00000060 = 0;
      in_stack_00000078 = 0;
      uStack000000000000007a = 0;
      in_stack_00000070 = 0;
      in_stack_00000018 = 0;
      in_stack_00000010 = 0;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar3 = FUN_0675d5d4();
      uVar2 = 0;
      if ((uVar3 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar2 = FUN_0675a870(&stack0x00000010);
      }
    }
    else {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar2 = FUN_0675bb2c();
    }
  }
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000098) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


