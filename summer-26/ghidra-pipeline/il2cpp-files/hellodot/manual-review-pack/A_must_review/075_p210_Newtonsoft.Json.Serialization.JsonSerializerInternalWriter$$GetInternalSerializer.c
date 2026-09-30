/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetInternalSerializer
ENTRY_POINT: 04f35ec0
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetInternalSerializer
               (ulong param_1,uint param_2,uint *param_3)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  long lVar4;
  short *psVar5;
  bool bVar6;
  int iVar7;
  undefined2 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  short *psVar13;
  short *psVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  byte *pbVar20;
  int iVar21;
  long lVar22;
  long unaff_x29;
  ulong uVar23;
  ulong uVar24;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  byte abStack_40 [64];
  
  lVar4 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(lVar4 + 0x28);
  if ((DAT_06a6f6d5 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e2380);
    DAT_06a6f6d5 = 1;
  }
  *param_3 = param_2;
  if ((~param_1 & 0x7ff0000000000000) == 0) {
    uVar9 = 0x80000000;
    if ((param_1 & 0x7fffffffffffffff) < 0x7ff0000000000001) {
      uVar9 = 0x7fffffff;
    }
    param_3[1] = uVar9;
    FUN_04f3f86c(param_3,param_1 >> 0x3f,0);
    puVar8 = (undefined2 *)Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue(param_3,0);
    *puVar8 = 0;
    goto LAB_04f3624c;
  }
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
  puVar8 = (undefined2 *)Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue(param_3,0);
  param_3[1] = 0;
  FUN_04f3f86c(param_3,param_1 >> 0x3f,0);
  *puVar8 = 0;
  if (param_1 == 0) {
    if (0 < (int)param_2) {
      uVar18 = (ulong)param_2 - 1;
      uVar12 = (ulong)param_2 + 1 & 0x1fffffffe;
      puVar16 = puVar8;
      uVar23 = _DAT_013da720;
      uVar24 = _UNK_013da728;
      do {
        if (uVar23 <= uVar18) {
          *puVar16 = 0x30;
        }
        if (uVar24 <= uVar18) {
          puVar16[1] = 0x30;
        }
        uVar23 = uVar23 + 2;
        uVar24 = uVar24 + 2;
        uVar12 = uVar12 - 2;
        puVar16 = puVar16 + 2;
      } while (uVar12 != 0);
    }
    puVar8[(int)param_2] = 0;
    goto LAB_04f3624c;
  }
  uStack_4c = 0;
  uStack_50 = 0x25;
  *(undefined1 *)((ulong)&uStack_50 | 1) = 0x2e;
  *(undefined1 *)((ulong)&uStack_50 | 2) = 0x34;
  *(undefined1 *)((ulong)&uStack_50 | 3) = 0x30;
  *(undefined1 *)((ulong)&uStack_50 | 4) = 0x65;
  *(undefined1 *)((ulong)&uStack_50 | 5) = 0;
  if (*(int *)(*(long *)PTR_DAT_065e2380 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  iVar7 = thunk_FUN_02cbe278(param_1,&uStack_50,abStack_40,0x32,0);
  iVar10 = iVar7;
  do {
    iVar17 = iVar10;
    iVar10 = iVar17 + -1;
    bVar6 = 0 < iVar10;
    if (abStack_40[iVar10] == 0x65) break;
  } while (0 < iVar10);
  bVar2 = abStack_40[iVar17];
  if (bVar2 == 0x2b) {
    iVar17 = iVar17 + 1;
LAB_04f360dc:
    iVar11 = 1;
  }
  else {
    if (bVar2 != 0x2d) goto LAB_04f360dc;
    iVar17 = iVar17 + 1;
    iVar11 = -1;
  }
  if (iVar17 < iVar7) {
    iVar21 = 0;
    lVar19 = (long)iVar7 - (long)iVar17;
    pbVar20 = abStack_40 + iVar17;
    do {
      lVar19 = lVar19 + -1;
      iVar21 = (uint)*pbVar20 + iVar21 * 10 + -0x30;
      pbVar20 = pbVar20 + 1;
    } while (lVar19 != 0);
  }
  else {
    iVar21 = 0;
  }
  iVar7 = 0;
  lVar19 = 0;
  param_3[1] = iVar21 * iVar11 + 1;
  if ((0 < iVar10) && (0 < (int)param_2)) {
    lVar19 = 0;
    iVar7 = 0;
    do {
      bVar2 = abStack_40[lVar19];
      if (bVar2 - 0x30 < 10) {
        puVar8[iVar7] = (ushort)bVar2;
        iVar7 = iVar7 + 1;
      }
      lVar19 = lVar19 + 1;
      bVar6 = lVar19 < iVar10;
    } while ((lVar19 < iVar10) && (iVar7 < (int)param_2));
  }
  puVar16 = puVar8 + iVar7;
  if (iVar7 < (int)param_2) {
    lVar22 = (long)(int)param_2 - (long)iVar7;
    puVar15 = puVar16;
    puVar16 = puVar8 + iVar7;
    do {
      puVar16 = puVar16 + 1;
      lVar22 = lVar22 + -1;
      *puVar15 = 0x30;
      puVar15 = puVar16;
    } while (lVar22 != 0);
  }
  *puVar16 = 0;
  if ((bVar6) && (0x34 < abStack_40[lVar19])) {
    iVar10 = param_2 - 1;
    psVar14 = puVar8 + iVar10;
    sVar3 = *psVar14;
    bVar6 = sVar3 == 0x39;
    if ((bVar6) && (0 < iVar10)) {
      psVar13 = psVar14;
      psVar5 = puVar8 + (int)(param_2 - 2);
      iVar7 = iVar10;
      do {
        psVar14 = psVar5;
        *psVar13 = 0x30;
        sVar3 = *psVar14;
        iVar10 = iVar7 + -1;
        bVar6 = sVar3 == 0x39;
        if (!bVar6) break;
        bVar1 = 1 < iVar7;
        psVar13 = psVar14;
        psVar5 = psVar14 + -1;
        iVar7 = iVar10;
      } while (bVar1);
    }
    if ((iVar10 == 0) && (bVar6)) {
      *psVar14 = 0x31;
      param_3[1] = iVar21 * iVar11 + 2;
    }
    else {
      *psVar14 = sVar3 + 1;
    }
  }
LAB_04f3624c:
  if (*(long *)(lVar4 + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


