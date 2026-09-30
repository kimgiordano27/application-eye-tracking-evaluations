/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_TypeNameHandling
ENTRY_POINT: 058b9588
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_JsonSerializerSettings__get_TypeNameHandling(ulong param_1)

{
  undefined1 in_ZR;
  uint in_w8;
  short *in_x9;
  long in_x10;
  int in_w11;
  long in_x12;
  short *in_x13;
  int unaff_w19;
  long unaff_x20;
  int unaff_w24;
  uint unaff_w25;
  
  while (!(bool)in_ZR) {
    while (*(short *)(unaff_x20 + (long)(int)(in_w8 + in_w11) * 2) != *in_x13) {
      do {
        if (in_w11 == unaff_w19) goto LAB_058b962c;
        do {
          in_w8 = in_w8 + 1;
          if (unaff_w24 < (int)in_w8) {
            return param_1;
          }
        } while (*(ushort *)(unaff_x20 + (long)(int)in_w8 * 2) != unaff_w25);
        in_w11 = 1;
        in_x12 = in_x10;
        in_x13 = in_x9;
      } while (unaff_w19 < 2);
    }
    in_w11 = in_w11 + 1;
    in_x12 = in_x12 + -1;
    in_x13 = in_x13 + 1;
    in_ZR = in_x12 == 0;
  }
LAB_058b962c:
  return (ulong)in_w8;
}


