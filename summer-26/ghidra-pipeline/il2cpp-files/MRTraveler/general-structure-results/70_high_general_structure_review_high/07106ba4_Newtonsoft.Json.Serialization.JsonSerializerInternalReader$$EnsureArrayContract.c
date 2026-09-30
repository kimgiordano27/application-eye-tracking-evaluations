/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EnsureArrayContract
ENTRY_POINT: 07106ba4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureArrayContract(void)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong unaff_x19;
  ulong uVar8;
  int unaff_w20;
  long unaff_x21;
  short *psVar9;
  
  FUN_03c8f898(PTR_DAT_08e6a6b8);
  FUN_03c8f898(PTR_DAT_08ea1b30);
  *(undefined1 *)(unaff_x21 + 0x1ec) = 1;
  uVar5 = (uint)(unaff_x19 >> 5) & 0x7ffffff;
  uVar7 = (uint)unaff_x19 / 100000;
  if (uVar5 < 0xc35) {
    uVar7 = (uint)unaff_x19;
  }
  iVar6 = 6;
  if (uVar5 < 0xc35) {
    iVar6 = 1;
  }
  if (9 < uVar7) {
    if (uVar7 < 100) {
      iVar6 = iVar6 + 1;
    }
    else if (uVar7 < 1000) {
      iVar6 = iVar6 + 2;
    }
    else if (uVar7 >> 4 < 0x271) {
      iVar6 = iVar6 + 3;
    }
    else {
      iVar6 = iVar6 + 4;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  if (iVar6 <= unaff_w20) {
    iVar6 = unaff_w20;
  }
  lVar3 = thunk_FUN_03cf1dbc(iVar6,0);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    iVar2 = thunk_FUN_03c8d9f4(0);
    lVar4 = lVar3 + iVar2;
  }
  psVar9 = (short *)(lVar4 + (long)iVar6 * 2);
  if (unaff_w20 < 2) {
    do {
      uVar8 = (unaff_x19 & 0xffffffff) / 10;
      uVar7 = (uint)unaff_x19;
      psVar9 = psVar9 + -1;
      *psVar9 = (short)unaff_x19 + (short)uVar8 * -10 + 0x30;
      unaff_x19 = uVar8;
    } while (9 < uVar7);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_08ea1b30 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    iVar6 = unaff_w20 + -2;
    do {
      do {
        uVar7 = (uint)unaff_x19;
        uVar8 = (unaff_x19 & 0xffffffff) / 10;
        psVar9 = psVar9 + -1;
        *psVar9 = (short)unaff_x19 + (short)((unaff_x19 & 0xffffffff) / 10) * -10 + 0x30;
        iVar2 = iVar6 + -1;
        bVar1 = -1 < iVar6;
        unaff_x19 = uVar8;
        iVar6 = iVar2;
      } while (bVar1);
    } while (9 < uVar7);
  }
  return lVar3;
}


