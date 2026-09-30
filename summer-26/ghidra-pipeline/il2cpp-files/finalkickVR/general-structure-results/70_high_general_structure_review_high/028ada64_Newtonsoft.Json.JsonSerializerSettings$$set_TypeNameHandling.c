/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_TypeNameHandling
ENTRY_POINT: 028ada64
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


uint Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(void)

{
  long lVar1;
  long unaff_x29;
  uint uStack000000000000000c;
  long in_stack_00000038;
  byte bStack0000000000000104;
  
  *(undefined8 *)(in_stack_00000038 + 0x28) = *(undefined8 *)(in_stack_00000038 + 0x58);
  *(undefined8 *)(in_stack_00000038 + 0x20) = *(undefined8 *)(in_stack_00000038 + 0x50);
  bStack0000000000000104 =
       Number_TryParseUInt64IntegerStyle_mE8C87C94A5186BE76D3FA71C4117F5DB6D77EEDD
                 (*(undefined8 *)(in_stack_00000038 + 0x20),
                  *(undefined8 *)(in_stack_00000038 + 0x28),*(undefined4 *)(unaff_x29 + -0xf4),
                  *(undefined8 *)(in_stack_00000038 + 0x40),
                  *(undefined8 *)(in_stack_00000038 + 0x38),unaff_x29 + -0xcc,0);
  bStack0000000000000104 = bStack0000000000000104 & 1;
  *(byte *)(unaff_x29 + -0x91) = bStack0000000000000104;
  uStack000000000000000c = (uint)*(byte *)(unaff_x29 + -0x91);
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - *(long *)(unaff_x29 + -8);
  if (lVar1 == 0) {
    return uStack000000000000000c & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


