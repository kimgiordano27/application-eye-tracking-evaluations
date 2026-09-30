/*
FUNCTION_NAME: Ignitives.MultiplayerEngineLite.MeleeHandler$$UpdateWeaponPosition
ENTRY_POINT: 03b7b230
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_5;frame_or_lifecycle_behavior
*/


/* WARNING: Type propagation algorithm not settling */

undefined8
Ignitives_MultiplayerEngineLite_MeleeHandler__UpdateWeaponPosition
          (undefined8 param_1,undefined8 param_2,long *param_3,long param_4,long param_5,int param_6
          ,undefined4 *param_7)

{
  ulong *puVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  byte bVar5;
  char cVar6;
  undefined *puVar7;
  undefined4 uVar8;
  long lVar9;
  char *__ptr;
  size_t __size;
  FILE *__s;
  uint uVar10;
  byte *pbVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  long in_x9;
  undefined8 uVar15;
  byte *pbVar16;
  int iVar17;
  long in_x10;
  ulong uVar18;
  undefined8 in_x11;
  long in_x12;
  ulong uVar19;
  long unaff_x19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long unaff_x29;
  undefined8 uVar24;
  
  lVar23 = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = param_1;
  *(long *)(unaff_x29 + -0x30) = in_x10 + in_x9;
  lVar9 = *param_3;
  lVar3 = param_3[1];
  *(undefined8 *)(unaff_x29 + -0x28) = 0xffffffffffffffff;
  *(undefined8 *)(unaff_x29 + -0x20) = in_x11;
  *(undefined8 *)(unaff_x19 + 0x18) = param_2;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(long *)(unaff_x29 + -0x18) = lVar3 + lVar9;
  *(long *)(unaff_x29 + -0x10) = param_5 - in_x12;
  *(long *)(unaff_x19 + 8) = unaff_x19 + 0x260;
  *(undefined4 **)(unaff_x19 + 0x10) = param_7 + 0x8e;
  while( true ) {
    puVar1 = (ulong *)(unaff_x29 + -0x38 + lVar23);
    pbVar16 = (byte *)*puVar1;
    pbVar4 = (byte *)puVar1[1];
    uVar20 = puVar1[2];
    *(byte **)(unaff_x29 + -0x40) = pbVar16;
    if (pbVar16 < pbVar4 && uVar20 != 0) break;
LAB_03b7b280:
    lVar23 = lVar23 + 0x18;
    if (lVar23 == 0x30) {
      return 1;
    }
  }
  uVar21 = 0;
LAB_03b7b2b0:
  pbVar11 = pbVar16 + 1;
  bVar5 = *pbVar16;
  *(byte **)(unaff_x29 + -0x40) = pbVar11;
  puVar7 = Method_System_Collections_Generic_HashSet_Enumerator<Action>_Dispose__;
  switch((ulong)bVar5) {
  case 0:
    goto code_r0x03b7bb84;
  case 1:
    uVar21 = FUN_03b7c188(*(undefined8 *)(unaff_x19 + 0x18),unaff_x29 + -0x40,pbVar4,
                          *(undefined1 *)(param_4 + 0x18),0);
    pbVar16 = *(byte **)(unaff_x29 + -0x40);
    break;
  case 2:
    uVar10 = (uint)pbVar16[1];
    iVar17 = *(int *)(param_4 + 0x28);
    pbVar16 = pbVar16 + 2;
    goto LAB_03b7b738;
  case 3:
    uVar10 = (uint)*(ushort *)(pbVar16 + 1);
    iVar17 = *(int *)(param_4 + 0x28);
    pbVar16 = pbVar16 + 3;
    goto LAB_03b7b738;
  case 4:
    uVar10 = *(uint *)(pbVar16 + 1);
    iVar17 = *(int *)(param_4 + 0x28);
    pbVar16 = pbVar16 + 5;
LAB_03b7b738:
    uVar21 = uVar21 + iVar17 * uVar10;
    *(byte **)(unaff_x29 + -0x40) = pbVar16;
    break;
  case 5:
    uVar22 = FUN_03b7c514(unaff_x29 + -0x40,pbVar4);
    lVar9 = FUN_03b7c514(unaff_x29 + -0x40,pbVar4);
    if (0x5f < uVar22) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended DWARF unwind, reg too big\n";
      __size = 0x46;
      __s = (FILE *)(Method_System_Collections_Generic_HashSet_Enumerator<Action>_Dispose__ + 0x130)
      ;
      goto LAB_03b7bd34;
    }
    puVar14 = param_7 + uVar22 * 4;
    iVar17 = *(int *)(param_4 + 0x2c);
    if (*(char *)(puVar14 + 7) == '\0') {
      lVar3 = unaff_x19 + 0x28 + uVar22 * 0x10;
      uVar24 = *(undefined8 *)(param_7 + uVar22 * 4 + 8);
      uVar15 = *(undefined8 *)(param_7 + uVar22 * 4 + 6);
      *(char *)(puVar14 + 7) = '\x01';
      *(undefined8 *)(lVar3 + 0x20) = uVar24;
      *(undefined8 *)(lVar3 + 0x18) = uVar15;
    }
    lVar9 = lVar9 * iVar17;
LAB_03b7b6d4:
    puVar14[6] = 2;
    *(long *)(puVar14 + 8) = lVar9;
    pbVar16 = *(byte **)(unaff_x29 + -0x40);
    break;
  case 6:
    uVar22 = FUN_03b7c514(unaff_x29 + -0x40,pbVar4);
    if (0x5f < uVar22) {
      __ptr = "libunwind: malformed DW_CFA_restore_extended DWARF unwind, reg too big\n";
LAB_03b7bc24:
      __s = (FILE *)(Method_System_Collections_Generic_HashSet_Enumerator<Action>_Dispose__ + 0x130)
      ;
      __size = 0x47;
      goto LAB_03b7bd34;
    }
    cVar6 = *(char *)(param_7 + uVar22 * 4 + 7);
joined_r0x03b7bb64:
    if (cVar6 != '\0') {
      lVar9 = unaff_x19 + 0x28 + uVar22 * 0x10;
      uVar15 = *(undefined8 *)(lVar9 + 0x18);
      *(undefined8 *)(param_7 + uVar22 * 4 + 8) = *(undefined8 *)(lVar9 + 0x20);
      *(undefined8 *)(param_7 + uVar22 * 4 + 6) = uVar15;
    }
    goto code_r0x03b7bb84;
  case 7:
    uVar22 = FUN_03b7c514(unaff_x29 + -0x40,pbVar4);
    if (0x5f < uVar22) {
      __ptr = "libunwind: malformed DW_CFA_undefined DWARF unwind, reg too big\n";
LAB_03b7bd28:
      __s = (FILE *)(Method_System_Collections_Generic_HashSet_Enumerator<Action>_Dispose__ + 0x130)
      ;
      __size = 0x40;
      goto LAB_03b7bd34;
    }
    if (*(char *)(param_7 + uVar22 * 4 + 7) == '\0') {
      lVar9 = unaff_x19 + 0x28 + uVar22 * 0x10;
      uVar15 = *(undefined8 *)(param_7 + uVar22 * 4 + 6);
      *(char *)(param_7 + uVar22 * 4 + 7) = '\x01';
      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(param_7 + uVar22 * 4 + 8);
      *(undefined8 *)(lVar9 + 0x18) = uVar15;
    }
    param_7[uVar22 * 4 + 6] = 1;
    pbVar16 = *(byte **)(unaff_x29 + -0x40);
    break;
  case 8:
    uVar22 = FUN_03b7c514(unaff_x29 + -0x40,pbVar4);
    if (0x5f < uVar22) {
      __ptr = "libunwind: malformed DW_CFA_same_value DWARF unwind, reg too big\n";
FUN_03b7bd0c:
      __s = (FILE *)(Method_System_Collections_Generic_HashSet_Enumerator<Action>_Dispose__ + 0x130)
      ;
      __size = 0x41;
      goto LAB_03b7bd34;
    }
    if (*(char *)(param_7 + uVar22 * 4 + 7) == '\0') {
      lVar9 = unaff_x19 + 0x28 + uVar22 * 0x10;
      uVar15 = *(undefined8 *)(param_7 + uVar22 * 4 + 6);
      *(char *)(param_7 + uVar22 * 4 + 7) = '\x01';
      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(param_7 + uVar22 * 4 + 8);
      *(undefined8 *)(lVar9 + 0x18) = uVar15;
    }
    param_7[uVar22 * 4 + 6] = 0;
    pbVar16 = *(byte **)(unaff_x29 + -0x40);
    break;
  case 9:
    uVar22 = FUN_03b7c514(unaff_x29 + -0x40,pbVar4);
    uVar18 = FUN_03b7c514(unaff_x29 + -0x40,pbVar4);
    if (0x5f < uVar22) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg too big\n";
      __size = 0x3f;
      __s = (FILE *)(Method_System_Collections_Generic_HashSet_Enumerator<Action>_Dispose__ + 0x130)
      ;
      goto LAB_03b7bd34;
    }
    if (0x5f < uVar18) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg2 too big\n";
      goto LAB_03b7bd28;
    }
    if (*(char *)(param_7 + uVar22 * 4 + 7) == '\0') {
      lVar9 = unaff_x19 + 0x28 + uVar22 * 0x10;
      uVar15 = *(undefined8 *)(param_7 + uVar22 * 4 + 6);
      *(char *)(param_7 + uVar22 * 4 + 7) = '\x01';
      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(param_7 + uVar22 * 4 + 8);
      *(undefined8 *)(lVar9 + 0x18) = uVar15;
    }
    *(ulong *)(param_7 + uVar22 * 4 + 8) = uVar18;
    param_7[uVar22 * 4 + 6] = 5;
    pbVar16 = *(byte **)(unaff_x29 + -0x40);
    break;
  case 10:
    puVar13 = (undefined8 *)((long)register0x00000008 + -0x620);
    *puVar13 = *(undefined8 *)(unaff_x19 + 0x20);
    memcpy((undefined8 *)((long)register0x00000008 + -0x618),param_7,0x618);
    *(undefined8 **)(unaff_x19 + 0x20) = puVar13;
    pbVar16 = *(byte **)(unaff_x29 + -0x40);
    register0x00000008 = (BADSPACEBASE *)puVar13;
    break;
  case 0xb:
    puVar13 = *(undefined8 **)(unaff_x19 + 0x20);
    if (puVar13 == (undefined8 *)0x0) {
      return 0;
    }
    memcpy(param_7,puVar13 + 1,0x618);
    *(undefined8 *)(unaff_x19 + 0x20) = *puVar13;
    pbVar16 = *(byte **)(unaff_x29 + -0x40);
    break;
  case 0xc:
    uVar22 = FUN_03b7c514(unaff_x29 + -0x40,pbVar4);
    uVar8 = FUN_03b7c514(unaff_x29 + -0x40,pbVar4);
    if (0x5f < uVar22) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa DWARF unwind, reg too big\n";
      __size = 0x3e;
      __s = (FILE *)(Method_System_Collections_Generic_HashSet_Enumerator<Action>_Dispose__ + 0x130)
      ;
      goto LAB_03b7bd34;
    }
    *param_7 = (int)uVar22;
    param_7[1] = uVar8;
    pbVar16 = *(byte **)(unaff_x29 + -0x40);
    break;
  case 0xd:
    uVar22 = FUN_03b7c514(unaff_x29 + -0x40,pbVar4);
    if (0x5f < uVar22) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa_register DWARF unwind, reg too big\n";
      goto LAB_03b7bc24;
    }
    *param_7 = (int)uVar22;
    pbVar16 = *(byte **)(unaff_x29 + -0x40);
    break;
  case 0xe:
    uVar8 = FUN_03b7c514(unaff_x29 + -0x40,pbVar4);
    param_7[1] = uVar8;
    pbVar16 = *(byte **)(unaff_x29 + -0x40);
    break;
  case 0xf:
    *param_7 = 0;
    *(byte **)(param_7 + 2) = pbVar11;
    goto LAB_03b7bab8;
  case 0x10:
    uVar22 = FUN_03b7c514(unaff_x29 + -0x40,pbVar4);
    if (0x5f < uVar22) {
      __ptr = "libunwind: malformed DW_CFA_expression DWARF unwind, reg too big\n";
      goto FUN_03b7bd0c;
    }
    puVar14 = param_7 + uVar22 * 4;
    if (*(char *)(puVar14 + 7) == '\0') {
      lVar9 = unaff_x19 + 0x28 + uVar22 * 0x10;
      uVar24 = *(undefined8 *)(param_7 + uVar22 * 4 + 8);
      uVar15 = *(undefined8 *)(param_7 + uVar22 * 4 + 6);
      *(char *)(puVar14 + 7) = '\x01';
      *(undefined8 *)(lVar9 + 0x20) = uVar24;
      *(undefined8 *)(lVar9 + 0x18) = uVar15;
    }
    uVar15 = *(undefined8 *)(unaff_x29 + -0x40);
    uVar8 = 6;
