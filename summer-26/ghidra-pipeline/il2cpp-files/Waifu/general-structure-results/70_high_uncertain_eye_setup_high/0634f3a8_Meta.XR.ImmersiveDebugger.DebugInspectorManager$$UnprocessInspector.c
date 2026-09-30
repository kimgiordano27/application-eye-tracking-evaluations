/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager$$UnprocessInspector
ENTRY_POINT: 0634f3a8
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


undefined1  [16] Meta_XR_ImmersiveDebugger_DebugInspectorManager__UnprocessInspector(void)

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
  undefined4 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long unaff_x20;
  undefined1 auVar22 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined4 uStack000000000000009c;
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
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000118;
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000128;
  undefined8 uStack0000000000000130;
  undefined8 uStack0000000000000138;
  undefined8 uStack0000000000000140;
  undefined8 uStack0000000000000148;
  undefined8 uStack0000000000000150;
  
                    /* try { // try from 0634f3a8 to 0644f3ab has its CatchHandler @ 0634f424 */
                    /* catch() { ... } // from try @ 0634f080 with catch @ 0634f3ac
                       try { // try from 0634f3ac to 0644f44f has its CatchHandler @ 0634ed98 */
                    /* catch() { ... } // from try @ 0634f334 with catch @ 0634f3b0 */
                    /* catch() { ... } // from try @ 0634f144 with catch @ 0634f3b4 */
                    /* catch() { ... } // from try @ 0634f3a4 with catch @ 0634f3b8 */
                    /* catch() { ... } // from try @ 0634f0dc with catch @ 0634f3bc */
  uStack0000000000000110 = in_stack_00000058;
  uStack0000000000000118 = in_stack_00000050;
                    /* catch() { ... } // from try @ 0634f09c with catch @ 0634f3c0 */
                    /* catch() { ... } // from try @ 0634f094 with catch @ 0634f3c4 */
                    /* catch() { ... } // from try @ 0634f3a0 with catch @ 0634f3c8 */
                    /* catch() { ... } // from try @ 0634f398 with catch @ 0634f3cc */
  uStack0000000000000120 = in_stack_00000048;
  uStack0000000000000128 = in_stack_00000040;
                    /* catch() { ... } // from try @ 0634efcc with catch @ 0634f3d0 */
                    /* catch() { ... } // from try @ 0634f394 with catch @ 0634f3d4 */
                    /* catch() { ... } // from try @ 0634efb4 with catch @ 0634f3d8 */
  uStack0000000000000130 = in_stack_00000038;
  uStack0000000000000138 = in_stack_00000030;
                    /* catch() { ... } // from try @ 0634f390 with catch @ 0634f3dc */
                    /* catch() { ... } // from try @ 0634f38c with catch @ 0634f3e0 */
                    /* catch() { ... } // from try @ 0634ef94 with catch @ 0634f3e4 */
  uStack0000000000000140 = in_stack_00000028;
  uStack0000000000000148 = in_stack_00000020;
                    /* catch() { ... } // from try @ 0634f388 with catch @ 0634f3e8 */
                    /* catch() { ... } // from try @ 0634ef84 with catch @ 0634f3ec */
  uStack0000000000000150 = in_stack_00000008;
                    /* catch() { ... } // from try @ 0634f384 with catch @ 0634f3f0 */
  auVar22 = FUN_04002dbc();
                    /* catch() { ... } // from try @ 0634ef70 with catch @ 0634f3f4 */
  lVar19 = *(long *)(unaff_x20 + 0x40);
                    /* catch() { ... } // from try @ 0634f380 with catch @ 0634f3f8 */
                    /* catch() { ... } // from try @ 0634ef58 with catch @ 0634f3fc */
                    /* catch() { ... } // from try @ 0634f37c with catch @ 0634f400 */
                    /* catch() { ... } // from try @ 0634f378 with catch @ 0634f404 */
                    /* catch() { ... } // from try @ 0634f2c0 with catch @ 0634f408 */
                    /* catch() { ... } // from try @ 0634f1d4 with catch @ 0634f40c */
                    /* catch() { ... } // from try @ 0634f370 with catch @ 0634f410 */
                    /* catch() { ... } // from try @ 0634f168 with catch @ 0634f414 */
  if ((((lVar19 != 0) && (lVar20 = *(long *)(unaff_x20 + 0x30), lVar20 != 0)) &&
      (lVar21 = *(long *)(unaff_x20 + 0x38), lVar21 != 0)) && (*(long *)(unaff_x20 + 0x18) != 0)) {
                    /* catch() { ... } // from try @ 0634f36c with catch @ 0634f418 */
    uVar2 = *(undefined8 *)(lVar19 + 0x10);
    uVar10 = *(undefined8 *)(lVar19 + 0x18);
                    /* catch() { ... } // from try @ 0634f160 with catch @ 0634f41c */
    uVar3 = *(undefined8 *)(lVar20 + 0x10);
    uVar11 = *(undefined8 *)(lVar20 + 0x18);
                    /* catch() { ... } // from try @ 0634f220 with catch @ 0634f420 */
    uVar4 = *(undefined8 *)(lVar21 + 0x10);
    uVar12 = *(undefined8 *)(lVar21 + 0x18);
                    /* catch() { ... } // from try @ 0634f0ec with catch @ 0634f424
                       catch() { ... } // from try @ 0634f3a8 with catch @ 0634f424 */
                    /* catch() { ... } // from try @ 0634f0b0 with catch @ 0634f428 */
                    /* catch() { ... } // from try @ 0634efe8 with catch @ 0634f42c
                       catch() { ... } // from try @ 0634f39c with catch @ 0634f42c */
    lVar19 = FUN_0631798c(*(long *)(unaff_x20 + 0x18),0);
                    /* catch() { ... } // from try @ 0634f1f8 with catch @ 0634f430 */
                    /* catch() { ... } // from try @ 0634f178 with catch @ 0634f434
                       catch() { ... } // from try @ 0634f374 with catch @ 0634f434 */
                    /* catch() { ... } // from try @ 0634f1f0 with catch @ 0634f438
                       catch() { ... } // from try @ 0634f368 with catch @ 0634f438 */
    if (((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x18), lVar19 != 0)) &&
       (*(long *)(unaff_x20 + 0x18) != 0)) {
      uVar5 = *(undefined8 *)(lVar19 + 0x10);
      uVar13 = *(undefined8 *)(lVar19 + 0x18);
      lVar19 = FUN_06317848(*(long *)(unaff_x20 + 0x18),0);
                    /* try { // try from 0634f450 to 0644f46b has its CatchHandler @ 0634f4e0 */
      if (((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x20), lVar19 != 0)) &&
         (*(long *)(unaff_x20 + 0x18) != 0)) {
        uVar6 = *(undefined8 *)(lVar19 + 0x10);
        uVar14 = *(undefined8 *)(lVar19 + 0x18);
                    /* try { // try from 0634f46c to 0644f4cf has its CatchHandler @ 0634ed98 */
        lVar19 = FUN_06317848(*(long *)(unaff_x20 + 0x18),0);
        if (((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x18), lVar19 != 0)) &&
           (*(long *)(unaff_x20 + 0x18) != 0)) {
          uVar7 = *(undefined8 *)(lVar19 + 0x10);
          uVar15 = *(undefined8 *)(lVar19 + 0x18);
          lVar19 = FUN_06317848(*(long *)(unaff_x20 + 0x18),0);
          if (lVar19 != 0) {
            plVar1 = (long *)(lVar19 + 0xd0);
            if (*(int *)(lVar19 + 0xe0) != 0) {
              plVar1 = (long *)(lVar19 + 0xd8);
            }
            lVar19 = *plVar1;
            if ((lVar19 != 0) && (*(long *)(unaff_x20 + 0x18) != 0)) {
              uVar8 = *(undefined8 *)(lVar19 + 0x10);
              uVar16 = *(undefined8 *)(lVar19 + 0x18);
              lVar19 = FUN_06317848(*(long *)(unaff_x20 + 0x18),0);
                    /* try { // try from 0634f4d0 to 0644f4df has its CatchHandler @ 0634f4e0 */
              if ((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0xa8), lVar19 != 0)) {
                    /* catch() { ... } // from try @ 0634f450 with catch @ 0634f4e0
                       catch() { ... } // from try @ 0634f4d0 with catch @ 0634f4e0 */
                    /* try { // try from 0634f4e4 to 0644f4e7 has its CatchHandler @ 0634f4f0 */
                if (*(long *)(unaff_x20 + 0x18) != 0) {
                    /* try { // try from 0634f4e8 to 0644f4f3 has its CatchHandler @ 0634ed98 */
                  uVar9 = *(undefined8 *)(lVar19 + 0x10);
                  uVar17 = *(undefined8 *)(lVar19 + 0x18);
                    /* catch() { ... } // from try @ 0634f4e4 with catch @ 0634f4f0 */
                  lVar19 = FUN_06317848(*(long *)(unaff_x20 + 0x18),0);
                  if (lVar19 != 0) {
                    if ((DAT_086de93e & 1) == 0) {
                      FUN_0335b6c8(&DAT_083eb4b0,1);
                      DataMemoryBarrier(2,3);
                      DAT_086de93e = 1;
                    }
                    if (*(long *)(lVar19 + 0x18) == 0) {
                      uVar18 = 0;
                    }
                    else {
                      uVar18 = *(undefined4 *)(*(long *)(lVar19 + 0x18) + 0x30);
                    }
                    uStack000000000000009c = 0;
                    in_stack_000000a0 = uVar2;
                    in_stack_000000a8 = uVar10;
                    in_stack_000000b0 = uVar3;
                    in_stack_000000b8 = uVar11;
                    in_stack_000000c0 = uVar4;
                    in_stack_000000c8 = uVar12;
                    in_stack_000000d0 = uVar5;
                    in_stack_000000d8 = uVar13;
                    in_stack_000000e0 = uVar6;
                    in_stack_000000e8 = uVar14;
                    in_stack_000000f0 = uVar7;
                    in_stack_000000f8 = uVar15;
                    in_stack_00000100 = uVar8;
                    in_stack_00000108 = uVar16;
                    uStack0000000000000110 = uVar9;
                    uStack0000000000000118 = uVar17;
                    auVar22 = FUN_04002e4c(&stack0x00000098,uVar18,0x40,auVar22._0_8_,auVar22._8_8_,
                                           DAT_0840ee90);
                    return auVar22;
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


