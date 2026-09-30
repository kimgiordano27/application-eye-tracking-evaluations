/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$ToString
ENTRY_POINT: 058aca04
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;data_collection;weak_data_support;telemetry;frame_behavior
EVIDENCE: strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void Newtonsoft_Json_JsonConvert__ToString
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int unaff_w19;
  
  iVar1 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteStartArray
                    (param_1,param_2,unaff_w19,param_4,0);
  if (((unaff_w19 == 10) || (0xff < iVar1)) && (iVar1 != (char)iVar1)) {
    FUN_02d9d3e0(*(undefined8 *)PTR_DAT_0727f070);
                    /* WARNING: Subroutine does not return */
    FUN_058a837c();
  }
  return;
}


