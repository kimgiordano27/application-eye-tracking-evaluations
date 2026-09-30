/*
FUNCTION_NAME: OVRPlugin$$get_systemDisplayFrequenciesAvailable
ENTRY_POINT: 063882bc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_systemDisplayFrequenciesAvailable(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
                    /* catch() { ... } // from try @ 06388290 with catch @ 063882c0 */
                    /* try { // try from 063882d0 to 064882db has its CatchHandler @ 063882f0 */
  if ((DAT_0825c58e & 1) == 0) {
                    /* try { // try from 063882dc to 064882e7 has its CatchHandler @ 06387fec */
    FUN_0373b518(PTR_DAT_07db6348);
                    /* try { // try from 063882e8 to 064882ef has its CatchHandler @ 063882f0 */
    FUN_0373b518(PTR_DAT_07db6350);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 063882d0 with catch @ 063882f0
                       catch(type#2 @ 00000000) { ... } // from try @ 063882e8 with catch @ 063882f0
                        */
                    /* try { // try from 063882f4 to 06488437 has its CatchHandler @ 063882f4
                       catch() { ... } // from try @ 063882f4 with catch @ 063882f4
                       catch() { ... } // from try @ 063884c8 with catch @ 063882f4
                       catch() { ... } // from try @ 0638852c with catch @ 063882f4
                       catch() { ... } // from try @ 06388568 with catch @ 063882f4
                       catch() { ... } // from try @ 063885b0 with catch @ 063882f4 */
    FUN_0373b518(PTR_DAT_07db6358);
    FUN_0373b518(PTR_DAT_07db6360);
    FUN_0373b518(PTR_DAT_07db6368);
    FUN_0373b518(PTR_DAT_07db6370);
    FUN_0373b518(PTR_DAT_07db5f80);
    FUN_0373b518(PTR_DAT_07d99600);
    FUN_0373b518(PTR_DAT_07db6378);
    FUN_0373b518(PTR_DAT_07db6380);
    FUN_0373b518(PTR_DAT_07db6388);
    FUN_0373b518(PTR_DAT_07db6390);
    FUN_0373b518(PTR_DAT_07db6398);
    FUN_0373b518(PTR_DAT_07db63a0);
    FUN_0373b518(PTR_DAT_07db63a8);
    FUN_0373b518(PTR_DAT_07d99608);
    FUN_0373b518(PTR_DAT_07db63b0);
    FUN_0373b518(PTR_DAT_07db63b8);
    FUN_0373b518(PTR_DAT_07db63c0);
    FUN_0373b518(PTR_DAT_07db63c8);
    FUN_0373b518(PTR_DAT_07d99610);
    FUN_0373b518(PTR_DAT_07db63d0);
    FUN_0373b518(PTR_DAT_07db21d8);
    FUN_0373b518(PTR_DAT_07d96678);
    FUN_0373b518(PTR_DAT_07db63d8);
    FUN_0373b518(PTR_DAT_07db63e0);
    FUN_0373b518(PTR_DAT_07d99618);
    FUN_0373b518(PTR_DAT_07db63e8);
    FUN_0373b518(PTR_DAT_07db63f0);
                    /* try { // try from 06388438 to 0648843b has its CatchHandler @ 06388534 */
    FUN_0373b518(PTR_DAT_07dad968);
    DAT_0825c58e = 1;
  }
  puVar1 = PTR_DAT_07db5f80;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
                    /* try { // try from 06388478 to 0648848b has its CatchHandler @ 0638854c */
  switch(*param_1) {
  case 0:
    _in_stack_00000050 = *(undefined1 (*) [16])(param_1 + 0xe);
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 0xffffffff;
LAB_0638849c:
                    /* try { // try from 063884ac to 064884b7 has its CatchHandler @ 06388540 */
    uVar7 = FUN_058bcf98(&stack0x00000050,*(undefined8 *)PTR_DAT_07d99608);
    if ((uVar7 & 1) == 0) {
      uVar9 = *(undefined8 *)(param_1 + 8);
                    /* try { // try from 063884bc to 064884c7 has its CatchHandler @ 0638853c */
      uVar6 = thunk_FUN_037a15ac(PTR_DAT_07db6240);
                    /* try { // try from 063884c8 to 06488513 has its CatchHandler @ 063882f4 */
      uVar6 = FUN_062d9a10(uVar9,uVar6,0);
      uVar9 = thunk_FUN_037a15ac(PTR_DAT_07db63f8);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar6,uVar9);
    }
    break;
  case 1:
    _in_stack_00000040 = *(undefined1 (*) [16])(param_1 + 0x12);
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *param_1 = 0xffffffff;
    _in_stack_00000050 = ZEXT816(0);
    goto LAB_06388588;
  case 2:
    _in_stack_00000030 = *(undefined1 (*) [16])(param_1 + 0x16);
                    /* try { // try from 06388524 to 06488527 has its CatchHandler @ 06388538 */
                    /* try { // try from 06388528 to 0648852b has its CatchHandler @ 06388530 */
    *(undefined8 *)(param_1 + 0x16) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* try { // try from 0638852c to 06488563 has its CatchHandler @ 063882f4 */
    *param_1 = 0xffffffff;
    _in_stack_00000050 = ZEXT816(0);
    goto LAB_06388530;
  case 3:
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 06388518 with catch @ 06388548
                        */
    _in_stack_00000020 = *(undefined1 (*) [16])(param_1 + 0x1a);
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 06388478 with catch @ 0638854c
                        */
    *(undefined8 *)(param_1 + 0x1a) = 0;
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *param_1 = 0xffffffff;
    _in_stack_00000050 = ZEXT816(0);
    goto LAB_0638855c;
  case 4:
    _in_stack_00000010 = *(undefined1 (*) [16])(param_1 + 0x1e);
    *(undefined8 *)(param_1 + 0x1e) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *param_1 = 0xffffffff;
    _in_stack_00000050 = ZEXT816(0);
    goto LAB_06388504;
  default:
    FUN_06334e90(*(undefined8 *)(param_1 + 8),*(undefined8 *)PTR_DAT_07dad968,0);
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    iVar3 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
    if (iVar3 == 0) {
      if ((*(long *)(param_1 + 10) == 0) || (*(int *)(*(long *)(param_1 + 10) + 0x10) != 0)) {
        plVar5 = *(long **)(param_1 + 8);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar8 = (**(code **)(*plVar5 + 0x188))
                          (plVar5,*(undefined8 *)(param_1 + 0xc),*(undefined8 *)(*plVar5 + 400));
      }
      else {
        if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar8 = FUN_062d8e9c(*(long *)(param_1 + 8),*(undefined8 *)(param_1 + 0xc),0);
      }
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      _in_stack_00000050 = FUN_05407fb8(lVar8,0,*(undefined8 *)PTR_DAT_07d99618);
      uVar7 = FUN_058bcf4c(&stack0x00000050,*(undefined8 *)PTR_DAT_07d99610);
      if ((uVar7 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0xe) = _in_stack_00000050;
        thunk_FUN_037aeb94(param_1 + 0xe,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        FUN_03aeff50(param_1 + 2,&stack0x00000050,param_1,*(undefined8 *)PTR_DAT_07db6358);
        return;
      }
      goto LAB_0638849c;
    }
  }
  uVar6 = thunk_FUN_037787d0(*(undefined8 *)(param_1 + 8),*(undefined8 *)PTR_DAT_07db21d8);
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar4 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
  switch(uVar4) {
  case 1:
    lVar8 = FUN_06375ce4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10),
                         *(undefined8 *)(param_1 + 0xc));
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    _in_stack_00000040 = FUN_0540e1f4(lVar8,0,*(undefined8 *)PTR_DAT_07db63d8);
    uVar7 = FUN_058bd540(&stack0x00000040,*(undefined8 *)PTR_DAT_07db63b8);
    if ((uVar7 & 1) == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x12) = _in_stack_00000040;
      thunk_FUN_037aeb94(param_1 + 0x12,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_03af1a5c(param_1 + 2,&stack0x00000040,param_1,*(undefined8 *)PTR_DAT_07db6348);
      return;
    }
LAB_06388588:
    lVar8 = FUN_058bd58c(&stack0x00000040,*(undefined8 *)PTR_DAT_07db63a0);
    break;
  case 2:
    lVar8 = FUN_0636af20(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10),
                         *(undefined8 *)(param_1 + 0xc),0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    _in_stack_00000030 = FUN_0540e1f4(lVar8,0,*(undefined8 *)PTR_DAT_07db63e8);
    uVar7 = FUN_058bd540(&stack0x00000030,*(undefined8 *)PTR_DAT_07db63c0);
    if ((uVar7 & 1) == 0) {
      *param_1 = 2;
      *(undefined1 (*) [16])(param_1 + 0x16) = _in_stack_00000030;
      thunk_FUN_037aeb94(param_1 + 0x16,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_03af1a5c(param_1 + 2,&stack0x00000030,param_1,*(undefined8 *)PTR_DAT_07db6360);
      return;
    }
LAB_06388530:
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 06388528 with catch @ 06388530
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 06388438 with catch @ 06388534
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 06388524 with catch @ 06388538
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 063884bc with catch @ 0638853c
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 063884ac with catch @ 06388540
                        */
    lVar8 = FUN_058bd58c(&stack0x00000030,*(undefined8 *)PTR_DAT_07db6398);
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 06388514 with catch @ 06388544
                        */
    break;
  case 3:
    lVar8 = FUN_0636cb74(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10),
                         *(undefined8 *)(param_1 + 0xc));
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    _in_stack_00000020 = FUN_0540e1f4(lVar8,0,*(undefined8 *)PTR_DAT_07db63e0);
    uVar7 = FUN_058bd540(&stack0x00000020,*(undefined8 *)PTR_DAT_07db63c8);
    if ((uVar7 & 1) == 0) {
      *param_1 = 3;
      *(undefined1 (*) [16])(param_1 + 0x1a) = _in_stack_00000020;
      thunk_FUN_037aeb94(param_1 + 0x1a,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_03af1a5c(param_1 + 2,&stack0x00000020,param_1,*(undefined8 *)PTR_DAT_07db6368);
      return;
    }
LAB_0638855c:
                    /* try { // try from 06388564 to 06488567 has its CatchHandler @ 06388594 */
    lVar8 = FUN_058bd58c(&stack0x00000020,*(undefined8 *)PTR_DAT_07db63a8);
    break;
  case 4:
    lVar8 = FUN_0637a870(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10),
                         *(undefined8 *)(param_1 + 0xc));
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    _in_stack_00000010 = FUN_0540e1f4(lVar8,0,*(undefined8 *)PTR_DAT_07db63f0);
    uVar7 = FUN_058bd540(&stack0x00000010,*(undefined8 *)PTR_DAT_07db63d0);
    if ((uVar7 & 1) == 0) {
      *param_1 = 4;
      *(undefined1 (*) [16])(param_1 + 0x1e) = _in_stack_00000010;
      thunk_FUN_037aeb94(param_1 + 0x1e,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_03af1a5c(param_1 + 2,&stack0x00000010,param_1,*(undefined8 *)PTR_DAT_07db6350);
      return;
    }
LAB_06388504:
                    /* try { // try from 06388514 to 06488517 has its CatchHandler @ 06388544 */
    lVar8 = FUN_058bd58c(&stack0x00000010,*(undefined8 *)PTR_DAT_07db63b0);
                    /* try { // try from 06388518 to 06488523 has its CatchHandler @ 06388548 */
    break;
  case 5:
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
    uVar9 = 0;
    if (plVar5 != (long *)0x0) {
      uVar9 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    }
    lVar8 = FUN_0638a540(uVar9,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_0636eea8(lVar8,uVar6,*(undefined8 *)(param_1 + 10));
    break;
  default:
    uVar6 = *(undefined8 *)(param_1 + 8);
    lVar8 = thunk_FUN_037a15ac(PTR_DAT_07d88078);
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar9 = FUN_061d52c8(0);
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      uStack000000000000000c =
           (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
      uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db23b0);
      uVar10 = thunk_FUN_037784fc(uVar10,&stack0x0000000c);
      uVar11 = thunk_FUN_037a15ac(PTR_DAT_07db6250);
      uVar9 = FUN_063349e4(uVar11,uVar9,uVar10,0);
      uVar6 = FUN_062d9a10(uVar6,uVar9,0);
      uVar9 = thunk_FUN_037a15ac(PTR_DAT_07db63f8);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar6,uVar9);
    }
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  case 7:
  case 8:
  case 9:
  case 10:
  case 0x10:
  case 0x11:
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar9 = (**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
    lVar8 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d96678);
    FUN_0638c054(lVar8,uVar9,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_0636eea8(lVar8,uVar6,*(undefined8 *)(param_1 + 10));
    break;
  case 0xb:
    lVar8 = FUN_0638a308(0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_0636eea8(lVar8,uVar6,*(undefined8 *)(param_1 + 10));
    break;
  case 0xc:
    lVar8 = FUN_0638a438(0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_0636eea8(lVar8,uVar6,*(undefined8 *)(param_1 + 10));
  }
  *param_1 = 0xfffffffe;
  puVar2 = PTR_DAT_07db6370;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_04e0c214(param_1 + 2,lVar8,*(undefined8 *)puVar2);
  return;
}


