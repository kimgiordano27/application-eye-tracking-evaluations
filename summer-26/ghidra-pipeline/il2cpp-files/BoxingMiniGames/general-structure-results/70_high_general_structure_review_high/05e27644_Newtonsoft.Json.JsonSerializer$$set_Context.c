/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_Context
ENTRY_POINT: 05e27644
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_3
*/


undefined8 Newtonsoft_Json_JsonSerializer__set_Context(void)

{
  undefined8 uVar1;
  int unaff_w19;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0xd16) = 1;
  if (unaff_w19 != 0) {
    if (*(int *)(*(long *)PTR_DAT_07a0b690 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar1 = Newtonsoft_Json_JsonSerializer__set_Formatting();
    return uVar1;
  }
  return *unaff_x20;
}


