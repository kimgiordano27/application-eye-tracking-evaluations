/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_CheckAdditionalContent
ENTRY_POINT: 050dd1a8
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_CheckAdditionalContent(short *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  short *psVar5;
  uint in_w9;
  int in_w11;
  ulong uVar6;
  long unaff_x19;
  ulong unaff_x20;
  ulong uVar7;
  long unaff_x21;
  short *psVar8;
  
  do {
    do {
      psVar8 = param_1;
      uVar6 = (unaff_x20 & 0xffffffff) * (ulong)(in_w9 & 0xffff | 0xcccc0000);
      uVar3 = (uint)unaff_x20;
      uVar7 = uVar6 >> 0x23;
      *psVar8 = (short)unaff_x20 + (short)(uint)(uVar6 >> 0x23) * -10 + 0x30;
      iVar2 = in_w11 + -1;
      bVar1 = -1 < in_w11;
      param_1 = psVar8 + -1;
      unaff_x20 = uVar7;
      in_w11 = iVar2;
    } while (bVar1);
  } while (9 < uVar3);
  uVar6 = unaff_x21 - (long)psVar8;
  if ((long)uVar6 < 0) {
    uVar6 = uVar6 + 1;
  }
  uVar6 = uVar6 >> 1;
  *(int *)(unaff_x19 + 4) = (int)uVar6;
  psVar4 = (short *)FUN_050e41e0();
  psVar5 = psVar4;
  if (-1 < (int)uVar6 + -1) {
    do {
      uVar3 = (int)uVar6 - 1;
      uVar6 = (ulong)uVar3;
      psVar4 = psVar5 + 1;
      *psVar5 = *psVar8;
      psVar5 = psVar4;
      psVar8 = psVar8 + 1;
    } while (uVar3 != 0);
  }
  *psVar4 = 0;
  return;
}


