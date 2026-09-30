/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize
ENTRY_POINT: 0546ffb0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined2 Newtonsoft_Json_JsonSerializer__Deserialize(void)

{
  long lVar1;
  long *unaff_x19;
  int unaff_w21;
  
  lVar1 = *(long *)(*(long *)(*unaff_x19 + 0xb8) + 0x28);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (unaff_w21 - 0x2d00U < *(uint *)(lVar1 + 0x18)) {
    return *(undefined2 *)(lVar1 + (ulong)(unaff_w21 - 0x2d00U) * 2 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


