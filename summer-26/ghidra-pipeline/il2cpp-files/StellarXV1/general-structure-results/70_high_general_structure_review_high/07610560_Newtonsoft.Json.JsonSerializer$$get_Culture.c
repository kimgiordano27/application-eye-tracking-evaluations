/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_Culture
ENTRY_POINT: 07610560
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializer__get_Culture(void)

{
  undefined8 uVar1;
  long unaff_x19;
  int unaff_w20;
  
  FUN_04077588();
  *(undefined1 *)(unaff_x19 + 0xdce) = 1;
  if ((unaff_w20 < 0x7feffffd) && (0x7feffffd < (uint)(unaff_w20 << 1))) {
    return 0x7feffffd;
  }
  if (*(int *)(*(long *)PTR_DAT_092b9ef8 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar1 = FUN_076103bc(unaff_w20 << 1);
  return uVar1;
}


