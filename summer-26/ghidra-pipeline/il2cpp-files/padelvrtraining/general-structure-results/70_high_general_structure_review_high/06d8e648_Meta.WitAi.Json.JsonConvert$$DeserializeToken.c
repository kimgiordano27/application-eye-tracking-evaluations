/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeToken
ENTRY_POINT: 06d8e648
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Meta_WitAi_Json_JsonConvert__DeserializeToken(void)

{
  int iVar1;
  long *unaff_x19;
  
  if (*unaff_x19 != 0) {
    iVar1 = *(int *)(*unaff_x19 + 0x18);
    unaff_x19[2] = 0;
    *(int *)(unaff_x19 + 1) = iVar1 + 1;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


