/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject
ENTRY_POINT: 05e1dbf0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonConvert__DeserializeObject(void)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  char in_NG;
  bool in_ZR;
  char in_OV;
  short sVar4;
  int iVar5;
  long lVar6;
  uint in_w8;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  ulong unaff_x22;
  short *psVar10;
  short *psVar11;
  long lVar12;
  
  uVar8 = unaff_x22 >> 5 & 0x7ffffff;
  if (in_ZR || in_NG != in_OV) {
    unaff_w21 = 1;
  }
  uVar7 = (uint)uVar8;
  uVar9 = (uint)(uVar8 * (in_w8 & 0xffff | 0xa7c0000) >> 0x27);
  if (uVar7 < 0xc35) {
    uVar9 = -unaff_w20;
  }
  iVar5 = 6;
  if (uVar7 < 0xc35) {
    iVar5 = 1;
  }
  if (9 < uVar9) {
    if (uVar9 < 100) {
      iVar5 = iVar5 + 1;
    }
    else if (uVar9 < 1000) {
      iVar5 = iVar5 + 2;
    }
    else if (uVar9 >> 4 < 0x271) {
      iVar5 = iVar5 + 3;
    }
    else {
      iVar5 = iVar5 + 4;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_079f4df0 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  puVar3 = PTR_DAT_07a115a8;
  if (unaff_x19 != 0) {
    iVar1 = unaff_w21;
    if (unaff_w21 <= iVar5) {
      iVar1 = iVar5;
    }
    iVar1 = *(int *)(unaff_x19 + 0x10) + iVar1;
    lVar6 = thunk_FUN_0367d828(iVar1,0);
    if (lVar6 == 0) {
      lVar12 = 0;
    }
    else {
      iVar5 = thunk_FUN_0364e8d0(0);
      lVar12 = lVar6 + iVar5;
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    psVar10 = (short *)(lVar12 + (long)iVar1 * 2 + -2);
    iVar5 = unaff_w21 + -2;
    do {
      do {
        uVar9 = (uint)unaff_x22;
        uVar8 = (unaff_x22 & 0xffffffff) / 10;
        psVar11 = psVar10 + -1;
        *psVar10 = (short)unaff_x22 + (short)((unaff_x22 & 0xffffffff) / 10) * -10 + 0x30;
        iVar1 = iVar5 + -1;
        bVar2 = -1 < iVar5;
        unaff_x22 = uVar8;
        psVar10 = psVar11;
        iVar5 = iVar1;
      } while (bVar2);
    } while (9 < uVar9);
    iVar5 = *(int *)(unaff_x19 + 0x10) + -1;
    if (-1 < iVar5) {
      do {
        sVar4 = FUN_05c91ffc();
        iVar5 = iVar5 + -1;
        *psVar11 = sVar4;
        psVar11 = psVar11 + -1;
      } while (iVar5 != -1);
    }
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


