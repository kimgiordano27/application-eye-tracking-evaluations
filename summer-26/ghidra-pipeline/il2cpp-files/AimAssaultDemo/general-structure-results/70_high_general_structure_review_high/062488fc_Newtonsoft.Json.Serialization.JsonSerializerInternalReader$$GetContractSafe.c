/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetContractSafe
ENTRY_POINT: 062488fc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContractSafe
               (uint param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x21;
  short *psVar9;
  
  uVar7 = (ulong)param_1;
  if ((*(byte *)(unaff_x21 + 0x9dc) & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d863e8);
    FUN_0373b518(PTR_DAT_07daae20);
    *(undefined1 *)(unaff_x21 + 0x9dc) = 1;
  }
  uVar6 = param_1 / 100000;
  if (param_1 >> 5 < 0xc35) {
    uVar6 = param_1;
  }
  iVar5 = 6;
  if (param_1 >> 5 < 0xc35) {
    iVar5 = 1;
  }
  if (9 < uVar6) {
    if (uVar6 < 100) {
      iVar5 = iVar5 + 1;
    }
    else if (uVar6 < 1000) {
      iVar5 = iVar5 + 2;
    }
    else if (uVar6 >> 4 < 0x271) {
      iVar5 = iVar5 + 3;
    }
    else {
      iVar5 = iVar5 + 4;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  if (iVar5 <= param_2) {
    iVar5 = param_2;
  }
  lVar3 = thunk_FUN_037763e4(iVar5,0);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    iVar2 = thunk_FUN_03747a9c(0);
    lVar4 = lVar3 + iVar2;
  }
  psVar9 = (short *)(lVar4 + (long)iVar5 * 2);
  if (param_2 < 2) {
    do {
      uVar6 = (uint)uVar7;
      psVar9 = psVar9 + -1;
      *psVar9 = (short)uVar7 + (short)(uVar7 / 10) * -10 + 0x30;
      uVar7 = uVar7 / 10;
    } while (9 < uVar6);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_07daae20 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    iVar5 = param_2 + -2;
    do {
      do {
        uVar8 = uVar7 / 10;
        uVar6 = (uint)uVar7;
        psVar9 = psVar9 + -1;
        *psVar9 = (short)uVar7 + (short)(uVar7 / 10) * -10 + 0x30;
        iVar2 = iVar5 + -1;
        bVar1 = -1 < iVar5;
        uVar7 = uVar8;
        iVar5 = iVar2;
      } while (bVar1);
    } while (9 < uVar6);
  }
  return lVar3;
}


