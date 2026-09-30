/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$set_BackgroundStyle
ENTRY_POINT: 0635acc0
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__set_BackgroundStyle(void)

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
  undefined4 uVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long unaff_x19;
  long unaff_x20;
  undefined1 unaff_w21;
  undefined1 auVar27 [16];
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
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
  
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb850,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0840ef28,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x8d7) = unaff_w21;
  if (*(long *)(unaff_x19 + 0x90) != 0) {
    iVar14 = FUN_0638b2d4(*(long *)(unaff_x19 + 0x90),0);
    if (iVar14 < 1) {
      return;
    }
    lVar15 = *(long *)(unaff_x19 + 0x98);
    if ((((((lVar15 != 0) && (lVar19 = *(long *)(unaff_x19 + 0x20), lVar19 != 0)) &&
          (lVar21 = *(long *)(unaff_x19 + 0x28), lVar21 != 0)) &&
         ((lVar22 = *(long *)(unaff_x19 + 0x30), lVar22 != 0 &&
          (lVar23 = *(long *)(unaff_x19 + 0x38), lVar23 != 0)))) &&
        ((lVar24 = *(long *)(unaff_x19 + 0x40), lVar24 != 0 &&
         ((lVar25 = *(long *)(unaff_x19 + 0xb0), lVar25 != 0 &&
          (lVar26 = *(long *)(unaff_x19 + 0xb8), lVar26 != 0)))))) &&
       (*(long *)(unaff_x19 + 0x10) != 0)) {
      uVar1 = *(undefined8 *)(lVar15 + 0x10);
      uVar7 = *(undefined8 *)(lVar15 + 0x18);
      uVar2 = *(undefined8 *)(lVar23 + 0x10);
      uVar8 = *(undefined8 *)(lVar23 + 0x18);
      uVar3 = *(undefined8 *)(lVar24 + 0x10);
      uVar9 = *(undefined8 *)(lVar24 + 0x18);
      uVar4 = *(undefined8 *)(lVar25 + 0x10);
      uVar10 = *(undefined8 *)(lVar25 + 0x18);
      uVar16 = *(undefined8 *)(lVar19 + 0x10);
      uVar5 = *(undefined8 *)(lVar26 + 0x10);
      uVar11 = *(undefined8 *)(lVar26 + 0x18);
      uVar17 = *(undefined8 *)(lVar19 + 0x18);
      uVar20 = *(undefined8 *)(lVar21 + 0x10);
      uVar18 = *(undefined8 *)(lVar21 + 0x18);
      uVar6 = *(undefined8 *)(lVar22 + 0x10);
      uVar12 = *(undefined8 *)(lVar22 + 0x18);
      lVar15 = FUN_06317a64(*(long *)(unaff_x19 + 0x10),0);
      if ((*(long *)(unaff_x19 + 0x98) != 0) && (*(long *)(unaff_x19 + 0x10) != 0)) {
        uVar13 = *(undefined4 *)(*(long *)(unaff_x19 + 0x98) + 0x30);
        lVar19 = FUN_06317a64(*(long *)(unaff_x19 + 0x10),0);
                    /* try { // try from 0635adec to 0645adf3 has its CatchHandler @ 0635aea4 */
        if ((lVar19 != 0) &&
           (in_stack_00000040 = uVar1, in_stack_00000048 = uVar7, in_stack_00000050 = uVar16,
           in_stack_00000058 = uVar17, in_stack_00000060 = uVar20, in_stack_00000068 = uVar18,
           in_stack_00000070 = uVar6, in_stack_00000078 = uVar12, in_stack_00000080 = uVar2,
           in_stack_00000088 = uVar8, in_stack_00000090 = uVar3, in_stack_00000098 = uVar9,
           in_stack_000000a0 = uVar4, in_stack_000000a8 = uVar10, in_stack_000000b0 = uVar5,
           in_stack_000000b8 = uVar11,
           auVar27 = FUN_040038f0(&stack0x00000040,uVar13,0x10,*(undefined8 *)(lVar19 + 0xd0),
                                  *(undefined8 *)(lVar19 + 0xd8),DAT_0840ef28), lVar15 != 0)) {
          *(undefined1 (*) [16])(lVar15 + 0xd0) = auVar27;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


