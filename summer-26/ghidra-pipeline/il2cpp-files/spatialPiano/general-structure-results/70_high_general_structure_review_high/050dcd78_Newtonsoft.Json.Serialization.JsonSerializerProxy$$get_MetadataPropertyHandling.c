/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_MetadataPropertyHandling
ENTRY_POINT: 050dcd78
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerProxy__get_MetadataPropertyHandling(void)

{
  short sVar1;
  short in_w8;
  short *in_x9;
  short in_w10;
  int in_w11;
  uint in_w12;
  uint in_w13;
  uint in_w14;
  int unaff_w19;
  uint unaff_w20;
  int unaff_w25;
  
  while( true ) {
    unaff_w20 = unaff_w20 >> 4;
    sVar1 = in_w10;
    if (9 < in_w13) {
      sVar1 = in_w8;
    }
    *in_x9 = sVar1 + (short)in_w14;
    if ((in_w11 < 0) && (in_w12 < 0x10)) break;
    in_w13 = unaff_w20 & 0xe;
    in_w14 = unaff_w20 & 0xf;
    in_x9 = in_x9 + -1;
    in_w11 = in_w11 + -1;
    in_w12 = unaff_w20;
  }
  return unaff_w25 <= unaff_w19;
}


