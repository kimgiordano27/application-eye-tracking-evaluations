/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteStartArray
ENTRY_POINT: 054be22c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;data_collection;telemetry;frame_behavior
EVIDENCE: strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteStartArray(ulong param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long *unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0f540);
    *(undefined1 *)(unaff_x20 + 0xd10) = 1;
  }
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar1 = FUN_054a874c();
  FUN_054bd1ac(uVar1,0);
  return;
}


