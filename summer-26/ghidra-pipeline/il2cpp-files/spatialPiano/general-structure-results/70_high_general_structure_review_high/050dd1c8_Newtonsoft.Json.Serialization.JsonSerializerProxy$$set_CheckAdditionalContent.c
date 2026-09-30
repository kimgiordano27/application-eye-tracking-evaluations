/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_CheckAdditionalContent
ENTRY_POINT: 050dd1c8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_CheckAdditionalContent(short *param_1)

{
  uint uVar1;
  short *psVar2;
  short *psVar3;
  ulong uVar4;
  uint in_w9;
  int in_w10;
  ulong in_x12;
  int in_w13;
  int in_w14;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  short *unaff_x22;
  
  while( true ) {
    psVar3 = param_1 + -1;
    *param_1 = (short)in_w13 + 0x30;
    if ((in_w14 < 0) && ((uint)in_x12 < 10)) break;
    uVar4 = (unaff_x20 & 0xffffffff) * (ulong)in_w9;
    in_x12 = unaff_x20 & 0xffffffff;
    in_w13 = (int)unaff_x20 + (uint)(uVar4 >> 0x23) * in_w10;
    param_1 = psVar3;
    unaff_x20 = uVar4 >> 0x23;
    unaff_x22 = psVar3;
    in_w14 = in_w14 + -1;
  }
  uVar4 = unaff_x21 - (long)unaff_x22;
  if ((long)uVar4 < 0) {
    uVar4 = uVar4 + 1;
  }
  uVar4 = uVar4 >> 1;
  *(int *)(unaff_x19 + 4) = (int)uVar4;
  psVar2 = (short *)FUN_050e41e0();
  psVar3 = psVar2;
  if (-1 < (int)uVar4 + -1) {
    do {
      uVar1 = (int)uVar4 - 1;
      uVar4 = (ulong)uVar1;
      psVar2 = psVar3 + 1;
      *psVar3 = *unaff_x22;
      psVar3 = psVar2;
      unaff_x22 = unaff_x22 + 1;
    } while (uVar1 != 0);
  }
  *psVar2 = 0;
  return;
}


