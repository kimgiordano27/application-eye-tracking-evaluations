/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_DateFormatHandling
ENTRY_POINT: 061df384
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_JsonSerializer__set_DateFormatHandling(long param_1)

{
  ulong uVar1;
  int in_w8;
  long lVar2;
  uint unaff_w19;
  uint uVar3;
  uint unaff_w20;
  uint uVar4;
  long *unaff_x21;
  
  while( true ) {
    if (in_w8 <= (int)unaff_w20) {
      uVar4 = unaff_w19 | 1;
      uVar3 = unaff_w19;
      if (uVar4 != 0x7fffffff) {
        while( true ) {
          if (*(int *)(param_1 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar1 = FUN_061df264(uVar4);
          if ((((uVar1 & 1) != 0) && (uVar3 = uVar4, 0x288df0c < uVar4 * 0x7c32b16d + 0x8511be19))
             || (uVar3 = unaff_w19, uVar4 == 0x7ffffffd)) break;
          param_1 = *unaff_x21;
          uVar4 = uVar4 + 2;
        }
      }
      return uVar3;
    }
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      param_1 = *unaff_x21;
    }
    lVar2 = **(long **)(param_1 + 0xb8);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    uVar4 = *(uint *)(lVar2 + (long)(int)unaff_w20 * 4 + 0x20);
    unaff_w20 = unaff_w20 + 1;
    if ((int)unaff_w19 <= (int)uVar4) {
      return uVar4;
    }
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      param_1 = *unaff_x21;
    }
    if (**(long **)(param_1 + 0xb8) == 0) break;
    in_w8 = *(int *)(**(long **)(param_1 + 0xb8) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


