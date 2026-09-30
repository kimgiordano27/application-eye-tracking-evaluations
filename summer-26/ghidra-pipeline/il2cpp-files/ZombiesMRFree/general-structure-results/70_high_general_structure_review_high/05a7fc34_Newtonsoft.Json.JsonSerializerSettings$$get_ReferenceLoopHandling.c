/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ReferenceLoopHandling
ENTRY_POINT: 05a7fc34
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_JsonSerializerSettings__get_ReferenceLoopHandling(long param_1,long param_2)

{
  undefined1 in_CY;
  ulong unaff_x19;
  long *unaff_x21;
  
  while( true ) {
    if ((bool)in_CY) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    param_1 = param_1 + unaff_x19;
    unaff_x19 = unaff_x19 + 1;
    *(undefined1 *)(param_1 + 0x20) = 0;
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      param_2 = *unaff_x21;
    }
    if (**(long **)(param_2 + 0xb8) == 0) break;
    if ((long)*(int *)(**(long **)(param_2 + 0xb8) + 0x18) <= (long)unaff_x19) {
      return 0;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      param_2 = *unaff_x21;
    }
    param_1 = **(long **)(param_2 + 0xb8);
    if (param_1 == 0) break;
    in_CY = *(uint *)(param_1 + 0x18) <= unaff_x19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


