/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_MaxDepth
ENTRY_POINT: 0747c5f0
PROGRAM: m3ar-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_JsonSerializerSettings__set_MaxDepth(long param_1)

{
  int iVar1;
  char in_NG;
  bool in_ZR;
  char in_OV;
  int in_w8;
  int in_w9;
  int iVar2;
  int in_w10;
  int in_w11;
  int iVar3;
  
  if (in_ZR || in_NG != in_OV) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    iVar2 = in_w9;
    do {
      in_w9 = 0;
      if (in_w8 != 0) {
        in_w9 = iVar2 / in_w8;
      }
      iVar3 = iVar3 + in_w10;
      iVar2 = in_w9;
    } while (in_w11 >> 1 < in_w9);
  }
  iVar2 = *(int *)(param_1 + 0x20) + in_w9;
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = (in_w9 + in_w9 * in_w8) / iVar2;
  }
  return iVar1 + iVar3;
}


