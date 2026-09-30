/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.InstanceCache$$remove_OnInstanceRemoved
ENTRY_POINT: 06357f50
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


undefined1  [16] Meta_XR_ImmersiveDebugger_Utils_InstanceCache__remove_OnInstanceRemoved(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  undefined4 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 unaff_w23;
  undefined4 unaff_s8;
  undefined1 auVar21 [16];
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
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
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c8;
  
  auVar21._8_8_ = unaff_x21;
  auVar21._0_8_ = unaff_x22;
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0840f088,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0840f090,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x19 + 0x8cc) = unaff_w23;
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    iVar16 = FUN_0439637c(*(long *)(unaff_x20 + 0x40),DAT_083ebf38);
    if (iVar16 == 0) {
      return auVar21;
    }
    lVar18 = *(long *)(unaff_x20 + 0x40);
    if ((((lVar18 != 0) && (lVar19 = *(long *)(unaff_x20 + 0x20), lVar19 != 0)) &&
        (lVar20 = *(long *)(unaff_x20 + 0x28), lVar20 != 0)) && (*(long *)(unaff_x20 + 0x18) != 0))
    {
      uVar2 = *(undefined8 *)(lVar18 + 0x10);
      uVar9 = *(undefined8 *)(lVar18 + 0x18);
      uVar3 = *(undefined8 *)(lVar19 + 0x10);
      uVar10 = *(undefined8 *)(lVar19 + 0x18);
      uVar4 = *(undefined8 *)(lVar20 + 0x10);
      uVar11 = *(undefined8 *)(lVar20 + 0x18);
      lVar18 = FUN_0631798c(*(long *)(unaff_x20 + 0x18),0);
      if (((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x18), lVar18 != 0)) &&
         (*(long *)(unaff_x20 + 0x18) != 0)) {
        uVar5 = *(undefined8 *)(lVar18 + 0x10);
        uVar12 = *(undefined8 *)(lVar18 + 0x18);
        lVar18 = FUN_06317848(*(long *)(unaff_x20 + 0x18),0);
        if (lVar18 != 0) {
          plVar1 = (long *)(lVar18 + 0xd0);
          if (*(int *)(lVar18 + 0xe0) != 0) {
            plVar1 = (long *)(lVar18 + 0xd8);
          }
          lVar18 = *plVar1;
          if (((lVar18 != 0) && (lVar19 = *(long *)(unaff_x20 + 0x38), lVar19 != 0)) &&
             (*(long *)(unaff_x20 + 0x20) != 0)) {
            in_stack_00000090 = *(undefined8 *)(lVar18 + 0x10);
            in_stack_00000098 = *(undefined8 *)(lVar18 + 0x18);
            in_stack_000000a0 = *(undefined8 *)(lVar19 + 0x10);
            in_stack_000000a8 = *(undefined8 *)(lVar19 + 0x18);
            uStack000000000000004c = in_stack_000000c8._4_4_;
            uStack0000000000000048 = unaff_s8;
            in_stack_00000050 = uVar2;
            in_stack_00000058 = uVar9;
            in_stack_00000060 = uVar3;
            in_stack_00000068 = uVar10;
            in_stack_00000070 = uVar4;
            in_stack_00000078 = uVar11;
            in_stack_00000080 = uVar5;
            in_stack_00000088 = uVar12;
            auVar21 = FUN_040051ac(&stack0x00000048,
                                   *(undefined4 *)(*(long *)(unaff_x20 + 0x20) + 0x30),0x40);
            lVar18 = *(long *)(unaff_x20 + 0x40);
            if ((((lVar18 != 0) && (lVar19 = *(long *)(unaff_x20 + 0x30), lVar19 != 0)) &&
                (lVar20 = *(long *)(unaff_x20 + 0x38), lVar20 != 0)) &&
               (*(long *)(unaff_x20 + 0x18) != 0)) {
              uVar2 = *(undefined8 *)(lVar18 + 0x10);
              uVar9 = *(undefined8 *)(lVar18 + 0x18);
              uVar3 = *(undefined8 *)(lVar19 + 0x10);
              uVar10 = *(undefined8 *)(lVar19 + 0x18);
              uVar4 = *(undefined8 *)(lVar20 + 0x10);
              uVar11 = *(undefined8 *)(lVar20 + 0x18);
              lVar18 = FUN_0631798c(*(long *)(unaff_x20 + 0x18),0);
              if (((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x18), lVar18 != 0)) &&
                 (*(long *)(unaff_x20 + 0x18) != 0)) {
                uVar5 = *(undefined8 *)(lVar18 + 0x10);
                uVar12 = *(undefined8 *)(lVar18 + 0x18);
                lVar18 = FUN_06317848(*(long *)(unaff_x20 + 0x18),0);
                if (((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x20), lVar18 != 0)) &&
                   (*(long *)(unaff_x20 + 0x18) != 0)) {
                  uVar6 = *(undefined8 *)(lVar18 + 0x10);
                  uVar13 = *(undefined8 *)(lVar18 + 0x18);
                  lVar18 = FUN_06317848(*(long *)(unaff_x20 + 0x18),0);
                  if (((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x18), lVar18 != 0)) &&
                     (*(long *)(unaff_x20 + 0x18) != 0)) {
                    uVar7 = *(undefined8 *)(lVar18 + 0x10);
                    uVar14 = *(undefined8 *)(lVar18 + 0x18);
                    lVar18 = FUN_06317848(*(long *)(unaff_x20 + 0x18),0);
                    if (lVar18 != 0) {
                      plVar1 = (long *)(lVar18 + 0xd0);
                      if (*(int *)(lVar18 + 0xe0) != 0) {
                        plVar1 = (long *)(lVar18 + 0xd8);
                      }
                      lVar18 = *plVar1;
                      if ((lVar18 != 0) && (*(long *)(unaff_x20 + 0x18) != 0)) {
                        uVar8 = *(undefined8 *)(lVar18 + 0x10);
                        uVar15 = *(undefined8 *)(lVar18 + 0x18);
                        lVar18 = FUN_06317848(*(long *)(unaff_x20 + 0x18),0);
                        if (lVar18 != 0) {
                          if ((DAT_086de93e & 1) == 0) {
                            FUN_0335b6c8(&DAT_083eb4b0,1);
                            DataMemoryBarrier(2,3);
                            DAT_086de93e = 1;
                          }
                          if (*(long *)(lVar18 + 0x18) == 0) {
                            uVar17 = 0;
                          }
                          else {
                            uVar17 = *(undefined4 *)(*(long *)(lVar18 + 0x18) + 0x30);
                          }
                          uStack0000000000000048 = in_stack_000000c8._4_4_;
                          uStack000000000000004c = 0;
                          in_stack_00000050 = uVar2;
                          in_stack_00000058 = uVar9;
                          in_stack_00000060 = uVar3;
                          in_stack_00000068 = uVar10;
                          in_stack_00000070 = uVar4;
                          in_stack_00000078 = uVar11;
                          in_stack_00000080 = uVar5;
                          in_stack_00000088 = uVar12;
                          in_stack_00000090 = uVar6;
                          in_stack_00000098 = uVar13;
                          in_stack_000000a0 = uVar7;
                          in_stack_000000a8 = uVar14;
                          in_stack_000000b0 = uVar8;
                          in_stack_000000b8 = uVar15;
                          auVar21 = FUN_0400523c(&stack0x00000048,uVar17,0x40,auVar21._0_8_,
                                                 auVar21._8_8_,DAT_0840f090);
                          return auVar21;
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
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


