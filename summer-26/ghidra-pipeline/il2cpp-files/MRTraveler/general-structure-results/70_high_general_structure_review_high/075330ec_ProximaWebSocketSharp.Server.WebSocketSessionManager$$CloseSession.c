/*
FUNCTION_NAME: ProximaWebSocketSharp.Server.WebSocketSessionManager$$CloseSession
ENTRY_POINT: 075330ec
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void ProximaWebSocketSharp_Server_WebSocketSessionManager__CloseSession(long param_1)

{
  uint uVar1;
  bool in_CY;
  long lVar2;
  long in_x10;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  
  if (in_CY) {
    FUN_05210530();
  }
  else {
    *(int *)(unaff_x21 + 0x18) = (int)in_x10 + 1;
    *(undefined8 *)(param_1 + in_x10 * 8 + 0x20) = unaff_x22;
  }
  lVar2 = *(long *)(unaff_x21 + 0x10);
  *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
  if (lVar2 != 0) {
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar2 + (long)(int)uVar1 * 8 + 0x20) = unaff_x20;
    }
    else {
      FUN_05210530();
    }
    FUN_07532f20();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


