/*
FUNCTION_NAME: OVRPlugin$$GetTrackingCalibratedOrigin
ENTRY_POINT: 05bc47f4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetTrackingCalibratedOrigin(undefined1 param_1 [16])

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long *plVar14;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
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
  
                    /* try { // try from 05bc4808 to 05cc4883 has its CatchHandler @ 05bc4710 */
  *(long *)(unaff_x19 + 0x1c0) = param_1._8_8_;
  *(long *)(unaff_x19 + 0x1b8) = param_1._0_8_;
  *(undefined8 *)(unaff_x19 + 0x1cc) = in_stack_00000078;
  *(undefined8 *)(unaff_x19 + 0x1c4) = in_stack_00000070;
  FUN_05bc491c();
  uVar9 = FUN_05bc20e0();
  *(undefined8 *)(unaff_x19 + 0x198) = uVar9;
  FUN_05bc21c8(&stack0x000000c0);
  uVar8 = FUN_03f81da8();
  in_stack_00000048 = in_stack_000000c8;
  in_stack_00000040 = in_stack_000000c0;
  uStack0000000000000054 = uStack00000000000000d4;
  in_stack_00000050 = uStack00000000000000d0;
  FUN_05b4e668(&stack0x00000080,uVar8,4,&stack0x00000040,*(undefined8 *)(unaff_x19 + 0x108),0);
  uVar7 = in_stack_000000b8;
  uVar6 = in_stack_000000b0;
  uVar5 = in_stack_000000a8;
  uVar4 = in_stack_000000a0;
  uVar3 = in_stack_00000098;
  uVar2 = in_stack_00000090;
  uVar1 = in_stack_00000088;
  uVar9 = in_stack_00000080;
  if ((*(long *)(unaff_x19 + 0xd0) == 0) ||
     (plVar14 = *(long **)(*(long *)(unaff_x19 + 0xd0) + 0xb8), plVar14 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar11 = *plVar14;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_070f4570) {
        puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_05bc48dc;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar10 = (undefined8 *)FUN_031c0d08(plVar14,*(long *)PTR_DAT_070f4570,0);
LAB_05bc48dc:
  in_stack_000000e8 = uVar1;
  in_stack_000000e0 = uVar9;
  in_stack_000000f8 = uVar3;
  in_stack_000000f0 = uVar2;
  in_stack_00000108 = uVar5;
  in_stack_00000100 = uVar4;
  in_stack_00000118 = uVar7;
  in_stack_00000110 = uVar6;
  (*(code *)*puVar10)(plVar14,&stack0x000000e0,puVar10[1]);
  return;
}


