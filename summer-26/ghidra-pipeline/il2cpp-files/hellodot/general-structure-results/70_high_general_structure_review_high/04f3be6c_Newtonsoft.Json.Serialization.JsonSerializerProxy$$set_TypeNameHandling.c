/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_TypeNameHandling
ENTRY_POINT: 04f3be6c
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 uVar3;
  uint unaff_w19;
  long unaff_x23;
  long unaff_x24;
  uint uStack000000000000000c;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined2 uStack0000000000000078;
  undefined6 uStack000000000000007a;
  undefined2 uStack0000000000000080;
  undefined8 uStack0000000000000082;
  long in_stack_00000098;
  
  *(undefined1 *)(unaff_x24 + 0x6bb) = 1;
  puVar1 = PTR_DAT_065f73a8;
  uStack0000000000000082 = 0;
  uStack0000000000000080 = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000060 = 0;
  uStack0000000000000078 = 0;
  uStack000000000000007a = 0;
  uStack0000000000000070 = 0;
  uStack0000000000000048 = 0;
  uStack0000000000000040 = 0;
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
  uStack000000000000000c = 0;
  if (unaff_w19 < 8) {
    if (*(int *)(*(long *)PTR_DAT_065f73a8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar2 = FUN_04f3bfc8();
joined_r0x04f3bf74:
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      FUN_028be084(*(undefined8 *)puVar1);
FUN_04f3bfbc:
      uVar2 = FUN_04f3afcc(uVar3,*(undefined8 *)PTR_DAT_065f7538);
      goto LAB_04f3bfc4;
    }
  }
  else {
    if ((unaff_w19 >> 9 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_065f73a8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar2 = FUN_04f3b054();
      goto joined_r0x04f3bf74;
    }
    uStack0000000000000082 = 0;
    uStack0000000000000080 = 0;
    uStack0000000000000068 = 0;
    uStack0000000000000060 = 0;
    uStack0000000000000078 = 0;
    uStack000000000000007a = 0;
    uStack0000000000000070 = 0;
    uStack0000000000000048 = 0;
    uStack0000000000000040 = 0;
    uStack0000000000000058 = 0;
    uStack0000000000000050 = 0;
    uStack0000000000000028 = 0;
    uStack0000000000000020 = 0;
    uStack0000000000000038 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000018 = 0;
    uStack0000000000000010 = 0;
    if (*(int *)(*(long *)PTR_DAT_065f73a8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04f3b3a4();
    uVar2 = FUN_04f3a88c(&stack0x00000010,&stack0x0000000c);
    if ((uVar2 & 1) == 0) {
      FUN_028be084(*(undefined8 *)puVar1);
      uVar3 = 1;
      goto FUN_04f3bfbc;
    }
  }
  uVar2 = (ulong)uStack000000000000000c;
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000098) {
    return;
  }
LAB_04f3bfc4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


