/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetContractSafe
ENTRY_POINT: 05610320
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetContractSafe(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  long unaff_x19;
  ulong unaff_x20;
  ulong uVar8;
  short *psVar9;
  
  lVar4 = FUN_056106b0();
  if (*(int *)(*(long *)PTR_DAT_06d4e298 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*(long *)PTR_DAT_06d4e298);
  }
  psVar6 = (short *)(lVar4 + 0x14);
  psVar9 = psVar6;
  if ((int)unaff_x20 != 0) {
    iVar7 = -2;
    do {
      do {
        uVar3 = (uint)unaff_x20;
        uVar8 = (unaff_x20 & 0xffffffff) / 10;
        psVar9 = psVar9 + -1;
        *psVar9 = (short)unaff_x20 + (short)((unaff_x20 & 0xffffffff) / 10) * -10 + 0x30;
        iVar2 = iVar7 + -1;
        bVar1 = -1 < iVar7;
        unaff_x20 = uVar8;
        iVar7 = iVar2;
      } while (bVar1);
    } while (9 < uVar3);
  }
  uVar8 = (long)psVar6 - (long)psVar9;
  if ((long)uVar8 < 0) {
    uVar8 = uVar8 + 1;
  }
  uVar8 = uVar8 >> 1;
  *(int *)(unaff_x19 + 4) = (int)uVar8;
  psVar5 = (short *)FUN_056106b0();
  psVar6 = psVar5;
  if (-1 < (int)uVar8 + -1) {
    do {
      uVar3 = (int)uVar8 - 1;
      uVar8 = (ulong)uVar3;
      psVar5 = psVar6 + 1;
      *psVar6 = *psVar9;
      psVar6 = psVar5;
      psVar9 = psVar9 + 1;
    } while (0 < (int)uVar3);
  }
  *psVar5 = 0;
  return;
}


