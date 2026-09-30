/*
FUNCTION_NAME: OVRManager$$get_profile
ENTRY_POINT: 0572c6f0
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_profile(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined4 in_w8;
  undefined4 *unaff_x19;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack000000000000002c;
  
  *unaff_x19 = in_w8;
                    /* try { // try from 0572c700 to 0582c713 has its CatchHandler @ 0572caa0 */
  uVar2 = FUN_04a8bdcc(&stack0x00000010,*(undefined8 *)PTR_DAT_06d3b5e8);
  if ((uVar2 & 1) == 0) {
    uVar9 = *(undefined8 *)(unaff_x19 + 8);
    uVar3 = thunk_FUN_02f239f0(PTR_DAT_06d587f8);
    uVar3 = FUN_05695e04(uVar9,uVar3,0);
                    /* try { // try from 0572c72c to 0582c737 has its CatchHandler @ 0572caac */
    uVar9 = thunk_FUN_02f239f0(PTR_DAT_06d58838);
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar3,uVar9);
  }
  if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar4 = FUN_056953b4(*(long *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
                    /* try { // try from 0572c784 to 0582c78b has its CatchHandler @ 0572cb80 */
                    /* try { // try from 0572c78c to 0582c78f has its CatchHandler @ 0572cb7c */
  _in_stack_00000010 = FUN_04697d3c(lVar4,0,*(undefined8 *)PTR_DAT_06d3b5f8);
                    /* try { // try from 0572c790 to 0582c793 has its CatchHandler @ 0572cb78 */
                    /* try { // try from 0572c794 to 0582c797 has its CatchHandler @ 0572cb74 */
                    /* try { // try from 0572c798 to 0582c79f has its CatchHandler @ 0572cb88 */
                    /* try { // try from 0572c7a0 to 0582c7ab has its CatchHandler @ 0572cb84 */
  uVar2 = FUN_04a8bd80(&stack0x00000010,*(undefined8 *)PTR_DAT_06d3b5f0);
                    /* try { // try from 0572c7ac to 0582c7b7 has its CatchHandler @ 0572cb88 */
  if ((uVar2 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000010;
    thunk_FUN_02f411dc(unaff_x19 + 0x10,0);
    if (*(int *)(*(long *)PTR_DAT_06d58758 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_034f9d0c(unaff_x19 + 2,&stack0x00000010);
  }
  else {
                    /* try { // try from 0572c7b8 to 0582c7cb has its CatchHandler @ 0572cb5c */
    FUN_04a8bdcc(&stack0x00000010,*(undefined8 *)PTR_DAT_06d3b5e8);
    plVar5 = *(long **)(unaff_x19 + 8);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    iVar1 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
    plVar5 = *(long **)(unaff_x19 + 8);
                    /* try { // try from 0572c7e0 to 0582c7eb has its CatchHandler @ 0572ca94 */
    if (iVar1 != 3) {
      lVar4 = thunk_FUN_02f239f0(PTR_DAT_06d06338);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar3 = FUN_055b5920(0);
      plVar7 = *(long **)(unaff_x19 + 8);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uStack000000000000002c =
           (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
      uVar9 = thunk_FUN_02f239f0(PTR_DAT_06d55320);
      uVar9 = thunk_FUN_02ef1438(uVar9,&stack0x0000002c);
      uVar8 = thunk_FUN_02f239f0(PTR_DAT_06d587f0);
      uVar3 = FUN_056f1630(uVar8,uVar3,uVar9,0);
      uVar3 = FUN_05695e04(plVar5,uVar3,0);
      uVar9 = thunk_FUN_02f239f0(PTR_DAT_06d58838);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar3,uVar9);
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d58778);
    if (plVar5 != (long *)0x0) {
      if (*plVar5 != *(long *)PTR_DAT_06d02350) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(plVar5);
      }
    }
    FUN_0572b548(lVar4,plVar5);
    plVar5 = (long *)(unaff_x19 + 0xe);
    *plVar5 = lVar4;
    thunk_FUN_02f411dc(plVar5,lVar4);
    lVar4 = *(long *)(unaff_x19 + 0xe);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar9 = *(undefined8 *)(unaff_x19 + 0xc);
    uVar3 = thunk_FUN_02ef170c(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)PTR_DAT_06d55150);
    FUN_0572c2dc(lVar4,uVar3,uVar9);
    if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar4 = FUN_0572cc94(*plVar5,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0xc),
                         *(undefined8 *)(unaff_x19 + 10));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    auVar10 = Oculus_Platform_CAPI__ovr_Achievements_GetDefinitionsByName(lVar4,0,0);
    uVar2 = FUN_0551f17c();
    if ((uVar2 & 1) == 0) {
      *unaff_x19 = 2;
      *(undefined1 (*) [16])(unaff_x19 + 0x14) = auVar10;
      thunk_FUN_02f411dc(unaff_x19 + 0x14,0);
      if (*(int *)(*(long *)PTR_DAT_06d58758 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_03500ad0(unaff_x19 + 2);
    }
    else {
      FUN_0551f198();
      puVar6 = (undefined8 *)(unaff_x19 + 0xe);
      uVar3 = *puVar6;
      *unaff_x19 = 0xfffffffe;
      *puVar6 = 0;
      thunk_FUN_02f411dc(puVar6,0);
      if (*(int *)(*(long *)PTR_DAT_06d58758 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_043b2468(unaff_x19 + 2,uVar3,*(undefined8 *)PTR_DAT_06d58830);
    }
  }
  return;
}


