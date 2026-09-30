/*
FUNCTION_NAME: UnityWebSocketSharp.Server.WebSocketSessionManager$$CloseSession
ENTRY_POINT: 07c1d1d0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 UnityWebSocketSharp_Server_WebSocketSessionManager__CloseSession(void)

{
  undefined8 uVar1;
  uint in_w8;
  long unaff_x20;
  undefined8 unaff_x24;
  
  if (1 < in_w8) {
    *(undefined8 *)(unaff_x20 + 0x28) = unaff_x24;
    thunk_FUN_03d233cc();
    uVar1 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08ed3b38);
    FUN_07c3d2d4();
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


