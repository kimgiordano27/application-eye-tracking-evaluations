/*
FUNCTION_NAME: StrikerLink.ThirdParty.WebSocketSharp.Server.WebSocketSessionManager$$CloseSession
ENTRY_POINT: 0656d770
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void StrikerLink_ThirdParty_WebSocketSharp_Server_WebSocketSessionManager__CloseSession
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long in_x9;
  int in_w10;
  long unaff_x19;
  undefined8 uVar3;
  long *unaff_x22;
  long *unaff_x23;
  
  *(undefined4 *)(in_x9 + 0x18) = 0;
  *(int *)(in_x9 + 0x1c) = in_w10 + 1;
  if (0 < (int)param_4) {
    FUN_062658d0(*(undefined8 *)(in_x9 + 0x10),0,param_4,0);
    param_1 = *(long *)(*unaff_x23 + 0xb8);
  }
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x18);
    *(undefined4 *)(lVar2 + 0x18) = 0;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_062658d0(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
    }
    uVar3 = *(undefined8 *)(unaff_x19 + 0x70);
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_0657aa2c(uVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


