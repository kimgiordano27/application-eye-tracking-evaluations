/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXmlNode
ENTRY_POINT: 05e1e4ac
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonConvert__DeserializeXmlNode(long *param_1)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  short *psVar9;
  short *psVar10;
  uint in_w9;
  int iVar11;
  uint uVar12;
  ulong unaff_x19;
  ulong uVar13;
  int unaff_w20;
  int unaff_w22;
  
  if (in_w9 < 100) {
    iVar4 = unaff_w20 + 1;
  }
  else if (in_w9 < 1000) {
    iVar4 = unaff_w20 + 2;
  }
  else if (in_w9 >> 4 < 0x271) {
    iVar4 = unaff_w20 + 3;
  }
  else if (in_w9 >> 5 < 0xc35) {
    iVar4 = unaff_w20 + 4;
  }
  else if (in_w9 < 1000000) {
    iVar4 = unaff_w20 + 5;
  }
  else {
    iVar4 = unaff_w20 + 6;
  }
  if (*(int *)(*param_1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  puVar3 = PTR_DAT_07a115a8;
  iVar11 = unaff_w22;
  if (unaff_w22 <= iVar4) {
    iVar11 = iVar4;
  }
  lVar5 = thunk_FUN_0367d828(iVar11,0);
  if (lVar5 == 0) {
    lVar7 = 0;
  }
  else {
    iVar4 = thunk_FUN_0364e8d0(0);
    lVar7 = lVar5 + iVar4;
  }
  lVar6 = *(long *)puVar3;
  iVar4 = unaff_w22 + -2;
  psVar9 = (short *)(lVar7 + (ulong)(uint)(iVar11 << 1));
  while( true ) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar6 = *(long *)puVar3;
    iVar11 = (int)unaff_x19;
    if (unaff_x19 >> 0x20 == 0) break;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar6 = *(long *)puVar3;
    }
    unaff_x19 = unaff_x19 / 1000000000;
    uVar13 = (ulong)(uint)(iVar11 + (int)unaff_x19 * -1000000000);
    iVar11 = 7;
    do {
      do {
        uVar8 = uVar13 / 10;
        uVar12 = (uint)uVar13;
        psVar9 = psVar9 + -1;
        *psVar9 = (short)uVar13 + (short)(uVar13 / 10) * -10 + 0x30;
        iVar2 = iVar11 + -1;
        bVar1 = -1 < iVar11;
        uVar13 = uVar8;
        iVar11 = iVar2;
      } while (bVar1);
    } while (9 < uVar12);
    unaff_w22 = unaff_w22 + -9;
    iVar4 = iVar4 + -9;
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  if ((iVar11 != 0) || (-1 < unaff_w22 + -1)) {
    psVar9 = psVar9 + -1;
    do {
      do {
        uVar12 = (uint)unaff_x19;
        iVar11 = iVar4 + -1;
        uVar13 = (unaff_x19 & 0xffffffff) / 10;
        psVar10 = psVar9 + -1;
        *psVar9 = (short)unaff_x19 + (short)((unaff_x19 & 0xffffffff) / 10) * -10 + 0x30;
        bVar1 = -1 < iVar4;
        psVar9 = psVar10;
        unaff_x19 = uVar13;
        iVar4 = iVar11;
      } while (bVar1);
    } while (9 < uVar12);
  }
  return lVar5;
}


