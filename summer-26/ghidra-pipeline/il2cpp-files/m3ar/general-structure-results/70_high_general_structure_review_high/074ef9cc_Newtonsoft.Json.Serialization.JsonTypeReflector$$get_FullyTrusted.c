/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonTypeReflector$$get_FullyTrusted
ENTRY_POINT: 074ef9cc
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


undefined8 Newtonsoft_Json_Serialization_JsonTypeReflector__get_FullyTrusted(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int in_w8;
  int unaff_w19;
  ushort *puVar4;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar5;
  uint unaff_w25;
  long *unaff_x26;
  long lVar6;
  long unaff_x28;
  ulong unaff_x29;
  long *in_stack_00000010;
  undefined1 *in_stack_00000018;
  
  while( true ) {
    if (in_w8 == 0) {
      thunk_FUN_0408f364();
      param_1 = *unaff_x26;
    }
    if (9 < unaff_w25 - 0x30) {
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      if ((4 < unaff_w25 - 9) && (unaff_w25 != 0x20))
      goto Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteDynamicProperty;
      if ((unaff_w22 >> 1 & 1) == 0) goto LAB_074efb08;
      uVar5 = unaff_w24 + 1;
      if ((int)unaff_w23 <= (int)uVar5) goto LAB_074efac8;
      puVar4 = (ushort *)(unaff_x21 + (long)(int)uVar5 * 2);
      goto LAB_074efa80;
    }
    unaff_w24 = unaff_w24 + 1;
    unaff_x29 = 1;
    if (unaff_w23 == unaff_w24) break;
    in_w8 = *(int *)(param_1 + 0xe4);
    unaff_w25 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
  }
  goto LAB_074efb1c;
LAB_074efac8:
  if (uVar5 < unaff_w23) {
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteDynamicProperty:
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar2 = FUN_074f172c();
    if ((uVar2 & 1) == 0) {
LAB_074efb08:
      lVar6 = 0;
      uVar3 = 0;
      goto LAB_074efb40;
    }
  }
  goto LAB_074efb18;
  while( true ) {
    uVar5 = uVar5 + 1;
    puVar4 = puVar4 + 1;
    if (unaff_w23 == uVar5) break;
LAB_074efa80:
    if (unaff_w23 <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    uVar1 = *puVar4;
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_074efac8;
  }
LAB_074efb18:
  if ((unaff_x29 & 1) == 0) {
    uVar3 = 1;
    lVar6 = unaff_x28 * unaff_w19;
  }
  else {
LAB_074efb1c:
    lVar6 = 0;
    uVar3 = 0;
    *in_stack_00000018 = 1;
  }
LAB_074efb40:
  *in_stack_00000010 = lVar6;
  return uVar3;
}


