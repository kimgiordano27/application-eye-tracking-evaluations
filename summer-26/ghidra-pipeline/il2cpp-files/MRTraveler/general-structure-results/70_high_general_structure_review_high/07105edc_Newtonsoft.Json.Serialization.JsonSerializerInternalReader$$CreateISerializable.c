/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateISerializable
ENTRY_POINT: 07105edc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializable(int param_1)

{
  bool bVar1;
  short sVar2;
  short *psVar3;
  bool bVar4;
  int in_w8;
  int iVar5;
  uint in_w9;
  short *psVar6;
  short *psVar7;
  int in_w10;
  undefined2 *puVar8;
  undefined2 *puVar9;
  int in_w11;
  long lVar10;
  int in_w12;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  long lVar15;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long unaff_x29;
  
  if (in_w12 == 0x2b) {
    in_w11 = in_w8 + 3;
  }
  else if (in_w12 == 0x2d) {
    in_w11 = in_w8 + 3;
    iVar5 = -1;
    goto LAB_07105f70;
  }
  iVar5 = 1;
LAB_07105f70:
  if (in_w11 < param_1) {
    iVar14 = 0;
    lVar10 = (long)param_1 - (long)in_w11;
    pbVar13 = (byte *)(unaff_x22 + in_w11);
    do {
      lVar10 = lVar10 + -1;
      iVar14 = (uint)*pbVar13 + iVar14 * 10 + -0x30;
      pbVar13 = pbVar13 + 1;
    } while (lVar10 != 0);
  }
  else {
    iVar14 = 0;
  }
  iVar11 = 0;
  lVar10 = 0;
  *(int *)(unaff_x19 + 4) = iVar14 * iVar5 + 1;
  if ((0 < in_w10) && (0 < unaff_w20)) {
    lVar10 = 0;
    iVar11 = 0;
    do {
      if (*(byte *)(unaff_x22 + lVar10) - 0x30 < 10) {
        *(ushort *)(unaff_x21 + (long)iVar11 * 2) = (ushort)*(byte *)(unaff_x22 + lVar10);
        iVar11 = iVar11 + 1;
      }
      lVar10 = lVar10 + 1;
      in_w9 = (uint)(lVar10 < in_w10);
    } while ((lVar10 < in_w10) && (iVar11 < unaff_w20));
  }
  puVar9 = (undefined2 *)(unaff_x21 + (long)iVar11 * 2);
  if (iVar11 < unaff_w20) {
    lVar15 = (long)unaff_w20 - (long)iVar11;
    puVar8 = puVar9;
    puVar9 = (undefined2 *)(unaff_x21 + (long)iVar11 * 2);
    do {
      puVar9 = puVar9 + 1;
      lVar15 = lVar15 + -1;
      *puVar8 = 0x30;
      puVar8 = puVar9;
    } while (lVar15 != 0);
  }
  *puVar9 = 0;
  if ((in_w9 != 0) && (0x34 < *(byte *)(lVar10 + unaff_x22))) {
    iVar11 = unaff_w20 + -1;
    psVar7 = (short *)(unaff_x21 + (long)iVar11 * 2);
    sVar2 = *psVar7;
    bVar4 = sVar2 == 0x39;
    if ((bVar4) && (0 < iVar11)) {
      psVar6 = psVar7;
      psVar3 = (short *)(unaff_x21 + (long)(unaff_w20 + -2) * 2);
      iVar12 = iVar11;
      do {
        psVar7 = psVar3;
        *psVar6 = 0x30;
        sVar2 = *psVar7;
        iVar11 = iVar12 + -1;
        bVar4 = sVar2 == 0x39;
        if (!bVar4) break;
        bVar1 = 1 < iVar12;
        psVar6 = psVar7;
        psVar3 = psVar7 + -1;
        iVar12 = iVar11;
      } while (bVar1);
    }
    if ((iVar11 == 0) && (bVar4)) {
      *psVar7 = 0x31;
      *(int *)(unaff_x19 + 4) = iVar14 * iVar5 + 2;
    }
    else {
      *psVar7 = sVar2 + 1;
    }
  }
  if (*(long *)(unaff_x24 + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


