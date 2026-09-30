/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetPropertyValue
ENTRY_POINT: 0767f3f8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetPropertyValue
               (uint param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  short *psVar8;
  short *psVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  if ((DAT_09892239 & 1) == 0) {
    FUN_04077588(PTR_DAT_09285ae0);
    FUN_04077588(PTR_DAT_092d6630);
    DAT_09892239 = 1;
  }
  uVar3 = param_1 >> 5;
  uVar10 = 6;
  if (uVar3 < 0xc35) {
    uVar10 = 1;
  }
  uVar2 = uVar3 / 0xc35;
  if (uVar3 < 0xc35) {
    uVar2 = param_1;
  }
  if (9 < uVar2) {
    if (uVar2 < 100) {
      uVar10 = uVar10 + 1;
    }
    else if (uVar2 < 1000) {
      uVar10 = uVar10 + 2;
    }
    else if (uVar2 >> 4 < 0x271) {
      uVar10 = uVar10 + 3;
    }
    else {
      uVar10 = uVar10 + 4;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar3 = param_2;
  if ((int)param_2 <= (int)uVar10) {
    uVar3 = uVar10;
  }
  lVar7 = thunk_FUN_040b28f8((ulong)uVar3,0);
  if (lVar7 == 0) {
    lVar13 = 0;
  }
  else {
    iVar6 = thunk_FUN_04083428(0);
    lVar13 = lVar7 + iVar6;
  }
  lVar5 = (ulong)uVar3 * 2;
  if ((int)param_2 < 2) {
    psVar8 = (short *)(lVar13 + lVar5);
    uVar11 = (ulong)param_1;
    do {
      psVar8 = psVar8 + -1;
      uVar10 = (uint)uVar11;
      *psVar8 = (short)uVar11 + (short)(uVar11 / 10) * -10 + 0x30;
      uVar11 = uVar11 / 10;
    } while (9 < uVar10);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_092d6630 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    psVar8 = (short *)(lVar13 + lVar5 + -2);
    uVar11 = (ulong)param_1;
    iVar6 = param_2 - 2;
    do {
      do {
        uVar12 = uVar11 / 10;
        uVar10 = (uint)uVar11;
        psVar9 = psVar8 + -1;
        *psVar8 = (short)uVar11 + (short)(uVar11 / 10) * -10 + 0x30;
        iVar4 = iVar6 + -1;
        bVar1 = -1 < iVar6;
        psVar8 = psVar9;
        uVar11 = uVar12;
        iVar6 = iVar4;
      } while (bVar1);
    } while (9 < uVar10);
  }
  return lVar7;
}


