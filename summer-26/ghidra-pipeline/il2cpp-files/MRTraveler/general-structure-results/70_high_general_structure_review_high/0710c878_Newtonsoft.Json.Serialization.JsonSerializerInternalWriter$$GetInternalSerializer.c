/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetInternalSerializer
ENTRY_POINT: 0710c878
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_19;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetInternalSerializer(void)

{
  ushort uVar1;
  bool bVar2;
  undefined *puVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *unaff_x19;
  uint uVar7;
  long unaff_x21;
  uint unaff_w22;
  ushort *puVar8;
  uint unaff_w23;
  uint uVar9;
  uint uVar10;
  int iVar11;
  long unaff_x25;
  ulong uVar12;
  undefined1 *unaff_x27;
  uint unaff_w28;
  
  uVar5 = FUN_0710f8c0();
  puVar3 = PTR_DAT_08ea1b30;
  if ((uVar5 & 1) == 0) {
    uVar9 = 0;
    bVar2 = true;
LAB_0710c8cc:
    if (*(int *)(*(long *)PTR_DAT_08ea1b30 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar10 = unaff_w28 - 0x30;
    if (uVar10 < 10) {
      if (unaff_w28 != 0x30) {
LAB_0710c928:
        uVar7 = uVar9 + 1;
        uVar5 = (ulong)uVar10;
        uVar10 = uVar9 + 0x13;
        iVar11 = -0x12;
        do {
          if (unaff_w23 <= uVar7) goto LAB_0710cba8;
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)(uVar9 + iVar11 + 0x13) * 2);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          uVar7 = (uint)uVar1;
          if (9 < uVar7 - 0x30) {
            bVar4 = false;
            uVar10 = uVar9 + iVar11 + 0x13;
            goto LAB_0710caac;
          }
          uVar7 = uVar9 + iVar11 + 0x14;
          bVar4 = iVar11 != -1;
          iVar11 = iVar11 + 1;
          uVar5 = ((ulong)uVar1 + uVar5 * 10) - 0x30;
        } while (bVar4);
        if (uVar7 < unaff_w23) {
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
          uVar12 = (ulong)uVar1;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          if (9 < uVar1 - 0x30) goto LAB_0710caa8;
          uVar10 = uVar9 + 0x14;
          if ((0x1999999999999999 < uVar5) ||
             ((bVar4 = false, uVar5 == 0x1999999999999999 && (0x35 < uVar1)))) {
            bVar4 = true;
          }
          uVar5 = (uVar12 + uVar5 * 10) - 0x30;
          if (unaff_w23 <= uVar10) goto LAB_0710cba4;
          do {
            uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
            uVar7 = (uint)uVar1;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            if (9 < uVar1 - 0x30) goto LAB_0710caac;
            uVar10 = uVar10 + 1;
            bVar4 = true;
          } while (unaff_w23 != uVar10);
        }
        else {
LAB_0710cba8:
          if (bVar2 || uVar5 == 0) {
LAB_0710cbb8:
            uVar6 = 1;
            goto LAB_0710cb7c;
          }
        }
LAB_0710cbc0:
        uVar5 = 0;
        uVar6 = 0;
        *unaff_x27 = 1;
        goto LAB_0710cb7c;
      }
      do {
        uVar9 = uVar9 + 1;
        if (unaff_w23 <= uVar9) {
          uVar5 = 0;
          goto LAB_0710cbb8;
        }
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
        uVar12 = (ulong)uVar1;
        uVar10 = uVar1 - 0x30;
      } while (uVar10 == 0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if (uVar10 < 10) goto LAB_0710c928;
      uVar5 = 0;
      uVar10 = uVar9;
LAB_0710caa8:
      uVar7 = (uint)uVar12;
      bVar4 = false;
LAB_0710caac:
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if ((uVar7 - 9 < 5) || (uVar7 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar10 = uVar10 + 1;
          if ((int)uVar10 < (int)unaff_w23) {
            puVar8 = (ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
            do {
              if (unaff_w23 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb38();
              }
              uVar1 = *puVar8;
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0710cb28;
              uVar10 = uVar10 + 1;
              puVar8 = puVar8 + 1;
            } while (unaff_w23 != uVar10);
          }
          else {
LAB_0710cb28:
            if (uVar10 < unaff_w23) goto LAB_0710cb3c;
          }
          goto LAB_0710cba4;
        }
      }
      else {
LAB_0710cb3c:
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar12 = FUN_0710d4b8();
        if ((uVar12 & 1) != 0) {
LAB_0710cba4:
          if (!bVar4) goto LAB_0710cba8;
          goto LAB_0710cbc0;
        }
      }
    }
  }
  else {
    if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar9 = *(uint *)(unaff_x25 + 0x10);
    if (uVar9 < unaff_w23) {
      unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
      bVar2 = false;
      goto LAB_0710c8cc;
    }
  }
  uVar5 = 0;
  uVar6 = 0;
LAB_0710cb7c:
  *unaff_x19 = uVar5;
  return uVar6;
}


