/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$CheckForCircularReference
ENTRY_POINT: 0500e0e0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__CheckForCircularReference
               (long param_1,undefined8 param_2)

{
  char cVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  uint unaff_w19;
  long unaff_x23;
  long unaff_x24;
  char cStack0000000000000004;
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
  
  lStack0000000000000098 = param_1;
  if ((*(byte *)(unaff_x24 + 0x86) & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_06656a10);
    FUN_02d4dc40(PTR_DAT_06656b90);
    *(undefined1 *)(unaff_x24 + 0x86) = 1;
  }
  puVar2 = PTR_DAT_06656a10;
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
  cStack0000000000000004 = '\0';
  if (unaff_w19 < 8) {
    if (*(int *)(*(long *)PTR_DAT_06656a10 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar3 = FUN_0500e2a8(param_2);
    if ((uVar3 & 1) != 0) {
LAB_0500e23c:
      uVar3 = (ulong)uStack000000000000000c;
      if (*(long *)(unaff_x23 + 0x28) == lStack0000000000000098) {
        return;
      }
      goto LAB_0500e2a4;
    }
    lVar4 = *(long *)puVar2;
    cVar1 = '\0';
  }
  else {
    if ((unaff_w19 >> 9 & 1) == 0) {
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
      if (*(int *)(*(long *)PTR_DAT_06656a10 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_0500d678(param_2);
      uVar3 = FUN_0500cb78(&stack0x00000010,&stack0x0000000c);
      if ((uVar3 & 1) != 0) goto LAB_0500e23c;
      uVar3 = *(ulong *)puVar2;
      if (*(int *)(uVar3 + 0xe4) == 0) {
        uVar3 = thunk_FUN_02dabd98();
      }
      if (*(long *)(unaff_x23 + 0x28) != lStack0000000000000098) goto LAB_0500e2a4;
      FUN_0500d2b8(1,*(undefined8 *)PTR_DAT_06656b90);
    }
    cStack0000000000000004 = '\0';
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar3 = FUN_0500d340(param_2);
    if ((uVar3 & 1) != 0) goto LAB_0500e23c;
    lVar4 = *(long *)puVar2;
    cVar1 = cStack0000000000000004;
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar3 = (ulong)(cVar1 != '\0');
  if (*(long *)(unaff_x23 + 0x28) == lStack0000000000000098) {
    uVar3 = FUN_0500d2b8(uVar3,*(undefined8 *)PTR_DAT_06656b90);
  }
LAB_0500e2a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


