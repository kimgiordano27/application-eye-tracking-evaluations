/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_DateParseHandling
ENTRY_POINT: 061e2680
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializerSettings__get_DateParseHandling(void)

{
  long lVar1;
  long unaff_x19;
  
  lVar1 = *(long *)(unaff_x19 + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if (*(uint *)(unaff_x19 + 0x18) < *(uint *)(lVar1 + 0x18)) {
    return *(undefined8 *)(lVar1 + (long)(int)*(uint *)(unaff_x19 + 0x18) * 8 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}


