/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$add_Error
ENTRY_POINT: 074c4a64
PROGRAM: cac-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__add_Error(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  
  FUN_03f13384(*(undefined8 *)(param_1 + 0x538));
  *(undefined1 *)(unaff_x20 + 0x4c6) = 1;
  lVar4 = *(long *)(unaff_x19 + 0x90);
  if (lVar4 == 0) {
    lVar4 = **(long **)(*(long *)(PTR_DAT_0910b550 + 0x90) + 0xb8);
    if (lVar4 == 0) goto LAB_074c4ae8;
  }
  if (*(int *)(lVar4 + 0x10) != 0) {
    uVar1 = FUN_07307190(*(undefined8 *)PTR_DAT_09133538,lVar4,0);
    uVar2 = Newtonsoft_Json_Linq_JToken__ToBigIntegerNullable();
    uVar3 = FUN_074fcefc(0);
    FUN_07327464(uVar2,uVar3,uVar1,0);
    return;
  }
LAB_074c4ae8:
  Newtonsoft_Json_Linq_JToken__ToBigIntegerNullable();
  return;
}


