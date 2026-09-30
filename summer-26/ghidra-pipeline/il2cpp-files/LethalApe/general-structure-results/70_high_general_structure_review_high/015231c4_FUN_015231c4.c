/*
FUNCTION_NAME: FUN_015231c4
ENTRY_POINT: 015231c4
PROGRAM: LethalApe-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_21;telemetry_or_network_hits_5
*/


void FUN_015231c4(ulong param_1,long param_2,ulong param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong *puVar18;
  int local_64;
  
  param_3 = param_3 & 0xffffffff;
  uVar3 = param_1;
  if ((DAT_02dbb0ee & 1) == 0) {
    thunk_FUN_009efa0c(PTR_DAT_02bdf5c0);
    thunk_FUN_009efa0c(PTR_DAT_02bc8620);
    uVar3 = thunk_FUN_009efa0c(PTR_DAT_02bffb30);
    DAT_02dbb0ee = 1;
  }
  if ((param_2 == 0) || (lVar12 = *(long *)(param_2 + 0x48), lVar12 == 0)) {
LAB_01523b6c:
                    /* WARNING: Subroutine does not return */
    FUN_00a190f0();
  }
  uVar13 = *(uint *)(lVar12 + 0x18);
  local_64 = *(int *)(lVar12 + 0x1c);
  uVar14 = *(uint *)(param_2 + 0x70);
  uVar16 = *(uint *)(param_2 + 0x50);
  uVar15 = *(uint *)(param_2 + 0x54);
  if ((int)uVar14 < *(int *)(param_2 + 0x6c)) {
    uVar17 = *(int *)(param_2 + 0x6c) + ~uVar14;
  }
  else {
    uVar17 = *(int *)(param_2 + 0x68) - uVar14;
  }
  plVar1 = (long *)(param_1 + 0x18);
  puVar18 = (ulong *)PTR_DAT_02bdf5c0;
  do {
    switch(*(undefined4 *)(param_1 + 0x10)) {
    case 0:
      if ((0x101 < (int)uVar17) && (9 < local_64)) {
        *(uint *)(param_2 + 0x50) = uVar16;
        *(uint *)(param_2 + 0x54) = uVar15;
        iVar5 = *(int *)(lVar12 + 0x18);
        *(uint *)(lVar12 + 0x18) = uVar13;
        *(int *)(lVar12 + 0x1c) = local_64;
        *(long *)(lVar12 + 0x20) = *(long *)(lVar12 + 0x20) + (long)(int)(uVar13 - iVar5);
        *(uint *)(param_2 + 0x70) = uVar14;
        uVar3 = FUN_01523ce0(uVar3,*(undefined1 *)(param_1 + 0x34),*(undefined1 *)(param_1 + 0x35),
                             *(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40),
                             *(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50),param_2
                             ,lVar12);
        uVar13 = *(uint *)(lVar12 + 0x18);
        local_64 = *(int *)(lVar12 + 0x1c);
        param_3 = uVar3 & 0xffffffff;
        uVar14 = *(uint *)(param_2 + 0x70);
        uVar16 = *(uint *)(param_2 + 0x50);
        uVar15 = *(uint *)(param_2 + 0x54);
        if ((int)uVar14 < *(int *)(param_2 + 0x6c)) {
          uVar17 = *(int *)(param_2 + 0x6c) + ~uVar14;
        }
        else {
          uVar17 = *(int *)(param_2 + 0x68) - uVar14;
        }
        if ((int)uVar3 != 0) {
          uVar4 = 7;
          if ((int)uVar3 != 1) {
            uVar4 = 9;
          }
          *(undefined4 *)(param_1 + 0x10) = uVar4;
          break;
        }
      }
      *(uint *)(param_1 + 0x24) = (uint)*(byte *)(param_1 + 0x34);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x38);
      thunk_FUN_00a502ec(plVar1);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x10) = 1;
    case 1:
      uVar8 = *(uint *)(param_1 + 0x24);
      if ((int)uVar16 < (int)uVar8) {
        if (local_64 != 0) {
          lVar9 = *(long *)(lVar12 + 0x10);
          local_64 = 1 - local_64;
          while( true ) {
            if (lVar9 == 0) goto LAB_01523b6c;
            if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_01523b68;
            uVar10 = uVar16 & 0x1f;
            uVar16 = uVar16 + 8;
            uVar15 = (uint)*(byte *)(lVar9 + (int)uVar13 + 0x20) << (ulong)uVar10 | uVar15;
            if ((int)uVar8 <= (int)uVar16) break;
            local_64 = local_64 + 1;
            uVar13 = uVar13 + 1;
            if (local_64 == 1)
            goto System_Runtime_Serialization_SafeSerializationEventArgs__get_SerializedStates;
          }
          param_3 = 0;
          local_64 = -local_64;
          uVar13 = uVar13 + 1;
          goto LAB_01523500;
        }
        goto LAB_015239dc;
      }
LAB_01523500:
      uVar3 = *puVar18;
      iVar5 = *(int *)(param_1 + 0x20);
      if (*(int *)(uVar3 + 0xe0) == 0) {
        thunk_FUN_009ddef4();
        uVar3 = *puVar18;
      }
      puVar18 = (ulong *)PTR_DAT_02bdf5c0;
      lVar9 = **(long **)(uVar3 + 0xb8);
      if (lVar9 == 0) goto LAB_01523b6c;
      if (uVar8 < *(uint *)(lVar9 + 0x18)) {
        lVar6 = *plVar1;
        if (lVar6 == 0) goto LAB_01523b6c;
        uVar10 = *(uint *)(lVar6 + 0x18);
        uVar8 = ((*(uint *)(lVar9 + (long)(int)uVar8 * 4 + 0x20) & uVar15) + iVar5) * 3;
        if ((uVar8 + 1 < uVar10) && (uVar8 < uVar10)) {
          uVar2 = *(uint *)(lVar6 + (long)(int)(uVar8 + 1) * 4 + 0x20);
          uVar11 = *(uint *)(lVar6 + (long)(int)uVar8 * 4 + 0x20);
          uVar15 = (int)uVar15 >> (uVar2 & 0x1f);
          uVar16 = uVar16 - uVar2;
          if (uVar11 == 0) {
            if (uVar8 + 2 < uVar10) {
              uVar4 = *(undefined4 *)(lVar6 + (long)(int)(uVar8 + 2) * 4 + 0x20);
              *(undefined4 *)(param_1 + 0x10) = 6;
              *(undefined4 *)(param_1 + 0x28) = uVar4;
              break;
            }
          }
          else if ((uVar11 >> 4 & 1) == 0) {
            if ((uVar11 >> 6 & 1) != 0) {
              if ((uVar11 >> 5 & 1) == 0) {
                *(undefined4 *)(param_1 + 0x10) = 9;
                puVar7 = (undefined8 *)PTR_DAT_02bc8620;
LAB_01523b2c:
                *(undefined8 *)(lVar12 + 0x40) = *puVar7;
                thunk_FUN_00a502ec((undefined8 *)(lVar12 + 0x40));
                *(uint *)(param_2 + 0x50) = uVar16;
                *(uint *)(param_2 + 0x54) = uVar15;
                iVar5 = *(int *)(lVar12 + 0x18);
                *(uint *)(lVar12 + 0x18) = uVar13;
                *(int *)(lVar12 + 0x1c) = local_64;
                *(long *)(lVar12 + 0x20) = *(long *)(lVar12 + 0x20) + (long)(int)(uVar13 - iVar5);
LAB_01523b5c:
                *(uint *)(param_2 + 0x70) = uVar14;
                param_3 = 0xfffffffd;
                goto LAB_01523a00;
              }
              *(undefined4 *)(param_1 + 0x10) = 7;
              break;
            }
LAB_01523914:
            puVar18 = (ulong *)PTR_DAT_02bdf5c0;
            *(uint *)(param_1 + 0x24) = uVar11;
            if (uVar8 + 2 < uVar10) {
              *(int *)(param_1 + 0x20) =
                   *(int *)(lVar6 + (long)(int)(uVar8 + 2) * 4 + 0x20) + (int)uVar8 / 3;
              break;
            }
          }
          else {
            *(uint *)(param_1 + 0x2c) = uVar11 & 0xf;
            if (uVar8 + 2 < uVar10) {
              uVar4 = *(undefined4 *)(lVar6 + (long)(int)(uVar8 + 2) * 4 + 0x20);
              *(undefined4 *)(param_1 + 0x10) = 2;
              *(undefined4 *)(param_1 + 0x14) = uVar4;
              break;
            }
          }
        }
      }
LAB_01523b68:
                    /* WARNING: Subroutine does not return */
      FUN_00a190f8();
    case 2:
      uVar8 = *(uint *)(param_1 + 0x2c);
      if ((int)uVar16 < (int)uVar8) {
        if (local_64 != 0) {
          lVar9 = *(long *)(lVar12 + 0x10);
          local_64 = 1 - local_64;
          while( true ) {
            if (lVar9 == 0) goto LAB_01523b6c;
            if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_01523b68;
            uVar10 = uVar16 & 0x1f;
            uVar16 = uVar16 + 8;
            uVar15 = (uint)*(byte *)(lVar9 + (int)uVar13 + 0x20) << (ulong)uVar10 | uVar15;
            if ((int)uVar8 <= (int)uVar16) break;
            local_64 = local_64 + 1;
            uVar13 = uVar13 + 1;
            if (local_64 == 1)
            goto System_Runtime_Serialization_SafeSerializationEventArgs__get_SerializedStates;
          }
          param_3 = 0;
          local_64 = -local_64;
          uVar13 = uVar13 + 1;
          goto LAB_01523784;
        }
        goto LAB_015239dc;
      }
LAB_01523784:
      uVar3 = *puVar18;
      iVar5 = *(int *)(param_1 + 0x14);
      if (*(int *)(uVar3 + 0xe0) == 0) {
        thunk_FUN_009ddef4();
        uVar3 = *puVar18;
      }
      lVar9 = **(long **)(uVar3 + 0xb8);
      if (lVar9 != 0) {
        if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_01523b68;
        uVar10 = *(uint *)(lVar9 + (long)(int)uVar8 * 4 + 0x20) & uVar15;
        uVar16 = uVar16 - uVar8;
        *(uint *)(param_1 + 0x24) = (uint)*(byte *)(param_1 + 0x35);
        uVar15 = (int)uVar15 >> (uVar8 & 0x1f);
        *(uint *)(param_1 + 0x14) = uVar10 + iVar5;
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x48);
        thunk_FUN_00a502ec(plVar1);
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x50);
        *(undefined4 *)(param_1 + 0x10) = 3;
        puVar18 = (ulong *)PTR_DAT_02bdf5c0;
        goto switchD_0152328c_caseD_3;
      }
      goto LAB_01523b6c;
    case 3:
