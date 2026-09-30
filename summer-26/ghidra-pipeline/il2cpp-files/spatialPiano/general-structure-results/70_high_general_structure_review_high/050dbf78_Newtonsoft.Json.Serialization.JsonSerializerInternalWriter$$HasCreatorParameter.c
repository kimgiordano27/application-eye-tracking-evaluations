/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HasCreatorParameter
ENTRY_POINT: 050dbf78
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasCreatorParameter(long *param_1)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  short *psVar4;
  short sVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint in_w9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  long unaff_x19;
  int unaff_w20;
  ulong unaff_x22;
  ulong uVar13;
  int unaff_w23;
  short *psVar14;
  
  if (in_w9 < 100) {
    iVar6 = unaff_w20 + 1;
  }
  else if (in_w9 < 1000) {
    iVar6 = unaff_w20 + 2;
  }
  else if (in_w9 >> 4 < 0x271) {
    iVar6 = unaff_w20 + 3;
  }
  else if (in_w9 >> 5 < 0xc35) {
    iVar6 = unaff_w20 + 4;
  }
  else if (in_w9 < 1000000) {
    iVar6 = unaff_w20 + 5;
  }
  else {
    iVar6 = unaff_w20 + 6;
  }
  if (*(int *)(*param_1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar3 = PTR_DAT_067dbd90;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  iVar11 = unaff_w23;
  if (unaff_w23 <= iVar6) {
    iVar11 = iVar6;
  }
  iVar11 = *(int *)(unaff_x19 + 0x10) + iVar11;
  lVar7 = thunk_FUN_02f42cc8(iVar11,0);
  if (lVar7 == 0) {
    lVar9 = 0;
  }
  else {
    iVar6 = thunk_FUN_02f143ec(0);
    lVar9 = lVar7 + iVar6;
  }
  lVar8 = *(long *)puVar3;
  psVar14 = (short *)(lVar9 + (long)iVar11 * 2);
  iVar6 = unaff_w23 + -2;
  while( true ) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar8 = *(long *)puVar3;
    iVar11 = (int)unaff_x22;
    if (unaff_x22 >> 0x20 == 0) break;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar8 = *(long *)puVar3;
    }
    unaff_x22 = unaff_x22 / 1000000000;
    psVar4 = psVar14 + -1;
    uVar13 = (ulong)(uint)(iVar11 + (int)unaff_x22 * -1000000000);
    iVar11 = 7;
    do {
      do {
        psVar14 = psVar4;
        uVar10 = uVar13 / 10;
        uVar12 = (uint)uVar13;
        *psVar14 = (short)uVar13 + (short)(uVar13 / 10) * -10 + 0x30;
        iVar2 = iVar11 + -1;
        bVar1 = -1 < iVar11;
        psVar4 = psVar14 + -1;
        uVar13 = uVar10;
        iVar11 = iVar2;
      } while (bVar1);
    } while (9 < uVar12);
    unaff_w23 = unaff_w23 + -9;
    iVar6 = iVar6 + -9;
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if ((iVar11 != 0) || (-1 < unaff_w23 + -1)) {
    psVar4 = psVar14 + -1;
    do {
      do {
        psVar14 = psVar4;
        uVar12 = (uint)unaff_x22;
        iVar11 = iVar6 + -1;
        uVar13 = (unaff_x22 & 0xffffffff) / 10;
        *psVar14 = (short)unaff_x22 + (short)((unaff_x22 & 0xffffffff) / 10) * -10 + 0x30;
        bVar1 = -1 < iVar6;
        psVar4 = psVar14 + -1;
        unaff_x22 = uVar13;
        iVar6 = iVar11;
      } while (bVar1);
    } while (9 < uVar12);
  }
  iVar6 = *(int *)(unaff_x19 + 0x10) + -1;
  if (-1 < iVar6) {
    do {
      psVar14 = psVar14 + -1;
      sVar5 = FUN_04f69818();
      iVar6 = iVar6 + -1;
      *psVar14 = sVar5;
    } while (iVar6 != -1);
  }
  return lVar7;
}


