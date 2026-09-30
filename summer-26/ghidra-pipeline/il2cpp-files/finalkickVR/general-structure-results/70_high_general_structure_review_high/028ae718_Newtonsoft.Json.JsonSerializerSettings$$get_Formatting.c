/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_Formatting
ENTRY_POINT: 028ae718
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


uint Newtonsoft_Json_JsonSerializerSettings__get_Formatting
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5)

{
  long lVar1;
  long unaff_x29;
  undefined8 uVar2;
  uint uStack000000000000000c;
  long in_stack_00000040;
  undefined8 *in_stack_00000078;
  
  Decimal__ctor_mC089D0AF6A28E017DE6F2F0966D8EBEBFE2DAAF7
            (param_1,param_4,param_4,param_4,param_5,0x1c);
  uVar2 = *(undefined8 *)(in_stack_00000040 + 0x1f0);
  in_stack_00000078[1] = *(undefined8 *)(in_stack_00000040 + 0x1f8);
  *in_stack_00000078 = uVar2;
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


