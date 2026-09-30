/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Populate
ENTRY_POINT: 04f8d76c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4 Newtonsoft_Json_JsonSerializer__Populate(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_04f8d5a8();
  uVar1 = 0;
  if (lVar2 != 0) {
    lVar2 = FUN_04f8d5a8(param_1);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    uVar1 = *(undefined4 *)(lVar2 + 0x18);
  }
  return uVar1;
}


