/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewObject
ENTRY_POINT: 0624c794
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


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewObject(void)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  int *unaff_x19;
  ushort *puVar11;
  long unaff_x21;
  uint unaff_w22;
  int unaff_w23;
  int unaff_w24;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  long unaff_x25;
  uint uVar16;
  long unaff_x26;
  undefined1 *unaff_x27;
  uint unaff_w28;
  int iStack000000000000001c;
  
  uVar4 = unaff_w23 - unaff_w24;
  lVar1 = unaff_x21 + (long)unaff_w24 * 2;
  uVar8 = FUN_060c08a0();
  if ((uVar8 & 1) == 0) {
    if (DAT_08255bd1 == '\0') {
      FUN_0373b518(PTR_DAT_07d98650);
      DAT_08255bd1 = '\x01';
    }
    if (unaff_x26 == 0) {
      uVar9 = 0;
      uVar10 = 0;
    }
    else {
      uVar9 = FUN_060be1d4();
      uVar10 = *(undefined4 *)(unaff_x26 + 0x10);
    }
    uVar8 = FUN_06251640(lVar1,uVar4,uVar9,uVar10,*(undefined8 *)PTR_DAT_07daecc0);
    if ((uVar8 & 1) == 0) goto LAB_0624c838;
    if (unaff_x26 == 0) goto LAB_0624cbc0;
    uVar12 = *(uint *)(unaff_x26 + 0x10);
    if (uVar12 < uVar4) {
      unaff_w28 = (uint)*(ushort *)(lVar1 + (long)(int)uVar12 * 2);
      goto LAB_0624c8d4;
    }
  }
  else {
LAB_0624c838:
    uVar8 = FUN_060c08a0();
    if ((uVar8 & 1) == 0) {
      if (DAT_08255bd1 == '\0') {
        FUN_0373b518(PTR_DAT_07d98650);
        DAT_08255bd1 = '\x01';
      }
      if (unaff_x25 == 0) {
        uVar9 = 0;
        uVar10 = 0;
      }
      else {
        uVar9 = FUN_060be1d4();
        uVar10 = *(undefined4 *)(unaff_x25 + 0x10);
      }
      uVar8 = FUN_06251640(lVar1,uVar4,uVar9,uVar10,*(undefined8 *)PTR_DAT_07daecc0);
      if ((uVar8 & 1) == 0) goto LAB_0624c8cc;
      if (unaff_x25 == 0) {
LAB_0624cbc0:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar12 = *(uint *)(unaff_x25 + 0x10);
      if (uVar4 <= uVar12) goto LAB_0624cb78;
      unaff_w28 = (uint)*(ushort *)(lVar1 + (long)(int)uVar12 * 2);
      iVar14 = -1;
    }
    else {
LAB_0624c8cc:
      uVar12 = 0;
LAB_0624c8d4:
      iVar14 = 1;
    }
    puVar5 = PTR_DAT_07daae20;
    if (*(int *)(*(long *)PTR_DAT_07daae20 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar16 = unaff_w28 - 0x30;
    if (uVar16 < 10) {
      iStack000000000000001c = iVar14;
      if (unaff_w28 != 0x30) {
LAB_0624c938:
        uVar15 = uVar12 + 1;
        uVar13 = uVar12 + 9;
        iVar14 = -8;
        do {
          if (uVar4 <= uVar15) goto LAB_0624cbac;
          uVar2 = *(ushort *)(lVar1 + (long)(int)(uVar12 + iVar14 + 9) * 2);
          uVar15 = (uint)uVar2;
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          if (9 < uVar2 - 0x30) {
            bVar6 = false;
            uVar13 = uVar12 + iVar14 + 9;
            goto LAB_0624caa0;
          }
          uVar15 = uVar12 + iVar14 + 10;
          bVar6 = iVar14 != -1;
          iVar14 = iVar14 + 1;
          uVar3 = ((uint)uVar2 + uVar16 * 10) - 0x30;
          uVar16 = uVar3;
        } while (bVar6);
        if (uVar4 <= uVar15) {
LAB_0624cbac:
          uVar9 = 1;
          iStack000000000000001c = uVar16 * iStack000000000000001c;
          goto LAB_0624cb80;
        }
        uVar2 = *(ushort *)(lVar1 + (long)(int)uVar13 * 2);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        if (9 < uVar2 - 0x30) goto LAB_0624ca9c;
        uVar16 = (uVar2 - 0x30) + uVar3 * 10;
        uVar13 = uVar12 + 10;
        iVar14 = 2 - iStack000000000000001c;
        if (-1 < 1 - iStack000000000000001c) {
          iVar14 = 1 - iStack000000000000001c;
        }
        bVar7 = (ulong)(uint)(iVar14 >> 1) + 0x7fffffff < (ulong)uVar16;
        bVar6 = 0xccccccc < (int)uVar3 || bVar7;
        if (uVar13 < uVar4) {
          do {
            uVar2 = *(ushort *)(lVar1 + (long)(int)uVar13 * 2);
            uVar15 = (uint)uVar2;
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            if (9 < uVar2 - 0x30) goto LAB_0624caa0;
            uVar13 = uVar13 + 1;
            bVar6 = true;
          } while (uVar4 != uVar13);
        }
        else if (0xccccccc >= (int)uVar3 && !bVar7) goto LAB_0624cbac;
LAB_0624cb64:
        iStack000000000000001c = 0;
        uVar9 = 0;
        *unaff_x27 = 1;
        goto LAB_0624cb80;
      }
      do {
        uVar12 = uVar12 + 1;
        if (uVar4 <= uVar12) {
          uVar16 = 0;
          goto LAB_0624cbac;
        }
        uVar2 = *(ushort *)(lVar1 + (long)(int)uVar12 * 2);
        uVar16 = uVar2 - 0x30;
      } while (uVar16 == 0);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      if (uVar16 < 10) goto LAB_0624c938;
      uVar13 = uVar12;
      uVar16 = 0;
LAB_0624ca9c:
      uVar15 = (uint)uVar2;
      bVar6 = false;
LAB_0624caa0:
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      if ((uVar15 - 9 < 5) || (uVar15 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar13 = uVar13 + 1;
          if ((int)uVar13 < (int)uVar4) {
            puVar11 = (ushort *)(lVar1 + (long)(int)uVar13 * 2);
            do {
              if (uVar4 <= uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7bc();
              }
              uVar2 = *puVar11;
              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_0624cb1c;
              uVar13 = uVar13 + 1;
              puVar11 = puVar11 + 1;
            } while (uVar4 != uVar13);
          }
          else {
LAB_0624cb1c:
            if (uVar13 < uVar4) goto LAB_0624cb30;
          }
          goto LAB_0624cb5c;
        }
      }
      else {
LAB_0624cb30:
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar8 = FUN_0624f240(lVar1,uVar4,uVar13);
        if ((uVar8 & 1) != 0) {
LAB_0624cb5c:
          if (!bVar6) goto LAB_0624cbac;
          goto LAB_0624cb64;
        }
      }
    }
  }
LAB_0624cb78:
  iStack000000000000001c = 0;
  uVar9 = 0;
LAB_0624cb80:
  *unaff_x19 = iStack000000000000001c;
  return uVar9;
}


