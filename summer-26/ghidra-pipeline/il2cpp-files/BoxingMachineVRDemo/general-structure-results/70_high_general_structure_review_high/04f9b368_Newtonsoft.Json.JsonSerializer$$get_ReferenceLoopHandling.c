/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_ReferenceLoopHandling
ENTRY_POINT: 04f9b368
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined2 Newtonsoft_Json_JsonSerializer__get_ReferenceLoopHandling(long param_1)

{
  uint unaff_w22;
  long unaff_x24;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (unaff_w22 < *(uint *)(param_1 + 0x18)) {
    return *(undefined2 *)(param_1 + unaff_x24 * 0x10 + 0x28);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


