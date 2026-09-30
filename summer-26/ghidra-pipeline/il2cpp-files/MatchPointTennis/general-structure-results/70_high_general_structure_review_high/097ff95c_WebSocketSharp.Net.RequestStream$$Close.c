/*
FUNCTION_NAME: WebSocketSharp.Net.RequestStream$$Close
ENTRY_POINT: 097ff95c
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


void WebSocketSharp_Net_RequestStream__Close(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    uVar1 = FUN_096879c0(*(long *)(unaff_x19 + 0x20),0);
    uVar1 = FUN_097de178(uVar1,0);
    uVar1 = FUN_096afdbc(uVar1,0);
    FUN_0971de50(param_1,uVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


