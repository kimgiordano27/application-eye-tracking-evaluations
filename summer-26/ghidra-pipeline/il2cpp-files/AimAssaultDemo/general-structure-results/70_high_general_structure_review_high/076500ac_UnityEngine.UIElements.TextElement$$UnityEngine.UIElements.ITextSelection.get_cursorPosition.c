/*
FUNCTION_NAME: UnityEngine.UIElements.TextElement$$UnityEngine.UIElements.ITextSelection.get_cursorPosition
ENTRY_POINT: 076500ac
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_UIElements_TextElement__UnityEngine_UIElements_ITextSelection_get_cursorPosition
               (undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  
                    /* try { // try from 076500ac to 077500cb has its CatchHandler @ 07650180 */
  FUN_05516ef0();
  lVar3 = *(long *)(*unaff_x25 + 0xb8);
  *(undefined8 *)(lVar3 + 0x510) = param_1;
  thunk_FUN_037aeb94(lVar3 + 0x510,param_1);
                    /* try { // try from 076500e0 to 077500eb has its CatchHandler @ 0765017c */
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
                    /* try { // try from 076500f0 to 077500fb has its CatchHandler @ 07650178 */
  FUN_076445b8();
                    /* try { // try from 07650108 to 07750133 has its CatchHandler @ 07650184 */
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x40);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar1 = FUN_062519f8(lVar3 + 0x20,0);
  uVar2 = FUN_062519f8(*(long *)(unaff_x27 + 0x90) + 0x20,0);
                    /* try { // try from 07650148 to 07750167 has its CatchHandler @ 07650188 */
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
                    /* try { // try from 07650168 to 07750197 has its CatchHandler @ 0765004c */
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x518);
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 076500f0 with catch @ 07650178
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 076500e0 with catch @ 0765017c
                        */
    if (*(int *)(lVar3 + 0xe4) == 0) {
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 076500ac with catch @ 07650180
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 07650108 with catch @ 07650184
                        */
      thunk_FUN_03798b70(lVar3);
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 07650148 with catch @ 07650188
                        */
      lVar3 = *unaff_x25;
    }
                    /* try { // try from 07650198 to 0775019b has its CatchHandler @ 076501b0 */
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
                    /* try { // try from 0765019c to 077501b7 has its CatchHandler @ 0765004c */
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                CustomWebSocketSharp_WebSocket_<>c__DisplayClass178_0_TypeInfo);
    FUN_0551ab9c(lVar5,uVar6,
                 *(undefined8 *)
                  StrikerLink_ThirdParty_WebSocketSharp_WebSocket_<>c__DisplayClass213_0_TypeInfo,0)
    ;
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x518) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x518,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar4,uVar1,uVar2,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x90);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar1 = FUN_062519f8(lVar3 + 0x20,0);
  uVar2 = FUN_062519f8(*(long *)(unaff_x27 + 0x50) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x520);
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)System_Net_WebConnection_<>c_TypeInfo);
    FUN_05516fb4(lVar5,uVar6,
                 *(undefined8 *)
                  StrikerLink_ThirdParty_WebSocketSharp_WebSocket_<get_Cookies>d__67_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x520) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x520,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar4,uVar1,uVar2,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x50);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar1 = FUN_062519f8(lVar3 + 0x20,0);
  uVar2 = FUN_062519f8(*(long *)(unaff_x27 + 0x90) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x528);
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Net_WebResponseStream_<>c__DisplayClass41_0_TypeInfo);
    FUN_0551b4cc(lVar5,uVar6,
                 *(undefined8 *)CustomWebSocketSharp_WebSocketFrame_<>c__DisplayClass67_0_TypeInfo,0
                );
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x528) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x528,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar4,uVar1,uVar2,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x90);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar1 = FUN_062519f8(lVar3 + 0x20,0);
  uVar2 = FUN_062519f8(*(long *)(unaff_x27 + 0x70) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x530);
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                CustomWebSocketSharp_WebSocket_<>c__DisplayClass147_0_TypeInfo);
    FUN_05517078(lVar5,uVar6,
                 *(undefined8 *)CustomWebSocketSharp_WebSocketFrame_<>c__DisplayClass67_1_TypeInfo,0
                );
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x530) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x530,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar4,uVar1,uVar2,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x70);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar1 = FUN_062519f8(lVar3 + 0x20,0);
  uVar2 = FUN_062519f8(*(long *)(unaff_x27 + 0x90) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x538);
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                StrikerLink_ThirdParty_WebSocketSharp_WebSocket_<>c__DisplayClass138_0_TypeInfo
                              );
    FUN_0551bdfc(lVar5,uVar6,
                 *(undefined8 *)CustomWebSocketSharp_WebSocketFrame_<>c__DisplayClass71_0_TypeInfo,0
                );
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x538) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x538,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar4,uVar1,uVar2,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x90);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar1 = FUN_062519f8(lVar3 + 0x20,0);
  uVar2 = FUN_062519f8(*(long *)(unaff_x27 + 0x78) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x540);
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                CustomWebSocketSharp_Net_WebHeaderCollection_<>c__DisplayClass59_0_TypeInfo
                              );
    FUN_05516be0(lVar5,uVar6,
                 *(undefined8 *)CustomWebSocketSharp_WebSocketFrame_<>c__DisplayClass75_0_TypeInfo,0
                );
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x540) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x540,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar4,uVar1,uVar2,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar1 = FUN_062519f8(lVar3 + 0x20,0);
  uVar2 = FUN_062519f8(*(long *)(unaff_x27 + 0x90) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x548);
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)System_Net_WebRequest_<>c__DisplayClass79_0_TypeInfo);
    FUN_05518150(lVar5,uVar6,
                 *(undefined8 *)CustomWebSocketSharp_WebSocketFrame_<>c__DisplayClass77_0_TypeInfo,0
                );
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x548) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x548,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar4,uVar1,uVar2,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x90);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar1 = FUN_062519f8(lVar3 + 0x20,0);
  uVar2 = FUN_062519f8(*(long *)(unaff_x27 + 0x80) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x550);
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                CustomWebSocketSharp_WebSocket_<>c__DisplayClass175_0_TypeInfo);
    FUN_05516748(lVar5,uVar6,
                 *(undefined8 *)CustomWebSocketSharp_WebSocketFrame_<>c__DisplayClass83_0_TypeInfo,0
                );
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x550) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x550,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar4,uVar1,uVar2,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *(long *)(unaff_x27 + 0x80);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar1 = FUN_062519f8(lVar3 + 0x20,0);
  uVar2 = FUN_062519f8(*(long *)(unaff_x27 + 0x90) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x558);
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                CustomWebSocketSharp_WebSocket_<>c__DisplayClass128_0_TypeInfo);
    FUN_05512f24(lVar5,uVar6,
                 *(undefined8 *)CustomWebSocketSharp_WebSocketFrame_<GetEnumerator>d__85_TypeInfo,0)
    ;
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x558) = lVar5;
    thunk_FUN_037aeb94(lVar3 + 0x558,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_076445b8(uVar4,uVar1,uVar2,lVar5);
  return;
}


