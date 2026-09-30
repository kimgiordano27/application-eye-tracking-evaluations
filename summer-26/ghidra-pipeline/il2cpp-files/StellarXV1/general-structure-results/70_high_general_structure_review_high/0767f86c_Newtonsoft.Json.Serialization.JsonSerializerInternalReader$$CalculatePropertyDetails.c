/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CalculatePropertyDetails
ENTRY_POINT: 0767f86c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CalculatePropertyDetails(void)

{
  bool bVar1;
  short sVar2;
  short in_w8;
  short *psVar3;
  short *in_x9;
  short in_w10;
  int iVar4;
  int in_w11;
  uint in_w12;
  uint unaff_w19;
  
  while (psVar3 = in_x9, iVar4 = in_w11, 0xf < in_w12) {
    do {
      in_w12 = unaff_w19;
      unaff_w19 = in_w12 >> 4;
      sVar2 = in_w10;
      if (9 < (in_w12 & 0xe)) {
        sVar2 = in_w8;
      }
      in_x9 = psVar3 + -1;
      *psVar3 = sVar2 + ((ushort)in_w12 & 0xf);
      in_w11 = iVar4 + -1;
      bVar1 = -1 < iVar4;
      psVar3 = in_x9;
      iVar4 = in_w11;
    } while (bVar1);
  }
  return;
}


