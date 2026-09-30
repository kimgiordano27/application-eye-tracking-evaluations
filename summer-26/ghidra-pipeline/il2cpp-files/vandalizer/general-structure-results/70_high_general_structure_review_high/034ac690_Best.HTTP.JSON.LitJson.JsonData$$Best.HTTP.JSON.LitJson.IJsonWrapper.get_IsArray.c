/*
FUNCTION_NAME: Best.HTTP.JSON.LitJson.JsonData$$Best.HTTP.JSON.LitJson.IJsonWrapper.get_IsArray
ENTRY_POINT: 034ac690
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_3
*/


ulong Best_HTTP_JSON_LitJson_JsonData__Best_HTTP_JSON_LitJson_IJsonWrapper_get_IsArray
                (undefined8 param_1,long param_2,undefined8 param_3,long param_4,int param_5)

{
  bool in_CY;
  uint in_w9;
  ulong uVar1;
  long in_x10;
  ulong in_x11;
  int in_w12;
  long in_x13;
  
  *(int *)(in_x13 + 0x20) = (int)in_x11;
  if (!in_CY) {
    if (param_5 + 7U < in_w9) {
      param_4 = param_4 + (long)(int)(param_5 + 7U) * 4;
      uVar1 = (ulong)*(uint *)(param_4 + 0x20) + (in_x11 >> 0x20) +
              (ulong)*(uint *)(param_2 + (long)in_w12 * 4 + 0x20) * in_x10;
      *(int *)(param_4 + 0x20) = (int)uVar1;
      return uVar1 >> 0x20;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


