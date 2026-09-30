/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ThrowUnexpectedEndException
ENTRY_POINT: 0560cfec
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ThrowUnexpectedEndException(void)

{
  ushort uVar1;
  undefined *puVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint *unaff_x19;
  int iVar6;
  ushort *puVar7;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long unaff_x25;
  uint uVar11;
  undefined1 *unaff_x27;
  uint unaff_w28;
  uint uStack000000000000001c;
  
  uVar4 = FUN_03396bb4();
  puVar2 = PTR_DAT_06d4e298;
  if ((uVar4 & 1) == 0) {
    uVar8 = 0;
    uVar10 = 1;
LAB_0560d034:
    if (*(int *)(*(long *)PTR_DAT_06d4e298 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar11 = unaff_w28 - 0x30;
    if (uVar11 < 10) {
      uStack000000000000001c = uVar10;
      if (unaff_w28 != 0x30) {
LAB_0560d094:
        uVar10 = uVar8 + 1;
        uVar9 = uVar8 + 9;
        iVar6 = -8;
        do {
          if (unaff_w23 <= uVar10) goto LAB_0560d2b4;
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)(uVar8 + iVar6 + 9) * 2);
          uVar10 = (uint)uVar1;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          if (9 < uVar1 - 0x30) {
            bVar3 = false;
            uVar9 = uVar8 + iVar6 + 9;
            goto LAB_0560d1f0;
          }
          uVar10 = uVar8 + iVar6 + 10;
          bVar3 = iVar6 != -1;
          iVar6 = iVar6 + 1;
          uVar11 = ((uint)uVar1 + uVar11 * 10) - 0x30;
        } while (bVar3);
        if (uVar10 < unaff_w23) {
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar10 = uVar1 - 0x30;
          if (9 < uVar10) goto LAB_0560d1ec;
          uVar9 = uVar8 + 10;
          if ((0x19999999 < uVar11) || ((bVar3 = false, uVar11 == 0x19999999 && (0x35 < uVar1)))) {
            bVar3 = true;
          }
          uVar11 = uVar10 + uVar11 * 10;
          if (unaff_w23 <= uVar9) goto LAB_0560d2b0;
          do {
            uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
            uVar10 = (uint)uVar1;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            if (9 < uVar1 - 0x30) goto LAB_0560d1f0;
            uVar9 = uVar9 + 1;
            bVar3 = true;
          } while (unaff_w23 != uVar9);
        }
        else {
LAB_0560d2b4:
          if ((uStack000000000000001c & 1) != 0 || uVar11 == 0) {
LAB_0560d2c8:
            uVar5 = 1;
            goto LAB_0560d2d8;
          }
        }
LAB_0560d2fc:
        uVar11 = 0;
        uVar5 = 0;
        *unaff_x27 = 1;
        goto LAB_0560d2d8;
      }
      do {
        uVar8 = uVar8 + 1;
        if (unaff_w23 <= uVar8) {
          uVar11 = 0;
          goto LAB_0560d2c8;
        }
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
        uVar11 = uVar1 - 0x30;
      } while (uVar11 == 0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      if (uVar11 < 10) goto LAB_0560d094;
      uVar11 = 0;
      uVar9 = uVar8;
LAB_0560d1ec:
      uVar10 = (uint)uVar1;
      bVar3 = false;
LAB_0560d1f0:
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      if ((uVar10 - 9 < 5) || (uVar10 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar9 = uVar9 + 1;
          if ((int)uVar9 < (int)unaff_w23) {
            puVar7 = (ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
            do {
              if (unaff_w23 <= uVar9) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              uVar1 = *puVar7;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0560d26c;
              uVar9 = uVar9 + 1;
              puVar7 = puVar7 + 1;
            } while (unaff_w23 != uVar9);
          }
          else {
LAB_0560d26c:
            if (uVar9 < unaff_w23) goto LAB_0560d280;
          }
          goto LAB_0560d2b0;
        }
      }
      else {
LAB_0560d280:
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar4 = FUN_0560e3a4();
        if ((uVar4 & 1) != 0) {
LAB_0560d2b0:
          if (!bVar3) goto LAB_0560d2b4;
          goto LAB_0560d2fc;
        }
      }
    }
  }
  else {
    if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar8 = *(uint *)(unaff_x25 + 0x10);
    if (uVar8 < unaff_w23) {
      unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
      uVar10 = 0;
      goto LAB_0560d034;
    }
  }
  uVar11 = 0;
  uVar5 = 0;
LAB_0560d2d8:
  *unaff_x19 = uVar11;
  return uVar5;
}


