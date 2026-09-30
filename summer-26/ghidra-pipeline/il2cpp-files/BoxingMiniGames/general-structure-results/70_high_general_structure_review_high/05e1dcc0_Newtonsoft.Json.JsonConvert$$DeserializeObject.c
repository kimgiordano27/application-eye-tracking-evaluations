/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject
ENTRY_POINT: 05e1dcc0
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


void Newtonsoft_Json_JsonConvert__DeserializeObject(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  long unaff_x19;
  int unaff_w21;
  ulong unaff_x22;
  ulong uVar6;
  int unaff_w23;
  short *psVar7;
  short *psVar8;
  long unaff_x25;
  
  psVar7 = (short *)(unaff_x25 + (long)unaff_w21 * 2 + -2);
  iVar5 = unaff_w23 + -2;
  do {
    do {
      uVar3 = (uint)unaff_x22;
      uVar6 = (unaff_x22 & 0xffffffff) / 10;
      psVar8 = psVar7 + -1;
      *psVar7 = (short)unaff_x22 + (short)((unaff_x22 & 0xffffffff) / 10) * -10 + 0x30;
      iVar2 = iVar5 + -1;
      bVar1 = -1 < iVar5;
      unaff_x22 = uVar6;
      psVar7 = psVar8;
      iVar5 = iVar2;
    } while (bVar1);
  } while (9 < uVar3);
  iVar5 = *(int *)(unaff_x19 + 0x10) + -1;
  if (-1 < iVar5) {
    do {
      sVar4 = FUN_05c91ffc();
      iVar5 = iVar5 + -1;
      *psVar8 = sVar4;
      psVar8 = psVar8 + -1;
    } while (iVar5 != -1);
  }
  return;
}


