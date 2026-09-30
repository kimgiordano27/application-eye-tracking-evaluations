/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolveTypeName
ENTRY_POINT: 0177e1fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolveTypeName
               (undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
               undefined8 *param_5)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
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
  long lStack0000000000000098;
  
  lVar1 = tpidr_el0;
  lStack0000000000000098 = *(long *)(lVar1 + 0x28);
  if ((DAT_03778db9 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Linq_Expressions_Interpreter_LightCompiler_CompileMember__);
    DAT_03778db9 = 1;
  }
  puVar2 = Method_System_Linq_Expressions_Interpreter_LightCompiler_CompileMember__;
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
    if (*(int *)(*(long *)Method_System_Linq_Expressions_Interpreter_LightCompiler_CompileMember__ +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar3 = FUN_0177d0b8(param_1,param_2,param_3,param_4,param_5,&stack0x0000000c);
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
    *param_5 = 0;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_0177deb4(param_1,param_2,param_3,&stack0x00000010,param_4,0);
    uVar3 = 0;
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar3 = FUN_0177b178(&stack0x00000010,param_5);
    }
  }
  else {
    if (*(int *)(*(long *)Method_System_Linq_Expressions_Interpreter_LightCompiler_CompileMember__ +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar3 = FUN_0177c3cc(param_1,param_2,param_3);
  }
  if (*(long *)(lVar1 + 0x28) == lStack0000000000000098) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


