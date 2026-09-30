/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader.SchemaScope$$get_IsUniqueArray
ENTRY_POINT: 074a63c8
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Newtonsoft_Json_JsonValidatingReader_SchemaScope__get_IsUniqueArray(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_0403162c();
  *(undefined1 *)(unaff_x21 + 0x498) = 1;
  uVar2 = FUN_0736648c();
  uVar1 = *(undefined4 *)(unaff_x19 + 0x10);
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_0408f364(*unaff_x20);
  }
  FUN_07493860(uVar2,uVar1,0);
  FUN_0736b7b4();
  return;
}


