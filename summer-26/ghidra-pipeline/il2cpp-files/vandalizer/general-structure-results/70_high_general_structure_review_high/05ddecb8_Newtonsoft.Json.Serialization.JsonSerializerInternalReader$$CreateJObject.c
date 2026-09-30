/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateJObject
ENTRY_POINT: 05ddecb8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateJObject(void)

{
  uint in_w9;
  int unaff_w22;
  long unaff_x29;
  
  if (in_w9 <= unaff_w22 - 1U) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
  if (*(long *)(*(long *)(unaff_x29 + -0xa0) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)(unaff_w22 - 1U) * 4) ==
           *(int *)(unaff_x29 + -0x5c);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


