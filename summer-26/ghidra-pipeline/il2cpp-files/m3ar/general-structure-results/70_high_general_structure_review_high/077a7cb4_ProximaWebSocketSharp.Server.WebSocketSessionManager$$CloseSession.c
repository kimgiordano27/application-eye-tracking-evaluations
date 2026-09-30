/*
FUNCTION_NAME: ProximaWebSocketSharp.Server.WebSocketSessionManager$$CloseSession
ENTRY_POINT: 077a7cb4
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


void ProximaWebSocketSharp_Server_WebSocketSessionManager__CloseSession
               (long param_1,undefined1 param_2 [16],long *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 in_x9;
  undefined4 unaff_w19;
  undefined8 *unaff_x20;
  int unaff_w21;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000008 = param_2._8_8_;
  uStack0000000000000000 = param_2._0_8_;
  do {
    uStack0000000000000010 = in_x9;
    (**(code **)(param_1 + 0x1a8))(param_3);
    do {
      unaff_w21 = unaff_w21 + 1;
      lVar1 = *unaff_x23;
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar1 = *unaff_x23;
      }
      lVar3 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
      if (lVar3 == 0) {
LAB_077a7ce8:
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if (*(int *)(lVar3 + 0x18) <= unaff_w21) {
        return;
      }
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar3 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
        if (lVar3 == 0) goto LAB_077a7ce8;
      }
      param_3 = (long *)FUN_057d50ec(lVar3,unaff_w21,*unaff_x24);
      if (param_3 == (long *)0x0) goto LAB_077a7ce8;
      uVar2 = FUN_077a533c((int)param_3[2],unaff_w19);
    } while ((uVar2 & 1) == 0);
    param_1 = *param_3;
    uStack0000000000000008 = unaff_x20[1];
    uStack0000000000000000 = *unaff_x20;
    in_x9 = unaff_x20[2];
  } while( true );
}


