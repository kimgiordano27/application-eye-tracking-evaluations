/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$.ctor
ENTRY_POINT: 0636473c
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel___ctor(void)

{
  uint uVar1;
  short sVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  int unaff_w19;
  long unaff_x20;
  undefined4 unaff_w22;
  ulong uVar6;
  undefined4 unaff_w23;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  uVar3 = FUN_0438f96c();
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    FUN_05cac994(*(long *)(unaff_x20 + 0x20),unaff_w23,uVar3,2,
                 *(undefined8 *)(*(long *)(*(long *)(DAT_083e1ac8 + 0x20) + 0xc0) + 0x110));
    if (*(long *)(unaff_x20 + 0x68) != 0) {
      auVar8 = FUN_0429c590(*(long *)(unaff_x20 + 0x68),unaff_w22,DAT_083eaf60);
      uVar7 = auVar8._8_8_;
      if (*(long *)(unaff_x20 + 0x60) != 0) {
        FUN_0429d35c(*(long *)(unaff_x20 + 0x60),unaff_w22,DAT_083eafa0);
        if (*(long *)(unaff_x20 + 0x70) != 0) {
          FUN_0429c590(*(long *)(unaff_x20 + 0x70),unaff_w22,DAT_083eaf60);
          if (*(long *)(unaff_x20 + 0x78) != 0) {
            FUN_0429c590(*(long *)(unaff_x20 + 0x78),unaff_w22,DAT_083eaf60);
            if (*(long *)(unaff_x20 + 0x80) != 0) {
              FUN_042a5368(*(long *)(unaff_x20 + 0x80),unaff_w22,DAT_083eb138);
              if (*(long *)(unaff_x20 + 0x88) != 0) {
                FUN_042a7e00(*(long *)(unaff_x20 + 0x88),unaff_w22,DAT_083eb1f0);
                if (unaff_w19 < 1) {
                  auVar9 = ZEXT816(0);
                }
                else {
                  if (*(long *)(unaff_x20 + 0x98) == 0) goto LAB_0636493c;
                  auVar9 = FUN_042a5368(*(long *)(unaff_x20 + 0x98),unaff_w19,DAT_083eb138);
                  if (*(long *)(unaff_x20 + 0xa0) == 0) goto LAB_0636493c;
                  FUN_042a5368(*(long *)(unaff_x20 + 0xa0),unaff_w19,DAT_083eb138);
                  if (*(long *)(unaff_x20 + 0xa8) == 0) goto LAB_0636493c;
                  FUN_042a0a8c(*(long *)(unaff_x20 + 0xa8),unaff_w19,DAT_083eb098);
                }
                uVar6 = auVar9._8_8_;
                if ((*(long *)(unaff_x20 + 0x10) != 0) &&
                   (lVar4 = FUN_063178b4(*(long *)(unaff_x20 + 0x10),0), lVar4 != 0)) {
                  FUN_06359b00(lVar4,in_stack_00000000,0xffffffff,0);
                  if (*(long *)(unaff_x20 + 0x58) != 0) {
                    uStack0000000000000010 = 0;
                    in_stack_00000018 = 0;
                    in_stack_00000030 = 0;
                    uStack0000000000000014 = uVar3;
                    _in_stack_00000020 = auVar8;
                    sVar2 = FUN_04390114(*(long *)(unaff_x20 + 0x58),&stack0x00000010,DAT_083ebc68);
                    if (*(long *)(unaff_x20 + 0x60) != 0) {
                      if (0 < auVar8._8_4_) {
                        lVar4 = *(long *)(*(long *)(unaff_x20 + 0x60) + 0x10);
                        uVar5 = auVar8._0_8_ >> 0x20;
                        do {
                          *(short *)(lVar4 + (long)(int)uVar5 * 2) = sVar2 + 1;
                          uVar1 = (int)uVar7 - 1;
                          uVar7 = (ulong)uVar1;
                          uVar5 = (ulong)((int)uVar5 + 1);
                        } while (uVar1 != 0);
                      }
                      if (0 < unaff_w19) {
                        if (*(long *)(unaff_x20 + 0xa8) == 0) goto LAB_0636493c;
                        if (0 < auVar9._8_4_) {
                          lVar4 = *(long *)(*(long *)(unaff_x20 + 0xa8) + 0x10);
                          uVar7 = auVar9._0_8_ >> 0x20;
                          do {
                            *(short *)(lVar4 + (long)(int)uVar7 * 2) = sVar2 + 1;
                            uVar1 = (int)uVar6 - 1;
                            uVar6 = (ulong)uVar1;
                            uVar7 = (ulong)((int)uVar7 + 1);
                          } while (uVar1 != 0);
                        }
                      }
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0636493c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


