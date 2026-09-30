/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_NullValueHandling
ENTRY_POINT: 074efd64
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling(long param_1)

{
  ushort uVar1;
  uint uVar2;
  int in_w10;
  int in_w11;
  undefined8 *unaff_x19;
  undefined1 *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  ushort *puVar3;
  long *unaff_x25;
  undefined8 unaff_x26;
  int unaff_w27;
  uint unaff_w28;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  if ((unaff_w27 - 9U < 5) || (unaff_w27 == 0x20)) {
    if ((unaff_w23 >> 1 & 1) == 0) {
      unaff_x26 = 0;
      uVar2 = 0;
      goto LAB_074efc68;
    }
    uVar2 = in_w10 + in_w11 + 1;
    if ((int)uVar2 < (int)unaff_w21) {
      puVar3 = (ushort *)(unaff_x22 + (long)(int)uVar2 * 2);
      do {
        if (unaff_w21 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_04031894();
        }
        uVar1 = *puVar3;
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_074efdd8;
        uVar2 = uVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (unaff_w21 != uVar2);
    }
    else {
LAB_074efdd8:
      if (uVar2 < unaff_w21) goto LAB_074efdfc;
    }
    if (unaff_w28 == 0) {
      uVar2 = 1;
      goto LAB_074efc68;
    }
  }
  else {
LAB_074efdfc:
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar2 = FUN_074f172c();
    if ((uVar2 & 1) == 0) {
      unaff_x26 = 0;
    }
    if ((uVar2 & 1 & unaff_w28) == 0) goto LAB_074efc68;
  }
  unaff_x26 = 0;
  uVar2 = 0;
  *unaff_x20 = 1;
LAB_074efc68:
  *unaff_x19 = unaff_x26;
  return uVar2 & 1;
}


