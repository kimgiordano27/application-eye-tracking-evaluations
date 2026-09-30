/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$remove_Error
ENTRY_POINT: 074c4a80
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__remove_Error(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = **(long **)(*(long *)(*(long *)(param_1 + 0x550) + 0x90) + 0xb8);
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0x10) != 0)) {
    uVar1 = FUN_07307190(*(undefined8 *)PTR_DAT_09133538,lVar4,0);
    uVar2 = Newtonsoft_Json_Linq_JToken__ToBigIntegerNullable();
    uVar3 = FUN_074fcefc(0);
    FUN_07327464(uVar2,uVar3,uVar1,0);
    return;
  }
  Newtonsoft_Json_Linq_JToken__ToBigIntegerNullable();
  return;
}


