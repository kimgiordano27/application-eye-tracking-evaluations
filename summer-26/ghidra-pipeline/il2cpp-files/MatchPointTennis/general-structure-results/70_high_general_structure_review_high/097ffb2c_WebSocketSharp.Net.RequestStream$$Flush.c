/*
FUNCTION_NAME: WebSocketSharp.Net.RequestStream$$Flush
ENTRY_POINT: 097ffb2c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void WebSocketSharp_Net_RequestStream__Flush
               (undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_097fde78(param_2,0x2001c,param_1,param_4);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    FUN_0968e4c0(*(long *)(param_2 + 0x20),0x28,0);
    if (*(long *)(param_2 + 0x20) != 0) {
      uVar2 = FUN_09687ba8(*(long *)(param_2 + 0x20),0);
      if (*(long *)(param_2 + 0x20) != 0) {
        uVar3 = FUN_096879c0(*(long *)(param_2 + 0x20),0);
        uVar3 = FUN_097de268(uVar3,0);
        uVar3 = FUN_096afdbc(uVar3,0);
        FUN_0971de38(uVar2,uVar3,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


