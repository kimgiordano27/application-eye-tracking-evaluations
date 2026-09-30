/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_NullValueHandling
ENTRY_POINT: 066ebaf0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_JsonSerializerSettings__set_NullValueHandling(void)

{
  int iVar1;
  undefined1 in_ZR;
  int in_w8;
  int in_w9;
  int in_w10;
  int unaff_w19;
  
  while ((in_w9 <= in_w8 && (in_w10 != 0))) {
    iVar1 = 0;
    if (in_w9 != 0) {
      iVar1 = unaff_w19 / in_w9;
    }
    in_w10 = unaff_w19 - iVar1 * in_w9;
    in_ZR = in_w10 == 0;
    in_w9 = in_w9 + 2;
  }
  return !(bool)in_ZR;
}


