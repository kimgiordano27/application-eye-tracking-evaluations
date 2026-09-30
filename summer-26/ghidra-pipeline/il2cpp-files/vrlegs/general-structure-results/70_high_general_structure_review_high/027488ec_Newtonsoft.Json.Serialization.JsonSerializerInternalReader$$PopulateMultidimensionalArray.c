/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateMultidimensionalArray
ENTRY_POINT: 027488ec
PROGRAM: vrlegs-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;data_collection;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateMultidimensionalArray(void)

{
  undefined *puVar1;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_01ab69ac(PTR_DAT_03cc41f8);
  FUN_01ab69ac(PTR_DAT_03cbeeb0);
  *(undefined1 *)(unaff_x21 + 0xa0a) = 1;
  puVar1 = PTR_DAT_03cbeeb0;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_0271c4e0(0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)puVar1);
  }
  FUN_02748958();
  return;
}


