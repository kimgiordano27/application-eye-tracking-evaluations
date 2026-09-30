/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_TraceWriter
ENTRY_POINT: 050dcadc
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


bool Newtonsoft_Json_Serialization_JsonSerializerProxy__get_TraceWriter(void)

{
  bool bVar1;
  uint uVar2;
  short *psVar3;
  short sVar4;
  uint in_w9;
  ulong uVar5;
  short *psVar6;
  long unaff_x20;
  int unaff_w21;
  int iVar7;
  long unaff_x22;
  ulong unaff_x24;
  ulong uVar8;
  int unaff_w25;
  int unaff_w26;
  
  psVar3 = (short *)(unaff_x22 + -2);
  do {
    do {
      psVar6 = psVar3;
      uVar5 = (unaff_x24 & 0xffffffff) * (ulong)(in_w9 & 0xffff | 0xcccc0000);
      uVar2 = (uint)unaff_x24;
      iVar7 = unaff_w21 + -1;
      uVar8 = uVar5 >> 0x23;
      *psVar6 = (short)unaff_x24 + (short)(uint)(uVar5 >> 0x23) * -10 + 0x30;
      bVar1 = -1 < unaff_w21;
      psVar3 = psVar6 + -1;
      unaff_x24 = uVar8;
      unaff_w21 = iVar7;
    } while (bVar1);
  } while (9 < uVar2);
  iVar7 = *(int *)(unaff_x20 + 0x10) + -1;
  if (-1 < iVar7) {
    do {
      psVar6 = psVar6 + -1;
      sVar4 = FUN_04f69818();
      iVar7 = iVar7 + -1;
      *psVar6 = sVar4;
    } while (iVar7 != -1);
  }
  return unaff_w25 <= unaff_w26;
}


