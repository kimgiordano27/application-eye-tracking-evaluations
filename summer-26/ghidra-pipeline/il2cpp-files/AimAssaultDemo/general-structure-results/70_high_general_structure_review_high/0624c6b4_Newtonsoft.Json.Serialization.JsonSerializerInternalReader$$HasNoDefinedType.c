/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HasNoDefinedType
ENTRY_POINT: 0624c6b4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HasNoDefinedType(void)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  undefined *puVar5;
  bool in_CY;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  int *unaff_x19;
  ulong uVar11;
  long lVar12;
  ushort *puVar13;
  long unaff_x21;
  uint unaff_w22;
  uint uVar14;
  uint uVar15;
  ulong unaff_x23;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  long unaff_x25;
  long *unaff_x26;
  undefined1 *unaff_x27;
  uint unaff_w28;
  int iStack000000000000001c;
  
  uVar14 = (uint)unaff_x23;
  if ((!in_CY) || (unaff_w28 == 0x20)) {
    if (1 < uVar14) {
      uVar16 = 1;
      do {
        uVar3 = *(ushort *)(unaff_x21 + (long)(int)uVar16 * 2);
        unaff_w28 = (uint)uVar3;
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_0624c684;
        uVar16 = uVar16 + 1;
      } while (uVar14 != uVar16);
    }
    goto LAB_0624cb78;
  }
  uVar16 = 0;
