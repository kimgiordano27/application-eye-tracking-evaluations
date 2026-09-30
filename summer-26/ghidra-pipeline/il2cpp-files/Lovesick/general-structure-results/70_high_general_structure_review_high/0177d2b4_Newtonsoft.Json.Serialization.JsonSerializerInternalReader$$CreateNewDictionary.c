/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewDictionary
ENTRY_POINT: 0177d2b4
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


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewDictionary(void)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  ulong *unaff_x19;
  long unaff_x20;
  ushort *puVar8;
  int unaff_w21;
  uint unaff_w23;
  int unaff_w24;
  uint uVar9;
  uint uVar10;
  long unaff_x25;
  ulong uVar11;
  uint uVar12;
  long unaff_x26;
  int iVar13;
  long *unaff_x28;
  uint unaff_w29;
  uint uStack0000000000000014;
  undefined1 *in_stack_00000018;
  long in_stack_00000030;
  
  uVar2 = unaff_w21 - unaff_w24;
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  puVar3 = System_Collections_IComparer_var;
  uVar5 = FUN_015ff8a0();
  if ((uVar5 & 1) == 0) {
    if (DAT_03776618 == '\0') {
      thunk_FUN_00d48444(PTR_DAT_033ee010);
      DAT_03776618 = '\x01';
    }
    if (unaff_x26 == 0) {
      uVar6 = 0;
      uVar7 = 0;
    }
    else {
      uVar6 = FUN_015fd038();
      uVar7 = *(undefined4 *)(unaff_x26 + 0x10);
    }
    uVar5 = FUN_00be4a10(in_stack_00000030,uVar2,uVar6,uVar7,*(undefined8 *)puVar3);
    if ((uVar5 & 1) == 0) goto LAB_0177d370;
    if (unaff_x26 == 0) goto LAB_0177d6f4;
    uVar9 = *(uint *)(unaff_x26 + 0x10);
    if (uVar9 < uVar2) {
      unaff_w29 = (uint)*(ushort *)(in_stack_00000030 + (long)(int)uVar9 * 2);
      goto LAB_0177d404;
    }
  }
  else {
LAB_0177d370:
    uVar5 = FUN_015ff8a0();
    if ((uVar5 & 1) == 0) {
      if (DAT_03776618 == '\0') {
        thunk_FUN_00d48444(PTR_DAT_033ee010);
        DAT_03776618 = '\x01';
      }
      if (unaff_x25 == 0) {
        uVar6 = 0;
        uVar7 = 0;
      }
      else {
        uVar6 = FUN_015fd038();
        uVar7 = *(undefined4 *)(unaff_x25 + 0x10);
      }
      uVar5 = FUN_00be4a10(in_stack_00000030,uVar2,uVar6,uVar7,*(undefined8 *)puVar3);
      if ((uVar5 & 1) == 0) goto LAB_0177d3f8;
      if (unaff_x25 == 0) {
LAB_0177d6f4:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar9 = *(uint *)(unaff_x25 + 0x10);
      if (uVar2 <= uVar9) goto LAB_0177d6c0;
      unaff_w29 = (uint)*(ushort *)(in_stack_00000030 + (long)(int)uVar9 * 2);
      uVar10 = 0;
    }
    else {
LAB_0177d3f8:
      uVar9 = 0;
LAB_0177d404:
      uVar10 = 1;
    }
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar12 = unaff_w29 - 0x30;
    if (uVar12 < 10) {
      uStack0000000000000014 = uVar10;
      if (unaff_w29 != 0x30) {
LAB_0177d460:
        uVar10 = uVar9 + 1;
        uVar5 = (ulong)(int)uVar12;
        iVar13 = -0x12;
        do {
          if (uVar2 <= uVar10) goto LAB_0177d58c;
          uVar1 = *(ushort *)(in_stack_00000030 + (long)(int)(uVar9 + iVar13 + 0x13) * 2);
          uVar11 = (ulong)uVar1;
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (9 < uVar1 - 0x30) {
            uVar10 = uVar9 + iVar13 + 0x13;
            goto LAB_0177d5bc;
          }
          uVar10 = uVar9 + iVar13 + 0x14;
          bVar4 = iVar13 != -1;
          iVar13 = iVar13 + 1;
          uVar5 = (uVar11 + uVar5 * 10) - 0x30;
        } while (bVar4);
        if (uVar10 < uVar2) {
          uVar1 = *(ushort *)(in_stack_00000030 + (long)(int)(uVar9 + 0x13) * 2);
          uVar11 = (ulong)uVar1;
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar10 = uVar9 + 0x13;
          if (9 < uVar1 - 0x30) {
LAB_0177d5bc:
            uVar9 = uVar10;
            bVar4 = false;
            uVar10 = (uint)uVar11;
            goto LAB_0177d5d0;
          }
          uVar9 = uVar9 + 0x14;
          if ((0x1999999999999999 < uVar5) ||
             ((bVar4 = false, uVar5 == 0x1999999999999999 && (0x35 < uVar1)))) {
            bVar4 = true;
          }
          uVar5 = (uVar11 + uVar5 * 10) - 0x30;
          if (uVar2 <= uVar9) goto LAB_0177d690;
          do {
            uVar1 = *(ushort *)(in_stack_00000030 + (long)(int)uVar9 * 2);
            uVar10 = (uint)uVar1;
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (9 < uVar1 - 0x30) goto LAB_0177d5d0;
            uVar9 = uVar9 + 1;
            bVar4 = true;
          } while (uVar2 != uVar9);
        }
        else {
LAB_0177d58c:
          if ((uStack0000000000000014 & 1) != 0 || uVar5 == 0) {
LAB_0177d5a8:
            uVar6 = 1;
            goto LAB_0177d6c8;
          }
        }
LAB_0177d694:
        uVar5 = 0;
        uVar6 = 0;
        *in_stack_00000018 = 1;
        goto LAB_0177d6c8;
      }
      do {
        uVar9 = uVar9 + 1;
        if (uVar2 <= uVar9) {
          uVar5 = 0;
          goto LAB_0177d5a8;
        }
        uVar1 = *(ushort *)(in_stack_00000030 + (long)(int)uVar9 * 2);
        uVar10 = (uint)uVar1;
        uVar12 = uVar1 - 0x30;
      } while (uVar12 == 0);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (uVar12 < 10) goto LAB_0177d460;
      uVar5 = 0;
      bVar4 = false;
LAB_0177d5d0:
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if ((uVar10 - 9 < 5) || (uVar10 == 0x20)) {
        if ((unaff_w23 >> 1 & 1) != 0) {
          uVar9 = uVar9 + 1;
          if ((int)uVar9 < (int)uVar2) {
            puVar8 = (ushort *)(in_stack_00000030 + (long)(int)uVar9 * 2);
            do {
              if (uVar2 <= uVar9) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              uVar1 = *puVar8;
              if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0177d64c;
              uVar9 = uVar9 + 1;
              puVar8 = puVar8 + 1;
            } while (uVar2 != uVar9);
          }
          else {
LAB_0177d64c:
            if (uVar9 < uVar2) goto LAB_0177d660;
          }
          goto LAB_0177d690;
        }
      }
      else {
LAB_0177d660:
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = FUN_0177dfe4(in_stack_00000030,uVar2,uVar9);
        if ((uVar11 & 1) != 0) {
LAB_0177d690:
          if (!bVar4) goto LAB_0177d58c;
          goto LAB_0177d694;
        }
      }
    }
  }
LAB_0177d6c0:
  uVar5 = 0;
  uVar6 = 0;
LAB_0177d6c8:
  *unaff_x19 = uVar5;
  return uVar6;
}


