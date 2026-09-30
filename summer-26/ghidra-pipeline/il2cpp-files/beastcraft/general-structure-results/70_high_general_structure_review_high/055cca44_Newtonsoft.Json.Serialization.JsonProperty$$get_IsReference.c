/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonProperty$$get_IsReference
ENTRY_POINT: 055cca44
PROGRAM: beastcraft-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonProperty__get_IsReference(void)

{
  int in_w3;
  long *unaff_x20;
  long unaff_x21;
  
  if (in_w3 < 1) {
    if (0 < *(int *)(unaff_x21 + 0x44)) {
      FUN_055c9f94();
    }
  }
  else {
    if (unaff_x20 == (long *)0x0)
    goto Newtonsoft_Json_Serialization_JsonProperty__set_ShouldSerialize;
    (**(code **)(*unaff_x20 + 0x388))();
    *(undefined4 *)(unaff_x21 + 0x3c) = 0;
    *(undefined4 *)(unaff_x21 + 0x40) = 0;
  }
  if (*(long **)(unaff_x21 + 0x28) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x055ccaa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(unaff_x21 + 0x28) + 0x268))();
    return;
  }
Newtonsoft_Json_Serialization_JsonProperty__set_ShouldSerialize:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


