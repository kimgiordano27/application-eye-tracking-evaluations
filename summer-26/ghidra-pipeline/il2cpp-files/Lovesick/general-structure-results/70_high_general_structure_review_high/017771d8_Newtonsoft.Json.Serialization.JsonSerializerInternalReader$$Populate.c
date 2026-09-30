/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$Populate
ENTRY_POINT: 017771d8
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__Populate(ulong param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x25;
  long in_stack_00000098;
  
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((param_1 & 1) == 0) {
    uVar1 = *(undefined8 *)(unaff_x19 + 0x70);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x19 + 0x78);
  }
  if (*(long *)(unaff_x25 + 0x28) == in_stack_00000098) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


