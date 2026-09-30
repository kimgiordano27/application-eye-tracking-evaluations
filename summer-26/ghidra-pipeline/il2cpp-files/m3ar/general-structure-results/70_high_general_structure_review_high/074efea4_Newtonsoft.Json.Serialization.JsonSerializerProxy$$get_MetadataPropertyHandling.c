/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_MetadataPropertyHandling
ENTRY_POINT: 074efea4
PROGRAM: m3ar-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_MetadataPropertyHandling
               (undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x23;
  long unaff_x24;
  char cStack0000000000000004;
  char in_stack_00000008;
  uint uStack000000000000000c;
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
  
  lStack0000000000000098 = *(long *)(unaff_x23 + 0x28);
  if ((*(byte *)(unaff_x24 + 0xf23) & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f9f500);
    FUN_0403162c(PTR_DAT_08f9f678);
    *(undefined1 *)(unaff_x24 + 0xf23) = 1;
  }
  puVar2 = PTR_DAT_08f9f500;
  uStack000000000000000c = 0;
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
  in_stack_00000008 = '\0';
  cStack0000000000000004 = '\0';
  if (param_3 < 8) {
    in_stack_00000008 = '\0';
    if (*(int *)(*(long *)PTR_DAT_08f9f500 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar3 = FUN_074f007c(param_1,param_2,param_3,param_4,&stack0x0000000c,&stack0x00000008);
    if ((uVar3 & 1) != 0) {
LAB_074f0010:
      uVar3 = (ulong)uStack000000000000000c;
      if (*(long *)(unaff_x23 + 0x28) == lStack0000000000000098) {
        return;
      }
      goto LAB_074f0078;
    }
    lVar4 = *(long *)puVar2;
    cVar1 = in_stack_00000008;
  }
  else {
    if ((param_3 >> 9 & 1) == 0) {
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
      if (*(int *)(*(long *)PTR_DAT_08f9f500 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      FUN_074ef44c(param_1,param_2,param_3,&stack0x00000010,param_4,0);
      uVar3 = FUN_074ee94c(&stack0x00000010,&stack0x0000000c);
      if ((uVar3 & 1) != 0) goto LAB_074f0010;
      uVar3 = *(ulong *)puVar2;
      if (*(int *)(uVar3 + 0xe4) == 0) {
        uVar3 = thunk_FUN_0408f364();
      }
      if (*(long *)(unaff_x23 + 0x28) != lStack0000000000000098) goto LAB_074f0078;
      FUN_074ef08c(1,*(undefined8 *)PTR_DAT_08f9f678);
    }
    cStack0000000000000004 = '\0';
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar3 = FUN_074ef114(param_1,param_2,param_3);
    if ((uVar3 & 1) != 0) goto LAB_074f0010;
    lVar4 = *(long *)puVar2;
    cVar1 = cStack0000000000000004;
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar3 = (ulong)(cVar1 != '\0');
  if (*(long *)(unaff_x23 + 0x28) == lStack0000000000000098) {
    uVar3 = FUN_074ef08c(uVar3,*(undefined8 *)PTR_DAT_08f9f678);
  }
LAB_074f0078:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


