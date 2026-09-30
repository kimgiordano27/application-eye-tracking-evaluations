/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Create
ENTRY_POINT: 04d09820
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__Create(void)

{
  undefined2 uVar1;
  int iVar2;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined2 *puVar3;
  int iVar4;
  
  iVar2 = thunk_FUN_02b485d0(0);
  if (0 < *(int *)(unaff_x19 + 0x10)) {
    iVar4 = 0;
    puVar3 = (undefined2 *)(unaff_x21 + iVar2);
    do {
      uVar1 = (**(code **)(*unaff_x20 + 0x1a8))();
      iVar2 = *(int *)(unaff_x19 + 0x10);
      iVar4 = iVar4 + 1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}


