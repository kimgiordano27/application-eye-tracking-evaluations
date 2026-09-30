/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetExpectedDescription
ENTRY_POINT: 058fb05c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetExpectedDescription
               (long *param_1)

{
  long lVar1;
  long *unaff_x19;
  
  if (*unaff_x19 != *param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_03189058();
  }
  lVar1 = unaff_x19[0xe];
  unaff_x19[0xe] = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x058fb090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


