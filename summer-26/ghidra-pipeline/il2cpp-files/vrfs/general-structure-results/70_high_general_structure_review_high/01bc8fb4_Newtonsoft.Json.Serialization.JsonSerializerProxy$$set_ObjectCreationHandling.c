/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ObjectCreationHandling
ENTRY_POINT: 01bc8fb4
PROGRAM: vrfs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01bc8fcc) */

void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ObjectCreationHandling
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  float fVar1;
  float unaff_s8;
  
  param_6 = param_2 + param_6;
  param_4 = param_3 + param_4;
  fVar1 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine();
  if (unaff_s8 < 0.0) {
    unaff_s8 = 0.0;
  }
  FUN_04f1aa00(fVar1 + unaff_s8 * ((param_1 + param_5) - fVar1),
               param_2 + unaff_s8 * (param_6 - param_2),param_3 + unaff_s8 * (param_4 - param_3));
  return;
}


