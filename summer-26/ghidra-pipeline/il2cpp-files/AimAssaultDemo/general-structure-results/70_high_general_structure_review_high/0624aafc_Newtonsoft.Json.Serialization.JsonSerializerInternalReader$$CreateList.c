/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateList
ENTRY_POINT: 0624aafc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateList(long param_1)

{
  uint uVar1;
  short *psVar2;
  short *psVar3;
  uint in_w9;
  short in_w10;
  ulong in_x11;
  int in_w13;
  long unaff_x19;
  ulong unaff_x20;
  ulong uVar4;
  short *unaff_x21;
  
  while( true ) {
    uVar4 = in_x11 >> 0x23;
    unaff_x21 = unaff_x21 + -1;
    *unaff_x21 = (short)unaff_x20 + (short)(uint)(in_x11 >> 0x23) * in_w10 + 0x30;
    if ((in_w13 < 0) && ((uint)unaff_x20 < 10)) break;
    in_x11 = uVar4 * in_w9;
    unaff_x20 = uVar4;
    in_w13 = in_w13 + -1;
  }
  uVar4 = param_1 - (long)unaff_x21;
  if ((long)uVar4 < 0) {
    uVar4 = uVar4 + 1;
  }
  uVar4 = uVar4 >> 1;
  *(int *)(unaff_x19 + 4) = (int)uVar4;
  psVar2 = (short *)FUN_06251760();
  psVar3 = psVar2;
  if (-1 < (int)uVar4 + -1) {
    do {
      uVar1 = (int)uVar4 - 1;
      uVar4 = (ulong)uVar1;
      psVar2 = psVar3 + 1;
      *psVar3 = *unaff_x21;
      psVar3 = psVar2;
      unaff_x21 = unaff_x21 + 1;
    } while (0 < (int)uVar1);
  }
  *psVar2 = 0;
  return;
}


