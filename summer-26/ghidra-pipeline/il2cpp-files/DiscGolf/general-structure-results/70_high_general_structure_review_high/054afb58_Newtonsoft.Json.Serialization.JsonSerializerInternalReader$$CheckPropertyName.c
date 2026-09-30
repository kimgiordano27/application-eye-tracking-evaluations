/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CheckPropertyName
ENTRY_POINT: 054afb58
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CheckPropertyName(void)

{
  int iVar1;
  long *unaff_x19;
  long *unaff_x20;
  long in_stack_00000018;
  
  while( true ) {
    if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    iVar1 = (**(code **)(*unaff_x20 + 0x358))();
    if (iVar1 == 0) break;
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    (**(code **)(*unaff_x19 + 0x388))();
  }
  FUN_02ced874(&stack0x00000008);
  return;
}


