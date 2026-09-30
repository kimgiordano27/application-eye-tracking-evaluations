/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_CheckAdditionalContent
ENTRY_POINT: 04ec60a4
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04ec6114) */
/* WARNING: Removing unreachable block (ram,0x04ec6118) */
/* WARNING: Removing unreachable block (ram,0x04ec6184) */

void Newtonsoft_Json_JsonSerializerSettings__set_CheckAdditionalContent(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  char in_stack_00000008;
  
  FUN_04f951b8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar1 = *unaff_x22;
  }
  plVar2 = *(long **)(lVar1 + 0xb8);
  if (*plVar2 == 0) {
    lVar3 = *(long *)(unaff_x19 + 0x28);
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      plVar2 = *(long **)(*unaff_x22 + 0xb8);
    }
    *plVar2 = lVar3;
  }
  if (in_stack_00000008 != '\0') {
    thunk_FUN_02c6fbb4();
  }
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  if (*(int *)(*(long *)PTR_DAT_065c91f8 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04f69aa4();
  if (unaff_x20 != 0) {
    thunk_FUN_02c7737c(PTR_DAT_065f7f50);
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54();
  }
  return;
}


