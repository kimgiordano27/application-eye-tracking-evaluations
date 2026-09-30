/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_MissingMemberHandling
ENTRY_POINT: 04ec5304
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_MissingMemberHandling(undefined8 *param_1)

{
  long lVar1;
  undefined4 unaff_w21;
  long unaff_x25;
  
  *(undefined4 *)(unaff_x25 + 0x38) = unaff_w21;
  *(undefined4 *)(unaff_x25 + 0x3c) = 0xffffffff;
  *(undefined4 *)(unaff_x25 + 0x34) = unaff_w21;
  lVar1 = thunk_FUN_02cea894(*param_1);
  FUN_04ec55bc();
  if (lVar1 != 0) {
    FUN_04ec565c(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


