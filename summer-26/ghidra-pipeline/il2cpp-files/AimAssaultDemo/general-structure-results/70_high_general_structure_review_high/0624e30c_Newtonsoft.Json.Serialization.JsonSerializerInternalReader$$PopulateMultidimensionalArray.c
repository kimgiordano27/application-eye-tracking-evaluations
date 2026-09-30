/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateMultidimensionalArray
ENTRY_POINT: 0624e30c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;data_collection;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateMultidimensionalArray
               (ulong param_1)

{
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined1 in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000098;
  
  if ((param_1 & 1) == 0) {
    FUN_031ae340(*unaff_x24);
    in_stack_00000008 = FUN_0624cbc4(in_stack_00000000,*(undefined8 *)PTR_DAT_07daafb8);
  }
  else if (*(long *)(unaff_x23 + 0x28) == in_stack_00000098) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_stack_00000008);
}


