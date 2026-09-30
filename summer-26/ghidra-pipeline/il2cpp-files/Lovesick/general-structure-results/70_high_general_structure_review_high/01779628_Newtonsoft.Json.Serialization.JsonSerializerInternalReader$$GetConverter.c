/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetConverter
ENTRY_POINT: 01779628
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetConverter
               (short *param_1,ulong param_2,short param_3)

{
  uint uVar1;
  short sVar2;
  short in_w8;
  int in_w9;
  int iVar3;
  int in_w10;
  
  for (; (iVar3 = in_w9, -1 < in_w10 || ((uint)param_2 != 0)); param_2 = param_2 >> 4 & 0xfffffff) {
    uVar1 = (uint)param_2 & 0xf;
    sVar2 = in_w8;
    if (9 < uVar1) {
      sVar2 = param_3;
    }
    param_1 = param_1 + -1;
    *param_1 = sVar2 + (short)uVar1;
    in_w9 = iVar3 + -1;
    in_w10 = iVar3;
  }
  return;
}


