/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXmlNode
ENTRY_POINT: 05e1e454
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonConvert__DeserializeXmlNode(void)

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
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulong unaff_x19;
  ulong uVar14;
  int unaff_w22;
  
  iVar4 = 0xf;
  uVar11 = (uint)(unaff_x19 / 100000000000000);
  if (9 < uVar11) {
    uVar12 = (uint)(unaff_x19 / 100000000000000);
    if (uVar11 < 99 || uVar12 == 99) {
      iVar4 = 0x10;
    }
    else if (uVar12 < 1000) {
      iVar4 = 0x11;
    }
    else if ((uint)(unaff_x19 / 1600000000000000) < 0x271) {
      iVar4 = 0x12;
    }
    else if ((uint)(unaff_x19 / 3200000000000000) < 0xc35) {
      iVar4 = 0x13;
    }
    else if ((uint)(unaff_x19 / 100000000000000) < 1000000) {
      iVar4 = 0x14;
    }
    else {
      iVar4 = 0x15;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_079f4df0 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  puVar3 = PTR_DAT_07a115a8;
  iVar13 = unaff_w22;
  if (unaff_w22 <= iVar4) {
    iVar13 = iVar4;
  }
  lVar5 = thunk_FUN_0367d828(iVar13,0);
  if (lVar5 == 0) {
    lVar7 = 0;
  }
  else {
    iVar4 = thunk_FUN_0364e8d0(0);
    lVar7 = lVar5 + iVar4;
  }
  lVar6 = *(long *)puVar3;
  iVar4 = unaff_w22 + -2;
  psVar9 = (short *)(lVar7 + (ulong)(uint)(iVar13 << 1));
  while( true ) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar6 = *(long *)puVar3;
    iVar13 = (int)unaff_x19;
    if (unaff_x19 >> 0x20 == 0) break;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar6 = *(long *)puVar3;
    }
    unaff_x19 = unaff_x19 / 1000000000;
    uVar14 = (ulong)(uint)(iVar13 + (int)unaff_x19 * -1000000000);
    iVar13 = 7;
    do {
      do {
        uVar8 = uVar14 / 10;
        uVar11 = (uint)uVar14;
        psVar9 = psVar9 + -1;
        *psVar9 = (short)uVar14 + (short)(uVar14 / 10) * -10 + 0x30;
        iVar2 = iVar13 + -1;
        bVar1 = -1 < iVar13;
        uVar14 = uVar8;
        iVar13 = iVar2;
      } while (bVar1);
    } while (9 < uVar11);
    unaff_w22 = unaff_w22 + -9;
    iVar4 = iVar4 + -9;
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  if ((iVar13 != 0) || (-1 < unaff_w22 + -1)) {
    psVar9 = psVar9 + -1;
    do {
      do {
        uVar11 = (uint)unaff_x19;
        iVar13 = iVar4 + -1;
        uVar14 = (unaff_x19 & 0xffffffff) / 10;
        psVar10 = psVar9 + -1;
        *psVar9 = (short)unaff_x19 + (short)((unaff_x19 & 0xffffffff) / 10) * -10 + 0x30;
        bVar1 = -1 < iVar4;
        psVar9 = psVar10;
        unaff_x19 = uVar14;
        iVar4 = iVar13;
      } while (bVar1);
    } while (9 < uVar11);
  }
  return lVar5;
}


