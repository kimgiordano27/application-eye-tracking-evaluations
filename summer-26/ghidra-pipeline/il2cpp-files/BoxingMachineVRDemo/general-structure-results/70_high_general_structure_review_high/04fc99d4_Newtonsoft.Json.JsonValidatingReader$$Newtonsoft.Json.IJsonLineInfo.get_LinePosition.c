/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$Newtonsoft.Json.IJsonLineInfo.get_LinePosition
ENTRY_POINT: 04fc99d4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void Newtonsoft_Json_JsonValidatingReader__Newtonsoft_Json_IJsonLineInfo_get_LinePosition
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  long unaff_x20;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)FUN_02d9a5d4();
code_r0x04fc99f4:
      (*(code *)*puVar1)();
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e42304();
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae0();
    }
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto code_r0x04fc99f4;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}


