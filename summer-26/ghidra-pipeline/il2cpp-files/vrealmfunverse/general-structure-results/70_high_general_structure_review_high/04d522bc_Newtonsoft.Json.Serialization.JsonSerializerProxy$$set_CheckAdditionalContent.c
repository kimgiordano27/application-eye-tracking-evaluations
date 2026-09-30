/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_CheckAdditionalContent
ENTRY_POINT: 04d522bc
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_CheckAdditionalContent(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_06313aa0;
  if (*(int *)(*(long *)PTR_DAT_06313aa0 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  iVar2 = FUN_04c0ed98();
  if (iVar2 != -1) {
    thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
    uVar3 = thunk_FUN_02b79644();
    uVar4 = thunk_FUN_02ba3594(PTR_DAT_06332ad8);
    FUN_04cf4a4c(uVar3,uVar4,0);
    uVar4 = thunk_FUN_02ba3594(PTR_DAT_06332ae0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar3,uVar4);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  iVar2 = FUN_04c0f698();
  if (-1 < iVar2) {
    FUN_04c0e450();
    return;
  }
  return;
}


