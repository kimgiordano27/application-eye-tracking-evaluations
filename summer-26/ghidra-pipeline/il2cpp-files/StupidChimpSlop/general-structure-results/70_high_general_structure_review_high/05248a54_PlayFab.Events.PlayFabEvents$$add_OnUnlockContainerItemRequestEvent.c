/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$add_OnUnlockContainerItemRequestEvent
ENTRY_POINT: 05248a54
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void PlayFab_Events_PlayFabEvents__add_OnUnlockContainerItemRequestEvent(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  uint in_w8;
  uint unaff_w19;
  long unaff_x20;
  undefined4 unaff_w21;
  int unaff_w22;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  puVar5 = PTR_DAT_0664e420;
  if ((in_w8 < 2) || (unaff_w22 == 0x803)) {
                    /* try { // try from 05248b44 to 05348b47 has its CatchHandler @ 05248b4c */
                    /* catch() { ... } // from try @ 05248b44 with catch @ 05248b4c */
                    /* try { // try from 05248b50 to 05348b57 has its CatchHandler @ 05248b60 */
    if ((((unaff_w19 < 0x29) && ((1L << ((ulong)unaff_w19 & 0x3f) & 0x10000100420U) != 0)) ||
        (unaff_w19 == 0x50)) || (unaff_w19 == 0x78)) {
      *(undefined4 *)(unaff_x20 + 0x1c) = unaff_w23;
      *(undefined4 *)(unaff_x20 + 0x20) = unaff_w24;
      uVar1 = FUN_05248d88(unaff_w23,unaff_w24,unaff_w22);
      lVar2 = *(long *)puVar5;
      *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
                    /* catch() { ... } // from try @ 05248b00 with catch @ 05248ab8
                       catch() { ... } // from try @ 05248b58 with catch @ 05248ab8 */
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar2 = *(long *)puVar5;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
      if (lVar2 != 0) {
        FUN_0480e3a8(lVar2,*(undefined8 *)(unaff_x20 + 0x10));
        if (*(long *)(unaff_x20 + 0x10) != 0) {
          FUN_0524835c();
                    /* try { // try from 05248afc to 05348aff has its CatchHandler @ 05248b28 */
                    /* try { // try from 05248b00 to 05348b43 has its CatchHandler @ 05248ab8 */
          FUN_0524862c(*(undefined8 *)(unaff_x20 + 0x10),0xfa2,unaff_w21);
          FUN_0524862c(*(undefined8 *)(unaff_x20 + 0x10),0xfac,1);
          FUN_0524862c(*(undefined8 *)(unaff_x20 + 0x10),0xfae,0x1e);
          return;
        }
        thunk_FUN_02db45e8(PTR_DAT_0664c498);
        uVar1 = thunk_FUN_02d8a638();
        uVar4 = thunk_FUN_02db45e8(PTR_DAT_0664c4a0);
        FUN_052490c4(uVar1,0xfffffff9,uVar4);
        uVar4 = thunk_FUN_02db45e8(System_Func<SelectExitEventArgs>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_02d4ddac(uVar1,uVar4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
                    /* try { // try from 05248b58 to 05348b63 has its CatchHandler @ 05248ab8 */
    in_stack_00000008 = thunk_FUN_02db45e8(System_Func<RenderTree>_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05248b50 with catch @ 05248b60
                        */
                    /* try { // try from 05248b64 to 05348c73 has its CatchHandler @ 05248b64
                       catch() { ... } // from try @ 05248b64 with catch @ 05248b64
                       catch() { ... } // from try @ 05249250 with catch @ 05248b64
                       catch() { ... } // from try @ 05249290 with catch @ 05248b64
                       catch() { ... } // from try @ 052492b8 with catch @ 05248b64 */
    in_stack_00000010 = 0xffffffffffffffff;
    uVar1 = FUN_05038b8c(&stack0x00000008,0);
    uVar4 = thunk_FUN_02db45e8(System_Func<RenderingLayerMask>_TypeInfo);
    uVar3 = thunk_FUN_02db45e8(PTR_DAT_066484d8);
    uVar1 = FUN_04e80678(uVar4,uVar1,uVar3,0);
    thunk_FUN_02db45e8(PTR_DAT_0664a258);
    uVar4 = thunk_FUN_02d8a638();
    puVar5 = System_Func<SelectEnterEventArgs>_TypeInfo;
  }
  else {
    in_stack_00000008 = thunk_FUN_02db45e8(System_Func<SemaphoreSlim>_TypeInfo);
    in_stack_00000010 = 0xffffffffffffffff;
    uVar1 = FUN_05038b8c(&stack0x00000008,0);
    uVar4 = thunk_FUN_02db45e8(System_Func<float>_TypeInfo);
    uVar3 = thunk_FUN_02db45e8(PTR_DAT_066484d8);
    uVar1 = FUN_04e80678(uVar4,uVar1,uVar3,0);
    thunk_FUN_02db45e8(PTR_DAT_0664a258);
    uVar4 = thunk_FUN_02d8a638();
    puVar5 = System_Func<Stream>_TypeInfo;
  }
  uVar3 = thunk_FUN_02db45e8(puVar5);
  FUN_04f6baa8(uVar4,uVar3,uVar1,0);
  uVar1 = thunk_FUN_02db45e8(System_Func<SelectExitEventArgs>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02d4ddac(uVar4,uVar1);
}


