/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_NullValueHandling
ENTRY_POINT: 04f9e140
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


void Newtonsoft_Json_JsonSerializerSettings__set_NullValueHandling(void)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x21;
  
  lVar1 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x30);
  if (lVar1 != 0) {
    FUN_048956dc(lVar1,*(undefined8 *)(unaff_x19 + 0x48));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


