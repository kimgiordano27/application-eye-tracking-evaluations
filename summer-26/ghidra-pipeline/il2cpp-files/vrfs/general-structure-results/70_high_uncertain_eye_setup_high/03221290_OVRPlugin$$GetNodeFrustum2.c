/*
FUNCTION_NAME: OVRPlugin$$GetNodeFrustum2
ENTRY_POINT: 03221290
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodeFrustum2(ulong param_1,uint param_2,uint *param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  short *psVar6;
  bool bVar7;
  int iVar8;
  undefined2 *puVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  undefined2 *puVar15;
  long lVar16;
  short *psVar17;
  short *psVar18;
  short sVar19;
  int iVar20;
  byte *pbVar21;
  undefined2 *puVar22;
  long lVar23;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined8 auStack_50 [6];
  undefined2 uStack_20;
  long lStack_8;
  
  lVar3 = tpidr_el0;
  lStack_8 = *(long *)(lVar3 + 0x28);
  if ((bRam0000000007237ead & 1) == 0) {
                    /* try { // try from 032212cc to 033212f3 has its CatchHandler @ 03221314 */
    thunk_FUN_0159f088(PTR_DAT_06db0af8);
    thunk_FUN_0159f088(PTR_DAT_06e532c0);
    bRam0000000007237ead = 1;
  }
  *param_3 = param_2;
  puVar5 = PTR_DAT_06db0af8;
                    /* try { // try from 032212f4 to 033212ff has its CatchHandler @ 03220d8c */
  if (DAT_07236e61 == '\0') {
                    /* try { // try from 03221300 to 03321307 has its CatchHandler @ 03221314 */
                    /* catch() { ... } // from try @ 03221284 with catch @ 03221308 */
    thunk_FUN_0159f088(PTR_DAT_06db0af8);
    DAT_07236e61 = '\x01';
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032212cc with catch @ 03221314
                       catch(type#2 @ 00000000) { ... } // from try @ 03221300 with catch @ 03221314
                        */
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  if ((~param_1 & 0x7ff0000000000000) == 0) {
    if (DAT_0722c1cd == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06db0af8);
      DAT_0722c1cd = '\x01';
    }
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar10 = 0x80000000;
    if ((param_1 & 0x7fffffffffffffff) < 0x7ff0000000000001) {
      uVar10 = 0x7fffffff;
    }
    param_3[1] = uVar10;
    if (cRam0000000007237eb0 == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06db0af8);
      cRam0000000007237eb0 = '\x01';
    }
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    FUN_031c834c(param_3,param_1 >> 0x3f,0);
    puVar9 = (undefined2 *)FUN_031c8358(param_3,0);
    *puVar9 = 0;
    goto LAB_032216c4;
  }
  uStack_20 = 0;
  auStack_50[3] = 0;
  auStack_50[2] = 0;
  auStack_50[5] = 0;
  auStack_50[4] = 0;
  auStack_50[1] = 0;
  auStack_50[0] = 0;
  puVar9 = (undefined2 *)FUN_031c8358(param_3,0);
  param_3[1] = 0;
  if (cRam0000000007237eb0 == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06db0af8);
    cRam0000000007237eb0 = '\x01';
  }
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  FUN_031c834c(param_3,param_1 >> 0x3f,0);
  *puVar9 = 0;
  plVar4 = (long *)PTR_DAT_06e532c0;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    plVar4 = (long *)PTR_DAT_06e532c0;
  }
  PTR_DAT_06e532c0 = (undefined *)plVar4;
  if (param_1 == 0) {
    if (0 < (int)param_2) {
      uVar12 = (ulong)param_2;
      puVar15 = puVar9;
      do {
        uVar12 = uVar12 - 1;
        *puVar15 = 0x30;
        puVar15 = puVar15 + 1;
      } while (uVar12 != 0);
    }
    puVar9[(int)param_2] = 0;
    goto LAB_032216c4;
  }
  uStack_5c = 0;
  uStack_60 = 0x25;
  *(undefined1 *)((ulong)&uStack_60 | 1) = 0x2e;
  *(undefined1 *)((ulong)&uStack_60 | 2) = 0x34;
  *(undefined1 *)((ulong)&uStack_60 | 3) = 0x30;
  *(undefined1 *)((ulong)&uStack_60 | 4) = 0x65;
  *(undefined1 *)((ulong)&uStack_60 | 5) = 0;
  if (*(int *)(*plVar4 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  iVar8 = thunk_FUN_0162ae98(param_1,&uStack_60,auStack_50,0x32,0);
  iVar13 = iVar8;
  do {
    iVar14 = iVar13;
    iVar13 = iVar14 + -1;
    if (*(char *)((long)auStack_50 + (long)iVar13) == 'e') break;
  } while (0 < iVar13);
  cVar1 = *(char *)((long)auStack_50 + (long)iVar14);
  if (cVar1 == '+') {
    iVar14 = iVar14 + 1;
LAB_03221550:
    iVar11 = 1;
  }
  else {
    if (cVar1 != '-') goto LAB_03221550;
    iVar14 = iVar14 + 1;
    iVar11 = -1;
  }
  if (iVar14 < iVar8) {
    iVar20 = 0;
    lVar16 = (long)iVar8 - (long)iVar14;
    pbVar21 = (byte *)((long)auStack_50 + (long)iVar14);
    do {
      lVar16 = lVar16 + -1;
      iVar20 = (uint)*pbVar21 + iVar20 * 10 + -0x30;
      pbVar21 = pbVar21 + 1;
    } while (lVar16 != 0);
  }
  else {
    iVar20 = 0;
  }
  lVar16 = 0;
  param_3[1] = iVar20 * iVar11 + 1;
  if (iVar13 < 1) {
    iVar8 = 0;
  }
  else {
    iVar8 = 0;
    if (0 < (int)param_2) {
      lVar16 = 0;
      iVar8 = 0;
      do {
        bVar2 = *(byte *)((long)auStack_50 + lVar16);
        if (bVar2 - 0x30 < 10) {
          puVar9[iVar8] = (ushort)bVar2;
          iVar8 = iVar8 + 1;
        }
        lVar16 = lVar16 + 1;
      } while ((lVar16 < iVar13) && (iVar8 < (int)param_2));
    }
  }
  puVar15 = puVar9 + iVar8;
  if (iVar8 < (int)param_2) {
    lVar23 = (long)(int)param_2 - (long)iVar8;
    puVar15 = puVar9 + iVar8;
    puVar22 = puVar9 + iVar8;
    do {
      puVar15 = puVar15 + 1;
      lVar23 = lVar23 + -1;
      *puVar22 = 0x30;
      puVar22 = puVar15;
    } while (lVar23 != 0);
  }
  *puVar15 = 0;
  if (((int)lVar16 < iVar13) && (0x34 < *(byte *)((long)auStack_50 + (long)(int)lVar16))) {
    iVar13 = param_2 - 1;
    psVar18 = puVar9 + iVar13;
    sVar19 = *psVar18;
    bVar7 = sVar19 == 0x39;
    if ((0 < iVar13) && (sVar19 == 0x39)) {
      psVar17 = psVar18;
      psVar6 = puVar9 + (int)(param_2 - 2);
      iVar8 = iVar13;
      do {
        psVar18 = psVar6;
        *psVar17 = 0x30;
        sVar19 = *psVar18;
        bVar7 = sVar19 == 0x39;
        iVar13 = iVar8 + -1;
        if (iVar8 < 2) break;
        psVar17 = psVar18;
        psVar6 = psVar18 + -1;
        iVar8 = iVar13;
      } while (sVar19 == 0x39);
    }
    if ((iVar13 == 0) && (bVar7)) {
      *psVar18 = 0x31;
      param_3[1] = iVar20 * iVar11 + 2;
    }
    else {
      *psVar18 = sVar19 + 1;
    }
  }
LAB_032216c4:
  if (*(long *)(lVar3 + 0x28) == lStack_8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


