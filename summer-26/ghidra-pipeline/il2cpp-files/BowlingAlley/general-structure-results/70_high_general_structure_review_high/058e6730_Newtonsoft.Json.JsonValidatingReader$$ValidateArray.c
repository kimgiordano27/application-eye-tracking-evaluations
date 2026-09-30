/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$ValidateArray
ENTRY_POINT: 058e6730
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Newtonsoft_Json_JsonValidatingReader__ValidateArray(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  
  FUN_058505e4(param_1,*unaff_x26,0);
  puVar1 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
  *puVar1 = param_1;
  thunk_FUN_0333a630(puVar1,param_1);
  uVar2 = FUN_032d5d3c(*unaff_x21,0xb4);
  FUN_058505e4(uVar2,*unaff_x25,0);
  puVar1 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x20);
  *puVar1 = uVar2;
  thunk_FUN_0333a630(puVar1,uVar2);
  uVar2 = FUN_032d5d3c(*unaff_x21,0x26);
  FUN_058505e4(uVar2,*unaff_x24,0);
  puVar1 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x28);
  *puVar1 = uVar2;
  thunk_FUN_0333a630(puVar1,uVar2);
  uVar2 = FUN_032d5d3c(*unaff_x21,0x57);
  FUN_058505e4(uVar2,*unaff_x23,0);
  puVar1 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x30);
  *puVar1 = uVar2;
  thunk_FUN_0333a630(puVar1,uVar2);
  uVar2 = FUN_032d5d3c(*unaff_x21,0x6a);
  FUN_058505e4(uVar2,*unaff_x22,0);
  puVar1 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x38);
  *puVar1 = uVar2;
  thunk_FUN_0333a630(puVar1,uVar2);
  return;
}


