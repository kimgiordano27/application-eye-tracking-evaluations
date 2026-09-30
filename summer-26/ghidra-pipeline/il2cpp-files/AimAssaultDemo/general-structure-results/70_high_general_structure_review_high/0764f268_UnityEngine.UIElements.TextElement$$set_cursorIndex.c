/*
FUNCTION_NAME: UnityEngine.UIElements.TextElement$$set_cursorIndex
ENTRY_POINT: 0764f268
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void UnityEngine_UIElements_TextElement__set_cursorIndex(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x27;
  
  uVar2 = FUN_062519f8(*(long *)(unaff_x27 + 0x88) + 0x20,0);
  lVar3 = *unaff_x25;
                    /* try { // try from 0764f284 to 0774f28f has its CatchHandler @ 0764f330 */
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
                    /* try { // try from 0764f294 to 0774f29f has its CatchHandler @ 0764f32c */
    lVar3 = *unaff_x25;
  }
  puVar1 = PTR_DAT_07d97cd0;
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x4a0);
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
                    /* try { // try from 0764f2ac to 0774f2d7 has its CatchHandler @ 0764f338 */
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                UnityEngine_UIElements_VisualTreeAsset_SlotUsageEntry_TypeInfo);
                    /* try { // try from 0764f2ec to 0774f30f has its CatchHandler @ 0764f33c */
    FUN_05516684(lVar5,uVar6,
                 *(undefined8 *)
                  StrikerLink_ThirdParty_WebSocketSharp_WebSocket_<>c__DisplayClass159_0_TypeInfo,0)
    ;
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x4a0) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x4a0,lVar5);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar4,param_1,uVar2,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x88);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar2 = FUN_062519f8(lVar3 + 0x20,0);
  uVar4 = FUN_062519f8(*(long *)(unaff_x27 + 0x90) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x4a8);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                UnityEngine_Rendering_VolumeManager_<>c__DisplayClass58_1_TypeInfo);
    FUN_05512210(lVar5,uVar7,
                 *(undefined8 *)CustomWebSocketSharp_WebSocketFrame_<>c__DisplayClass73_0_TypeInfo,0
                );
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x4a8) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x4a8,lVar5);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar6,uVar2,uVar4,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x90);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar2 = FUN_062519f8(lVar3 + 0x20,0);
  uVar4 = FUN_062519f8(*(long *)(unaff_x27 + 0x28) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x4b0);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                StrikerLink_ThirdParty_WebSocketSharp_Net_WebHeaderCollection_<>c__DisplayClass46_0_TypeInfo
                              );
    FUN_055164fc(lVar5,uVar7,
                 *(undefined8 *)
                  StrikerLink_ThirdParty_WebSocketSharp_WebSocketFrame_<>c__DisplayClass67_0_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x4b0) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x4b0,lVar5);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar6,uVar2,uVar4,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x28);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar2 = FUN_062519f8(lVar3 + 0x20,0);
  uVar4 = FUN_062519f8(*(long *)(unaff_x27 + 0x90) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x4b8);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                CustomWebSocketSharp_Net_WebHeaderCollection_<>c__DisplayClass70_0_TypeInfo
                              );
    FUN_05510fb0(lVar5,uVar7,
                 *(undefined8 *)
                  StrikerLink_ThirdParty_WebSocketSharp_WebSocketFrame_<>c__DisplayClass67_1_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x4b8) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x4b8,lVar5);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar6,uVar2,uVar4,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x90);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar2 = FUN_062519f8(lVar3 + 0x20,0);
  uVar4 = FUN_062519f8(*(long *)(unaff_x27 + 0x30) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x4c0);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                CustomWebSocketSharp_WebSocket_<>c__DisplayClass181_0_TypeInfo);
    FUN_05516b1c(lVar5,uVar7,
                 *(undefined8 *)
                  StrikerLink_ThirdParty_WebSocketSharp_WebSocketFrame_<>c__DisplayClass71_0_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x4c0) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x4c0,lVar5);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar6,uVar2,uVar4,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x30);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar2 = FUN_062519f8(lVar3 + 0x20,0);
  uVar4 = FUN_062519f8(*(long *)(unaff_x27 + 0x90) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x4c8);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                CustomWebSocketSharp_WebSocket_<>c__DisplayClass214_0_TypeInfo);
    FUN_0551775c(lVar5,uVar7,
                 *(undefined8 *)
                  StrikerLink_ThirdParty_WebSocketSharp_WebSocketFrame_<>c__DisplayClass73_0_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x4c8) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x4c8,lVar5);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar6,uVar2,uVar4,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x90);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar2 = FUN_062519f8(lVar3 + 0x20,0);
  uVar4 = FUN_062519f8(*(long *)(unaff_x27 + 0x38) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x4d0);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                CustomWebSocketSharp_WebSocket_<>c__DisplayClass202_0_TypeInfo);
    FUN_055168d0(lVar5,uVar7,
                 *(undefined8 *)
                  StrikerLink_ThirdParty_WebSocketSharp_WebSocketFrame_<>c__DisplayClass75_0_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x4d0) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x4d0,lVar5);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar6,uVar2,uVar4,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x38);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar2 = FUN_062519f8(lVar3 + 0x20,0);
  uVar4 = FUN_062519f8(*(long *)(unaff_x27 + 0x90) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x4d8);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                StrikerLink_ThirdParty_WebSocketSharp_WebSocket_<>c__DisplayClass121_0_TypeInfo
                              );
    Unity_Collections_LowLevel_Unsafe_UnsafeParallelHashMap<SharedInstanceHandle,_int>__get_IsCreated
              (lVar5,uVar7,
               *(undefined8 *)
                StrikerLink_ThirdParty_WebSocketSharp_WebSocketFrame_<>c__DisplayClass77_0_TypeInfo,
               0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x4d8) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x4d8,lVar5);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar6,uVar2,uVar4,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x90);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar2 = FUN_062519f8(lVar3 + 0x20,0);
  uVar4 = FUN_062519f8(*(long *)(unaff_x27 + 0x48) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x4e0);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                CustomWebSocketSharp_WebSocket_<get_Cookies>d__70_TypeInfo);
    FUN_05516994(lVar5,uVar7,
                 *(undefined8 *)
                  StrikerLink_ThirdParty_WebSocketSharp_WebSocketFrame_<>c__DisplayClass82_0_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x4e0) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x4e0,lVar5);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar6,uVar2,uVar4,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x48);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar2 = FUN_062519f8(lVar3 + 0x20,0);
  uVar4 = FUN_062519f8(*(long *)(unaff_x27 + 0x90) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x4e8);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                CustomWebSocketSharp_Net_WebHeaderCollection_<>c__DisplayClass46_0_TypeInfo
                              );
    Unity_Collections_LowLevel_Unsafe_UnsafeParallelHashMap<ushort,_int>__Clear
              (lVar5,uVar7,
               *(undefined8 *)
                StrikerLink_ThirdParty_WebSocketSharp_WebSocketFrame_<GetEnumerator>d__84_TypeInfo,0
              );
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x4e8) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x4e8,lVar5);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar6,uVar2,uVar4,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x90);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar2 = FUN_062519f8(lVar3 + 0x20,0);
  uVar4 = FUN_062519f8(*(long *)(unaff_x27 + 0x68) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x4f0);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                StrikerLink_ThirdParty_WebSocketSharp_Net_WebHeaderCollection_<>c__DisplayClass59_0_TypeInfo
                              );
    FUN_05516a58(lVar5,uVar7,
                 *(undefined8 *)
                  StrikerLink_ThirdParty_WebSocketSharp_WebSocket_<>c__DisplayClass166_0_TypeInfo,0)
    ;
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x4f0) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x4f0,lVar5);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar6,uVar2,uVar4,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x68);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar2 = FUN_062519f8(lVar3 + 0x20,0);
  uVar4 = FUN_062519f8(*(long *)(unaff_x27 + 0x90) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x4f8);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                StrikerLink_ThirdParty_WebSocketSharp_Net_WebHeaderCollection_<>c__DisplayClass70_0_TypeInfo
                              );
    FUN_05515d44(lVar5,uVar7,
                 *(undefined8 *)
                  StrikerLink_ThirdParty_WebSocketSharp_WebSocket_<>c__DisplayClass169_0_TypeInfo,0)
    ;
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x4f8) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x4f8,lVar5);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar6,uVar2,uVar4,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x90);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar2 = FUN_062519f8(lVar3 + 0x20,0);
  uVar4 = FUN_062519f8(*(long *)(unaff_x27 + 0x18) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x500);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Net_WebRequest_DesignerWebRequestCreate_TypeInfo);
    FUN_055165c0(lVar5,uVar7,
                 *(undefined8 *)
                  StrikerLink_ThirdParty_WebSocketSharp_WebSocket_<>c__DisplayClass172_0_TypeInfo,0)
    ;
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x500) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x500,lVar5);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar6,uVar2,uVar4,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x18);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar2 = FUN_062519f8(lVar3 + 0x20,0);
  uVar4 = FUN_062519f8(*(long *)(unaff_x27 + 0x90) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x508);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                CustomWebSocketSharp_WebSocket_<>c__DisplayClass168_0_TypeInfo);
    FUN_055118e0(lVar5,uVar7,
                 *(undefined8 *)
                  StrikerLink_ThirdParty_WebSocketSharp_WebSocket_<>c__DisplayClass192_0_TypeInfo,0)
    ;
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x508) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x508,lVar5);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar6,uVar2,uVar4,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x90);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar2 = FUN_062519f8(lVar3 + 0x20,0);
  uVar4 = FUN_062519f8(*(long *)(unaff_x27 + 0x40) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x510);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)System_Net_WebRequest_<>c__DisplayClass78_0_TypeInfo);
    FUN_05516ef0(lVar5,uVar7,
                 *(undefined8 *)
                  StrikerLink_ThirdParty_WebSocketSharp_WebSocket_<>c__DisplayClass204_0_TypeInfo,0)
    ;
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x510) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x510,lVar5);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar6,uVar2,uVar4,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x40);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar2 = FUN_062519f8(lVar3 + 0x20,0);
  uVar4 = FUN_062519f8(*(long *)(unaff_x27 + 0x90) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x518);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                CustomWebSocketSharp_WebSocket_<>c__DisplayClass178_0_TypeInfo);
    FUN_0551ab9c(lVar5,uVar7,
                 *(undefined8 *)
                  StrikerLink_ThirdParty_WebSocketSharp_WebSocket_<>c__DisplayClass213_0_TypeInfo,0)
    ;
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x518) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x518,lVar5);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar6,uVar2,uVar4,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x90);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar2 = FUN_062519f8(lVar3 + 0x20,0);
  uVar4 = FUN_062519f8(*(long *)(unaff_x27 + 0x50) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x520);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)System_Net_WebConnection_<>c_TypeInfo);
    FUN_05516fb4(lVar5,uVar7,
                 *(undefined8 *)
                  StrikerLink_ThirdParty_WebSocketSharp_WebSocket_<get_Cookies>d__67_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x520) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x520,lVar5);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar6,uVar2,uVar4,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x50);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar2 = FUN_062519f8(lVar3 + 0x20,0);
  uVar4 = FUN_062519f8(*(long *)(unaff_x27 + 0x90) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x528);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Net_WebResponseStream_<>c__DisplayClass41_0_TypeInfo);
    FUN_0551b4cc(lVar5,uVar7,
                 *(undefined8 *)CustomWebSocketSharp_WebSocketFrame_<>c__DisplayClass67_0_TypeInfo,0
                );
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x528) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x528,lVar5);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar6,uVar2,uVar4,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x90);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar2 = FUN_062519f8(lVar3 + 0x20,0);
  uVar4 = FUN_062519f8(*(long *)(unaff_x27 + 0x70) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x530);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                CustomWebSocketSharp_WebSocket_<>c__DisplayClass147_0_TypeInfo);
    FUN_05517078(lVar5,uVar7,
                 *(undefined8 *)CustomWebSocketSharp_WebSocketFrame_<>c__DisplayClass67_1_TypeInfo,0
                );
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x530) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x530,lVar5);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar6,uVar2,uVar4,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x70);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar2 = FUN_062519f8(lVar3 + 0x20,0);
  uVar4 = FUN_062519f8(*(long *)(unaff_x27 + 0x90) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x538);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                StrikerLink_ThirdParty_WebSocketSharp_WebSocket_<>c__DisplayClass138_0_TypeInfo
                              );
    FUN_0551bdfc(lVar5,uVar7,
                 *(undefined8 *)CustomWebSocketSharp_WebSocketFrame_<>c__DisplayClass71_0_TypeInfo,0
                );
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x538) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x538,lVar5);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar6,uVar2,uVar4,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x90);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar2 = FUN_062519f8(lVar3 + 0x20,0);
  uVar4 = FUN_062519f8(*(long *)(unaff_x27 + 0x78) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x540);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                CustomWebSocketSharp_Net_WebHeaderCollection_<>c__DisplayClass59_0_TypeInfo
                              );
    FUN_05516be0(lVar5,uVar7,
                 *(undefined8 *)CustomWebSocketSharp_WebSocketFrame_<>c__DisplayClass75_0_TypeInfo,0
                );
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x540) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x540,lVar5);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar6,uVar2,uVar4,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar2 = FUN_062519f8(lVar3 + 0x20,0);
  uVar4 = FUN_062519f8(*(long *)(unaff_x27 + 0x90) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x548);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)System_Net_WebRequest_<>c__DisplayClass79_0_TypeInfo);
    FUN_05518150(lVar5,uVar7,
                 *(undefined8 *)CustomWebSocketSharp_WebSocketFrame_<>c__DisplayClass77_0_TypeInfo,0
                );
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x548) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x548,lVar5);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar6,uVar2,uVar4,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x90);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar2 = FUN_062519f8(lVar3 + 0x20,0);
  uVar4 = FUN_062519f8(*(long *)(unaff_x27 + 0x80) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x550);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                CustomWebSocketSharp_WebSocket_<>c__DisplayClass175_0_TypeInfo);
    FUN_05516748(lVar5,uVar7,
                 *(undefined8 *)CustomWebSocketSharp_WebSocketFrame_<>c__DisplayClass83_0_TypeInfo,0
                );
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x550) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x550,lVar5);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar6,uVar2,uVar4,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x80);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar2 = FUN_062519f8(lVar3 + 0x20,0);
  uVar4 = FUN_062519f8(*(long *)(unaff_x27 + 0x90) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x558);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                CustomWebSocketSharp_WebSocket_<>c__DisplayClass128_0_TypeInfo);
    FUN_05512f24(lVar5,uVar7,
                 *(undefined8 *)CustomWebSocketSharp_WebSocketFrame_<GetEnumerator>d__85_TypeInfo,0)
    ;
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x558) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x558,lVar5);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar6,uVar2,uVar4,lVar5);
  return;
}


