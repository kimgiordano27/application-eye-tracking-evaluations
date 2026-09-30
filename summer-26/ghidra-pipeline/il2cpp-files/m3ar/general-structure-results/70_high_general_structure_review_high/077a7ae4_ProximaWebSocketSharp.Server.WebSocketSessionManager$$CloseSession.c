/*
FUNCTION_NAME: ProximaWebSocketSharp.Server.WebSocketSessionManager$$CloseSession
ENTRY_POINT: 077a7ae4
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
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  int unaff_w21;
  long *unaff_x23;
  undefined8 *unaff_x24;
  
  while (plVar2 = (long *)FUN_057d50ec(param_1,unaff_w21,param_3), plVar2 != (long *)0x0) {
    uVar3 = FUN_077a533c((int)plVar2[2],unaff_w19);
    if ((uVar3 & 1) != 0) {
      (**(code **)(*plVar2 + 0x198))(plVar2,unaff_w20,*(undefined8 *)(*plVar2 + 0x1a0));
    }
    unaff_w21 = unaff_w21 + 1;
    lVar1 = *unaff_x23;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x23;
    }
    param_1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
    if (param_1 == 0) break;
    if (*(int *)(param_1 + 0x18) <= unaff_w21) {
      return;
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      param_1 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
      if (param_1 == 0) break;
    }
    param_3 = *unaff_x24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


