/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldSerialize
ENTRY_POINT: 050dbad0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldSerialize(void)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  uint uVar9;
  short *psVar10;
  short *psVar11;
  int iVar12;
  int unaff_w19;
  uint unaff_w20;
  short unaff_w21;
  uint *unaff_x22;
  uint unaff_w24;
  long unaff_x25;
  long *unaff_x26;
  
  FUN_02f08768(PTR_DAT_067dbd90);
  FUN_02f08768(PTR_DAT_067d60d8);
  *(undefined1 *)(unaff_x25 + 0xbe7) = 1;
  if ((int)unaff_w24 < 2) {
    unaff_w24 = 1;
  }
  bVar7 = (unaff_w20 & 0xffff0000) == 0;
  uVar3 = unaff_w20 >> 0x10;
  if (bVar7) {
    uVar3 = unaff_w20;
  }
  uVar9 = 5;
  if (bVar7) {
    uVar9 = 1;
  }
  uVar1 = uVar9 | 2;
  uVar4 = uVar3 >> 8;
  if (uVar3 < 0x100) {
    uVar1 = uVar9;
    uVar4 = uVar3;
  }
  if (0xf < uVar4) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar6 = PTR_DAT_067dbd90;
  uVar3 = unaff_w24;
  if ((int)unaff_w24 <= (int)uVar1) {
    uVar3 = uVar1;
  }
  if (unaff_w19 < (int)uVar3) {
    *unaff_x22 = 0;
  }
  else {
    *unaff_x22 = uVar3;
    lVar8 = FUN_034702c8();
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)puVar6);
    }
    psVar10 = (short *)(lVar8 + (ulong)(uVar3 << 1) + -2);
    iVar12 = unaff_w24 - 2;
    do {
      uVar9 = unaff_w20;
      sVar2 = 0x30;
      if (9 < (uVar9 & 0xe)) {
        sVar2 = unaff_w21;
      }
      psVar11 = psVar10 + -1;
      *psVar10 = sVar2 + ((ushort)uVar9 & 0xf);
      iVar5 = iVar12 + -1;
      bVar7 = -1 < iVar12;
      psVar10 = psVar11;
      iVar12 = iVar5;
      unaff_w20 = uVar9 >> 4;
    } while ((bVar7) || (0xf < uVar9));
  }
  return (int)uVar3 <= unaff_w19;
}


