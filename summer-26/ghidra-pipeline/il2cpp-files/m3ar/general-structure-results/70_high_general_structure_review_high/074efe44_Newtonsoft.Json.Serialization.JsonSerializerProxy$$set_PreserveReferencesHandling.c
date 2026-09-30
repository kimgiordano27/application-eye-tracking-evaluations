/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_PreserveReferencesHandling
ENTRY_POINT: 074efe44
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x074efdec) */

uint Newtonsoft_Json_Serialization_JsonSerializerProxy__set_PreserveReferencesHandling
               (long param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  uint in_w9;
  undefined8 *unaff_x19;
  undefined1 *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  ushort *puVar3;
  uint unaff_w24;
  long *unaff_x25;
  undefined8 unaff_x26;
  
  if (unaff_w24 < unaff_w21) {
    do {
      uVar1 = *(ushort *)(unaff_x22 + (long)(int)unaff_w24 * 2);
      uVar2 = (uint)uVar1;
      if ((in_w9 <= uVar2) || (*(int *)(param_1 + (ulong)uVar1 * 4 + 0x20) == 0xff)) {
        if (*(int *)(param_2 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_074efdfc;
        if ((unaff_w23 >> 1 & 1) == 0) {
          unaff_x26 = 0;
          uVar2 = 0;
          goto LAB_074efc68;
        }
        uVar2 = unaff_w24 + 1;
        if ((int)unaff_w21 <= (int)uVar2) goto LAB_074efdd8;
        puVar3 = (ushort *)(unaff_x22 + (long)(int)uVar2 * 2);
        goto LAB_074efd94;
      }
      unaff_w24 = unaff_w24 + 1;
    } while (unaff_w21 != unaff_w24);
  }
  goto FUN_074efe2c;
LAB_074efdd8:
  if (uVar2 < unaff_w21) {
LAB_074efdfc:
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar2 = FUN_074f172c();
    if ((uVar2 & 1) == 0) {
      unaff_x26 = 0;
    }
    if ((uVar2 & 1) == 0) goto LAB_074efc68;
  }
  goto FUN_074efe2c;
  while( true ) {
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 1;
    if (unaff_w21 == uVar2) break;
LAB_074efd94:
    if (unaff_w21 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    uVar1 = *puVar3;
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_074efdd8;
  }
FUN_074efe2c:
  unaff_x26 = 0;
  uVar2 = 0;
  *unaff_x20 = 1;
LAB_074efc68:
  *unaff_x19 = unaff_x26;
  return uVar2 & 1;
}


