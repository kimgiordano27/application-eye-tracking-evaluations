/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
ENTRY_POINT: 07a4f06c
PROGRAM: MatchPointTennis-libil2cpp.so
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
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray(void)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  iVar2 = FUN_07a4efac();
  uVar3 = FUN_07a4efac();
  iVar1 = -iVar2;
  if ((uVar3 & 1) != 0) {
    iVar1 = iVar2;
  }
  auVar4._0_8_ = ((double)iVar1 + DAT_01c74c98) / DAT_01c75268;
  auVar4._8_8_ = 0;
  return auVar4;
}


