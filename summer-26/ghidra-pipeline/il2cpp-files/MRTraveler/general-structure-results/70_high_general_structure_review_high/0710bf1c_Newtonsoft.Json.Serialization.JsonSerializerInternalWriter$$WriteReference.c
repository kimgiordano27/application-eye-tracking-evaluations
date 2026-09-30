/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteReference
ENTRY_POINT: 0710bf1c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteReference(void)

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
  ulong uVar10;
  long lVar11;
  ushort *puVar12;
  long unaff_x21;
  uint unaff_w22;
  uint uVar13;
  uint uVar14;
  ulong unaff_x23;
  uint uVar15;
  uint uVar16;
  long unaff_x25;
  uint uVar17;
  long *unaff_x26;
  undefined1 *unaff_x27;
  uint unaff_w28;
  uint uStack000000000000001c;
  
  thunk_FUN_03cd7500();
  uVar13 = (uint)unaff_x23;
  if ((unaff_w28 - 9 < 5) || (unaff_w28 == 0x20)) {
    if (1 < uVar13) {
      uVar15 = 1;
      do {
        unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)uVar15 * 2);
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        if ((4 < unaff_w28 - 9) && (unaff_w28 != 0x20)) goto LAB_0710bef8;
        uVar15 = uVar15 + 1;
      } while (uVar13 != uVar15);
    }
    goto LAB_0710c3e4;
  }
  uVar15 = 0;
