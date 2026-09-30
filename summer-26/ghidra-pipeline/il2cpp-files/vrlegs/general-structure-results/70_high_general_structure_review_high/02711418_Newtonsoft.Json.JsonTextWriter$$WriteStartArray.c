/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$WriteStartArray
ENTRY_POINT: 02711418
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_4;frame_or_lifecycle_behavior
*/


void Newtonsoft_Json_JsonTextWriter__WriteStartArray(undefined8 param_1)

{
  long lVar1;
  undefined4 unaff_w19;
  
  lVar1 = FUN_01ab6a94(param_1,1);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(int *)(lVar1 + 0x18) != 0) {
    *(undefined4 *)(lVar1 + 0x20) = unaff_w19;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


