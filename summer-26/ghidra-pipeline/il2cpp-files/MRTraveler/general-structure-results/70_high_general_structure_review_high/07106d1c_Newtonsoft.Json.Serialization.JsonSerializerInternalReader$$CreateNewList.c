/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewList
ENTRY_POINT: 07106d1c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewList
               (int param_1,int param_2,long param_3)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  short *psVar11;
  long lVar12;
  
  if ((DAT_0941c1e7 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    FUN_03c8f898(PTR_DAT_08ea1b30);
    DAT_0941c1e7 = 1;
  }
  uVar8 = -param_1;
  if (param_2 < 2) {
    param_2 = 1;
  }
  uVar2 = uVar8 / 100000;
  iVar7 = 6;
  if (uVar8 >> 5 < 0xc35) {
    iVar7 = 1;
    uVar2 = -param_1;
  }
  if (9 < uVar2) {
    if (uVar2 < 100) {
      iVar7 = iVar7 + 1;
    }
    else if (uVar2 < 1000) {
      iVar7 = iVar7 + 2;
    }
    else if (uVar2 >> 4 < 0x271) {
      iVar7 = iVar7 + 3;
    }
    else {
      iVar7 = iVar7 + 4;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  puVar3 = PTR_DAT_08ea1b30;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (iVar7 <= param_2) {
    iVar7 = param_2;
  }
  iVar7 = *(int *)(param_3 + 0x10) + iVar7;
  lVar6 = thunk_FUN_03cf1dbc(iVar7,0);
  if (lVar6 == 0) {
    lVar12 = 0;
  }
  else {
    iVar5 = thunk_FUN_03c8d9f4(0);
    lVar12 = lVar6 + iVar5;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  psVar11 = (short *)(lVar12 + (long)iVar7 * 2);
  uVar9 = (ulong)uVar8;
  iVar7 = param_2 + -2;
  do {
    do {
      uVar10 = uVar9 / 10;
      uVar8 = (uint)uVar9;
      psVar11 = psVar11 + -1;
      *psVar11 = (short)uVar9 + (short)(uVar9 / 10) * -10 + 0x30;
      iVar5 = iVar7 + -1;
      bVar1 = -1 < iVar7;
      uVar9 = uVar10;
      iVar7 = iVar5;
    } while (bVar1);
  } while (9 < uVar8);
  iVar7 = *(int *)(param_3 + 0x10);
  if (-1 < iVar7 + -1) {
    do {
      iVar7 = iVar7 + -1;
      sVar4 = FUN_06f6fafc(param_3,iVar7,0);
      psVar11 = psVar11 + -1;
      *psVar11 = sVar4;
    } while (0 < iVar7);
  }
  return lVar6;
}


