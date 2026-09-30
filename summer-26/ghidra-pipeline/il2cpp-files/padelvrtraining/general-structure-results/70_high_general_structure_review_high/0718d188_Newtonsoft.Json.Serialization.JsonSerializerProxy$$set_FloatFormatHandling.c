/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_FloatFormatHandling
ENTRY_POINT: 0718d188
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_Serialization_JsonSerializerProxy__set_FloatFormatHandling(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  FUN_03d8f2c8();
  lVar3 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c();
  }
  puVar2 = PTR_DAT_09212ec8;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  puVar1 = PTR_DAT_09212eb8;
  _in_stack_00000008 = FUN_0661ceb8();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  lVar6 = *(long *)puVar1;
  lVar3 = *(long *)(lVar6 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  lVar3 = *(long *)(lVar6 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c();
  }
  puVar1 = PTR_DAT_09212ec0;
  iVar5 = **(int **)(lVar3 + 0xb8);
  iVar4 = iVar5 * 4;
  do {
    iVar4 = iVar4 + -4;
    iVar5 = iVar5 + -1;
    if (iVar5 < 0) goto LAB_0718d2b4;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar3 = FUN_0662adb0(&stack0x00000008,iVar5,*(undefined8 *)puVar1);
  } while (lVar3 == 0);
  if (lVar3 < 1) {
LAB_0718d2b4:
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


