/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ToggleForGizmo$$Setup
ENTRY_POINT: 06370630
PROGRAM: Waifu-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ToggleForGizmo__Setup(void)

{
  undefined8 uVar1;
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
  undefined4 uVar15;
  undefined4 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long unaff_x19;
  long unaff_x20;
  undefined1 unaff_w21;
  undefined4 unaff_w22;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 unaff_s8;
  undefined4 unaff_s10;
  undefined4 uVar22;
  undefined1 auVar23 [16];
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
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
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebce8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0840ef80,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x19 + 0x977) = unaff_w21;
  if ((*(long *)(unaff_x20 + 0x10) != 0) &&
     (lVar17 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x20), lVar17 != 0)) {
    uVar22 = *(undefined4 *)(lVar17 + 0x1c);
    if (*(int *)(lVar17 + 0x14) != 10 && *(int *)(lVar17 + 0x14) != 0) {
      unaff_s10 = unaff_s8;
    }
    if (DAT_086ef6e0 == (code *)0x0) {
      DAT_086ef6e0 = (code *)FUN_033d1b68("UnityEngine.Time::get_timeScale()");
    }
    uVar20 = (*DAT_086ef6e0)();
    if (DAT_086ef688 == (code *)0x0) {
      DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
    }
    uVar21 = (*DAT_086ef688)();
    lVar17 = *(long *)(unaff_x20 + 0x18);
    if ((((lVar17 != 0) && (lVar18 = *(long *)(unaff_x20 + 0x48), lVar18 != 0)) &&
        (lVar19 = *(long *)(unaff_x20 + 0x50), lVar19 != 0)) && (*(long *)(unaff_x20 + 0x10) != 0))
    {
      uVar1 = *(undefined8 *)(lVar17 + 0x10);
      uVar8 = *(undefined8 *)(lVar17 + 0x18);
      uVar2 = *(undefined8 *)(lVar18 + 0x10);
      uVar9 = *(undefined8 *)(lVar18 + 0x18);
      uVar3 = *(undefined8 *)(lVar19 + 0x10);
      uVar10 = *(undefined8 *)(lVar19 + 0x18);
      lVar17 = FUN_063178b4(*(long *)(unaff_x20 + 0x10),0);
      if (((lVar17 != 0) && (lVar17 = *(long *)(lVar17 + 0x28), lVar17 != 0)) &&
         (*(long *)(unaff_x20 + 0x10) != 0)) {
        uVar4 = *(undefined8 *)(lVar17 + 0x10);
        uVar11 = *(undefined8 *)(lVar17 + 0x18);
        lVar17 = FUN_063178b4(*(long *)(unaff_x20 + 0x10),0);
        if (((lVar17 != 0) && (lVar17 = *(long *)(lVar17 + 0x30), lVar17 != 0)) &&
           (*(long *)(unaff_x20 + 0x10) != 0)) {
          uVar5 = *(undefined8 *)(lVar17 + 0x10);
          uVar12 = *(undefined8 *)(lVar17 + 0x18);
          lVar17 = FUN_063178b4(*(long *)(unaff_x20 + 0x10),0);
          if (((lVar17 != 0) && (lVar17 = *(long *)(lVar17 + 0x38), lVar17 != 0)) &&
             (*(long *)(unaff_x20 + 0x10) != 0)) {
            uVar6 = *(undefined8 *)(lVar17 + 0x10);
            uVar13 = *(undefined8 *)(lVar17 + 0x18);
            lVar17 = FUN_063179f8(*(long *)(unaff_x20 + 0x10),0);
            if ((lVar17 != 0) && (*(long *)(lVar17 + 0x18) != 0)) {
              uVar16 = FUN_04392e3c(*(long *)(lVar17 + 0x18),DAT_083ebd80);
              if (((*(long *)(unaff_x20 + 0x10) != 0) &&
                  ((lVar17 = FUN_063179f8(*(long *)(unaff_x20 + 0x10),0), lVar17 != 0 &&
                   (lVar17 = *(long *)(lVar17 + 0x18), lVar17 != 0)))) &&
                 (*(long *)(unaff_x20 + 0x10) != 0)) {
                uVar7 = *(undefined8 *)(lVar17 + 0x10);
                uVar14 = *(undefined8 *)(lVar17 + 0x18);
                lVar17 = FUN_06317a64(*(long *)(unaff_x20 + 0x10),0);
                if ((*(long *)(unaff_x20 + 0x18) != 0) && (*(long *)(unaff_x20 + 0x10) != 0)) {
                  uVar15 = *(undefined4 *)(*(long *)(unaff_x20 + 0x18) + 0x30);
                  lVar18 = FUN_06317a64(*(long *)(unaff_x20 + 0x10),0);
                  if (lVar18 != 0) {
                    uStack00000000000000cc = 0;
                    uStack0000000000000064 = 0;
                    in_stack_00000048 = unaff_s10;
                    uStack0000000000000050 = unaff_s8;
                    uStack0000000000000054 = uVar22;
                    uStack0000000000000058 = unaff_w22;
                    uStack000000000000005c = uVar20;
                    uStack0000000000000060 = uVar21;
                    in_stack_00000068 = uVar1;
                    in_stack_00000070 = uVar8;
                    in_stack_00000078 = uVar2;
                    in_stack_00000080 = uVar9;
                    in_stack_00000088 = uVar3;
                    in_stack_00000090 = uVar10;
                    in_stack_00000098 = uVar4;
                    in_stack_000000a0 = uVar11;
                    in_stack_000000a8 = uVar5;
                    in_stack_000000b0 = uVar12;
                    in_stack_000000b8 = uVar6;
                    in_stack_000000c0 = uVar13;
                    uStack00000000000000c8 = uVar16;
                    in_stack_000000d0 = uVar7;
                    in_stack_000000d8 = uVar14;
                    auVar23 = FUN_04003f20(&stack0x00000048,uVar15,2,*(undefined8 *)(lVar18 + 0xd0),
                                           *(undefined8 *)(lVar18 + 0xd8),DAT_0840ef80);
                    if (lVar17 != 0) {
                      *(undefined1 (*) [16])(lVar17 + 0xd0) = auVar23;
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
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


