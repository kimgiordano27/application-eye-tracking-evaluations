/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetContractSafe
ENTRY_POINT: 074b42e0
PROGRAM: cac-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContractSafe(void)

{
  char cVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  uint unaff_w19;
  ulong *puVar5;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  ulong in_stack_00000008;
  char cStack0000000000000014;
  ulong in_stack_00000018;
  char cStack0000000000000024;
  ulong in_stack_00000028;
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
  long in_stack_000000b8;
  
  if ((*(byte *)(unaff_x24 + 0x4a0) & 1) == 0) {
    FUN_03f13384(PTR_DAT_0912f2c0);
    FUN_03f13384(PTR_DAT_0912f460);
    *(undefined1 *)(unaff_x24 + 0x4a0) = 1;
  }
  in_stack_00000028 = 0;
  cStack0000000000000024 = '\0';
  *(undefined8 *)(unaff_x25 + 0x72) = 0;
  *(undefined8 *)(unaff_x25 + 0x6a) = 0;
  *(undefined8 *)(unaff_x25 + 0x68) = 0;
  *(undefined8 *)(unaff_x25 + 0x60) = 0;
  puVar2 = PTR_DAT_0912f2c0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000018 = 0;
  cStack0000000000000014 = '\0';
  in_stack_00000008 = 0;
  if (unaff_w19 < 8) {
    cStack0000000000000024 = '\0';
    if (*(int *)(*(long *)PTR_DAT_0912f2c0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    puVar5 = &stack0x00000018;
    uVar3 = FUN_074c0028();
    if ((uVar3 & 1) != 0) {
LAB_074b444c:
      uVar3 = *puVar5;
      if (*(long *)(unaff_x23 + 0x28) == in_stack_000000b8) {
        return;
      }
      goto LAB_074b44b8;
    }
    lVar4 = *(long *)puVar2;
    cVar1 = cStack0000000000000024;
  }
  else {
    if ((unaff_w19 >> 9 & 1) == 0) {
      lVar4 = *(long *)PTR_DAT_0912f2c0;
      *(undefined8 *)(unaff_x25 + 0x72) = 0;
      *(undefined8 *)(unaff_x25 + 0x6a) = 0;
      *(undefined8 *)(unaff_x25 + 0x68) = 0;
      *(undefined8 *)(unaff_x25 + 0x60) = 0;
      in_stack_00000038 = 0;
      in_stack_00000030 = 0;
      in_stack_00000048 = 0;
      in_stack_00000040 = 0;
      in_stack_00000058 = 0;
      in_stack_00000050 = 0;
      in_stack_00000068 = 0;
      in_stack_00000060 = 0;
      in_stack_00000078 = 0;
      in_stack_00000070 = 0;
      in_stack_00000088 = 0;
      in_stack_00000080 = 0;
      in_stack_00000028 = 0;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      FUN_074bfee4();
      puVar5 = &stack0x00000028;
      uVar3 = FUN_074bf32c(&stack0x00000030,&stack0x00000028);
      if ((uVar3 & 1) != 0) goto LAB_074b444c;
      uVar3 = *(ulong *)puVar2;
      if (*(int *)(uVar3 + 0xe4) == 0) {
        uVar3 = thunk_FUN_03f6fea8();
      }
      if (*(long *)(unaff_x23 + 0x28) != in_stack_000000b8) goto LAB_074b44b8;
      FUN_074bfb24(1,*(undefined8 *)PTR_DAT_0912f460);
    }
    cStack0000000000000014 = '\0';
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    puVar5 = &stack0x00000008;
    uVar3 = FUN_074c05e8();
    if ((uVar3 & 1) != 0) goto LAB_074b444c;
    lVar4 = *(long *)puVar2;
    cVar1 = cStack0000000000000014;
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  uVar3 = (ulong)(cVar1 != '\0');
  if (*(long *)(unaff_x23 + 0x28) == in_stack_000000b8) {
    uVar3 = FUN_074bfb24(uVar3,*(undefined8 *)PTR_DAT_0912f460);
  }
LAB_074b44b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


