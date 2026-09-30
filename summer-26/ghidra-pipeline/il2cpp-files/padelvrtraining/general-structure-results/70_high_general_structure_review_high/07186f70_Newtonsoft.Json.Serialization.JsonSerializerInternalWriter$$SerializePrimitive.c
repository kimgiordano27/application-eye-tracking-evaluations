/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializePrimitive
ENTRY_POINT: 07186f70
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializePrimitive(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_0984301c & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_09212d78);
    DAT_0984301c = 1;
  }
  if ((DAT_0984301d & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091a13f8);
    DAT_0984301d = 1;
  }
  lVar4 = *(long *)(param_1 + 0x90);
  if (lVar4 == 0) {
    lVar4 = **(long **)(*(long *)PTR_DAT_091a13f8 + 0xb8);
    if (lVar4 == 0) goto LAB_0718702c;
  }
  if (*(int *)(lVar4 + 0x10) != 0) {
    uVar1 = FUN_06fac9e0(*(undefined8 *)PTR_DAT_09212d78,lVar4,0);
    uVar2 = FUN_071b0da0(param_1,0);
    uVar3 = FUN_071c050c(0);
    FUN_06fd2168(uVar2,uVar3,uVar1,0);
    return;
  }
LAB_0718702c:
  FUN_071b0da0(param_1,0);
  return;
}


