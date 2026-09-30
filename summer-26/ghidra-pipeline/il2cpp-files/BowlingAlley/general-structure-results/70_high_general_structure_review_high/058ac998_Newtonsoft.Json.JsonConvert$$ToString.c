/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$ToString
ENTRY_POINT: 058ac998
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;weak_data_support;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Newtonsoft_Json_JsonConvert__ToString(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  
  thunk_FUN_032e1da0(*(undefined8 *)(param_1 + 0x70));
  *(undefined1 *)(unaff_x21 + 0xf8d) = 1;
  uVar1 = unaff_w19 - 2U >> 1;
  if ((7 < (uVar1 | unaff_w19 << 0x1f)) || ((1 << (ulong)(uVar1 & 0x1f) & 0x99U) == 0)) {
    thunk_FUN_032e1da0(PTR_DAT_0727dd40);
    uVar2 = thunk_FUN_032a56a0();
    uVar3 = thunk_FUN_032e1da0(PTR_DAT_07296bb0);
    FUN_0589e7ac(uVar2,uVar3);
    uVar3 = thunk_FUN_032e1da0(PTR_DAT_07296bc0);
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar2,uVar3);
  }
  if (unaff_x20 == 0) {
    uVar2 = 0;
  }
  else {
    if (DAT_076d46c2 == '\0') {
      thunk_FUN_032e1da0(PTR_DAT_07286280);
      DAT_076d46c2 = '\x01';
    }
    uVar2 = System_Convert__ToSByte();
    uVar2 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteStartArray
                      (uVar2,*(undefined4 *)(unaff_x20 + 0x10),unaff_w19,0x1400,0);
    if (((unaff_w19 == 10) || (0xff < (int)uVar2)) && ((int)uVar2 != (int)(char)uVar2)) {
      FUN_02d9d3e0(*(undefined8 *)PTR_DAT_0727f070);
                    /* WARNING: Subroutine does not return */
      FUN_058a837c();
    }
  }
  return uVar2;
}


