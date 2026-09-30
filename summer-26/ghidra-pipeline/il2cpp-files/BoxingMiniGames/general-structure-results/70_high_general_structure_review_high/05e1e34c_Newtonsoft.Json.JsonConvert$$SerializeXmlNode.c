/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeXmlNode
ENTRY_POINT: 05e1e34c
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


bool Newtonsoft_Json_JsonConvert__SerializeXmlNode(void)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  int unaff_w19;
  uint unaff_w20;
  uint uVar8;
  short unaff_w21;
  int unaff_w24;
  int unaff_w25;
  long *unaff_x26;
  
  lVar4 = FUN_03daae30();
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_036a1978(*unaff_x26);
  }
  psVar5 = (short *)(lVar4 + (ulong)(uint)(unaff_w24 << 1) + -2);
  iVar7 = unaff_w25 + -2;
  do {
    uVar8 = unaff_w20;
    sVar2 = 0x30;
    if (9 < (uVar8 & 0xe)) {
      sVar2 = unaff_w21;
    }
    psVar6 = psVar5 + -1;
    *psVar5 = sVar2 + ((ushort)uVar8 & 0xf);
    iVar3 = iVar7 + -1;
    bVar1 = -1 < iVar7;
    psVar5 = psVar6;
    iVar7 = iVar3;
    unaff_w20 = uVar8 >> 4;
  } while ((bVar1) || (0xf < uVar8));
  return unaff_w24 <= unaff_w19;
}


