/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteDynamicProperty
ENTRY_POINT: 074c49a8
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteDynamicProperty
               (long param_1)

{
  long unaff_x19;
  long unaff_x21;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  FUN_074c4a14(unaff_x21 + 0x20);
  if (unaff_x19 != 0) {
    FUN_073b1494();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


