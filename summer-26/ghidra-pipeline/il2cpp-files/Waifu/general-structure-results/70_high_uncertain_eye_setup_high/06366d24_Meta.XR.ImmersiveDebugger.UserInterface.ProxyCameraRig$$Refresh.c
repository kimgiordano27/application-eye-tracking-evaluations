/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.ProxyCameraRig$$Refresh
ENTRY_POINT: 06366d24
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_ImmersiveDebugger_UserInterface_ProxyCameraRig__Refresh(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  ulong uVar7;
  undefined4 unaff_w21;
  long lVar8;
  ulong unaff_x22;
  ulong uVar9;
  undefined4 unaff_w23;
  ulong uVar10;
  undefined4 unaff_w25;
  ulong uVar11;
  ulong uVar12;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  undefined1 auVar13 [16];
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
  undefined4 uStack00000000000000c4;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  ulong in_stack_00000128;
  ulong in_stack_00000130;
  undefined4 uStack0000000000000138;
  float fStack000000000000013c;
  undefined4 uStack0000000000000148;
  undefined4 uStack000000000000014c;
  
  FUN_05cac994(param_1,unaff_w23,param_2,2,
               *(undefined8 *)(*(long *)(*(long *)(*(long *)(in_x9 + 0xac8) + 0x20) + 0xc0) + 0x110)
              );
  auVar13._8_8_ = in_stack_00000120;
  auVar13._0_8_ = in_stack_00000118;
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
                    /* try { // try from 06366d74 to 06466ec7 has its CatchHandler @ 06366d74
                       catch() { ... } // from try @ 06366d74 with catch @ 06366d74
                       catch() { ... } // from try @ 06366efc with catch @ 06366d74
                       catch() { ... } // from try @ 06366f1c with catch @ 06366d74 */
  if (*(long *)(unaff_x19 + 0xd0) != 0) {
    uStack000000000000014c = uVar6;
    _in_stack_00000118 = auVar13;
    if (*(long *)(unaff_x19 + 0x120) != 0) {
      puVar1 = (undefined4 *)(*(long *)(*(long *)(unaff_x19 + 0xd0) + 0x10) + (long)param_2 * 0x40);
      uVar6 = *puVar1;
      uVar2 = puVar1[4];
      auVar13 = FUN_042a1858(*(long *)(unaff_x19 + 0x120),unaff_w21,DAT_083eb0d0);
      uVar10 = auVar13._8_8_;
      if (*(long *)(unaff_x19 + 0x128) != 0) {
        FUN_042a5368(*(long *)(unaff_x19 + 0x128),unaff_w21,*(undefined8 *)(unaff_x20 + 0x138));
        if (*(long *)(unaff_x19 + 0x130) != 0) {
          FUN_042a5368(*(long *)(unaff_x19 + 0x130),unaff_w21,*(undefined8 *)(unaff_x20 + 0x138));
          if (*(long *)(unaff_x19 + 0x138) != 0) {
            FUN_042a6174(*(long *)(unaff_x19 + 0x138),unaff_w21,DAT_083eb188);
            uStack0000000000000148 = uVar6;
            if ((unaff_x22 & 1) == 0) {
              uVar9 = 0;
              uVar7 = 0;
              uVar12 = 0;
              uVar11 = 0;
            }
            else {
              if (*(long *)(unaff_x19 + 0x140) == 0) goto LAB_06366fa8;
              auVar14 = FUN_0429b7c4(*(long *)(unaff_x19 + 0x140),unaff_w25,DAT_083eaf28);
              uVar7 = auVar14._8_8_;
              uVar12 = auVar14._0_8_ >> 0x20;
              uVar9 = uVar7 & 0xffffffff00000000;
              uVar11 = auVar14._0_8_ & 0xffffffff;
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
            uVar4 = DAT_083ebb60;
            if (lVar8 != 0) {
              uStack00000000000000b8 = uStack000000000000014c;
              uStack00000000000000c4 = 0;
              iStack00000000000000bc = param_2;
              uStack00000000000000c0 = uVar2;
              memcpy(&stack0x000000c8,&stack0x00000010,0x50);
              uStack0000000000000138 = 0;
              in_stack_00000128 = uVar11 | uVar12 << 0x20;
              in_stack_00000130 = uVar9 | uVar7 & 0xffffffff;
              fStack000000000000013c =
                   SQRT(unaff_s8 * unaff_s8 + unaff_s10 * unaff_s10 + unaff_s9 * unaff_s9);
              _in_stack_00000118 = auVar13;
              iVar5 = FUN_0438e27c(lVar8,&stack0x000000b8,uVar4);
              lVar8 = FUN_03398a84(DAT_083d8ee0);
              if (lVar8 != 0) {
                uVar9 = auVar13._0_8_ >> 0x20;
                *(int *)(lVar8 + 0x20) = auVar13._8_4_;
                *(int *)(lVar8 + 0x24) = (int)uVar12;
                *(undefined4 *)(lVar8 + 0x18) = uStack0000000000000148;
                *(int *)(lVar8 + 0x1c) = auVar13._4_4_;
                *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) & 0xfffffffe;
                *(int *)(lVar8 + 0x14) = param_2;
                *(int *)(lVar8 + 0x28) = (int)uVar7;
                if (*(long *)(unaff_x19 + 0x118) != 0) {
                  FUN_05cb6720(*(long *)(unaff_x19 + 0x118),iVar5,lVar8,2,
                               *(undefined8 *)
                                (*(long *)(*(long *)(DAT_083e2128 + 0x20) + 0xc0) + 0x110));
                  if (*(long *)(unaff_x19 + 0x120) != 0) {
                    if (0 < auVar13._8_4_) {
                      lVar8 = *(long *)(*(long *)(unaff_x19 + 0x120) + 0x10);
                      do {
                        *(int *)(lVar8 + (long)(int)uVar9 * 4) = iVar5 + 1;
                        uVar3 = (int)uVar10 - 1;
                        uVar10 = (ulong)uVar3;
                        uVar9 = (ulong)((int)uVar9 + 1);
                      } while (uVar3 != 0);
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
LAB_06366fa8:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


