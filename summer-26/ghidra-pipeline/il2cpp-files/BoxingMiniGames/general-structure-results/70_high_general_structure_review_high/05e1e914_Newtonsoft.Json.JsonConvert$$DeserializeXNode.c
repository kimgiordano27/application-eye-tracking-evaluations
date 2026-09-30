/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXNode
ENTRY_POINT: 05e1e914
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


void Newtonsoft_Json_JsonConvert__DeserializeXNode(short *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  short sVar3;
  uint in_w9;
  short in_w10;
  ulong uVar4;
  long unaff_x19;
  int iVar5;
  int unaff_w21;
  ulong uVar6;
  ulong unaff_x22;
  short *unaff_x24;
  
  while (uVar6 = unaff_x22, iVar5 = unaff_w21, (bool)in_CY && !(bool)in_ZR) {
    do {
      unaff_x24 = param_1;
      uVar4 = (uVar6 & 0xffffffff) * (ulong)in_w9;
      uVar2 = (uint)uVar6;
      unaff_w21 = iVar5 + -1;
      unaff_x22 = uVar4 >> 0x23;
      param_1 = unaff_x24 + -1;
      *unaff_x24 = (short)uVar6 + (short)(uint)(uVar4 >> 0x23) * in_w10 + 0x30;
      bVar1 = -1 < iVar5;
      uVar6 = unaff_x22;
      iVar5 = unaff_w21;
    } while (bVar1);
    in_ZR = uVar2 == 9;
    in_CY = 8 < uVar2;
  }
  iVar5 = *(int *)(unaff_x19 + 0x10) + -1;
  if (-1 < iVar5) {
    do {
      unaff_x24 = unaff_x24 + -1;
      sVar3 = FUN_05c91ffc();
      iVar5 = iVar5 + -1;
      *unaff_x24 = sVar3;
    } while (iVar5 != -1);
  }
  return;
}


