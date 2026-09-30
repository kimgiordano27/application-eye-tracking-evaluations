/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_TypeNameAssemblyFormat
ENTRY_POINT: 074eff04
PROGRAM: m3ar-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameAssemblyFormat
               (undefined1 param_1 [16])

{
  char cVar1;
  bool in_ZR;
  bool in_CY;
  ulong uVar2;
  uint unaff_w19;
  long unaff_x23;
  long unaff_x24;
  ulong *puVar3;
  undefined8 uVar4;
  char cStack0000000000000004;
  char cStack0000000000000008;
  uint uStack000000000000000c;
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
  puVar3 = *(ulong **)(unaff_x24 + 0x500);
  cStack0000000000000008 = '\0';
  cStack0000000000000004 = '\0';
  if (in_CY && !in_ZR) {
    if ((unaff_w19 >> 9 & 1) == 0) {
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
      if (*(int *)(*puVar3 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      FUN_074ef44c();
      uVar2 = FUN_074ee94c(&stack0x00000010,(long)&stack0x00000008 + 4);
      if ((uVar2 & 1) != 0) goto LAB_074f0010;
      uVar2 = *puVar3;
      if (*(int *)(uVar2 + 0xe4) == 0) {
        uVar2 = thunk_FUN_0408f364();
      }
      if (*(long *)(unaff_x23 + 0x28) != in_stack_00000098) goto LAB_074f0078;
      FUN_074ef08c(1,*(undefined8 *)PTR_DAT_08f9f678);
    }
    cStack0000000000000004 = '\0';
    if (*(int *)(*puVar3 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar2 = FUN_074ef114();
    if ((uVar2 & 1) != 0) goto LAB_074f0010;
    uVar2 = *puVar3;
    cVar1 = cStack0000000000000004;
  }
  else {
    cStack0000000000000008 = '\0';
    if (*(int *)(*puVar3 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar2 = FUN_074f007c();
    if ((uVar2 & 1) != 0) {
LAB_074f0010:
      uVar2 = (ulong)uStack000000000000000c;
      if (*(long *)(unaff_x23 + 0x28) == in_stack_00000098) {
        return;
      }
      goto LAB_074f0078;
    }
    uVar2 = *puVar3;
    cVar1 = cStack0000000000000008;
  }
  if (*(int *)(uVar2 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar2 = (ulong)(cVar1 != '\0');
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000098) {
    uVar2 = FUN_074ef08c(uVar2,*(undefined8 *)PTR_DAT_08f9f678);
  }
LAB_074f0078:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


