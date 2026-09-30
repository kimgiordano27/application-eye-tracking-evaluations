/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadMetadataPropertiesToken
ENTRY_POINT: 0717e9f0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataPropertiesToken
               (long *param_1)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  ulong unaff_x19;
  ulong uVar10;
  int unaff_w20;
  short *psVar11;
  int unaff_w22;
  
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if (unaff_w20 <= unaff_w22) {
    unaff_w20 = unaff_w22;
  }
  lVar4 = thunk_FUN_03d8fde4(unaff_w20,0);
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  else {
    iVar3 = thunk_FUN_03d2dfa8(0);
    lVar6 = lVar4 + iVar3;
  }
  puVar2 = PTR_DAT_0920eb10;
  iVar3 = unaff_w22 + -2;
  psVar11 = (short *)(lVar6 + (ulong)(uint)(unaff_w20 << 1));
  while( true ) {
    iVar8 = *(int *)(*(long *)puVar2 + 0xe0);
    if (iVar8 == 0) {
      thunk_FUN_03db619c();
      iVar8 = *(int *)(*(long *)puVar2 + 0xe0);
    }
    iVar5 = (int)unaff_x19;
    if (unaff_x19 >> 0x20 == 0) break;
    if (iVar8 == 0) {
      thunk_FUN_03db619c();
    }
    unaff_x19 = unaff_x19 / 1000000000;
    uVar10 = (ulong)(uint)(iVar5 + (int)unaff_x19 * -1000000000);
    iVar8 = 7;
    do {
      do {
        uVar7 = uVar10 / 10;
        uVar9 = (uint)uVar10;
        psVar11 = psVar11 + -1;
        *psVar11 = (short)uVar10 + (short)(uVar10 / 10) * -10 + 0x30;
        iVar5 = iVar8 + -1;
        bVar1 = -1 < iVar8;
        uVar10 = uVar7;
        iVar8 = iVar5;
      } while (bVar1);
    } while (9 < uVar9);
    unaff_w22 = unaff_w22 + -9;
    iVar3 = iVar3 + -9;
  }
  if (iVar8 == 0) {
    thunk_FUN_03db619c();
  }
  if ((iVar5 != 0) || (-1 < unaff_w22 + -1)) {
    do {
      do {
        uVar9 = (uint)unaff_x19;
        uVar10 = (unaff_x19 & 0xffffffff) / 10;
        psVar11 = psVar11 + -1;
        *psVar11 = (short)unaff_x19 + (short)((unaff_x19 & 0xffffffff) / 10) * -10 + 0x30;
        iVar8 = iVar3 + -1;
        bVar1 = -1 < iVar3;
        unaff_x19 = uVar10;
        iVar3 = iVar8;
      } while (bVar1);
    } while (9 < uVar9);
  }
  return lVar4;
}


