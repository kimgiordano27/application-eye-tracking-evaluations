/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$OnLoad
ENTRY_POINT: 063555e4
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


undefined1  [16] Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__OnLoad(void)

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
  undefined8 uVar16;
  undefined8 uVar17;
  int iVar18;
  undefined4 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x22;
  undefined1 unaff_w23;
  undefined8 unaff_x26;
  undefined4 unaff_s8;
  undefined1 auVar23 [16];
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
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
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e8;
  
  auVar23._8_8_ = unaff_x26;
  auVar23._0_8_ = unaff_x22;
                    /* try { // try from 063555e8 to 064555ef has its CatchHandler @ 06355668 */
  FUN_0335b6c8(&DAT_083eb540,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebcd0,1);
  DataMemoryBarrier(2,3);
                    /* try { // try from 06355614 to 06455617 has its CatchHandler @ 06355660 */
                    /* try { // try from 06355618 to 06455643 has its CatchHandler @ 063553d0 */
  FUN_0335b6c8(&DAT_083ebe78,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebe80,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0840f010,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0840f018,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x19 + 0x8c0) = unaff_w23;
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    iVar18 = FUN_04394ca8(*(long *)(unaff_x20 + 0x40),DAT_083ebe80);
    if (iVar18 == 0) {
      return auVar23;
    }
    lVar20 = *(long *)(unaff_x20 + 0x40);
    if ((((lVar20 != 0) && (lVar21 = *(long *)(unaff_x20 + 0x20), lVar21 != 0)) &&
        (lVar22 = *(long *)(unaff_x20 + 0x28), lVar22 != 0)) && (*(long *)(unaff_x20 + 0x18) != 0))
    {
      uVar2 = *(undefined8 *)(lVar20 + 0x10);
      uVar10 = *(undefined8 *)(lVar20 + 0x18);
      uVar3 = *(undefined8 *)(lVar21 + 0x10);
      uVar11 = *(undefined8 *)(lVar21 + 0x18);
      uVar4 = *(undefined8 *)(lVar22 + 0x10);
      uVar12 = *(undefined8 *)(lVar22 + 0x18);
      lVar20 = FUN_0631798c(*(long *)(unaff_x20 + 0x18),0);
      if (((lVar20 != 0) && (lVar20 = *(long *)(lVar20 + 0x18), lVar20 != 0)) &&
         (*(long *)(unaff_x20 + 0x18) != 0)) {
        uVar5 = *(undefined8 *)(lVar20 + 0x10);
        uVar13 = *(undefined8 *)(lVar20 + 0x18);
        lVar20 = FUN_06317848(*(long *)(unaff_x20 + 0x18),0);
        if (lVar20 != 0) {
          plVar1 = (long *)(lVar20 + 0xd0);
          if (*(int *)(lVar20 + 0xe0) != 0) {
            plVar1 = (long *)(lVar20 + 0xd8);
          }
          lVar20 = *plVar1;
          if ((lVar20 != 0) && (*(long *)(unaff_x20 + 0x18) != 0)) {
            uVar6 = *(undefined8 *)(lVar20 + 0x10);
            uVar14 = *(undefined8 *)(lVar20 + 0x18);
            lVar20 = FUN_06317848(*(long *)(unaff_x20 + 0x18),0);
            if ((lVar20 != 0) &&
               (((lVar20 = *(long *)(lVar20 + 0x58), lVar20 != 0 &&
                 (lVar21 = *(long *)(unaff_x20 + 0x38), lVar21 != 0)) &&
                (*(long *)(unaff_x20 + 0x20) != 0)))) {
              in_stack_000000b0 = *(undefined8 *)(lVar20 + 0x10);
              in_stack_000000b8 = *(undefined8 *)(lVar20 + 0x18);
              in_stack_000000c0 = *(undefined8 *)(lVar21 + 0x10);
              in_stack_000000c8 = *(undefined8 *)(lVar21 + 0x18);
              uStack000000000000005c = in_stack_000000e8._4_4_;
              uStack0000000000000058 = unaff_s8;
              in_stack_00000060 = uVar2;
              in_stack_00000068 = uVar10;
              in_stack_00000070 = uVar3;
              in_stack_00000078 = uVar11;
              in_stack_00000080 = uVar4;
              in_stack_00000088 = uVar12;
              in_stack_00000090 = uVar5;
              in_stack_00000098 = uVar13;
              in_stack_000000a0 = uVar6;
              in_stack_000000a8 = uVar14;
              auVar23 = FUN_04004940(&stack0x00000058,
                                     *(undefined4 *)(*(long *)(unaff_x20 + 0x20) + 0x30),0x40,
                                     unaff_x22);
              lVar20 = *(long *)(unaff_x20 + 0x40);
              if (((lVar20 != 0) && (lVar21 = *(long *)(unaff_x20 + 0x30), lVar21 != 0)) &&
                 ((lVar22 = *(long *)(unaff_x20 + 0x38), lVar22 != 0 &&
                  (*(long *)(unaff_x20 + 0x18) != 0)))) {
                uVar2 = *(undefined8 *)(lVar20 + 0x10);
                uVar10 = *(undefined8 *)(lVar20 + 0x18);
                uVar3 = *(undefined8 *)(lVar21 + 0x10);
                uVar11 = *(undefined8 *)(lVar21 + 0x18);
                uVar4 = *(undefined8 *)(lVar22 + 0x10);
                uVar12 = *(undefined8 *)(lVar22 + 0x18);
                lVar20 = FUN_0631798c(*(long *)(unaff_x20 + 0x18),0);
                if (((lVar20 != 0) && (lVar20 = *(long *)(lVar20 + 0x18), lVar20 != 0)) &&
                   (*(long *)(unaff_x20 + 0x18) != 0)) {
                  uVar5 = *(undefined8 *)(lVar20 + 0x10);
                  uVar13 = *(undefined8 *)(lVar20 + 0x18);
                  lVar20 = FUN_06317848(*(long *)(unaff_x20 + 0x18),0);
                  if (((lVar20 != 0) && (lVar20 = *(long *)(lVar20 + 0x20), lVar20 != 0)) &&
                     (*(long *)(unaff_x20 + 0x18) != 0)) {
                    uVar6 = *(undefined8 *)(lVar20 + 0x10);
                    uVar14 = *(undefined8 *)(lVar20 + 0x18);
                    lVar20 = FUN_06317848(*(long *)(unaff_x20 + 0x18),0);
                    if (((lVar20 != 0) && (lVar20 = *(long *)(lVar20 + 0x18), lVar20 != 0)) &&
                       (*(long *)(unaff_x20 + 0x18) != 0)) {
                      uVar7 = *(undefined8 *)(lVar20 + 0x10);
                      uVar15 = *(undefined8 *)(lVar20 + 0x18);
                      lVar20 = FUN_06317848(*(long *)(unaff_x20 + 0x18),0);
                      if (lVar20 != 0) {
                        plVar1 = (long *)(lVar20 + 0xd0);
                        if (*(int *)(lVar20 + 0xe0) != 0) {
                          plVar1 = (long *)(lVar20 + 0xd8);
                        }
                        lVar20 = *plVar1;
                        if ((lVar20 != 0) && (*(long *)(unaff_x20 + 0x18) != 0)) {
                          uVar8 = *(undefined8 *)(lVar20 + 0x10);
                          uVar16 = *(undefined8 *)(lVar20 + 0x18);
                          lVar20 = FUN_06317848(*(long *)(unaff_x20 + 0x18),0);
                          if ((lVar20 != 0) &&
                             ((lVar20 = *(long *)(lVar20 + 0x28), lVar20 != 0 &&
                              (*(long *)(unaff_x20 + 0x18) != 0)))) {
                            uVar9 = *(undefined8 *)(lVar20 + 0x10);
                            uVar17 = *(undefined8 *)(lVar20 + 0x18);
                            lVar20 = FUN_06317848(*(long *)(unaff_x20 + 0x18),0);
                            if (lVar20 != 0) {
                              if ((DAT_086de93e & 1) == 0) {
                                FUN_0335b6c8(&DAT_083eb4b0,1);
                                DataMemoryBarrier(2,3);
                                DAT_086de93e = 1;
                              }
                              if (*(long *)(lVar20 + 0x18) == 0) {
                                uVar19 = 0;
                              }
                              else {
                                uVar19 = *(undefined4 *)(*(long *)(lVar20 + 0x18) + 0x30);
                              }
                              uStack0000000000000058 = in_stack_000000e8._4_4_;
                              uStack000000000000005c = 0;
                              in_stack_00000060 = uVar2;
                              in_stack_00000068 = uVar10;
                              in_stack_00000070 = uVar3;
                              in_stack_00000078 = uVar11;
                              in_stack_00000080 = uVar4;
                              in_stack_00000088 = uVar12;
                              in_stack_00000090 = uVar5;
                              in_stack_00000098 = uVar13;
                              in_stack_000000a0 = uVar6;
                              in_stack_000000a8 = uVar14;
                              in_stack_000000b0 = uVar7;
                              in_stack_000000b8 = uVar15;
                              in_stack_000000c0 = uVar8;
                              in_stack_000000c8 = uVar16;
                              in_stack_000000d0 = uVar9;
                              in_stack_000000d8 = uVar17;
                              auVar23 = FUN_040049d0(&stack0x00000058,uVar19,0x40,auVar23._0_8_,
                                                     auVar23._8_8_,DAT_0840f018);
                              return auVar23;
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