switchD_0152328c_caseD_3:
      uVar8 = *(uint *)(param_1 + 0x24);
      if ((int)uVar16 < (int)uVar8) {
        if (local_64 == 0) goto LAB_015239dc;
        lVar9 = *(long *)(lVar12 + 0x10);
        local_64 = 1 - local_64;
        while( true ) {
          if (lVar9 == 0) goto LAB_01523b6c;
          if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_01523b68;
          uVar10 = uVar16 & 0x1f;
          uVar16 = uVar16 + 8;
          uVar15 = (uint)*(byte *)(lVar9 + (int)uVar13 + 0x20) << (ulong)uVar10 | uVar15;
          if ((int)uVar8 <= (int)uVar16) break;
          local_64 = local_64 + 1;
          uVar13 = uVar13 + 1;
          if (local_64 == 1)
          goto System_Runtime_Serialization_SafeSerializationEventArgs__get_SerializedStates;
        }
        param_3 = 0;
        local_64 = -local_64;
        uVar13 = uVar13 + 1;
      }
      uVar3 = *puVar18;
      iVar5 = *(int *)(param_1 + 0x20);
      if (*(int *)(uVar3 + 0xe0) == 0) {
        thunk_FUN_009ddef4();
        uVar3 = *puVar18;
      }
      puVar18 = (ulong *)PTR_DAT_02bdf5c0;
      lVar9 = **(long **)(uVar3 + 0xb8);
      if (lVar9 == 0) goto LAB_01523b6c;
      if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_01523b68;
      lVar6 = *plVar1;
      if (lVar6 == 0) goto LAB_01523b6c;
      uVar10 = *(uint *)(lVar6 + 0x18);
      uVar8 = ((*(uint *)(lVar9 + (long)(int)uVar8 * 4 + 0x20) & uVar15) + iVar5) * 3;
      if ((uVar10 <= uVar8 + 1) || (uVar10 <= uVar8)) goto LAB_01523b68;
      uVar2 = *(uint *)(lVar6 + (long)(int)(uVar8 + 1) * 4 + 0x20);
      uVar11 = *(uint *)(lVar6 + (long)(int)uVar8 * 4 + 0x20);
      uVar15 = (int)uVar15 >> (uVar2 & 0x1f);
      uVar16 = uVar16 - uVar2;
      if ((uVar11 >> 4 & 1) == 0) {
        if ((uVar11 >> 6 & 1) != 0) {
          *(undefined4 *)(param_1 + 0x10) = 9;
          puVar7 = (undefined8 *)PTR_DAT_02bffb30;
          goto LAB_01523b2c;
        }
        goto LAB_01523914;
      }
      *(uint *)(param_1 + 0x2c) = uVar11 & 0xf;
      if (uVar10 <= uVar8 + 2) goto LAB_01523b68;
      uVar4 = *(undefined4 *)(lVar6 + (long)(int)(uVar8 + 2) * 4 + 0x20);
      *(undefined4 *)(param_1 + 0x10) = 4;
      *(undefined4 *)(param_1 + 0x30) = uVar4;
      break;
    case 4:
      uVar8 = *(uint *)(param_1 + 0x2c);
      if ((int)uVar16 < (int)uVar8) {
        if (local_64 == 0) goto LAB_015239dc;
        lVar9 = *(long *)(lVar12 + 0x10);
        local_64 = 1 - local_64;
        while( true ) {
          if (lVar9 == 0) goto LAB_01523b6c;
          if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_01523b68;
          uVar10 = uVar16 & 0x1f;
          uVar16 = uVar16 + 8;
          uVar15 = (uint)*(byte *)(lVar9 + (int)uVar13 + 0x20) << (ulong)uVar10 | uVar15;
          if ((int)uVar8 <= (int)uVar16) break;
          local_64 = local_64 + 1;
          uVar13 = uVar13 + 1;
          if (local_64 == 1)
          goto System_Runtime_Serialization_SafeSerializationEventArgs__get_SerializedStates;
        }
        param_3 = 0;
        local_64 = -local_64;
        uVar13 = uVar13 + 1;
      }
      uVar3 = *puVar18;
      iVar5 = *(int *)(param_1 + 0x30);
      if (*(int *)(uVar3 + 0xe0) == 0) {
        thunk_FUN_009ddef4();
        uVar3 = *puVar18;
      }
      lVar9 = **(long **)(uVar3 + 0xb8);
      if (lVar9 != 0) {
        if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_01523b68;
        uVar10 = *(uint *)(lVar9 + (long)(int)uVar8 * 4 + 0x20);
        *(undefined4 *)(param_1 + 0x10) = 5;
        uVar16 = uVar16 - uVar8;
        iVar5 = (uVar10 & uVar15) + iVar5;
        *(int *)(param_1 + 0x30) = iVar5;
        uVar15 = (int)uVar15 >> (uVar8 & 0x1f);
        puVar18 = (ulong *)PTR_DAT_02bdf5c0;
        goto LAB_01523668;
      }
      goto LAB_01523b6c;
    case 5:
      iVar5 = *(int *)(param_1 + 0x30);
