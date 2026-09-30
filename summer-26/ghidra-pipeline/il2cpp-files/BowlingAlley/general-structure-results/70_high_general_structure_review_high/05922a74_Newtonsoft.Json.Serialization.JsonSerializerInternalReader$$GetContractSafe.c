/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetContractSafe
ENTRY_POINT: 05922a74
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_6
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContractSafe
               (undefined1 param_1 [16])

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  bool in_ZR;
  bool in_CY;
  undefined1 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  uint unaff_w19;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_000000a8;
  
  uStack0000000000000028 = param_1._8_8_;
  uStack0000000000000020 = param_1._0_8_;
  if (in_CY && !in_ZR) {
    if ((unaff_w19 >> 9 & 1) != 0) {
      in_stack_00000010._4_1_ = 0;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar4 = FUN_0592e144();
      uVar3 = in_stack_00000010._4_1_;
      goto joined_r0x05922b60;
    }
    lVar5 = *unaff_x24;
    *(undefined8 *)(unaff_x25 + 0x72) = 0;
    *(undefined8 *)(unaff_x25 + 0x6a) = 0;
    in_stack_00000078 = 0;
    in_stack_00000070 = 0;
    in_stack_00000088 = 0;
    in_stack_00000080 = 0;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    in_stack_00000038 = 0;
    in_stack_00000030 = 0;
    in_stack_00000048 = 0;
    in_stack_00000040 = 0;
    uStack0000000000000028 = 0;
    uStack0000000000000020 = 0;
    in_stack_00000018 = 0;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_0592da20();
    puVar1 = (undefined1 *)&stack0x00000020;
    puVar2 = &stack0x00000018;
    register0x00000008 = (BADSPACEBASE *)&stack0x00000018;
    uVar4 = FUN_0592ce50(puVar1,puVar2);
    if ((uVar4 & 1) == 0) {
      FUN_02d9d3e0(*unaff_x24);
      uVar3 = 1;
      goto LAB_05922ba8;
    }
  }
  else {
    in_stack_00000010._4_1_ = 0;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    register0x00000008 = (BADSPACEBASE *)&stack0x00000008;
    uVar4 = FUN_0592db58();
    uVar3 = in_stack_00000010._4_1_;
joined_r0x05922b60:
    in_stack_00000010._4_1_ = uVar3;
    if ((uVar4 & 1) == 0) {
      FUN_02d9d3e0(*unaff_x24);
LAB_05922ba8:
      uVar6 = FUN_0592d648(uVar3,*(undefined8 *)PTR_DAT_07296b68);
      goto Newtonsoft_Json_Serialization_JsonSerializerInternalReader__Deserialize;
    }
  }
  uVar6 = *(undefined8 *)register0x00000008;
  if (*(long *)(unaff_x23 + 0x28) == in_stack_000000a8) {
    return;
  }
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__Deserialize:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


