/*
FUNCTION_NAME: Best.HTTP.JSON.Json$$SerializeValue
ENTRY_POINT: 034aa264
PROGRAM: vandalizer-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Best_HTTP_JSON_Json__SerializeValue(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  uint in_w8;
  uint in_w9;
  uint in_w10;
  long in_x11;
  long in_x14;
  
  *(int *)(param_3 + 0x24) = (int)(in_x11 + in_x14);
  if (((2 < in_w8) && (2 < in_w9)) && (2 < in_w10)) {
    uVar1 = ((ulong)(in_x11 + in_x14) >> 0x20) + (ulong)*(uint *)(param_1 + 0x28) +
            (ulong)*(uint *)(param_2 + 0x28) + (ulong)*(uint *)(param_3 + 0x28);
    *(int *)(param_3 + 0x28) = (int)uVar1;
    if (((3 < in_w8) && (3 < in_w9)) && (3 < in_w10)) {
      uVar1 = (uVar1 >> 0x20) + (ulong)*(uint *)(param_1 + 0x2c) + (ulong)*(uint *)(param_2 + 0x2c)
              + (ulong)*(uint *)(param_3 + 0x2c);
      *(int *)(param_3 + 0x2c) = (int)uVar1;
      if (((4 < in_w8) && (4 < in_w9)) && (4 < in_w10)) {
        uVar1 = (uVar1 >> 0x20) + (ulong)*(uint *)(param_1 + 0x30) +
                (ulong)*(uint *)(param_2 + 0x30) + (ulong)*(uint *)(param_3 + 0x30);
        *(int *)(param_3 + 0x30) = (int)uVar1;
        if (((5 < in_w8) && (5 < in_w9)) && (5 < in_w10)) {
          uVar1 = (uVar1 >> 0x20) + (ulong)*(uint *)(param_1 + 0x34) +
                  (ulong)*(uint *)(param_2 + 0x34) + (ulong)*(uint *)(param_3 + 0x34);
          *(int *)(param_3 + 0x34) = (int)uVar1;
          if (((6 < in_w8) && (6 < in_w9)) && (6 < in_w10)) {
            uVar1 = (uVar1 >> 0x20) + (ulong)*(uint *)(param_1 + 0x38) +
                    (ulong)*(uint *)(param_2 + 0x38) + (ulong)*(uint *)(param_3 + 0x38);
            *(int *)(param_3 + 0x38) = (int)uVar1;
            if (((7 < in_w8) && (7 < in_w9)) && (7 < in_w10)) {
              uVar1 = (ulong)*(uint *)(param_1 + 0x3c) + (uVar1 >> 0x20) +
                      (ulong)*(uint *)(param_2 + 0x3c) + (ulong)*(uint *)(param_3 + 0x3c);
              *(int *)(param_3 + 0x3c) = (int)uVar1;
              return uVar1 >> 0x20;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


