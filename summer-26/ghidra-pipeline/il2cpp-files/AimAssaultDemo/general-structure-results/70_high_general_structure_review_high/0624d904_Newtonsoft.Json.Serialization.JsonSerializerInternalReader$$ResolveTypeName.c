/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolveTypeName
ENTRY_POINT: 0624d904
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolveTypeName(void)

{
  ushort uVar1;
  uint uVar2;
  int in_w8;
  undefined8 *unaff_x19;
  undefined1 *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  ushort *puVar3;
  int unaff_w24;
  long *unaff_x25;
  undefined8 unaff_x26;
  uint unaff_w27;
  int unaff_w28;
  
  if (in_w8 == 0) {
    thunk_FUN_03798b70();
  }
  if ((unaff_w28 - 9U < 5) || (unaff_w28 == 0x20)) {
    if ((unaff_w23 >> 1 & 1) == 0) {
      unaff_x26 = 0;
      uVar2 = 0;
      goto LAB_0624d924;
    }
    uVar2 = unaff_w24 + 1;
    if ((int)uVar2 < (int)unaff_w21) {
      puVar3 = (ushort *)(unaff_x22 + (long)(int)uVar2 * 2);
      do {
        if (unaff_w21 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        uVar1 = *puVar3;
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0624d9a4;
        uVar2 = uVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (unaff_w21 != uVar2);
    }
    else {
LAB_0624d9a4:
      if (uVar2 < unaff_w21) goto LAB_0624d9c0;
    }
    if (unaff_w27 == 0) {
      uVar2 = 1;
      goto LAB_0624d924;
    }
  }
  else {
LAB_0624d9c0:
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar2 = FUN_0624f240();
    if ((uVar2 & 1) == 0) {
      unaff_x26 = 0;
    }
    if ((unaff_w27 & uVar2 & 1) == 0) goto LAB_0624d924;
  }
  unaff_x26 = 0;
  uVar2 = 0;
  *unaff_x20 = 1;
LAB_0624d924:
  *unaff_x19 = unaff_x26;
  return uVar2 & 1;
}


