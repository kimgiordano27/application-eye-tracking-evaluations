/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateObjectUsingCreatorWithParameters
ENTRY_POINT: 074bb638
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateObjectUsingCreatorWithParameters
               (undefined2 *param_1)

{
  int in_w9;
  uint in_w10;
  int in_w11;
  ulong in_x12;
  ulong uVar1;
  int in_w14;
  ulong unaff_x19;
  
  while( true ) {
    *param_1 = (short)in_w9;
    if ((in_w14 < 0) && ((uint)in_x12 < 10)) break;
    uVar1 = (unaff_x19 & 0xffffffff) * (ulong)in_w10;
    in_x12 = unaff_x19 & 0xffffffff;
    in_w9 = (int)unaff_x19 + (uint)(uVar1 >> 0x23) * in_w11 + 0x30;
    param_1 = param_1 + -1;
    unaff_x19 = uVar1 >> 0x23;
    in_w14 = in_w14 + -1;
  }
  return;
}


