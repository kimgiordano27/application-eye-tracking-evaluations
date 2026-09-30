/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ReferenceLoopHandling
ENTRY_POINT: 050dccd8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ReferenceLoopHandling(void)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  short in_w8;
  short *in_x9;
  short *psVar4;
  short *psVar5;
  short in_w10;
  int iVar6;
  uint in_w12;
  short in_w13;
  uint in_w14;
  int in_w15;
  int unaff_w19;
  uint unaff_w20;
  uint uVar7;
  int unaff_w21;
  int unaff_w25;
  uint unaff_w26;
  
  while( true ) {
    uVar7 = unaff_w20;
    psVar4 = in_x9 + -1;
    *in_x9 = in_w13 + (short)in_w14;
    iVar6 = in_w15 + -1;
    if ((in_w15 < 0) && (in_w12 < 0x10)) break;
    in_w14 = uVar7 & 0xf;
    in_x9 = psVar4;
    unaff_w20 = uVar7 >> 4;
    in_w15 = iVar6;
    in_w12 = uVar7;
    in_w13 = in_w10;
    if (9 < (uVar7 & 0xe)) {
      in_w13 = in_w8;
    }
  }
  iVar6 = unaff_w21 + -10;
  do {
    uVar7 = unaff_w26;
    sVar2 = 0x30;
    if (9 < (uVar7 & 0xe)) {
      sVar2 = in_w8;
    }
    psVar5 = psVar4 + -1;
    *psVar4 = sVar2 + ((ushort)uVar7 & 0xf);
    iVar3 = iVar6 + -1;
    bVar1 = -1 < iVar6;
    psVar4 = psVar5;
    iVar6 = iVar3;
    unaff_w26 = uVar7 >> 4;
  } while ((bVar1) || (0xf < uVar7));
  return unaff_w25 <= unaff_w19;
}


