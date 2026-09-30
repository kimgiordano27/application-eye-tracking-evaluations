/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_FloatParseHandling
ENTRY_POINT: 07a4fc90
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_FloatParseHandling(uint param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 < 0x100) {
    return;
  }
  thunk_FUN_044adef4(PTR_DAT_09f255e0);
  uVar1 = thunk_FUN_0448520c();
  uVar2 = thunk_FUN_044adef4(PTR_DAT_09f40d30);
  FUN_07a4d218(uVar1,uVar2);
  uVar2 = thunk_FUN_044adef4(PTR_DAT_09f44ff0);
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar1,uVar2);
}


