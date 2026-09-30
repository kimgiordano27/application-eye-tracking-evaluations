/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_Context
ENTRY_POINT: 028aacfc
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


undefined8 Newtonsoft_Json_JsonSerializerSettings__get_Context(void)

{
  long lVar1;
  long unaff_x29;
  
  Number_ThrowOverflowOrFormatException_m29582237C4152794070208B1B339D6CA3C9E3A30();
  *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -200);
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - *(long *)(unaff_x29 + -8);
  if (lVar1 == 0) {
    return *(undefined8 *)(unaff_x29 + -0x98);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


