/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_CheckAdditionalContent
ENTRY_POINT: 07613750
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_CheckAdditionalContent(void)

{
  undefined4 in_w8;
  long unaff_x19;
  long unaff_x20;
  
  *(undefined4 *)(unaff_x20 + -8) = 0;
  *(undefined4 *)(unaff_x20 + -4) = in_w8;
  thunk_FUN_040ec700();
  if (*(long *)(unaff_x20 + -0x10) != 0) {
    if (*(int *)(*(long *)(unaff_x20 + -0x10) + 0x20) == 0) {
      *(undefined4 *)(unaff_x19 + 0x18) = 0xffffffff;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


