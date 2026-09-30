/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$.ctor
ENTRY_POINT: 04d096d4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined2 Newtonsoft_Json_JsonSerializer___ctor(long param_1)

{
  long lVar1;
  int unaff_w21;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (unaff_w21 - 0x2c00U < *(uint *)(lVar1 + 0x18)) {
    return *(undefined2 *)(lVar1 + (ulong)(unaff_w21 - 0x2c00U) * 2 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


