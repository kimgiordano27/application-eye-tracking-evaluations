/*
FUNCTION_NAME: OVRPlugin$$GetNodeAngularAcceleration
ENTRY_POINT: 05745a58
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


void OVRPlugin__GetNodeAngularAcceleration(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 in_w8;
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
  undefined8 uStack0000000000000050;
  
  *(undefined8 *)(unaff_x19 + 0xe) = 0;
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
                    /* try { // try from 05745a60 to 05845a63 has its CatchHandler @ 05745b5c */
  *unaff_x19 = in_w8;
                    /* try { // try from 05745a70 to 05845a7b has its CatchHandler @ 05745b6c */
  uStack0000000000000050 = param_1;
  uVar3 = FUN_04a8bdcc(&stack0x00000050,*(undefined8 *)PTR_DAT_06d3b5e8);
  if ((uVar3 & 1) == 0) {
    uVar9 = *(undefined8 *)(unaff_x19 + 8);
    uVar4 = thunk_FUN_02f239f0(PTR_DAT_06d590b0);
    uVar4 = FUN_05695e04(uVar9,uVar4,0);
                    /* try { // try from 05745a9c to 05845aa3 has its CatchHandler @ 05745b5c */
    uVar9 = thunk_FUN_02f239f0(PTR_DAT_06d59270);
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar4,uVar9);
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05745bb4 with catch @ 05745be0
                       catch(type#2 @ 00000000) { ... } // from try @ 05745bd8 with catch @ 05745be0
                        */
                    /* try { // try from 05745be4 to 05845c33 has its CatchHandler @ 05745be4
                       catch() { ... } // from try @ 05745be4 with catch @ 05745be4
                       catch() { ... } // from try @ 05745c7c with catch @ 05745be4
                       catch() { ... } // from try @ 05745ccc with catch @ 05745be4
                       catch() { ... } // from try @ 05745d30 with catch @ 05745be4 */
  uVar4 = thunk_FUN_02ef170c(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)PTR_DAT_06d55150);
  plVar5 = *(long **)(unaff_x19 + 8);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar2 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
  switch(uVar2) {
  case 1:
    lVar6 = FUN_05733174(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),
                         *(undefined8 *)(unaff_x19 + 0xc));
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    _in_stack_00000040 = FUN_0469dad0(lVar6,0,*(undefined8 *)PTR_DAT_06d59250);
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
                    /* try { // try from 05745b50 to 05845b53 has its CatchHandler @ 05745b68 */
                    /* try { // try from 05745b54 to 05845b57 has its CatchHandler @ 05745b58 */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 05745b54 with catch @ 05745b58
                       try { // try from 05745b58 to 05845b87 has its CatchHandler @ 05745a08 */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 05745a60 with catch @ 05745b5c
                       catch(type#1 @ 069384f8) { ... } // from try @ 05745a9c with catch @ 05745b5c
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 05745abc with catch @ 05745b60
                        */
    lVar6 = FUN_04a8c3bc(&stack0x00000040,*(undefined8 *)PTR_DAT_06d59218);
    break;
  case 2:
    lVar6 = FUN_0572830c(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),
                         *(undefined8 *)(unaff_x19 + 0xc),0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    _in_stack_00000030 = FUN_0469dad0(lVar6,0,*(undefined8 *)PTR_DAT_06d59260);
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
    lVar6 = FUN_04a8c3bc(&stack0x00000030,*(undefined8 *)PTR_DAT_06d59210);
    break;
  case 3:
    lVar6 = FUN_05729f78(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),
                         *(undefined8 *)(unaff_x19 + 0xc));
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    _in_stack_00000020 = FUN_0469dad0(lVar6,0,*(undefined8 *)PTR_DAT_06d59258);
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
    lVar6 = FUN_04a8c3bc(&stack0x00000020,*(undefined8 *)PTR_DAT_06d59220);
    break;
  case 4:
    lVar6 = FUN_05737d18(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),
                         *(undefined8 *)(unaff_x19 + 0xc));
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    _in_stack_00000010 = FUN_0469dad0(lVar6,0,*(undefined8 *)PTR_DAT_06d59268);
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
    lVar6 = FUN_04a8c3bc(&stack0x00000010,*(undefined8 *)PTR_DAT_06d59228);
    break;
  case 5:
    plVar5 = *(long **)(unaff_x19 + 8);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
    uVar9 = 0;
    if (plVar5 != (long *)0x0) {
      uVar9 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    }
    lVar6 = FUN_05747b08(uVar9,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_0572c2dc(lVar6,uVar4,*(undefined8 *)(unaff_x19 + 10));
    break;
  default:
    uVar4 = *(undefined8 *)(unaff_x19 + 8);
    lVar6 = thunk_FUN_02f239f0(PTR_DAT_06d06338);
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar9 = FUN_055b5920(0);
    plVar5 = *(long **)(unaff_x19 + 8);
    if (plVar5 != (long *)0x0) {
      uStack000000000000000c =
           (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
      uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d55320);
      uVar7 = thunk_FUN_02ef1438(uVar7,&stack0x0000000c);
      uVar8 = thunk_FUN_02f239f0(PTR_DAT_06d590c0);
      uVar9 = FUN_056f1630(uVar8,uVar9,uVar7,0);
      uVar4 = FUN_05695e04(uVar4,uVar9,0);
      uVar9 = thunk_FUN_02f239f0(PTR_DAT_06d59270);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar4,uVar9);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  case 7:
  case 8:
  case 9:
  case 10:
  case 0x10:
  case 0x11:
    plVar5 = *(long **)(unaff_x19 + 8);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar9 = (**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
    lVar6 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d37b60);
    FUN_057497d8(lVar6,uVar9,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_0572c2dc(lVar6,uVar4,*(undefined8 *)(unaff_x19 + 10));
    break;
  case 0xb:
    lVar6 = FUN_057478d0(0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_0572c2dc(lVar6,uVar4,*(undefined8 *)(unaff_x19 + 10));
    break;
  case 0xc:
    lVar6 = FUN_05747a00(0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_0572c2dc(lVar6,uVar4,*(undefined8 *)(unaff_x19 + 10));
  }
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 05745b50 with catch @ 05745b68
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 05745a70 with catch @ 05745b6c
                        */
  *unaff_x19 = 0xfffffffe;
  puVar1 = PTR_DAT_06d591e8;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
                    /* try { // try from 05745b88 to 05845b8b has its CatchHandler @ 05745b9c */
  FUN_043b2468(unaff_x19 + 2,lVar6,*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 05745b88 with catch @ 05745b9c */
  return;
}


