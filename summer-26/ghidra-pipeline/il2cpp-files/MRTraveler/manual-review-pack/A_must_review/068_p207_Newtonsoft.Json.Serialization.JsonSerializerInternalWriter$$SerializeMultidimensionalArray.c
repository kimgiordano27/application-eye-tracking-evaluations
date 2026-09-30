/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
ENTRY_POINT: 07112078
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;data_collection;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined1  [16]
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
          (long param_1,uint param_2)

{
  int iVar1;
  int unaff_w20;
  undefined1 auVar2 [16];
  
  iVar1 = -unaff_w20;
  if ((param_2 & 1) != 0) {
    iVar1 = unaff_w20;
  }
  auVar2._0_8_ = ((double)iVar1 + *(double *)(param_1 + 0x370)) / DAT_018af7f8;
  auVar2._8_8_ = 0;
  return auVar2;
}


