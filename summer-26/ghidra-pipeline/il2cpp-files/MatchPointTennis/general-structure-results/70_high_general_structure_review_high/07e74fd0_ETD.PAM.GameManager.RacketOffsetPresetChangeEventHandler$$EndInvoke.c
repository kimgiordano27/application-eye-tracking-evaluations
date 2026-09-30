/*
FUNCTION_NAME: ETD.PAM.GameManager.RacketOffsetPresetChangeEventHandler$$EndInvoke
ENTRY_POINT: 07e74fd0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void ETD_PAM_GameManager_RacketOffsetPresetChangeEventHandler__EndInvoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar5;
  undefined8 in_stack_00000008;
  int iStack0000000000000018;
  float fStack000000000000001c;
  
  FUN_04447ba8(PTR_DAT_09f22f80);
  FUN_04447ba8(PTR_DAT_09f5bec0);
  FUN_04447ba8(PTR_DAT_09f1ffe8);
  FUN_04447ba8(PTR_DAT_09f59cc0);
  FUN_04447ba8(PTR_DAT_09f333e0);
  FUN_04447ba8(PTR_DAT_09f3e038);
  *(undefined1 *)(unaff_x20 + 0x907) = 1;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar3 = FUN_045dbad8(0);
  if (*(long *)(unaff_x19 + 0x160) != 0) {
    WebSocketSharp_Net_ChunkedRequestStream__onRead(0,*(long *)(unaff_x19 + 0x160),0);
    if (*(long *)(unaff_x19 + 0x170) != 0) {
      WebSocketSharp_Net_ChunkedRequestStream__onRead(0,*(long *)(unaff_x19 + 0x170),0);
      puVar2 = PTR_DAT_09f3e038;
      puVar1 = PTR_DAT_09f333e0;
      if (*(long *)(unaff_x19 + 0x180) != 0) {
        WebSocketSharp_Net_ChunkedRequestStream__onRead(0,*(long *)(unaff_x19 + 0x180),0);
        plVar5 = *(long **)(unaff_x19 + 0x168);
        uVar4 = FUN_07a50924((long)&stack0x00000018 + 4,*(undefined8 *)puVar1,0);
        uVar4 = FUN_078a7764(*(undefined8 *)puVar2,uVar4,0);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x558))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x560));
          plVar5 = *(long **)(unaff_x19 + 0x178);
          uVar4 = FUN_07a3b850(&stack0x00000018,0);
          uVar4 = FUN_078a7764(*(undefined8 *)puVar2,uVar4,0);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x558))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x560));
            plVar5 = *(long **)(unaff_x19 + 0x188);
            uVar4 = FUN_07a3b850((long)&stack0x00000008 + 4,0);
            uVar4 = FUN_078a7764(*(undefined8 *)puVar2,uVar4,0);
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x558))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x560));
              FUN_0809d348();
              FUN_045de3e0(DAT_01c75dd8,uVar3,0);
              if (0.0 < fStack000000000000001c) {
                uVar4 = FUN_045f5894(0x3f800000,DAT_01c768e8,*(undefined8 *)(unaff_x19 + 0x160),0);
                FUN_045ea080(uVar3,uVar4,0);
              }
              if (0 < iStack0000000000000018) {
                uVar4 = FUN_045f5894(0x3f800000,DAT_01c768e8,*(undefined8 *)(unaff_x19 + 0x170),0);
                FUN_045ea080(uVar3,uVar4,0);
              }
              puVar2 = PTR_DAT_09f59cc0;
              puVar1 = PTR_DAT_09f1ffe8;
              if (0 < in_stack_00000008._4_4_) {
                uVar4 = FUN_045f5894(0x3f800000,DAT_01c768e8,*(undefined8 *)(unaff_x19 + 0x180),0);
                FUN_045ea080(uVar3,uVar4,0);
              }
              FUN_045de3e0(0x40a00000,uVar3,0);
              uVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
              FUN_045d8830();
              FUN_04fff7c8(uVar3,uVar4,*(undefined8 *)puVar2);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


