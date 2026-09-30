/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_DefaultValueHandling
ENTRY_POINT: 066ebb58
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_JsonSerializerSettings__set_DefaultValueHandling(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint unaff_w19;
  uint unaff_w20;
  long *unaff_x21;
  
  while( true ) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      param_1 = *unaff_x21;
    }
    lVar4 = **(long **)(param_1 + 0xb8);
    if (lVar4 == 0) break;
    if (*(int *)(lVar4 + 0x18) <= (int)unaff_w20) {
      uVar2 = unaff_w19 | 1;
      while( true ) {
        if (uVar2 == 0x7fffffff) {
          return unaff_w19;
        }
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar3 = FUN_066eba6c(uVar2);
        if (((uVar3 & 1) != 0) && (0x288df0c < (uVar2 - 1) * 0x7c32b16d + 0x1446f86)) break;
        uVar2 = uVar2 + 2;
      }
      return uVar2;
    }
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      param_1 = *unaff_x21;
      lVar4 = **(long **)(param_1 + 0xb8);
      if (lVar4 == 0) break;
    }
    if (*(uint *)(lVar4 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    lVar1 = (long)(int)unaff_w20;
    unaff_w20 = unaff_w20 + 1;
    uVar2 = *(uint *)(lVar4 + lVar1 * 4 + 0x20);
    if ((int)unaff_w19 <= (int)uVar2) {
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


