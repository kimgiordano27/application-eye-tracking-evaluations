/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteStartArray
ENTRY_POINT: 055df20c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;data_collection;telemetry;frame_behavior
EVIDENCE: strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteStartArray(void)

{
  int unaff_w19;
  int unaff_w20;
  uint unaff_w21;
  undefined8 unaff_x22;
  long *unaff_x24;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  *(undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 8) = unaff_x22;
                    /* try { // try from 055df21c to 056df253 has its CatchHandler @ 055df390 */
  thunk_FUN_02ee2be8();
  in_stack_00000048 = in_stack_00000008;
  in_stack_00000040 = in_stack_00000000;
  in_stack_00000058 = in_stack_00000018;
  in_stack_00000050 = in_stack_00000010;
  FUN_03aa2368(unaff_w19 + unaff_w20 + ((unaff_w21 ^ 0xffffffff) & 1),&stack0x00000040);
                    /* try { // try from 055df264 to 056df29b has its CatchHandler @ 055df388 */
  return;
}