LAB_0710bef8:
  uVar10 = unaff_x23 >> 0x20;
  if ((unaff_w22 >> 2 & 1) == 0) goto LAB_0710bf00;
  if (unaff_x25 == 0) goto LAB_0710c428;
  lVar1 = *(long *)(unaff_x25 + 0x28);
  lVar2 = *(long *)(unaff_x25 + 0x30);
  uVar6 = thunk_FUN_06f73d88(lVar1,*(undefined8 *)PTR_DAT_08e6a6c0,0);
  if (((uVar6 & 1) == 0) ||
     (uVar6 = thunk_FUN_06f73d88(lVar2,*(undefined8 *)PTR_DAT_08e6a6c8,0), (uVar6 & 1) == 0)) {
    lVar11 = *(long *)PTR_DAT_08ea1de0;
    if (uVar13 < uVar15) {
      FUN_07122110(0);
    }
    if ((*(byte *)(*(long *)(lVar11 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
    uVar13 = uVar13 - uVar15;
    unaff_x23 = (ulong)uVar13;
    unaff_x21 = unaff_x21 + (long)(int)uVar15 * 2;
    uVar10 = FUN_06f74e14(lVar1,0);
    if ((uVar10 & 1) == 0) {
      if (DAT_0941218d == '\0') {
        FUN_03c8f898(PTR_DAT_08e83798);
        DAT_0941218d = '\x01';
      }
      if (lVar1 == 0) {
        uVar7 = 0;
        uVar8 = 0;
      }
      else {
        uVar7 = System_Convert__ToInt16(lVar1,0);
        uVar8 = *(undefined4 *)(lVar1 + 0x10);
      }
      uVar10 = FUN_0710f8c0(unaff_x21,unaff_x23,uVar7,uVar8,*(undefined8 *)PTR_DAT_08ea5770);
      if ((uVar10 & 1) == 0) goto LAB_0710c0a8;
      if (lVar1 == 0) goto LAB_0710c428;
      uVar15 = *(uint *)(lVar1 + 0x10);
      if (uVar13 <= uVar15) goto LAB_0710c3e4;
      unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)uVar15 * 2);
    }
    else {
LAB_0710c0a8:
      uVar10 = FUN_06f74e14(lVar2,0);
      if ((uVar10 & 1) == 0) {
        if (DAT_0941218d == '\0') {
          FUN_03c8f898(PTR_DAT_08e83798);
          DAT_0941218d = '\x01';
        }
        if (lVar2 == 0) {
          uVar7 = 0;
          uVar8 = 0;
        }
        else {
          uVar7 = System_Convert__ToInt16(lVar2,0);
          uVar8 = *(undefined4 *)(lVar2 + 0x10);
        }
        uVar10 = FUN_0710f8c0(unaff_x21,unaff_x23,uVar7,uVar8,*(undefined8 *)PTR_DAT_08ea5770);
        if ((uVar10 & 1) != 0) {
          if (lVar2 == 0) {
LAB_0710c428:
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          uVar15 = *(uint *)(lVar2 + 0x10);
          if (uVar13 <= uVar15) goto LAB_0710c3e4;
          unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)uVar15 * 2);
          uVar10 = 0;
          uVar13 = 0;
          goto LAB_0710c148;
        }
      }
      uVar15 = 0;
    }
    uVar10 = 0;
    uVar13 = 1;
LAB_0710c148:
    puVar4 = PTR_DAT_08ea1b30;
    if (*(int *)(*(long *)PTR_DAT_08ea1b30 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar17 = unaff_w28 - 0x30;
    if (uVar17 < 10) {
      uVar14 = (uint)unaff_x23;
      uStack000000000000001c = uVar13;
      if (unaff_w28 != 0x30) {
LAB_0710c1a8:
        uVar13 = uVar15 + 1;
        uVar16 = uVar15 + 9;
        iVar9 = -8;
        do {
          if (uVar14 <= uVar13) goto LAB_0710c3c8;
          uVar3 = *(ushort *)(unaff_x21 + (long)(int)(uVar15 + iVar9 + 9) * 2);
          uVar13 = (uint)uVar3;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          if (9 < uVar3 - 0x30) {
            bVar5 = false;
            uVar16 = uVar15 + iVar9 + 9;
            goto LAB_0710c304;
          }
          uVar13 = uVar15 + iVar9 + 10;
          bVar5 = iVar9 != -1;
          iVar9 = iVar9 + 1;
          uVar17 = ((uint)uVar3 + uVar17 * 10) - 0x30;
        } while (bVar5);
        if (uVar13 < uVar14) {
          uVar3 = *(ushort *)(unaff_x21 + (long)(int)uVar16 * 2);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          uVar13 = uVar3 - 0x30;
          if (9 < uVar13) goto LAB_0710c300;
          uVar16 = uVar15 + 10;
          if ((0x19999999 < uVar17) || ((bVar5 = false, uVar17 == 0x19999999 && (0x35 < uVar3)))) {
            bVar5 = true;
          }
          uVar17 = uVar13 + uVar17 * 10;
          if (uVar14 <= uVar16) goto LAB_0710c3c4;
          do {
            uVar3 = *(ushort *)(unaff_x21 + (long)(int)uVar16 * 2);
            uVar13 = (uint)uVar3;
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            if (9 < uVar3 - 0x30) goto LAB_0710c304;
            uVar16 = uVar16 + 1;
            bVar5 = true;
          } while (uVar14 != uVar16);
        }
        else {
LAB_0710c3c8:
          if ((uStack000000000000001c & 1) != 0 || uVar17 == 0) {
LAB_0710c3dc:
            uVar7 = 1;
            goto LAB_0710c3ec;
          }
        }
LAB_0710c410:
        uVar17 = 0;
        uVar7 = 0;
        *unaff_x27 = 1;
        goto LAB_0710c3ec;
      }
      do {
        uVar15 = uVar15 + 1;
        if (uVar14 <= uVar15) {
          uVar17 = 0;
          goto LAB_0710c3dc;
        }
        uVar3 = *(ushort *)(unaff_x21 + (long)(int)uVar15 * 2);
        uVar17 = uVar3 - 0x30;
      } while (uVar17 == 0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if (uVar17 < 10) goto LAB_0710c1a8;
      uVar17 = 0;
      uVar16 = uVar15;
LAB_0710c300:
      uVar13 = (uint)uVar3;
      bVar5 = false;
LAB_0710c304:
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if ((uVar13 - 9 < 5) || (uVar13 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar16 = uVar16 + 1;
          if ((int)uVar16 < (int)uVar14) {
            puVar12 = (ushort *)(unaff_x21 + (long)(int)uVar16 * 2);
            do {
              if (uVar14 <= uVar16) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb38();
              }
              uVar3 = *puVar12;
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_0710c380;
              uVar16 = uVar16 + 1;
              puVar12 = puVar12 + 1;
            } while (uVar14 != uVar16);
          }
          else {
LAB_0710c380:
            if (uVar16 < uVar14) goto LAB_0710c394;
          }
          goto LAB_0710c3c4;
        }
      }
      else {
LAB_0710c394:
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar10 = FUN_0710d4b8(unaff_x21,unaff_x23 & 0xffffffff | uVar10 << 0x20,uVar16);
        if ((uVar10 & 1) != 0) {
LAB_0710c3c4:
          if (!bVar5) goto LAB_0710c3c8;
          goto LAB_0710c410;
        }
      }
    }
  }
  else {
    if (unaff_w28 != 0x2d) {
      if (unaff_w28 == 0x2b) {
        uVar15 = uVar15 + 1;
        if (uVar13 <= uVar15) goto LAB_0710c3e4;
        unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)uVar15 * 2);
      }
LAB_0710bf00:
      uVar13 = 1;
      goto LAB_0710c148;
    }
    uVar15 = uVar15 + 1;
    if (uVar15 < uVar13) {
      unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)uVar15 * 2);
      uVar13 = 0;
      goto LAB_0710c148;
    }
  }
LAB_0710c3e4:
  uVar17 = 0;
  uVar7 = 0;
LAB_0710c3ec:
  *unaff_x19 = uVar17;
  return uVar7;
}


