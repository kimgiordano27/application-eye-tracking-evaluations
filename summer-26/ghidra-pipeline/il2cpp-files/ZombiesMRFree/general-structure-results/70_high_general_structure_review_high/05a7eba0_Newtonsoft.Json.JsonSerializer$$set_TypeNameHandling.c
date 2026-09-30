/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_TypeNameHandling
ENTRY_POINT: 05a7eba0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_TypeNameHandling(ulong param_1)

{
  int unaff_w19;
  int unaff_w21;
  int unaff_w23;
  long unaff_x25;
  
  if ((param_1 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f6dce0);
    FUN_02fe925c(PTR_DAT_06fa3b28);
    *(undefined1 *)(unaff_x25 + 0xead) = 1;
  }
  if (unaff_w23 == 0) {
    if (*(int *)(*(long *)PTR_DAT_06f6dce0 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
  }
  else if (unaff_w21 == 0) {
    if (*(int *)(*(long *)PTR_DAT_06f6dce0 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
  }
  else {
    if (unaff_w19 != 0) {
      if (*(int *)(*(long *)PTR_DAT_06f6dce0 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_05a7ec80();
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_06f6dce0 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
  }
  FUN_05a7e840();
  return;
}


