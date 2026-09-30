/*
FUNCTION_NAME: WebSocketSharp.Net.RequestStream$$Close
ENTRY_POINT: 087bc6fc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void WebSocketSharp_Net_RequestStream__Close
               (undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
                    /* try { // try from 087bc700 to 088bc70b has its CatchHandler @ 087bc42c */
  uVar1 = FUN_087bbc40(param_2,0x2000e,param_1,param_4);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    FUN_087c23f4(*(long *)(param_2 + 0x20),0x28,0);
    lVar2 = *(long *)(param_2 + 0x20);
    if (lVar2 != 0) {
      lVar4 = *(long *)(lVar2 + 0x2b8);
      uVar3 = FUN_087bf654(lVar2,0);
      uVar3 = FUN_08795138(uVar3,0);
      uVar3 = FUN_087d6cf0(uVar3,0);
      if (lVar4 != 0) {
        FUN_0869fadc(lVar4,uVar3,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