LAB_03b7bab0:
    puVar14[6] = uVar8;
    *(undefined8 *)(puVar14 + 8) = uVar15;
LAB_03b7bab8:
    lVar9 = FUN_03b7c514(unaff_x29 + -0x40,pbVar4);
    pbVar16 = (byte *)(*(long *)(unaff_x29 + -0x40) + lVar9);
    *(byte **)(unaff_x29 + -0x40) = pbVar16;
    break;
  case 0x11:
    uVar22 = FUN_03b7c514(unaff_x29 + -0x40,pbVar4);
    puVar7 = Method_System_Collections_Generic_HashSet_Enumerator<Action>_Dispose__;
    if (0x5f < uVar22) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended_sf DWARF unwind, reg too big\n";
      __size = 0x49;
      __s = (FILE *)(Method_System_Collections_Generic_HashSet_Enumerator<Action>_Dispose__ + 0x130)
      ;
      goto LAB_03b7bd34;
    }
    pbVar16 = *(byte **)(unaff_x29 + -0x40);
    uVar18 = 0;
    uVar12 = 0;
    pbVar11 = pbVar16;
    do {
      if (pbVar11 == pbVar4) {
        fprintf((FILE *)(Method_System_Collections_Generic_HashSet_Enumerator<Action>_Dispose__ +
                        0x130),"libunwind: %s - %s\n","getSLEB128","truncated sleb128 expression");
        fflush((FILE *)(puVar7 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      bVar5 = *pbVar11;
      pbVar16 = pbVar16 + 1;
      uVar19 = uVar18 & 0x3f;
      uVar18 = uVar18 + 7;
      uVar12 = ((ulong)bVar5 & 0x7f) << uVar19 | uVar12;
      pbVar11 = pbVar11 + 1;
    } while ((char)bVar5 < '\0');
    puVar14 = param_7 + uVar22 * 4;
    uVar19 = -1L << (uVar18 & 0x3f);
    iVar17 = *(int *)(param_4 + 0x2c);
    cVar6 = *(char *)(puVar14 + 7);
    if (0x38 < (int)uVar18 - 7U || bVar5 < 0x40) {
      uVar19 = 0;
    }
    *(byte **)(unaff_x29 + -0x40) = pbVar16;
    if (cVar6 == '\0') {
      lVar9 = unaff_x19 + 0x28 + uVar22 * 0x10;
      uVar24 = *(undefined8 *)(param_7 + uVar22 * 4 + 8);
      uVar15 = *(undefined8 *)(param_7 + uVar22 * 4 + 6);
      *(char *)(puVar14 + 7) = '\x01';
      *(undefined8 *)(lVar9 + 0x20) = uVar24;
      *(undefined8 *)(lVar9 + 0x18) = uVar15;
    }
    uVar12 = uVar12 | uVar19;
    uVar8 = 2;
LAB_03b7ba44:
    puVar14[6] = uVar8;
    *(ulong *)(puVar14 + 8) = uVar12 * (long)iVar17;
    pbVar16 = *(byte **)(unaff_x29 + -0x40);
    break;
  case 0x12:
    uVar18 = FUN_03b7c514(unaff_x29 + -0x40,pbVar4);
    puVar7 = Method_System_Collections_Generic_HashSet_Enumerator<Action>_Dispose__;
    pbVar16 = *(byte **)(unaff_x29 + -0x40);
    uVar22 = 0;
    uVar12 = 0;
    pbVar11 = pbVar16;
    do {
      if (pbVar11 == pbVar4) {
        fprintf((FILE *)(Method_System_Collections_Generic_HashSet_Enumerator<Action>_Dispose__ +
                        0x130),"libunwind: %s - %s\n","getSLEB128","truncated sleb128 expression");
        fflush((FILE *)(puVar7 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      bVar5 = *pbVar11;
      pbVar16 = pbVar16 + 1;
      uVar19 = uVar22 & 0x3f;
      uVar22 = uVar22 + 7;
      uVar12 = ((ulong)bVar5 & 0x7f) << uVar19 | uVar12;
      pbVar11 = pbVar11 + 1;
    } while ((char)bVar5 < '\0');
    *(byte **)(unaff_x29 + -0x40) = pbVar16;
    if (0x5f < uVar18) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa_sf DWARF unwind, reg too big\n";
      goto FUN_03b7bd0c;
    }
    iVar17 = *(int *)(param_4 + 0x2c);
    uVar10 = (uint)(-1L << (uVar22 & 0x3f));
    if (0x38 < (int)uVar22 - 7U || bVar5 < 0x40) {
      uVar10 = 0;
    }
    *param_7 = (int)uVar18;
    param_7[1] = iVar17 * ((uint)uVar12 | uVar10);
    pbVar16 = *(byte **)(unaff_x29 + -0x40);
    break;
  case 0x13:
    uVar22 = 0;
    uVar18 = 0;
    pbVar16 = pbVar11;
    do {
      if (pbVar16 == pbVar4) {
        fprintf((FILE *)(Method_System_Collections_Generic_HashSet_Enumerator<Action>_Dispose__ +
                        0x130),"libunwind: %s - %s\n","getSLEB128","truncated sleb128 expression");
        fflush((FILE *)(puVar7 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      bVar5 = *pbVar16;
      pbVar11 = pbVar11 + 1;
      uVar12 = uVar22 & 0x3f;
      uVar22 = uVar22 + 7;
      uVar18 = ((ulong)bVar5 & 0x7f) << uVar12 | uVar18;
      pbVar16 = pbVar16 + 1;
    } while ((char)bVar5 < '\0');
    *(byte **)(unaff_x29 + -0x40) = pbVar11;
    uVar10 = (uint)(-1L << (uVar22 & 0x3f));
    if (0x38 < (int)uVar22 - 7U || bVar5 < 0x40) {
      uVar10 = 0;
    }
    param_7[1] = *(int *)(param_4 + 0x2c) * ((uint)uVar18 | uVar10);
    pbVar16 = pbVar11;
    break;
  case 0x14:
    uVar22 = FUN_03b7c514(unaff_x29 + -0x40,pbVar4);
    if (0x5f < uVar22) {
      fprintf((FILE *)(Method_System_Collections_Generic_HashSet_Enumerator<Action>_Dispose__ +
                      0x130),
              "libunwind: malformed DW_CFA_val_offset DWARF unwind, reg (%lu) out of range\n\n",
              uVar22);
      goto LAB_03b7bd3c;
    }
    lVar9 = FUN_03b7c514(unaff_x29 + -0x40,pbVar4);
    iVar17 = *(int *)(param_4 + 0x2c);
    if (*(char *)(param_7 + uVar22 * 4 + 7) == '\0') {
      lVar3 = unaff_x19 + 0x28 + uVar22 * 0x10;
      uVar15 = *(undefined8 *)(param_7 + uVar22 * 4 + 6);
      *(char *)(param_7 + uVar22 * 4 + 7) = '\x01';
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(param_7 + uVar22 * 4 + 8);
      *(undefined8 *)(lVar3 + 0x18) = uVar15;
    }
    param_7[uVar22 * 4 + 6] = 4;
    *(long *)(param_7 + uVar22 * 4 + 8) = lVar9 * iVar17;
    pbVar16 = *(byte **)(unaff_x29 + -0x40);
    break;
  case 0x15:
    uVar22 = FUN_03b7c514(unaff_x29 + -0x40,pbVar4);
    puVar7 = Method_System_Collections_Generic_HashSet_Enumerator<Action>_Dispose__;
    if (uVar22 < 0x60) {
      pbVar16 = *(byte **)(unaff_x29 + -0x40);
      uVar18 = 0;
      uVar12 = 0;
      pbVar11 = pbVar16;
      do {
        if (pbVar11 == pbVar4) {
          fprintf((FILE *)(Method_System_Collections_Generic_HashSet_Enumerator<Action>_Dispose__ +
                          0x130),"libunwind: %s - %s\n","getSLEB128","truncated sleb128 expression")
          ;
          fflush((FILE *)(puVar7 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        bVar5 = *pbVar11;
        pbVar16 = pbVar16 + 1;
        uVar19 = uVar18 & 0x3f;
        uVar18 = uVar18 + 7;
        uVar12 = ((ulong)bVar5 & 0x7f) << uVar19 | uVar12;
        pbVar11 = pbVar11 + 1;
      } while ((char)bVar5 < '\0');
      puVar14 = param_7 + uVar22 * 4;
      uVar19 = -1L << (uVar18 & 0x3f);
      iVar17 = *(int *)(param_4 + 0x2c);
      cVar6 = *(char *)(puVar14 + 7);
      if (0x38 < (int)uVar18 - 7U || bVar5 < 0x40) {
        uVar19 = 0;
      }
      *(byte **)(unaff_x29 + -0x40) = pbVar16;
      if (cVar6 == '\0') {
        lVar9 = unaff_x19 + 0x28 + uVar22 * 0x10;
        uVar24 = *(undefined8 *)(param_7 + uVar22 * 4 + 8);
        uVar15 = *(undefined8 *)(param_7 + uVar22 * 4 + 6);
        *(char *)(puVar14 + 7) = '\x01';
        *(undefined8 *)(lVar9 + 0x20) = uVar24;
        *(undefined8 *)(lVar9 + 0x18) = uVar15;
      }
      uVar12 = uVar12 | uVar19;
      uVar8 = 4;
      goto LAB_03b7ba44;
    }
    __ptr = "libunwind: malformed DW_CFA_val_offset_sf DWARF unwind, reg too big\n";
    __size = 0x44;
    __s = (FILE *)(Method_System_Collections_Generic_HashSet_Enumerator<Action>_Dispose__ + 0x130);
    goto LAB_03b7bd34;
  case 0x16:
    uVar22 = FUN_03b7c514(unaff_x29 + -0x40,pbVar4);
    if (uVar22 < 0x60) {
      puVar14 = param_7 + uVar22 * 4;
      if (*(char *)(puVar14 + 7) == '\0') {
        lVar9 = unaff_x19 + 0x28 + uVar22 * 0x10;
        uVar24 = *(undefined8 *)(param_7 + uVar22 * 4 + 8);
        uVar15 = *(undefined8 *)(param_7 + uVar22 * 4 + 6);
        *(char *)(puVar14 + 7) = '\x01';
        *(undefined8 *)(lVar9 + 0x20) = uVar24;
        *(undefined8 *)(lVar9 + 0x18) = uVar15;
      }
      uVar15 = *(undefined8 *)(unaff_x29 + -0x40);
      uVar8 = 7;
      goto LAB_03b7bab0;
    }
    __ptr = "libunwind: malformed DW_CFA_val_expression DWARF unwind, reg too big\n";
    __size = 0x45;
    __s = (FILE *)(Method_System_Collections_Generic_HashSet_Enumerator<Action>_Dispose__ + 0x130);
    goto LAB_03b7bd34;
  default:
    bVar2 = bVar5 & 0xc0;
    uVar22 = (ulong)bVar5 & 0x3f;
    if (bVar2 == 0x40) {
      uVar21 = uVar21 + (uint)(*(int *)(param_4 + 0x28) * (int)uVar22);
      pbVar16 = *(byte **)(unaff_x29 + -0x40);
    }
    else {
      if (bVar2 == 0xc0) {
        cVar6 = *(char *)(param_7 + uVar22 * 4 + 7);
        goto joined_r0x03b7bb64;
      }
      if (bVar2 != 0x80) {
        return 0;
      }
      *(int *)(unaff_x19 + 4) = param_6;
      lVar9 = FUN_03b7c514(unaff_x29 + -0x40,pbVar4);
      iVar17 = *(int *)(param_4 + 0x2c);
      if (*(char *)(param_7 + uVar22 * 4 + 7) == '\0') {
        uVar15 = *(undefined8 *)(param_7 + uVar22 * 4 + 6);
        lVar3 = unaff_x19 + 0x28 + uVar22 * 0x10;
        *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(param_7 + uVar22 * 4 + 8);
        *(undefined8 *)(lVar3 + 0x18) = uVar15;
        *(char *)(param_7 + uVar22 * 4 + 7) = '\x01';
      }
      param_6 = *(int *)(unaff_x19 + 4);
      param_7[uVar22 * 4 + 6] = 2;
      *(long *)(param_7 + uVar22 * 4 + 8) = lVar9 * iVar17;
      pbVar16 = *(byte **)(unaff_x29 + -0x40);
    }
    break;
  case 0x2d:
    if (param_6 != 4) goto code_r0x03b7bb84;
    if (*(char *)(param_7 + 0x8f) == '\0') {
      puVar13 = *(undefined8 **)(unaff_x19 + 8);
      uVar24 = (*(undefined8 **)(unaff_x19 + 0x10))[1];
      uVar15 = **(undefined8 **)(unaff_x19 + 0x10);
      *(undefined1 *)(param_7 + 0x8f) = 1;
      puVar13[1] = uVar24;
      *puVar13 = uVar15;
    }
    *(ulong *)(param_7 + 0x90) = *(ulong *)(param_7 + 0x90) ^ 1;
    pbVar16 = *(byte **)(unaff_x29 + -0x40);
    break;
  case 0x2e:
    uVar8 = FUN_03b7c514(unaff_x29 + -0x40,pbVar4);
    param_7[4] = uVar8;
    pbVar16 = *(byte **)(unaff_x29 + -0x40);
    break;
  case 0x2f:
    uVar22 = FUN_03b7c514(unaff_x29 + -0x40,pbVar4);
    if (uVar22 < 0x60) {
      lVar9 = FUN_03b7c514(unaff_x29 + -0x40,pbVar4);
      puVar14 = param_7 + uVar22 * 4;
      iVar17 = *(int *)(param_4 + 0x2c);
      if (*(char *)(puVar14 + 7) == '\0') {
        lVar3 = unaff_x19 + 0x28 + uVar22 * 0x10;
        uVar24 = *(undefined8 *)(param_7 + uVar22 * 4 + 8);
        uVar15 = *(undefined8 *)(param_7 + uVar22 * 4 + 6);
        *(char *)(puVar14 + 7) = '\x01';
        *(undefined8 *)(lVar3 + 0x20) = uVar24;
        *(undefined8 *)(lVar3 + 0x18) = uVar15;
      }
      lVar9 = -(lVar9 * iVar17);
      goto LAB_03b7b6d4;
    }
    __ptr = "libunwind: malformed DW_CFA_GNU_negative_offset_extended DWARF unwind, reg too big\n";
    __size = 0x53;
    __s = (FILE *)(Method_System_Collections_Generic_HashSet_Enumerator<Action>_Dispose__ + 0x130);
LAB_03b7bd34:
    fwrite(__ptr,__size,1,__s);
LAB_03b7bd3c:
    fflush((FILE *)(Method_System_Collections_Generic_HashSet_Enumerator<Action>_Dispose__ + 0x130))
    ;
    return 0;
  }
joined_r0x03b7b66c:
  if ((pbVar4 <= pbVar16) || (uVar20 <= uVar21)) goto LAB_03b7b280;
  goto LAB_03b7b2b0;
code_r0x03b7bb84:
  pbVar16 = *(byte **)(unaff_x29 + -0x40);
  goto joined_r0x03b7b66c;
}


