/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_StringEscapeHandling
ENTRY_POINT: 0718d218
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


int Newtonsoft_Json_Serialization_JsonSerializerProxy__set_StringEscapeHandling(void)

{
  undefined *puVar1;
  long lVar2;
  int in_w8;
  int iVar3;
  int iVar4;
  long unaff_x19;
  long unaff_x22;
  long *unaff_x23;
  long in_stack_00000018;
  
  if (in_w8 == 0) {
    thunk_FUN_03db619c();
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03d8f26c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03d8f26c();
  }
  puVar1 = PTR_DAT_09212ec0;
  iVar4 = **(int **)(lVar2 + 0xb8);
  iVar3 = iVar4 * 4;
  do {
    iVar3 = iVar3 + -4;
    iVar4 = iVar4 + -1;
    if (iVar4 < 0) goto LAB_0718d2b4;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar2 = FUN_0662adb0(&stack0x00000008,iVar4,*(undefined8 *)puVar1);
  } while (lVar2 == 0);
  if (lVar2 < 1) {
LAB_0718d2b4:
    iVar4 = 3;
  }
  else {
    iVar4 = 3;
    do {
      lVar2 = lVar2 * 0x10000;
      iVar4 = iVar4 + -1;
    } while (0 < lVar2);
  }
  if (*(long *)(unaff_x22 + 0x28) != in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4 + iVar3;
}


