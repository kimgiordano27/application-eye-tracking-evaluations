/*
FUNCTION_NAME: ProximaWebSocketSharp.Server.WebSocketSessionManager$$CloseSession
ENTRY_POINT: 077a7dec
PROGRAM: m3ar-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined4 ProximaWebSocketSharp_Server_WebSocketSessionManager__CloseSession(void)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined4 unaff_w19;
  undefined8 *unaff_x20;
  int unaff_w21;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  
  do {
    uStack0000000000000008 = unaff_x20[1];
    uStack0000000000000000 = *unaff_x20;
    uStack0000000000000010 = unaff_x20[2];
    uVar1 = (**(code **)(*unaff_x23 + 0x1b8))(unaff_x23);
    do {
      unaff_w21 = unaff_w21 + 1;
      lVar2 = *unaff_x24;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar2 = *unaff_x24;
      }
      lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
      if (lVar4 == 0) {
LAB_077a7e3c:
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if (*(int *)(lVar4 + 0x18) <= unaff_w21) {
        return uVar1;
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar4 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 8);
        if (lVar4 == 0) goto LAB_077a7e3c;
      }
      unaff_x23 = (long *)FUN_057d50ec(lVar4,unaff_w21,*unaff_x25);
      if (unaff_x23 == (long *)0x0) goto LAB_077a7e3c;
      uVar3 = FUN_077a533c((int)unaff_x23[2],unaff_w19);
    } while ((uVar3 & 1) == 0);
  } while( true );
}


