/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.ProxyCameraRig$$get_CameraTransform
ENTRY_POINT: 06366c28
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_ImmersiveDebugger_UserInterface_ProxyCameraRig__get_CameraTransform(undefined8 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_var;
  undefined4 extraout_w1;
  undefined4 uVar6;
  long unaff_x19;
  undefined4 uVar7;
  long unaff_x20;
  undefined4 unaff_w21;
  long lVar8;
  ulong unaff_x22;
  ulong uVar9;
  undefined4 unaff_w23;
  ulong uVar10;
  undefined4 unaff_w27;
  undefined4 uVar11;
  undefined1 auVar12 [16];
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
  
                    /* catch() { ... } // from try @ 06366630 with catch @ 06366c28 */
                    /* catch() { ... } // from try @ 063665bc with catch @ 06366c2c */
  FUN_042a5368(param_1,unaff_w21,*(undefined8 *)(unaff_x20 + 0x138));
  if (*(long *)(unaff_x19 + 0xf0) == 0) goto LAB_06366fa8;
  FUN_042a6174(*(long *)(unaff_x19 + 0xf0),unaff_w21,DAT_083eb188);
  if ((unaff_x22 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_06366fa8;
    FUN_0429c590(*(long *)(unaff_x19 + 0xf8),unaff_w21,DAT_083eaf60);
    if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_06366fa8;
    FUN_0429e128(*(long *)(unaff_x19 + 0x100),unaff_w21,DAT_083eafe0);
    if (*(long *)(unaff_x19 + 0x108) == 0) goto LAB_06366fa8;
    FUN_0429b7c4(*(long *)(unaff_x19 + 0x108),unaff_w27,DAT_083eaf28);
  }
  if (*(long *)(unaff_x19 + 0xd0) != 0) {
    iStack00000000000000bc = 1;
    uStack00000000000000b8 = unaff_w23;
    iVar4 = FUN_0438f1e0(*(long *)(unaff_x19 + 0xd0),&stack0x000000b8,DAT_083ebbe8);
    if (*(long *)(unaff_x19 + 0xd8) != 0) {
      FUN_05cac994(*(long *)(unaff_x19 + 0xd8),unaff_w23,iVar4,2,
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
      uVar6 = 4;
      if ((unaff_x22 & 1) == 0) {
        uVar6 = 0;
      }
      if ((*(long *)(unaff_x19 + 0xd0) != 0) && (*(long *)(unaff_x19 + 0x120) != 0)) {
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(unaff_x19 + 0xd0) + 0x10) + (long)iVar4 * 0x40);
        auVar12 = FUN_042a1858(*(long *)(unaff_x19 + 0x120),unaff_w21,DAT_083eb0d0);
        uVar10 = auVar12._8_8_;
        if (*(long *)(unaff_x19 + 0x128) != 0) {
          FUN_042a5368(*(long *)(unaff_x19 + 0x128),unaff_w21,*(undefined8 *)(unaff_x20 + 0x138));
          if (*(long *)(unaff_x19 + 0x130) != 0) {
            FUN_042a5368(*(long *)(unaff_x19 + 0x130),unaff_w21,*(undefined8 *)(unaff_x20 + 0x138));
            if (*(long *)(unaff_x19 + 0x138) != 0) {
              FUN_042a6174(*(long *)(unaff_x19 + 0x138),unaff_w21,DAT_083eb188);
              if ((unaff_x22 & 1) == 0) {
                uVar7 = 0;
                uVar11 = 0;
              }
              else {
                if (*(long *)(unaff_x19 + 0x140) == 0) goto LAB_06366fa8;
                FUN_0429b7c4(*(long *)(unaff_x19 + 0x140),unaff_w27,DAT_083eaf28);
                uVar11 = extraout_var;
                uVar7 = extraout_w1;
              }
              if (DAT_086d7cc9 == '\0') {
                FUN_0335b6c8(&DAT_083ce8b0,1);
                DataMemoryBarrier(2,3);
                DAT_086d7cc9 = '\x01';
              }
              if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
                FUN_033b9870();
              }
              lVar8 = *(long *)(unaff_x19 + 0x110);
              memcpy(&stack0x00000010,&stack0x00000060,0x50);
              uVar3 = DAT_083ebb60;
              if (lVar8 != 0) {
                uStack00000000000000b8 = uVar6;
                iStack00000000000000bc = iVar4;
                memcpy(&stack0x000000c8,&stack0x00000010,0x50);
                iVar5 = FUN_0438e27c(lVar8,&stack0x000000b8,uVar3);
                lVar8 = FUN_03398a84(DAT_083d8ee0);
                if (lVar8 != 0) {
                  uVar9 = auVar12._0_8_ >> 0x20;
                  *(int *)(lVar8 + 0x20) = auVar12._8_4_;
                  *(undefined4 *)(lVar8 + 0x24) = uVar11;
                  *(undefined4 *)(lVar8 + 0x18) = uVar1;
                  *(int *)(lVar8 + 0x1c) = auVar12._4_4_;
                  *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) & 0xfffffffe;
                  *(int *)(lVar8 + 0x14) = iVar4;
                  *(undefined4 *)(lVar8 + 0x28) = uVar7;
                  if (*(long *)(unaff_x19 + 0x118) != 0) {
                    FUN_05cb6720(*(long *)(unaff_x19 + 0x118),iVar5,lVar8,2,
                                 *(undefined8 *)
                                  (*(long *)(*(long *)(DAT_083e2128 + 0x20) + 0xc0) + 0x110));
                    if (*(long *)(unaff_x19 + 0x120) != 0) {
                      if (0 < auVar12._8_4_) {
                        lVar8 = *(long *)(*(long *)(unaff_x19 + 0x120) + 0x10);
                        do {
                          *(int *)(lVar8 + (long)(int)uVar9 * 4) = iVar5 + 1;
                          uVar2 = (int)uVar10 - 1;
                          uVar10 = (ulong)uVar2;
                          uVar9 = (ulong)((int)uVar9 + 1);
                        } while (uVar2 != 0);
                      }
                      return iVar5;
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


