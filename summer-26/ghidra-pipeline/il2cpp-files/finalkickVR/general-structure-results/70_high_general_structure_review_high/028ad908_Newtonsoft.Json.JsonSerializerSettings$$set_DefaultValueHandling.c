/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_DefaultValueHandling
ENTRY_POINT: 028ad908
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_JsonSerializerSettings__set_DefaultValueHandling(void)

{
  long lVar1;
  byte in_w8;
  long unaff_x29;
  uint uStack000000000000000c;
  
  *(byte *)(unaff_x29 + -0x91) = in_w8 & 1;
  uStack000000000000000c = (uint)*(byte *)(unaff_x29 + -0x91);
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - *(long *)(unaff_x29 + -8);
  if (lVar1 == 0) {
    return uStack000000000000000c & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


