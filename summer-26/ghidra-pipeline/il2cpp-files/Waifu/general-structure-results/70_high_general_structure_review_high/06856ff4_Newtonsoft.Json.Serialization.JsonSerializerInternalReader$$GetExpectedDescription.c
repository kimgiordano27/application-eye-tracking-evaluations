/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetExpectedDescription
ENTRY_POINT: 06856ff4
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetExpectedDescription(long param_1)

{
  int iVar1;
  int unaff_w20;
  long unaff_x22;
  long in_stack_00000018;
  
  if (param_1 < 1) {
    iVar1 = 3;
  }
  else {
    iVar1 = 3;
    do {
      param_1 = param_1 * 0x10000;
      iVar1 = iVar1 + -1;
    } while (0 < param_1);
  }
  if (*(long *)(unaff_x22 + 0x28) != in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 + unaff_w20;
}


