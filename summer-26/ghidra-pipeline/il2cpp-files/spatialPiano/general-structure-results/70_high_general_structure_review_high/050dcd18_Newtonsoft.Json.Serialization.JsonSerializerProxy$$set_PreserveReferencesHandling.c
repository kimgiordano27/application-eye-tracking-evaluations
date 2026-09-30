/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_PreserveReferencesHandling
ENTRY_POINT: 050dcd18
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


bool Newtonsoft_Json_Serialization_JsonSerializerProxy__set_PreserveReferencesHandling(void)

{
  int iVar1;
  int in_w8;
  undefined2 *in_x9;
  int in_w10;
  int in_w11;
  uint in_w12;
  int in_w15;
  int unaff_w19;
  int unaff_w25;
  uint unaff_w26;
  uint uVar2;
  
  while( true ) {
    uVar2 = unaff_w26;
    *in_x9 = (short)in_w11;
    if ((in_w15 < 0) && (in_w12 < 0x10)) break;
    iVar1 = in_w10;
    if (9 < (uVar2 & 0xe)) {
      iVar1 = in_w8;
    }
    in_w11 = iVar1 + (uVar2 & 0xf);
    in_x9 = in_x9 + -1;
    unaff_w26 = uVar2 >> 4;
    in_w15 = in_w15 + -1;
    in_w12 = uVar2;
  }
  return unaff_w25 <= unaff_w19;
}


