/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$IsSpecified
ENTRY_POINT: 0718bd88
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


bool Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__IsSpecified(void)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  uVar2 = FUN_071c5e1c();
  uVar3 = FUN_071c5e1c();
  if (uVar3 < uVar2) {
    do {
      bVar1 = *(char *)(unaff_x20 + unaff_x21) == *(char *)(unaff_x19 + unaff_x21);
      if (!bVar1) {
        return bVar1;
      }
      unaff_x21 = FUN_071c5e28(unaff_x21,1,0);
      uVar2 = FUN_071c5e1c();
      uVar3 = FUN_071c5e1c(unaff_x21,0);
    } while (uVar3 < uVar2);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


