/*
FUNCTION_NAME: OVRPlugin$$IsWideMotionModeHandPosesEnabled
ENTRY_POINT: 0909f558
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_possible_biometrics_hits_2
*/


void OVRPlugin__IsWideMotionModeHandPosesEnabled(ulong param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  
  if ((param_1 & 1) != 0) {
LAB_0909f690:
    *(undefined1 *)(unaff_x19 + 0x179) = 1;
    return;
  }
  FUN_0909f6ac();
  FUN_0909d620();
  puVar1 = PTR_DAT_0ac76690;
                    /* try { // try from 0909f574 to 0919f577 has its CatchHandler @ 0909f810 */
  plVar8 = *(long **)(unaff_x19 + 0x198);
                    /* try { // try from 0909f578 to 0919f5bb has its CatchHandler @ 0909f398 */
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0ac76690) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_0909f5d4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
                    /* try { // try from 0909f5bc to 0919f5c7 has its CatchHandler @ 0909f7d8 */
    puVar4 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac76690,3);
LAB_0909f5d4:
                    /* try { // try from 0909f5d4 to 0919f5f3 has its CatchHandler @ 0909f7f8 */
    in_stack_00000028 = in_stack_00000008;
    in_stack_00000020 = in_stack_00000000;
    in_stack_00000030 = in_stack_00000010;
    (*(code *)*puVar4)(plVar8,&stack0x00000020,puVar4[1]);
    plVar8 = *(long **)(unaff_x19 + 0x198);
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
                    /* try { // try from 0909f604 to 0919f60f has its CatchHandler @ 0909f7d0 */
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
                    /* try { // try from 0909f61c to 0919f63b has its CatchHandler @ 0909f7d4 */
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
            goto LAB_0909f650;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_04980e68(plVar8,*(long *)puVar1,5);
LAB_0909f650:
      (*(code *)*puVar4)(plVar8,puVar4[1]);
      uVar2 = FUN_0909e1ec();
      uVar3 = FUN_0909e41c();
      uVar2 = (*(uint *)(unaff_x19 + 400) | uVar2) & (uVar3 ^ 0xffffffff);
      *(uint *)(unaff_x19 + 400) = uVar2;
      if (uVar3 == 0) {
        return;
      }
      if (uVar2 != 0) {
        return;
      }
      goto LAB_0909f690;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0909f6a8 to 0919f6ab has its CatchHandler @ 0909f7c0 */
  FUN_0494818c();
}


