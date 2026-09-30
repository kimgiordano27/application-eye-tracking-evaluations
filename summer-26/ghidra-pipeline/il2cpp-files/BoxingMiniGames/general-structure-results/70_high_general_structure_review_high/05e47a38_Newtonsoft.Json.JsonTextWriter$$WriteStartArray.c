/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$WriteStartArray
ENTRY_POINT: 05e47a38
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_4;frame_or_lifecycle_behavior
*/


undefined8 Newtonsoft_Json_JsonTextWriter__WriteStartArray(void)

{
  bool in_CY;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x26;
  long *unaff_x28;
  long unaff_x29;
  uint in_stack_00000060;
  
  if (!in_CY) {
    *(undefined8 *)(unaff_x22 + unaff_x19 * 8 + 0x20) = unaff_x21;
    thunk_FUN_036b7ad0(unaff_x20 + unaff_x19 * 8);
    *unaff_x28 = unaff_x22;
    thunk_FUN_036b7ad0();
    if (in_stack_00000060 < *(uint *)(unaff_x29 + 0x18)) {
      return *unaff_x26;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


