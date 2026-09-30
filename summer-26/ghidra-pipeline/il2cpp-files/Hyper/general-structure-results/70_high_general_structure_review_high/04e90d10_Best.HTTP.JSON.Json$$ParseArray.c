/*
FUNCTION_NAME: Best.HTTP.JSON.Json$$ParseArray
ENTRY_POINT: 04e90d10
PROGRAM: Hyper-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


ulong Best_HTTP_JSON_Json__ParseArray
                (long param_1,int param_2,long param_3,int param_4,long param_5,int param_6)

{
  long lVar1;
  ulong uVar2;
  uint in_w8;
  uint in_w9;
  uint in_w10;
  long in_x11;
  int in_w12;
  int in_w14;
  
  if (param_6 + 5U < in_w10) {
    lVar1 = ((in_x11 >> 0x20) - (ulong)*(uint *)(param_3 + (long)in_w14 * 4 + 0x20)) +
            (ulong)*(uint *)(param_1 + (long)in_w12 * 4 + 0x20);
    *(int *)(param_5 + (long)(int)(param_6 + 5U) * 4 + 0x20) = (int)lVar1;
    if (((param_2 + 6U < in_w8) && (param_4 + 6U < in_w9)) && (param_6 + 6U < in_w10)) {
      lVar1 = ((lVar1 >> 0x20) - (ulong)*(uint *)(param_3 + (long)(int)(param_4 + 6U) * 4 + 0x20)) +
              (ulong)*(uint *)(param_1 + (long)(int)(param_2 + 6U) * 4 + 0x20);
      *(int *)(param_5 + (long)(int)(param_6 + 6U) * 4 + 0x20) = (int)lVar1;
      if ((param_2 + 7U < in_w8) && (param_4 + 7U < in_w9)) {
        if (param_6 + 7U < in_w10) {
          uVar2 = ((ulong)*(uint *)(param_1 + (long)(int)(param_2 + 7U) * 4 + 0x20) -
                  (ulong)*(uint *)(param_3 + (long)(int)(param_4 + 7U) * 4 + 0x20)) +
                  (lVar1 >> 0x20);
          *(int *)(param_5 + (long)(int)(param_6 + 7U) * 4 + 0x20) = (int)uVar2;
          return uVar2 >> 0x20;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


