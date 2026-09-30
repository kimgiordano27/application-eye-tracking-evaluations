/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$remove_Error
ENTRY_POINT: 05616b80
PROGRAM: Untangled-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


int Newtonsoft_Json_Serialization_JsonSerializerProxy__remove_Error(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  lVar4 = *(long *)(unaff_x21 + 0x38);
  if (lVar4 == 0) {
    FUN_02eea7c4();
    lVar4 = *(long *)(unaff_x21 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02eea768();
  }
  puVar2 = PTR_DAT_06d52358;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  puVar1 = PTR_DAT_06d52348;
  _in_stack_00000008 = FUN_0492700c();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar6 = *(long *)puVar1;
  lVar4 = *(long *)(lVar6 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02eea768();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02eea768();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar4 = *(long *)(lVar6 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02eea768();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02eea768();
  }
  puVar1 = PTR_DAT_06d52350;
  iVar5 = **(int **)(lVar4 + 0xb8);
  iVar3 = iVar5 * 4;
  do {
    iVar3 = iVar3 + -4;
    iVar5 = iVar5 + -1;
    if (iVar5 < 0) goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_DefaultValueHandling;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar4 = FUN_0492e29c(&stack0x00000008,iVar5,*(undefined8 *)puVar1);
  } while (lVar4 == 0);
  if (lVar4 < 1) {
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_DefaultValueHandling:
    iVar5 = 3;
  }
  else {
    iVar5 = 3;
    do {
      lVar4 = lVar4 * 0x10000;
      iVar5 = iVar5 + -1;
    } while (0 < lVar4);
  }
  if (*(long *)(unaff_x22 + 0x28) != in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5 + iVar3;
}


