/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader.SchemaScope$$get_IsUniqueArray
ENTRY_POINT: 074795a0
PROGRAM: cac-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Newtonsoft_Json_JsonValidatingReader_SchemaScope__get_IsUniqueArray(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  long unaff_x29;
  
  if (param_2 == 1) {
    puVar1 = (undefined8 *)DA_Assets_FCU_FontRoot__get_Kind(param_1);
    *(undefined8 *)(unaff_x29 + -0x40) = *puVar1;
    __cxa_end_catch();
    FUN_03e4823c(unaff_x29 + -0x40);
    if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return 0;
    }
  }
  else {
    FUN_03e4823c(unaff_x29 + -0x40);
    if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_04000f8c(param_1);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


