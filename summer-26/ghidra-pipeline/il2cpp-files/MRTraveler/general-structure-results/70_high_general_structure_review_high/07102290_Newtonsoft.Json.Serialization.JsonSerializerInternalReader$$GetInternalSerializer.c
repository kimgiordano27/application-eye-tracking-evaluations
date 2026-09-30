/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetInternalSerializer
ENTRY_POINT: 07102290
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


float Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                (float param_1,float param_2)

{
  long *unaff_x19;
  float fVar1;
  float unaff_s8;
  float __x;
  
  __x = (float)(int)(unaff_s8 + param_1);
  if (param_2 + param_1 == unaff_s8) {
    if (*(int *)(*unaff_x19 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    fVar1 = fmodf(__x,2.0);
    if (fVar1 != 0.0) {
      __x = __x + -1.0;
    }
  }
  if (*(int *)(*unaff_x19 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar1 = -__x;
  if (-1 < (int)((uint)__x ^ (uint)unaff_s8)) {
    fVar1 = __x;
  }
  return fVar1;
}


