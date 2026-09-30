/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$WriteStartArray
ENTRY_POINT: 061ff000
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;data_collection;frame_behavior
EVIDENCE: strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_4;frame_or_lifecycle_behavior
*/


void Newtonsoft_Json_JsonTextWriter__WriteStartArray(void)

{
  ulong unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_0373b518();
  *(undefined1 *)(unaff_x21 + 0x6f4) = 1;
  if ((unaff_x19 & 1) == 0) {
    return;
  }
  if (*(undefined8 **)(unaff_x20 + 0x30) != (undefined8 *)0x0) {
    FUN_078d9d8c(**(undefined8 **)(unaff_x20 + 0x30));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


