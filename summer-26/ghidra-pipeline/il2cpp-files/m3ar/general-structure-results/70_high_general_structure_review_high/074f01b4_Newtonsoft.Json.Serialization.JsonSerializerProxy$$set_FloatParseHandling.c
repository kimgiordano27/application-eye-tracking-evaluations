/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_FloatParseHandling
ENTRY_POINT: 074f01b4
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


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__set_FloatParseHandling(void)

{
  ushort uVar1;
  undefined *puVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long unaff_x19;
  int iVar8;
  undefined1 *unaff_x20;
  ushort *puVar9;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar10;
  uint uVar11;
  long unaff_x25;
  uint uVar12;
  long unaff_x26;
  uint *unaff_x27;
  uint unaff_w28;
  uint uStack000000000000001c;
  
  uVar4 = thunk_FUN_07367938();
  if (((uVar4 & 1) == 0) || (uVar4 = thunk_FUN_07367938(), (uVar4 & 1) == 0)) {
    bVar3 = unaff_w23 < unaff_w24;
    unaff_w23 = unaff_w23 - unaff_w24;
    if (bVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_07505afc(0);
    }
    if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_08f9f7a8 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    unaff_x21 = unaff_x21 + (long)(int)unaff_w24 * 2;
    uVar4 = FUN_07368ba4();
    if ((uVar4 & 1) == 0) {
      if (DAT_0953f498 == '\0') {
        FUN_0403162c(PTR_DAT_08f8ca88);
        DAT_0953f498 = '\x01';
      }
      if (unaff_x26 == 0) {
        uVar6 = 0;
        uVar7 = 0;
      }
      else {
        uVar6 = FUN_0736648c();
        uVar7 = *(undefined4 *)(unaff_x26 + 0x10);
      }
      uVar4 = FUN_074f38fc(unaff_x21,unaff_w23,uVar6,uVar7,*(undefined8 *)PTR_DAT_08fa33d0);
      if ((uVar4 & 1) == 0) goto LAB_074f02cc;
      if (unaff_x26 == 0) goto LAB_074f0660;
      unaff_w24 = *(uint *)(unaff_x26 + 0x10);
      if (unaff_w23 <= unaff_w24) goto LAB_074f05fc;
      uVar10 = 1;
LAB_074f0354:
      unaff_x19 = 0;
      goto LAB_074f0378;
    }
LAB_074f02cc:
    uVar4 = FUN_07368ba4();
    if ((uVar4 & 1) == 0) {
      if (DAT_0953f498 == '\0') {
        FUN_0403162c(PTR_DAT_08f8ca88);
        DAT_0953f498 = '\x01';
      }
      if (unaff_x25 == 0) {
        uVar6 = 0;
        uVar7 = 0;
      }
      else {
        uVar6 = FUN_0736648c();
        uVar7 = *(undefined4 *)(unaff_x25 + 0x10);
      }
      uVar4 = FUN_074f38fc(unaff_x21,unaff_w23,uVar6,uVar7,*(undefined8 *)PTR_DAT_08fa33d0);
      if ((uVar4 & 1) != 0) {
        if (unaff_x25 == 0) {
LAB_074f0660:
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        unaff_w24 = *(uint *)(unaff_x25 + 0x10);
        uVar10 = 0;
        if (unaff_w23 <= unaff_w24) goto LAB_074f0518;
        goto LAB_074f0354;
      }
    }
    unaff_x19 = 0;
    unaff_w24 = 0;
    uVar10 = 1;
LAB_074f0380:
    puVar2 = PTR_DAT_08f9f500;
    if (*(int *)(*(long *)PTR_DAT_08f9f500 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar11 = unaff_w28 - 0x30;
    if (uVar11 < 10) {
      uStack000000000000001c = uVar10;
      if (unaff_w28 != 0x30) {
LAB_074f03e4:
        uVar10 = unaff_w24 + 9;
        iVar8 = 0;
        do {
          uVar12 = unaff_w24 + 1 + iVar8;
          if (unaff_w23 <= uVar12) goto LAB_074f0630;
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar12 * 2);
          uVar12 = (uint)uVar1;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          if (9 < uVar1 - 0x30) {
            bVar3 = false;
            uVar10 = unaff_w24 + iVar8 + 1;
            goto LAB_074f0538;
          }
          iVar8 = iVar8 + 1;
          uVar11 = ((uint)uVar1 + uVar11 * 10) - 0x30;
        } while (iVar8 != 8);
        if (uVar10 < unaff_w23) {
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          if (9 < uVar1 - 0x30) goto LAB_074f0534;
          uVar10 = unaff_w24 + 10;
          if ((0x19999999 < uVar11) || ((bVar3 = false, uVar11 == 0x19999999 && (0x35 < uVar1)))) {
            bVar3 = true;
          }
          uVar11 = ((uint)uVar1 + uVar11 * 10) - 0x30;
          if (unaff_w23 <= uVar10) goto LAB_074f062c;
          lVar5 = *(long *)puVar2;
          do {
            uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
            uVar12 = (uint)uVar1;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_0408f364();
              lVar5 = *(long *)puVar2;
            }
            if (9 < uVar1 - 0x30) goto LAB_074f0538;
            uVar10 = uVar10 + 1;
            bVar3 = true;
          } while (unaff_w23 != uVar10);
        }
        else {
LAB_074f0630:
          if (uVar11 == 0) {
            uStack000000000000001c = 1;
          }
          if ((uStack000000000000001c & 1) != 0) {
LAB_074f0640:
            uVar6 = 1;
            goto LAB_074f0604;
          }
        }
LAB_074f0648:
        uVar11 = 0;
        uVar6 = 0;
        *unaff_x20 = 1;
        goto LAB_074f0604;
      }
      do {
        unaff_w24 = unaff_w24 + 1;
        if (unaff_w23 <= unaff_w24) {
          uVar11 = 0;
          goto LAB_074f0640;
        }
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
      } while (uVar1 == 0x30);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar11 = uVar1 - 0x30;
      if (uVar11 < 10) goto LAB_074f03e4;
      uVar11 = 0;
      uVar10 = unaff_w24;
LAB_074f0534:
      uVar12 = (uint)uVar1;
      bVar3 = false;
LAB_074f0538:
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      if ((uVar12 - 9 < 5) || (uVar12 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar10 = uVar10 + 1;
          if ((int)uVar10 < (int)unaff_w23) {
            puVar9 = (ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
            do {
              if (unaff_w23 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_04031894();
              }
              uVar1 = *puVar9;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0408f364();
              }
              if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_074f05bc;
              uVar10 = uVar10 + 1;
              puVar9 = puVar9 + 1;
            } while (unaff_w23 != uVar10);
          }
          else {
LAB_074f05bc:
            if (uVar10 < unaff_w23) goto LAB_074f05d0;
          }
          goto LAB_074f062c;
        }
      }
      else {
LAB_074f05d0:
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar4 = FUN_074f172c(unaff_x21,(ulong)unaff_w23 | unaff_x19 << 0x20,uVar10);
        if ((uVar4 & 1) != 0) {
LAB_074f062c:
          if (!bVar3) goto LAB_074f0630;
          goto LAB_074f0648;
        }
      }
    }
  }
  else {
    if (unaff_w28 == 0x2d) {
      unaff_w24 = unaff_w24 + 1;
      uVar10 = 0;
      if (unaff_w23 <= unaff_w24) {
LAB_074f0518:
        uVar11 = 0;
        uVar6 = 0;
        goto LAB_074f0604;
      }
LAB_074f0378:
      unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
      goto LAB_074f0380;
    }
    if (unaff_w28 != 0x2b) {
      uVar10 = 1;
      goto LAB_074f0380;
    }
    unaff_w24 = unaff_w24 + 1;
    if (unaff_w24 < unaff_w23) {
      uVar10 = 1;
      goto LAB_074f0378;
    }
  }
LAB_074f05fc:
  uVar11 = 0;
  uVar6 = 0;
LAB_074f0604:
  *unaff_x27 = uVar11;
  return uVar6;
}


