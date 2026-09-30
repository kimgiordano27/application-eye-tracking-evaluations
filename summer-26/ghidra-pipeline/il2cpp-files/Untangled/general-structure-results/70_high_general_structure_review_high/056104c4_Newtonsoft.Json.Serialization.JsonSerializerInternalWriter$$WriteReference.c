/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteReference
ENTRY_POINT: 056104c4
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteReference(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  long unaff_x19;
  int unaff_w20;
  undefined2 *unaff_x21;
  
  *(int *)(unaff_x19 + 4) = unaff_w20;
  puVar1 = (undefined2 *)FUN_056106b0();
  puVar2 = puVar1;
  if (-1 < unaff_w20 + -1) {
    do {
      unaff_w20 = unaff_w20 + -1;
      puVar1 = puVar2 + 1;
      *puVar2 = *unaff_x21;
      puVar2 = puVar1;
      unaff_x21 = unaff_x21 + 1;
    } while (0 < unaff_w20);
  }
  *puVar1 = 0;
  return;
}


