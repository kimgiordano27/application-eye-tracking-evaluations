/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_DateFormatString
ENTRY_POINT: 0718d23c
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


int Newtonsoft_Json_Serialization_JsonSerializerProxy__get_DateFormatString
              (ulong param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long unaff_x22;
  long *unaff_x23;
  long in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_03d8f26c();
  }
  puVar1 = PTR_DAT_09212ec0;
  iVar4 = **(int **)(param_2 + 0xb8);
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


