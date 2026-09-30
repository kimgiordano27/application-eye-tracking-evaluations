/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_ReferenceResolver
ENTRY_POINT: 05616ba0
PROGRAM: Untangled-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


int Newtonsoft_Json_Serialization_JsonSerializerProxy__get_ReferenceResolver(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  lVar3 = FUN_02eea768();
  puVar2 = PTR_DAT_06d52358;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  puVar1 = PTR_DAT_06d52348;
  _in_stack_00000008 = FUN_0492700c();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar6 = *(long *)puVar1;
  lVar3 = *(long *)(lVar6 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar3 = *(long *)(lVar6 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768();
  }
  puVar1 = PTR_DAT_06d52350;
  iVar5 = **(int **)(lVar3 + 0xb8);
  iVar4 = iVar5 * 4;
  do {
    iVar4 = iVar4 + -4;
    iVar5 = iVar5 + -1;
    if (iVar5 < 0) goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_DefaultValueHandling;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar3 = FUN_0492e29c(&stack0x00000008,iVar5,*(undefined8 *)puVar1);
  } while (lVar3 == 0);
  if (lVar3 < 1) {
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_DefaultValueHandling:
    iVar5 = 3;
  }
  else {
    iVar5 = 3;
    do {
      lVar3 = lVar3 * 0x10000;
      iVar5 = iVar5 + -1;
    } while (0 < lVar3);
  }
  if (*(long *)(unaff_x22 + 0x28) != in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5 + iVar4;
}


