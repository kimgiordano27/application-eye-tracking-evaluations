/*
FUNCTION_NAME: OVRPlugin$$get_localDimmingSupported
ENTRY_POINT: 03221504
PROGRAM: vrfs-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_localDimmingSupported(int param_1)

{
  short *psVar1;
  bool in_ZR;
  bool bVar2;
  int in_w8;
  int iVar3;
  int iVar4;
  long in_x9;
  int in_w10;
  int iVar5;
  long lVar6;
  short *psVar7;
  short *psVar8;
  short sVar9;
  int iVar10;
  undefined2 *puVar11;
  byte *pbVar12;
  undefined2 *puVar13;
  long lVar14;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long unaff_x29;
  
  iVar4 = (int)in_x9;
  if (in_ZR) {
    in_w10 = iVar4 + 2;
  }
  else if (in_w8 == 0x2d) {
    in_w10 = iVar4 + 2;
    iVar3 = -1;
    goto LAB_03221554;
  }
  iVar3 = 1;
LAB_03221554:
  if (in_w10 < param_1) {
    iVar10 = 0;
    lVar6 = (long)param_1 - (long)in_w10;
    pbVar12 = (byte *)(unaff_x22 + in_w10);
    do {
      lVar6 = lVar6 + -1;
      iVar10 = (uint)*pbVar12 + iVar10 * 10 + -0x30;
      pbVar12 = pbVar12 + 1;
    } while (lVar6 != 0);
  }
  else {
    iVar10 = 0;
  }
  lVar6 = 0;
  *(int *)(unaff_x19 + 4) = iVar10 * iVar3 + 1;
  if (iVar4 < 1) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    if (0 < unaff_w20) {
      lVar6 = 0;
      iVar5 = 0;
      do {
        if (*(byte *)(unaff_x22 + lVar6) - 0x30 < 10) {
          *(ushort *)(unaff_x21 + (long)iVar5 * 2) = (ushort)*(byte *)(unaff_x22 + lVar6);
          iVar5 = iVar5 + 1;
        }
        lVar6 = lVar6 + 1;
      } while ((lVar6 < in_x9) && (iVar5 < unaff_w20));
    }
  }
  puVar13 = (undefined2 *)(unaff_x21 + (long)iVar5 * 2);
  puVar11 = puVar13;
  if (iVar5 < unaff_w20) {
    lVar14 = (long)unaff_w20 - (long)iVar5;
    puVar11 = (undefined2 *)(unaff_x21 + (long)iVar5 * 2);
    do {
      puVar11 = puVar11 + 1;
      lVar14 = lVar14 + -1;
      *puVar13 = 0x30;
      puVar13 = puVar11;
    } while (lVar14 != 0);
  }
  *puVar11 = 0;
  if (((int)lVar6 < iVar4) && (0x34 < *(byte *)(unaff_x22 + (int)lVar6))) {
    iVar4 = unaff_w20 + -1;
    psVar8 = (short *)(unaff_x21 + (long)iVar4 * 2);
    sVar9 = *psVar8;
    bVar2 = sVar9 == 0x39;
    if ((0 < iVar4) && (sVar9 == 0x39)) {
      psVar7 = psVar8;
      psVar1 = (short *)(unaff_x21 + (long)(unaff_w20 + -2) * 2);
      iVar5 = iVar4;
      do {
        psVar8 = psVar1;
        *psVar7 = 0x30;
        sVar9 = *psVar8;
        bVar2 = sVar9 == 0x39;
        iVar4 = iVar5 + -1;
        if (iVar5 < 2) break;
        psVar7 = psVar8;
        psVar1 = psVar8 + -1;
        iVar5 = iVar4;
      } while (sVar9 == 0x39);
    }
    if ((iVar4 == 0) && (bVar2)) {
      *psVar8 = 0x31;
      *(int *)(unaff_x19 + 4) = iVar10 * iVar3 + 2;
    }
    else {
      *psVar8 = sVar9 + 1;
    }
  }
  if (*(long *)(unaff_x24 + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


