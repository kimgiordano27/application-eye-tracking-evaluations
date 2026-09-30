/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_TypeNameHandling
ENTRY_POINT: 050dcd58
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


bool Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling(void)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  char in_NG;
  bool in_ZR;
  char in_OV;
  short *psVar4;
  short *psVar5;
  long in_x10;
  int iVar6;
  int unaff_w19;
  uint unaff_w20;
  uint uVar7;
  int unaff_w21;
  short unaff_w22;
  int unaff_w25;
  
  if (in_ZR || in_NG != in_OV) {
    unaff_w21 = 1;
  }
  psVar4 = (short *)(in_x10 + -2);
  iVar6 = unaff_w21 + -2;
  do {
    uVar7 = unaff_w20;
    sVar2 = 0x30;
    if (9 < (uVar7 & 0xe)) {
      sVar2 = unaff_w22;
    }
    psVar5 = psVar4 + -1;
    *psVar4 = sVar2 + ((ushort)uVar7 & 0xf);
    iVar3 = iVar6 + -1;
    bVar1 = -1 < iVar6;
    psVar4 = psVar5;
    iVar6 = iVar3;
    unaff_w20 = uVar7 >> 4;
  } while ((bVar1) || (0xf < uVar7));
  return unaff_w25 <= unaff_w19;
}


