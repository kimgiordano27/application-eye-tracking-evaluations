/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$ValidateArray
ENTRY_POINT: 074a60d0
PROGRAM: m3ar-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Newtonsoft_Json_JsonValidatingReader__ValidateArray(long param_1)

{
  long *unaff_x20;
  long unaff_x21;
  
  FUN_0403162c(*(undefined8 *)(param_1 + 0x710));
  FUN_0403162c(PTR_DAT_08f66098);
  *(undefined1 *)(unaff_x21 + 0xc21) = 1;
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  if (DAT_09546d08 == '\0') {
    FUN_0403162c(PTR_DAT_08f8d710);
    DAT_09546d08 = '\x01';
  }
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  FUN_074a6154();
  return;
}


