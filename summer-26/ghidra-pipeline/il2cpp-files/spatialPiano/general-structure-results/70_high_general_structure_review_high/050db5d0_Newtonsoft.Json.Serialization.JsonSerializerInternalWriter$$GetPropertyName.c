/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetPropertyName
ENTRY_POINT: 050db5d0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetPropertyName(ulong param_1)

{
  bool bVar1;
  uint uVar2;
  short sVar3;
  ulong uVar4;
  int iVar5;
  undefined *puVar6;
  char in_NG;
  bool in_ZR;
  char in_OV;
  int iVar7;
  long lVar8;
  int in_w9;
  uint uVar9;
  short *psVar10;
  short *psVar11;
  ulong in_x10;
  uint unaff_w19;
  short unaff_w20;
  uint unaff_w21;
  long *unaff_x22;
  long lVar12;
  
  if (in_ZR || in_NG != in_OV) {
    unaff_w21 = 1;
  }
  if (in_w9 == 0) {
    in_x10 = param_1;
  }
  uVar9 = 5;
  if (in_w9 == 0) {
    uVar9 = 1;
  }
  uVar4 = in_x10 >> 8;
  uVar2 = uVar9 | 2;
  if (in_x10 < 0x100) {
    uVar4 = in_x10;
    uVar2 = uVar9;
  }
  if (0xf < uVar4) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar6 = PTR_DAT_067dbd90;
  uVar9 = unaff_w21;
  if ((int)unaff_w21 <= (int)uVar2) {
    uVar9 = uVar2;
  }
  lVar8 = thunk_FUN_02f42cc8(uVar9,0);
  if (lVar8 == 0) {
    lVar12 = 0;
  }
  else {
    iVar7 = thunk_FUN_02f143ec(0);
    lVar12 = lVar8 + iVar7;
  }
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  psVar10 = (short *)(lVar12 + (ulong)(uVar9 << 1) + -2);
  iVar7 = unaff_w21 - 2;
  do {
    uVar9 = unaff_w19;
    sVar3 = 0x30;
    if (9 < (uVar9 & 0xe)) {
      sVar3 = unaff_w20;
    }
    psVar11 = psVar10 + -1;
    *psVar10 = sVar3 + ((ushort)uVar9 & 0xf);
    iVar5 = iVar7 + -1;
    bVar1 = -1 < iVar7;
    psVar10 = psVar11;
    iVar7 = iVar5;
    unaff_w19 = uVar9 >> 4;
  } while ((bVar1) || (0xf < uVar9));
  return lVar8;
}


