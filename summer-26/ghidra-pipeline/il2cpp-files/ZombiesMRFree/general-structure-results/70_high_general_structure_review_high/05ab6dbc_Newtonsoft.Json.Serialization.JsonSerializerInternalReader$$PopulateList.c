/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateList
ENTRY_POINT: 05ab6dbc
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


bool Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateList(long param_1)

{
  bool in_ZR;
  long unaff_x19;
  
  if (in_ZR) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (*(char *)(unaff_x19 + 0x10) == *(char *)(param_1 + 0x10)) {
      return *(char *)(unaff_x19 + 0x11) == *(char *)(param_1 + 0x11);
    }
  }
  return false;
}


