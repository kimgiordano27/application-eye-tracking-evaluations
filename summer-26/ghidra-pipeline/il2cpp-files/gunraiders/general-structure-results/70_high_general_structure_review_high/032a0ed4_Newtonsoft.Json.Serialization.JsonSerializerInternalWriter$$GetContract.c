/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetContract
ENTRY_POINT: 032a0ed4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetContract(long param_1)

{
  long *plVar1;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  
  if (param_1 != in_x9) {
    unaff_x19 = 0;
  }
  if (unaff_x19 != 0) {
    plVar1 = *(long **)(unaff_x20 + 0x10);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032a0f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x228))(plVar1,unaff_x19,1,*(undefined8 *)(*plVar1 + 0x230));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
                    /* WARNING: Could not recover jumptable at 0x032a0f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x158))();
  return;
}


