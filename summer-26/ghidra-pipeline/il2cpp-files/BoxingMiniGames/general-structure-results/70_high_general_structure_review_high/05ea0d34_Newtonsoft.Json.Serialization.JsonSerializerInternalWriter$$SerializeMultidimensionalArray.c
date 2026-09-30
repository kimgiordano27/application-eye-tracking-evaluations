/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
ENTRY_POINT: 05ea0d34
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;data_collection;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined4
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
          (undefined8 param_1)

{
  void *unaff_x19;
  undefined4 unaff_w20;
  long unaff_x22;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000050;
  long in_stack_00000108;
  
  uStack0000000000000050 = 0;
  uStack0000000000000000 = param_1;
  uStack0000000000000010 = param_1;
  uStack0000000000000020 = param_1;
  uStack0000000000000030 = param_1;
  uStack0000000000000040 = param_1;
  FUN_0357f880(&stack0x00000058);
  memcpy(unaff_x19,&stack0x00000000,0x58);
  thunk_FUN_036b7ad0((long)unaff_x19 + 0x30,0);
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000108) {
    return unaff_w20;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


