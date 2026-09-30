/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeISerializable
ENTRY_POINT: 0675ffc4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeISerializable
               (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = **(long **)(*(long *)(*(long *)(param_1 + 0x760) + 0x90) + 0xb8);
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0x10) != 0)) {
    uVar1 = FUN_065adf54(*(undefined8 *)PTR_DAT_084a9d20,lVar4,0);
    uVar2 = FUN_06788920();
    uVar3 = FUN_06797008(0);
    FUN_065cddf0(uVar2,uVar3,uVar1,0);
    return;
  }
  FUN_06788920();
  return;
}


