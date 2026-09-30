/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDictionary
ENTRY_POINT: 01786770
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDictionary(void)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *unaff_x19;
  int iVar5;
  long lVar6;
  long unaff_x23;
  long unaff_x24;
  long unaff_x29;
  long in_stack_00000068;
  long in_stack_00000078;
  
  if (*(int *)(*unaff_x19 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar6 = *(long *)StringLiteral_1052;
  lVar2 = *(long *)(lVar6 + 0x20);
  if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
    lVar2 = FUN_00d5941c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
    lVar2 = FUN_00d5941c();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar2 = *(long *)(lVar6 + 0x20);
  if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
    lVar2 = FUN_00d5941c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
    lVar2 = FUN_00d5941c();
  }
  puVar1 = Oculus_Platform_Models_LaunchReportFlowResult_TypeInfo;
  iVar5 = **(int **)(lVar2 + 0xb8);
  iVar3 = iVar5 * 4;
  do {
    iVar3 = iVar3 + -4;
    iVar5 = iVar5 + -1;
    if (iVar5 < 0) goto LAB_01786858;
    if (*(int *)(*unaff_x19 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01225ba8(&stack0x00000048,iVar5,&stack0x00000068,*(undefined8 *)puVar1);
  } while (in_stack_00000068 == 0);
  if (in_stack_00000068 < 1) {
LAB_01786858:
    iVar5 = 3;
  }
  else {
    iVar5 = 3;
    lVar2 = in_stack_00000068;
    do {
      lVar2 = lVar2 * 0x10000;
      iVar5 = iVar5 + -1;
    } while (0 < lVar2);
  }
  uVar4 = unaff_x29 - unaff_x24;
  if ((long)uVar4 < 0) {
    uVar4 = uVar4 + 1;
  }
  if (*(long *)(unaff_x23 + 0x28) != in_stack_00000078) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar5 + (int)(uVar4 >> 1) + iVar3);
  }
  return;
}


