/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.CreatorPropertyContext$$.ctor
ENTRY_POINT: 0329f578
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext___ctor(void)

{
  ulong uVar1;
  uint in_w8;
  int unaff_w19;
  int unaff_w20;
  long *unaff_x21;
  int unaff_w22;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  
  do {
    if (unaff_w24 < in_w8) {
      return unaff_w20;
    }
    do {
      if (unaff_w20 == unaff_w25) {
        return unaff_w19;
      }
      unaff_w20 = unaff_w20 + 2;
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar1 = FUN_0329f3c0(unaff_w20);
    } while ((uVar1 & 1) == 0);
    in_w8 = unaff_w23 + unaff_w20 * unaff_w22;
  } while( true );
}


