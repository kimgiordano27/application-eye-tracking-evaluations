/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_DateParseHandling
ENTRY_POINT: 0170f618
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_DateParseHandling(void)

{
  long lVar1;
  long unaff_x19;
  
  lVar1 = FUN_0170f640();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(int *)(lVar1 + 0x18) != 0) {
    *(undefined8 *)(unaff_x19 + 0xd8) = *(undefined8 *)(lVar1 + 0x20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


