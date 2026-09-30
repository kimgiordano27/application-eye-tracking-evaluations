/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateISerializable
ENTRY_POINT: 07a42fa8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializable(void)

{
  bool bVar1;
  short sVar2;
  short *psVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  short *psVar9;
  short *psVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  byte *pbVar16;
  int iVar17;
  long lVar18;
  long unaff_x19;
  uint unaff_w20;
  undefined2 *unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long unaff_x25;
  long unaff_x29;
  ulong uVar19;
  ulong uVar20;
  undefined4 uStack_10;
  undefined2 uStack_c;
  
  *(undefined4 *)(unaff_x19 + 4) = 0;
  FUN_07a4cb94();
  *unaff_x21 = 0;
  if (unaff_x25 == 0) {
    if (0 < (int)unaff_w20) {
      uVar14 = (ulong)unaff_w20 - 1;
      uVar8 = (ulong)unaff_w20 + 1 & 0x1fffffffe;
      puVar12 = unaff_x21;
      uVar19 = _DAT_01c76de0;
      uVar20 = _UNK_01c76de8;
      do {
        if (uVar19 <= uVar14) {
          *puVar12 = 0x30;
        }
        if (uVar20 <= uVar14) {
          puVar12[1] = 0x30;
        }
        uVar19 = uVar19 + 2;
        uVar20 = uVar20 + 2;
        uVar8 = uVar8 - 2;
        puVar12 = puVar12 + 2;
      } while (uVar8 != 0);
    }
    unaff_x21[(int)unaff_w20] = 0;
    goto LAB_07a4327c;
  }
  uStack_c = 0;
  uStack_10 = 0x25;
  *(undefined1 *)((ulong)&uStack_10 | 1) = 0x2e;
  *(undefined1 *)((ulong)&uStack_10 | 2) = 0x34;
  *(undefined1 *)((ulong)&uStack_10 | 3) = 0x30;
  *(undefined1 *)((ulong)&uStack_10 | 4) = 0x65;
  *(undefined1 *)((ulong)&uStack_10 | 5) = 0;
  if (*(int *)(*(long *)PTR_DAT_09f28710 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  iVar5 = BNG_ScreenFader__fadeOutWithDelay(&uStack_10);
  iVar6 = iVar5;
  do {
    iVar13 = iVar6;
    iVar6 = iVar13 + -1;
    bVar4 = 0 < iVar6;
    if (*(char *)(unaff_x22 + iVar6) == 'e') break;
  } while (0 < iVar6);
  if (*(char *)(unaff_x22 + iVar13) == '+') {
    iVar13 = iVar13 + 1;
LAB_07a4310c:
    iVar7 = 1;
  }
  else {
    if (*(char *)(unaff_x22 + iVar13) != '-') goto LAB_07a4310c;
    iVar13 = iVar13 + 1;
    iVar7 = -1;
  }
  if (iVar13 < iVar5) {
    iVar17 = 0;
    lVar15 = (long)iVar5 - (long)iVar13;
    pbVar16 = (byte *)(unaff_x22 + iVar13);
    do {
      lVar15 = lVar15 + -1;
      iVar17 = (uint)*pbVar16 + iVar17 * 10 + -0x30;
      pbVar16 = pbVar16 + 1;
    } while (lVar15 != 0);
  }
  else {
    iVar17 = 0;
  }
  iVar5 = 0;
  lVar15 = 0;
  *(int *)(unaff_x19 + 4) = iVar17 * iVar7 + 1;
  if ((0 < iVar6) && (0 < (int)unaff_w20)) {
    lVar15 = 0;
    iVar5 = 0;
    do {
      if (*(byte *)(unaff_x22 + lVar15) - 0x30 < 10) {
        unaff_x21[iVar5] = (ushort)*(byte *)(unaff_x22 + lVar15);
        iVar5 = iVar5 + 1;
      }
      lVar15 = lVar15 + 1;
      bVar4 = lVar15 < iVar6;
    } while ((lVar15 < iVar6) && (iVar5 < (int)unaff_w20));
  }
  puVar12 = unaff_x21 + iVar5;
  if (iVar5 < (int)unaff_w20) {
    lVar18 = (long)(int)unaff_w20 - (long)iVar5;
    puVar11 = puVar12;
    puVar12 = unaff_x21 + iVar5;
    do {
      puVar12 = puVar12 + 1;
      lVar18 = lVar18 + -1;
      *puVar11 = 0x30;
      puVar11 = puVar12;
    } while (lVar18 != 0);
  }
  *puVar12 = 0;
  if ((bVar4) && (0x34 < *(byte *)(lVar15 + unaff_x22))) {
    iVar6 = unaff_w20 - 1;
    psVar10 = unaff_x21 + iVar6;
    sVar2 = *psVar10;
    bVar4 = sVar2 == 0x39;
    if ((bVar4) && (0 < iVar6)) {
      psVar9 = psVar10;
      psVar3 = unaff_x21 + (int)(unaff_w20 - 2);
      iVar5 = iVar6;
      do {
        psVar10 = psVar3;
        *psVar9 = 0x30;
        sVar2 = *psVar10;
        iVar6 = iVar5 + -1;
        bVar4 = sVar2 == 0x39;
        if (!bVar4) break;
        bVar1 = 1 < iVar5;
        psVar9 = psVar10;
        psVar3 = psVar10 + -1;
        iVar5 = iVar6;
      } while (bVar1);
    }
    if ((iVar6 == 0) && (bVar4)) {
      *psVar10 = 0x31;
      *(int *)(unaff_x19 + 4) = iVar17 * iVar7 + 2;
    }
    else {
      *psVar10 = sVar2 + 1;
    }
  }
LAB_07a4327c:
  if (*(long *)(unaff_x24 + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


