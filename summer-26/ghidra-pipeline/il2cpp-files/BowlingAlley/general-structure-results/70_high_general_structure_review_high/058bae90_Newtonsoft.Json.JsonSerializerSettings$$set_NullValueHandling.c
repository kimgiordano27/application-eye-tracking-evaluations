/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_NullValueHandling
ENTRY_POINT: 058bae90
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_NullValueHandling(void)

{
  undefined *puVar1;
  uint unaff_w19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x25;
  
  if (*(char *)(unaff_x25 + 0x6c1) == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_07286280);
    *(undefined1 *)(unaff_x25 + 0x6c1) = 1;
  }
  puVar1 = PTR_DAT_07290a18;
  if (unaff_x21 == 0) {
    if (unaff_w19 != 0 || unaff_w20 != 0) {
      FUN_05943ee4(0x18,0);
    }
  }
  else {
    if ((*(uint *)(unaff_x21 + 0x10) < unaff_w20) ||
       (*(uint *)(unaff_x21 + 0x10) - unaff_w20 < unaff_w19)) {
      FUN_05943ee4(0x18,0);
    }
    System_Convert__ToSByte();
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_058b9f68();
  return;
}


