/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_Formatting
ENTRY_POINT: 028ae784
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


uint Newtonsoft_Json_JsonSerializerSettings__set_Formatting(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x29;
  undefined8 uVar2;
  uint uStack000000000000000c;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  byte bStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined8 in_stack_00000058;
  undefined8 *in_stack_00000068;
  
  Decimal__ctor_mC089D0AF6A28E017DE6F2F0966D8EBEBFE2DAAF7
            (unaff_x29 + -0x38,param_2,in_stack_00000058._4_4_,uStack0000000000000054,
             bStack0000000000000050 & 1,-in_stack_00000048._4_4_);
  uVar2 = *(undefined8 *)(in_stack_00000040 + 0x1e0);
  in_stack_00000068[1] = *(undefined8 *)(in_stack_00000040 + 0x1e8);
  *in_stack_00000068 = uVar2;
  *(undefined1 *)(unaff_x29 + -0x39) = 1;
  uStack000000000000000c = (uint)*(byte *)(unaff_x29 + -0x39);
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - *(long *)(unaff_x29 + -8);
  if (lVar1 == 0) {
    return uStack000000000000000c & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


