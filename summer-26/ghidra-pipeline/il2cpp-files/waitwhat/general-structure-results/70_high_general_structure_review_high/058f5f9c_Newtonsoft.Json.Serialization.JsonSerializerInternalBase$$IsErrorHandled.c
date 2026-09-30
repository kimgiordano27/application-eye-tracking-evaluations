/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$IsErrorHandled
ENTRY_POINT: 058f5f9c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase__IsErrorHandled(void)

{
  int in_w8;
  long unaff_x21;
  
  if (0 < in_w8) {
    FUN_058f37c8();
  }
  if (*(long **)(unaff_x21 + 0x28) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x058f5fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(unaff_x21 + 0x28) + 0x268))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


