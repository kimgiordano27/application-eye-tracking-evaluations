/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$ToString
ENTRY_POINT: 058acae8
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


void Newtonsoft_Json_JsonConvert__ToString(void)

{
  int iVar1;
  undefined8 uVar2;
  int unaff_w19;
  long unaff_x20;
  
  if (DAT_076d46c2 == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_07286280);
    DAT_076d46c2 = '\x01';
  }
  uVar2 = System_Convert__ToSByte();
  iVar1 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteStartArray
                    (uVar2,*(undefined4 *)(unaff_x20 + 0x10),unaff_w19,0x1800,0);
  if (((unaff_w19 == 10) || (0xffff < iVar1)) && (iVar1 != (short)iVar1)) {
    FUN_02d9d3e0(*(undefined8 *)PTR_DAT_0727f070);
                    /* WARNING: Subroutine does not return */
    FUN_058a83c8();
  }
  return;
}


