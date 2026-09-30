/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$ValidateArray
ENTRY_POINT: 0671758c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Newtonsoft_Json_JsonValidatingReader__ValidateArray(void)

{
  long lVar1;
  undefined4 *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  
  lVar1 = FUN_0671211c();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_067b8700(lVar1,0);
  if (unaff_x20 == 0) {
    if ((unaff_w21 < 0x1d) && ((1 << (ulong)(unaff_w21 & 0x1f) & 0x10100001U) != 0)) {
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_0666d184(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9b8();
}


