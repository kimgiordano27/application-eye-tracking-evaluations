/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$OnDeserialized
ENTRY_POINT: 0560cdc0
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserialized(void)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  undefined *puVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  uint *unaff_x19;
  int iVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  ushort *puVar12;
  ushort *unaff_x21;
  uint unaff_w22;
  uint uVar13;
  uint uVar14;
  ulong unaff_x23;
  uint uVar15;
  long unaff_x25;
  uint uVar16;
  undefined1 *unaff_x27;
  uint uVar17;
  uint uStack000000000000001c;
  
  FUN_02f07e70(PTR_DAT_06d0b478);
  *(undefined1 *)(unaff_x20 + 0xce2) = 1;
  puVar4 = PTR_DAT_06d4e298;
  uVar13 = (uint)unaff_x23;
  if (uVar13 == 0) goto LAB_0560d2d0;
  uVar3 = *unaff_x21;
  if ((unaff_w22 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_06d4e298 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    if ((uVar3 - 9 < 5) || (uVar3 == 0x20)) {
      if (1 < uVar13) {
        uVar15 = 1;
        do {
          uVar3 = unaff_x21[(int)uVar15];
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_0560cde4;
          uVar15 = uVar15 + 1;
        } while (uVar13 != uVar15);
      }
      goto LAB_0560d2d0;
    }
  }
  uVar15 = 0;
LAB_0560cde4:
  uVar17 = (uint)uVar3;
  uVar10 = unaff_x23 >> 0x20;
  if ((unaff_w22 >> 2 & 1) == 0) goto LAB_0560cdec;
  if (unaff_x25 == 0) goto LAB_0560d314;
  lVar1 = *(long *)(unaff_x25 + 0x28);
  lVar2 = *(long *)(unaff_x25 + 0x30);
  uVar6 = thunk_FUN_05464b70(lVar1,*(undefined8 *)PTR_DAT_06d0e068,0);
  if (((uVar6 & 1) == 0) ||
     (uVar6 = thunk_FUN_05464b70(lVar2,*(undefined8 *)PTR_DAT_06d0b478,0), (uVar6 & 1) == 0)) {
    lVar11 = *(long *)PTR_DAT_06d18920;
    if (uVar13 < uVar15) {
      FUN_0562295c(0);
    }
    if ((*(byte *)(*(long *)(lVar11 + 0x20) + 0x135) & 1) == 0) {
      FUN_02eea768();
    }
    uVar13 = uVar13 - uVar15;
    unaff_x23 = (ulong)uVar13;
    unaff_x21 = unaff_x21 + (int)uVar15;
    uVar10 = FUN_05465718(lVar1,0);
    if ((uVar10 & 1) == 0) {
      if (DAT_071bcab6 == '\0') {
        FUN_02f07e70(PTR_DAT_06d18938);
        DAT_071bcab6 = '\x01';
      }
      if (lVar1 == 0) {
        uVar7 = 0;
        uVar8 = 0;
      }
      else {
        uVar7 = FUN_0546365c(lVar1,0);
        uVar8 = *(undefined4 *)(lVar1 + 0x10);
      }
      uVar10 = FUN_03396bb4(unaff_x21,unaff_x23,uVar7,uVar8,*(undefined8 *)PTR_DAT_06d18918);
      if ((uVar10 & 1) == 0) goto LAB_0560cf94;
      if (lVar1 == 0) goto LAB_0560d314;
      uVar15 = *(uint *)(lVar1 + 0x10);
      if (uVar13 <= uVar15) goto LAB_0560d2d0;
      uVar17 = (uint)unaff_x21[(int)uVar15];
    }
    else {
LAB_0560cf94:
      uVar10 = FUN_05465718(lVar2,0);
      if ((uVar10 & 1) == 0) {
        if (DAT_071bcab6 == '\0') {
          FUN_02f07e70(PTR_DAT_06d18938);
          DAT_071bcab6 = '\x01';
        }
        if (lVar2 == 0) {
          uVar7 = 0;
          uVar8 = 0;
        }
        else {
          uVar7 = FUN_0546365c(lVar2,0);
          uVar8 = *(undefined4 *)(lVar2 + 0x10);
        }
        uVar10 = FUN_03396bb4(unaff_x21,unaff_x23,uVar7,uVar8,*(undefined8 *)PTR_DAT_06d18918);
        if ((uVar10 & 1) != 0) {
          if (lVar2 == 0) {
LAB_0560d314:
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          uVar15 = *(uint *)(lVar2 + 0x10);
          if (uVar13 <= uVar15) goto LAB_0560d2d0;
          uVar17 = (uint)unaff_x21[(int)uVar15];
          uVar10 = 0;
          uVar13 = 0;
          goto LAB_0560d034;
        }
      }
      uVar15 = 0;
    }
    uVar10 = 0;
    uVar13 = 1;
LAB_0560d034:
    puVar4 = PTR_DAT_06d4e298;
    if (*(int *)(*(long *)PTR_DAT_06d4e298 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar16 = uVar17 - 0x30;
    if (uVar16 < 10) {
      uVar14 = (uint)unaff_x23;
      uStack000000000000001c = uVar13;
      if (uVar17 != 0x30) {
LAB_0560d094:
        uVar13 = uVar15 + 1;
        uVar17 = uVar15 + 9;
        iVar9 = -8;
        do {
          if (uVar14 <= uVar13) goto LAB_0560d2b4;
          uVar3 = unaff_x21[(int)(uVar15 + iVar9 + 9)];
          uVar13 = (uint)uVar3;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          if (9 < uVar3 - 0x30) {
            bVar5 = false;
            uVar17 = uVar15 + iVar9 + 9;
            goto LAB_0560d1f0;
          }
          uVar13 = uVar15 + iVar9 + 10;
          bVar5 = iVar9 != -1;
          iVar9 = iVar9 + 1;
          uVar16 = ((uint)uVar3 + uVar16 * 10) - 0x30;
        } while (bVar5);
        if (uVar13 < uVar14) {
          uVar3 = unaff_x21[(int)uVar17];
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar13 = uVar3 - 0x30;
          if (9 < uVar13) goto LAB_0560d1ec;
          uVar17 = uVar15 + 10;
          if ((0x19999999 < uVar16) || ((bVar5 = false, uVar16 == 0x19999999 && (0x35 < uVar3)))) {
            bVar5 = true;
          }
          uVar16 = uVar13 + uVar16 * 10;
          if (uVar14 <= uVar17) goto LAB_0560d2b0;
          do {
            uVar3 = unaff_x21[(int)uVar17];
            uVar13 = (uint)uVar3;
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            if (9 < uVar3 - 0x30) goto LAB_0560d1f0;
            uVar17 = uVar17 + 1;
            bVar5 = true;
          } while (uVar14 != uVar17);
        }
        else {
LAB_0560d2b4:
          if ((uStack000000000000001c & 1) != 0 || uVar16 == 0) {
LAB_0560d2c8:
            uVar7 = 1;
            goto LAB_0560d2d8;
          }
        }
LAB_0560d2fc:
        uVar16 = 0;
        uVar7 = 0;
        *unaff_x27 = 1;
        goto LAB_0560d2d8;
      }
      do {
        uVar15 = uVar15 + 1;
        if (uVar14 <= uVar15) {
          uVar16 = 0;
          goto LAB_0560d2c8;
        }
        uVar3 = unaff_x21[(int)uVar15];
        uVar16 = uVar3 - 0x30;
      } while (uVar16 == 0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      if (uVar16 < 10) goto LAB_0560d094;
      uVar16 = 0;
      uVar17 = uVar15;
LAB_0560d1ec:
      uVar13 = (uint)uVar3;
      bVar5 = false;
LAB_0560d1f0:
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      if ((uVar13 - 9 < 5) || (uVar13 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar17 = uVar17 + 1;
          if ((int)uVar17 < (int)uVar14) {
            puVar12 = unaff_x21 + (int)uVar17;
            do {
              if (uVar14 <= uVar17) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              uVar3 = *puVar12;
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_0560d26c;
              uVar17 = uVar17 + 1;
              puVar12 = puVar12 + 1;
            } while (uVar14 != uVar17);
          }
          else {
LAB_0560d26c:
            if (uVar17 < uVar14) goto LAB_0560d280;
          }
          goto LAB_0560d2b0;
        }
      }
      else {
LAB_0560d280:
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar10 = FUN_0560e3a4(unaff_x21,unaff_x23 & 0xffffffff | uVar10 << 0x20,uVar17);
        if ((uVar10 & 1) != 0) {
LAB_0560d2b0:
          if (!bVar5) goto LAB_0560d2b4;
          goto LAB_0560d2fc;
        }
      }
    }
  }
  else {
    if (uVar17 != 0x2d) {
      if (uVar17 == 0x2b) {
        uVar15 = uVar15 + 1;
        if (uVar13 <= uVar15) goto LAB_0560d2d0;
        uVar17 = (uint)unaff_x21[(int)uVar15];
      }
LAB_0560cdec:
      uVar13 = 1;
      goto LAB_0560d034;
    }
    uVar15 = uVar15 + 1;
    if (uVar15 < uVar13) {
      uVar17 = (uint)unaff_x21[(int)uVar15];
      uVar13 = 0;
      goto LAB_0560d034;
    }
  }
LAB_0560d2d0:
  uVar16 = 0;
  uVar7 = 0;
LAB_0560d2d8:
  *unaff_x19 = uVar16;
  return uVar7;
}


