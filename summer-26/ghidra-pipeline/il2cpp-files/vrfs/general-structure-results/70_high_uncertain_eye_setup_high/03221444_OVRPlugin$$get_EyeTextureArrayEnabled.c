/*
FUNCTION_NAME: OVRPlugin$$get_EyeTextureArrayEnabled
ENTRY_POINT: 03221444
PROGRAM: vrfs-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_EyeTextureArrayEnabled(void)

{
  long *plVar1;
  short *psVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  long lVar10;
  short *psVar11;
  short *psVar12;
  short sVar13;
  int iVar14;
  byte *pbVar15;
  undefined2 *puVar16;
  long lVar17;
  long unaff_x19;
  uint unaff_w20;
  undefined2 *unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x29;
  undefined4 uStack_10;
  undefined2 uStack_c;
  
  plVar1 = (long *)PTR_DAT_06e532c0;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    plVar1 = (long *)PTR_DAT_06e532c0;
  }
  PTR_DAT_06e532c0 = (undefined *)plVar1;
  if (unaff_x26 == 0) {
    if (0 < (int)unaff_w20) {
      uVar6 = (ulong)unaff_w20;
      puVar9 = unaff_x21;
      do {
        uVar6 = uVar6 - 1;
        *puVar9 = 0x30;
        puVar9 = puVar9 + 1;
      } while (uVar6 != 0);
    }
    unaff_x21[(int)unaff_w20] = 0;
    goto LAB_032216c4;
  }
  uStack_c = 0;
  uStack_10 = 0x25;
  *(undefined1 *)((ulong)&uStack_10 | 1) = 0x2e;
  *(undefined1 *)((ulong)&uStack_10 | 2) = 0x34;
  *(undefined1 *)((ulong)&uStack_10 | 3) = 0x30;
  *(undefined1 *)((ulong)&uStack_10 | 4) = 0x65;
  *(undefined1 *)((ulong)&uStack_10 | 5) = 0;
  if (*(int *)(*plVar1 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  iVar4 = thunk_FUN_0162ae98(&uStack_10);
  iVar7 = iVar4;
  do {
    iVar8 = iVar7;
    iVar7 = iVar8 + -1;
    if (*(char *)(unaff_x22 + iVar7) == 'e') break;
  } while (0 < iVar7);
  if (*(char *)(unaff_x22 + iVar8) == '+') {
    iVar8 = iVar8 + 1;
LAB_03221550:
    iVar5 = 1;
  }
  else {
    if (*(char *)(unaff_x22 + iVar8) != '-') goto LAB_03221550;
    iVar8 = iVar8 + 1;
    iVar5 = -1;
  }
  if (iVar8 < iVar4) {
    iVar14 = 0;
    lVar10 = (long)iVar4 - (long)iVar8;
    pbVar15 = (byte *)(unaff_x22 + iVar8);
    do {
      lVar10 = lVar10 + -1;
      iVar14 = (uint)*pbVar15 + iVar14 * 10 + -0x30;
      pbVar15 = pbVar15 + 1;
    } while (lVar10 != 0);
  }
  else {
    iVar14 = 0;
  }
  lVar10 = 0;
  *(int *)(unaff_x19 + 4) = iVar14 * iVar5 + 1;
  if (iVar7 < 1) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    if (0 < (int)unaff_w20) {
      lVar10 = 0;
      iVar4 = 0;
      do {
        if (*(byte *)(unaff_x22 + lVar10) - 0x30 < 10) {
          unaff_x21[iVar4] = (ushort)*(byte *)(unaff_x22 + lVar10);
          iVar4 = iVar4 + 1;
        }
        lVar10 = lVar10 + 1;
      } while ((lVar10 < iVar7) && (iVar4 < (int)unaff_w20));
    }
  }
  puVar9 = unaff_x21 + iVar4;
  if (iVar4 < (int)unaff_w20) {
    lVar17 = (long)(int)unaff_w20 - (long)iVar4;
    puVar9 = unaff_x21 + iVar4;
    puVar16 = unaff_x21 + iVar4;
    do {
      puVar9 = puVar9 + 1;
      lVar17 = lVar17 + -1;
      *puVar16 = 0x30;
      puVar16 = puVar9;
    } while (lVar17 != 0);
  }
  *puVar9 = 0;
  if (((int)lVar10 < iVar7) && (0x34 < *(byte *)(unaff_x22 + (int)lVar10))) {
    iVar7 = unaff_w20 - 1;
    psVar12 = unaff_x21 + iVar7;
    sVar13 = *psVar12;
    bVar3 = sVar13 == 0x39;
    if ((0 < iVar7) && (sVar13 == 0x39)) {
      psVar11 = psVar12;
      psVar2 = unaff_x21 + (int)(unaff_w20 - 2);
      iVar4 = iVar7;
      do {
        psVar12 = psVar2;
        *psVar11 = 0x30;
        sVar13 = *psVar12;
        bVar3 = sVar13 == 0x39;
        iVar7 = iVar4 + -1;
        if (iVar4 < 2) break;
        psVar11 = psVar12;
        psVar2 = psVar12 + -1;
        iVar4 = iVar7;
      } while (sVar13 == 0x39);
    }
    if ((iVar7 == 0) && (bVar3)) {
      *psVar12 = 0x31;
      *(int *)(unaff_x19 + 4) = iVar14 * iVar5 + 2;
    }
    else {
      *psVar12 = sVar13 + 1;
    }
  }
LAB_032216c4:
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -0x58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


