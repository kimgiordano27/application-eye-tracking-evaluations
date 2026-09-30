/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_DefaultValueHandling
ENTRY_POINT: 074efca4
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_19;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


uint Newtonsoft_Json_Serialization_JsonSerializerProxy__get_DefaultValueHandling(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long *unaff_x19;
  undefined1 *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  ushort *puVar7;
  uint unaff_w24;
  long *unaff_x25;
  long lVar8;
  ulong unaff_x27;
  uint uVar9;
  
  do {
    lVar4 = *unaff_x25;
    do {
      uVar3 = (uint)unaff_x27;
      if ((4 < uVar3 - 9) && (uVar3 != 0x20)) {
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar4 = *unaff_x25;
        }
        lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x28);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        uVar9 = *(uint *)(lVar5 + 0x18);
        if ((uVar9 <= uVar3) || (*(int *)(lVar5 + (unaff_x27 & 0xffffffff) * 4 + 0x20) == 0xff))
        goto LAB_074efc60;
        if (uVar3 != 0x30) goto LAB_074efce0;
        goto LAB_074efc04;
      }
      unaff_w24 = unaff_w24 + 1;
      if (unaff_w21 == unaff_w24) goto LAB_074efc60;
      unaff_x27 = (ulong)*(ushort *)(unaff_x22 + (long)(int)unaff_w24 * 2);
    } while (*(int *)(lVar4 + 0xe4) != 0);
    thunk_FUN_0408f364();
  } while( true );
  while( true ) {
    uVar1 = *(ushort *)(unaff_x22 + (long)(int)unaff_w24 * 2);
    unaff_x27 = (ulong)uVar1;
    if (uVar1 != 0x30) break;
LAB_074efc04:
    unaff_w24 = unaff_w24 + 1;
    if (unaff_w21 <= unaff_w24) {
      lVar8 = 0;
      goto LAB_074efdec;
    }
  }
  if ((uVar1 < uVar9) && (*(int *)(lVar5 + unaff_x27 * 4 + 0x20) != 0xff)) {
LAB_074efce0:
    if (uVar9 <= (uint)unaff_x27) {
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling:
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    uVar3 = unaff_w24 + 0x10;
    lVar8 = (long)*(int *)(lVar5 + (unaff_x27 & 0xffffffff) * 4 + 0x20);
    iVar6 = 1;
    do {
      if (unaff_w21 <= unaff_w24 + iVar6) goto LAB_074efdec;
      uVar1 = *(ushort *)(unaff_x22 + (long)(int)(unaff_w24 + iVar6) * 2);
      unaff_x27 = (ulong)uVar1;
      if ((uVar9 <= uVar1) || (iVar2 = *(int *)(lVar5 + unaff_x27 * 4 + 0x20), iVar2 == 0xff)) {
        uVar9 = 0;
        uVar3 = unaff_w24 + iVar6;
        goto LAB_074efd68;
      }
      iVar6 = iVar6 + 1;
      lVar8 = (long)iVar2 + lVar8 * 0x10;
    } while (iVar6 != 0x10);
    if (unaff_w21 <= uVar3) {
LAB_074efdec:
      uVar3 = 1;
      goto LAB_074efc68;
    }
    uVar1 = *(ushort *)(unaff_x22 + (long)(int)uVar3 * 2);
    unaff_x27 = (ulong)uVar1;
    if ((uVar9 <= uVar1) || (*(int *)(lVar5 + unaff_x27 * 4 + 0x20) == 0xff)) {
      uVar9 = 0;
      goto LAB_074efd68;
    }
    uVar3 = unaff_w24 + 0x11;
    if (uVar3 < unaff_w21) {
      do {
        uVar1 = *(ushort *)(unaff_x22 + (long)(int)uVar3 * 2);
        unaff_x27 = (ulong)uVar1;
        if ((uVar9 <= uVar1) || (*(int *)(lVar5 + unaff_x27 * 4 + 0x20) == 0xff)) {
          uVar9 = 1;
          goto LAB_074efd68;
        }
        uVar3 = uVar3 + 1;
      } while (unaff_w21 != uVar3);
    }
  }
  else {
    lVar8 = 0;
    uVar9 = 0;
    uVar3 = unaff_w24;
LAB_074efd68:
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    if (((int)unaff_x27 - 9U < 5) || ((int)unaff_x27 == 0x20)) {
      if ((unaff_w23 >> 1 & 1) == 0) {
LAB_074efc60:
        lVar8 = 0;
        uVar3 = 0;
        goto LAB_074efc68;
      }
      uVar3 = uVar3 + 1;
      if ((int)uVar3 < (int)unaff_w21) {
        puVar7 = (ushort *)(unaff_x22 + (long)(int)uVar3 * 2);
        do {
          if (unaff_w21 <= uVar3)
          goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling;
          uVar1 = *puVar7;
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_074efdd8;
          uVar3 = uVar3 + 1;
          puVar7 = puVar7 + 1;
        } while (unaff_w21 != uVar3);
      }
      else {
LAB_074efdd8:
        if (uVar3 < unaff_w21) goto LAB_074efdfc;
      }
      if (uVar9 == 0) goto LAB_074efdec;
    }
    else {
LAB_074efdfc:
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar3 = FUN_074f172c();
      if ((uVar3 & 1) == 0) {
        lVar8 = 0;
      }
      if ((uVar3 & 1 & uVar9) == 0) goto LAB_074efc68;
    }
  }
  lVar8 = 0;
  uVar3 = 0;
  *unaff_x20 = 1;
LAB_074efc68:
  *unaff_x19 = lVar8;
  return uVar3 & 1;
}


