/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock.<InitSpatialAnchorAsync>d__21$$SetStateMachine
ENTRY_POINT: 06348e80
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


undefined1  [16]
Meta_XR_BuildingBlocks_SpatialAnchorCoreBuildingBlock_<InitSpatialAnchorAsync>d__21__SetStateMachine
          (undefined8 param_1)

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
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int iVar21;
  undefined4 uVar22;
  long lVar23;
  undefined1 unaff_w19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x27;
  undefined1 auVar24 [16];
  undefined4 in_stack_00000078;
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
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000128;
  
  auVar24._8_8_ = unaff_x20;
  auVar24._0_8_ = unaff_x27;
  FUN_0335b6c8(param_1,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb160,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebcd0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb9f8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eba00,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0840ee28,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0x88e) = unaff_w19;
  if (*(long *)(unaff_x22 + 0x20) != 0) {
    iVar21 = FUN_0438b7a4(*(long *)(unaff_x22 + 0x20),DAT_083eba00);
    if (iVar21 == 0) {
      return auVar24;
    }
    lVar23 = *(long *)(unaff_x22 + 0x20);
    if ((lVar23 != 0) && (*(long *)(unaff_x22 + 0x18) != 0)) {
      uVar2 = *(undefined8 *)(lVar23 + 0x10);
      uVar12 = *(undefined8 *)(lVar23 + 0x18);
      lVar23 = FUN_0631798c(*(long *)(unaff_x22 + 0x18),0);
      if ((lVar23 != 0) &&
         ((lVar23 = *(long *)(lVar23 + 0x18), lVar23 != 0 && (*(long *)(unaff_x22 + 0x18) != 0)))) {
        uVar3 = *(undefined8 *)(lVar23 + 0x10);
        uVar13 = *(undefined8 *)(lVar23 + 0x18);
        lVar23 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
        if ((lVar23 != 0) &&
           ((lVar23 = *(long *)(lVar23 + 0x20), lVar23 != 0 && (*(long *)(unaff_x22 + 0x18) != 0))))
        {
          uVar4 = *(undefined8 *)(lVar23 + 0x10);
          uVar14 = *(undefined8 *)(lVar23 + 0x18);
          lVar23 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
          if ((lVar23 != 0) &&
             ((lVar23 = *(long *)(lVar23 + 0x18), lVar23 != 0 && (*(long *)(unaff_x22 + 0x18) != 0))
             )) {
            uVar5 = *(undefined8 *)(lVar23 + 0x10);
            in_stack_00000128 = *(undefined8 *)(lVar23 + 0x18);
            lVar23 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
            if ((lVar23 != 0) &&
               ((lVar23 = *(long *)(lVar23 + 0x88), lVar23 != 0 &&
                (*(long *)(unaff_x22 + 0x18) != 0)))) {
              uVar6 = *(undefined8 *)(lVar23 + 0x10);
              uVar15 = *(undefined8 *)(lVar23 + 0x18);
              lVar23 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
              if ((lVar23 != 0) &&
                 ((lVar23 = *(long *)(lVar23 + 0x58), lVar23 != 0 &&
                  (*(long *)(unaff_x22 + 0x18) != 0)))) {
                uVar7 = *(undefined8 *)(lVar23 + 0x10);
                uVar16 = *(undefined8 *)(lVar23 + 0x18);
                lVar23 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
                if ((lVar23 != 0) &&
                   ((lVar23 = *(long *)(lVar23 + 0x60), lVar23 != 0 &&
                    (*(long *)(unaff_x22 + 0x18) != 0)))) {
                  uVar8 = *(undefined8 *)(lVar23 + 0x10);
                  uVar17 = *(undefined8 *)(lVar23 + 0x18);
                  lVar23 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
                  if ((lVar23 != 0) &&
                     ((lVar23 = *(long *)(lVar23 + 0xa8), lVar23 != 0 &&
                      (*(long *)(unaff_x22 + 0x18) != 0)))) {
                    uVar9 = *(undefined8 *)(lVar23 + 0x10);
                    uVar18 = *(undefined8 *)(lVar23 + 0x18);
                    lVar23 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
                    if (lVar23 != 0) {
                      plVar1 = (long *)(lVar23 + 0xd0);
                      if (*(int *)(lVar23 + 0xe0) != 0) {
                        plVar1 = (long *)(lVar23 + 0xd8);
                      }
                      lVar23 = *plVar1;
                      if ((lVar23 != 0) && (*(long *)(unaff_x22 + 0x18) != 0)) {
                        uVar10 = *(undefined8 *)(lVar23 + 0x10);
                        uVar19 = *(undefined8 *)(lVar23 + 0x18);
                        lVar23 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
                        if ((lVar23 != 0) &&
                           ((lVar23 = *(long *)(lVar23 + 0x28), lVar23 != 0 &&
                            (*(long *)(unaff_x22 + 0x18) != 0)))) {
                          uVar11 = *(undefined8 *)(lVar23 + 0x10);
                          uVar20 = *(undefined8 *)(lVar23 + 0x18);
                          lVar23 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
                          if (lVar23 != 0) {
                            if ((DAT_086de93e & 1) == 0) {
                              FUN_0335b6c8(&DAT_083eb4b0,1);
                              DataMemoryBarrier(2,3);
                              DAT_086de93e = 1;
                            }
                            if (*(long *)(lVar23 + 0x18) == 0) {
                              uVar22 = 0;
                            }
                            else {
                              uVar22 = *(undefined4 *)(*(long *)(lVar23 + 0x18) + 0x30);
                            }
                            in_stack_000000b8 = in_stack_00000128;
                            in_stack_00000080 = uVar2;
                            in_stack_00000088 = uVar12;
                            in_stack_00000090 = uVar3;
                            in_stack_00000098 = uVar13;
                            in_stack_000000a0 = uVar4;
                            in_stack_000000a8 = uVar14;
                            in_stack_000000b0 = uVar5;
                            in_stack_000000c0 = uVar6;
                            in_stack_000000c8 = uVar15;
                            in_stack_000000d0 = uVar7;
                            in_stack_000000d8 = uVar16;
                            in_stack_000000e0 = uVar8;
                            in_stack_000000e8 = uVar17;
                            in_stack_000000f0 = uVar9;
                            in_stack_000000f8 = uVar18;
                            in_stack_00000100 = uVar10;
                            in_stack_00000108 = uVar19;
                            in_stack_00000110 = uVar11;
                            in_stack_00000118 = uVar20;
                            auVar24 = FUN_040026fc(&stack0x00000078,uVar22,0x40);
                            return auVar24;
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


