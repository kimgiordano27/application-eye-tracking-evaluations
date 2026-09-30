/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CoerceEmptyStringToNull
ENTRY_POINT: 06856ed8
PROGRAM: Waifu-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CoerceEmptyStringToNull(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long unaff_x21;
  long unaff_x22;
  long in_stack_00000018;
  
  lVar3 = *(long *)(unaff_x21 + 0x38);
  if (lVar3 == 0) {
    FUN_0338f674();
    lVar3 = *(long *)(unaff_x21 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0338f618();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    FUN_033b9870();
  }
  if ((DAT_086dc6b2 & 1) == 0) {
    FUN_0335b6c8(&DAT_084005d0,1);
    DataMemoryBarrier(2,3);
    DAT_086dc6b2 = 1;
  }
  if (*(int *)(DAT_083c7090 + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar3 = DAT_084005d8;
  lVar1 = *(long *)(DAT_084005d8 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0338f618();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0338f618();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar3 = *(long *)(lVar3 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0338f618();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0338f618();
  }
  iVar4 = **(int **)(lVar3 + 0xb8);
  iVar2 = iVar4 * 4;
  do {
    iVar2 = iVar2 + -4;
    iVar4 = iVar4 + -1;
    if (iVar4 < 0) goto LAB_06857014;
    if (*(int *)(DAT_083c7090 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar3 = FUN_05673f3c(&stack0x00000008,iVar4,DAT_084005e0);
  } while (lVar3 == 0);
  if (lVar3 < 1) {
LAB_06857014:
    iVar4 = 3;
  }
  else {
    iVar4 = 3;
    do {
      lVar3 = lVar3 * 0x10000;
      iVar4 = iVar4 + -1;
    } while (0 < lVar3);
  }
  if (*(long *)(unaff_x22 + 0x28) != in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4 + iVar2;
}


