/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteProperty
ENTRY_POINT: 07687424
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteProperty(void)

{
  long lVar1;
  undefined1 in_w8;
  int *unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  
  *(undefined1 *)(unaff_x22 + 0x268) = in_w8;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar1 = ((unaff_x20 & 0xffffffff) * (unaff_x21 >> 0x20) >> 0x20) +
          (unaff_x20 >> 0x20) * (unaff_x21 >> 0x20) +
          ((unaff_x20 >> 0x20) * (unaff_x21 & 0xffffffff) >> 0x20);
  if (-1 < lVar1) {
    lVar1 = lVar1 * 2;
    *unaff_x19 = *unaff_x19 + -1;
  }
  return lVar1;
}


