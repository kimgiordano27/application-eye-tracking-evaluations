/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c__DisplayClass38_0$$<CreateObjectUsingCreatorWithParameters>b__1
ENTRY_POINT: 076832b8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__DisplayClass38_0__<CreateObjectUsingCreatorWithParameters>b__1
          (ulong param_1)

{
  long *unaff_x19;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 076831e0 with catch @ 076832cc
                        */
    if (unaff_x21 < 0) {
      return 0;
    }
  }
  else {
    unaff_x21 = -unaff_x21;
    if (0 < unaff_x21) {
      return 0;
    }
  }
  *unaff_x19 = unaff_x21;
  return 1;
}


