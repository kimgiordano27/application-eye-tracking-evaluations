/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.ProxyCameraRig$$get_LeftControllerTransform
ENTRY_POINT: 06366c7c
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_ImmersiveDebugger_UserInterface_ProxyCameraRig__get_LeftControllerTransform(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined4 extraout_var;
  undefined4 extraout_w1;
  undefined4 uVar8;
  long unaff_x19;
  undefined4 uVar9;
  long unaff_x20;
  undefined4 unaff_w21;
  long lVar10;
  ulong unaff_x22;
  ulong uVar11;
  undefined4 unaff_w23;
  ulong uVar12;
  undefined4 unaff_w25;
  ulong unaff_x26;
  undefined4 unaff_w29;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined4 uStack00000000000000b8;
  int iStack00000000000000bc;
  undefined4 uStack00000000000000c0;
  ulong uStack00000000000000c4;
  
  if (*(long *)(unaff_x19 + 0x100) != 0) {
    FUN_0429e128(*(long *)(unaff_x19 + 0x100),unaff_w21,DAT_083eafe0);
    if (*(long *)(unaff_x19 + 0x108) != 0) {
      FUN_0429b7c4(*(long *)(unaff_x19 + 0x108),unaff_w25,DAT_083eaf28);
      if (*(long *)(unaff_x19 + 0xd0) != 0) {
        iStack00000000000000bc = 1;
        uStack00000000000000b8 = unaff_w23;
        uStack00000000000000c0 = unaff_w29;
        uStack00000000000000c4 = unaff_x26;
        iVar6 = FUN_0438f1e0(*(long *)(unaff_x19 + 0xd0),&stack0x000000b8,DAT_083ebbe8);
        if (*(long *)(unaff_x19 + 0xd8) != 0) {
          FUN_05cac994(*(long *)(unaff_x19 + 0xd8),unaff_w23,iVar6,2,
                       *(undefined8 *)(*(long *)(*(long *)(DAT_083e1ac8 + 0x20) + 0xc0) + 0x110));
          in_stack_00000098 = 0;
          in_stack_00000090 = 0;
          in_stack_000000a8 = 0;
          in_stack_000000a0 = 0;
          in_stack_00000078 = 0;
          in_stack_00000070 = 0;
          in_stack_00000088 = 0;
          in_stack_00000080 = 0;
          in_stack_00000068 = 0;
          in_stack_00000060 = 0;
          uVar8 = 4;
          if ((unaff_x22 & 1) == 0) {
            uVar8 = 0;
          }
          if (*(long *)(unaff_x19 + 0xd0) != 0) {
            if (*(long *)(unaff_x19 + 0x120) != 0) {
              puVar1 = (undefined4 *)
                       (*(long *)(*(long *)(unaff_x19 + 0xd0) + 0x10) + (long)iVar6 * 0x40);
              uVar2 = *puVar1;
              uVar3 = puVar1[4];
              auVar14 = FUN_042a1858(*(long *)(unaff_x19 + 0x120),unaff_w21,DAT_083eb0d0);
              uVar12 = auVar14._8_8_;
              if (*(long *)(unaff_x19 + 0x128) != 0) {
                FUN_042a5368(*(long *)(unaff_x19 + 0x128),unaff_w21,
                             *(undefined8 *)(unaff_x20 + 0x138));
                if (*(long *)(unaff_x19 + 0x130) != 0) {
                  FUN_042a5368(*(long *)(unaff_x19 + 0x130),unaff_w21,
                               *(undefined8 *)(unaff_x20 + 0x138));
                  if (*(long *)(unaff_x19 + 0x138) != 0) {
                    FUN_042a6174(*(long *)(unaff_x19 + 0x138),unaff_w21,DAT_083eb188);
                    if ((unaff_x22 & 1) == 0) {
                      uVar9 = 0;
                      uVar13 = 0;
                    }
                    else {
                      if (*(long *)(unaff_x19 + 0x140) == 0) goto LAB_06366fa8;
                      FUN_0429b7c4(*(long *)(unaff_x19 + 0x140),unaff_w25,DAT_083eaf28);
                      uVar13 = extraout_var;
                      uVar9 = extraout_w1;
                    }
                    if (DAT_086d7cc9 == '\0') {
                      FUN_0335b6c8(&DAT_083ce8b0,1);
                      DataMemoryBarrier(2,3);
                      DAT_086d7cc9 = '\x01';
                    }
                    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
                      FUN_033b9870();
                    }
                    lVar10 = *(long *)(unaff_x19 + 0x110);
                    memcpy(&stack0x00000010,&stack0x00000060,0x50);
                    uVar5 = DAT_083ebb60;
                    if (lVar10 != 0) {
                      uStack00000000000000c4 = uStack00000000000000c4 & 0xffffffff00000000;
                      uStack00000000000000b8 = uVar8;
                      iStack00000000000000bc = iVar6;
                      uStack00000000000000c0 = uVar3;
                      memcpy((undefined1 *)((long)&stack0x000000c0 + 8),&stack0x00000010,0x50);
                      iVar7 = FUN_0438e27c(lVar10,&stack0x000000b8,uVar5);
                      lVar10 = FUN_03398a84(DAT_083d8ee0);
                      if (lVar10 != 0) {
                        uVar11 = auVar14._0_8_ >> 0x20;
                        *(int *)(lVar10 + 0x20) = auVar14._8_4_;
                        *(undefined4 *)(lVar10 + 0x24) = uVar13;
                        *(undefined4 *)(lVar10 + 0x18) = uVar2;
                        *(int *)(lVar10 + 0x1c) = auVar14._4_4_;
                        *(uint *)(lVar10 + 0x10) = *(uint *)(lVar10 + 0x10) & 0xfffffffe;
                        *(int *)(lVar10 + 0x14) = iVar6;
                        *(undefined4 *)(lVar10 + 0x28) = uVar9;
                        if (*(long *)(unaff_x19 + 0x118) != 0) {
                          FUN_05cb6720(*(long *)(unaff_x19 + 0x118),iVar7,lVar10,2,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(DAT_083e2128 + 0x20) + 0xc0) + 0x110));
                          if (*(long *)(unaff_x19 + 0x120) != 0) {
                            if (0 < auVar14._8_4_) {
                              lVar10 = *(long *)(*(long *)(unaff_x19 + 0x120) + 0x10);
                              do {
                                *(int *)(lVar10 + (long)(int)uVar11 * 4) = iVar7 + 1;
                                uVar4 = (int)uVar12 - 1;
                                uVar12 = (ulong)uVar4;
                                uVar11 = (ulong)((int)uVar11 + 1);
                              } while (uVar4 != 0);
                            }
                            return iVar7;
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
      }
    }
  }
LAB_06366fa8:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


