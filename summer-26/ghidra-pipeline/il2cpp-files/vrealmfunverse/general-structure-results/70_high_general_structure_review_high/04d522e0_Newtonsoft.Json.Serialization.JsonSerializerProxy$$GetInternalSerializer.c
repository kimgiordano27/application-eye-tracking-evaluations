/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$GetInternalSerializer
ENTRY_POINT: 04d522e0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__GetInternalSerializer
               (undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  
  iVar1 = FUN_04c0ed98(param_2,*param_1,0);
  if (iVar1 != -1) {
    thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
    uVar2 = thunk_FUN_02b79644();
    uVar3 = thunk_FUN_02ba3594(PTR_DAT_06332ad8);
    FUN_04cf4a4c(uVar2,uVar3,0);
    uVar3 = thunk_FUN_02ba3594(PTR_DAT_06332ae0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar2,uVar3);
  }
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  iVar1 = FUN_04c0f698();
  if (-1 < iVar1) {
    FUN_04c0e450();
    return;
  }
  return;
}


