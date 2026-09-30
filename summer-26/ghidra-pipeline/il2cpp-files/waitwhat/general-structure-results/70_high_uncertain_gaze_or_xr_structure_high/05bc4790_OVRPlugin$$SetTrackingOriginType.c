/*
FUNCTION_NAME: OVRPlugin$$SetTrackingOriginType
ENTRY_POINT: 05bc4790
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__SetTrackingOriginType(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined4 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  int *piVar15;
  long unaff_x19;
  long *plVar16;
  int *unaff_x20;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined1 in_stack_00000060 [16];
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
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
  undefined4 in_stack_000000c8;
  undefined4 uStack00000000000000d0;
  undefined8 uStack00000000000000d4;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  
                    /* try { // try from 05bc4794 to 05cc479b has its CatchHandler @ 05bc47d4 */
  uVar11 = FUN_069d8404();
  if ((uVar11 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0xd0) == 0) {
LAB_05bc4918:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(char *)(*(long *)(unaff_x19 + 0xd0) + 0xd8) != '\0') {
      iVar1 = *unaff_x20;
                    /* try { // try from 05bc47c8 to 05cc47cb has its CatchHandler @ 05bc47cc */
      iVar9 = FUN_03f81da8();
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bc47c8 with catch @ 05bc47cc
                       try { // try from 05bc47cc to 05cc47ef has its CatchHandler @ 05bc4710 */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bc4768 with catch @ 05bc47d0
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bc4794 with catch @ 05bc47d4
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bc4778 with catch @ 05bc47d8
                        */
      if ((iVar1 != iVar9) && ((unaff_x20[4] & 0xfffffffeU) == 2)) {
        FUN_05bc2b74(&stack0x00000060 + 4);
                    /* try { // try from 05bc47f0 to 05cc4807 has its CatchHandler @ 05bc4898 */
        *(ulong *)(unaff_x19 + 0x1c0) = CONCAT44(uStack0000000000000070,in_stack_00000060._12_4_);
        *(undefined8 *)(unaff_x19 + 0x1b8) = in_stack_00000060._4_8_;
        *(undefined8 *)(unaff_x19 + 0x1cc) = in_stack_00000078;
        *(ulong *)(unaff_x19 + 0x1c4) = CONCAT44(uStack0000000000000074,uStack0000000000000070);
        FUN_05bc491c();
        uVar12 = FUN_05bc20e0();
        *(undefined8 *)(unaff_x19 + 0x198) = uVar12;
        FUN_05bc21c8(&stack0x000000c0);
        uVar10 = FUN_03f81da8();
        in_stack_00000048 = in_stack_000000c8;
        in_stack_00000040 = in_stack_000000c0;
        uStack0000000000000054 = uStack00000000000000d4;
        uStack0000000000000050 = uStack00000000000000d0;
        FUN_05b4e668(&stack0x00000080,uVar10,4,&stack0x00000040,*(undefined8 *)(unaff_x19 + 0x108),0
                    );
        uVar8 = in_stack_000000b8;
        uVar7 = in_stack_000000b0;
        uVar6 = in_stack_000000a8;
        uVar5 = in_stack_000000a0;
        uVar4 = in_stack_00000098;
        uVar3 = in_stack_00000090;
        uVar2 = in_stack_00000088;
        uVar12 = in_stack_00000080;
        if ((*(long *)(unaff_x19 + 0xd0) == 0) ||
           (plVar16 = *(long **)(*(long *)(unaff_x19 + 0xd0) + 0xb8), plVar16 == (long *)0x0))
        goto LAB_05bc4918;
        lVar14 = *plVar16;
        uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar11 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_070f4570) {
              puVar13 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_05bc48dc;
            }
            uVar11 = uVar11 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar11 != 0);
        }
        puVar13 = (undefined8 *)FUN_031c0d08(plVar16,*(long *)PTR_DAT_070f4570,0);
LAB_05bc48dc:
        in_stack_000000e8 = uVar2;
        in_stack_000000e0 = uVar12;
        in_stack_000000f8 = uVar4;
        in_stack_000000f0 = uVar3;
        in_stack_00000108 = uVar6;
        in_stack_00000100 = uVar5;
        in_stack_00000118 = uVar8;
        in_stack_00000110 = uVar7;
        (*(code *)*puVar13)(plVar16,&stack0x000000e0,puVar13[1]);
      }
    }
  }
  return;
}


