/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock$$EraseAnchorsAsync
ENTRY_POINT: 063476c8
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


undefined1  [16]
Meta_XR_BuildingBlocks_SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync(undefined8 param_1)

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
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined1 unaff_w23;
  undefined1 auVar23 [16];
  undefined4 in_stack_00000058;
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
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  
  auVar23._8_8_ = unaff_x19;
  auVar23._0_8_ = unaff_x20;
  FUN_0335b6c8(param_1,1);
  DataMemoryBarrier(2,3);
                    /* try { // try from 063476d4 to 0644777f has its CatchHandler @ 06347fd8 */
  FUN_0335b6c8(&DAT_083eb160,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb018,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb978,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebcd0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb980,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0840ee18,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0x882) = unaff_w23;
  if (*(long *)(unaff_x22 + 0x30) != 0) {
    iVar18 = FUN_0438a844(*(long *)(unaff_x22 + 0x30),DAT_083eb980);
    if (iVar18 == 0) {
      return auVar23;
    }
    lVar19 = *(long *)(unaff_x22 + 0x20);
                    /* try { // try from 06347788 to 064477a3 has its CatchHandler @ 06347fcc */
    if ((((lVar19 != 0) && (lVar20 = *(long *)(unaff_x22 + 0x28), lVar20 != 0)) &&
        (lVar21 = *(long *)(unaff_x22 + 0x38), lVar21 != 0)) &&
       ((lVar22 = *(long *)(unaff_x22 + 0x30), lVar22 != 0 && (*(long *)(unaff_x22 + 0x18) != 0))))
    {
      uVar2 = *(undefined8 *)(lVar19 + 0x10);
      uVar10 = *(undefined8 *)(lVar19 + 0x18);
      uVar3 = *(undefined8 *)(lVar22 + 0x10);
      uVar11 = *(undefined8 *)(lVar22 + 0x18);
      uVar4 = *(undefined8 *)(lVar20 + 0x10);
      uVar12 = *(undefined8 *)(lVar20 + 0x18);
      uVar5 = *(undefined8 *)(lVar21 + 0x10);
      uVar13 = *(undefined8 *)(lVar21 + 0x18);
      lVar19 = FUN_0631798c(*(long *)(unaff_x22 + 0x18),0);
      if ((lVar19 != 0) &&
         ((lVar19 = *(long *)(lVar19 + 0x18), lVar19 != 0 && (*(long *)(unaff_x22 + 0x18) != 0)))) {
        uVar6 = *(undefined8 *)(lVar19 + 0x10);
        uVar14 = *(undefined8 *)(lVar19 + 0x18);
        lVar19 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
        if ((lVar19 != 0) &&
           ((lVar19 = *(long *)(lVar19 + 0x18), lVar19 != 0 && (*(long *)(unaff_x22 + 0x18) != 0))))
        {
          uVar7 = *(undefined8 *)(lVar19 + 0x10);
          uVar15 = *(undefined8 *)(lVar19 + 0x18);
          lVar19 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
          if ((lVar19 != 0) &&
             ((lVar19 = *(long *)(lVar19 + 0xa8), lVar19 != 0 && (*(long *)(unaff_x22 + 0x18) != 0))
             )) {
            uVar8 = *(undefined8 *)(lVar19 + 0x10);
            uVar16 = *(undefined8 *)(lVar19 + 0x18);
            lVar19 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
            if (lVar19 != 0) {
              plVar1 = (long *)(lVar19 + 0xd0);
              if (*(int *)(lVar19 + 0xe0) != 0) {
                plVar1 = (long *)(lVar19 + 0xd8);
              }
              lVar19 = *plVar1;
              if ((lVar19 != 0) && (*(long *)(unaff_x22 + 0x18) != 0)) {
                uVar9 = *(undefined8 *)(lVar19 + 0x10);
                uVar17 = *(undefined8 *)(lVar19 + 0x18);
                lVar19 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
                if ((lVar19 != 0) &&
                   ((lVar19 = *(long *)(lVar19 + 0x28), lVar19 != 0 &&
                    (*(long *)(unaff_x22 + 0x38) != 0)))) {
                  in_stack_000000e0 = *(undefined8 *)(lVar19 + 0x10);
                  in_stack_000000e8 = *(undefined8 *)(lVar19 + 0x18);
                  uStack000000000000005c = 0;
                  in_stack_00000060 = uVar2;
                  in_stack_00000068 = uVar10;
                  in_stack_00000070 = uVar4;
                  in_stack_00000078 = uVar12;
                  in_stack_00000080 = uVar5;
                  in_stack_00000088 = uVar13;
                  in_stack_00000090 = uVar3;
                  in_stack_00000098 = uVar11;
                  in_stack_000000a0 = uVar6;
                  in_stack_000000a8 = uVar14;
                  in_stack_000000b0 = uVar7;
                  in_stack_000000b8 = uVar15;
                  in_stack_000000c0 = uVar8;
                  in_stack_000000c8 = uVar16;
                  in_stack_000000d0 = uVar9;
                  in_stack_000000d8 = uVar17;
                  auVar23 = FUN_040025dc(&stack0x00000058,
                                         *(undefined4 *)(*(long *)(unaff_x22 + 0x38) + 0x30),8,
                                         unaff_x20,unaff_x19,DAT_0840ee18);
                  return auVar23;
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


