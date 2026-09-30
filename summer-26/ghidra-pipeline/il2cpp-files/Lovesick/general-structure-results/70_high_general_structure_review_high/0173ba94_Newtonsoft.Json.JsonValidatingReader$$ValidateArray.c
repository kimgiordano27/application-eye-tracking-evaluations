/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$ValidateArray
ENTRY_POINT: 0173ba94
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Newtonsoft_Json_JsonValidatingReader__ValidateArray(ulong param_1)

{
  long unaff_x20;
  
  while( true ) {
    if ((param_1 & 1) != 0) {
      return *(undefined8 *)(unaff_x20 + 0x18);
    }
    unaff_x20 = *(long *)(unaff_x20 + 0x20);
    if (unaff_x20 == 0) break;
    if (*(long **)(unaff_x20 + 0x10) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    param_1 = (**(code **)(**(long **)(unaff_x20 + 0x10) + 0x138))();
  }
  return 0;
}


