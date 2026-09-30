/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CoerceEmptyStringToNull
ENTRY_POINT: 04f2db4c
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CoerceEmptyStringToNull(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  ulong uVar4;
  uint unaff_w19;
  long unaff_x23;
  long *unaff_x24;
  undefined1 uStack0000000000000008;
  undefined4 uStack000000000000000c;
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
    uStack000000000000000c = 0;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04f3b3a4();
    puVar1 = &stack0x00000010;
    puVar2 = (undefined8 *)&stack0x00000008;
    register0x00000008 = (BADSPACEBASE *)((long)&stack0x00000008 + 4);
    uVar4 = FUN_04f3a718(puVar1,(long)puVar2 + 4);
    if ((uVar4 & 1) != 0) {
LAB_04f2dbf8:
      uVar4 = (ulong)*(uint *)register0x00000008;
      if (*(long *)(unaff_x23 + 0x28) == in_stack_00000098) {
        return;
      }
      goto LAB_04f2dc44;
    }
    FUN_028be084(*unaff_x24);
    uVar3 = 1;
  }
  else {
    uStack0000000000000008 = 0;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar4 = FUN_04f3b054();
    uVar3 = uStack0000000000000008;
    if ((uVar4 & 1) != 0) goto LAB_04f2dbf8;
    FUN_028be084(*unaff_x24);
  }
  uVar4 = FUN_04f3afcc(uVar3,*(undefined8 *)PTR_DAT_065f7528);
LAB_04f2dc44:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


