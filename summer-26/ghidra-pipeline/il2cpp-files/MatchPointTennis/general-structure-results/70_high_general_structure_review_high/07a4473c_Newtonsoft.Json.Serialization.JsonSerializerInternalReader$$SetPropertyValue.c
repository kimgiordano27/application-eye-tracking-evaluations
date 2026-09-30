/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetPropertyValue
ENTRY_POINT: 07a4473c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetPropertyValue(void)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  uint in_w9;
  uint uVar8;
  ulong unaff_x19;
  ulong uVar9;
  int iVar10;
  short *psVar11;
  int unaff_w22;
  
  iVar10 = 0xf;
  if (9 < in_w9) {
    if (in_w9 < 100) {
      iVar10 = 0x10;
    }
    else if (in_w9 < 1000) {
      iVar10 = 0x11;
    }
    else if (in_w9 >> 4 < 0x271) {
      iVar10 = 0x12;
    }
    else if (in_w9 >> 5 < 0xc35) {
      iVar10 = 0x13;
    }
    else if (in_w9 < 1000000) {
      iVar10 = 0x14;
    }
    else {
      iVar10 = 0x15;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  if (iVar10 <= unaff_w22) {
    iVar10 = unaff_w22;
  }
  lVar4 = thunk_FUN_04482d24(iVar10,0);
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  else {
    iVar3 = thunk_FUN_04454128(0);
    lVar6 = lVar4 + iVar3;
  }
  puVar2 = PTR_DAT_09f40bf0;
  iVar3 = unaff_w22 + -2;
  psVar11 = (short *)(lVar6 + (ulong)(uint)(iVar10 << 1));
  while( true ) {
    iVar10 = *(int *)(*(long *)puVar2 + 0xe4);
    if (iVar10 == 0) {
      thunk_FUN_044a54b4();
      iVar10 = *(int *)(*(long *)puVar2 + 0xe4);
    }
    iVar5 = (int)unaff_x19;
    if (unaff_x19 >> 0x20 == 0) break;
    if (iVar10 == 0) {
      thunk_FUN_044a54b4();
    }
    unaff_x19 = unaff_x19 / 1000000000;
    uVar9 = (ulong)(uint)(iVar5 + (int)unaff_x19 * -1000000000);
    iVar10 = 7;
    do {
      do {
        uVar7 = uVar9 / 10;
        uVar8 = (uint)uVar9;
        psVar11 = psVar11 + -1;
        *psVar11 = (short)uVar9 + (short)(uVar9 / 10) * -10 + 0x30;
        iVar5 = iVar10 + -1;
        bVar1 = -1 < iVar10;
        uVar9 = uVar7;
        iVar10 = iVar5;
      } while (bVar1);
    } while (9 < uVar8);
    unaff_w22 = unaff_w22 + -9;
    iVar3 = iVar3 + -9;
  }
  if (iVar10 == 0) {
    thunk_FUN_044a54b4();
  }
  if ((iVar5 != 0) || (-1 < unaff_w22 + -1)) {
    do {
      do {
        uVar8 = (uint)unaff_x19;
        uVar9 = (unaff_x19 & 0xffffffff) / 10;
        psVar11 = psVar11 + -1;
        *psVar11 = (short)unaff_x19 + (short)((unaff_x19 & 0xffffffff) / 10) * -10 + 0x30;
        iVar10 = iVar3 + -1;
        bVar1 = -1 < iVar3;
        unaff_x19 = uVar9;
        iVar3 = iVar10;
      } while (bVar1);
    } while (9 < uVar8);
  }
  return lVar4;
}


