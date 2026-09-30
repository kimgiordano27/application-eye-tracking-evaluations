/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$Setup
ENTRY_POINT: 0635aed4
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


void Meta_XR_ImmersiveDebugger_UserInterface_Console__Setup(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long unaff_x19;
  undefined8 uVar23;
  int unaff_w20;
  long unaff_x21;
  undefined8 uVar24;
  undefined1 unaff_w22;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
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
  
                    /* try { // try from 0635aed8 to 0645aedb has its CatchHandler @ 0635b014 */
                    /* try { // try from 0635aedc to 0645af4b has its CatchHandler @ 0635ac0c */
  FUN_0335b6c8(&DAT_083eb8d0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0840f138,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0x8d8) = unaff_w22;
  if (*(long *)(unaff_x19 + 0x90) != 0) {
    iVar14 = FUN_0638b2d4(*(long *)(unaff_x19 + 0x90),0);
    if (iVar14 < 1) {
      return;
    }
    lVar15 = *(long *)(unaff_x19 + 0x10);
    if (((lVar15 != 0) && (*(long *)(lVar15 + 0x20) != 0)) &&
       (lVar19 = *(long *)(unaff_x19 + 0x20), lVar19 != 0)) {
      lVar21 = *(long *)(unaff_x19 + 0x98);
      puVar1 = (undefined8 *)(lVar19 + 0x18);
      puVar10 = (undefined8 *)(lVar19 + 0x10);
      if (unaff_w20 != 0) {
        puVar1 = (undefined8 *)(lVar19 + 0x28);
        puVar10 = (undefined8 *)(lVar19 + 0x20);
      }
                    /* try { // try from 0635af4c to 0645af53 has its CatchHandler @ 0635b024 */
      if (lVar21 != 0) {
        lVar19 = *(long *)(unaff_x19 + 0x40);
        puVar2 = (undefined8 *)(lVar21 + 0x18);
        puVar11 = (undefined8 *)(lVar21 + 0x10);
        if (unaff_w20 != 0) {
          puVar2 = (undefined8 *)(lVar21 + 0x28);
          puVar11 = (undefined8 *)(lVar21 + 0x20);
        }
                    /* try { // try from 0635af7c to 0645af87 has its CatchHandler @ 0635b044 */
        if ((lVar19 != 0) && (lVar21 = *(long *)(unaff_x19 + 0xb0), lVar21 != 0)) {
          lVar22 = *(long *)(unaff_x19 + 0xb8);
          puVar3 = (undefined8 *)(lVar21 + 0x18);
          puVar12 = (undefined8 *)(lVar21 + 0x10);
          if (unaff_w20 != 0) {
            puVar3 = (undefined8 *)(lVar21 + 0x28);
            puVar12 = (undefined8 *)(lVar21 + 0x20);
          }
                    /* try { // try from 0635af9c to 0645afa3 has its CatchHandler @ 0635b030 */
          if (lVar22 != 0) {
            lVar21 = *(long *)(unaff_x19 + 0x58);
                    /* try { // try from 0635afb8 to 0645afbf has its CatchHandler @ 0635b034 */
            puVar4 = (undefined8 *)(lVar22 + 0x18);
            puVar13 = (undefined8 *)(lVar22 + 0x10);
            if (unaff_w20 != 0) {
              puVar4 = (undefined8 *)(lVar22 + 0x28);
              puVar13 = (undefined8 *)(lVar22 + 0x20);
            }
            if (lVar21 != 0) {
              uVar9 = *(undefined4 *)(*(long *)(lVar15 + 0x20) + 0x28);
              uVar16 = *puVar1;
              uVar26 = *puVar10;
              uVar20 = *puVar2;
              uVar27 = *puVar11;
                    /* try { // try from 0635afdc to 0645afe3 has its CatchHandler @ 0635b02c */
              uVar17 = *puVar3;
              uVar5 = *(undefined8 *)(lVar19 + 0x10);
              uVar7 = *(undefined8 *)(lVar19 + 0x18);
              uVar24 = *puVar12;
              uVar25 = *puVar13;
                    /* try { // try from 0635aff4 to 0645aff7 has its CatchHandler @ 0635b048 */
              uVar18 = *puVar4;
                    /* try { // try from 0635aff8 to 0645affb has its CatchHandler @ 0635b040 */
              uVar6 = *(undefined8 *)(lVar21 + 0x10);
              uVar8 = *(undefined8 *)(lVar21 + 0x18);
                    /* try { // try from 0635affc to 0645afff has its CatchHandler @ 0635b03c */
                    /* try { // try from 0635b000 to 0645b003 has its CatchHandler @ 0635b038 */
                    /* try { // try from 0635b004 to 0645b007 has its CatchHandler @ 0635b028 */
              lVar15 = FUN_06317a64(lVar15,0);
                    /* try { // try from 0635b008 to 0645b00b has its CatchHandler @ 0635b020 */
                    /* try { // try from 0635b00c to 0645b017 has its CatchHandler @ 0635ac0c */
                    /* catch() { ... } // from try @ 0635aed8 with catch @ 0635b014 */
                    /* try { // try from 0635b018 to 0645b01f has its CatchHandler @ 0635b0f0 */
              if ((*(long *)(unaff_x19 + 0x90) != 0) && (*(long *)(unaff_x19 + 0x10) != 0)) {
                uVar23 = *(undefined8 *)(*(long *)(unaff_x19 + 0x90) + 0x10);
                    /* catch() { ... } // from try @ 0635b008 with catch @ 0635b020
                       try { // try from 0635b020 to 0645b057 has its CatchHandler @ 0635ac0c */
                    /* catch() { ... } // from try @ 0635af4c with catch @ 0635b024 */
                lVar19 = FUN_06317a64(*(long *)(unaff_x19 + 0x10),0);
                    /* catch() { ... } // from try @ 0635b004 with catch @ 0635b028 */
                if (lVar19 != 0) {
                    /* catch() { ... } // from try @ 0635afdc with catch @ 0635b02c */
                    /* catch() { ... } // from try @ 0635af9c with catch @ 0635b030 */
                    /* catch() { ... } // from try @ 0635afb8 with catch @ 0635b034 */
                    /* catch() { ... } // from try @ 0635b000 with catch @ 0635b038 */
                    /* catch() { ... } // from try @ 0635affc with catch @ 0635b03c */
                    /* catch() { ... } // from try @ 0635aff8 with catch @ 0635b040 */
                    /* catch() { ... } // from try @ 0635af7c with catch @ 0635b044 */
                    /* catch() { ... } // from try @ 0635aff4 with catch @ 0635b048 */
                    /* try { // try from 0635b058 to 0645b05b has its CatchHandler @ 0635b0e0 */
                  uStack000000000000002c = 0;
                  uStack0000000000000028 = uVar9;
                  in_stack_00000030 = uVar26;
                  in_stack_00000038 = uVar16;
                  in_stack_00000040 = uVar27;
                  in_stack_00000048 = uVar20;
                  in_stack_00000050 = uVar5;
                  in_stack_00000058 = uVar7;
                  in_stack_00000060 = uVar24;
                  in_stack_00000068 = uVar17;
                  in_stack_00000070 = uVar25;
                  in_stack_00000078 = uVar18;
                  in_stack_00000080 = uVar6;
                  in_stack_00000088 = uVar8;
                    /* try { // try from 0635b05c to 0645b0e7 has its CatchHandler @ 0635ac0c */
                  auVar28 = FUN_04006640(&stack0x00000028,uVar23,*(undefined8 *)(lVar19 + 0xd0),
                                         *(undefined8 *)(lVar19 + 0xd8),DAT_0840f138);
                  if (lVar15 != 0) {
                    *(undefined1 (*) [16])(lVar15 + 0xd0) = auVar28;
                    return;
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


