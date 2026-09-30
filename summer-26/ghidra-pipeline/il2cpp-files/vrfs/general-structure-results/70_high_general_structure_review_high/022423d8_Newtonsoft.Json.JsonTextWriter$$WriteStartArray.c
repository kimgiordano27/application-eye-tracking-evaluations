/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$WriteStartArray
ENTRY_POINT: 022423d8
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_4;frame_or_lifecycle_behavior
*/


void Newtonsoft_Json_JsonTextWriter__WriteStartArray
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  
  FUN_048328ec(param_2,param_3,*param_1,0);
  FUN_02230c6c();
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    if (*(int *)(*(long *)(unaff_x19 + 0x30) + 0x18) == 1) {
      FUN_051e4284();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


