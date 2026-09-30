/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_TraceWriter
ENTRY_POINT: 074efc08
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


uint Newtonsoft_Json_Serialization_JsonSerializerProxy__get_TraceWriter(long param_1,long param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint in_w9;
  int iVar4;
  long *unaff_x19;
  undefined1 *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  ushort *puVar5;
  uint unaff_w24;
  long *unaff_x25;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  
  for (; unaff_w24 < unaff_w21; unaff_w24 = unaff_w24 + 1) {
    uVar1 = *(ushort *)(unaff_x22 + (long)(int)unaff_w24 * 2);
    uVar7 = (ulong)uVar1;
    if (uVar1 != 0x30) {
      if ((in_w9 <= uVar1) || (*(int *)(param_1 + uVar7 * 4 + 0x20) == 0xff)) {
        lVar6 = 0;
        uVar8 = 0;
        uVar3 = unaff_w24;
        goto LAB_074efd68;
      }
      if (in_w9 <= uVar1)
      goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling;
      uVar3 = unaff_w24 + 0x10;
      lVar6 = (long)*(int *)(param_1 + (ulong)(uint)uVar1 * 4 + 0x20);
      iVar4 = 1;
      goto LAB_074efcfc;
    }
  }
  lVar6 = 0;
  goto LAB_074efdec;
  while( true ) {
    uVar1 = *(ushort *)(unaff_x22 + (long)(int)(unaff_w24 + iVar4) * 2);
    uVar7 = (ulong)uVar1;
    if ((in_w9 <= uVar1) || (iVar2 = *(int *)(param_1 + uVar7 * 4 + 0x20), iVar2 == 0xff)) {
      uVar8 = 0;
      uVar3 = unaff_w24 + iVar4;
      goto LAB_074efd68;
    }
    iVar4 = iVar4 + 1;
    lVar6 = (long)iVar2 + lVar6 * 0x10;
    if (iVar4 == 0x10) break;
LAB_074efcfc:
    if (unaff_w21 <= unaff_w24 + iVar4) goto LAB_074efdec;
  }
  if (uVar3 < unaff_w21) {
    uVar1 = *(ushort *)(unaff_x22 + (long)(int)uVar3 * 2);
    uVar7 = (ulong)uVar1;
    if ((uVar1 < in_w9) && (*(int *)(param_1 + uVar7 * 4 + 0x20) != 0xff)) {
      uVar3 = unaff_w24 + 0x11;
      if (uVar3 < unaff_w21) {
        do {
          uVar1 = *(ushort *)(unaff_x22 + (long)(int)uVar3 * 2);
          uVar7 = (ulong)uVar1;
          if ((in_w9 <= uVar1) || (*(int *)(param_1 + uVar7 * 4 + 0x20) == 0xff)) {
            uVar8 = 1;
            goto LAB_074efd68;
          }
          uVar3 = uVar3 + 1;
        } while (unaff_w21 != uVar3);
      }
    }
    else {
      uVar8 = 0;
LAB_074efd68:
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      if (((int)uVar7 - 9U < 5) || ((int)uVar7 == 0x20)) {
        if ((unaff_w23 >> 1 & 1) == 0) {
          lVar6 = 0;
          uVar3 = 0;
          goto LAB_074efc68;
        }
        uVar3 = uVar3 + 1;
        if ((int)uVar3 < (int)unaff_w21) {
          puVar5 = (ushort *)(unaff_x22 + (long)(int)uVar3 * 2);
          do {
            if (unaff_w21 <= uVar3) {
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling:
                    /* WARNING: Subroutine does not return */
              FUN_04031894();
            }
            uVar1 = *puVar5;
            if (*(int *)(*unaff_x25 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_074efdd8;
            uVar3 = uVar3 + 1;
            puVar5 = puVar5 + 1;
          } while (unaff_w21 != uVar3);
        }
        else {
LAB_074efdd8:
          if (uVar3 < unaff_w21) goto LAB_074efdfc;
        }
        if (uVar8 == 0) goto LAB_074efdec;
      }
      else {
LAB_074efdfc:
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar3 = FUN_074f172c();
        if ((uVar3 & 1) == 0) {
          lVar6 = 0;
        }
        if ((uVar3 & 1 & uVar8) == 0) goto LAB_074efc68;
      }
    }
    lVar6 = 0;
    uVar3 = 0;
    *unaff_x20 = 1;
    goto LAB_074efc68;
  }
LAB_074efdec:
  uVar3 = 1;
LAB_074efc68:
  *unaff_x19 = lVar6;
  return uVar3 & 1;
}


