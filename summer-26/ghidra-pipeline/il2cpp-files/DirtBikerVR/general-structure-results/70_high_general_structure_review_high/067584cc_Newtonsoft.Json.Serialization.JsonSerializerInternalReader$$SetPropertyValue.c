/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetPropertyValue
ENTRY_POINT: 067584cc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetPropertyValue(void)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  short in_w8;
  long in_x9;
  short *psVar4;
  short *psVar5;
  int iVar6;
  int unaff_w19;
  uint unaff_w20;
  uint uVar7;
  int unaff_w21;
  int unaff_w25;
  uint unaff_w26;
  
  psVar4 = (short *)(in_x9 + -2);
  iVar6 = 6;
  do {
    uVar7 = unaff_w20;
    sVar2 = 0x30;
    if (9 < (uVar7 & 0xe)) {
      sVar2 = in_w8;
    }
    psVar5 = psVar4 + -1;
    *psVar4 = sVar2 + ((ushort)uVar7 & 0xf);
    iVar3 = iVar6 + -1;
    bVar1 = -1 < iVar6;
    psVar4 = psVar5;
    unaff_w20 = uVar7 >> 4;
    iVar6 = iVar3;
  } while ((bVar1) || (0xf < uVar7));
  iVar6 = unaff_w21 + -10;
  do {
    uVar7 = unaff_w26;
    sVar2 = 0x30;
    if (9 < (uVar7 & 0xe)) {
      sVar2 = in_w8;
    }
    psVar4 = psVar5 + -1;
    *psVar5 = sVar2 + ((ushort)uVar7 & 0xf);
    iVar3 = iVar6 + -1;
    bVar1 = -1 < iVar6;
    psVar5 = psVar4;
    iVar6 = iVar3;
    unaff_w26 = uVar7 >> 4;
  } while ((bVar1) || (0xf < uVar7));
  return unaff_w25 <= unaff_w19;
}


