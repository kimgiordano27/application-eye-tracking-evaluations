/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$ValidateArray
ENTRY_POINT: 08e387a0
PROGRAM: Hyper-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Newtonsoft_Json_JsonValidatingReader__ValidateArray(long param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  
  FUN_04947ee4(*(undefined8 *)(param_1 + 0x430));
  FUN_04947ee4(PTR_DAT_0ac6bef0);
  FUN_04947ee4(PTR_DAT_0ac6c048);
  FUN_04947ee4(PTR_DAT_0ac09810);
  *(undefined1 *)(unaff_x25 + 0xd99) = 1;
  uVar1 = FUN_08e386c0();
  uVar1 = FUN_05e3e5e4(*unaff_x23,uVar1,*unaff_x24);
  FUN_08bda228(*unaff_x20,*unaff_x21,uVar1,*unaff_x22,0);
  return;
}


