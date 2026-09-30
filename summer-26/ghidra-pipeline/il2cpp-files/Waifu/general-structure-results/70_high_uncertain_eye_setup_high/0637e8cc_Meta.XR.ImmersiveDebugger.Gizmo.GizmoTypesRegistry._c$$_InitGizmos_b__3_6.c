/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypesRegistry.<>c$$<InitGizmos>b__3_6
ENTRY_POINT: 0637e8cc
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16] Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c__<InitGizmos>b__3_6(void)

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
  int iVar17;
  undefined4 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined1 unaff_w23;
  undefined1 auVar22 [16];
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
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  auVar22._8_8_ = unaff_x19;
  auVar22._0_8_ = unaff_x20;
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
                    /* try { // try from 0637e8d4 to 0647e8db has its CatchHandler @ 0637e98c */
  FUN_0335b6c8(&DAT_083eb568,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb498,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb160,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebeb8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebcd0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebec0,1);
  DataMemoryBarrier(2,3);
                    /* try { // try from 0637e954 to 0647e95b has its CatchHandler @ 0637e998 */
  FUN_0335b6c8(&DAT_0840f020,1);
                    /* try { // try from 0637e95c to 0647e97f has its CatchHandler @ 0637e7b0 */
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x22 + 0x9df) = unaff_w23;
  if (*(long *)(unaff_x21 + 0x28) != 0) {
    iVar17 = FUN_0439544c(*(long *)(unaff_x21 + 0x28),DAT_083ebec0);
    if (iVar17 == 0) {
      return auVar22;
    }
    lVar19 = *(long *)(unaff_x21 + 0x18);
                    /* try { // try from 0637e980 to 0647e983 has its CatchHandler @ 0637e990 */
                    /* try { // try from 0637e984 to 0647e98b has its CatchHandler @ 0637e998 */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 0637e8d4 with catch @ 0637e98c
                       try { // try from 0637e98c to 0647e9af has its CatchHandler @ 0637e7b0 */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 0637e980 with catch @ 0637e990
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 0637e8b8 with catch @ 0637e994
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 0637e954 with catch @ 0637e998
                       catch(type#1 @ 07e8c608) { ... } // from try @ 0637e984 with catch @ 0637e998
                        */
    if ((((lVar19 != 0) && (lVar20 = *(long *)(unaff_x21 + 0x20), lVar20 != 0)) &&
        (lVar21 = *(long *)(unaff_x21 + 0x28), lVar21 != 0)) && (*(long *)(unaff_x21 + 0x10) != 0))
    {
      uVar1 = *(undefined8 *)(lVar19 + 0x10);
      uVar9 = *(undefined8 *)(lVar19 + 0x18);
      uVar2 = *(undefined8 *)(lVar20 + 0x10);
      uVar10 = *(undefined8 *)(lVar20 + 0x18);
      uVar3 = *(undefined8 *)(lVar21 + 0x10);
      uVar11 = *(undefined8 *)(lVar21 + 0x18);
      lVar19 = FUN_0631798c(*(long *)(unaff_x21 + 0x10),0);
                    /* try { // try from 0637e9b0 to 0647e9b3 has its CatchHandler @ 0637e9c0 */
                    /* catch() { ... } // from try @ 0637e9b0 with catch @ 0637e9c0 */
      if (((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x18), lVar19 != 0)) &&
         (*(long *)(unaff_x21 + 0x10) != 0)) {
        uVar4 = *(undefined8 *)(lVar19 + 0x10);
        uVar12 = *(undefined8 *)(lVar19 + 0x18);
                    /* try { // try from 0637e9cc to 0647e9d3 has its CatchHandler @ 0637e9e8 */
        lVar19 = FUN_06317848(*(long *)(unaff_x21 + 0x10),0);
                    /* try { // try from 0637e9d4 to 0647e9df has its CatchHandler @ 0637e7b0 */
                    /* try { // try from 0637e9e0 to 0647e9e7 has its CatchHandler @ 0637e9e8 */
        if (((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x20), lVar19 != 0)) &&
           (*(long *)(unaff_x21 + 0x10) != 0)) {
          uVar5 = *(undefined8 *)(lVar19 + 0x10);
          uVar13 = *(undefined8 *)(lVar19 + 0x18);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0637e9cc with catch @ 0637e9e8
                       catch(type#2 @ 00000000) { ... } // from try @ 0637e9e0 with catch @ 0637e9e8
                        */
          lVar19 = FUN_06317848(*(long *)(unaff_x21 + 0x10),0);
          if (((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x18), lVar19 != 0)) &&
             (*(long *)(unaff_x21 + 0x10) != 0)) {
            uVar6 = *(undefined8 *)(lVar19 + 0x10);
            uVar14 = *(undefined8 *)(lVar19 + 0x18);
            lVar19 = FUN_06317848(*(long *)(unaff_x21 + 0x10),0);
            if (((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x28), lVar19 != 0)) &&
               (*(long *)(unaff_x21 + 0x10) != 0)) {
              uVar7 = *(undefined8 *)(lVar19 + 0x10);
              uVar15 = *(undefined8 *)(lVar19 + 0x18);
              lVar19 = FUN_06317848(*(long *)(unaff_x21 + 0x10),0);
              if (((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x30), lVar19 != 0)) &&
                 (*(long *)(unaff_x21 + 0x10) != 0)) {
                uVar8 = *(undefined8 *)(lVar19 + 0x10);
                uVar16 = *(undefined8 *)(lVar19 + 0x18);
                lVar19 = FUN_06317848(*(long *)(unaff_x21 + 0x10),0);
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
                  in_stack_00000050 = uVar1;
                  in_stack_00000058 = uVar9;
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
                  auVar22 = FUN_04004a60(&stack0x00000050,uVar18,0x40);
                  return auVar22;
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


