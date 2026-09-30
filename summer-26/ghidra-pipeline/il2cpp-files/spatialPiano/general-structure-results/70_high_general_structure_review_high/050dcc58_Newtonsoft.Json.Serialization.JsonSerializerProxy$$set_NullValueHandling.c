/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_NullValueHandling
ENTRY_POINT: 050dcc58
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerProxy__set_NullValueHandling(void)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  int unaff_w19;
  uint unaff_w20;
  int unaff_w21;
  short unaff_w22;
  uint *unaff_x23;
  uint unaff_w25;
  uint unaff_w26;
  uint uVar10;
  long *unaff_x27;
  
  puVar4 = PTR_DAT_067dbd90;
  *unaff_x23 = unaff_w25;
  lVar5 = FUN_034702c8();
  lVar6 = *(long *)puVar4;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c(lVar6);
  }
  iVar9 = *(int *)(*(long *)puVar4 + 0xe4);
  if (unaff_w26 == 0) {
    if (iVar9 == 0) {
      thunk_FUN_02f6670c();
    }
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (unaff_w21 < 2) {
      unaff_w21 = 1;
    }
    psVar8 = (short *)(lVar5 + (ulong)unaff_w25 * 2 + -2);
    iVar9 = unaff_w21 + -2;
    do {
      uVar10 = unaff_w20;
      sVar2 = 0x30;
      if (9 < (uVar10 & 0xe)) {
        sVar2 = unaff_w22;
      }
      psVar7 = psVar8 + -1;
      *psVar8 = sVar2 + ((ushort)uVar10 & 0xf);
      iVar3 = iVar9 + -1;
      bVar1 = -1 < iVar9;
      psVar8 = psVar7;
      unaff_w20 = uVar10 >> 4;
      iVar9 = iVar3;
    } while ((bVar1) || (0xf < uVar10));
  }
  else {
    if (iVar9 == 0) {
      thunk_FUN_02f6670c();
    }
    psVar8 = (short *)(lVar5 + (ulong)unaff_w25 * 2 + -2);
    iVar9 = 6;
    do {
      uVar10 = unaff_w20;
      sVar2 = 0x30;
      if (9 < (uVar10 & 0xe)) {
        sVar2 = unaff_w22;
      }
      psVar7 = psVar8 + -1;
      *psVar8 = sVar2 + ((ushort)uVar10 & 0xf);
      iVar3 = iVar9 + -1;
      bVar1 = -1 < iVar9;
      psVar8 = psVar7;
      unaff_w20 = uVar10 >> 4;
      iVar9 = iVar3;
    } while ((bVar1) || (0xf < uVar10));
    iVar9 = unaff_w21 + -10;
    do {
      uVar10 = unaff_w26;
      sVar2 = 0x30;
      if (9 < (uVar10 & 0xe)) {
        sVar2 = unaff_w22;
      }
      psVar8 = psVar7 + -1;
      *psVar7 = sVar2 + ((ushort)uVar10 & 0xf);
      iVar3 = iVar9 + -1;
      bVar1 = -1 < iVar9;
      psVar7 = psVar8;
      unaff_w26 = uVar10 >> 4;
      iVar9 = iVar3;
    } while ((bVar1) || (0xf < uVar10));
  }
  return (int)unaff_w25 <= unaff_w19;
}


