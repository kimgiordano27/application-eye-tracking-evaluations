/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDynamic
ENTRY_POINT: 04f384f0
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDynamic(void)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  short sVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined *puVar8;
  bool in_ZR;
  long lVar9;
  uint in_w8;
  int iVar10;
  ulong in_x9;
  short unaff_w19;
  uint unaff_w20;
  uint unaff_w21;
  int unaff_w22;
  short *psVar11;
  uint *unaff_x23;
  uint unaff_w25;
  long *unaff_x26;
  
  if (in_ZR) {
    in_w8 = 1;
  }
  uVar5 = in_x9 >> 0x10;
  uVar1 = in_w8 | 4;
  if (in_x9 >> 0x10 == 0) {
    uVar5 = in_x9;
    uVar1 = in_w8;
  }
  uVar3 = uVar1 | 2;
  if (uVar5 < 0x100) {
    uVar3 = uVar1;
  }
  uVar6 = uVar5 >> 8;
  if (uVar5 < 0x100) {
    uVar6 = uVar5;
  }
  if (0xf < uVar6) {
    uVar3 = uVar3 + 1;
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  if ((int)uVar3 <= (int)unaff_w21) {
    uVar3 = unaff_w21;
  }
  if (unaff_w22 < (int)uVar3) {
    *unaff_x23 = 0;
    return 0;
  }
  *unaff_x23 = uVar3;
  lVar9 = FUN_034754b0();
  puVar8 = PTR_DAT_065f73a8;
  psVar11 = (short *)(lVar9 + (long)(int)uVar3 * 2);
  if ((*(int *)(*(long *)PTR_DAT_065f73a8 + 0xe0) == 0) &&
     (thunk_FUN_02cd038c(*(long *)PTR_DAT_065f73a8), *(int *)(*(long *)puVar8 + 0xe0) == 0)) {
    thunk_FUN_02cd038c();
  }
  if (unaff_w25 == 0) {
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    if ((int)unaff_w21 < 2) {
      unaff_w21 = 1;
    }
    iVar10 = unaff_w21 - 2;
    do {
      uVar1 = unaff_w20 & 0xf;
      sVar4 = 0x30;
      if (9 < uVar1) {
        sVar4 = unaff_w19;
      }
      unaff_w20 = unaff_w20 >> 4;
      psVar11 = psVar11 + -1;
      *psVar11 = sVar4 + (short)uVar1;
      iVar7 = iVar10 + -1;
      bVar2 = -1 < iVar10;
      iVar10 = iVar7;
    } while ((bVar2) || (unaff_w20 != 0));
  }
  else {
    iVar10 = 6;
    do {
      uVar1 = unaff_w20 & 0xf;
      sVar4 = 0x30;
      if (9 < uVar1) {
        sVar4 = unaff_w19;
      }
      unaff_w20 = unaff_w20 >> 4;
      psVar11 = psVar11 + -1;
      *psVar11 = sVar4 + (short)uVar1;
      iVar7 = iVar10 + -1;
      bVar2 = -1 < iVar10;
      iVar10 = iVar7;
    } while ((bVar2) || (unaff_w20 != 0));
    iVar10 = unaff_w21 - 10;
    do {
      uVar1 = unaff_w25 & 0xf;
      sVar4 = 0x30;
      if (9 < uVar1) {
        sVar4 = unaff_w19;
      }
      unaff_w25 = unaff_w25 >> 4;
      psVar11 = psVar11 + -1;
      *psVar11 = sVar4 + (short)uVar1;
      iVar7 = iVar10 + -1;
      bVar2 = -1 < iVar10;
      iVar10 = iVar7;
    } while ((bVar2) || (unaff_w25 != 0));
  }
  return 1;
}


