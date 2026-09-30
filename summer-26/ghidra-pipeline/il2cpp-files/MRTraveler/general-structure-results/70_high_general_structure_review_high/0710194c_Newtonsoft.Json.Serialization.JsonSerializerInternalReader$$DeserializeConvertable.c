/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$DeserializeConvertable
ENTRY_POINT: 0710194c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined1  [16]
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__DeserializeConvertable(double param_1)

{
  undefined1 auVar1 [16];
  double unaff_d8;
  double in_stack_00000008;
  
  if (param_1 == 0.5) {
    if (((long)in_stack_00000008 & 1U) != 0) {
      in_stack_00000008 = in_stack_00000008 + 1.0;
    }
  }
  else {
    in_stack_00000008 = (double)(long)(unaff_d8 + 0.5);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = in_stack_00000008;
  return auVar1;
}


