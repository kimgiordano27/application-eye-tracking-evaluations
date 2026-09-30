/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader.SchemaScope$$get_IsUniqueArray
ENTRY_POINT: 0763e7bc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Newtonsoft_Json_JsonValidatingReader_SchemaScope__get_IsUniqueArray(undefined8 param_1)

{
  ulong unaff_x22;
  long unaff_x23;
  undefined8 *puVar1;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  puVar1 = *(undefined8 **)(unaff_x23 + 0x4d8);
  uStack0000000000000020 = param_1;
  thunk_FUN_040ec700();
  thunk_FUN_040ec700(unaff_x22 + 0x20);
  thunk_FUN_040ec700(unaff_x22 + 0x30,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_07592bf4(&stack0x00000008,0);
  in_stack_00000030 = in_stack_00000010;
  uStack0000000000000028 = in_stack_00000008;
  in_stack_00000038 = in_stack_00000018;
  thunk_FUN_040ec700(unaff_x22 | 8,0);
  uStack0000000000000020 = CONCAT44(uStack0000000000000020._4_4_,0xffffffff);
  FUN_04e635d8(unaff_x22 | 8,&stack0x00000020,*puVar1);
  FUN_0759098c(unaff_x22 | 8,0);
  return;
}


