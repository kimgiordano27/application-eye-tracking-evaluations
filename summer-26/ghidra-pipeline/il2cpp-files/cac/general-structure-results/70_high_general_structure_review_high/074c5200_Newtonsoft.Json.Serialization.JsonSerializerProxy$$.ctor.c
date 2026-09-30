/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$.ctor
ENTRY_POINT: 074c5200
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


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy___ctor(undefined8 *param_1)

{
  undefined8 uVar1;
  int unaff_w19;
  long unaff_x21;
  
  if ((*(byte *)(unaff_x21 + 0x4ce) & 1) == 0) {
    FUN_03f13384(PTR_DAT_09128f40);
    *(undefined1 *)(unaff_x21 + 0x4ce) = 1;
  }
  if (unaff_w19 != 0) {
    if (*(int *)(*(long *)PTR_DAT_09128f40 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar1 = FUN_074c5260(param_1,unaff_w19);
    return uVar1;
  }
  return *param_1;
}


