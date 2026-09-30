/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_PreserveReferencesHandling
ENTRY_POINT: 05a7fbf8
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


undefined8 Newtonsoft_Json_JsonSerializerSettings__get_PreserveReferencesHandling(long param_1)

{
  long lVar1;
  ulong unaff_x19;
  long *unaff_x21;
  
  while (**(long **)(param_1 + 0xb8) != 0) {
    if ((long)*(int *)(**(long **)(param_1 + 0xb8) + 0x18) <= (long)unaff_x19) {
      return 0;
    }
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      param_1 = *unaff_x21;
    }
    lVar1 = **(long **)(param_1 + 0xb8);
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= unaff_x19) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    lVar1 = lVar1 + unaff_x19;
    unaff_x19 = unaff_x19 + 1;
    *(undefined1 *)(lVar1 + 0x20) = 0;
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      param_1 = *unaff_x21;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


