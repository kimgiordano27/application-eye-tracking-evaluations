/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonProperty$$set_ShouldSerialize
ENTRY_POINT: 050c9dc0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonProperty__set_ShouldSerialize(void)

{
  uint in_w8;
  int in_w9;
  long *unaff_x22;
  
  if (in_w9 < (int)(in_w8 - 1)) {
    if (in_w8 <= in_w9 + 1U) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (*(short *)(*unaff_x22 + (long)(int)(in_w9 + 1U) * 2) != 0x25) {
      return 1;
    }
  }
  FUN_050cd69c();
  return 0;
}


