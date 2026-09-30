/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HasFlag
ENTRY_POINT: 074c4274
PROGRAM: cac-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasFlag(long param_1)

{
  uint uVar1;
  short *psVar2;
  short *psVar3;
  ulong uVar4;
  short *in_x9;
  uint in_w10;
  short in_w11;
  ulong in_x13;
  int in_w15;
  long unaff_x19;
  ulong unaff_x20;
  short *unaff_x21;
  
  while( true ) {
    psVar3 = in_x9 + -1;
    *in_x9 = (short)in_x13 + (short)unaff_x20 * in_w11 + 0x30;
    if ((in_w15 < 0) && ((uint)in_x13 < 10)) break;
    in_x13 = unaff_x20 & 0xffffffff;
    unaff_x20 = (unaff_x20 & 0xffffffff) * (ulong)in_w10 >> 0x23;
    in_x9 = psVar3;
    unaff_x21 = psVar3;
    in_w15 = in_w15 + -1;
  }
  uVar4 = param_1 - (long)unaff_x21;
  if ((long)uVar4 < 0) {
    uVar4 = uVar4 + 1;
  }
  uVar4 = uVar4 >> 1;
  *(int *)(unaff_x19 + 4) = (int)uVar4;
  psVar2 = (short *)FUN_074c4780();
  psVar3 = psVar2;
  if (-1 < (int)uVar4 + -1) {
    do {
      uVar1 = (int)uVar4 - 1;
      uVar4 = (ulong)uVar1;
      psVar2 = psVar3 + 1;
      *psVar3 = *unaff_x21;
      psVar3 = psVar2;
      unaff_x21 = unaff_x21 + 1;
    } while (uVar1 != 0);
  }
  *psVar2 = 0;
  return;
}


