/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadMetadataProperties
ENTRY_POINT: 0717f164
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataProperties
               (ulong param_1)

{
  uint uVar1;
  short *psVar2;
  short *psVar3;
  ulong uVar4;
  short in_w9;
  int in_w10;
  int iVar5;
  ulong in_x11;
  int in_w12;
  long unaff_x19;
  short *unaff_x20;
  long unaff_x21;
  ulong unaff_x24;
  
  while ((iVar5 = in_w10, -1 < in_w12 || (9 < (uint)in_x11))) {
    uVar4 = (unaff_x24 & 0xffffffff) * (param_1 & 0xffffffff);
    unaff_x20 = unaff_x20 + -1;
    *unaff_x20 = (short)unaff_x24 + (short)(uint)(uVar4 >> 0x23) * in_w9 + 0x30;
    in_x11 = unaff_x24 & 0xffffffff;
    unaff_x24 = uVar4 >> 0x23;
    in_w10 = iVar5 + -1;
    in_w12 = iVar5;
  }
  uVar4 = unaff_x21 - (long)unaff_x20;
  if ((long)uVar4 < 0) {
    uVar4 = uVar4 + 1;
  }
  uVar4 = uVar4 >> 1;
  *(int *)(unaff_x19 + 4) = (int)uVar4;
  psVar2 = (short *)FUN_07186be4();
  psVar3 = psVar2;
  if (-1 < (int)uVar4 + -1) {
    do {
      uVar1 = (int)uVar4 - 1;
      uVar4 = (ulong)uVar1;
      psVar2 = psVar3 + 1;
      *psVar3 = *unaff_x20;
      psVar3 = psVar2;
      unaff_x20 = unaff_x20 + 1;
    } while (0 < (int)uVar1);
  }
  *psVar2 = 0;
  return;
}


