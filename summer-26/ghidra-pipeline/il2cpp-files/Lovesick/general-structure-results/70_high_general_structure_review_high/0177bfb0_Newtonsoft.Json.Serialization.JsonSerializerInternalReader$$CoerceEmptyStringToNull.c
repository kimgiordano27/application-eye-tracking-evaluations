/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CoerceEmptyStringToNull
ENTRY_POINT: 0177bfb0
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
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CoerceEmptyStringToNull(ulong param_1)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x19;
  uint uVar8;
  ulong uVar9;
  ushort *puVar10;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  uint uVar11;
  int iVar12;
  long unaff_x25;
  uint uVar13;
  long unaff_x26;
  int iVar14;
  long *unaff_x28;
  uint unaff_w29;
  undefined1 *in_stack_00000010;
  
  if ((param_1 & 1) == 0) {
    if (DAT_03776618 == '\0') {
      thunk_FUN_00d48444(PTR_DAT_033ee010);
      DAT_03776618 = '\x01';
    }
    if (unaff_x26 != 0) {
      FUN_015fd038();
    }
    uVar5 = FUN_00be4a10();
    if ((uVar5 & 1) == 0) goto LAB_0177c03c;
    if (unaff_x26 == 0) goto LAB_0177c3c4;
    uVar11 = *(uint *)(unaff_x26 + 0x10);
    if (uVar11 < unaff_w21) {
      unaff_w29 = (uint)*(ushort *)(unaff_x22 + (long)(int)uVar11 * 2);
      goto LAB_0177c0d8;
    }
  }
  else {
LAB_0177c03c:
    uVar5 = FUN_015ff8a0();
    if ((uVar5 & 1) == 0) {
      if (DAT_03776618 == '\0') {
        thunk_FUN_00d48444(PTR_DAT_033ee010);
        DAT_03776618 = '\x01';
      }
      if (unaff_x25 != 0) {
        FUN_015fd038();
      }
      uVar5 = FUN_00be4a10();
      if ((uVar5 & 1) == 0) goto LAB_0177c0d0;
      if (unaff_x25 == 0) {
LAB_0177c3c4:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar11 = *(uint *)(unaff_x25 + 0x10);
      if (unaff_w21 <= uVar11) goto LAB_0177c384;
      unaff_w29 = (uint)*(ushort *)(unaff_x22 + (long)(int)uVar11 * 2);
      iVar12 = -1;
    }
    else {
LAB_0177c0d0:
      uVar11 = 0;
LAB_0177c0d8:
      iVar12 = 1;
    }
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar13 = unaff_w29 - 0x30;
    if (uVar13 < 10) {
      if (unaff_w29 != 0x30) {
LAB_0177c130:
        uVar8 = uVar11 + 1;
        uVar5 = (ulong)(int)uVar13;
        iVar14 = -0x11;
        do {
          if (unaff_w21 <= uVar8) goto LAB_0177c270;
          uVar3 = *(ushort *)(unaff_x22 + (long)(int)(uVar11 + iVar14 + 0x12) * 2);
          uVar9 = (ulong)uVar3;
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (9 < uVar3 - 0x30) {
            uVar13 = uVar11 + iVar14 + 0x12;
            goto LAB_0177c28c;
          }
          uVar8 = uVar11 + iVar14 + 0x13;
          bVar4 = iVar14 != -1;
          iVar14 = iVar14 + 1;
          uVar5 = (uVar9 + uVar5 * 10) - 0x30;
        } while (bVar4);
        if (unaff_w21 <= uVar8) {
LAB_0177c270:
          lVar7 = uVar5 * (long)iVar12;
          uVar6 = 1;
          goto LAB_0177c38c;
        }
        uVar3 = *(ushort *)(unaff_x22 + (long)(int)(uVar11 + 0x12) * 2);
        uVar9 = (ulong)uVar3;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar13 = uVar11 + 0x12;
        if (9 < uVar3 - 0x30) {
LAB_0177c28c:
          uVar11 = uVar13;
          bVar4 = false;
          uVar8 = (uint)uVar9;
          goto LAB_0177c29c;
        }
        bVar2 = 0xccccccccccccccc < (long)uVar5;
        iVar14 = 2 - iVar12;
        if (-1 < 1 - iVar12) {
          iVar14 = 1 - iVar12;
        }
        uVar11 = uVar11 + 0x13;
        uVar5 = (uVar9 + uVar5 * 10) - 0x30;
        bVar1 = (long)(iVar14 >> 1) + 0x7fffffffffffffffU < uVar5;
        bVar4 = bVar2 || bVar1;
        if (uVar11 < unaff_w21) {
          do {
            uVar3 = *(ushort *)(unaff_x22 + (long)(int)uVar11 * 2);
            uVar8 = (uint)uVar3;
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (9 < uVar3 - 0x30) goto LAB_0177c29c;
            uVar11 = uVar11 + 1;
            bVar4 = true;
          } while (unaff_w21 != uVar11);
        }
        else if (!bVar2 && !bVar1) goto LAB_0177c270;
LAB_0177c35c:
        lVar7 = 0;
        uVar6 = 0;
        *in_stack_00000010 = 1;
        goto LAB_0177c38c;
      }
      do {
        uVar11 = uVar11 + 1;
        if (unaff_w21 <= uVar11) {
          uVar5 = 0;
          goto LAB_0177c270;
        }
        uVar3 = *(ushort *)(unaff_x22 + (long)(int)uVar11 * 2);
        uVar8 = (uint)uVar3;
        uVar13 = uVar3 - 0x30;
      } while (uVar13 == 0);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (uVar13 < 10) goto LAB_0177c130;
      uVar5 = 0;
      bVar4 = false;
LAB_0177c29c:
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if ((uVar8 - 9 < 5) || (uVar8 == 0x20)) {
        if ((unaff_w23 >> 1 & 1) != 0) {
          uVar11 = uVar11 + 1;
          if ((int)uVar11 < (int)unaff_w21) {
            puVar10 = (ushort *)(unaff_x22 + (long)(int)uVar11 * 2);
            do {
              if (unaff_w21 <= uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              uVar3 = *puVar10;
              if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_0177c310;
              uVar11 = uVar11 + 1;
              puVar10 = puVar10 + 1;
            } while (unaff_w21 != uVar11);
          }
          else {
LAB_0177c310:
            if (uVar11 < unaff_w21) goto LAB_0177c324;
          }
          goto LAB_0177c354;
        }
      }
      else {
LAB_0177c324:
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_0177dfe4();
        if ((uVar9 & 1) != 0) {
LAB_0177c354:
          if (!bVar4) goto LAB_0177c270;
          goto LAB_0177c35c;
        }
      }
    }
  }
LAB_0177c384:
  lVar7 = 0;
  uVar6 = 0;
LAB_0177c38c:
  *unaff_x19 = lVar7;
  return uVar6;
}


