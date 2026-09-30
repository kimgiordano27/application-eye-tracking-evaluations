/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_FloatParseHandling
ENTRY_POINT: 0178aec4
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


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__get_FloatParseHandling(void)

{
  int in_w8;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  
  while( true ) {
    if (in_w8 == 0) {
      thunk_FUN_00d32864();
    }
    if (unaff_x20 == unaff_x19) {
      return 1;
    }
    unaff_x20 = (long *)(**(code **)(*unaff_x20 + 0x888))
                                  (unaff_x20,*(undefined8 *)(*unaff_x20 + 0x890));
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (unaff_x20 == (long *)0x0) break;
    in_w8 = *(int *)(*unaff_x21 + 0xe0);
  }
  return 0;
}


