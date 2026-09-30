/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateMultidimensionalArray
ENTRY_POINT: 074e4e90
PROGRAM: m3ar-libil2cpp.so
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
  undefined8 uVar1;
  undefined4 unaff_w20;
  long *unaff_x22;
  long unaff_x23;
  
  FUN_0403162c(PTR_DAT_08f9ec58);
  FUN_0403162c(PTR_DAT_08f8bbd0);
  FUN_0403162c(PTR_DAT_08f8bbd8);
  *(undefined1 *)(unaff_x23 + 0xec9) = 1;
  uVar1 = FUN_04bf9894();
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_0408f364(*unaff_x22);
  }
  FUN_074e4f04(uVar1,unaff_w20);
  return;
}


