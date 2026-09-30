/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Populate
ENTRY_POINT: 05e1e1a4
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


bool Newtonsoft_Json_JsonSerializer__Populate(long param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  short *psVar6;
  short *psVar7;
  int unaff_w23;
  int unaff_w24;
  ulong unaff_x25;
  ulong uVar8;
  
  if (*(int *)(**(long **)(param_1 + 0x5a8) + 0xe4) == 0) {
    thunk_FUN_036a1978(**(long **)(param_1 + 0x5a8));
  }
  psVar6 = (short *)(unaff_x21 + (long)unaff_w23 * 2 + -2);
  iVar5 = unaff_w24 + -2;
  do {
    do {
      uVar3 = (uint)unaff_x25;
      uVar8 = (unaff_x25 & 0xffffffff) / 10;
      psVar7 = psVar6 + -1;
      *psVar6 = (short)unaff_x25 + (short)((unaff_x25 & 0xffffffff) / 10) * -10 + 0x30;
      iVar2 = iVar5 + -1;
      bVar1 = -1 < iVar5;
      psVar6 = psVar7;
      unaff_x25 = uVar8;
      iVar5 = iVar2;
    } while (bVar1);
  } while (9 < uVar3);
  iVar5 = *(int *)(unaff_x20 + 0x10) + -1;
  if (-1 < iVar5) {
    do {
      sVar4 = FUN_05c91ffc();
      iVar5 = iVar5 + -1;
      *psVar7 = sVar4;
      psVar7 = psVar7 + -1;
    } while (iVar5 != -1);
  }
  return unaff_w23 <= unaff_w19;
}


