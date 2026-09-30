/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HasFlag
ENTRY_POINT: 050da344
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_19;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasFlag(ulong param_1)

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
  undefined4 uVar10;
  short *psVar11;
  short *psVar12;
  short sVar13;
  int iVar14;
  byte *pbVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined2 *puVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  uint unaff_w19;
  long unaff_x21;
  long unaff_x24;
  long unaff_x29;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  long unaff_d8;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  byte abStack_40 [64];
  
  if ((param_1 >> 0x34 & 0x7ff) < 0x7ff) {
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
        uVar16 = (ulong)unaff_w19 - 1;
        lVar19 = 0;
        uVar18 = _DAT_011b5080;
        uVar24 = _UNK_011b5088;
        uVar25 = _DAT_011b4d10;
        uVar26 = _UNK_011b4d18;
        uVar27 = _DAT_011b46c0;
        uVar28 = _UNK_011b46c8;
        uVar29 = _DAT_011b30e0;
        uVar30 = _UNK_011b30e8;
        do {
          if (uVar29 <= uVar16) {
            *(undefined2 *)((long)puVar9 + lVar19) = 0x30;
          }
          if (uVar30 <= uVar16) {
            *(undefined2 *)((long)puVar9 + lVar19 + 2) = 0x30;
          }
          if (uVar27 <= uVar16) {
            *(undefined2 *)((long)puVar9 + lVar19 + 4) = 0x30;
          }
          if (uVar28 <= uVar16) {
            *(undefined2 *)((long)puVar9 + lVar19 + 6) = 0x30;
          }
          if (uVar25 <= uVar16) {
            *(undefined2 *)((long)puVar9 + lVar19 + 8) = 0x30;
          }
          if (uVar26 <= uVar16) {
            *(undefined2 *)((long)puVar9 + lVar19 + 10) = 0x30;
          }
          if (uVar18 <= uVar16) {
            *(undefined2 *)((long)puVar9 + lVar19 + 0xc) = 0x30;
          }
          if (uVar24 <= uVar16) {
            *(undefined2 *)((long)puVar9 + lVar19 + 0xe) = 0x30;
          }
          uVar25 = uVar25 + 8;
          uVar26 = uVar26 + 8;
          uVar27 = uVar27 + 8;
          uVar28 = uVar28 + 8;
          lVar19 = lVar19 + 0x10;
          uVar29 = uVar29 + 8;
          uVar30 = uVar30 + 8;
          uVar18 = uVar18 + 8;
          uVar24 = uVar24 + 8;
        } while ((ulong)(unaff_w19 + 7 >> 3) << 4 != lVar19);
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
      iVar14 = iVar8;
      do {
        iVar2 = iVar14;
        iVar14 = iVar2 + -1;
        bVar7 = 0 < iVar14;
        if (abStack_40[iVar14] == 0x65) break;
      } while (0 < iVar14);
      bVar4 = abStack_40[iVar2];
      iVar3 = iVar2 + 1;
      iVar21 = -1;
      if (bVar4 != 0x2d) {
        iVar3 = iVar2;
        iVar21 = 1;
      }
      iVar2 = iVar2 + 1;
      if (bVar4 != 0x2b) {
        iVar2 = iVar3;
      }
      iVar3 = 1;
      if (bVar4 != 0x2b) {
        iVar3 = iVar21;
      }
      if (iVar2 < iVar8) {
        iVar21 = 0;
        lVar19 = (long)iVar8 - (long)iVar2;
        pbVar15 = abStack_40 + iVar2;
        do {
          lVar19 = lVar19 + -1;
          iVar21 = (uint)*pbVar15 + iVar21 * 10 + -0x30;
          pbVar15 = pbVar15 + 1;
        } while (lVar19 != 0);
      }
      else {
        iVar21 = 0;
      }
      iVar8 = 0;
      lVar19 = 0;
      *(int *)(unaff_x21 + 4) = iVar21 * iVar3 + 1;
      if ((0 < iVar14) && (0 < (int)unaff_w19)) {
        lVar19 = 0;
        iVar8 = 0;
        do {
          bVar4 = abStack_40[lVar19];
          if (0xfffffff5 < bVar4 - 0x3a) {
            puVar9[iVar8] = (ushort)bVar4;
            iVar8 = iVar8 + 1;
          }
          lVar19 = lVar19 + 1;
          bVar7 = lVar19 < iVar14;
        } while ((lVar19 < iVar14) && (iVar8 < (int)unaff_w19));
      }
      lVar22 = (long)iVar8;
      lVar17 = lVar22;
      if (iVar8 < (int)unaff_w19) {
        lVar17 = (long)(int)unaff_w19;
        lVar23 = lVar17 - lVar22;
        puVar20 = puVar9 + lVar22;
        do {
          lVar23 = lVar23 + -1;
          *puVar20 = 0x30;
          puVar20 = puVar20 + 1;
        } while (lVar23 != 0);
      }
      puVar9[lVar17] = 0;
      if ((bVar7) && (0x34 < abStack_40[lVar19])) {
        uVar5 = unaff_w19 - 1;
        uVar18 = (ulong)uVar5;
        psVar12 = puVar9 + (int)uVar5;
        sVar13 = *psVar12;
        bVar7 = sVar13 == 0x39;
        if ((bVar7) && (0 < (int)uVar5)) {
          psVar11 = psVar12;
          uVar24 = (long)(int)uVar5;
          psVar12 = puVar9 + (int)uVar5;
          do {
            psVar12 = psVar12 + -1;
            *psVar11 = 0x30;
            uVar18 = uVar24 - 1;
            sVar13 = *psVar12;
            bVar7 = sVar13 == 0x39;
            if (!bVar7) break;
            bVar1 = 1 < (long)uVar24;
            psVar11 = psVar12;
            uVar24 = uVar18;
          } while (bVar1);
        }
        if (((int)uVar18 == 0) && (bVar7)) {
          *psVar12 = 0x31;
          *(int *)(unaff_x21 + 4) = iVar21 * iVar3 + 2;
        }
        else {
          *psVar12 = sVar13 + 1;
        }
      }
    }
  }
  else {
    uVar10 = 0x7fffffff;
    if ((param_1 & 0x7fffffffffffffff) != 0x7ff0000000000000) {
      uVar10 = 0x80000000;
    }
    *(undefined4 *)(unaff_x21 + 4) = uVar10;
    FUN_050e41d4();
    puVar9 = (undefined2 *)FUN_050e41e0();
    *puVar9 = 0;
  }
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


