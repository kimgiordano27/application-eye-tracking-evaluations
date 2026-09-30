/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$.cctor
ENTRY_POINT: 05009de0
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c___cctor(void)

{
  short sVar1;
  undefined1 in_CY;
  short in_w8;
  short *in_x9;
  short in_w10;
  uint in_w12;
  uint in_w14;
  int in_w15;
  uint unaff_w19;
  
  while( true ) {
    unaff_w19 = unaff_w19 >> 4;
    sVar1 = in_w10;
    if ((bool)in_CY) {
      sVar1 = in_w8;
    }
    *in_x9 = sVar1 + (short)in_w14;
    if ((in_w15 < 0) && (in_w12 < 0x10)) break;
    in_w14 = unaff_w19 & 0xf;
    in_CY = 9 < (unaff_w19 & 0xe);
    in_x9 = in_x9 + -1;
    in_w12 = unaff_w19;
    in_w15 = in_w15 + -1;
  }
  return;
}


