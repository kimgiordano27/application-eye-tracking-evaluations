/*
FUNCTION_NAME: OVRPlugin$$PollEvent
ENTRY_POINT: 07c87520
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__PollEvent(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  lVar5 = *unaff_x20;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f4db18) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
        goto LAB_07c87578;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
                    /* try { // try from 07c87554 to 07d87557 has its CatchHandler @ 07c87558 */
    } while (uVar6 != 0);
  }
                    /* catch() { ... } // from try @ 07c87554 with catch @ 07c87558 */
                    /* catch() { ... } // from try @ 07c874f8 with catch @ 07c8755c */
  puVar3 = (undefined8 *)FUN_044822ac();
LAB_07c87578:
  plVar4 = (long *)(*(code *)*puVar3)();
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
                    /* try { // try from 07c87598 to 07d875bf has its CatchHandler @ 07c87a38 */
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f509e0) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_07c875e0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f509e0,0);
LAB_07c875e0:
    plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
    if (plVar4 != (long *)0x0) {
      lVar5 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* try { // try from 07c87604 to 07d8762b has its CatchHandler @ 07c87a34 */
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f4dba0) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_07c8764c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f4dba0,1);
LAB_07c8764c:
      puVar2 = PTR_DAT_09f4db90;
      puVar1 = PTR_DAT_09f4db88;
      (*(code *)*puVar3)(&stack0x00000008,plVar4,puVar3[1]);
                    /* try { // try from 07c8766c to 07d8767b has its CatchHandler @ 07c87a20 */
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      while (uVar6 = FUN_0767900c(&stack0x00000020,*(undefined8 *)puVar2), (uVar6 & 1) != 0) {
        FUN_07bae44c();
        FUN_07bae4c4();
      }
                    /* try { // try from 07c876c4 to 07d876db has its CatchHandler @ 07c87a30 */
      FUN_07679008(&stack0x00000020,*(undefined8 *)puVar1);
                    /* try { // try from 07c876dc to 07d876e3 has its CatchHandler @ 07c87a00 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


