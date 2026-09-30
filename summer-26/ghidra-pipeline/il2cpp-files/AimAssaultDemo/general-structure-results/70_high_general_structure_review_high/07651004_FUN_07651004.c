/*
FUNCTION_NAME: FUN_07651004
ENTRY_POINT: 07651004
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_7;telemetry_or_network_hits_5
*/


void FUN_07651004(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *in_x9;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  
  uVar5 = *param_1;
  uVar1 = thunk_FUN_037788cc(*in_x9);
  FUN_05516994(uVar1,uVar5,
               *(undefined8 *)
                StrikerLink_ThirdParty_WebSocketSharp_Server_WebSocketSessionManager_<>c__DisplayClass49_0_TypeInfo
               ,0);
  lVar2 = *(long *)(*unaff_x25 + 0xb8);
  *(undefined8 *)(lVar2 + 0x580) = uVar1;
  thunk_FUN_037aeb94(lVar2 + 0x580,uVar1);
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8();
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar2 = *(long *)(unaff_x27 + 0x10);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar1 = FUN_062519f8(lVar2 + 0x20,0);
  uVar5 = FUN_062519f8(*(long *)(unaff_x27 + 0x68) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x588);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                StrikerLink_ThirdParty_WebSocketSharp_Server_WebSocketServer_<>c__DisplayClass62_0_TypeInfo
                              );
    FUN_05516a58(lVar4,uVar6,
                 *(undefined8 *)
                  StrikerLink_ThirdParty_WebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__14_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x588) = lVar4;
    thunk_FUN_037aeb94(lVar2 + 0x588,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar2 = *(long *)(unaff_x27 + 0x10);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar1 = FUN_062519f8(lVar2 + 0x20,0);
  uVar5 = FUN_062519f8(*(long *)(unaff_x27 + 0x18) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x590);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                StrikerLink_Shared_Connectivity_Protocols_WebSocketProtocol_<>c_TypeInfo
                              );
    FUN_055165c0(lVar4,uVar6,
                 *(undefined8 *)
                  StrikerLink_ThirdParty_WebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__20_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x590) = lVar4;
    thunk_FUN_037aeb94(lVar2 + 0x590,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar2 = *(long *)(unaff_x27 + 0x10);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar1 = FUN_062519f8(lVar2 + 0x20,0);
  uVar5 = FUN_062519f8(*(long *)(unaff_x27 + 0x40) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x598);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                StrikerLink_ThirdParty_WebSocketSharp_Server_WebSocketServiceManager_<>c__DisplayClass38_0_TypeInfo
                              );
    FUN_05516ef0(lVar4,uVar6,*(undefined8 *)UnityEngine_UIElements_WheelEvent_<>c_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x598) = lVar4;
    thunk_FUN_037aeb94(lVar2 + 0x598,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar2 = *(long *)(unaff_x27 + 0x10);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar1 = FUN_062519f8(lVar2 + 0x20,0);
  uVar5 = FUN_062519f8(*(long *)(unaff_x27 + 0x50) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x5a0);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                CustomWebSocketSharp_Server_WebSocketServer_<>c__DisplayClass70_0_TypeInfo
                              );
    FUN_05516fb4(lVar4,uVar6,*(undefined8 *)DIVR_Effects_WheelRotation_<>c_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x5a0) = lVar4;
    thunk_FUN_037aeb94(lVar2 + 0x5a0,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar2 = *(long *)(unaff_x27 + 0x10);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar1 = FUN_062519f8(lVar2 + 0x20,0);
  uVar5 = FUN_062519f8(*(long *)(unaff_x27 + 0x70) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x5a8);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_037788cc(*(undefined8 *)Bhaptics_Tact_WebSocketSender_<>c_TypeInfo);
    FUN_05517078(lVar4,uVar6,*(undefined8 *)Unity_VisualScripting_While_<LoopCoroutine>d__8_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x5a8) = lVar4;
    thunk_FUN_037aeb94(lVar2 + 0x5a8,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar2 = *(long *)(unaff_x27 + 0x10);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar1 = FUN_062519f8(lVar2 + 0x20,0);
  uVar5 = FUN_062519f8(*(long *)(unaff_x27 + 0x78) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x5b0);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                CustomWebSocketSharp_Server_WebSocketServiceManager_<>c__DisplayClass40_0_TypeInfo
                              );
    FUN_05516be0(lVar4,uVar6,
                 *(undefined8 *)
                  CustomWebSocketSharp_Server_WebSocketSessionManager_<>c__DisplayClass51_0_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x5b0) = lVar4;
    thunk_FUN_037aeb94(lVar2 + 0x5b0,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar3,uVar1,uVar5,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar2 = *(long *)(unaff_x27 + 0x10);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar1 = FUN_062519f8(lVar2 + 0x20,0);
  uVar5 = FUN_062519f8(*(long *)(unaff_x27 + 0x80) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x5b8);
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                StrikerLink_Shared_Connectivity_Protocols_WebSocketProtocol_<>c__DisplayClass11_0_TypeInfo
                              );
    FUN_05516748(lVar4,uVar6,
                 *(undefined8 *)
                  CustomWebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__14_TypeInfo,
                 0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x5b8) = lVar4;
    thunk_FUN_037aeb94(lVar2 + 0x5b8,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar3,uVar1,uVar5,lVar4);
  return;
}


