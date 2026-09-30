/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolveTypeName
ENTRY_POINT: 067573b4
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


bool Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolveTypeName(long param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  short in_w10;
  int in_w11;
  int unaff_w19;
  uint unaff_w20;
  uint uVar6;
  short unaff_w21;
  long unaff_x22;
  int unaff_w24;
  
  psVar4 = (short *)(unaff_x22 + param_1 + -2);
  do {
    uVar6 = unaff_w20;
    sVar2 = in_w10;
    if (9 < (uVar6 & 0xe)) {
      sVar2 = unaff_w21;
    }
    psVar5 = psVar4 + -1;
    *psVar4 = sVar2 + ((ushort)uVar6 & 0xf);
    iVar3 = in_w11 + -1;
    bVar1 = -1 < in_w11;
    psVar4 = psVar5;
    unaff_w20 = uVar6 >> 4;
    in_w11 = iVar3;
  } while ((bVar1) || (0xf < uVar6));
  return unaff_w24 <= unaff_w19;
}


