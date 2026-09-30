/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$add_Error
ENTRY_POINT: 067d4dbc
PROGRAM: Waifu-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializer__add_Error(void)

{
  long lVar1;
  int in_w8;
  uint unaff_w19;
  undefined8 unaff_x20;
  
  if (in_w8 == 0x7c) {
    if (*(int *)(DAT_083c9990 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar1 = FUN_06671528();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (*(uint *)(lVar1 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    unaff_x20 = *(undefined8 *)(lVar1 + (ulong)unaff_w19 * 8 + 0x20);
  }
  return unaff_x20;
}


