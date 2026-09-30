/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeValue
ENTRY_POINT: 07a49238
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeValue(void)

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
  long unaff_x26;
  undefined1 *unaff_x27;
  uint unaff_w28;
  uint uStack000000000000001c;
  
  uVar4 = FUN_07a4ca80();
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_078b4450();
    if ((uVar4 & 1) == 0) {
      if (DAT_0a51d028 == '\0') {
        FUN_04447ba8(PTR_DAT_09f28738);
        DAT_0a51d028 = '\x01';
      }
      if (unaff_x25 != 0) {
        FUN_078b1c78();
      }
      uVar4 = FUN_07a4ca80();
      if ((uVar4 & 1) == 0) goto LAB_07a492f4;
      if (unaff_x25 == 0) goto LAB_07a495e0;
      uVar8 = *(uint *)(unaff_x25 + 0x10);
      if (unaff_w23 <= uVar8) goto LAB_07a4959c;
      unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
      uVar10 = 0;
    }
    else {
LAB_07a492f4:
      uVar8 = 0;
LAB_07a492fc:
      uVar10 = 1;
    }
    puVar2 = PTR_DAT_09f40bf0;
    if (*(int *)(*(long *)PTR_DAT_09f40bf0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar11 = unaff_w28 - 0x30;
    if (uVar11 < 10) {
      uStack000000000000001c = uVar10;
      if (unaff_w28 != 0x30) {
LAB_07a49360:
        uVar10 = uVar8 + 1;
        uVar9 = uVar8 + 9;
        iVar6 = -8;
        do {
          if (unaff_w23 <= uVar10) goto LAB_07a49580;
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)(uVar8 + iVar6 + 9) * 2);
          uVar10 = (uint)uVar1;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          if (9 < uVar1 - 0x30) {
            bVar3 = false;
            uVar9 = uVar8 + iVar6 + 9;
            goto LAB_07a494bc;
          }
          uVar10 = uVar8 + iVar6 + 10;
          bVar3 = iVar6 != -1;
          iVar6 = iVar6 + 1;
          uVar11 = ((uint)uVar1 + uVar11 * 10) - 0x30;
        } while (bVar3);
        if (uVar10 < unaff_w23) {
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar10 = uVar1 - 0x30;
          if (9 < uVar10) goto LAB_07a494b8;
          uVar9 = uVar8 + 10;
          if ((0x19999999 < uVar11) || ((bVar3 = false, uVar11 == 0x19999999 && (0x35 < uVar1)))) {
            bVar3 = true;
          }
          uVar11 = uVar10 + uVar11 * 10;
          if (unaff_w23 <= uVar9) goto LAB_07a4957c;
          do {
            uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
            uVar10 = (uint)uVar1;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            if (9 < uVar1 - 0x30) goto LAB_07a494bc;
            uVar9 = uVar9 + 1;
            bVar3 = true;
          } while (unaff_w23 != uVar9);
        }
        else {
LAB_07a49580:
          if ((uStack000000000000001c & 1) != 0 || uVar11 == 0) {
LAB_07a49594:
            uVar5 = 1;
            goto LAB_07a495a4;
          }
        }
LAB_07a495c8:
        uVar11 = 0;
        uVar5 = 0;
        *unaff_x27 = 1;
        goto LAB_07a495a4;
      }
      do {
        uVar8 = uVar8 + 1;
        if (unaff_w23 <= uVar8) {
          uVar11 = 0;
          goto LAB_07a49594;
        }
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
        uVar11 = uVar1 - 0x30;
      } while (uVar11 == 0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      if (uVar11 < 10) goto LAB_07a49360;
      uVar11 = 0;
      uVar9 = uVar8;
LAB_07a494b8:
      uVar10 = (uint)uVar1;
      bVar3 = false;
LAB_07a494bc:
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      if ((uVar10 - 9 < 5) || (uVar10 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar9 = uVar9 + 1;
          if ((int)uVar9 < (int)unaff_w23) {
            puVar7 = (ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
            do {
              if (unaff_w23 <= uVar9) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              uVar1 = *puVar7;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_07a49538;
              uVar9 = uVar9 + 1;
              puVar7 = puVar7 + 1;
            } while (unaff_w23 != uVar9);
          }
          else {
LAB_07a49538:
            if (uVar9 < unaff_w23) goto LAB_07a4954c;
          }
          goto LAB_07a4957c;
        }
      }
      else {
LAB_07a4954c:
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar4 = FUN_07a4a680();
        if ((uVar4 & 1) != 0) {
LAB_07a4957c:
          if (!bVar3) goto LAB_07a49580;
          goto LAB_07a495c8;
        }
      }
    }
  }
  else {
    if (unaff_x26 == 0) {
LAB_07a495e0:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar8 = *(uint *)(unaff_x26 + 0x10);
    if (uVar8 < unaff_w23) {
      unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
      goto LAB_07a492fc;
    }
  }
LAB_07a4959c:
  uVar11 = 0;
  uVar5 = 0;
LAB_07a495a4:
  *unaff_x19 = uVar11;
  return uVar5;
}


