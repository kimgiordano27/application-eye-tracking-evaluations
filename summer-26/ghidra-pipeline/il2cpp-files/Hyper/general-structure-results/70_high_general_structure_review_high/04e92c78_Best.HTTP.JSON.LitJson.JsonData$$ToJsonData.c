/*
FUNCTION_NAME: Best.HTTP.JSON.LitJson.JsonData$$ToJsonData
ENTRY_POINT: 04e92c78
PROGRAM: Hyper-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Best_HTTP_JSON_LitJson_JsonData__ToJsonData(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint in_w8;
  uint in_w9;
  uint in_w10;
  long in_x11;
  
  if (in_w10 != 3) {
    lVar1 = ((in_x11 >> 0x20) - (ulong)*(uint *)(param_2 + 0x2c)) + (ulong)*(uint *)(param_1 + 0x2c)
    ;
    *(int *)(param_3 + 0x2c) = (int)lVar1;
    if (((4 < in_w8) && (4 < in_w9)) && (4 < in_w10)) {
      lVar1 = ((lVar1 >> 0x20) - (ulong)*(uint *)(param_2 + 0x30)) +
              (ulong)*(uint *)(param_1 + 0x30);
      *(int *)(param_3 + 0x30) = (int)lVar1;
      if (((in_w8 != 5) && (in_w9 != 5)) && (in_w10 != 5)) {
        lVar1 = ((lVar1 >> 0x20) - (ulong)*(uint *)(param_2 + 0x34)) +
                (ulong)*(uint *)(param_1 + 0x34);
        *(int *)(param_3 + 0x34) = (int)lVar1;
        if (((6 < in_w8) && (6 < in_w9)) && (6 < in_w10)) {
          lVar1 = ((lVar1 >> 0x20) - (ulong)*(uint *)(param_2 + 0x38)) +
                  (ulong)*(uint *)(param_1 + 0x38);
          *(int *)(param_3 + 0x38) = (int)lVar1;
          if (((in_w8 != 7) && (in_w9 != 7)) && (in_w10 != 7)) {
            uVar2 = ((ulong)*(uint *)(param_1 + 0x3c) - (ulong)*(uint *)(param_2 + 0x3c)) +
                    (lVar1 >> 0x20);
            *(int *)(param_3 + 0x3c) = (int)uVar2;
            return uVar2 >> 0x20;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


