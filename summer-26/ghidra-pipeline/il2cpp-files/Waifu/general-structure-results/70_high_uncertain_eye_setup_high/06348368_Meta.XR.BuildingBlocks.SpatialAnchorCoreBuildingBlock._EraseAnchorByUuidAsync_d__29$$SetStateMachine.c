/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock.<EraseAnchorByUuidAsync>d__29$$SetStateMachine
ENTRY_POINT: 06348368
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
Meta_XR_BuildingBlocks_SpatialAnchorCoreBuildingBlock_<EraseAnchorByUuidAsync>d__29__SetStateMachine
          (void)

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
  undefined8 uVar21;
  int iVar22;
  undefined4 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined1 unaff_w23;
  undefined1 auVar27 [16];
  undefined4 in_stack_00000078;
  undefined4 uStack000000000000007c;
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
  
  auVar27._8_8_ = unaff_x19;
  auVar27._0_8_ = unaff_x20;
  FUN_0335b6c8(&DAT_083eb2f8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb9b8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebcd0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb9c0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0840ee20,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0x888) = unaff_w23;
  if (*(long *)(unaff_x22 + 0x30) != 0) {
    iVar22 = FUN_0438b004(*(long *)(unaff_x22 + 0x30),DAT_083eb9c0);
    if (iVar22 == 0) {
      return auVar27;
    }
    lVar24 = *(long *)(unaff_x22 + 0x20);
    if ((((lVar24 != 0) && (lVar25 = *(long *)(unaff_x22 + 0x30), lVar25 != 0)) &&
        (lVar26 = *(long *)(unaff_x22 + 0x28), lVar26 != 0)) && (*(long *)(unaff_x22 + 0x18) != 0))
    {
      uVar2 = *(undefined8 *)(lVar24 + 0x10);
      uVar12 = *(undefined8 *)(lVar24 + 0x18);
      uVar3 = *(undefined8 *)(lVar25 + 0x10);
      uVar13 = *(undefined8 *)(lVar25 + 0x18);
      uVar4 = *(undefined8 *)(lVar26 + 0x10);
      uVar14 = *(undefined8 *)(lVar26 + 0x18);
      lVar24 = FUN_0631798c(*(long *)(unaff_x22 + 0x18),0);
      if (((lVar24 != 0) && (lVar24 = *(long *)(lVar24 + 0x18), lVar24 != 0)) &&
         (*(long *)(unaff_x22 + 0x18) != 0)) {
        uVar5 = *(undefined8 *)(lVar24 + 0x10);
        uVar15 = *(undefined8 *)(lVar24 + 0x18);
        lVar24 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
        if (((lVar24 != 0) && (lVar24 = *(long *)(lVar24 + 0x20), lVar24 != 0)) &&
           (*(long *)(unaff_x22 + 0x18) != 0)) {
          uVar6 = *(undefined8 *)(lVar24 + 0x10);
          uVar16 = *(undefined8 *)(lVar24 + 0x18);
          lVar24 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
          if (((lVar24 != 0) && (lVar24 = *(long *)(lVar24 + 0x18), lVar24 != 0)) &&
             (*(long *)(unaff_x22 + 0x18) != 0)) {
            uVar7 = *(undefined8 *)(lVar24 + 0x10);
            uVar17 = *(undefined8 *)(lVar24 + 0x18);
            lVar24 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
            if (lVar24 != 0) {
              plVar1 = (long *)(lVar24 + 0xd0);
              if (*(int *)(lVar24 + 0xe0) != 0) {
                plVar1 = (long *)(lVar24 + 0xd8);
              }
              lVar24 = *plVar1;
              if ((lVar24 != 0) && (*(long *)(unaff_x22 + 0x18) != 0)) {
                uVar8 = *(undefined8 *)(lVar24 + 0x10);
                uVar18 = *(undefined8 *)(lVar24 + 0x18);
                lVar24 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
                if ((lVar24 != 0) &&
                   ((lVar24 = *(long *)(lVar24 + 0x58), lVar24 != 0 &&
                    (*(long *)(unaff_x22 + 0x18) != 0)))) {
                  uVar9 = *(undefined8 *)(lVar24 + 0x10);
                  uVar19 = *(undefined8 *)(lVar24 + 0x18);
                  lVar24 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
                  if ((lVar24 != 0) &&
                     ((lVar24 = *(long *)(lVar24 + 0x28), lVar24 != 0 &&
                      (*(long *)(unaff_x22 + 0x18) != 0)))) {
                    uVar10 = *(undefined8 *)(lVar24 + 0x10);
                    uVar20 = *(undefined8 *)(lVar24 + 0x18);
                    lVar24 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
                    if ((lVar24 != 0) &&
                       ((lVar24 = *(long *)(lVar24 + 0xa8), lVar24 != 0 &&
                        (*(long *)(unaff_x22 + 0x18) != 0)))) {
                      uVar11 = *(undefined8 *)(lVar24 + 0x10);
                      uVar21 = *(undefined8 *)(lVar24 + 0x18);
                      lVar24 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
                      if (lVar24 != 0) {
                        if ((DAT_086de93e & 1) == 0) {
                          FUN_0335b6c8(&DAT_083eb4b0,1);
                          DataMemoryBarrier(2,3);
                          DAT_086de93e = 1;
                        }
                        if (*(long *)(lVar24 + 0x18) == 0) {
                          uVar23 = 0;
                        }
                        else {
                          uVar23 = *(undefined4 *)(*(long *)(lVar24 + 0x18) + 0x30);
                        }
                        uStack000000000000007c = 0;
                        in_stack_00000080 = uVar2;
                        in_stack_00000088 = uVar12;
                        in_stack_00000090 = uVar3;
                        in_stack_00000098 = uVar13;
                        in_stack_000000a0 = uVar4;
                        in_stack_000000a8 = uVar14;
                        in_stack_000000b0 = uVar5;
                        in_stack_000000b8 = uVar15;
                        in_stack_000000c0 = uVar6;
                        in_stack_000000c8 = uVar16;
                        in_stack_000000d0 = uVar7;
                        in_stack_000000d8 = uVar17;
                        in_stack_000000e0 = uVar8;
                        in_stack_000000e8 = uVar18;
                        in_stack_000000f0 = uVar9;
                        in_stack_000000f8 = uVar19;
                        in_stack_00000100 = uVar10;
                        in_stack_00000108 = uVar20;
                        in_stack_00000110 = uVar11;
                        in_stack_00000118 = uVar21;
                        auVar27 = FUN_0400266c(&stack0x00000078,uVar23,0x40);
                        return auVar27;
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


