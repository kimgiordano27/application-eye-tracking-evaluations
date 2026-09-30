/*
FUNCTION_NAME: UnityWebSocketSharp.Server.WebSocketSessionManager$$CloseSession
ENTRY_POINT: 07c3adbc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void UnityWebSocketSharp_Server_WebSocketSessionManager__CloseSession
               (long param_1,undefined8 param_2,long param_3)

{
  uint in_w9;
  undefined4 in_register_0000404c;
  uint in_w10;
  
  if ((in_w9 <= in_w10) &&
     (*(long *)(*(long *)(param_1 + 200) + CONCAT44(in_register_0000404c,in_w9) * 8 + -8) == param_3
     )) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d8e4();
}


