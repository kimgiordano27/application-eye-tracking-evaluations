/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$OnDeserializing
ENTRY_POINT: 0500be2c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserializing(void)

{
  bool bVar1;
  short sVar2;
  short *psVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  short *psVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  int iVar12;
  long lVar13;
  byte *pbVar14;
  int iVar15;
  long lVar16;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long unaff_x29;
  
  iVar5 = thunk_FUN_02d65f80();
  iVar6 = iVar5;
  do {
    iVar12 = iVar6;
    iVar6 = iVar12 + -1;
    bVar4 = 0 < iVar6;
    if (*(char *)(unaff_x22 + iVar6) == 'e') break;
  } while (0 < iVar6);
  if (*(char *)(unaff_x22 + iVar12) == '+') {
    iVar12 = iVar12 + 1;
  }
  else if (*(char *)(unaff_x22 + iVar12) == '-') {
    iVar12 = iVar12 + 1;
    iVar7 = -1;
    goto LAB_0500bf04;
  }
  iVar7 = 1;
LAB_0500bf04:
  if (iVar12 < iVar5) {
    iVar15 = 0;
    lVar13 = (long)iVar5 - (long)iVar12;
    pbVar14 = (byte *)(unaff_x22 + iVar12);
    do {
      lVar13 = lVar13 + -1;
      iVar15 = (uint)*pbVar14 + iVar15 * 10 + -0x30;
      pbVar14 = pbVar14 + 1;
    } while (lVar13 != 0);
  }
  else {
    iVar15 = 0;
  }
  iVar5 = 0;
  lVar13 = 0;
  *(int *)(unaff_x19 + 4) = iVar15 * iVar7 + 1;
  if ((0 < iVar6) && (0 < unaff_w20)) {
    lVar13 = 0;
    iVar5 = 0;
    do {
      if (*(byte *)(unaff_x22 + lVar13) - 0x30 < 10) {
        *(ushort *)(unaff_x21 + (long)iVar5 * 2) = (ushort)*(byte *)(unaff_x22 + lVar13);
        iVar5 = iVar5 + 1;
      }
      lVar13 = lVar13 + 1;
      bVar4 = lVar13 < iVar6;
    } while ((lVar13 < iVar6) && (iVar5 < unaff_w20));
  }
  puVar11 = (undefined2 *)(unaff_x21 + (long)iVar5 * 2);
  if (iVar5 < unaff_w20) {
    lVar16 = (long)unaff_w20 - (long)iVar5;
    puVar10 = puVar11;
    puVar11 = (undefined2 *)(unaff_x21 + (long)iVar5 * 2);
    do {
      puVar11 = puVar11 + 1;
      lVar16 = lVar16 + -1;
      *puVar10 = 0x30;
      puVar10 = puVar11;
    } while (lVar16 != 0);
  }
  *puVar11 = 0;
  if ((bVar4) && (0x34 < *(byte *)(lVar13 + unaff_x22))) {
    iVar6 = unaff_w20 + -1;
    psVar9 = (short *)(unaff_x21 + (long)iVar6 * 2);
    sVar2 = *psVar9;
    bVar4 = sVar2 == 0x39;
    if ((bVar4) && (0 < iVar6)) {
      psVar8 = psVar9;
      psVar3 = (short *)(unaff_x21 + (long)(unaff_w20 + -2) * 2);
      iVar5 = iVar6;
      do {
        psVar9 = psVar3;
        *psVar8 = 0x30;
        sVar2 = *psVar9;
        iVar6 = iVar5 + -1;
        bVar4 = sVar2 == 0x39;
        if (!bVar4) break;
        bVar1 = 1 < iVar5;
        psVar8 = psVar9;
        psVar3 = psVar9 + -1;
        iVar5 = iVar6;
      } while (bVar1);
    }
    if ((iVar6 == 0) && (bVar4)) {
      *psVar9 = 0x31;
      *(int *)(unaff_x19 + 4) = iVar15 * iVar7 + 2;
    }
    else {
      *psVar9 = sVar2 + 1;
    }
  }
  if (*(long *)(unaff_x24 + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


