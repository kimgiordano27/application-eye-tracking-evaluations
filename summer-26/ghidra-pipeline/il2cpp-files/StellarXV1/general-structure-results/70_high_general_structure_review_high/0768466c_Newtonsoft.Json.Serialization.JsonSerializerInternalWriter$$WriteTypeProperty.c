/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteTypeProperty
ENTRY_POINT: 0768466c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteTypeProperty(long param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  long *unaff_x19;
  undefined1 *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  ushort *puVar6;
  uint uVar7;
  long *unaff_x25;
  long lVar8;
  ulong unaff_x27;
  uint uVar9;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    param_1 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0xb8) + 0x28);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar9 = *(uint *)(lVar4 + 0x18);
  if (((uint)unaff_x27 < uVar9) && (*(int *)(lVar4 + (unaff_x27 & 0xffffffff) * 4 + 0x20) != 0xff))
  {
    if ((uint)unaff_x27 == 0x30) {
      do {
        uVar3 = uVar3 + 1;
        if (unaff_w21 <= uVar3) {
          lVar8 = 0;
          goto LAB_0768477c;
        }
        uVar1 = *(ushort *)(unaff_x22 + (long)(int)uVar3 * 2);
        unaff_x27 = (ulong)uVar1;
      } while (uVar1 == 0x30);
      if ((uVar1 < uVar9) && (*(int *)(lVar4 + unaff_x27 * 4 + 0x20) != 0xff)) goto LAB_07684670;
      lVar8 = 0;
      uVar9 = 0;
      uVar7 = uVar3;
LAB_076846f8:
      if (*(int *)(param_1 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if (((int)unaff_x27 - 9U < 5) || ((int)unaff_x27 == 0x20)) {
        if ((unaff_w23 >> 1 & 1) == 0) goto LAB_076845f0;
        uVar7 = uVar7 + 1;
        if ((int)uVar7 < (int)unaff_w21) {
          puVar6 = (ushort *)(unaff_x22 + (long)(int)uVar7 * 2);
          do {
            if (unaff_w21 <= uVar7) goto LAB_07684814;
            uVar1 = *puVar6;
            if (*(int *)(*unaff_x25 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_07684768;
            uVar7 = uVar7 + 1;
            puVar6 = puVar6 + 1;
          } while (unaff_w21 != uVar7);
        }
        else {
LAB_07684768:
          if (uVar7 < unaff_w21) goto LAB_0768478c;
        }
        if (uVar9 == 0) goto LAB_0768477c;
      }
      else {
LAB_0768478c:
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar3 = FUN_076860bc();
        if ((uVar3 & 1) == 0) {
          lVar8 = 0;
        }
        if ((uVar3 & 1 & uVar9) == 0) goto LAB_076845f8;
      }
    }
    else {
LAB_07684670:
      if (uVar9 <= (uint)unaff_x27) {
LAB_07684814:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      uVar7 = uVar3 + 0x10;
      lVar8 = (long)*(int *)(lVar4 + (unaff_x27 & 0xffffffff) * 4 + 0x20);
      iVar5 = 1;
      do {
        if (unaff_w21 <= uVar3 + iVar5) goto LAB_0768477c;
        uVar1 = *(ushort *)(unaff_x22 + (long)(int)(uVar3 + iVar5) * 2);
        unaff_x27 = (ulong)uVar1;
        if ((uVar9 <= uVar1) || (iVar2 = *(int *)(lVar4 + unaff_x27 * 4 + 0x20), iVar2 == 0xff)) {
          uVar9 = 0;
          uVar7 = uVar3 + iVar5;
          goto LAB_076846f8;
        }
        iVar5 = iVar5 + 1;
        lVar8 = (long)iVar2 + lVar8 * 0x10;
      } while (iVar5 != 0x10);
      if (unaff_w21 <= uVar7) {
LAB_0768477c:
        uVar3 = 1;
        goto LAB_076845f8;
      }
      uVar1 = *(ushort *)(unaff_x22 + (long)(int)uVar7 * 2);
      unaff_x27 = (ulong)uVar1;
      if ((uVar9 <= uVar1) || (*(int *)(lVar4 + unaff_x27 * 4 + 0x20) == 0xff)) {
        uVar9 = 0;
        goto LAB_076846f8;
      }
      uVar7 = uVar3 + 0x11;
      if (uVar7 < unaff_w21) {
        do {
          uVar1 = *(ushort *)(unaff_x22 + (long)(int)uVar7 * 2);
          unaff_x27 = (ulong)uVar1;
          if ((uVar9 <= uVar1) || (*(int *)(lVar4 + unaff_x27 * 4 + 0x20) == 0xff)) {
            uVar9 = 1;
            goto LAB_076846f8;
          }
          uVar7 = uVar7 + 1;
        } while (unaff_w21 != uVar7);
      }
    }
    lVar8 = 0;
    uVar3 = 0;
    *unaff_x20 = 1;
  }
  else {
LAB_076845f0:
    lVar8 = 0;
    uVar3 = 0;
  }
LAB_076845f8:
  *unaff_x19 = lVar8;
  return uVar3 & 1;
}


