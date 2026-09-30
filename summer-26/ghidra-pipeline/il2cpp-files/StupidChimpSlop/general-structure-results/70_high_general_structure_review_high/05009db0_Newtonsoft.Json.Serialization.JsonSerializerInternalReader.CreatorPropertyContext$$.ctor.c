/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.CreatorPropertyContext$$.ctor
ENTRY_POINT: 05009db0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext___ctor(void)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  uint unaff_w19;
  uint uVar7;
  int unaff_w20;
  short unaff_w21;
  long unaff_x26;
  long unaff_x27;
  
  if (unaff_w20 < 2) {
    unaff_w20 = 1;
  }
  psVar4 = (short *)(unaff_x26 + unaff_x27 + -2);
  iVar6 = unaff_w20 + -2;
  do {
    uVar7 = unaff_w19;
    sVar2 = 0x30;
    if (9 < (uVar7 & 0xe)) {
      sVar2 = unaff_w21;
    }
    psVar5 = psVar4 + -1;
    *psVar4 = sVar2 + ((ushort)uVar7 & 0xf);
    iVar3 = iVar6 + -1;
    bVar1 = -1 < iVar6;
    psVar4 = psVar5;
    iVar6 = iVar3;
    unaff_w19 = uVar7 >> 4;
  } while ((bVar1) || (0xf < uVar7));
  return;
}


