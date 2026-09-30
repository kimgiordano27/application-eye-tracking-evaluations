/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HasFlag
ENTRY_POINT: 07a452d8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HasFlag(long *param_1)

{
  bool bVar1;
  undefined *puVar2;
  bool in_ZR;
  bool in_CY;
  short sVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  ulong in_x9;
  uint uVar8;
  int unaff_w19;
  long unaff_x20;
  int iVar9;
  int *unaff_x21;
  short *psVar10;
  int unaff_w23;
  ulong unaff_x24;
  ulong uVar11;
  int unaff_w25;
  int iVar12;
  
  if (in_CY && !in_ZR) {
    if (((uint)(in_x9 >> 5) & 0x7ffffff) < 0xc35) {
      iVar12 = unaff_w25 + 4;
    }
    else if ((uint)in_x9 < 1000000) {
      iVar12 = unaff_w25 + 5;
    }
    else {
      iVar12 = unaff_w25 + 6;
    }
  }
  else {
    iVar12 = unaff_w25 + 3;
  }
  if (*(int *)(*param_1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (iVar12 <= unaff_w23) {
    iVar12 = unaff_w23;
  }
  iVar12 = *(int *)(unaff_x20 + 0x10) + iVar12;
  if (unaff_w19 < iVar12) {
    *unaff_x21 = 0;
    goto LAB_07a45478;
  }
  *unaff_x21 = iVar12;
  lVar4 = FUN_04e13ecc();
  puVar2 = PTR_DAT_09f40bf0;
  psVar10 = (short *)(lVar4 + (long)iVar12 * 2);
  iVar9 = unaff_w23 + -2;
  while( true ) {
    iVar7 = *(int *)(*(long *)puVar2 + 0xe4);
    if (iVar7 == 0) {
      thunk_FUN_044a54b4();
      iVar7 = *(int *)(*(long *)puVar2 + 0xe4);
    }
    iVar5 = (int)unaff_x24;
    if (unaff_x24 >> 0x20 == 0) break;
    if (iVar7 == 0) {
      thunk_FUN_044a54b4();
    }
    unaff_x24 = unaff_x24 / 1000000000;
    uVar11 = (ulong)(uint)(iVar5 + (int)unaff_x24 * -1000000000);
    iVar7 = 7;
    do {
      do {
        uVar6 = uVar11 / 10;
        uVar8 = (uint)uVar11;
        psVar10 = psVar10 + -1;
        *psVar10 = (short)uVar11 + (short)(uVar11 / 10) * -10 + 0x30;
        iVar5 = iVar7 + -1;
        bVar1 = -1 < iVar7;
        uVar11 = uVar6;
        iVar7 = iVar5;
      } while (bVar1);
    } while (9 < uVar8);
    unaff_w23 = unaff_w23 + -9;
    iVar9 = iVar9 + -9;
  }
  if (iVar7 == 0) {
    thunk_FUN_044a54b4();
    if (iVar5 == 0) goto LAB_07a4540c;
LAB_07a45420:
    do {
      do {
        uVar8 = (uint)unaff_x24;
        uVar11 = (unaff_x24 & 0xffffffff) / 10;
        psVar10 = psVar10 + -1;
        *psVar10 = (short)unaff_x24 + (short)((unaff_x24 & 0xffffffff) / 10) * -10 + 0x30;
        iVar7 = iVar9 + -1;
        bVar1 = -1 < iVar9;
        unaff_x24 = uVar11;
        iVar9 = iVar7;
      } while (bVar1);
    } while (9 < uVar8);
  }
  else {
    if (iVar5 != 0) goto LAB_07a45420;
LAB_07a4540c:
    if (-1 < unaff_w23 + -1) goto LAB_07a45420;
  }
  iVar9 = *(int *)(unaff_x20 + 0x10);
  if (-1 < iVar9 + -1) {
    do {
      iVar9 = iVar9 + -1;
      sVar3 = FUN_078aee34();
      psVar10 = psVar10 + -1;
      *psVar10 = sVar3;
    } while (0 < iVar9);
  }
LAB_07a45478:
  return iVar12 <= unaff_w19;
}


