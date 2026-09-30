/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_ObjectCreationHandling
ENTRY_POINT: 028ad818
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


uint Newtonsoft_Json_JsonSerializerSettings__set_ObjectCreationHandling(void)

{
  long lVar1;
  long unaff_x29;
  uint uStack000000000000000c;
  undefined8 in_stack_000000a0;
  byte bStack00000000000000b4;
  
  bStack00000000000000b4 =
       Number_TryParseUInt32HexNumberStyle_mE148D787B37F9AA38A400C87C32D73C55E0CC22B
                 (in_stack_000000a0);
  bStack00000000000000b4 = bStack00000000000000b4 & 1;
  *(byte *)(unaff_x29 + -0x91) = bStack00000000000000b4;
  uStack000000000000000c = (uint)*(byte *)(unaff_x29 + -0x91);
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - *(long *)(unaff_x29 + -8);
  if (lVar1 == 0) {
    return uStack000000000000000c & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


