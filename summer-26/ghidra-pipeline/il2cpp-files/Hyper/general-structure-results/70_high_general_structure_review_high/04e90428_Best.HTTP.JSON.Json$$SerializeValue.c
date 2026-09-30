/*
FUNCTION_NAME: Best.HTTP.JSON.Json$$SerializeValue
ENTRY_POINT: 04e90428
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Best_HTTP_JSON_Json__SerializeValue(long param_1,int param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint in_w8;
  uint in_w9;
  uint in_w10;
  undefined4 uVar6;
  int *in_x12;
  long in_x13;
  
  uVar5 = *(uint *)(in_x13 + 0x20);
  iVar3 = uVar5 + in_w10;
  *in_x12 = iVar3;
  *(int *)(in_x13 + 0x20) = iVar3;
  if ((param_2 + 1U < in_w8) && (param_4 + 1U < in_w9)) {
    lVar1 = param_1 + (long)(int)(param_2 + 1U) * 4;
    lVar2 = param_3 + (long)(int)(param_4 + 1U) * 4;
    uVar4 = (ulong)*(uint *)(lVar1 + 0x20) + (ulong)*(uint *)(lVar2 + 0x20) +
            (ulong)CARRY4(uVar5,in_w10);
    uVar6 = (undefined4)uVar4;
    *(undefined4 *)(lVar1 + 0x20) = uVar6;
    *(undefined4 *)(lVar2 + 0x20) = uVar6;
    if ((param_2 + 2U < in_w8) && (param_4 + 2U < in_w9)) {
      lVar1 = param_1 + (long)(int)(param_2 + 2U) * 4;
      lVar2 = param_3 + (long)(int)(param_4 + 2U) * 4;
      uVar4 = (uVar4 >> 0x20) + (ulong)*(uint *)(lVar1 + 0x20) + (ulong)*(uint *)(lVar2 + 0x20);
      uVar6 = (undefined4)uVar4;
      *(undefined4 *)(lVar1 + 0x20) = uVar6;
      *(undefined4 *)(lVar2 + 0x20) = uVar6;
      if ((param_2 + 3U < in_w8) && (param_4 + 3U < in_w9)) {
        lVar1 = param_1 + (long)(int)(param_2 + 3U) * 4;
        lVar2 = param_3 + (long)(int)(param_4 + 3U) * 4;
        uVar4 = (uVar4 >> 0x20) + (ulong)*(uint *)(lVar1 + 0x20) + (ulong)*(uint *)(lVar2 + 0x20);
        uVar6 = (undefined4)uVar4;
        *(undefined4 *)(lVar1 + 0x20) = uVar6;
        *(undefined4 *)(lVar2 + 0x20) = uVar6;
        if ((param_2 + 4U < in_w8) && (param_4 + 4U < in_w9)) {
          lVar1 = param_1 + (long)(int)(param_2 + 4U) * 4;
          lVar2 = param_3 + (long)(int)(param_4 + 4U) * 4;
          uVar4 = (uVar4 >> 0x20) + (ulong)*(uint *)(lVar1 + 0x20) + (ulong)*(uint *)(lVar2 + 0x20);
          uVar6 = (undefined4)uVar4;
          *(undefined4 *)(lVar1 + 0x20) = uVar6;
          *(undefined4 *)(lVar2 + 0x20) = uVar6;
          if ((param_2 + 5U < in_w8) && (param_4 + 5U < in_w9)) {
            lVar1 = param_1 + (long)(int)(param_2 + 5U) * 4;
            lVar2 = param_3 + (long)(int)(param_4 + 5U) * 4;
            uVar4 = (uVar4 >> 0x20) +
                    (ulong)*(uint *)(lVar1 + 0x20) + (ulong)*(uint *)(lVar2 + 0x20);
            uVar6 = (undefined4)uVar4;
            *(undefined4 *)(lVar1 + 0x20) = uVar6;
            *(undefined4 *)(lVar2 + 0x20) = uVar6;
            if ((param_2 + 6U < in_w8) && (param_4 + 6U < in_w9)) {
              lVar1 = param_1 + (long)(int)(param_2 + 6U) * 4;
              lVar2 = param_3 + (long)(int)(param_4 + 6U) * 4;
              uVar4 = (uVar4 >> 0x20) +
                      (ulong)*(uint *)(lVar1 + 0x20) + (ulong)*(uint *)(lVar2 + 0x20);
              uVar6 = (undefined4)uVar4;
              *(undefined4 *)(lVar1 + 0x20) = uVar6;
              *(undefined4 *)(lVar2 + 0x20) = uVar6;
              if (param_2 + 7U < in_w8) {
                if (param_4 + 7U < in_w9) {
                  param_1 = param_1 + (long)(int)(param_2 + 7U) * 4;
                  param_3 = param_3 + (long)(int)(param_4 + 7U) * 4;
                  uVar4 = (ulong)*(uint *)(param_1 + 0x20) + (uVar4 >> 0x20) +
                          (ulong)*(uint *)(param_3 + 0x20);
                  uVar6 = (undefined4)uVar4;
                  *(undefined4 *)(param_1 + 0x20) = uVar6;
                  *(undefined4 *)(param_3 + 0x20) = uVar6;
                  return uVar4 >> 0x20;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


