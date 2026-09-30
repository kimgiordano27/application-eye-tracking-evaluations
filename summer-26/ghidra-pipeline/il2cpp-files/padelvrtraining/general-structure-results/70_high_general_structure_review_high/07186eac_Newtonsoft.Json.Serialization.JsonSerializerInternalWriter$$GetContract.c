/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetContract
ENTRY_POINT: 07186eac
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetContract(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0x1d) & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091a13f8);
    *(undefined1 *)(unaff_x20 + 0x1d) = 1;
  }
  lVar1 = *(long *)(param_1 + 0x90);
  if (lVar1 == 0) {
    lVar1 = **(long **)(*(long *)PTR_DAT_091a13f8 + 0xb8);
  }
  return lVar1;
}


