/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXNode
ENTRY_POINT: 05e1ea44
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonConvert__DeserializeXNode(void)

{
  bool bVar1;
  short sVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  short *psVar6;
  short *psVar7;
  int iVar8;
  uint unaff_w19;
  int unaff_w20;
  short unaff_w21;
  ulong unaff_x22;
  undefined8 uVar9;
  undefined8 unaff_x23;
  uint unaff_w24;
  uint uVar10;
  long *unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar5 = (unaff_x22 & 0xffffffff) * 2;
  uVar3 = unaff_x23;
  uVar9 = 0;
  if (unaff_w24 != 0) {
    uVar3 = 0;
    uVar9 = unaff_x23;
  }
  if (unaff_w24 == 0) {
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    if (unaff_w20 < 2) {
      unaff_w20 = 1;
    }
    psVar7 = (short *)(unaff_x26 + lVar5 + -2);
    iVar8 = unaff_w20 + -2;
    do {
      uVar10 = unaff_w19;
      sVar2 = 0x30;
      if (9 < (uVar10 & 0xe)) {
        sVar2 = unaff_w21;
      }
      psVar6 = psVar7 + -1;
      *psVar7 = sVar2 + ((ushort)uVar10 & 0xf);
      iVar4 = iVar8 + -1;
      bVar1 = -1 < iVar8;
      psVar7 = psVar6;
      unaff_w19 = uVar10 >> 4;
      iVar8 = iVar4;
    } while ((bVar1) || (uVar9 = uVar3, 0xf < uVar10));
  }
  else {
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    psVar7 = (short *)(unaff_x26 + lVar5 + -2);
    iVar8 = 6;
    do {
      uVar10 = unaff_w19;
      sVar2 = 0x30;
      if (9 < (uVar10 & 0xe)) {
        sVar2 = unaff_w21;
      }
      psVar6 = psVar7 + -1;
      *psVar7 = sVar2 + ((ushort)uVar10 & 0xf);
      iVar4 = iVar8 + -1;
      bVar1 = -1 < iVar8;
      psVar7 = psVar6;
      unaff_w19 = uVar10 >> 4;
      iVar8 = iVar4;
    } while ((bVar1) || (0xf < uVar10));
    iVar8 = unaff_w20 + -10;
    do {
      uVar10 = unaff_w24;
      sVar2 = 0x30;
      if (9 < (uVar10 & 0xe)) {
        sVar2 = unaff_w21;
      }
      psVar7 = psVar6 + -1;
      *psVar6 = sVar2 + ((ushort)uVar10 & 0xf);
      iVar4 = iVar8 + -1;
      bVar1 = -1 < iVar8;
      psVar6 = psVar7;
      unaff_w24 = uVar10 >> 4;
      iVar8 = iVar4;
    } while ((bVar1) || (0xf < uVar10));
  }
  return uVar9;
}


