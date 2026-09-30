/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$Serialize
ENTRY_POINT: 07a48b64
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__Serialize(void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long *unaff_x19;
  undefined1 *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  ushort *puVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  ulong unaff_x28;
  
  puVar4 = PTR_DAT_09f40bf0;
  if ((unaff_w23 & 1) == 0) {
LAB_07a48b68:
    uVar6 = 0;
LAB_07a48b6c:
    puVar4 = PTR_DAT_09f40bf0;
    lVar7 = *(long *)PTR_DAT_09f40bf0;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar7 = *(long *)puVar4;
    }
    lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x28);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar13 = *(uint *)(lVar8 + 0x18);
    if (((uint)unaff_x28 < uVar13) &&
       (*(int *)(lVar8 + (unaff_x28 & 0xffffffff) * 4 + 0x20) != 0xff)) {
      if ((uint)unaff_x28 == 0x30) {
        do {
          uVar6 = uVar6 + 1;
          if (unaff_w21 <= uVar6) {
            lVar12 = 0;
            goto LAB_07a48df0;
          }
          uVar2 = *(ushort *)(unaff_x22 + (long)(int)uVar6 * 2);
          unaff_x28 = (ulong)uVar2;
        } while (unaff_x28 == 0x30);
        if ((uVar2 < uVar13) && (*(int *)(lVar8 + unaff_x28 * 4 + 0x20) != 0xff)) goto LAB_07a48c6c;
        lVar12 = 0;
        uVar11 = uVar6;
LAB_07a48bec:
        uVar13 = 0;
LAB_07a48d40:
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        if (((int)unaff_x28 - 9U < 5) || ((int)unaff_x28 == 0x20)) {
          if ((unaff_w23 >> 1 & 1) == 0) goto LAB_07a48d5c;
          uVar11 = uVar11 + 1;
          if ((int)uVar11 < (int)unaff_w21) {
            puVar10 = (ushort *)(unaff_x22 + (long)(int)uVar11 * 2);
            do {
              if (unaff_w21 <= uVar11) goto LAB_07a48e50;
              uVar2 = *puVar10;
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_07a48de4;
              uVar11 = uVar11 + 1;
              puVar10 = puVar10 + 1;
            } while (unaff_w21 != uVar11);
          }
          else {
LAB_07a48de4:
            if (uVar11 < unaff_w21) goto LAB_07a48e00;
          }
          if (uVar13 == 0) goto LAB_07a48df0;
        }
        else {
LAB_07a48e00:
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar6 = FUN_07a4a680();
          if ((uVar6 & 1) == 0) {
            lVar12 = 0;
          }
          if ((uVar13 & uVar6) == 0) goto LAB_07a48d64;
        }
      }
      else {
LAB_07a48c6c:
        if (uVar13 <= (uint)unaff_x28) {
LAB_07a48e50:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        lVar12 = (long)*(int *)(lVar8 + (unaff_x28 & 0xffffffff) * 4 + 0x20);
        uVar1 = uVar6 + 1;
        uVar11 = uVar6 + 0x10;
        iVar9 = -0xf;
        do {
          if (unaff_w21 <= uVar1) goto LAB_07a48df0;
          uVar2 = *(ushort *)(unaff_x22 + (long)(int)(uVar6 + iVar9 + 0x10) * 2);
          unaff_x28 = (ulong)uVar2;
          if ((uVar13 <= uVar2) || (iVar3 = *(int *)(lVar8 + unaff_x28 * 4 + 0x20), iVar3 == 0xff))
          {
            uVar13 = 0;
            uVar11 = uVar6 + iVar9 + 0x10;
            goto LAB_07a48d40;
          }
          uVar1 = uVar6 + iVar9 + 0x11;
          bVar5 = iVar9 != -1;
          iVar9 = iVar9 + 1;
          lVar12 = (long)iVar3 + lVar12 * 0x10;
        } while (bVar5);
        if (unaff_w21 <= uVar1) {
LAB_07a48df0:
          uVar6 = 1;
          goto LAB_07a48d64;
        }
        uVar2 = *(ushort *)(unaff_x22 + (long)(int)uVar11 * 2);
        unaff_x28 = (ulong)uVar2;
        if ((uVar13 <= uVar2) || (*(int *)(lVar8 + unaff_x28 * 4 + 0x20) == 0xff))
        goto LAB_07a48bec;
        uVar11 = uVar6 + 0x11;
        if (uVar11 < unaff_w21) {
          do {
            uVar2 = *(ushort *)(unaff_x22 + (long)(int)uVar11 * 2);
            unaff_x28 = (ulong)uVar2;
            if ((uVar13 <= uVar2) || (*(int *)(lVar8 + unaff_x28 * 4 + 0x20) == 0xff)) {
              uVar13 = 1;
              goto LAB_07a48d40;
            }
            uVar11 = uVar11 + 1;
          } while (unaff_w21 != uVar11);
        }
      }
      lVar12 = 0;
      uVar6 = 0;
      *unaff_x20 = 1;
      goto LAB_07a48d64;
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_09f40bf0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if ((4 < (int)unaff_x28 - 9U) && ((int)unaff_x28 != 0x20)) goto LAB_07a48b68;
    if (1 < unaff_w21) {
      uVar6 = 1;
      do {
        uVar2 = *(ushort *)(unaff_x22 + (long)(int)uVar6 * 2);
        unaff_x28 = (ulong)uVar2;
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_07a48b6c;
        uVar6 = uVar6 + 1;
      } while (unaff_w21 != uVar6);
    }
  }
LAB_07a48d5c:
  lVar12 = 0;
  uVar6 = 0;
LAB_07a48d64:
  *unaff_x19 = lVar12;
  return uVar6 & 1;
}


