/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_DateTimeZoneHandling
ENTRY_POINT: 04f9b91c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04f9b97c) */

undefined8 Newtonsoft_Json_JsonSerializer__set_DateTimeZoneHandling(long param_1)

{
  undefined4 unaff_w20;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  if (param_1 != 0) {
    FUN_047cadf0(param_1,unaff_w20,in_stack_00000008,*(undefined8 *)PTR_DAT_067781d0);
    if (in_stack_00000000._4_1_ != '\0') {
      thunk_FUN_02d6ec70();
    }
    return in_stack_00000008;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


