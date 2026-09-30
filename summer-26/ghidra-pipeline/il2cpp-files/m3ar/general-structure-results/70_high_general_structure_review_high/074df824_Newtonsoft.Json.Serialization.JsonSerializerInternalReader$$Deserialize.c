/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$Deserialize
ENTRY_POINT: 074df824
PROGRAM: m3ar-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__Deserialize(void)

{
  uint uVar1;
  int in_w8;
  undefined4 in_w9;
  int unaff_w19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  int unaff_w25;
  
  *(undefined4 *)(unaff_x20 + 8) = in_w9;
  if (in_w8 != 0) {
    FUN_0403162c(PTR_DAT_08f6f6a8);
    *(undefined1 *)(unaff_x22 + 0xcbe) = 1;
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar1 = unaff_w25 + unaff_w19 * unaff_w21;
  *(uint *)(unaff_x20 + 0xc) = (uVar1 >> 0x13 | uVar1 * 0x2000) * unaff_w24;
  return;
}


