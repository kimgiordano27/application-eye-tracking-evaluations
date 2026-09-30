/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewList
ENTRY_POINT: 0624e088
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewList(void)

{
  ushort uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int *unaff_x19;
  ushort *puVar4;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  int unaff_w24;
  uint uVar5;
  int unaff_w25;
  int unaff_w26;
  undefined1 *unaff_x27;
  uint unaff_w28;
  long *unaff_x29;
  ulong in_stack_00000018;
  
  thunk_FUN_03798b70();
  if ((unaff_w25 - 9U < 5) || (unaff_w25 == 0x20)) {
    if ((unaff_w22 >> 1 & 1) == 0) goto LAB_0624e15c;
    uVar5 = unaff_w24 + 1;
    if ((int)unaff_w23 <= (int)uVar5) {
LAB_0624e0f8:
      if (uVar5 < unaff_w23) goto LAB_0624e10c;
      goto LAB_0624e138;
    }
    puVar4 = (ushort *)(unaff_x21 + (long)(int)uVar5 * 2);
    do {
      if (unaff_w23 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      uVar1 = *puVar4;
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0624e0f8;
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (unaff_w23 != uVar5);
  }
  else {
LAB_0624e10c:
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar2 = FUN_0624f240();
    if ((uVar2 & 1) == 0) {
LAB_0624e15c:
      unaff_w26 = 0;
      uVar3 = 0;
      goto LAB_0624e164;
    }
LAB_0624e138:
    unaff_w28 = unaff_w28 & 1;
  }
  if (((unaff_w28 & 1) == 0) && ((in_stack_00000018 & 0x100000000) != 0 || unaff_w26 == 0)) {
    uVar3 = 1;
  }
  else {
    unaff_w26 = 0;
    uVar3 = 0;
    *unaff_x27 = 1;
  }
LAB_0624e164:
  *unaff_x19 = unaff_w26;
  return uVar3;
}


