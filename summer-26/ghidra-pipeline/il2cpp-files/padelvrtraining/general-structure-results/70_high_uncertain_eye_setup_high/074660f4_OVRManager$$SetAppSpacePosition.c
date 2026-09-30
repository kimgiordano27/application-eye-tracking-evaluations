/*
FUNCTION_NAME: OVRManager$$SetAppSpacePosition
ENTRY_POINT: 074660f4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetAppSpacePosition(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *plVar13;
  long unaff_x20;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  
  *(undefined8 *)(unaff_x19 + 0x198) = param_1;
  thunk_FUN_03d1023c(unaff_x19 + 0x198);
  FUN_074614e0(&stack0x00000140);
  uVar8 = FUN_0569a58c();
  in_stack_00000088 = in_stack_00000148;
  in_stack_00000080 = in_stack_00000140;
  *(undefined8 *)(unaff_x20 + 0x14) = *(undefined8 *)(unaff_x20 + 0xd4);
  *(undefined8 *)(unaff_x20 + 0xc) = *(undefined8 *)(unaff_x20 + 0xcc);
                    /* try { // try from 07466134 to 0756615b has its CatchHandler @ 07466474 */
  FUN_073e86ac(&stack0x00000100,uVar8,4,&stack0x00000080,*(undefined8 *)(unaff_x19 + 0x108),0);
  uVar7 = in_stack_00000130;
  uVar6 = in_stack_00000128;
  uVar5 = in_stack_00000120;
  uVar4 = in_stack_00000118;
  uVar3 = in_stack_00000110;
  uVar2 = in_stack_00000108;
  uVar1 = in_stack_00000100;
  if (*(long *)(unaff_x19 + 0xd0) != 0) {
    plVar13 = *(long **)(*(long *)(unaff_x19 + 0xd0) + 0xb8);
    if (plVar13 != (long *)0x0) {
                    /* try { // try from 07466170 to 0756617b has its CatchHandler @ 07466388 */
                    /* try { // try from 0746617c to 0756623b has its CatchHandler @ 07465f44 */
      lVar10 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_091fd710) {
            puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_074661dc;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_03d8f370(plVar13,*(long *)PTR_DAT_091fd710,0);
LAB_074661dc:
      in_stack_00000168 = uVar2;
      in_stack_00000160 = uVar1;
      in_stack_00000178 = uVar4;
      in_stack_00000170 = uVar3;
      in_stack_00000188 = uVar6;
      in_stack_00000180 = uVar5;
      in_stack_00000190 = uVar7;
      (*(code *)*puVar9)(plVar13,&stack0x00000160,puVar9[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


