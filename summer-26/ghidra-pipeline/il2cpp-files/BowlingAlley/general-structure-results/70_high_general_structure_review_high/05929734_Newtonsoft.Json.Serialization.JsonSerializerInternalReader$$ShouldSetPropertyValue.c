/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ShouldSetPropertyValue
ENTRY_POINT: 05929734
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ShouldSetPropertyValue
               (ulong param_1)

{
  uint uVar1;
  bool bVar2;
  short sVar3;
  ulong uVar4;
  int iVar5;
  undefined *puVar6;
  bool in_ZR;
  bool in_CY;
  int iVar7;
  long lVar8;
  short *psVar9;
  int in_w9;
  int in_w10;
  short unaff_w19;
  uint unaff_w20;
  int unaff_w23;
  long lVar10;
  
  uVar4 = param_1 >> 8;
  if (!in_CY || in_ZR) {
    uVar4 = param_1;
  }
  if (0xf < uVar4) {
    in_w9 = in_w9 + 1;
  }
  if (in_w10 == 0) {
    thunk_FUN_032cd7c0();
  }
  puVar6 = PTR_DAT_072969e0;
  if (in_w9 <= unaff_w23) {
    in_w9 = unaff_w23;
  }
  lVar8 = thunk_FUN_0329422c(in_w9,0);
  if (lVar8 == 0) {
    lVar10 = 0;
  }
  else {
    iVar7 = thunk_FUN_032f8ab8(0);
    lVar10 = lVar8 + iVar7;
  }
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  psVar9 = (short *)(lVar10 + (ulong)(uint)(in_w9 << 1));
  iVar7 = unaff_w23 + -2;
  do {
    uVar1 = unaff_w20 & 0xf;
    sVar3 = 0x30;
    if (9 < uVar1) {
      sVar3 = unaff_w19;
    }
    unaff_w20 = unaff_w20 >> 4;
    psVar9 = psVar9 + -1;
    *psVar9 = sVar3 + (short)uVar1;
    iVar5 = iVar7 + -1;
    bVar2 = -1 < iVar7;
    iVar7 = iVar5;
  } while ((bVar2) || (unaff_w20 != 0));
  return lVar8;
}


