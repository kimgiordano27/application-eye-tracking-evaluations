/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$WriteStartArray
ENTRY_POINT: 07630428
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;data_collection;frame_behavior
EVIDENCE: strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_4;frame_or_lifecycle_behavior
*/


void Newtonsoft_Json_JsonTextWriter__WriteStartArray(undefined8 param_1)

{
  ulong unaff_x24;
  undefined1 unaff_w25;
  long unaff_x27;
  undefined8 *puVar1;
  long *unaff_x28;
  undefined1 unaff_w29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  ulong uStack0000000000000060;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000080;
  
  puVar1 = *(undefined8 **)(unaff_x27 + 0x40);
  uStack0000000000000020 = param_1;
  uStack0000000000000030 = param_1;
  uStack0000000000000060 = param_1;
  uStack0000000000000070 = param_1;
  uStack0000000000000080 = param_1;
  thunk_FUN_040ec700();
  thunk_FUN_040ec700(unaff_x24 + 0x20);
  thunk_FUN_040ec700(unaff_x24 + 0x38);
  thunk_FUN_040ec700(unaff_x24 + 0x48);
  uStack0000000000000070 = CONCAT71(uStack0000000000000070._1_7_,unaff_w29);
  uStack0000000000000060 = CONCAT71(uStack0000000000000060._1_7_,unaff_w25) & 0xffffffffffffff01;
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_07592bf4(&stack0x00000008,0);
  uStack0000000000000030 = in_stack_00000010;
  uStack0000000000000028 = in_stack_00000008;
  uStack0000000000000038 = in_stack_00000018;
  thunk_FUN_040ec700(unaff_x24 | 8,0);
  uStack0000000000000020 = CONCAT44(uStack0000000000000020._4_4_,0xffffffff);
  FUN_04e81914(unaff_x24 | 8,&stack0x00000020,*puVar1);
  FUN_0759098c(unaff_x24 | 8,0);
  return;
}


