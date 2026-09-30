/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_FloatFormatHandling
ENTRY_POINT: 0170f6d0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_FloatFormatHandling(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x110) == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar1 = FUN_0172a91c(*(long *)(param_1 + 0x10),0);
    *(undefined8 *)(param_1 + 0x110) = uVar1;
  }
  return;
}


