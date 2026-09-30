/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.MemberInfoExtensions$$IsTypeEqual
ENTRY_POINT: 0635292c
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
Meta_XR_ImmersiveDebugger_Utils_MemberInfoExtensions__IsTypeEqual(undefined8 param_1)

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
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  int iVar26;
  undefined4 uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long unaff_x19;
  ulong uVar31;
  undefined1 unaff_w20;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  uint uVar32;
  undefined4 unaff_s8;
  undefined1 auVar33 [16];
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  uint uStack0000000000000098;
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
  undefined4 uStack0000000000000168;
  uint uStack000000000000016c;
  
  auVar33._8_8_ = unaff_x24;
  auVar33._0_8_ = unaff_x23;
  FUN_0335b6c8(param_1,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb078,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb498,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb4e0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb160,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb4e8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebdb8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebcd0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebdc0,1);
                    /* try { // try from 063529d4 to 064529e3 has its CatchHandler @ 063529fc */
  DataMemoryBarrier(2,3);
                    /* try { // try from 063529e4 to 06452a03 has its CatchHandler @ 06352a0c */
  FUN_0335b6c8(&DAT_0840efb8,1);
  DataMemoryBarrier(2,3);
                    /* catch() { ... } // from try @ 06352838 with catch @ 063529ec */
  *(undefined1 *)(unaff_x19 + 0x8ae) = unaff_w20;
  if (*(long *)(unaff_x22 + 0x30) != 0) {
                    /* catch() { ... } // from try @ 063528c8 with catch @ 063529fc
                       catch() { ... } // from try @ 063529d4 with catch @ 063529fc */
    iVar26 = FUN_043935e0(*(long *)(unaff_x22 + 0x30),DAT_083ebdc0);
                    /* try { // try from 06352a04 to 06452a0f has its CatchHandler @ 06351bc8 */
    if (iVar26 != 0) {
      uVar32 = 2;
                    /* catch() { ... } // from try @ 06352888 with catch @ 06352a0c
                       catch() { ... } // from try @ 063529e4 with catch @ 06352a0c */
      do {
        lVar28 = *(long *)(unaff_x22 + 0x20);
        if (lVar28 == 0) goto LAB_06352d60;
        if (*(uint *)(lVar28 + 0x18) <= uVar32) goto LAB_06352d64;
        uVar31 = (ulong)uVar32;
        lVar28 = *(long *)(lVar28 + uVar31 * 8 + 0x20);
        if (lVar28 == 0) goto LAB_06352d60;
        iVar26 = FUN_042b66ec(lVar28,DAT_083eb4e8);
        if (iVar26 != 0) {
          lVar28 = *(long *)(unaff_x22 + 0x20);
          if (lVar28 == 0) goto LAB_06352d60;
          if (*(uint *)(lVar28 + 0x18) <= uVar32) {
LAB_06352d64:
                    /* WARNING: Subroutine does not return */
            FUN_033d1d44();
          }
          lVar28 = *(long *)(lVar28 + uVar31 * 8 + 0x20);
          if (((lVar28 == 0) || (lVar29 = *(long *)(unaff_x22 + 0x30), lVar29 == 0)) ||
             (lVar30 = *(long *)(unaff_x22 + 0x28), lVar30 == 0)) goto LAB_06352d60;
          if (*(uint *)(lVar30 + 0x18) <= uVar32) goto LAB_06352d64;
          lVar30 = *(long *)(lVar30 + uVar31 * 8 + 0x20);
          if ((lVar30 == 0) || (*(long *)(unaff_x22 + 0x18) == 0)) goto LAB_06352d60;
          uVar2 = *(undefined8 *)(lVar28 + 0x10);
          uVar14 = *(undefined8 *)(lVar28 + 0x18);
          uVar3 = *(undefined8 *)(lVar29 + 0x10);
          uVar15 = *(undefined8 *)(lVar29 + 0x18);
          uVar4 = *(undefined8 *)(lVar30 + 0x10);
          uVar16 = *(undefined8 *)(lVar30 + 0x18);
          lVar28 = FUN_0631798c(*(long *)(unaff_x22 + 0x18),0);
          if ((lVar28 == 0) ||
             ((lVar28 = *(long *)(lVar28 + 0x18), lVar28 == 0 || (*(long *)(unaff_x22 + 0x18) == 0))
             )) goto LAB_06352d60;
          uVar5 = *(undefined8 *)(lVar28 + 0x10);
          uVar17 = *(undefined8 *)(lVar28 + 0x18);
          lVar28 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
          if ((lVar28 == 0) ||
             ((lVar28 = *(long *)(lVar28 + 0x20), lVar28 == 0 || (*(long *)(unaff_x22 + 0x18) == 0))
             )) goto LAB_06352d60;
          uVar6 = *(undefined8 *)(lVar28 + 0x10);
          uVar18 = *(undefined8 *)(lVar28 + 0x18);
          lVar28 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
          if ((lVar28 == 0) ||
             ((lVar28 = *(long *)(lVar28 + 0x18), lVar28 == 0 || (*(long *)(unaff_x22 + 0x18) == 0))
             )) goto LAB_06352d60;
          uVar7 = *(undefined8 *)(lVar28 + 0x10);
          uVar19 = *(undefined8 *)(lVar28 + 0x18);
          lVar28 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
          if ((lVar28 == 0) ||
             ((lVar28 = *(long *)(lVar28 + 0x88), lVar28 == 0 || (*(long *)(unaff_x22 + 0x18) == 0))
             )) goto LAB_06352d60;
          uVar8 = *(undefined8 *)(lVar28 + 0x10);
          uVar20 = *(undefined8 *)(lVar28 + 0x18);
          lVar28 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
          if ((lVar28 == 0) ||
             ((lVar28 = *(long *)(lVar28 + 0xa8), lVar28 == 0 || (*(long *)(unaff_x22 + 0x18) == 0))
             )) goto LAB_06352d60;
          uVar9 = *(undefined8 *)(lVar28 + 0x10);
          uVar21 = *(undefined8 *)(lVar28 + 0x18);
          lVar28 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
          if ((lVar28 == 0) ||
             ((lVar28 = *(long *)(lVar28 + 0x58), lVar28 == 0 || (*(long *)(unaff_x22 + 0x18) == 0))
             )) goto LAB_06352d60;
          uVar10 = *(undefined8 *)(lVar28 + 0x10);
          uVar22 = *(undefined8 *)(lVar28 + 0x18);
          lVar28 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
          if (lVar28 == 0) goto LAB_06352d60;
          plVar1 = (long *)(lVar28 + 0xd0);
          if (*(int *)(lVar28 + 0xe0) != 0) {
            plVar1 = (long *)(lVar28 + 0xd8);
          }
          lVar28 = *plVar1;
          if ((lVar28 == 0) || (*(long *)(unaff_x22 + 0x18) == 0)) goto LAB_06352d60;
          uVar11 = *(undefined8 *)(lVar28 + 0x10);
          uVar23 = *(undefined8 *)(lVar28 + 0x18);
          lVar28 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
          if (lVar28 == 0) goto LAB_06352d60;
          plVar1 = (long *)(lVar28 + 0xd8);
          if (*(int *)(lVar28 + 0xe0) != 0) {
            plVar1 = (long *)(lVar28 + 0xd0);
          }
          lVar28 = *plVar1;
          if ((lVar28 == 0) || (*(long *)(unaff_x22 + 0x18) == 0)) goto LAB_06352d60;
          uVar12 = *(undefined8 *)(lVar28 + 0x10);
          uVar24 = *(undefined8 *)(lVar28 + 0x18);
          lVar28 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
          if (lVar28 == 0) goto LAB_06352d60;
          lVar28 = *(long *)(lVar28 + 0x28);
          if (lVar28 == 0) goto LAB_06352d60;
          uStack000000000000016c = uVar32;
          if (*(long *)(unaff_x22 + 0x18) == 0) goto LAB_06352d60;
          uVar13 = *(undefined8 *)(lVar28 + 0x10);
          uVar25 = *(undefined8 *)(lVar28 + 0x18);
          lVar28 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
          if (lVar28 == 0) goto LAB_06352d60;
          if ((DAT_086de93e & 1) == 0) {
            FUN_0335b6c8(&DAT_083eb4b0,1);
            DataMemoryBarrier(2,3);
            DAT_086de93e = 1;
          }
          if (*(long *)(lVar28 + 0x18) == 0) {
            uVar27 = 0;
          }
          else {
            uVar27 = *(undefined4 *)(*(long *)(lVar28 + 0x18) + 0x30);
          }
          uStack0000000000000094 = uStack0000000000000168;
          uStack0000000000000098 = uStack000000000000016c;
          uStack000000000000009c = 0;
          uStack0000000000000090 = unaff_s8;
          in_stack_000000a0 = uVar2;
          in_stack_000000a8 = uVar14;
          in_stack_000000b0 = uVar3;
          in_stack_000000b8 = uVar15;
          in_stack_000000c0 = uVar4;
          in_stack_000000c8 = uVar16;
          in_stack_000000d0 = uVar5;
          in_stack_000000d8 = uVar17;
          in_stack_000000e0 = uVar6;
          in_stack_000000e8 = uVar18;
          in_stack_000000f0 = uVar7;
          in_stack_000000f8 = uVar19;
          in_stack_00000100 = uVar8;
          in_stack_00000108 = uVar20;
          in_stack_00000110 = uVar9;
          in_stack_00000118 = uVar21;
          in_stack_00000120 = uVar10;
          in_stack_00000128 = uVar22;
          in_stack_00000130 = uVar11;
          in_stack_00000138 = uVar23;
          in_stack_00000140 = uVar12;
          in_stack_00000148 = uVar24;
          in_stack_00000150 = uVar13;
          in_stack_00000158 = uVar25;
          auVar33 = FUN_04004310(&stack0x00000090,uVar27,0x40,auVar33._0_8_,auVar33._8_8_,
                                 DAT_0840efb8);
          if ((*(long *)(unaff_x22 + 0x18) == 0) ||
             (lVar28 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0), lVar28 == 0)) goto LAB_06352d60;
          iVar26 = *(int *)(lVar28 + 0xe0);
          uVar32 = iVar26 + 2;
          if (-1 < iVar26 + 1) {
            uVar32 = iVar26 + 1;
          }
          *(uint *)(lVar28 + 0xe0) = (iVar26 + 1) - (uVar32 & 0xfffffffe);
          uVar32 = uStack000000000000016c;
        }
        uVar32 = uVar32 - 1;
      } while (uVar32 != 0xffffffff);
    }
    return auVar33;
  }
LAB_06352d60:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


