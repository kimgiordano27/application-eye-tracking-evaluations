/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_MetadataPropertyHandling
ENTRY_POINT: 04f3be90
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_MetadataPropertyHandling
               (undefined1 param_1 [16])

{
  bool in_ZR;
  bool in_CY;
  ulong uVar1;
  undefined1 uVar2;
  uint unaff_w19;
  long unaff_x23;
  long *unaff_x24;
  uint uStack000000000000000c;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
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
  
  uStack0000000000000018 = param_1._8_8_;
  uStack0000000000000010 = param_1._0_8_;
  uStack000000000000000c = 0;
  uStack0000000000000020 = uStack0000000000000010;
  uStack0000000000000028 = uStack0000000000000018;
  uStack0000000000000030 = uStack0000000000000010;
  uStack0000000000000038 = uStack0000000000000018;
  if (in_CY && !in_ZR) {
    if ((unaff_w19 >> 9 & 1) != 0) {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar1 = FUN_04f3b054();
      goto joined_r0x04f3bf74;
    }
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
    uStack0000000000000028 = 0;
    uStack0000000000000020 = 0;
    uStack0000000000000038 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000018 = 0;
    uStack0000000000000010 = 0;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04f3b3a4();
    uVar1 = FUN_04f3a88c(&stack0x00000010,&stack0x0000000c);
    if ((uVar1 & 1) == 0) {
      FUN_028be084(*unaff_x24);
      uVar2 = 1;
      goto FUN_04f3bfbc;
    }
  }
  else {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar1 = FUN_04f3bfc8();
joined_r0x04f3bf74:
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      FUN_028be084(*unaff_x24);
FUN_04f3bfbc:
      uVar1 = FUN_04f3afcc(uVar2,*(undefined8 *)PTR_DAT_065f7538);
      goto LAB_04f3bfc4;
    }
  }
  uVar1 = (ulong)uStack000000000000000c;
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000098) {
    return;
  }
LAB_04f3bfc4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


