/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXNode
ENTRY_POINT: 05e1e96c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonConvert__DeserializeXNode(ulong param_1,short param_2,uint param_3)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  ushort uVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  short *psVar15;
  short *psVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  
  puVar10 = PTR_DAT_079f4df0;
  if ((DAT_07edecd7 & 1) == 0) {
    FUN_03642964(PTR_DAT_079f4df0);
    FUN_03642964(PTR_DAT_07a115a8);
    DAT_07edecd7 = 1;
  }
  uVar19 = param_1 >> 0x20;
  uVar5 = uVar19;
  if (uVar19 == 0) {
    uVar5 = param_1;
  }
  uVar17 = 9;
  if (uVar19 == 0) {
    uVar17 = 1;
  }
  uVar14 = uVar5 >> 0x10;
  uVar4 = uVar14;
  if (uVar14 == 0) {
    uVar4 = uVar5;
  }
  uVar3 = uVar17 | 4;
  if (uVar14 == 0) {
    uVar3 = uVar17;
  }
  uVar5 = uVar4 >> 8;
  if (uVar4 < 0x100) {
    uVar5 = uVar4;
  }
  uVar17 = uVar3 | 2;
  if (uVar4 < 0x100) {
    uVar17 = uVar3;
  }
  if (0xf < uVar5) {
    uVar17 = uVar17 + 1;
  }
  if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  puVar11 = PTR_DAT_07a115a8;
  uVar3 = param_3;
  if ((int)param_3 <= (int)uVar17) {
    uVar3 = uVar17;
  }
  lVar13 = thunk_FUN_0367d828((ulong)uVar3,0);
  if (lVar13 == 0) {
    lVar20 = 0;
  }
  else {
    iVar12 = thunk_FUN_0364e8d0(0);
    lVar20 = lVar13 + iVar12;
  }
  if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar8 = (ulong)uVar3 * 2;
  iVar12 = (int)(param_1 >> 0x20);
  lVar6 = lVar13;
  lVar18 = 0;
  if (iVar12 != 0) {
    lVar6 = 0;
    lVar18 = lVar13;
  }
  iVar7 = *(int *)(*(long *)puVar11 + 0xe4);
  if (iVar12 == 0) {
    if (iVar7 == 0) {
      thunk_FUN_036a1978();
    }
    if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    if ((int)param_3 < 2) {
      param_3 = 1;
    }
    psVar16 = (short *)(lVar20 + lVar8 + -2);
    iVar12 = param_3 - 2;
    do {
      uVar17 = (uint)param_1;
      uVar9 = (ushort)param_1;
      param_1 = (ulong)(uVar17 >> 4);
      sVar2 = 0x30;
      if (9 < (uVar17 & 0xe)) {
        sVar2 = param_2;
      }
      psVar15 = psVar16 + -1;
      *psVar16 = sVar2 + (uVar9 & 0xf);
      iVar7 = iVar12 + -1;
      bVar1 = -1 < iVar12;
      psVar16 = psVar15;
      iVar12 = iVar7;
    } while ((bVar1) || (lVar18 = lVar6, 0xf < uVar17));
  }
  else {
    if (iVar7 == 0) {
      thunk_FUN_036a1978();
    }
    psVar16 = (short *)(lVar20 + lVar8 + -2);
    iVar12 = 6;
    do {
      uVar17 = (uint)param_1;
      uVar9 = (ushort)param_1;
      param_1 = (ulong)(uVar17 >> 4);
      sVar2 = 0x30;
      if (9 < (uVar17 & 0xe)) {
        sVar2 = param_2;
      }
      psVar15 = psVar16 + -1;
      *psVar16 = sVar2 + (uVar9 & 0xf);
      iVar7 = iVar12 + -1;
      bVar1 = -1 < iVar12;
      psVar16 = psVar15;
      iVar12 = iVar7;
    } while ((bVar1) || (0xf < uVar17));
    iVar12 = param_3 - 10;
    do {
      uVar17 = (uint)uVar19;
      uVar9 = (ushort)uVar19;
      uVar19 = (ulong)(uVar17 >> 4);
      sVar2 = 0x30;
      if (9 < (uVar17 & 0xe)) {
        sVar2 = param_2;
      }
      psVar16 = psVar15 + -1;
      *psVar15 = sVar2 + (uVar9 & 0xf);
      iVar7 = iVar12 + -1;
      bVar1 = -1 < iVar12;
      psVar15 = psVar16;
      iVar12 = iVar7;
    } while ((bVar1) || (0xf < uVar17));
  }
  return lVar18;
}


