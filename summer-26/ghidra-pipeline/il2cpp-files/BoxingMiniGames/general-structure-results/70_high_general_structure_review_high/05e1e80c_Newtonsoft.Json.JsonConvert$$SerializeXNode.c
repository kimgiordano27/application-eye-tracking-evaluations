/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeXNode
ENTRY_POINT: 05e1e80c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__SerializeXNode(long param_1)

{
  bool bVar1;
  int iVar2;
  short *psVar3;
  short sVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  long unaff_x19;
  int unaff_w21;
  int iVar9;
  ulong unaff_x22;
  ulong uVar10;
  int unaff_w23;
  short *psVar11;
  long *unaff_x25;
  
  lVar5 = *unaff_x25;
  psVar11 = (short *)(param_1 + (long)unaff_w21 * 2);
  iVar9 = unaff_w23 + -2;
  while( true ) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar5 = *unaff_x25;
    iVar7 = (int)unaff_x22;
    if (unaff_x22 >> 0x20 == 0) break;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar5 = *unaff_x25;
    }
    unaff_x22 = unaff_x22 / 1000000000;
    psVar3 = psVar11 + -1;
    uVar10 = (ulong)(uint)(iVar7 + (int)unaff_x22 * -1000000000);
    iVar7 = 7;
    do {
      do {
        psVar11 = psVar3;
        uVar6 = uVar10 / 10;
        uVar8 = (uint)uVar10;
        *psVar11 = (short)uVar10 + (short)(uVar10 / 10) * -10 + 0x30;
        iVar2 = iVar7 + -1;
        bVar1 = -1 < iVar7;
        psVar3 = psVar11 + -1;
        uVar10 = uVar6;
        iVar7 = iVar2;
      } while (bVar1);
    } while (9 < uVar8);
    unaff_w23 = unaff_w23 + -9;
    iVar9 = iVar9 + -9;
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  if ((iVar7 != 0) || (-1 < unaff_w23 + -1)) {
    psVar3 = psVar11 + -1;
    do {
      do {
        psVar11 = psVar3;
        uVar8 = (uint)unaff_x22;
        iVar7 = iVar9 + -1;
        uVar10 = (unaff_x22 & 0xffffffff) / 10;
        *psVar11 = (short)unaff_x22 + (short)((unaff_x22 & 0xffffffff) / 10) * -10 + 0x30;
        bVar1 = -1 < iVar9;
        psVar3 = psVar11 + -1;
        unaff_x22 = uVar10;
        iVar9 = iVar7;
      } while (bVar1);
    } while (9 < uVar8);
  }
  iVar9 = *(int *)(unaff_x19 + 0x10) + -1;
  if (-1 < iVar9) {
    do {
      psVar11 = psVar11 + -1;
      sVar4 = FUN_05c91ffc();
      iVar9 = iVar9 + -1;
      *psVar11 = sVar4;
    } while (iVar9 != -1);
  }
  return;
}


