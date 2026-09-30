/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$Remember
ENTRY_POINT: 063645dc
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__Remember
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  int unaff_w19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined4 unaff_w22;
  ulong uVar10;
  undefined4 unaff_w23;
  ulong uVar11;
  int unaff_w24;
  undefined4 unaff_w25;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uStack0000000000000010;
  int iStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  iVar6 = FUN_05cac5a8(param_2,param_3,*(undefined8 *)(param_1 + 0x108));
  auVar3._8_8_ = in_stack_00000058;
  auVar3._0_8_ = in_stack_00000050;
  auVar13._8_8_ = in_stack_00000058;
  auVar13._0_8_ = in_stack_00000050;
  auVar12._8_8_ = in_stack_00000048;
  auVar12._0_8_ = in_stack_00000040;
  auVar15._8_8_ = in_stack_00000038;
  auVar15._0_8_ = in_stack_00000030;
  auVar14._8_8_ = in_stack_00000028;
  auVar14._0_8_ = in_stack_00000020;
  if (iVar6 < 0) {
    if (*(long *)(unaff_x20 + 0x30) == 0) goto LAB_0636493c;
    auVar14 = FUN_042a1858(*(long *)(unaff_x20 + 0x30),unaff_w22,DAT_083eb0d0);
    auVar3._8_8_ = in_stack_00000058;
    auVar3._0_8_ = in_stack_00000050;
    if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_0636493c;
    FUN_042a4584(*(long *)(unaff_x20 + 0x28),unaff_w22,DAT_083eb108);
    auVar3._8_8_ = in_stack_00000058;
    auVar3._0_8_ = in_stack_00000050;
    if (*(long *)(unaff_x20 + 0x48) == 0) goto LAB_0636493c;
    FUN_042a1858(*(long *)(unaff_x20 + 0x48),unaff_w22,DAT_083eb0d0);
    auVar3._8_8_ = in_stack_00000058;
    auVar3._0_8_ = in_stack_00000050;
    if (*(long *)(unaff_x20 + 0x38) == 0) goto LAB_0636493c;
    auVar15 = FUN_042b3638(*(long *)(unaff_x20 + 0x38),unaff_w25,DAT_083eb428);
    auVar3._8_8_ = in_stack_00000058;
    auVar3._0_8_ = in_stack_00000050;
    if (unaff_w19 < 1) {
      auVar12 = ZEXT816(0);
    }
    else {
      if (*(long *)(unaff_x20 + 0x40) == 0) goto LAB_0636493c;
      auVar12 = FUN_0429e128(*(long *)(unaff_x20 + 0x40),unaff_w19 * 3,DAT_083eafe0);
    }
    auVar3._8_8_ = in_stack_00000058;
    auVar3._0_8_ = in_stack_00000050;
    if (unaff_w24 < 1) {
      auVar13 = ZEXT816(0);
    }
    else {
      if (*(long *)(unaff_x20 + 0x50) == 0) goto LAB_0636493c;
      auVar13 = FUN_0429e128(*(long *)(unaff_x20 + 0x50),unaff_w24,DAT_083eafe0);
    }
    auVar3._8_8_ = in_stack_00000058;
    auVar3._0_8_ = in_stack_00000050;
    if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_0636493c;
    in_stack_00000018 = 0;
    iStack0000000000000014 = 1;
    uStack0000000000000010 = unaff_w23;
    _in_stack_00000020 = auVar14;
    _in_stack_00000030 = auVar15;
    _in_stack_00000040 = auVar12;
    _in_stack_00000050 = auVar13;
    iVar6 = FUN_0438f96c(*(long *)(unaff_x20 + 0x18),&stack0x00000010,DAT_083ebc28);
    auVar3 = _in_stack_00000050;
    if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_0636493c;
    FUN_05cac994(*(long *)(unaff_x20 + 0x20),unaff_w23,iVar6,2,
                 *(undefined8 *)(*(long *)(*(long *)(DAT_083e1ac8 + 0x20) + 0xc0) + 0x110));
  }
  else {
    _in_stack_00000020 = auVar14;
    _in_stack_00000030 = auVar15;
    _in_stack_00000040 = auVar12;
    auVar3 = auVar13;
    if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_0636493c;
    iVar6 = FUN_05cabf14(*(long *)(unaff_x20 + 0x20),unaff_w23,DAT_083e1b00);
    auVar3 = _in_stack_00000050;
    if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_0636493c;
    lVar8 = *(long *)(*(long *)(unaff_x20 + 0x18) + 0x10) + (long)iVar6 * 0x50;
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  }
  auVar3 = _in_stack_00000050;
  if (*(long *)(unaff_x20 + 0x68) != 0) {
    auVar14 = FUN_0429c590(*(long *)(unaff_x20 + 0x68),unaff_w22,DAT_083eaf60);
    uVar11 = auVar14._8_8_;
    auVar3 = _in_stack_00000050;
    if (*(long *)(unaff_x20 + 0x60) != 0) {
      FUN_0429d35c(*(long *)(unaff_x20 + 0x60),unaff_w22,DAT_083eafa0);
      auVar3 = _in_stack_00000050;
      if (*(long *)(unaff_x20 + 0x70) != 0) {
        FUN_0429c590(*(long *)(unaff_x20 + 0x70),unaff_w22,DAT_083eaf60);
        auVar3 = _in_stack_00000050;
        if (*(long *)(unaff_x20 + 0x78) != 0) {
          FUN_0429c590(*(long *)(unaff_x20 + 0x78),unaff_w22,DAT_083eaf60);
          auVar3 = _in_stack_00000050;
          if (*(long *)(unaff_x20 + 0x80) != 0) {
            FUN_042a5368(*(long *)(unaff_x20 + 0x80),unaff_w22,DAT_083eb138);
            auVar3 = _in_stack_00000050;
            if (*(long *)(unaff_x20 + 0x88) != 0) {
              FUN_042a7e00(*(long *)(unaff_x20 + 0x88),unaff_w22,DAT_083eb1f0);
              if (unaff_w19 < 1) {
                auVar15 = ZEXT816(0);
              }
              else {
                auVar3 = _in_stack_00000050;
                if (*(long *)(unaff_x20 + 0x98) == 0) goto LAB_0636493c;
                auVar15 = FUN_042a5368(*(long *)(unaff_x20 + 0x98),unaff_w19,DAT_083eb138);
                auVar3 = _in_stack_00000050;
                if (*(long *)(unaff_x20 + 0xa0) == 0) goto LAB_0636493c;
                FUN_042a5368(*(long *)(unaff_x20 + 0xa0),unaff_w19,DAT_083eb138);
                auVar3 = _in_stack_00000050;
                if (*(long *)(unaff_x20 + 0xa8) == 0) goto LAB_0636493c;
                FUN_042a0a8c(*(long *)(unaff_x20 + 0xa8),unaff_w19,DAT_083eb098);
              }
              uVar10 = auVar15._8_8_;
              auVar3 = _in_stack_00000050;
              if ((*(long *)(unaff_x20 + 0x10) != 0) &&
                 (lVar8 = FUN_063178b4(*(long *)(unaff_x20 + 0x10),0), auVar3 = _in_stack_00000050,
                 lVar8 != 0)) {
                uVar7 = FUN_06359b00(lVar8,unaff_x21,0xffffffff,0);
                auVar3 = _in_stack_00000050;
                if (*(long *)(unaff_x20 + 0x58) != 0) {
                  in_stack_00000050 = CONCAT44(in_stack_00000050._4_4_,uVar7);
                  uStack0000000000000010 = 0;
                  in_stack_00000018 = 0;
                  in_stack_00000030 = 0;
                  in_stack_00000038 = 0;
                  iStack0000000000000014 = iVar6;
                  _in_stack_00000020 = auVar14;
                  _in_stack_00000040 = auVar15;
                  sVar5 = FUN_04390114(*(long *)(unaff_x20 + 0x58),&stack0x00000010,DAT_083ebc68);
                  auVar4._8_8_ = in_stack_00000058;
                  auVar4._0_8_ = in_stack_00000050;
                  auVar3._8_8_ = in_stack_00000058;
                  auVar3._0_8_ = in_stack_00000050;
                  auVar2._8_8_ = in_stack_00000038;
                  auVar2._0_8_ = in_stack_00000030;
                  if (*(long *)(unaff_x20 + 0x60) != 0) {
                    if (0 < auVar14._8_4_) {
                      lVar8 = *(long *)(*(long *)(unaff_x20 + 0x60) + 0x10);
                      uVar9 = auVar14._0_8_ >> 0x20;
                      do {
                        *(short *)(lVar8 + (long)(int)uVar9 * 2) = sVar5 + 1;
                        uVar1 = (int)uVar11 - 1;
                        uVar11 = (ulong)uVar1;
                        uVar9 = (ulong)((int)uVar9 + 1);
                      } while (uVar1 != 0);
                    }
                    if (0 < unaff_w19) {
                      _in_stack_00000030 = auVar2;
                      auVar3 = auVar4;
                      if (*(long *)(unaff_x20 + 0xa8) == 0) goto LAB_0636493c;
                      if (0 < auVar15._8_4_) {
                        lVar8 = *(long *)(*(long *)(unaff_x20 + 0xa8) + 0x10);
                        uVar11 = auVar15._0_8_ >> 0x20;
                        do {
                          *(short *)(lVar8 + (long)(int)uVar11 * 2) = sVar5 + 1;
                          uVar1 = (int)uVar10 - 1;
                          uVar10 = (ulong)uVar1;
                          uVar11 = (ulong)((int)uVar11 + 1);
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
LAB_0636493c:
  _in_stack_00000050 = auVar3;
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


