/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonProperty$$set_ShouldDeserialize
ENTRY_POINT: 050c9dd0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonProperty__set_ShouldDeserialize(void)

{
  bool bVar1;
  uint in_w8;
  uint in_w9;
  long *unaff_x22;
  
  if (in_w8 <= in_w9) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  bVar1 = *(short *)(*unaff_x22 + (long)(int)in_w9 * 2) == 0x25;
  if (bVar1) {
    FUN_050cd69c();
  }
  return !bVar1;
}


