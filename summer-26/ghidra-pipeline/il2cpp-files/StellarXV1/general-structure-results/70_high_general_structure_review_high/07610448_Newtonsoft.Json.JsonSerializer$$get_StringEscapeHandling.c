/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_StringEscapeHandling
ENTRY_POINT: 07610448
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_JsonSerializer__get_StringEscapeHandling(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint unaff_w19;
  uint unaff_w20;
  long *unaff_x21;
  
  do {
    do {
      if (*(uint *)(param_1 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar1 = (long)(int)unaff_w20;
      unaff_w20 = unaff_w20 + 1;
      uVar2 = *(uint *)(param_1 + lVar1 * 4 + 0x20);
      if ((int)unaff_w19 <= (int)uVar2) {
        return uVar2;
      }
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        param_2 = *unaff_x21;
      }
      param_1 = **(long **)(param_2 + 0xb8);
      if (param_1 == 0) goto LAB_076104f0;
      if (*(int *)(param_1 + 0x18) <= (int)unaff_w20) {
        uVar2 = unaff_w19 | 1;
        while( true ) {
          if (uVar2 == 0x7fffffff) {
            return unaff_w19;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar3 = FUN_07610318(uVar2);
          if (((uVar3 & 1) != 0) && (0x288df0c < (uVar2 - 1) * 0x7c32b16d + 0x1446f86)) break;
          uVar2 = uVar2 + 2;
        }
        return uVar2;
      }
    } while (*(int *)(param_2 + 0xe4) != 0);
    thunk_FUN_040d65a8();
    param_2 = *unaff_x21;
    param_1 = **(long **)(param_2 + 0xb8);
  } while (param_1 != 0);
LAB_076104f0:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


