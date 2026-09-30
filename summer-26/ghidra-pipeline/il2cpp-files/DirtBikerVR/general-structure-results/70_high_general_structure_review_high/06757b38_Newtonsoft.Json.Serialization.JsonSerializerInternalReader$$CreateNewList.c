/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewList
ENTRY_POINT: 06757b38
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewList(void)

{
  short sVar1;
  short in_w8;
  short *in_x9;
  short in_w10;
  int in_w11;
  int iVar2;
  uint in_w12;
  int in_w15;
  uint unaff_w24;
  uint uVar3;
  
  while ((iVar2 = in_w11, uVar3 = unaff_w24, -1 < in_w15 || (0xf < in_w12))) {
    sVar1 = in_w10;
    if (9 < (uVar3 & 0xe)) {
      sVar1 = in_w8;
    }
    *in_x9 = sVar1 + ((ushort)uVar3 & 0xf);
    in_x9 = in_x9 + -1;
    unaff_w24 = uVar3 >> 4;
    in_w11 = iVar2 + -1;
    in_w15 = iVar2;
    in_w12 = uVar3;
  }
  return;
}


