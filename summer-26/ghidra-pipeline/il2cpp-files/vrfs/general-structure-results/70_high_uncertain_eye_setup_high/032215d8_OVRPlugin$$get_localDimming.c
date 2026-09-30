/*
FUNCTION_NAME: OVRPlugin$$get_localDimming
ENTRY_POINT: 032215d8
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_localDimming(void)

{
  short *psVar1;
  char in_NG;
  char in_OV;
  bool bVar2;
  int in_w8;
  int iVar3;
  int iVar4;
  long in_x9;
  long in_x10;
  short *psVar5;
  short *psVar6;
  short sVar7;
  int in_w11;
  undefined2 *puVar8;
  undefined2 *puVar9;
  long lVar10;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long unaff_x29;
  
  while ((in_NG != in_OV && (in_w11 < unaff_w20))) {
    if (*(byte *)(unaff_x22 + in_x10) - 0x30 < 10) {
      *(ushort *)(unaff_x21 + (long)in_w11 * 2) = (ushort)*(byte *)(unaff_x22 + in_x10);
      in_w11 = in_w11 + 1;
    }
    in_x10 = in_x10 + 1;
    in_OV = SBORROW8(in_x10,in_x9);
    in_NG = in_x10 - in_x9 < 0;
  }
  puVar9 = (undefined2 *)(unaff_x21 + (long)in_w11 * 2);
  puVar8 = puVar9;
  if (in_w11 < unaff_w20) {
    lVar10 = (long)unaff_w20 - (long)in_w11;
    puVar8 = (undefined2 *)(unaff_x21 + (long)in_w11 * 2);
    do {
      puVar8 = puVar8 + 1;
      lVar10 = lVar10 + -1;
      *puVar9 = 0x30;
      puVar9 = puVar8;
    } while (lVar10 != 0);
  }
  *puVar8 = 0;
  if (((int)in_x10 < (int)in_x9) && (0x34 < *(byte *)(unaff_x22 + (int)in_x10))) {
    iVar4 = unaff_w20 + -1;
    psVar6 = (short *)(unaff_x21 + (long)iVar4 * 2);
    sVar7 = *psVar6;
    bVar2 = sVar7 == 0x39;
    if ((0 < iVar4) && (sVar7 == 0x39)) {
      psVar5 = psVar6;
      psVar1 = (short *)(unaff_x21 + (long)(unaff_w20 + -2) * 2);
      iVar3 = iVar4;
      do {
        psVar6 = psVar1;
        *psVar5 = 0x30;
        sVar7 = *psVar6;
        bVar2 = sVar7 == 0x39;
        iVar4 = iVar3 + -1;
        if (iVar3 < 2) break;
        psVar5 = psVar6;
        psVar1 = psVar6 + -1;
        iVar3 = iVar4;
      } while (sVar7 == 0x39);
    }
    if ((iVar4 == 0) && (bVar2)) {
      *psVar6 = 0x31;
      *(int *)(unaff_x19 + 4) = in_w8 + 2;
    }
    else {
      *psVar6 = sVar7 + 1;
    }
  }
  if (*(long *)(unaff_x24 + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


