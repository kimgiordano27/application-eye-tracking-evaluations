/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeXNode
ENTRY_POINT: 05e1e74c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonConvert__SerializeXNode(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  short *psVar4;
  bool in_CY;
  short sVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint in_w9;
  ulong uVar10;
  uint uVar11;
  long unaff_x19;
  int unaff_w20;
  int iVar12;
  ulong unaff_x22;
  ulong uVar13;
  int unaff_w23;
  short *psVar14;
  
  if (in_CY) {
    if (in_w9 < 100) {
      unaff_w20 = unaff_w20 + 1;
    }
    else if (in_w9 < 1000) {
      unaff_w20 = unaff_w20 + 2;
    }
    else if (in_w9 >> 4 < 0x271) {
      unaff_w20 = unaff_w20 + 3;
    }
    else if (in_w9 >> 5 < 0xc35) {
      unaff_w20 = unaff_w20 + 4;
    }
    else if (in_w9 < 1000000) {
      unaff_w20 = unaff_w20 + 5;
    }
    else {
      unaff_w20 = unaff_w20 + 6;
    }
  }
  if (*(int *)(**(long **)(param_1 + 0xdf0) + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  puVar3 = PTR_DAT_07a115a8;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  iVar12 = unaff_w23;
  if (unaff_w23 <= unaff_w20) {
    iVar12 = unaff_w20;
  }
  iVar12 = *(int *)(unaff_x19 + 0x10) + iVar12;
  lVar7 = thunk_FUN_0367d828(iVar12,0);
  if (lVar7 == 0) {
    lVar9 = 0;
  }
  else {
    iVar6 = thunk_FUN_0364e8d0(0);
    lVar9 = lVar7 + iVar6;
  }
  lVar8 = *(long *)puVar3;
  psVar14 = (short *)(lVar9 + (long)iVar12 * 2);
  iVar12 = unaff_w23 + -2;
  while( true ) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar8 = *(long *)puVar3;
    iVar6 = (int)unaff_x22;
    if (unaff_x22 >> 0x20 == 0) break;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar8 = *(long *)puVar3;
    }
    unaff_x22 = unaff_x22 / 1000000000;
    psVar4 = psVar14 + -1;
    uVar13 = (ulong)(uint)(iVar6 + (int)unaff_x22 * -1000000000);
    iVar6 = 7;
    do {
      do {
        psVar14 = psVar4;
        uVar10 = uVar13 / 10;
        uVar11 = (uint)uVar13;
        *psVar14 = (short)uVar13 + (short)(uVar13 / 10) * -10 + 0x30;
        iVar2 = iVar6 + -1;
        bVar1 = -1 < iVar6;
        psVar4 = psVar14 + -1;
        uVar13 = uVar10;
        iVar6 = iVar2;
      } while (bVar1);
    } while (9 < uVar11);
    unaff_w23 = unaff_w23 + -9;
    iVar12 = iVar12 + -9;
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  if ((iVar6 != 0) || (-1 < unaff_w23 + -1)) {
    psVar4 = psVar14 + -1;
    do {
      do {
        psVar14 = psVar4;
        uVar11 = (uint)unaff_x22;
        iVar6 = iVar12 + -1;
        uVar13 = (unaff_x22 & 0xffffffff) / 10;
        *psVar14 = (short)unaff_x22 + (short)((unaff_x22 & 0xffffffff) / 10) * -10 + 0x30;
        bVar1 = -1 < iVar12;
        psVar4 = psVar14 + -1;
        unaff_x22 = uVar13;
        iVar12 = iVar6;
      } while (bVar1);
    } while (9 < uVar11);
  }
  iVar12 = *(int *)(unaff_x19 + 0x10) + -1;
  if (-1 < iVar12) {
    do {
      psVar14 = psVar14 + -1;
      sVar5 = FUN_05c91ffc();
      iVar12 = iVar12 + -1;
      *psVar14 = sVar5;
    } while (iVar12 != -1);
  }
  return lVar7;
}


