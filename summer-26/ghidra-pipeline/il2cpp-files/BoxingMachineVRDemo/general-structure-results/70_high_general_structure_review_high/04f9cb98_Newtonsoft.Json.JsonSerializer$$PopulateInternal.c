/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$PopulateInternal
ENTRY_POINT: 04f9cb98
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializer__PopulateInternal(void)

{
  long lVar1;
  byte unaff_w19;
  
  lVar1 = thunk_FUN_02d9d534();
  FUN_04f6ec2c();
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x10) = unaff_w19 & 1;
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


