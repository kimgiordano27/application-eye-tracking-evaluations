/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_TypeNameAssemblyFormat
ENTRY_POINT: 04f3bed8
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_TypeNameAssemblyFormat(void)

{
  ulong uVar1;
  undefined1 uVar2;
  uint unaff_w19;
  long unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000008;
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
  undefined2 uStack0000000000000078;
  undefined6 uStack000000000000007a;
  undefined2 uStack0000000000000080;
  undefined8 uStack0000000000000082;
  long in_stack_00000098;
  
  if ((unaff_w19 >> 9 & 1) == 0) {
    uStack0000000000000082 = 0;
    uStack0000000000000080 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    uStack0000000000000078 = 0;
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
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04f3b3a4();
    uVar1 = FUN_04f3a88c(&stack0x00000010,(long)&stack0x00000008 + 4);
    if ((uVar1 & 1) != 0) {
LAB_04f3bf78:
      uVar1 = (ulong)in_stack_00000008._4_4_;
      if (*(long *)(unaff_x23 + 0x28) == in_stack_00000098) {
        return;
      }
      goto LAB_04f3bfc4;
    }
    FUN_028be084(*unaff_x24);
    uVar2 = 1;
  }
  else {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar1 = FUN_04f3b054();
    if ((uVar1 & 1) != 0) goto LAB_04f3bf78;
    uVar2 = 0;
    FUN_028be084(*unaff_x24);
  }
  uVar1 = FUN_04f3afcc(uVar2,*(undefined8 *)PTR_DAT_065f7538);
LAB_04f3bfc4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


