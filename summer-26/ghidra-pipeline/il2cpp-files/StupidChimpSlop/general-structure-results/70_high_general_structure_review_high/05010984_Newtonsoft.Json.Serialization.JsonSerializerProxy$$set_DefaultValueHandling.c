/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_DefaultValueHandling
ENTRY_POINT: 05010984
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerProxy__set_DefaultValueHandling(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  int in_w8;
  long unaff_x24;
  long *unaff_x25;
  undefined8 uStack0000000000000000;
  long in_stack_00000088;
  
  uStack0000000000000000 = param_1;
  if (in_w8 == 0) {
    thunk_FUN_02dabd98();
  }
  uVar2 = FUN_0500f824();
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar1 = FUN_0500fe28();
  }
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000088) {
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


