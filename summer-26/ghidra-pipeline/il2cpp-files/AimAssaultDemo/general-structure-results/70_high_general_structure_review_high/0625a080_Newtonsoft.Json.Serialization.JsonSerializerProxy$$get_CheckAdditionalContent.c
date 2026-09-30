/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_CheckAdditionalContent
ENTRY_POINT: 0625a080
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_CheckAdditionalContent
               (long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (DAT_08255bd1 == '\0') {
      FUN_0373b518(PTR_DAT_07d98650);
      DAT_08255bd1 = '\x01';
    }
    uVar1 = FUN_060be1d4(param_1,0);
    FUN_06198554(uVar1,*(undefined4 *)(param_1 + 0x10),0,param_2,0);
    return;
  }
  *param_2 = 0;
  return;
}


