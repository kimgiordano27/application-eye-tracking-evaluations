/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_PreserveReferencesHandling
ENTRY_POINT: 07110f84
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_JsonSerializer__set_PreserveReferencesHandling(void)

{
  bool bVar1;
  int in_w8;
  long unaff_x19;
  
  if (in_w8 == 0) {
    bVar1 = *(char *)(unaff_x19 + 0x140) != '\0';
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


