/*
FUNCTION_NAME: OVRPlugin$$GetTrackingOriginType
ENTRY_POINT: 05bc4740
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetTrackingOriginType(void)

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
  undefined8 *puVar12;
  undefined1 in_w8;
  long lVar13;
  int *piVar14;
  long unaff_x19;
  long *plVar15;
  int *unaff_x20;
  long *unaff_x21;
  undefined8 uVar16;
  long unaff_x23;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined1 in_stack_00000060 [16];
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined8 in_stack_00000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  undefined4 uStack00000000000000d4;
  undefined4 uStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000118;
  
  *(undefined1 *)(unaff_x23 + 0xadc) = in_w8;
  uStack00000000000000c0 = 0;
  uStack00000000000000c8 = 0;
  uStack00000000000000cc = 0;
  uStack00000000000000d8 = 0;
  uStack00000000000000d0 = 0;
  uStack00000000000000d4 = 0;
  uStack0000000000000088 = 0;
  uStack0000000000000080 = 0;
  uStack0000000000000098 = 0;
  uStack0000000000000090 = 0;
  uStack00000000000000a8 = 0;
  uStack00000000000000a0 = 0;
  uStack00000000000000b8 = 0;
  uStack00000000000000b0 = 0;
  uStack00000000000000e8 = *(undefined8 *)(unaff_x20 + 2);
  uStack00000000000000e0 = *(undefined8 *)unaff_x20;
                    /* try { // try from 05bc4768 to 05cc476b has its CatchHandler @ 05bc47d0 */
  uStack00000000000000f8 = *(undefined8 *)(unaff_x20 + 6);
  uStack00000000000000f0 = *(undefined8 *)(unaff_x20 + 4);
  uStack0000000000000108 = *(undefined8 *)(unaff_x20 + 10);
  uStack0000000000000100 = *(undefined8 *)(unaff_x20 + 8);
  uStack0000000000000118 = *(undefined8 *)(unaff_x20 + 0xe);
  uStack0000000000000110 = *(undefined8 *)(unaff_x20 + 0xc);
                    /* try { // try from 05bc4778 to 05cc477f has its CatchHandler @ 05bc47d8 */
  FUN_047aac18();
  uVar16 = *(undefined8 *)(unaff_x19 + 0xd0);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar11 = FUN_069d8404(uVar16,0,0);
  if ((uVar11 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0xd0) == 0) {
LAB_05bc4918:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(char *)(*(long *)(unaff_x19 + 0xd0) + 0xd8) != '\0') {
      iVar1 = *unaff_x20;
      iVar9 = FUN_03f81da8();
      if ((iVar1 != iVar9) && ((unaff_x20[4] & 0xfffffffeU) == 2)) {
        FUN_05bc2b74(&stack0x00000060 + 4);
        *(ulong *)(unaff_x19 + 0x1c0) = CONCAT44(uStack0000000000000070,in_stack_00000060._12_4_);
        *(undefined8 *)(unaff_x19 + 0x1b8) = in_stack_00000060._4_8_;
        *(undefined8 *)(unaff_x19 + 0x1cc) = in_stack_00000078;
        *(ulong *)(unaff_x19 + 0x1c4) = CONCAT44(uStack0000000000000074,uStack0000000000000070);
        FUN_05bc491c();
        uVar16 = FUN_05bc20e0();
        *(undefined8 *)(unaff_x19 + 0x198) = uVar16;
        FUN_05bc21c8(&stack0x000000c0);
        uVar10 = FUN_03f81da8();
        uStack0000000000000054 = CONCAT44(uStack00000000000000d8,uStack00000000000000d4);
        uStack0000000000000048 = uStack00000000000000c8;
        in_stack_00000040 = uStack00000000000000c0;
        uStack000000000000004c = uStack00000000000000cc;
        uStack0000000000000050 = uStack00000000000000d0;
        FUN_05b4e668(&stack0x00000080,uVar10,4,&stack0x00000040,*(undefined8 *)(unaff_x19 + 0x108),0
                    );
        uVar8 = uStack00000000000000b8;
        uVar7 = uStack00000000000000b0;
        uVar6 = uStack00000000000000a8;
        uVar5 = uStack00000000000000a0;
        uVar4 = uStack0000000000000098;
        uVar3 = uStack0000000000000090;
        uVar2 = uStack0000000000000088;
        uVar16 = uStack0000000000000080;
        if ((*(long *)(unaff_x19 + 0xd0) == 0) ||
           (plVar15 = *(long **)(*(long *)(unaff_x19 + 0xd0) + 0xb8), plVar15 == (long *)0x0))
        goto LAB_05bc4918;
        lVar13 = *plVar15;
        uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar11 != 0) {
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_070f4570) {
              puVar12 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_05bc48dc;
            }
            uVar11 = uVar11 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar11 != 0);
        }
        puVar12 = (undefined8 *)FUN_031c0d08(plVar15,*(long *)PTR_DAT_070f4570,0);
LAB_05bc48dc:
        uStack00000000000000e8 = uVar2;
        uStack00000000000000e0 = uVar16;
        uStack00000000000000f8 = uVar4;
        uStack00000000000000f0 = uVar3;
        uStack0000000000000108 = uVar6;
        uStack0000000000000100 = uVar5;
        uStack0000000000000118 = uVar8;
        uStack0000000000000110 = uVar7;
        (*(code *)*puVar12)(plVar15,&stack0x000000e0,puVar12[1]);
      }
    }
  }
  return;
}


