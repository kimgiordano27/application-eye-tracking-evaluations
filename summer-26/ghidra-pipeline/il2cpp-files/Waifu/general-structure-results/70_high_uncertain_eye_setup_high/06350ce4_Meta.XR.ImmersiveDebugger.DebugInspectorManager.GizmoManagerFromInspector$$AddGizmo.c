/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager.GizmoManagerFromInspector$$AddGizmo
ENTRY_POINT: 06350ce4
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
Meta_XR_ImmersiveDebugger_DebugInspectorManager_GizmoManagerFromInspector__AddGizmo(void)

{
  uint uVar1;
  long *plVar2;
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
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  int iVar27;
  undefined4 uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long unaff_x19;
  undefined1 unaff_w20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined4 unaff_w24;
  undefined1 auVar33 [16];
  undefined4 uStack0000000000000128;
  undefined4 uStack000000000000012c;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  auVar33._8_8_ = unaff_x23;
  auVar33._0_8_ = unaff_x22;
  FUN_0335b6c8(&DAT_083eb888,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb8c8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebb40,1);
  DataMemoryBarrier(2,3);
                    /* try { // try from 06350d28 to 06450d33 has its CatchHandler @ 06350e40 */
  FUN_0335b6c8(&DAT_0840ef20,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x19 + 0x8a8) = unaff_w20;
  if (*(long *)(unaff_x21 + 0x38) != 0) {
    iVar27 = FUN_0438dde0(*(long *)(unaff_x21 + 0x38),DAT_083ebb40);
    if (iVar27 == 0) {
      return auVar33;
    }
    lVar29 = *(long *)(unaff_x21 + 0x38);
    if ((((lVar29 != 0) && (lVar30 = *(long *)(unaff_x21 + 0x20), lVar30 != 0)) &&
        (lVar31 = *(long *)(unaff_x21 + 0x28), lVar31 != 0)) &&
       ((lVar32 = *(long *)(unaff_x21 + 0x30), lVar32 != 0 && (*(long *)(unaff_x21 + 0x18) != 0))))
    {
      uVar3 = *(undefined8 *)(lVar29 + 0x10);
      uVar15 = *(undefined8 *)(lVar29 + 0x18);
      uVar4 = *(undefined8 *)(lVar32 + 0x10);
      uVar16 = *(undefined8 *)(lVar32 + 0x18);
      uVar5 = *(undefined8 *)(lVar30 + 0x10);
      uVar17 = *(undefined8 *)(lVar30 + 0x18);
      uVar6 = *(undefined8 *)(lVar31 + 0x10);
      uVar18 = *(undefined8 *)(lVar31 + 0x18);
      lVar29 = FUN_06317848(*(long *)(unaff_x21 + 0x18),0);
                    /* try { // try from 06350d94 to 06450daf has its CatchHandler @ 06350e3c */
      if ((lVar29 != 0) &&
         ((lVar29 = *(long *)(lVar29 + 0x18), lVar29 != 0 && (*(long *)(unaff_x21 + 0x18) != 0)))) {
        uVar7 = *(undefined8 *)(lVar29 + 0x10);
        uVar19 = *(undefined8 *)(lVar29 + 0x18);
        lVar29 = FUN_06317848(*(long *)(unaff_x21 + 0x18),0);
        if ((lVar29 != 0) &&
           ((lVar29 = *(long *)(lVar29 + 0x20), lVar29 != 0 && (*(long *)(unaff_x21 + 0x18) != 0))))
        {
          uVar8 = *(undefined8 *)(lVar29 + 0x10);
          uVar20 = *(undefined8 *)(lVar29 + 0x18);
                    /* try { // try from 06350dd0 to 06450dd7 has its CatchHandler @ 06350e4c */
          lVar29 = FUN_06317848(*(long *)(unaff_x21 + 0x18),0);
          if (lVar29 != 0) {
                    /* try { // try from 06350de4 to 06450def has its CatchHandler @ 06350e48 */
            plVar2 = (long *)(lVar29 + 0xd0);
                    /* try { // try from 06350df0 to 06450e33 has its CatchHandler @ 06350c08 */
            if (*(int *)(lVar29 + 0xe0) != 0) {
              plVar2 = (long *)(lVar29 + 0xd8);
            }
            lVar29 = *plVar2;
            if ((lVar29 != 0) && (*(long *)(unaff_x21 + 0x18) != 0)) {
              uVar9 = *(undefined8 *)(lVar29 + 0x10);
              uVar21 = *(undefined8 *)(lVar29 + 0x18);
              lVar29 = FUN_06317848(*(long *)(unaff_x21 + 0x18),0);
              if (lVar29 != 0) {
                plVar2 = (long *)(lVar29 + 0xe8);
                if (*(int *)(lVar29 + 0xf8) != 0) {
                  plVar2 = (long *)(lVar29 + 0xf0);
                }
                lVar29 = *plVar2;
                    /* try { // try from 06350e34 to 06450e37 has its CatchHandler @ 06350e44 */
                    /* try { // try from 06350e38 to 06450e3b has its CatchHandler @ 06350e50 */
                if ((lVar29 != 0) && (*(long *)(unaff_x21 + 0x18) != 0)) {
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06350d94 with catch @ 06350e3c
                       try { // try from 06350e3c to 06450e67 has its CatchHandler @ 06350c08 */
                  uVar10 = *(undefined8 *)(lVar29 + 0x10);
                  uVar22 = *(undefined8 *)(lVar29 + 0x18);
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06350d28 with catch @ 06350e40
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06350e34 with catch @ 06350e44
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06350de4 with catch @ 06350e48
                        */
                  lVar29 = FUN_06317848(*(long *)(unaff_x21 + 0x18),0);
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06350dd0 with catch @ 06350e4c
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06350cd0 with catch @ 06350e50
                       catch(type#1 @ 07e8c608) { ... } // from try @ 06350e38 with catch @ 06350e50
                        */
                  if ((lVar29 != 0) &&
                     ((lVar29 = *(long *)(lVar29 + 0xa0), lVar29 != 0 &&
                      (*(long *)(unaff_x21 + 0x18) != 0)))) {
                    uVar11 = *(undefined8 *)(lVar29 + 0x10);
                    uVar23 = *(undefined8 *)(lVar29 + 0x18);
                    /* try { // try from 06350e68 to 06450e83 has its CatchHandler @ 06350ef8 */
                    lVar29 = FUN_06317848(*(long *)(unaff_x21 + 0x18),0);
                    if ((lVar29 != 0) &&
                       ((lVar29 = *(long *)(lVar29 + 0x88), lVar29 != 0 &&
                        (*(long *)(unaff_x21 + 0x18) != 0)))) {
                    /* try { // try from 06350e84 to 06450ee7 has its CatchHandler @ 06350c08 */
                      uVar12 = *(undefined8 *)(lVar29 + 0x10);
                      uVar24 = *(undefined8 *)(lVar29 + 0x18);
                      lVar29 = FUN_06317848(*(long *)(unaff_x21 + 0x18),0);
                      if ((lVar29 != 0) &&
                         ((lVar29 = *(long *)(lVar29 + 0x58), lVar29 != 0 &&
                          (*(long *)(unaff_x21 + 0x18) != 0)))) {
                        uVar13 = *(undefined8 *)(lVar29 + 0x10);
                        uVar25 = *(undefined8 *)(lVar29 + 0x18);
                        lVar29 = FUN_06317848(*(long *)(unaff_x21 + 0x18),0);
                        if ((lVar29 != 0) &&
                           ((lVar29 = *(long *)(lVar29 + 0x60), lVar29 != 0 &&
                            (*(long *)(unaff_x21 + 0x18) != 0)))) {
                          uVar14 = *(undefined8 *)(lVar29 + 0x10);
                          uVar26 = *(undefined8 *)(lVar29 + 0x18);
                          lVar29 = FUN_0631798c(*(long *)(unaff_x21 + 0x18),0);
                    /* try { // try from 06350ee8 to 06450ef7 has its CatchHandler @ 06350ef8 */
                    /* catch() { ... } // from try @ 06350e68 with catch @ 06350ef8
                       catch() { ... } // from try @ 06350ee8 with catch @ 06350ef8 */
                    /* try { // try from 06350efc to 06450eff has its CatchHandler @ 06350f08 */
                    /* try { // try from 06350f00 to 06450f0b has its CatchHandler @ 06350c08 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06350efc with catch @ 06350f08
                        */
                          if (((((lVar29 != 0) &&
                                (((*(long *)(lVar29 + 0x58) != 0 &&
                                  (*(long *)(unaff_x21 + 0x18) != 0)) &&
                                 (lVar29 = FUN_063178b4(*(long *)(unaff_x21 + 0x18),0), lVar29 != 0)
                                 ))) && (((*(long *)(lVar29 + 0x28) != 0 &&
                                          (*(long *)(unaff_x21 + 0x18) != 0)) &&
                                         (lVar29 = FUN_063178b4(*(long *)(unaff_x21 + 0x18),0),
                                         lVar29 != 0)))) &&
                              ((*(long *)(lVar29 + 0x30) != 0 && (*(long *)(unaff_x21 + 0x18) != 0))
                              )) && (((lVar29 = FUN_063178b4(*(long *)(unaff_x21 + 0x18),0),
                                      lVar29 != 0 &&
                                      (((*(long *)(lVar29 + 0x38) != 0 &&
                                        (*(long *)(unaff_x21 + 0x18) != 0)) &&
                                       (lVar29 = FUN_0631798c(*(long *)(unaff_x21 + 0x18),0),
                                       lVar29 != 0)))) &&
                                     (((*(long *)(lVar29 + 0x18) != 0 &&
                                       (*(long *)(unaff_x21 + 0x18) != 0)) &&
                                      ((lVar29 = FUN_0631798c(*(long *)(unaff_x21 + 0x18),0),
                                       lVar29 != 0 &&
                                       (((*(long *)(lVar29 + 0x60) != 0 &&
                                         (*(long *)(unaff_x21 + 0x18) != 0)) &&
                                        (lVar29 = FUN_06317848(*(long *)(unaff_x21 + 0x18),0),
                                        lVar29 != 0)))))))))) {
                            plVar2 = (long *)(lVar29 + 0xd8);
                            if (*(int *)(lVar29 + 0xe0) != 0) {
                              plVar2 = (long *)(lVar29 + 0xd0);
                            }
                            if (((((*plVar2 != 0) && (*(long *)(unaff_x21 + 0x18) != 0)) &&
                                 (lVar29 = FUN_06317848(*(long *)(unaff_x21 + 0x18),0), lVar29 != 0)
                                 ) && ((*(long *)(lVar29 + 0x28) != 0 &&
                                       (*(long *)(unaff_x21 + 0x18) != 0)))) &&
                               (lVar29 = FUN_06317848(*(long *)(unaff_x21 + 0x18),0), lVar29 != 0))
                            {
                              if ((DAT_086de93e & 1) == 0) {
                                FUN_0335b6c8(&DAT_083eb4b0,1);
                                DataMemoryBarrier(2,3);
                                DAT_086de93e = 1;
                              }
                              if (*(long *)(lVar29 + 0x18) == 0) {
                                uVar28 = 0;
                              }
                              else {
                                uVar28 = *(undefined4 *)(*(long *)(lVar29 + 0x18) + 0x30);
                              }
                              uStack000000000000012c = 0;
                              uStack0000000000000128 = unaff_w24;
                              in_stack_00000130 = uVar3;
                              in_stack_00000138 = uVar15;
                              in_stack_00000140 = uVar5;
                              in_stack_00000148 = uVar17;
                              in_stack_00000150 = uVar6;
                              in_stack_00000158 = uVar18;
                              in_stack_00000160 = uVar4;
                              in_stack_00000168 = uVar16;
                              in_stack_00000170 = uVar7;
                              in_stack_00000178 = uVar19;
                              in_stack_00000180 = uVar8;
                              in_stack_00000188 = uVar20;
                              in_stack_00000190 = uVar9;
                              in_stack_00000198 = uVar21;
                              in_stack_000001a0 = uVar10;
                              in_stack_000001a8 = uVar22;
                              in_stack_000001b0 = uVar11;
                              in_stack_000001b8 = uVar23;
                              in_stack_000001c0 = uVar12;
                              in_stack_000001c8 = uVar24;
                              in_stack_000001d0 = uVar13;
                              in_stack_000001d8 = uVar25;
                              in_stack_000001e0 = uVar14;
                              in_stack_000001e8 = uVar26;
                              auVar33 = FUN_04003860(&stack0x00000128,uVar28,0x40);
                              if ((*(long *)(unaff_x21 + 0x18) != 0) &&
                                 (lVar29 = FUN_06317848(*(long *)(unaff_x21 + 0x18),0), lVar29 != 0)
                                 ) {
                                iVar27 = *(int *)(lVar29 + 0xe0);
                                uVar1 = iVar27 + 2;
                                if (-1 < iVar27 + 1) {
                                  uVar1 = iVar27 + 1;
                                }
                                *(uint *)(lVar29 + 0xe0) = (iVar27 + 1) - (uVar1 & 0xfffffffe);
                                return auVar33;
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


