/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_EqualityComparer
ENTRY_POINT: 0709690c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_EqualityComparer(void)

{
  undefined *puVar1;
  undefined1 in_w8;
  uint unaff_w19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x25;
  
  *(undefined1 *)(unaff_x25 + 0x3fd) = in_w8;
  puVar1 = PTR_DAT_08e9bb60;
  if (unaff_x21 == 0) {
    if (unaff_w19 != 0 || unaff_w20 != 0) {
      FUN_07122188(0x18,0);
    }
  }
  else {
    if ((*(uint *)(unaff_x21 + 0x10) < unaff_w20) ||
       (*(uint *)(unaff_x21 + 0x10) - unaff_w20 < unaff_w19)) {
      FUN_07122188(0x18,0);
    }
    System_Convert__ToInt16();
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_070959cc();
  return;
}


