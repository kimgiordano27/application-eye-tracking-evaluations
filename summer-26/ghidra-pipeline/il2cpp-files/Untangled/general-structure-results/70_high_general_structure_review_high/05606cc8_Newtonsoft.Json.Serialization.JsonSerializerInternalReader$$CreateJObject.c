/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateJObject
ENTRY_POINT: 05606cc8
PROGRAM: Untangled-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateJObject(void)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  short *psVar4;
  bool bVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  short *psVar11;
  short *psVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  byte *pbVar18;
  int iVar19;
  long lVar20;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x24;
  long unaff_x25;
  long unaff_x29;
  ulong uVar21;
  ulong uVar22;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  byte abStack_40 [64];
  
  abStack_40[0x30] = 0;
  abStack_40[0x31] = 0;
  abStack_40[0x18] = 0;
  abStack_40[0x19] = 0;
  abStack_40[0x1a] = 0;
  abStack_40[0x1b] = 0;
  abStack_40[0x1c] = 0;
  abStack_40[0x1d] = 0;
  abStack_40[0x1e] = 0;
  abStack_40[0x1f] = 0;
  abStack_40[0x10] = 0;
  abStack_40[0x11] = 0;
  abStack_40[0x12] = 0;
  abStack_40[0x13] = 0;
  abStack_40[0x14] = 0;
  abStack_40[0x15] = 0;
  abStack_40[0x16] = 0;
  abStack_40[0x17] = 0;
  abStack_40[0x28] = 0;
  abStack_40[0x29] = 0;
  abStack_40[0x2a] = 0;
  abStack_40[0x2b] = 0;
  abStack_40[0x2c] = 0;
  abStack_40[0x2d] = 0;
  abStack_40[0x2e] = 0;
  abStack_40[0x2f] = 0;
  abStack_40[0x20] = 0;
  abStack_40[0x21] = 0;
  abStack_40[0x22] = 0;
  abStack_40[0x23] = 0;
  abStack_40[0x24] = 0;
  abStack_40[0x25] = 0;
  abStack_40[0x26] = 0;
  abStack_40[0x27] = 0;
  abStack_40[8] = 0;
  abStack_40[9] = 0;
  abStack_40[10] = 0;
  abStack_40[0xb] = 0;
  abStack_40[0xc] = 0;
  abStack_40[0xd] = 0;
  abStack_40[0xe] = 0;
  abStack_40[0xf] = 0;
  abStack_40[0] = 0;
  abStack_40[1] = 0;
  abStack_40[2] = 0;
  abStack_40[3] = 0;
  abStack_40[4] = 0;
  abStack_40[5] = 0;
  abStack_40[6] = 0;
  abStack_40[7] = 0;
  puVar7 = (undefined2 *)FUN_056106b0();
  *(undefined4 *)(unaff_x19 + 4) = 0;
  FUN_056106a4();
  *puVar7 = 0;
  if (unaff_x25 == 0) {
    if (0 < (int)unaff_w20) {
      uVar16 = (ulong)unaff_w20 - 1;
      uVar10 = (ulong)unaff_w20 + 1 & 0x1fffffffe;
      puVar14 = puVar7;
      uVar21 = _DAT_0144d160;
      uVar22 = _UNK_0144d168;
      do {
        if (uVar21 <= uVar16) {
          *puVar14 = 0x30;
        }
        if (uVar22 <= uVar16) {
          puVar14[1] = 0x30;
        }
        uVar21 = uVar21 + 2;
        uVar22 = uVar22 + 2;
        uVar10 = uVar10 - 2;
        puVar14 = puVar14 + 2;
      } while (uVar10 != 0);
    }
    puVar7[(int)unaff_w20] = 0;
    goto LAB_05606fc8;
  }
  uStack_4c = 0;
  uStack_50 = 0x25;
  *(undefined1 *)((ulong)&uStack_50 | 1) = 0x2e;
  *(undefined1 *)((ulong)&uStack_50 | 2) = 0x34;
  *(undefined1 *)((ulong)&uStack_50 | 3) = 0x30;
  *(undefined1 *)((ulong)&uStack_50 | 4) = 0x65;
  *(undefined1 *)((ulong)&uStack_50 | 5) = 0;
  if (*(int *)(*(long *)PTR_DAT_06d3bcc0 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  iVar6 = thunk_FUN_02eea474(&uStack_50,abStack_40,0x32,0);
  iVar8 = iVar6;
  do {
    iVar15 = iVar8;
    iVar8 = iVar15 + -1;
    bVar5 = 0 < iVar8;
    if (abStack_40[iVar8] == 0x65) break;
  } while (0 < iVar8);
  bVar2 = abStack_40[iVar15];
  if (bVar2 == 0x2b) {
    iVar15 = iVar15 + 1;
LAB_05606e58:
    iVar9 = 1;
  }
  else {
    if (bVar2 != 0x2d) goto LAB_05606e58;
    iVar15 = iVar15 + 1;
    iVar9 = -1;
  }
  if (iVar15 < iVar6) {
    iVar19 = 0;
    lVar17 = (long)iVar6 - (long)iVar15;
    pbVar18 = abStack_40 + iVar15;
    do {
      lVar17 = lVar17 + -1;
      iVar19 = (uint)*pbVar18 + iVar19 * 10 + -0x30;
      pbVar18 = pbVar18 + 1;
    } while (lVar17 != 0);
  }
  else {
    iVar19 = 0;
  }
  iVar6 = 0;
  lVar17 = 0;
  *(int *)(unaff_x19 + 4) = iVar19 * iVar9 + 1;
  if ((0 < iVar8) && (0 < (int)unaff_w20)) {
    lVar17 = 0;
    iVar6 = 0;
    do {
      bVar2 = abStack_40[lVar17];
      if (bVar2 - 0x30 < 10) {
        puVar7[iVar6] = (ushort)bVar2;
        iVar6 = iVar6 + 1;
      }
      lVar17 = lVar17 + 1;
      bVar5 = lVar17 < iVar8;
    } while ((lVar17 < iVar8) && (iVar6 < (int)unaff_w20));
  }
  puVar14 = puVar7 + iVar6;
  if (iVar6 < (int)unaff_w20) {
    lVar20 = (long)(int)unaff_w20 - (long)iVar6;
    puVar13 = puVar14;
    puVar14 = puVar7 + iVar6;
    do {
      puVar14 = puVar14 + 1;
      lVar20 = lVar20 + -1;
      *puVar13 = 0x30;
      puVar13 = puVar14;
    } while (lVar20 != 0);
  }
  *puVar14 = 0;
  if ((bVar5) && (0x34 < abStack_40[lVar17])) {
    iVar8 = unaff_w20 - 1;
    psVar12 = puVar7 + iVar8;
    sVar3 = *psVar12;
    bVar5 = sVar3 == 0x39;
    if ((bVar5) && (0 < iVar8)) {
      psVar11 = psVar12;
      psVar4 = puVar7 + (int)(unaff_w20 - 2);
      iVar6 = iVar8;
      do {
        psVar12 = psVar4;
        *psVar11 = 0x30;
        sVar3 = *psVar12;
        iVar8 = iVar6 + -1;
        bVar5 = sVar3 == 0x39;
        if (!bVar5) break;
        bVar1 = 1 < iVar6;
        psVar11 = psVar12;
        psVar4 = psVar12 + -1;
        iVar6 = iVar8;
      } while (bVar1);
    }
    if ((iVar8 == 0) && (bVar5)) {
      *psVar12 = 0x31;
      *(int *)(unaff_x19 + 4) = iVar19 * iVar9 + 2;
    }
    else {
      *psVar12 = sVar3 + 1;
    }
  }
LAB_05606fc8:
  if (*(long *)(unaff_x24 + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


