/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ShouldSetPropertyValue
ENTRY_POINT: 0767fdfc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ShouldSetPropertyValue(void)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  short *psVar9;
  short *psVar10;
  uint uVar11;
  int iVar12;
  ulong unaff_x19;
  ulong uVar13;
  int unaff_w20;
  long unaff_x21;
  
  FUN_04077588(PTR_DAT_09285ae0);
  FUN_04077588(PTR_DAT_092d6630);
  *(undefined1 *)(unaff_x21 + 0x241) = 1;
  if (unaff_w20 < 2) {
    unaff_w20 = 1;
  }
  if (unaff_x19 < 10000000) {
    iVar4 = 1;
    uVar13 = unaff_x19;
  }
  else if (unaff_x19 < 100000000000000) {
    iVar4 = 8;
    uVar13 = unaff_x19 / 10000000;
  }
  else {
    iVar4 = 0xf;
    uVar13 = unaff_x19 / 100000000000000;
  }
  uVar11 = (uint)uVar13;
  if (9 < uVar11) {
    if (uVar11 < 100) {
      iVar4 = iVar4 + 1;
    }
    else if (uVar11 < 1000) {
      iVar4 = iVar4 + 2;
    }
    else if (uVar11 >> 4 < 0x271) {
      iVar4 = iVar4 + 3;
    }
    else if (uVar11 >> 5 < 0xc35) {
      iVar4 = iVar4 + 4;
    }
    else if (uVar11 < 1000000) {
      iVar4 = iVar4 + 5;
    }
    else {
      iVar4 = iVar4 + 6;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  puVar3 = PTR_DAT_092d6630;
  iVar12 = unaff_w20;
  if (unaff_w20 <= iVar4) {
    iVar12 = iVar4;
  }
  lVar5 = thunk_FUN_040b28f8(iVar12,0);
  if (lVar5 == 0) {
    lVar7 = 0;
  }
  else {
    iVar4 = thunk_FUN_04083428(0);
    lVar7 = lVar5 + iVar4;
  }
  lVar6 = *(long *)puVar3;
  iVar4 = unaff_w20 + -2;
  psVar9 = (short *)(lVar7 + (ulong)(uint)(iVar12 << 1));
  while( true ) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar6 = *(long *)puVar3;
    iVar12 = (int)unaff_x19;
    if (unaff_x19 >> 0x20 == 0) break;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar6 = *(long *)puVar3;
    }
    unaff_x19 = unaff_x19 / 1000000000;
    uVar13 = (ulong)(uint)(iVar12 + (int)unaff_x19 * -1000000000);
    iVar12 = 7;
    do {
      do {
        uVar8 = uVar13 / 10;
        uVar11 = (uint)uVar13;
        psVar9 = psVar9 + -1;
        *psVar9 = (short)uVar13 + (short)(uVar13 / 10) * -10 + 0x30;
        iVar2 = iVar12 + -1;
        bVar1 = -1 < iVar12;
        uVar13 = uVar8;
        iVar12 = iVar2;
      } while (bVar1);
    } while (9 < uVar11);
    unaff_w20 = unaff_w20 + -9;
    iVar4 = iVar4 + -9;
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if ((iVar12 != 0) || (-1 < unaff_w20 + -1)) {
    psVar9 = psVar9 + -1;
    do {
      do {
        uVar11 = (uint)unaff_x19;
        iVar12 = iVar4 + -1;
        uVar13 = (unaff_x19 & 0xffffffff) / 10;
        psVar10 = psVar9 + -1;
        *psVar9 = (short)unaff_x19 + (short)((unaff_x19 & 0xffffffff) / 10) * -10 + 0x30;
        bVar1 = -1 < iVar4;
        psVar9 = psVar10;
        unaff_x19 = uVar13;
        iVar4 = iVar12;
      } while (bVar1);
    } while (9 < uVar11);
  }
  return lVar5;
}


