/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeString
ENTRY_POINT: 04f37bd8
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeString(void)

{
  bool bVar1;
  short sVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  short unaff_w19;
  ulong unaff_x20;
  uint unaff_w22;
  short *psVar12;
  ulong unaff_x24;
  long *unaff_x25;
  
  uVar4 = unaff_x24;
  if (unaff_x24 == 0) {
    uVar4 = unaff_x20;
  }
  uVar10 = 9;
  if (unaff_x24 == 0) {
    uVar10 = 1;
  }
  uVar3 = uVar4 >> 0x10;
  uVar5 = uVar10 | 4;
  if (uVar4 >> 0x10 == 0) {
    uVar3 = uVar4;
    uVar5 = uVar10;
  }
                    /* try { // try from 04f37c08 to 05037c0f has its CatchHandler @ 04f37c5c */
  uVar10 = uVar5 | 2;
  if (uVar3 < 0x100) {
    uVar10 = uVar5;
  }
                    /* try { // try from 04f37c10 to 05037c73 has its CatchHandler @ 04f37a98 */
  uVar4 = uVar3 >> 8;
  if (uVar3 < 0x100) {
    uVar4 = uVar3;
  }
  if (0xf < uVar4) {
    uVar10 = uVar10 + 1;
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  puVar7 = PTR_DAT_065f73a8;
  if ((int)uVar10 <= (int)unaff_w22) {
    uVar10 = unaff_w22;
  }
  lVar9 = thunk_FUN_02ce14f0(uVar10,0);
  if (lVar9 == 0) {
    lVar11 = 0;
  }
  else {
    iVar8 = thunk_FUN_02c8538c(0);
    lVar11 = lVar9 + iVar8;
  }
  psVar12 = (short *)(lVar11 + (long)(int)uVar10 * 2);
  if ((*(int *)(*(long *)puVar7 + 0xe0) == 0) &&
     (thunk_FUN_02cd038c(), *(int *)(*(long *)puVar7 + 0xe0) == 0)) {
    thunk_FUN_02cd038c();
  }
  if ((int)unaff_x24 == 0) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    if ((int)unaff_w22 < 2) {
      unaff_w22 = 1;
    }
    iVar8 = unaff_w22 - 2;
    do {
      uVar10 = (uint)unaff_x20 & 0xf;
      sVar2 = 0x30;
      if (9 < uVar10) {
        sVar2 = unaff_w19;
      }
      uVar5 = (uint)unaff_x20 >> 4;
      unaff_x20 = (ulong)uVar5;
      psVar12 = psVar12 + -1;
      *psVar12 = sVar2 + (short)uVar10;
      iVar6 = iVar8 + -1;
      bVar1 = -1 < iVar8;
      iVar8 = iVar6;
    } while ((bVar1) || (uVar5 != 0));
  }
  else {
    iVar8 = 6;
    do {
      uVar10 = (uint)unaff_x20 & 0xf;
      sVar2 = 0x30;
      if (9 < uVar10) {
        sVar2 = unaff_w19;
      }
      uVar5 = (uint)unaff_x20 >> 4;
      unaff_x20 = (ulong)uVar5;
      psVar12 = psVar12 + -1;
      *psVar12 = sVar2 + (short)uVar10;
      iVar6 = iVar8 + -1;
      bVar1 = -1 < iVar8;
      iVar8 = iVar6;
    } while ((bVar1) || (uVar5 != 0));
    iVar8 = unaff_w22 - 10;
    do {
      uVar10 = (uint)unaff_x24 & 0xf;
      sVar2 = 0x30;
      if (9 < uVar10) {
        sVar2 = unaff_w19;
      }
      uVar5 = (uint)unaff_x24 >> 4;
      unaff_x24 = (ulong)uVar5;
      psVar12 = psVar12 + -1;
      *psVar12 = sVar2 + (short)uVar10;
      iVar6 = iVar8 + -1;
      bVar1 = -1 < iVar8;
      iVar8 = iVar6;
    } while ((bVar1) || (uVar5 != 0));
  }
  return lVar9;
}


