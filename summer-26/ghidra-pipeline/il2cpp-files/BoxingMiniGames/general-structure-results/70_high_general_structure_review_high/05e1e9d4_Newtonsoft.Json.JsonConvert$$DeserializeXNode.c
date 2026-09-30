/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXNode
ENTRY_POINT: 05e1e9d4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonConvert__DeserializeXNode(ulong param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  short sVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined *puVar8;
  bool in_ZR;
  int iVar9;
  long lVar10;
  ulong uVar11;
  short *psVar12;
  short *psVar13;
  uint in_w10;
  uint unaff_w19;
  uint unaff_w20;
  short unaff_w21;
  long lVar14;
  uint unaff_w24;
  uint uVar15;
  long *unaff_x25;
  long lVar16;
  
  if (in_ZR) {
    in_w10 = 1;
  }
  uVar11 = param_1 >> 0x10;
  uVar4 = uVar11;
  if (uVar11 == 0) {
    uVar4 = param_1;
  }
  uVar15 = in_w10 | 4;
  if (uVar11 == 0) {
    uVar15 = in_w10;
  }
  uVar11 = uVar4 >> 8;
  if (uVar4 < 0x100) {
    uVar11 = uVar4;
  }
  uVar2 = uVar15 | 2;
  if (uVar4 < 0x100) {
    uVar2 = uVar15;
  }
  if (0xf < uVar11) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  puVar8 = PTR_DAT_07a115a8;
  uVar15 = unaff_w20;
  if ((int)unaff_w20 <= (int)uVar2) {
    uVar15 = uVar2;
  }
  lVar10 = thunk_FUN_0367d828((ulong)uVar15,0);
  if (lVar10 == 0) {
    lVar16 = 0;
  }
  else {
    iVar9 = thunk_FUN_0364e8d0(0);
    lVar16 = lVar10 + iVar9;
  }
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar7 = (ulong)uVar15 * 2;
  lVar5 = lVar10;
  lVar14 = 0;
  if (unaff_w24 != 0) {
    lVar5 = 0;
    lVar14 = lVar10;
  }
  iVar9 = *(int *)(*(long *)puVar8 + 0xe4);
  if (unaff_w24 == 0) {
    if (iVar9 == 0) {
      thunk_FUN_036a1978();
    }
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    if ((int)unaff_w20 < 2) {
      unaff_w20 = 1;
    }
    psVar13 = (short *)(lVar16 + lVar7 + -2);
    iVar9 = unaff_w20 - 2;
    do {
      uVar15 = unaff_w19;
      sVar3 = 0x30;
      if (9 < (uVar15 & 0xe)) {
        sVar3 = unaff_w21;
      }
      psVar12 = psVar13 + -1;
      *psVar13 = sVar3 + ((ushort)uVar15 & 0xf);
      iVar6 = iVar9 + -1;
      bVar1 = -1 < iVar9;
      psVar13 = psVar12;
      unaff_w19 = uVar15 >> 4;
      iVar9 = iVar6;
    } while ((bVar1) || (lVar14 = lVar5, 0xf < uVar15));
  }
  else {
    if (iVar9 == 0) {
      thunk_FUN_036a1978();
    }
    psVar13 = (short *)(lVar16 + lVar7 + -2);
    iVar9 = 6;
    do {
      uVar15 = unaff_w19;
      sVar3 = 0x30;
      if (9 < (uVar15 & 0xe)) {
        sVar3 = unaff_w21;
      }
      psVar12 = psVar13 + -1;
      *psVar13 = sVar3 + ((ushort)uVar15 & 0xf);
      iVar6 = iVar9 + -1;
      bVar1 = -1 < iVar9;
      psVar13 = psVar12;
      unaff_w19 = uVar15 >> 4;
      iVar9 = iVar6;
    } while ((bVar1) || (0xf < uVar15));
    iVar9 = unaff_w20 - 10;
    do {
      uVar15 = unaff_w24;
      sVar3 = 0x30;
      if (9 < (uVar15 & 0xe)) {
        sVar3 = unaff_w21;
      }
      psVar13 = psVar12 + -1;
      *psVar12 = sVar3 + ((ushort)uVar15 & 0xf);
      iVar6 = iVar9 + -1;
      bVar1 = -1 < iVar9;
      psVar12 = psVar13;
      unaff_w24 = uVar15 >> 4;
      iVar9 = iVar6;
    } while ((bVar1) || (0xf < uVar15));
  }
  return lVar14;
}


