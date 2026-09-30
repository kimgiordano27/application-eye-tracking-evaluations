/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$DrawBox
ENTRY_POINT: 0637a998
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


undefined1  [16] Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__DrawBox(undefined8 param_1)

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
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int iVar21;
  long lVar22;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined1 unaff_w23;
  long unaff_x28;
  undefined1 auVar23 [16];
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
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  long in_stack_00000178;
  
  auVar23._8_8_ = unaff_x19;
  auVar23._0_8_ = unaff_x20;
  FUN_0335b6c8(param_1,1);
                    /* try { // try from 0637a9a0 to 0647a9a3 has its CatchHandler @ 0637aa84 */
  DataMemoryBarrier(2,3);
                    /* try { // try from 0637a9a4 to 0647aa87 has its CatchHandler @ 06379a04 */
  FUN_0335b6c8(&DAT_083eb160,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb748,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb750,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb758,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebcd0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebc88,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0840eee0,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x22 + 0x9cd) = unaff_w23;
  if (*(long *)(unaff_x21 + 0x20) != 0) {
    iVar21 = FUN_04383e24(*(long *)(unaff_x21 + 0x20),DAT_083eb750);
    if (iVar21 == 0) {
LAB_0637ac9c:
      if (*(long *)(unaff_x28 + 0x28) == in_stack_00000178) {
        return auVar23;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    in_stack_00000168 = 0;
    in_stack_00000170 = 0;
    if (*(long *)(unaff_x21 + 0x20) != 0) {
      auVar23 = FUN_04e9ef74(*(long *)(unaff_x21 + 0x20) + 0x10,
                             *(undefined8 *)
                              (*(long *)(*(long *)(DAT_083eb748 + 0x20) + 0xc0) + 0xb0));
      lVar22 = *(long *)(unaff_x21 + 0x18);
      if ((lVar22 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
        uVar1 = *(undefined8 *)(lVar22 + 0x10);
        uVar11 = *(undefined8 *)(lVar22 + 0x18);
        lVar22 = FUN_06317920(*(long *)(unaff_x21 + 0x10),0);
        if ((lVar22 != 0) &&
           ((lVar22 = *(long *)(lVar22 + 0x80), lVar22 != 0 && (*(long *)(unaff_x21 + 0x10) != 0))))
        {
          uVar2 = *(undefined8 *)(lVar22 + 0x10);
          uVar12 = *(undefined8 *)(lVar22 + 0x18);
          lVar22 = FUN_06317920(*(long *)(unaff_x21 + 0x10),0);
          if ((lVar22 != 0) &&
             ((lVar22 = *(long *)(lVar22 + 0x88), lVar22 != 0 && (*(long *)(unaff_x21 + 0x10) != 0))
             )) {
            uVar3 = *(undefined8 *)(lVar22 + 0x10);
            uVar13 = *(undefined8 *)(lVar22 + 0x18);
            lVar22 = FUN_06317920(*(long *)(unaff_x21 + 0x10),0);
            if ((lVar22 != 0) &&
               ((lVar22 = *(long *)(lVar22 + 0x78), lVar22 != 0 &&
                (*(long *)(unaff_x21 + 0x10) != 0)))) {
              uVar4 = *(undefined8 *)(lVar22 + 0x10);
              uVar14 = *(undefined8 *)(lVar22 + 0x18);
              lVar22 = FUN_06317920(*(long *)(unaff_x21 + 0x10),0);
              if ((lVar22 != 0) &&
                 ((lVar22 = *(long *)(lVar22 + 0x60), lVar22 != 0 &&
                  (*(long *)(unaff_x21 + 0x10) != 0)))) {
                uVar5 = *(undefined8 *)(lVar22 + 0x10);
                uVar15 = *(undefined8 *)(lVar22 + 0x18);
                lVar22 = FUN_06317920(*(long *)(unaff_x21 + 0x10),0);
                if ((lVar22 != 0) &&
                   ((lVar22 = *(long *)(lVar22 + 0x58), lVar22 != 0 &&
                    (*(long *)(unaff_x21 + 0x10) != 0)))) {
                  uVar6 = *(undefined8 *)(lVar22 + 0x10);
                  uVar16 = *(undefined8 *)(lVar22 + 0x18);
                  lVar22 = FUN_0631798c(*(long *)(unaff_x21 + 0x10),0);
                  if ((lVar22 != 0) &&
                     ((lVar22 = *(long *)(lVar22 + 0x18), lVar22 != 0 &&
                      (*(long *)(unaff_x21 + 0x10) != 0)))) {
                    uVar7 = *(undefined8 *)(lVar22 + 0x10);
                    uVar17 = *(undefined8 *)(lVar22 + 0x18);
                    lVar22 = FUN_06317848(*(long *)(unaff_x21 + 0x10),0);
                    if ((lVar22 != 0) &&
                       ((lVar22 = *(long *)(lVar22 + 0x20), lVar22 != 0 &&
                        (*(long *)(unaff_x21 + 0x10) != 0)))) {
                      uVar8 = *(undefined8 *)(lVar22 + 0x10);
                      uVar18 = *(undefined8 *)(lVar22 + 0x18);
                      lVar22 = FUN_06317848(*(long *)(unaff_x21 + 0x10),0);
                      if ((lVar22 != 0) &&
                         ((lVar22 = *(long *)(lVar22 + 0x18), lVar22 != 0 &&
                          (*(long *)(unaff_x21 + 0x10) != 0)))) {
                        uVar9 = *(undefined8 *)(lVar22 + 0x10);
                        uVar19 = *(undefined8 *)(lVar22 + 0x18);
                        lVar22 = FUN_06317848(*(long *)(unaff_x21 + 0x10),0);
                        if (lVar22 != 0) {
                          lVar22 = *(long *)(lVar22 + 0x28);
                          if (lVar22 != 0) {
                            if (*(long *)(unaff_x21 + 0x10) != 0) {
                              uVar10 = *(undefined8 *)(lVar22 + 0x10);
                              uVar20 = *(undefined8 *)(lVar22 + 0x18);
                              lVar22 = FUN_06317848(*(long *)(unaff_x21 + 0x10),0);
                              if ((lVar22 != 0) && (lVar22 = *(long *)(lVar22 + 0x30), lVar22 != 0))
                              {
                                in_stack_00000158 = in_stack_00000170;
                                in_stack_00000150 = in_stack_00000168;
                                if (*(long *)(unaff_x21 + 0x20) != 0) {
                                  in_stack_00000148 = in_stack_00000170;
                                  in_stack_00000140 = in_stack_00000168;
                                  in_stack_00000090 = uVar1;
                                  in_stack_00000098 = uVar11;
                                  in_stack_000000a0 = uVar2;
                                  in_stack_000000a8 = uVar12;
                                  in_stack_000000b0 = uVar3;
                                  in_stack_000000b8 = uVar13;
                                  in_stack_000000c0 = uVar4;
                                  in_stack_000000c8 = uVar14;
                                  in_stack_000000d0 = uVar5;
                                  in_stack_000000d8 = uVar15;
                                  in_stack_000000e0 = uVar6;
                                  in_stack_000000e8 = uVar16;
                                  in_stack_000000f0 = uVar7;
                                  in_stack_000000f8 = uVar17;
                                  in_stack_00000100 = uVar8;
                                  in_stack_00000108 = uVar18;
                                  in_stack_00000110 = uVar9;
                                  in_stack_00000118 = uVar19;
                                  in_stack_00000120 = uVar10;
                                  in_stack_00000128 = uVar20;
                                  in_stack_00000130 = *(undefined8 *)(lVar22 + 0x10);
                                  in_stack_00000138 = *(undefined8 *)(lVar22 + 0x18);
                                  _in_stack_00000080 = auVar23;
                                  auVar23 = FUN_040033e8(&stack0x00000080,
                                                         *(undefined4 *)
                                                          (*(long *)(unaff_x21 + 0x20) + 0x18),0x40)
                                  ;
                                  goto LAB_0637ac9c;
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


