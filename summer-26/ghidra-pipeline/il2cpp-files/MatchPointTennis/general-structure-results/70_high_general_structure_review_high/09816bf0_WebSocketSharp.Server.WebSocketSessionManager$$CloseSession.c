/*
FUNCTION_NAME: WebSocketSharp.Server.WebSocketSessionManager$$CloseSession
ENTRY_POINT: 09816bf0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void WebSocketSharp_Server_WebSocketSessionManager__CloseSession(void)

{
  long lVar1;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x22;
  undefined8 *unaff_x24;
  long unaff_x25;
  undefined1 unaff_w26;
  int unaff_w27;
  
  while (*(long *)(unaff_x19 + 0x58) != 0) {
    lVar1 = FUN_05badb74(*(long *)(unaff_x19 + 0x58),unaff_w20,*unaff_x24);
    FUN_09538838();
    if (*(char *)(unaff_x25 + 0x29) == '\0') {
      FUN_04447ba8();
      *(undefined1 *)(unaff_x25 + 0x29) = unaff_w26;
    }
    if (lVar1 == 0) break;
    FUN_09538b4c(*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10),
                 *(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x14),lVar1,0);
    if (*(char *)(unaff_x25 + 0x29) == '\0') {
      FUN_04447ba8();
      *(undefined1 *)(unaff_x25 + 0x29) = unaff_w26;
    }
    FUN_09538cd8(*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10),
                 *(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x14),lVar1,0);
    FUN_09538ff0(*(undefined4 *)(unaff_x19 + 0x68),*(undefined4 *)(unaff_x19 + 0x6c),lVar1,0);
    unaff_w20 = unaff_w20 + 1;
    if (unaff_w27 == unaff_w20) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


