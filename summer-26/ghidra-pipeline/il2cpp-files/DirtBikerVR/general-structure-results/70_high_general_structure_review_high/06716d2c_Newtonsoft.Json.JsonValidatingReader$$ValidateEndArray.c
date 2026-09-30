/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$ValidateEndArray
ENTRY_POINT: 06716d2c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06716e1c) */
/* WARNING: Removing unreachable block (ram,0x06716de0) */
/* WARNING: Removing unreachable block (ram,0x06716e68) */

void Newtonsoft_Json_JsonValidatingReader__ValidateEndArray(undefined1 param_1 [16])

{
  long lVar1;
  undefined4 in_w8;
  undefined4 *unaff_x19;
  long *in_stack_00000038;
  undefined8 in_stack_00000078;
  
  *unaff_x19 = in_w8;
  *(long *)(unaff_x19 + 0x1e) = param_1._8_8_;
  *(long *)(unaff_x19 + 0x1c) = param_1._0_8_;
  thunk_FUN_03afed3c(unaff_x19 + 0x1c,0);
                    /* try { // try from 06716d4c to 06816d4f has its CatchHandler @ 06716e44 */
  FUN_043c2828(unaff_x19 + 2,&stack0x00000050);
  if (in_stack_00000078._4_4_ < 0) {
    if ((*in_stack_00000038 == 0) || (lVar1 = FUN_0671211c(), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 06716e70 to 06816e73 has its CatchHandler @ 06716e80 */
      FUN_03a8a9c0();
    }
    FUN_067b8700(lVar1,0);
  }
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 06716d84 with catch @ 06716e3c
                       try { // try from 06716e3c to 06816e6f has its CatchHandler @ 06716c78 */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 06716e38 with catch @ 06716e40
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 06716d4c with catch @ 06716e44
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 06716e34 with catch @ 06716e48
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 06716d64 with catch @ 06716e4c
                        */
  return;
}


