/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_DateParseHandling
ENTRY_POINT: 0718d11c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_Serialization_JsonSerializerProxy__get_DateParseHandling
              (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long lStack0000000000000018;
  
  puVar1 = PTR_DAT_09212eb0;
  lStack0000000000000018 = *(long *)(unaff_x22 + 0x28);
  if ((DAT_09843066 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_09212eb8);
    FUN_03d2d2b0(PTR_DAT_09212ec0);
    FUN_03d2d2b0(PTR_DAT_09212ec8);
    FUN_03d2d2b0(PTR_DAT_09212eb0);
    DAT_09843066 = 1;
  }
  lVar6 = *(long *)puVar1;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  lVar4 = *(long *)(lVar6 + 0x38);
  if (lVar4 == 0) {
    FUN_03d8f2c8(lVar6);
    lVar4 = *(long *)(lVar6 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03d8f26c();
  }
  puVar1 = PTR_DAT_09212ec8;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  puVar2 = PTR_DAT_09212eb8;
  _in_stack_00000008 = FUN_0661ceb8(param_1,param_2,*(undefined8 *)(*(long *)(lVar6 + 0x38) + 8));
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  lVar6 = *(long *)puVar2;
  lVar4 = *(long *)(lVar6 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03d8f26c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03d8f26c();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  lVar4 = *(long *)(lVar6 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03d8f26c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03d8f26c();
  }
  puVar2 = PTR_DAT_09212ec0;
  iVar5 = **(int **)(lVar4 + 0xb8);
  iVar3 = iVar5 * 4;
  do {
    iVar3 = iVar3 + -4;
    iVar5 = iVar5 + -1;
    if (iVar5 < 0) goto LAB_0718d2b4;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar4 = FUN_0662adb0(&stack0x00000008,iVar5,*(undefined8 *)puVar2);
  } while (lVar4 == 0);
  if (lVar4 < 1) {
LAB_0718d2b4:
    iVar5 = 3;
  }
  else {
    iVar5 = 3;
    do {
      lVar4 = lVar4 * 0x10000;
      iVar5 = iVar5 + -1;
    } while (0 < lVar4);
  }
  if (*(long *)(unaff_x22 + 0x28) != lStack0000000000000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5 + iVar3;
}


