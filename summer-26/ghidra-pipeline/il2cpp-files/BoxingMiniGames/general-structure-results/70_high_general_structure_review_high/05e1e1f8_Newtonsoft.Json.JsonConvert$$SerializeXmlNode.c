/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeXmlNode
ENTRY_POINT: 05e1e1f8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_JsonConvert__SerializeXmlNode(ulong param_1)

{
  bool bVar1;
  short sVar2;
  short in_w9;
  int iVar3;
  int in_w10;
  ulong in_x11;
  ulong uVar4;
  int unaff_w19;
  long unaff_x20;
  short *psVar5;
  short *unaff_x22;
  int unaff_w23;
  ulong uVar6;
  ulong unaff_x25;
  
  while (psVar5 = unaff_x22, uVar6 = unaff_x25, iVar3 = in_w10, 9 < (uint)in_x11) {
    do {
      uVar4 = (uVar6 & 0xffffffff) * (param_1 & 0xffffffff);
      in_x11 = uVar6 & 0xffffffff;
      unaff_x25 = uVar4 >> 0x23;
      unaff_x22 = psVar5 + -1;
      *psVar5 = (short)uVar6 + (short)(uint)(uVar4 >> 0x23) * in_w9 + 0x30;
      in_w10 = iVar3 + -1;
      bVar1 = -1 < iVar3;
      psVar5 = unaff_x22;
      uVar6 = unaff_x25;
      iVar3 = in_w10;
    } while (bVar1);
  }
  iVar3 = *(int *)(unaff_x20 + 0x10) + -1;
  if (-1 < iVar3) {
    do {
      sVar2 = FUN_05c91ffc();
      iVar3 = iVar3 + -1;
      *unaff_x22 = sVar2;
      unaff_x22 = unaff_x22 + -1;
    } while (iVar3 != -1);
  }
  return unaff_w23 <= unaff_w19;
}


