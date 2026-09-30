/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HandleError
ENTRY_POINT: 055d0368
PROGRAM: beastcraft-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HandleError(long param_1)

{
  long unaff_x19;
  
  if (unaff_x19 != 0) {
    *(undefined8 *)(unaff_x19 + 0x28) = **(undefined8 **)(param_1 + 0xb8);
    thunk_FUN_02ee2be8();
    FUN_0567d2e8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


