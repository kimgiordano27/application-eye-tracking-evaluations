/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_ContractResolver
ENTRY_POINT: 062599d0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_ContractResolver
               (ulong *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  if ((-1 < (long)(uVar3 ^ param_2)) && ((long)(uVar3 + param_2 ^ uVar3) < 0)) {
    thunk_FUN_037a15ac(PTR_DAT_07d89240);
    uVar1 = thunk_FUN_037788cc();
    uVar2 = thunk_FUN_037a15ac(PTR_DAT_07daf090);
    FUN_06251dac(uVar1,uVar2);
    uVar2 = thunk_FUN_037a15ac(PTR_DAT_07daf0a8);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar1,uVar2);
  }
  return;
}


