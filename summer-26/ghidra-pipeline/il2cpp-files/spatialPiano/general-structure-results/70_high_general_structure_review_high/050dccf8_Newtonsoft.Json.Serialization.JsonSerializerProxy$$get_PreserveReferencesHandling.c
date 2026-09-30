/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_PreserveReferencesHandling
ENTRY_POINT: 050dccf8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerProxy__get_PreserveReferencesHandling(void)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  short in_w8;
  short *in_x9;
  short *psVar4;
  short in_w10;
  int in_w11;
  int unaff_w19;
  int unaff_w25;
  uint unaff_w26;
  uint uVar5;
  
  do {
    uVar5 = unaff_w26;
    sVar2 = in_w10;
    if (9 < (uVar5 & 0xe)) {
      sVar2 = in_w8;
    }
    psVar4 = in_x9 + -1;
    *in_x9 = sVar2 + ((ushort)uVar5 & 0xf);
    iVar3 = in_w11 + -1;
    bVar1 = -1 < in_w11;
    in_x9 = psVar4;
    unaff_w26 = uVar5 >> 4;
    in_w11 = iVar3;
  } while ((bVar1) || (0xf < uVar5));
  return unaff_w25 <= unaff_w19;
}


