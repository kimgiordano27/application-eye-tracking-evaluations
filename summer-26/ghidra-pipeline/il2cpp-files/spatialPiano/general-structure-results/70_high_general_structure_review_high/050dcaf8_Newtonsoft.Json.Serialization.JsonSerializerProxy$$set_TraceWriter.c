/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_TraceWriter
ENTRY_POINT: 050dcaf8
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


bool Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TraceWriter(short *param_1)

{
  short sVar1;
  short *psVar2;
  uint in_w9;
  short in_w10;
  ulong in_x11;
  ulong in_x12;
  int in_w13;
  long unaff_x20;
  int unaff_w21;
  int iVar3;
  short *unaff_x22;
  ulong uVar4;
  int unaff_w25;
  int unaff_w26;
  
  while( true ) {
    unaff_w21 = unaff_w21 + -1;
    uVar4 = in_x12 >> 0x23;
    psVar2 = param_1 + -1;
    *param_1 = (short)in_x11 + (short)(uint)(in_x12 >> 0x23) * in_w10 + 0x30;
    if ((in_w13 < 0) && ((uint)in_x11 < 10)) break;
    in_x12 = uVar4 * in_w9;
    param_1 = psVar2;
    in_x11 = uVar4;
    unaff_x22 = psVar2;
    in_w13 = unaff_w21;
  }
  iVar3 = *(int *)(unaff_x20 + 0x10) + -1;
  if (-1 < iVar3) {
    do {
      unaff_x22 = unaff_x22 + -1;
      sVar1 = FUN_04f69818();
      iVar3 = iVar3 + -1;
      *unaff_x22 = sVar1;
    } while (iVar3 != -1);
  }
  return unaff_w25 <= unaff_w26;
}


