/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CoerceEmptyStringToNull
ENTRY_POINT: 0717e804
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CoerceEmptyStringToNull(void)

{
  bool bVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  short *psVar8;
  uint uVar9;
  int iVar10;
  int unaff_w19;
  short unaff_w20;
  uint unaff_w21;
  uint *unaff_x22;
  uint unaff_w24;
  long *unaff_x25;
  long unaff_x26;
  
  FUN_03d2d2b0(PTR_DAT_091a1008);
  FUN_03d2d2b0(PTR_DAT_09208ee8);
  FUN_03d2d2b0(PTR_DAT_0920eb10);
  FUN_03d2d2b0(PTR_DAT_091fa408);
  *(undefined1 *)(unaff_x26 + 0xfdc) = 1;
  if ((int)unaff_w24 < 2) {
    unaff_w24 = 1;
  }
  uVar9 = 5;
  uVar5 = unaff_w21 >> 0x10;
  if ((unaff_w21 & 0xffff0000) == 0) {
    uVar9 = 1;
    uVar5 = unaff_w21;
  }
  uVar2 = uVar9 | 2;
  if (uVar5 < 0x100) {
    uVar2 = uVar9;
  }
  uVar9 = uVar5 >> 8;
  if (uVar5 < 0x100) {
    uVar9 = uVar5;
  }
  if (0xf < uVar9) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if ((int)uVar2 <= (int)unaff_w24) {
    uVar2 = unaff_w24;
  }
  if (unaff_w19 < (int)uVar2) {
    *unaff_x22 = 0;
  }
  else {
    *unaff_x22 = uVar2;
    puVar6 = PTR_DAT_0920eb10;
    lVar7 = FUN_05028450();
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_03db619c(*(long *)puVar6);
    }
    psVar8 = (short *)(lVar7 + (ulong)(uVar2 << 1));
    iVar10 = unaff_w24 - 2;
    do {
      uVar9 = unaff_w21 & 0xf;
      sVar3 = 0x30;
      if (9 < uVar9) {
        sVar3 = unaff_w20;
      }
      unaff_w21 = unaff_w21 >> 4;
      psVar8 = psVar8 + -1;
      *psVar8 = sVar3 + (short)uVar9;
      iVar4 = iVar10 + -1;
      bVar1 = -1 < iVar10;
      iVar10 = iVar4;
    } while ((bVar1) || (unaff_w21 != 0));
  }
  return (int)uVar2 <= unaff_w19;
}


