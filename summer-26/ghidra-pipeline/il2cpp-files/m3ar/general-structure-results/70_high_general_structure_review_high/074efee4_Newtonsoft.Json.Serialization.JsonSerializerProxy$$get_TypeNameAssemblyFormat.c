/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_TypeNameAssemblyFormat
ENTRY_POINT: 074efee4
PROGRAM: m3ar-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_TypeNameAssemblyFormat(void)

{
  char cVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  uint unaff_w19;
  long unaff_x23;
  char cStack0000000000000004;
  char cStack0000000000000008;
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
  
  puVar2 = PTR_DAT_08f9f500;
  uStack000000000000000c = 0;
  uStack0000000000000082 = 0;
  uStack0000000000000080 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000048 = 0;
  uStack0000000000000040 = 0;
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000060 = 0;
  uStack0000000000000078 = 0;
  uStack000000000000007a = 0;
  uStack0000000000000070 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
  cStack0000000000000008 = '\0';
  cStack0000000000000004 = '\0';
  if (unaff_w19 < 8) {
    cStack0000000000000008 = '\0';
    if (*(int *)(*(long *)PTR_DAT_08f9f500 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar3 = FUN_074f007c();
    if ((uVar3 & 1) != 0) {
LAB_074f0010:
      uVar3 = (ulong)uStack000000000000000c;
      if (*(long *)(unaff_x23 + 0x28) == in_stack_00000098) {
        return;
      }
      goto LAB_074f0078;
    }
    lVar4 = *(long *)puVar2;
    cVar1 = cStack0000000000000008;
  }
  else {
    if ((unaff_w19 >> 9 & 1) == 0) {
      uStack0000000000000082 = 0;
      uStack0000000000000080 = 0;
      uStack0000000000000028 = 0;
      uStack0000000000000020 = 0;
      uStack0000000000000038 = 0;
      uStack0000000000000030 = 0;
      uStack0000000000000048 = 0;
      uStack0000000000000040 = 0;
      uStack0000000000000058 = 0;
      uStack0000000000000050 = 0;
      uStack0000000000000068 = 0;
      uStack0000000000000060 = 0;
      uStack0000000000000078 = 0;
      uStack000000000000007a = 0;
      uStack0000000000000070 = 0;
      uStack0000000000000018 = 0;
      uStack0000000000000010 = 0;
      if (*(int *)(*(long *)PTR_DAT_08f9f500 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      FUN_074ef44c();
      uVar3 = FUN_074ee94c(&stack0x00000010,&stack0x0000000c);
      if ((uVar3 & 1) != 0) goto LAB_074f0010;
      uVar3 = *(ulong *)puVar2;
      if (*(int *)(uVar3 + 0xe4) == 0) {
        uVar3 = thunk_FUN_0408f364();
      }
      if (*(long *)(unaff_x23 + 0x28) != in_stack_00000098) goto LAB_074f0078;
      FUN_074ef08c(1,*(undefined8 *)PTR_DAT_08f9f678);
    }
    cStack0000000000000004 = '\0';
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar3 = FUN_074ef114();
    if ((uVar3 & 1) != 0) goto LAB_074f0010;
    lVar4 = *(long *)puVar2;
    cVar1 = cStack0000000000000004;
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar3 = (ulong)(cVar1 != '\0');
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000098) {
    uVar3 = FUN_074ef08c(uVar3,*(undefined8 *)PTR_DAT_08f9f678);
  }
LAB_074f0078:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


