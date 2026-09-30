/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Create
ENTRY_POINT: 0559bd08
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


undefined8 Newtonsoft_Json_JsonSerializer__Create(long param_1)

{
  undefined8 *unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    *unaff_x19 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
    thunk_FUN_02f411dc();
    return *unaff_x19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


