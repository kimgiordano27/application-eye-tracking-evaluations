/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadMetadataProperties
ENTRY_POINT: 06755ba4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataProperties
               (undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  short *psVar9;
  short *psVar10;
  short sVar11;
  int iVar12;
  byte *pbVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined2 *puVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  uint unaff_w19;
  undefined2 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x29;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined4 uStack_10;
  undefined2 uStack_c;
  
  *(undefined4 *)(unaff_x21 + 4) = 0;
  FUN_0675fcb8(param_1,unaff_x23 >> 0x3f);
  *unaff_x20 = 0;
  if (unaff_x23 == 0) {
    if (0 < (int)unaff_w19) {
      uVar14 = (ulong)unaff_w19 - 1;
      lVar17 = 0;
      uVar16 = _DAT_015c98a0;
      uVar22 = _UNK_015c98a8;
      uVar23 = _DAT_015c9430;
      uVar24 = _UNK_015c9438;
      uVar25 = _DAT_015c8c80;
      uVar26 = _UNK_015c8c88;
      uVar27 = _DAT_015c7320;
      uVar28 = _UNK_015c7328;
      do {
        if (uVar27 <= uVar14) {
          *(undefined2 *)((long)unaff_x20 + lVar17) = 0x30;
        }
        if (uVar28 <= uVar14) {
          *(undefined2 *)((long)unaff_x20 + lVar17 + 2) = 0x30;
        }
        if (uVar25 <= uVar14) {
          *(undefined2 *)((long)unaff_x20 + lVar17 + 4) = 0x30;
        }
        if (uVar26 <= uVar14) {
          *(undefined2 *)((long)unaff_x20 + lVar17 + 6) = 0x30;
        }
        if (uVar23 <= uVar14) {
          *(undefined2 *)((long)unaff_x20 + lVar17 + 8) = 0x30;
        }
        if (uVar24 <= uVar14) {
          *(undefined2 *)((long)unaff_x20 + lVar17 + 10) = 0x30;
        }
        if (uVar16 <= uVar14) {
          *(undefined2 *)((long)unaff_x20 + lVar17 + 0xc) = 0x30;
        }
        if (uVar22 <= uVar14) {
          *(undefined2 *)((long)unaff_x20 + lVar17 + 0xe) = 0x30;
        }
        uVar23 = uVar23 + 8;
        uVar24 = uVar24 + 8;
        uVar25 = uVar25 + 8;
        uVar26 = uVar26 + 8;
        lVar17 = lVar17 + 0x10;
        uVar27 = uVar27 + 8;
        uVar28 = uVar28 + 8;
        uVar16 = uVar16 + 8;
        uVar22 = uVar22 + 8;
      } while ((ulong)(unaff_w19 + 7 >> 3) << 4 != lVar17);
    }
    unaff_x20[(int)unaff_w19] = 0;
  }
  else {
    uStack_10 = 0x25;
    uStack_c = 0;
    *(undefined1 *)((ulong)&uStack_10 | 1) = 0x2e;
    *(undefined1 *)((ulong)&uStack_10 | 2) = 0x34;
    *(undefined1 *)((ulong)&uStack_10 | 3) = 0x30;
    *(undefined1 *)((ulong)&uStack_10 | 4) = 0x65;
    puVar6 = PTR_DAT_08493df0;
    *(undefined1 *)((ulong)&uStack_10 | 5) = 0;
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    iVar8 = thunk_FUN_03a90218(&uStack_10);
    iVar12 = iVar8;
    do {
      iVar2 = iVar12;
      iVar12 = iVar2 + -1;
      bVar7 = 0 < iVar12;
      if (*(char *)(unaff_x22 + iVar12) == 'e') break;
    } while (0 < iVar12);
    cVar4 = *(char *)(unaff_x22 + iVar2);
    iVar3 = iVar2 + 1;
    iVar19 = -1;
    if (cVar4 != '-') {
      iVar3 = iVar2;
      iVar19 = 1;
    }
    iVar2 = iVar2 + 1;
    if (cVar4 != '+') {
      iVar2 = iVar3;
    }
    iVar3 = 1;
    if (cVar4 != '+') {
      iVar3 = iVar19;
    }
    if (iVar2 < iVar8) {
      iVar19 = 0;
      lVar17 = (long)iVar8 - (long)iVar2;
      pbVar13 = (byte *)(unaff_x22 + iVar2);
      do {
        lVar17 = lVar17 + -1;
        iVar19 = (uint)*pbVar13 + iVar19 * 10 + -0x30;
        pbVar13 = pbVar13 + 1;
      } while (lVar17 != 0);
    }
    else {
      iVar19 = 0;
    }
    iVar8 = 0;
    lVar17 = 0;
    *(int *)(unaff_x21 + 4) = iVar19 * iVar3 + 1;
    if ((0 < iVar12) && (0 < (int)unaff_w19)) {
      lVar17 = 0;
      iVar8 = 0;
      do {
        if (0xfffffff5 < *(byte *)(unaff_x22 + lVar17) - 0x3a) {
          unaff_x20[iVar8] = (ushort)*(byte *)(unaff_x22 + lVar17);
          iVar8 = iVar8 + 1;
        }
        lVar17 = lVar17 + 1;
        bVar7 = lVar17 < iVar12;
      } while ((lVar17 < iVar12) && (iVar8 < (int)unaff_w19));
    }
    lVar20 = (long)iVar8;
    lVar15 = lVar20;
    if (iVar8 < (int)unaff_w19) {
      lVar15 = (long)(int)unaff_w19;
      lVar21 = lVar15 - lVar20;
      puVar18 = unaff_x20 + lVar20;
      do {
        lVar21 = lVar21 + -1;
        *puVar18 = 0x30;
        puVar18 = puVar18 + 1;
      } while (lVar21 != 0);
    }
    unaff_x20[lVar15] = 0;
    if ((bVar7) && (0x34 < *(byte *)(lVar17 + unaff_x22))) {
      uVar5 = unaff_w19 - 1;
      uVar16 = (ulong)uVar5;
      psVar10 = unaff_x20 + (int)uVar5;
      sVar11 = *psVar10;
      bVar7 = sVar11 == 0x39;
      if ((bVar7) && (0 < (int)uVar5)) {
        psVar9 = psVar10;
        uVar22 = (long)(int)uVar5;
        psVar10 = unaff_x20 + (int)uVar5;
        do {
          psVar10 = psVar10 + -1;
          *psVar9 = 0x30;
          uVar16 = uVar22 - 1;
          sVar11 = *psVar10;
          bVar7 = sVar11 == 0x39;
          if (!bVar7) break;
          bVar1 = 1 < (long)uVar22;
          psVar9 = psVar10;
          uVar22 = uVar16;
        } while (bVar1);
      }
      if (((int)uVar16 == 0) && (bVar7)) {
        *psVar10 = 0x31;
        *(int *)(unaff_x21 + 4) = iVar19 * iVar3 + 2;
      }
      else {
        *psVar10 = sVar11 + 1;
      }
    }
  }
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


