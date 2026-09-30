/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_EqualityComparer
ENTRY_POINT: 074efc44
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


uint Newtonsoft_Json_Serialization_JsonSerializerProxy__get_EqualityComparer(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int in_w8;
  long lVar5;
  int iVar6;
  long *unaff_x19;
  undefined1 *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  ushort *puVar7;
  uint uVar8;
  long *unaff_x25;
  long lVar9;
  ulong unaff_x27;
  uint uVar10;
  
  if (in_w8 == 0) {
    thunk_FUN_0408f364();
  }
  if (((int)unaff_x27 - 9U < 5) || ((int)unaff_x27 == 0x20)) {
    if (unaff_w21 != 1) {
      lVar4 = *unaff_x25;
      uVar3 = 1;
      do {
        uVar1 = *(ushort *)(unaff_x22 + (long)(int)uVar3 * 2);
        unaff_x27 = (ulong)uVar1;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar4 = *unaff_x25;
        }
        if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_074efbc4;
        uVar3 = uVar3 + 1;
      } while (unaff_w21 != uVar3);
    }
  }
  else {
    lVar4 = *unaff_x25;
    uVar3 = 0;
LAB_074efbc4:
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar4 = *unaff_x25;
    }
    lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x28);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    uVar10 = *(uint *)(lVar5 + 0x18);
    if (((uint)unaff_x27 < uVar10) &&
       (*(int *)(lVar5 + (unaff_x27 & 0xffffffff) * 4 + 0x20) != 0xff)) {
      if ((uint)unaff_x27 == 0x30) {
        do {
          uVar3 = uVar3 + 1;
          if (unaff_w21 <= uVar3) {
            lVar9 = 0;
            goto LAB_074efdec;
          }
          uVar1 = *(ushort *)(unaff_x22 + (long)(int)uVar3 * 2);
          unaff_x27 = (ulong)uVar1;
        } while (uVar1 == 0x30);
        if ((uVar1 < uVar10) && (*(int *)(lVar5 + unaff_x27 * 4 + 0x20) != 0xff)) goto LAB_074efce0;
        lVar9 = 0;
        uVar10 = 0;
        uVar8 = uVar3;
LAB_074efd68:
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        if (((int)unaff_x27 - 9U < 5) || ((int)unaff_x27 == 0x20)) {
          if ((unaff_w23 >> 1 & 1) == 0) goto LAB_074efc60;
          uVar8 = uVar8 + 1;
          if ((int)uVar8 < (int)unaff_w21) {
            puVar7 = (ushort *)(unaff_x22 + (long)(int)uVar8 * 2);
            do {
              if (unaff_w21 <= uVar8)
              goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling;
              uVar1 = *puVar7;
              if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                thunk_FUN_0408f364();
              }
              if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_074efdd8;
              uVar8 = uVar8 + 1;
              puVar7 = puVar7 + 1;
            } while (unaff_w21 != uVar8);
          }
          else {
LAB_074efdd8:
            if (uVar8 < unaff_w21) goto LAB_074efdfc;
          }
          if (uVar10 == 0) goto LAB_074efdec;
        }
        else {
LAB_074efdfc:
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          uVar3 = FUN_074f172c();
          if ((uVar3 & 1) == 0) {
            lVar9 = 0;
          }
          if ((uVar3 & 1 & uVar10) == 0) goto LAB_074efc68;
        }
      }
      else {
LAB_074efce0:
        if (uVar10 <= (uint)unaff_x27) {
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling:
                    /* WARNING: Subroutine does not return */
          FUN_04031894();
        }
        uVar8 = uVar3 + 0x10;
        lVar9 = (long)*(int *)(lVar5 + (unaff_x27 & 0xffffffff) * 4 + 0x20);
        iVar6 = 1;
        do {
          if (unaff_w21 <= uVar3 + iVar6) goto LAB_074efdec;
          uVar1 = *(ushort *)(unaff_x22 + (long)(int)(uVar3 + iVar6) * 2);
          unaff_x27 = (ulong)uVar1;
          if ((uVar10 <= uVar1) || (iVar2 = *(int *)(lVar5 + unaff_x27 * 4 + 0x20), iVar2 == 0xff))
          {
            uVar10 = 0;
            uVar8 = uVar3 + iVar6;
            goto LAB_074efd68;
          }
          iVar6 = iVar6 + 1;
          lVar9 = (long)iVar2 + lVar9 * 0x10;
        } while (iVar6 != 0x10);
        if (unaff_w21 <= uVar8) {
LAB_074efdec:
          uVar3 = 1;
          goto LAB_074efc68;
        }
        uVar1 = *(ushort *)(unaff_x22 + (long)(int)uVar8 * 2);
        unaff_x27 = (ulong)uVar1;
        if ((uVar10 <= uVar1) || (*(int *)(lVar5 + unaff_x27 * 4 + 0x20) == 0xff)) {
          uVar10 = 0;
          goto LAB_074efd68;
        }
        uVar8 = uVar3 + 0x11;
        if (uVar8 < unaff_w21) {
          do {
            uVar1 = *(ushort *)(unaff_x22 + (long)(int)uVar8 * 2);
            unaff_x27 = (ulong)uVar1;
            if ((uVar10 <= uVar1) || (*(int *)(lVar5 + unaff_x27 * 4 + 0x20) == 0xff)) {
              uVar10 = 1;
              goto LAB_074efd68;
            }
            uVar8 = uVar8 + 1;
          } while (unaff_w21 != uVar8);
        }
      }
      lVar9 = 0;
      uVar3 = 0;
      *unaff_x20 = 1;
      goto LAB_074efc68;
    }
  }
LAB_074efc60:
  lVar9 = 0;
  uVar3 = 0;
LAB_074efc68:
  *unaff_x19 = lVar9;
  return uVar3 & 1;
}


