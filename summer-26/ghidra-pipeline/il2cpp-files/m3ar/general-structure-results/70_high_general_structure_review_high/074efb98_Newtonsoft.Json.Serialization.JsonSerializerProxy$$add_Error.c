/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$add_Error
ENTRY_POINT: 074efb98
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_20;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


uint Newtonsoft_Json_Serialization_JsonSerializerProxy__add_Error(long param_1)

{
  ushort uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long *unaff_x19;
  undefined1 *unaff_x20;
  uint unaff_w21;
  ushort *unaff_x22;
  uint unaff_w23;
  ushort *puVar8;
  uint uVar9;
  long unaff_x24;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  
  FUN_0403162c(*(undefined8 *)(param_1 + 0xa58));
  *(undefined1 *)(unaff_x24 + 0xf2f) = 1;
  puVar3 = PTR_DAT_08f9f500;
  if (unaff_w21 != 0) {
    uVar1 = *unaff_x22;
    lVar5 = *(long *)PTR_DAT_08f9f500;
    if ((unaff_w23 & 1) != 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      if ((uVar1 - 9 < 5) || (uVar1 == 0x20)) {
        if (unaff_w21 != 1) {
          lVar5 = *(long *)puVar3;
          uVar4 = 1;
          do {
            uVar1 = unaff_x22[(int)uVar4];
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_0408f364();
              lVar5 = *(long *)puVar3;
            }
            if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_074efbc4;
            uVar4 = uVar4 + 1;
          } while (unaff_w21 != uVar4);
        }
        goto LAB_074efc60;
      }
      lVar5 = *(long *)puVar3;
    }
    uVar4 = 0;
LAB_074efbc4:
    uVar11 = (ulong)uVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar5 = *(long *)puVar3;
    }
    lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    uVar12 = *(uint *)(lVar6 + 0x18);
    if ((uVar1 < uVar12) && (*(int *)(lVar6 + uVar11 * 4 + 0x20) != 0xff)) {
      if (uVar1 == 0x30) {
        do {
          uVar4 = uVar4 + 1;
          if (unaff_w21 <= uVar4) {
            lVar10 = 0;
            goto LAB_074efdec;
          }
          uVar1 = unaff_x22[(int)uVar4];
          uVar11 = (ulong)uVar1;
        } while (uVar1 == 0x30);
        if ((uVar1 < uVar12) && (*(int *)(lVar6 + uVar11 * 4 + 0x20) != 0xff)) goto LAB_074efce0;
        lVar10 = 0;
        uVar12 = 0;
        uVar9 = uVar4;
LAB_074efd68:
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        if (((int)uVar11 - 9U < 5) || ((int)uVar11 == 0x20)) {
          if ((unaff_w23 >> 1 & 1) == 0) goto LAB_074efc60;
          uVar9 = uVar9 + 1;
          if ((int)uVar9 < (int)unaff_w21) {
            puVar8 = unaff_x22 + (int)uVar9;
            do {
              if (unaff_w21 <= uVar9)
              goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling;
              uVar1 = *puVar8;
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0408f364();
              }
              if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_074efdd8;
              uVar9 = uVar9 + 1;
              puVar8 = puVar8 + 1;
            } while (unaff_w21 != uVar9);
          }
          else {
LAB_074efdd8:
            if (uVar9 < unaff_w21) goto LAB_074efdfc;
          }
          if (uVar12 == 0) goto LAB_074efdec;
        }
        else {
LAB_074efdfc:
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          uVar4 = FUN_074f172c();
          if ((uVar4 & 1) == 0) {
            lVar10 = 0;
          }
          if ((uVar4 & 1 & uVar12) == 0) goto LAB_074efc68;
        }
      }
      else {
LAB_074efce0:
        if (uVar12 <= (uint)uVar11) {
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling:
                    /* WARNING: Subroutine does not return */
          FUN_04031894();
        }
        uVar9 = uVar4 + 0x10;
        lVar10 = (long)*(int *)(lVar6 + uVar11 * 4 + 0x20);
        iVar7 = 1;
        do {
          if (unaff_w21 <= uVar4 + iVar7) goto LAB_074efdec;
          uVar11 = (ulong)unaff_x22[(int)(uVar4 + iVar7)];
          if ((uVar12 <= unaff_x22[(int)(uVar4 + iVar7)]) ||
             (iVar2 = *(int *)(lVar6 + uVar11 * 4 + 0x20), iVar2 == 0xff)) {
            uVar12 = 0;
            uVar9 = uVar4 + iVar7;
            goto LAB_074efd68;
          }
          iVar7 = iVar7 + 1;
          lVar10 = (long)iVar2 + lVar10 * 0x10;
        } while (iVar7 != 0x10);
        if (unaff_w21 <= uVar9) {
LAB_074efdec:
          uVar4 = 1;
          goto LAB_074efc68;
        }
        uVar11 = (ulong)unaff_x22[(int)uVar9];
        if ((uVar12 <= unaff_x22[(int)uVar9]) || (*(int *)(lVar6 + uVar11 * 4 + 0x20) == 0xff)) {
          uVar12 = 0;
          goto LAB_074efd68;
        }
        uVar9 = uVar4 + 0x11;
        if (uVar9 < unaff_w21) {
          do {
            uVar11 = (ulong)unaff_x22[(int)uVar9];
            if ((uVar12 <= unaff_x22[(int)uVar9]) || (*(int *)(lVar6 + uVar11 * 4 + 0x20) == 0xff))
            {
              uVar12 = 1;
              goto LAB_074efd68;
            }
            uVar9 = uVar9 + 1;
          } while (unaff_w21 != uVar9);
        }
      }
      lVar10 = 0;
      uVar4 = 0;
      *unaff_x20 = 1;
      goto LAB_074efc68;
    }
  }
LAB_074efc60:
  lVar10 = 0;
  uVar4 = 0;
LAB_074efc68:
  *unaff_x19 = lVar10;
  return uVar4 & 1;
}