LAB_0624c684:
  uVar11 = unaff_x23 >> 0x20;
  if ((unaff_w22 >> 2 & 1) == 0) goto LAB_0624c68c;
  if (unaff_x25 == 0) goto LAB_0624cbc0;
  lVar1 = *(long *)(unaff_x25 + 0x28);
  lVar2 = *(long *)(unaff_x25 + 0x30);
  uVar8 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                    (lVar1,*(undefined8 *)PTR_DAT_07d8a638,0);
  if (((uVar8 & 1) == 0) ||
     (uVar8 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                        (lVar2,*(undefined8 *)PTR_DAT_07d8ad30,0), (uVar8 & 1) == 0)) {
    lVar12 = *(long *)PTR_DAT_07dab0c0;
    if (uVar14 < uVar16) {
      FUN_062634c8(0);
    }
    if ((*(byte *)(*(long *)(lVar12 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    uVar14 = uVar14 - uVar16;
    unaff_x23 = (ulong)uVar14;
    unaff_x21 = unaff_x21 + (long)(int)uVar16 * 2;
    uVar11 = FUN_060c08a0(lVar1,0);
    if ((uVar11 & 1) == 0) {
      if (DAT_08255bd1 == '\0') {
        FUN_0373b518(PTR_DAT_07d98650);
        DAT_08255bd1 = '\x01';
      }
      if (lVar1 == 0) {
        uVar9 = 0;
        uVar10 = 0;
      }
      else {
        uVar9 = FUN_060be1d4(lVar1,0);
        uVar10 = *(undefined4 *)(lVar1 + 0x10);
      }
      uVar11 = FUN_06251640(unaff_x21,unaff_x23,uVar9,uVar10,*(undefined8 *)PTR_DAT_07daecc0);
      if ((uVar11 & 1) == 0) goto LAB_0624c838;
      if (lVar1 == 0) goto LAB_0624cbc0;
      uVar16 = *(uint *)(lVar1 + 0x10);
      if (uVar14 <= uVar16) goto LAB_0624cb78;
      unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)uVar16 * 2);
    }
    else {
LAB_0624c838:
      uVar11 = FUN_060c08a0(lVar2,0);
      if ((uVar11 & 1) == 0) {
        if (DAT_08255bd1 == '\0') {
          FUN_0373b518(PTR_DAT_07d98650);
          DAT_08255bd1 = '\x01';
        }
        if (lVar2 == 0) {
          uVar9 = 0;
          uVar10 = 0;
        }
        else {
          uVar9 = FUN_060be1d4(lVar2,0);
          uVar10 = *(undefined4 *)(lVar2 + 0x10);
        }
        uVar11 = FUN_06251640(unaff_x21,unaff_x23,uVar9,uVar10,*(undefined8 *)PTR_DAT_07daecc0);
        if ((uVar11 & 1) != 0) {
          if (lVar2 == 0) {
LAB_0624cbc0:
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar16 = *(uint *)(lVar2 + 0x10);
          if (uVar14 <= uVar16) goto LAB_0624cb78;
          unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)uVar16 * 2);
          uVar11 = 0;
          iVar18 = -1;
          goto LAB_0624c8d8;
        }
      }
      uVar16 = 0;
    }
    uVar11 = 0;
    iVar18 = 1;
LAB_0624c8d8:
    puVar5 = PTR_DAT_07daae20;
    if (*(int *)(*(long *)PTR_DAT_07daae20 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar14 = unaff_w28 - 0x30;
    if (uVar14 < 10) {
      uVar15 = (uint)unaff_x23;
      iStack000000000000001c = iVar18;
      if (unaff_w28 != 0x30) {
LAB_0624c938:
        uVar19 = uVar16 + 1;
        uVar17 = uVar16 + 9;
        iVar18 = -8;
        do {
          if (uVar15 <= uVar19) goto LAB_0624cbac;
          uVar3 = *(ushort *)(unaff_x21 + (long)(int)(uVar16 + iVar18 + 9) * 2);
          uVar19 = (uint)uVar3;
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          if (9 < uVar3 - 0x30) {
            bVar6 = false;
            uVar17 = uVar16 + iVar18 + 9;
            goto LAB_0624caa0;
          }
          uVar19 = uVar16 + iVar18 + 10;
          bVar6 = iVar18 != -1;
          iVar18 = iVar18 + 1;
          uVar4 = ((uint)uVar3 + uVar14 * 10) - 0x30;
          uVar14 = uVar4;
        } while (bVar6);
        if (uVar15 <= uVar19) {
LAB_0624cbac:
          uVar9 = 1;
          iStack000000000000001c = uVar14 * iStack000000000000001c;
          goto LAB_0624cb80;
        }
        uVar3 = *(ushort *)(unaff_x21 + (long)(int)uVar17 * 2);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        if (9 < uVar3 - 0x30) goto LAB_0624ca9c;
        uVar14 = (uVar3 - 0x30) + uVar4 * 10;
        uVar17 = uVar16 + 10;
        iVar18 = 2 - iStack000000000000001c;
        if (-1 < 1 - iStack000000000000001c) {
          iVar18 = 1 - iStack000000000000001c;
        }
        bVar7 = (ulong)(uint)(iVar18 >> 1) + 0x7fffffff < (ulong)uVar14;
        bVar6 = 0xccccccc < (int)uVar4 || bVar7;
        if (uVar17 < uVar15) {
          do {
            uVar3 = *(ushort *)(unaff_x21 + (long)(int)uVar17 * 2);
            uVar19 = (uint)uVar3;
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            if (9 < uVar3 - 0x30) goto LAB_0624caa0;
            uVar17 = uVar17 + 1;
            bVar6 = true;
          } while (uVar15 != uVar17);
        }
        else if (0xccccccc >= (int)uVar4 && !bVar7) goto LAB_0624cbac;
LAB_0624cb64:
        iStack000000000000001c = 0;
        uVar9 = 0;
        *unaff_x27 = 1;
        goto LAB_0624cb80;
      }
      do {
        uVar16 = uVar16 + 1;
        if (uVar15 <= uVar16) {
          uVar14 = 0;
          goto LAB_0624cbac;
        }
        uVar3 = *(ushort *)(unaff_x21 + (long)(int)uVar16 * 2);
        uVar14 = uVar3 - 0x30;
      } while (uVar14 == 0);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      if (uVar14 < 10) goto LAB_0624c938;
      uVar17 = uVar16;
      uVar14 = 0;
LAB_0624ca9c:
      uVar19 = (uint)uVar3;
      bVar6 = false;
LAB_0624caa0:
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      if ((uVar19 - 9 < 5) || (uVar19 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar17 = uVar17 + 1;
          if ((int)uVar17 < (int)uVar15) {
            puVar13 = (ushort *)(unaff_x21 + (long)(int)uVar17 * 2);
            do {
              if (uVar15 <= uVar17) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7bc();
              }
              uVar3 = *puVar13;
              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_0624cb1c;
              uVar17 = uVar17 + 1;
              puVar13 = puVar13 + 1;
            } while (uVar15 != uVar17);
          }
          else {
LAB_0624cb1c:
            if (uVar17 < uVar15) goto LAB_0624cb30;
          }
          goto LAB_0624cb5c;
        }
      }
      else {
LAB_0624cb30:
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar11 = FUN_0624f240(unaff_x21,unaff_x23 & 0xffffffff | uVar11 << 0x20,uVar17);
        if ((uVar11 & 1) != 0) {
LAB_0624cb5c:
          if (!bVar6) goto LAB_0624cbac;
          goto LAB_0624cb64;
        }
      }
    }
  }
  else {
    if (unaff_w28 != 0x2b) {
      if (unaff_w28 != 0x2d) goto LAB_0624c68c;
      uVar16 = uVar16 + 1;
      if (uVar14 <= uVar16) goto LAB_0624cb78;
      unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)uVar16 * 2);
      iVar18 = -1;
      goto LAB_0624c8d8;
    }
    uVar16 = uVar16 + 1;
    if (uVar16 < uVar14) {
      unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)uVar16 * 2);
LAB_0624c68c:
      iVar18 = 1;
      goto LAB_0624c8d8;
    }
  }
LAB_0624cb78:
  iStack000000000000001c = 0;
  uVar9 = 0;
LAB_0624cb80:
  *unaff_x19 = iStack000000000000001c;
  return uVar9;
}


