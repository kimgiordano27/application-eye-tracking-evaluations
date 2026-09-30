/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetContract
ENTRY_POINT: 06248960
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContract(long *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint in_w9;
  uint uVar5;
  ulong unaff_x19;
  ulong uVar6;
  int unaff_w20;
  int unaff_w21;
  int iVar7;
  short *psVar8;
  
  if (in_w9 < 100) {
    iVar7 = unaff_w21 + 1;
  }
  else if (in_w9 < 1000) {
    iVar7 = unaff_w21 + 2;
  }
  else if (in_w9 >> 4 < 0x271) {
    iVar7 = unaff_w21 + 3;
  }
  else {
    iVar7 = unaff_w21 + 4;
  }
  if (*(int *)(*param_1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  if (iVar7 <= unaff_w20) {
    iVar7 = unaff_w20;
  }
  lVar3 = thunk_FUN_037763e4(iVar7,0);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    iVar2 = thunk_FUN_03747a9c(0);
    lVar4 = lVar3 + iVar2;
  }
  psVar8 = (short *)(lVar4 + (long)iVar7 * 2);
  if (unaff_w20 < 2) {
    do {
      uVar6 = (unaff_x19 & 0xffffffff) / 10;
      uVar5 = (uint)unaff_x19;
      psVar8 = psVar8 + -1;
      *psVar8 = (short)unaff_x19 + (short)uVar6 * -10 + 0x30;
      unaff_x19 = uVar6;
    } while (9 < uVar5);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_07daae20 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    iVar7 = unaff_w20 + -2;
    do {
      do {
        uVar5 = (uint)unaff_x19;
        uVar6 = (unaff_x19 & 0xffffffff) / 10;
        psVar8 = psVar8 + -1;
        *psVar8 = (short)unaff_x19 + (short)((unaff_x19 & 0xffffffff) / 10) * -10 + 0x30;
        iVar2 = iVar7 + -1;
        bVar1 = -1 < iVar7;
        unaff_x19 = uVar6;
        iVar7 = iVar2;
      } while (bVar1);
    } while (9 < uVar5);
  }
  return lVar3;
}


