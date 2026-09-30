/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$CheckForCircularReference
ENTRY_POINT: 050da350
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_18;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__CheckForCircularReference(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  undefined2 *puVar9;
  short *psVar10;
  short *psVar11;
  short sVar12;
  int iVar13;
  byte *pbVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined2 *puVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  uint unaff_w19;
  long unaff_x21;
  long unaff_x24;
  long unaff_x29;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  long unaff_d8;
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
  puVar9 = (undefined2 *)FUN_050e41e0();
  *(undefined4 *)(unaff_x21 + 4) = 0;
  FUN_050e41d4();
  *puVar9 = 0;
  if (unaff_d8 == 0) {
    if (0 < (int)unaff_w19) {
      uVar15 = (ulong)unaff_w19 - 1;
      lVar18 = 0;
      uVar17 = _DAT_011b5080;
      uVar23 = _UNK_011b5088;
      uVar24 = _DAT_011b4d10;
      uVar25 = _UNK_011b4d18;
      uVar26 = _DAT_011b46c0;
      uVar27 = _UNK_011b46c8;
      uVar28 = _DAT_011b30e0;
      uVar29 = _UNK_011b30e8;
      do {
        if (uVar28 <= uVar15) {
          *(undefined2 *)((long)puVar9 + lVar18) = 0x30;
        }
        if (uVar29 <= uVar15) {
          *(undefined2 *)((long)puVar9 + lVar18 + 2) = 0x30;
        }
        if (uVar26 <= uVar15) {
          *(undefined2 *)((long)puVar9 + lVar18 + 4) = 0x30;
        }
        if (uVar27 <= uVar15) {
          *(undefined2 *)((long)puVar9 + lVar18 + 6) = 0x30;
        }
        if (uVar24 <= uVar15) {
          *(undefined2 *)((long)puVar9 + lVar18 + 8) = 0x30;
        }
        if (uVar25 <= uVar15) {
          *(undefined2 *)((long)puVar9 + lVar18 + 10) = 0x30;
        }
        if (uVar17 <= uVar15) {
          *(undefined2 *)((long)puVar9 + lVar18 + 0xc) = 0x30;
        }
        if (uVar23 <= uVar15) {
          *(undefined2 *)((long)puVar9 + lVar18 + 0xe) = 0x30;
        }
        uVar24 = uVar24 + 8;
        uVar25 = uVar25 + 8;
        uVar26 = uVar26 + 8;
        uVar27 = uVar27 + 8;
        lVar18 = lVar18 + 0x10;
        uVar28 = uVar28 + 8;
        uVar29 = uVar29 + 8;
        uVar17 = uVar17 + 8;
        uVar23 = uVar23 + 8;
      } while ((ulong)(unaff_w19 + 7 >> 3) << 4 != lVar18);
    }
    puVar9[(int)unaff_w19] = 0;
  }
  else {
    uStack_50 = 0x25;
    uStack_4c = 0;
    *(undefined1 *)((ulong)&uStack_50 | 1) = 0x2e;
    *(undefined1 *)((ulong)&uStack_50 | 2) = 0x34;
    *(undefined1 *)((ulong)&uStack_50 | 3) = 0x30;
    *(undefined1 *)((ulong)&uStack_50 | 4) = 0x65;
    puVar6 = PTR_DAT_067ce590;
    *(undefined1 *)((ulong)&uStack_50 | 5) = 0;
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    iVar8 = thunk_FUN_02f0e1dc(&uStack_50,abStack_40,0x32,0);
    iVar13 = iVar8;
    do {
      iVar2 = iVar13;
      iVar13 = iVar2 + -1;
      bVar7 = 0 < iVar13;
      if (abStack_40[iVar13] == 0x65) break;
    } while (0 < iVar13);
    bVar4 = abStack_40[iVar2];
    iVar3 = iVar2 + 1;
    iVar20 = -1;
    if (bVar4 != 0x2d) {
      iVar3 = iVar2;
      iVar20 = 1;
    }
    iVar2 = iVar2 + 1;
    if (bVar4 != 0x2b) {
      iVar2 = iVar3;
    }
    iVar3 = 1;
    if (bVar4 != 0x2b) {
      iVar3 = iVar20;
    }
    if (iVar2 < iVar8) {
      iVar20 = 0;
      lVar18 = (long)iVar8 - (long)iVar2;
      pbVar14 = abStack_40 + iVar2;
      do {
        lVar18 = lVar18 + -1;
        iVar20 = (uint)*pbVar14 + iVar20 * 10 + -0x30;
        pbVar14 = pbVar14 + 1;
      } while (lVar18 != 0);
    }
    else {
      iVar20 = 0;
    }
    iVar8 = 0;
    lVar18 = 0;
    *(int *)(unaff_x21 + 4) = iVar20 * iVar3 + 1;
    if ((0 < iVar13) && (0 < (int)unaff_w19)) {
      lVar18 = 0;
      iVar8 = 0;
      do {
        bVar4 = abStack_40[lVar18];
        if (0xfffffff5 < bVar4 - 0x3a) {
          puVar9[iVar8] = (ushort)bVar4;
          iVar8 = iVar8 + 1;
        }
        lVar18 = lVar18 + 1;
        bVar7 = lVar18 < iVar13;
      } while ((lVar18 < iVar13) && (iVar8 < (int)unaff_w19));
    }
    lVar21 = (long)iVar8;
    lVar16 = lVar21;
    if (iVar8 < (int)unaff_w19) {
      lVar16 = (long)(int)unaff_w19;
      lVar22 = lVar16 - lVar21;
      puVar19 = puVar9 + lVar21;
      do {
        lVar22 = lVar22 + -1;
        *puVar19 = 0x30;
        puVar19 = puVar19 + 1;
      } while (lVar22 != 0);
    }
    puVar9[lVar16] = 0;
    if ((bVar7) && (0x34 < abStack_40[lVar18])) {
      uVar5 = unaff_w19 - 1;
      uVar17 = (ulong)uVar5;
      psVar11 = puVar9 + (int)uVar5;
      sVar12 = *psVar11;
      bVar7 = sVar12 == 0x39;
      if ((bVar7) && (0 < (int)uVar5)) {
        psVar10 = psVar11;
        uVar23 = (long)(int)uVar5;
        psVar11 = puVar9 + (int)uVar5;
        do {
          psVar11 = psVar11 + -1;
          *psVar10 = 0x30;
          uVar17 = uVar23 - 1;
          sVar12 = *psVar11;
          bVar7 = sVar12 == 0x39;
          if (!bVar7) break;
          bVar1 = 1 < (long)uVar23;
          psVar10 = psVar11;
          uVar23 = uVar17;
        } while (bVar1);
      }
      if (((int)uVar17 == 0) && (bVar7)) {
        *psVar11 = 0x31;
        *(int *)(unaff_x21 + 4) = iVar20 * iVar3 + 2;
      }
      else {
        *psVar11 = sVar12 + 1;
      }
    }
  }
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* try { // try from 050da788 to 051da9cb has its CatchHandler @ 050da788
                       catch() { ... } // from try @ 050da788 with catch @ 050da788
                       catch() { ... } // from try @ 050daa9c with catch @ 050da788
                       catch() { ... } // from try @ 050dab58 with catch @ 050da788
                       catch() { ... } // from try @ 050dabb0 with catch @ 050da788 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


