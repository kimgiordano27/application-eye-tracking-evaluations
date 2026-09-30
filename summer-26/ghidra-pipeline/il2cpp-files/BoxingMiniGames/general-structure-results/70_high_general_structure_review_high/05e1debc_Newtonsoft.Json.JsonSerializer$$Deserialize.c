/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize
ENTRY_POINT: 05e1debc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


bool Newtonsoft_Json_JsonSerializer__Deserialize(ulong param_1,uint param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  short *psVar6;
  short *psVar7;
  int iVar8;
  uint uVar9;
  int unaff_w19;
  ulong uVar10;
  ulong uVar11;
  uint *unaff_x22;
  long unaff_x24;
  
  if ((param_1 & 1) == 0) {
    FUN_03642964(PTR_DAT_079f4df0);
    FUN_03642964(PTR_DAT_07a0b8b0);
    FUN_03642964(PTR_DAT_07a115a8);
    FUN_03642964(PTR_DAT_07a0bb50);
    *(undefined1 *)(unaff_x24 + 0xcd3) = 1;
  }
  uVar3 = param_2 >> 5;
  uVar9 = 6;
  if (uVar3 < 0xc35) {
    uVar9 = 1;
  }
  uVar2 = uVar3 / 0xc35;
  if (uVar3 < 0xc35) {
    uVar2 = param_2;
  }
  if (9 < uVar2) {
    if (uVar2 < 100) {
      uVar9 = uVar9 + 1;
    }
    else if (uVar2 < 1000) {
      uVar9 = uVar9 + 2;
    }
    else if (uVar2 >> 4 < 0x271) {
      uVar9 = uVar9 + 3;
    }
    else {
      uVar9 = uVar9 + 4;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_079f4df0 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar3 = param_3;
  if ((int)param_3 <= (int)uVar9) {
    uVar3 = uVar9;
  }
  if (unaff_w19 < (int)uVar3) {
    *unaff_x22 = 0;
  }
  else {
    *unaff_x22 = uVar3;
    lVar5 = FUN_03daae30();
    if ((int)param_3 < 2) {
      psVar6 = (short *)(lVar5 + (ulong)uVar3 * 2);
      uVar10 = (ulong)param_2;
      do {
        psVar6 = psVar6 + -1;
        uVar9 = (uint)uVar10;
        *psVar6 = (short)uVar10 + (short)(uVar10 / 10) * -10 + 0x30;
        uVar10 = uVar10 / 10;
      } while (9 < uVar9);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_07a115a8 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      psVar6 = (short *)(lVar5 + (ulong)uVar3 * 2 + -2);
      uVar10 = (ulong)param_2;
      iVar8 = param_3 - 2;
      do {
        do {
          uVar11 = uVar10 / 10;
          uVar9 = (uint)uVar10;
          psVar7 = psVar6 + -1;
          *psVar6 = (short)uVar10 + (short)(uVar10 / 10) * -10 + 0x30;
          iVar4 = iVar8 + -1;
          bVar1 = -1 < iVar8;
          psVar6 = psVar7;
          uVar10 = uVar11;
          iVar8 = iVar4;
        } while (bVar1);
      } while (9 < uVar9);
    }
  }
  return (int)uVar3 <= unaff_w19;
}


