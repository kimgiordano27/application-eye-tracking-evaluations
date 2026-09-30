/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolvePropertyAndCreatorValues
ENTRY_POINT: 05008d08
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolvePropertyAndCreatorValues
               (long *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  short *psVar6;
  short *psVar7;
  uint uVar8;
  ulong unaff_x19;
  ulong uVar9;
  uint unaff_w20;
  int unaff_w21;
  long lVar10;
  
  if (*(int *)(*param_1 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar8 = unaff_w20;
  if ((int)unaff_w20 <= (int)(unaff_w21 + 1U)) {
    uVar8 = unaff_w21 + 1U;
  }
  lVar5 = thunk_FUN_02d88038((ulong)uVar8,0);
  if (lVar5 == 0) {
    lVar10 = 0;
  }
  else {
    iVar4 = thunk_FUN_02d59a10(0);
    lVar10 = lVar5 + iVar4;
  }
  lVar3 = (ulong)uVar8 * 2;
  if ((int)unaff_w20 < 2) {
    psVar6 = (short *)(lVar10 + lVar3);
    do {
      psVar6 = psVar6 + -1;
      uVar8 = (uint)unaff_x19;
      uVar9 = (unaff_x19 & 0xffffffff) / 10;
      *psVar6 = (short)unaff_x19 + (short)uVar9 * -10 + 0x30;
      unaff_x19 = uVar9;
    } while (9 < uVar8);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_06656a10 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    psVar6 = (short *)(lVar10 + lVar3 + -2);
    iVar4 = unaff_w20 - 2;
    do {
      do {
        uVar8 = (uint)unaff_x19;
        uVar9 = (unaff_x19 & 0xffffffff) / 10;
        psVar7 = psVar6 + -1;
        *psVar6 = (short)unaff_x19 + (short)((unaff_x19 & 0xffffffff) / 10) * -10 + 0x30;
        iVar2 = iVar4 + -1;
        bVar1 = -1 < iVar4;
        psVar6 = psVar7;
        unaff_x19 = uVar9;
        iVar4 = iVar2;
      } while (bVar1);
    } while (9 < uVar8);
  }
  return lVar5;
}


