/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_Context
ENTRY_POINT: 05010cd4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Context(void)

{
  long lVar1;
  int *unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  
  lVar1 = ((unaff_x20 & 0xffffffff) * (unaff_x21 >> 0x20) >> 0x20) +
          (unaff_x20 >> 0x20) * (unaff_x21 >> 0x20) +
          ((unaff_x20 >> 0x20) * (unaff_x21 & 0xffffffff) >> 0x20);
  if (-1 < lVar1) {
    lVar1 = lVar1 * 2;
    *unaff_x19 = *unaff_x19 + -1;
  }
  return lVar1;
}


