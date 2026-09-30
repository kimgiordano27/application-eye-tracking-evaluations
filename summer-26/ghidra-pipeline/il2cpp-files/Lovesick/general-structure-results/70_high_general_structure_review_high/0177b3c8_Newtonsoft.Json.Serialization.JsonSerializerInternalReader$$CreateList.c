/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateList
ENTRY_POINT: 0177b3c8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateList(undefined8 param_1)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  long lVar10;
  int *unaff_x19;
  uint uVar11;
  long unaff_x20;
  ushort *puVar12;
  int unaff_w21;
  uint unaff_w23;
  int unaff_w24;
  uint uVar13;
  int iVar14;
  long unaff_x25;
  uint uVar15;
  long unaff_x26;
  int iVar16;
  undefined8 uVar17;
  long *unaff_x28;
  uint unaff_w29;
  undefined1 *in_stack_00000010;
  undefined8 in_stack_00000020;
  long in_stack_00000030;
  
  lVar7 = FUN_00d5941c(param_1);
  lVar10 = *(long *)(unaff_x20 + 0x20);
  uVar17 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x30);
  if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
    lVar10 = FUN_00d5941c(lVar10);
  }
  lVar7 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x30);
  (**(code **)(lVar7 + 0x10))(uVar17,lVar7,0,&stack0x00000020,&stack0x00000030);
  lVar7 = in_stack_00000030;
  uVar4 = unaff_w21 - unaff_w24;
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  puVar5 = System_Collections_IComparer_var;
  uVar8 = FUN_015ff8a0();
  if ((uVar8 & 1) == 0) {
    if (DAT_03776618 == '\0') {
      thunk_FUN_00d48444(PTR_DAT_033ee010);
      DAT_03776618 = '\x01';
    }
    if (unaff_x26 == 0) {
      uVar17 = 0;
      uVar9 = 0;
    }
    else {
      uVar17 = FUN_015fd038();
      uVar9 = *(undefined4 *)(unaff_x26 + 0x10);
    }
    uVar8 = FUN_00be4a10(lVar7,uVar4,uVar17,uVar9,*(undefined8 *)puVar5);
    if ((uVar8 & 1) == 0) goto LAB_0177b4e4;
    if (unaff_x26 == 0) goto LAB_0177b868;
    uVar13 = *(uint *)(unaff_x26 + 0x10);
    if (uVar13 < uVar4) {
      unaff_w29 = (uint)*(ushort *)(lVar7 + (long)(int)uVar13 * 2);
      goto LAB_0177b580;
    }
  }
  else {
LAB_0177b4e4:
    uVar8 = FUN_015ff8a0();
    if ((uVar8 & 1) == 0) {
      if (DAT_03776618 == '\0') {
        thunk_FUN_00d48444(PTR_DAT_033ee010);
        DAT_03776618 = '\x01';
      }
      if (unaff_x25 == 0) {
        uVar17 = 0;
        uVar9 = 0;
      }
      else {
        uVar17 = FUN_015fd038();
        uVar9 = *(undefined4 *)(unaff_x25 + 0x10);
      }
      uVar8 = FUN_00be4a10(lVar7,uVar4,uVar17,uVar9,*(undefined8 *)puVar5);
      if ((uVar8 & 1) == 0) goto LAB_0177b578;
      if (unaff_x25 == 0) {
LAB_0177b868:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar13 = *(uint *)(unaff_x25 + 0x10);
      if (uVar4 <= uVar13) goto LAB_0177b828;
      unaff_w29 = (uint)*(ushort *)(lVar7 + (long)(int)uVar13 * 2);
      iVar14 = -1;
    }
    else {
LAB_0177b578:
      uVar13 = 0;
LAB_0177b580:
      iVar14 = 1;
    }
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar3 = unaff_w29 - 0x30;
    if (uVar3 < 10) {
      if (unaff_w29 != 0x30) {
LAB_0177b5d8:
        uVar11 = uVar13 + 1;
        iVar16 = -8;
        do {
          uVar15 = uVar3;
          if (uVar4 <= uVar11) goto LAB_0177b714;
          uVar2 = *(ushort *)(lVar7 + (long)(int)(uVar13 + iVar16 + 9) * 2);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (9 < uVar2 - 0x30) {
            uVar11 = uVar13 + iVar16 + 9;
            goto LAB_0177b72c;
          }
          uVar11 = uVar13 + iVar16 + 10;
          bVar6 = iVar16 != -1;
          iVar16 = iVar16 + 1;
          uVar3 = ((uint)uVar2 + uVar3 * 10) - 0x30;
        } while (bVar6);
        uVar15 = uVar3;
        if (uVar4 <= uVar11) {
LAB_0177b714:
          iVar14 = uVar15 * iVar14;
          uVar17 = 1;
          goto LAB_0177b830;
        }
        uVar2 = *(ushort *)(lVar7 + (long)(int)(uVar13 + 9) * 2);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = uVar13 + 9;
        if (9 < uVar2 - 0x30) {
LAB_0177b72c:
          uVar13 = uVar11;
          bVar6 = false;
          uVar11 = (uint)uVar2;
          goto LAB_0177b740;
        }
        uVar15 = (uVar2 - 0x30) + uVar3 * 10;
        iVar16 = 2 - iVar14;
        if (-1 < 1 - iVar14) {
          iVar16 = 1 - iVar14;
        }
        uVar13 = uVar13 + 10;
        bVar1 = (long)(iVar16 >> 1) + 0x7fffffff < (long)(ulong)uVar15;
        bVar6 = 0xccccccc < (int)uVar3 || bVar1;
        if (uVar13 < uVar4) {
          do {
            uVar2 = *(ushort *)(lVar7 + (long)(int)uVar13 * 2);
            uVar11 = (uint)uVar2;
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (9 < uVar2 - 0x30) goto LAB_0177b740;
            uVar13 = uVar13 + 1;
            bVar6 = true;
          } while (uVar4 != uVar13);
        }
        else if (0xccccccc >= (int)uVar3 && !bVar1) goto LAB_0177b714;
LAB_0177b800:
        iVar14 = 0;
        uVar17 = 0;
        *in_stack_00000010 = 1;
        goto LAB_0177b830;
      }
      do {
        uVar13 = uVar13 + 1;
        if (uVar4 <= uVar13) {
          uVar15 = 0;
          goto LAB_0177b714;
        }
        uVar2 = *(ushort *)(lVar7 + (long)(int)uVar13 * 2);
        uVar11 = (uint)uVar2;
        uVar3 = uVar2 - 0x30;
      } while (uVar3 == 0);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (uVar3 < 10) goto LAB_0177b5d8;
      uVar15 = 0;
      bVar6 = false;
LAB_0177b740:
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if ((uVar11 - 9 < 5) || (uVar11 == 0x20)) {
        if ((unaff_w23 >> 1 & 1) != 0) {
          uVar13 = uVar13 + 1;
          if ((int)uVar13 < (int)uVar4) {
            puVar12 = (ushort *)(lVar7 + (long)(int)uVar13 * 2);
            do {
              if (uVar4 <= uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              uVar2 = *puVar12;
              if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_0177b7b4;
              uVar13 = uVar13 + 1;
              puVar12 = puVar12 + 1;
            } while (uVar4 != uVar13);
          }
          else {
LAB_0177b7b4:
            if (uVar13 < uVar4) goto LAB_0177b7c8;
          }
          goto LAB_0177b7f8;
        }
      }
      else {
LAB_0177b7c8:
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_0177dfe4(lVar7,uVar4,uVar13);
        if ((uVar8 & 1) != 0) {
LAB_0177b7f8:
          if (!bVar6) goto LAB_0177b714;
          goto LAB_0177b800;
        }
      }
    }
  }
LAB_0177b828:
  iVar14 = 0;
  uVar17 = 0;
LAB_0177b830:
  *unaff_x19 = iVar14;
  return uVar17;
}