LAB_01523668:
      uVar8 = uVar14 - iVar5;
      if ((int)uVar8 < 0) {
        do {
          uVar8 = uVar8 + *(int *)(param_2 + 0x68);
        } while ((int)uVar8 < 0);
      }
      iVar5 = *(int *)(param_1 + 0x14);
      while (iVar5 != 0) {
        if (uVar17 == 0) {
          if ((uVar14 == *(uint *)(param_2 + 0x68)) &&
             (iVar5 = *(int *)(param_2 + 0x6c), iVar5 != 0)) {
            uVar17 = iVar5 - 1;
            if (iVar5 < 1) {
              uVar17 = uVar14;
            }
            uVar14 = 0;
            if (uVar17 != 0) goto LAB_0152370c;
          }
          *(uint *)(param_2 + 0x70) = uVar14;
          uVar3 = FUN_01522b28(param_2,param_3);
          iVar5 = *(int *)(param_2 + 0x6c);
          uVar14 = *(uint *)(param_2 + 0x70);
          param_3 = uVar3 & 0xffffffff;
          if ((int)uVar14 < iVar5) {
            uVar10 = *(uint *)(param_2 + 0x68);
            uVar17 = iVar5 + ~uVar14;
          }
          else {
            uVar10 = *(uint *)(param_2 + 0x68);
            uVar17 = uVar10 - uVar14;
          }
          if ((iVar5 != 0) && (uVar14 == uVar10)) {
            uVar17 = iVar5 - 1;
            if (iVar5 < 1) {
              uVar17 = uVar14;
            }
            uVar14 = 0;
          }
          if (uVar17 == 0) goto LAB_01523a28;
        }
LAB_0152370c:
        lVar9 = *(long *)(param_2 + 0x60);
        if (lVar9 == 0) goto LAB_01523b6c;
        if ((*(uint *)(lVar9 + 0x18) <= uVar8) || (*(uint *)(lVar9 + 0x18) <= uVar14))
        goto LAB_01523b68;
        uVar17 = uVar17 - 1;
        *(undefined1 *)(lVar9 + 0x20 + (long)(int)uVar14) =
             *(undefined1 *)(lVar9 + 0x20 + (long)(int)uVar8);
        uVar10 = uVar8 + 1;
        uVar8 = 0;
        if (uVar10 != *(uint *)(param_2 + 0x68)) {
          uVar8 = uVar10;
        }
        iVar5 = *(int *)(param_1 + 0x14) + -1;
        *(int *)(param_1 + 0x14) = iVar5;
        uVar14 = uVar14 + 1;
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
      break;
    case 6:
      if (uVar17 == 0) {
        if ((uVar14 == *(uint *)(param_2 + 0x68)) && (iVar5 = *(int *)(param_2 + 0x6c), iVar5 != 0))
        {
          uVar17 = iVar5 - 1;
          if (iVar5 < 1) {
            uVar17 = uVar14;
          }
          uVar14 = 0;
          if (uVar17 != 0) goto LAB_015239a4;
        }
        *(uint *)(param_2 + 0x70) = uVar14;
        uVar3 = FUN_01522b28(param_2,param_3);
        iVar5 = *(int *)(param_2 + 0x6c);
        uVar14 = *(uint *)(param_2 + 0x70);
        param_3 = uVar3 & 0xffffffff;
        if ((int)uVar14 < iVar5) {
          uVar8 = *(uint *)(param_2 + 0x68);
          uVar17 = iVar5 + ~uVar14;
        }
        else {
          uVar8 = *(uint *)(param_2 + 0x68);
          uVar17 = uVar8 - uVar14;
        }
        if ((iVar5 != 0) && (uVar14 == uVar8)) {
          uVar17 = iVar5 - 1;
          if (iVar5 < 1) {
            uVar17 = uVar14;
          }
          uVar14 = 0;
        }
        if (uVar17 != 0) goto LAB_015239a4;
LAB_01523a28:
        *(uint *)(param_2 + 0x50) = uVar16;
        *(uint *)(param_2 + 0x54) = uVar15;
        iVar5 = *(int *)(lVar12 + 0x18);
        lVar9 = *(long *)(lVar12 + 0x20);
        *(int *)(lVar12 + 0x1c) = local_64;
        goto LAB_015239ec;
      }
LAB_015239a4:
      lVar9 = *(long *)(param_2 + 0x60);
      if (lVar9 == 0) goto LAB_01523b6c;
      if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_01523b68;
      lVar6 = (long)(int)uVar14;
      param_3 = 0;
      uVar14 = uVar14 + 1;
      uVar17 = uVar17 - 1;
      *(char *)(lVar9 + lVar6 + 0x20) = (char)*(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x10) = 0;
      break;
    case 7:
      if (7 < (int)uVar16) {
        uVar13 = uVar13 - 1;
        local_64 = local_64 + 1;
        uVar16 = uVar16 - 8;
      }
      *(uint *)(param_2 + 0x70) = uVar14;
      param_3 = FUN_01522b28(param_2,param_3);
      uVar14 = *(uint *)(param_2 + 0x70);
      if (*(uint *)(param_2 + 0x6c) == uVar14) {
        *(undefined4 *)(param_1 + 0x10) = 8;
switchD_0152328c_caseD_8:
        *(uint *)(param_2 + 0x50) = uVar16;
        *(uint *)(param_2 + 0x54) = uVar15;
        iVar5 = *(int *)(lVar12 + 0x18);
        lVar9 = *(long *)(lVar12 + 0x20);
        param_3 = 1;
LAB_01523aac:
        lVar9 = lVar9 + (int)(uVar13 - iVar5);
        *(uint *)(lVar12 + 0x18) = uVar13;
        *(int *)(lVar12 + 0x1c) = local_64;
LAB_015239f8:
        *(long *)(lVar12 + 0x20) = lVar9;
        *(uint *)(param_2 + 0x70) = uVar14;
      }
      else {
        *(uint *)(param_2 + 0x50) = uVar16;
        *(uint *)(param_2 + 0x54) = uVar15;
        iVar5 = *(int *)(lVar12 + 0x18);
        param_3 = param_3 & 0xffffffff;
        *(uint *)(lVar12 + 0x18) = uVar13;
        *(int *)(lVar12 + 0x1c) = local_64;
        *(long *)(lVar12 + 0x20) = *(long *)(lVar12 + 0x20) + (long)(int)(uVar13 - iVar5);
      }
LAB_01523a00:
      FUN_01522b28(param_2,param_3);
      return;
    case 8:
      goto switchD_0152328c_caseD_8;
    case 9:
      *(uint *)(param_2 + 0x50) = uVar16;
      *(uint *)(param_2 + 0x54) = uVar15;
      iVar5 = *(int *)(lVar12 + 0x18);
      *(uint *)(lVar12 + 0x18) = uVar13;
      *(int *)(lVar12 + 0x1c) = local_64;
      *(long *)(lVar12 + 0x20) = *(long *)(lVar12 + 0x20) + (long)(int)(uVar13 - iVar5);
      goto LAB_01523b5c;
    default:
      *(uint *)(param_2 + 0x50) = uVar16;
      *(uint *)(param_2 + 0x54) = uVar15;
      iVar5 = *(int *)(lVar12 + 0x18);
      lVar9 = *(long *)(lVar12 + 0x20);
      param_3 = 0xfffffffe;
      goto LAB_01523aac;
    }
  } while( true );
System_Runtime_Serialization_SafeSerializationEventArgs__get_SerializedStates:
  param_3 = 0;
LAB_015239dc:
  *(uint *)(param_2 + 0x50) = uVar16;
  *(uint *)(param_2 + 0x54) = uVar15;
  iVar5 = *(int *)(lVar12 + 0x18);
  lVar9 = *(long *)(lVar12 + 0x20);
  *(undefined4 *)(lVar12 + 0x1c) = 0;
LAB_015239ec:
  lVar9 = lVar9 + (int)(uVar13 - iVar5);
  *(uint *)(lVar12 + 0x18) = uVar13;
  goto LAB_015239f8;
}


