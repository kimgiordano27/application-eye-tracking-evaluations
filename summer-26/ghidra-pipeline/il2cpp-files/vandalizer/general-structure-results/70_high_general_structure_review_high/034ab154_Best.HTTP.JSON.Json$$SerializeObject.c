/*
FUNCTION_NAME: Best.HTTP.JSON.Json$$SerializeObject
ENTRY_POINT: 034ab154
PROGRAM: vandalizer-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Best_HTTP_JSON_Json__SerializeObject
                (long param_1,int param_2,long param_3,uint param_4,long param_5,uint param_6)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint in_w8;
  long lVar4;
  
  uVar2 = *(uint *)(param_3 + 0x18);
  if (param_4 < uVar2) {
    if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    uVar3 = *(uint *)(param_5 + 0x18);
    if (param_6 < uVar3) {
      lVar4 = (ulong)*(uint *)(param_1 + (long)param_2 * 4 + 0x20) -
              (ulong)*(uint *)(param_3 + (long)(int)param_4 * 4 + 0x20);
      *(int *)(param_5 + (long)(int)param_6 * 4 + 0x20) = (int)lVar4;
      if (((param_2 + 1U < in_w8) && (param_4 + 1 < uVar2)) && (param_6 + 1 < uVar3)) {
        lVar4 = ((ulong)*(uint *)(param_1 + (long)(int)(param_2 + 1U) * 4 + 0x20) -
                (ulong)*(uint *)(param_3 + (long)(int)(param_4 + 1) * 4 + 0x20)) + (lVar4 >> 0x20);
        *(int *)(param_5 + (long)(int)(param_6 + 1) * 4 + 0x20) = (int)lVar4;
        if (((param_2 + 2U < in_w8) && (param_4 + 2 < uVar2)) && (param_6 + 2 < uVar3)) {
          lVar4 = ((ulong)*(uint *)(param_1 + (long)(int)(param_2 + 2U) * 4 + 0x20) -
                  (ulong)*(uint *)(param_3 + (long)(int)(param_4 + 2) * 4 + 0x20)) + (lVar4 >> 0x20)
          ;
          *(int *)(param_5 + (long)(int)(param_6 + 2) * 4 + 0x20) = (int)lVar4;
          if (((param_2 + 3U < in_w8) && (param_4 + 3 < uVar2)) && (param_6 + 3 < uVar3)) {
            lVar4 = ((ulong)*(uint *)(param_1 + (long)(int)(param_2 + 3U) * 4 + 0x20) -
                    (ulong)*(uint *)(param_3 + (long)(int)(param_4 + 3) * 4 + 0x20)) +
                    (lVar4 >> 0x20);
            *(int *)(param_5 + (long)(int)(param_6 + 3) * 4 + 0x20) = (int)lVar4;
            if (((param_2 + 4U < in_w8) && (param_4 + 4 < uVar2)) && (param_6 + 4 < uVar3)) {
              lVar4 = ((ulong)*(uint *)(param_1 + (long)(int)(param_2 + 4U) * 4 + 0x20) -
                      (ulong)*(uint *)(param_3 + (long)(int)(param_4 + 4) * 4 + 0x20)) +
                      (lVar4 >> 0x20);
              *(int *)(param_5 + (long)(int)(param_6 + 4) * 4 + 0x20) = (int)lVar4;
              if (((param_2 + 5U < in_w8) && (param_4 + 5 < uVar2)) && (param_6 + 5 < uVar3)) {
                lVar4 = ((ulong)*(uint *)(param_1 + (long)(int)(param_2 + 5U) * 4 + 0x20) -
                        (ulong)*(uint *)(param_3 + (long)(int)(param_4 + 5) * 4 + 0x20)) +
                        (lVar4 >> 0x20);
                *(int *)(param_5 + (long)(int)(param_6 + 5) * 4 + 0x20) = (int)lVar4;
                if (((param_2 + 6U < in_w8) && (param_4 + 6 < uVar2)) && (param_6 + 6 < uVar3)) {
                  lVar4 = ((ulong)*(uint *)(param_1 + (long)(int)(param_2 + 6U) * 4 + 0x20) -
                          (ulong)*(uint *)(param_3 + (long)(int)(param_4 + 6) * 4 + 0x20)) +
                          (lVar4 >> 0x20);
                  *(int *)(param_5 + (long)(int)(param_6 + 6) * 4 + 0x20) = (int)lVar4;
                  if ((param_2 + 7U < in_w8) && (param_4 + 7 < uVar2)) {
                    if (param_6 + 7 < uVar3) {
                      uVar1 = ((ulong)*(uint *)(param_1 + (long)(int)(param_2 + 7U) * 4 + 0x20) -
                              (ulong)*(uint *)(param_3 + (long)(int)(param_4 + 7) * 4 + 0x20)) +
                              (lVar4 >> 0x20);
                      *(int *)(param_5 + (long)(int)(param_6 + 7) * 4 + 0x20) = (int)uVar1;
                      return uVar1 >> 0x20;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


