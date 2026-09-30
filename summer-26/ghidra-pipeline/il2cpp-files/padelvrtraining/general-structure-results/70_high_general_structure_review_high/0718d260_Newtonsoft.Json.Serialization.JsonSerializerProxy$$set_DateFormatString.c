/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_DateFormatString
ENTRY_POINT: 0718d260
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


int Newtonsoft_Json_Serialization_JsonSerializerProxy__set_DateFormatString(void)

{
  long lVar1;
  int in_w8;
  int iVar2;
  int iVar3;
  int unaff_w19;
  undefined8 *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long in_stack_00000018;
  
  do {
    iVar2 = in_w8;
    if (unaff_w19 < 0) goto LAB_0718d2b4;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar1 = FUN_0662adb0(&stack0x00000008,unaff_w19,*unaff_x21);
    unaff_w19 = unaff_w19 + -1;
    in_w8 = iVar2 + -4;
  } while (lVar1 == 0);
  if (lVar1 < 1) {
LAB_0718d2b4:
    iVar3 = 3;
  }
  else {
    iVar3 = 3;
    do {
      lVar1 = lVar1 * 0x10000;
      iVar3 = iVar3 + -1;
    } while (0 < lVar1);
  }
  if (*(long *)(unaff_x22 + 0x28) != in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3 + iVar2;
}


