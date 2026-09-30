/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetPropertyValue
ENTRY_POINT: 05abe89c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetPropertyValue(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((DAT_0739707b & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f7a198);
    DAT_0739707b = 1;
  }
  plVar3 = (long *)(param_1 + 0x30);
  lVar1 = *plVar3;
  if (lVar1 == 0) {
    uVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f7a198);
    FUN_05b32c00(uVar2,0);
    FUN_05b6127c(plVar3,uVar2,0,0);
    lVar1 = *plVar3;
  }
  return lVar1;
}


