/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$.ctor
ENTRY_POINT: 0637aa7c
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
Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos___ctor
          (long param_1,undefined8 param_2,undefined8 param_3)

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
  long lVar21;
  long unaff_x21;
  long unaff_x28;
  undefined1 auVar22 [16];
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
  
                    /* catch() { ... } // from try @ 0637a9a0 with catch @ 0637aa84 */
  if (*(long *)(unaff_x21 + 0x10) != 0) {
                    /* try { // try from 0637aa88 to 0647aa8f has its CatchHandler @ 0637aa90 */
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar11 = *(undefined8 *)(param_1 + 0x18);
                    /* catch() { ... } // from try @ 0637a450 with catch @ 0637aa90
                       catch() { ... } // from try @ 0637a56c with catch @ 0637aa90
                       catch() { ... } // from try @ 0637a884 with catch @ 0637aa90
                       catch() { ... } // from try @ 0637a980 with catch @ 0637aa90
                       catch() { ... } // from try @ 0637aa88 with catch @ 0637aa90 */
    lVar21 = FUN_06317920(*(long *)(unaff_x21 + 0x10),0);
    if (((lVar21 != 0) && (lVar21 = *(long *)(lVar21 + 0x80), lVar21 != 0)) &&
       (*(long *)(unaff_x21 + 0x10) != 0)) {
      uVar2 = *(undefined8 *)(lVar21 + 0x10);
      uVar12 = *(undefined8 *)(lVar21 + 0x18);
      lVar21 = FUN_06317920(*(long *)(unaff_x21 + 0x10),0);
      if (((lVar21 != 0) && (lVar21 = *(long *)(lVar21 + 0x88), lVar21 != 0)) &&
         (*(long *)(unaff_x21 + 0x10) != 0)) {
        uVar3 = *(undefined8 *)(lVar21 + 0x10);
        uVar13 = *(undefined8 *)(lVar21 + 0x18);
        lVar21 = FUN_06317920(*(long *)(unaff_x21 + 0x10),0);
        if (((lVar21 != 0) && (lVar21 = *(long *)(lVar21 + 0x78), lVar21 != 0)) &&
           (*(long *)(unaff_x21 + 0x10) != 0)) {
          uVar4 = *(undefined8 *)(lVar21 + 0x10);
          uVar14 = *(undefined8 *)(lVar21 + 0x18);
          lVar21 = FUN_06317920(*(long *)(unaff_x21 + 0x10),0);
          if (((lVar21 != 0) && (lVar21 = *(long *)(lVar21 + 0x60), lVar21 != 0)) &&
             (*(long *)(unaff_x21 + 0x10) != 0)) {
            uVar5 = *(undefined8 *)(lVar21 + 0x10);
            uVar15 = *(undefined8 *)(lVar21 + 0x18);
            lVar21 = FUN_06317920(*(long *)(unaff_x21 + 0x10),0);
            if (((lVar21 != 0) && (lVar21 = *(long *)(lVar21 + 0x58), lVar21 != 0)) &&
               (*(long *)(unaff_x21 + 0x10) != 0)) {
              uVar6 = *(undefined8 *)(lVar21 + 0x10);
              uVar16 = *(undefined8 *)(lVar21 + 0x18);
              lVar21 = FUN_0631798c(*(long *)(unaff_x21 + 0x10),0);
              if (((lVar21 != 0) && (lVar21 = *(long *)(lVar21 + 0x18), lVar21 != 0)) &&
                 (*(long *)(unaff_x21 + 0x10) != 0)) {
                uVar7 = *(undefined8 *)(lVar21 + 0x10);
                uVar17 = *(undefined8 *)(lVar21 + 0x18);
                lVar21 = FUN_06317848(*(long *)(unaff_x21 + 0x10),0);
                if (((lVar21 != 0) && (lVar21 = *(long *)(lVar21 + 0x20), lVar21 != 0)) &&
                   (*(long *)(unaff_x21 + 0x10) != 0)) {
                  uVar8 = *(undefined8 *)(lVar21 + 0x10);
                  uVar18 = *(undefined8 *)(lVar21 + 0x18);
                  lVar21 = FUN_06317848(*(long *)(unaff_x21 + 0x10),0);
                  if (((lVar21 != 0) && (lVar21 = *(long *)(lVar21 + 0x18), lVar21 != 0)) &&
                     (*(long *)(unaff_x21 + 0x10) != 0)) {
                    uVar9 = *(undefined8 *)(lVar21 + 0x10);
                    uVar19 = *(undefined8 *)(lVar21 + 0x18);
                    lVar21 = FUN_06317848(*(long *)(unaff_x21 + 0x10),0);
                    if (lVar21 != 0) {
                      lVar21 = *(long *)(lVar21 + 0x28);
                      if (lVar21 != 0) {
                        if (*(long *)(unaff_x21 + 0x10) != 0) {
                          uVar10 = *(undefined8 *)(lVar21 + 0x10);
                          uVar20 = *(undefined8 *)(lVar21 + 0x18);
                          lVar21 = FUN_06317848(*(long *)(unaff_x21 + 0x10),0);
                          if ((lVar21 != 0) && (lVar21 = *(long *)(lVar21 + 0x30), lVar21 != 0)) {
                            in_stack_00000158 = in_stack_00000170;
                            in_stack_00000150 = in_stack_00000168;
                            if (*(long *)(unaff_x21 + 0x20) != 0) {
                              in_stack_00000148 = in_stack_00000170;
                              in_stack_00000140 = in_stack_00000168;
                              in_stack_00000080 = param_2;
                              in_stack_00000088 = param_3;
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
                              in_stack_00000130 = *(undefined8 *)(lVar21 + 0x10);
                              in_stack_00000138 = *(undefined8 *)(lVar21 + 0x18);
                              auVar22 = FUN_040033e8(&stack0x00000080,
                                                     *(undefined4 *)
                                                      (*(long *)(unaff_x21 + 0x20) + 0x18),0x40);
                              if (*(long *)(unaff_x28 + 0x28) == in_stack_00000178) {
                                return auVar22;
                              }
                    /* WARNING: Subroutine does not return */
                              __stack_chk_fail();
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


