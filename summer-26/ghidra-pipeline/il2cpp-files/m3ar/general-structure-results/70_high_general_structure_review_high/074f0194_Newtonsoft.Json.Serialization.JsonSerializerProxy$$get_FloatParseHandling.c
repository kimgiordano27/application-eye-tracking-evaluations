/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_FloatParseHandling
ENTRY_POINT: 074f0194
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__get_FloatParseHandling(long param_1)

{
  long lVar1;
  ushort uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined1 in_ZR;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  int iVar10;
  undefined1 *unaff_x20;
  ushort *puVar11;
  long unaff_x21;
  uint unaff_w22;
  uint uVar12;
  uint uVar13;
  ulong unaff_x23;
  uint unaff_w24;
  uint uVar14;
  long unaff_x25;
  uint uVar15;
  long *unaff_x26;
  uint *unaff_x27;
  uint unaff_w28;
  uint uStack000000000000001c;
  
  while (uVar12 = (uint)unaff_x23, (bool)in_ZR) {
    do {
      unaff_w24 = unaff_w24 + 1;
      if (uVar12 == unaff_w24) goto LAB_074f05fc;
      uVar2 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
      unaff_w28 = (uint)uVar2;
      if (*(int *)(param_1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        param_1 = *unaff_x26;
      }
    } while (uVar2 - 9 < 5);
    in_ZR = uVar2 == 0x20;
  }
  uVar9 = unaff_x23 >> 0x20;
  if ((unaff_w22 >> 2 & 1) == 0) {
LAB_074f0124:
    uVar14 = 1;
LAB_074f0380:
    puVar4 = PTR_DAT_08f9f500;
    if (*(int *)(*(long *)PTR_DAT_08f9f500 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar12 = unaff_w28 - 0x30;
    if (uVar12 < 10) {
      uVar13 = (uint)unaff_x23;
      uStack000000000000001c = uVar14;
      if (unaff_w28 != 0x30) {
LAB_074f03e4:
        uVar14 = unaff_w24 + 9;
        iVar10 = 0;
        do {
          uVar15 = unaff_w24 + 1 + iVar10;
          if (uVar13 <= uVar15) goto LAB_074f0630;
          uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar15 * 2);
          uVar15 = (uint)uVar2;
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          if (9 < uVar2 - 0x30) {
            bVar3 = false;
            uVar14 = unaff_w24 + iVar10 + 1;
            goto LAB_074f0538;
          }
          iVar10 = iVar10 + 1;
          uVar12 = ((uint)uVar2 + uVar12 * 10) - 0x30;
        } while (iVar10 != 8);
        if (uVar14 < uVar13) {
          uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar14 * 2);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          if (9 < uVar2 - 0x30) goto LAB_074f0534;
          uVar14 = unaff_w24 + 10;
          if ((0x19999999 < uVar12) || ((bVar3 = false, uVar12 == 0x19999999 && (0x35 < uVar2)))) {
            bVar3 = true;
          }
          uVar12 = ((uint)uVar2 + uVar12 * 10) - 0x30;
          if (uVar13 <= uVar14) goto LAB_074f062c;
          lVar6 = *(long *)puVar4;
          do {
            uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar14 * 2);
            uVar15 = (uint)uVar2;
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_0408f364();
              lVar6 = *(long *)puVar4;
            }
            if (9 < uVar2 - 0x30) goto LAB_074f0538;
            uVar14 = uVar14 + 1;
            bVar3 = true;
          } while (uVar13 != uVar14);
        }
        else {
LAB_074f0630:
          if (uVar12 == 0) {
            uStack000000000000001c = 1;
          }
          if ((uStack000000000000001c & 1) != 0) {
LAB_074f0640:
            uVar7 = 1;
            goto LAB_074f0604;
          }
        }
LAB_074f0648:
        uVar12 = 0;
        uVar7 = 0;
        *unaff_x20 = 1;
        goto LAB_074f0604;
      }
      do {
        unaff_w24 = unaff_w24 + 1;
        if (uVar13 <= unaff_w24) {
          uVar12 = 0;
          goto LAB_074f0640;
        }
        uVar2 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
      } while (uVar2 == 0x30);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar12 = uVar2 - 0x30;
      if (uVar12 < 10) goto LAB_074f03e4;
      uVar12 = 0;
      uVar14 = unaff_w24;
LAB_074f0534:
      uVar15 = (uint)uVar2;
      bVar3 = false;
LAB_074f0538:
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      if ((uVar15 - 9 < 5) || (uVar15 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar14 = uVar14 + 1;
          if ((int)uVar14 < (int)uVar13) {
            puVar11 = (ushort *)(unaff_x21 + (long)(int)uVar14 * 2);
            do {
              if (uVar13 <= uVar14) {
                    /* WARNING: Subroutine does not return */
                FUN_04031894();
              }
              uVar2 = *puVar11;
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0408f364();
              }
              if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_074f05bc;
              uVar14 = uVar14 + 1;
              puVar11 = puVar11 + 1;
            } while (uVar13 != uVar14);
          }
          else {
LAB_074f05bc:
            if (uVar14 < uVar13) goto LAB_074f05d0;
          }
          goto LAB_074f062c;
        }
      }
      else {
LAB_074f05d0:
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar9 = FUN_074f172c(unaff_x21,unaff_x23 & 0xffffffff | uVar9 << 0x20,uVar14);
        if ((uVar9 & 1) != 0) {
LAB_074f062c:
          if (!bVar3) goto LAB_074f0630;
          goto LAB_074f0648;
        }
      }
    }
  }
  else {
    if (unaff_x25 == 0) goto LAB_074f0660;
    lVar6 = *(long *)(unaff_x25 + 0x28);
    lVar1 = *(long *)(unaff_x25 + 0x30);
    uVar5 = thunk_FUN_07367938(lVar6,*(undefined8 *)PTR_DAT_08f671e0,0);
    if (((uVar5 & 1) == 0) ||
       (uVar5 = thunk_FUN_07367938(lVar1,*(undefined8 *)PTR_DAT_08f65d40,0), (uVar5 & 1) == 0)) {
      uVar13 = uVar12 - unaff_w24;
      unaff_x23 = (ulong)uVar13;
      if (uVar12 < unaff_w24) {
                    /* WARNING: Subroutine does not return */
        FUN_07505afc(0);
      }
      if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_08f9f7a8 + 0x20) + 0x135) & 1) == 0) {
        FUN_0406aaec();
      }
      unaff_x21 = unaff_x21 + (long)(int)unaff_w24 * 2;
      uVar9 = FUN_07368ba4(lVar6,0);
      if ((uVar9 & 1) != 0) {
LAB_074f02cc:
        uVar9 = FUN_07368ba4(lVar1,0);
        if ((uVar9 & 1) == 0) {
          if (DAT_0953f498 == '\0') {
            FUN_0403162c(PTR_DAT_08f8ca88);
            DAT_0953f498 = '\x01';
          }
          if (lVar1 == 0) {
            uVar7 = 0;
            uVar8 = 0;
          }
          else {
            uVar7 = FUN_0736648c(lVar1,0);
            uVar8 = *(undefined4 *)(lVar1 + 0x10);
          }
          uVar9 = FUN_074f38fc(unaff_x21,unaff_x23,uVar7,uVar8,*(undefined8 *)PTR_DAT_08fa33d0);
          if ((uVar9 & 1) != 0) {
            if (lVar1 == 0) {
LAB_074f0660:
                    /* WARNING: Subroutine does not return */
              FUN_0403188c();
            }
            unaff_w24 = *(uint *)(lVar1 + 0x10);
            uVar14 = 0;
            if (uVar13 <= unaff_w24) goto LAB_074f0518;
            goto LAB_074f0354;
          }
        }
        uVar9 = 0;
        unaff_w24 = 0;
        uVar14 = 1;
        goto LAB_074f0380;
      }
      if (DAT_0953f498 == '\0') {
        FUN_0403162c(PTR_DAT_08f8ca88);
        DAT_0953f498 = '\x01';
      }
      if (lVar6 == 0) {
        uVar7 = 0;
        uVar8 = 0;
      }
      else {
        uVar7 = FUN_0736648c(lVar6,0);
        uVar8 = *(undefined4 *)(lVar6 + 0x10);
      }
      uVar9 = FUN_074f38fc(unaff_x21,unaff_x23,uVar7,uVar8,*(undefined8 *)PTR_DAT_08fa33d0);
      if ((uVar9 & 1) == 0) goto LAB_074f02cc;
      if (lVar6 == 0) goto LAB_074f0660;
      unaff_w24 = *(uint *)(lVar6 + 0x10);
      if (uVar13 <= unaff_w24) goto LAB_074f05fc;
      uVar14 = 1;
LAB_074f0354:
      uVar9 = 0;
LAB_074f0378:
      unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
      goto LAB_074f0380;
    }
    if (unaff_w28 == 0x2d) {
      unaff_w24 = unaff_w24 + 1;
      uVar14 = 0;
      if (uVar12 <= unaff_w24) {
LAB_074f0518:
        uVar12 = 0;
        uVar7 = 0;
        goto LAB_074f0604;
      }
      goto LAB_074f0378;
    }
    if (unaff_w28 != 0x2b) goto LAB_074f0124;
    unaff_w24 = unaff_w24 + 1;
    if (unaff_w24 < uVar12) {
      uVar14 = 1;
      goto LAB_074f0378;
    }
  }
LAB_074f05fc:
  uVar12 = 0;
  uVar7 = 0;
LAB_074f0604:
  *unaff_x27 = uVar12;
  return uVar7;
}


