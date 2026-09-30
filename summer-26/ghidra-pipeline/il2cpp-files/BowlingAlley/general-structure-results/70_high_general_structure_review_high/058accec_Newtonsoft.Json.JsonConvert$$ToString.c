/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$ToString
ENTRY_POINT: 058accec
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;weak_data_support;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonConvert__ToString(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int in_w8;
  long unaff_x20;
  long unaff_x21;
  
  if (in_w8 == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07286280);
    *(undefined1 *)(unaff_x21 + 0x6c2) = 1;
  }
  uVar1 = System_Convert__ToSByte();
  Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteStartArray
            (uVar1,*(undefined4 *)(unaff_x20 + 0x10),param_2,0x1000,0);
  return;
}


