/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_DateFormatString
ENTRY_POINT: 074f0234
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


undefined8
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_DateFormatString(undefined8 param_1)

{
  long lVar1;
  ushort uVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 *unaff_x20;
  ushort *puVar9;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  int unaff_w24;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long unaff_x25;
  uint uVar13;
  long unaff_x26;
  uint *unaff_x27;
  uint unaff_w28;
  uint uStack000000000000001c;
  
  lVar1 = unaff_x21 + (long)unaff_w24 * 2;
  uVar5 = FUN_07368ba4(param_1,0);
  if ((uVar5 & 1) == 0) {
    if (DAT_0953f498 == '\0') {
      FUN_0403162c(PTR_DAT_08f8ca88);
      DAT_0953f498 = '\x01';
    }
    if (unaff_x26 != 0) {
      FUN_0736648c();
    }
    uVar5 = FUN_074f38fc(lVar1);
    if ((uVar5 & 1) == 0) goto LAB_074f02cc;
    if (unaff_x26 == 0) goto LAB_074f0660;
    uVar10 = *(uint *)(unaff_x26 + 0x10);
    if (uVar10 < unaff_w23) {
      uVar12 = 1;
      goto LAB_074f0354;
    }
  }
  else {
LAB_074f02cc:
    uVar5 = FUN_07368ba4();
    if ((uVar5 & 1) == 0) {
      if (DAT_0953f498 == '\0') {
        FUN_0403162c(PTR_DAT_08f8ca88);
        DAT_0953f498 = '\x01';
      }
      if (unaff_x25 != 0) {
        FUN_0736648c();
      }
      uVar5 = FUN_074f38fc(lVar1);
      if ((uVar5 & 1) == 0) goto LAB_074f0358;
      if (unaff_x25 == 0) {
LAB_074f0660:
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      uVar10 = *(uint *)(unaff_x25 + 0x10);
      uVar12 = 0;
      if (unaff_w23 <= uVar10) {
        uVar7 = 0;
        goto LAB_074f0604;
      }
LAB_074f0354:
      unaff_w28 = (uint)*(ushort *)(lVar1 + (long)(int)uVar10 * 2);
    }
    else {
LAB_074f0358:
      uVar10 = 0;
      uVar12 = 1;
    }
    puVar4 = PTR_DAT_08f9f500;
    if (*(int *)(*(long *)PTR_DAT_08f9f500 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    if (unaff_w28 - 0x30 < 10) {
      uVar11 = unaff_w28 - 0x30;
      uStack000000000000001c = uVar12;
      if (unaff_w28 != 0x30) {
LAB_074f03e4:
        uVar12 = uVar11;
        uVar11 = uVar10 + 9;
        iVar8 = 0;
        do {
          uVar13 = uVar10 + 1 + iVar8;
          if (unaff_w23 <= uVar13) goto LAB_074f0630;
          uVar2 = *(ushort *)(lVar1 + (long)(int)uVar13 * 2);
          uVar13 = (uint)uVar2;
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          if (9 < uVar2 - 0x30) {
            bVar3 = false;
            uVar11 = uVar10 + iVar8 + 1;
            goto LAB_074f0538;
          }
          iVar8 = iVar8 + 1;
          uVar12 = ((uint)uVar2 + uVar12 * 10) - 0x30;
        } while (iVar8 != 8);
        if (uVar11 < unaff_w23) {
          uVar2 = *(ushort *)(lVar1 + (long)(int)uVar11 * 2);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          if (9 < uVar2 - 0x30) goto LAB_074f0534;
          uVar11 = uVar10 + 10;
          if ((0x19999999 < uVar12) || ((bVar3 = false, uVar12 == 0x19999999 && (0x35 < uVar2)))) {
            bVar3 = true;
          }
          uVar12 = ((uint)uVar2 + uVar12 * 10) - 0x30;
          if (unaff_w23 <= uVar11) goto LAB_074f062c;
          lVar6 = *(long *)puVar4;
          do {
            uVar2 = *(ushort *)(lVar1 + (long)(int)uVar11 * 2);
            uVar13 = (uint)uVar2;
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_0408f364();
              lVar6 = *(long *)puVar4;
            }
            if (9 < uVar2 - 0x30) goto LAB_074f0538;
            uVar11 = uVar11 + 1;
            bVar3 = true;
          } while (unaff_w23 != uVar11);
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
        uVar10 = uVar10 + 1;
        if (unaff_w23 <= uVar10) {
          uVar12 = 0;
          goto LAB_074f0640;
        }
        uVar2 = *(ushort *)(lVar1 + (long)(int)uVar10 * 2);
      } while (uVar2 == 0x30);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar11 = uVar2 - 0x30;
      if (uVar11 < 10) goto LAB_074f03e4;
      uVar12 = 0;
      uVar11 = uVar10;
LAB_074f0534:
      uVar13 = (uint)uVar2;
      bVar3 = false;
LAB_074f0538:
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      if ((uVar13 - 9 < 5) || (uVar13 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar11 = uVar11 + 1;
          if ((int)uVar11 < (int)unaff_w23) {
            puVar9 = (ushort *)(lVar1 + (long)(int)uVar11 * 2);
            do {
              if (unaff_w23 <= uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_04031894();
              }
              uVar2 = *puVar9;
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0408f364();
              }
              if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_074f05bc;
              uVar11 = uVar11 + 1;
              puVar9 = puVar9 + 1;
            } while (unaff_w23 != uVar11);
          }
          else {
LAB_074f05bc:
            if (uVar11 < unaff_w23) goto LAB_074f05d0;
          }
          goto LAB_074f062c;
        }
      }
      else {
LAB_074f05d0:
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar5 = FUN_074f172c(lVar1,unaff_w23,uVar11);
        if ((uVar5 & 1) != 0) {
LAB_074f062c:
          if (!bVar3) goto LAB_074f0630;
          goto LAB_074f0648;
        }
      }
    }
  }
  uVar12 = 0;
  uVar7 = 0;
LAB_074f0604:
  *unaff_x27 = uVar12;
  return uVar7;
}


