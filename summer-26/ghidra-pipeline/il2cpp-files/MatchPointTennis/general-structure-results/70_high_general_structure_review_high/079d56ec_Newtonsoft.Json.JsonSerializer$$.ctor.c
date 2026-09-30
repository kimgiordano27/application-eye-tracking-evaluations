/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$.ctor
ENTRY_POINT: 079d56ec
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer___ctor(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined4 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_07a80df4();
  *(long *)(unaff_x19 + 0x10) = unaff_x20;
  thunk_FUN_044bb4b4((long *)(unaff_x19 + 0x10));
  *(byte *)(unaff_x19 + 0x24) = param_3 & 1;
  if (unaff_x20 != 0) {
    uVar1 = *(undefined4 *)(unaff_x20 + 0x18);
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *(undefined1 *)(unaff_x19 + 0x25) = 1;
    *(undefined4 *)(unaff_x19 + 0x20) = uVar1;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x18),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


