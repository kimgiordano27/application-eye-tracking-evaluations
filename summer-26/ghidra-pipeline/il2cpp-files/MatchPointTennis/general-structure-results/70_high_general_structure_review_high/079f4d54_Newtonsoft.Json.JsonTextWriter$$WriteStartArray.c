/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$WriteStartArray
ENTRY_POINT: 079f4d54
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;data_collection;frame_behavior
EVIDENCE: strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_4;frame_or_lifecycle_behavior
*/


void Newtonsoft_Json_JsonTextWriter__WriteStartArray(long param_1,long *param_2)

{
  undefined8 uVar1;
  
  (**(code **)(param_1 + 0x1b8))(param_2,*(undefined8 *)(param_1 + 0x1c0));
  uVar1 = FUN_078b5cd8();
                    /* WARNING: Could not recover jumptable at 0x079f4da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x298))(param_2,uVar1,*(undefined8 *)(*param_2 + 0x2a0));
  return;
}


