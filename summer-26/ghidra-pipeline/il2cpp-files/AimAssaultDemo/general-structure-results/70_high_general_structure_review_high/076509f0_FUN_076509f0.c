/*
FUNCTION_NAME: FUN_076509f0
ENTRY_POINT: 076509f0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_12;telemetry_or_network_hits_18
*/


void FUN_076509f0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar2 = PTR_DAT_07d95a70;
  if ((DAT_08270c86 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d97cd0);
    FUN_0373b518(PTR_DAT_07d95a70);
    FUN_0373b518(StrikerLink_Shared_Connectivity_Protocols_WebSocketProtocol_<>c_TypeInfo);
    FUN_0373b518(
                StrikerLink_Shared_Connectivity_Protocols_WebSocketProtocol_<>c__DisplayClass11_0_TypeInfo
                );
    FUN_0373b518(Bhaptics_Tact_WebSocketSender_<>c_TypeInfo);
    FUN_0373b518(CustomWebSocketSharp_Server_WebSocketServer_<>c__DisplayClass70_0_TypeInfo);
    FUN_0373b518(
                StrikerLink_ThirdParty_WebSocketSharp_Server_WebSocketServer_<>c__DisplayClass62_0_TypeInfo
                );
    FUN_0373b518(CustomWebSocketSharp_Server_WebSocketServiceManager_<>c__DisplayClass26_0_TypeInfo)
    ;
    FUN_0373b518(CustomWebSocketSharp_Server_WebSocketServiceManager_<>c__DisplayClass27_0_TypeInfo)
    ;
    FUN_0373b518(CustomWebSocketSharp_Server_WebSocketServiceManager_<>c__DisplayClass40_0_TypeInfo)
    ;
    FUN_0373b518(
                StrikerLink_ThirdParty_WebSocketSharp_Server_WebSocketServiceManager_<>c__DisplayClass26_0_TypeInfo
                );
    FUN_0373b518(
                StrikerLink_ThirdParty_WebSocketSharp_Server_WebSocketServiceManager_<>c__DisplayClass27_0_TypeInfo
                );
    FUN_0373b518(
                StrikerLink_ThirdParty_WebSocketSharp_Server_WebSocketServiceManager_<>c__DisplayClass38_0_TypeInfo
                );
    FUN_0373b518(CustomWebSocketSharp_Server_WebSocketSessionManager_<>c__DisplayClass33_0_TypeInfo)
    ;
    FUN_0373b518(CustomWebSocketSharp_Server_WebSocketSessionManager_<>c__DisplayClass34_0_TypeInfo)
    ;
    FUN_0373b518(CustomWebSocketSharp_Server_WebSocketSessionManager_<>c__DisplayClass51_0_TypeInfo)
    ;
    FUN_0373b518(CustomWebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__14_TypeInfo);
    FUN_0373b518(CustomWebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__20_TypeInfo
                );
    FUN_0373b518(
                StrikerLink_ThirdParty_WebSocketSharp_Server_WebSocketSessionManager_<>c__DisplayClass33_0_TypeInfo
                );
    FUN_0373b518(
                StrikerLink_ThirdParty_WebSocketSharp_Server_WebSocketSessionManager_<>c__DisplayClass34_0_TypeInfo
                );
    FUN_0373b518(
                StrikerLink_ThirdParty_WebSocketSharp_Server_WebSocketSessionManager_<>c__DisplayClass49_0_TypeInfo
                );
    FUN_0373b518(
                StrikerLink_ThirdParty_WebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__14_TypeInfo
                );
    FUN_0373b518(
                StrikerLink_ThirdParty_WebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__20_TypeInfo
                );
    FUN_0373b518(UnityEngine_UIElements_WheelEvent_<>c_TypeInfo);
    FUN_0373b518(DIVR_Effects_WheelRotation_<>c_TypeInfo);
    FUN_0373b518(Unity_VisualScripting_While_<LoopCoroutine>d__8_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_UIR_TextureBlitter_BlitInfo_TypeInfo);
    DAT_08270c86 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  puVar4 = UnityEngine_UIElements_UIR_TextureBlitter_BlitInfo_TypeInfo;
  puVar1 = PTR_DAT_07d86548;
  lVar7 = *(long *)(PTR_DAT_07d86548 + 0x10);
  if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar5 = FUN_062519f8(lVar7 + 0x20,0);
  uVar6 = FUN_062519f8(*(long *)(puVar1 + 0x88) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar7);
    lVar7 = *(long *)puVar4;
  }
  puVar3 = PTR_DAT_07d97cd0;
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x560);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                StrikerLink_ThirdParty_WebSocketSharp_Server_WebSocketServiceManager_<>c__DisplayClass26_0_TypeInfo
                              );
    FUN_05516684(lVar9,uVar10,
                 *(undefined8 *)
                  CustomWebSocketSharp_Server_WebSocketSessionManager_<>c__DisplayClass34_0_TypeInfo
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x560) = lVar9;
    thunk_FUN_037aeb94(lVar7 + 0x560,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar7 = *(long *)(puVar1 + 0x10);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar5 = FUN_062519f8(lVar7 + 0x20,0);
  uVar6 = FUN_062519f8(*(long *)(puVar1 + 0x28) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x568);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                CustomWebSocketSharp_Server_WebSocketServiceManager_<>c__DisplayClass27_0_TypeInfo
                              );
    FUN_055164fc(lVar9,uVar10,
                 *(undefined8 *)
                  CustomWebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__20_TypeInfo
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x568) = lVar9;
    thunk_FUN_037aeb94(lVar7 + 0x568,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar7 = *(long *)(puVar1 + 0x10);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar5 = FUN_062519f8(lVar7 + 0x20,0);
  uVar6 = FUN_062519f8(*(long *)(puVar1 + 0x30) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x570);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                CustomWebSocketSharp_Server_WebSocketServiceManager_<>c__DisplayClass26_0_TypeInfo
                              );
    FUN_05516b1c(lVar9,uVar10,
                 *(undefined8 *)
                  StrikerLink_ThirdParty_WebSocketSharp_Server_WebSocketSessionManager_<>c__DisplayClass33_0_TypeInfo
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x570) = lVar9;
    thunk_FUN_037aeb94(lVar7 + 0x570,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar7 = *(long *)(puVar1 + 0x10);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar5 = FUN_062519f8(lVar7 + 0x20,0);
  uVar6 = FUN_062519f8(*(long *)(puVar1 + 0x38) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x578);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                StrikerLink_ThirdParty_WebSocketSharp_Server_WebSocketServiceManager_<>c__DisplayClass27_0_TypeInfo
                              );
    FUN_055168d0(lVar9,uVar10,
                 *(undefined8 *)
                  StrikerLink_ThirdParty_WebSocketSharp_Server_WebSocketSessionManager_<>c__DisplayClass34_0_TypeInfo
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x578) = lVar9;
    thunk_FUN_037aeb94(lVar7 + 0x578,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar7 = *(long *)(puVar1 + 0x10);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar5 = FUN_062519f8(lVar7 + 0x20,0);
  uVar6 = FUN_062519f8(*(long *)(puVar1 + 0x48) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x580);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar7);
      lVar7 = *(long *)puVar4;
    }
    FUN_078da5e4(*(undefined8 *)(lVar7 + 0xb8));
    return;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar7 = *(long *)(puVar1 + 0x10);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar5 = FUN_062519f8(lVar7 + 0x20,0);
  uVar6 = FUN_062519f8(*(long *)(puVar1 + 0x68) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x588);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                StrikerLink_ThirdParty_WebSocketSharp_Server_WebSocketServer_<>c__DisplayClass62_0_TypeInfo
                              );
    FUN_05516a58(lVar9,uVar10,
                 *(undefined8 *)
                  StrikerLink_ThirdParty_WebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__14_TypeInfo
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x588) = lVar9;
    thunk_FUN_037aeb94(lVar7 + 0x588,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar7 = *(long *)(puVar1 + 0x10);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar5 = FUN_062519f8(lVar7 + 0x20,0);
  uVar6 = FUN_062519f8(*(long *)(puVar1 + 0x18) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x590);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                StrikerLink_Shared_Connectivity_Protocols_WebSocketProtocol_<>c_TypeInfo
                              );
    FUN_055165c0(lVar9,uVar10,
                 *(undefined8 *)
                  StrikerLink_ThirdParty_WebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__20_TypeInfo
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x590) = lVar9;
    thunk_FUN_037aeb94(lVar7 + 0x590,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar7 = *(long *)(puVar1 + 0x10);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar5 = FUN_062519f8(lVar7 + 0x20,0);
  uVar6 = FUN_062519f8(*(long *)(puVar1 + 0x40) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x598);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                StrikerLink_ThirdParty_WebSocketSharp_Server_WebSocketServiceManager_<>c__DisplayClass38_0_TypeInfo
                              );
    FUN_05516ef0(lVar9,uVar10,*(undefined8 *)UnityEngine_UIElements_WheelEvent_<>c_TypeInfo,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x598) = lVar9;
    thunk_FUN_037aeb94(lVar7 + 0x598,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar7 = *(long *)(puVar1 + 0x10);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar5 = FUN_062519f8(lVar7 + 0x20,0);
  uVar6 = FUN_062519f8(*(long *)(puVar1 + 0x50) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x5a0);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                CustomWebSocketSharp_Server_WebSocketServer_<>c__DisplayClass70_0_TypeInfo
                              );
    FUN_05516fb4(lVar9,uVar10,*(undefined8 *)DIVR_Effects_WheelRotation_<>c_TypeInfo,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x5a0) = lVar9;
    thunk_FUN_037aeb94(lVar7 + 0x5a0,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar7 = *(long *)(puVar1 + 0x10);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar5 = FUN_062519f8(lVar7 + 0x20,0);
  uVar6 = FUN_062519f8(*(long *)(puVar1 + 0x70) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x5a8);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_037788cc(*(undefined8 *)Bhaptics_Tact_WebSocketSender_<>c_TypeInfo);
    FUN_05517078(lVar9,uVar10,
                 *(undefined8 *)Unity_VisualScripting_While_<LoopCoroutine>d__8_TypeInfo,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x5a8) = lVar9;
    thunk_FUN_037aeb94(lVar7 + 0x5a8,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar7 = *(long *)(puVar1 + 0x10);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar5 = FUN_062519f8(lVar7 + 0x20,0);
  uVar6 = FUN_062519f8(*(long *)(puVar1 + 0x78) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x5b0);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                CustomWebSocketSharp_Server_WebSocketServiceManager_<>c__DisplayClass40_0_TypeInfo
                              );
    FUN_05516be0(lVar9,uVar10,
                 *(undefined8 *)
                  CustomWebSocketSharp_Server_WebSocketSessionManager_<>c__DisplayClass51_0_TypeInfo
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x5b0) = lVar9;
    thunk_FUN_037aeb94(lVar7 + 0x5b0,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar7 = *(long *)(puVar1 + 0x10);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar5 = FUN_062519f8(lVar7 + 0x20,0);
  uVar6 = FUN_062519f8(*(long *)(puVar1 + 0x80) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x5b8);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                StrikerLink_Shared_Connectivity_Protocols_WebSocketProtocol_<>c__DisplayClass11_0_TypeInfo
                              );
    FUN_05516748(lVar9,uVar10,
                 *(undefined8 *)
                  CustomWebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__14_TypeInfo,
                 0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x5b8) = lVar9;
    thunk_FUN_037aeb94(lVar7 + 0x5b8,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar8,uVar5,uVar6,lVar9);
  return;
}


