/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ShouldSetPropertyValue
ENTRY_POINT: 07a451dc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_19;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ShouldSetPropertyValue
               (long param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
               int *param_6)

{
  bool bVar1;
  undefined *puVar2;
  short sVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  short *psVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  
  if ((DAT_0a525179 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f1e748);
    FUN_04447ba8(PTR_DAT_09f3b2f8);
    FUN_04447ba8(PTR_DAT_09f40bf0);
    FUN_04447ba8(PTR_DAT_09f3b670);
    DAT_0a525179 = 1;
  }
  uVar11 = -param_1;
  if (param_2 < 2) {
    param_2 = 1;
  }
  if (uVar11 < 9999999 || param_1 == -9999999) {
    iVar13 = 1;
    uVar8 = (uint)uVar11;
  }
  else if (uVar11 < 99999999999999 || param_1 == -99999999999999) {
    uVar8 = (uint)(uVar11 / 10000000);
    iVar13 = 8;
  }
  else {
    uVar8 = (uint)(uVar11 / 100000000000000);
    iVar13 = 0xf;
  }
  if (9 < uVar8) {
    if (uVar8 < 100) {
      iVar13 = iVar13 + 1;
    }
    else if (uVar8 < 1000) {
      iVar13 = iVar13 + 2;
    }
    else if (uVar8 >> 4 < 0x271) {
      iVar13 = iVar13 + 3;
    }
    else if (uVar8 >> 5 < 0xc35) {
      iVar13 = iVar13 + 4;
    }
    else if (uVar8 < 1000000) {
      iVar13 = iVar13 + 5;
    }
    else {
      iVar13 = iVar13 + 6;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (iVar13 <= param_2) {
    iVar13 = param_2;
  }
  iVar13 = *(int *)(param_3 + 0x10) + iVar13;
  if ((int)param_5 < iVar13) {
    *param_6 = 0;
    goto LAB_07a45478;
  }
  *param_6 = iVar13;
  lVar4 = FUN_04e13ecc(param_4,param_5,*(undefined8 *)PTR_DAT_09f3b2f8);
  puVar2 = PTR_DAT_09f40bf0;
  psVar10 = (short *)(lVar4 + (long)iVar13 * 2);
  iVar9 = param_2 + -2;
  while( true ) {
    iVar7 = *(int *)(*(long *)puVar2 + 0xe4);
    if (iVar7 == 0) {
      thunk_FUN_044a54b4();
      iVar7 = *(int *)(*(long *)puVar2 + 0xe4);
    }
    iVar5 = (int)uVar11;
    if (uVar11 >> 0x20 == 0) break;
    if (iVar7 == 0) {
      thunk_FUN_044a54b4();
    }
    uVar11 = uVar11 / 1000000000;
    uVar12 = (ulong)(uint)(iVar5 + (int)uVar11 * -1000000000);
    iVar7 = 7;
    do {
      do {
        uVar6 = uVar12 / 10;
        uVar8 = (uint)uVar12;
        psVar10 = psVar10 + -1;
        *psVar10 = (short)uVar12 + (short)(uVar12 / 10) * -10 + 0x30;
        iVar5 = iVar7 + -1;
        bVar1 = -1 < iVar7;
        uVar12 = uVar6;
        iVar7 = iVar5;
      } while (bVar1);
    } while (9 < uVar8);
    param_2 = param_2 + -9;
    iVar9 = iVar9 + -9;
  }
  if (iVar7 == 0) {
    thunk_FUN_044a54b4();
    if (iVar5 == 0) goto LAB_07a4540c;
LAB_07a45420:
    do {
      do {
        uVar8 = (uint)uVar11;
        uVar12 = (uVar11 & 0xffffffff) / 10;
        psVar10 = psVar10 + -1;
        *psVar10 = (short)uVar11 + (short)((uVar11 & 0xffffffff) / 10) * -10 + 0x30;
        iVar7 = iVar9 + -1;
        bVar1 = -1 < iVar9;
        uVar11 = uVar12;
        iVar9 = iVar7;
      } while (bVar1);
    } while (9 < uVar8);
  }
  else {
    if (iVar5 != 0) goto LAB_07a45420;
LAB_07a4540c:
    if (-1 < param_2 + -1) goto LAB_07a45420;
  }
  iVar9 = *(int *)(param_3 + 0x10);
  if (-1 < iVar9 + -1) {
    do {
      iVar9 = iVar9 + -1;
      sVar3 = FUN_078aee34(param_3,iVar9,0);
      psVar10 = psVar10 + -1;
      *psVar10 = sVar3;
    } while (0 < iVar9);
  }
LAB_07a45478:
  return iVar13 <= (int)param_5;
}


