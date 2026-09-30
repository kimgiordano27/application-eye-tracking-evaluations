/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_Culture
ENTRY_POINT: 070973e8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__get_Culture(void)

{
  long lVar1;
  int in_w8;
  long *unaff_x25;
  long unaff_x26;
  
  if (in_w8 == 0) {
    FUN_03c8f898(PTR_DAT_08ea2830);
    *(undefined1 *)(unaff_x26 + 0xe42) = 1;
  }
  lVar1 = *unaff_x25;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar1 = *unaff_x25;
  }
  if (**(char **)(lVar1 + 0xb8) != '\0') {
    FUN_070975b4();
    return;
  }
  FUN_07098b30();
  return;
}


