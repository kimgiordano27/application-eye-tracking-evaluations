/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewList
ENTRY_POINT: 07a43ddc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewList(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong unaff_x19;
  ulong uVar7;
  int unaff_w20;
  int unaff_w21;
  short *psVar8;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  if (unaff_w21 <= unaff_w20) {
    unaff_w21 = unaff_w20;
  }
  lVar4 = thunk_FUN_04482d24(unaff_w21,0);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    iVar3 = thunk_FUN_04454128(0);
    lVar5 = lVar4 + iVar3;
  }
  psVar8 = (short *)(lVar5 + (long)unaff_w21 * 2);
  if (unaff_w20 < 2) {
    do {
      uVar7 = (unaff_x19 & 0xffffffff) / 10;
      uVar6 = (uint)unaff_x19;
      psVar8 = psVar8 + -1;
      *psVar8 = (short)unaff_x19 + (short)uVar7 * -10 + 0x30;
      unaff_x19 = uVar7;
    } while (9 < uVar6);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_09f40bf0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    iVar3 = unaff_w20 + -2;
    do {
      do {
        uVar6 = (uint)unaff_x19;
        uVar7 = (unaff_x19 & 0xffffffff) / 10;
        psVar8 = psVar8 + -1;
        *psVar8 = (short)unaff_x19 + (short)((unaff_x19 & 0xffffffff) / 10) * -10 + 0x30;
        iVar2 = iVar3 + -1;
        bVar1 = -1 < iVar3;
        unaff_x19 = uVar7;
        iVar3 = iVar2;
      } while (bVar1);
    } while (9 < uVar6);
  }
  return lVar4;
}


