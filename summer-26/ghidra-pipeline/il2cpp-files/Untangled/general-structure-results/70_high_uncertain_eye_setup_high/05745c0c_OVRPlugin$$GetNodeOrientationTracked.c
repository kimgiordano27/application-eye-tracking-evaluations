/*
FUNCTION_NAME: OVRPlugin$$GetNodeOrientationTracked
ENTRY_POINT: 05745c0c
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodeOrientationTracked(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *in_x9;
  undefined4 *unaff_x19;
  undefined8 uVar9;
  long *unaff_x23;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  uVar2 = (*in_x9)();
  switch(uVar2) {
  case 1:
    lVar4 = FUN_05733174(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),
                         *(undefined8 *)(unaff_x19 + 0xc));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    _in_stack_00000040 = FUN_0469dad0(lVar4,0,*(undefined8 *)PTR_DAT_06d59250);
    uVar3 = FUN_04a8c370(&stack0x00000040,*(undefined8 *)PTR_DAT_06d59230);
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000040;
      thunk_FUN_02f411dc(unaff_x19 + 0x12,0);
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_034fc284(unaff_x19 + 2,&stack0x00000040);
      return;
    }
    lVar4 = FUN_04a8c3bc(&stack0x00000040,*(undefined8 *)PTR_DAT_06d59218);
    break;
  case 2:
    lVar4 = FUN_0572830c(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),
                         *(undefined8 *)(unaff_x19 + 0xc),0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    _in_stack_00000030 = FUN_0469dad0(lVar4,0,*(undefined8 *)PTR_DAT_06d59260);
    uVar3 = FUN_04a8c370(&stack0x00000030,*(undefined8 *)PTR_DAT_06d59238);
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 2;
      *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000030;
      thunk_FUN_02f411dc(unaff_x19 + 0x16,0);
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_034fc284(unaff_x19 + 2,&stack0x00000030);
      return;
    }
    lVar4 = FUN_04a8c3bc(&stack0x00000030,*(undefined8 *)PTR_DAT_06d59210);
    break;
  case 3:
    lVar4 = FUN_05729f78(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),
                         *(undefined8 *)(unaff_x19 + 0xc));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    _in_stack_00000020 = FUN_0469dad0(lVar4,0,*(undefined8 *)PTR_DAT_06d59258);
    uVar3 = FUN_04a8c370(&stack0x00000020,*(undefined8 *)PTR_DAT_06d59240);
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 3;
      *(undefined1 (*) [16])(unaff_x19 + 0x1a) = _in_stack_00000020;
      thunk_FUN_02f411dc(unaff_x19 + 0x1a,0);
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_034fc284(unaff_x19 + 2,&stack0x00000020);
      return;
    }
    lVar4 = FUN_04a8c3bc(&stack0x00000020,*(undefined8 *)PTR_DAT_06d59220);
    break;
  case 4:
    lVar4 = FUN_05737d18(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),
                         *(undefined8 *)(unaff_x19 + 0xc));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    _in_stack_00000010 = FUN_0469dad0(lVar4,0,*(undefined8 *)PTR_DAT_06d59268);
    uVar3 = FUN_04a8c370(&stack0x00000010,*(undefined8 *)PTR_DAT_06d59248);
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 4;
      *(undefined1 (*) [16])(unaff_x19 + 0x1e) = _in_stack_00000010;
      thunk_FUN_02f411dc(unaff_x19 + 0x1e,0);
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_034fc284(unaff_x19 + 2,&stack0x00000010);
      return;
    }
    lVar4 = FUN_04a8c3bc(&stack0x00000010,*(undefined8 *)PTR_DAT_06d59228);
    break;
  case 5:
    plVar6 = *(long **)(unaff_x19 + 8);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x248))(plVar6,*(undefined8 *)(*plVar6 + 0x250));
    uVar9 = 0;
    if (plVar6 != (long *)0x0) {
      uVar9 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    }
    lVar4 = FUN_05747b08(uVar9,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_0572c2dc(lVar4);
    break;
  default:
    uVar9 = *(undefined8 *)(unaff_x19 + 8);
    lVar4 = thunk_FUN_02f239f0(PTR_DAT_06d06338);
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar5 = FUN_055b5920(0);
    plVar6 = *(long **)(unaff_x19 + 8);
    if (plVar6 != (long *)0x0) {
      uStack000000000000000c =
           (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
      uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d55320);
      uVar7 = thunk_FUN_02ef1438(uVar7,&stack0x0000000c);
      uVar8 = thunk_FUN_02f239f0(PTR_DAT_06d590c0);
      uVar5 = FUN_056f1630(uVar8,uVar5,uVar7,0);
      uVar9 = FUN_05695e04(uVar9,uVar5,0);
      uVar5 = thunk_FUN_02f239f0(PTR_DAT_06d59270);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar9,uVar5);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  case 7:
  case 8:
  case 9:
  case 10:
  case 0x10:
  case 0x11:
                    /* try { // try from 05745c34 to 05845c37 has its CatchHandler @ 05745ccc */
    plVar6 = *(long **)(unaff_x19 + 8);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
                    /* try { // try from 05745c44 to 05845c4f has its CatchHandler @ 05745cd4 */
    uVar9 = (**(code **)(*plVar6 + 0x248))(plVar6,*(undefined8 *)(*plVar6 + 0x250));
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d37b60);
                    /* try { // try from 05745c68 to 05845c6b has its CatchHandler @ 05745cd8 */
    FUN_057497d8(lVar4,uVar9,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_0572c2dc(lVar4);
    break;
  case 0xb:
    lVar4 = FUN_057478d0(0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_0572c2dc(lVar4);
    break;
  case 0xc:
    lVar4 = FUN_05747a00(0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_0572c2dc(lVar4);
  }
  *unaff_x19 = 0xfffffffe;
  puVar1 = PTR_DAT_06d591e8;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_043b2468(unaff_x19 + 2,lVar4,*(undefined8 *)puVar1);
  return;
}


